#include <bits/stdc++.h>                                                        
                                                                                
using namespace std;                                                            
#include<set>
                                                                                
void solve(vector<int> clusters, vector<int> queries) {                         
  int addLeft [clusters.size()] = {0};
  int addRight [clusters.size()] = {0};
  addLeft[0] = clusters[0];
  addRight[clusters.size() - 1] = clusters[clusters.size() - 1];
  for(int i = 1; i < clusters.size(); i++){
    addLeft[i] = addLeft[i-1] + clusters[i];
  }
  for(int i = clusters.size() - 2; i >= 0; i--){
    addRight[i] = addRight[i+1] + clusters[i];
  }

  set<int> s; 
  for(int i = 0; i < clusters.size(); i++){
    s.insert(addLeft[i]);
    s.insert(addRight[i]);
  }
  
  for(int i = 0; i < clusters.size(); i++) {
    for(int j = clusters.size() - 1; j > i; j--) {
      if(i + j <= clusters.size()){
        s.insert(addLeft[i] + addRight[j]); 
      }
    }
  }

  for(int i = 0; i < queries.size(); i++){
    if(s.find(queries[i]) != s.end() || queries[i] == 0) {
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
