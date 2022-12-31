#include <Hazel.h> // use compiler include path not a relative one

class Sandbox : public Hazel::Application {
public:
	Sandbox() {
	}
	~Sandbox() {
	}
};


Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox;
}