#ifndef PLAYER_H
#define PLAYER_H
#define FRAMES_PER_ANIMATION 6


typedef struct 
{
	int x;
	int y;

	u16* sprite_gfx_mem;
	u8*  frame_gfx;

	int state;
	int anim_frame;
} Ninja; 


int testFunct();
void animateNinja(Ninja *sprite);
void advanceNinjaAnimationFrame (Ninja *sprite);

#endif
