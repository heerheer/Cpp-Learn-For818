
/*
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <complex>

using namespace std;

int func1(float delta,float a, float b, float c) {

    float _sqrt = sqrt(delta);
    cout << "根:" << (-b + _sqrt) / (2 * a) << " " << (-b - _sqrt) / (2 * a) << endl;

}

int func2(float delta) {
    return 0;
}

int func3(float delta, float a, float b, float c) {
    complex<float> z1(-b / 2 * a, +sqrt(-delta) / 2 * a);
    complex<float> z2(-b / 2 * a, -sqrt(-delta) / 2 * a);
    printf("1");

    printf("%f+%fi", z1.real(), z1.imag());
    printf("%f+%fi", z2.real(), z2.imag());
    return 0;
}

int main(int argc, char const *argv[]) {
    float a, b, c;
    cin >> a >> b >> c;
    float delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        func1(delta, a, b, c);
    }

    if (delta == 0) {
        cout << "根:" << (-b) / 2 * a << endl;
    }

    if (delta < 0) {
        cout << "无实数根:";
        func3(delta, a, b, c);
    }
    return 0;
}
