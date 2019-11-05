/* 
В этой задаче вам требуется реализовать оператор [] для уже известного вам класса String. 
Однако на этот раз оператор должен реализовывать нестандартное поведение: оператор нужно 
реализовать таким образом, чтобы для объекта str класса String можно было писать str[i][j] 
и это выражение возвращало подстроку начинающуюся в позиции i (считая с 0) и заканчивающуюся в позиции j (не включая).

Например:

String const hello("hello");
String const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
String const ell  = hello[1][4]; // теперь в ell хранится подстрока "ell"


Обратите внимание, что i может равняться j, в этом случае результатом должна быть пустая строка. 
Гарантируется, что i никогда не будет больше j, и они не будут выходить за пределы длины строки.

Требования к реализации: При выполнении задания вы можете создавать любые методы/конструкторы или 
даже структуры/классы, если они вам нужны. Реализовывать методы, которые уже объявленны в шаблоне, 
не нужно  они уже реализованы. При выполнении задания не вводите и не выводите что-либо. Реализовывать функцию main не нужно.
*/

#include <iostream>
#include <cstddef> // size_t

struct String {
    String(const char *str = "");
    String(size_t n, char c);
    ~String();
 
    String(const String &other);
    String &operator=(const String &other);
 
    void append(const String &other);
    
    class PreparedString {
    public:
        void write(std::ostream& out) const;
        
        String operator[](unsigned int to) const;
        
        PreparedString(const String& source_in, unsigned int from_in);
        
    private:
        const String& source;
        unsigned int from;
    };
    
    void write(std::ostream& out) const;
    
    PreparedString operator[](unsigned int from) const;
    
    size_t size;
    char *str;
};
 
void String::PreparedString::write(std::ostream& out) const
{
    out << (this->source.str+this->from) << std::endl;
}
 
String String::PreparedString::operator[](unsigned int to) const
    {
        char *tmp_c_str = new char[to-from+1];
        for(char *at_src = source.str+from, *at_dst = tmp_c_str, *last = source.str+to; at_src != last; ++at_src, ++at_dst)
            *at_dst = *at_src;
        *(tmp_c_str+to-from) = '\0';
        String tmp_string(tmp_c_str);
        delete[] tmp_c_str;
        
        return tmp_string;
    }
    
String::PreparedString::PreparedString(const String& source_in, unsigned int from_in): source(source_in), from(from_in)
{
}
 
String::PreparedString String::operator[](unsigned int from) const
{
    return String::PreparedString(*this,from);
}
 
void String::write(std::ostream& out) const
{
    out << this->str << std::endl;
}