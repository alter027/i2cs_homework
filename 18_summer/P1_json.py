import requests, json

url = 'http://data.coa.gov.tw/Service/OpenData/TransService.aspx?UnitId=QcbUEzN6E6DL'

r = requests.get(url)    
response = r.json()

#可用type()來看變數的資料型態
#print(type(r))
#print(type(response)) 

js = json.dumps(response, indent=4, separators=(',', ':'), ensure_ascii=False)
#dumps是將dict轉化成str型態
#indent: 縮排
#separators: 分隔用

with open('animal.json', mode='w', encoding='utf-8') as jsonFile: #w: write
    jsonFile.write(js)
