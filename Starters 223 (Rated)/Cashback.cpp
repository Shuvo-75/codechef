// Problem link: https://www.codechef.com/START223D/problems/CASHBACK

#include <iostream>

using namespace std;

int main() 
{
    int x;
    if (cin >> x) 
    {
        if (x >= 200) 
        {
            cout << x - 50 << endl;
        } else 
        {
            cout << x << endl;
        }
    }
    return 0;
}