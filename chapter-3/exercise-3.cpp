
/*
 *输人一个华氏温度,要求输出摄氏温度。公式为c=一(F-32),输出要有文字说明,取两位小数
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {

    double temp;
    cout << "输入华氏温度:";
    cin >> temp;
    cout << endl << fixed << setprecision(2) << "摄氏温度为:" << -(temp - 32.0) <<"C";
    return 0;
}
