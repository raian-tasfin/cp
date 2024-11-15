#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       int64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;
#define square(x) ((x)*(x))

const double EPS = 1E-9;

struct Point {
    double x, y;

    Point() {
	x = 0;
	y = 0;
    }

    Point(double x, double y) {
	this->x = x;
	this->y = y;
    }

    bool operator<(const Point& other) {
	return
	    (x < other.x) or
	    (x == other.x and y <= other.y);
    }
};

struct Segment {
    Point a, b;
    Segment(Point A, Point B) {
	if(B < A) {
	    swap(A, B);
	}
	a = A;
	b = B;
    }

    Segment() {
	a = Point();
	b = Point();
    }
};


Segment normalize(Segment seg) {
    seg.b.x -= seg.a.x;
    seg.b.y -= seg.a.y;
    double len = sqrt(square(seg.b.x) + square(seg.b.y));
    seg.b.x /= len;
    seg.b.y /= len;
    return seg;
}


void solve_case() {
    int cntRouters; cin>> cntRouters;
    int cntWires; cin>> cntWires;

    vector<Point> routerPos(cntRouters);
    for(int indx=0; indx < cntRouters; indx++) {
	cin>> routerPos[indx].x;
	cin>> routerPos[indx].y;
    }

    vector<Segment> wiresX;
    vector<Segment> wiresY;
    for(int indx=0; indx < cntWires; indx++) {
	int routerU; cin>> routerU;
	int routerV; cin>> routerV;
	int wireID; cin>> wireID;

	Segment wire(routerPos[routerU], routerPos[routerV]);
	if(wireID == 1) {
	    wiresX.push_back(wire);
	    continue;
	}
	wiresY.push_back(wire);
    }

    vector<int> cntXY(cnt)

    for(auto wireX: wiresX) {
	Segment xNorm = normalize(wireX);
	for(auto wireY: wiresY) {
	    Segment yNorm = normalize(wireY);
	    if(abs(xNorm.b.x - yNorm.b.x) < EPS and
	       abs(xNorm.b.x - yNorm.b.x) < EPS
	       ) {

	    }
	}
    }
}



int32_t main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int cntCases; cin>> cntCases;
    for(int caseNo = 1; caseNo <= cntCases; caseNo++) {
    	cout<< "Case #" << caseNo << ": " << newline;
        solve_case();
	cout<< newline;
    }

    return 0;
}
