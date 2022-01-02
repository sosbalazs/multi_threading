
class Communicator
{
    public:
        Communicator(const Communicator&) = delete;
        void operator=(const Communicator&) = delete;

        static Communicator& getInstance();

        // Singleton with pointer 
        /*
        static Communicator* getInstance();
        static void resetInstance();
        */

        void setMessageArrived()
        {
            MessageArrived = true;
        }

        bool isMessageArrived()
        {
            return MessageArrived;
        }

        void deleteMessage()
        {
            MessageArrived = false;
        }

        ~Communicator();

    private:
        Communicator();
        // Singleton with pointer 
        //static Communicator* Instance;
        bool MessageArrived = false;
};

