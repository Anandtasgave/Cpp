#include <iostream>
#include <cmath>
using namespace std;

void fib(int n)
{
    int t1 = 0, t2 = 1, i, nexterm;

    for (i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nexterm = t1 + t2;
        t1 = t2;
        t2 = nexterm;
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    fib(n);
}