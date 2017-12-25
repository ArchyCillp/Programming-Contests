//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#define MAXN 500000
//#define LIMIT 1000000000000
//#define LL long long
//using namespace std;
//LL lk[MAXN];
//LL flk[MAXN];
//int lkn,vlkn;
//int gene(){
//    int head,tail;
//    lk[0]=4;
//    lk[1]=7;
//    head=0;
//    tail=2;
//    while(1){
//        if (lk[head]*10+4>LIMIT) break;
//        lk[tail++]=lk[head]*10+4;
//        if (lk[head]*10+7>LIMIT) break;
//        lk[tail++]=lk[head++]*10+7;
//    }
//    lkn=tail;
//    vlkn=lkn;
//    return lkn;
//}
//void genevlk(LL cv,int pz){
//    LL tmp;
//    for (int i=pz;i<lkn;i++){
//        if (cv>(LIMIT/lk[i]))break;
//        //if ((double)cv*(double)lk[i]>1e+12) break;
//        tmp=cv*lk[i];
//        if (lk[vlkn]!=0) printf("NOOOO!!!!!");/////
//        lk[vlkn++]=tmp;
//        genevlk(tmp,i);
//    }
//}
//int picksame(){
//    int p1=0,p2=0;
//    flk[p1++]=lk[p2++];
//    while(p2<vlkn){
//        if (lk[p2]==lk[p2-1]) ++p2;
//        else flk[p1++]=lk[p2++];
//    }
//    return p1;
//}
//int findpz(LL value){
//    int l=0,r=vlkn-1;
//    while(l<=r){
//        int mid=(l+r)/2;
//        if (flk[mid]==value) return mid;
//        if (flk[mid]>value) r=mid-1;
//        else l=mid+1;
//    }
//    return l-1;
//}
//int main(){
//    gene();
//    for (int i=0;i<lkn;i++){
//        genevlk(lk[i],i);
//    }
//    sort(lk,lk+vlkn);
//    vlkn=picksame();
//    int t;
//    scanf("%d",&t);
//    while (t--){
//        LL frm,to;
//        scanf("%I64d%I64d",&frm,&to);
//        int pfrm=findpz(frm);
//        int pto=findpz(to);
//        if (pfrm!=-1 && flk[pfrm]==frm){
//            pfrm--;
//        }
//        int ans=pto-pfrm;
//        printf("%d\n",ans);
//    }
//
//    return 0;
//}
