#include<iostream>

double getDouble()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter a double value: ";
        double x;
        std::cin >> x;

        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear();             // put us back in 'normal' operation mode
            std::cin.ignore(32767, '\n'); // and remove the bad input
        }
        else // else our extraction succeeded
        {
            std::cin.ignore(32767, '\n'); // clear (up to 32767) characters out of the buffer until a '\n' character is removed
            return x;                     // so return the value we extracted
        }
    }
}

int main()
{
    std::cout<<getDouble();
    
    return 0;
}
