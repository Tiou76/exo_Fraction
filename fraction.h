#ifndef FRACTION_H
 #define FRACTION_H

class Fraction
{
	public:
		Fraction(int numerateur, int denominateur);
		Fraction();

		int get_denominateur() const;
		int get_numerateur() const;
		bool test_divis(int divis);

		void simplifier();
		double get_decimal();

		Fraction operator = (Fraction const & a);


	private:
		int m_denominateur, m_numerateur;

};

Fraction operator + (Fraction const & a, Fraction const & b);
Fraction operator - (Fraction const & a, Fraction const & b);
Fraction operator * (Fraction const & a, Fraction const & b);
Fraction operator / (Fraction const & a, Fraction const & b);

 #endif