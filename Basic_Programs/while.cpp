
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        //while loop and print a number n's table in reverse order.
        //Input: n = 1
        //Output: 10 9 8 7 6 5 4 3 2 1
        while(multiplier)
        {
             cout<<n*multiplier<<" ";
             multiplier--;
        }
        
        cout<<endl;
    }  
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);
	    
	}
	return 0;
}
