#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>  // For INT_MAX
using namespace std;

int findMiniDifference(vector<string>& timePoints){
    //* step 1: convert time string into minutes integer value
    vector<int> minutes;

    for(string curr : timePoints){
        int hours = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + min;
        minutes.push_back(totalMinutes);
        cout << "Converted time: " << curr << " -> " << totalMinutes << " minutes" << endl;
    }

    //* step 2:
    sort(minutes.begin(), minutes.end());
    cout << "Sorted minutes: ";
    for(int m : minutes) cout << m << " ";
    cout << endl;

    //* step 3: difference and calculate min diff
    int mini = INT_MAX;
    int n = minutes.size();

    for(int i = 0; i < n - 1; i++){
        int diff = minutes[i + 1] - minutes[i];
        cout << "Diff between " << minutes[i + 1] << " and " << minutes[i] << " = " << diff << endl;
        mini = min(mini, diff);
    }

    //* step 4: circular case (last and first time)
    int lastDiff1 = (minutes[0] + 1440) - minutes[n - 1];
    cout << "Circular diff: (" << minutes[0] << " + 1440) - " << minutes[n - 1] << " = " << lastDiff1 << endl;

    mini = min(mini, lastDiff1);

    cout << "Minimum time difference found: " << mini << " minutes" << endl;

    return mini;
}

int main(){
    vector<string> timePoints = {"23:59", "00:00", "01:30"};
    int result = findMiniDifference(timePoints);
    cout << "Final Result: " << result << " minutes" << endl;
    return 0;
}
