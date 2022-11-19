class Fraction
{
	public:
		Fraction(int numerateur, int denominateur)

		int get_denominateur();
		int get_numerateur();
		int test_denominateur(int denominateur);

		Fleche simplifier();
		double get_decimal();



	private:
		int m_denominateur, m_numerateur;

}