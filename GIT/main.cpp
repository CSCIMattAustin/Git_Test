#include <iostream>

using namespace std;

int sum(int n);
int main(){
  int n;
  
  cout << "Hello World!!!!" << endl;
  cout << "Please enter an integer: ";
  cin >> n;
  cout << "Your sum is: " << sum(n) << endl;

  return 0;
}
int sum(int n){
  if (n == 0)
    return 0;
  else
    return n + sum(n-1);
}
