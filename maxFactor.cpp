#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//建立 2~65535 的質數表
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

//函數功能: 輸出n的最大質因數
int maxFactor(vector<int>& primes, int n)
{
    int maxFactor = 1;
    for (auto it = primes.cbegin(); it < primes.cend() && (*it) <= sqrt(n); it++) {
        while(n % (*it) == 0) {
            n/= *it;
            maxFactor = *it;
        }
    }
    return maxFactor<n? n: maxFactor;
}

int main()
{
    vector<int> primes = constructPrimeTable();
    int value;
    while(std::cin >> value){
        std::cout << value << "的最大質因數為: " << maxFactor(primes, value) << std::endl;
    }
    return 0;
}
