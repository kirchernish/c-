#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float v1, a1, v2, a2, S, t;
    cin >> v1 >> a1 >> v2 >> a2 >> S;
    if (a1 == 0 && a2 == 0) {
        t = S / (v1+v2);
    } else {
        t = (-(v1+v2) + sqrt((pow(v1+v2, 2)) + 4 * S * (a1+a2)/2)) / (a1+a2);
    }
    cout << static_cast<int>(t) << endl;
    return 0;
}
