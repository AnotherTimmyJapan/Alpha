// goal_flag.inc.c

/* TO-DO: clean this up */

static struct ObjectHitbox sCollectStarHitbox = {
    /* interactType:      */ INTERACT_FLAG,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_collect_flag_init(void) {
    s8 sp1F;

    sp1F = (o->oBhvParams >> 24) & 0xFF;

    obj_set_hitbox(o, &sCollectStarHitbox);
}

void bhv_collect_flag_loop(void) {
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->oInteractStatus = 0;
    }
}


