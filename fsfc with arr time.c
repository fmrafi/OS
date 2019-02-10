#include <stdio.h>

 int wt[10],bt[10],at[10],n;
 float awt;
 void input(){
        printf("Enter Number of processes:");
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++)
        {
          printf("Enter Burst Time of process %d: ",i+1);
          scanf("%d",&bt[i]);
          printf("Enter Arrival Time of process %d: ",i+1);
          scanf("%d",&at[i]);
        }
 }
 void calculate(){
    wt[0]=0;
    int btt=bt[0];//to store total burst time sum
    int i;
    for(i=1;i<n;i++){
      wt[i]=btt-at[i];

      btt= btt+bt[i];

     awt=awt+wt[i];
    }


 }
 void display(){
    int i;
    printf("Total time =%f\n", awt);

    awt=awt/n;

    printf("SR.\tA.T.\tB.T.\tW.T.\t\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],wt[i]);
    }
    printf("Average Waiting Time: %f\n",awt);
 }
 int main(){
       input();
       calculate();
       display();
 }
