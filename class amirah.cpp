#include <iostream>
#include <cstring>

using namespace std;

class amirah
{
	private:
		int x, y;
		
	public:
		void set_values (int, int);
		int area()
		{
			return((x*y)/2);
		}
	
};

void amirah::set_values (int base, int height)
{
	x=base;
	y=height;
}

int main()
{
	amirah tri;
	tri.set_values(5,10);
	cout<< "AREA of Triangle : " <<tri.area();
	return 0; 
}
