#include<iostream>
#include<clocale>
using namespace std;
#define RED "\e[31;2m"
#define GREEN "\e[32;2m"
#define MAG "\e[35m"
#define BROWN "\e[34m"
#define CYAN "\e[36m"
#define YELLOW "\e[33m"
#define RESET "\e[0m"
#define LIMIT 5
int top=-1;
template <class TYPE>
class stack
{
	TYPE a[LIMIT];
        
	public:
	void push()
	{
		try
		{
			if(top==(LIMIT-1))
			{
				cout<<RED<<"Stack is overflow"<<RESET<<endl;
				throw "stack is overflow";
			}
			else
			{
				top++;
				cout<<"enter data"<<endl;
				cin>>a[top];
				cout<<GREEN<<a[top]<<" is stored into stack"<<RESET<<endl;
			}
		}
		catch(const char *s)
		{
			cout<<s<<endl;
		}
	}
	void pop()
	{
		if(top<0)
			cout<<RED<<"stack is underflow"<<endl;
		else
		{
			cout<<GREEN<<a[top]<<" is poped"<<RESET<<endl;
			top--;
		}
	}
	void display()
	{
		for(int i=top;i>=0;i--)
			cout<<a[i]<<" ";
		cout<<endl;
	}
};
main()
{
	int op,op1;
label:
	while(1)
	{
		cout<<YELLOW<<"enter the option for stack 1]int 2]char 3]float 4]double 5]exit"<<RESET<<endl;
		cin>>op;
		switch(op)
		{
			case  1:
				stack <int> obj1;
				while(1)
				{
					cout<<BROWN<<"integer stack\nenter 1]push 2]pop 3]display 4]exit"<<RESET<<endl;
					cin>>op1;
					switch(op1)
					{
						case 1:
							obj1.push();
							break;
						case 2:
							obj1.pop();
							break;
						case 3:
							obj1.display();
							break;
						case 4:
							goto label;
						default:
							cout<<MAG<<"incorrect option"<<RESET<<endl;
					}
				}
				break;
			case  2:
				stack <char> obj2;
				while(1)
				{
					cout<<BROWN<<"integer stack\nenter 1]push 2]pop 3]display 4]exit"<<RESET<<endl;
					cin>>op1;
					switch(op1)
					{
						case 1:
							obj2.push();
							break;
						case 2:
							obj2.pop();
							break;
						case 3:
							obj2.display();
							break;
						case 4:
							goto label;
						default:
							cout<<MAG<<"incorrect option"<<RESET<<endl;
					}
				}
				break;
			case  3:
				stack <float> obj3;
				while(1)
				{
					cout<<BROWN<<"integer stack\nenter 1]push 2]pop 3]display 4]exit"<<RESET<<endl;
					cin>>op1;
					switch(op1)
					{
						case 1:
							obj3.push();
							break;
						case 2:
							obj3.pop();
							break;
						case 3:
							obj2.display();
							break;
						case 4:
							goto label;
						default:
							cout<<MAG<<"incorrect option"<<RESET<<endl;
					}
				}
				break;
			case  4:
				stack <double> obj4;
				while(1)
				{
					cout<<BROWN<<"integer stack\nenter 1]push 2]pop 3]display 4]exit"<<RESET<<endl;
					cin>>op1;
					switch(op1)
					{
						case 1:
							obj4.push();
							break;
						case 2:
							obj4.pop();
							break;
						case 3:
							obj4.display();
							break;
						case 4:
							goto label;
						default:
							cout<<MAG<<"incorrect option"<<RESET<<endl;
					}
				}
				break;
			case 5:
				return 0;
			default:
				cout<<CYAN<<"please enter the valid option"<<RESET<<endl;
		}
	}
}
