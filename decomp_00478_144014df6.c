// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144014df6 FUN_144014df6 body=29 status=ok
// SIG undefined FUN_144014df6(void)

undefined8 FUN_144014df6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014e22 FUN_144014e22 body=59 status=ok
// SIG undefined FUN_144014e22(void)

void FUN_144014e22(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b625530;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 144014e5e FUN_144014e5e body=43 status=ok
// SIG undefined FUN_144014e5e(void)

void FUN_144014e5e(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b625530;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 144014eae FUN_144014eae body=76 status=ok
// SIG undefined FUN_144014eae(void)

undefined8 FUN_144014eae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 144014f22 FUN_144014f22 body=59 status=ok
// SIG undefined FUN_144014f22(void)

undefined8 FUN_144014f22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144014f6e FUN_144014f6e body=40 status=ok
// SIG undefined FUN_144014f6e(void)

void FUN_144014f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 144014fe4 FUN_144014fe4 body=38 status=ok
// SIG undefined FUN_144014fe4(void)

undefined8 FUN_144014fe4(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401500a FUN_14401500a body=55 status=ok
// SIG undefined FUN_14401500a(void)

void FUN_14401500a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1d78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1d78 = FUN_140002ddd(FUN_144012bbb,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker");
  }
  return;
}



// FUNCTION 144015042 FUN_144015042 body=29 status=ok
// SIG undefined FUN_144015042(void)

undefined8 FUN_144015042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440150a2 FUN_1440150a2 body=63 status=ok
// SIG undefined FUN_1440150a2(void)

undefined1 FUN_1440150a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 14401510a FUN_14401510a body=59 status=ok
// SIG undefined FUN_14401510a(void)

undefined8 FUN_14401510a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144015156 FUN_144015156 body=40 status=ok
// SIG undefined FUN_144015156(void)

void FUN_144015156(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 1440151ce FUN_1440151ce body=29 status=ok
// SIG undefined FUN_1440151ce(void)

undefined8 FUN_1440151ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440151fa FUN_1440151fa body=69 status=ok
// SIG undefined FUN_1440151fa(void)

void FUN_1440151fa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b626f90;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 144015240 FUN_144015240 body=53 status=ok
// SIG undefined FUN_144015240(void)

void FUN_144015240(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b626f90;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 14401529a FUN_14401529a body=164 status=ok
// SIG undefined FUN_14401529a(void)

undefined8 FUN_14401529a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    uVar3 = *(undefined8 *)(param_3 + 0x170);
    lVar4 = *(longlong *)(param_3 + 0x178);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x178);
    *(undefined8 *)(param_2 + 0x170) = uVar3;
    *(longlong *)(param_2 + 0x178) = lVar4;
    if (plVar5 != (longlong *)0x0) {
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
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  return 1;
}



// FUNCTION 144015366 FUN_144015366 body=59 status=ok
// SIG undefined FUN_144015366(void)

undefined8 FUN_144015366(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440153b2 FUN_1440153b2 body=93 status=ok
// SIG undefined FUN_1440153b2(void)

void FUN_1440153b2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *param_2 = &PTR_FUN_14b626f90;
    plVar3 = (longlong *)param_2[0x2f];
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
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14401545e FUN_14401545e body=94 status=ok
// SIG undefined FUN_14401545e(void)

undefined8 * FUN_14401545e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b626f90;
  plVar3 = (longlong *)param_1[0x2f];
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
  FUN_145a38fa8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440154bc FUN_1440154bc body=55 status=ok
// SIG undefined FUN_1440154bc(void)

void FUN_1440154bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1da8 =
         FUN_140002ddd(FUN_144012ce7,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker_VPN");
  }
  return;
}



// FUNCTION 1440154f4 FUN_1440154f4 body=29 status=ok
// SIG undefined FUN_1440154f4(void)

undefined8 FUN_1440154f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144015520 FUN_144015520 body=116 status=ok
// SIG undefined FUN_144015520(void)

void FUN_144015520(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b6259f0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 144015594 FUN_144015594 body=100 status=ok
// SIG undefined FUN_144015594(void)

void FUN_144015594(undefined8 param_1,undefined8 *param_2)

{
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b6259f0;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 14401561c FUN_14401561c body=85 status=ok
// SIG undefined FUN_14401561c(void)

undefined1 FUN_14401561c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_148ba84c4(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 14401569a FUN_14401569a body=59 status=ok
// SIG undefined FUN_14401569a(void)

undefined8 FUN_14401569a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440156e6 FUN_1440156e6 body=62 status=ok
// SIG undefined FUN_1440156e6(void)

void FUN_1440156e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14b6259f0;
    FUN_14588898c(param_2 + 0x32);
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 144015772 FUN_144015772 body=63 status=ok
// SIG undefined FUN_144015772(void)

undefined8 * FUN_144015772(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6259f0;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440157b2 FUN_1440157b2 body=55 status=ok
// SIG undefined FUN_1440157b2(void)

void FUN_1440157b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1dc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1dc0 =
         FUN_140002ddd(FUN_144012d7d,uVar1,L"GbxSkillComponentData_ActionSkill_CorpoHacker_VPN");
  }
  return;
}



// FUNCTION 1440157ea FUN_1440157ea body=29 status=ok
// SIG undefined FUN_1440157ea(void)

undefined8 FUN_1440157ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144015816 FUN_144015816 body=107 status=ok
// SIG undefined FUN_144015816(void)

void FUN_144015816(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1c8);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b627030;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x199) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 3;
  return;
}



// FUNCTION 144015882 FUN_144015882 body=91 status=ok
// SIG undefined FUN_144015882(void)

void FUN_144015882(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b627030;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x199) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 3;
  return;
}



// FUNCTION 144015902 FUN_144015902 body=330 status=ok
// SIG undefined FUN_144015902(void)

undefined8 FUN_144015902(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x1b0);
    do {
      FUN_148ba78fa(puVar7 + -0x36,param_3);
      puVar7[-9] = *(undefined8 *)(param_3 + 0x168);
      FUN_140311eb6(puVar7 + -8,param_3 + 0x170);
      FUN_140311eb6(puVar7 + -6,(undefined8 *)(param_3 + 0x180));
      uVar4 = *(undefined8 *)(param_3 + 400);
      lVar5 = *(longlong *)(param_3 + 0x198);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar7[-3];
      puVar7[-4] = uVar4;
      puVar7[-3] = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      *(undefined1 *)(puVar7 + -1) = *(undefined1 *)(param_3 + 0x1a8);
      puVar7[-2] = *(undefined8 *)(param_3 + 0x1a0);
      if (puVar7 + -6 != (undefined8 *)(param_3 + 0x180)) {
        iVar3 = *(int *)(param_3 + 0x1b8);
        _Src = *(void **)(param_3 + 0x1b0);
        *(int *)(puVar7 + 1) = iVar3;
        if (iVar3 == 0 && *(int *)((longlong)puVar7 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          FUN_144015c6c(puVar7,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar7,_Src,(longlong)iVar3 * 0xc);
          }
        }
      }
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_3 + 0x1c0);
      puVar7 = puVar7 + 0x39;
      param_3 = param_3 + 0x1c8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144015a74 FUN_144015a74 body=59 status=ok
// SIG undefined FUN_144015a74(void)

undefined8 FUN_144015a74(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144015ac0 FUN_144015ac0 body=147 status=ok
// SIG undefined FUN_144015ac0(void)

void FUN_144015ac0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *param_2 = &PTR_FUN_14b627030;
    if (param_2[0x36] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_2[0x33];
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
    if (param_2[0x30] != 0) {
      FUN_1400020a8();
    }
    if (param_2[0x2e] != 0) {
      FUN_1400020a8();
    }
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x39) = 0;
  }
  return;
}



// FUNCTION 144015ba2 FUN_144015ba2 body=145 status=ok
// SIG undefined FUN_144015ba2(void)

undefined8 * FUN_144015ba2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b627030;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x33];
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
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a38fa8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144015c34 FUN_144015c34 body=55 status=ok
// SIG undefined FUN_144015c34(void)

