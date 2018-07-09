#!/usr/bin/python3
#coding:utf-8
import matplotlib.pyplot as plt

def DrawPie(value,labels,title):
    plt.pie(x = value, # 繪圖數據
        labels=labels, # 添加教育水平標籤
        autopct='%.1f%%', # 設置百分比的格式，這裏保留一位小數
        pctdistance=0.8,  # 設置百分比標籤與圓心的距離
        textprops = {'fontsize':12, 'color':'k'} # 設置文本標籤的屬性值
        )
    # 刪除x軸和y軸的刻度
    plt.xticks(())
    plt.yticks(())
    plt.title(title) # 寫上圖形標題
    plt.show()

def main():
    value = [i for i in range(1,20,3)]
    key = [str(i) for i in range(1,20,3)]
    DrawPie(value,key,'Equal difference series')
    
if __name__ == "__main__":
    main()