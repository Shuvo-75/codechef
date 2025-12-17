#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int total_equal_kilo = x * y;
    if(total_equal_kilo >= 100)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    return 0;
}