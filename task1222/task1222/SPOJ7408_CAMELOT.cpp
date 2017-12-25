#include<cstdio>
#include<cstring>

using namespace std;

char[60] desk;
int [12] onland;
int main(){
    while(1){
        scanf("%s",desk);
        if (desk[0]=='*') break;
        int citizen=0,palace=16;
        memset(onland,0,sizeof(onland));
        for (int i=0;i<52;i++){
            if (desk[i]=='K' || desk[i]=='J' || desk[i]=='Q'){
                --palace;
            }else {
                ++citizen;
                if (desk[i]=='A') {
                    ++onland[1];
                }
                else {
                    ++onland[desk[i]-'0'];
                }
            }
            if (citizen==palace){

            }
        }

    }
    return 0;
}






/*
int main(){
    for (int i1=0;i1<=10;i1++)
        for (int i2=0;i2<=10;i2++)
            for (int i3=0;i3<=10;i3++)
                for (int i4=0;i4<=10;i4++)
                    if (i1+i2+i3+i4==10 && i1<=i2 && i2<=i3 && i3<=i4) printf("%d %d %d %d\n",i1,i2,i3,i4);

    return 0;
}
*/
