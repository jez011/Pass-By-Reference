#include <iostream>
using namespace std;

void WorkFlow(int& sum);
void WorkFlow2(int& sum);



//Main function for execution
int main() {
	int sum = 0;
	WorkFlow(sum);                                       //calls function from WorkFlow
	std::cout << "Your lucky number is " << sum;        //Outputs 'lucky number.'
	WorkFlow2(sum);										//calls function from WorkFlow2
                                          



	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

															//Used to accumulate running total based on user input
void WorkFlow(int& sum) {
	int i = 0;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Enter 3 Lucky Numbers for Today's Fortune~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	while (i < 3) {
		int num;
		std::cin >> num;
		sum = sum + num;
		i++;

	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
														  //Used to determine if sum is odd/even, outputing arbitry luck based on sum
void WorkFlow2(int& sum) {
	if (sum % 2) {
		std::cout << "\nGood news is arriving for you soon.\n";
	}
	else {
		std::cout << "\nStaying close to home is going to be best for your morale today.\n";
	}

}
