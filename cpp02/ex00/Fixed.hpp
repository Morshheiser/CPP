#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _raw;
    static const int    _fractionalBits;

public:
    // Orthodox Canonical Form
    Fixed();                    // default constructor
    Fixed(const Fixed &other);  // copy constructor
    Fixed &operator=(const Fixed &other); // copy assignment operator
    ~Fixed();                   // destructor

    // Member functions
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
