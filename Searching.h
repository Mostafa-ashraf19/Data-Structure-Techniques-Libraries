#ifndef SEARCHING_H
#define SEARCHING_H
#include<math.h>
#define TYPE int
enum BOOL{FALSE,TRUE};
#define EQ(a,b) ((a)==(b))
#define GT(a,b) ((a)>(b))
#define LT(a,b) ((a)<(b))
#define GE(a,b) ((a)=>(b))
#define LE(a,b) ((a)=<(b))
TYPE LinearSearch(TYPE* arr,int size,TYPE element) {
	for (int index = 0; index < size; index++)
		if (arr[index] == element) return TRUE;
	return FALSE;
}
/*TYPE BinarySearch(TYPE* arr,int size,TYPE element){
	int high = size-1, low = 0, mid = ceil((double)(((high - low) / 2) + low));
	while (TRUE)
	{
		if (EQ(arr[mid],element)) return TRUE;
		else if (GT(arr[mid],element)) {
			high=mid-1;
			mid = ceil((double)(((high - low) / 2) + low));
		}
		else if (LT(arr[mid],element)) {
			low = mid+1;
			mid = ceil((double)(((high - low) / 2) + low));
		}
		if (high == mid && low == mid) return FALSE;
	}
*/
TYPE BinarySearch(TYPE* arr, int size, TYPE element) {
	/***********ARRAY Should be Sorted*************/
	int Top=size-1,Bottom=0, mid;
	while (Bottom <= Top)
	{
		mid = (Top + Bottom) / 2;
		if (EQ(arr[mid], element)) return TRUE;
	   if (LT(arr[mid],element)) {
			Bottom = mid-1;
		}
	   else
	   {
		   Top = mid + 1;
	   }
//		if (Top == Bottom == mid) return FALSE;
	}
	return 0;
}
#endif // !SEARCHING_H
