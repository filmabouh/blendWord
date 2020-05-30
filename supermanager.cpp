#include "supermanager.h"

#include <algorithm>

SuperManager::SuperManager(QObject *parent) : QObject(parent)
{

}

/*
 *
 * Methodes
 *
 */

void SuperManager::blendInputWord(const QString inputWord)
{
    QString sTempWord = inputWord;
    std::sort(sTempWord.begin(), sTempWord.end());


    setBlendWord(sTempWord);
}

/*
 *
 * Setter
 *
 */


void SuperManager::setBlendWord(QString blendWord)
{
    sBlendWord = blendWord;
    emit sg_BlendWordChanged();
}
