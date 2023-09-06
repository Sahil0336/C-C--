#include<iostream>
using namespace std;
void show(int a)
{
    cout << "\nValue: " << a;
}
void show()
{
    cout << "\nNothing to show...";
}
void show(int a, int b)
{
    cout << "\nValues are: " <<a<<" "<<b;
}
int main()
{
    show(23);
    show();
    show(21,30);
    return 0;
}