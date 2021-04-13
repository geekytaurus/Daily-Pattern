#include<iostream>
using namespace std;


int main()
{
  int n, i, j, c;

  cout << "Enter the number of rows : ";
  cin >> n;

  cout << endl << endl << endl;

  for(i = 1; i <= (2 * n) - 1; i++){
        if (i < n)
           c = i;
        else
           c = n-(i-n);
    for (j = 1; j <= (2 * n) - 1; j++ ){
        if (i == j || i + j == 2 * n)
           cout << c;
        else
           cout << " ";
    }

    cout << endl;
  }

  cout << endl << endl << endl;
  return 0;

}
