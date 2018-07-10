import charts
import csv

def Count(rows,title):
    num = rows[0].index(title)
    tri = {}
    for row in rows:
        try:
            if (row[num] == '') or (row[num] == title):
                pass
            else:
                tri[row[num]] = tri.get(row[num],0) + 1
        except:
            pass
    return list(tri.keys()),list(tri.values())

def DoubleCount(rows,t1,t2):
    n1 ,n2 = rows[0].index(t1), rows[0].index(t2)
    tmp ,mic = 0, 0
    tri, dic = {}, {}
    ans = [[0 for x in range(5)] for y in range(30)]
    for row in rows:
        try:
            if (row[n1] == '') or (row[n1] == t1):
                pass
            elif row[n1] not in tri: 
                tri[row[n1]] = tmp
                tmp += 1
            if (row[n2] == '') or (row[n2] == t2):
                pass
            elif row[n2] not in dic: 
                dic[row[n2]] = mic
                mic += 1
            ans[tri[row[n1]]][dic[row[n2]]] += 1
        except:
            pass
    # print(len(tri.keys()),len(dic.keys()),tmp,mic)
    tnc = [[0 for x in range(mic)] for y in range(tmp)]
    # print(len(tri.keys()),len(dic.keys()),tmp,mic,len(tnc),len(tnc[0]))
    for i in range(tmp):
        for j in range(mic):
            tnc[i][j] = ans[i][j]

    return list(dic.keys()),list(tri.keys()),tnc

def main():
    with open('animal.csv', newline='',encoding='UTF-8') as csvfile:
        myfile = csv.reader(csvfile)
        rows = list(myfile)
        # draw Histogram for colour
        key, value = Count(rows,'animal_colour')
        charts.bar(key,value,title='animal_colour')
        # draw pie for sex
        Key, Value = Count(rows,'animal_sex')
        charts.pie(Key,Value,title='animal_sex')
        # draw stack Hist for type & colour
        k1, k2, mat = DoubleCount(rows,'animal_colour','animal_kind')
        charts.stack_bar(k1,k2,*mat)
        # Radar for type
        Key, Value = Count(rows,'animal_bodytype')
        charts.radar(Key,Value,title='animal_bodytype')
if __name__ == "__main__":
    main()