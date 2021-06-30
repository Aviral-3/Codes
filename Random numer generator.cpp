#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int randomNumber;
  for (int i = 0; i< 10; i++) {
    randomNumber = (rand() % 35) + 1;
    cout << randomNumber << endl;
  }
}