#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> arr(x);
        int count2 = 0; 
        int count1 = 0; 
        int count3 = 0; 

        for(int i = 0; i < x; i++)
        {
            cin >> arr[i];
            if(arr[i] == 2)
            {
                count2++; 
            }
            if(arr[i] == 1)
            {
                count1++;
            }
            if(arr[i] == 3)
            {
                count3++; 
            }
        }

        int update13 = min(count1, count3);

        int update2 = max(0, count2 - 1);
        
        cout << update13 + update2 << endl;

    }
    
    return 0;
}