#include "Player.h"
#include "GameAPI/Game.h"

ObjectPlayer *Player;

void Player_State_Air_Hook(void) {
	RSDK_THIS(Player); 
	if (self->animator.animationID != ANI_ABILITY_0 && self->animator.animationID != ANI_ABILITY_1 && self->animator.animationID != ANI_ABILITY_2
            && self->animator.animationID != ANI_ABILITY_3
            && self->animator.animationID != ANI_ABILITY_4 && self->animator.animationID != ANI_ABILITY_5 && self->animator.animationID != ANI_ABILITY_6
            && self->animator.animationID != ANI_ABILITY_7 && self->animator.animationID != ANI_STICK && self->animator.animationID != ANI_SKID) {
            if (self->jumpPress && self->animator.animationID != ANI_JUMP) {
                self->applyJumpCap     = false;
                self->jumpAbilityState = 1;
                RSDK.SetSpriteAnimation(self->aniFrames, ANI_JUMP, &self->animator, false, 0);
            }
        }
}