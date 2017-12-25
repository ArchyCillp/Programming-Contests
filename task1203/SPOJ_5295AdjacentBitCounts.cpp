//#include<cstdio>
//#include<cstring>
//#define MAXN 105
//#define LL long long
//using namespace std;
//LL dp[MAXN][2][MAXN];
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        memset(dp,0,sizeof(dp));
//        dp[1][1][0]=dp[1][0][0]=1;
//        int p,n,k;
//        scanf("%d%d%d",&p,&n,&k);
//        for (int i=2;i<=n;i++){
//            for (int k=0;k<i;k++){
//                dp[i][1][k]=((k-1>=0)?dp[i-1][1][k-1]:0)+dp[i-1][0][k];
//                dp[i][0][k]=dp[i-1][1][k]+dp[i-1][0][k];
//            }
//        }
//        printf("%d %I64d\n",p,dp[n][0][k]+dp[n][1][k]);
//    }
//
//    return 0;
//}
