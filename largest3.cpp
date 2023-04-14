#include <iostream>
#include <climits>
using namespace std;
void
lar3 (int arr[], int n)
{
  int a = INT_MIN, b = a, c = a, i;
  for (i = 0; i < n; i++)
    if (arr[i] > c)
      {
	if (arr[i] > a)
	  {
	    c = b;
	    b = a;
	    a = arr[i];
	  }
	else if (arr[i] > b)
	  {
	    c = b;
	    b = arr[i];
	  }
	else
	  c = arr[i];
      }
  cout << a << endl << b << endl << c;
}

int
main ()
{
  int n;
  cout << "enter array size ";
  cin >> n;
  int arr[n];
  cout << "enter elements:";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  lar3 (arr, n);
  return 0;
}
