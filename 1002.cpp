#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, x1, y1, r1, x2, y2, r2;
    cin >> num;
    
    while (num--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double add = r1 + r2;
        double sub = r1 > r2 ? r1 - r2 : r2 - r1;

        if (d == 0 && r1 == r2) cout << -1 << endl;
        else if (sub < d && d < add) cout << 2 << endl;
        else if (d == add || d == sub) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}