import java.util.Arrays;

class LinearSearch
{
    public static void main(String[] args) 
    {
        int[] array = {1,2,4,5,7,8,9,10,12};

        int index = linearSearch(array, 7);

        if(index != -1)
        {
            System.out.println("The element is at the index of "+index);
        }
        else
        {
            System.out.println("The element is not found");
        }
    }

    public static int linearSearch(int[] arr , int numberToFind)
    {
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == numberToFind)
            {
                return i;
            }
        }

        return -1; // if not found
    }
}