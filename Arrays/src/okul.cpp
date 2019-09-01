/**       
 * @file        : okul.cpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A 
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *              
 */ 
//________________________________START_______________________________________________//
#include "okul.hpp"

okul::okul()
{
    SinifSayisi();
    OgrenciSayisi();
    head = new Sinif[size + 1];
    for (int i = 0; i < size; i++)
    {
        head->head = new Ogrenci[size_ogrenci[i + 1]];
        head++;
    }
    head = head - size;
}
okul::~okul()
{
    delete size_ogrenci;
    delete head;
}
//____________________________________GET OGRENCI SAYISI________________________________//
int *okul::get_ogrenci_sayisi()
{
    return size_ogrenci;
}
//____________________________________GET SINIF SAYISI_________________________________//
int okul::get_sinif_sayisi()
{
    return size;
}
//___________________________________ SINIF SAYISI ___________________________________//
void okul::SinifSayisi()
{
    size = 0;
    string line;
    ifstream DosyaOku("okul.txt");
    while (!DosyaOku.eof())
    {
        getline(DosyaOku, line);
        size++;
    }
    DosyaOku.close();
}
//__________________________________ OGRENCI SAYISI____________________________________//
void *okul::OgrenciSayisi()
{
    size_ogrenci = new int[size + 1];
    string line;
    ifstream DosyaOku("okul.txt");
    while (!DosyaOku.eof())
    {
        getline(DosyaOku, line);
        *size_ogrenci = line.length() / 2;
        size_ogrenci++;
    }
    size_ogrenci -= size;
}
//____________________________________END :)_____________________________________________//