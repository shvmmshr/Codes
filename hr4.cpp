#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    str = "";
    if (n == 1)
    {
        str = "one";
    }
    if (n == 2)
    {
        str = "two";
    }
    if (n == 3)
    {
        str = "three";
    }
    if (n == 4)
    {
        str = "four";
    }
    if (n == 5)
    {
        str = "five";
    }
    if (n == 6)
    {
        str = "six";
    }
    if (n == 7)
    {
        str = "seven";
    }
    if (n == 8)
    {
        str = "eight";
    }
    if (n == 9)
    {
        str = "nine";
    }
    if (n > 9)
    {
        str = "Greater than 9";
    }
    cout << str << endl;
    return 0;
}