#include <iostream>
#include <vector>
using namespace std;

/* 函數功能: A, B是兩個陣列，都是1~n 的一種排列，
求A的元素對應到B的相同元素的哪一個index，要求O(n)時間建表
例: 
vector<int> A = {2,5,3,1,4};
vector<int> B = {3,1,4,5,2};
output: 14023

因為A的1出現在B的index1的位置，
因為A的2出現在B的index4的位置，…
以此類推
*/
vector<int> transAtoB(const vector<int> &A, const vector<int> &B)
{
    //建B的反對應表，記錄數字的index
    vector<int> inverse_B(B.size());
    for (int i = 0; i < B.size(); i++) {
        inverse_B[B[i]-1]=i;
    }
    
    vector<int> tableAtoB(A.size());
    for (int i = 0; i < A.size(); i++) {
        tableAtoB[A[i]-1]= inverse_B[A[i]-1];
    }
    return tableAtoB;
}

int main()
{
    vector<int> A = {2,5,3,1,4};
    vector<int> B = {3,1,4,5,2};
    vector<int> table = transAtoB(A, B);
    for (auto e : table) {
        std::cout << e ;
    }
    cout<< endl;
    return 0;
}
