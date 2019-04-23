#pragma once
#include <string_view>

namespace util
{
	[[noreturn]] void exception(std::string_view error_message);
}