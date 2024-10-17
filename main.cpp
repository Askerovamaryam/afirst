#include "matrix.h"
//#include <vector>
int main()
{
	Matrix<int> m({
		{1,2,3},
		{4,5,6}
	});
	//std::cout<<m.GetRows()<<"\n";
	//std::cout<<m.GetColumns()<<"\n";
	Matrix<double> md(3,4);
	int el=m(0, 1);
	m(1,1)=11;
	std::cout << m <<el<<"\n";
	return 0;
}


