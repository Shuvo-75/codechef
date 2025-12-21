#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> days(7);
        int rainy_day = 0, sunny_day = 0;
        for(int i = 0; i < 7; i++)
        {
            cin >> days[i];
            if(days[i] == 1)
            {
                sunny_day++; 
            }else
            {
                rainy_day++;
            }
        }

        cout << (sunny_day > rainy_day ? "YES" : "NO") << endl;
    }
    
    return 0;
}