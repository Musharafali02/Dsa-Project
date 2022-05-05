//Musharaf Ali 5074
//Data Structure Assignment

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	int size, element;
	system("color F0");  //Background color changed
	cout<<"Enter The Size of an Array: ";
	cin>>size;
	int arr[size],n, i,x;
	cout<<"Enter "<<size-1<<"  Number in an Array: "<<endl;
	for (i=0; i<size-1; i++)
		cin>>arr[i];
		int P;
		start:	
			cout<<"\n   ----Data Structure Some Methods----"<<endl;
			cout<<"\t1:- Insertion"<<endl;
			cout<<"\t2:- Deletion"<<endl;
			cout<<"\t3:- Searching"<<endl;
			cout<<"\t4:- IsEmpty/IsFull"<<endl;
			cout<<"\t5:- Display"<<endl;
			cout<<"\nPlease Select One Method:";
			cin>>P;	
	if(P==1){
		    system("color 06");
			cout<<" 1:Enter the Element to Insert at the Start in array:\n";
			cout<<" 2:Enter the Element to Insert at the Location in array:\n";
			cout<<" 3:Enter the Element to Insert at the End in array:\n";
		    cout<<"\nSelect the Insert One Method :";
        	cin>>x;
        	
//   insert at the Start
	 if(x==1){
	    cout<<"Displaying the Array in an Actual Form: "<<endl;
        for (i=0; i<size-1; i++)
	    cout<<arr[i]<<" ";    	
         	cout<<"\nEnter the Element to Insert at the Start of Array: ";
        	cin>>element;
	for(i=size-1; i>=0; i--)
            arr[i] = arr[i-1];
            arr[0] = element;
         	cout<<"Displaying the Array After Inserting the Element at the Start of the Element: "<<endl;
        for(i=0; i<size; i++)
	       cout<<arr[i]<<" "; 
	}
				
//     Insert at the Location
	else if(x==2){
	       cout<<"Displaying the Array in an Actual Form: "<<endl;
           	for (i=0; i<size-1; i++)
	       cout<<arr[i]<<" ";
				
	       int loc, element;
	       cout<<"\nEnter the index Number where you want to Insert the Element: ";
	       cin>>loc;
          	cout<<"Enter the Element that you want to Insert: ";
         	cin>>element;
        	for(i=size; i>=loc; i--){
	        	arr[i]=arr[i-1];
         	}
	        arr[loc] = element;
	        cout<<"Displaying the Array After Inserting the Element at the Location of the  Element: "<<endl;
	        for (i=0; i<size; i++){
	        	cout<<arr[i]<<" ";
	        }
		}
		
//       insert at the End
	else if(x==3){
	    cout<<"Displaying the Array in an Actual Form: "<<endl;
        for (i=0; i<size-1; i++)
	        cout<<arr[i]<<" ";	
           	cout<<"\nEnter the Element to add the End of the Array: ";
	        cin>>element;
	        arr[size-1] = element;
	    cout<<"Printing the Array After Inserting the Number at the End of the Array: "<<endl<<"\t";
	    for(i=0; i<size; i++)
		    cout<<arr[i]<<" ";
		   	}
	else 
	   {
	     cout<<" Not Avaible This function! ";
		}	
}
//  Deletion
   else if(P==2){
   	    system("color 06");
		cout<<" 1:Enter the Element to Delete at the Start in array: \n";
		cout<<" 2:Enter the Element to Delete at the Location in array:\n";
		cout<<" 3:Enter the Element to Delete at the End in array: \n";
		cout<<"\nSelect the Delete One Method :";
        	             cin>>x;
        	
//    delete at the Start
	if(x==1){
	    cout<<"Displaying the array in an Actual Form: "<<endl;
           	    for (i=0; i<size-1; i++)
	      	cout<<arr[i]<<" ";	
            int i;
            for(i=0; i<size; i++){
            arr[i]=arr[i+1];
            }
            cout<<"\nDeletion at Start in Array is:\n";
            for(i=0; i<size-2; i++){
            cout<<arr[i]<<endl;
            }
          }
//   delete at the Location
	else if(x==2){
	     cout<<"Displaying the array in an actual form: "<<endl;
           	     for (i=0; i<size-1; i++)
	    	cout<<arr[i]<<" ";		
     	    int i,num;
                cout<<"\nEnter the Element Location For deleting the Element: ";
            cin>>num;
            for(i=num-1; i<size; i++){
            arr[i]=arr[i+1];
            }
            cout<<"\nDeletion at Location in Array is:\n";
            for(i=0; i<size-2; i++){
            cout<<arr[i]<<endl;
            }
          }
	
//    delete at the End
	else if(x==3){
	    cout<<"Displaying the array in an actual form: "<<endl;
            for (i=0; i<size-1; i++)
	        cout<<arr[i]<<" ";	 
            int i;
	for(i=size-1; i<size; i++){
            arr[i]=arr[i+1];
            }
            cout<<"\nDeletion at End in Array is:\n";
            for(i=0; i<size-2; i++){
            cout<<arr[i]<<endl;
            }  
	}
	else 
	   {
	     cout<<" Not Avaible This function! ";
		}
   }	

