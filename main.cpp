#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //int* b, N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //nincs dupla ' és nincs ;
    for (int i = 0;) //for ciklus hiányos
    {
        b[i] = i * 2; //Változót javítani
    }
    for (int i = 0; i; i++) //for ciklus közepe hiányos
    {
        std::cout << "Ertek:" //az igazi érték nem szerepel, nincs lezárva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //későbbi osztás miatt double és kezdőérték megadása
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
