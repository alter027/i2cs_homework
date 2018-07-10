# -*- coding: utf-8 -*-
"""
Created on Tue Jul 10 16:11:00 2018

@author: alter027
"""
import numpy as np
import matplotlib.pyplot as plt

def stack_bar(xlabels=[],ylabels=[],*data,title='',filename='',figsize=(8,6), dpi=70):
    tmp = len(data[0])
    for i in data:
        if len(i) is not tmp:
            print('Some Error in your input data!')
            return
    plt.figure() # 定義一個圖像窗口
    plt.subplot() # 創建小圖(分層圖)
    index = np.arange(len(xlabels)) # 形成等差數列
    for i in range(len(ylabels)):
        # 每次疊上 data[:i] 的和
        plt.bar(index,data[i],width=0.7,bottom=np.sum(data[:i],axis=0),tick_label=xlabels)
    plt.legend(ylabels)
    if title:
        plt.title(title)
    if filename:
        plt.savefig(filename)
    plt.show()
    
def ParallelHistogram (name_lst,Label,data):
    x = list(range(len(name_lst)))
    n = len(Label) #種類個數
    total_width= 0.8 #所有長條的寬度和
    Width = total_width / n  #各個長條的寬度

    
    for i in range(n): #每次畫一種類的長條圖
        tmp_lst = data[i*len(x):(i+1)*len(x)]
            
        plt.bar(x, tmp_lst, width=Width, label=Label[i], tick_label = name_lst)
        # width: 該資料長條的寬度
        # label: 該種類標籤名字
        # tick_label: bar的標籤， 這個例子就是 Sun Mon Tue Wed Thu Fri Sat
        # fc(facecolor): 顏色
        for j in range(len(x)):  
            x[j] = x[j] + Width
     
    plt.legend()  # 顯示圖例
    plt.show() # 顯示圖像 