#include "../inc/Error.h"

Error::Error() : m_isErr(false), m_message("")
{
}

string Error::getMessage() const
{
    return m_message;
}

Error& operator+=(Error& err, string msg)
{
    if (err.m_message == "") {
        err.m_message = msg;
    }
    else {
        err.m_message += " " + msg;
    }

    err.m_isErr = true;

    return err;
}

