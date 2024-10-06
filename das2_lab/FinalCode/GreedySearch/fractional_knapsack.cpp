// Week 5: Fractional knapsack


#include<iostream>
using namespace std;

int main ()
{
    int weight[5]={5,10,15,22,25};
    int profit[5]= {30,40,45,77,90};
    int capacity=60;
    float ratio[5];

    for (int i=0;i<5;i++)
    {
        ratio[i]= (float)profit[i]/weight[i];
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
           if(ratio[i]<ratio[j])
           {
               swap(ratio[i],ratio[j]);
               swap(profit[i],profit[j]);
               swap (weight[i],weight[j]);
           }
        }
    }

    float total_profit = 0;
    for(int i=0;i<5;i++){
        if( weight[i] < capacity){
            total_profit += profit[i];
            capacity -= weight[i];
        } else {
            total_profit += capacity * ratio[i];
            capacity = 0;
        }
    }

    cout << total_profit;

}