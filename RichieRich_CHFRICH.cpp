#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, x = 0, t = 0;
    // a: current worth
    // b: goal worth
    // x: per year increase
    cin >> t;
        while (t-- != 0)
    {
        cin >> a >> b >> x;        
        cout << (b-a) / x<<endl;
      
    }
}