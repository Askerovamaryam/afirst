#include "matrix.h"
size_t Matrix::GetRows()const
{
	return data.size();
}
size_t Matrix<T>:GetColumns() const
{
	if(data.empty())
	return 0;
	return data[0].size();
	
	
