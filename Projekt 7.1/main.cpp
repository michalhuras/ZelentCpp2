#include <iostream>
#include <fstream> //biblioteka odpowiedzialna za prace z plikami

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    //ZAPIS WIZYT�WEK

    cout << "Podaj imie: ";         cin>>imie;
    cout << "Podaj nazwisko: ";     cin>>nazwisko;
    cout << "Podaj nr telefonu: ";  cin>>nr_tel;

    fstream plik; //zmienna plikowa
    plik.open("wizytowka.txt",ios::out);

    //ZAPISYWANIE DANYCH W PLIKU
    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();

    return 0;
}
