/**       
 * @file        : sinif.hpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A 
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya    (nermin.kaya.sau@gmail.com)
 *              
 */ 
#ifndef SINIF_HPP
#define SINIF_HPP
#include<ogrenci.hpp>

class Sinif
{
private:
  char sinif_adi;

public:
  Ogrenci *head;
  Sinif();
  ~Sinif();
  char get();
  void set(char);
};

#endif