#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;


int main()
{
    //variáveis auxiliares
    int flag = 0;
    int i = 0;
    int paren = 0; //contador

    //receber entrada do usuário
    string str;
    cout << "Digite a entrada: \n";
    getline(cin, str);


    flag = str.length(); //retorna o tamanho da string
    

    //while que percorre a string e verifica os parênteses
    while (i <= flag) {
        if (str[i] == '(') {
            paren++;
        }

        else if (str[i] == ')') {
            paren--;
        }
        i++;
    }

    //se paren for igual a 0, todos os parênteses abertos foram fechados ou nenhum foi encontrado
    if (paren == 0) {
        cout << "Saida: 1\n";
    }

    //caso contrário
    else {
        cout << "Saida: 0\n";
    }
}
