#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);

// Prompts user to input three numbers
// Calls sortDescending() to sort those numbers
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  return 0;
}

// Compares two numbers at a time
// Calls swap() accordingly
// Prints out the numbers in sorted order
void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
  cout<<"From greatest to least, they are: ";
  cout<<first<<","<<second<<","<<third<<endl;
}

// Swaps two numbers at a time
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
