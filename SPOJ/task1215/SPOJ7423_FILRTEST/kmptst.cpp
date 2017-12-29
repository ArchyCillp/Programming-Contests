//#include <cstdio>
//#include <cstring>
//#define MAXN 1000006
//using namespace std;
//
//int next[MAXN];
//char sp[MAXN];
//char st[MAXN];
//int n;
//int m;
//int cnt;
//int FSA(){
//    next[0] = 0;
//    int q=1;
//    int k=0;
//    for (q=1;q<m;++q){
//        while(k>0&&sp[q]!=sp[k]){
//            k = next[k-1];
//        }
//        if(sp[q]==sp[k]){
//            k++;
//        }
//        next[q] = k;
//    }
//
//    /*for (int i=0;i<m;i++){
//        printf("%d ",next[i]);
//    }printf("\n");*/////////////////////////////////
//}
//void KMP(){
//
//    int last=FSA();
//    int q = 0;
//    for (int i=0;i<n;i++){
//
//        while (q>0 && sp[q]!=st[i]){
//            q = next[q-1];
//        }
//        if (sp[q]==st[i]){
//            q++;
//        }
//        if (q==m){
//            cnt++;
//            //printf("at %d\n",i);//////////////////////////
//        }
//    }
//}
//int main(){
//    int t;
//    scanf("%d",&t);
//    while(t-->0){
//        cnt = 0;
//        scanf("%d",&n);
//        scanf("%s",st);
//        scanf("%d",&m);
//        scanf("%s",sp);
//        KMP();
//        printf("%d\n",cnt);
//    }
//
//    return 0;
//}
