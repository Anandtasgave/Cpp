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
    int n;
    cin >> n;
    int ans = fact(n);

    cout << "Factorial of " << n << " is " << ans;
}