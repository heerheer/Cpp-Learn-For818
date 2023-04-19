#include <iostream>

// 5 、 将一个数组中的值按逆序重新存放 。 例如 ， 原来顺序为 8 ， 6 ， 5 ， 4 ， 1 。 要求改为 1 ，4 ， 5 ， 6 ， 8 。

int main()
{
    int arr[] = {8, 6, 5, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int new_arr[size];

    for (int i = 0; i < size; i++)
    {
        new_arr[size - i -1] = arr[i];
    }

    //print new_arr
    for (int i = 0; i < size; i++)
    {
        std::cout << new_arr[i] << " ";
    }

    return 0;
}