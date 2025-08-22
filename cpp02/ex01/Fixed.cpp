#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    _raw = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    _raw = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_raw = other._raw;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_raw;
}

void Fixed::setRawBits(int const raw) 
{
    this->_raw = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_raw) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return _raw >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
    os << f.toFloat();
    return os;
}
