#include <iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long s=0,j=0,m=0;
for(int i=1; i<101; i++)
{

    s+=pow(i,2);
    j+=i;
}
//cout<<j<<endl<<s<<endl;
m=pow(j,2);
//cout<<j<<endl;
cout<<(m-s);
}
