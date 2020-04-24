// Problem Description
// Task. Given a set of n segments {[a 0 , b 0 ], [a 1 , b 1 ], . . . , [a n−1 , b n−1 ]} with integer coordinates on a line, find
// the minimum number m of points such that each segment contains at least one point. That is, find a
// set of integers X of the minimum size such that for any segment [a i , b i ] there is a point x ∈ X such
// that a i ≤ x ≤ b i .
// Input Format. The first line of the input contains the number n of segments. Each of the following n lines
// contains two integers a i and b i (separated by a space) defining the coordinates of endpoints of the i-th
// segment.
// Constraints. 1 ≤ n ≤ 100; 0 ≤ a i ≤ b i ≤ 10 9 for all 0 ≤ i < n.
// Output Format. Output the minimum number m of points on the first line and the integer coordinates
// of m points (separated by spaces) on the second line. You can output the points in any order. If there
// are many such sets of points, you can output any set. (It is not difficult to see that there always exist
// a set of points of the minimum size such that all the coordinates of the points are integers.)

#include <bits/stdc++.h>
using namespace std;

struct Segment
{
    int start, end;
};

vector<int> optimal_points(vector<Segment> &segments)
{

    // sort the vector according to the end points
    std::sort(segments.begin(), segments.end(), [](const Segment &a, const Segment &b) -> bool {
        return a.end < b.end;
    });

    vector<int> points;          // create a vector to store the common points in the segments
    int point = segments[0].end; // set the point to the first end point i-e shortest end point
    points.push_back(point);

    for (size_t i = 1; i < segments.size(); ++i)
    {
        if (point < segments[i].start)
        {                            // if the point is not in the segment
            point = segments[i].end; // update the point to the end point of the current segment
            points.push_back(point); // store it in the vector
        }
    }

    return points;
}

int main()
{
    unsigned int n;
    std::cin >> n;
    vector<Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i)
    {
        std::cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    std::cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i)
    {
        std::cout << points[i] << " ";
    }
}
