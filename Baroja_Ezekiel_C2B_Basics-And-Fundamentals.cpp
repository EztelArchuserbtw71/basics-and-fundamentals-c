#include <iostream> 
using namespace std;

void eztelSortDesc(int array[], int size) 
{
    bool swapped;
    for (int i=0;i<size-1;++i) 
    {
      swapped=false;
      for(int j=0; j<size-i-1; ++j)
    {
     if(array[j]<array[j+1]) 
        {
            int temp=array[j];
            array[j]=array[j + 1];
            array[j + 1]=temp;
            swapped=true;
        }
        }
        if(!swapped)break;
    }
}

int main()
{
    int array_1[10], array_2[10], array_fnl[20] = {};
    
    cout<<"Input Elements For Array One\n";
    for(int i= 0;i<10;++i)
    {
        cout<<"arrOne["<< i <<"]: ";
        cin>>array_1[i];
    }
    cout<<"Input Elements For Array Two\n";
    for(int i = 0; i < 10; ++i)
    {
       cout<<"array_2["<<i<<"]: ";
       cin>>array_2[i];
    }
    cout<<"Combined Array\n";
    for(int i = 0; i < 20; ++i)
    {
     int tarrayInd=i % 10;
        
      array_fnl[i] = i <= 9 ? array_1[tarrayInd] : array_2[tarrayInd];
      cout<<"array_fnl["<<i<< "]: "<<array_fnl[i]<<"\n";
    }
    
    eztelSortDesc(array_fnl, 20);
    
     cout<<"Sorted Array in Descending Order\n";
    for(int i=0;i<20;++i)
    {
     cout <<"array_fnl["<<i<<"]: "<<array_fnl[i]<<"\n";
    }
    
    return 0;
}