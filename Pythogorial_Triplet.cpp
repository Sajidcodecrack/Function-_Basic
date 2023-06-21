#include <iostream>
using namespace std;
bool Detect(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b;
    int c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cout << "Enter the value of x for the triangle :" << endl;
    cin >> x;
    cout << "Enter the value of y for the triangle :" << endl;
    cin >> y;
    cout << "Enter the value of z for the triangle :" << endl;
    cin >> z;
    if (Detect(x, y, z))
    {
        cout << "Pythogorial triplets " << endl;
    }
    else
    {
        cout << "Not a pythogorial triplets " << endl;
    }
    return 0;
}