void FUN_144015c34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1dd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1dd8 =
         FUN_140002ddd(FUN_144012e13,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 144015c6c FUN_144015c6c body=327 status=ok
// SIG undefined FUN_144015c6c(void)

void FUN_144015c6c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144015cda;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_144015cda:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 144015db4 FUN_144015db4 body=29 status=ok
// SIG undefined FUN_144015db4(void)

undefined8 FUN_144015db4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144015de0 FUN_144015de0 body=58 status=ok
// SIG undefined FUN_144015de0(void)

void FUN_144015de0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x198);
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b625cf0;
  *(undefined4 *)(param_2 + 0x32) = 3;
  return;
}



// FUNCTION 144015e1a FUN_144015e1a body=42 status=ok
// SIG undefined FUN_144015e1a(void)

void FUN_144015e1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b625cf0;
  *(undefined4 *)(param_2 + 0x32) = 3;
  return;
}



// FUNCTION 144015e68 FUN_144015e68 body=74 status=ok
// SIG undefined FUN_144015e68(void)

undefined8 FUN_144015e68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 400);
    param_2 = param_2 + 0x198;
    param_3 = param_3 + 0x198;
  }
  return 1;
}



// FUNCTION 144015eda FUN_144015eda body=59 status=ok
// SIG undefined FUN_144015eda(void)

undefined8 FUN_144015eda(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144015f26 FUN_144015f26 body=40 status=ok
// SIG undefined FUN_144015f26(void)

void FUN_144015f26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 144015f9c FUN_144015f9c body=38 status=ok
// SIG undefined FUN_144015f9c(void)

undefined8 FUN_144015f9c(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144015fc2 FUN_144015fc2 body=55 status=ok
// SIG undefined FUN_144015fc2(void)

void FUN_144015fc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1df0 =
         FUN_140002ddd(FUN_144012ea9,uVar1,
                       L"GbxSkillComponentData_ActionSkill_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 144015ffa FUN_144015ffa body=29 status=ok
// SIG undefined FUN_144015ffa(void)

undefined8 FUN_144015ffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144016026 FUN_144016026 body=89 status=ok
// SIG undefined FUN_144016026(void)

void FUN_144016026(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b6270d0;
  memset(param_2 + 0x2e,0,0xaa);
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3f000000;
  return;
}



// FUNCTION 144016080 FUN_144016080 body=73 status=ok
// SIG undefined FUN_144016080(void)

void FUN_144016080(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b6270d0;
  memset(param_2 + 0x2e,0,0xaa);
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3f000000;
  return;
}



// FUNCTION 1440160ee FUN_1440160ee body=566 status=ok
// SIG undefined FUN_1440160ee(void)

undefined8 FUN_1440160ee(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    puVar10 = (undefined8 *)(param_2 + 0x170);
    do {
      FUN_148ba78fa(puVar10 + -0x2e,param_3);
      puVar10[-1] = param_3[0x2d];
      if (puVar10 + -0x2e != param_3) {
        iVar3 = *(int *)(param_3 + 0x2f);
        _Src = (void *)param_3[0x2e];
        *(int *)(puVar10 + 1) = iVar3;
        if (iVar3 == 0 && *(int *)((longlong)puVar10 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        }
        else {
          FUN_144016524(puVar10,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar10,_Src,(longlong)iVar3 << 5);
          }
        }
        FUN_14401650a(puVar10[2],*(undefined4 *)(puVar10 + 3));
        iVar3 = *(int *)(param_3 + 0x31);
        uVar9 = param_3[0x30];
        *(int *)(puVar10 + 3) = iVar3;
        if (iVar3 == 0 && *(int *)((longlong)puVar10 + 0x1c) == 0) {
          *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
        }
        else {
          FUN_1440165f8(puVar10 + 2,iVar3);
          FUN_14401673f(puVar10[2],uVar9,iVar3);
        }
      }
      puVar10[4] = param_3[0x32];
      FUN_140311eb6(puVar10 + 5,param_3 + 0x33);
      FUN_140311eb6(puVar10 + 7,param_3 + 0x35);
      lVar4 = param_3[0x37];
      if (puVar10[9] != lVar4) {
        puVar10[0xb] = 0;
      }
      puVar10[9] = lVar4;
      if (puVar10[10] != param_3[0x38]) {
        puVar10[0xb] = 0;
      }
      uVar9 = FUN_14477b664();
      uVar9 = FUN_14477b664(uVar9);
      puVar10[10] = uVar9;
      puVar10[0xb] = param_3[0x39];
      lVar4 = param_3[0x3a];
      if (puVar10[0xc] != lVar4) {
        puVar10[0xe] = 0;
      }
      puVar10[0xc] = lVar4;
      if (puVar10[0xd] != param_3[0x3b]) {
        puVar10[0xe] = 0;
      }
      uVar9 = FUN_14477b664();
      uVar9 = FUN_14477b664(uVar9);
      puVar10[0xd] = uVar9;
      puVar10[0xe] = param_3[0x3c];
      FUN_14872dd1e(puVar10 + 0xf,param_3 + 0x3d);
      uVar9 = param_3[0x40];
      lVar4 = param_3[0x41];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)puVar10[0x13];
      puVar10[0x12] = uVar9;
      puVar10[0x13] = lVar4;
      if (plVar5 != (longlong *)0x0) {
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
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x214);
      uVar7 = *(undefined4 *)(param_3 + 0x43);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x21c);
      *(undefined4 *)(puVar10 + 0x14) = *(undefined4 *)(param_3 + 0x42);
      *(undefined4 *)((longlong)puVar10 + 0xa4) = uVar6;
      *(undefined4 *)(puVar10 + 0x15) = uVar7;
      *(undefined4 *)((longlong)puVar10 + 0xac) = uVar8;
      puVar10 = puVar10 + 0x44;
      param_3 = param_3 + 0x44;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14401634c FUN_14401634c body=59 status=ok
// SIG undefined FUN_14401634c(void)

undefined8 FUN_14401634c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144016398 FUN_144016398 body=38 status=ok
// SIG undefined FUN_144016398(void)

void FUN_144016398(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_14401646a(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14401640c FUN_14401640c body=38 status=ok
// SIG undefined FUN_14401640c(void)

undefined8 FUN_14401640c(undefined8 param_1,int param_2)

{
  FUN_14401646a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144016432 FUN_144016432 body=55 status=ok
// SIG undefined FUN_144016432(void)

void FUN_144016432(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e08 =
         FUN_140002ddd(FUN_144012f3f,uVar1,
                       L"GbxSkillComponent_ActionSkill_CorpoHacker_ViralManifestation");
  }
  return;
}



// FUNCTION 14401646a FUN_14401646a body=160 status=ok
// SIG undefined FUN_14401646a(void)

void FUN_14401646a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6270d0;
  plVar3 = (longlong *)param_1[0x41];
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
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_14401650a(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 14401650a FUN_14401650a body=25 status=ok
// SIG undefined FUN_14401650a(void)

void FUN_14401650a(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x10);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144016524 FUN_144016524 body=212 status=ok
// SIG undefined FUN_144016524(void)

void FUN_144016524(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440165f8 FUN_1440165f8 body=327 status=ok
// SIG undefined FUN_1440165f8(void)

void FUN_1440165f8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144016666;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_144016666:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14401673f FUN_14401673f body=63 status=ok
// SIG undefined FUN_14401673f(void)

void FUN_14401673f(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      cVar1 = *(char *)(param_2 + 0x10 + lVar2);
      *(char *)(param_1 + 0x10 + lVar2) = cVar1;
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_1 + 0xc + lVar2) = *(undefined4 *)(param_2 + 0xc + lVar2);
      }
      lVar2 = lVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144016780 FUN_144016780 body=29 status=ok
// SIG undefined FUN_144016780(void)

undefined8 FUN_144016780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440167ac FUN_1440167ac body=100 status=ok
// SIG undefined FUN_1440167ac(void)

void FUN_1440167ac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x200);
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b625ff0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 144016810 FUN_144016810 body=84 status=ok
// SIG undefined FUN_144016810(void)

void FUN_144016810(undefined8 param_1,undefined8 *param_2)

{
  FUN_144212d5c(param_2);
  *param_2 = &PTR_FUN_14b625ff0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 144016888 FUN_144016888 body=414 status=ok
// SIG undefined FUN_144016888(void)

undefined8 FUN_144016888(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    lVar2 = *(longlong *)(param_3 + 400);
    if (*(longlong *)(param_2 + 400) != lVar2) {
      *(undefined8 *)(param_2 + 0x1a0) = 0;
    }
    *(longlong *)(param_2 + 400) = lVar2;
    if (*(longlong *)(param_2 + 0x198) != *(longlong *)(param_3 + 0x198)) {
      *(undefined8 *)(param_2 + 0x1a0) = 0;
    }
    uVar6 = FUN_14477b664();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_2 + 0x198) = uVar6;
    *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_3 + 0x1a0);
    lVar2 = *(longlong *)(param_3 + 0x1a8);
    if (*(longlong *)(param_2 + 0x1a8) != lVar2) {
      *(undefined8 *)(param_2 + 0x1b8) = 0;
    }
    *(longlong *)(param_2 + 0x1a8) = lVar2;
    if (*(longlong *)(param_2 + 0x1b0) != *(longlong *)(param_3 + 0x1b0)) {
      *(undefined8 *)(param_2 + 0x1b8) = 0;
    }
    uVar6 = FUN_14477b664();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_2 + 0x1b0) = uVar6;
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
    FUN_14872dd1e(param_2 + 0x1c0,param_3 + 0x1c0);
    *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_3 + 0x1d8);
    uVar3 = *(undefined4 *)(param_3 + 0x1e4);
    uVar4 = *(undefined4 *)(param_3 + 0x1e8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ec);
    *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_3 + 0x1e0);
    *(undefined4 *)(param_2 + 0x1e4) = uVar3;
    *(undefined4 *)(param_2 + 0x1e8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ec) = uVar5;
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 0x1f8);
      _Src = *(void **)(param_3 + 0x1f0);
      *(int *)(param_2 + 0x1f8) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x1fc) == 0) {
        *(undefined4 *)(param_2 + 0x1fc) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0x1f0),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x1f0),_Src,(longlong)iVar1 * 2);
        }
      }
    }
    param_2 = param_2 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 1;
}



