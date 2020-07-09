/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** DroidMemory
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    _fingerprint = rand();
    _exp = 0;
}

DroidMemory::~DroidMemory()
{
}

DroidMemory &DroidMemory::operator<<(DroidMemory const &d)
{
    _exp += d._exp;
    _fingerprint ^= d._fingerprint;
    return (*this);
}

DroidMemory &DroidMemory::operator>>(DroidMemory &d)
{
    d._exp += _exp;
    d._fingerprint ^= _fingerprint;
    return (*this);
}

DroidMemory &DroidMemory::operator+=(DroidMemory const &d)
{
    _exp += d._exp;
    _fingerprint ^= d._fingerprint;
    return (*this);
}

DroidMemory &DroidMemory::operator+=(size_t const &nb)
{
    _exp += nb;
    return (*this);
}

size_t DroidMemory::getFingerPrint() const
{
    return (_fingerprint);
}

size_t DroidMemory::getExp() const
{
    return (_exp);
}

DroidMemory &DroidMemory::operator+(DroidMemory const &d) const
{
  DroidMemory *tmp = new DroidMemory();
  tmp->_exp = _exp + d.getExp();
  tmp->_fingerprint = _fingerprint ^ d.getFingerPrint();
  return (*tmp);
}

DroidMemory &DroidMemory::operator+(size_t const &nb) const
{
  DroidMemory *tmp = new DroidMemory();
  tmp->_exp = _exp + nb;
  tmp->_fingerprint = _fingerprint ^ nb;
  return (*tmp);
}

DroidMemory &DroidMemory::operator=(DroidMemory const &d)
{
    _fingerprint = d._fingerprint;
    _exp = d._exp;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const DroidMemory &d)
{
    return(os << "DroidMemory '" << d.getFingerPrint() <<  "', " << d.getExp());
}