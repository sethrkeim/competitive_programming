using namespace std;
#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main() {
  string str;
  int max [2] = {-1, -1};
  int cur; 
  for(int i = 0; i < 5; i++){
    cur = 0;
    for(int j = 0; j < 4; j++){
      cin >> str;
      cur = cur + stoi(str);
    }
    
    if(cur > max[0]) {
      max[0] = cur;
      max[1] = i+1;
    }
  }

  cout << max[1] << " " << max[0] << endl;
    

}
