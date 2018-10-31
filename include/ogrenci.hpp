/**       
 * @file        : ogrenci.hpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *              
 */ 
#ifndef OGRENCI_HPP
#define OGRENCI_HPP

using namespace std;
class Ogrenci
{
private:
  char ogrenci_adi;

public:
  Ogrenci();
  ~Ogrenci();
  void set(char);
  char get();
};

#endif