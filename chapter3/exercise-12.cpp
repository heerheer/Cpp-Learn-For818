
/*
 *给一个不多于5 位的正整数,要求
 *1求出它是几位数;2分别打印出每一位数字;3按逆序打印出各位数字,例如原数为321,应输出123。
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {

    int number;
    cin >> number;
    if (number >= 100000) {
        ::printf("最高为五位数");
        return 0;
    }

    string str = to_string(number);
    cout << str.length() << endl;
    for (int i = 0; i < str.length(); ++i) {
        cout << str[i] << endl;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}
