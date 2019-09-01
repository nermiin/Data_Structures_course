/**       
 * @file        : sinif.cpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *              
 */ 
 //_______________________________ START ______________________________________________//
#include "sinif.hpp"

Sinif::Sinif()
{
}

Sinif::~Sinif()
{
    delete head;
}

char Sinif::get()
{
    return sinif_adi;
}
void Sinif::set(char isim)
{
    sinif_adi = isim;
}
//________________________________ END :) _____________________________________________//