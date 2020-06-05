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

// 函數功能: 求Cartesian_product
// 一般情形下，我們可以假設input list不會有空的
vector<vector<int>> product(const vector<vector<int>>& lists)
{
    vector<vector<int>> result = {{}};

    //逐步添增Cartesian product的結果
    for (int i = 0; i < lists.size(); i++)
    {
        vector<vector<int>> temp;
        for (vector<int>& e : result)
        {
            for (int f : lists[i])
            {
                vector<int> e_tmp = e;
                e_tmp.push_back(f);
                temp.push_back(e_tmp);
            }
        }
        result = temp;
    }
    return result;
}

int main()
{
    vector<vector<int>> prods[]=
    {
        { { 1, 2 }, { 3, 4 } },
        { { 3, 4 }, { 1, 2} },
        { { 1, 2 }, { } },
        { { }, { 1, 2 } },
        { { 1776, 1789 }, { 7, 12 }, { 4, 14, 23 }, { 0, 1 } },
        { { 1, 2, 3 }, { 30 }, { 500, 100 } },
        { { 1, 2, 3 }, { }, { 500, 100 } },
        { }
    };
    for (const auto& p : prods)
    {
        print(product(p));
    }
    return 0;
}
