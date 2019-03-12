/*
Nama Program 	: Mencari Nilai Maksimal
Nama			: Dimas Satria Prakoso
NPM				: 140810170007
Tanggal Buat	: 12 Maret 2019

Praktikum       : Analisis Algoritma
Tugas           : Tugas 2 Analgo

.cpp tested with CodeBlocks 16.01
*/

#include<iostream>
using namespace std;
main()
{
	int nilai[100], n,max,min;
	
	cout <<"=====================================";
	cout<<"\nMasukkan Banyak Inputan : "; cin>>n;
	cout<<"\n";
	max=-1000;
	min=1000;
	for(int i=0; i<n; i++)
	{
	   cout<<" Nilai Ke- "<<i+1<<" : ";
	   cin>>nilai[i];
    }
	cout << "\n-------------------------------------" << endl;
	for(int i=0; i<n; i++)
	{
		if(nilai[i]>max)
	        max=nilai[i];
	
	}
	
	cout<<" Nilai Maksimum nya = "<<max;
	cout << "\n=====================================";
	cout<<"\n";
	return 0;
}

