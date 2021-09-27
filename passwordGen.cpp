#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{
    const char tab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int wejscie, string_length = sizeof(tab)-1;
    srand(time(0));

    cout<<"Podaj dlugosc hasla:";
    cin>>wejscie;

    cout<<"Haslo:";
    for(int i = 0; i < wejscie; i++){
        cout << tab[rand() % string_length];
    };

    return 0;
}