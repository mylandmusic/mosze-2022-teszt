#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS];//int* b, N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa"; ///nincs dupla ' és nincs ;
    for (int i = 0; i<N_ELEMENTS; i++) //for ciklus hiányos
    {
        b[i] = (i+1) * 2; //Változót javítani
        std::cout << "Ertek:" << b[i]; 
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    double  atlag=0; //későbbi osztás miatt double és kezdőérték megadása
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];//; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
