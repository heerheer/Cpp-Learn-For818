#include <iostream>

int line_count = 12;
int row_count = line_count * 2 - 1;

int line(int count) {
  for (int i = 0; i < (row_count + 1) / 2 - count; i++) {
    std::cout << ' ';
  }
  for (int i = 0; i < count * 2 - 1; i++) {
    std::cout << '*';
  }
  std::cout << std::endl;
  return 0;
}

int main() {
  for (int i = 1; i <= line_count; i++) {
    line(i);
  }
}