// FUNCTION 144016a4e FUN_144016a4e body=59 status=ok
// SIG undefined FUN_144016a4e(void)

undefined8 FUN_144016a4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144016a9a FUN_144016a9a body=67 status=ok
// SIG undefined FUN_144016a9a(void)

void FUN_144016a9a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14b625ff0;
    if (param_2[0x3e] != 0) {
      FUN_1400020a8();
    }
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 144016b2c FUN_144016b2c body=68 status=ok
// SIG undefined FUN_144016b2c(void)

undefined8 * FUN_144016b2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b625ff0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144016b70 FUN_144016b70 body=55 status=ok
// SIG undefined FUN_144016b70(void)

void FUN_144016b70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e20 =
         FUN_140002ddd(FUN_144012fd5,uVar1,
                       L"GbxSkillComponentData_ActionSkill_CorpoHacker_ViralManifestation");
  }
  return;
}



// FUNCTION 144016c18 FUN_144016c18 body=1825 status=ok
// SIG undefined FUN_144016c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144016c18(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cba18f8 = 0x47efffffe0000000;
  _DAT_14cba1900 = 0x47efffffe0000000;
  _DAT_14cba1908 = 0x47efffffe0000000;
  _DAT_14cba1910 = 0x47efffffe0000000;
  _DAT_14cba1918 = 0x47efffffe0000000;
  _DAT_14cba1920 = 0x47efffffe0000000;
  _DAT_14cba1928 = 0x47efffffe0000000;
  _DAT_14cba1930 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61bf40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61c120);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61c390);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61c5c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61c7f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61c9e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61cd40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61cfa0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1ab8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61d2a0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba1ad8);
  if (cVar1 == '\0') {
    _DAT_14cba1ad8 = 0;
    uRam000000014cba1ae0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cba1aec = 0;
  FUN_14052b5e0(&DAT_14cba1ae8,"PlayerAwareness",0);
  _DAT_14cba1af8 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b00 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b08 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b10 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b18 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b20 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b28 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b30 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b38 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b40 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b48 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b50 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b58 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b60 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b68 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b70 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b78 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b80 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b88 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1b90 = (ulonglong)uVar2;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b61d6c0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b61d910;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61d930);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61da90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61dba0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61dd50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b61deb0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b61fe80;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b61ff40,1,&PTR_FUN_14b61fea0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6212a0,1,&PTR_FUN_14b621160);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b622020,1,&PTR_FUN_14b621ee0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144017380 FUN_144017380 body=55 status=ok
// SIG undefined FUN_144017380(void)

void FUN_144017380(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2140 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2140 = FUN_14171c317(FUN_1465b2b40,uVar1,L"EPetSpawnType");
  }
  return;
}



// FUNCTION 1440173b7 FUN_1440173b7 body=55 status=ok
// SIG undefined FUN_1440173b7(void)

void FUN_1440173b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2158 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2158 = FUN_14171c317(FUN_1465b2b71,uVar1,L"EPetUnavilableType");
  }
  return;
}



// FUNCTION 1440173ee FUN_1440173ee body=55 status=ok
// SIG undefined FUN_1440173ee(void)

void FUN_1440173ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2170 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2170 = FUN_14171c317(FUN_1465b2ba0,uVar1,L"EPetEventType");
  }
  return;
}



// FUNCTION 144017425 FUN_144017425 body=55 status=ok
// SIG undefined FUN_144017425(void)

void FUN_144017425(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba23e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba23e0 = FUN_14171c317(FUN_1465b3708,uVar1,L"EExoMarksValueTarget");
  }
  return;
}



// FUNCTION 144017464 FUN_144017464 body=48 status=ok
// SIG undefined FUN_144017464(void)

