//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//#include <algorithm>
//#include <math.h>
//#include <stdio.h>
//
//using namespace std;
//#define MAX 1005
//struct Node
//{
//    int next[26];
//    int len;
//    int sufflink;
//    int num;
//}tree[MAX];
//char s[MAX];
//
//int num;
//int suff;
//bool addLetter(int pos)
//{
//    int cur=suff,curlen=0;
//    int let=s[pos]-'a';
//
//    while(1)
//    {
//        curlen=tree[cur].len;
//        if(pos-1-curlen>=0&&s[pos-1-curlen]==s[pos])
//            break;
//        cur=tree[cur].sufflink;
//    }
//    if(tree[cur].next[let])
//    {
//        suff=tree[cur].next[let];
//        return false;
//    }
//    num++;
//    suff=num;
//    tree[num].len=tree[cur].len+2;
//    tree[cur].next[let]=num;
//    if(tree[num].len==1)
//    {
//        tree[num].sufflink=2;
//        tree[num].num=1;
//        return true;
//    }
//    while(1)
//    {
//        cur=tree[cur].sufflink;
//        curlen=tree[cur].len;
//        if(pos-1-curlen>=0&&s[pos-1-curlen]==s[pos])
//        {
//            tree[num].sufflink=tree[cur].next[let];
//            break;
//        }
//    }
//    tree[num].num=1+tree[tree[num].sufflink].num;
//    return true;
//
//}
//void initTree()
//{
//    num=2;suff=2;
//    tree[1].len=-1;tree[1].sufflink=1;
//    tree[2].len=0;tree[2].sufflink=1;
//}
//int main()
//{
//
//    scanf("%s",s);
//    int len=strlen(s);
//    initTree();
//    long long int ans=0;
//    for(int i=0;i<len;i++)
//    {
//         addLetter(i);
//         ans+=tree[suff].num;
//    }
//    printf("%lld\n",ans);
//
//
//    return 0;
//}
