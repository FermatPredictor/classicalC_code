#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
/*引理：對於任意整數 N，若是從 [1,sqrt(N)] 的所有質數皆不整除 N，則 N 必為質數
作法： 建立 2~65535 的質數表，輸入 N 之後拿 [1,sqrt(N)] 的質數試除
本程式可較快的判斷2~2147483647之間的質數
*/

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

bool isPrime(vector<int>& primes, int test_num) {
    for (auto it = primes.cbegin(); it < primes.cend() && (*it) <= sqrt(test_num); it++) {
        if (test_num % (*it) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> primes = constructPrimeTable();
    int value;
    while (std::cin >> value) {
        cout << (isPrime(primes, value) ? "質數" : "非質數") << endl;
    }
    return 0;
}
