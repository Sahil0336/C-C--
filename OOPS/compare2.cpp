// Compare two objects to check equality.....
// The code..

#include <iostream>
using namespace std;
class abc
{
    int a;

public:
    void input(char *p)
    {
        cout << "\nEnter the " << p << " number: ";
        cin >> a;
    }

    int compare(abc t)
    {
        if (a == t.a)
            return 1;
        else
            return 0;
    }
};
int main()
{
    abc ob1, ob2;
    ob1.input("first");
    ob2.input("second");
    if (ob1.compare(ob2))
        cout << "#################\nThe values are equal...\n";
    else
        cout << "%%%%%%%%%%%%%%%%\nThe values are not equal...\n";
}