// 1
// 1 2
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

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
    int n, i, j;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <=i; j++)

        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout<<endl;
    }
}