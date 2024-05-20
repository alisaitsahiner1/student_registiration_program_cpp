﻿#include<conio.h>//Getch için gerekli 
#include<iostream>//String için gerekli 
#include<string>

using namespace std;//String için gerekli 

#define OgrenciSayisi 20;//Define Kullanımını Anlat 

int ogrenciNo[20];
string ogrenciAd[20];
string ogrenciSoyad[20];

int main()
{
    ogrenciNo[0] = 1234;
    ogrenciAd[0] = "Ali";
    ogrenciSoyad[0] = "Kaptan";

    ogrenciNo[1] = 9876;
    ogrenciAd[1] = "Fatma";
    ogrenciSoyad[1] = "Sucune";


    int secim=0;

    while (secim != 6)
    {
        cout << endl << "\t----------------------------Menu----------------------------" << endl;
        cout << "\t1-Ogrenci Listeleme" << endl;
        cout << "\t2-Ogrenci Arama" << endl;
        cout << "\t3-Ogrenci Ekleme" << endl;
        cout << "\t4-Ogrenci Silme" << endl;
        cout << "\t5-Ogrenci Guncelleme" << endl;
        cout << "\t6-Cikis" << endl;

        cout << "\tSecim?";

        cin >> secim;

        switch (secim)
        {
        case 1:
        {
            cout << endl << "Ogrenci Listeleme Sayfasi" << endl;
            cout << endl << "OgrenciNo\tOgrenciAdi\tOgrenciSoyadi" << endl;
            cout << endl << "---------\t----------\t-------------" << endl;

            int i;
            for (i = 0;i < 20;i++)
            {
                if (ogrenciNo[i] != 0)
                {
                    cout << endl << ogrenciNo[i] << "\t\t" << ogrenciAd[i] << "\t\t" << ogrenciSoyad[i] << endl;
                }
            }

        }
        break;

        case 2:
        {
            cout << endl << "Ogrenci Arama Sayfasi" << endl;

            int oNo;
            int control2 = 0;

            while (control2 == 0)
            {
                cout << "Aramak Istediginiz Ogrencinin Nosu?";
                cin >> oNo;

                if ((oNo >= 1000) && (oNo <= 9999))
                {
                    control2 = 1;
                }
                else
                {
                    cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
                }
            }

            int control = 0;

            int i;
            for (i = 0;i < 20;i++)
            {
                if (ogrenciNo[i] == oNo)
                {
                    control = 1;

                    cout << endl << "ONo\tOAdi\tOSoyadi" << endl;
                    cout << endl << "---\t----\t-------" << endl;

                    cout << endl << ogrenciNo[i] << "\t" << ogrenciAd[i] << "\t" << ogrenciSoyad[i] << endl;
                }
            }

            if (control == 0)
            {
                cout << endl << "Aradiginiz Ogrenci Bulunamadi" << endl;
            }

        }
        break;

        case 3:
        {
            cout << endl << "Ogrenci Ekleme Sayfasi" << endl;

            int oNo;
            string oAd, oSoyad;

            int control2 = 0;

            while (control2 == 0)
            {
                cout << endl << "Eklemek Istediginiz Ogrencinin Nosu?";
                cin >> oNo;

                if ((oNo >= 1000) && (oNo <= 9999))
                {
                    int j, ogrenciVarmi = 0;
                    for (j = 0;j < 20;j++)
                    {
                        if (ogrenciNo[j] == oNo)
                        {
                            ogrenciVarmi = 9;
                            cout << endl << "Girdiginiz Ogrenci Var!" << endl;
                            break;
                        }
                    }

                    if (ogrenciVarmi == 0)
                        control2 = 8;

                }
                else
                {
                    cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
                }
            }


            cout << "Eklemek Istediginiz Ogrencinin Adi?";
            cin >> oAd;

            cout << "Eklemek Istediginiz Ogrencinin Soyadi?";
            cin >> oSoyad;


            int i;
            for (i = 0;i < 20;i++)
            {
                if (ogrenciNo[i] == 0)
                {
                    ogrenciNo[i] = oNo;
                    ogrenciAd[i] = oAd;
                    ogrenciSoyad[i] = oSoyad;

                    cout << "Kaydiniz Basariyla Eklendi";
                    break;
                }
            }
        }
        break;

        case 4:
        {
            cout << endl << "Ogrenci Silme Sayfasi" << endl;

            int oNo;
            int control2 = 0;

            while (control2 == 0)
            {
                cout << "Silmek Istediginiz Ogrencinin Nosu?";
                cin >> oNo;

                if ((oNo >= 1000) && (oNo <= 9999))
                {
                    control2 = 1;
                }
                else
                {
                    cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
                }
            }

            int control = 0;

            int i;
            for (i = 0;i < 20;i++)
            {
                if (ogrenciNo[i] == oNo)
                {
                    control = 1;

                    ogrenciNo[i] = 0;
                    ogrenciAd[i] = "";
                    ogrenciSoyad[i] = "";

                    cout << endl << "Silme Islemi Basariyla Tamamlandi" << endl;
                }
            }

            if (control == 0)
            {
                cout << endl << "Aradiginiz Ogrenci Bulunamadi" << endl;
            }
        }
        break;

        case 5:
        {
            cout << endl << "Ogrenci Guncelleme Sayfasi" << endl;

            int oNo;
            int control3 = 0;

            while (control3 == 0)
            {
                cout << "Guncellemek Istediginiz Ogrencinin Nosu?";
                cin >> oNo;

                if ((oNo >= 1000) && (oNo <= 9999))
                {
                    control3 = 1;
                }
                else
                {
                    cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
                }
            }

            int control4 = 0;

            int i;
            for (i = 0;i < 20;i++)
            {
                if (ogrenciNo[i] == oNo)
                {
                    control4 = 1;

                    int yoNo;
                    string yoAd, yoSoyad;

                    cout << endl << "Yeni numarayi giriniz: " << endl;
                    cin >> yoNo;
                    ogrenciNo[i] = yoNo;
                    cout << endl << "Yeni Ogrencinin Adi: " << endl;
                    cin >> yoAd;
                    ogrenciAd[i] = yoAd;
                    cout << endl << "Yeni Ogrencinin Soyadi: " << endl;
                    cin >> yoSoyad;
                    ogrenciSoyad[i] = yoSoyad;


                    cout << endl << "Guncelleme Islemi Basariyla Tamamlandi" << endl;
                }
            }

            if (control4 == 0)
            {
                cout << endl << "Aradiginiz Ogrenci Bulunamadi" << endl;
            }


        }
        break;

        case 6:
        {
            cout << endl << "Uygulamadan Cikiliyor..." << endl;
        }
        break;

        default:
        {
            cout << endl << "Hatali Secim!" << endl;
        }
        break;
        }
    }

    _getch();
}