#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "sockets.hpp"
#include "authentication.hpp"
#include "program_binary.hpp"

int main()
{
	auto tcp_client = std::make_shared<sockets::tcp_client>("192.168.2.128", "8000");
	auto auth = std::make_unique<loader::authentication>(tcp_client, "myusername", "secretpassword");

	auto binary = auth->stream_binary();
	binary->memory_execute();
	//binary->dump_to_disk("streamed_binary.exe", false);
}