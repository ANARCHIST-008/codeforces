'''/*There is a clock labeled with the numbers 1
 through 12
 in clockwise order, as shown below.


In this example, (a,b,c,d)=(2,9,10,6)
, and the strings intersect.

Alice and Bob have four distinct integers a
, b
, c
, d
 not more than 12
. Alice ties a red string connecting a
 and b
, and Bob ties a blue string connecting c
 and d
. Do the strings intersect? (The strings are straight line segments.)

Input
The first line contains a single integer t
 (1≤t≤5940
) — the number of test cases.

The only line of each test case contains four distinct integers a
, b
, c
, d
 (1≤a,b,c,d≤12
).

Output
For each test case, output "YES" (without quotes) if the strings intersect, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).'''


'''t = int(input())
while(t):
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    string1 = []
    string2 = []

    for i in range(a, b):
        string1.append(i)

    for j in range(c, d):
        string2.append(j)

    for each in string1:
        if each in string2:
            print("YES")
            break
        
    print("NO")

    t = t - 1

        '''


        


