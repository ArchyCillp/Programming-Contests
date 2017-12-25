//#include<cstdio>
//#include<algorithm>
//#define LL long long
//#define MAXN 100100
//#define MOD 100000000
//using namespace std;
//LL dp[MAXN];
//struct act{
//    int hajime,owari;
//};
//act classes[MAXN];
//bool cmp(act a,act b){
//    if (a.hajime!=b.hajime) return a.hajime<b.hajime;
//    else return a.owari<b.owari;
//}
//int main(){
//    while(1){
//        int n;
//        scanf("%d",&n);
//        if (n==-1) break;
//        for (int i=1;i<=n;i++){
//            scanf("%d%d",&classes[i].hajime,&classes[i].owari);
//        }
//        dp[n+1]=0;
//        sort(classes+1,classes+n+1,cmp);
//        int e,l,r,m;
//        for(int i=n;i>=1;--i){
//            e=classes[i].owari;
//            l=i+1;
//            r=n;
//            while(l<r){
//                m=(l+r)/2;
//                if (classes[m].hajime<e) l=m+1;
//                else r=m;
//            }
//            if (classes[l].hajime<e){
//                l=n+1;
//            }
//            dp[i]=dp[l]+1;
//            dp[i]+=dp[i+1];
//            dp[i]%=MOD;
//        }
//        dp[1]%=MOD;
//        printf("%08lld\n",dp[1]);
//    }
//
//    return 0;
//}
