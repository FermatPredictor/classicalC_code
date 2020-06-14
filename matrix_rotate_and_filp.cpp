#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
#define MAX_SIZE 11 //定義矩陣最大的大小
 
class Matrix{
private:
    int R, C; //矩陣大小 
    int a[MAX_SIZE][MAX_SIZE]={0};//矩陣目前內容
    int b[MAX_SIZE][MAX_SIZE]={0};//矩陣暫存內容

    void matrix_copy(int dest[MAX_SIZE][MAX_SIZE], int src[MAX_SIZE][MAX_SIZE]){
        for (int i=0; i<R; i++){
            for (int j=0; j<C; j++){
                dest[i][j] = src[i][j];
            }
        }
    }
    
public:
    Matrix(int R, int C, int m[MAX_SIZE][MAX_SIZE]):R(R), C(C){
        for (int i=0; i<R; i++){
            for (int j=0; j<C; j++){
                a[i][j] = m[i][j];
            }
        }
    };

    void flip_up_down(){
        matrix_copy(b, a);
        for (int i=0; i<R; i++){
            for (int j=0; j<C; j++){
                a[i][j] = b[R-1-i][j];
            }
        }
    }
    
    void rotatecounter90(){
        matrix_copy(b, a);
        for (int j = C-1; j>=0; j--){
            for (int i = 0; i<R; i++){
                a[C-1-j][i] = b[i][j];
            }
        }
        swap(R, C);
    }

    void show(){
        cout << R << ' ' << C << '\n';
        for (int i=0; i<R; i++){
            cout << a[i][0];
            for (int j=1; j<C; j++){
                cout << ' ' << a[i][j];
            }
            cout << '\n';
        }
    }

};

 
int main() {
    int R, C, M;
    int temp_mat[MAX_SIZE][MAX_SIZE];
    while (cin >> R >> C >> M){
        for (int i=0; i<R; i++){
            for (int j=0; j<C; j++){
                cin >> temp_mat[i][j];
            }
        }
        Matrix mat(R, C, temp_mat);
        vector<int> op(M);
        for (int i=0; i<M; i++){
            cin >> op[i];
        }

        for(auto it = op.rbegin(); it< op.rend();it++){
            *it == 0? mat.rotatecounter90():mat.flip_up_down();
        }
        mat.show();       
    }
    return 0;
}
