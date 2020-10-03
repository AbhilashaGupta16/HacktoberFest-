import java.util.Scanner;
public class JaggedArray {
    public static void main (String[] args){
  Scanner scan =new Scanner(System.in);
  System.out.println(" enter the number of row you want  in jagged array  : \n");
  int row =scan.nextInt();
  int max_column=Integer.MIN_VALUE;
  int jaggedarray[][]=new int [row][];
  // creating the JaggedArray
  for(int i=0;i<row;i++)
  {
    System.out.println("Enter no of columns in row No. "+(i+1));
    int column = scan.nextInt();
    if(column>max_column)
    max_column = column;
       jaggedarray[i] =  new int[column];
      System.out.println("Enter the elements of row No. "+(i+1));
    for(int j=0;j<column;j++)
        jaggedarray[i][j] = scan.nextInt();

  }
//creating a jagged array for transpose of the original jagged matrix
int jaggedarray1[][] = new int[max_column][];
for(int i=0;i<max_column;i++)
{
      int count = 0;
      for(int j=0;j<row;j++)
      {
    if(jaggedarray[j].length>=(i+1))
         count++;
                    }
      jaggedarray1[i] = new int[count];
      for(int j=0,k=0;j<count; k++)
      { 
    if(jaggedarray[k].length>=(i+1))
    jaggedarray1[i][j++]  = jaggedarray[k][i]; 
     }
}
System.out.println("Oringinal Jagged array");
	for(int i=0;i<jaggedarray.length;i++)
	{
	      for(int j=0;j<jaggedarray[i].length;j++)
		System.out.print(jaggedarray[i][j]+"  ");
	     System.out.println();
	}
	System.out.println("transpose of jagged array  is : ");
	for(int i=0;i<jaggedarray1.length;i++)
	{
	      for(int j=0;j<jaggedarray1[i].length;j++)
		System.out.print(jaggedarray1[i][j]+"  ");
	     System.out.println();
	}
	
// concatination of original array and its transpose

int newRow = row>max_column?row:max_column;
	int [][]jaggedarray2 = new int[newRow][];
	for(int i=0;i<newRow;i++)
	{
	     int newCol = jaggedarray[i].length + jaggedarray1[i].length;
	     int j = 0;
	     jaggedarray2[i] = new int[newCol];
	   //filling in the elements of jagged array 1
	    for(int k=0;j<jaggedarray[i].length;j++)
	    {
	         jaggedarray2[i][j] = jaggedarray[i][k++];
	    }
	   //filling in the elments of jagged array 2
	    for(int k=0 ;j<newCol;j++)
	    {
	         jaggedarray2[i][j] = jaggedarray1[i][k++];
	    }
	}
	System.out.println("New jagged array after merging the original array and its transpose");
	for(int i=0;i<jaggedarray2.length;i++)
	{
	      for(int j=0;j<jaggedarray2[i].length;j++)
		System.out.print(jaggedarray2[i][j]+"  ");
	     System.out.println();
	}
 
    }
}