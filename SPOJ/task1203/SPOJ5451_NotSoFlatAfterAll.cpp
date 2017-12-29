//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#define MAXN 1000005
//using namespace std;
//int prime[100000],psize=0,flag[MAXN],dima[80000],dimb[80000];
//void genePrime(){
//    for (int i=2;i<MAXN;i++){
//        if (flag[i]) continue;
//        prime[psize++]=i;
//        int j=2;
//        int del=i*j;
//        while(del<MAXN){
//            flag[del]=1;
//            del=i*(++j);
//        }
//    }
//}
//
//int main(){
//    genePrime();
//    int t=0;
//    while(1){
//        int a,b;
//        scanf("%d%d",&a,&b);
//        if (a==0 && b==0) break;
//        memset(dima,0,sizeof(dima));
//        memset(dimb,0,sizeof(dimb));
//        for (int i=0;i<psize;i++){
//            while(a%prime[i]==0){
//                ++dima[i];
//                a=a/prime[i];
//            }
//            if (a==1) break;
//        }
//        for (int i=0;i<psize;i++){
//            while(b%prime[i]==0){
//                ++dimb[i];
//                b=b/prime[i];
//            }
//            if (b==1) break;
//        }
//        int x=0,d=0;
//        for (int i=0;i<psize;i++){
//            if (dima[i]>0 || dimb[i]>0){
//                 x++;
//                 d+=abs((dima[i]-dimb[i]));
//            }
//        }
//        printf("%d. %d:%d\n",++t,x,d);
//    }
//    return 0;
//}
