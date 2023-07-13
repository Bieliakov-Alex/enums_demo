#include <iostream>
#include <cstdint>

enum class Colors
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Violet
};

int main()
{
	Colors color{Colors::Orange};
	Colors color_2{ Colors::Blue };

	if (color == Colors::Green)
	{
		color = Colors::Violet;
		std::cout << "Green" << std::endl;
	}
	else
	{
		std::cout << "Not green" << std::endl;
	}

	if (color == color_2)
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}

	switch (color)
	{
	case Colors::Violet: std::cout << "Violet" << std::endl; break;
	default:std::cout << "Another color" << std::endl;
	}

	int var = static_cast<uint8_t>(color);

	std::cout << var << std::endl;

	auto color_3 = static_cast<Colors>(var);
	if (color_3 == Colors::Violet)
	{
		std::cout << "Success!" << std::endl;
	}


	return 0;
}