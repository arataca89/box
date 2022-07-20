/********************************************************************
Arquivo   : Box.hpp 
Descricao : Header file da classe Box que implementa simples
            janelas no terminal.               
Data      : 20211128

arataca89@gmail.com
Aulas particulares de programacao C/C++ 
********************************************************************/
#ifndef A89BOX_HPP
#define A89BOX_HPP

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class Box{
    public:
        Box(int n = 10, int m = 50);
        ~Box();
        void set_box();
        void set_line(int line, const string& str, int pos = 0);
        void clear();
        void print() const;

    private:
        int linhas;
        int colunas;    
        char *window;
};
#endif
/********************************************************************
Box b1(7,50);
    Cria uma box de 7 linhas e 50 colunas

b1.set_line(1,"Usando Box e alinhando ao centro"); 
    Insere texto na linha 1, alinhado ao centro

b2.set_line(3,"Alinhando a esquerda", 1);
    Insere texto na linha 3, alinhando a esquerda

b3.print();
    Exibe a Box no terminal (na tela)

b5.clear();
    Limpa o texto da Box;

arataca89@gmail.com
Aulas particulares de programacao C/C++ 
*********************************************************************/