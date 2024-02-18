#include <iostream>
using namespace std;

class parent
{
public:
    parent()
    {
        cout << "Parent class" << endl;
    }
};

class child1: public parent{
public:
child1(){
    cout<<"Child class"<<endl;
}
};

class child2: public parent{
public:
child2(){
    cout<<"Child class"<<endl;
}
};

class grandchild: public child1,public child2{
public:
grandchild(){
    cout<<"Grandchild class"<<endl;
}
};

int main()
{
    grandchild c;
}