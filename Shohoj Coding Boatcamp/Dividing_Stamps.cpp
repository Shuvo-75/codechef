#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t);
    long long sum = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    long long position = (1LL * t * (t+1))/2;

    if(sum == position)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}