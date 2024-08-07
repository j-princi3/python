class TaskManager {

    private String result1;
    private String result2;
    private String result3;

    // Counter to track the number of threads executed
    private int counter = 0;

    // Synchronized method to increment and get the counter
    private synchronized int incrementCounter() {
        return ++counter;
    }

    // Task 1
    private class Task1 implements Runnable {
        @Override
        public void run() {
            int threadNum = incrementCounter();
            System.out.println("Task 1 started. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
            // Simulate some work with a sleep
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            result1 = "Result of Task 1";
            System.out.println(result1);
            System.out.println("Task 1 completed. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
        }
    }

    // Task 2
    private class Task2 implements Runnable {
        @Override
        public void run() {
            int threadNum = incrementCounter();
            System.out.println("Task 2 started. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
            // Simulate some work with a sleep
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            result2 = "Result of Task 2";
            System.out.println(result2);
            System.out.println("Task 2 completed. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
        }
    }

    // Task 3
    private class Task3 implements Runnable {
        @Override
        public void run() {
            int threadNum = incrementCounter();
            System.out.println("Task 3 started. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
            // Simulate some work with a sleep
            try {
                Thread.sleep(4000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            result3 = "Result of Task 3";
            System.out.println(result3);
            System.out.println("Task 3 completed. Thread ID: " + Thread.currentThread().getId() + ", Thread Number: " + threadNum);
        }
    }

    public void startTasks() {
        Thread thread1 = new Thread(new Task1());
        Thread thread2 = new Thread(new Task2());
        Thread thread3 = new Thread(new Task3());

        thread1.start();
        thread2.start();
        thread3.start();

        // Wait for all threads to complete
        try {
            thread1.join();
            thread2.join();
            thread3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("All tasks completed.");
    }

    public static void main(String[] args) {
        TaskManager manager = new TaskManager();
        manager.startTasks();
    }
}
