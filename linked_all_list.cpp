#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
     int data;
     struct node *link;
};
int main(){
    int loc,flag=0;

node *p,*start,*tmp,*i;
  start=(node*)malloc(sizeof(node));
  if(start==NULL){
    printf("unable to allocate memory");
    exit(1);
  }
  printf("enter data:");
  scanf("%d",&start->data);
  start->link=NULL;
  p=start;
  	char ch='y';
  	while(ch=='y'){
        printf("what you  want do in this list \n ");
		//thats my changes and my name is rohit kumar
                      printf("press 1:insert In beginning \t\npress 2:insert after a location \t\npress 3:insert before a location \t\npress 4: insert at the end\t\npress 5:delete a node from beginning\t\npress 6:delete a node from end \t\npress 7:delete a node at a location \n");
                  
        int a;
        scanf("%d",&a);
        switch(a){
         case 1:
                      tmp=(node*)malloc(sizeof(node));
                      printf("\nenter data");
                      scanf("%d",&tmp->data);
                      tmp->link=start;
                      start=tmp;
                       {
                            printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}

                       }
                      break;
         case 2:
                       printf("\nenter location");
                       scanf("%d",&loc);
                       p=start;
                       node *tmplc;

                       while(p!=NULL){
                       if(p->data==loc){
                       tmplc=p;
                       flag+=1;
                       tmp=(node*)malloc(sizeof(node));
                       printf("\nenter data");
                       scanf("%d",&tmp->data);
                       tmp->link=tmplc->link;
                       tmplc->link=tmp;
                       break;
                       }
                       p=p->link;

                       }
                       if(flag==0){
                       printf("\nlocation  not found");
                       }
                       {
                            printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}

                       }
                         break;
        case 3:
        printf("\nenter location");
        scanf("%d",&loc);
        p=start;
        node *preloc;
        preloc=start;

        while(p->data!=loc){
                preloc=p;
        p=p->link;

  if(p==NULL){
        printf("\nlocation  not found");
        exit(0);
        }
        }
     {
     tmplc=p;
             flag+=1;
        tmp=(node*)malloc(sizeof(node));
       printf("\nenter data");
       scanf("%d",&tmp->data);
       tmp->link=tmplc;
       preloc->link=tmp;
    }

         {
              printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}

         }
        break;

    case 4:
  tmp=(node*)malloc(sizeof(node));
  printf("\nenter data ");
  scanf("%d",&tmp->data);
  tmp->link=NULL;
  p=start;
  while(p->link!=NULL){
         p=p->link;
  }
  p->link=tmp;
  {
       printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}

  }
  break;

    case 5:  p=start;
            if(p==NULL){
                    printf("\n underflow\n");
            exit(2);
            }
                 start=start->link;
                 printf("\n first node has been deleted");
                 free(p);
             {
                  printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}
          }
             break;

       case 6:  p=start;
           if(p==NULL){
                    printf("\n underflow\n");
            exit(0);
       }
       if(start->link==NULL){
        p=start;
        start=NULL;
            free(p);
       }
       else{
        p=start;
        while(p->link!=NULL){
            preloc=p;
            p=p->link;
        }
        preloc->link=NULL;
        free(p);
        printf("\n node has been deleted");
       }
                  printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}
          break;

      case 7: p=start;
         if(p==NULL){
            printf("\n underflow");
            exit(0);
    }
       else {
            printf("\n enter location for delete a node");
            scanf("%d",&loc);
       if(loc==0){
        p=start;
        start=start->link;
        free(p);
       }
       else{
            p=start;
            for(int i=0;i<loc;++i){
                preloc=p;
                p=p->link;
               if(p==NULL){
                    printf("\n location not found");
                    exit(0);
                }
                preloc->link=p->link;
                free(p);
            }
       }
                  printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}

       }
	break;

     }
        printf("\nwanna add more data(y/n)  ");
        scanf(" %c",&ch);}


      printf("\nprinting node\n");
	printf("\nadd of node\t\tdata\tlink\n");
	p=start;
	while(p!=NULL){
		printf("\n%p\t\t%d\t%p",p,p->data,p->link);
		p=p->link;
	}
  return 0;
}
