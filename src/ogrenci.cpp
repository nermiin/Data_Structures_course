/**       
 * @file        : ogrenci.cpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A 
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 */ 
//______________________________ START _________________________________________________//
#include "ogrenci.hpp"

Ogrenci::Ogrenci()
{
}
Ogrenci::~Ogrenci()
{
}
void Ogrenci::set(char ism)
{
    ogrenci_adi = ism;
}
char Ogrenci::get()
{
    return ogrenci_adi;
}
//_______________________________ END :) _______________________________________________//