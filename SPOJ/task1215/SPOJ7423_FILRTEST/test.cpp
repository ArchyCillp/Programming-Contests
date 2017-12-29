//#include <iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//long long a[1000000],b[500000];
//int t,n;
//void dog(long long x,int y)
//{
//    int i;
//    double g;
//    long long h;
//    for(i=y;i<=t;i++)
//    {
//        g=double(x)*double(a[i]);
//        if (g>1e12) return ;
//        a[++n]=x*a[i];
//        h=x*a[i];
//        dog(h,i);
//    }
//}
//int find(long long f)
//{
//    int x,y,mid;
//    x=1;
//    y=n;
//    while(x<=y)
//    {
//        mid=(x+y)/2;
//        if (b[mid]==f) return mid;
//        else
//            if (b[mid]>f) y=mid-1;
//            else
//                x=mid+1;
//    }
//    return x-1;
//}
////bool cmp(int x,int y)
////{
////    if (x<y) return true;
////    return false;
////}
//int main() {
//    int g,p,i,x1,y1;
//    long long x,y;
//    a[1]=4;
//    a[2]=7;
//    t=2;
//    x=1;
//    while(1)
//    {
//        p=t;
//        for(i=t;i>=1;i--)
//            if (a[i]<x) break;
//            else
//            {
//                a[++t]=a[i]*10+4;
//                a[++t]=a[i]*10+7;
//            }
//        x=x*10;
//        if (x==1e11) break;
//    }
//    //printf("%d\n",t);
//    sort(a+1,a+t+1);
////    for(i=1;i<=t;i++)
////        printf("%lld\n",a[i]);
//    n=t;
//    for(i=1;i<=t;i++)
//        dog(a[i],i);
//    sort(a+1,a+n+1);
//    //printf("%d\n",n);
//    t=1;
//    b[1]=a[1];
//    for(i=2;i<=n;i++)
//        if (a[i]!=a[i-1]) b[++t]=a[i];
//    n=t;
////    for(i=1;i<=100;i++)
////        cout<<a[i]<<endl;
//    scanf("%d",&g);
//    for(i=1;i<=g;i++)
//    {
//        scanf("%lld%lld",&x,&y);
//        x1=find(x-1);
//        y1=find(y);
//        printf("%d\n",y1-x1);
//    }
//    return 0;
//}
