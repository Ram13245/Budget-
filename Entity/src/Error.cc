#include "Error.h"

Error::Error() : m_isErr(false), m_message("")
{
}

string Error::getMessage() const
{
    return m_message;
}

Error& operator+=(string msg)
{
    if (m_message == "") {
        m_message = msg;
    }
    else {
        m_message += " " + msg;
    }

    m_isErr = true;

    return *this;
}

