/* Find the most frequent integer in an array */
import java.util.*;
import java.lang.*;


public class MostFrequent {
    private Map<Integer, Integer> itemCount;

    public int findMostFrequent(Integer[] arr) {
        itemCount = new HashMap<Integer, Integer>();

        countElement(arr);

        Integer max = itemCount.get(arr[0]);
        Integer maxKey = arr[0];

        for (Integer key : itemCount.keySet()) {
            if (itemCount.get(key) > max) {
                max = itemCount.get(key);
                maxKey = key;
            }
        }

        return maxKey;
    }

    public void countElement(Integer[] arr) {
        for (Integer element : arr) {
            Integer count = itemCount.get(element);

            if (count == null) {
                itemCount.put(element, 0);
            } else {
                itemCount.put(element, count + 1);
            }
        }
    }

    public static void main(String args[]) {
        Integer[] array = {1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5};

        MostFrequent mostFrequent = new MostFrequent();
        System.out.println(mostFrequent.findMostFrequent(array));
    }
}
