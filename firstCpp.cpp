#include <iostream>

using namespace std;

#define TAG "TAG"

const double pi = 3.14159;
const char newline = '\n';

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

int getResult() {
  int a = 5, b = (3), c = {2};
  int result;
  a = a + b;
  result = a - c;
  return result;
}

void printmessage() {
  string string;
  cout << "What's your name?";
  getline (cin, string);
  cout << "Hello " << string << ".\n";
  cout << "What is your favourite team?";
  getline (cin, string);
  cout << "I like " << string << " too!\n";
}

int main() {
 
  using namespace first;
  
  cout << "Hellow World! ";
  cout << "I'm a C++ program";
  
  cout << newline <<  "The result is: " << getResult();

  string mystring = "this is my string";
  cout << newline << mystring;

  double circle, r = {5.0};
  circle = 2 * pi * r;
  cout << newline << "The circle is: " << circle;

  cout << newline << "printing a lot of tabs: " << TAG << TAG << TAG << endl;
 
  printmessage();

  cout << newline << "x value is: " << x << "\n";

  cout << newline << "y value is: " << y << "\n";

  return 0;
}

