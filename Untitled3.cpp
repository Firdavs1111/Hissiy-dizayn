#include<iostream> 
#include<string.h> 
#include<stdlib.h> 
using namespace std; 
class Telefon{ 
 private: 
  string nomi,versiyasi; 
  int yili;  float narxi; 
     
 public: 
  void show(){ 
   static int k=0; 
   cout<<++k<<" - telfon: "<<endl<<endl; 
   cout<<"Nomi: "<<nomi<<endl; 
   cout<<"Versiyasi: "<<versiyasi<<endl; 
   cout<<"Yili: "<<yili<<endl; 
   cout<<"Narxi: "<<narxi<<endl<<endl;    
  }; 
  void input(){ 
   static int k=0;  
   cout<<++k<<" - telfon: "<<endl<<endl; 
   cout<<"Nomi: "<<nomi<<endl; 
   cout<<"Versiyasi: "<<versiyasi<<endl; 
   cout<<"Yili: "<<yili<<endl; 
   cout<<"Narxi: "<<narxi<<endl<<endl; 
   cout<<endl; 
  }; 
  void qidir(string s){ 
   if(nomi.compare(s)==0){ 
    cout<<"Bunday telfon mavjud: "<<endl; 
    show(); 
   }  
  };  
}; 
int main(){ 
   Telefon t[100]; 
   int N; cout<<"Telfon sonini kiriting: "; cin>>N; 
   for(int i=0; i<N; i++){ 
  t[i].input(); 
   } 
   string s; 
   cout<<endl<<"Qidirilayotgan telfonning nomini kiriting: "; cin>>s; 
   for(int i=0; i<N; i++){ 
  t[i].qidir(s); 
   }    
} 
 
