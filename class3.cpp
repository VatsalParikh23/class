#include <iostream>
using namespace std;
class cube{
    private:
    double height=1.0;
    double length=1.0;
    double width=1.0;
    public:
    cube(){
		cin>>height;
		cin>>length;
		cin>>width;
	}
    int volume()
    {
    	int vol=height*length*width;
    	return vol;
	}
	void display(){
		cout<<"value of height="<<height<<endl;
    	cout<<"value of length="<<length<<endl;
    	cout<<"value of width="<<width<<endl;
	}
	void update()
	{
		cout<<"Enter new value of height"<<endl;
		cin>>height;
		cout<<"Updated Hieght="<<height<<endl;
	}
};
main(){
	class cube cube1;
   	int vol1=cube1.volume();
   	cube1.display();
   	cout<<vol1<<endl;
   	cube1.update();
   	int vol2=cube1.volume();
    cout<<vol2;
    
    return 0;
}