longlong FUN_144017464(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017494 FUN_144017494 body=48 status=ok
// SIG undefined FUN_144017494(void)

longlong FUN_144017494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440174cc FUN_1440174cc body=48 status=ok
// SIG undefined FUN_1440174cc(void)

longlong FUN_1440174cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017514 FUN_144017514 body=48 status=ok
// SIG undefined FUN_144017514(void)

longlong FUN_144017514(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401759c FUN_14401759c body=48 status=ok
// SIG undefined FUN_14401759c(void)

longlong FUN_14401759c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440175d4 FUN_1440175d4 body=48 status=ok
// SIG undefined FUN_1440175d4(void)

longlong FUN_1440175d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017614 FUN_144017614 body=48 status=ok
// SIG undefined FUN_144017614(void)

longlong FUN_144017614(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401764c FUN_14401764c body=48 status=ok
// SIG undefined FUN_14401764c(void)

longlong FUN_14401764c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017684 FUN_144017684 body=48 status=ok
// SIG undefined FUN_144017684(void)

longlong FUN_144017684(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440176bc FUN_1440176bc body=48 status=ok
// SIG undefined FUN_1440176bc(void)

longlong FUN_1440176bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440176f4 FUN_1440176f4 body=48 status=ok
// SIG undefined FUN_1440176f4(void)

longlong FUN_1440176f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401772c FUN_14401772c body=48 status=ok
// SIG undefined FUN_14401772c(void)

longlong FUN_14401772c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017764 FUN_144017764 body=48 status=ok
// SIG undefined FUN_144017764(void)

longlong FUN_144017764(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401779c FUN_14401779c body=48 status=ok
// SIG undefined FUN_14401779c(void)

longlong FUN_14401779c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440177d4 FUN_1440177d4 body=48 status=ok
// SIG undefined FUN_1440177d4(void)

longlong FUN_1440177d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401780c FUN_14401780c body=48 status=ok
// SIG undefined FUN_14401780c(void)

longlong FUN_14401780c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017844 FUN_144017844 body=48 status=ok
// SIG undefined FUN_144017844(void)

longlong FUN_144017844(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401787c FUN_14401787c body=48 status=ok
// SIG undefined FUN_14401787c(void)

longlong FUN_14401787c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440178b4 FUN_1440178b4 body=48 status=ok
// SIG undefined FUN_1440178b4(void)

longlong FUN_1440178b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440178ec FUN_1440178ec body=48 status=ok
// SIG undefined FUN_1440178ec(void)

longlong FUN_1440178ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017924 FUN_144017924 body=48 status=ok
// SIG undefined FUN_144017924(void)

longlong FUN_144017924(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401795c FUN_14401795c body=48 status=ok
// SIG undefined FUN_14401795c(void)

longlong FUN_14401795c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017994 FUN_144017994 body=48 status=ok
// SIG undefined FUN_144017994(void)

longlong FUN_144017994(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440179cc FUN_1440179cc body=48 status=ok
// SIG undefined FUN_1440179cc(void)

longlong FUN_1440179cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017a04 FUN_144017a04 body=48 status=ok
// SIG undefined FUN_144017a04(void)

longlong FUN_144017a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a20;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017a3c FUN_144017a3c body=48 status=ok
// SIG undefined FUN_144017a3c(void)

longlong FUN_144017a3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a28;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017a84 FUN_144017a84 body=48 status=ok
// SIG undefined FUN_144017a84(void)

longlong FUN_144017a84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a30;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017ac4 FUN_144017ac4 body=48 status=ok
// SIG undefined FUN_144017ac4(void)

longlong FUN_144017ac4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a38;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017afc FUN_144017afc body=48 status=ok
// SIG undefined FUN_144017afc(void)

longlong FUN_144017afc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a40;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017b34 FUN_144017b34 body=48 status=ok
// SIG undefined FUN_144017b34(void)

longlong FUN_144017b34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a48;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017b94 FUN_144017b94 body=48 status=ok
// SIG undefined FUN_144017b94(void)

longlong FUN_144017b94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ac8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017bd4 FUN_144017bd4 body=48 status=ok
// SIG undefined FUN_144017bd4(void)

longlong FUN_144017bd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017c9e FUN_144017c9e body=48 status=ok
// SIG undefined FUN_144017c9e(void)

longlong FUN_144017c9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b68;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017cce FUN_144017cce body=48 status=ok
// SIG undefined FUN_144017cce(void)

longlong FUN_144017cce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b70;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017dd6 FUN_144017dd6 body=48 status=ok
// SIG undefined FUN_144017dd6(void)

longlong FUN_144017dd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017e0e FUN_144017e0e body=48 status=ok
// SIG undefined FUN_144017e0e(void)

longlong FUN_144017e0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017e8e FUN_144017e8e body=48 status=ok
// SIG undefined FUN_144017e8e(void)

longlong FUN_144017e8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017ebe FUN_144017ebe body=48 status=ok
// SIG undefined FUN_144017ebe(void)

longlong FUN_144017ebe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144017f3e FUN_144017f3e body=305 status=ok
// SIG undefined FUN_144017f3e(void)

void FUN_144017f3e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6325b0;
  param_1[0x2d] = &PTR_FUN_14b632650;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x49];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x47];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x45];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x43];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_148bad2c9(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_148bad06b(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 144018070 FUN_144018070 body=48 status=ok
// SIG undefined FUN_144018070(void)

longlong FUN_144018070(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_144017f3e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144018134 FUN_144018134 body=57 status=ok
// SIG undefined FUN_144018134(void)

void FUN_144018134(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2368 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2368 = FUN_140002ddd(FUN_1465b348b,uVar1,L"OakSkillCharacterDef_PhaseFamiliar");
  }
  return;
}



// FUNCTION 1440182c0 FUN_1440182c0 body=2098 status=ok
// SIG undefined FUN_1440182c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440182c0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1f40 = (ulonglong)uVar2;
  local_50 = "NotifyPhaseBlastReadied";
  local_48 = 0x17;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1f48 = (ulonglong)uVar2;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b627c80,1,&PTR_FUN_14b627c30);
  _DAT_14cba1fb0 = 0x47efffffe0000000;
  _DAT_14cba1fb8 = 0x47efffffe0000000;
  _DAT_14cba1fc0 = 0x47efffffe0000000;
  _DAT_14cba1fc8 = 0x47efffffe0000000;
  _DAT_14cba1fd0 = 0x47efffffe0000000;
  _DAT_14cba1fd8 = 0x47efffffe0000000;
  _DAT_14cba1fe0 = 0x47efffffe0000000;
  _DAT_14cba1fe8 = 0x47efffffe0000000;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1ff0 = (ulonglong)uVar2;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1ff8 = (ulonglong)uVar2;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2000 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba2008);
  if (cVar1 == '\0') {
    _DAT_14cba2008 = 0;
    uRam000000014cba2010 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba201c = 0;
  FUN_14052b5e0(&DAT_14cba2018,"PlayerAwareness",0);
  _DAT_14cba2028 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2030 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2038 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2040 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2048 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2050 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2058 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2060 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2068 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2070 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2078 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2080 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2088 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2090 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba2098 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba20a0 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba20a8 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba20b0 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba20b8 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba20c0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba20c8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14401733c);
  FUN_140056680(&DAT_14cba20d8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14401734d);
  FUN_140056680(&DAT_14cba20e8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14401735e);
  FUN_140056680(&DAT_14cba20f8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14401736f);
  FUN_1446f470e(&DAT_14cba2108,L"LIMB_GORED",1);
  _DAT_14cba2110 = 0x4072c00000000000;
  _DAT_14cba2118 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba2120,L"body",1);
  FUN_1446f470e(&DAT_14cba2128,L"title_card",1);
  FUN_1446f470e(&DAT_14cba2228,L"Init",1);
  FUN_1446f470e(&DAT_14cba2250,L"NotifyPendingModChange",1);
  FUN_1446f470e(&DAT_14cba2260,L"OnElementalAttunementChanged",1);
  FUN_1446f470e(&DAT_14cba2270,L"OnPetIsUnavailable",1);
  FUN_1446f470e(&DAT_14cba2280,L"PlayReveal",1);
  FUN_1446f470e(&DAT_14cba2290,L"SetBadassMode",1);
  FUN_1446f470e(&DAT_14cba22a0,L"TeleportToBadassMode",1);
  FUN_1446f470e(&DAT_14cba2310,L"ClientReveal",1);
  local_60 = &PTR_FUN_14b62d4c0;
  local_68 = 9;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b62d690,4,&PTR_FUN_14b62d520);
  local_60 = &PTR_FUN_14b62f8d0;
  uStack_58 = 1;
  local_68 = 10;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b62fa80,2,&PTR_FUN_14b62f8f0);
  FUN_1446f470e(&DAT_14cba2620,L"OnOwnerDied",1);
  FUN_1446f470e(&DAT_14cba2630,L"OnUnstableChanged",1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 9;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b631d60,4,&PTR_FUN_14b631bf0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144018af4 FUN_144018af4 body=55 status=ok
// SIG undefined FUN_144018af4(void)

void FUN_144018af4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2710 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2710 = FUN_14171c317(FUN_1465b50be,uVar1,L"EPaladinPrimeStackOp");
  }
  return;
}



// FUNCTION 144018b2c FUN_144018b2c body=55 status=ok
// SIG undefined FUN_144018b2c(void)

void FUN_144018b2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2858 = FUN_140002ddd(FUN_144018b63,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer");
  }
  return;
}



// FUNCTION 144018b63 FUN_144018b63 body=47 status=ok
// SIG undefined FUN_144018b63(void)

longlong FUN_144018b63(void)

{
  if (DAT_14cba2850 == 0) {
    FUN_14086a14e(&DAT_14cba2850,&PTR_FUN_14b637788);
  }
  return DAT_14cba2850;
}



// FUNCTION 144018b92 FUN_144018b92 body=48 status=ok
// SIG undefined FUN_144018b92(void)

void FUN_144018b92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000170;
  *puVar1 = &PTR_FUN_14b63cce0;
  return;
}



// FUNCTION 144018bc2 FUN_144018bc2 body=55 status=ok
// SIG undefined FUN_144018bc2(void)

void FUN_144018bc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2870 =
         FUN_140002ddd(FUN_144018bf9,uVar1,L"GbxSkillComponentData_ActionSkill_RoboDealer");
  }
  return;
}



// FUNCTION 144018bf9 FUN_144018bf9 body=47 status=ok
// SIG undefined FUN_144018bf9(void)

longlong FUN_144018bf9(void)

{
  if (DAT_14cba2868 == 0) {
    FUN_14086a14e(&DAT_14cba2868,&PTR_FUN_14b637848);
  }
  return DAT_14cba2868;
}



// FUNCTION 144018c28 FUN_144018c28 body=48 status=ok
// SIG undefined FUN_144018c28(void)

void FUN_144018c28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14b63cee0;
  return;
}



// FUNCTION 144018c58 FUN_144018c58 body=55 status=ok
// SIG undefined FUN_144018c58(void)

void FUN_144018c58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2888 =
         FUN_140002ddd(FUN_144018c8f,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_Cleromancy");
  }
  return;
}



