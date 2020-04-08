#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//函數功能: 解一元二次方程式 ax^2+bx+c=0, a不等於0
template <typename T>
void solveQuadraticEquation(T a, T b, T c)
{
    T D=b*b-4*a*c;
    T x1,x2;
    if(D==0)
    {
        x1=-b/(2*a);
        std::cout << "Two same roots x="<< x1 << std::endl;
    }
    else if(D<0)
    {
        std::cout << "No real root"<< std::endl;
    }
    else
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        std::cout << "Two different roots x1=" << x1 << " , x2=" << x2 << std::endl;
    }
    
}

int main()
{
    int a, b, c;
    while(cin >> a>>b>>c)
    {
        solveQuadraticEquation(a,b,c);
    }
}
