#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(nullptr) {}
};

class SolutionFourtyTwo{
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr) return nullptr;

        vector<int> number;
        ListNode* temp=head;
        while(temp!=nullptr){
            number.push_back(temp->val);
            temp=temp->next;
        }

        sort(number.begin(),number.end());

        ListNode* sortedList=new ListNode(number[0]);
        ListNode* current=sortedList;

        for(int i=1; i<number.size(); i++){
            current->next=new ListNode(number[i]);
            current=current->next;
        }
        return sortedList;
    }
};

int main(){
    return 0;
}