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

vector<vector<int>> product(const vector<vector<int>>& lists)
{
    vector<vector<int>> result;

    //如果input list 有一個為空，回傳空的vector<vector<int>>
    for(vector<int> list: lists)
    {
        if(list.empty())
        {
            return result;
        }
    }

    for (int e : lists[0])
    {
        result.push_back({ e });
    }

    //逐步添增Cartesian product的結果
    for (int i = 1; i < lists.size(); i++)
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
        { { 1, 2, 3 }, { }, { 500, 100 } }
    };
    for (const auto& p : prods)
    {
        print(product(p));
    }
    return 0;
}
