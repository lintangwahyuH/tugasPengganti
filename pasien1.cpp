#include<iostream>
#include<windows.h>
#include<stdio.h>

using namespace std;
int a=1,n,d,c,b;

struct puskesmas
{
    string nama;
    char jk;
    string alamat;
    int umur,tggl;
    string jenispoli;
    int nik;

}pustu[100];

void create(puskesmas)
{
        d=0;
        cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
        for(c=0;c<b;c++){
        d=d+1;
        cout<<"\nData ke-"<<d<<endl;
        cout<<"Masukkan NIK\t: ";cin>>pustu[a].nik;
        cout<<"Masukkan Nama\t: ";cin>>pustu[a].nama;
        cout<<"Masukkan Alamat\t: ";cin>>pustu[a].alamat;
        cout<<"Masukkan jenis kelamain L/P: ";cin>>pustu[a].jk;
        cout<<"Masukkan umur\t: ";cin>>pustu[a].umur;
        cout<<"Masukkan kondisi\t: ";cin>>pustu[a].jenispoli;
        a++;}
}

void read(puskesmas)
{
        int i,j;
        cout<<"\nTampilkan Data Pasien\n\n";
        cout<<"||\tNO\t||NIK\t||\tNama\t||\tAlamat\t||\tJenis Kelmain\t||\tUmur\t||\tKondisi\t\n";
        j=0;
    for(i=1;i<a;i++)
        {j=j+1;
        cout<<"===============================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<pustu[i].nik<<"\t||";
        cout<<pustu[i].nama<<"\t\t||";
        cout<<pustu[i].alamat<<"\t\t||";
        cout<<pustu[i].jk<<"\t\t\t||";
        cout<<pustu[i].umur<<"\t\t||";
        cout<<pustu[i].jenispoli<<"\t\t||";
        cout<<endl;
        }
}

void update(puskesmas)
{


       cout<<"silahkan pilih data pasien yang mau di perbarui"<<endl;
        int k,l;
        cout<<"Masukan Data yang akan diedit : ";cin>>k;
        l=k-1;
        cout<<"NIM\t: ";cin>>pustu[l].nik;
        cout<<"Nama\t: ";cin>>pustu[l].nama;
        cout<<"Alamtt: ";cin>>pustu[l].alamat;
        cout<<"Jenis Kelamin\t: ";cin>>pustu[l].jk;
        cout<<"Umur\t: ";cin>>pustu[l].umur;
        cout<<"Kondisi\t: ";cin>>pustu[l].jenispoli;
        void read(puskesmas);
}

void hapus(puskesmas)
{
        cout<<"pilih yang mau di hapus"<<endl;
        int x,y;
        cout<<"Hapus data ke-";cin>>x;
        y=x-1;
        a--;
        for(int i=y;i<a;i++)
        {pustu[i]=pustu[i+1];}
        cout<<"data yang di hapus   :"<<x<<endl;
}

 int main(){
    int pilih=0;

    do {system("cls");
    cout<<"Data Pasien"<<endl;
    cout<<"1. Input Data Pasien"<<endl;
    cout<<"2. Melihat Data"<<endl;
    cout<<"3. Update data"<<endl;
    cout<<"4. Hapus data"<<endl;

    cout<<"plih menu :";cin>>pilih;

    switch(pilih)
    {
        case 1: {create(pustu[100]);} break;
        case 2: {read(pustu[100]);} break;
        case 3: {update(pustu[100]);} break;
        case 4: {hapus(pustu[100]);} break;
        default:cout<<"menu tidak ada"<<endl;

    }
    system("pause");
}
        while(pilih!=0);

    return 0;


}
