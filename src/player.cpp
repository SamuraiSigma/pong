#include "player.hpp"
#include "field.hpp" // Y_MAX

/*-----------------------------------------------------------*/

Player::Player(double x, double y)
{
    x = x;
    y = y;
    score = 0;
}

/*-----------------------------------------------------------*/

void Player::move()
{
    // TODO: Check player input!
    y += v;

    // Check if the bar left the field
    if (y > Y_MAX) y = Y_MAX;
    if (y < 0)     y = 0;
}

/*-----------------------------------------------------------*/

void Player::updateScore()
{
    score += 1;
}

/*-----------------------------------------------------------*/

double Player::getX()
{
    return x;
}

/*-----------------------------------------------------------*/

double Player::getY()
{
    return y;
}

/*-----------------------------------------------------------*/

double Player::getRx()
{
    return rx;
}

/*-----------------------------------------------------------*/

double Player::getRy()
{
    return ry;
}

/*-----------------------------------------------------------*/

unsigned int Player::getScore()
{
    return score;
}