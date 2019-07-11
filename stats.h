/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
#define TYPE unsigned char
void print_array(unsigned char * array, int n){
  for (int i=0 ; i < n ; i++){
    printf("%d ",array[i]);
    if ((i+1)%10 == 0){
      printf("\n");
    }
  }
}
void swap(unsigned char * array,int id1,int id2){
  TYPE temp = array[id1];
  array[id1] = array[id2];
  array[id2] = temp;
}
void sort_array(unsigned char * array, int n){
  for (int i=0 ; i<n ; i++){
    for (int j=0; j<n-1 ; j++){
      if (array[j]<array[j+1]){
	swap(array,j,j+1);
      }
    }
  }
}
unsigned char find_minimum(unsigned char * sorted_array, int n){
  return sorted_array[n-1];
}
unsigned char find_maximum(unsigned char * sorted_array, int n){
  return sorted_array[0];
}
unsigned char find_mean(unsigned char * array, int n){
  int total = 0;
  for (int i=0; i<n ; i++){
    total += array[i];
  }
  return (int)total/n;
}
unsigned char find_median (TYPE * sorted_array, int n){
  if (n %2 == 0){
    unsigned char half1 = sorted_array[n/2];
    unsigned char half2 = sorted_array[n/2-1];
    return (int)((half1+half2)/2);
  }
  else{
    return sorted_array[((int)(n/2))+1];
  }
}

void print_statistics(unsigned char * array, int n){
  printf("the array before sorting: \n");
  print_array(array,n);
  printf("the array after sorting: \n");
  sort_array(array,n);
  print_array(array,n);
  printf("\nthe min is: %d\nthe max is: %d\nthe mean is: %d\nthe median is: %d\n",
	 find_minimum(array,n),
	 find_maximum(array,n),
	 find_mean(array,n),
	 find_median(array,n));
}
