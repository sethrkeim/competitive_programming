#include <bits/stdc++.h>

using namespace std;
 
void solve(vector<int> clusters, vector<int> queries) {
   int query = queries[0];
   for(int i = 0; i < queries.size(); i++) {
     if(queries[i] > query) {
       query = queries[i];
     };
   }
   bool values[query+1][clusters.size()+1][clusters.size()+1] = {false};
   int j1; 
   bool totrue;
   for(int k = 0; k <= query; k++) {
     for(int i = 0; i <= clusters.size(); i++) {
       for(int j = 0; j <= clusters.size(); j++) {
         j1 = clusters.size() - j; 
         totrue = false;
         if(k == 0 && j == 0 && i == 0){
           totrue = true;
         }
         if(k - clusters[i-1] >= 0 && i > 0) {
           if(values[k-clusters[i-1]][i-1][j]) {
             totrue = true;
           }
         }
         if(k - clusters[j1] >= 0 && j > 0) {
           if(values[k-clusters[j1]][i][j-1]) {
             totrue = true;
           }
         }
         if(i + j > clusters.size()) {
           totrue = false;
         }
         values[k][i][j] = totrue;
       }
     }
   }
   bool istrue;
   for(int k = 0; k < queries.size(); k++) {
     istrue = false;
     for(int i = 0; i <= clusters.size(); i++){
       for(int j = 0; j <= clusters.size(); j++){
         if(values[queries[k]][i][j]) {
           //cout << "queries k : " << queries[k] << " i: " << i << " j: " << j << endl;
           istrue = true;
         }
       }
     }
     if(istrue) {
       cout << "Yes" << endl;
     } else {
       cout << "No" << endl;
     }
   }
}
 
int main() {
 
    int C = 1;
    int Q = 1;
    int q = 1;
    int cluster; 
    vector<int> clusters;
    cin >> C >> Q;
    for(int i = 0; i < C; i++) {
      cin >> cluster;
      clusters.push_back(cluster);
    }
    vector<int> queries;
    while(Q--) {
      cin >> q;
      queries.push_back(q);
    }
    solve(clusters, queries);
    return 0;
}
