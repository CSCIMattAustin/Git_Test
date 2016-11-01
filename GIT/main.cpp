#include <iostream>

using namespace std;

int sum(int n);
long int product(int n);
int main(){
  int n;
  
  cout << "Hello World!!!!" << endl;
  cout << "Please enter an integer: ";
  cin >> n;
  cout << "Your sum from 1 to " << n << " is: " << sum(n) << endl;
  cout << "Your product from 1 to " << n << " is: " << product(n) << endl;
  return 0;
}
int sum(int n){
  if (n == 0)
    return 0;
  else
    return n + sum(n-1);
}
long int product(int n){
  if (n < 1)
    return 1;

    return n * product(n-1);
}
