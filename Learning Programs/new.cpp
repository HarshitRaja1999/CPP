#include<iostream>

int userInput()
{   
    int x;
    while(true)
    {
        std::cout<<"Enter an Integer :\t";
        std::cin>>x;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return x;
        }
        
    }

}

char operatorInput()
{
    char ch;
    while(true)
    {
        std::cout<<"Enter an Operator :\t";
        std::cin>>ch;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(256, '\n');
        }
        else
        {
            std::cin.ignore(256, '\n');
            return ch;
        }
        
    }
}

int check(char c,int a, int b)
{
    int result;
    switch (c)
    {
    case '+' : result = a + b;
        break;
    case '-' : result = a - b;
        break;
    case '*' : result = a * b;
        break;
    case '/' : result = a / b;
        break;
    case '%' : result = a % b;
        break;
    
    default : std::cout<<"Enter the Correct Choice ....!";
        break;
    }
    return result;
}

char again()
{
    char ch;

    std::cout<<"\n\nWant to run again (y/n) :\t";
    std::cin>>ch;
    
    return ch;
}

int main()
{

    int x,z;
    char y,w;
    do{
        x = userInput();
        y = operatorInput();
        z = userInput();

        int r{check(y,x,z)};
        std::cout<<"The Answer is :\t\a"<<r;
        
        w = again() ;
    }while(w=='y');
    
}