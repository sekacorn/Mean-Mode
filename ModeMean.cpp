/*Author: corn
finds mode(if even number of element finds the average of the two) mean and median given that the user inputs a series of numbers*/

#include <iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

void arraySort(double array[], int numOfInts){
// Sorts the array in numerical ooder
for(int i=0; i<numOfInts; i++){
         for(int a=0; a<numOfInts-1; a++){
             if(array[a]>array[a+1]){//if an elemetn is smaller that previous put it in temp
                 double temp = array[a+1];
                 array[a+1] = array[a];// place the previous element into the next
                 array[a] = temp;//get the smaller etlement and place in the previous spot that the bigger elemen
             }
         }
     }
    cout<<"Sort 1"<<endl;
for(int i=0;i<numOfInts; i++){
cout<<array[i]<<", ";
}
cout<<endl;

}
void arraySort2(double array[], int numOfInts){
//Sort Array without using []
for(int i= 0; i<numOfInts;i++){
 for(int a =0; a<numOfInts-1; a++){
	if(*(array+a)>*(array+a+1)){//if an elemetn is smaller that previous put it in temp
	double *temp= (array+a+1);// 
	*(array+1)=*(array+a);// place the previous element into the next
	*(array+a)=*temp;//get the smaller etlement and place in the previous spot that the bigger elemen
		}
	}
	
	}

	cout<<"Sort 2"<<endl;
	for(int i=0;i<numOfInts; i++){
	cout<<*(array+i)<<", ";}
	cout<<endl;
}


//////////////////////////////////////

void mode(double array[], int num) {
  double* Ptr = new double[num];
    // alocate a new array in memory of the same size (round about way of defining number of elements by a variable)
    for (int i = 0; i < num; i++) {
        Ptr[i] = 0;//initialize each element to 0
        int j = 0;//
        while (j < i && array[i] !=array[j]) {
            if (array[i] != array[j]) {//Compares element if they don't   repeat Carbon print array Ptr is increased
                j++;
            }
        }
        (Ptr[j])++;
  }
 int repeat2 = 0;
    for (int i = 1; i < num; i++) {// Checks for the number of elements that lowest in the carbon print array
        if (Ptr[i] > Ptr[repeat2]) {
            repeat2 = i;// sets that index to repeat
        }
    }
    if(Ptr[repeat2]>1){
    cout<< "Mode is " << array[repeat2] << endl; //set that repeat index number  into the actual array 
    }
    else{
    cout<<"There is no Mode"<<endl;
        
    }
}
////////////////////////////////////

void median(double array[], int num){
    double average=0;
    if(num % 2 != 0){// is the # of elements odd?
        int temp = ((num+1)/2)-1; //finds the middle index and places it in the actual array
        cout << "The median is " << array[temp] << endl;
    }
    else{// then it's even! :)
 	average=(array[num/2]+array[(num/2)-1])/2;//finds the middle index  and places it in the actual array
        cout << "Median is "<<average << endl;
    }
   
}

int  main()
{   int numOfInts=40;
	double average;
    double sum;

    
    // initialise
    sum = 0.0;
    srand (time(NULL));
   
    numOfInts = (rand()%12+5); //size array with numbers between 5 and 12'
    double array[numOfInts];
    cout<<numOfInts<<endl;
	
    for(int a=0; a<numOfInts; a++){
        array[a] = (rand()%30);//Randomly initialize the array with numbers in and between 0 and 30
 
	sum=array[a]+sum;

   }
   
        average = sum / numOfInts;
        cout << "Mean is  " << average << endl;
       
	mode(array, numOfInts);
	arraySort(array,numOfInts);
	 median(array, numOfInts);
	arraySort2(array, numOfInts);

    
return 0;

}
