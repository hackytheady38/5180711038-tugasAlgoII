//ascendingselectionsort
#include <iostream>
#include <conio.h>
using namespace std;
int data[10],data2[10];
int n;
void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}
void selection_sort()
{
 int pos,i,j;
 for(i=0;i<n-1;i++)
 {
  pos = i;
  for(j = i+1;j<n;j++)
  {
   if(data[j] < data[pos]) pos = j;
  }
   if(pos != i) tukar(pos,i);
 }
}
main()
{
 cout<<"===PROGRAM SELECTION SORT==="<<endl;
 cout<<"Masukkan Jumlah Data : ";cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"\nMasukkan data index ke [ "<<i<<" ]: ";cin>>data[i];
  data2[i]=data[i];
 }
 selection_sort();
 cout<<"\n\n";
 cout<<"Data Setelah di Sort : ";
 for(int i=0; i<n; i++)
 {
  cout<<" "<<data[i];
 }

 getch();
}
