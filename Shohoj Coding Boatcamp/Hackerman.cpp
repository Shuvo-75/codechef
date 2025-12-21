#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        int sum = a + b;
        if(sum <= 1)
        {
            cout << "Bob" << endl;
            return 0;
        }

        bool isPrime = true;

        for(int i = 2; i * i <= sum; i++)
        {
            if(sum % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            cout << "Alice" << endl;
        }else
        {
            cout << "Bob" << endl;
        }
    }
    
    return 0;
}