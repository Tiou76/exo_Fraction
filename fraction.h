#ifndef FRACTION_H
 #define FRACTION_H

class Fraction
{
	public:
		Fraction(int numerateur, int denominateur)
		Fraction();

		int get_denominateur() const;
		int get_numerateur() const;
		int test_divis(int divis, int denominateur, int numerateur);

		Fraction simplifier();
		double get_decimal();

		Fraction operator + (Fraction const & a, Fraction const & b)
		Fraction operator - (Fraction const & a, Fraction const & b)
		Fraction operator * (Fraction const & a, Fraction const & b)
		Fraction operator / (Fraction const & a, Fraction const & b)
		Fraction operator = (Fraction const & a, Fraction const & b)


	private:
		int m_denominateur, m_numerateur;

}
 #endif