#结构体数组
typedef struct{
    int a;
}my_struct_type;
my_struct_type my_struct[10];

int main(void){
    
int i;
    
for(i=0;i<10;i++){

        my_struct[i].a=i;
    
}
    
for(i=0;i<10;i++){
        
printf("%d ",my_struct[i].a);
    
}
    
printf("\n");
  
  
return 0;

}
