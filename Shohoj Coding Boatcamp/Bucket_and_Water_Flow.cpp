#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        if((y * z) + w > x)
        {
            cout << "overFlow" << endl;
        }else if((y * z) + w < x)
        {
            cout << "Unfilled" << endl;
        }else
        {
            cout << "filled" << endl;
        }
    }
    
    return 0;
}