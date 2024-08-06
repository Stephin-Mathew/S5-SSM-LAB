#include <stdio.h>
#include <stdlib.h>
void main(){
 int ch=1,c;
 while(ch==1){
  printf("Enter Choice : 1)Fcfs\n 2)Scan\n 3)Cscan\n 4)Exit\n");
  scanf("%d",&c);
  switch(c){
  
   case 1:{ 
    int limit,head,i,distance=0,seektime=0;
 printf("Enter number of requests : \n");
 scanf("%d",&limit);
 int req[limit];
 printf("Enter Initial head position :\n");
 scanf("%d",&head);
 printf("Enter Requests :\n");
 for(i=1;i<=limit;i++){
  scanf("%d",&req[i]);
 }
 req[0]=head;
 printf("FCFS SCHEDULING \n");
 for(i=0;i<limit;i++){
  distance=abs(req[i]-req[i+1]);
  seektime+=distance;
  printf("Head movement from %d to %d is %d \n",req[i],req[i+1],distance);
 }
 printf("Total Seektime is : %d \n",seektime);
 break;
 }
 
 
 case 2:{
 int limit,head,i,movement=0,direction,size,temp;
 printf("Enter Size of the disk :\n");
 scanf("%d",&size);
 printf("Enter number of requests : \n");
 scanf("%d",&limit);
 int req[limit];
 printf("Enter Requests :\n");
 for(i=0;i<limit;i++){
  scanf("%d",&req[i]);
 }
 printf("Enter Initial head position :\n");
 scanf("%d",&head);

 for(i=0;i<limit;i++){
  for(int j=i+1;j<limit;j++){
   if(req[i]>req[j]){
    temp=req[i];
    req[i]=req[j];
    req[j]=temp;
    }
   }
  }
 printf("Enter Direction :\n");
 scanf("%d",&direction);
 if(direction==1){
  movement+=size-1-head;
  if(req[0]<head){
   movement+=size-req[0];
  }
 }
 else{
  movement+=head;
  if(req[limit-1]>head){
   movement+=req[limit-1];
  }
 }
 
 printf("Total Head Movement : %d \n",movement);
 break;
  }
  
  
  case 3:{
 int limit,head,i,movement=0,direction,size,temp;
 printf("Enter Size of the disk :\n");
 scanf("%d",&size);
 printf("Enter number of requests : \n");
 scanf("%d",&limit);
 int req[limit];
 printf("Enter Requests :\n");
 for(i=0;i<limit;i++){
  scanf("%d",&req[i]);
 }
 printf("Enter Initial head position :\n");
 scanf("%d",&head);

 for(i=0;i<limit;i++){
  for(int j=i+1;j<limit;j++){
   if(req[i]>req[j]){
    temp=req[i];
    req[i]=req[j];
    req[j]=temp;
    }
   }
  }
 int index=0;
 while(index<limit&&req[index]<head){
  index++;
 }
  
 printf("Enter Direction :\n");
 scanf("%d",&direction);
 if(direction==1){
  for(i=index;i<limit;i++){
   movement+=abs(head-req[i]);
   head=req[i];
  }
  movement+=size-1-req[limit-1];
  movement+=size-1;
  head=0;
   for(i=0;i<=index-1;i++){
    movement+=abs(head-req[i]);
    head=req[i];
   }
  }
 else{
  for(i=index-1;i>=0;i--){
   movement+=abs(head-req[i]);
   head=req[i];
  }
  movement+=req[0];
  movement+=size-1;
  head=size-1;
   for(i=limit-1;i>=index;i--){
    movement+=abs(head-req[i]);
    head=req[i];
   }
  } 
  
  printf("Total Head Movement is : %d \n",movement);
  break;
 }
 
 
 case 4:{
  exit(0);
  }
  }
  }
 }
