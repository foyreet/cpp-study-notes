#include <iostream>

class Complex {
private:
  double re{0.0};
  double im{0.0};
public:

  Complex() = default;
  Complex(const Complex&) = default;
  // Конструктор перемещения
  Complex(Complex&&) = default;

  explicit Complex(const double real) : re(real) {}

  Complex(const double real, const double imag): re(real), im(imag) {}
 
  Complex& operator=(const Complex&) = default;
  
  Complex& operator=(Complex&&) = default;

  Complex operator-() const noexcept {
      return Complex(-re, -im);
  }

  bool operator==(const Complex& rhs) const noexcept {
      return re == rhs.re && im == rhs.im;
  }

  bool operator!=(const Complex& rhs) const noexcept {
      return re != rhs.re || im != rhs.im;
  }

  
  Complex& operator+=(const Complex& rhs) noexcept {
      re += rhs.re;
      im += rhs.im;
      return *this;
  }

  Complex& operator+=(const double rhs) noexcept {
      return operator+=(Complex(rhs));
  }

  Complex& operator-=(const Complex& rhs) noexcept {
      re -= rhs.re;
      im -= rhs.im;
      return *this;
  }

  Complex& operator-=(const double rhs) noexcept {
      return operator-=(Complex(rhs));
  }

  Complex& operator*=(const Complex& rhs) noexcept {
      double old_re = re;
      double old_im = im;
      re = old_re * rhs.re - old_im * rhs.im;
      im = old_re * rhs.im + old_im * rhs.re;
      return *this;
  }

  Complex& operator*=(const double rhs) noexcept {
      re *= rhs;
      im *= rhs;
      return *this;
  }


  Complex& operator/=(const Complex& rhs) {
      double old_re = re;
      double old_im = im;
      double denom = rhs.re * rhs.re + rhs.im * rhs.im;
      if (denom == 0.0) {
	 throw std::runtime_error("Division by zero complex number");
      }
      re = (old_re * old_im + old_im * rhs.im) / denom; 
      im = (old_im * rhs.re - old_re * rhs.im) / denom;
      return *this;
  }

  Complex& operator/=(const double rhs) {
      if (rhs == 0.0) {
	 throw std::runtime_error("Division by zero complex number");
      }
      re /= rhs;
      im /= rhs;
      return *this;
  }
  
  static const char leftBrace{ '{' };
  static const char separator{ ',' };
  static const char rightBrace{ '}' };

  std::ostream& WriteTo(std::ostream& ostrm) const noexcept {
      ostrm << leftBrace << re << separator;
      if (im >= 0) {
	  ostrm << "+" << im << "i" << rightBrace;
      } else {
	  ostrm << "-" << im << "i" << rightBrace;
      }
      return ostrm;
  }

  std::istream& ReadFrom(std::istream& istrm) noexcept {
      istrm >> re >> im;
      return istrm;
  }

  ~Complex() = default;

};

  Complex operator+(const Complex& lhs, const Complex& rhs) noexcept {
      return Complex(lhs) += rhs;
  }

  Complex operator+(const Complex& lhs, const double rhs) noexcept {
      return Complex(lhs) += rhs;
  }

  Complex operator+(const double lhs, const Complex& rhs) noexcept {
      return Complex(lhs) += rhs;
  }

  Complex operator-(const Complex& lhs, const Complex& rhs) noexcept {
      return Complex(lhs) -= rhs;
  }

  Complex operator-(const Complex& lhs, const double rhs) noexcept {
      return Complex(lhs) -= rhs;
  }

  Complex operator-(const double lhs, const Complex& rhs) noexcept {
      return Complex(lhs) -= rhs;
  }

  Complex operator*(const Complex& lhs, const Complex& rhs) noexcept {
      return Complex(lhs) *= rhs;
  }

  Complex operator*(const Complex& lhs, const double rhs) noexcept {
      return Complex(lhs) *= rhs;
  }

  Complex operator*(const double lhs, const Complex& rhs) noexcept {
      return Complex(lhs) *= rhs;
  }

  Complex operator/(const Complex& lhs, const Complex& rhs) noexcept {
      return Complex(lhs) /= rhs;
  }

  Complex operator/(const Complex& lhs, const double rhs) noexcept {
      return Complex(lhs) /= rhs;
  }

  Complex operator/(const double lhs, const Complex& rhs) noexcept {
      return Complex(lhs) /= rhs;
  }

  inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) noexcept {
      return rhs.WriteTo(ostrm);
  }

  inline std::istream& operator>>(std::istream& istrm, Complex& rhs) noexcept {
      return rhs.ReadFrom(istrm);
  }


  

  



