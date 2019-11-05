/* ��������� ����� String, ������� � ���� �������� ������������. 
������ ��������� ��� ������ � �������. ��������� ������ �������� ��� �� 
(� size �������� ������ ������ ��� ������������ 0 �������, str ��������� �� C-style ������, �. �. � ����������� ������� ��������).

���������� � ����������: �� ������ �������� ����� ��������������� ������ ��� �������, 
�� �� ���������� ������ ������ �� ���������� ������� � ��� ��� �����������. ��� ���������� �� ����� ������� ��� �������� ���-����. 
������������� main �� �����. �� ����������� ������� �� cstdlib (malloc, calloc, realloc � free).
*/

#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

    /* ���������� �������� ������������ */
	String &operator=(const String &other)
    {
        if (this != &other)
        {
            delete[] str;
            size = other.size;
            str = new char[size+1];
            for (size_t i = 0; i <= size;i++)
                str[i] = other.str[i];
        }
        return *this;
    }

	void append(const String &other);

	size_t size;
	char *str;
};