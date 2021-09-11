#include <iostream>
using namespace std;

int main() {
  int num, c, curr;
  cin >> num;
  int out [num];
  for(int i = 0; i < num; i++) {
    cin >> c;
    out[i] = 0;
    for(int j = 0; j < c; j++){
      cin >> curr;
      out[i] += curr; 
    }
    out[i] = out[i] - c + 1;

  }
  for(int i = 0; i < num; i++){
    cout << out[i] << endl;
  }

}
