#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        long long X;
        cin >> X;

        string s;
        cin >> s;

        long long car = 0, chef = 0;

        for (char c : s) 
        {
            if (c == 'C') car += 2;
            else if (c == 'N') chef += 2;
            else {
                car++;
                chef++;
            }
        }

        if (car > chef) 
        {
            cout << 60 * X << endl;
        }else if (car < chef) {
            cout << 40 * X << endl;
        }
        else { 
            cout << 55 * X << endl;
        }
    }
    return 0;
}
