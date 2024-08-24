#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[60][60],arr2[60][60],arr3[60][60];
    int a,b,i,j;
    char mat;
    int k;
    cout<<"\n----------------------------------------------Welcome in the Universal of 2D Matrix--------------------------------------------------\t"<<endl;
    cout<<endl<<"Enter the Row: ";
    fflush(stdin);
    cin>>a;
    cout<<endl<<"Enter the Coloumn: ";
    fflush(stdin);
    cin>>b;
    cout<<endl<<"Enter Your's Elements in The 1st Matrix:- "<<endl;
    for(i=0;i<a;i++)
     {
     for(j=0;j<b;j++)
         {
            cout<<endl<<"Enter the Element in Mat["<<i<<"]"<<"["<<j<<"]: ";
            fflush(stdin);
            cin>>arr[i][j];
         }
     }
     cout<<endl<<"Enter Your's Elements in The 2nd Matrix:- "<<endl;
     for(i=0;i<a;i++)
      {
        for(j=0;j<b;j++)
         {
          cout<<endl<<"Enter the Element in Mat["<<i<<"]"<<"["<<j<<"]: ";
          fflush(stdin);
          cin>>arr2[i][j];
         }
      }
     cout<<endl<<"Here is Your 1st Matrix:- \n\n";
     for(i=0;i<a;i++)
      {
         for(j=0;j<b;j++)
        {
          cout<<"\t "<<arr[i][j];
        }
          cout<<"\n";
      }
     cout<<endl<<"Here is Your 2nd Matrix:- \n\n";
    for(i=0;i<a;i++)
     {
      for(j=0;j<b;j++)
       {
        cout<<"\t "<<arr2[i][j];
        }
        cout<<"\n";
     }
    cout<<endl<<"Please Choose Your Matrix Operation From there: \n"<<endl;
    cout<<"1.Addition Matrix: A\n2.Subtraction Matrix: S\n3.Multiplication Matrix: M\n4.Division Matrix: D\n5.Transpose Matrix: T\n6.Upper Triangular Matrix: U\n7.Lower Triangular Matrix: L\n8.Diagonals Matrix: X\n9.Tri-Diagonal Matrix: O\n10.Null Matrix: N\n";
    cout<<endl<<"Enter The Matrix Code: ";
    cin>>mat;
    switch(mat)
    {
       case 'A':  cout<<endl<<"Welcome in The Addition of Matrix"<<endl;
                  cout<<endl<<"Here is your Addition Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]+arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'S':   cout<<endl<<"Welcome in The Subtraction of Matrix"<<endl;
                  cout<<endl<<"Here is your Subtraction Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]-arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'M':   cout<<endl<<"Welcome in The Multiplication of Matrix"<<endl;
                  cout<<endl<<"Here is your Multiplication Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                      for(k=0;k<b;k++)
                      {
                         arr3[i][j]=arr3[i][j]+arr[i][k]*arr2[k][j];
                      }
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'D':   cout<<endl<<"Welcome in The Division of Matrix"<<endl;
                  cout<<endl<<"Here is your Division Matrix:- \n\n";
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        arr3[i][j]=arr[i][j]/arr2[i][j];
                    }
                  }
                  for(i=0;i<a;i++)
                  {
                    for(j=0;j<b;j++)
                    {
                        cout<<"\t "<<arr3[i][j];
                    }
                    cout<<"\n";
                  }
                  cout<<"\n";
                  break;

      case 'T':   cout<<endl<<"Welcome in The Transpose of Matrix"<<endl;
                  char choose;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose;
                  switch(choose)
                  {
                    case '1':  cout<<endl<<"Here is Your Transpose of The 1st Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                    case '2':   cout<<endl<<"Here is Your Transpose of The 2nd Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr2[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;  

                    case '3':   cout<<endl<<"Here is Your Transpose of The Both Matrixes: ";
                                cout<<endl<<"The Transpose of 1st Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<endl<<"The Transpose of 2nd Matrix:- \n\n";
                                for(i=0;i<b;i++)
                                {
                                  for(j=0;j<a;j++)
                                  {
                                  cout<<"\t "<<arr2[j][i];
                                  }
                                  cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                      default: cout<<endl<<"Invalid";
                               cout<<endl<<"Please Try Again";
                               cout<<"\n";
                               break;
                   }
                   break;

      case 'U':   cout<<endl<<"Welcome in The Upper Triangular Matrix "<<endl;
                  char choose2;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose2;
                  switch(choose2)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '2': cout<<endl<<"Here is Your 2nd Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3':  cout<<endl<<"Here is Your Both Upper Triangular Matrixes: ";
                               cout<<endl<<"The 1st Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<endl<<"The 2nd Upper Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i>j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                      
                       default: cout<<endl<<"Invalid";
                                cout<<endl<<"Please Try Again";  
                                cout<<"\n";
                                break;       
                  }
                  break;

        case 'L': cout<<endl<<"Welcome in The Lower Triangular Matrix "<<endl;
                  char choose3;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose3;
                  switch(choose3)
                  {
                    case '1':  cout<<endl<<"Here is Your 1st Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                    
                    case '2': cout<<endl<<"Here is Your 2nd Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3': cout<<endl<<"Here is Your Both Lower Triangular Matrixes: ";
                               cout<<endl<<"The 1st Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                  
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<endl<<"The 2nd Lower Triangular Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if(i<j)
                                  {
                                    cout<<"\t"<<"0";
                                    
                                  }
                                  else
                                  {
                                    cout<<"\t"<<arr2[i][j];
                                  }
                                }
                                cout<<"\n";
                              }
                              cout<<"\n";
                              break;
                      
                       default: cout<<endl<<"Invalid";
                                cout<<endl<<"Please Try Again";  
                                cout<<"\n";
                                break;       
                  }
                  break;

       case 'X':  cout<<endl<<"Welcome in The Diagonal Matrix "<<endl;
                  char choose4;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose4;
                  switch(choose4)
                  {
                    case '1':  cout<<endl<<"Here is Your 1st Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;
                    
                    case '2':  cout<<endl<<"Here is Your 2nd Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr2[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr2[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;
                    
                    case '3': cout<<endl<<"Here is Your Both Diagonal of Matrixes\n";
                              cout<<endl<<"Here is Your 1st Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                  cout<<arr[i][a-i-1]<<endl;
                               }
                               cout<<endl<<"Here is Your 2nd Diagonal Matrix: \n";
                               cout<<endl<<"Left to Right Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {  
                                  cout<<arr2[i][i]<<endl;
                               }
                               cout<<endl<<"Right to Left Diagonal Elements of Matrix:\n";
                               for(i=0;i<a;i++)
                               {
                                cout<<arr2[i][a-i-1]<<endl;
                               }
                               cout<<"\n";
                               break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again";  
                             cout<<"\n";
                             break;
 
                      }
                      break;

        case 'O': cout<<endl<<"Welcome in The Tri-Diagonal Matrix "<<endl;
                  char choose5;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose5;
                  switch(choose5)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Tri-Diagonal Matrix:- \n\n";
                               for(i=0;i<a;i++)
                                {
                                  for(j=0;j<b;j++)
                                  {
                                    if((i==j)||(i-j==-1)||(i-j==1))
                                    {
                                      cout<<arr[i][j]<<" ";
                                    }
                                    else
                                    {
                                      cout<<"0"<<" ";
                                    }
                                  }
                                    cout<<"\n";
                                }
                                cout<<"\n";
                                break;
                    
                    case '2': cout<<endl<<"Here is Your 2nd Tri-Diagonal Matrix:= \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if((i==j)||(i-j==-1)||(i-j==1))
                                  {
                                    cout<<arr2[i][j]<<" ";
                                  }
                                  else
                                  {
                                    cout<<"0"<<" ";
                                  }
                                }
                                cout<<"\n";
                                }
                                cout<<"\n";
                                break;
                    
                    case '3': cout<<endl<<"Here is Your Both Tri-Diagonal of Matrixes\n";
                              cout<<endl<<"Here is Your 1st Tri-Diagonal Matrix:- \n\n";
                              for(i=0;i<a;i++)
                                {
                                  for(j=0;j<b;j++)
                                  {
                                    if((i==j)||(i-j==-1)||(i-j==1))
                                    {
                                      cout<<arr[i][j]<<" ";
                                    }
                                    else
                                    {
                                      cout<<"0"<<" ";
                                    }
                                  }
                                    cout<<"\n";
                                }
                              cout<<endl<<"Here is Your 2nd Tri-Diagonal Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  if((i==j)||(i-j==-1)||(i-j==1))
                                  {
                                    cout<<arr2[i][j]<<" ";
                                  }
                                  else
                                  {
                                    cout<<"0"<<" ";
                                  }
                                }
                                cout<<"\n";
                                }
                                cout<<"\n";
                                break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again"; 
                             cout<<"\n"; 
                             break; 
                  }
                  break;

        case 'N': cout<<endl<<"Welcome in The Null Matrix "<<endl;
                  char choose6;
                  cout<<endl<<"If you want to Print Only 1st Matrix Then Type (1)"<<endl<<"If you want to Print Only 2nd Matrix Then Type (2)"<<endl<<"If you want to Print Both Matrixes Then Type (3)";
                  cout<<endl<<"\nEnter Your Choice: ";
                  cin>>choose6;
                  switch(choose6)
                  {
                    case '1': cout<<endl<<"Here is Your 1st Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '2': cout<<endl<<"Here is Your 2nd Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    case '3': cout<<endl<<"Here is Your Both Null Matrixes\n";
                              cout<<endl<<"Here is Your 1st Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<endl<<"Here is Your 2nd Null Matrix:- \n\n";
                              for(i=0;i<a;i++)
                              {
                                for(j=0;j<b;j++)
                                {
                                  cout<<"0"<<" ";
                                }
                                  cout<<"\n";
                              }
                              cout<<"\n";
                              break;

                    default: cout<<endl<<"Invalid";
                             cout<<endl<<"Please Try Again";  
                             cout<<"\n";
                             break; 
                  }
                  break;

        default: cout<<endl<<"Invalid";
                 cout<<endl<<"Please Try Again";  
                 cout<<"\n";
                 break; 

    }
    return 0;
}