/*

Karoline Brehm
117190

SS2017

Algorithmen und Datenstrukturen - Beleg 3

*/

#include <string>

//takes request_message, prints it and reads user input from command
//line
//returns input string read from command line
std::string read_input (std::string request_message)
{
	//emtpy vector to hold unsorted elements
	std::vector<T> output;

	//request user input
	std::cout << "\n";
	std::cout << request_message;

	std::string input;

	//write input to string "input"
	//user input ends with pressing enter key:
	std::getline(std::cin, input);

	std::cout << "\n";

	return input;
}

//kmp-algorithm
//does pattern appear in text?
//how many times?
//return position/s as outputs

std::tuple<int, std::string> search_pattern
	(std::string text, std::string pattern)
{
	//create next[] array for pattern

	//iterate array

	//
};



int main ()
{
	std::string text = read_input("Enter text to search pattern in: \n");
	std::string pattern = read_input("Enter text to search pattern in: \n");

	//search pattern in text
	//take returned tuple<number_of, positions>

	//print output
}