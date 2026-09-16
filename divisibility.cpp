#include <bits/stdc++.h>

using namespace std;
// U = {1, 2, 3, ... , 1689}
// how many??? {x:x ∈ U && 3|x}
// (A ∪ B ∪ C)???  i % 3 == 0 || i % 5 == 0 || i % 11 == 0
void count_divisible_elements(vector<int> a) {
  for (int num : a) {
    int res = 0;
    cout << "Divisible by " << num << endl;
    for (int i = 1; i <= 1689; i++) {
      if (i % num == 0) {
        res++;
        cout << "\t\t" << i << endl;
      }
    }
    cout << "\tcardinality/count: " << res << endl;
  }
}

int main() {

  vector<int> a {3}; //{3, 5, 11, 15, 165, 55}
  count_divisible_elements(a);
}