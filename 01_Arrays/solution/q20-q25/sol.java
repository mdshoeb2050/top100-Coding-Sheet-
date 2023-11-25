import java.util.HashMap;
import java.util.Map;

// using MAP
public class FrequencyCounter {
    public static void countFrequency(int[] arr) {
        Map<Integer, Integer> frequencyMap = new HashMap<>();

        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        System.out.println("Element\tFrequency");
        for (Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            System.out.println(entry.getKey() + "\t" + entry.getValue());
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 2, 4, 1, 5, 3, 2, 1};
        countFrequency(arr);
    }
}


// without using MAP

public class FrequencyCounter 
{

    public static void countFrequency(int[] arr) 
    {
        System.out.println("Element\tFrequency");

        for (int i = 0; i < arr.length; i++) 
        {
            int count = 1;

            if (arr[i] != -1) {
                for (int j = i + 1; j < arr.length; j++) 
                {
                    if (arr[i] == arr[j]) 
                    {
                        count++;
                        arr[j] = -1;
                    }
                }
                System.out.println(arr[i] + "\t" + count);
            }
        }
    }


    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 2, 4, 1, 5, 3, 2, 1};
        countFrequency(arr);
    }
}

