
#include<iostream>
#include<string.h>
using namespace std;
class publication
{
	public:
		string t;
		float p;
	    void getdata()
	    {
	    	cout<<"Enter title of publication:";
	    	cin>>t;
	    	cout<<"\nEnter price of book:$";
	    	cin>>p;
		}
		void putdata()
		{
			cout<<"\nPublication title:"<<t;
			cout<<"\nBook's' price is:$"<<p<<endl;
		}
};
class book : public publication
{
	public:
		int pc;
		void getdata()
		{
			publication::getdata();
			cout<<"\nEnter Book page count:";
			cin>>pc;
			
		}
		void putdata()
		{
			publication::putdata();
			cout<<"\nBook page count:"<<pc;
		}
};
class tape : public publication
{
	private:
		float pt;
	public:
		void getdata()
		{
			publication::getdata();
			cout<<"\nEnter tape's playing time(in mins):";
			cin>>pt;
		}
		void putdata()
		{
			publication::putdata();
			cout<<"\nTape's playing time is:"<<pt<<"mins"; 
		}
};
int main()
{
	book b;
	tape t;
	b.getdata();
	t.getdata();
	b.putdata();
	t.putdata();
	return 0;
}




















