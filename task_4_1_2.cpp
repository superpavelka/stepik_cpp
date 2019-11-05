/* 

��� ��� ����� Foo:

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};

��� �����, ��������� ������ �� ����� ����� ��� ������������ � "�������" ����������� ������. 
�� ��� ����� ����� ������ ����� ������, ����� �������� ��� � ������� foo_says:

void foo_says(const Foo& foo) { foo.say(); }

� ���� ������� ��� ����� ����������� ������� get_foo 
(��������� ������� �������� �� ���������� � ������� ���������, ��� ����� �������� � ������� �� ��������������) 
���, ����� ��������� ��� �������������� � �������:

foo_says(get_foo(msg));

��� msg � ������������ C-style ������.

���������� � ����������: ��� ���������� ������� ��� ��������� ������� ����� ��������������� ������� � ������. 
��������� �������� ����������� ������ Foo ��� ������� foo_says. ������� ��� �������� ���-���� �� �����. 
������������� ������� main �� �����.
*/

/* ���� ��� ������ ����������� ��� �������� ����� Foo � ������� foo_says.
 * �� ����� ��� ����������������� �/��� ������.
 *
 * #include <iostream>
 *        
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 * 
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// ��� ����� ���������� ������� get_foo, ��� ������� � �������,
// ����� �������������� � ������� ��� ��������� ��������� ���:
//
// foo_says(get_foo("Hello!"));

struct FooDerived : Foo {
    FooDerived(const char *msg) : Foo(msg) { }
};
const Foo get_foo(const char *msg) {
    FooDerived fd(msg);
    const Foo & f = fd;
    return f;  
}