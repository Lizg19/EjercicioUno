#include <iostream>
using namespace std;


int sumadedigitos(int y);

int main() {
  cout << "La suma es: " << sumadedigitos(20);
}

int sumadedigitos(int y){

 return (y==0) ? 0 : y+sumadedigitos(y-1);
}
