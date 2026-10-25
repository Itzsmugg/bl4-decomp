// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d5dc9a FUN_145d5dc9a body=40 status=ok
// SIG undefined FUN_145d5dc9a(void)

undefined8 FUN_145d5dc9a(undefined8 param_1,int param_2)

{
  FUN_145d5dcc2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5dcc2 FUN_145d5dcc2 body=117 status=ok
// SIG undefined FUN_145d5dcc2(void)

void FUN_145d5dcc2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beee320;
  param_1[5] = &PTR_FUN_14beee7a0;
  param_1[6] = &PTR_LAB_14beee7e0;
  plVar3 = (longlong *)param_1[0x26];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d5dd38 FUN_145d5dd38 body=317 status=ok
// SIG undefined FUN_145d5dd38(void)

void FUN_145d5dd38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d5de76(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5de76 FUN_145d5de76 body=231 status=ok
// SIG undefined FUN_145d5de76(void)

void FUN_145d5de76(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_141031670(0,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar3 = local_48;
      do {
        plVar2 = (longlong *)*plVar3;
        if (plVar2 == (longlong *)0x0) goto LAB_145d5dee7;
        if (param_2 == 0) {
LAB_145d5dede:
          (**(code **)(*plVar2 + 0x5e8))();
        }
        else if (param_3 == '\0') {
          lVar4 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x000145d5df5a:
          if (lVar4 == param_2) goto LAB_145d5dede;
        }
        else if (param_3 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar4) == param_2) goto LAB_145d5dede;
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar4);
          }
        }
        else if (param_3 == '\x01') {
          lVar4 = plVar2[0x25];
          goto joined_r0x000145d5df5a;
        }
LAB_145d5dee7:
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5df5e FUN_145d5df5e body=93 status=ok
// SIG undefined FUN_145d5df5e(void)

void FUN_145d5df5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb0d2b0;
  if ((DAT_14cb0d2b0 != 0 && (char)((*(uint *)(param_1 + 8) & 0x10) >> 4) == '\0') &&
     (*(int *)(param_1 + 0x9bc) != 0)) {
    *(undefined4 *)(param_1 + 0x9bc) = 0;
    FUN_147bddd30(lVar1 + 0xee0,*(undefined8 *)(param_1 + 0x1a8),param_1,0);
  }
  FUN_145d5dfbc(param_1);
  return;
}



// FUNCTION 145d5dfbc FUN_145d5dfbc body=329 status=ok
// SIG undefined FUN_145d5dfbc(void)

