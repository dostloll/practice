#include<iostream>
#include<vector>

int main(){

   std:: vector<int>v;
    v.push_back(10);
    v.push_back(20);

    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<"\n";
    }

    std::vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        std::cout<<*it<<std::endl;
    }
}