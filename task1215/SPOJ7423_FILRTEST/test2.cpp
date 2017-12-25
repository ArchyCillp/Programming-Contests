#include <iostream>
#include <cstdlib>
using namespace std;
long long extended_gcd(long long a,long long b,long long *n,long long *m) {
    if ( b == 0 ) {
       *n=1;
       *m=0;
       return a;
    }
    long long res;
    res=extended_gcd(b,a%b,n,m);
    long long t;
    t=*n;
    *n=*m;
    *m=t-(a/b)*(*m);
    return res;
}
int odd(long long a) {
    return (a%2);
}
int main() {
    int t;
    long long int k,n;
    long long int a,b;
    long long int l,m,p,q;
    long long int x1,x2,y1,y2,x,y;
    cin >> t;
    while ( t-- ) {
          cin >> k >> n >> x1 >> y1 >> x2 >> y2;
          x=x1-x2;
          y=y1-y2;
          if ( x < 0 )
             x=-x;
          if ( y < 0 )
             y=-y;
          long long int res;
          res=extended_gcd(k,n,&a,&b);
          if ( x % res == 0 && y % res == 0 ) {
             l=(x/res)*a;
             m=(x/res)*b;
             p=(y/res)*a;
             q=(y/res)*b;
             if ( odd(l+q) == 0 && odd( m+p) == 0 )
                printf("TAK\n");
             else if ( odd(l+q) == 1 && odd(m+p) == 1 ) {
                  if( odd(n) == 1 || odd(k) == 1 )
                   printf("TAK\n");
                  else
                       printf("NIE\n");
             }
             else if ( odd(k+n) == 1 ) {
                  printf("TAK\n");
             }
             else {
                  printf("NIE\n");
             }
          }
          else {
               printf("NIE\n");
          }
    }
    return 0;
}
