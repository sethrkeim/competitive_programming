using namespace std;
#include <bits/stdc++.h>

int main() {
  int sides [4];
  cin >> sides[0];
  cin >> sides[1];
  cin >> sides[2];
  cin >> sides[3]; 
  int temp;
  int min;
  for(int i = 0; i < 3; i++) {
    min = i;
    for(int j = i+1; j < 4; j++) {
      if(sides[j] < sides[min]) {
        min = j; 
      }
    }
    temp = sides[min];
    sides[min] = sides[i];
    sides[i] = temp;
  }

  cout << sides[0] * sides[2] << endl;
}
