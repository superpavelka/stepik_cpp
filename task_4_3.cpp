/*
� ���� ������� ��� ������������ ����������� �������� ������� Expression ��� ������������� �������������� ���������.
 ����������, ��� ����� ���������� ��� ������: Expression � ������� ����� ��������, Number � ��� ������������� ����� 
� BinaryOperation � ����� ����������� �������� �������� (+, �-, * ��� /).

����� Number ������ ������� �������� ���� double.

����� BinaryOperation ������ ������� ��������� �� ����� � ������ ��������, ������� ���� �������� ��������������� �����������, 
� ����� ��� �������� (+, �-, * ��� /), ������� ����� ��� ���� ����������.

�� ���� ������� ������ ���� ����� evaluate, ������� ���������� �������� ���� double � �������� ���������������� ��������������� 
���������, ��������, �������� ���������� ���� Number � ��� �����, ������� �� ������, � ���� � ��� ���� ������ BinaryOperation 
� ��������� +, �� ����� ��������� �������� ������ � ������� �������� � ������� �� �����.

� ������ ������� ��� ����� ���������� �������� ����� virtual ���, ��� ��� ����������, ���������� ����� evaluate ���, ��� ��� 
�� �������, � ����� ����������� �����������, ��� ��� ��� �����.

��� ���������� ����� ������� ������, ��� ��� ����������� ������� BinaryOperation �� �������� �� ����������� ������ � ������� 
��������� (�������������, ��� ��� �������� � ������������ ������).

��������, ��������� 3 + 4.5 * 5 ����� ��������������� ��������� ���:

// ������� ������ ������� ��� ������������ 4.5 * 5
Expression * sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
// ����� ���������� ��� � ��������� ��� +
Expression * expr = new BinaryOperation(new Number(3), '+', sube);

// ��������� � ������� ���������: 25.5
std::cout << expr->evaluate() << std::endl;

// ��� ������������� *���* ���������� �������
// (��������, sube ����� ������ ��������� expr, ������� ��� ������� �� �����)
delete expr;


���������� � ����������: ��� ���������� ����� ������� �� ����� ������� ��� �������� ���-����. 
�� ������ �������� ����� ��������������� �������, ������ ��� ������, �� �� ����� ������������� ������� main.*/

struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression() {} 
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}
    
    double evaluate() const { return value; }
    ~Number() {}
private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      ����� op ��� ���� �� 4 ��������: '+', '-', '*' ��� '/', ��������������� ���������,
      ������� ��� ����� �����������.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    
    double evaluate() const {
    if (op == '+')
        return (left->evaluate()) + (right->evaluate());
    else if (op == '-')
        return (left->evaluate()) - (right->evaluate());
    else if (op == '*')
        return (left->evaluate()) * (right->evaluate());
    else if (op == '/')
        return (left->evaluate()) / (right->evaluate());
    }
    ~BinaryOperation() { 
    delete left;
    delete right;
    }
private:
    Expression const * left;
    Expression const * right;
    char op;
};
