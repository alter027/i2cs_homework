# -*- coding: utf-8 -*-
"""
Created on Mon Jul  9 22:11:03 2018

@author: alter027
"""
import matplotlib.pyplot as plt

def DrawBar(Value, Key, title):
    plt.bar(Key, Value) 
    plt.title(title)
    plt.show()
    
def main():
    value = [i for i in range(1,20,3)]
    key = [str(i) for i in range(1,20,3)]
    DrawBar(value,key,'Equal difference series')
    
if __name__ == "__main__":
    main()

