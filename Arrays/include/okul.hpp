/**       
 * @file        : oku.hpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *             
 */ 
#ifndef OKUL_HPP
#define OKUL_HPP
#include <iostream>
#include <fstream>
#include "string"
#include "sinif.hpp"
#include "ogrenci.hpp"
using namespace std;

class okul
{
private:
  int size;
  int *size_ogrenci;

public:
  Sinif *head;
  okul();
  ~okul();
  void SinifSayisi();
  void *OgrenciSayisi();
  int *get_ogrenci_sayisi();
  int get_sinif_sayisi();
};

#endif