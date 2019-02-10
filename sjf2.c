#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp,ar[20];
    float st=0,tv,avg_wt,avg_tat;
    printf("Enter the number of process:");
    scanf("%d",&n);
    printf("\nEnter Burst time\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    printf("Enter Arrival time\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&ar[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("Burst Time:%d\n",bt[i]);
        tv=bt[i];
        st=(st+tv);
        printf("Total Time=%f\n",st);
    }
    st=st/n;
    printf("%f\n",st);
    return 0;
}
