#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> problem(4);
    int can_solve = 0; 
    for(int i = 0; i < 4; i++)
    {
        cin >> problem[i];
    }

    for(int i = 0; i < 4; i++)
    {
        if(problem[i] >= 10)
        {
            can_solve++;
        }
    }
    cout << can_solve << endl;
    return 0;
}