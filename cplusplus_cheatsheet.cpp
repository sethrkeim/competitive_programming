#include <iostream>

// input output
int x;
cin >> x;

for(int i = 0; i < 4; i++) {
  cin >> L[i];
}

cin >> L[0] >> L[1] >> L[2] >> L[3];

getline(cin, line); // reads in one line from cin, stores it in variable line

while(getline(cin, S)) {
  // do something with S
}

// output
cout << "Hello" << endl;
cout << "Name: " << myName << "Age: " << myAge << endl;
cout << setprecision(7); // set significant digits
ios::sync_with_stdio(false); //used to acclerate I/O; but if you use it do not
                             // use scanf and printf
