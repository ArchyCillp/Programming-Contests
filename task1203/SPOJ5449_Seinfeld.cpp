//#include <cstdio>
//using namespace std;
//int top;
//
//char readchar(){
//    char ch;
//    ch=getchar();
//    while(ch!='{' && ch!='}' && ch!='-' && ch!='\n'){
//        ch=getchar();
//    }
//    return ch;
//}
//
//int main(){
//    int t=1;
//    while(1){
//        top=0;
//        int cnt=0;
//        while(1){
//            char ch;
//            ch=readchar();
//            if (ch=='\n'){
//                 cnt+=top/2;
//                 printf("%d. %d\n",t++,cnt);
//                 break;
//            }
//            if (ch=='-'){
//                cnt=-1;
//                break;
//            }
//            if (ch=='}'){
//                if (top>0){
//                    top--;
//                    continue;
//                }
//                else if (top==0){
//                    cnt++;
//                    top++;
//                }
//                continue;
//            }
//            if (ch=='{'){
//                top++;
//            }
//        }
//        if (cnt==-1) break;
//    }
//    return 0;
//}
