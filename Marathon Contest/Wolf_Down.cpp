#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int bird = 0;
        int wolf = 0; 
        for (int i = 0; i < n; i++) 
        {
            int bit = s[i] - '0'; 
            if(s[i] == 0)
            {
                bird++;
            }
            if(s[i] == 1)
            {
                wolf++;
            }
        }

        if(wolf >= bird)
        {
            cout << "0" << endl;
        }else
        {
            cout << bird << endl;
        }

    }
    
    return 0;
}