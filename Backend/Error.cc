#include "Error.h"

Error::Error() : isErr(false), message("")
{
}

string Error::getMessage() const
{
    return message;
}

Error& operator+=(Error& err, string msg)
{
    if (err.message == "") {
        err.message = msg;
    }
    else {
        err.message += " " + msg;
    }

    err.isErr = true;

    return err;
}

