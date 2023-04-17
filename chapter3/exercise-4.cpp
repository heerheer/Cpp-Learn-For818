
/*
 *编程序用getchar 函数读入两个字符给 cl,c2然后分别用putchar 函数和cout 语句输出这两个字符。并思考以下问题:
 *(1)变量 cl,c2应定义为字符型还是整型?抑或二者皆可?
 *(2)要求输出cl和c2值的ASCII码应如何处理?
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

    char c1 = getchar();
    int c2 = getchar();
    putchar(c1);
    putchar(c2);
    cout << endl;
    cout << (int)c1 << c2;
    return 0;
}
