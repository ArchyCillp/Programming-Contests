//#include<cstdio>
//#include<algorithm>
//#define MAXN 300005
//#define MAXW 100005
//using namespace std;
//
//struct BIT{
//    int a,b;
//    int Num;
//};
//BIT tr[MAXN];
//int C[MAXN],n,res[MAXN],same[MAXN],maxw=0;
//int lowerBit(int i){
//    return i&(-i);
//}
//void addBIT(int pos,int x){
//    for (;pos<=maxw;pos+=lowerBit(pos)){
//        C[pos]+=x;
//    }
//}
//int sumBIT(int pos){
//    int ans=0;
//    for (;pos>0;pos-=lowerBit(pos)){
//        ans+=C[pos];
//    }
//    return ans;
//}
//bool cmp(BIT x,BIT y){
//    if (x.a!=y.a) return x.a<y.a;
//        else return x.b<y.b;
//}
//int main(){
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        scanf("%d%d",&tr[i].a,&tr[i].b);
//        if (tr[i].b>maxw) maxw=tr[i].b;
//        tr[i].Num=i;
//    }
//    sort(tr+1,tr+n+1,cmp);
//    for (int i=1;i<=n;i++){
//        res[tr[i].Num]+=sumBIT(tr[i].b);
//        addBIT(tr[i].b,1);
//        int tmp=i;
//        if (tmp>1 && (tr[tmp-1].a==tr[tmp].a) && (tr[tmp-1].b==tr[tmp].b)){
//            ++same[tmp];
//            res[tr[i].Num]-=(same[tmp-1]+1);
//        }
//    }
//     for (int i=1;i<=n;i++){
//        printf("%d\n",res[i]);
//    }
//    return 0;
//}
