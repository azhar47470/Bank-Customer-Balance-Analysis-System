#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int customer[5];
    int total = 0, CWLB = 0, CWSB = 0, CWVLB = 0;
    for (int i = 0; i<5 ; i++)
    {
        cout<<"Customer "<<i+1<<"\n";
        cout<<"Balance of Customer "<<i+1<<": ";
        cin>>customer[i];

        total += customer[i];

        if (customer[i] >= 10000)
        {
            cout<<"Account Status: Sufficient Balance\n\n";
            CWSB += 1;
        }
        else if (customer[i] >= 5000 && customer[i] <= 9999)
        {
            cout<<"Account Status: Low Balance\n\n";
            CWLB += 1;
        }
        else
        {
            cout<<"Account Status: Very Low Balance\n\n";
            CWVLB += 1;
        }
    }
    float avg = total/5.0;

    int max = customer[0];
    int min = customer[0];
    for (int j = 1; j<5 ; j++)
    {
        if (max < customer[j])
        {
            max = customer[j];
        }
        if (min > customer[j])
        {
            min = customer[j];
        }
    }

    cout<<"Total Balance Of All Customers: "<<total<<"\n";
    cout<<"\nAverage Balance: "<<avg<<"\n";
    cout<<"\nHighest Balance: "<<max;
    cout<<"\nLowest Balance: "<<min<<"\n";
    cout<<"\nCustomers With Sufficient Balance: "<<CWSB;
    cout<<"\nCustomers With Low Balance: "<<CWLB;
    cout<<"\nCustomers With Very Low Balance: "<<CWVLB;
return 0;
}
