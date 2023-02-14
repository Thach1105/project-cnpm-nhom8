#include <iostream>
using namespace std;
void Sum(string a, string b)
{
    string sum = "";
    int nh = 0;
    for(int i = a.size()-1; i>= 0; i--)
    {
        int s= (a[i]- '0') +(b[i]- '0')
        nh = s/10;
        int x = s % 10;
        sum = to_string(x) + sum;
    }
    if(nh >0) sum = to_string(nh) + sum;
    cout << sum<< '\n';
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a;
        cin >> b;
        while(a.size() < b.size()) a= "0" + a;
        while(b.size()< a.size()) b= "0" + b;
        Sum(a,b);
    }
}