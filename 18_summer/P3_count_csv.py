#!/usr/bin/python3
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

def main():
    with open('animal.csv', newline='',encoding='UTF-8') as csvfile:
        myfile = csv.reader(csvfile)
        rows = list(myfile)
        key, value = Count(rows,'animal_sex')
        print(key)
        print(value)

if __name__ == "__main__":
    main()