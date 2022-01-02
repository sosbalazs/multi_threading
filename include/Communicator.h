
class Communicator
{
    public:
        Communicator(const Communicator&) = delete;
        void operator=(const Communicator&) = delete;

        static Communicator* getInstance();
        static void resetInstance();

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
        static Communicator* Instance;
        bool MessageArrived = false;
};

