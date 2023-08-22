#include<iostream>

using namespace std;


void Merged(int Arr1[], int n , int Arr2[],int m, int Arr3[])
{

    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(Arr1[i]<Arr2[j])
        {
            Arr3[k]= Arr1[i];
            k++;
            i++;
        }

        else
        {
            Arr3[k++]= Arr2[j++];

        }
    }
    while(i<n)
    {
         Arr3[k++]= Arr1[i++];

    }
    while(j<m)
    {
         Arr3[k++]= Arr2[j++];

    }

}
void Display(int Arr3[],int Size)
{
    cout<<"/nAfter Merging the Array"<<endl;
    for(int i = 0; i < Size ; i++)
    {
        cout<<Arr3[i]<<" ";
    }
}

int main()
{

    int Arr1[5]= {1,3,5,7,9};
    int Arr2[3]={2,4,6};

    int Arr3[8]= {0};
    Merged(Arr1,5,Arr2,3,Arr3);
    Display(Arr3,8);




}