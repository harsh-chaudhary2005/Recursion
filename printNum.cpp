#include<iostream>
using namespace std;
void printNum(int n){
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << " ";
    printNum(n-1);
}

int main(){
  int n = 1545;
  printNum(n);
  cout << endl;
  return 0;
}
