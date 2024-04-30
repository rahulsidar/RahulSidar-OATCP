# Algorithm :
1. Taking input of non negative integers.
2. sort the array with custom sort funciton  such that we can create maximum number from given number.
3. comparator funciton -> 
bool compare(int a, int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}
4. declaring a string which contain the maximum number.
5. loop over the array and concatinate each element with ans string by converting the integers to string using to_string(num) inbuilt funciton.
6. return the final string that contain the maximum number.
