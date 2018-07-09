import numpy as np
import matplotlib.pyplot as plt
 
def LineChart(base,title):
    x = np.arange(0, 10, 0.1) #給定範圍為區間[0,10]，每間隔0.1算一次
    y = base**x 
    plt.title(title) #該圖標題
    plt.plot(x, y, linewidth=5.0) #畫線函數， linewidth: 指定線寬 

LineChart(3,'Exponential Function') #此處以3為底數作為範例