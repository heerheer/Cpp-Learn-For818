#include <iostream>

// Greatest Common Divisor
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    int c = a % b;
    return gcd(b, c);
}

//获取最小公倍数
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(int argc, char const *argv[])
{
    int a, b;

    std::cin >> a >> b;
    std::cout << gcd(a, b);

    return 0;
}
