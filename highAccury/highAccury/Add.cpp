//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//int const L=110;
//
//char * add(char* sa,char* sb);
//char* sub(char* sa,char* sb,bool& flag);
//int cmp(char* sa,char* sb);
//
//int main(){
//    char* sa=new char[L];
//    char* sb=new char[L];
//    while(1){
//        scanf("%s%s",sa,sb);
//        char* ans;
//        ans=add(sa,sb);
//        printf("%s\n",ans);
//        bool flag;
//        ans=sub(sa,sb,flag);
//        printf("%c%s\n",flag?'-':'+',ans);
//    }
//    return 0;
//}
//
//char * add(char* sa,char* sb){
//    int na[L]={};
//    int nb[L]={};
//    char* ans=new char[L]();
//    int la=strlen(sa),lb=strlen(sb);
//    for (int i=0;i<la;i++) na[la-i-1]=sa[i]-'0';
//    for (int i=0;i<lb;i++) nb[lb-i-1]=sb[i]-'0';
//    int lmax=la<lb?lb:la;
//    for (int i=0;i<lmax;i++) nb[i]+=na[i] ,nb[i+1]+=nb[i]/10,nb[i]=nb[i]%10;
//    if (nb[lmax]) ++lmax;
//    for (int i=0;i<lmax;i++) ans[lmax-i-1]=nb[i]+'0';
//    return ans;
//}
//
//char* sub(char* sa,char* sb,bool& flag){
//    int na[L]={};
//    int nb[L]={};
//    flag=0;
//    char* ans=new char[L]();
//    if (cmp(sa,sb)==1){
//        char* tmp=sa;
//        sa=sb;
//        sb=tmp;
//        flag=1;
//    }
//
//    int la=strlen(sa),lb=strlen(sb);
//    for (int i=0;i<la;i++) na[la-1-i]=sa[i]-'0';
//    for (int i=0;i<lb;i++) nb[lb-1-i]=sb[i]-'0';
//    int len=(la<lb)?lb:la;
//    for (int i=0;i<len;i++) {
//        na[i]-=nb[i];
//        if (na[i]<0) na[i]+=10,--na[i+1];
//    }
//    while (!na[len-1]&&len>0) --len;
//    for (int i=0;i<len;i++) ans[len-i-1]=na[i]+'0';
//    return ans;
//};
//int cmp(char* sa,char* sb){
//    int la=strlen(sa),lb=strlen(sb);
//    if (la!=lb) return (la<lb)?1:0;
//    for (int i=0;i<la;i++)
//        if (sa[i]!=sb[i]) return (sa[i]<sb[i])?1:0;
//    return -1;
//}
