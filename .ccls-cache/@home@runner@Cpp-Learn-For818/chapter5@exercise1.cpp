// 用筛法求100之内素数

#include "cmath"
#include "iostream"

bool isPrime(int count) {
  if (count < 2)
    return false;
  for (int i = 2; i <= sqrt(count); i++) {
    if (count % 2 == 0)
      return false;
  }
  return true;
}

int main() {
  for (int i = 0; i < 100; i++) {
    if (isPrime(i)) {
      std::cout << i << std::endl;
    }
  }
  return 0;
}