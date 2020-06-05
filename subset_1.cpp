#include <iostream>
#include <vector>
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

vector<int> i_subset(const vector<int>& nums, int nth){
    vector<int> res;
    for(int i=0; i<nums.size(); i++)
    {
        /**從右邊數來第i位數若為1，表示取第i個元素*/
        if(nth&1)
        {
            res.push_back(nums[i]);
        }
        nth >>=1;
    }
    return res;
    
}

/* 
  函數功能: 假設nums的元素全相異，
  求nums的power set.
*/
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> res;
    for(int i=0 ; i< 1<<nums.size();i++){
        res.push_back(i_subset(nums, i));
    }
    return res;
}

int main()
{
    vector<int> arrs[]=
    {
        { 1, 2, 3 },
        { 3, 4, 5 }, 
        { },
        { 2 , 6},
        { 0 , 10, 20, 30, 40}
    };
    for (const auto& p : arrs)
    {
        print(subsets(p));
    }
    return 0;
}
