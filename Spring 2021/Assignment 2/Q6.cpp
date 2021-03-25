#include <iostream>
#include <cstring> 
using namespace std;

void swap(char *p1,char *p2);
void reverse_array_of_chars(char *a,int size)	//Reverse character array
{
    int i=0;
    for (int i=0; i<size;i++)
    {
        swap(a+i,a+(size-1));
        size--;
    }
}

void swap(char *p1,char *p2)	//Swap array elements
{
   char temp;
   temp=*p1;
   *p1=*p2;
   *p2=temp;
}

void display_array_of_chars(char *b,int sz)	//Display array elements
{
   int i;
   for(i=0;i<sz;i++)
   {
       printf("%c",*(b+i));
   }
}

int count_occurrences(char *a,char b,int sz)	//Count of each character
{
   int i,count=0;
   for(i=0;i<sz;i++)
   {
       if(*(a+i)==b)
       {
           count=count+1;
       }
   }
   return count;
}

void display_counts(int *a,char *b,int sz)	//Display count of each character
{
   int i=0;
   for(i=0;i<sz;i++)
   {
       printf("\n# of occurrences of the letter '%c': %d\n",*(b+i),*(a+i));
   }
}

bool has_been_counted(char *counted_chars,char x,int sz)	//Check if charracter is accounted for
{
   int i;
   for(i=0;i<sz;i++)
   {
       if(*(counted_chars+i)==x)
       {
           return true;
       }
   }
   return false;
}

int main()	//Given in assignment question
{
   int i;
   string str = "";
   int arraySize=10;
   char d[arraySize];
   str="helloworld";
   strcpy(d, str.c_str()); 
   printf("The input array is: ");
   display_array_of_chars(d, arraySize);
   printf("\n\n");
   printf("The reversed array is: ");
   reverse_array_of_chars(d, arraySize);
   display_array_of_chars(d, arraySize);
   printf("\n\n");
   int counts[arraySize];
   char counted_chars[arraySize];
   int index=0;
   for(i=0;i<arraySize;i++)
   {
       if(!has_been_counted(counted_chars, d[i], index))
       {
           counts[index]=count_occurrences(d, d[i], arraySize);
           counted_chars[index]=d[i];
           index++;
       }
   }
   display_counts(counts,counted_chars,index);
   return 0;
}