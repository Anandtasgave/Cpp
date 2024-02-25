#include <iostream>
using namespace std;

class parent1
{
public:
    parent1()
    {
        cout << "Parent1 class" << endl;
    }
};

class parent2
{
public:
    parent2()
    {
        cout << "Parent2 class" << endl;
    }
};

class child1: public parent1{
public:
child1(){
    cout<<"Child class"<<endl;
}
};

class child2: public parent2{
public:
child2(){
    cout<<"Child class"<<endl;
}
};

class grandchild: public child1{
public:
grandchild(){
    cout<<"Grandchild class"<<endl;
}
};

int main()
{
    child1 c;
}