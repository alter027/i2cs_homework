import json
import charts

def count(rows,title): # practice 3
    dic = {}
    for i in range(len(rows)):
        try:
            if rows[i][title] in dic:
                dic[rows[i][title]] += 1
            else:
                dic[rows[i][title]] = 1
        except:
            pass
    return list(dic.keys()),list(dic.values())
    
def double_count(rows,t1,t2): # practice 4
    dic1 = {}
    dic2 = {}
    cnt1, cnt2 = 0, 0 # 分別數 t1&t2 的種類
    ans = [[0 for x in range(100)] for y in range(100)]
    for i in range(len(rows)):
        try:
            if rows[i][t1] not in dic1:
                dic1[rows[i][t1]] = cnt1
                cnt1 += 1
            
            if rows[i][t2] not in dic2:
                dic2[rows[i][t2]] = cnt2
                cnt2 += 1
            
            ans[dic1[rows[i][t1]]][dic2[rows[i][t2]]] += 1
        except:
            pass
    dic = [[0 for x in range(cnt2)] for y in range(cnt1)]
    
    for i in range(cnt1):
        for j in range(cnt2):
            dic[i][j] = ans[i][j]
    return list(dic2.keys()),list(dic1.keys()),dic    

def dict2list(dic:dict):
    # convert dict to list
    keys = dic.keys()
    vals = dic.values()
    lst = [(key, val) for key, val in zip(keys, vals)]
    return lst

def main():
    # load file
    with open('animal.json', 'r', encoding='utf-8') as jsonFile:
        rows = json.load(jsonFile) # type of rows is "list"
    
    # pie chart - animal_bodytype
    key, value = count(rows,'animal_bodytype')
    charts.pie(key,value,title='animal_bodytype')
   
    # radar chart - animal_bodytype
    key, value = count(rows,'animal_bodytype')
    charts.radar(key,value,title='animal_bodytype')
    
    # bar chart - animal_sex 
    key, value = count(rows, 'animal_sex')
    charts.bar(key,value,title='animal_sex')
    
    # stack bar - animal_sterilization(結紮) & animal_kind
    k1, k2, mat = double_count(rows,'animal_kind','animal_sterilization')
    charts.stack_bar(k1,k2,*mat)
    # parallel bar - animal_sertilization(結紮) & animal_kind    
    charts.parallel_bar(k1,k2,*mat)
    
    # line chart - animal_update
    key, value = count(rows, 'animal_update')
    dic = {}

    # 簡化日期，改成以"月份"為單位
    for i in range(len(key)):
        if key[i][:7] in dic:
            dic[key[i][:7]] += value[i]
        else:
            dic[key[i][:7]] = value[i]
    del dic[''] #刪除無日期的
    
    # 按日期排序
    lst = sorted(dict2list(dic), key=lambda x:x[0], reverse=False) # 按照第0个元素降序排列     
    dic2 = {}
    for i in range (len(lst)):
        dic2[lst[i][0]] = lst[i][1]
    new_key = list(dic2.keys())
    new_value = list(dic2.values())    
    item = [i for i in zip(new_value)] # zip() 是 Python 的一個內建函數，它接受一系列可迭代的對象作為參數，將對象中對應的元素打包成一個個 tuple，然後返回由這些 tuples 組成的 list
    charts.line(new_key,['Time'],item)
    
if __name__ == "__main__":
    main()
