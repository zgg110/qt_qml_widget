#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = nullptr);

private:
    int m_iValue;
    QString m_sString;




};

#endif // MYOBJECT_H
