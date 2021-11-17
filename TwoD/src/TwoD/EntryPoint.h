#pragma once

extern TwoD::App* TwoD::CreateApp();

int main(int argc, char** argv) 
{
	printf("test");
	auto app = TwoD::CreateApp();
	app->Run();
	delete app;
}
