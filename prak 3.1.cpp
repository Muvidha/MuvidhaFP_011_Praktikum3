#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*s){

int x = 0;
for (;*s!='\0';s++)
++x;
return x;
}
main (void){
cout<<endl;
char String [80];
cout<<"  Tuliskan Kata      : ";
cin.getline(String,100);cout<<endl;
cout<<"  Jumlah Karakternya : "<<H(String)<<" Huruf "<<endl;
}
