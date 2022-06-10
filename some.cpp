#include <iostream>
#include <vector>
#include <string>

int n;


void calculate(int m) {
    n += m;
    std::cout << "Are you done?" << "\n";
    bool a;
    std::cin >> a;

    if(a == true){
        std::cout << "The total price is :" << n;
    } else if(a == false){
        main();
    }
}



void snacks(){
    int m, n;
    std::cout << "1.Lolipop\tRs200" << "\n";
    std::cout << "2.Chicken chilly\tRs300" << "\n\n\n";
    std::cout << "Enter your choice :";
    std::cin >> m;
    
    if(m == 1) {
        n = 200;
        calculate(n);
    }
    else if(m == 2){
        n = 300;
        calculate(n);
    }
}

void soup() {
    int m, n;
    std::cout << "1.Human soup\tRs150" << "\n";
    std::cout << "2.Dost soup\tRs210" << "\n"; // the hell is dost soup?

    std::cout << "Enter your choice :";
    std::cin >> m;

    if(m == 1) {
        n = 150;
        calculate(n);
    } else if(m == 2) {

int main();
void calculate(int m)
{
    n += m;
    cout << "Are you done?"
         << "\n";
    bool a;
    cin >> a;
    if (a == true)
    {
        cout << "The total price is :" << n;
    }
    else if (a == false)
    {
        main();
    }
}

