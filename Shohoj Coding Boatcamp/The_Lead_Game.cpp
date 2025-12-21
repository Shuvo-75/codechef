#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int cum1 = 0, cum2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) 
    {
        int s, t;
        cin >> s >> t;

        cum1 += s;
        cum2 += t;

        int lead = abs(cum1 - cum2);
        if (lead > max_lead) 
        {
            max_lead = lead;
            winner = (cum1 > cum2) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << endl;
    return 0;
}
