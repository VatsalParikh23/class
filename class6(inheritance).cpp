#include<iostream>
using namespace std;
class rectangle{
	private:
		double width =10;
		double length =5;
	public:
		double area(){
			return width*length;
		} 	
	
};
class cuboid:public rectangle{
	private:
		double height=10;
		
	public:
		double volume(){
			return area()*height;
		} 	
};
   
	main()
	{
		cuboid c1;
		cout<<c1.area()<<endl;
		cout<<c1.volume();
	}
