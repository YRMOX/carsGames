#ifndef LOGER_HPP
#define LOGER_HPP

struct Loger{
    Loger();
    ~Loger();
    template<typename T>
    void log(T message);
    void boolLog(bool boolean);
    void vectorLog(float x, float y, float z);
    void construct(const char* message);
    void destruct(const char* message);
};
#endif
