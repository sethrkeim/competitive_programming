#include <bits/stdc++.h>

using namespace std;
 
void solve(vector<int> errors, int T) {
  int cur_index = 0; 
  vector<vector<int>> contiguous;
  vector<int> temp;
  bool on_error = false;
  for(int i = 1; i <= T; i++) {
    if(cur_index > T || i < errors[cur_index]) {
      if(on_error) {
        contiguous.push_back(temp);
        temp.clear();
      }
      on_error = false;
      temp.push_back(i);
    } else {
      if(on_error) {
        temp.push_back(errors[cur_index]);
        if(cur_index < errors.size() - 1) {
          cur_index++;
        } else {
          cur_index = T + 1;
        }
      } else {
        on_error = true;
        if(temp.size() != 0) {
          contiguous.push_back(temp);
        }
        temp.clear();
        temp.push_back(errors[cur_index]);
        if(cur_index < errors.size() - 1) {
          cur_index++;
        } else {
          cur_index = T + 1;
        }
      }
    }

  }
  contiguous.push_back(temp);
  string s = "Correct: ";
  string e = "Errors: ";
  int i = 0;
  if(errors[0] == 1){
    for(i = 0; i < contiguous.size() - 4; i++) {
      if(i % 2 == 1) {
        if(contiguous[i].size() > 1) {
          s += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          s += to_string(contiguous[i][0]);
        }
        s += ", ";
      } else {
        if(contiguous[i].size() > 1) {
          e += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          e += to_string(contiguous[i][0]);
        }
        e += ", "; 
      }
    }
    for(i; i < contiguous.size() - 2; i++){
      if(i % 2 == 1) {
        if(contiguous[i].size() > 1) {
          s += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          s += to_string(contiguous[i][0]);
        }
        s += " and ";
        if(contiguous[i+2].size() > 1) {
          s += to_string(contiguous[i+2][0]) + "-" + to_string(contiguous[i+2][contiguous[i+2].size()-1]);
        } else {
          s += to_string(contiguous[i+2][0]);
        }
      } else {
        if(contiguous[i].size() > 1) {
          e += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          e += to_string(contiguous[i][0]);
        }
        e += " and ";
        if(contiguous[i+2].size() > 1) {
          e += to_string(contiguous[i+2][0]) + "-" + to_string(contiguous[i+2][contiguous[i+2].size()-1]);
        } else {
          e += to_string(contiguous[i+2][0]);
        }

      }
    }
  } else {
    for(i = 0; i < contiguous.size() - 4; i++) {
      if(i % 2 == 0) {
        if(contiguous[i].size() > 1) {
          s += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          s += to_string(contiguous[i][0]);
        }
        s += ", ";
      } else {
        if(contiguous[i].size() > 1) {
          e += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          e += to_string(contiguous[i][0]);
        }
        e += ", "; 
      }
    }
    for(i; i < contiguous.size() - 2; i++){
      if(i % 2 == 0) {
        if(contiguous[i].size() > 1) {
          s += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          s += to_string(contiguous[i][0]);
        }
        s += " and ";
        if(contiguous[i+2].size() > 1) {
          s += to_string(contiguous[i+2][0]) + "-" + to_string(contiguous[i+2][contiguous[i+2].size()-1]);
        } else {
          s += to_string(contiguous[i+2][0]);
        }
      } else {
        if(contiguous[i].size() > 1) {
          e += to_string(contiguous[i][0]) + "-" + to_string(contiguous[i][contiguous[i].size()-1]);
        } else {
          e += to_string(contiguous[i][0]);
        }
        e += " and ";
        if(contiguous[i+2].size() > 1) {
          e += to_string(contiguous[i+2][0]) + "-" + to_string(contiguous[i+2][contiguous[i+2].size()-1]);
        } else {
          e += to_string(contiguous[i+2][0]);
        }

      }
    }
  }
    cout << e << endl;
    cout << s << endl;
    
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);
 
    int T = 1;
    int E = 1;
    cin >> T >> E;
    int val;
    vector<int> errors;
    while(E--) {
       cin >> val; 
       errors.push_back(val);
    }
    solve(errors, T);

    return 0;
}
