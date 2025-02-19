#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float xa, ya, xb, yb, xc, yc;
    cout << "Введите координаты точки A: ";
    cin >> xa >> ya;
    cout << "Введите координаты точки B: ";
    cin >> xb >> yb;
    cout << "Введите координаты точки C: ";
    cin >> xc >> yc;
    float AB = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    float BC = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
    float CA = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
    float Per = AB + BC + CA;
    float P = Per / 2;
    float S = sqrt(P * (P - AB) * (P - BC) * (P - CA));
    cout << "Периметр треугольнкиа равна " << Per << endl;
    cout << "Площадь треугольника равна " << S << endl;

    return 0;
}