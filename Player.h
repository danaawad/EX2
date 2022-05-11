//
// Created by Dana Awad on 5/9/22.
//

#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H

#define MAX_DEFAULT_HP 100
#define MAX_DEFAULT_FORCE 5

class Player {
public:
    /*
     * C'tor of Player
     *
     * Sets a player in level 1.
     * @param name - The name of the player.
     * @param hp - The player's HP points.
     * @param force - The player's force.
     * @return
     *      A new player.
     */

    Player(const char* name, int maxHp = MAX_DEFAULT_HP, int maxForce = MAX_DEFAULT_FORCE);


    /*
     * Increases level count by one. Maximum level is 10, After level 10 the function does nothing.
     *
     * @return
     *      void
    */

    void levelUp(int& level);

    /*
     * Returns current player's level.
     *
     * @return
     *      level number
    */

    int getLevel();

    /*
     * Increases force points based on the number it receives.
     *
     * @param extraForcePoints - The number of points to add.
     *
     * @return
     *      void
     */

    void buff(int extraForcePoints);

    /*
     * Increases player's HP based on the number it receives.
     *
     * @param extraHpPoints - The amount of HP to add.
     * @return
     *      void
     */

    void heal(int extraHpPoints);

    /*
     * Decreases the player's HP based on the number it receives.
     *
     * @param damagePoints - The amount of HP to subtract.
     * @return
     *      void
    */

    void damage(int damagePoints);

    /*
    * Checks if the player ran out of HP.
    *
    * @return
     *      true - If the player's HP is equal to zero.
     *      false - If the player's HP is greater than zero.
    */

    bool isKnockedOut();

    /*
     * Increases amount of coins based on the number it receives.
     *
     * @param extraCoins - The number of coins to add.
     * @return
     *      void
     */

    void addCoins(int extraCoins);

    /*
     * Decreases the amount of coins based on the number it receives, and does nothing if the player does not have enough coins.
     *
     * @param price - how many coins to subtract.
     * @return
     *      true - if the player has enough coins and the payment was successful.
     *      false - if the player doesn't have enough coins and the payment was unsuccessful.
     */

    bool pay(int price);

    /*
     * Returns attack's strength.
     *
     * @return
     *      sum of the current level the player is at and how many force point he has.
     */

    int getAttackStrength();

private:
    int m_level = 1;
    const char* m_name;
    int m_hp;
    int m_force;
    int m_maxHp;
    int m_maxForce;
    int m_coins;

};

#endif //EX2_PLAYER_H
