#include<iostream>
using namespace std;
struct box 
{
    int length,width, height;

};

typedef struct box box;

int get_volume(box b) {
    return b.length*b.width*b.height;
	
}

int is_lower_than_max_height(box b,int MAX_HEIGHT) {
	
    if(b.height<MAX_HEIGHT){
        return 1;

    }
    else{
        return 0;
    }
    
      
}
int main()
{
	box b1;
	int MAX_HEIGHT,a;
	cout<<"Enter max height";
	cin>>MAX_HEIGHT;
	cin>>b1.length;
	cin>>b1.width;
	cin>>b1.height;
	if(is_lower_than_max_height(b1,MAX_HEIGHT))
	   {
		   a=get_volume(b1);
		   cout<<a;
	   }		   
	 
}
