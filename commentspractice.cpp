/*
friend Fraction operator+(const Fraction &frac1, const Fraction &frac2)
{
    Fraction temp(frac1.num + frac2.num, frac2.den + frac2.den);
    return temp;
}

Fraction operator+(Fraction &frac1)
{
    Fraction temp(this->num + frac1.num, this->den + frac1.den);
    return temp;
}

Fraction& operator=(Fraction &frac1)
{
    this->num = frac1.num;
    this->den = frac1.den;
    return *this;
}

friend ostream& operator<<(ostream &out, const Fraction &frac1)
{
    out << frac1.num << frac1.den;
    return out;
}

friend istream operator>>(istream &in, Fraction &frac1)
{
    in >> frac1.num;
    in >> frac1.den;
}


*/