#include <bits/stdc++.h>

using namespace std;

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

  vector<int> a {3, 5, 11, 15, 165, 55};
  count_divisible_elements(a);
}