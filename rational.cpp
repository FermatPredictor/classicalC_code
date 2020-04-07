#include <iostream>
using namespace std;


int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}

int lcm(int x,int y)
{
    return x*(y/gcd(x,y)); /**先做y/gcd(x,y)避免溢位*/
}

class Rational
{
public:
    Rational(int n, int d); //constructor
    Rational operator + (const Rational & r);
    Rational operator - (const Rational & r);
    Rational operator * (const Rational & r);
    Rational operator / (const Rational & r);
    bool operator == (const Rational & r);
    friend ostream &operator<< (ostream &os, const Rational &r);
private:
    int numerator; //分子
    int denominator; //分母
};

/**把分數化為分母恆正的最簡分數*/
Rational::Rational(int n, int d)
{
    try
    {
        if(d==0){
            numerator=0;
            denominator=1;
            throw 0;
        }
        int factor = gcd(n,d);
        numerator = n/factor;
        denominator = d/factor;
        if(denominator<0)
        {
            numerator= -numerator;
            denominator= -denominator;
        }
    }
    catch(int err)
    {
        cout << "警告: 分母不可為0" << endl;
    }
}


Rational Rational::operator + (const Rational & r)
{
    int L = lcm(denominator, r.denominator);
    return Rational(numerator*(L/denominator)+r.numerator*(L/r.denominator), L);
}

Rational Rational::operator - (const Rational & r)
{
    return Rational(numerator, denominator)+Rational(-r.numerator, r.denominator);
}

//注意雖然分數都是最簡分數，但兩個很分子、分母很大的數直接相乘則可能溢位(如本來可以先約分沒約)
//需要用交叉相乘的想法，先約分再把分子分母相乘
Rational Rational::operator * (const Rational & r)
{
    Rational r1= Rational(numerator , r.denominator);
    Rational r2= Rational(r.numerator , denominator);
    return Rational(r1.numerator * r2.numerator, r1.denominator * r2.denominator);
}

Rational Rational::operator / (const Rational & r)
{
    return Rational(numerator, denominator)* Rational(r.denominator, r.numerator);
}

bool Rational::operator == (const Rational & r)
{
    return numerator==r.numerator && denominator==r.denominator;
}

ostream& operator<< (ostream &os, const Rational & r)
{
    os << r.numerator <<"/"<< r.denominator;
    return os;
}

int main()
{
    Rational r1= Rational(1,2);
    Rational r2= Rational(2,3);
    std::cout << r1+r2 << std::endl; //計算(1/2)+(2/3)的值
    std::cout << Rational(1111111,20000000)*Rational(40000000,3333333) << std::endl; //檢查乘位溢位問題
}
