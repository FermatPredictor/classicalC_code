#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void print(const vector<vector<int>>& v)
{
    cout << "{ ";
    for (const auto& p : v)
    {
        cout << "(";
        for (const auto& e : p)
        {
            cout << e << " ";
        }
        cout << ") ";
    }
    cout << "}" << endl;
}


/* 
  函數功能: nums的元素可能重複，
  求nums的power set.

  思路: 既然元素可能重複，先把每個元素出現幾次算出來，
  例如1出現1次，2出現2次……
  再用類似Cartesian_product的方式窮舉
*/
vector<vector<int>> subsetsWithDup(const vector<int>& nums) {
    vector<vector<int>> res = {vector<int>()};
    unordered_map<int,int> counts; //counts[e], 記錄元素e有幾個
    for(int num:nums){
        counts[num]++;
    }
    for (auto it = counts.begin(); it != counts.end(); it++) {
        vector<vector<int>> temp;
        for (vector<int>& e : res)
        {
            for (int i = 0 ; i<=it->second; i++)
            {
                vector<int> e_tmp = e;
                e_tmp.insert(e_tmp.end(),i,it->first);
                temp.push_back(e_tmp);
            }
        }
        res = temp;
    }
    return res;
}

int main()
{
    vector<int> arrs[]=
    {
        { 1, 2, 2 },
        { 3, 3, 3 }, 
        { },
        { 2 , 6},
        { 0 , 10, 20, 30, 40}
    };
    for (const auto& p : arrs)
    {
        print(subsetsWithDup(p));
    }
    return 0;
}
