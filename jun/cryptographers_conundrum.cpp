#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int days = 0;
  cin >> s;
  for(int i = 0; i < s.length(); i++){
    switch(i % 3) {
      case 0:
        if(s[i] != 'P'){
          days += 1;
        }
        break;
      case 1:
        if(s[i] != 'E'){
          days += 1;
        }
        break;
      case 2: 
        if(s[i] != 'R'){
          days += 1;
        }
        break;
    }
  }
  cout << days << endl;
}
