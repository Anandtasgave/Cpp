#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    int i, fact = 1;

    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r,ans;

    cin >> n >> r;

    ans = fact(n) / (fact(r) * fact(n - r));

    cout << ans;
}