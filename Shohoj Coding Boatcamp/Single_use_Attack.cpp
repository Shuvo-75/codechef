#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y, h;
	    cin >> x >> y >> h;
	    int special = x - h;
	    int count = 1;
	    while(special > 0)
	    {
	        if(special > 0)
	        {
	            special -= y;
	            count++;
	        }
	    }
	    cout << count << endl;
	    
	}

}
