// X - Dividing Stamps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    int arr[t];
    bool find = false;
    long long sum = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    long long new_sum = t * (t + 1)/2;
    if(sum == new_sum)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    
    return 0;
}