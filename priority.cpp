#include<iostream>
using namespace std;
int main()
{
    int n,bt[10],AT[20],wt[20],p[20],process[20],i,j,tmp=0,b,total;
    float awt;
    cout<<"How many process:";
    cin>>n;
    cout<<"BustTime ArrivalTime PRItime:\n";
    for(i=0;i<n;i++)
    {
        cin>>bt[i]>>AT[i]>>p[i];
        process[i]=i;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                swap(p[j],p[j+1]);
                swap(bt[j],bt[j+1]);
                swap(AT[j],AT[j+1]);
            }
        }
    }
    cout<<"Priority.time  Burst.time  Arrival.time"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<"   "<<bt[i]<<"   "<<AT[i]<<endl;
    }
    wt[0]=0;
    total=0;
    b=0;
    for(i=1;i<n;i++)
    {
        b=b+bt[i-1];
        wt[i]=b-AT[i];
        total=total+wt[i];
    }
    awt=(float)(total/n);
    cout<<"Average waiting time:"<<awt;
    return 0;
}