// FUNCTION 144018c8f FUN_144018c8f body=47 status=ok
// SIG undefined FUN_144018c8f(void)

longlong FUN_144018c8f(void)

{
  if (DAT_14cba2880 == 0) {
    FUN_14086a14e(&DAT_14cba2880,&PTR_FUN_14b637920);
  }
  return DAT_14cba2880;
}



// FUNCTION 144018cbe FUN_144018cbe body=48 status=ok
// SIG undefined FUN_144018cbe(void)

void FUN_144018cbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000170;
  *puVar1 = &PTR_FUN_14b63d080;
  return;
}



// FUNCTION 144018cee FUN_144018cee body=55 status=ok
// SIG undefined FUN_144018cee(void)

void FUN_144018cee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28a0 =
         FUN_140002ddd(FUN_144018d25,uVar1,
                       L"GbxSkillComponentData_ActionSkill_RoboDealer_Cleromancy");
  }
  return;
}



// FUNCTION 144018d25 FUN_144018d25 body=47 status=ok
// SIG undefined FUN_144018d25(void)

longlong FUN_144018d25(void)

{
  if (DAT_14cba2898 == 0) {
    FUN_14086a14e(&DAT_14cba2898,&PTR_FUN_14b637a00);
  }
  return DAT_14cba2898;
}



// FUNCTION 144018d54 FUN_144018d54 body=48 status=ok
// SIG undefined FUN_144018d54(void)

void FUN_144018d54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14b63d1e0;
  return;
}



// FUNCTION 144018d84 FUN_144018d84 body=55 status=ok
// SIG undefined FUN_144018d84(void)

void FUN_144018d84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28b8 =
         FUN_140002ddd(FUN_144018dbb,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_SleightOfHand"
                      );
  }
  return;
}



// FUNCTION 144018dbb FUN_144018dbb body=47 status=ok
// SIG undefined FUN_144018dbb(void)

longlong FUN_144018dbb(void)

{
  if (DAT_14cba28b0 == 0) {
    FUN_14086a14e(&DAT_14cba28b0,&PTR_FUN_14b637ae0);
  }
  return DAT_14cba28b0;
}



// FUNCTION 144018dea FUN_144018dea body=48 status=ok
// SIG undefined FUN_144018dea(void)

void FUN_144018dea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b63d380;
  return;
}



// FUNCTION 144018e1a FUN_144018e1a body=55 status=ok
// SIG undefined FUN_144018e1a(void)

void FUN_144018e1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28d0 =
         FUN_140002ddd(FUN_144018e51,uVar1,
                       L"GbxSkillComponentData_ActionSkill_RoboDealer_SleightOfHand");
  }
  return;
}



// FUNCTION 144018e51 FUN_144018e51 body=47 status=ok
// SIG undefined FUN_144018e51(void)

longlong FUN_144018e51(void)

{
  if (DAT_14cba28c8 == 0) {
    FUN_14086a14e(&DAT_14cba28c8,&PTR_FUN_14b637c18);
  }
  return DAT_14cba28c8;
}



// FUNCTION 144018e80 FUN_144018e80 body=48 status=ok
// SIG undefined FUN_144018e80(void)

void FUN_144018e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14b63d4e0;
  return;
}



// FUNCTION 144018eb0 FUN_144018eb0 body=55 status=ok
// SIG undefined FUN_144018eb0(void)

void FUN_144018eb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28e8 =
         FUN_140002ddd(FUN_144018ee7,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_Crossfire");
  }
  return;
}



// FUNCTION 144018ee7 FUN_144018ee7 body=47 status=ok
// SIG undefined FUN_144018ee7(void)

longlong FUN_144018ee7(void)

{
  if (DAT_14cba28e0 == 0) {
    FUN_14086a14e(&DAT_14cba28e0,&PTR_FUN_14b637cf0);
  }
  return DAT_14cba28e0;
}



// FUNCTION 144018f16 FUN_144018f16 body=48 status=ok
// SIG undefined FUN_144018f16(void)

void FUN_144018f16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b63d680;
  return;
}



// FUNCTION 144018f46 FUN_144018f46 body=55 status=ok
// SIG undefined FUN_144018f46(void)

void FUN_144018f46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2900 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2900 =
         FUN_140002ddd(FUN_144018f7d,uVar1,L"GbxSkillComponentData_ActionSkill_RoboDealer_Crossfire"
                      );
  }
  return;
}



// FUNCTION 144018f7d FUN_144018f7d body=47 status=ok
// SIG undefined FUN_144018f7d(void)

longlong FUN_144018f7d(void)

{
  if (DAT_14cba28f8 == 0) {
    FUN_14086a14e(&DAT_14cba28f8,&PTR_FUN_14b637e18);
  }
  return DAT_14cba28f8;
}



// FUNCTION 144018fac FUN_144018fac body=48 status=ok
// SIG undefined FUN_144018fac(void)

void FUN_144018fac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14b63d7e0;
  return;
}



// FUNCTION 144018fe0 FUN_144018fe0 body=91 status=ok
// SIG undefined FUN_144018fe0(void)

void FUN_144018fe0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b637f20;
  return;
}



// FUNCTION 14401903c FUN_14401903c body=220 status=ok
// SIG undefined FUN_14401903c(void)

longlong FUN_14401903c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba2910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_144018fdd;
    local_40 = FUN_144018fe0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillComponentFunctions_ActionSkill_RoboDealer",
                  &DAT_14cba2910,&DAT_144018fdc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba2910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019119 FUN_144019119 body=47 status=ok
// SIG undefined FUN_144019119(void)

longlong FUN_144019119(void)

{
  if (DAT_14cba2918 == 0) {
    FUN_14073dd9a(&DAT_14cba2918,&PTR_FUN_14b637ed8);
  }
  return DAT_14cba2918;
}



// FUNCTION 14401918c FUN_14401918c body=38 status=ok
// SIG undefined FUN_14401918c(void)

undefined8 FUN_14401918c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401924c FUN_14401924c body=29 status=ok
// SIG undefined FUN_14401924c(void)

undefined8 FUN_14401924c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019278 FUN_144019278 body=59 status=ok
// SIG undefined FUN_144019278(void)

