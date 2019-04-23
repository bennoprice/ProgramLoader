#include <iostream>
#include "util.hpp"

namespace util
{
	[[noreturn]] void exception(std::string_view error_message)
	{
		std::cerr << error_message.data() << std::endl << std::endl << "press enter to exit...";
		getchar();
		exit(0);
	}
}