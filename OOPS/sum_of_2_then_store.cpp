#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    void input()
    {
        cout << "\nEnter a number: ";
        cin >> a;
    }
    void display()
    {
        cout << "\nThe value: "<< a;
    }
    int sum(abc t,abc p)
    {
        a= t.a+p.a;
    }
};
int main()
{
    abc ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3.sum(ob1,ob2);
    ob3.display();
}