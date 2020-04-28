#include <iostream>
#include <vector>
#include <map>
using namespace std;

/* 函數功能: A, B是兩個陣列，彼此為重新排列，
求A的元素對應到B的相同元素的哪一個index，要求O(n)時間建表
例: 
vector<int> A = {3,9,20,15,7};
vector<int> B = {9,3,15,20,7};
output: 10324
因為A的第0個元素3出現在B的index1的位置，
因為A的第1個元素9出現在B的index3的位置，…
以此類推
*/
vector<int> transAtoB(const vector<int> &A, const vector<int> &B)
{
    //建B的反對應表，記錄數字的index
    //例如 B = {9,3,15,20,7};
    //則map[9]=0, map[3]=1, ...
    map<int, int> inverse_B;
    for (int i = 0; i < B.size(); i++) {
        inverse_B[B[i]]=i;
    }
    
    vector<int> tableAtoB(A.size());
    for (int i = 0; i < A.size(); i++) {
        tableAtoB[i]= inverse_B[A[i]];
    }
    return tableAtoB;
}

int main()
{
    vector<int> A = {3,9,20,15,7};
    vector<int> B = {9,3,15,20,7};
    vector<int> table = transAtoB(A, B);
    for (auto e : table) {
        std::cout << e ;
    }
    cout<< endl;
    return 0;
}
