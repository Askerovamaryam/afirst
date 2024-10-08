#include <iostream>
#include <deque>


void addLeft(int k)
{
	carriages.push_front(k);
}
void addRight(int k)
{
	carriages.push_back(k);
}
void removeLeft(int N)
{
	for(int i=0;i<N;i++)
	{
		if(!carriages.empty())
		{
			carriages.pop_front();
		}
		else
		{
			 cout<<"There are no more wagons to remove first"<<end1;
			break;
		}
	}
}
void removeRight(int N)
{
	for(int i=0;i<N;i++)
	{
		if(!carriages.empty())
		{
			carriages.pop_back();
		}
		else
		{
			cout<<"There are no more wagons to remove last"<<end 1;
			break;
		}
	}
}
void showCarriages(int N)
{
	if(N>=0 && N<carriages.size())
{
	cout
}
else
{
	cout
}
}
void showTrain()
{
	cout<<"Current composition: ";
	for(int carriage : carriages)
	{
		cout<<carriage<<" ";
	}
	cout << end 1;
} 
int main()
{
train.addLeft(10);
train.addRight(5);
train.addLeft(1);
train.addRight(7);

show.Train();

train.emptyLeft(2);
train.showTrain();

train.emptyRight(1);
train.showTrain();

train.showCarriage(1);

return 0;
}




	
