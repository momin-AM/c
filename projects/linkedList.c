#include <stdio.h>
#include <stdlib.h>
//linked lists

struct Node{
	int data;
	struct Node *next;
};

int main(){
	struct Node *head=NULL,*temp=NULL,*current=NULL;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		temp=malloc(sizeof(struct Node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			current=head;
		}else{
			current->next=temp;
			current=temp;
		}
	}
	struct Node *temp2=head;
	while(temp2!=NULL){
		printf("%d ",temp2->data);
		temp2=temp2->next;
	}
	return 0;
}

