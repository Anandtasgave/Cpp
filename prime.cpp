#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i;
    bool flag;
    cin >> n;

    for (i = 0; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = 0;
            break;
        }
    }

    if (flag != 0)
    {
        cout << "Prime";
    }
}