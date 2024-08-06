#include <stdio.h>
#include <stdlib.h>
void main(){
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
}
  
