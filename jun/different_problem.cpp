#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>
#include <sstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {
  string line;
  long long first, second;
  unsigned long long ans;
  while(getline(cin, line)) {
    stringstream s(line);
    s >> first; 
    s >> second; 
    ans = abs(first - second);
    cout << ans << endl;
  }
}
