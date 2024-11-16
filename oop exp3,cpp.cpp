#include<iostream>
using namespace std;
class Publication
{
	public:
		string title;
		float price;
	public:
		void getdata()
		{
			cout<<"Enter the title of the Publication : ";
			cin>>title;
			cout<<"Enter the price of the book : ";
			cin>>price;
			
		}
		void display(){
			cout<<"The publication title is : "<<title<<endl;
			cout<<"The price of the book is : "<<price<<endl;
		}
};
class Book:public Publication 
{
	public:
		int pagecount;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter the number of pages : "<<pagecount;
			cin>>pagecount;
			
		}
		void display()
		{
			Publication::display();
			cout<<"The number of pages in the book are : "<<pagecount<<endl;
		}
};
class Tape:public Publication
{
	private:
		float ptime;
	public:
		void getdata()
		{
			Publication::getdata();
			cout<<"Enter the playtime (in minutes) : "<<ptime;
			cin>>ptime;
			
		}
		void display()
		{
			Publication::display();
			cout<<"The playtime is : "<<ptime<<endl;
		}
};
int main()
{
	Book b;
	Tape t;
	b.getdata();
	t.getdata();
	b.display();
	t.display();
	return 0;
	
}

