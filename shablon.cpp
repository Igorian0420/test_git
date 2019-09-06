#include <iostream>

template <typename T1, typename T2>
void summ(T1 firstnum, T2 secondnum)
{
	std::cout << (firstnum + secondnum);
}

template <typename T3, typename T4>
class rawno
{
public:
	rawno(T3 one, T4 two)
	{
		if (one > two)
		{
			std::cout << "First number bigger then second!" << std::endl;
		}
		else if (one < two)
		{
			std::cout << "First number smoller then second!" << std::endl;
		}
		else
		{
			std::cout << "This number the same!" << std::endl;
		}
	}
};

int main()
{
	summ(5, 8);
	std::cout << std::endl;

	rawno<int, int> obj(2, 2);

	return 0;
}