void FUN_144019278(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b63ce40;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 1440192b4 FUN_1440192b4 body=43 status=ok
// SIG undefined FUN_1440192b4(void)

void FUN_1440192b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b63ce40;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 144019304 FUN_144019304 body=76 status=ok
// SIG undefined FUN_144019304(void)

undefined8 FUN_144019304(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 144019378 FUN_144019378 body=59 status=ok
// SIG undefined FUN_144019378(void)

undefined8 FUN_144019378(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440193c4 FUN_1440193c4 body=40 status=ok
// SIG undefined FUN_1440193c4(void)

void FUN_1440193c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 14401943a FUN_14401943a body=38 status=ok
// SIG undefined FUN_14401943a(void)

undefined8 FUN_14401943a(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019460 FUN_144019460 body=55 status=ok
// SIG undefined FUN_144019460(void)

void FUN_144019460(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2858 = FUN_140002ddd(FUN_144018b63,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer");
  }
  return;
}



// FUNCTION 144019498 FUN_144019498 body=29 status=ok
// SIG undefined FUN_144019498(void)

undefined8 FUN_144019498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440194c4 FUN_1440194c4 body=201 status=ok
// SIG undefined FUN_1440194c4(void)

void FUN_1440194c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d040;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401958e FUN_14401958e body=184 status=ok
// SIG undefined FUN_14401958e(void)

void FUN_14401958e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d040;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401966c FUN_14401966c body=63 status=ok
// SIG undefined FUN_14401966c(void)

undefined1 FUN_14401966c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 1440196d4 FUN_1440196d4 body=59 status=ok
// SIG undefined FUN_1440196d4(void)

undefined8 FUN_1440196d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019720 FUN_144019720 body=40 status=ok
// SIG undefined FUN_144019720(void)

void FUN_144019720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 144019796 FUN_144019796 body=38 status=ok
// SIG undefined FUN_144019796(void)

undefined8 FUN_144019796(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440197bc FUN_1440197bc body=55 status=ok
// SIG undefined FUN_1440197bc(void)

void FUN_1440197bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2870 =
         FUN_140002ddd(FUN_144018bf9,uVar1,L"GbxSkillComponentData_ActionSkill_RoboDealer");
  }
  return;
}



// FUNCTION 1440197f4 FUN_1440197f4 body=29 status=ok
// SIG undefined FUN_1440197f4(void)

undefined8 FUN_1440197f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019820 FUN_144019820 body=59 status=ok
// SIG undefined FUN_144019820(void)

void FUN_144019820(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f2a0;
  return;
}



// FUNCTION 14401985c FUN_14401985c body=43 status=ok
// SIG undefined FUN_14401985c(void)

void FUN_14401985c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f2a0;
  return;
}



// FUNCTION 1440198ac FUN_1440198ac body=76 status=ok
// SIG undefined FUN_1440198ac(void)

undefined8 FUN_1440198ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 144019920 FUN_144019920 body=59 status=ok
// SIG undefined FUN_144019920(void)

undefined8 FUN_144019920(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401996c FUN_14401996c body=40 status=ok
// SIG undefined FUN_14401996c(void)

void FUN_14401996c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 1440199e2 FUN_1440199e2 body=38 status=ok
// SIG undefined FUN_1440199e2(void)

undefined8 FUN_1440199e2(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019a08 FUN_144019a08 body=55 status=ok
// SIG undefined FUN_144019a08(void)

void FUN_144019a08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2888 =
         FUN_140002ddd(FUN_144018c8f,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_Cleromancy");
  }
  return;
}



// FUNCTION 144019a40 FUN_144019a40 body=29 status=ok
// SIG undefined FUN_144019a40(void)

undefined8 FUN_144019a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019a6c FUN_144019a6c body=201 status=ok
// SIG undefined FUN_144019a6c(void)

void FUN_144019a6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d340;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019b36 FUN_144019b36 body=184 status=ok
// SIG undefined FUN_144019b36(void)

void FUN_144019b36(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d340;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019c14 FUN_144019c14 body=63 status=ok
// SIG undefined FUN_144019c14(void)

undefined1 FUN_144019c14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 144019c7c FUN_144019c7c body=59 status=ok
// SIG undefined FUN_144019c7c(void)

undefined8 FUN_144019c7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019cc8 FUN_144019cc8 body=40 status=ok
// SIG undefined FUN_144019cc8(void)

void FUN_144019cc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 144019d3e FUN_144019d3e body=38 status=ok
// SIG undefined FUN_144019d3e(void)

undefined8 FUN_144019d3e(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019d64 FUN_144019d64 body=55 status=ok
// SIG undefined FUN_144019d64(void)

void FUN_144019d64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28a0 =
         FUN_140002ddd(FUN_144018d25,uVar1,
                       L"GbxSkillComponentData_ActionSkill_RoboDealer_Cleromancy");
  }
  return;
}



// FUNCTION 144019d9c FUN_144019d9c body=29 status=ok
// SIG undefined FUN_144019d9c(void)

undefined8 FUN_144019d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144019dc8 FUN_144019dc8 body=69 status=ok
// SIG undefined FUN_144019dc8(void)

void FUN_144019dc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f340;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 144019e0e FUN_144019e0e body=53 status=ok
// SIG undefined FUN_144019e0e(void)

void FUN_144019e0e(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f340;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 144019e68 FUN_144019e68 body=164 status=ok
// SIG undefined FUN_144019e68(void)

undefined8 FUN_144019e68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    uVar3 = *(undefined8 *)(param_3 + 0x170);
    lVar4 = *(longlong *)(param_3 + 0x178);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x178);
    *(undefined8 *)(param_2 + 0x170) = uVar3;
    *(longlong *)(param_2 + 0x178) = lVar4;
    if (plVar5 != (longlong *)0x0) {
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
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  return 1;
}



// FUNCTION 144019f34 FUN_144019f34 body=59 status=ok
// SIG undefined FUN_144019f34(void)

undefined8 FUN_144019f34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144019f80 FUN_144019f80 body=93 status=ok
// SIG undefined FUN_144019f80(void)

void FUN_144019f80(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *param_2 = &PTR_FUN_14b63f340;
    plVar3 = (longlong *)param_2[0x2f];
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
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14401a02c FUN_14401a02c body=94 status=ok
// SIG undefined FUN_14401a02c(void)

undefined8 * FUN_14401a02c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f340;
  plVar3 = (longlong *)param_1[0x2f];
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
  FUN_145a38fa8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a08a FUN_14401a08a body=55 status=ok
// SIG undefined FUN_14401a08a(void)

void FUN_14401a08a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28b8 =
         FUN_140002ddd(FUN_144018dbb,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_SleightOfHand"
                      );
  }
  return;
}



// FUNCTION 14401a0c2 FUN_14401a0c2 body=29 status=ok
// SIG undefined FUN_14401a0c2(void)

undefined8 FUN_14401a0c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a0ee FUN_14401a0ee body=264 status=ok
// SIG undefined FUN_14401a0ee(void)

void FUN_14401a0ee(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x238);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d640;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401a1f8 FUN_14401a1f8 body=247 status=ok
// SIG undefined FUN_14401a1f8(void)

void FUN_14401a1f8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d640;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401a314 FUN_14401a314 body=85 status=ok
// SIG undefined FUN_14401a314(void)

undefined1 FUN_14401a314(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_148ba84c4(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 14401a392 FUN_14401a392 body=59 status=ok
// SIG undefined FUN_14401a392(void)

undefined8 FUN_14401a392(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401a3de FUN_14401a3de body=62 status=ok
// SIG undefined FUN_14401a3de(void)

void FUN_14401a3de(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14b63d640;
    FUN_14588898c(param_2 + 0x32);
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 14401a46a FUN_14401a46a body=63 status=ok
// SIG undefined FUN_14401a46a(void)

undefined8 * FUN_14401a46a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b63d640;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a4aa FUN_14401a4aa body=55 status=ok
// SIG undefined FUN_14401a4aa(void)

void FUN_14401a4aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28d0 =
         FUN_140002ddd(FUN_144018e51,uVar1,
                       L"GbxSkillComponentData_ActionSkill_RoboDealer_SleightOfHand");
  }
  return;
}



// FUNCTION 14401a4e2 FUN_14401a4e2 body=29 status=ok
// SIG undefined FUN_14401a4e2(void)

undefined8 FUN_14401a4e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a50e FUN_14401a50e body=69 status=ok
// SIG undefined FUN_14401a50e(void)

void FUN_14401a50e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f3e0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 14401a554 FUN_14401a554 body=53 status=ok
// SIG undefined FUN_14401a554(void)

void FUN_14401a554(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  param_2[0x2d] = 0;
  *param_2 = &PTR_FUN_14b63f3e0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  return;
}



// FUNCTION 14401a5ae FUN_14401a5ae body=164 status=ok
// SIG undefined FUN_14401a5ae(void)

undefined8 FUN_14401a5ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    uVar3 = *(undefined8 *)(param_3 + 0x170);
    lVar4 = *(longlong *)(param_3 + 0x178);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x178);
    *(undefined8 *)(param_2 + 0x170) = uVar3;
    *(longlong *)(param_2 + 0x178) = lVar4;
    if (plVar5 != (longlong *)0x0) {
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
    param_2 = param_2 + 0x180;
    param_3 = param_3 + 0x180;
  }
  return 1;
}



// FUNCTION 14401a67a FUN_14401a67a body=59 status=ok
// SIG undefined FUN_14401a67a(void)

undefined8 FUN_14401a67a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401a6c6 FUN_14401a6c6 body=93 status=ok
// SIG undefined FUN_14401a6c6(void)

void FUN_14401a6c6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *param_2 = &PTR_FUN_14b63f3e0;
    plVar3 = (longlong *)param_2[0x2f];
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
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14401a772 FUN_14401a772 body=94 status=ok
// SIG undefined FUN_14401a772(void)

undefined8 * FUN_14401a772(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f3e0;
  plVar3 = (longlong *)param_1[0x2f];
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
  FUN_145a38fa8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a7d0 FUN_14401a7d0 body=55 status=ok
// SIG undefined FUN_14401a7d0(void)

void FUN_14401a7d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba28e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba28e8 =
         FUN_140002ddd(FUN_144018ee7,uVar1,L"GbxSkillComponent_ActionSkill_RoboDealer_Crossfire");
  }
  return;
}



// FUNCTION 14401a808 FUN_14401a808 body=29 status=ok
// SIG undefined FUN_14401a808(void)

undefined8 FUN_14401a808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401a834 FUN_14401a834 body=264 status=ok
// SIG undefined FUN_14401a834(void)

void FUN_14401a834(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x238);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d940;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401a93e FUN_14401a93e body=247 status=ok
// SIG undefined FUN_14401a93e(void)

void FUN_14401a93e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b63d940;
  *(undefined1 *)(param_2 + 0x32) = 0;
  memset(param_2 + 0x33,0,0x81);
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401aa5a FUN_14401aa5a body=85 status=ok
// SIG undefined FUN_14401aa5a(void)

undefined1 FUN_14401aa5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    FUN_148ba84c4(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 14401aad8 FUN_14401aad8 body=59 status=ok
// SIG undefined FUN_14401aad8(void)

undefined8 FUN_14401aad8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401ab24 FUN_14401ab24 body=62 status=ok
// SIG undefined FUN_14401ab24(void)

void FUN_14401ab24(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *param_2 = &PTR_FUN_14b63d940;
    FUN_14588898c(param_2 + 0x32);
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 0x4d) = 0;
  }
  return;
}



