package BinarySearch;

import java.util.Arrays;

public class BinarySearch {

  public static void main(String[] args)
   {
    int[] array = { 1, 3, 4, 5, 7, 8, 9, 11, 12 };

    int index = binarySearch(array, 11);

    if (index != -1) 
    {
      System.out.println("The element is at the index of " + index);
    } 
    else 
    {
      System.out.println("The element is not found");
    }
  }

  public static int binarySearch(int[] arr, int numberToFind) 
  {
    int low = 0;
    int high = arr.length - 1;

    while (low <= high) 
    {
      int middle = (low + high) / 2;

      if (arr[middle] == numberToFind) 
      {
        return middle;
      } 
      else if (arr[middle] < numberToFind) 
      {
        low = middle + 1;
      } 
      else 
      {
        high = middle - 1;
      }
    }

    return -1;
  }
}
