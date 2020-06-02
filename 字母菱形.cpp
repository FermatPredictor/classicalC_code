#include <iostream>
#include <string>
using namespace std;

/*
程式用途:印出字母菱形
input:一個整數num(1<=num<=26);
例如num =6,
output:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA
 ABCDEDCBA
  ABCDCBA
   ABCBA
    ABA
     A
*/

void PrintRowLetter(int n)/*先印出單一一行字母的函數*/
{
    for(int i=0; i<n*2-1; i++)
    {
        printf("%c",'A'+n-1-abs(n-1-i));
    }
    cout << endl;

}

int main(void)
{
    int num;
    scanf("%d",&num);
    for(int i=1; i<num*2; i++)
    {
        cout << string(abs(i-num), ' ');
        PrintRowLetter(num - abs(num-i));
    }
}


