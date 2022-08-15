
#include <iostream>

bool isPrime(int num) {
    std::cout << "Attempting: " << num << std::endl;

    //ALL NEGATIVE NUMBERS ARE NOT PRIME
    if (num < 0) return false;

    //SPECIAL CASES FOR USED ALGORITHM
    if (num == 0 || num == 1) return false;
    else if (num != 2 && num % 2 == 0)    return false;

    //IF A NUMBER HAS A REMAINDER OF 0, THEN IT'S NOT PRIME
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            std::cout << " | Result: False." << std::endl;
            std::cout << "My numbers remainder is: " << num % i << std::endl;
            return false;
        }
    }
    
    std::cout << " | Result: True." << std::endl;
    return true;
}

int main()
{
    std::cout << "Testing Negative numbers. " << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(-2) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(-7) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(-1) << std::endl;

    std::cout << "Testing small numbers. " << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(2) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(7) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(17) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(51) << std::endl;

    std::cout << "Testing extremely large numbers for compile run time. " << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(1917180673) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(1885205341) << std::endl;
    std::cout << "The following number is a Prime: " << isPrime(1441276390) << std::endl;
}