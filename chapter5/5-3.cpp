#include "iostream"

int main() {
  int arr[][3] = {{1, 2, 3}, {1, 2, 3}, {8, 8, 12}};

  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += (i != 1) ? (arr[i][0] + arr[i][2]) : arr[i][1];
  }

  printf("%d", sum);

  return 0;
}