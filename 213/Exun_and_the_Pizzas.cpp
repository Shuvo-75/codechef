#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, r;
    cin >> n >> k >> r;

    if(n > k)
    {
        cout << (n-k) * r << endl;
    }
    return 0;
}