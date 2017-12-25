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
//        LL g = gcd(k, n);
//		LL dx = abs(x1 - x2);
//		LL dy = abs(y1 - y2);
//		if (g > 1) {
//			if ((dx % g != 0) || (dy % g != 0)) {
//				printf("NIE\n");
//				continue;
//			}
//			k /= g;
//			n /= g;
//			dx /= g;
//			dy /= g;
//		}
//		if (k % 2 == 0 || n % 2 == 0) {
//			printf("TAK\n");
//		} else if (dx % 2 + dy % 2 == 1) {
//			printf("NIE\n");
//		} else {
//			printf("TAK\n");
//		}
//    }
//    return 0;
//}
