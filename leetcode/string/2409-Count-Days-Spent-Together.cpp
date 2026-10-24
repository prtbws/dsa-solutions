class Solution {
public:

    vector<int>months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days(string s) {

        int n =s.size();
        int d = stoi(s.substr(3,2));
        int m = stoi(s.substr(0,2));

        for (int i=0; i<m-1; i++) {
            d += months[i];
        }

        return d;

    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aa = days(arriveAlice);
        int la = days(leaveAlice);
        int ab = days(arriveBob);
        int lb = days(leaveBob);

        return max(min(la, lb)-max(aa, ab)+1, 0);
    }
};