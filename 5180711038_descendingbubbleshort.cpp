//descending bubble short
 #include <iostream>

using namespace std;

int main()
{
    int i,j,n,data[100],simpan,k;
    cout<<"<======================================>"<<endl;
    cout<<"<        POGRAM PENGURUTAN DATA        >"<<endl;
    cout<<"<======================================>"<<endl;
    cout<<"-> PENGURUTAN DATA DESCENDING DENGAN BUBBLE SORT <-"<<endl<<endl;
    cout<<"Masukkan Banyak Data = ";
    cin>>n;
    cout<<""<<endl;

    for (i=1; i<=n; i++)
    {
        cout<<"Data "<<i<<" = ";
        cin>>data[i];
    }
    cout<<""<<endl;

    cout<<"Awalnya  = ";
    for (i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<""<<endl;

    for (i=1; i<n; i++)
    {
        for (j=1; j<n; j++)
        {
            if (data[j]<data[j+1])
            {
                simpan=data[j];
                data[j]=data[j+1];
                data[j+1]=simpan;
            }
        }
    }

    cout<<"Hasilnya = ";
    for (i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<""<<endl;
    return 0;
}
