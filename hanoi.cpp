#include <iostream>
using namespace std;

/*函數功能: 解河內塔問題，將把A柱的石盤搬至C柱，
求第nth的移動為將哪一個石盤從幾號搬至幾號。
因為要用static變數記錄遞迴行動了幾次，
用firstCall重置static變數為0
*/
void Hanoi(bool firstCall, int n, char a, char b, char c, long long nth)
{
    static long long num = 0;
    if(num > nth){
        return;
    }

    if(firstCall){
        num = 0;
        firstCall = false;
    }
    if(n==1){
        num++;
        if(num==nth){
            cout<< "move " << n << " from " << a << " to "<< c <<endl;
            return;
        }
    } 
    else
    {
        long long moves = ((long long)1<<(n-1))-1; //搬n-1個石盤所需次數
        if(num + moves < nth){
            num += moves;
        }
        else{
            Hanoi(firstCall, n-1,a,c,b,nth);
        }
        
        num++;
        if(num==nth){
            cout<< "move "  << n <<" from " << a << " to "<<c<<endl;
            return;
        }

        if(num + moves < nth){
            num += moves;
        }
        else{
            Hanoi(firstCall, n-1,b,a,c, nth);
        }        
    }
}

int main()
{
    int n;
    long long nth;
    while(cin >> n >> nth)
    {
        Hanoi(true, n,'1','2','3', nth);
    }
    return 0;
}
