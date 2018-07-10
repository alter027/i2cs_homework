import json
def count(rows,title):
    dic = {}
    for i in range(len(rows)):
        if rows[i][title] in dic:
            dic[rows[i][title]] += 1
        else:
            dic[rows[i][title]] = 1
    return list(dic.keys()),list(dic.values())
    
def main():
    # dic = {}
    with open('animal.json', 'r', encoding='utf-8') as jsonFile:
        rows = json.load(jsonFile) # type of rows is "list"
    
    key, value = count(rows,'animal_sex')
    print(key)
    print(value)
    
if __name__ == "__main__":
    main()