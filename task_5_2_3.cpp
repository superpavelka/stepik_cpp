/* 
��� ���� ������ ������ ����������, ������� ������� ����������� ��� ������ ������������ ����� � 
��� ��������� ���������. ���������� ��������� <, <=, >, >=, ==, != ��� ������ Rational ���, �����
����� ���� ���������� ������� ������ Rational �� ������ ���� � ������, �� � � ������ �������.

��� ������� ������� �� ����������� ����� to_double, �� ������ � �����, � ������ �������, ��� �������� ������������. 
�� ������ ���������� ����� ��������������� ������ ��� ������� ���� ����������.

���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main �� �����.
*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);
 
    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);
 
    void neg();
    void inv();
    double to_double() const;
 
    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);
 
    Rational operator-() const;
    Rational operator+() const;
 
    double to_double_() const {
        return double(this->numerator_) / this->denominator_;       
    }
    bool operator<(const Rational & rational) const {
        return this->to_double_() < rational.to_double_();      
    }
    bool operator<(int d) const {
        return this->to_double_() < d;      
    }
    friend bool operator<(int d, const Rational & rational) {
        return d < rational.to_double_();       
    }       
    bool operator>(const Rational & rational) const {
        return this->to_double_() > rational.to_double_();
    }
    bool operator>(int d) const {
        return this->to_double_() > d;
    }
    friend bool operator>(int d, const Rational & rational) {
        return d > rational.to_double_();
    }
    bool operator<=(const Rational & rational) const {
        return !(*this > rational);
    }
    bool operator<=(int d) const {
        return !(*this > d);
    }
    friend bool operator<=(int d, const Rational & rational) {
        return !(d > rational);
    }
    bool operator>=(const Rational & rational) const {
        return !(*this < rational);
    }
    bool operator>=(int d) const {
        return !(*this< d);
    }
    friend bool operator>=(int d, const Rational & rational) {
        return !(d < rational);
    }
    bool operator==(const Rational & rational) const {
        return this->to_double_() == rational.to_double_();
    }
    bool operator==(int d) const {
        return this->to_double_() == d;
    }
    friend bool operator==(int d, const Rational & rational) {
        return d == rational.to_double_();
    }
    bool operator!=(const Rational & rational) const {
        return !(*this == rational);
    }
    bool operator!=(int d) const {
        return !(*this == d);
    }
    friend bool operator!=(int d, const Rational & rational) {
        return !(rational == d);
    }
private:
    int numerator_;
    unsigned denominator_;
};
 
Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);