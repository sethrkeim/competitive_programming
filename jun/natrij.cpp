#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string line) {
  stringstream test(line);
  string segment;
  vector<std::string> seglist;
  while(std::getline(test, segment, ':')){
    seglist.push_back(segment);
  }
  return seglist;
}



int main() {
  string line;
  int hrs_diff, min_diff, sec_diff;
  cin >> line;
  vector<string> seglist = split(line);
  int hrs2, min2, sec2;
  hrs2 = stoi(seglist[0]);
  min2 = stoi(seglist[1]);
  sec2 = stoi(seglist[2]);
  cin >> line;
  seglist = split(line);
  int hrs1, min1, sec1;
  hrs1 = stoi(seglist[0]);
  min1 = stoi(seglist[1]);
  sec1 = stoi(seglist[2]);

  
  if(sec1 >= sec2) {
    sec_diff = sec1 - sec2;
  } else {
    sec_diff = sec1 + 60 - sec2;
    min2++;
  }

  if(min1 >= min2) {
    min_diff = min1 - min2;
  } else {
    min_diff = min1 + 60 - min2;
    hrs2++;
  }

  if(hrs1 >= hrs2) {
    hrs_diff = hrs1 - hrs2;
  } else {
    hrs_diff = hrs1 + 24 - hrs2;
  }
  if(hrs_diff == 0 && min_diff == 0 && sec_diff == 0) {
    hrs_diff = 24;
  }
  string h = to_string(hrs_diff);
  string m = to_string(min_diff);
  string s = to_string(sec_diff);
  if(h.length() < 2){
    h = "0" + h;
  } 
  if(m.length() < 2){
    m = "0" + m;
  } 
  if(s.length() < 2){
    s = "0" + s;
  } 
  cout << h <<":" << m << ":" << s << endl;
}
