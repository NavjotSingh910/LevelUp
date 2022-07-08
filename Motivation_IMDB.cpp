#include <iostream>
using namespace std;
int main()
{
    int t; // for test case
    cin >> t;
    while (t--)
    {
        int n, x, max = 0; // n for numbers of movies ,x for how many space in hard disk
        // max for store maximum rating
        cin >> n >> x;
        while (n--)
        {
            int s, r; // s for space requried for movie,r for IMBD rating

            cin >> s >> r;
            if (r > max && x >= s)
            {
                max = r;
            }
        }
        cout << max << '\n';
    }
    return 0;
}