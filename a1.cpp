#include<iostream>
using namespace std;
int main()
{
    int arr[3][3], i, j, k=1,p,q=1, a=1;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr[i][j]=0;
        }
    }
    // cout<<"---------------"<<"\n";
    // for(i=0;i<=2;i++)
    // {
    //     for(j=0; j<=2; j++)
    //     {
    //         if(arr[i][j]%3==0)
    //         {
    //             cout<<"|   |"<<"\n";
    //             cout<<"---------------"<<"\n";
    //         }
    //         else
    //         {
    //             cout<<"|   |";
    //         }
    //     }    
    // }
    while(q<=9)
    {
        cin>>p;
        a=1;
        // update the matrix
        for(i=0;i<3;i++)
        {
            for(j=0; j<3; j++)
            {
                if(a == p )
                {
                    if(arr[i][j]==0)
                    {
                        if(q%2!=0)
                        {
                            arr[i][j] = 1;
                        }
                        else
                        {
                            arr[i][j] = 2;
                        }                
                    }
                    else
                    {
                        cout<<"\nTry another place.\n";
                        cin>>p;
                        --q;
                    }

                }  
                a++;
            }          
        }
        // print the matrix
        for(i=0;i<3;i++)
        {
            for(j=0; j<3; j++)
            {
                cout<<" "<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(i==j)
        {
            if(( i && j) == 1)
            {            
                if( ((arr[1][1] == arr[2][2]) && (arr[1][1] == arr[0][0])) || ((arr[1][1] == arr[0][2]) && (arr[1][1] == arr[2][0])) && (arr[1][1] !=0 ))
                {
                    if(arr[1][1]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[1][1]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
                else if( ((arr[1][1] == arr[2][2]) && (arr[1][1] == arr[0][0])) || ((arr[1][1] == arr[0][2]) && (arr[1][1] == arr[2][0])) && (arr[1][1] !=0 ))
                {
                    if(arr[1][1]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[1][1]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
                else if( ((arr[i][j] == arr[i+1][j]) && (arr[i][j] == arr[i-1][j])) || ((arr[i][j] == arr[i][j-1]) && (arr[i][j] == arr[i][j+1])) && (arr[i][j] !=0 ))
                {
                    if(arr[1][1]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[1][1]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }                
            }
            else if((i && j) == 0 && arr[i][j] != 0)
            {
                if((arr[i+1][j] == arr[i][j]) && (arr[i+2][j] == arr[i][j]) )
                {
                    if(arr[i][j]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[i][j]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
                else if((arr[i][j+1] == arr[i][j]) && (arr[i][j+2] == arr[i][j]))
                {
                    if(arr[i][j]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[i][j]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
            }
            else if((i && j) == 2 )
            {
                if((arr[i-1][j] == arr[i][j]) && (arr[i-2][j] == arr[i][j]))
                {
                    if(arr[i][j]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[i][j]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
                else if((arr[i][j-1] == arr[i][j]) && (arr[i][j-2] == arr[i][j]))
                {
                    if(arr[i][j]==1)
                    {
                        cout<<"\nPlayer one wins\n";
                        break;
                    }
                    else if(arr[i][j]==2)
                    {
                        cout<<"\nPlayer two wins\n";
                        break;
                    }
                }
            }
        }
        else if(q==9)
        {
            cout<<"\nIt's a DRAW!\n";
            break;
        }
        q++;        
    }
}

