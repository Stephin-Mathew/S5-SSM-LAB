#include <stdio.h>
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
}
 
