#include<iostream>
using namespace std;
void show(int a, int b=0, int c=0)
{
    cout << "\nValues are: "<<a<<" "<<b<<" "<<c;
}
int main()
{
    show(21);
    show(21,30,33);
    show(21,30);
}