#include<stdio.h>
#include<conio.h>
#include<math.h>
void pussh();
void pop();
void peek();
void display();

# define N 5
int stack[5];
int top=-1;

void push(){
		int x;
			
			printf("Enter element to push \n");
				scanf("%d",&x);
					if(top==N-1){
								printf("Stack is full \n");
									}else {
												top++;   // Top increased from -1 to 1
													 // 		stack[top]=x;   // stack[-1]=x value
													 // 		}	
													 // 			
													 // 			}
													 //
													 // 			void pop(){
													 // 				
													 // 					int item;
													 // 						
													 // 							if(top==-1){
													 // 									printf("Stack under flow \n");
													 // 										}
													 // 											else{
													 // 													item=stack[top];  // top value of stack is stored in item before poping
													 // 															top--;
													 // 																	printf("poped value is %d \n",item);
													 // 																		}
													 // 																		}
													 //
													 // 																		void peek(){
													 //
													 // 																			if(top==-1){
													 // 																				printf("stack is Empty \n");
													 // 																					}else {
													 // 																						printf("top most element is %d \n",stack[top]);
													 // 																							}
													 //
													 // 																							}
													 //
													 // 																							void display(){
													 // 																								int i;
													 // 																									for(i=top;i>=0;i--){
													 // 																										printf("%d\n",stack[i]);
													 // 																											}
													 // 																											}
													 //
													 //
													 //
													 //
													 //
													 //
													 //
													 //
													 // 																											int main(){
													 // 																												int ch;
													 // 																												//	clrscr();
													 // 																													do{
													 // 																														
													 // 																															printf("Enter\n 1.To push\n 2.To pop\n 3. To peek\n 4.To display");
													 // 																																scanf("%d",&ch);
													 // 																																	switch(ch){
													 // 																																			case 1: push();
													 // 																																					break;
													 // 																																							case 2: pop();
													 // 																																									break;
													 // 																																											case 3: peek();
													 // 																																													break;
													 // 																																															case 4 : display();
													 // 																																																	break;
													 // 																																																			default: printf("Invalid choice\n");
													 // 																																																					 } 
													 // 																																																					 	}while(ch!=0);
													 // 																																																					 		//getch();
													 // 																																																					 			return 0;
													 // 																																																					 			}
													 // 																																																					 				
													 // 																																																					 					
													 // 																																																					 						
													 //
