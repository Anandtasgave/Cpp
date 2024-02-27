#include <iostream>
using namespace std;

class rectangle
{
public:
    int l;
    int b;

    rectangle() // default constructor
    {
        l = 0;
        b = 0;
    }

    rectangle(int x, int y) // parameterised constructor
    {
        l = x;
        b = y;
    }

    rectangle(rectangle &r) // copy constructor
    {
        l = r.l;
        b = r.b;
    }

    ~rectangle() // destruuctor
    {
        cout << "Destructor is called"<<endl;
    }
};

int main()
{
    rectangle* r1=new rectangle();
    cout << r1->l << " " << r1->b << endl;
    delete r1;

    rectangle r2(7, 9);
    cout << r2.l << " " << r2.b << endl;

    rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;
}