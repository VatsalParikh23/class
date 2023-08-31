#include <iostream>
using namespace std;
class cube{
    private:
    double height=1.0;
    double length=1.0;
    double width=1.0;
    public:
    void input()
	{
		cout<<"Enter the height"<<endl;
        cin>>height;
        cout<<"Enter the length"<<endl;
        cin>>length;
        cout<<"Enter the width"<<endl;
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
    cube1.input();
   	int vol1=cube1.volume();
    cout<<vol1;
    return 0;
}
