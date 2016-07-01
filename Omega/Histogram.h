/* 
 * File:   Histogram.h
 * Author: Andrew
 *
 * Created on July 1, 2016, 9:36 PM
 */

#ifndef HISTOGRAM_H
#define	HISTOGRAM_H

#include <vector>

template <class T>
struct Column {
    T data;
    int frequency;
};

template <class T>
class Histogram : public GameData {
public:
    Histogram();
    Histogram(const Histogram& orig);
    virtual ~Histogram();
    
    void AddData(T data);
    void Increment(int index);
    void Serialise();
    void Deserialise();
private:
    std::vector<Column> columns;
};

#endif	/* HISTOGRAM_H */

