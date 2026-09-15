#include <bits/stdc++.h>

using namespace std;

void prime(int n) {
  if (n == 2) {
    cout << "prime" << endl;
    return;
  } else {
    if (n/2 == (int)n/2) {
      cout << "not prime" << endl;
      return;
    } else {
      for (int i = 3; i <= sqrt(n); i+=2) {
        if(n/i == (int)n/i) {
          cout << "not prime" << endl;
          return;
        }
        cout << "prime" << endl;
        return;
      }
    }
  }
}


int main() {
  prime(15);
  prime(11);
}

// g++ tower_of_hanoi.cpp -o a.out && ./a.out && rm -rf a.out

// 1,2,3,4,7,10,11,12,13,16,17,18,19

// 2,3,4,5,7,8,11,12,38,39,40,41