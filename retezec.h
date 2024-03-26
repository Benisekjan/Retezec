#ifndef RETEZEC_H
#define RETEZEC_H

class Retezec {
private:
    char* data;
    int delka;

public:
    Retezec();
    Retezec(const char* );
    Retezec(const Retezec& );
    ~Retezec();

    const char* GetObsah() const;
    void SetObsah(const char* );
    int Delka() const;
    char& operator[](int );
    const char& operator[](int ) const;
    Retezec& operator=(const Retezec& );
    Retezec& operator+=(const Retezec& );
    Retezec operator+(const Retezec& ) const;
};

#endif // RETEZEC_H