// Searching
   else if(P==3){
	    int num2,num3,num4;
	    system("color 06");
	    cout<<" 1:Linear Searching in Array \n";
	    cout<<" 2:Binary Searching in Array \n";
	    cout<<"Select the Searching One Method :";
        	    cin>>x;
        	
//        	Linear Search in Array Press
	    if(x==1){
	        cout<<"Displaying the Array in an Actual Form: "<<endl;
           	for (i=0; i<size-1; i++)
	    	cout<<arr[i]<<" ";
            cout<<"\nEnter the For Linear Search: ";
            cin>>num4;
            for(num3=0; num3<size; num3++){
            if(num4==arr[num3]){
            cout<<"Entered Number Founed at index "<<num3<<" and Value "<<num4;
		    }   
             }
        system("color 04"); //Text color changed ->red
		cout<<"invalid!";		
	    }				
//	Binary Search in Array Press
		else if(x==2){
		cout<<"Displaying the Array in an Actual Form: "<<endl;
           	          for (i=0; i<size-1;i++){
	    	cout<<arr[i]<<" ";	
	    	}
				    	
	        int mid, first=0, last,num;
            cout<<"\nEnter a Number For Binary Search: ";
            cin>>num;
            last=size-1;
            do{
            mid=(first+last)/2;
            if(arr[mid]==num){
            cout<<"Number Found at index "<<mid<<" and Value "<<num;
            break;
            }
            else if(arr[mid]<num){
            first= mid+1;
            }
            else{
            last=mid-1;
            }
            }while(first<=last);
            if(first>last){
            system("color 04");
            cout<<"Number Not Found in Array!";
            }				
	   }
	   else 
	   {
	     cout<<" Not Avaible This function! ";
		}	
   }

// isempty /isFull
   else if(P==4){
   	   system("color 06");
	 cout<<"Displaying the array in an Actual Form: "<<endl;
            for (i=0; i<size-1;i++){
	       cout<<arr[i]<<" ";	
	 }
        int num;
        cout<<"\nEnter Any Index Number: ";
        cin>>num;
        if(size>num){
            cout<<"Array Have Space";
        }
        else if(size<num){
            cout<<"Array isFull";
        }
        else{
            cout<<"Array isEmpty";
        }
   }

// Display
  else if(P==5){
  	       system("color 07");
           cout<<"Displaying the Array in an Actual Form: "<<endl;
           for (i=0; i<size-1;i++){
	       cout<<arr[i]<<" ";	
	       }
   }
 else { 
   system("color 04");
   cout<<"Method is Not Avaible!";
   }
   
   	cout<<"\n\nContiue Program Press 1 ";
   	cout<<"and Stop Program Press 0 :";
   	int choose;
   	cin>>choose;
   	if(choose==1){	
   		goto start;	
	}
   	else if(choose==0){
   		cout<<"";
	}
}
