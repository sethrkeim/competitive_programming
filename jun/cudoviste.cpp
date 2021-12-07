#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<vector<char>> map;
  int r, c;
  int cars[5] = {0};
  int num_cars;
  bool build;
  char spots[4];
  string line;
  cin >> r >> c;

  for(int i = 0; i < r; i++) {
    cin >> line;
    vector<char> vec(line.begin(), line.end());
    map.push_back(vec); 
  }
  
  for(int i = 0; i < r-1; i++){
    for(int j = 0; j < c-1; j++){
      spots[0] = map[i][j];
      spots[1] = map[i][j+1];
      spots[2] = map[i+1][j];
      spots[3] = map[i+1][j+1];
      num_cars = 0; 
      build = false;
      for(int k = 0; k < 4; k++){
        if(spots[k] == '#'){
          build = true;
        } else if (spots[k] == 'X') {
          num_cars++;
        }
      }
      if(!build) {
        cars[num_cars]++;
      }
    }
  }
  for(int i = 0; i < 5; i++){
    cout << cars[i] << endl;
  }
}
