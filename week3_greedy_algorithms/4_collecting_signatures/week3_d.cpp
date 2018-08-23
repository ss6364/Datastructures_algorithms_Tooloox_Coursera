#include <bits/stdc++.h>

using namespace std;

struct Segment {
    int start,end;
};

vector<int> optimal_points(vector<Segment> &seg) {

    sort(seg.begin(), seg.end(), [](const Segment &a, const Segment &b) -> bool {
        return a.end < b.end;
    });
                //cout<<seg[i].start<<"   "<<seg[i].end<<endl;
    vector<int> points;
    int point=seg[0].end;
    points.push_back(point);

    for (size_t i = 1; i < seg.size(); ++i) {
        if (point<seg[i].start || point>seg[i].end) {
            point=seg[i].end;
            points.push_back(point);
        }
    }

    return points;
}

int main() {
    unsigned int n;
    cin >> n;
    vector<Segment> seg(n);
    for (size_t i = 0; i < seg.size(); ++i) {
        cin>>seg[i].start>>seg[i].end;
    }
    vector<int> points = optimal_points(seg);
    cout<<points.size()<<endl;
    for (size_t i = 0; i < points.size(); ++i) {
        cout<<points[i]<< " ";
    }
return 0 ;
}
