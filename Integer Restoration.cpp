#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char q[10],a[10];
void shift(char ac[10],char bc[10])ß
{
int sta=strlen(ac),stb=strlen(bc);
for(int i=0;i<sta;i++){
if(i==sta-1)
ac[i]=bc[0];
else if(i<sta-1)
ac[i]=ac[i+1];
a[i]=ac[i];
}
for(int i=0;i<stb;i++){
if(i==stb-1)
bc[i]='x';
else if(i<stb-1)
bc[i]=bc[i+1];
q[i]=bc[i];
}
}
int main()
{
char m[10],m1[10];
int n,rem,rev,i,cy=0;
printf("\nenter the dividend : ");
scanf("%s",&q);
printf("\nenter the divisor : ");
scanf("%s",&m);
strcpy(m1,m);
i=0;
for(int j=0;j<=4;j++){
a[j]='0';
if(j==0)
m[j]='0';
else
m[j]=m1[j-1];
}
while(i!=strlen(m)){
if(m[i]=='0')
m[i]='1';
else
m[i]='0';
i++;
}
i=i-1;
while(i>=0){
n=m[i];
if(n=='1' && i==strlen(m)-1){
cy=1;
m[i]='0';
}
else if(n=='1' && cy==1){
cy=1;
m[i]='0';
}
else if(n=='1' && cy==0 || n=='0' && cy==1 || n=='0' && i==strlen(m)-1){
cy=0;
m[i]='1';
}
else{
cy=0;
m[i]='0';
}
i--;
}
printf("%s",m);
shift(a[10],q[10]);
}

