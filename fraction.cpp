#include <stdexcept>
#include "fraction.h"
#include <cmath>

Fraction::Fraction()
{
	
}

Fraction::Fraction(int numerateur, int denominateur)
{
	if(denominateur == 0)
		throw std::runtime_error ("division par zero");

	m_denominateur = denominateur
	m_numerateur = numerateur;
}

int Fraction::get_numerateur() const
{
	return m_numerateur;
}

int Fraction::get_denominateur() const
{
	return m_denominateur;
}

/*
test_divis(divis, denominateur, numerateur) :

On vient regarder si "divis" est un diviseur commun de :
"denominateur" et "numerateur"
*/

bool Fraction::test_divis(int divis)
{
	bool divCommun {false};
	double Ddivis { (double)divis };
	double doubleNum { (double)m_numerateur }, doubleDen { (double)m_denominateur };

	bool divNum {false}, divDen {false};

	if(((doubleNum / Ddivis) - floor(doubleNum / Ddivis)) == 0)
		divNum = true;

	if(((doubleDen / Ddivis) - floor(doubleDen / Ddivis)) == 0)
		divDen = true;

	if( divNum == true and divDen == true)
		divCommun = true;

	return divCommun;
}

void Fraction::simplifier()
{
	int actualDivis { 0 };

	if(m_numerateur < m_denominateur)
		actualDivis = m_numerateur;

	else
		actualDivis = m_denominateur;

	while(!test_divis(actualDivis))
	{
		actualDivis -= 1;
	}

	m_denominateur /= actualDivis;
	m_numerateur /= actualDivis;

}

Double Fraction::get_decimal()
{
	return m_numerateur / m_denominateur;
}

Fraction operator + (Fraction const & a, Fraction const & b)
{
	Fraction c ((a.get_numerateur() * b.get_denominateur()) + (b.get_numerateur() * a.get_denominateur()), a.get_denominateur * b.get_denominateur);
	return c;
}

Fraction operator - (Fraction const & a, Fraction const & b)
{
	Fraction c ((a.get_numerateur() * b.get_denominateur()) - (b.get_numerateur() * a.get_denominateur()), a.get_denominateur * b.get_denominateur);
	return c;
}

Fraction operator * (Fraction const & a, Fraction const & b)
{
	Fraction c (a.get_numerateur() * b.get_numerateur(), a.get_denominateur() * b.get_denominateur());
	return c;
}

Fraction operator / (Fraction const & a, Fraction const & b)
{
	Fraction c (a.get_numerateur() * b.get_denominateur(), a.get_denominateur() * b.get_numerateur());
	return c;
}

Fraction operator = (Fraction a&)
{
	return Fraction(a.get_numerateur(), a.get_denominateur());
}