#include <iostream>
#include <fstream>

using namespace std;

void writeFile() {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "This is a line. \n";
  myfile << "This is another line.\n";
  myfile.close();
}


void readFileInChar() {
  char c;
  ifstream myfile ("example.txt");
  if (myfile.is_open()) {
    while (myfile.get(c)) {
      if (c == '\n') {
        cout << "\n";
      }
      else {
        cout << c << ", ";
      }
    }
    myfile.close();
  }
  else {
    cout << "Unable to open file";
  }
}

void readFile() {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
    myfile.close();
  }
  else {
    cout << "Unable to open file";
  }
}

int main() {
  writeFile(); 
  readFile();  
  readFileInChar();
  return 0;
}
