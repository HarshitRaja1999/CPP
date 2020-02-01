#include<iostream>
int fact(int n)
{   
    int k{1};
    if(n>0)
    {
        k= k*fact(n);
        n--;
    }
    return k;
}

int main()
{
    int s;
    std::cout<<"Enter The Varable :\t";
    std::cin>>s;
    std::cerr<<"reached :\t"<<s;
    int r{fact(s)};
    std::cerr<<"Reached :\t"<<r;
    std::cout<<"The Answer is :\t\a"<<r;
}