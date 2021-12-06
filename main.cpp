#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>



using namespace std;

int main()
{
    cout << "Bem vindo ao contador de votos!" << endl;
    char escolha;
    int total = 0, candidato1 = 0, candidato2 = 0, porcentagem = 0;

    FILE *pont_arq;

    pont_arq = fopen("candidato1.txt", "w");
    fprintf(pont_arq, "%d", 0);
    fclose(pont_arq);
    pont_arq = fopen("candidato2.txt", "w");
    fprintf(pont_arq, "%d", 0);
    fclose(pont_arq);

    pont_arq = fopen("TotalVotos.txt", "w");
    fprintf(pont_arq, "%d", 0);
    fclose(pont_arq);

    do{
    cout <<" "<<endl;
    cout << "-------------------------------MENU-----------------------------------" << endl;
    cout << "1 - adiciona um voto ao candidato 1" << endl;
    cout << "2 - adiciona um voto ao candidato 2" << endl;
    cout << "3 - subtrai um voto do candidato 1" << endl;
    cout << "4 - subtrai um voto do candidato 2" << endl;
    cout << "9 - Checa a quantidade de votos." << endl;
    cout << "0 - SAIR" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cin >> escolha;

    switch(escolha)
    {
        case '1':
            {
                candidato1++;
                total++;

                pont_arq = fopen("candidato1.txt", "w");
                fprintf(pont_arq, "%d", candidato1);
                fclose(pont_arq);

                pont_arq = fopen("TotalVotos.txt", "w");
                fprintf(pont_arq, "%d", total);
                fclose(pont_arq);
                break;
            }
        case '2':
            {
                candidato2++;
                total++;

                pont_arq = fopen("candidato2.txt", "w");
                fprintf(pont_arq, "%d", candidato2);
                fclose(pont_arq);

                pont_arq = fopen("TotalVotos.txt", "w");
                fprintf(pont_arq, "%d", total);
                fclose(pont_arq);
                break;
            }
        case '3':
            {
                candidato1--;
                total--;

                pont_arq = fopen("candidato1.txt", "w");
                fprintf(pont_arq, "%d", candidato1);
                fclose(pont_arq);

                pont_arq = fopen("TotalVotos.txt", "w");
                fprintf(pont_arq, "%d", total);
                fclose(pont_arq);
                break;
            }
        case '4':
            {
                candidato2--;
                total--;

                pont_arq = fopen("candidato2.txt", "w");
                fprintf(pont_arq, "%d", candidato2);
                fclose(pont_arq);

                pont_arq = fopen("TotalVotos.txt", "w");
                fprintf(pont_arq, "%d", total);
                fclose(pont_arq);
                break;
            }
        case '9':
            {
                cout <<"------------CONTAGEM DE VOTOS------------"<< endl;
                cout <<"Candidato 1: " << candidato1<< endl;
                cout <<"Candidato 2: " << candidato2<< endl;
                cout <<"Total de votos: "<< total <<endl;
                break;
            }
        case '0':
            {
                fclose(pont_arq);
                cout << "FIM...." << endl;
                break;
            }
        default:
            {
                cout << "digite um valor valido!" << endl;
            }
    }
    }while(escolha != '0');
}
