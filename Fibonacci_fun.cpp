#include <iostream>
using namespace std;
void fib(int n)
{
    int i;
    int t1 = 0;
    int t2 = 1;
    int next_term;
    for (i = 1; i <= n; i++)
    {

        cout << t1 ;
        if (i != n)
        {
            cout << ",";
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the value of n : " << endl; // Taking inputs //
    cin >> n;
    cout << "Fibonacci series : " << endl;
    fib(n);

    return 0;
}