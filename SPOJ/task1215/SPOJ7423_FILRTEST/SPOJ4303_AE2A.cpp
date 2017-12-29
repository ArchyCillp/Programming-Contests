//#include <iostream>
//#include <cstring>
//#include <cmath>
//#define MAXN 1000
//using namespace std;
//
///*const double M_SQRT1_2 = sqrt(0.5);
//double normalCFD(double value)
//{
//    return 0.5*erfc(-value*M_SQRT1_2);
//}*/
//
//double dp[MAXN*6][MAXN];
//int n,k;
//bool inbound(int i,int j){
//    if (i<1 || j<1) return false;
//    if (i<j || i>6*j) return false;
//    return true;
//}
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        scanf("%d%d",&n,&k);
//        if ((n>900 && k>4000)||(k>6*n || k<n)) {
//            printf("0\n");
//            continue;
//        }
//        for (int i=0;i<k+5;i++)
//            for (int j=0;j<n+5;j++)
//            dp[i][j]=0;
//        for (int i=1;i<=6;i++) dp[i][1]=1.0/6.0;
//        for (int j=2;j<=n;j++){
//            for (int i=j;i<=k;i++){
//                for (int kk=1;kk<=6;kk++){
//                    if (inbound(i-kk,j-1)){
//                        dp[i][j]+=dp[i-kk][j-1]/6.0;
//                    }
//                }
//            }
//        }
//        printf("%d\n",(int)(dp[k][n]*100));
//    }
//
//    return 0;
//}
//
//
//
//
//
////int main()
////{
////    int n,k;
////    n=1;k=1;
////    int zero=0;
////    for (n=1;n<1000;n++){
////        for (k=n;k<6*n;k++){
////            if (zero>1000) {
////                printf("%d %d",n,k-zero);
////                goto l1;
////            }
////            double ans=normalCFD((k*1.0-3.5*n)/(sqrt(n*35.0/12.0)))-normalCFD((k*1.0-1.0-3.5*n)/(sqrt(n*35.0/12.0)));
////            if (ans==0) zero++;
////            else zero=0;
////        }
////    }
////    return 0;
////}
