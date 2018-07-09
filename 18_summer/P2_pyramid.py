#!/usr/bin/python3
#coding:utf-8

def layer(blank, star):
    print(' '*blank,'* '*star)

def main():
    n = int(input())
    for i in range(1,n+1):
        layer(n-i,i)
    
if __name__ == "__main__":
    main()
