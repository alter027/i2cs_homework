# -*- coding: utf-8 -*-
"""
Created on Mon Jul  9 22:21:31 2018

@author: alter027
"""

import urllib.request

url = 'http://data.coa.gov.tw/Service/OpenData/TransService.aspx?UnitId=QcbUEzN6E6DL&FOTT=CSV'
with urllib.request.urlopen(url) as testfile, open('animal.csv', 'w', encoding = 'utf-8') as f:
    f.write(testfile.read().decode())