#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int ch;
	cout<<"*     *   *****  *        *         *****   "<<endl;
	cout<<"*     *   *      *        *        *     *  "<<endl;
	cout<<"*******   *****  *        *        *     *  "<<endl;
	cout<<"*     *   *      *        *        *     *  "<<endl;
	cout<<"*     *   *****  *******  *******   *****   "<<endl<<endl;
	cout<<"Enter the Choice:"<<endl;
	cin>>ch;
	if(ch==1)
	{
		int a, b, c, res, res1;
		cout<<"Enter the values:"<<endl;
		cin>>a>>b>>c;
		res=(-b+sqrt(b*b-4*a*c))/(2*a);
		res1=(-b-sqrt(b*b-4*a*c))/(2*a);
		cout<<"Result is:"<<res<<endl;
		cout<<"Result is:"<<res1<<endl;
	}
	else if(ch==2)
	{
	int n,a, b, c;
	cout<<"Enter 3-digit numbers"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	c=n%10;
	cout<<c<<b<<a<<endl;
	cout<<c<<endl<<b<<endl<<a<<endl;
	}
	else if(ch==3)
	{
		int n, c, f;
		c=1;
		f=1;
		cout<<"Enter a Number:"<<endl;
		cin>>n;
		if(n==0)
		cout<<"Factorial is 0"<<endl;
		else 
		{
			while(c<=n)
			{
				f=f*c;
				c=c+1;
			}
			cout<<"Factorial is:"<<f<<endl;
		}
	}
	else if (ch==4)
	{
		int a, b, n;
		cout<<"Enter the No."<<endl;
		cin>>n;
		cout<<"The prime No. between 0 to "<<n<<" is"<<endl;
		for(a=1;a<=n;a++)
		{
			for(b=2;b<=a;b++)
			{
				if(a%b==0)
				break;
			}
			if(a==b)
			{
				cout<<a<<endl;
			}
		}
	}
	else if(ch==5)
	{
		int a, b;
		for(a=1;a<=5;a++)
		{
			for(b=1;b<=5;b++)
				cout<<"*"<<" ";
				cout<<endl;
		}
	}
	else if(ch==6)
	{
		int a, b, c;
		for(a=4;a>=1;a--)
		{
			for(b=1;b<=4-a;b++)
			cout<<" ";
			for(c=1;c<=a;c++)
			cout<<"*";
			cout<<endl;
		}
	}
	else if(ch==7)
	{
		int a, b, c;
		for(a=4;a>=1;a--)
		{
			for(b=1;b<=a;b++)
			cout<<"*";
			for(c=1;c<=4;c++)
			cout<<" ";
			cout<<endl;
		}
	}
	else if(ch==8)
	{
		int a, b, c;
		for(a=1;a<=5;a++)
		{
			for(b=1;b<=5-a;b++)
			cout<<" ";
			for(c=1;c<=a;c++)
			cout<<"*";
			cout<<endl;
		}
	}
		else if(ch==9)
		{
			int a, b;
			for(a=1;a<=4;a++)
			{
				for(b=1;b<=a;b++)
				cout<<"*";
				cout<<endl;
			}
    }
	else if(ch==10)
	{
	 int a[5];
	cout<<"Enter Five Integers:"<<endl;
	cin>>a[0];
	cin>>a[1];
	cin>>a[2];
	cin>>a[3];
	cin>>a[4];
	cout<<"The Values in Array are:"<<endl;
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	cout<<a[4]<<endl;
    }
    else if(ch==11)
    {
    	int arr[5];
    	for(int i=0;i<5;i++)
    	{
    		cout<<"Enter an integer:"<<endl;
    		cin>>arr[i];
		}
		cout<<"The values in array are:"<<endl;
		for(int i=0;i<5;i++)
		cout<<arr[i]<<endl;
	}
	else if (ch==12)
	{
		int arr[5], i, sum=0;
		float avg=0.0;
		for(i=0;i<5;i++)
		{
			cout<<"Enter value:"<<endl;
			cin>>arr[i];
			sum=sum+arr[i];
		}
		avg=sum/5.0;
		cout<<"Sum is:"<<sum<<endl;
		cout<<"Average is:"<<avg<<endl;
		}
		else if(ch==13)
		{
			int a[5], i, max, min;
			max=min=a[0];
			for(i=0;i<5;i++)
			{
				cout<<"Enter value:"<<endl;
				cin>>a[i];
			}
			for(i=0;i<5;i++)
			if(max<a[i])
			max=a[i];
			else if(min>a[i])
			min=a[i];
			cout<<"Maximum value:"<<max<<endl;
			cout<<"Minimum Value:"<<min<<endl;
			}
			else if(ch==14)
			{
				int a;
				int num[5];
				for(a=0;a<5;a++)
				{
					cout<<"Enter an integer:"<<endl;
					cin>>num[a];
				}
				cout<<"The array in Actual Order:"<<endl;
				for(a=0;a<5;a++)
				cout<<num[a]<<" "<<endl;
				cout<<"The array in Reverse Order:"<<endl;
				for(a=4;a>=0;a--)
				cout<<num[a]<<" "<<endl;
			}
			else if(ch==15)
			{
				// Sequential Search
				int arr[5]={5,10,15,20,25};
				int i, n, loc=-1;
				cout<<"Enter value to find:"<<endl;
				cin>>n;
				if(arr[i]==n)
				loc=i;
				if(loc==-1)
				cout<<"Value not found in the array."<<endl;
				else
				cout<<"Value found at index "<<loc<<endl;
			}
			else if(ch==16)
			{
				/*Binary Search*/
				int arr[10]={5,10,15,20,25,30,35,40,45,50};
				int n, i, mid, start, end, loc;
				loc=-1;
				start=0;
				end=9;
				cout<<"Enter any number to find:"<<endl;
				cin>>n;
				while(start<=end)
				{
					mid=(start+end)/2;
					if(arr[mid]==n)
					{
						loc=mid;
						break;
					}
					else if(n<arr[mid])
					end=mid-1;
					else 
					start=mid+1;
				}
				if(loc==-1)
				cout<<n<<" not found!"<<endl;
				else 
				cout<<n<<" found at index "<<loc<<endl;
			}
			else if (ch==17)
			{
				//Selection Sort(ascending order)
				int arr[5], i, j, temp, min;
				for(i=0;i<5;i++)
				{
					cout<<"Enter value:"<<endl;
					cin>>arr[i];
				}
				cout<<"The origional values in array:"<<endl;
				for(i=0;i<5;i++)
				cout<<arr[i]<<" ";
				
				for(i=0;i<4;i++)
				{
			    	min=i;
					for(j=i+1;j<5;j++)
						if (arr[j]<arr[min])
						min=j;
						if (min!=i)
						{
						temp=arr[i];
						arr[i]=arr[min];
						arr[min]=temp;
			}
		}
		cout<<"\nThe stored array:"<<endl;
		for(i=0;i<5;i++)
		cout<<arr[i]<<" ";
	}
		else if(ch==18)
	{
		/*Stores five values in an array. It sorts the array using bubble sort. It displays
		 the values of unsorted and sorted array*/
		int arr[5], i, j, temp;
		for(i=0;i<5;i++)
		{
			cout<<"Enter value:"<<endl;
			cin>>arr[i];
		}
		cout<<"The Origional values in array:"<<endl;
		for(i=0;i<5;i++)
		cout<<arr[i]<<" "<<endl;
		for(i=0;i<5;i++)
		for(j=0;j<4;j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	cout<<"The Sorted array:"<<endl;
	for(i=0;i<5;i++)
	cout<<arr[i]<<" "<<endl;
	}
		/*Two-Dimensional Array:*/
	else if(ch==19)
	{
		/*Stores integer values in an array of 2 rows & 4 columns*/
		int arr[2][4], i, j;
		for(i=0;i<2;i++)
		for(j=0;j<4;j++)
		{
			cout<<"Enter value:"<<endl;
			cin>>arr[i][j];
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<4;j++)
			cout<<arr[i][j]<<"\t";
			cout<<endl;
		}
	}
	else if(ch==20)
	{
	// initializes a 2-D Array of 2 rows and 3 columns:
	int i, j, arr[2][3]={5,10,15,20,25,30};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"\t";
		cout<<endl;
	}
    }
    else if(ch==21)
    {
    	//intializes a 2-D array of 2 rows & 4 columns and display max. and min.:
    	int i, j, arr[2][4]={10,11,23,12,32,1,2,3};
    	int max, min;
    	max=min=arr[0][0];
    	for(i=0;i<2;i++)
    	for(j=0;j<4;j++)
		{
		if(arr[i][j]>max)
	    max=arr[i][j];
		if(arr[i][j]<min)
	    min=arr[i][j];
	    }
	    cout<<"The maximum Value = "<<max<<endl;
	    cout<<"The minimum Value = "<<min<<endl;
	}
	else if(ch==22)
	{
		/*Add two matrix (2-D). Input order of matrix(i.e no. of rows & columns). The matrix must be of same size to be added. Get the input for each
		element of the first matrix & then second matrix. Add the two matrix & store the values in a third matrix, display all matrix.*/
		int i, j, r1, r2, c1, c2, a[5][5], b[5][5], c[5][5];
		cout<<"Enter rows & columns of first matrix:"<<endl;
		cin>>r1>>c1;
		cout<<"Enter rows & columns of second matrix:"<<endl;
		cin>>r2>>c2;
		if((r1!=r2)||(c1!=c2))
		{
			cout<<"Matrix addition is not possible:"<<endl;
			exit(0);
		 } 
		 for(i=0;i<r1;i++)
		 {
		 	for(j=0;j<c1;j++)
		 	{
		 		cout<<"Enter the "<<i<<"x"<<j<<" element of first matrix:"<<endl;
		 		cin>>a[i][j];
			 }
		 }
		  for(i=0;i<r2;i++)
		 {
		 	for(j=0;j<c2;j++)
		 	{
		 		cout<<"Enter the "<<i<<"x"<<j<<" element of first matrix:"<<endl;
		 		cin>>b[i][j];
	       }
	    }
	       cout<<endl;
	       for(i=0;i<r1;i++)
	       {
	       	cout<<endl;
	       	for(j=0;j<c1;j++)
	       	cout<<setw(9)<<a[i][j];
		   }
		   cout<<"\n\t     "<<"+";
		   cout<<endl;
	       for(i=0;i<r1;i++)
	       {
	       	cout<<endl;
	       	for(j=0;j<c1;j++)
	       	cout<<setw(9)<<b[i][j];
		   }
		   cout<<endl;
		   cout<<"\n\t     =";
		   cout<<endl;
		   for(i=0;i<r1;i++)
		   {
		   	cout<<endl;
		   	for(j=0;j<c1;j++)
		   	{
		   		c[i][j]=a[i][j]+b[i][j];
		   		cout<<setw(9)<<c[i][j]<<"  ";
			   }
		   }
	    }
	    else if(ch==23)
	    {
	    	//Input integer values in a 4x4 matrix & displays the sum of ddiagnol element of the matrix.
	    	int x, y;
	    	int A[4][4], sum=0;
	    		cout<<"Enter the elements of the matrix:"<<endl;
	    	for(x=0;x<4;x++)
	    	for(y=0;y<4;y++)
	    		cin>>A[x][y];
	    		cout<<"\n";
	    		for(x=0;x<4;x++)
	    		{
	    			for(y=0;y<4;y++)
	    			cout<<A[x][y]<<"\t";
	    			cout<<endl;
				}
			// Sum of either of the diagnol elements.
			for(x=0;x<4;x++)
	    	for(y=0;y<4;y++)
	    	if(x==y)
	    	sum+=A[x][y];
	    	cout<<"Sum of the diagnol element is:"<<sum<<endl;
		}
		else if(ch==24)
		{
			int A[5][5], m, n, x, y, sum=0;
			//Create a Matrix A
			cout<<"Enter number of rows & columns in Matrix A:"<<endl;
			cin>>n>>m;
			cout<<"Enter elements of Matrix A:"<<endl;
			for(x=1;x<n+1;x++)
			for(y=1;y<m+1;y++)
			cin>>A[x][y];
			//Find sum of each row
			for(x=1;x<n+1;x++)
			{
				A[x][m+1]=0;
				for(y=1;y<m+1;y++)
				A[x][m+1]=A[x][m+1]+A[x][y];
			}
			//Find sum of each column
			for(y=1;y<m+1;y++)
			{
				A[n+1][y]=0;
				for(x=1;x<n+1;x++)
				A[n+1][y]+=A[x][y];
			}
			cout<<"\nMatrix A, Row Sum And Column Sum:\n";
			for(x=1;x<n+1;x++)
			{
				for(y=1;y<m+2;y++)
				cout<<A[x][y]<<" ";
				cout<<"\n";
			}
			//Print sum of each column
			x=n+1;
			for(y=1;y<m+1;y++)
			cout<<A[x][y]<<" ";
			cout<<"\n";
			if(m==n)
			{
				for(x=1;x<m+1;x++)
				for(y=1;y<n+1;y++)
				if(x==y)
				sum+=A[x][y];
				else
				if(y==m-(x+1))
				sum+=A[x][y];
			}
			cout<<"Sum of diagnol element is:"<<sum<<endl;
		}
		else if(ch==25)
		{
			/*Declares a 3-D array to store the temperature of a month. The temperature is entered for morning, noon, & evening of each day. The first
			dimension should be used to for three timings of a day, second dimension should be used for seven days of a week & third dimension should 
			be used for four week of a month. The program should input the temperatures & then dispaly the maximum, minimum & average temperature of the 
			whole month.*/
			int temp[3][7][4];
			int a, b, c, max, min,tot=0;
			float avg;
			for(a=0;a<3;a++)
			for(b=0;b<7;b++)
			for(c=0;c<4;c++)
			{
				cout<<"Enter temperature:"<<endl;
				cin>>temp[a][b][c];
			}
			max=min=temp[0][0][0];
			for(a=0;a<3;a++)
			for(b=0;b<7;b++)
			for(c=0;c<4;c++)
			{
				tot=tot+temp[a][b][c];
				if(temp[a][b][c]>max)
				max=temp[a][b][c];
				if(temp[a][b][c]<min)
				min=temp[a][b][c];
			}
			avg=tot/84.0;
			cout<<"The maximum temperature of month: "<<max<<endl;
			cout<<"The minimum temperature of month: "<<min<<endl;
			cout<<"The average temperature of month: "<<avg<<endl;
		}
	else if(ch==26)
		{
	int num[10], count, i, p, c;
	count=0;
	cout<<"Enter ten Integers:"<<endl;
	for(i=0;i<10;i++)
	{
		p=1;
		cin>>num[i];
		for(c=2;c<=num[i]/2;c++)
		if(num[i]%c==0)
		{
			p=0;
			break;
		}
		if(p==1)
		count++;
	}
	cout<<"Total prime numbers in array:"<<count<<endl;
}
system("pause");
}
