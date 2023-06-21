#include <iostream>
using namespace std;

int fact(int n)
{
   int fac=1;
   for(int i=1;i<=n;i++)
   {
    fac=fac*i;
   }
   return fac;
}
int main()
{
    int n;
    int i, j;

    cout << "Enter the value of n : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout<<endl;
    }
    return 0;
}