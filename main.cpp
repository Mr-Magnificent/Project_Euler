#include <iostream>

using namespace std;

int main()
{
    int c=0,k=0;
    long long int i=1, m;
    while(c!=10001)
    {
        for(m=1; m<=i; m++)
        {
            if(i%m==0)
                k++;
        }
    if(k==2)
        {
            c++;
            cout<<i<<"\t";
        }
    i++;
    k=0;
    }
cout<<i-1;
}
