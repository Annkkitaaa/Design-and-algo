#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a job
typedef struct Job {
    char id;      // Job Id
    int dead;     // Deadline of job
    int profit;   // Profit if job is over before or on deadline
} Job;

// This function is used for sorting all jobs according to profit
int compare(const void* a, const void* b) {
    Job* temp1 = (Job*)a;
    Job* temp2 = (Job*)b;
    return (temp2->profit - temp1->profit);
}

// Find minimum between two numbers
int min(int num1, int num2) {
    return (num1 > num2) ? num2 : num1;
}

// Returns maximum profit from jobs
void printJobScheduling(Job arr[], int n) {
    // Sort all jobs according to decreasing order of profit
    qsort(arr, n, sizeof(Job), compare);

    int result[n]; // To store result (Sequence of jobs)
    bool slot[n];  // To keep track of free time slots

    // Initialize all slots to be free
    for (int i = 0; i < n; i++)
        slot[i] = false;

    // Iterate through all given jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (Note that we start
        // from the last possible slot)
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
            // Free slot found
            if (slot[j] == false) {
                result[j] = i; // Add this job to result
                slot[j] = true; // Make this slot occupied
                break;
            }
        }
    }

    // Print the result
    for (int i = 0; i < n; i++)
        if (slot[i])
            printf("%c ", arr[result[i]].id);
}

int main() {
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);
    
    Job arr[n]; // Declare an array of Jobs with the user-defined size

    // Input job details from the user
    for (int i = 0; i < n; i++) {
        printf("Enter details for Job %d:\n", i + 1);
        printf("Job Id: ");
        scanf(" %c", &arr[i].id); // Note the space before %c to consume newline
        printf("Deadline: ");
        scanf("%d", &arr[i].dead);
        printf("Profit: ");
        scanf("%d", &arr[i].profit);
    }

    printf("Following is maximum profit sequence of jobs:\n");

    // Function call
    printJobScheduling(arr, n);
    return 0;
}