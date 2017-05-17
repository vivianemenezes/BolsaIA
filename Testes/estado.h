#ifndef ESTADO_H
#define ESTADO_H
#include <iostream>
#include <list>

using namespace std;

struct estado{
    char nome;
    list<estado> relacao; 
    list<char> preposicao; //mudar para proposicoes

    estado(char nome){
        this->nome = nome;
    }
};

#endif // ESTADO_H
