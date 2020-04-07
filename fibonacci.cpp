#include <iostream>
#include <vector>
using namespace std;

//函數功能: 回傳第n個費式數
long long fibs(int n) {
    vector<long long> F={1,1};  
    for(int i=2;i<n;i++){ 
        F.push_back(F[i-1]+F[i-2]);
    }
    return F[n-1];
}

int main()
{
    std::cout << fibs(20) << std::endl; //6765
    std::cout << fibs(50) << std::endl; //12586269025
}
