/////*start time 8:48*/
////#include<cstdio>
////#include<cstring>
////#define MAXN 1005
////#define LL long long
////using namespace std;
////
////bool way[MAXN][MAXN];
////int dp[MAXN][MAXN];
////
////int main(){
////    int t,kase=1;
////    scanf("%d",&t);
////    while(t-->0){
////        int n,m,k;
////        scanf("%d%d%d",&n,&m,&k);
////        for(int i=0;i<=n;i++)
////            for(int j=0;j<=m;j++){
////                dp[i][j]=0;
////                way[i][j]=false;
////            }
////        for (int i=1;i<=k;i++){
////            int a,b;
////            scanf("%d%d",&a,&b);
////            way[a][b]=true;
////        }
////        for (int i=1;i<=n;i++){
////            for (int j=1;j<=m;j++){
////                if (way[i][j]){
////                    dp[i][j]=dp[i][j-1]+1;
////                }
////                else{
////                    dp[i][j]=dp[i][j-1];
////                }
////                dp[i][j]+=dp[i-1][j]-dp[i-1][j-1];
////            }
////        }
////        LL cnt=0;
////        for (int i=1;i<=n;i++)
////            for (int j=1;j<=m;j++){
////                if (way[i][j]){
////                    cnt+=(dp[i-1][m]-dp[i-1][j])+(dp[n][j-1]-dp[i][j-1]);
////                }
////            }
////        printf("Test case %d: %lld\n",kase++,cnt/2);
////    }
////
////    return 0;
////}
