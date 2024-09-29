#include <iostream>

int main()
{
    int hargaAwal = 150000;
    double diskon = 12.5;
    int besarDiskon = hargaAwal * (diskon / 100);
    int hargaAkhir = hargaAwal - besarDiskon;

    std::cout << "Harga : " << hargaAwal << " ribu" << '\n';
    std::cout << "Diskon : " << diskon << '\n';
    std::cout << "Besarnya diskon dari harga : " << besarDiskon << '\n';
    std::cout << "Harga setelah diskon " << hargaAkhir << " ribu" << '\n';
    return 0;
}