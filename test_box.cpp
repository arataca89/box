/********************************************************************
 * Arquivo   : test_box.cpp 
 * Descricao : Teste da classe Box que
 *             implementa simples janelas no terminal.             
 * Data      : 20211128
 *
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/
#include "Box.hpp"

int main(){

    Box b1(3,30);
    b1.set_line(1,"ALINHANDO AO CENTRO"); // alinhando no centro
    b1.print();

    Box b2(3,30);
    b2.set_line(1,"Alinhando a esquerda", 1);  // alinhando a esquerda
    b2.print();

    Box b3(3,30);
    b3.set_line(1,"Aqui o texto eh maior que o numero de colunas da box"); 
    b3.print();

    Box b4(3,30);
    b4.set_line(1,"Aqui o texto cabe na box"); 
    b4.print();

    Box b5(3,30);
    b5.set_line(1,"CADASTRO DE CLIENTES"); 
    b5.print();

    Box b6(9,30);
    b6.set_line(1,"<< 1 >> Inserir  "); 
    b6.set_line(3,"<< 2 >> Pesquisar"); 
    b6.set_line(5,"<< 3 >> Deletar  "); 
    b6.set_line(7,"<< 4 >> Sair     "); 
    b6.print();

    b5.clear();
    b5.print();

    b6.clear();
    b6.print();

    cout << '\n';

    return 0;
}
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/