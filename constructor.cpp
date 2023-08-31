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
};
main(){
	class cube cube1;
   	int vol1=cube1.volume();
    cout<<vol1;
    return 0;
}
