#include <iostream>
#include <cstdlib> //ABBIAMO USATO QUESTA LIBRERIA PER RANDOMIZZARE GIOCATORI
#include <ctime> //ABBIAMO USATO QUESTA LIBRERIA  PER RANDOMIZZARE GIOCATORI
using namespace std;

// ABBIAMO CREATO QUESTA FUNZIONE PER CREARE LA GRIGLIA DI GIOCO
void Campo_di_Gioco(const char Tris[])  {
    cout << "----------------" << endl;
    for (int i = 0; i < 9; ++i) {
        cout <<i<<"| " << Tris[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << "|" << endl;
            cout << "----------------" << endl;
        }
    }
}
int main(){
    const char Tris[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    string Giocatore1,Giocatore2;
    cout<<"Giocatore 1 inserisci il tuo nome :";
    cin>>Giocatore1;
    cout<<"Giocatore 2 inserisci il tuo nome :";
    cin>>Giocatore2;
        srand(time(0));
       int primoGiocatore =rand() % 2;
       if (primoGiocatore ==0) {
           cout <<"INIZIA A GIOCARE "<< Giocatore1 <<" GIOCATORE DELLE X"<<endl;
       } else {
           cout <<"INIZIA A GIOCARE "<< Giocatore2 <<" GIOCATORE DELLE O"<<endl;
       }
    Campo_di_Gioco(Tris);
    system("PAUSE");
    return 0;
}