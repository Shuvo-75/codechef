#include <bits/stdc++.h>
using namespace std;

long long max_score(const string &s, long long k) {
    long long pairs_in_S = 0;
    int n = s.size();

    string t = s;
    // Replace all 'I' to maximize pairs
    for(int i = 0; i < n; i++) {
        if(t[i] == 'I') {
            // match left neighbor if possible
            if(i > 0) t[i] = t[i-1];
            else if(i+1 < n && t[i+1] != 'I') t[i] = t[i+1];
            else t[i] = 'A'; // arbitrary letter
        }
    }

    // Count pairs inside S
    for(int i = 0; i+1 < n; i++) {
        if(t[i] == t[i+1]) pairs_in_S++;
    }

    // Count boundary pair
    long long boundary_pair = (t[0] == t[n-1]) ? 1 : 0;

    long long total = pairs_in_S * k + boundary_pair * (k-1);
    return total;
}

int main() 
{
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) 
    {
        int N;
        long long K;
        cin >> N >> K;
        string S;
        cin >> S;

        cout << max_score(S, K) << "\n";
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// void find_adjucen(int n, int k)
// {
//     string s;
//     cin >> s;
//     if(s.size() != n)
//     {
//         return; 
//     }

//     string result = " ";

//     for(int i = 0; i < k; i++)
//     {
//         result += s;
//     }

//     long long count = 0; 
//     for(int i = 0; i < result.size()-1; i++)
//     {
//         if(s[i] == s[i+1])
//         {
//             count++; 
//         }
//     }

//     cout << count << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         find_adjucen(n, k);
//     }
    
//     return 0;
// }


