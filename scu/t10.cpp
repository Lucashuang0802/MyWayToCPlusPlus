
#include <iostream>
#include <fstream>

using namespace std;

void readt10file() {
  string line;
  int minsup;

  ifstream file ("t10.dat");
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line << "\n"; 
    }
    file.close();
  }
  else {
    cout << "Unable to open file\n";
  }
}


int main() {
  readt10file();
  return 0;
}
