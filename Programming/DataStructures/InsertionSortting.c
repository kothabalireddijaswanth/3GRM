 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[100],i,j,n,s,pos;
 printf("enter number of elements");
 scanf("%d",&n);
 printf("enter integers into array");
 for(i=0;i<n;i++)
 {
		scanf("%d",&a[i]);
	}
		for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
	{
		if(a[pos]>a[j])
		pos=j;
	}
		if(pos!=i)
	{
		=a[i];
		a[i]=a[pos];
		a[pos]=s;
	}
	}
		printf("sorted ordered list is :\n");
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		getch();
 }
