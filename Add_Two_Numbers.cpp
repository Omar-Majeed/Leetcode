/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    int n = 0;
    int n1 = 0;
    bool carry = false;
    long long int su;
    string result = "";
    ListNode* node1 = l1;
    ListNode* node2 = l2;

    while (node1 || node2)
    {
        int nu1 = 0,nu2 = 0;
        int total = 0;

        if (carry)
        {
            total += 1;
            carry = false;
        }

        if (node1 != nullptr)
        {
            nu1 = node1->val;
            node1 = node1->next;
        }
        if (node2 != nullptr)
        {
            nu2 = node2->val;
            node2 = node2->next;
        }
        total += nu1 + nu2;

        if (total >= 10)
        {
            total -= 10;
            carry = true;
        }

        result += to_string(total);
    }
    if (carry)
        result += "1";
    cout << result << endl;

    int len = result.length();
    ListNode* resultNode = new ListNode(result[len - 1]-'0');

    for (int i = len - 2; i >= 0; i--)
    {
        ListNode* nextNode = new ListNode(result[i] - '0', resultNode);
        resultNode = nextNode;
    }

    return resultNode;
    }
};
