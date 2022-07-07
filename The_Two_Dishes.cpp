#include <iostream>
using namespace std;
int main()
{
    int n,t,s;
    cin >>t;
    while(t--){
        cin>>n>>s;
        if(s<=n)
            cout<<s<<'\n';
        else 
            cout<<n*2-s<<'\n';
    }
}
//in this code i learn endl is almost 5sec or more then 5 sec time take as compare to '\n'