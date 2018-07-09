#合併兩份資料(bitcoin_historical_data.json 和 bitcoin_circulation.json)
import json, time

#loads是將str轉化成dict型態
# dict1 = json.loads(open('bitcoin_circulation.json').read())
# dict2 = json.loads(open('bitcoin_historical_data.json').read())
with open('bitcoin_circulation.json') as f1:
    dict1 = json.load(f1)

with open('bitcoin_historical_data.json') as f2:
    dict2 = json.load(f2)

#取得指定字典元素
dict1_elem = dict1['values']
dict2_elem = dict2['Data']

with open('bitcoin_data.json', 'w') as jsonFile:
    #1095: 3年共1095天
    #把資料寫為一個對象
    jsonFile.write('{"BitcoinData":[')
    for i in range(1095):
        data = {} #initialization of the dictionary
        
        #轉換時間戳為時間數組
        timeStamp = dict2_elem[i]['time']
        timeArray = time.localtime(timeStamp)
        data['time'] = time.strftime("%m/%d/%Y", timeArray)
        
        data['close'] = dict2_elem[i]['close']
        data['high'] = dict2_elem[i]['high']
        data['low'] = dict2_elem[i]['low']
        data['open'] = dict2_elem[i]['open']
        data['volumefrom'] = dict2_elem[i]['volumefrom']
        data['volumeto'] = dict2_elem[i]['volumeto']
        data['circulation'] = dict1_elem[i]['y']
        json.dump(data,jsonFile) #將dict轉成str，而後存入指定檔案中
        if i < 1094:
            jsonFile.write(',')
        jsonFile.write('\n')
    jsonFile.write("]}")
