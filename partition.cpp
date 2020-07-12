/*
程式功能: 給定一個正整數，把它所有的可能總和分解列出來
例: N=3。
3=1+1+1=1+2=3
Output:
1 1 1
1 2
3
*/

#include <iostream>
using namespace std;
#define MAXLEN 100

int solution[MAXLEN]; // 用來存放一組可能的答案

/**將陣列的前n個字印出來*/
void Print(int n, int element[])
{
    for(int i=0; i<n; i++)
        cout<< element[i] <<" ";
    cout<<endl;
}

/**
n: 目前已固定的index數量(初始值設0)
N: 目前剩餘數字(正整數)
m: 接下來只能使用大於等於m的數字
**/
void partition(int n, int N, int m){

    if(N<=0)
        Print(n,solution);
    for(int i=m;i<=N;i++){
        solution[n]=i;
        partition(n+1, N-i,i);
    }
}

int main()
{
    int N=8;
    partition(0,N,1);
    return 0;
}
