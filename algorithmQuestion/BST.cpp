#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
 
/* 二叉排序树的节点结构定义 */
typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void creat(BiTree T);
void order(BiTree t);
int search(BiTree T);
int SearchBST(BiTree T, int key, BiTree f, BiTree *p );
int SearchBST2(BiTree T, int key, BiTree f, BiTree *p );
int InsertBST1( BiTree *T, int key );
int InsertBST2( BiTree *T, int key ); 
void delete_node(BiTree T);
int Delete(BiTree *p);
int Delete(BiTree *);
int DeleteBST(BiTree *T, int key);

int search(BiTree T)
{
	BiTree p;
	int n;
	printf("请输入你想查找的节点的值：");
	scanf("%d",&n);
	if(SearchBST(T,n,NULL,&p)==TRUE)
	{
		printf("已查找到值为%d的节点",n);
		printf("\n");
		return TRUE;
	}
	else
	{
		printf("未查找到该节点");
		printf("\n");
		return FALSE;
	}
}

 
int SearchBST(BiTree T, int key, BiTree f, BiTree *p )
{

	if( !T )
	{	
		*p = f;		
		return FALSE;	
	}
	else
	{
		if( key == T->data )
		{	
			*p = T;		
			return TRUE;
		}
		
		else if( key > T->data )
			return SearchBST( T->rchild, key, T, p );	
			
		else	
			return SearchBST( T->lchild, key, T, p );	
	}
}
 
int SearchBST2(BiTree T, int key, BiTree f, BiTree *p )
{

	BiTree s;
	if( !T )
	{	
		*p = f;		
		return FALSE;
	}
	else
	{
		while( T )
		{
			if( key == T->data )
			{	
				*p = T;		
				return TRUE;	
			}
			
			if( key > T->data )
			{	
				s = T;	
				T = T->rchild;
			}
			
			else
			{	
				s = T;	
				T = T->lchild;		
			}
		}
		*p = s;
		return FALSE;
	}
}
 
int InsertBST1( BiTree *T, int key )
{

	BiTree p, s;
	if(!SearchBST2( *T, key, NULL, &p))
	{
		s = (BiTree)malloc(sizeof(BiTNode));
		s->data = key;
		s->lchild = s->rchild = NULL;
		if( !p )
			*T = s;
		else if(key > p->data)
			p->rchild = s;		
		else
			p->lchild = s;		
		return TRUE;
	}
	return FALSE;
}
 
int InsertBST2( BiTree *T, int key )
{
	if( !(*T) )							
	{
		(*T) = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = key;
		(*T)->lchild = (*T)->rchild = NULL;
		return TRUE;
	}
	if( key == (*T)->data )
		return FALSE;
	if( key > (*T)->data )		
		return InsertBST2( &((*T)->rchild), key );	
	else
		return InsertBST2( &((*T)->lchild), key );		
}

void order(BiTree t)
{  
    if(t == NULL)  
        return ;  
    order(t->lchild);  
    printf("%d ", t->data);  
    order(t->rchild);  
} 
  
int DeleteBST(BiTree *T, int key)
{

	if( !(*T))
		return FALSE;	
	else
	{
		if( key == (*T)->data )
			Delete(T);
		else if(key < (*T)->data)
			return DeleteBST(&(*T)->lchild, key);
		else
			return DeleteBST(&(*T)->rchild, key);
	}
}
 
int Delete(BiTree *p)
{
	BiTree q, s;
	if(!(*p)->lchild && !(*p)->rchild)
		*p = NULL;
	else if(!(*p)->lchild)
	{
		q = *p;	
		*p = (*p)->rchild;
		free(q);
	}
	else if( !(*p)->rchild )	
	{
		q = *p;
		*p = (*p)->lchild;	
		free(q);
	}
	else					
	{
		q = *p;
		s = (*p)->lchild;
		while(s->rchild)		
		{
			q = s;
			s = s->rchild;
		}
		(*p)->data = s->data;
		if(q != *p)			
			q->rchild = s->lchild;	
		else
			q->lchild = s->lchild;
		free(s);
	}
	return TRUE;
}

void delete_node(BiTree T)
{
	int n;
	printf("请输入要删除的节点的值：");
	scanf("%d",&n);
	if(DeleteBST(&T,n)==FALSE)
	{
		printf("未查到值为%d的节点",n);
		return ; 
	}
	printf("删除值为%d的节点后，中序遍历二叉排序树:",n);
	order(T);
	printf("\n");
}

int main()
{
	BiTree T = NULL;
	printf("--------二叉排序树创建---------\n");
	int n;
	int a[MAX];
	printf("请输入二叉排序树的节点个数：");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i = 0; i<n; i++)
		InsertBST1(&T, a[i]);
	printf("中序遍历二叉排序树所有节点：");
	order(T);
	printf("\n");


	printf("----------查找节点-------------\n");
	search(T);

	 
	printf("----------删除节点-------------\n");
	delete_node(T);
	return 0;
}

