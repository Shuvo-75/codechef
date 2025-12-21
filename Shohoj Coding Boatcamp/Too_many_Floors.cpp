#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int floor_x = ceil((double)x / 10);
        int floor_y = ceil((double)y / 10);

        cout << abs(floor_x - floor_y) << endl;

    }
    return 0;
}