// Apenas um protótipo para teste

#include<windows.h>
#include<iostream>
#include<string>

using namespace std; // std::

int main ()
{
        char inp , y ,n , Y,N;
        string name , gtkey ;
        
    cout << "\t\t Bem vindo ao ChatBox \n\n";
    cout << " Para Continuar no Chat Aperta 'Y' e Para sair aperte 'N' - \n";
    cout << "-->";
    cin>> inp;

            // Condição para y ou n.
            if(inp =='y' || inp == 'Y') //Para Y. 
            {
                cout << "\n Bem Vindo Ao Chat..... !";
            }
            
            else()
            {
                cout << "\n Obrigado por usar o Chat";

                return 0;
            }

            system("cls"); // Limpa o terminal.

            if(gtk != "bi" )
            {
               cout << "\t Olá Usuario \n";
               cout << " -->";
               cin >> gtkey;
               cout << "\n Qual é seu nome ? \n"; 
               cout << " -->";
               cin >> name;
               cout << name << "\n Qual é a sua idade ?\n";
               cout << " -->";
               cin >> age; 

               switch(age)
               {
                   case 18:
                   cout << "\n Você é novo"
                   break;;
                   case 30:
                   cout << "\n Você é velho";
                   break;
                   default :
                   cout << "Não tenho nada para falar da sua idade";
               }
                cout << "\n bye bye " << name << "\n";
                cout << " -->";
                cin >> gtkey ; 

            }
            system("cls");
            cout << "\t\t\t\t Programação termina aqui.";


    return 0;
}