
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readt10file() {
  string line;
  int minsup;
  int id1, id2, bounds;

  ifstream file ("t10.dat");
  if (file.is_open()) {
    while (getline(file, line)) {
      if (line.compare("# node ID1, node ID2, number of bounds") == 0) {
        file >> id1 >> id2 >> bounds;
        cout << "id1: " << id1;
        cout << "id2: " << id2;
        cout << "bounds: " << bounds << endl;
      }
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
