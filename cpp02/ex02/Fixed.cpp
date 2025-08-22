#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::Fixed(const int intValue)
{
    _raw = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    _raw = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::~Fixed() {}





Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        _raw = other._raw;
    return *this;
}




float Fixed::toFloat(void) const
{
    return (static_cast<float>(_raw) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_raw >> _fractionalBits);
}




bool Fixed::operator>(const Fixed& other) const { return _raw > other._raw; }
bool Fixed::operator<(const Fixed& other) const { return _raw < other._raw; }
bool Fixed::operator>=(const Fixed& other) const { return _raw >= other._raw; }
bool Fixed::operator<=(const Fixed& other) const { return _raw <= other._raw; }
bool Fixed::operator==(const Fixed& other) const { return _raw == other._raw; }
bool Fixed::operator!=(const Fixed& other) const { return _raw != other._raw; }





Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}





Fixed& Fixed::operator++()
{
    _raw++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _raw++;
    return temp;
}

Fixed& Fixed::operator--()
{
    _raw--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _raw--;
    return temp;
}




Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}




int Fixed::getRawBits(void) const { return _raw; }
void Fixed::setRawBits(int const raw) { _raw = raw; }




std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}
