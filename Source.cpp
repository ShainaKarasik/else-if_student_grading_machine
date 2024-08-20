#include <iostream>
#include <string>

int main() {

	//change the input from 1,2,3, for each question when grading the quiz
	int studentAnswer = 2;

	std::string feedback1 = "This answer is wrong because....";
	std::string feedback2 = "This answer is correct! You know this because...";
	std::string feedback3 = "This answer is wrong. While the first part is correct...";
	std::string feedback;

	int correctAnswer = 2;

	int points = 0;

	if (studentAnswer == 1) {
		std::cout << feedback1 << std::endl;
	}
	else if (studentAnswer == 2) {
		std::cout << feedback2 << std::endl;
	}
	else if (studentAnswer == 3) {
		std::cout << feedback3 << std::endl;
	}
	else {
		std::cout << feedback << std::endl;
	}
	if (studentAnswer == correctAnswer) {
		points++;
	}

	std::cout << points << std::endl;
	// the output is the whether the students answer is wrong or right, and # of points gained per question right 


	return 0;
}

