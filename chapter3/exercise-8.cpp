
/*
 * 有3个整数a,bc由键盘输入,输出其中最大的数
 */

#include <iostream>
#include "algorithm"

using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c;
    cin >> a >> b >> c;

    cout << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    cout << max({a, b, c});
    return 0;
}
