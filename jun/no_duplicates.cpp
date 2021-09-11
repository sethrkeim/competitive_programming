#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>
#include <sstream>
int main() {
   
  std::ios_base::sync_with_stdio(0);
  bool b = true;
  std::string x, line;
  std::unordered_map<std::string, bool>  map = {}; 
  std::getline(std::cin, line);
  std::istringstream iss(line);
  while(iss >> x) {

    if(map[x]) {
      b = false;
      break;
    }
    map[x] = true; 
    
  }

  if(b) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
    
}
