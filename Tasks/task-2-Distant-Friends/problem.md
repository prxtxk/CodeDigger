                                                                  Distant Friends
PROBLEM STAEMENT:

Kushagra's house is arranged as an N*N grid of rooms (1<=N<=100). Certain pairs of adjacent rooms (e.g., north-south or east-west) are separated by doors, and a tall wall runs around the external perimeter of the entire grid, preventing his friends from leaving the house. His friends can move freely from any room to any other adjacent room (north, east, south, or west), although they prefer not to cross doors unless absolutely necessary.

There are K of Kushagra's friends (1<=K<=100,K<= N*N) in the house, each located in a different room. A pair of friends is said to be "distant" if, in order for one friend to visit the other, it is necessary to cross at least one door. Please help Kushagra count the number of distant pairs of his friends.

INPUT FORMAT :
  
The first line of input contains N, K, and R.  
The next R lines describe R doors that exist between pairs of adjacent rooms. Each line is of the form r,c,r',c' (integers in the range 1 to N), indicating a door between the room in (row r, column c) and the adjacent room in (row r', column c').  
The final K lines indicate the locations of the K friends, each specified in terms of a row and column.  

 OUTPUT FORMAT : 
 
Print the number of pairs of friends that are distant.
