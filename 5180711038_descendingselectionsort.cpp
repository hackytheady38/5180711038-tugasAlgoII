#include <iostream>

using namespace::std;

main()

{
    int i,j,n,data[10],temp,min;
    cout<<"masukan banyak data= ";cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<"data"<<i<<"=";cin>>data[i];
    }
    for(i=1;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
    if(data[i]<data[j])
    {
    temp=data[i];
    data[i]=data[j];
    data[j]=temp;
    }
    }
    }

    cout<<"hasil= ";
    for(i=1;i<=n;i++)
    cout<< data[i]<< "   ";
    cout<<endl;
}


