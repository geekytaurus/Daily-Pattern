#include<iostream>
using namespace std;

int main(){

    char s[]="INDIA";
    int i, j;
    
    cout << endl;

    for(i=0; s[i]; i++)
    {
        for(j=0; j<=i; j++)
            cout << s[j];
        cout << endl;
    }

    cout << endl;
    return 0;
}
