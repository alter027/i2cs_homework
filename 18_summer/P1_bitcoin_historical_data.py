#   data: including time, close, high, low, open, volumefrom, volumeto
#   timespan: 3 years

import requests, json

#   要的資訊在網址中
#   histoday: 以"日"為單位的歷史數據
#   fsym=USD&tsym=BTC: 從BTC轉換成USD
#   limit=30: 一次出現30筆資料
#   aggregate=3: 每筆資料的間隔為3天
#  (若是histohour就是3小時，histominute就是3分鐘)
#  e=CCCAGG: 從CCCAGG(CryptoCompare Current Aggregate)獲得資訊

url = 'https://min-api.cryptocompare.com/data/histoday?fsym=BTC&tsym=USD&limit=1095&aggregate=1&e=CCCAGG'
r = requests.get(url)
response = r.json()
js = json.dumps(response, indent=4, separators=(',', ':')) #dumps是將dict轉化成str型態
with open('bitcoin_historical_data.json', mode='w') as jsonFile: #w: write
    jsonFile.write(js)
