#include <stdio.h>
#include <stdlib.h>
void main(){
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
 }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
