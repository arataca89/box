/********************************************************************
 * Arquivo   : Box.hpp 
 * Descricao : Header file da classe Box que implementa simples
 *             janelas no terminal.               
 * Data      : 20211128
 * 
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/
#ifndef A89BOX_HPP
#define A89BOX_HPP

#include <iostream>
using std::cout;

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
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/