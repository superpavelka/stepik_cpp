/* 

(������� ���������� ���������) �������������� ������� ����� ������� �� ���������� 
� ����� ������ ���������, ������ ��� ��������� �� ��������� ������� ������������ g++/clang++/msvc. 
������� ����� ������� �� ����������� ��� ��������� ������� �� ����� �����, ������ �� ������� ��� ��������, 
����� ����� ������ ��� �������� ����������� ������� ������.

��� ��������� ����������� �������, ������� ��������� �� ���� ��� ��������� �� ������� ����� Expression, 
� ���������� true, ���� ��� ��������� ��������� �� ����� ���� �� ������� ������ � ���� �� ������, � false 
� ��������� ������ (�.�. ���� ��� ��������� ��������� �� BinaryOperation, �� ������������ true, � ���� ���� 
�� ��� ��������� �� Number, � ������ �� BinaryOperation, �� false).

���������� � ����������: ������������ typeid � dynamic_cast ���������. �������� ������ �� ���������� ���������� ���������.
*/

bool check_equals(Expression const *left, Expression const *right)
{
    // put your code here
    int* vptrl =  *(int**)left;
    int* vptrr =  *(int**)right;
    if (vptrl == vptrr)
        return true;
    else
        return false;
}
