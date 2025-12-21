#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;
	    cin >> x >> y;
	    int divisible = (y%x);
	    if(divisible == 0)
	    {
	        cout << (y/x) - 1 << endl;
	    }else
	    {
	        cout << (y/x) << endl;
	    }
	    
	}
	return 0;
}
