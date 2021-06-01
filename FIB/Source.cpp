#include <iostream>


namespace fibber
{
	void fib(int distance)
	{
		int a=0, b=1, c; 


		for (int i = 0; i < distance; i++)
		{
			c = a + b;
			a = b;
			b = c;
			std::cout << a << std::endl;
		}
		
	}
}



int main()
{
	int a; 
	std::cout << "How Many Numbers Of The Fibbonacci Sequence Do You Want: " << std::endl; 
	std::cin >> a ; 
	std::cout << a << std::endl; 
	fibber::fib(a); 
	return 0; 

}