#ifndef FRACTION_H
#define FRACTION_H
#include <string>

class Fraction
{
  private:
    int m_numerator;
    int m_denominator;
    
  public:
    /**
     * Constructor, requiring numerator and denominator to be provided to
     * represent the fraction: numerator/denominator
     **/
    Fraction(int,int); 
    
    /**
     * Returns whether or not the data represents a "proper fraction," where the
     * denominator must be a bigger number than the numerator. In special cases,
     * such as when the denominator is invalid (i.e. zero), this should return
     * false
     **/
    bool is_proper();
    
    /**
     * Returns the fraction as a string representing a mixed number, where a
     * mixed number is an integer followed by a proper fraction. For example,
     * 5/2 as a mixed number should be: "2 1/2" but when the fraction is
     * proper, it just returns the fraction as its proper form, such as
     * 1/4 should be "1/4" but invalid data just returns an empty string
     **/
    std::string as_mixed();
};

#endif