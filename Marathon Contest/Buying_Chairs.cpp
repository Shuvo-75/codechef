#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, p, k;
        cin >> w >> p >> k;

        int total_point = 0; 
        if(w <= k)
        {
            total_point += (w * 2);
            k -= w;
            if(k <= p)
            {
                total_point += (k);
                k -= k;
            }
        }else
        {
            total_point += (k * 2);
            k -= k;
        }

        cout << total_point << endl;
    }
    
    return 0;
}