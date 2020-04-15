#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Person Kate ("Kate", "Gregory",456);
    Person & rKate = Kate;
    Person* pKate = &Kate;

    Tweeter KateGregcons ("Kate","Gregory",567,"@gregcons");
    Person* pKateGregcons = &KateGregcons;
    Person& rpKateGregcons = KateGregcons;
    Tweeter& rtKateGregcons = KateGregcons;

    cout << rKate.GetName() << endl;
    cout << pKate->GetName() << endl;
    cout << KateGregcons.GetName() << endl;
    cout << rpKateGregcons.GetName() << endl;
    cout << rtKateGregcons.GetName() << endl;
    cout << pKateGregcons->GetName() << endl;
}