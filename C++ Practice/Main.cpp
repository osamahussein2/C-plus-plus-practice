#include <iostream>
#include <cmath>
#include <queue>
#include "Practice.h"

int main(int argc, char argv[]) {

	Practice* practice = new Practice();

	float number[4] = {100.0f, 30.0f, 45.0f, 20.0f};

	practice->AddVector(glm::vec3(3.0f, 1.0f, 1.0f));
	practice->isDivisibleBy5({ 10, 4, 35, 44, 224, 50 });
	practice->AddQuaternion(glm::quat(3.0f, 2.0f, 4.0f, 1.0f));
	practice->returnStrings({ "All-time best", "Yay! I did it!", "3rd time is the charm!", "Failure is inevitable",
		"Arrogance doesn't yield good results" });
	practice->isSumGreaterThan20({ 2, 4, 5, 20 }); 
	practice->inputString();
	practice->isDifferenceLessThan20(number);

	return 0;
}