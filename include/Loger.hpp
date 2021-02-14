#ifndef LOGER_HPP
#define LOGER_HPP

struct Loger{
    Loger();
    ~Loger();
    void log(const char* message);
    void vectorLog(float x, float y, float z);
    void construct(const char* message);
    void destruct(const char* message);
};
#endif
