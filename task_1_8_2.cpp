/*�� ������ �� ������, ��� ������������� �������� ������ ������� � ��� ���. 
��� ����, ����� ����� �����������, ������ ��� �������� �������� ������� ������, 
� ������ ������� ����� �� ������������, �� ���������� ��� �������������� ����������� ����� �������-������.

���������� ������ MAX �� ��� ����������, ������� ����������� ������������� (int) 
����������, ���������� � �������� �������� ���������, ���������� �� ��������, ���������� � ������ ���� ����������. 
������ ������ �������:

int a = 10;
int b = 20;
int c = 0;
MAX(a, b, c); // ������ c ����� 20
MAX(a += b, b, c); // ������ a = � = 30

��� ��������� ������� ������������ ������ ��� ����� ������ ��������� ��� �������������.

���������� � ����������: ��� ����� ����������� ������ ������ MAX. 
������� main � �����-���� ������ ������� ������������� �� �����. 
���������� ������ ��� ������ ������������� ���������� ��������.

���������: �������� ��� ����������� �����-������ �������������� ����������� ��� ����������� ���������� ����������.  
�������, ��� ������� ������ ����������� ����� � ����� ������, ������������ ������ �� ����� ��� ��������� C++. 
�������� ������ ���, ����� ��� ��� ����������� � ����� ������ ��������� ���������� ���. 
���������, ��� ��� ��� ����� ��������� ��������� ��� � ����� ������� � ��� �� ������� ������. 
���� ������ ���������� �����-������ ����������, �� ������������ ������� ���, ����� ��� �� ������ �� ������� ���.*/

#define MAX(x, y, r) {int x_ = (x); int y_ = (y); int r_ = ((x_) > (y_) ? (x_) : (y_)); r = (r_);}
