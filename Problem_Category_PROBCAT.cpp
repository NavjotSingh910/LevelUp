#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 100 && x >= 1)
            cout << "Easy" << '\n';
        else if (x < 200 && x >= 100)
            cout << "Medium" << '\n';
        else if (x <= 300 && x >= 200)
            cout << "Hard" << '\n';
    }
    return 0;
}