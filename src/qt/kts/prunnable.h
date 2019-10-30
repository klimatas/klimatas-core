// Copyright (c) 2019 The KTS developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KTS_CORE_NEW_GUI_PRUNNABLE_H
#define KTS_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(int type, QString error) = 0;
};

#endif //KTS_CORE_NEW_GUI_PRUNNABLE_H
