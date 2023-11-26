#include <iostream>

class Laskutoimitus {
public:
    virtual double laske(double x, double y) = 0;
};

class Yhteenlasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x + y;
    }
};

class Kertolasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x * y;
    }
};

int main() {
    Laskutoimitus* laskuOsoitin = nullptr;

    laskuOsoitin = new Yhteenlasku();

    double tulosYhteenlasku = laskuOsoitin->laske(3.0, 4.0);
    std::cout << "Yhteenlasku-tulos: " << tulosYhteenlasku << std::endl;

    delete laskuOsoitin;

    laskuOsoitin = new Kertolasku();

    double tulosKertolasku = laskuOsoitin->laske(3.0, 4.0);
    std::cout << "Kertolasku-tulos: " << tulosKertolasku << std::endl;

    delete laskuOsoitin;

    return 0;
}
