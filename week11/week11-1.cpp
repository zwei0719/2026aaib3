class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> a;
        // 1. 把 list1 的值全部放進陣列
        while (list1 != nullptr) {
            a.push_back(list1->val);
            list1 = list1->next;
        }
        // 2. 把 list2 的值全部放進陣列
        while (list2 != nullptr) {
            a.push_back(list2->val);
            list2 = list2->next;
        }

        // 3. 將陣列由小到大排序
        sort(a.begin(), a.end());

        // 4. 用虛擬頭節點 (Dummy Node) 依序串接新節點
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i = 0; i < a.size(); i++) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }

        return ans->next;
    }
};
