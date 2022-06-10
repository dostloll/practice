#include <iostream>
#include <vector>
#include <string>

int n;
using namespace std;
int main();
void calculate(int m){
n+=m;
cout<<"Are you done?"<<"\n";
bool a;
cin>>a;
if(a==true){
cout<<"The total price is :"<<n;
}else if(a==false){
    main();
}

}

void snacks(){
int m,n;
cout<<"1.Lolipop                   Rs200"<<"\n";
cout<<"2.Chicken chilly            Rs300"<<"\n\n\n";
cout<<"Enter your choice :";
cin>>m;
if(m==1){
    n=200;
    calculate(n);
}
else if(m==2){
    n=300;
     calculate(n);
}

}

void soup(){
    int m,n;
cout<<"1.Human soup                   Rs150"<<"\n";
cout<<"2.Dost soup                    Rs210"<<"\n";

cout<<"Enter your choice :";
cin>>m;

if(m==1){
    n=150;
    calculate(n);
}
else if(m==2){
    n=210;
     calculate(n);
}
}

int main(){
    int j;
    
  cout<<"--------MENU---------"<<endl;
  cout<<"1.Snacks"<<"\n"; 
  cout<<"2.Soup"<<"\n";

  cout<<"Select :";
 cin>>j;

 if(j==1){
    snacks();
 } 
 else if(j==2){
  soup();
 } 
}