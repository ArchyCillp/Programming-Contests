//#include<cstdio>
//#include<cmath>
//#define LL long long
//using namespace std;
//LL gcd(LL a,LL b){
//    if (b==0) return a;
//    return gcd(b,a%b);
//}
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
//        LL k,n,x1,y1,x2,y2;
//        scanf("%I64d%I64d%I64d%I64d%I64d%I64d",&k,&n,&x1,&y1,&x2,&y2);
//        if (k>n){
//            LL tmp=k;
//            k=n;
//            n=tmp;
//        }
//        LL xx=abs(x1-x2);
//        LL yy=abs(y1-y2);
//        if (xx==0 && yy==0){
//            printf("TAK\n");
//            continue;
//        }
//        if (k==0){
//            if (n==0){
//                printf("NIE\n");
//                continue;
//            }
//            if (xx%n!=0 || yy%n!=0 ){
//                printf("NIE\n");
//                continue;
//            }
//            else {
//                printf("TAK\n");
//                continue;
//            }
//        }
//        LL g=gcd(n,k);
//        k=k/g;
//        n=n/g;
//        if (xx%g!=0 || yy%g!=0){
//            printf("NIE\n");
//            continue;
//        }
//        xx=xx/g;
//        yy=yy/g;
//        if ((k%2)!=(n%2)){
//            printf("TAK\n");
//            continue;
//        }
//        if ((xx%2)==(yy%2)){
//            printf("TAK\n");
//            continue;
//        }else{
//            printf("NIE\n");
//            continue;
//        }
//    }
//    return 0;
//}
