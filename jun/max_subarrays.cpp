#include <iostream>
using namespace std;

int main() {
  int K, n;
  cin >> n >> K;
  int arr[n+1];
  for(int i = 1; i <= n; i++){
    cin >> arr[i]; 
  }
 /* 
  int d[n+1] = {0};
  for(int i = 0; i < n; i++) {
     if(d[i] + arr[i] > arr[i]) {
       d[i+1] = d[i] + arr[i];
     } else {
       d[i+1] = arr[i];
     }
  }
  
  long int max = -10000000000;
  for(int i = 0; i < n; i++) {
    if(d[i+1] > max) {
      max = d[i+1];
    }
  }
  cout << max << endl;
*/
  int max_arr[n+1][n+1];
  for(int s = 1; s < n+1; s++) {
    for(int e = s; e < n+1; e++) {
      if(e == s) {
        max_arr[s][e] = arr[s];
      } else {
        max_arr[s][e] = max_arr[s][e-1] + arr[e] > arr[e] ? 
          max_arr[s][e-1] + arr[e] : arr[e]; 
      }
    }
  }
  

  int d[K+1][n+1] = {0};
  for(int i = 1; i <= n-K+1; i++) {
     if(d[1][i] + arr[i] > arr[i]) {
       d[1][i+1] = d[1][i] + arr[i];
     } else {
       d[1][i+1] = arr[i];
     }
  }
//  for(int e = 0; e <= n; e++) {
//    cout << "K: 1"  << " - e: " << e << " - max: " << d[1][e] << endl;
//  }
  
  // max k subarrays
  for(int k = 2; k <= K; k++) {
    for(int e = k; e <= n-K+k; e++){
      for(int s = k; s <= e; s++){
        d[k][e] = d[k][e] > d[k-1][s-1] + max_arr[s][e] ? d[k][e] :
          d[k-1][s-1] + max_arr[s][e];    
      }
    }
  }

  long int max = -10000000000;
  for(int i = K; i <= n; i++) {
    if(d[K][i] > max) {
      max = d[K][i];
    }
  }
/* 
  for(int i = 1; i <= K; i++) {
    for(int e = 0; e <= n; e++) {
      cout << "K: " << i << " - e: " << e << " - max: " << d[i][e] << endl;
    }
  }
  */
  cout << max << endl;

}
