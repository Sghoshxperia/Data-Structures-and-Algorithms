#include<iostream>
using namespace std;

class DataStructArray{

    int arr[100],size;
    
    public:
    
    void get()
    {
        cout<<"Enter size of the array: ";
        cin>>size;
        
        cout<<"Enter values of the array:"<<endl;
        for(int i = 0; i<size; i++)
            cin>>arr[i];
    }
    
    void display()
    {
        cout<<"\n"<<"The array is as follows"<<endl;
        for(int i = 0 ; i<size; i++)
            cout<<arr[i]<<"\t";
    }
    
    void traverse()
    {
        for(int i = 0; i<size; i++)
            cout<<"\n Arr["<<i<<"] = "<<arr[i]<<endl;
    }
    
    void insert(int val,int pos)
    {
        
        size = size + 1;
        pos = pos - 1;  
        for(int i = size; i>pos; i--)
            arr[i] = arr[i-1];
        
        arr[pos] = val;
    }
    
    void deletion(int pos)
    {
        size = size - 1;
        pos = pos - 1;
        
        for(int  i = pos; i<size; i++)
            arr[i] = arr[i+1];
        
    }
    
    void search(int val)
    {   
        int flag = 0;
        int i = 0;
        
        for(i = 0; i<size; i++)
            {
                if(arr[i] == val)
                {
                    flag = 0;  
                    break;
                }
                else  flag = 1;   
            }
            
        if(flag == 1)
            cout<<"Value not found";
        else
            cout<<"Value found at pos =  "<< i+1;
        
    }
    
    void update(int val, int pos)
    {
        arr[pos-1] = val;
    }

};

int main()
{
    DataStructArray obj;
    
    obj.get();
    obj.display();
    
    /*obj.traverse();
    
    obj.insert(100,1);
    obj.display();
    
    obj.deletion(1);
    obj.display();
    
    obj.update(4,2);
    obj.display();
    
    obj.search(5);*/
    
    char c = 'y';
    
    while(c == 'y')
    {
        char choice;
        int val = 0 ,pos = 0;
        
        cout<<" \n 1. Traverse \n 2. Insertion \n 3. Deletion \n 4. Search \n 5. Update \n 6. Display"<<endl;
        cout<<"Choose an option :";
        cin>>choice;
        
        switch(choice)
        {
            case '1':
                obj.traverse();
                break;
            
            case '2':
                cout<<"Enter value:";
                cin>>val;
                cout<<"Enter position:";
                cin>>pos;
                
                obj.insert(val,pos);
                break;
                
            case '3':
                cout<<"Enter position:";
                cin>>pos;
                
                obj.deletion(pos);
                break;
                
            case '4':
                cout<<"Enter value to be searched:";
                cin>>val;
                
                obj.search(val);
                break;
            
            case '5':
                cout<<"Enter value:";
                cin>>val;
                cout<<"Enter position:";
                cin>>pos;
                
                obj.update(val,pos);
                break;
                
            case '6':
                obj.display();
                break;
                
            default:
                cout<<"Wrong choice";
                
        }
        
        cout<<"\nPress y if you want to continue else press n";
        cin>>c;
    }
    
    return 0;
    
}
