#include <iostream>
using namespace std;

#include "../../scr/liton_cpp_snippets/lion_snippets.hpp"

void test_disp_env()
{
	liton_sp::env::disp_env(cout);
}

int main(int argc, char** argv)
{
	test_disp_env();
	return 0;
}
