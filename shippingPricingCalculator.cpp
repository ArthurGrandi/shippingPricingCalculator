#include <iostream>
#include <locale.h>

using namespace std;

//Segunda chamada M1 - Arthur Annes Grandi

int main()
{

    bool sair = false;

    do {

        int menu, voltarMenu, tentarNovamente, servico;
        float valorTotal, valorPesoExtra, peso, pesoExtra;

        cout << "1 - Calcular postagem do pacote" << endl;
        cout << "2 - Desenvolvedor" << endl;
        cout << "3 - Sair " << endl;
        cin >> menu;
        system("cls");

        switch(menu) {
            case 1:
                do {
                    cout << "---------------------------------------------------------------------------" << endl;
                    cout << "|              Por favor, escolha abaixo o tipo de servico:               |" << endl;
                    cout << "|-------------------------------------------------------------------------|" << endl;
                    cout << "|Digite '1' para Terrestre:                                               |" << endl;
                    cout << "|R$1.50 -> Peso ate 2Kg                                                   |" << endl;
                    cout << "|R$1.50 + 0.50 por quilo que exceder o limite de 2Kg-> Peso: 2 - 10kg     |" << endl;
                    cout << "|R$5.50 + 0.30 por quilo que exceder o limite de 10Kg-> Peso: 10 - 50kg   |" << endl;
                    cout << "|-------------------------------------------------------------------------|" << endl;
                    cout << "|Digite '2' para Aereo:                                                   |" << endl;
                    cout << "|R$3.00 -> Peso ate 2Kg                                                   |" << endl;
                    cout << "|R$3.00 + 0.90 por quilo que exceder o limite de 2Kg-> Peso: 2 - 10kg     |" << endl;
                    cout << "|R$10.20 + 0.60 por quilo que exceder o limite de 10Kg-> Peso: 10 - 50kg  |" << endl;
                    cout << "|-------------------------------------------------------------------------|" << endl;
                    cout << "|Digite '3' para Expresso:                                                |" << endl;
                    cout << "|R$18.00 -> Peso ate 2Kg                                                  |" << endl;
                    cout << "|R$18.00 + 6.00 por quilo que exceder o limite de 2Kg-> Peso: 2 - 10kg    |" << endl;
                    cout << "|O servico expresso nao esta disponivel para pacotes acima de 10Kg        |" << endl;
                    cout << "---------------------------------------------------------------------------" << endl;
                    cout << "Digite abaixo a sua escolha: " << endl;
                    cin >> servico;
                    system("cls");

                    if(servico == 1){
                        cout << "Que bom! Voce escolheu o servico Terrestre." << endl;
                    } else if(servico == 2) {
                        cout << "Que bom! Voce escolheu o servico Aereo." << endl;
                    } else if(servico == 3){
                        cout << "Que bom! Voce escolheu o servico Expresso." << endl;
                    } else {
                        do {
                            cout << "Desculpa, nao encontramos esse servico." << endl;
                            cout << "Digite '1' abaixo para tentar novamente: " << endl;
                            cin >> tentarNovamente;
                            system("cls");
                        }while(tentarNovamente != 1);
                    }

                    if(tentarNovamente != 1){
                        cout << "Digite abaixo o peso do pacote: " << endl;
                        cin >> peso;
                        system("cls");

                        //Valores Terrestre
                        if(peso <= 2 && peso > 0 && servico == 1){
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << "R$1.50" << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso > 2 && peso <= 10 && servico == 1){
                            pesoExtra = peso - 2;
                            valorPesoExtra = pesoExtra * 0.5;
                            valorTotal = valorPesoExtra + 1.5;
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << valorTotal << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        } else if(peso > 10 && peso <= 50 && servico == 1){
                            pesoExtra = peso - 10;
                            valorPesoExtra = pesoExtra * 0.3;
                            valorTotal = valorPesoExtra + 5.5;
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << valorTotal << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso > 50 && servico == 1){
                            cout << "O servico terrestre nao esta disponivel para pacotes cujos pesos excedem 50Kg " << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        } else if(peso <= 0 && servico == 1) {
                            cout << "Peso invalido" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }

                        //Valores Aéreo
                         if(peso <= 2 && peso > 0 && servico == 2){
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << "R$3.00" << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso > 2 && peso <= 10 && servico == 2){
                            pesoExtra = peso - 2;
                            valorPesoExtra = pesoExtra * 0.9;
                            valorTotal = valorPesoExtra + 3.0;
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << valorTotal << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        } else if(peso > 10 && peso <= 50 && servico == 2){
                            pesoExtra = peso - 10;
                            valorPesoExtra = pesoExtra * 0.60;
                            valorTotal = valorPesoExtra + 10.20;
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << valorTotal << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso > 50 && servico == 2){
                            cout << "O servico Aereo nao esta disponivel para pacotes cujos pesos excedem 50Kg " << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso <= 0 && servico == 2) {
                            cout << "Peso invalido" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }

                        //Valores Expresso
                         if(peso <= 2 && peso > 0 && servico == 3){
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << "R$18.00" << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso > 2 && peso <= 10 && servico == 3){
                            pesoExtra = peso - 2;
                            valorPesoExtra = pesoExtra * 6.0;
                            valorTotal = valorPesoExtra + 18.0;
                            cout << "Muito bem! O valor final ficou: " << endl;
                            cout << valorTotal << endl;
                            cout << "---------------------------------------" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        } else if(peso > 10 && servico == 3){
                            cout << "O servico expresso nao esta disponivel para pacotes acima de 10Kg" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }else if(peso <= 0 && servico == 3) {
                            cout << "Peso invalido" << endl;
                            cout << "Digite '1' abaixo para outro pacote: " << endl;
                            cout << "Digite '2' abaixo para voltar ao menu: " << endl;
                            cin >> voltarMenu;
                            system("cls");
                        }
                    }
                }while(tentarNovamente == 1 || voltarMenu != 2);
                break;

            case 2:
                do {
                    cout << "Arthur Annes Grandi - Ciencia da Computacao" << endl;
                    cout << "-------------------------------------------" << endl;
                    cout << "Digite '1' abaixo para retornar ao menu: " << endl;
                    cin >> voltarMenu;
                    system("cls");
                }while(voltarMenu != 1);
                break;

            case 3:
                system("cls");
                cout << "Obrigado!" << endl;
                sair = true;
                break;
        }

    }while(sair != true);

    return 0;
}
