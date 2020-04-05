#ifndef _BINARY_SEARCH_H_
#define _BINARY_SEARCH_H_
namespace search
{
	bool binary_search(int* arr, int _size,const int& value)
	{
		int iter = 0;
		int _First = 0,
			_Last = _size - 1;
		int _Pointer = ((_First + _Last) / 2);
		while (_First <= _Last)
		{
			if (arr[_Pointer] == value)
				return true;
			else if (arr[_Pointer] > value)
			{
				_Last = _Pointer - 1;
				_Pointer = ((_First + _Last) / 2);

			}
			else if(arr[_Pointer] < value)
			{
				_First = _Pointer + 1;
				_Pointer = ((_First + _Last) / 2);
			}
		}
		return 0;
	}
}
#endif 