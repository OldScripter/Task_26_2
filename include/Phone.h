#ifndef TASK_26_2_PHONE_H
#define TASK_26_2_PHONE_H

#include "PhoneContact.h"
#include <iostream>
#include <vector>


class Phone {
private:
    std::vector<PhoneContact> contactList {};
public:
    /**
     * @method Adding the contact to contact list.
     * @param [in] name Name of the contact.
     * @param [in] number Number of the contact.
     */
    void add(std::string name, std::string number);

    /**
     * @method Call the contact.
     * @param [in] nameOrNumber Name or number of the contact.
     */
    void call(std::string nameOrNumber);

    /**
     * @method Send sms to contact with certain message.
     * @param [in] nameOrNumber Name or number of the contact.
     * @param [in] message Text of the message to send.
     */
    void sms(std::string& nameOrNumber, std::string& message);

    /**
     * @method Print the contact list.
     */
    void contacts();

    /**
     * @method Check if contact list contains any contacts.
     * @return true - if contact list is empty.
     */
    bool contactListIsEmpty()
    {
        return contactList.empty();
    }
};

#endif //TASK_26_2_PHONE_H