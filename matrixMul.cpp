#include <vector>
#include <iostream>
using namespace std;

/*程式功能:用來做矩陣乘法*/
template <typename T>
vector<vector<T>> matrixMul(vector<vector<T>> &A, vector<vector<T>> &B){

    int a_r = A.size(), a_c = A[0].size();
    int b_r = B.size(), b_c = B[0].size();
    // 理論上a_c==b_r才能相乘
    if(a_c!=b_r){
        return vector<vector<T>>();
    }

    vector<vector<T>> C(a_r, vector<T>(b_c));
    for(int i=0; i<a_r; i++)
        for(int j=0; j<b_c; j++)
        {
            for(int k=0; k<a_c; k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    return C;

}


int main(void)
{
    int a_r,a_c,b_r,b_c;
    while(cin>> a_r >> a_c >> b_r >> b_c){
        if(a_c!=b_r){
            cout<< "Error" << endl;
            continue;
        }
        vector<vector<long long>> A(a_r, vector<long long>(a_c));
        vector<vector<long long>> B(b_r, vector<long long>(b_c));
        for(int i=0; i<a_r; i++){
            for(int j=0; j<a_c; j++)
            {
                cin >> A[i][j];
            }
        }
        for(int i=0; i<b_r; i++){
            for(int j=0; j<b_c; j++)
            {
                cin >> B[i][j];
            }
        }
        vector<vector<long long>> C = matrixMul(A, B);

        for(int i=0; i<a_r; i++){
            for(int j=0; j<b_c; j++)
            {
                cout<<C[i][j]<< " ";
            }
            cout<<endl;
        }
    }

}
