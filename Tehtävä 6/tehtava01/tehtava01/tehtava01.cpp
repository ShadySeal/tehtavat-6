#include <iostream>

// Ajoneuvo luokka
class Ajoneuvo {
public:
    Ajoneuvo(int huippunopeus, int kayttoonottovuosi, int paino)
        : huippunopeus_(huippunopeus), kayttoonottovuosi_(kayttoonottovuosi), paino_(paino) {}

private:
    int huippunopeus_;
    int kayttoonottovuosi_;
    int paino_;
};

class Auto : public Ajoneuvo {
public:
    Auto(int huippunopeus, int kayttoonottovuosi, int paino, int ovienLukumaara, int renkaidenLukumaara)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), ovienLukumaara_(ovienLukumaara), renkaidenLukumaara_(renkaidenLukumaara) {}

private:
    int ovienLukumaara_;
    int renkaidenLukumaara_;
};

class Henkiloauto : public Auto {
public:
    Henkiloauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovienLukumaara, int renkaidenLukumaara, int matkustajienMaksimimaara)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovienLukumaara, renkaidenLukumaara), matkustajienMaksimimaara_(matkustajienMaksimimaara) {}

private:
    int matkustajienMaksimimaara_;
};

// Kuorma-auto luokka perii Auto luokan ominaisuudet
class Kuormaauto : public Auto {
public:
    Kuormaauto(int huippunopeus, int kayttoonottovuosi, int paino, int ovienLukumaara, int renkaidenLukumaara, int kuormanMaksimipaino)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovienLukumaara, renkaidenLukumaara), kuormanMaksimipaino_(kuormanMaksimipaino) {}

private:
    int kuormanMaksimipaino_;
};

class Lentokone : public Ajoneuvo {
public:
    Lentokone(int huippunopeus, int kayttoonottovuosi, int paino, int maksimilentokorkeus)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), maksimilentokorkeus_(maksimilentokorkeus) {}

private:
    int maksimilentokorkeus_;
};

class Laiva : public Ajoneuvo {
public:
    Laiva(int huippunopeus, int kayttoonottovuosi, int paino, int maksimisyvyys)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), maksimisyvyys_(maksimisyvyys) {}

private:
    int maksimisyvyys_;
};

int main() {
    Ajoneuvo ajoneuvo(200, 2020, 1500);

    Auto auto1(180, 2019, 1200, 4, 4);

    Henkiloauto henkiloauto(160, 2018, 1000, 4, 4, 5);

    Kuormaauto kuormaauto(120, 2017, 2000, 2, 6, 5000);

    Lentokone lentokone(900, 2015, 50000, 40000);

    Laiva laiva(40, 2014, 80000, 15);

    return 0;
}
