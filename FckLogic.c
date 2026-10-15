#include<stdio.h>
int main(){
int wordlen[10];
int c,i,count;
count=0;
for(i=0;i<10;i++){
wordlen[i]=0;
}
while((c=getchar())!=EOF){
if(c!=' ' && c!='\t' && c!='\n')
count ++;

else if(count>0 && count<10){
wordlen[count]++;
count =0;
}
}

for(i=0;i<10;i++){
printf("Length :%d:%d\n",i,wordlen[i]);
}
}
