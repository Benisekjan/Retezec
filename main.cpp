#include <iostream>
#include "retezec.h"

int main() {
    std::cout << "retezec\n";

    // Objekt vytvoreny vychozim konstruktorem
    Retezec s0;
    std::cout << "s0:\n" << s0.GetObsah() << std::endl;

    // Objekty vytvorene konstruktorem s parametrem
    Retezec s1("Texxxtt");
    Retezec s2("Stringggss");
    std::cout << "s1:\n" << s1.GetObsah() << std::endl;
    std::cout << "s2:\n" << s2.GetObsah() << "\n" << std::endl;

    // Objekt vytvoreny kopirovacim konstruktorem
    Retezec s4(s1);
    std::cout << "s4:\n" << s4.GetObsah() << "\n" << std::endl;

    // Prirazeni (s2 = s1)
    s2 = s1;
    std::cout << "Prirazeni (s2 = s1):\n";
    std::cout << "s1:\n" << s1.GetObsah() << std::endl;
    std::cout << "s2:\n" << s2.GetObsah() << "\n" << std::endl;

    // Secteni (s3 = s1 + s2)
    Retezec s3 = s1 + s2;
    std::cout << "Secteni (s3 = s1 + s2):\n";
    std::cout << "s1:\n" << s1.GetObsah() << std::endl;
    std::cout << "s2:\n" << s2.GetObsah() << std::endl;
    std::cout << "s3:\n" << s3.GetObsah() << "\n" << std::endl;

    // Pricteni (s1 += s2 + s3)
    s1 += s2 + s3;
    std::cout << "Pricteni (s1 += s2 + s3):\n";
    std::cout << "s1:\n" << s1.GetObsah() << std::endl;
    std::cout << "s2:\n" << s2.GetObsah() << std::endl;
    std::cout << "s3:\n" << s3.GetObsah() << "\n" << std::endl;

    return 0;
}
