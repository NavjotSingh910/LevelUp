#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        if (((u * u) - (2 * a * s)) <= (v * v))
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
    return 0;
}