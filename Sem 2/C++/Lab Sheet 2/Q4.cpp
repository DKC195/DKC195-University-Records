// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include <iostream>
using namespace std;

void temp(int *x, int *y)
{
  int a = *x, b = *y;
  if (a < b)
  {
    *x = b;
    *y = a;
  }
}

int main()
{
  int x, y;

  cout << "Enter 1st Number: ";
  cin >> x;
  cout << "Enter 2nd Number: ";
  cin >> y;

  temp(&x, &y);

  cout << "Largest Value: " << x;

  return 0;
}
