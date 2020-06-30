#include "rain/rain.hpp"

#include "emilia-api.hpp"

int main() {
	std::cout << "Hello world! This is the emilia-api." << std::endl;
	std::cout << "Using rain v"
						<< RAIN_VERSION_MAJOR << "."
						<< RAIN_VERSION_MINOR << "."
						<< RAIN_VERSION_REVISION << "."
						<< RAIN_VERSION_BUILD << "." << std::endl;
	std::cout << "This binary was built on "
						<< Rain::getPlatformString() << "." << std::endl;
	return 0;
}
