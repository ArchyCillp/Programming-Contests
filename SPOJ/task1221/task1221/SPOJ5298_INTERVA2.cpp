//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#define MAXN 200050
//using namespace std;
//
//struct interval{
//    int s,t,id;
//}itv[MAXN];
//int n,tot;
//int ansId[MAXN];
//bool cmp(interval a,interval b){
//    if (a.s!=b.s)
//        return a.s<b.s;
//    else
//        return a.t>b.t;
//}
//bool cmp2(interval a,interval b){
//    return a.t<b.t;
//}
//int C[MAXN];
//int lowerbit(int x){
//    return x&(-x);
//}
//int addBit(int pos,int x){
//    for (;pos<=tot;pos+=lowerbit(pos)){
//        C[pos]+=x;
//    }
//    return 1;
//}
//int getSum(int pos){
//    int ans=0;
//    for (;pos>0;pos-=lowerbit(pos)){
//        ans+=C[pos];
//    }
//    return ans;
//}
//void init(){
///////
//    memset(C,0,sizeof(C));
//    memset(ansId,0,sizeof(ansId));
//}
//
//int main(){
//    while(scanf("%d",&n)!=EOF){
//        init();
//        for (int i=1;i<=n;i++){
//            scanf("%d%d",&itv[i].s,&itv[i].t);
//            itv[i].id=i;
//        }
//        sort(itv+1,itv+n+1,cmp2);
//        int pre=-1;
//        tot=0;
//        for (int i=1;i<=n;i++){
//            if (itv[i].t==pre) itv[i].t=tot;
//            else {
//                pre=itv[i].t;
//                itv[i].t=++tot;
//            }
//        }
//        sort(itv+1,itv+n+1,cmp);
//        int lasts=-1,lastt=-1,lastans=-1;
//        for (int i=1;i<=n;i++){
//            if (itv[i].s==lasts && itv[i].t==lastt){
//                ansId[itv[i].id]=lastans;
//                addBit(itv[i].t,1);
//            }
//            else {
//                lasts=itv[i].s;
//                lastt=itv[i].t;
//                lastans=ansId[itv[i].id]=getSum(tot)-getSum(itv[i].t-1);
//                addBit(itv[i].t,1);
//            }
//        }
//        for (int i=1;i<=n;i++){
//            printf("%d ",ansId[i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
