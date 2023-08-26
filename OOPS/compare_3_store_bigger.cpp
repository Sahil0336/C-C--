#include <iostream>
using namespace std;
class abc
{
    int a;

public:
    void input(char *p)
    {
        cout << "\nEnter the " << p << "number ";
        cin >> a;
    }
    void display()
    {
        cout << "\nThe highest value is: " << a;
    }
    int max(abc t1, abc t2, abc t3)
    {
        a = t1.a;
        if (a < t2.a)
            a = t2.a;
        if (a < t3.a)
            a = t3.a;
    }
};
int main()
{
    abc ob1, ob2, ob3, ob4;
    ob1.input("First  ");
    ob2.input("Second  ");
    ob3.input("Third  ");
    ob4.max(ob1, ob2, ob3);
    ob4.display();
}