#include <iostream>
using namespace std;

int main()
{
  int a[100], i, n, pos = 0, neg = 0;

  cout << "Enter The Size of An Array: ";
  cin >> n;

  cout << "Enter The Element: ";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (i = 0; i < n; i++)
  {
    if (a[i] >= 0)
      pos++;
    else
      neg++;
  }

  cout << "\nPositive No. is = " << pos;
  cout << "\nNegative No. is = " << neg;
  return 0;
}