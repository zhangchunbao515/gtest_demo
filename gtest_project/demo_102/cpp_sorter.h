#ifndef _CPP_SORTER_H_
#define _CPP_SORTER_H_

template <typename T>
void array_sort(T * arr, size_t len)
{
    std::sort(arr, arr+len);
}

#endif //_CPP_SORTER_H_

