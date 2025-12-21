#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x == max({x, y, z}))
	    {
	        cout << "Setter" << endl;
	    }else if(y == max({x, y, z}))
	    {
	        cout << "Tester" << endl;
	    }else if(z == max({x, y, z}))
	    {
	        cout << "Editorialist" << endl;
	    }
	}

}