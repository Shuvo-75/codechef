#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x = 0.143;
        double y;
        cin >> y;

        cout << llround(pow((x*y), y)) << endl;
    }
    
    return 0;
}