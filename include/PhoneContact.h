#ifndef TASK_26_2_PHONECONTACT_H
#define TASK_26_2_PHONECONTACT_H

#include <iostream>


class PhoneContact {
    std::string number;
    std::string name;

public:
    PhoneContact(std::string& name, std::string& number);

    /**
     * @method Check if the contact number contains 10 digits. Return true if yes.
     * @param [in] n String value of number to be checked.
     * @return if number contains 10 digits.
     */
    static bool isNumberCorrect(const std::string& n);

    /**
     * @method Call to the contact.
     */
    void call();

    /**
     * @method Send SMS to the contact.
     */
    void sms(std::string& message);

    /**
     * @method Return the contact number.
     * @return Number.
     */
    std::string getNumber() const;

    /**
     * @method Return the contact name.
     * @return Name.
     */
    std::string getName() const;

    /**
     * @method Set the number of contact.
     * @param [in] newNumber String with new number.
     */
    void setNumber(const std::string& newNumber);

    /**
     * @method Set the contact name.
     * @param [in] newName String with new name.
     */
    void setName(const std::string& newName);

    /**
     * @method Check whether the contact name of number is equal to string nameOrNumber.
     * @param [in] nameOrNumber Name or number to be compared with name and number of the contact.
     * @return true - if nameOrNumber equals to name or number of the contact.
     */
    bool isEqual(const std::string& nameOrNumber);
};

#endif //TASK_26_2_PHONECONTACT_H