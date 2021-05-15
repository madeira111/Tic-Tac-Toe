#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){

    system("CLS");
}

void popularTabuleiro(char tabuleiro[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = '-';
        }
    }
}

void jogo(){

    char tabuleiro[3][3];
    int linhaJogada, ColunaJogada;
    int estadoJogo = 1;
    int turnoJogador = 1;
    int rodada = 0;

    popularTabuleiro(tabuleiro);

    while(rodada < 9){
        limpaTela();

        for(int i = 0; i < 3; i++){
            cout << tabuleiro[i][0] << tabuleiro[i][1] << tabuleiro[i][2] << "\n";
        }
        cout << rodada;
        cout << "\nDigite uma linha: ";
        cin >> linhaJogada;

        cout << "\nDigite uma coluna: ";
        cin >> ColunaJogada;

        if(turnoJogador == 1){
            tabuleiro[linhaJogada][ColunaJogada] = 'X';
            turnoJogador = 2;
        }else{
            tabuleiro[linhaJogada][ColunaJogada] = 'O';
            turnoJogador = 1;
        }
        rodada++;
    }


}



void menuInicial(){
    int opcao = 0;

    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao Jogo\n";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma ocao e click Enter: ";
        cin  >> opcao;

        switch(opcao){
        case 1:
            cout << "Jogo Iniciado\n";
            jogo();
            break;
        case 2:
            cout << "Sobre o Jogo\n";
            break;
        case 3:
            cout << "Ate Logo\n";
            break;
        }
    }
}

int main(){
    srand((unsigned)time(NULL));
    menuInicial();

return 0;
}
