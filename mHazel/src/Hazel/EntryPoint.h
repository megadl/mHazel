#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	int a = 5;
	HZ_CLIENT_INFO("Hello! Var = {0}", a);

	printf("Hazel Engine");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
