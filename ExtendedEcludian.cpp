/*https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/*/
#include <iostream>
using namespace std;
int d,x,y;
long long int  moduloExpo(long long int a,long long int b,long long int m)
{
    a=a%m;
    if(b==0)
    return 1;
    else 
    {
        if(b%2==0)
        return moduloExpo((x*x)%m,b/2,m);
        else (x*moduloExpo((x*x)%m,(b-1)/2,m))%m;
    }
}

void extededEuclidean(int a,int b)
{
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
    }
    else {
        extededEuclidean(b,a%b);
        int temp=x;
        x=y;
        y=temp-(a/b)*y;
    }
}
int main()
{
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    
    long long int p=moduloExpo(a,b,m);
    extededEuclidean(y,m);
    long long int z=((y%m)*(p%m))%m;
    cout<<z;
    //cout<<x<<y;
}

