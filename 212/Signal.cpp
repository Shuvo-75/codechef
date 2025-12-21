#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        string S;
        cin >> N >> S;

        bool seen_silence = false;
        int count_pulse = 0;

        for (char c : S) 
        {
            if (c == '0') 
            {
                seen_silence = true;
            } else if (c == '1' && seen_silence) 
            {
                count_pulse++;
            }
        }

        cout << count_pulse << endl;
    }
    return 0;
}
