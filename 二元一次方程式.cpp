#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Point {
public:
    Point() = default;
    Point(double _x, double _y) : x(_x), y(_y) {};
    void show() {
        if (isnan(x))
            std::cout << "Too many" << std::endl;
        else if (isinf(x))
            std::cout << "No answer" << std::endl;
        else {
            printf("x=%.2f\n", x);
            printf("y=%.2f\n", y);
        }
    }
    double x, y;
};

class Line {
public:
    Line() = default;
    Line(Point _a, Point _b) {
        a = _a.y - _b.y;
        b = _b.x - _a.x;
        c = _a.x * _b.y - _b.x * _a.y;
    };
    Line(double _a, double _b, double _c) :a(_a), b(_b), c(_c) {};
    Point crossPoint(Line L);

private:
    double a, b, c; //假設直線的方程式為ax+by+c=0
};


// 用加減消去法解二元一次聯立方程組
Point Line::crossPoint(Line L) {
    double D = a * L.b - L.a * b; //D=0時為平行線或重合
    Point p((b * L.c - L.b * c) / D, (c * L.a - L.c * a) / D);
    return p;
}

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Line L(a, b, -c);
    Line M(d, e, -f);
    L.crossPoint(M).show();
}
