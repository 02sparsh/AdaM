#include <stdio.h>

int Sorting(int *array,int size){
        int i,j,temp;
        for(i=0;i<size-1;i++){
                for(j=0;j<size-i-1;j++){
                        if(array[j]<array[j+1]){
       		 temp=array[j];
        		 array[j]=array[j+1];
        		 array[j+1]=temp;
               		 }
	}
        }
}

float Mean(int *array,int size){
        int i;
        float mean=0.0f;
        for(i=0;i<size;i++)
                mean=mean+array[i];
        mean=mean/size;
}


int Mode(int *array,int size){
        int maxval=0,maxcount=0,i,j;
		array = Sorting(array,size);
        for(i=0;i<size;i++){
                int count=0;
                for(j=0;j<size;j++){
                        if(array[j]==array[i])
                                count++;
                }
                if(count>maxcount){
                        maxcount=count;
                        maxval=array[i];
                }
        }
}


float Median(int *array,int size){
        float median=0.0f;
        array = Sorting(array,size);
        if(size%2==0)
                median=(array[(size-1)/2]+array[size/2])/2.0;
        else
                median=array[size/2];

}

int Maximum(int *array,int size){
        int max=array[0],i;
        for(i=1;i<size;i++){
                if(max<array[i])
                        max=array[i];
        }
}

int Minimum(int *array,int size){
        int min = array[0],i;
        for(i=1;i<size;i++){
                if(min>array[i])
                        min=array[i];
        }
}

void Display(int *array,int size){
        int i=0;
        printf("Array:\n");
        for(i=0;i<size;i++){
                printf("%d ",array[i]);
		printf("\n");
	}
}

int main()
{
        printf("Enter the size of array: ");

		float val=0.0f;
        int size,n=0,*output,minmax=0;
        scanf("%d",&size);
        int arr[size];

        while(n<size){
                scanf("%d",&arr[n]);
                ++n;
}


        while(n!=0){
                printf("Please Enter a choice\n1.Sort array\n2.Find Mean\n3.Find Mode\n4.Find Median\n5.Find Maximum Element\n6.Find Minimum Element0.To Exit\n ");
                scanf("%d",&n);
                switch(n){
                        case 1:output = Sorting(arr,size);
                                Display(output,size);
                                break;
                        case 2:val = Mean(arr,size);
                                printf("The Mean of Array is %.4f\n",val);
                                break;
                        case 3:val = Mode(arr,size);
                                printf("The Mode of Array is %.4f\n",val);
                                break;
                        case 4:val = Median(arr,size);
                                printf("The Median of Array is %.4f\n",val);
                                break;
                        case 5:minmax = Maximum(arr,size);
                                printf("Maximum Element of the array is : %d \n",minmax);
                                break;
                        case 6:minmax = Minimum(arr,size);
                                printf("Minimum Element of the array is: %d \n",minmax);
                                break;
                        default:printf("Wrong Input\n");
                }
        }
}
