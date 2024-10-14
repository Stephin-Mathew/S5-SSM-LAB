#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
 FILE *fp;
 int i,length;
 char line[50],ar[50];
 fp=fopen("objectcode.txt","r");
 fscanf(fp,"%s",line);
 printf("Program name is : ");
 for(i=2;i<5;i++){
  printf("%c",line[i]);
  }
 printf("\n");
 do{
  fscanf(fp,"%s",line);
  if(line[0]=='T'){
   for(i=0;i<6;i++){
    ar[i]=line[i+2];
   }
  ar[i]='\0';
  length=atoi(ar);
  i=12;
 while(line[i]!='\0'){
  if(line[i]!='^'){
   printf("%d : \t%c%c\n",length,line[i],line[i+1]);
   length++;
   i=i+2;
  }
  else{
   i++;
  }
 }
 }
 else if(line[0]=='E'){
  break;
  }
  }
 while(!feof(fp));
 fclose(fp);
}
