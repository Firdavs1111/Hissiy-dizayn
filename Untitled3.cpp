#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std; 
class Humo_Air{ 
 private : 
 string bilet,udavlat,qdavlat,ism,fam; 
 int reys; 
 int sana;  
 float narxi; 
 public : 
  void show() 
  { 
   static int k=0; 
   cout<<++k<<" - aviakassa"<<endl<<endl; 
   cout<<"Bilet: "<<bilet<<endl;
   cout<<"Udavlat: "<<udavlat<<endl;  
   cout<<"Qdavlat: "<<qdavlat<<endl; 
   cout<<"Sana: "<<sana<<endl; 
   cout<<"Ism: "<<ism<<endl; 
   cout<<"Familiya: "<<fam<<endl; 
 cout<<"Reys: "<<reys<<endl; 
   cout<<"Narxi: "<<narxi<<endl; 
  }; 
  void input(){ 
   static int k=0; 

   cout<<++k<<" - aviakassa"<<endl<<endl; 
   cout<<"Bilet: ";cin>>bilet;
   cout<<"Udavlat: ";cin>>udavlat;  
   cout<<"Qdavlat: ";cin>>qdavlat; 
   cout<<"Sana: ";cin>>sana; 
   cout<<"Ism: ";cin>>ism; 
   cout<<"Familiya: ";cin>>fam; 
 cout<<"Reys: ";cin>>reys;; 
   cout<<"Narxi: ";cin>>narxi; 
  }; 
  void qidir(string s){ 
   if(ism.compare(s)==0) 
   { 
    cout<<"Bunday ismli yolovchilar yoq"; 
    show(); 
   } 


}; 
void qidir1(string d){ 
   if(fam.compare(d)==0) 
   { 
    cout<<"Bunday familiyali yolovchilar yoq"; 
    show(); 
   } 
  }; 
}; 
int main() 
{ 
 Humo_Air t[100]; 
 int N;cout<<"Chipta sonni kriting";cin>>N;  
 for(int i=0;i<N;i++) 
 { 
  t[i].input(); 
 } 
 string s; 
 cout<<endl<<"Qidirilayotgan yolovchini ismini kriting";cin>>s; 
 for(int i;i<N;i++) 
 { 
  t[i].qidir(s); 
 } 
 string d; 
 cout<<endl<<"Qidirilayotgan yolovchini familyasini kriting";cin>>d; 

 for(int i;i<N;i++) 
 { 
  t[i].qidir1(d); 
 } 
}
