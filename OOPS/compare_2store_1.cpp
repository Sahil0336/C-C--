#include <iostream>
using namespace std;
class abc
{
    int a;

public:
    void input()
    {
        cout << "\nEnter data: ";
        cin >> a;
    }
    void display()
    {
        cout << "The biggest of them is " << a;
    }
    int compare(abc t1, abc t2)
    {
        if (t1.a > t2.a)
        {
            a = t1.a;
        }
        else
            a = t2.a;
    }
};
int main()
{
    abc ob1, ob2, ob3;
    ob1.input();
    ob2.input();
    ob3.compare(ob1, ob2);
    ob3.display();
}