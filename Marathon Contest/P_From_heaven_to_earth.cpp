// P - From heaven to earth

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, v1, v2;
        cin >> n >> v1 >> v2;

        double time_1 = (n * sqrt(2)) / v1;
        double time_2 = (2 * n)/v2;

        if(time_1 < time_2)
        {
            cout << "Stairs" << endl;
        }else
        {
            cout << "Elevator" << endl;
        }
    }
    
    return 0;
}