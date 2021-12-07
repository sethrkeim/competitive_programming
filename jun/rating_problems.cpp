#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, k, cur, sum = 0;
  float worst, best;
  cin >> n >> k;
  for(int i = 0; i < k; i++){
    cin >> cur;
    sum += cur;
  }
  worst = (float)(sum + (-3)*(n-k))/n;
  best = (float)(sum + 3*(n-k))/n;
  cout << worst << " " << best << endl; 
}
