#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
  int arr[SIZE];
  int neg=0;
  for(int i=0;i<5;i++){
    cin>>arr[i];
    if(arr[i]<0)
      neg++;
  }
  cout<<neg;


    return 0; //indentação!
}
