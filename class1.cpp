#include <iostream>
using namespace std;
class cube{
    public:
    double height=1.0;
    double length=1.0;
    double width=1.0;
};
main(){
    cube cube1;
    cout<<"Enter the height"<<endl;
    cin>>cube1.height;
    cout<<"Enter the length"<<endl;
    cin>>cube1.length;
    cout<<"Enter the width"<<endl;
    cin>>cube1.width;
    int vol=(cube1.height)*(cube1.length)*(cube1.width);
    cout<<vol;
    return 0;
}
