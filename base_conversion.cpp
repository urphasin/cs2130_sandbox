#include <bits/stdc++.h>

using namespace std;

/*
Convert between bases manually.  Start with base 10 and convert to bases 8, 16, 2.  Do NOT use built-in conversion methods for the conversion.  You must do your own math to compuute the values.  Input the value to be converted, and this should be the only input for this program.  Watch output, it needs to be correct for base 16.
*/

string to_base_X(int num, int base) {
  if (base > 9 || base < 2) { return "null"; }
  string s;
  while(num > 0) {
    s = char('0' + (num % base)) + s;
    num /= base;
  }
  return s + "  in base-" + char('0' + base);
}

string to_base_16(int num) {
  string s;
  while (num > 0) {
    int rem = num % 16;
    if (rem >= 10) {
      if (rem == 10) { s = 'A' + s; }
      else if (rem == 11) { s = 'B' + s; }
      else if (rem == 12) { s = 'B' + s; }
      else if (rem == 13) { s = 'C' + s; }
      else if (rem == 14) { s = 'D' + s; }
      else if (rem == 15) { s = 'E' + s; }
    } 
    else {
      s = char('0' + rem) + s;
    }
    num /= 16;
  }
  return s + "  in base-16";
}

int main() {
  
  int a = 1024;
  cout << "User enter an input: ";
  cin >> a;
  cout << to_base_X(a, 2) << endl;
}