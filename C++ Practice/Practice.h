#include "glm.hpp"
#include <iostream>
#include <gtx/string_cast.hpp>
#include <vector>
#include <queue>
#include <numeric>
#include <algorithm>

class Practice
{
public:
	Practice();
	~Practice();

	glm::vec3 AddVector(glm::vec3 v_);
	void isDivisibleBy5(std::vector<int> n_);
	glm::quat AddQuaternion(glm::quat q_);
	void returnStrings(std::vector<std::string> s_);
	void guessTheNumber(int num_);
	bool isSumGreaterThan20(std::vector<float> numbers_);
	bool isDifferenceLessThan20(float number[4]);
	glm::mat3 transpose(glm::mat3 mat_);
	std::string inputString();

private:
	glm::vec3 vector;
	glm::quat quaternion;
};

