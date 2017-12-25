//#include<cstdio>
//#define INF 2100000000
//#define MAXN 105
//using namespace std;
//
//int bus[MAXN][MAXN];
//int fee[MAXN][MAXN];
//int n,m;
//
//int min3(int a,int b,int c){
//    int ans=a<b?a:b;
//    ans=ans<c?ans:c;
//    return ans;
//}
//
//int main(){
//    scanf("%d%d",&n,&m);
//    for (int i=1;i<=n;i++){
//        for (int j=1;j<=m;j++)
//            scanf("%d",&bus[i][j]);
//    }
//    for (int i=1;i<=n;i++){
//        for (int j=1;j<=m;j++){
//            if (j-1==0) fee[i-1][j-1]=INF;
//            if (j+1>m) fee[i][j+1]=INF;
//            fee[i][j]=min3(fee[i-1][j-1],fee[i-1][j],fee[i-1][j+1])+bus[i][j];
//        }
//    }
//    int ans=INF;
//    for (int i=1;i<=m;i++)
//        ans=(fee[n][i]<ans)?fee[n][i]:ans;
//    printf("%d",ans);
//    return 0;
//}
