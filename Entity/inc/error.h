#include <string>
class Error
{
    public:
        string getMessage() const;

    private:
        bool isErr;
        string message;
};
