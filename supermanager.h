#ifndef SUPERMANAGER_H
#define SUPERMANAGER_H

#include <QObject>

class SuperManager : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString sBlendWord READ blendWord WRITE setBlendWord NOTIFY sg_BlendWordChanged)
public:
    explicit SuperManager(QObject *parent = nullptr);
    Q_INVOKABLE void blendInputWord(const QString inputWord);



protected:
private:

    void setBlendWord(QString blendWord);
    QString blendWord(){ return sBlendWord; }

    QString sBlendWord;

signals:
    void sg_BlendWordChanged();

};

#endif // SUPERMANAGER_H
