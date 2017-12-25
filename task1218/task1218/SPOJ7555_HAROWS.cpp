//#include<cstdio>
//#include<cstring>
//#define MAXN 10
//using namespace std;
//
//int n,ans;
//int arr[MAXN];
//void init(){
//    memset(arr,0,sizeof(arr));
//    ans=0;
//}
//
//int main(){
//    int t,cnt=0;
//    scanf("%d",&t);
//    while(t--){
//        init();
//        char xx[10];
//        scanf("%d",&n);
//        for (int i=0;i<n;i++){
//
//            scanf("%s",xx);
//            for(int j=0;j<n;j++){
//                if (xx[j]=='1') arr[i]=j;
//            }
//
//        }
//        for (int i=0;i<n;i++){
//            if (arr[i]<=i) continue;
//            for(int j=i;j<n;j++){
//                if (arr[j]<=i){
//                    int tmp=arr[j];
//                    for (int k=j;k>i;--k){
//                        arr[k]=arr[k-1];
//                        ++ans;
//                    }
//                    arr[i]=tmp;
//                    break;
//                }
//            }
//        }
//        printf("Case #%d: %d\n",++cnt,ans);
//    }
//    return 0;
//}
