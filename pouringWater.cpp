#include <iostream>
#include <vector>
using namespace std;

//函數功能: 地圖由字元0和1組成，往座標(pr,pc)處(座標以先row再col表示)倒水，
//把相鄰的1都變成W
void flooding(vector<vector<char>>& Map, int pr, int pc)
{
    static int R = Map.size();
    static int C = Map[0].size();
    
    Map[pr][pc] = 'W';
    if(pr+1<R && Map[pr+1][pc]=='1')
        flooding(Map,pr+1,pc);
    if(pr-1>=0 && Map[pr-1][pc]=='1')
        flooding(Map,pr-1,pc);
    if(pc+1<C && Map[pr][pc+1]=='1')
        flooding(Map,pr,pc+1);
    if(pc-1>=0 && Map[pr][pc-1]=='1')
        flooding(Map,pr,pc-1);
}

int main()
{
    vector<vector<char>> Map = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '1'},
    };
    
    flooding(Map, 0, 0);
    for (int i = 0; i < Map.size(); i++) {
        for (int j = 0; j < Map[0].size(); j++){
            std::cout <<  Map[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
