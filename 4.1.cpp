/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
   double a,b,s,p;
   
   std::cin >> a;
   std::cin >> b;
   
   s = a*b;
   p = 2*(a+b);
   
   std::cout << s << " " << p;

    return 0;
}
