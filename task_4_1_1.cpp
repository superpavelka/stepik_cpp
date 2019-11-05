/* —в€жите следующие классы в иерархию наследовани€: Character (ѕерсонаж), 
LongRange (ѕерсонаж дальнего действи€), Wizard (ћаг), SwordsMan (ћечник), 
Archer (Ћучник).ќбратите внимание на методы, объ€вленные в классах Ч 
они приведены в качестве описани€ интерфейса, которым должны обладать классы. 
Ќе измен€йте объ€влений методов Ч они даны как подсказка, просто добавьте 
наследование в определени€ классов.*/

#include <string> // std::string

struct Character
{
    std::string const & name() const;
    unsigned health() const;
};

struct LongRange : Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;
};

struct SwordsMan : Character
{
    std::string const & name() const;
    unsigned health() const;

    unsigned strength() const;    
};

struct Wizard : LongRange
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned mana() const;
};

struct Archer : LongRange
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned accuracy() const;
};