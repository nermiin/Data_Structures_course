/**       
 * @file        : yonetim.cpp
 * @description : C++ konsol uygulamasi Okul.txt isimli dosyayı okuyup okul ve sınıfları oluşturmaktadir.Heap bellek bölgesinde oluşturup çöp oluşumu engellenmektedir.
 * @course      : 2A 
 * @assignment  : 1.odev
 * @date        : 28/10/2018
 * @author      : Nermin Kaya (nermin.kaya.sau@gmail.com)
 *              
 */
//_________________________________START_________________________________________//
#include "yonetim.hpp"

yonetim::yonetim(okul *okl, Sinif *snf, Ogrenci *ogr)
{
    yeni_ogrencisayisi = okl->get_ogrenci_sayisi();
    DosyaOku(okl, snf, ogr);
    EkranaYaz(okl, snf, ogr);
    Islemler(okl, snf, ogr);
}
yonetim::yonetim()
{
}
yonetim::~yonetim()
{
    delete yeni_ogrencisayisi;
}
//________________________________ DOSYAOKU______________________________________//
void yonetim::DosyaOku(okul *okl, Sinif *snf, Ogrenci *ogr)
{
    string satir;
    ifstream oku("okul.txt");

    snf = okl->head;
    ogr = snf->head;

    for (int i = 0; i < okl->get_sinif_sayisi(); i++)
    {
        getline(oku, satir);
        snf->set(satir[0]);
        ogr = snf->head;
        for (int j = 2; j < satir.length(); j += 2)
        {
            ogr->set(satir[j]);
            ogr++;
        }
        snf++;
    }
    oku.close();
    snf = okl->head;
    ogr = snf->head;
}
//______________________________ EKRANA YAZ__________________________________________//
void yonetim::EkranaYaz(okul *okl, Sinif *snf, Ogrenci *ogr)
{
    cout << endl;
    cout << endl;
    snf = okl->head;
    ogr = snf->head;
    int i;
    int j;

    for (i = 0; i < okl->get_sinif_sayisi(); i++)
    {
        cursor(20 * (i), 4);
        cout << "  sinif : " << snf->get() << endl;
        ogr = snf->head;
        for (j = 0; j < yeni_ogrencisayisi[i]; j++)
        {
            cursor(20 * (i), j + 5);
            cout << ogr->get() << " (" << ogr << ") " << endl;
            ogr++;
        }
        snf++;
    }
    snf = okl->head;
    ogr = snf->head;
    short r = *max_element(yeni_ogrencisayisi, yeni_ogrencisayisi + okl->get_sinif_sayisi());
    cursor(0, r + 5);
}
//______________________________CURSOR______________________________________________//
void yonetim::cursor(short x, short y)
{
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(output, pos);
}
//_____________________________ ISLEMLER____________________________________________//
void yonetim::Islemler(okul *okl, Sinif *snf, Ogrenci *ogr)
{
    char secim = '0';
    char a, b;
    char c1, c2;

    do
    {
        system("CLS");
        EkranaYaz(okl, snf, ogr);
        cout << endl;
        cout << "Nermin Kaya G161210560 2_A" << endl;
        cout << endl;
        cout << "1- sinif degistir  ." << endl;
        cout << "2- ogrenci degistir." << endl;
        cout << "3- uygulamadan cik ." << endl;
        cin >> secim;
        switch (secim)
        {
        case '1':
            cout << "1.sinif:" << endl;
            cin >> a;
            cout << "2.sinif:" << endl;
            cin >> b;
            sinif_degistir(okl, snf, a, b);
            break;
        case '2':
            cout << "1.ogranci:" << endl;
            cin >> c1;
            cout << "2.ogrenci" << endl;
            cin >> c2;
            ogrenci_degistir(okl, snf, ogr, c1, c2);
            break;
        case '3':
            break;
        default:
            cout << "Hatali tusladiniz;" << endl;
            break;
        }
    } while (secim != '3');
}
//________________________________ OGRENCI DEGISTIR_____________________________________//
void yonetim::ogrenci_degistir(okul *okl, Sinif *snf, Ogrenci *ogr, char a, char b)
{
    Ogrenci *yardimci = new Ogrenci();
    Ogrenci *o1 = new Ogrenci();
    Ogrenci *o2 = new Ogrenci();
    snf = okl->head;
    ogr = snf->head;
    for (int i = 0; i < okl->get_sinif_sayisi(); i++)
    {
        for (int j = 0; j < yeni_ogrencisayisi[i]; j++)
        {
            if (ogr->get() == a)
            {
                o1 = ogr;
            }
            if (ogr->get() == b)
            {
                o2 = ogr;
            }
            ogr++;
        }
        snf++;
        ogr = snf->head;
    }
    snf = okl->head;
    ogr = snf->head;
    *yardimci = *o1;
    *o1 = *o2;
    *o2 = *yardimci;

    delete yardimci;
    delete o1;
    delete o2;
}
//_________________________________ SINIF DEGISTIR __________________________________//
void yonetim::sinif_degistir(okul *okl, Sinif *snf, char x1, char x2)
{

    Sinif *yardimci = new Sinif();
    Sinif *s1 = new Sinif();
    Sinif *s2 = new Sinif();
    int a;
    int b;
    int *p = new int();
    for (int i = 0; i < okl->get_sinif_sayisi(); i++)
    {
        if (snf->get() == x1)
        {
            s1 = snf;
            a = i;
        }
        if (snf->get() == x2)
        {
            s2 = snf;
            b = i;
        }
        snf++;
    }
    snf = okl->head;
    *yardimci = *(s1);
    *(s1) = *(s2);
    *(s2) = *yardimci;

    *p = yeni_ogrencisayisi[a];
    yeni_ogrencisayisi[a] = yeni_ogrencisayisi[b];
    yeni_ogrencisayisi[b] = *p;
    delete s1;
    delete s2;
    delete yardimci;
    delete p;
}
//____________________________________ END :) ___________________________________//
