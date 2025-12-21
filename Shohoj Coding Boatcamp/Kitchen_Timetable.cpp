#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int arr1[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr1[i];
	    }
	    
	    int count = 0;
	    int previous_time = 0;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] - previous_time >= arr1[i])
	        {
	            count++;
	        }
	        previous_time = arr[i];
	    }
	    cout << count << endl;
	    
	}

}
