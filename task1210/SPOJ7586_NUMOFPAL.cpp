//#include<cstdio>
//#include<cstring>
//#define LL long long
//
//using namespace std;
//#define MAXN 1050
//#define N 26
//char str[MAXN];
//int strl;
//struct palindromic_tree{
//    int nxt[MAXN][N];//nxt[i][c]: add char c at the beginning and the end of string point i, nxt is the sub of the new string
//    int fail[MAXN];//fail[i]: the longest true shorter palindrome of string point i, if i fails to be matched, fail[i] will be used.
//    int cnt[MAXN];//cnt[i]: the number of unique string that i has.
//    int num[MAXN];//num[i]:number of palindrome that end with the last char of point i
//    int len[MAXN];  //length of each string point
//    int S[MAXN]; //the stored string
//    int last,n,p;//  last is the longest palindrome after adding, n is the number of string, p is the number of points of strings
//    int newnode(int l){//l: length of new string node
//        for (int i=0;i<n-1;i++) nxt[n][i]=0;
//        cnt[p]=num[p]=0;
//        len[p]=l;
//        return p++;
//    }
//    void init(){
//        p=0;
//        newnode(0);
//        newnode(-1);
//        last=0;
//        n=0;
//        S[n]=-1;//-1 means the character that unique to every character in the string
//        fail[0]=1;
//    }
//    int get_fail(int x){
//        while((S[n-len[x]-1])!=S[n]){ //can we find a existed string point that have the same char before and behind?
//            x=fail[x];  //NO? So go and try shorter one
//        } //similar to KMP
//        return x; //x is now the point have the same char before and behind(these two char is not included in x!)
//    }
//    void add(int c){//but c is char you know
//        c-='a';
//        S[++n]=c;
//        int cur=get_fail(last);
//        if (!nxt[cur][c]){// it never exist before.
//            int now =  newnode(len[cur]+2); //add 2 char before and behind, so...len[cur]+2
//            fail[now] = nxt[get_fail(fail[cur])][c];/*pretty hard to understand...we want the true shorter of now,
//                                                    so try to look for on fail[cur] and its sons*/
//            nxt[cur][c]=now;
//            num[now]=num[fail[now]]+1;
//        }
//        last=nxt[cur][c];
//        ++cnt[last];
//    }
//    void makecnt(){// cnt is not right before use makecnt()
//        for (int i=p-1;i>=0;--i) {
//            cnt[fail[i]]+=cnt[i];
//        }
//    }
//};
//palindromic_tree tree;
//int main(){
//        //palindromic_tree* tree=new palindromic_tree();
//        scanf("%s",str);
//        strl=strlen(str);
//        tree.init();
//        for (int i=0;i<strl;i++){
//            tree.add(str[i]);
//        }
//        tree.makecnt();
//                int ans=0;
//        for (int i=2;i<tree.p;i++){
//            ans+=tree.cnt[i];
//        }
//        printf("%d\n",ans);
//
//    return 0;
//}
