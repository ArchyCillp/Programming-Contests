//#include<cstdio>
//#define LL long long
//using namespace std;
//
//LL step[40][2];
//LL hnt(int n,int p){
//    if (step[n][p]>0)return step[n][p];
//    if (n==1){
//        return 1;
//    }
//    step[n][p]+=(1+hnt(n-1,p)*2+hnt(n-1,!p));
//    return step[n][p];
//}
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        LL n;
//        scanf("%I64d",&n);
//        printf("%I64d\n",hnt(n,0)+hnt(n,1));
//    }
//
//    return 0;
//}
