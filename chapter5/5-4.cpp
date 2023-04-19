#include "iostream"

// 一个已排好序的数组 ， 今输人一个数 ， 要求按原来排序的规律将它插人数组中 。

int arr[] = {55, 33, 22, 11, 6, 4, 1};

int main()
{
    int num;
    int index = 0;
    std::cin >> num;

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    if (num > arr[arr_size - 1])
    {
        index = arr_size;
    }

    // find the index
    for (int i = 0; i < arr_size - 1; i++)
    {
        if ((num > arr[i] && num < arr[i + 1]) || (num < arr[i] && num > arr[i + 1]))
        {
            // set the new number index in new array
            index = i + 1;
            break;
        }
    }

    // create new array
    int new_arr[arr_size + 1];

    if (index != 0)
    {
        for (int i = 0; i < index; i++)
        {
            new_arr[i] = arr[i];
        }
    }

    new_arr[index] = num;
    for (int i = index + 1; i < arr_size + 1; i++)
    {
        new_arr[i] = arr[i - 1];
    }

    // print new_arr
    for (int i = 0; i < arr_size + 1; i++)
    {
        std::cout << new_arr[i] << " ";
    }

    return 0;
}