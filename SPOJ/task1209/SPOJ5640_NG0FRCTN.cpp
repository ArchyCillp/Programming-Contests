//#include<cstdio>
//#define MAXN 100
//using namespace std;
//
//int stk[MAXN],top;
//
//int main(){
//    int n;
//    while(1){
//        scanf("%d",&n);
//        if (!n) break;
//        top=0;
//        while(n>0){
//            stk[top++]=n;
//            n=n/2;
//        }
//        int l=1,r=1,cur;
//        top-=2;
//        while (top>=0){
//            cur=stk[top--];
//            if (cur%2==1){
//                l=l+r;
//            }else {
//                r=l+r;
//            }
//        }
//        printf("%d/%d\n",l,r);
//    }
//    return 0;
//}
