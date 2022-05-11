//
// Created by Dana Awad on 5/9/22.
//

#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;
#define MAX_LEVEL 10;

const char* LINE_DIVIDER  = "------------------------";

Player::Player(const char* name, int maxHp, int maxForce)
{
    m_name = name;
    m_maxHp = maxHp;
    m_maxForce = maxForce;
    m_hp = maxHp;
    m_force = maxForce;
}

void Player::levelUp(int& level)
{
    if (m_level < MAX_LEVEL)
    {
        m_level++;
    }
}

int Player::getLevel()
{
    return m_level;
}

void Player::buff(int extraForcePoints)
{
   if((m_force + extraForcePoints) <= m_maxForce)
       m_force += extraForcePoints;
}

void Player::heal(int extraHpPoints)
{
    if((m_hp + extraHpPoints) <= m_maxHp)
        m_hp += extraHpPoints;
}

void Player::damage(int damagePoints)
{
    m_hp -= damagePoints;
    if(m_hp < 0)
        m_hp = 0;
}

bool Player::isKnockedOut()
{
    if(m_hp == 0)
        return true;
    else
        return false;
}

void Player::addCoins(int extraCoins)
{
    m_coins += extraCoins;
}

bool Player::pay(int price)
{
    if(m_coins >= price)
    {
        m_coins -= price;
        return true;
    }
    else
        return false;
}

int Player::getAttackStrength()
{
    return (m_level + m_force);
}