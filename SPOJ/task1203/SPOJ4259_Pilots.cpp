//#include<cstdio>
//#define MAXN 10020
//using namespace std;
//
//int ass[MAXN],cap[MAXN];
//int dp[MAXN][MAXN];
//int main(){
//    int n;
//    scanf("%d",&n);
//    for (int i=1;i<=n;i++){
//        scanf("%d%d",&cap[i],&ass[i]);
//    }
//    for (int i=1;i<=n/2;i++) dp[i][0]=ass[i]+dp[i-1][0];
//    for (int j=1;j<=n/2;j++){
//        for (int i=j;i<=n/2;i++){
//                if (i==j) dp[i][j]=dp[i][j-1]+cap[i+j];
//                else if (i>j) dp[i][j]=(dp[i][j-1]+cap[i+j])>(dp[i-1][j]+ass[i+j])?(dp[i-1][j]+ass[i+j]):(dp[i][j-1]+cap[i+j]);
//        }
//    }
//    printf("%d\n",dp[n/2][n/2]);
//    return 0;
//}
