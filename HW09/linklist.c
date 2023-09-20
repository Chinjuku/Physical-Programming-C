#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int value;
    struct node *next;
};
 
 
int main(){
 
    int n;
    scanf("%d", &n);
 
    struct node linklist[n];
    struct node *temp_pointer = linklist;
 
    for(int i =0; i < n; i++){
        scanf("%d", &linklist[i].value);
        linklist[i].next = &linklist[i+1];
    }
    linklist[n-1].next = 0;
 
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node ));
 
    int position, count, data;
    scanf( "%d %d", &position ,&data);
 
    temp_pointer = &linklist[0];
 
    if (position == 0){
        new_node->value = data;
        new_node->next = temp_pointer;
        temp_pointer = new_node;
 
        // แสดงผล linklinklist
        while (temp_pointer != NULL){
            printf("%d ", temp_pointer->value);
            temp_pointer = temp_pointer->next;
        }
 
        return 0;
 
 
    }else{
        for(count = 1; count < position && temp_pointer != 0; count++){
            temp_pointer = temp_pointer->next;
        }
 
        //สร้าง node ใหม่
        new_node->value = data;
        new_node->next = temp_pointer->next;
        temp_pointer->next = new_node;
 
        // ชี้ตำแหน่งแรก
        temp_pointer = &linklist[0];
 
        // แสดงผล linklinklist
        while (temp_pointer != NULL){
            printf("%d ", temp_pointer->value);
            temp_pointer = temp_pointer->next;
 
        }
        return 0;
    }
     
 
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};
int main()
    {
    int num;
    scanf("%d", &num);
    struct node n[num];
    struct node *temp_pointer = link;
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &link.value);
        link.next = &link[i+1];
        if(i == num){
            link[num].next = 0;
        }
    }
    
    // scanf("%d",&n1.value);
    // n1.next = &n2;
    // scanf("%d",&n2.value);
    // n2.next = &n3;
    // scanf("%d",&n3.value);
    // n3.next = &n4;
    // scanf("%d",&n4.value);
    // n4.next = &n5;
    // scanf("%d",&n5.value);
    // n5.next = 0;
    
    while(temp_pointer != 0 ) {
    temp_pointer = temp_pointer->next;
    }
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node ));
    int position, count, data;
    scanf( "%d %d", &position ,&data);
    temp_pointer = &n[1];
    for ( count = 1; count<position && temp_pointer != 0 ; count++)
    {
    temp_pointer = temp_pointer->next;
    }
    new_node->value = data;
    new_node->next = temp_pointer->next;
    temp_pointer->next = new_node;
    temp_pointer = &n[1];
    while( temp_pointer != 0 ) {
    printf("%d ", temp_pointer->value);
    temp_pointer = temp_pointer->next;
    }
}
