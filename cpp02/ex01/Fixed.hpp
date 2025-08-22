#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    private:
        int _raw;
        static const int _fractionalBits;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(int const value);
        Fixed(float const value);
        Fixed &operator=(Fixed const &other);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &f);

#endif
