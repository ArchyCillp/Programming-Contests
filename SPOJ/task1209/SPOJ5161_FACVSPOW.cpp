#include<cstdio>
#include<math.h>
#define _USE_MATH_DEFINES
using namespace std;
double Pi,E;
int a;
double check(int n){
    double ans=sqrt(2*Pi*n*1.0)*pow((n*1.0)/(a*E),n*1.0);
    return ans;
}

int main(){
    Pi=4*atan(1),E=exp(1);
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        int i;
        int l=4,r=a*3;
        while(l<r){
            i=(l+r)/2;
            double res=check(i);
            if (res<1.0){
                l=i+1;
            }
            else {
                r=i;
            }
        }
        i=l;
        printf("%d\n",i);
    }
    return 0;
}
