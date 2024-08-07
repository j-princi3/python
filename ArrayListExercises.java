import java.util.*;

public class ArrayListExercises {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();

        // 1. Create and add elements
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");
        list.add("Date");
        list.add("Elderberry");
        System.out.println("Initial List: " + list);

        // 2. Insert an element at the first position
        list.add(0, "FirstElement");
        System.out.println("After inserting at first position: " + list);

        // 3. Remove the fifth element
        if (list.size() >= 5) {
            list.remove(4);
        }
        System.out.println("After removing fifth element: " + list);

        // 4. Sort the array list
        Collections.sort(list);
        System.out.println("Sorted List: " + list);

        // 5. Shuffle the elements
        Collections.shuffle(list);
        System.out.println("Shuffled List: " + list);

        // 6. Increase size of ArrayList (In Java, it is dynamic, so no explicit increase required)
        list.ensureCapacity(20);
        System.out.println("Increased capacity to 20");

        // 7. Reverse the list
        Collections.reverse(list);
        System.out.println("Reversed List: " + list);

        // 8. Compare two lists
        ArrayList<String> anotherList = new ArrayList<>(list);
        System.out.println("Comparison with a clone of list: " + list.equals(anotherList));

        // 9. Swap two elements
        Collections.swap(list, 0, 1);
        System.out.println("After swapping elements: " + list);

        // 10. Join two lists
        ArrayList<String> joinedList = new ArrayList<>(list);
        joinedList.addAll(anotherList);
        System.out.println("Joined List: " + joinedList);











        

//         // 11. Empty the list
//         list.clear();
//         System.out.println("After emptying the list: " + list);

//         // 12. Retrieve an element at a specified index
//         list.addAll(anotherList);
//         System.out.println("Element at index 2: " + list.get(2));

//         // 13. Update an element
//         list.set(2, "UpdatedElement");
//         System.out.println("After updating element: " + list);

//         // 14. Search for an element
//         System.out.println("Element 'UpdatedElement' found at index: " + list.indexOf("UpdatedElement"));

//         // 15. Copy list to another
//         ArrayList<String> copiedList = new ArrayList<>(list);
//         System.out.println("Copied List: " + copiedList);

//         // 16. Extract a portion of the list
//         System.out.println("SubList from index 1 to 3: " + list.subList(1, 3));

//         // 17. Clone the list
//         @SuppressWarnings("unchecked")
//         ArrayList<String> clonedList = (ArrayList<String>) list.clone();
//         System.out.println("Cloned List: " + clonedList);

//         // 18. Test if list is empty
//         System.out.println("List is empty: " + list.isEmpty());

//         // 19. Trim capacity
//         list.trimToSize();
//         System.out.println("Trimmed the list to its current size.");

//         // 20. Print elements by position
//         for (int i = 0; i < list.size(); i++) {
//             System.out.println("Element at position " + i + ": " + list.get(i));
//         }

//         // 21. Find maximum element
//         System.out.println("Maximum element: " + Collections.max(list));

//         // 22. Find minimum element
//         System.out.println("Minimum element: " + Collections.min(list));

//         // 23. ArrayList of user defined objects
//         ArrayList<User> userList = new ArrayList<>();
//         userList.add(new User("Alice", 30));
//         userList.add(new User("Bob", 25));
//         for (User user : userList) {
//             System.out.println(user);
//         }

//         // 24. Searching for elements
//         System.out.println("Searching for 'UpdatedElement': " + list.contains("UpdatedElement"));

//         // 25. Number of elements
//         System.out.println("Number of elements in list: " + list.size());

//         // 26. Decrease current capacity
//         list.trimToSize();

//         // 27. Convert ArrayList to HashSet
//         HashSet<String> set = new HashSet<>(list);
//         System.out.println("Converted to HashSet: " + set);

//         // 28. Number of elements in ArrayList
//         System.out.println("Number of elements in ArrayList: " + list.size());

//         // 29. Get SubList from ArrayList
//         System.out.println("SubList from index 0 to 2: " + list.subList(0, 2));

//         // 30. Remove duplicates
//         list.add("UniqueElement");
//         list.add("UniqueElement");
//         LinkedHashSet<String> setNoDuplicates = new LinkedHashSet<>(list);
//         list.clear();
//         list.addAll(setNoDuplicates);
//         System.out.println("After removing duplicates: " + list);

//         // 31. Convert ArrayList to Array
//         String[] array = list.toArray(new String[0]);
//         System.out.println("Converted to Array: " + Arrays.toString(array));

//         // 32. Insert element at particular position
//         list.add(2, "InsertedElement");
//         System.out.println("After inserting element at position 2: " + list);

//         // 33. Remove element from particular position
//         list.remove(2);
//         System.out.println("After removing element at position 2: " + list);

//         // 34. Remove given element
//         list.remove("UniqueElement");
//         System.out.println("After removing 'UniqueElement': " + list);

//         // 35. Remove all elements
//         list.removeAll(anotherList);
//         System.out.println("After removing all elements of another list from list: " + list);

//         // 36. Insert more than one element at particular position
//         ArrayList<String> elementsToInsert = new ArrayList<>(Arrays.asList("Element1", "Element2"));
//         list.addAll(1, elementsToInsert);
//         System.out.println("After inserting multiple elements at position 1: " + list);

//         // 37. Retrieve a portion of an ArrayList
//         System.out.println("Portion of ArrayList from 1 to 3: " + list.subList(1, 3));

//         // 38. Replace a particular element
//         list.set(1, "ReplacedElement");
//         System.out.println("After replacing element at index 1: " + list);

//         // 39. Get position of a particular element
//         System.out.println("Position of 'ReplacedElement': " + list.indexOf("ReplacedElement"));

//         // 40. Check if element is present
//         System.out.println("'ReplacedElement' is present: " + list.contains("ReplacedElement"));
    }
}

// class User {
//     String name;
//     int age;
    
//     User(String name, int age) {
//         this.name = name;
//         this.age = age;
//     }
    
//     @Override
//     public String toString() {
//         return "User{name='" + name + "', age=" + age + "}";
//     }
// }
