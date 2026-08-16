class Solution {
    public String reverseWords(String s) {

        // Step 1: Remove starting and ending spaces
        String trim = s.trim();

        // Step 2: Split string into words
        String[] arr = trim.split("\\s+");

        // Step 3: Reverse the array
        int i = 0;
        int j = arr.length - 1;

        while (i < j) {
            String temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }

        // Step 4: Join all words with a space
        return String.join(" ", arr);
    }
}