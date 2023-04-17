/*
 * 设圆半径r=1.5,圆柱高 h=3求圆周长圆面积圆球表面积圆球体积圆柱体积。
 * 用 cin 输人数据,输出计算结果,输出时要求有文字说明,取小数点后两位数字。请编程序。
 * */
#include <cmath>
#include <iostream>
#include <iomanip>

int main() {

    setlocale(LC_ALL, "zh_CN.UTF-8");

    int r = 1.5;
    int h = 3;

    int perimeter = 2 * M_PI * r;//计算周长
    int area = M_PI * pow(r, 2);//计算面积
    int ball_size = 4 * M_PI * pow(r, 2);//圆球表面积
    int ball_volume = 4 / 3 * M_PI * pow(r, 3);//圆球体积

    std::cout << std::setprecision(2) << "周长:" << perimeter << std::endl;
    std::cout << std::setprecision(2) << "面积:" << area << std::endl;
    std::cout << std::setprecision(2) << "圆球表面积:" << ball_size << std::endl;
    std::cout << std::setprecision(2) << "圆球体积:" << ball_volume << std::endl;
    return 0;
}