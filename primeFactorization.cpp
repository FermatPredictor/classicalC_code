#include <iostream>
#include <vector>
using namespace std;

//函數功能: 輸出n的質因數分解形式，回傳vector(例: 輸入36: 回傳{2,2,3,3})
vector<int> factorPrime(int n)
{
    vector<int> factors;
    for(int i=2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            n/=i;
            factors.push_back(i);
        }
    }
    if(n>1)
        factors.push_back(n);
    return factors;
}

//函數功能: 將代表質因數分解結果的vector，依題目格式印出
//例: 輸入{2,2,3,3}，印出 2^2 * 3^2
void printFormat(const vector<int> &result)
{
    int factor=result[0];
    int factorCount=1;
    string prefix="";

    for(int i=1;i<result.size();i++)
    {
        if(result[i]== factor){
            factorCount+=1;
        }
        else{
            cout << prefix << factor;
            if(factorCount!=1)
                cout << "^" << factorCount;
            factor = result[i];
            factorCount = 1;
            prefix = " * ";
        }
    }
    cout << prefix << factor;
    if(factorCount!=1)
        cout << "^" << factorCount;
    cout << endl;
}

int main()
{
    int num=0;
    while(cin >> num)
    {
        vector<int> result=factorPrime(num);
        printFormat(result);
    }
    return 0;
}
