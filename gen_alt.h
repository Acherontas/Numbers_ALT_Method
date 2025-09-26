#ifndef GEN_ALT_H
#define GEN_ALT_H
#include <string>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <iostream>
using namespace std;

class gen_alt
{
    public:
        gen_alt();
        virtual ~gen_alt();
        gen_alt(const gen_alt& other);
        gen_alt& operator=(const gen_alt& other);
        int g_a(long long int nmb);

    protected:

    private:
};

#endif // GEN_ALT_H
