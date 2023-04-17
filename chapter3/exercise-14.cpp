
/*
 * 输人4 个整数要求按由小到大的顺序输出。
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}
int main(int argc, char const *argv[])
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int nums[] = {a, b, c, d};
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << nums[i] << ((i < 3) ? "," : "");
    }
    return 0;
}
