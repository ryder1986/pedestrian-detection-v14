#ifndef PD_H
#define PD_H


class Pd
{
    enum LENGTH_FIXED_VALUE{
        STR_LENGTH=100,
        PATH_LENGTH=1000,
        BUFFER_LENGTH=1000
    };

    enum DEBUG_LEVEL{//choose process debug mode
        USER_DEFINED,
        DEBUG,//print most thing(show the running process)
        INFO,//routine output(necessary outputs)
        WARN,//print when warn,take care
        ERROR,//very serious
        FATAL//most serous
    };
    enum LABEL_SELECTION{
        NORMAL=1,
        PRIVATE,
        BOTH,
        MATCHED,
        NONE
    };
public:
    Pd();

};

#endif // PD_H
