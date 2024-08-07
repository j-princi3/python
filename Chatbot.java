public class Chatbot {
    private boolean k = false;

    public synchronized void question(String msg) {
        while (k) {
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        System.out.println(msg);
        k = true;
        notifyAll();
    }

    public synchronized void answer(String msg) {
        while (!k) {
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        System.out.println(msg);
        k = false;
        notifyAll();
    }

    static class QRunnable implements Runnable {
        private final Chatbot chatbot;

        public QRunnable(Chatbot chatbot) {
            this.chatbot = chatbot;
        }

        @Override
        public void run() {
            for (int i = 0; i < 5; i++) {
                chatbot.question("What is your name?");
            }
        }
    }

    static class ARunnable implements Runnable {
        private final Chatbot chatbot;

        public ARunnable(Chatbot chatbot) {
            this.chatbot = chatbot;
        }

        @Override
        public void run() {
            for (int i = 0; i < 5; i++) {
                chatbot.answer("My name is princi");
            }
        }
    }

    public static void main(String[] args) {
        Chatbot chatbot = new Chatbot();
        Thread t1 = new Thread(new QRunnable(chatbot));
        Thread t2 = new Thread(new ARunnable(chatbot));
        t1.start();
        t2.start();
    }
}
