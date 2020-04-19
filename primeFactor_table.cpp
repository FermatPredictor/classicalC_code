#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//建立 2~65535 的質數表，幫助快速做int級別的質因數分解
vector<int> constructPrimeTable()
{
    vector<int> primes = { 2,3,5 };
    for (int i = 7; i <= 65535; i += 2) {
        bool isPrime = true;
        for (auto it = primes.cbegin(); it < primes.cend() && (*it) <= sqrt(i); it++) {
            if (i % (*it) == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

//函數功能: 輸出n的質因數分解形式，回傳vector(例: 輸入36: 回傳{2,2,3,3})
vector<int> factorPrime(vector<int>& primes, int n)
{
    vector<int> factors;
    for (auto it = primes.cbegin(); it < primes.cend() && (*it) <= sqrt(n); it++)
    {
        while(n%*it==0)
        {
            n/=*it;
            factors.push_back(*it);
        }
    }
    if(n>1)
        factors.push_back(n);
    return factors;
}

//函數功能: 將代表質因數分解結果的vector，依題目格式印出
//例: 輸入{2,2,3,3}，印出 2 x 2 x 3 x 3
void printFormat(const vector<int> &result)
{
    int factor=result[0];
    string prefix="";

    for(int i=1;i<result.size();i++)
    {
        cout << prefix << factor;
        factor = result[i];
        prefix = " x ";
    }
    cout << prefix << factor << endl;
}

int main()
{
    int num=0;
    vector<int> primes = constructPrimeTable();
    
    while(std::cin >> num){
        if(num==0){
            break;
        }
        std::cout << num << " = ";
        vector<int> result = factorPrime(primes, num);
        printFormat(result);
    }
    return 0;
}
