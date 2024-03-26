#include "retezec.h"

// Konstruktor
Retezec::Retezec() {
    delka = 0;
    data = new char[1];
    data[0] = '\0';
}

// Konstruktor s parametrem
Retezec::Retezec(const char* text) {
    delka = 0;
    while (text[delka] != '\0') {
        delka++;
    }
    data = new char[delka + 1];
    for (int i = 0; i <= delka; i++) {
        data[i] = text[i];
    }
}

// Kopírovací konstruktor
Retezec::Retezec(const Retezec& x) {
    delka = x.delka;
    data = new char[delka + 1];
    for (int i = 0; i <= delka; i++) {
        data[i] = x.data[i];
    }
}

// Destruktor
Retezec::~Retezec() {
    delete[] data;
}

// GetObsah methoda
const char* Retezec::GetObsah() const {
    return data;
}

// SetObsah methoda
void Retezec::SetObsah(const char* text) {
    delete[] data;
    delka = 0;
    while (text[delka] != '\0') {
        delka++;
    }
    data = new char[delka + 1];
    for (int i = 0; i <= delka; i++) {
        data[i] = text[i];
    }
}

// Operator[] pro nekonstatní metody
char& Retezec::operator[](int index) {
    return data[index];
}

// Operator[] pro konstantní metody
const char& Retezec::operator[](int index) const {
    return data[index];
}

// Operator=
Retezec& Retezec::operator=(const Retezec& x) {
    if (this == &x)
        return *this;

    delete[] data;
    delka = x.delka;
    data = new char[delka + 1];
    for (int i = 0; i <= delka; i++) {
        data[i] = x.data[i];
    }

    return *this;
}

// Operator+=
Retezec& Retezec::operator+=(const Retezec& x) {
    int newdelka = delka + x.delka;
    char* newData = new char[newdelka + 1];
    for (int i = 0; i < delka; i++) {
        newData[i] = data[i];
    }
    for (int i = 0; i <= x.delka; i++) {
        newData[delka + i] = x.data[i];
    }

    delete[] data;
    data = newData;
    delka = newdelka;

    return *this;
}

// Operator+
Retezec Retezec::operator+(const Retezec& x) const {
    Retezec result(*this);
    result += x;
    return result;
}
