#include <bits/stdc++.h>
    using namespace std;

    // An activity has a start, and finish time.
    struct Activity
    {
        int start, finish;
    };

    // Sorting activities by finish time
    bool compare(Activity a1, Activity a2)
    {
        return (a1.finish < a2.finish);
    }

    void activitySelection(Activity arr[], int n)
    {
        // calling sort function
        sort(arr, arr+n, compare);

        cout << "Selected Actvities are : ";

        // First activity will be always selected
        int i = 0;
        cout << "(" << arr[i].start << ", " << arr[i].finish << ") ";

        // Traversing for remaining activities
        for (int j = 1; j < n; j++)
        {
            // If start time of current activity >= finish time of previous activity
            if (arr[j].start >= arr[i].finish)
            {
                cout << "(" << arr[j].start << ", " << arr[j].finish << ") ";
                i = j;
            }
        }
    }

    int main()
    {
        Activity arr[] = {{3, 4}, {2, 5}, {1, 3}, {5, 9}, {0, 7}, {11, 12}, {8, 10}};

        int n = sizeof(arr)/sizeof(arr[0]);
        // calling selection function
        activitySelection(arr, n);
        
        return 0;
    }