#include <iostream>

int main() {
	const int length = 5;
	int numbers[length];
	int result = 0;
	for(int i = 0; i < length; i++) {
		std::cin >> numbers[i];
	}
	for(int i = 1; i < length - 1; i++) {
		if((numbers[i] >= numbers[i -1] && numbers[i] >= numbers[i + 1]) || (numbers[i] <= numbers[i - 1] && numbers[i] <= numbers[i + 1])) {
			result += 1;
		}
	}
	if(result == length - 2) {
		std::cout << "yes";
	} else {
		std::cout << "no";
	}


	// int hours, minutes;
	// std::cin >> hours >> minutes;
	//
	// if(minutes < 45 && hours < 10) {
	// 	std::cout << '0' << hours << " : " << (minutes + 15);
	// } else if(minutes < 45 && hours >= 10 && hours <= 23) {
	// 	std::cout << hours << " : " << (minutes + 15);
	// } else if(minutes > 45 && hours <= 8) {
	// 	if(minutes < 55) {
	// 		std::cout << '0' << hours + 1 << " : 0" <<  minutes - 45;
	// 	} else {
	// 		std::cout << '0' << hours + 1 << " : " <<  minutes - 45;
	// 	}
	// } else if(minutes >= 45 && hours > 8 && hours < 23) {
	// 	if(minutes < 55) {
	// 		std::cout << hours + 1 << " : 0" <<  minutes - 45;
	// 	} else {
	// 		std::cout << hours + 1 << " : " <<  minutes - 45;
	// 	}
	// } else  if(minutes >= 45 && hours == 23) {
	// 	if(minutes < 55) {
	// 		std::cout << "00 : 0" << minutes - 45;
	// 	} else {
	// 		std::cout << "00 : " << minutes - 45;
	// 	}
	// }

	return 0;
}