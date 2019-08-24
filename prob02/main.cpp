// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "how many candy bars did you sell? ";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How much do you get paid?  ";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "You have earned $" << pay << std::endl;

  return 0;
}
