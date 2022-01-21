#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char P[80]={"bab"};
char T[80]={"aabbbabb"};
int R,S,K,L,Max,Index;


R=strlen(P);
S=strlen(T);
K=0;
Max=S-R;
while(K<Max)
{
for(L=0;L<R;L++)
{
if(P[L]!=T[K+L])
break;
}
if(L==R)
{
Index=K;
break;
}
else
K=K+1;
}
if(K>Max)
Index=-1;
printf("P=%s",P);
printf("\n T=%s",T);
if(Index!=-1)


printf("\nIndex of P in T is %d",Index);
else
printf("\n P does not exist in T");
getch();
}