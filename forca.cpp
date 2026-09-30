#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    inicio:
    char palavra[30], letra[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto;
    chances=6;    
    tam=0;
    i=0;
    acerto=false;
    acertos=0;
    cout << "Digite a palavra: ";
    cin >> palavra;
    system("cls");
    while(palavra[i] != '\0'){
        i++;
        tam++;
    }
    for(i=0;i<tam;i++){
        secreta[i]='-';
    }
    while((chances >0) && (acertos < tam)){
        cout << "Chances:" << chances << endl << "\n";
        cout << "Palavra secreta: ";
        for(i=0;i<tam;i++){
            cout << secreta[i];
        }
        cout << "\n\nDigite uma letra:";
        cin >> letra[0];
        for(i=0;i<tam;i++){
            if(palavra[i] == letra[0]){
                acerto=true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto){chances--;}
        acerto=false;
        system("cls");
    }
    if (acertos == tam){cout << "Voce ganhou!";}
    else{cout << "Voce perdeu!";}
    system("pause");
    char opc;
    cout << "\nDeseja jogar novamente? (s/n): ";
    cin >> opc;
    if(opc == 's' || opc == 'S'){
        goto inicio;
    }
    return 0;
}