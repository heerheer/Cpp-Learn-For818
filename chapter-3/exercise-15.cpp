
/*
 * 最大公约数，最小公倍数
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}

int main(int argc, char const *argv[])
{

    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);
    return 0;
}
