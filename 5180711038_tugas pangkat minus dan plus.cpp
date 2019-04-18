#include <iostream>
#include <conio.h>

using namespace::std;


int perkalian(int inputangka, int pangkatnya){
    if(pangkatnya == 0)
        return 1;
    else if (pangkatnya >= 0 )
        return inputangka * perkalian(inputangka,(pangkatnya-1));


}
main(){
    int inputangka;
    int pangkatnya;
    float hasil;
    string pilihannya;
    cout<<"++--**PERPANGKATAN**--++"<<endl;
    cout<<"MASUKAN ANGKA      :";cin>>inputangka;
    cout<<"MASUKAN PANGKATNYA :";cin>>pangkatnya;
    cout<<"\n----SILAHKAN KETIK SIMBOL (-) ATAU (+) SAJA++++";
    cout<<"\nplus apa minus:";cin>>pilihannya;
    if (pilihannya =="-"){
        cout<<"minus (-)";cout<<endl;
        hasil=perkalian(inputangka, pangkatnya);
        cout<<"HASILNYA ADALAH :";
        cout<<1/hasil<<endl;}
    else if (pilihannya =="+"){
        cout<<"plus (+)";cout<<endl;
        hasil=perkalian(inputangka, pangkatnya);
        cout<<"HASILNYA ADALAH :";
        cout<<hasil<<endl;}

}
