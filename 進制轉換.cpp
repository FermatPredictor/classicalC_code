#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

/*
函數功能: 輸入一個字串表示數字，由in_base轉為out_base，
可支援2~36進制互轉
例如: trans("101", 2, 4)表示將二進位101轉為四進位11
假設輸入不會有不合理的測資，且一定是正整數
*/
string trans(string num, int in_base, int out_base)
{
    //第一步: 先把輸入字串轉為成十進制
    int value = 0;
    int i = 0;
    for (auto it = num.crbegin(); it < num.crend(); it++, i++) {
        char c = *it;
        value += (c>='0' && c<='9'? (int)(c-'0'):(int)(c-'A'+10)) * pow(in_base, i);
    }
    
    //第二步: 再把輸入字串轉為指定進制
    string result;
    while(value)
    {
        int res = value%out_base;
        result += res>=0 && res<=9? '0'+res : 'A'-10+res;
        value/=out_base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int in_base, out_base;
    string s;
    while(std::cin >>s >> in_base>> out_base){
        std::cout << trans(s,in_base,out_base) << std::endl;
    }
    return 0;
}
