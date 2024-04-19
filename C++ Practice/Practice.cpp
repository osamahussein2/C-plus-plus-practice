#include "Practice.h"

Practice::Practice() : vector(glm::vec3(1.0f, 2.0f, 3.0f)), quaternion(2.0f, 4.0f, 3.0f, 6.0f)
{

}

Practice::~Practice()
{

}

glm::vec3 Practice::AddVector(glm::vec3 v_)
{
	glm::vec3 addition;

	addition = vector + v_;

	std::cout << "(" << vector.x << ", " << vector.y << ", " << vector.z << ") + (" << v_.x << ", " << v_.y << ", " << v_.z
		<< ") = (" << addition.x << ", " << addition.y << ", " << addition.z << ")" << std::endl;

	std::cout << "The dot product of the addition vectors is = " << glm::dot(vector, v_) << std::endl;
	std::cout << "The cross product of the addition vectors is = " << glm::to_string(glm::cross(vector, v_)) << std::endl;

	return addition;
}

void Practice::isDivisibleBy5(std::vector<int> n_)
{
	for (int i = 0; i < n_.size(); i++)
	{
		if (n_[i] % 5 == 0)
		{
			std::cout << "Number " << n_[i] << " is divisible by 5!" << std::endl;
		}
		else
		{
			std::cout << "Number " << n_[i] << " is not divisible by 5!" << std::endl;
		}
	}
}

glm::quat Practice::AddQuaternion(glm::quat q_)
{
	glm::quat addQuat;

	addQuat = quaternion + q_;

	std::cout << "(" << quaternion.w << ", " << quaternion.x << ", " << quaternion.y << ", " << quaternion.z << ") + (" 
		<< q_.w << ", " << q_.x << ", " << q_.y << ", " << q_.z
		<< ") = (" << addQuat.w << ", " << addQuat.x << ", " << addQuat.y << ", " << addQuat.z << ")" << std::endl;

	return addQuat;
}

void Practice::returnStrings(std::vector<std::string> s_)
{
	for (int counter = 0; counter < s_.size(); counter++)
	{
		std::cout << "Input string returns: " << s_[counter] << std::endl;
	}
}

void Practice::guessTheNumber(int num_)
{
	std::cout << "Input a number: ";
	std::cin >> num_;


}

bool Practice::isSumGreaterThan20(std::vector<float> numbers_)
{
	int sum = std::accumulate(numbers_.begin(), numbers_.end(), 0);

	if (sum > 20)
	{
		std::cout << "Sum of the vectors = " << sum << std::endl;
		return true;
	}

	else if (sum < 20)
	{
		return false;
	}


	return true;
}

bool Practice::isDifferenceLessThan20(float number[4])
{
	int difference = number[0] - number[1] - number[2] - number[3];

	if (difference < 20)
	{
		std::cout << "The difference of the numbers = " << difference << std::endl;
		return true;
	}

	else if (difference > 20)
	{
		return false;
	}


	return true;
}

glm::mat3 Practice::transpose(glm::mat3 mat_)
{
	glm::mat3 transposeMat = glm::transpose(mat_);

	std::cout << "Transpose Matrix = " << glm::to_string(transposeMat) << std::endl;

	return transposeMat;
}

std::string Practice::inputString()
{
	std::queue<std::string> strings;
	std::string s;

	while (s != "exit")
	{
		std::cout << "Let's have some fun by writing a string: ";
		std::getline(std::cin, s);

		strings.push(s);

		while (!strings.empty())
		{
			std::cout << "String read as: " << strings.front() << std::endl;
			strings.pop();
		}
	}

	return s;
}
