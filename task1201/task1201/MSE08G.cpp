//#include<cstdio>
//#include<algorithm>
//#define LL long long
//#define LIMIT 1000000000000
//#define MAXN 10000000
//using namespace std;
//LL nlist[MAXN],nsize=0;
//LL lucky[MAXN],lucksize;
//LL verylucky[MAXN],verysize;
//int mul[MAXN];
//
//LL quickpower(LL n,LL e){
//    if (e==0){
//        return 1;
//    }
//    LL ans=quickpower(n,e>>1);
//    ans=ans*ans;
//    if (e%2) ans*=n;
//    return ans;
//}
//void makelist(){
//    int head=0,tail=0;
//    lucky[tail++]=4;
//    lucky[tail++]=7;
//    while(true){
//        lucky[tail++]=lucky[head]*10+4;
//        lucky[tail++]=lucky[head]*10+7;
//        if (lucky[tail-1]>LIMIT){
//            break;
//        }else{
//            head++;
//        }
//    }
//    lucksize=tail-2;
//    for (int i=lucksize-5;i<lucksize;i++) printf("%I64d \n",lucky[i]);
//
//    LL ans=1;
//    bool ok=true;
//    verysize=0;
//    int maxpos=0;
//    while(ok){
//        int pos=0;
//        while (pos<lucksize){
//            if (ans>((LIMIT*1.0)/(lucky[pos]*1.0))){
//                if (maxpos==8190){
//                    ok=false;
//                    break;
//                }
//                ans/=quickpower(lucky[pos],mul[pos]);
//                mul[pos]=0;
//                pos++;
//                if (pos>maxpos){
//                     maxpos=pos;
//                     //printf("%d ",maxpos);
//                }
//
//            }else{
//                mul[pos]++;
//                ans*=lucky[pos];
//                break;
//            }
//        }
//        if (ok && ans<LIMIT){
//            verylucky[verysize++]=ans;
//        }
//    }
//    sort(verylucky,verylucky+verysize);
//    int top1=0,top2=0;
//    while(top1<lucksize || top2<verysize){
//        if (top1>=lucksize){
//            nlist[nsize++]=verylucky[top2++];
//        }
//        if (top2>=verysize){
//            nlist[nsize++]=lucky[top1++];
//        }
//        if (lucky[top1]>verylucky[top2]){
//            nlist[nsize++]=verylucky[top2++];
//        }
//        if (lucky[top1]<verylucky[top2]){
//            nlist[nsize++]=lucky[top1++];
//        }
//        if (lucky[top1]==verylucky[top2]){
//            nlist[nsize++]=lucky[top1++];
//            top2++;
//        }
//    }
//
//
//    //for(int i=0;i<verysize;i++) printf("%I64d ",verylucky[i]);
//    printf("size1:%I64d\nsize2:%I64d\nsize3:%I64d",lucksize,verysize,nsize);
//    printf("\n");
//    printf("%I64d ",verylucky[verysize-1]);
//
//}
//int main(){
//    int t;
//    scanf("%d",&t);
//    makelist();
//
//    while(t-->0){
//
//    }
//    return 0;
//}
