#include <iostream>
#include <exception>
namespace oem {
	enum class Return : unsigned int {
		Success = 1,
		Failure = 2,
		Running = 3,
		Error = 0
	};
    struct EngineException : std::exception
    {
        const char * what() const { return "EngineException\n"; }
    };
}