// FUNCTION 14401abb0 FUN_14401abb0 body=63 status=ok
// SIG undefined FUN_14401abb0(void)

undefined8 * FUN_14401abb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b63d940;
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401abf0 FUN_14401abf0 body=55 status=ok
// SIG undefined FUN_14401abf0(void)

void FUN_14401abf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2900 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2900 =
         FUN_140002ddd(FUN_144018f7d,uVar1,L"GbxSkillComponentData_ActionSkill_RoboDealer_Crossfire"
                      );
  }
  return;
}



// FUNCTION 14401ac8a FUN_14401ac8a body=45 status=ok
// SIG undefined FUN_14401ac8a(void)

longlong FUN_14401ac8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_1459b3c46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401ad06 FUN_14401ad06 body=57 status=ok
// SIG undefined FUN_14401ad06(void)

void FUN_14401ad06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2a38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2a38 = FUN_140002ddd(FUN_1465b5e6f,uVar1,L"GbxSkillComponentData_Charges");
  }
  return;
}



// FUNCTION 14401ad78 FUN_14401ad78 body=57 status=ok
// SIG undefined FUN_14401ad78(void)

void FUN_14401ad78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2c90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2c90 =
         FUN_140002ddd(FUN_1465b6375,uVar1,L"GbxSkillComponentData_DelegateData_CharacterDied");
  }
  return;
}



// FUNCTION 14401adb1 FUN_14401adb1 body=1996 status=ok
// SIG undefined FUN_14401adb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14401adb1(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba26b8 = (ulonglong)uVar2;
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b635d80,1,&PTR_FUN_14b635d30);
  uStack_68 = 1;
  local_70 = &PTR_FUN_14b637550;
  local_78 = 9;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6376e0,1,&PTR_FUN_14b637570);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 8;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b638300,1,&PTR_FUN_14b6381c0);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6394a0,1,&PTR_FUN_14b639400);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63a0a0);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b63b1b0,1,&PTR_FUN_14b63b160);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63b600);
  _DAT_14cba2ac0 = 0x47efffffe0000000;
  _DAT_14cba2ac8 = 0x47efffffe0000000;
  _DAT_14cba2ad0 = 0x47efffffe0000000;
  _DAT_14cba2ad8 = 0x47efffffe0000000;
  _DAT_14cba2ae0 = 0x47efffffe0000000;
  _DAT_14cba2ae8 = 0x47efffffe0000000;
  _DAT_14cba2af0 = 0x47efffffe0000000;
  _DAT_14cba2af8 = 0x47efffffe0000000;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b00 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b08 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b10 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba2b18);
  if (cVar1 == '\0') {
    _DAT_14cba2b18 = 0;
    uRam000000014cba2b20 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba2b2c = 0;
  FUN_14052b5e0(&DAT_14cba2b28,"PlayerAwareness",0);
  _DAT_14cba2b38 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b40 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b48 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b50 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b58 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b60 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b68 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b70 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b78 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b80 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b88 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b90 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2b98 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2ba0 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2ba8 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2bb0 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2bb8 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2bc0 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2bc8 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba2bd0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba2bd8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144019148);
  FUN_140056680(&DAT_14cba2be8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144019159);
  FUN_140056680(&DAT_14cba2bf8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14401916a);
  FUN_140056680(&DAT_14cba2c08,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14401917b);
  FUN_1446f470e(&DAT_14cba2c18,L"LIMB_GORED",1);
  _DAT_14cba2c20 = 0x4072c00000000000;
  _DAT_14cba2c28 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba2c30,L"body",1);
  FUN_1446f470e(&DAT_14cba2c38,L"title_card",1);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63b7c0);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63ba00);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63bbd0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401b580 FUN_14401b580 body=47 status=ok
// SIG undefined FUN_14401b580(void)

longlong FUN_14401b580(void)

{
  if (DAT_14cba2d40 == 0) {
    FUN_14000fc22(&DAT_14cba2d40,&PTR_FUN_14b6400d8);
  }
  return DAT_14cba2d40;
}



// FUNCTION 14401b5b0 FUN_14401b5b0 body=55 status=ok
// SIG undefined FUN_14401b5b0(void)

void FUN_14401b5b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d50 =
         FUN_140002ddd(FUN_14401b5e7,uVar1,L"GbxSkillComponentData_DelegateData_ContagionTargetDied"
                      );
  }
  return;
}



// FUNCTION 14401b5e7 FUN_14401b5e7 body=47 status=ok
// SIG undefined FUN_14401b5e7(void)

longlong FUN_14401b5e7(void)

{
  if (DAT_14cba2d48 == 0) {
    FUN_14086a14e(&DAT_14cba2d48,&PTR_FUN_14b6401c0);
  }
  return DAT_14cba2d48;
}



// FUNCTION 14401b616 FUN_14401b616 body=48 status=ok
// SIG undefined FUN_14401b616(void)

void FUN_14401b616(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b6457b0;
  return;
}



// FUNCTION 14401b646 FUN_14401b646 body=55 status=ok
// SIG undefined FUN_14401b646(void)

void FUN_14401b646(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2db0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2db0 = FUN_14171c317(FUN_1465b6f77,uVar1,L"EPingDelegateType");
  }
  return;
}



// FUNCTION 14401b67d FUN_14401b67d body=55 status=ok
// SIG undefined FUN_14401b67d(void)

void FUN_14401b67d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3068 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3068 = FUN_14171c317(FUN_1465b7fc6,uVar1,L"EGbxSkillComponent_Turret_State");
  }
  return;
}



// FUNCTION 14401b6b4 FUN_14401b6b4 body=55 status=ok
// SIG undefined FUN_14401b6b4(void)

void FUN_14401b6b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3080 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3080 =
         FUN_14171c317(FUN_1465b7ff5,uVar1,L"EGbxSkillComponent_Turret_FiringSolutionMode");
  }
  return;
}



// FUNCTION 14401b6eb FUN_14401b6eb body=55 status=ok
// SIG undefined FUN_14401b6eb(void)

void FUN_14401b6eb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3098 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3098 = FUN_14171c317(FUN_1465b8024,uVar1,L"EGbxSkillComponent_Turret_TargetingMode");
  }
  return;
}



// FUNCTION 14401b722 FUN_14401b722 body=55 status=ok
// SIG undefined FUN_14401b722(void)

void FUN_14401b722(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba30b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba30b0 = FUN_14171c317(FUN_1465b8053,uVar1,L"EGbxSkillComponent_Turret_FireMode");
  }
  return;
}



// FUNCTION 14401b759 FUN_14401b759 body=55 status=ok
// SIG undefined FUN_14401b759(void)

void FUN_14401b759(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba30c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba30c8 = FUN_14171c317(FUN_1465b8082,uVar1,L"EGbxSkillComponent_Turret_FireSolutionType")
    ;
  }
  return;
}



// FUNCTION 14401b798 FUN_14401b798 body=227 status=ok
// SIG undefined FUN_14401b798(void)

longlong FUN_14401b798(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba3188 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458ce09c;
    local_38 = &LAB_14401b87c;
    local_40 = FUN_14401b87f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x268;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillNetSpecializationComponent_CorpoHacker",
                  &DAT_14cba3188,&DAT_14401b796);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401b87f FUN_14401b87f body=85 status=ok
