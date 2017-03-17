#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int l, p=1;
    double a;
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            l= pow(i,2)+ pow(j,2);
            a=sqrt(l);

            if(fmod(a,1)==0)
            {
                if(i+j+a==1000)
                {
                    p=i*j*a;
                    cout<<p;
                    return(0);
                }
            }
        }
    }
}
