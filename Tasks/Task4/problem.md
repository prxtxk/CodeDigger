                                         RITESH AND RACHIT BECAME EXPERTS

Ritesh and Rachit recently became experts on Codeforces. Ought of happiness, they decided to throw a party. They prepared a list of their common friends.

The list consists of N people(N is even).  But they do not want their friends to be lonely.
So they went to Seer Uttu. Uttu gave them a list of M pairs. Each pair contains 2 numbers i and j denoting i and j are good friends.

So they perform the following operations N times to find N pairs:

Choose two adjacent people who are good friends, pair them and take them for a party, and remove them from the list.
If the removed people were not at the end of the row, close up the gap so that the two students who were to the left and right of the removed students are now adjacent.

Find the number, modulo 1e9+7, of possible ways to do the operation N times. Two ways to do the operation N times are considered different when there exists 1<= i <=N such that the pair of students chosen in the i-th operation are different in the two ways.

INPUT FORMAT

First line contains 2 numbers, number of friends N(even) and M (size of list Seer Uttu provides).

Next M lines contains two integers each,

A1 B1

A2 B2

…

AM BM

Denoting Ai and Bi are good friends.

CONSTRAINTS

1<=N<=200

0<=M<=N(2N-1)

1<=Ai<Bi<=2N

All pairs of (Ai , Bi) are distinct.

OUTPUT FORMAT

Print the number of possible ways to complete the procedure, modulo 1e9+7.


TASK CASE 1

INPUT

2 3

1 2

1 4

2 3

OUTPUT

1
