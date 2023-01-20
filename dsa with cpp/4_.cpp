#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  /*// pattern 1
  // 1 2 3
  // 1 2 3
  // 1 2 3

  // int i = 1;
  // while(i <= n)
  // {
  //     int j = 1;
  //     while(j <= n)
  //     {
  //         cout << j <<" ";
  //         j++;
  //     }
  //     i++;
  //     cout << endl;
  // }
  */

  /*// Pattern 1 reverse
  // 3 2 1
  // 3 2 1
  // 3 2 1
  
  //  int i = 1;
  // while(i <= n)
  // {
  //     int j = 1;
  //     while(j <= n)
  //     {
  //         cout << n-j+1 <<" ";
  //         j++;
  //     }
  //     i++;
  //     cout << endl;
  // }
  */

  /*// Pattern 2
  //   1 2 3
  //   4 5 6
  //   7 8 9
  
  // int i =1;
  // int count = 1;
  // while(i <= n)
  // {
  //     int j = 1;
  //     while(j <= n)
  //     {
  //         cout << count;
  //         count++;
  //         j++;
  //     }
  //     i++;
  //     cout << endl;
  // }
  */

  /*// Pattern 2 reverse
  // 9 8 7
  // 6 5 4
  // 3 2 1 

  // int i = 1;
  // int count = 1;
  // while (i <= n)
  // {
  //   int j = 1;
  //   while (j <= n)
  //   {
  //     cout << n * n - count + 1;
  //     count++;
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  */

  /*// Pattern 3
  // +
  // ++
  // +++
  // ++++
  
  // int row = 1;
  // while(row <= n)
  // {
  //   int column = 1;
  //   while(column <= row)
  //   {
  //     cout << '+' ;
  //     column++;
  //   }
  //   row++;
  //   cout << endl;
  // }
  */
  
  /*// Pattern 4 
  // 1
  // 22
  // 333
  // 4444
  // int row = 1;
  // while(row <= n)
  // {
  //   int column = 1;
  //   while(column <= row)
  //   {
  //     cout << row ;
  //     column++;
  //   }
  //   row++;
  //   cout << endl;
  // }
  */

  /*// Pattern 4 homework
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // int row = 1;
  // int count=1;
  // while(row <=n)
  // {
  //   int column =1;
  //   while(column <= row)
  //   {
  //     cout << count <<" ";
  //     count++;
  //     column++;
  //   }
  //   cout<<endl;
  //   row++;
  // }
  */
  
  /*// Pattern 5
  // 1
  // 2 3
  // 3 4 5
  // 4 5 6 7

// FIRST METHOD with extra variable
  // int row = 1;
  // while(row <= n)
  // {
  //   int column = 1,value = row;
  //   while(column <= row)
  //   {
  //     cout << value<<" ";
  //     column++;
  //     value++;
  //   }
  //   row++;
  //   cout << endl;
  // }
  */

  /*// Pattern 6
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// int row = 1;
// while(row <= n)
// {
 
//   int column = 1;
//   while(column <= row)
//   {
//     cout << row - column +1<< " ";
    
//     column++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 7
// A A A
// B B B
// C C C

// int row = 1;
// while(row <= n)
// {
//   int column = 1;
//   while(column <= n)
//   {
//     cout << (char)(65 + row -1) << ' ';
//     column++;
//   }
//   cout << endl;
//   row++;
// }
*/

/*// Pattern 8
// A B C
// A B C
// A B C

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     cout << (char)('A' + col - 1)<<" ";
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 9
// A B C
// D E F
// G H I

// int row = 1;
// char val = 'A';
// while(row <= n)
// {
//   int col = 1;
  
//   while(col <= n)
//   {
//     cout << val << ' ';
//     val++;
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 10

// A B C
// B C D
// C D E

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
  
//   while(col <= n)
//   {
//     cout << (char)('A' + row + col -2) << " ";
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 11

//  A
//  B B
//  C C C

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= row)
//   {
//     cout << (char)('A' + row -1) << " ";
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 12 

// A
// B C
// D E F
// G H I J

// char value = 'A';
// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= row)
//   {
//     cout << value << ' ';
//     col++;
//     value++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 13

// A
// B C
// C D E
// D E F G

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= row)
//   {
//     cout << char('A' + row + col -2) << " ";
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 14
// D
// C D
// B C D
// A B C D

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   char value = 'A'+n - row ;
//   while(col <= row)
//   {
//     cout << value << ' ';
//     col++;
//     value++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 15
//       +
//     + +
//   + + +
// + + + +

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     if(col <= n-row)
//     {
//       cout << "  ";
//     }
//     else
//     {
//       cout << '+' <<' ';
//     }
//     col++;
//   }

//   cout << endl;
//   row++;
}
*/

/*// Pattern 16

// + + + +
// + + +
// + +
// +

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n-row + 1)
//   {
//     cout << "+ ";
    
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 17
// + + + +
//   + + +
//     + +
//       +

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     if(col <= row - 1)
//     {
//       cout << "  ";
//     }

//     else
//     {
//       cout << "+ ";
//     }

//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 18

// 1 1 1 1 
//   2 2 2
//     3 3
//       4


// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     if(col <= row - 1)
//     {
//       cout << "  ";
//     }

//     else
//     {
//       cout << row << " ";
//     }

//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 19

//       1
//     2 2
//   3 3 3
// 4 4 4 4

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     if(col <= n-row)
//     {
//       cout << "  ";
//     }
//     else
//     {
//       cout << row <<' ';
//     }
//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 20 

// 1 2 3 4
//   2 3 4
//     3 4
//       4

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     if(col <= row - 1)
//     {
//       cout << "  ";
//     }

//     else
//     {
//       cout << col << " ";
//     }

//     col++;
//   }

//   cout << endl;
//   row++;
// }
*/

/*// Pattern 21

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   int value = 1;
//   while(col <= n)
//   {
//     if (col <= n-row)
//     {
//       cout << "  ";
//     }

//     else
//     {
//       cout << value << ' ';
//       value++;
//     }
    
//     col++;
//   }
  
//   int col2 = 1;
//   value--;
//   while(col2 < row)
//   {
    
//     cout << --value << ' ';
//     col2++;
//   }



//   cout << endl;
//   row++;
// }
*/

// Tagda homework
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 + + 4 3 2 1
// 1 2 3 + + + + 3 2 1
// 1 2 + + + + + + 2 1
// 1 + + + + + + + + 1


int row = 1;
while(row <= n)
{
  int col = 1;
  while(col <= n)
  {
    if(col <= n - row +1)
    {
       cout << col << ' ';
    }
    else
    {
      cout << "+ ";
    }
   
    col++;
  }
  col--;
  while(col)
  {
    if(n-col+1 <= row -1)
    {
      cout << "+ ";
    }

    else
    {
      cout << col << ' ';
    }
    col--;

  }

  cout << endl;
  row++;
}


}




// int row = 1;
// while(row <= n)
// {
//   int col = 1;
//   while(col <= n)
//   {
//     col++;
//   }

//   cout << endl;
//   row++;
// }