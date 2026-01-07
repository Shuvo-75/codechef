// Problem link: https://www.codechef.com/START220D/problems/TWOPLG

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y; 
        cin >> x >> y; 

        int r_x = x, r_y = y; 

        int count = 0; 
        bool complete = false; 
        while (!complete)
        {
            if(r_x > 0 && r_y > 0)
            {
                int min_value = min(r_x , r_y); 
                r_x -= min_value; 
                r_y -= min_value; 
                count += min_value;  
            }
            if(r_x == 0 && r_y > 0)
            {
                int value = r_y; 
                r_y -= r_y; 
                count += 2 * value;  
            }
            if(r_x > 0 && r_y == 0)
            {
                int value = r_x; 
                r_x -= r_x; 
                count += value;  
            }

            if(r_x == 0 && r_y == 0)
            {
                complete = true; 
            }
        }

        if(count % 2 == 0)
        {
            cout << "Bob" << endl; 
        }else
        {
            cout << "Alice" << endl; 
        }
        

    }
    
    return 0;
}