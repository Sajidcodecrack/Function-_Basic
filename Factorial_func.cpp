#include <iostream>
using namespace std;
int fact(int n)
{
    int i;
    int fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
         cout<<fac<<endl;

    }
    cout<<"Final result : "<<fac<<endl;
   
    return fac;
}
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    cout << "Factorial value is : " << endl;
    fact(n);
    return 0;
}