#include<iostream>
#include <string>

void waitAnyKey(void);

int main() {
    std::cout<<"\n\n-----\nOlá Mundo!\n Estamos iniciando o projeto BETA."<<std::endl;
    waitAnyKey();
    return 0;
}

void waitAnyKey(void){
    using namespace std;

    cout<<"\n\n Aperte ENTER para finalizar."<<endl;
    cin.get();
}