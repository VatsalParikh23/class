#include<iostream>
using namespace std;
class rectangle{
	private:
		double width;
		double length;
	public:
		double area(){
			return width*length;
		}
	
    	
	
};
   
	main()
	{
		rectangle r1;
		cout<<r1.area();
	}
