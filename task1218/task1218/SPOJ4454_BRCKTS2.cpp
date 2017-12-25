//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#define LL long long
////#define I64d lld //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//#define MAXN 400000
//using namespace std;
//
//
//
//int n;
//char str[MAXN];
//LL stk[MAXN];
//LL top;
//LL height[MAXN];
//LL maxh[MAXN];
//// 树状数组要保证1-n范围
//
//void init(){
//    top=0;
//    memset(height,0,sizeof(LL)*(n+5));
//    memset(maxh,0,sizeof(LL)*(n+5));
//}
//LL lowerBit(LL i){
//    return i&(-i);
//}
//LL mmax(LL a,LL b){
//    return (a<b)?b:a;
//}
//void addBIT(LL pos,LL x){
//    height[pos]=x;
//    LL lx;
//    while (pos<=n){
//        maxh[pos]=height[pos];
//        lx=lowerBit(pos);
//        for (LL i=1;i<lx;i<<=1){
//            maxh[pos]=mmax(maxh[pos-i],maxh[pos]);
//        }
//        pos+=lx;
//    }
//}
//LL maxInRange(LL x,LL y){
//    LL ans=0;
//    while (y>=x){
//        ans=mmax(height[y],ans);
//        --y;
//        for (;y-lowerBit(y)>=x;y-=lowerBit(y)){
//            ans=mmax(maxh[y],ans);
//        }
//    }
//    return ans;
//}
//
//
//int main(){
//    int t;
//    scanf("%d",&t);
//    while (t--){
//        LL ans=0;
//        char c;
//        LL cnt=1;
//        c=getchar();
//        while (c!='(' && c!=')') c=getchar();
//        while(c=='(' || c==')'){
//            str[cnt++]=c;
//            c=getchar();
//        }
//        n=cnt-1;
//        init();
//        LL fh=0;
//        for (LL i=1;i<=n;i++){
//            c=str[i];
//            if (c=='('){
//                stk[top++]=i;
//                ++fh;
//            }
//            else {
//                --top;
//                LL w=i-stk[top];
//                LL h=maxInRange(stk[top],i)+1;
//                addBIT(i,h);
//                if (fh%2==0) h=-h;
//                --fh;
//                ans+= w*h;
//            }
//        }
//        printf("%I64d\n",ans);
//    }
//    return 0;
//}
