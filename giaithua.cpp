#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int dapan = 0;
        for (int i = 1;pow(5,i) <=n;i++)
        {
            long long int x = n/ pow(5,i);
            dapan = dapan + x
        }
        cout << dapan << '\n';
    }
}