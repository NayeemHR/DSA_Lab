#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Structure to represent a job
struct Job {
    int id;      // Job ID
    int profit;  // Profit for completing the job
    int deadline;// Deadline by which the job must be completed
};

// Comparator function to sort jobs by profit in decreasing order
bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

// Function to perform job sequencing
void jobSequencing(vector<Job> &jobs, int n) {
    // Step 1: Sort jobs based on profit in descending order
    sort(jobs.begin(), jobs.end(), compare);

    // Find the maximum deadline to create a time slot array
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    // Step 2: Create a result array to store the job sequence
    vector<int> result(maxDeadline, -1);  // Result stores job IDs
    int totalProfit = 0;                  // To keep track of total profit

    // Step 3: Iterate through all jobs to place them in time slots
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (starting from the last possible slot)
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (result[j] == -1) { // If the slot is free
                result[j] = jobs[i].id;  // Assign this job to the slot
                totalProfit += jobs[i].profit;  // Add profit
                break;  // Move to the next job
            }
        }
    }

    // Step 4: Display the job sequence and total profit
    cout << "Job sequence: ";
    for (int i = 0; i < maxDeadline; i++) {
        if (result[i] != -1) {
            cout << result[i] << " ";
        }
    }
    cout << "\nTotal profit: " << totalProfit << endl;
}

int main() {
    // Sample list of jobs with (ID, Profit, Deadline)
    vector<Job> jobs = {
        {1, 100, 2},
        {2, 19, 1},
        {3, 27, 2},
        {4, 25, 1},
        {5, 15, 3}
    };

    int n = jobs.size();

    jobSequencing(jobs, n);

    return 0;
}
