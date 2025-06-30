/*The pink soldiers have given you 4
 distinct points on the plane. The 4
 points' coordinates are (−l,0)
, (r,0)
, (0,−d)
, (0,u)
 correspondingly, where l
, r
, d
, u
 are positive integers.

In the diagram, a square is drawn by connecting the four points L
, R
, D
, U
.
Please determine if it is possible to draw a square∗
 with the given points as its vertices.

∗
A square is defined as a polygon consisting of 4
 vertices, of which all sides have equal length and all inner angles are equal. No two edges of the polygon may intersect each other.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains four integers l
, r
, d
, u
 (1≤l,r,d,u≤10
).

Output
For each test case, if you can draw a square using the four points, output "Yes". Otherwise, output "No".

You can output the answer in any case. For example, the strings "yEs", "yes", and "YES" will also be recognized as positive responses.*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double l;
        double r;
        double d;
        double u;
        cin >> l >> r >> d >> u;
        double lu = sqrt((abs(l*l)) + abs((u*u)));
        double ur = sqrt((abs(u*u)) + abs((r*r)));
        double rd = sqrt((abs(r*r)) + abs((d*d)));
        double dl = sqrt((abs(d*d)) + abs((l*l)));
        int ud = abs(u - d);
        int lr = abs(l - r);
        if(lr == ud && ur == rd && lu == dl){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}