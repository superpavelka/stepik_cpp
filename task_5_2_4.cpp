/* �������� � ����� Rational �������� ���������� � double. 
��� ��������� �� ���������� ������� ����������� � ������������� �� �� �����. 
����� to_double ����� ������������ � ���� �������.

������ ���������: ��������� �������� �������������� � double � ����� Rational 
�� ����� ������� ����, ��������, ������, ��� ��� ����� �������������� ����� ����������� ������ ��������. 
��� ������ ���� ������������� � ����� ������������ � ���������� �������� ���������� ����� ����������.

���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main �� �����. */

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);
    operator double() const{ return to_double(); }

    void neg();
    void inv();
    double to_double() const;

private:
    int numerator_;
    int denominator_;
};