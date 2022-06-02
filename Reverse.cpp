#include <iostream>
using namespace std;
int main()
{
  int n,rev=0;
  cout << "Enter Number";
  cin >> n;
  while(n>0)
  {
    int r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  cout << "Reverse: " << rev;
  return 0;
}
