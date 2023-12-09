#include <iostream>

using namespace std;
int main(void) {
  cout << "It's working\n" << endl;
  int byte = 255;
  cout << hex << byte;
  cout << '\n';
  cout << byte << dec << byte;
}