/**       
 * @file        : yonetim.hpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *             
 */ 
#ifndef YONETIM_HPP
#define YONETIM_HPP
#include "okul.hpp"
#include "sinif.hpp"
#include "ogrenci.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <windows.h>
#include <algorithm>
using namespace std;

class yonetim
{
private:
  int *yeni_ogrencisayisi;

public:
  yonetim();
  yonetim(okul *, Sinif *, Ogrenci *);
  ~yonetim();
  void DosyaOku(okul *, Sinif *, Ogrenci *);
  void EkranaYaz(okul *, Sinif *, Ogrenci *);
  void cursor(short, short);
  void Islemler(okul *, Sinif *, Ogrenci *);
  void ogrenci_degistir(okul *, Sinif *, Ogrenci *, char, char);
  void sinif_degistir(okul *, Sinif *, char, char);
};

#endif