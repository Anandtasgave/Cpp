#include <iostream>
using namespace std;

string decitohexadeci(string n)
{
    int x = 1, i;
    string ans = "";
    int s = n.size();

   while (x <= n)
        x *= 16;
    x /= 16;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;
        
        if(lastdigit<=9)
        {
            ans=ans+ to_string(lastdigit);
        }
        else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }

    return ans;
}


int main()
{
    int n;
    cin >> n;

    cout << decitohexadeci(n) << endl;
}