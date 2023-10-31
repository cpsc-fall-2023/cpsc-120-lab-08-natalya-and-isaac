// Isaac Lopez
// ilopez05116@csu.fullerton.edu
// @IsaacLopezSanchez
// Partners: @Nasanchez4

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Done: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() <= 1) {
    std::cout << "error: no command line arguments provided .\n";
    return 1;
  }
  // Done: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double add{0.0};
  for (std::string& argument : arguments) {
    if (argument == arguments.at(0)) {
      continue;
    }
    add = add + std::stod(argument);
  }
  // Done: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double mean = {0.0};
  mean = add / static_cast<double>(arguments.size() - 1);
  // Done: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "Average= " << mean;
  return 0;
}
