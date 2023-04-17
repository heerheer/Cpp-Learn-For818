//用选择法十个整数进行排序
#include "cmath"
#include "iostream"
#include <vector>

void swap(int *data1, int *data2) {
  int temp = *data1;
  *data1 = *data2;
  *data2 = temp;
}

int *selectionSort(int data[], bool desc = false) {
  int *arr = new int[10];
  for (int i = 0; i < 10; i++) {
    int maxIndex = i;
    int max = 0;
    for (int j = i + 1; j < 10; j++) {
      if (data[j] > data[maxIndex]) {
        maxIndex = j;
      }
    }
    max = data[maxIndex];
    arr[desc ? i : 9 - i] = max;
    data[maxIndex] = data[i];
  }
  return arr;
}

int main() {
  // 设置随机数种子
  srand(time(nullptr));

  // 定义数组
  int arr[10];

  // 随机生成数组元素
  for (int i = 0; i < 10; i++) {
    arr[i] = rand() % 100;
    std::cout << arr[i] << ((i != 9) ? ',' : '\n');
  }

  int *sorted = selectionSort(arr);

  for (int i = 0; i < 10; i++) {
    std::cout << sorted[i] << ((i != 9) ? ',' : '\n');
  }

  return 0;
}