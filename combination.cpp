#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combine_DFS(vector<int> &nums, int k, int idx, vector<int>& out) {
    if (out.size() == k){
        for(int i=0; i<k; i++){
            cout << out[i]<<" ";
        }
        cout << endl;
        return;
    }  
    for (int i = idx; i < nums.size(); ++i) {
        out.push_back(nums[i]); //讓每個數都有機會放進去
        combine_DFS(nums, k, i + 1, out);
        out.pop_back();
    }
}

int main()
{
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        int m;
        cin >> m;
        vector<int> out;
        combine_DFS(nums, m, 0, out);
    }
    return 0;
}