// SIG undefined FUN_14401b87f(void)

void FUN_14401b87f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c26650(puVar1);
  *puVar1 = &PTR_FUN_14b648e20;
  puVar1[5] = &PTR_FUN_14b6492c0;
  puVar1[6] = &PTR_LAB_14b649300;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 2;
  *(byte *)((longlong)puVar1 + 0x4a) = *(byte *)((longlong)puVar1 + 0x4a) & 0xf9 | 2;
  return;
}



// FUNCTION 14401b8d9 FUN_14401b8d9 body=47 status=ok
// SIG undefined FUN_14401b8d9(void)

longlong FUN_14401b8d9(void)

{
  if (DAT_14cba3190 == 0) {
    FUN_14073dd9a(&DAT_14cba3190,&PTR_LAB_14b6449a8);
  }
  return DAT_14cba3190;
}



// FUNCTION 14401b908 FUN_14401b908 body=88 status=ok
// SIG undefined FUN_14401b908(void)

void FUN_14401b908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b648e20;
  param_1[5] = &PTR_FUN_14b6492c0;
  param_1[6] = &PTR_LAB_14b649300;
  FUN_144760e21(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_145b06f62(param_1);
  return;
}



// FUNCTION 14401b960 FUN_14401b960 body=38 status=ok
// SIG undefined FUN_14401b960(void)

undefined8 FUN_14401b960(undefined8 param_1,int param_2)

{
  FUN_14401b908();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401b98a FUN_14401b98a body=45 status=ok
// SIG undefined FUN_14401b98a(void)

longlong FUN_14401b98a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14401b908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401b9d4 FUN_14401b9d4 body=57 status=ok
// SIG undefined FUN_14401b9d4(void)

void FUN_14401b9d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2cd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2cd0 =
         FUN_140002ddd(FUN_1465b6b0b,uVar1,L"GbxSkillComponentData_DelegateData_CharacterLevelUp");
  }
  return;
}



// FUNCTION 14401ba38 FUN_14401ba38 body=29 status=ok
// SIG undefined FUN_14401ba38(void)

undefined8 FUN_14401ba38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401bacc FUN_14401bacc body=59 status=ok
// SIG undefined FUN_14401bacc(void)

undefined8 FUN_14401bacc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401bb6c FUN_14401bb6c body=29 status=ok
// SIG undefined FUN_14401bb6c(void)

undefined8 FUN_14401bb6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401bb8a FUN_14401bb8a body=55 status=ok
// SIG undefined FUN_14401bb8a(void)

void FUN_14401bb8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2d50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2d50 =
         FUN_140002ddd(FUN_14401b5e7,uVar1,L"GbxSkillComponentData_DelegateData_ContagionTargetDied"
                      );
  }
  return;
}



// FUNCTION 14401bcfc FUN_14401bcfc body=134 status=ok
// SIG undefined FUN_14401bcfc(void)

void FUN_14401bcfc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b647320;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401bda8 FUN_14401bda8 body=31 status=ok
// SIG undefined FUN_14401bda8(void)

undefined8 FUN_14401bda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401bdc8 FUN_14401bdc8 body=57 status=ok
// SIG undefined FUN_14401bdc8(void)

void FUN_14401bdc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba2f80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba2f80 =
         FUN_140002ddd(FUN_1465b7a87,uVar1,L"GbxSkillComponentInputHandler_EnhancedInput");
  }
  return;
}



// FUNCTION 14401be72 FUN_14401be72 body=57 status=ok
// SIG undefined FUN_14401be72(void)

void FUN_14401be72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3048 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3048 =
         FUN_140002ddd(FUN_1465b7f67,uVar1,L"GbxSkillComponentData_DelegateData_TokenStack");
  }
  return;
}



// FUNCTION 14401beda FUN_14401beda body=45 status=ok
// SIG undefined FUN_14401beda(void)

longlong FUN_14401beda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x70;
  FUN_14614248a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401bf08 FUN_14401bf08 body=48 status=ok
// SIG undefined FUN_14401bf08(void)

longlong FUN_14401bf08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x90;
  FUN_14614248a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401bf54 FUN_14401bf54 body=1000 status=ok
// SIG undefined FUN_14401bf54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14401bf54(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63f790);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63f950);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63fb30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63fd20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b63ffe0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640200);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640420);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640670);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b640a40;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640a60);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640c00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640da0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b640f40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b641170);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6413a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b641590);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6417d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6418f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b641b20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b641cd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6420a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6425d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b642df0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b643190);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba3058 = (ulonglong)uVar1;
  ppuStack_60 = &PTR_FUN_14b644690;
  uStack_58 = 5;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6447d0,1,&PTR_FUN_14b644730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b644900);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6449f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b645000,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401c340 FUN_14401c340 body=47 status=ok
// SIG undefined FUN_14401c340(void)

longlong FUN_14401c340(void)

{
  if (DAT_14cba3218 == 0) {
    FUN_14000fc22(&DAT_14cba3218,&PTR_FUN_14b649a40);
  }
  return DAT_14cba3218;
}



// FUNCTION 14401c36f FUN_14401c36f body=161 status=ok
// SIG undefined FUN_14401c36f(void)

void FUN_14401c36f(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar3 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14401c3cf;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar3 = (longlong *)*puVar4;
      goto LAB_14401c3cf;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14401c3cf:
  local_18 = param_2;
  uVar2 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 2));
  (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401c412 FUN_14401c412 body=55 status=ok
// SIG undefined FUN_14401c412(void)

void FUN_14401c412(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3228 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3228 = FUN_140002ddd(FUN_14401c449,uVar1,L"JinxCountValueResolver");
  }
  return;
}



// FUNCTION 14401c449 FUN_14401c449 body=47 status=ok
// SIG undefined FUN_14401c449(void)

longlong FUN_14401c449(void)

{
  if (DAT_14cba3220 == 0) {
    FUN_14086a14e(&DAT_14cba3220,&PTR_FUN_14b649ac8);
  }
  return DAT_14cba3220;
}



// FUNCTION 14401c478 FUN_14401c478 body=48 status=ok
// SIG undefined FUN_14401c478(void)

void FUN_14401c478(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b64e9a0;
  return;
}



// FUNCTION 14401c4a8 FUN_14401c4a8 body=55 status=ok
// SIG undefined FUN_14401c4a8(void)

void FUN_14401c4a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3240 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3240 = FUN_140002ddd(FUN_14401c4df,uVar1,L"OakSpecializationComponent_JinxTargetItem");
  }
  return;
}



// FUNCTION 14401c4df FUN_14401c4df body=47 status=ok
// SIG undefined FUN_14401c4df(void)

longlong FUN_14401c4df(void)

{
  if (DAT_14cba3238 == 0) {
    FUN_14086a14e(&DAT_14cba3238,&PTR_FUN_14b649bd0);
  }
  return DAT_14cba3238;
}



// FUNCTION 14401c50e FUN_14401c50e body=48 status=ok
// SIG undefined FUN_14401c50e(void)

void FUN_14401c50e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b64eb90;
  return;
}



// FUNCTION 14401c53e FUN_14401c53e body=55 status=ok
// SIG undefined FUN_14401c53e(void)

void FUN_14401c53e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3258 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3258 = FUN_140002ddd(FUN_14401c575,uVar1,L"OakSpecializationComponent_JinxTargetList");
  }
  return;
}



// FUNCTION 14401c575 FUN_14401c575 body=47 status=ok
// SIG undefined FUN_14401c575(void)

longlong FUN_14401c575(void)

{
  if (DAT_14cba3250 == 0) {
    FUN_14086a14e(&DAT_14cba3250,&PTR_FUN_14b649d68);
  }
  return DAT_14cba3250;
}



// FUNCTION 14401c5aa FUN_14401c5aa body=48 status=ok
// SIG undefined FUN_14401c5aa(void)

void FUN_14401c5aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14b64ed00;
  return;
}



// FUNCTION 14401c5da FUN_14401c5da body=47 status=ok
// SIG undefined FUN_14401c5da(void)

longlong FUN_14401c5da(void)

{
  if (DAT_14cba3288 == 0) {
    FUN_14073dd9a(&DAT_14cba3288,&PTR_LAB_14b64a250);
  }
  return DAT_14cba3288;
}


