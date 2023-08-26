#include <iostream>
using namespace std;
class abc
{
    int a;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    void display()
    {
        cout << "\nBigger Value Between two: " << a;
    }
    int compare(abc t)
    {
        if (a > t.a)
            return 1;
        else
            return 0;
    }
};
int main()
{
    abc ob1, ob2, ob3;
    ob1.input();
    ob2.input();
    if (ob1.compare(ob2))
    {
        ob3 = ob1;
    }
    else
        ob3 = ob2;
    ob3.display();
}