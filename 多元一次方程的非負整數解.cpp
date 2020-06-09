#include <iostream>
#include <vector>
using namespace std;

#define MAXNV 5
int numbers[MAXNV];

void showResult(int n)
{
    printf("(%d", numbers[0]);
    for (int i = 1; i < n ; i++)
    {
        printf(",%d", numbers[i]);
    }
    printf(")\n");
}

/* 
   函數功能:
   用DFS將多元一次方程的非負整數解印出，
   coeff是係數，amount是目前=的值，
   cur 是目前遞迴的位置(初始0)
   譬如說coeff={1,5,10}, 
   amount = 17，
   就會印出x+5y+10z = 17 的所有非負整數解
*/
void filling(vector<int> &coeff, int amount, int cur)
{
    if(amount==0){
        showResult(coeff.size());
        return;
    }
    if(cur<coeff.size() && amount>0){
        filling(coeff, amount,cur+1);
        numbers[cur]++;
        filling(coeff, amount-coeff[cur],cur);
        numbers[cur]--; 
    }
}

int main(void)
{
    int n, amount;
    cin >> n;
    vector<int> coeff(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> coeff[i];
    }
    cin >> amount;
    filling(coeff, amount, 0);
    return 0;

}
