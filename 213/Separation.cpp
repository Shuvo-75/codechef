#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        vector<int> geX; 
        vector<int> ltX; 

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] >= x)
                geX.push_back(arr[i]);
            else
                ltX.push_back(arr[i]);
        }

        sort(geX.begin(), geX.end(), greater<int>());
        sort(ltX.begin(), ltX.end());

        vector<int> new_array = geX;
        new_array.insert(new_array.end(), ltX.begin(), ltX.end());

        bool separated = false;
        for(int i = 0; i + 1 < new_array.size(); i++)
        {
            if((new_array[i] < x && new_array[i+1] > x) || (new_array[i] > x && new_array[i+1] < x))
            {
                separated = true; 
                break;
            }
        }

        if(separated)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}
