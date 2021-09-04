using namespace std;
#include <string>
#include <iostream>

int main() {
  string inp;
  cin >> inp;
  int white = 0, lower = 0, upper = 0, symbol = 0;
  for(int i = 0; i < inp.length(); i++) {
    if(inp[i] == '_'){
      white++;
    } else if(islower(inp[i])) {
      lower++;
    } else if(isupper(inp[i])) {
      upper++;
    } else {
      symbol++;
    }

  }
  float w = (float)white / inp.length();
  float l = (float)lower / inp.length();
  float u = (float)upper / inp.length();
  float s = (float)symbol / inp.length();
  cout << w << endl << l << endl << u << endl << s << endl;

}
