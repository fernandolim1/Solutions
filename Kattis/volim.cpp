#include <iostream>
using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  int p = 0;
  while (n--) {
    int t;
    char z;
    cin >> t >> z;
    p += t;
    if (z == 'T' and p < 210) {
      k = k % 8 + 1;
    }
  }
  cout << k << "\n";
  return 0;
}