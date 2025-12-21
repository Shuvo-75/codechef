#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;

    int remain = h - x; 
    vector<int> arr(n);
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(remain <= arr[i])
        {
            found = true;
        }
    }

    if(found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}