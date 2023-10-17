#include<iostream>
using namespace std;
class rectangle{
	private:
		double width;
		double length;
	public:
		double area();
	
	
};
  
  double rectangle::area(){
    	return width*length; }
	main()
	{
		rectangle R1;
		cout<<R1.area();
	}
