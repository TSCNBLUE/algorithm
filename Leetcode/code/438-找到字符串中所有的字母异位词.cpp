class Solution {
public:
    vector<int> findAnagrams(string s, string t) {
    unordered_map<char, int> need, window;
    for (char c : t) need[c]++;

    int left = 0, right = 0;
    int valid = 0;
    vector<int> res; // ��¼���
    while (right < s.size()) {
        char c = s[right];
        right++;
        // ���д��������ݵ�һϵ�и���
        if (need.count(c)) {
            window[c]++;
            if (window[c] == need[c]) 
                valid++;
        }
        // �ж���ര���Ƿ�Ҫ����
        while (right - left >= t.size()) {
            // �����ڷ�������ʱ������ʼ�������� res
            if (valid == need.size())
                res.push_back(left);
            char d = s[left];
            left++;
            // ���д��������ݵ�һϵ�и���
            if (need.count(d)) {
                if (window[d] == need[d])
                    valid--;
                window[d]--;
            }
        }
    }
    return res;
}

};
