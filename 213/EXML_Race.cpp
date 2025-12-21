#include <bits/stdc++.h>
using namespace std;

void min_label(int x)
{
    vector<int> store;
    while (x--)
    {
        int a, b;
        cin >> a >> b;
        store.push_back(a/b);
    }

    int max_value = *max_element(store.begin(), store.end());
    int min_index = max_element(store.begin(), store.end()) - store.begin();

    cout << min_index + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        min_label(x);
    }
    
    return 0;
}