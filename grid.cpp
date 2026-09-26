#include <bits/stdc++.h>

using namespace std;

int main() {
  int grid[5][3];

  int start = 1;

  // stack smashing loop <- bad
  for (int i = 0; i <= 5; i++) {
    for (int j = 0; j <= 3; j++) {
      grid[i][j] = start;
      start++;
    }
  }

  cout << grid[5][3] << endl;
}