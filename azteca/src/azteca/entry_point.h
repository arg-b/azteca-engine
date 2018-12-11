#pragma once

#ifdef AZ_PLATFORM_WINDOWS

extern azteca::application* azteca::create_application();

int main(int argc, char** argv)
{
	auto app = azteca::create_application();

	app->run();

	delete app;

	return 0;
}

#endif