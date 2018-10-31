/**       
 * @file        : test.cpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *             
 */ 
#include <iostream>
#include "okul.hpp"
#include "sinif.hpp"
#include "ogrenci.hpp"
#include "yonetim.hpp"
using namespace std;

int main()
{
    okul *okl = new okul();
    Sinif *snf = okl->head;
    Ogrenci *ogr = snf->head;
    yonetim y(okl, snf, ogr);

    delete okl;
    delete snf;
    delete ogr;

    return 0;
}