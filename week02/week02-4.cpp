#include <stdio.h>
char lineA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char lineB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(char c)
{
    for (int i=0; lineA[i]!=0; i++){
        if(c==lineA[i]) return lineB[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    char ans=mirror_char(c);
    printf("他的鏡像字是:%c",ans);
}
