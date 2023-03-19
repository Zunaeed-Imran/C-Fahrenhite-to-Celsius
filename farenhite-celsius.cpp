#include <iostream>

using namespace std;

int main(){
  cout << "Fahrenheite: ";
  int fahrenheite;
  cin >> fahrenheite;
  double celsius = (fahrenheite - 32) / 1.8;
  cout << celsius;
  return 0;
}