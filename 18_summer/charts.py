import numpy as np
import matplotlib.pyplot as plt

def test_key_val(key,val):
    if len(key) is not len(val):
        print('Some Error in your input data!')
        return 0
    
def test_datas(key, val, datas):
    if len(key) is not len(datas[0]):
        print('Some Error in your input data!')
        return 0
    if len(val) is not len(datas):
        print('Some Error in your input data!')
        return 0
    tmp = len(datas[0])
    for i in datas:
        if len(i) is not tmp:
            print('Some Error in your input data!')
            return 0
    return 1

def others(plt,title,filename,figsize=[8,6],dpi=70):
    plt.rcParams['font.sans-serif']=['DFKai-SB']
    if title:
        plt.title(title)
    if filename:
        plt.savefig(filename)

def bar(keys,values,title='',filename='',figsize=[8,6],dpi=70):
    test_key_val(keys,values)

    plt.figure(figsize=figsize, dpi=dpi)
    plt.bar(keys, values)  # tick_label = Key
    others(plt,title,filename,figsize,dpi)
    plt.show()
    
def stack_bar(keys,labels,*datas,title='',filename='',figsize=[8,6],dpi=70):
    if not test_datas(keys,labels,datas): return 
    plt.figure(figsize=figsize, dpi=dpi)
    plt.subplot() # 創建小圖(分層圖)
    index = np.arange(len(keys)) # 形成等差數列
    for i in range(len(labels)):
        # 每次疊上 data[:i]
        plt.bar(index,datas[i],width=0.7,bottom=np.sum(datas[:i],axis=0),tick_label=keys)
    plt.legend(labels)
    others(plt,title,filename,figsize,dpi)
    plt.show()
     
def parallel_bar(keys,labels,*datas,title='',filename='',figsize=[8,6],dpi=70):
    if not test_datas(keys,labels,datas): return 
    plt.figure(figsize=figsize, dpi=dpi)
    x = [i for i in range(len(keys))]
    n = len(labels) #種類個數
    total_width= 0.8 #所有長條的寬度和
    width = total_width/n  #各個長條的寬度

    for i in range(n): #每次畫一種類的長條圖
        plt.bar(x,datas[i],width=width,label=labels[i],tick_label=keys)
        x[:len(x)] = [ width+x[j] for j in range(len(x))]
     
    plt.legend()  # 顯示圖例
    others(plt,title,filename,figsize,dpi)
    plt.show() # 顯示圖像 
    
def radar(keys,values,title='',filename='',figsize=[8,6],dpi=70):
    test_key_val(keys,values)
    cnt = sum(values)/len(values)
    for i in range(len(values)):
        values[i] /= (cnt/2.5)
    labels = np.array(keys)
    datas = np.array(values)
    angles = np.linspace(0, 2*np.pi, len(keys), endpoint=False)
    datas = np.concatenate((datas, [datas[0]])) # 閉合圓形
    angles = np.concatenate((angles, [angles[0]])) # 閉合圓形

    fig = plt.figure(figsize=figsize, dpi=dpi)
    ax = fig.add_subplot(111, polar=True) # 轉換極座標
    ax.plot(angles, datas, 'bo-', linewidth=2) # 畫線
    ax.set_thetagrids(angles * 180/np.pi, labels)
    ax.set_title(title)
    ax.set_rlim(0,5) # 標出距離圓心
    others(plt,title,filename,figsize,dpi)
    plt.show()
    
def pie(keys,values,title='',filename='',figsize=[8,6],dpi=70):
    test_key_val(keys,values)
    plt.figure(figsize=figsize, dpi=dpi)
    plt.pie(x = values, # 繪圖數據
            labels=keys,
            autopct='%.1f%%', # 設置百分比的格式，這裏保留一位小數
            pctdistance=0.8,  # 設置百分比標籤與圓心的距離
            textprops = {'fontsize':12, 'color':'k'} # 設置文本標籤的屬性值
            )
    others(plt,title,filename,figsize,dpi)
    plt.rcParams['font.sans-serif']=['DFKai-SB']
    plt.show()
    
def line(keys,labels,*datas,title='',filename='',figsize=[8,6],dpi=70):
    if not test_datas(keys,labels,datas): return 
    plt.figure(figsize=figsize, dpi=dpi)
    plt.subplot() # 創建小圖(分層圖)
    index = np.arange(len(keys)) # 形成等差數列
    for i in datas:
        x = [p for p in keys]
        y = [p for p in i]
        plt.plot(x,y,'-o')
    plt.legend(labels)
    others(plt,title,filename,figsize,dpi)
    plt.show()
