#include <bits/stdc++.h>
using namespace std;
void printPat(int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printPat(n);
        cout << endl;
    }
}
void printPat(int n) {
    /*For n = 2 
    the pattern will be 
    2 2 1 1
    2 1

    For n = 3 the pattern will be 
    3 3 3 2 2 2 1 1 1
    3 3 2 2 1 1
    3 2 1*/
    int i,j;
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            for(int k=0;k<i;k++)
            {
                cout<<j<<" ";
            }
        }
        cout<<"$";
    }
}