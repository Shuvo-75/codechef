#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int max_area = 0; 
        if(x < 4)
        {
            cout << max_area << endl;
            continue;
        }

        for(int i = 1; i < x/2; i++)
        {
            int height = (x/2) - i;
            int area = height * i;

            max_area = max(area, max_area);
        }

        cout << max_area << endl;
    }
    
    return 0;
}