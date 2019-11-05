/* ������� �������� Expression, ������� �� ������������� �� �������� ������? 
���������� ScopedPtr, ������� ����� �������� � ����������� �� ������� ����� Expression. 
� ���� ������� ��� ��������� ����������� ������ get, release � reset, ��������� * � -> ���, 
��� ��� ���� ������� � ���������� �����. � ����� ���������� ����������� ScopedPtr �� ��������� �� Expression.

���������: � �������� �������� ����, ��� ScopedPtr �� ������ �������� ��������� (����� ������ release), 
����������� ������� ���������, ��� ���� �� ������ ���� ��������� ��������� � �����������, �� ������ ��� �� �����������, 
��� ��� delete �� �������� ��������� ������ �� ������.

���������� � ����������: ��� ��� �� ������ ������� ��� ������� ���-����, ������������� ������� main �� �����.*/

struct Expression;
struct Number;
struct BinaryOperation;
 
struct ScopedPtr {

    explicit ScopedPtr(Expression *ptr = 0) {
        this->ptr_=ptr;
    }
    ~ScopedPtr() {
        delete  ptr_;
    }
    Expression* get() const {
        return ptr_;
    }
    Expression* release() {
        Expression * ptr = this->ptr_;
        this->ptr_ = NULL;
        return ptr;
    }
    void reset(Expression *ptr = 0) {
        delete this->ptr_;
        this->ptr_ = ptr;
    }
    Expression& operator*() const {
        return *ptr_;
    }
    Expression* operator->() const {
        return ptr_;
    }
private:
    ScopedPtr& operator=(const ScopedPtr & other) {} //�������� ������������
    ScopedPtr(const ScopedPtr & other) {} //����������� �����������
    Expression *ptr_;
};