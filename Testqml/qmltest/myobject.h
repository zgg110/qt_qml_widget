#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = nullptr);

<<<<<<< HEAD
    int iValue() const;
    void setIValue(int newIValue);

    const QString &sString() const;
    void setSString(const QString &newSString);

signals:
    void iValueChanged();

    void sStringChanged();
=======

>>>>>>> 4dafc428caefbcad861e1c8c3781c5a57f8eb0ee

private:
    int m_iValue;
    QString m_sString;




    Q_PROPERTY(int iValue READ iValue WRITE setIValue NOTIFY iValueChanged)
    Q_PROPERTY(QString sString READ sString WRITE setSString NOTIFY sStringChanged)
};

#endif // MYOBJECT_H
