#include <iostream>
#include <limits>

void tabuleiro(char spaces[]){

    std::cout << "     |     |   " << '\n';
    std::cout << "  "<< spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |   " << '\n';
    std::cout << "  "<< spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |   " << '\n';
    std::cout << "  "<< spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |   " << '\n';

}

int jogada(char spaces[]){
    int jogada;
    std::cout << "Onde vc deseja jogar?\n";
    for(int i = 1; i <= 9; i++){
        if(spaces[i-1] != ' '){
            continue;
        }
        else{
            std::cout << "Posição " << i << '\n';
        }
    }
    while(true){
    std::cin >> jogada;

    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<< "Caracter inválido" << '\n';
        std::cout<<"Tente de novo." <<'\n';
        continue;
    }
    break;
    }
    return jogada;
}

bool game_over(char spaces[]){
    for(int i = 0;i <= 6;i = i+3){
        if(spaces[i] == spaces[i+1] and spaces[i+1] == spaces[i+2] and spaces[i] != ' '){
            return true;
        }
    }
    for(int i = 0;i <= 2;i++){
        if(spaces[i] == spaces[i+3] and spaces[i+3] == spaces[i+6] and spaces[i] != ' '){
            return true;
        }
    }
    if(spaces[0] == spaces[4] and spaces[4] == spaces[8] and spaces[0] != ' '){
        return true;
    }
    else if(spaces[2] == spaces[4] and spaces[4] == spaces[6] and spaces[2] != ' '){
        return true;
    }
    int c = 0;
    for (int i = 0;i<=8;i++){
        if(spaces[i] == ' '){
            return false;
        }
        c++;
        
    }
    if(c==9){
        return true;
    }
    return false;
}

int main(){
    bool running = true;
    char espaços[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int c = 0;
    while(running){
        c += 1;
        bool valido = false;
        if(not game_over(espaços)){
            while(not valido){
                tabuleiro(espaços);
                int posicao = jogada(espaços) - 1;
                if(espaços[posicao] == ' '){
                    if(c % 2 != 0){
                        espaços[posicao] = 'X';
                    }
                    else{
                        espaços[posicao] = 'O';
                    }
                    valido = true;
                }
            }
        }
        else{
            tabuleiro(espaços);
            running = false;
        }
    }
    return 0;
}







