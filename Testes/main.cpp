#include <fstream>
#include <list>
#include <vector>
#include <iostream>
#include "estado.h"

using namespace std;
#define N 9
list<char>tudo;
list <estado> estados;

//void addRelacao(estado est1, estado est2){  //É preciso fazer funcionar com arquivos
////    cout << est1.nome << " " << est2.nome;
////    est1.relacao.push_back(est2);
//}

estado * find(char nome){
    //cout << nome;
    list<estado>::iterator it;
    //cout << estados.size();
    for(it = estados.begin(); it != estados.end(); it++){
        //cout << it->nome;
        if(it->nome == nome ){
            return &*it;
        }
    }
    return nullptr;
}

//void mostrarRelacoes(){  // mostra as relações existentes.
//    list<int>::iterator it;
//    for(int i = 0;i < N;i++){
//        cout << i << " ";
//        for(it = relacao[i].begin(); it != relacao[i].end(); it++){
//            cout << *it << " ";
//        }
//        cout << endl;
//    }
//}

/*Leitura de arquivo e armazenamento em estado. */
void criar(){
    ifstream fin("../rodrigo.txt");

    char ch;
    while(fin.get(ch)){
        if(ch != '\n'){
            tudo.push_back(ch);
        }
    }

    list<char>::iterator it = tudo.begin();
    while((*it) != '#'){
        //cout << *it;
        if(*it != ' '){
            estado *aux = new estado(*it);
            estados.push_back(*aux);
        }
        it++;
    }

    it++;


    while((*it) != '#'){
       // cout << endl<< *it;

        estado * estado1 = find(*it);
        it++;
        estado * estado2  = find(*it);
        it++;
        cout << *it;

    }
}


int main(){
    //cout << "plmds";
    criar();
    return 0;
}
