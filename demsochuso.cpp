#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        string n;
        cin >> n;
        if(n[0]=='-') cout << n.size()-1<<'\n';
        else cout << n.size()<<'\n';
    }
}