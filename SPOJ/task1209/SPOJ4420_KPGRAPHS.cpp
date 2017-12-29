//#include<cstdio>
//#include<cmath>
//#define MAXN 1005
//#define LL long long
//#define MOD 1000000007
//using namespace std;
//
//LL mpower(LL a,LL b,LL m){
//    if (b==0) return 1;
//    LL ans=mpower(a,b/2)%m;
//    ans=ans*ans%m;
//    if (b%2==1) ans=(ans*(a%m))%m;
//    return ans;
//}
//LL factorial(LL number)
//{   if(number<=1)
//        return 1;
//    else
//        return number*factorial(number-1);
//}
//LL C(LL n,LL k){
//    LL ans=1;
//    LL ans=factorial(n)/factorial(n-k)/factorial(k);
//    return ans;
//}
//
//LL f[MAXN],g[MAXN],h[MAXN];
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    for (int i=1;i<=n;i++) {
//        h[n]=mpower(2,n*(n-1)/2,MOD);
//    }
//
//
//    return 0;
//}
