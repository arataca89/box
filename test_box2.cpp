/********************************************************************
 * Arquivo   : test_box2.cpp 
 * Descricao : Teste da classe Box que
 *             implementa simples janelas no terminal.             
 * Data      : 20220720
 *
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/
#include "Box.hpp"

int menu(){
    Box b1(3,30);
    b1.set_line(1,"CADASTRO DE CLIENTES"); 
    b1.print();

    Box b2(9,30);
    b2.set_line(1,"<< 1 >> Inserir  "); 
    b2.set_line(3,"<< 2 >> Pesquisar"); 
    b2.set_line(5,"<< 3 >> Deletar  "); 
    b2.set_line(7,"<< 4 >> Sair     "); 

    b2.print();

    int op;
    cout << "Entre com sua opcao: ";
    cin >> op;    
    while(op < 1 || op > 4 || !cin.good()){
        cin.clear();
        cin.ignore();
        cout << "\n>>> Opcao invalida <<< \n\n";
        cout << "Entre com sua opcao: ";
        cin >> op;
    }
    return op;
}

void run(int n){
    switch(n){
        case 1: cout << "Inserir\n"; break;
        case 2: cout << "Pesquisar\n"; break;
        case 3: cout << "Deletar\n"; break;
        case 4: exit(EXIT_SUCCESS);
    }
}

int main(){
    while(true) run(menu());
    return 0;
}
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/