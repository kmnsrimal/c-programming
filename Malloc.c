#include<stdio.h>
#include "mymalloc.h"


void initialize(){
 freeList->size=25000-sizeof(struct block);
 freeList->free=1;
 freeList->next=NULL;
}

void split(struct block *fitting_slot,size_t size){
 struct block *new=((void*)fitting_slot+size+sizeof(struct block));
 new->size=(fitting_slot->size)-size-sizeof(struct block);
 new->free=1;
 new->next=fitting_slot->next;
 fitting_slot->size=size;
 fitting_slot->free=0;
 fitting_slot->next=new;
}
void *MyMalloc(size_t noOfBytes){
struct block *curr,*prev;
 void *result;
 if(!(freeList->size)){
  initialize();
  printf("Memory initialized\n");
 }
  curr=freeList;
 while((((curr->size)<noOfBytes)||((curr->free)==0))&&(curr->next!=NULL)){
  prev=curr;
  curr=curr->next;
 }
 
if((curr->size)==noOfBytes){
  curr->free=0;
  result=(void*)(++curr);
  return result;
 }
 
 else{
  result = NULL;
  printf("Sorry. No sufficient memory to allocate\n");
  return result;
 }
}

void merge(){
 struct block *curr,*prev;
 curr = freeList;
 while((curr->next)!=NULL){
  if((curr->free) && (curr->next->free)){
   curr->size+=(curr->size->next)+sizeof(struct block);
   curr->next=curr->next->next;
  }
   prev=curr;
  curr=curr->next;
 }
}

void MyFree(void* ptr){
 if(((void*)memory<=ptr)&&(ptr<=(void*)(memory+25000)){
  struct block* curr=ptr;
  --curr; 
  curr->next=1;
  merge();
}
 
 

 
