#include <iostream>

using namespace std;

int main()
{
    int a = 97;
    int b = 141;
    int c = 61;
    int d = 1100001;
    int *p;

    p = &a;
    cout << *p <<" = ";
    p = &b;
    cout << *p <<" = ";
    p = &c;
    cout << *p <<" = ";
    p = &d;
    cout << *p;

    return 0;
}
