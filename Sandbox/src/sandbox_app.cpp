#include <azteca.h>

class sandbox_app : public azteca::application
{
public:
	sandbox_app()
	{

	}

	~sandbox_app()
	{

	}
};

azteca::application* azteca::create_application()
{
	return new sandbox_app();
}