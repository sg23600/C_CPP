int Solution::solve(vector<int> &A, int B) {
    map<int,int> freq;
    int count=0;
    int XOR=0;

    for(auto i:A)
    {
        XOR=XOR^i;
        if(XOR==B) count++;
        count+=freq[XOR^B];
        freq[XOR]++;
    }

    return count;
}
