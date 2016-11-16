#include <string>
class Error
{
    public:
        Error();
        string getMessage() const;
        Error& operator+=(string msg);

    private:
        bool m_isErr;
        string m_message;
};
