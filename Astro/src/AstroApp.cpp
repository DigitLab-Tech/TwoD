#include <TwoD.h>

class AstroApp : public TwoD::App
{
public:
	AstroApp() 
	{
	
	};

	~AstroApp() 
	{
	
	};

private:

};

TwoD::App* TwoD::CreateApp() {
	return new AstroApp();
}