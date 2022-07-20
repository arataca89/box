/********************************************************************
 * Arquivo   : Box.cpp 
 * Descricao : Implementa as funcoes membro da classe Box que
 *             implementa simples janelas no terminal.             
 * Data      : 20211128
 *
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/
#include "Box.hpp"

Box::Box(int n, int m){
    linhas = (n >= 3) ? n : 10;
    colunas = (m >= 5) ? m : 50;     
    window = new char[linhas * colunas];

    char *ptr = window;

    for(int i = 0; i < (linhas * colunas); ++i){
        *ptr = ' ';
        ptr++;
    }

    set_box();   
}

Box::~Box(){
    cout << "\nDestruindo a Box\n" << '\n';
    delete[] window;
}

void Box::set_box(){
    char *ptr = window;
    int offset;

    // linha superior
    *ptr = '+';
    ptr++;
    for(int j = 1; j < colunas - 1; ++j){
        *ptr = '-';
        ptr++;
    }
    *ptr = '+';

    // linhas do meio 
    ptr = window;
    for(int i = 1; i < linhas - 1; ++i){
        offset = i * colunas;
        ptr += offset;
        *ptr = '|';

        ptr += (colunas - 1); 
        *ptr = '|';

        ptr = window;
    }

    // ultima linha 
    ptr = window;
    offset = (linhas - 1) * colunas;
    ptr += offset;
    *ptr = '+';
    ptr++;
    for(int j = 1; j < colunas - 1; ++j){
        *ptr = '-';
        ptr++;
    }
    *ptr = '+';  
}

// Insere 'str' na linha 'line'.
// Se 'str' tiver mais caracteres que a quantidade de colunas
// da box o texto sera truncado.
// 'line' deve estar no intervalo [1, linhas - 1[  
// pos == 0 centraliza o texto (default).
// Qualquer outro valor alinha o texto a esquerda.  
void Box::set_line(int line, const string& str, int pos){
    if(line > 0 && line < linhas - 1){
        char *ptr = window;
        int offset;

        if(pos == 0){
            int meio = (colunas - 2) / 2;
            int meiostr = str.size() / 2;
            offset = (line * colunas) + (meio - meiostr);
        }
        else{
            offset = (line * colunas) + 1;
        }

        int i_text = 0;
        ptr += offset;
        for(int j = 1; j < colunas - 2; ++j){
            if(i_text < str.size()){
                *ptr = str[i_text];
                ptr++;
                i_text++;
            }
        }
    }
}

void Box::clear(){
    char *ptr = window;
    int offset;
    for(int i = 1; i < linhas - 1; ++i){
        offset = (i * colunas) + 1;
        ptr += offset;
        for(int j = 1; j < colunas - 1; ++j){
            *ptr = ' ';
            ptr++;            
        }
        ptr = window;
    }
}

void Box::print()const{
    // desenha a box na tela
	cout << '\n';
    char *ptr = window;
    for(int i = 0; i < linhas; ++i){
        for(int j = 0; j < colunas; ++j){
            cout << *ptr;
            ptr++;
        }
        cout << '\n';        
    }  
}
/********************************************************************
 * arataca89@gmail.com
 * Aulas particulares de programacao C/C++ 
 * *****************************************************************/