void FUN_145d5dfbc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar3 = DAT_14cb0d2b0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if ((DAT_14cb0d2b0 != 0) && ((int)param_1[0x10d] != 0)) {
      *(undefined4 *)(param_1 + 0x10d) = 0;
      FUN_147bddd30(lVar3 + 0xee0,param_1[0x35],param_1,0);
    }
    plVar5 = (longlong *)param_1[0x1e];
    if (plVar5 != (longlong *)0x0) goto LAB_145d5e0f7;
    while ((int)param_1[0x20] != 0) {
      plVar5 = *(longlong **)param_1[0x1f];
LAB_145d5e0f7:
      (**(code **)(*plVar5 + 0x330))();
    }
    (**(code **)(*param_1 + 0x300))(param_1);
    param_1[0x37] = 0;
    plVar5 = (longlong *)param_1[0x38];
    if (plVar5 != (longlong *)0x0) {
      param_1[0x38] = 0;
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (param_1[0x100] != 0) {
      FUN_14480f766(&DAT_14cb10a90);
    }
    if (param_1[0x101] != 0) {
      FUN_14480f766(&DAT_14cb10a78);
    }
    uVar4 = FUN_140b631de();
    if (param_1[0x104] != 0) {
      FUN_14480f766(uVar4);
    }
    if (param_1[0x105] != 0) {
      FUN_14480f766(&DAT_14caf2750);
    }
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 145d5e106 FUN_145d5e106 body=42 status=ok
// SIG undefined FUN_145d5e106(void)

void FUN_145d5e106(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145d5e130(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145d5e130 FUN_145d5e130 body=544 status=ok
// SIG undefined FUN_145d5e130(void)

void FUN_145d5e130(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e350(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e386(param_1 + 0x380);
  FUN_1459ab314(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e3bc(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e3f2(param_1 + 600);
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  FUN_14577537e(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e428(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e45e(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e494(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad57ba(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5e4ca(param_1);
  return;
}



// FUNCTION 145d5e350 FUN_145d5e350 body=53 status=ok
// SIG undefined FUN_145d5e350(void)

void FUN_145d5e350(longlong *param_1)

{
  FUN_145d5ea1e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e386 FUN_145d5e386 body=53 status=ok
// SIG undefined FUN_145d5e386(void)

void FUN_145d5e386(longlong *param_1)

{
  FUN_145d5e8bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e3bc FUN_145d5e3bc body=53 status=ok
// SIG undefined FUN_145d5e3bc(void)

void FUN_145d5e3bc(longlong *param_1)

{
  FUN_145d5e760();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e3f2 FUN_145d5e3f2 body=53 status=ok
// SIG undefined FUN_145d5e3f2(void)

void FUN_145d5e3f2(longlong *param_1)

{
  FUN_145d5e55a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e428 FUN_145d5e428 body=53 status=ok
// SIG undefined FUN_145d5e428(void)

void FUN_145d5e428(longlong *param_1)

{
  FUN_145d5e60e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e45e FUN_145d5e45e body=53 status=ok
// SIG undefined FUN_145d5e45e(void)

void FUN_145d5e45e(longlong *param_1)

{
  FUN_145d5e5b4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e494 FUN_145d5e494 body=53 status=ok
// SIG undefined FUN_145d5e494(void)

void FUN_145d5e494(longlong *param_1)

{
  FUN_145d5eb84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e4ca FUN_145d5e4ca body=53 status=ok
// SIG undefined FUN_145d5e4ca(void)

void FUN_145d5e4ca(longlong *param_1)

{
  FUN_145d5e500();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5e500 FUN_145d5e500 body=89 status=ok
// SIG undefined FUN_145d5e500(void)

void FUN_145d5e500(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145d5e55a FUN_145d5e55a body=90 status=ok
// SIG undefined FUN_145d5e55a(void)

void FUN_145d5e55a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d5e5b4 FUN_145d5e5b4 body=90 status=ok
// SIG undefined FUN_145d5e5b4(void)

void FUN_145d5e5b4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d5e60e FUN_145d5e60e body=336 status=ok
// SIG undefined FUN_145d5e60e(void)

void FUN_145d5e60e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_147bde9f2((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5e760 FUN_145d5e760 body=346 status=ok
// SIG undefined FUN_145d5e760(void)

void FUN_145d5e760(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5e8bc FUN_145d5e8bc body=353 status=ok
// SIG undefined FUN_145d5e8bc(void)

void FUN_145d5e8bc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5ea1e FUN_145d5ea1e body=357 status=ok
// SIG undefined FUN_145d5ea1e(void)

void FUN_145d5ea1e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x30 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5eb84 FUN_145d5eb84 body=360 status=ok
// SIG undefined FUN_145d5eb84(void)

void FUN_145d5eb84(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14041fb7c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5ecee FUN_145d5ecee body=25 status=ok
// SIG undefined FUN_145d5ecee(void)

undefined8 FUN_145d5ecee(undefined8 param_1,undefined8 param_2)

{
  FUN_145d5ed08(param_2);
  return param_2;
}



// FUNCTION 145d5ed08 FUN_145d5ed08 body=438 status=ok
// SIG undefined FUN_145d5ed08(void)

undefined8 * FUN_145d5ed08(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb89538 != (longlong *)0x0 && DAT_14cb89540 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb89538 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cb89538;
    if (DAT_14cb89540 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_145d5ede9;
  }
  _Dst = (void *)FUN_14001cc68(0x130);
  memset(_Dst,0,0x130);
  FUN_145d5eec0(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b41f5b0;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_145d5ede9;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_145d5ede9;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_145d5ee64:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_145d5eddf;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_145d5ee64;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_145d5eddf:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145d5ede9:
  *param_1 = local_38;
  param_1[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d5eec0 FUN_145d5eec0 body=165 status=ok
// SIG undefined FUN_145d5eec0(void)

void FUN_145d5eec0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b41f590;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return;
}



// FUNCTION 145d5ef66 FUN_145d5ef66 body=55 status=ok
// SIG undefined FUN_145d5ef66(void)

void FUN_145d5ef66(longlong *param_1)

{
  FUN_145d5ef9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5ef9e FUN_145d5ef9e body=416 status=ok
// SIG undefined FUN_145d5ef9e(void)

void FUN_145d5ef9e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x78;
      *(undefined4 *)(lVar2 + 0x58 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x50 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1491970a2(lVar2 + lVar5 + 0x10);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1410fd13e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5f140 FUN_145d5f140 body=513 status=ok
// SIG undefined FUN_145d5f140(void)

void FUN_145d5f140(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar9 = *(int *)(param_1 + 0x70);
  if (0 < (longlong)iVar9) {
    local_58 = (void *)0x0;
    pvVar2 = *(void **)(param_1 + 0x68);
    local_50 = iVar9;
    FUN_145703074(&local_58,iVar9,0);
    memcpy(local_58,pvVar2,(longlong)iVar9 << 4);
    pvVar2 = local_58;
    if ((longlong)local_50 != 0) {
      lVar11 = (longlong)local_50 << 4;
      lVar10 = 0;
      local_70 = lVar11;
      do {
        puVar1 = (undefined4 *)((longlong)pvVar2 + lVar10);
        local_68 = *puVar1;
        uStack_64 = puVar1[1];
        uStack_60 = puVar1[2];
        uStack_5c = puVar1[3];
        plVar3 = *(longlong **)(puVar1 + 2);
        if (((plVar3 != (longlong *)0x0) && (cVar4 = FUN_144729dda(&local_68), cVar4 != '\0')) &&
           (cVar4 = FUN_144a76f74(&local_68,0,0), cVar4 == '\0')) {
          lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
          lVar11 = lVar5 + 0xa8;
          cVar4 = FUN_144729dda(lVar11);
          if (cVar4 != '\0') {
            FUN_14479d2ce(lVar11);
          }
          FUN_14485c47a(lVar11,param_2);
          FUN_140bf70b8(lVar5);
          cVar4 = FUN_144729dda(&local_68);
          if ((cVar4 == '\0') || (lVar6 = (**(code **)(*plVar3 + 8))(plVar3), lVar6 == 0)) {
LAB_145d5f32e:
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_144a6c4d8();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_145d5f32e;
          }
          lVar6 = FUN_144860cdc(lVar6);
          if ((param_2 != 0) && (lVar6 != 0)) {
            FUN_141545046(lVar6,param_2);
          }
          uVar8 = FUN_14479d2ce(param_1);
          FUN_14036835e(lVar5,uVar8);
          FUN_14485c47a(lVar11);
          FUN_140bf70b8(lVar5);
          lVar11 = local_70;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar11 != lVar10);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
    iVar9 = *(int *)(param_1 + 0x70);
  }
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0xbf800000;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5f342 FUN_145d5f342 body=139 status=ok
// SIG undefined FUN_145d5f342(void)

longlong FUN_145d5f342(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145d5f3ce();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x2b0;
    if (lVar3 + lVar2 != 0) goto LAB_145d5f392;
  }
  local_30 = param_3;
  FUN_145d5f48a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x2b0;
LAB_145d5f392:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 8;
}



// FUNCTION 145d5f3ce FUN_145d5f3ce body=186 status=ok
// SIG undefined FUN_145d5f3ce(void)

int FUN_145d5f3ce(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x2b0);
        cVar1 = FUN_14486088a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145d5f462;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x2a8 + (longlong)iVar4 * 0x2b0);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145d5f462:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5f48a FUN_145d5f48a body=283 status=ok
// SIG undefined FUN_145d5f48a(void)

undefined4 * FUN_145d5f48a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d5f6a0(param_1,local_48);
  FUN_1415452d2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x2a8) = 0xffffffff;
  cVar1 = FUN_145d5f5a6(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x2ac) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x2a8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14037bc38(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5f5a6 FUN_145d5f5a6 body=248 status=ok
// SIG undefined FUN_145d5f5a6(void)

undefined8 FUN_145d5f5a6(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      uVar1 = *param_3;
      lVar5 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x2b0;
        local_50 = *(undefined8 *)(lVar5 + lVar7);
        local_58 = uVar1;
        cVar2 = FUN_14472d054(&local_50,&local_58);
        lVar5 = *param_1;
        if (cVar2 != '\0') {
          memmove((void *)(lVar5 + lVar7),param_3,0x2a8);
          FUN_145d5f874(param_1,*param_4);
          *param_4 = iVar6;
          uVar4 = 1;
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x2a8 + lVar7);
        uVar4 = 0;
      } while (iVar6 != -1);
      goto LAB_145d5f5df;
    }
  }
  uVar4 = 0;
LAB_145d5f5df:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145d5f6a0 FUN_145d5f6a0 body=468 status=ok
// SIG undefined FUN_145d5f6a0(void)

int * FUN_145d5f6a0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14180dd6a(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x2b0);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x2b0) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x2b0 + *param_1;
  return param_2;
}



// FUNCTION 145d5f874 FUN_145d5f874 body=124 status=ok
// SIG undefined FUN_145d5f874(void)

void FUN_145d5f874(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x2b0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x2b0) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x2b0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145d5f8f0 FUN_145d5f8f0 body=40 status=ok
// SIG undefined FUN_145d5f8f0(void)

undefined8 FUN_145d5f8f0(undefined8 param_1,int param_2)

{
  FUN_145d5f918();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5f918 FUN_145d5f918 body=479 status=ok
// SIG undefined FUN_145d5f918(void)

void FUN_145d5f918(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba56e40;
  param_1[5] = &PTR_FUN_14ba57160;
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145d5faf8(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145d5faf8(param_1 + 0x1b);
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145d5fb88(param_1 + 10);
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14114f6bc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d5faf8 FUN_145d5faf8 body=53 status=ok
// SIG undefined FUN_145d5faf8(void)

void FUN_145d5faf8(longlong *param_1)

{
  FUN_145d5fb2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5fb2e FUN_145d5fb2e body=90 status=ok
// SIG undefined FUN_145d5fb2e(void)

void FUN_145d5fb2e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d5fb88 FUN_145d5fb88 body=55 status=ok
// SIG undefined FUN_145d5fb88(void)

void FUN_145d5fb88(longlong *param_1)

{
  FUN_145d5fbc0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5fbc0 FUN_145d5fbc0 body=384 status=ok
// SIG undefined FUN_145d5fbc0(void)

void FUN_145d5fbc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_148fdd144(*local_70 + (longlong)iStack_54 * 0xe8 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140032aa6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5fd41 FUN_145d5fd41 body=33 status=ok
// SIG undefined FUN_145d5fd41(void)

void FUN_145d5fd41(void)

{
  if (DAT_14c950d20 == 0) {
    DAT_14c950d20 = FUN_145d5fd62();
  }
  return;
}



// FUNCTION 145d5fd62 FUN_145d5fd62 body=145 status=ok
// SIG undefined FUN_145d5fd62(void)

undefined8 FUN_145d5fd62(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141050fd7();
  uVar1 = FUN_145b09694();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,3);
  local_28 = 0x28;
  local_24 = 3;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d5fdf4(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5fdf4 FUN_145d5fdf4 body=135 status=ok
// SIG undefined FUN_145d5fdf4(void)

void FUN_145d5fdf4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x38);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5fe7c FUN_145d5fe7c body=33 status=ok
// SIG undefined FUN_145d5fe7c(void)

void FUN_145d5fe7c(void)

{
  if (DAT_14c9516e8 == 0) {
    DAT_14c9516e8 = FUN_145d5fe9e();
  }
  return;
}



// FUNCTION 145d5fe9e FUN_145d5fe9e body=145 status=ok
// SIG undefined FUN_145d5fe9e(void)

undefined8 FUN_145d5fe9e(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141050fd7();
  uVar1 = FUN_140007dea();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x28;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d5ff30(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5ff30 FUN_145d5ff30 body=135 status=ok
// SIG undefined FUN_145d5ff30(void)

void FUN_145d5ff30(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x30);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5ffb8 FUN_145d5ffb8 body=33 status=ok
// SIG undefined FUN_145d5ffb8(void)

void FUN_145d5ffb8(void)

{
  if (DAT_14c952560 == 0) {
    DAT_14c952560 = FUN_145d5ffda();
  }
  return;
}



// FUNCTION 145d5ffda FUN_145d5ffda body=145 status=ok
// SIG undefined FUN_145d5ffda(void)

undefined8 FUN_145d5ffda(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145b2af0c();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d6006c(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6006c FUN_145d6006c body=135 status=ok
// SIG undefined FUN_145d6006c(void)

void FUN_145d6006c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d600f4 FUN_145d600f4 body=33 status=ok
// SIG undefined FUN_145d600f4(void)

void FUN_145d600f4(void)

{
  if (DAT_14c952578 == 0) {
    DAT_14c952578 = FUN_145d60116();
  }
  return;
}



// FUNCTION 145d60116 FUN_145d60116 body=145 status=ok
// SIG undefined FUN_145d60116(void)

undefined8 FUN_145d60116(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145956e12();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d601a8(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d601a8 FUN_145d601a8 body=135 status=ok
// SIG undefined FUN_145d601a8(void)

void FUN_145d601a8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60230 FUN_145d60230 body=33 status=ok
// SIG undefined FUN_145d60230(void)

void FUN_145d60230(void)

{
  if (DAT_14c9525a8 == 0) {
    DAT_14c9525a8 = FUN_145d60252();
  }
  return;
}



// FUNCTION 145d60252 FUN_145d60252 body=145 status=ok
// SIG undefined FUN_145d60252(void)

undefined8 FUN_145d60252(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14580b32a();
  uVar1 = FUN_145b2b0e0();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d602e4(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d602e4 FUN_145d602e4 body=135 status=ok
// SIG undefined FUN_145d602e4(void)

void FUN_145d602e4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6036c FUN_145d6036c body=33 status=ok
// SIG undefined FUN_145d6036c(void)

void FUN_145d6036c(void)

{
  if (DAT_14c9525d8 == 0) {
    DAT_14c9525d8 = FUN_145d6038e();
  }
  return;
}



// FUNCTION 145d6038e FUN_145d6038e body=145 status=ok
// SIG undefined FUN_145d6038e(void)

undefined8 FUN_145d6038e(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145b2b2b4();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d60420(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60420 FUN_145d60420 body=135 status=ok
// SIG undefined FUN_145d60420(void)

void FUN_145d60420(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d604a8 FUN_145d604a8 body=33 status=ok
// SIG undefined FUN_145d604a8(void)

void FUN_145d604a8(void)

{
  if (DAT_14c952680 == 0) {
    DAT_14c952680 = FUN_145d604ca();
  }
  return;
}



// FUNCTION 145d604ca FUN_145d604ca body=145 status=ok
// SIG undefined FUN_145d604ca(void)

undefined8 FUN_145d604ca(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145b2b746();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d6055c(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6055c FUN_145d6055c body=135 status=ok
// SIG undefined FUN_145d6055c(void)

void FUN_145d6055c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d605e4 FUN_145d605e4 body=33 status=ok
// SIG undefined FUN_145d605e4(void)

void FUN_145d605e4(void)

{
  if (DAT_14c9526c8 == 0) {
    DAT_14c9526c8 = FUN_145d60606();
  }
  return;
}



// FUNCTION 145d60606 FUN_145d60606 body=145 status=ok
// SIG undefined FUN_145d60606(void)

undefined8 FUN_145d60606(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_1459e265c();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d60698(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60698 FUN_145d60698 body=135 status=ok
// SIG undefined FUN_145d60698(void)

void FUN_145d60698(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60720 FUN_145d60720 body=33 status=ok
// SIG undefined FUN_145d60720(void)

void FUN_145d60720(void)

{
  if (DAT_14c952758 == 0) {
    DAT_14c952758 = FUN_145d60742();
  }
  return;
}



// FUNCTION 145d60742 FUN_145d60742 body=145 status=ok
// SIG undefined FUN_145d60742(void)

undefined8 FUN_145d60742(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145bd343e();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d607d4(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d607d4 FUN_145d607d4 body=135 status=ok
// SIG undefined FUN_145d607d4(void)

void FUN_145d607d4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x90);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6085c FUN_145d6085c body=33 status=ok
// SIG undefined FUN_145d6085c(void)

void FUN_145d6085c(void)

{
  if (DAT_14c9527c8 == 0) {
    DAT_14c9527c8 = FUN_145d6087e();
  }
  return;
}



// FUNCTION 145d6087e FUN_145d6087e body=145 status=ok
// SIG undefined FUN_145d6087e(void)

undefined8 FUN_145d6087e(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145b2baee();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x70;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d60910(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60910 FUN_145d60910 body=135 status=ok
// SIG undefined FUN_145d60910(void)

void FUN_145d60910(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x78);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60998 FUN_145d60998 body=33 status=ok
// SIG undefined FUN_145d60998(void)

void FUN_145d60998(void)

{
  if (DAT_14c9528a0 == 0) {
    DAT_14c9528a0 = FUN_145d609ba();
  }
  return;
}



// FUNCTION 145d609ba FUN_145d609ba body=145 status=ok
// SIG undefined FUN_145d609ba(void)

undefined8 FUN_145d609ba(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457eb309();
  uVar1 = FUN_145b2c154();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x78;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145d60a4c(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60a4c FUN_145d60a4c body=135 status=ok
// SIG undefined FUN_145d60a4c(void)

void FUN_145d60a4c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x80);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60ad4 FUN_145d60ad4 body=74 status=ok
// SIG undefined FUN_145d60ad4(void)

undefined8 * FUN_145d60ad4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a6efd60;
  FUN_145d60b1e(param_1 + 0x70);
  FUN_145d60b5e(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d60b1e FUN_145d60b1e body=64 status=ok
// SIG undefined FUN_145d60b1e(void)

void FUN_145d60b1e(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d60b5e FUN_145d60b5e body=177 status=ok
// SIG undefined FUN_145d60b5e(void)

void FUN_145d60b5e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d60c10 FUN_145d60c10 body=118 status=ok
// SIG undefined FUN_145d60c10(void)

void FUN_145d60c10(longlong param_1)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141237e80();
  if (*(longlong *)(param_1 + 0x3b0) == 0) {
    local_30 = FUN_141533a18;
    local_28 = 0;
    FUN_145d60c88(&local_20,param_1 + -0x30);
    *(undefined8 *)(param_1 + 0x3b0) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60c88 FUN_145d60c88 body=241 status=ok
// SIG undefined FUN_145d60c88(void)

undefined8 FUN_145d60c88(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b9b3a80;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9b3a10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145d60d7a(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60d7a FUN_145d60d7a body=233 status=ok
// SIG undefined FUN_145d60d7a(void)

undefined8 * FUN_145d60d7a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cbd0b60,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cbd0b68;
      lVar6 = (longlong)(int)DAT_14cbd0b68;
      DAT_14cbd0b68 = DAT_14cbd0b68 + 1;
      if (DAT_14cbd0b6c < DAT_14cbd0b68) {
        FUN_1447a71f6(&DAT_14cbd0b60,uVar3);
      }
      lVar2 = DAT_14cbd0b60;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cbd0b60 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d60e70 FUN_145d60e70 body=24 status=ok
// SIG undefined FUN_145d60e70(void)

bool FUN_145d60e70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145d60e88 FUN_145d60e88 body=40 status=ok
// SIG undefined FUN_145d60e88(void)

undefined8 FUN_145d60e88(undefined8 param_1,int param_2)

{
  FUN_145d60eb0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d60eb0 FUN_145d60eb0 body=330 status=ok
// SIG undefined FUN_145d60eb0(void)

void FUN_145d60eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f30af0;
  FUN_145d61022(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145d60ffa(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d60ffa FUN_145d60ffa body=40 status=ok
// SIG undefined FUN_145d60ffa(void)

void FUN_145d60ffa(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b5d4f4(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145d61022 FUN_145d61022 body=63 status=ok
// SIG undefined FUN_145d61022(void)

void FUN_145d61022(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d6106a FUN_145d6106a body=465 status=ok
// SIG undefined FUN_145d6106a(void)

undefined8 * FUN_145d6106a(undefined8 *param_1)

{
  FUN_1410ba828();
  *param_1 = &PTR_FUN_14ab29df0;
  param_1[6] = &PTR_FUN_14ab2a0d0;
  param_1[8] = &PTR_FUN_14ab2a120;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 2;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x48] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return param_1;
}



// FUNCTION 145d6124a FUN_145d6124a body=40 status=ok
// SIG undefined FUN_145d6124a(void)

undefined8 FUN_145d6124a(undefined8 param_1,int param_2)

{
  FUN_145d61272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d61272 FUN_145d61272 body=92 status=ok
// SIG undefined FUN_145d61272(void)

void FUN_145d61272(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6a0f30;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145d612ce(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145d612ce FUN_145d612ce body=55 status=ok
// SIG undefined FUN_145d612ce(void)

void FUN_145d612ce(longlong *param_1)

{
  FUN_145d61306(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61306 FUN_145d61306 body=349 status=ok
// SIG undefined FUN_145d61306(void)

void FUN_145d61306(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_140485912(*local_70 + (longlong)iStack_54 * 0x78 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1410fd13e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d61470 FUN_145d61470 body=262 status=ok
// SIG undefined FUN_145d61470(void)

undefined8 * FUN_145d61470(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8b8d50;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1412e3d1e(param_1 + 0xc);
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfd;
  local_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = 1;
  FUN_145b087ba(&puStack_70);
  *puStack_70 = 0;
  local_60 = 0;
  FUN_140056680(local_58,L"{ContextHash}");
  local_48 = 0;
  iVar1 = *(int *)(param_1 + 0xb);
  *(uint *)(param_1 + 0xb) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar1 + 1U) {
    FUN_145d61650(param_1 + 10,iVar1);
  }
  FUN_145d61578((longlong)iVar1 * 0x38 + param_1[10],&local_78);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (puStack_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d61578 FUN_145d61578 body=129 status=ok
// SIG undefined FUN_145d61578(void)

longlong FUN_145d61578(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  FUN_145d615fa();
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145d615fa FUN_145d615fa body=85 status=ok
// SIG undefined FUN_145d615fa(void)

longlong * FUN_145d615fa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  return param_1;
}



// FUNCTION 145d61650 FUN_145d61650 body=143 status=ok
// SIG undefined FUN_145d61650(void)

void FUN_145d61650(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d616e0 FUN_145d616e0 body=24 status=ok
// SIG undefined FUN_145d616e0(void)

void FUN_145d616e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d616f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145d616f8 FUN_145d616f8 body=38 status=ok
// SIG undefined FUN_145d616f8(void)

undefined8 FUN_145d616f8(undefined8 param_1,int param_2)

{
  FUN_145d6171e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d6171e FUN_145d6171e body=569 status=ok
// SIG undefined FUN_145d6171e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6171e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14b3f5d90;
  param_1[4] = &PTR_FUN_14b3f5dc0;
  param_1[6] = &PTR_FUN_14b3f5de0;
  iVar2 = *(int *)(param_1 + 10);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[9];
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + lVar6);
      FUN_1407460ba(puVar4);
      _DAT_14cb76794 = _DAT_14cb76794 + -1;
      *puVar4 = DAT_14cb76788;
      lVar6 = lVar6 + 8;
      DAT_14cb76788 = puVar4;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) < 0) {
    FUN_14881cf3e(param_1 + 9);
  }
  while (lVar3 = *(longlong *)param_1[0xd], lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 8);
    lVar6 = param_1[0xd];
    param_1[0xd] = lVar3;
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
    FUN_1407460ba(puVar4);
    _DAT_14cb76794 = _DAT_14cb76794 + -1;
    *puVar4 = DAT_14cb76788;
    DAT_14cb76788 = puVar4;
  }
  iVar2 = *(int *)(param_1 + 0xf);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[0xe];
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + lVar6);
      FUN_14881c414(puVar4);
      _DAT_14cb7674c = _DAT_14cb7674c + -1;
      *puVar4 = DAT_14cb76740;
      lVar6 = lVar6 + 8;
      DAT_14cb76740 = puVar4;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) < 0) {
    FUN_14881cf6e(param_1 + 0xe);
  }
  FUN_14074662d(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14074662d(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) goto LAB_145d618e8;
  while ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    param_1[0xd] = *(undefined8 *)param_1[0xd];
LAB_145d618e8:
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 6);
  param_1[4] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 4);
  plVar5 = (longlong *)param_1[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d61953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145d61958 FUN_145d61958 body=54 status=ok
// SIG undefined FUN_145d61958(void)

void FUN_145d61958(void)

{
  FUN_145d6198e();
  if (DAT_14c866cc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c866ca0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6198e FUN_145d6198e body=104 status=ok
// SIG undefined FUN_145d6198e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6198e(void)

{
  DAT_14c866ca8 = 0;
  if (DAT_14c866cac != 0) {
    FUN_1447a08a2(&DAT_14c866ca0,0);
  }
  _DAT_14c866cd0 = 0xffffffff;
  DAT_14c866cc8 = 0;
  if (DAT_14c866ccc < 0x81) {
    return;
  }
  DAT_14c866ccc = 0x80;
  FUN_1446efbd8(&DAT_14c866cb0,0);
  return;
}



// FUNCTION 145d619f6 FUN_145d619f6 body=54 status=ok
// SIG undefined FUN_145d619f6(void)

void FUN_145d619f6(void)

{
  FUN_145d61a2c();
  if (DAT_14c868030 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c868010 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61a2c FUN_145d61a2c body=104 status=ok
// SIG undefined FUN_145d61a2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61a2c(void)

{
  DAT_14c868018 = 0;
  if (DAT_14c86801c != 0) {
    FUN_1447a08a2(&DAT_14c868010,0);
  }
  _DAT_14c868040 = 0xffffffff;
  _DAT_14c868038 = 0;
  if (DAT_14c86803c < 0x81) {
    return;
  }
  DAT_14c86803c = 0x80;
  FUN_1446efbd8(&DAT_14c868020,0);
  return;
}



// FUNCTION 145d61a94 FUN_145d61a94 body=112 status=ok
// SIG undefined FUN_145d61a94(void)

void FUN_145d61a94(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  EnterCriticalSection(param_1);
  iVar1 = *(int *)(param_2 + 0x18) + -1;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  FUN_14020fad6((longlong)iVar1 * 0x18 + *(longlong *)(param_2 + 0x10),param_3);
  FUN_14089e7f6(param_1,3,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d61af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 145d61b04 FUN_145d61b04 body=54 status=ok
// SIG undefined FUN_145d61b04(void)

void FUN_145d61b04(void)

{
  FUN_145d61b3a();
  if (DAT_14c947ea0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c947e80 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61b3a FUN_145d61b3a body=104 status=ok
// SIG undefined FUN_145d61b3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61b3a(void)

{
  DAT_14c947e88 = 0;
  if (DAT_14c947e8c != 0) {
    FUN_144727cd0(&DAT_14c947e80,0);
  }
  _DAT_14c947eb0 = 0xffffffff;
  DAT_14c947ea8 = 0;
  if (DAT_14c947eac < 0x81) {
    return;
  }
  DAT_14c947eac = 0x80;
  FUN_1446efbd8(&DAT_14c947e90,0);
  return;
}



// FUNCTION 145d61ba2 FUN_145d61ba2 body=54 status=ok
// SIG undefined FUN_145d61ba2(void)

void FUN_145d61ba2(void)

{
  FUN_145d61bd8();
  if (DAT_14c947ef0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c947ed0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61bd8 FUN_145d61bd8 body=104 status=ok
// SIG undefined FUN_145d61bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61bd8(void)

{
  DAT_14c947ed8 = 0;
  if (DAT_14c947edc != 0) {
    FUN_144727cd0(&DAT_14c947ed0,0);
  }
  _DAT_14c947f00 = 0xffffffff;
  DAT_14c947ef8 = 0;
  if (DAT_14c947efc < 0x81) {
    return;
  }
  DAT_14c947efc = 0x80;
  FUN_1446efbd8(&DAT_14c947ee0,0);
  return;
}



// FUNCTION 145d61c40 FUN_145d61c40 body=54 status=ok
// SIG undefined FUN_145d61c40(void)

void FUN_145d61c40(void)

{
  FUN_145d61c76();
  if (DAT_14c949578 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c949558 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61c76 FUN_145d61c76 body=104 status=ok
// SIG undefined FUN_145d61c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61c76(void)

{
  DAT_14c949560 = 0;
  if (DAT_14c949564 != 0) {
    FUN_1401ad22e(&DAT_14c949558,0);
  }
  _DAT_14c949588 = 0xffffffff;
  DAT_14c949580 = 0;
  if (DAT_14c949584 < 0x81) {
    return;
  }
  DAT_14c949584 = 0x80;
  FUN_1446efbd8(&DAT_14c949568,0);
  return;
}



// FUNCTION 145d61cde FUN_145d61cde body=54 status=ok
// SIG undefined FUN_145d61cde(void)

void FUN_145d61cde(void)

{
  FUN_145d61d14();
  if (DAT_14c949718 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9496f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61d14 FUN_145d61d14 body=104 status=ok
// SIG undefined FUN_145d61d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61d14(void)

{
  DAT_14c949700 = 0;
  if (DAT_14c949704 != 0) {
    FUN_144727cd0(&DAT_14c9496f8,0);
  }
  _DAT_14c949728 = 0xffffffff;
  _DAT_14c949720 = 0;
  if (DAT_14c949724 < 0x81) {
    return;
  }
  DAT_14c949724 = 0x80;
  FUN_1446efbd8(&DAT_14c949708,0);
  return;
}



// FUNCTION 145d61d7c FUN_145d61d7c body=54 status=ok
// SIG undefined FUN_145d61d7c(void)

void FUN_145d61d7c(void)

{
  FUN_145d61db2();
  if (DAT_14c952a98 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c952a78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61db2 FUN_145d61db2 body=104 status=ok
// SIG undefined FUN_145d61db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61db2(void)

{
  _DAT_14c952a80 = 0;
  if (DAT_14c952a84 != 0) {
    FUN_144727cd0(&DAT_14c952a78,0);
  }
  _DAT_14c952aa8 = 0xffffffff;
  _DAT_14c952aa0 = 0;
  if (DAT_14c952aa4 < 0x81) {
    return;
  }
  DAT_14c952aa4 = 0x80;
  FUN_1446efbd8(&DAT_14c952a88,0);
  return;
}



// FUNCTION 145d61e1a FUN_145d61e1a body=54 status=ok
// SIG undefined FUN_145d61e1a(void)

void FUN_145d61e1a(void)

{
  FUN_145d61e50();
  if (DAT_14c963df8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c963dd8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61e50 FUN_145d61e50 body=104 status=ok
// SIG undefined FUN_145d61e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61e50(void)

{
  DAT_14c963de0 = 0;
  if (DAT_14c963de4 != 0) {
    FUN_1446f4a44(&DAT_14c963dd8,0);
  }
  _DAT_14c963e08 = 0xffffffff;
  _DAT_14c963e00 = 0;
  if (DAT_14c963e04 < 0x81) {
    return;
  }
  DAT_14c963e04 = 0x80;
  FUN_1446efbd8(&DAT_14c963de8,0);
  return;
}



// FUNCTION 145d61eb8 FUN_145d61eb8 body=54 status=ok
// SIG undefined FUN_145d61eb8(void)

void FUN_145d61eb8(void)

{
  FUN_145d61eee();
  if (DAT_14c967118 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9670f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61eee FUN_145d61eee body=104 status=ok
// SIG undefined FUN_145d61eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61eee(void)

{
  DAT_14c967100 = 0;
  if (DAT_14c967104 != 0) {
    FUN_14472eb64(&DAT_14c9670f8,0);
  }
  _DAT_14c967128 = 0xffffffff;
  DAT_14c967120 = 0;
  if (DAT_14c967124 < 0x81) {
    return;
  }
  DAT_14c967124 = 0x80;
  FUN_1446efbd8(&DAT_14c967108,0);
  return;
}



// FUNCTION 145d61f56 FUN_145d61f56 body=54 status=ok
// SIG undefined FUN_145d61f56(void)

void FUN_145d61f56(void)

{
  FUN_145d61f8c();
  if (DAT_14c967f40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c967f20 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d61f8c FUN_145d61f8c body=104 status=ok
// SIG undefined FUN_145d61f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d61f8c(void)

{
  DAT_14c967f28 = 0;
  if (DAT_14c967f2c != 0) {
    FUN_144727cd0(&DAT_14c967f20,0);
  }
  _DAT_14c967f50 = 0xffffffff;
  DAT_14c967f48 = 0;
  if (DAT_14c967f4c < 0x81) {
    return;
  }
  DAT_14c967f4c = 0x80;
  FUN_1446efbd8(&DAT_14c967f30,0);
  return;
}



// FUNCTION 145d61ff4 FUN_145d61ff4 body=54 status=ok
// SIG undefined FUN_145d61ff4(void)

void FUN_145d61ff4(void)

{
  FUN_145d6202a();
  if (DAT_14c96b478 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c96b458 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6202a FUN_145d6202a body=104 status=ok
// SIG undefined FUN_145d6202a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6202a(void)

{
  DAT_14c96b460 = 0;
  if (DAT_14c96b464 != 0) {
    FUN_144727cd0(&DAT_14c96b458,0);
  }
  _DAT_14c96b488 = 0xffffffff;
  DAT_14c96b480 = 0;
  if (DAT_14c96b484 < 0x81) {
    return;
  }
  DAT_14c96b484 = 0x80;
  FUN_1446efbd8(&DAT_14c96b468,0);
  return;
}



// FUNCTION 145d62092 FUN_145d62092 body=54 status=ok
// SIG undefined FUN_145d62092(void)

void FUN_145d62092(void)

{
  FUN_145d620c8();
  if (DAT_14c9a1d00 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1ce0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d620c8 FUN_145d620c8 body=104 status=ok
// SIG undefined FUN_145d620c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d620c8(void)

{
  DAT_14c9a1ce8 = 0;
  if (DAT_14c9a1cec != 0) {
    FUN_144727cd0(&DAT_14c9a1ce0,0);
  }
  _DAT_14c9a1d10 = 0xffffffff;
  DAT_14c9a1d08 = 0;
  if (DAT_14c9a1d0c < 0x81) {
    return;
  }
  DAT_14c9a1d0c = 0x80;
  FUN_1446efbd8(&DAT_14c9a1cf0,0);
  return;
}



// FUNCTION 145d62130 FUN_145d62130 body=54 status=ok
// SIG undefined FUN_145d62130(void)

void FUN_145d62130(void)

{
  FUN_145d62166();
  if (DAT_14c9a1f40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1f20 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62166 FUN_145d62166 body=104 status=ok
// SIG undefined FUN_145d62166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62166(void)

{
  DAT_14c9a1f28 = 0;
  if (DAT_14c9a1f2c != 0) {
    FUN_144727cd0(&DAT_14c9a1f20,0);
  }
  _DAT_14c9a1f50 = 0xffffffff;
  DAT_14c9a1f48 = 0;
  if (DAT_14c9a1f4c < 0x81) {
    return;
  }
  DAT_14c9a1f4c = 0x80;
  FUN_1446efbd8(&DAT_14c9a1f30,0);
  return;
}



// FUNCTION 145d621ce FUN_145d621ce body=54 status=ok
// SIG undefined FUN_145d621ce(void)

void FUN_145d621ce(void)

{
  FUN_145d62204();
  if (DAT_14c9a2078 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a2058 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62204 FUN_145d62204 body=104 status=ok
// SIG undefined FUN_145d62204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62204(void)

{
  DAT_14c9a2060 = 0;
  if (DAT_14c9a2064 != 0) {
    FUN_144727cd0(&DAT_14c9a2058,0);
  }
  _DAT_14c9a2088 = 0xffffffff;
  DAT_14c9a2080 = 0;
  if (DAT_14c9a2084 < 0x81) {
    return;
  }
  DAT_14c9a2084 = 0x80;
  FUN_1446efbd8(&DAT_14c9a2068,0);
  return;
}



// FUNCTION 145d6226c FUN_145d6226c body=54 status=ok
// SIG undefined FUN_145d6226c(void)

void FUN_145d6226c(void)

{
  FUN_145d622a2();
  if (DAT_14c9a2188 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a2168 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d622a2 FUN_145d622a2 body=104 status=ok
// SIG undefined FUN_145d622a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d622a2(void)

{
  DAT_14c9a2170 = 0;
  if (DAT_14c9a2174 != 0) {
    FUN_144727cd0(&DAT_14c9a2168,0);
  }
  _DAT_14c9a2198 = 0xffffffff;
  DAT_14c9a2190 = 0;
  if (DAT_14c9a2194 < 0x81) {
    return;
  }
  DAT_14c9a2194 = 0x80;
  FUN_1446efbd8(&DAT_14c9a2178,0);
  return;
}



// FUNCTION 145d6230a FUN_145d6230a body=54 status=ok
// SIG undefined FUN_145d6230a(void)

void FUN_145d6230a(void)

{
  FUN_145d62340();
  if (DAT_14c9a2298 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a2278 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62340 FUN_145d62340 body=104 status=ok
// SIG undefined FUN_145d62340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62340(void)

{
  DAT_14c9a2280 = 0;
  if (DAT_14c9a2284 != 0) {
    FUN_144727cd0(&DAT_14c9a2278,0);
  }
  _DAT_14c9a22a8 = 0xffffffff;
  DAT_14c9a22a0 = 0;
  if (DAT_14c9a22a4 < 0x81) {
    return;
  }
  DAT_14c9a22a4 = 0x80;
  FUN_1446efbd8(&DAT_14c9a2288,0);
  return;
}



// FUNCTION 145d623a8 FUN_145d623a8 body=54 status=ok
// SIG undefined FUN_145d623a8(void)

void FUN_145d623a8(void)

{
  FUN_145d623de();
  if (DAT_14c9a63b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a6398 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d623de FUN_145d623de body=104 status=ok
// SIG undefined FUN_145d623de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d623de(void)

{
  DAT_14c9a63a0 = 0;
  if (DAT_14c9a63a4 != 0) {
    FUN_140549ad6(&DAT_14c9a6398,0);
  }
  _DAT_14c9a63c8 = 0xffffffff;
  DAT_14c9a63c0 = 0;
  if (DAT_14c9a63c4 < 0x81) {
    return;
  }
  DAT_14c9a63c4 = 0x80;
  FUN_1446efbd8(&DAT_14c9a63a8,0);
  return;
}



// FUNCTION 145d62446 FUN_145d62446 body=54 status=ok
// SIG undefined FUN_145d62446(void)

void FUN_145d62446(void)

{
  FUN_145d6247c();
  if (DAT_14c9a6368 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a6348 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6247c FUN_145d6247c body=104 status=ok
// SIG undefined FUN_145d6247c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6247c(void)

{
  DAT_14c9a6350 = 0;
  if (DAT_14c9a6354 != 0) {
    FUN_144727cd0(&DAT_14c9a6348,0);
  }
  _DAT_14c9a6378 = 0xffffffff;
  DAT_14c9a6370 = 0;
  if (DAT_14c9a6374 < 0x81) {
    return;
  }
  DAT_14c9a6374 = 0x80;
  FUN_1446efbd8(&DAT_14c9a6358,0);
  return;
}



// FUNCTION 145d624e4 FUN_145d624e4 body=54 status=ok
// SIG undefined FUN_145d624e4(void)

void FUN_145d624e4(void)

{
  FUN_145d6251a();
  if (DAT_14c9a6438 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a6418 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6251a FUN_145d6251a body=104 status=ok
// SIG undefined FUN_145d6251a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6251a(void)

{
  DAT_14c9a6420 = 0;
  if (DAT_14c9a6424 != 0) {
    FUN_144727cd0(&DAT_14c9a6418,0);
  }
  _DAT_14c9a6448 = 0xffffffff;
  DAT_14c9a6440 = 0;
  if (DAT_14c9a6444 < 0x81) {
    return;
  }
  DAT_14c9a6444 = 0x80;
  FUN_1446efbd8(&DAT_14c9a6428,0);
  return;
}



// FUNCTION 145d62582 FUN_145d62582 body=54 status=ok
// SIG undefined FUN_145d62582(void)

void FUN_145d62582(void)

{
  FUN_145d625b8();
  if (DAT_14c9a7488 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a7468 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d625b8 FUN_145d625b8 body=104 status=ok
// SIG undefined FUN_145d625b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d625b8(void)

{
  DAT_14c9a7470 = 0;
  if (DAT_14c9a7474 != 0) {
    FUN_144727cd0(&DAT_14c9a7468,0);
  }
  _DAT_14c9a7498 = 0xffffffff;
  DAT_14c9a7490 = 0;
  if (DAT_14c9a7494 < 0x81) {
    return;
  }
  DAT_14c9a7494 = 0x80;
  FUN_1446efbd8(&DAT_14c9a7478,0);
  return;
}



// FUNCTION 145d62620 FUN_145d62620 body=54 status=ok
// SIG undefined FUN_145d62620(void)

void FUN_145d62620(void)

{
  FUN_145d62656();
  if (DAT_14c9a7690 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a7670 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62656 FUN_145d62656 body=104 status=ok
// SIG undefined FUN_145d62656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62656(void)

{
  DAT_14c9a7678 = 0;
  if (DAT_14c9a767c != 0) {
    FUN_144727cd0(&DAT_14c9a7670,0);
  }
  _DAT_14c9a76a0 = 0xffffffff;
  DAT_14c9a7698 = 0;
  if (DAT_14c9a769c < 0x81) {
    return;
  }
  DAT_14c9a769c = 0x80;
  FUN_1446efbd8(&DAT_14c9a7680,0);
  return;
}



// FUNCTION 145d626be FUN_145d626be body=54 status=ok
// SIG undefined FUN_145d626be(void)

void FUN_145d626be(void)

{
  FUN_145d626f4();
  if (DAT_14c9a7b80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a7b60 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d626f4 FUN_145d626f4 body=104 status=ok
// SIG undefined FUN_145d626f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d626f4(void)

{
  DAT_14c9a7b68 = 0;
  if (DAT_14c9a7b6c != 0) {
    FUN_144727cd0(&DAT_14c9a7b60,0);
  }
  _DAT_14c9a7b90 = 0xffffffff;
  DAT_14c9a7b88 = 0;
  if (DAT_14c9a7b8c < 0x81) {
    return;
  }
  DAT_14c9a7b8c = 0x80;
  FUN_1446efbd8(&DAT_14c9a7b70,0);
  return;
}



// FUNCTION 145d6275c FUN_145d6275c body=54 status=ok
// SIG undefined FUN_145d6275c(void)

void FUN_145d6275c(void)

{
  FUN_145d62792();
  if (DAT_14c9a8220 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a8200 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62792 FUN_145d62792 body=104 status=ok
// SIG undefined FUN_145d62792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62792(void)

{
  DAT_14c9a8208 = 0;
  if (DAT_14c9a820c != 0) {
    FUN_144727cd0(&DAT_14c9a8200,0);
  }
  _DAT_14c9a8230 = 0xffffffff;
  DAT_14c9a8228 = 0;
  if (DAT_14c9a822c < 0x81) {
    return;
  }
  DAT_14c9a822c = 0x80;
  FUN_1446efbd8(&DAT_14c9a8210,0);
  return;
}



// FUNCTION 145d627fa FUN_145d627fa body=54 status=ok
// SIG undefined FUN_145d627fa(void)

void FUN_145d627fa(void)

{
  FUN_145d62830();
  if (DAT_14c9a8318 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a82f8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62830 FUN_145d62830 body=104 status=ok
// SIG undefined FUN_145d62830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62830(void)

{
  DAT_14c9a8300 = 0;
  if (DAT_14c9a8304 != 0) {
    FUN_144727cd0(&DAT_14c9a82f8,0);
  }
  _DAT_14c9a8328 = 0xffffffff;
  DAT_14c9a8320 = 0;
  if (DAT_14c9a8324 < 0x81) {
    return;
  }
  DAT_14c9a8324 = 0x80;
  FUN_1446efbd8(&DAT_14c9a8308,0);
  return;
}



// FUNCTION 145d62898 FUN_145d62898 body=54 status=ok
// SIG undefined FUN_145d62898(void)

void FUN_145d62898(void)

{
  FUN_145d628ce();
  if (DAT_14ca71300 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca712e0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d628ce FUN_145d628ce body=104 status=ok
// SIG undefined FUN_145d628ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d628ce(void)

{
  DAT_14ca712e8 = 0;
  if (DAT_14ca712ec != 0) {
    FUN_145acb176(&DAT_14ca712e0,0);
  }
  _DAT_14ca71310 = 0xffffffff;
  DAT_14ca71308 = 0;
  if (DAT_14ca7130c < 0x81) {
    return;
  }
  DAT_14ca7130c = 0x80;
  FUN_1446efbd8(&DAT_14ca712f0,0);
  return;
}



// FUNCTION 145d62936 FUN_145d62936 body=54 status=ok
// SIG undefined FUN_145d62936(void)

void FUN_145d62936(void)

{
  FUN_145d6296c();
  if (DAT_14ca784d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca784b0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6296c FUN_145d6296c body=104 status=ok
// SIG undefined FUN_145d6296c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6296c(void)

{
  DAT_14ca784b8 = 0;
  if (DAT_14ca784bc != 0) {
    FUN_14472eb64(&DAT_14ca784b0,0);
  }
  _DAT_14ca784e0 = 0xffffffff;
  DAT_14ca784d8 = 0;
  if (DAT_14ca784dc < 0x81) {
    return;
  }
  DAT_14ca784dc = 0x80;
  FUN_1446efbd8(&DAT_14ca784c0,0);
  return;
}



// FUNCTION 145d629d4 FUN_145d629d4 body=54 status=ok
// SIG undefined FUN_145d629d4(void)

void FUN_145d629d4(void)

{
  FUN_145d62a0a();
  if (DAT_14ca985c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca985a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62a0a FUN_145d62a0a body=104 status=ok
// SIG undefined FUN_145d62a0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62a0a(void)

{
  DAT_14ca985a8 = 0;
  if (DAT_14ca985ac != 0) {
    FUN_144727cd0(&DAT_14ca985a0,0);
  }
  _DAT_14ca985d0 = 0xffffffff;
  DAT_14ca985c8 = 0;
  if (DAT_14ca985cc < 0x81) {
    return;
  }
  DAT_14ca985cc = 0x80;
  FUN_1446efbd8(&DAT_14ca985b0,0);
  return;
}



// FUNCTION 145d62a72 FUN_145d62a72 body=54 status=ok
// SIG undefined FUN_145d62a72(void)

void FUN_145d62a72(void)

{
  FUN_145d62aa8();
  if (DAT_14ca9ed98 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca9ed78 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62aa8 FUN_145d62aa8 body=104 status=ok
// SIG undefined FUN_145d62aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62aa8(void)

{
  DAT_14ca9ed80 = 0;
  if (DAT_14ca9ed84 != 0) {
    FUN_144727cd0(&DAT_14ca9ed78,0);
  }
  _DAT_14ca9eda8 = 0xffffffff;
  DAT_14ca9eda0 = 0;
  if (DAT_14ca9eda4 < 0x81) {
    return;
  }
  DAT_14ca9eda4 = 0x80;
  FUN_1446efbd8(&DAT_14ca9ed88,0);
  return;
}



// FUNCTION 145d62b10 FUN_145d62b10 body=54 status=ok
// SIG undefined FUN_145d62b10(void)

void FUN_145d62b10(void)

{
  FUN_145d62b46();
  if (DAT_14caa0fc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa0fa0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62b46 FUN_145d62b46 body=104 status=ok
// SIG undefined FUN_145d62b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62b46(void)

{
  DAT_14caa0fa8 = 0;
  if (DAT_14caa0fac != 0) {
    FUN_144727cd0(&DAT_14caa0fa0,0);
  }
  _DAT_14caa0fd0 = 0xffffffff;
  DAT_14caa0fc8 = 0;
  if (DAT_14caa0fcc < 0x81) {
    return;
  }
  DAT_14caa0fcc = 0x80;
  FUN_1446efbd8(&DAT_14caa0fb0,0);
  return;
}



// FUNCTION 145d62bae FUN_145d62bae body=54 status=ok
// SIG undefined FUN_145d62bae(void)

void FUN_145d62bae(void)

{
  FUN_145d62be4();
  if (DAT_14caa7160 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa7140 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62be4 FUN_145d62be4 body=104 status=ok
// SIG undefined FUN_145d62be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62be4(void)

{
  DAT_14caa7148 = 0;
  if (DAT_14caa714c != 0) {
    FUN_144727cd0(&DAT_14caa7140,0);
  }
  _DAT_14caa7170 = 0xffffffff;
  DAT_14caa7168 = 0;
  if (DAT_14caa716c < 0x81) {
    return;
  }
  DAT_14caa716c = 0x80;
  FUN_1446efbd8(&DAT_14caa7150,0);
  return;
}



// FUNCTION 145d62c4c FUN_145d62c4c body=54 status=ok
// SIG undefined FUN_145d62c4c(void)

void FUN_145d62c4c(void)

{
  FUN_145d62c82();
  if (DAT_14caa7250 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa7230 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62c82 FUN_145d62c82 body=104 status=ok
// SIG undefined FUN_145d62c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62c82(void)

{
  DAT_14caa7238 = 0;
  if (DAT_14caa723c != 0) {
    FUN_144727cd0(&DAT_14caa7230,0);
  }
  _DAT_14caa7260 = 0xffffffff;
  DAT_14caa7258 = 0;
  if (DAT_14caa725c < 0x81) {
    return;
  }
  DAT_14caa725c = 0x80;
  FUN_1446efbd8(&DAT_14caa7240,0);
  return;
}



// FUNCTION 145d62cea FUN_145d62cea body=54 status=ok
// SIG undefined FUN_145d62cea(void)

void FUN_145d62cea(void)

{
  FUN_145d62d20();
  if (DAT_14caa8520 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa8500 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62d20 FUN_145d62d20 body=104 status=ok
// SIG undefined FUN_145d62d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62d20(void)

{
  _DAT_14caa8508 = 0;
  if (DAT_14caa850c != 0) {
    FUN_14474875a(&DAT_14caa8500,0);
  }
  _DAT_14caa8530 = 0xffffffff;
  DAT_14caa8528 = 0;
  if (DAT_14caa852c < 0x81) {
    return;
  }
  DAT_14caa852c = 0x80;
  FUN_1446efbd8(&DAT_14caa8510,0);
  return;
}



// FUNCTION 145d62d88 FUN_145d62d88 body=54 status=ok
// SIG undefined FUN_145d62d88(void)

void FUN_145d62d88(void)

{
  FUN_145d62dbe();
  if (DAT_14cab2698 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2678 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62dbe FUN_145d62dbe body=104 status=ok
// SIG undefined FUN_145d62dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62dbe(void)

{
  DAT_14cab2680 = 0;
  if (DAT_14cab2684 != 0) {
    FUN_144727cd0(&DAT_14cab2678,0);
  }
  _DAT_14cab26a8 = 0xffffffff;
  DAT_14cab26a0 = 0;
  if (DAT_14cab26a4 < 0x81) {
    return;
  }
  DAT_14cab26a4 = 0x80;
  FUN_1446efbd8(&DAT_14cab2688,0);
  return;
}



// FUNCTION 145d62e26 FUN_145d62e26 body=54 status=ok
// SIG undefined FUN_145d62e26(void)

void FUN_145d62e26(void)

{
  FUN_145d62e5c();
  if (DAT_14cab2928 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2908 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d62e5c FUN_145d62e5c body=104 status=ok
// SIG undefined FUN_145d62e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d62e5c(void)

{
  _DAT_14cab2910 = 0;
  if (DAT_14cab2914 != 0) {
    FUN_1401ad22e(&DAT_14cab2908,0);
  }
  _DAT_14cab2938 = 0xffffffff;
  _DAT_14cab2930 = 0;
  if (DAT_14cab2934 < 0x81) {
    return;
  }
  DAT_14cab2934 = 0x80;
  FUN_1446efbd8(&DAT_14cab2918,0);
  return;
}



// FUNCTION 145d62ec4 FUN_145d62ec4 body=40 status=ok
// SIG undefined FUN_145d62ec4(void)

undefined8 FUN_145d62ec4(undefined8 param_1,int param_2)

{
  FUN_145d62eec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d62eec FUN_145d62eec body=118 status=ok
// SIG undefined FUN_145d62eec(void)

void FUN_145d62eec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a503ca0;
  param_1[5] = &PTR_FUN_14a503fa0;
  plVar3 = (longlong *)param_1[0xfe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd8aa(param_1 + 0x2e);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145d62f6a FUN_145d62f6a body=150 status=ok
// SIG undefined FUN_145d62f6a(void)

undefined8 * FUN_145d62f6a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5b2070;
  lVar2 = 0x70;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x110);
  lVar2 = 0x110;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x1b0);
  return param_1;
}



// FUNCTION 145d63000 FUN_145d63000 body=54 status=ok
// SIG undefined FUN_145d63000(void)

void FUN_145d63000(void)

{
  FUN_145d63036();
  if (DAT_14cac9630 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cac9610 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63036 FUN_145d63036 body=104 status=ok
// SIG undefined FUN_145d63036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63036(void)

{
  DAT_14cac9618 = 0;
  if (DAT_14cac961c != 0) {
    FUN_140240048(&DAT_14cac9610,0);
  }
  _DAT_14cac9640 = 0xffffffff;
  DAT_14cac9638 = 0;
  if (DAT_14cac963c < 0x81) {
    return;
  }
  DAT_14cac963c = 0x80;
  FUN_1446efbd8(&DAT_14cac9620,0);
  return;
}



// FUNCTION 145d6309e FUN_145d6309e body=54 status=ok
// SIG undefined FUN_145d6309e(void)

void FUN_145d6309e(void)

{
  FUN_145d630d4();
  if (DAT_14cad0520 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad0500 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d630d4 FUN_145d630d4 body=104 status=ok
// SIG undefined FUN_145d630d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d630d4(void)

{
  DAT_14cad0508 = 0;
  if (DAT_14cad050c != 0) {
    FUN_144727cd0(&DAT_14cad0500,0);
  }
  _DAT_14cad0530 = 0xffffffff;
  DAT_14cad0528 = 0;
  if (DAT_14cad052c < 0x81) {
    return;
  }
  DAT_14cad052c = 0x80;
  FUN_1446efbd8(&DAT_14cad0510,0);
  return;
}



// FUNCTION 145d6313c FUN_145d6313c body=120 status=ok
// SIG undefined FUN_145d6313c(void)

longlong FUN_145d6313c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145d631b4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145d631b4 FUN_145d631b4 body=117 status=ok
// SIG undefined FUN_145d631b4(void)

undefined8 * FUN_145d631b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141145fc6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 145d6322a FUN_145d6322a body=54 status=ok
// SIG undefined FUN_145d6322a(void)

void FUN_145d6322a(void)

{
  FUN_145d63260();
  if (DAT_14cad2298 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad2278 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63260 FUN_145d63260 body=104 status=ok
// SIG undefined FUN_145d63260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63260(void)

{
  DAT_14cad2280 = 0;
  if (DAT_14cad2284 != 0) {
    FUN_1405357e8(&DAT_14cad2278,0);
  }
  _DAT_14cad22a8 = 0xffffffff;
  _DAT_14cad22a0 = 0;
  if (DAT_14cad22a4 < 0x81) {
    return;
  }
  DAT_14cad22a4 = 0x80;
  FUN_1446efbd8(&DAT_14cad2288,0);
  return;
}



// FUNCTION 145d632c8 FUN_145d632c8 body=22 status=ok
// SIG undefined FUN_145d632c8(void)

undefined8 FUN_145d632c8(undefined8 param_1,undefined8 param_2)

{
  FUN_145d632de();
  return param_2;
}



// FUNCTION 145d632de FUN_145d632de body=212 status=ok
// SIG undefined FUN_145d632de(void)

undefined8 FUN_145d632de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    local_38 = L"NULL CONNECTION";
    FUN_140002266(param_2,L"[UChannel] ChIndex: %d, Closing: %d %s",*(undefined4 *)(param_1 + 0x34),
                  *(uint *)(param_1 + 0x30) >> 1 & 1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  (**(code **)(*plVar1 + 0x2d0))(plVar1,&local_30);
  local_38 = local_30;
  if (local_28 == 0) {
    local_38 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[UChannel] ChIndex: %d, Closing: %d %s",*(undefined4 *)(param_1 + 0x34),
                *(uint *)(param_1 + 0x30) >> 1 & 1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d633b6 FUN_145d633b6 body=54 status=ok
// SIG undefined FUN_145d633b6(void)

void FUN_145d633b6(void)

{
  FUN_145d633ec();
  if (DAT_14cad4a28 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad4a08 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d633ec FUN_145d633ec body=104 status=ok
// SIG undefined FUN_145d633ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d633ec(void)

{
  DAT_14cad4a10 = 0;
  if (DAT_14cad4a14 != 0) {
    FUN_144727cd0(&DAT_14cad4a08,0);
  }
  _DAT_14cad4a38 = 0xffffffff;
  _DAT_14cad4a30 = 0;
  if (DAT_14cad4a34 < 0x81) {
    return;
  }
  DAT_14cad4a34 = 0x80;
  FUN_1446efbd8(&DAT_14cad4a18,0);
  return;
}



// FUNCTION 145d63454 FUN_145d63454 body=54 status=ok
// SIG undefined FUN_145d63454(void)

void FUN_145d63454(void)

{
  FUN_145d6348a();
  if (DAT_14cad55f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cad55d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6348a FUN_145d6348a body=104 status=ok
// SIG undefined FUN_145d6348a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6348a(void)

{
  DAT_14cad55e0 = 0;
  if (DAT_14cad55e4 != 0) {
    FUN_144727cd0(&DAT_14cad55d8,0);
  }
  _DAT_14cad5608 = 0xffffffff;
  _DAT_14cad5600 = 0;
  if (DAT_14cad5604 < 0x81) {
    return;
  }
  DAT_14cad5604 = 0x80;
  FUN_1446efbd8(&DAT_14cad55e8,0);
  return;
}



// FUNCTION 145d634f2 FUN_145d634f2 body=54 status=ok
// SIG undefined FUN_145d634f2(void)

void FUN_145d634f2(void)

{
  FUN_145d63528();
  if (DAT_14cadbd58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cadbd38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63528 FUN_145d63528 body=104 status=ok
// SIG undefined FUN_145d63528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63528(void)

{
  DAT_14cadbd40 = 0;
  if (DAT_14cadbd44 != 0) {
    FUN_144727cd0(&DAT_14cadbd38,0);
  }
  _DAT_14cadbd68 = 0xffffffff;
  DAT_14cadbd60 = 0;
  if (DAT_14cadbd64 < 0x81) {
    return;
  }
  DAT_14cadbd64 = 0x80;
  FUN_1446efbd8(&DAT_14cadbd48,0);
  return;
}



// FUNCTION 145d63590 FUN_145d63590 body=54 status=ok
// SIG undefined FUN_145d63590(void)

void FUN_145d63590(void)

{
  FUN_145d635c6();
  if (DAT_14caf15b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf1598 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d635c6 FUN_145d635c6 body=104 status=ok
// SIG undefined FUN_145d635c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d635c6(void)

{
  DAT_14caf15a0 = 0;
  if (DAT_14caf15a4 != 0) {
    FUN_1446f4a44(&DAT_14caf1598,0);
  }
  _DAT_14caf15c8 = 0xffffffff;
  DAT_14caf15c0 = 0;
  if (DAT_14caf15c4 < 0x81) {
    return;
  }
  DAT_14caf15c4 = 0x80;
  FUN_1446efbd8(&DAT_14caf15a8,0);
  return;
}



// FUNCTION 145d6362e FUN_145d6362e body=54 status=ok
// SIG undefined FUN_145d6362e(void)

void FUN_145d6362e(void)

{
  FUN_145d63664();
  if (DAT_14cb0d2f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0d2d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63664 FUN_145d63664 body=104 status=ok
// SIG undefined FUN_145d63664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63664(void)

{
  DAT_14cb0d2e0 = 0;
  if (DAT_14cb0d2e4 != 0) {
    FUN_14472eb64(&DAT_14cb0d2d8,0);
  }
  _DAT_14cb0d308 = 0xffffffff;
  DAT_14cb0d300 = 0;
  if (DAT_14cb0d304 < 0x81) {
    return;
  }
  DAT_14cb0d304 = 0x80;
  FUN_1446efbd8(&DAT_14cb0d2e8,0);
  return;
}



// FUNCTION 145d636d2 FUN_145d636d2 body=153 status=ok
// SIG undefined FUN_145d636d2(void)

void FUN_145d636d2(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b70);
  if (DAT_14cb12b9c != 0) {
    LOCK();
    DAT_14cb12b9c = 0;
    UNLOCK();
    DAT_14cb12b98 = 0;
    FUN_145c33f67(DAT_14cb12bb0,DAT_14cb12bb8);
    DAT_14cb12bb8 = 0;
    if (DAT_14cb12bbc != 0) {
      FUN_147e0daa0(&DAT_14cb12bb0);
    }
    FUN_145c33f98(DAT_14cb12ba0,DAT_14cb12ba8);
    DAT_14cb12ba8 = 0;
    if (DAT_14cb12bac != 0) {
      FUN_147e0dad0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145d636f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b70);
  return;
}



// FUNCTION 145d6376c FUN_145d6376c body=54 status=ok
// SIG undefined FUN_145d6376c(void)

void FUN_145d6376c(void)

{
  FUN_145d637a2();
  if (DAT_14cb1b0c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb1b0a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d637a2 FUN_145d637a2 body=104 status=ok
// SIG undefined FUN_145d637a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d637a2(void)

{
  DAT_14cb1b0b0 = 0;
  if (DAT_14cb1b0b4 != 0) {
    FUN_144727cd0(&DAT_14cb1b0a8,0);
  }
  _DAT_14cb1b0d8 = 0xffffffff;
  DAT_14cb1b0d0 = 0;
  if (DAT_14cb1b0d4 < 0x81) {
    return;
  }
  DAT_14cb1b0d4 = 0x80;
  FUN_1446efbd8(&DAT_14cb1b0b8,0);
  return;
}



// FUNCTION 145d63816 FUN_145d63816 body=147 status=ok
// SIG undefined FUN_145d63816(void)

undefined8 * FUN_145d63816(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac0f4f0;
  FUN_140fbcb60(param_1 + 0x3f);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  lVar1 = FUN_1459eb736();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145d638aa FUN_145d638aa body=54 status=ok
// SIG undefined FUN_145d638aa(void)

void FUN_145d638aa(void)

{
  FUN_145d638e0();
  if (DAT_14cb244a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb24488 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d638e0 FUN_145d638e0 body=104 status=ok
// SIG undefined FUN_145d638e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d638e0(void)

{
  DAT_14cb24490 = 0;
  if (DAT_14cb24494 != 0) {
    FUN_144727cd0(&DAT_14cb24488,0);
  }
  _DAT_14cb244b8 = 0xffffffff;
  DAT_14cb244b0 = 0;
  if (DAT_14cb244b4 < 0x81) {
    return;
  }
  DAT_14cb244b4 = 0x80;
  FUN_1446efbd8(&DAT_14cb24498,0);
  return;
}



// FUNCTION 145d63948 FUN_145d63948 body=54 status=ok
// SIG undefined FUN_145d63948(void)

void FUN_145d63948(void)

{
  FUN_145d6397e();
  if (DAT_14cb25b00 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb25ae0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6397e FUN_145d6397e body=104 status=ok
// SIG undefined FUN_145d6397e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6397e(void)

{
  DAT_14cb25ae8 = 0;
  if (DAT_14cb25aec != 0) {
    FUN_144727cd0(&DAT_14cb25ae0,0);
  }
  _DAT_14cb25b10 = 0xffffffff;
  DAT_14cb25b08 = 0;
  if (DAT_14cb25b0c < 0x81) {
    return;
  }
  DAT_14cb25b0c = 0x80;
  FUN_1446efbd8(&DAT_14cb25af0,0);
  return;
}



// FUNCTION 145d639e6 FUN_145d639e6 body=54 status=ok
// SIG undefined FUN_145d639e6(void)

void FUN_145d639e6(void)

{
  FUN_145d63a1c();
  if (DAT_14cb43dc8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb43da8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63a1c FUN_145d63a1c body=104 status=ok
// SIG undefined FUN_145d63a1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63a1c(void)

{
  DAT_14cb43db0 = 0;
  if (DAT_14cb43db4 != 0) {
    FUN_1405357e8(&DAT_14cb43da8,0);
  }
  _DAT_14cb43dd8 = 0xffffffff;
  DAT_14cb43dd0 = 0;
  if (DAT_14cb43dd4 < 0x81) {
    return;
  }
  DAT_14cb43dd4 = 0x80;
  FUN_1446efbd8(&DAT_14cb43db8,0);
  return;
}



// FUNCTION 145d63a84 FUN_145d63a84 body=54 status=ok
// SIG undefined FUN_145d63a84(void)

void FUN_145d63a84(void)

{
  FUN_145d63aba();
  if (DAT_14cb44470 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb44450 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63aba FUN_145d63aba body=104 status=ok
// SIG undefined FUN_145d63aba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63aba(void)

{
  DAT_14cb44458 = 0;
  if (DAT_14cb4445c != 0) {
    FUN_144727cd0(&DAT_14cb44450,0);
  }
  _DAT_14cb44480 = 0xffffffff;
  DAT_14cb44478 = 0;
  if (DAT_14cb4447c < 0x81) {
    return;
  }
  DAT_14cb4447c = 0x80;
  FUN_1446efbd8(&DAT_14cb44460,0);
  return;
}



// FUNCTION 145d63b22 FUN_145d63b22 body=54 status=ok
// SIG undefined FUN_145d63b22(void)

void FUN_145d63b22(void)

{
  FUN_145d63b58();
  if (DAT_14cb54228 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb54208 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d63b58 FUN_145d63b58 body=104 status=ok
// SIG undefined FUN_145d63b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d63b58(void)

{
  DAT_14cb54210 = 0;
  if (DAT_14cb54214 != 0) {
    FUN_144727cd0(&DAT_14cb54208,0);
  }
  _DAT_14cb54238 = 0xffffffff;
  DAT_14cb54230 = 0;
  if (DAT_14cb54234 < 0x81) {
    return;
  }
  DAT_14cb54234 = 0x80;
  FUN_1446efbd8(&DAT_14cb54218,0);
  return;
}



// FUNCTION 145d63bcc FUN_145d63bcc body=565 status=ok
// SIG undefined FUN_145d63bcc(void)

undefined8 * FUN_145d63bcc(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b369c10;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a7a01;
  param_1[0x17] = "avatar_archetype";
  FUN_1400b22c2(local_78,"Avatar.Archetypes");
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"template",0);
  FUN_1404e49fa(param_1 + 0x72,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d63e02();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_68,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_60._4_4_;
    if (param_1 + 0x5b == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_50._4_4_;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d63d27;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d63d27:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d63e02 FUN_145d63e02 body=55 status=ok
// SIG undefined FUN_145d63e02(void)

void FUN_145d63e02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e50 = FUN_140002ddd(FUN_1464af632,uVar1,L"AvatarArchetypeDef");
  }
  return;
}



// FUNCTION 145d63e44 FUN_145d63e44 body=565 status=ok
// SIG undefined FUN_145d63e44(void)

undefined8 * FUN_145d63e44(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36a120;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a7aaa;
  param_1[0x17] = "avatar_aspect";
  FUN_1400b22c2(local_78,"Avatar.Aspects");
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,&DAT_149e02088,0);
  FUN_1404e49fa(param_1 + 0x72,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d6407a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_68,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_60._4_4_;
    if (param_1 + 0x5b == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_50._4_4_;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d63f9f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d63f9f:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6407a FUN_145d6407a body=55 status=ok
// SIG undefined FUN_145d6407a(void)

void FUN_145d6407a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54ba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54ba8 = FUN_140002ddd(FUN_1464ae9e8,uVar1,L"AvatarAspectDef");
  }
  return;
}



// FUNCTION 145d640bc FUN_145d640bc body=565 status=ok
// SIG undefined FUN_145d640bc(void)

undefined8 * FUN_145d640bc(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36ab60;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a7af0;
  param_1[0x17] = "avatar_form";
  FUN_1400b22c2(local_78,"Avatar.Forms");
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"template",0);
  FUN_1404e49fa(param_1 + 0x72,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d642f2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_68,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_60._4_4_;
    if (param_1 + 0x5b == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_50._4_4_;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d64217;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d64217:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d642f2 FUN_145d642f2 body=55 status=ok
// SIG undefined FUN_145d642f2(void)

void FUN_145d642f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54da8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54da8 = FUN_140002ddd(FUN_1464af282,uVar1,L"AvatarFormDef");
  }
  return;
}



// FUNCTION 145d64334 FUN_145d64334 body=565 status=ok
// SIG undefined FUN_145d64334(void)

undefined8 * FUN_145d64334(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36b080;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a4da7;
  param_1[0x17] = "avatar_material";
  FUN_1400b22c2(local_78,"Avatar.Material Drivers");
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(&local_68,"template",0);
  FUN_1404e49fa(param_1 + 0x72,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d6456a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_68,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_60._4_4_;
    if (param_1 + 0x5b == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x5e) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_50._4_4_;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d6448f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d6448f:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d6456a FUN_145d6456a body=55 status=ok
// SIG undefined FUN_145d6456a(void)

void FUN_145d6456a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f10 = FUN_140002ddd(FUN_1464b00cc,uVar1,L"AvatarMaterialDriverDef");
  }
  return;
}



// FUNCTION 145d645a2 FUN_145d645a2 body=54 status=ok
// SIG undefined FUN_145d645a2(void)

void FUN_145d645a2(void)

{
  FUN_145d645d8();
  if (DAT_14cb6fde0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb6fdc0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d645d8 FUN_145d645d8 body=104 status=ok
// SIG undefined FUN_145d645d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d645d8(void)

{
  DAT_14cb6fdc8 = 0;
  if (DAT_14cb6fdcc != 0) {
    FUN_144727cd0(&DAT_14cb6fdc0,0);
  }
  _DAT_14cb6fdf0 = 0xffffffff;
  DAT_14cb6fde8 = 0;
  if (DAT_14cb6fdec < 0x81) {
    return;
  }
  DAT_14cb6fdec = 0x80;
  FUN_1446efbd8(&DAT_14cb6fdd0,0);
  return;
}



// FUNCTION 145d64640 FUN_145d64640 body=54 status=ok
// SIG undefined FUN_145d64640(void)

void FUN_145d64640(void)

{
  FUN_145d64676();
  if (DAT_14cb6fef8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb6fed8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64676 FUN_145d64676 body=104 status=ok
// SIG undefined FUN_145d64676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64676(void)

{
  DAT_14cb6fee0 = 0;
  if (DAT_14cb6fee4 != 0) {
    FUN_144727cd0(&DAT_14cb6fed8,0);
  }
  _DAT_14cb6ff08 = 0xffffffff;
  DAT_14cb6ff00 = 0;
  if (DAT_14cb6ff04 < 0x81) {
    return;
  }
  DAT_14cb6ff04 = 0x80;
  FUN_1446efbd8(&DAT_14cb6fee8,0);
  return;
}



// FUNCTION 145d646de FUN_145d646de body=54 status=ok
// SIG undefined FUN_145d646de(void)

void FUN_145d646de(void)

{
  FUN_145d64714();
  if (DAT_14cb70290 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb70270 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64714 FUN_145d64714 body=104 status=ok
// SIG undefined FUN_145d64714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64714(void)

{
  DAT_14cb70278 = 0;
  if (DAT_14cb7027c != 0) {
    FUN_144727cd0(&DAT_14cb70270,0);
  }
  _DAT_14cb702a0 = 0xffffffff;
  DAT_14cb70298 = 0;
  if (DAT_14cb7029c < 0x81) {
    return;
  }
  DAT_14cb7029c = 0x80;
  FUN_1446efbd8(&DAT_14cb70280,0);
  return;
}



// FUNCTION 145d6477c FUN_145d6477c body=54 status=ok
// SIG undefined FUN_145d6477c(void)

void FUN_145d6477c(void)

{
  FUN_145d647b2();
  if (DAT_14cb703e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb703c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d647b2 FUN_145d647b2 body=104 status=ok
// SIG undefined FUN_145d647b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d647b2(void)

{
  DAT_14cb703d0 = 0;
  if (DAT_14cb703d4 != 0) {
    FUN_144727cd0(&DAT_14cb703c8,0);
  }
  _DAT_14cb703f8 = 0xffffffff;
  DAT_14cb703f0 = 0;
  if (DAT_14cb703f4 < 0x81) {
    return;
  }
  DAT_14cb703f4 = 0x80;
  FUN_1446efbd8(&DAT_14cb703d8,0);
  return;
}



// FUNCTION 145d6481a FUN_145d6481a body=54 status=ok
// SIG undefined FUN_145d6481a(void)

void FUN_145d6481a(void)

{
  FUN_145d64850();
  if (DAT_14cb704f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb704d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64850 FUN_145d64850 body=104 status=ok
// SIG undefined FUN_145d64850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64850(void)

{
  DAT_14cb704e0 = 0;
  if (DAT_14cb704e4 != 0) {
    FUN_144727cd0(&DAT_14cb704d8,0);
  }
  _DAT_14cb70508 = 0xffffffff;
  DAT_14cb70500 = 0;
  if (DAT_14cb70504 < 0x81) {
    return;
  }
  DAT_14cb70504 = 0x80;
  FUN_1446efbd8(&DAT_14cb704e8,0);
  return;
}



// FUNCTION 145d648b8 FUN_145d648b8 body=54 status=ok
// SIG undefined FUN_145d648b8(void)

void FUN_145d648b8(void)

{
  FUN_145d648ee();
  if (DAT_14cb70680 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb70660 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d648ee FUN_145d648ee body=104 status=ok
// SIG undefined FUN_145d648ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d648ee(void)

{
  DAT_14cb70668 = 0;
  if (DAT_14cb7066c != 0) {
    FUN_144727cd0(&DAT_14cb70660,0);
  }
  _DAT_14cb70690 = 0xffffffff;
  DAT_14cb70688 = 0;
  if (DAT_14cb7068c < 0x81) {
    return;
  }
  DAT_14cb7068c = 0x80;
  FUN_1446efbd8(&DAT_14cb70670,0);
  return;
}



// FUNCTION 145d64956 FUN_145d64956 body=54 status=ok
// SIG undefined FUN_145d64956(void)

void FUN_145d64956(void)

{
  FUN_145d6498c();
  if (DAT_14cb70a58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb70a38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d6498c FUN_145d6498c body=104 status=ok
// SIG undefined FUN_145d6498c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d6498c(void)

{
  DAT_14cb70a40 = 0;
  if (DAT_14cb70a44 != 0) {
    FUN_144727cd0(&DAT_14cb70a38,0);
  }
  _DAT_14cb70a68 = 0xffffffff;
  DAT_14cb70a60 = 0;
  if (DAT_14cb70a64 < 0x81) {
    return;
  }
  DAT_14cb70a64 = 0x80;
  FUN_1446efbd8(&DAT_14cb70a48,0);
  return;
}



// FUNCTION 145d649f4 FUN_145d649f4 body=54 status=ok
// SIG undefined FUN_145d649f4(void)

void FUN_145d649f4(void)

{
  FUN_145d64a2a();
  if (DAT_14cb72310 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb722f0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64a2a FUN_145d64a2a body=104 status=ok
// SIG undefined FUN_145d64a2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64a2a(void)

{
  DAT_14cb722f8 = 0;
  if (DAT_14cb722fc != 0) {
    FUN_144727cd0(&DAT_14cb722f0,0);
  }
  _DAT_14cb72320 = 0xffffffff;
  DAT_14cb72318 = 0;
  if (DAT_14cb7231c < 0x81) {
    return;
  }
  DAT_14cb7231c = 0x80;
  FUN_1446efbd8(&DAT_14cb72300,0);
  return;
}



// FUNCTION 145d64a92 FUN_145d64a92 body=54 status=ok
// SIG undefined FUN_145d64a92(void)

void FUN_145d64a92(void)

{
  FUN_145d64ac8();
  if (DAT_14cb72498 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72478 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64ac8 FUN_145d64ac8 body=104 status=ok
// SIG undefined FUN_145d64ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64ac8(void)

{
  DAT_14cb72480 = 0;
  if (DAT_14cb72484 != 0) {
    FUN_144727cd0(&DAT_14cb72478,0);
  }
  _DAT_14cb724a8 = 0xffffffff;
  DAT_14cb724a0 = 0;
  if (DAT_14cb724a4 < 0x81) {
    return;
  }
  DAT_14cb724a4 = 0x80;
  FUN_1446efbd8(&DAT_14cb72488,0);
  return;
}



// FUNCTION 145d64b30 FUN_145d64b30 body=54 status=ok
// SIG undefined FUN_145d64b30(void)

void FUN_145d64b30(void)

{
  FUN_145d64b66();
  if (DAT_14cb72660 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72640 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64b66 FUN_145d64b66 body=104 status=ok
// SIG undefined FUN_145d64b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64b66(void)

{
  DAT_14cb72648 = 0;
  if (DAT_14cb7264c != 0) {
    FUN_144727cd0(&DAT_14cb72640,0);
  }
  _DAT_14cb72670 = 0xffffffff;
  DAT_14cb72668 = 0;
  if (DAT_14cb7266c < 0x81) {
    return;
  }
  DAT_14cb7266c = 0x80;
  FUN_1446efbd8(&DAT_14cb72650,0);
  return;
}



// FUNCTION 145d64bce FUN_145d64bce body=54 status=ok
// SIG undefined FUN_145d64bce(void)

void FUN_145d64bce(void)

{
  FUN_145d64c04();
  if (DAT_14cb72778 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72758 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64c04 FUN_145d64c04 body=104 status=ok
// SIG undefined FUN_145d64c04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64c04(void)

{
  DAT_14cb72760 = 0;
  if (DAT_14cb72764 != 0) {
    FUN_144727cd0(&DAT_14cb72758,0);
  }
  _DAT_14cb72788 = 0xffffffff;
  DAT_14cb72780 = 0;
  if (DAT_14cb72784 < 0x81) {
    return;
  }
  DAT_14cb72784 = 0x80;
  FUN_1446efbd8(&DAT_14cb72768,0);
  return;
}



// FUNCTION 145d64c6c FUN_145d64c6c body=54 status=ok
// SIG undefined FUN_145d64c6c(void)

void FUN_145d64c6c(void)

{
  FUN_145d64ca2();
  if (DAT_14cb72888 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72868 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64ca2 FUN_145d64ca2 body=104 status=ok
// SIG undefined FUN_145d64ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64ca2(void)

{
  DAT_14cb72870 = 0;
  if (DAT_14cb72874 != 0) {
    FUN_144727cd0(&DAT_14cb72868,0);
  }
  _DAT_14cb72898 = 0xffffffff;
  DAT_14cb72890 = 0;
  if (DAT_14cb72894 < 0x81) {
    return;
  }
  DAT_14cb72894 = 0x80;
  FUN_1446efbd8(&DAT_14cb72878,0);
  return;
}



// FUNCTION 145d64d0a FUN_145d64d0a body=54 status=ok
// SIG undefined FUN_145d64d0a(void)

void FUN_145d64d0a(void)

{
  FUN_145d64d40();
  if (DAT_14cb729a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72988 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64d40 FUN_145d64d40 body=104 status=ok
// SIG undefined FUN_145d64d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64d40(void)

{
  DAT_14cb72990 = 0;
  if (DAT_14cb72994 != 0) {
    FUN_144727cd0(&DAT_14cb72988,0);
  }
  _DAT_14cb729b8 = 0xffffffff;
  DAT_14cb729b0 = 0;
  if (DAT_14cb729b4 < 0x81) {
    return;
  }
  DAT_14cb729b4 = 0x80;
  FUN_1446efbd8(&DAT_14cb72998,0);
  return;
}



// FUNCTION 145d64da8 FUN_145d64da8 body=54 status=ok
// SIG undefined FUN_145d64da8(void)

void FUN_145d64da8(void)

{
  FUN_145d64dde();
  if (DAT_14cb72b60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72b40 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64dde FUN_145d64dde body=104 status=ok
// SIG undefined FUN_145d64dde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64dde(void)

{
  DAT_14cb72b48 = 0;
  if (DAT_14cb72b4c != 0) {
    FUN_144727cd0(&DAT_14cb72b40,0);
  }
  _DAT_14cb72b70 = 0xffffffff;
  DAT_14cb72b68 = 0;
  if (DAT_14cb72b6c < 0x81) {
    return;
  }
  DAT_14cb72b6c = 0x80;
  FUN_1446efbd8(&DAT_14cb72b50,0);
  return;
}



// FUNCTION 145d64e46 FUN_145d64e46 body=54 status=ok
// SIG undefined FUN_145d64e46(void)

void FUN_145d64e46(void)

{
  FUN_145d64e7c();
  if (DAT_14cb72c58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72c38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64e7c FUN_145d64e7c body=104 status=ok
// SIG undefined FUN_145d64e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64e7c(void)

{
  DAT_14cb72c40 = 0;
  if (DAT_14cb72c44 != 0) {
    FUN_144727cd0(&DAT_14cb72c38,0);
  }
  _DAT_14cb72c68 = 0xffffffff;
  DAT_14cb72c60 = 0;
  if (DAT_14cb72c64 < 0x81) {
    return;
  }
  DAT_14cb72c64 = 0x80;
  FUN_1446efbd8(&DAT_14cb72c48,0);
  return;
}



// FUNCTION 145d64ee4 FUN_145d64ee4 body=54 status=ok
// SIG undefined FUN_145d64ee4(void)

void FUN_145d64ee4(void)

{
  FUN_145d64f1a();
  if (DAT_14cb72d48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72d28 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64f1a FUN_145d64f1a body=104 status=ok
// SIG undefined FUN_145d64f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64f1a(void)

{
  DAT_14cb72d30 = 0;
  if (DAT_14cb72d34 != 0) {
    FUN_144727cd0(&DAT_14cb72d28,0);
  }
  _DAT_14cb72d58 = 0xffffffff;
  DAT_14cb72d50 = 0;
  if (DAT_14cb72d54 < 0x81) {
    return;
  }
  DAT_14cb72d54 = 0x80;
  FUN_1446efbd8(&DAT_14cb72d38,0);
  return;
}



// FUNCTION 145d64f82 FUN_145d64f82 body=54 status=ok
// SIG undefined FUN_145d64f82(void)

void FUN_145d64f82(void)

{
  FUN_145d64fb8();
  if (DAT_14cb72e38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72e18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d64fb8 FUN_145d64fb8 body=104 status=ok
// SIG undefined FUN_145d64fb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d64fb8(void)

{
  DAT_14cb72e20 = 0;
  if (DAT_14cb72e24 != 0) {
    FUN_144727cd0(&DAT_14cb72e18,0);
  }
  _DAT_14cb72e48 = 0xffffffff;
  DAT_14cb72e40 = 0;
  if (DAT_14cb72e44 < 0x81) {
    return;
  }
  DAT_14cb72e44 = 0x80;
  FUN_1446efbd8(&DAT_14cb72e28,0);
  return;
}



// FUNCTION 145d65020 FUN_145d65020 body=54 status=ok
// SIG undefined FUN_145d65020(void)

void FUN_145d65020(void)

{
  FUN_145d65056();
  if (DAT_14cb72f28 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72f08 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d65056 FUN_145d65056 body=104 status=ok
// SIG undefined FUN_145d65056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d65056(void)

{
  DAT_14cb72f10 = 0;
  if (DAT_14cb72f14 != 0) {
    FUN_144727cd0(&DAT_14cb72f08,0);
  }
  _DAT_14cb72f38 = 0xffffffff;
  DAT_14cb72f30 = 0;
  if (DAT_14cb72f34 < 0x81) {
    return;
  }
  DAT_14cb72f34 = 0x80;
  FUN_1446efbd8(&DAT_14cb72f18,0);
  return;
}



// FUNCTION 145d650be FUN_145d650be body=54 status=ok
// SIG undefined FUN_145d650be(void)

void FUN_145d650be(void)

{
  FUN_145d650f4();
  if (DAT_14cb73018 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72ff8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d650f4 FUN_145d650f4 body=104 status=ok
// SIG undefined FUN_145d650f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d650f4(void)

{
  DAT_14cb73000 = 0;
  if (DAT_14cb73004 != 0) {
    FUN_144727cd0(&DAT_14cb72ff8,0);
  }
  _DAT_14cb73028 = 0xffffffff;
  DAT_14cb73020 = 0;
  if (DAT_14cb73024 < 0x81) {
    return;
  }
  DAT_14cb73024 = 0x80;
  FUN_1446efbd8(&DAT_14cb73008,0);
  return;
}


