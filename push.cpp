class Node{

	int data;
	Node* next;



public:
	Node(int d):data(d), next(NULL){}

};

class List{

	Node * head;
	Node * tail;

public:

	List():head(NULL),tail(NULL){}

	void push_front(int data){
		if(head == NULL){

			Node* n = new Node(data);
			head = tail = n;

		}
		else{
			Node* n = new Node(data);
			n->next = head;
			head = n;
		}

		return head;
		
	}



}

int main(){

	push_front(5);

}