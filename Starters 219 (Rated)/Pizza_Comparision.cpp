// Problem link: https://www.codechef.com/START219D/problems/PIZZACOMP

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b; 
        cin >> a >> b; 
        if((100 * b) >= (225 * a))
        {
            if((100 * b) > (225 * a))
            {
                cout << "Small" << endl; 
            }else
            {
                cout << "Equal" << endl;
            }
        }else
        {
            cout << "Large" << endl;
        }

    }
    
    return 0;
}