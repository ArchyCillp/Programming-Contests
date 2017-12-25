//#include<cstdio>
//#include<cstring>
//#include<ctime>
//
//#define MAXN 101
//using namespace std;
//
//int con[MAXN][MAXN][MAXN][MAXN];
//char mat[MAXN][MAXN];
//int gogo[27];
//void gogogo(){
//    gogo[0]=1;
//    for (int i=1;i<27;i++) gogo[i]=gogo[i-1]<<1;
//}
//
//int Hakmem(unsigned int n) //MIT HAKMEM
//{
//    unsigned int tmp;
//
//    tmp = (n &010101010101)
//     +((n>>1)&010101010101)
//     +((n>>2)&010101010101)
//     +((n>>3)&010101010101)
//     +((n>>4)&010101010101)
//     +((n>>5)&010101010101);
//
//    return (tmp%63);
//}
//int main(){
//    int n,m,kk,ans=0;
//    scanf("%d%d%d",&m,&n,&kk);
//    gogogo();
//    for (int i=0;i<m;i++) scanf("%s",mat[i]);
//    for (int i=0;i<m;i++)
//        for (int j=0;j<n;j++)
//            con[i][j][i][j]=gogo[mat[i][j]-'A'];
//    if (kk==1) ans+=m*n;
//    for (int k=0;k<m;k++)
//        for (int i=0;i<n;i++)
//            for (int j=i+1;j<n;j++){
//                con[k][i][k][j]=con[k][i][k][j-1]|con[k][j][k][j];
//                if (Hakmem(con[k][i][k][j])==kk) ++ans;
//            }
//    for (int i=0;i<m;i++)
//        for (int j=0;j<n;j++)
//            for(int k=i+1;k<m;k++)
//                for(int l=j;l<n;l++){
//                    con[i][j][k][l]=con[i][j][k-1][l]|con[k][j][k][l];
//                    if (Hakmem(con[i][j][k][l])==kk) ++ans;
//                }
//    printf("%d\n",ans);
//
//    return 0;
//}
