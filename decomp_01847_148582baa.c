// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148582baa FUN_148582baa body=83 status=ok
// SIG undefined FUN_148582baa(void)

undefined8 * FUN_148582baa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af3e050;
  plVar3 = (longlong *)param_1[8];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582c04 FUN_148582c04 body=1 status=ok
// SIG undefined FUN_148582c04(void)

void FUN_148582c04(void)

{
  return;
}



// FUNCTION 148582c06 FUN_148582c06 body=29 status=ok
// SIG undefined FUN_148582c06(void)

undefined8 FUN_148582c06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582c24 FUN_148582c24 body=29 status=ok
// SIG undefined FUN_148582c24(void)

undefined8 FUN_148582c24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582c48 FUN_148582c48 body=57 status=ok
// SIG undefined FUN_148582c48(void)

void FUN_148582c48(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af3e0d0;
  FUN_145810cd0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148582c82 FUN_148582c82 body=29 status=ok
// SIG undefined FUN_148582c82(void)

undefined8 FUN_148582c82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582ca0 FUN_148582ca0 body=69 status=ok
// SIG undefined FUN_148582ca0(void)

undefined8 * FUN_148582ca0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af3e0d0;
  FUN_145810cd0(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582cec FUN_148582cec body=132 status=ok
// SIG undefined FUN_148582cec(void)

void FUN_148582cec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148582d72 FUN_148582d72 body=95 status=ok
// SIG undefined FUN_148582d72(void)

void FUN_148582d72(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_145810cd0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148582dd2 FUN_148582dd2 body=63 status=ok
// SIG undefined FUN_148582dd2(void)

void FUN_148582dd2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148582e12(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148582e12 FUN_148582e12 body=97 status=ok
// SIG undefined FUN_148582e12(void)

ulonglong FUN_148582e12(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148582e74 FUN_148582e74 body=1 status=ok
// SIG undefined FUN_148582e74(void)

void FUN_148582e74(void)

{
  return;
}



// FUNCTION 148582e76 FUN_148582e76 body=29 status=ok
// SIG undefined FUN_148582e76(void)

undefined8 FUN_148582e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582e94 FUN_148582e94 body=29 status=ok
// SIG undefined FUN_148582e94(void)

undefined8 FUN_148582e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582eb8 FUN_148582eb8 body=1 status=ok
// SIG undefined FUN_148582eb8(void)

void FUN_148582eb8(void)

{
  return;
}



// FUNCTION 148582eba FUN_148582eba body=29 status=ok
// SIG undefined FUN_148582eba(void)

undefined8 FUN_148582eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582ed8 FUN_148582ed8 body=196 status=ok
// SIG undefined FUN_148582ed8(void)

void FUN_148582ed8(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0x4008000000000000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14af3e218;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x16] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = &PTR_LAB_149f36510;
  param_1[0x19] = &LAB_148582fc2;
  param_1[0x14] = FUN_146bd3274;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  param_1[0x27] = 0;
  return;
}



// FUNCTION 148582f9c FUN_148582f9c body=38 status=ok
// SIG undefined FUN_148582f9c(void)

undefined8 FUN_148582f9c(undefined8 param_1,int param_2)

{
  FUN_148582fc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582fc6 FUN_148582fc6 body=299 status=ok
// SIG undefined FUN_148582fc6(void)

void FUN_148582fc6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14af3e218;
  FUN_1483b32e0(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x1e];
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar4);
  }
  if (param_1[0x14] != 0) {
    plVar3 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  lVar4 = 0x90;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x50);
  plVar3 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_14aefe4a8;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001485830e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485830f2 FUN_1485830f2 body=1 status=ok
// SIG undefined FUN_1485830f2(void)

void FUN_1485830f2(void)

{
  return;
}



// FUNCTION 1485830f4 FUN_1485830f4 body=29 status=ok
// SIG undefined FUN_1485830f4(void)

undefined8 FUN_1485830f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148583112 FUN_148583112 body=1 status=ok
// SIG undefined FUN_148583112(void)

void FUN_148583112(void)

{
  return;
}



// FUNCTION 148583114 FUN_148583114 body=29 status=ok
// SIG undefined FUN_148583114(void)

undefined8 FUN_148583114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148583132 FUN_148583132 body=1 status=ok
// SIG undefined FUN_148583132(void)

void FUN_148583132(void)

{
  return;
}



// FUNCTION 148583134 FUN_148583134 body=29 status=ok
// SIG undefined FUN_148583134(void)

undefined8 FUN_148583134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148583152 FUN_148583152 body=14 status=ok
// SIG undefined FUN_148583152(void)

void FUN_148583152(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 148583160 FUN_148583160 body=29 status=ok
// SIG undefined FUN_148583160(void)

undefined8 FUN_148583160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858317e FUN_14858317e body=1 status=ok
// SIG undefined FUN_14858317e(void)

void FUN_14858317e(void)

{
  return;
}



// FUNCTION 148583180 FUN_148583180 body=29 status=ok
// SIG undefined FUN_148583180(void)

undefined8 FUN_148583180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858319e FUN_14858319e body=1 status=ok
// SIG undefined FUN_14858319e(void)

void FUN_14858319e(void)

{
  return;
}



// FUNCTION 1485831a0 FUN_1485831a0 body=29 status=ok
// SIG undefined FUN_1485831a0(void)

undefined8 FUN_1485831a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485831be FUN_1485831be body=408 status=ok
// SIG undefined FUN_1485831be(void)

void FUN_1485831be(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_148549d22(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_148549ca8(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_148549d22(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_148549ca8(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_148549ca8(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_148549ca8(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_148549d22(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_148549d22(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_148549d22(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_148549ca8(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148583366 FUN_148583366 body=550 status=ok
// SIG undefined FUN_148583366(void)

void FUN_148583366(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_70;
  FUN_14858358e(plVar2,plVar1,local_4c,plVar3);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858358e FUN_14858358e body=1462 status=ok
// SIG undefined FUN_14858358e(void)

void FUN_14858358e(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  wchar_t **ppwVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t ***pppwVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  wchar_t *local_208;
  wchar_t ***local_200;
  wchar_t ***local_1f8;
  wchar_t **local_1f0 [6];
  longlong local_1c0;
  undefined8 local_1b8;
  wchar_t local_1b0 [24];
  longlong local_180;
  undefined8 local_178;
  wchar_t **local_170;
  undefined4 local_168;
  wchar_t ***local_140;
  ulonglong local_138;
  wchar_t *local_130;
  undefined4 local_128;
  wchar_t **local_100;
  undefined8 local_f8;
  wchar_t *local_f0 [6];
  wchar_t **local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_c0 = (wchar_t **)0x0;
  local_b8 = 0xc00000000;
  lVar8 = param_1[1];
  local_248 = param_2;
  local_240 = param_4;
  if ((longlong)(int)lVar8 != 0) {
    lVar11 = *param_1;
    lVar6 = 0;
    do {
      uVar10 = *(uint *)(lVar11 + lVar6);
      if ((int)uVar10 < 0) {
        local_130 = L"BlendBoneWeights_InvalidInput";
        local_128 = 0x1d;
        FUN_1446e940c(&local_170,&local_130);
        local_130 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
        local_128 = 0x2e;
        FUN_1446e940c(local_1b0,&local_130);
        FUN_140208bae(&local_130,local_1b0,&local_170,
                      L"BlendBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                     );
        FUN_143ba9449(param_5,2,&local_130);
        if (local_130 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_130 + 0x10))();
        }
        uVar10 = *(uint *)(lVar11 + lVar6);
      }
      uVar3 = local_b8;
      fVar12 = *(float *)(lVar11 + 4 + lVar6);
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      lVar7 = (longlong)(int)local_b8;
      uVar4 = (int)local_b8 + 1;
      local_b8 = CONCAT44(local_b8._4_4_,uVar4);
      if (local_b8._4_4_ < uVar4) {
        FUN_146beb76e(local_f0,uVar3 & 0xffffffff);
      }
      ppwVar5 = local_c0;
      if (local_c0 == (wchar_t **)0x0) {
        ppwVar5 = local_f0;
      }
      *(uint *)((longlong)ppwVar5 + lVar7 * 4) =
           uVar10 & 0xffff | (int)(fVar12 * 65535.0 + 0.5) << 0x10;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar6);
  }
  local_100 = (wchar_t **)0x0;
  local_f8 = 0xc00000000;
  lVar8 = local_248[1];
  if ((longlong)(int)lVar8 == 0) {
    local_f8._0_4_ = 0;
  }
  else {
    lVar11 = *local_248;
    lVar6 = 0;
    do {
      uVar10 = *(uint *)(lVar11 + lVar6);
      if ((int)uVar10 < 0) {
        local_170 = (wchar_t **)0x14af429c8;
        local_168 = 0x1d;
        FUN_1446e940c(local_1b0,&local_170);
        local_170 = (wchar_t **)0x14af422a0;
        local_168 = 0x2e;
        FUN_1446e940c(local_1f0,&local_170);
        FUN_140208bae(&local_170,local_1f0,local_1b0,
                      L"BlendBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                     );
        FUN_143ba9449(param_5,2,&local_170);
        if (local_170 != (wchar_t **)0x0) {
          (**(code **)(*local_170 + 8))();
        }
        uVar10 = *(uint *)(lVar11 + lVar6);
      }
      uVar3 = local_f8;
      fVar12 = *(float *)(lVar11 + 4 + lVar6);
      if ((int)uVar10 < 1) {
        uVar10 = 0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      lVar7 = (longlong)(int)local_f8;
      uVar4 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,uVar4);
      if (local_f8._4_4_ < uVar4) {
        FUN_146beb76e(&local_130,uVar3 & 0xffffffff);
      }
      ppwVar5 = local_100;
      if (local_100 == (wchar_t **)0x0) {
        ppwVar5 = &local_130;
      }
      *(uint *)((longlong)ppwVar5 + lVar7 * 4) =
           uVar10 & 0xffff | (int)(fVar12 * 65535.0 + 0.5) << 0x10;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar6);
  }
  local_218 = 0xc00000002;
  uStack_210 = 0x10000000001;
  local_228 = 0xc00000002;
  uStack_220 = 0x10000000001;
  local_170 = &local_130;
  if (local_100 != (wchar_t **)0x0) {
    local_170 = local_100;
  }
  local_180 = 0;
  local_178 = 0xc00000000;
  local_1f0[0] = (wchar_t **)local_1b0;
  local_168 = (int)local_f8;
  FUN_146fa976c(local_1f0,&local_170);
  local_170 = local_c0;
  if (local_c0 == (wchar_t **)0x0) {
    local_170 = local_f0;
  }
  local_238 = 0xc00000002;
  uStack_230 = 0x10000000001;
  local_1c0 = 0;
  local_1b8 = 0xc00000000;
  local_168 = (int)local_b8;
  local_1f8 = local_1f0;
  FUN_146fa976c(&local_1f8,&local_170);
  local_140 = (wchar_t ***)0x0;
  local_138 = 0xc00000000;
  local_258 = &local_218;
  local_208 = local_1b0;
  local_200 = local_1f0;
  local_1f8 = &local_170;
  FUN_146beae50(&local_1f8,&local_200,&local_208,param_3);
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_240;
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  FUN_148587446(plVar2,local_138 & 0xffffffff);
  pppwVar9 = &local_170;
  if (local_140 != (wchar_t ***)0x0) {
    pppwVar9 = local_140;
  }
  lVar8 = (longlong)(int)local_138;
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      uVar10 = *(uint *)((longlong)pppwVar9 + lVar11);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1485bf27e(plVar2,iVar1);
      }
      lVar6 = *plVar2;
      *(uint *)(lVar6 + (longlong)iVar1 * 8) = uVar10 & 0xffff;
      *(float *)(lVar6 + 4 + (longlong)iVar1 * 8) = (float)(uVar10 >> 0x10) / 65535.0;
      lVar11 = lVar11 + 4;
    } while (lVar8 * 4 != lVar11);
  }
  if (local_140 != (wchar_t ***)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148583b46 FUN_148583b46 body=499 status=ok
// SIG undefined FUN_148583b46(void)

void FUN_148583b46(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0x53e4ccccd;
  uStack_2c = 0x100;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = (undefined4)uStack_34;
  uStack_50 = uStack_34._4_4_;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  FUN_148583d3a(local_20,local_28,&local_58,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148583d3a FUN_148583d3a body=412 status=ok
// SIG undefined FUN_148583d3a(void)

longlong FUN_148583d3a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  code *local_60;
  longlong **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  local_68 = param_4;
  if (param_1 == 0) {
    local_50 = L"ComputeSmoothBoneWeights_InvalidInput";
    local_48._0_4_ = 0x25;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    pwVar2 = L"ComputeSmoothBoneWeights: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      local_88 = &local_70;
      local_58 = &local_88;
      local_80 = &local_68;
      uVar1 = (ulonglong)local_50 >> 0x10;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = (wchar_t *)CONCAT62((uint6)uVar1 & 0xffffffffff00,5);
      local_60 = FUN_143bc5520;
      local_78 = param_3;
      FUN_1484b8434(param_1,&local_60,&local_50,0);
      goto LAB_148583dfc;
    }
    local_50 = L"ComputeSmoothBoneWeights_InvalidSkeleton";
    local_48._0_4_ = 0x28;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    pwVar2 = L"ComputeSmoothBoneWeights: Skeleton is Null";
  }
  FUN_140208bae(&local_50,&local_60,&local_88,pwVar2);
  FUN_143ba90d7(param_5,2,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
LAB_148583dfc:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148583ed8 FUN_148583ed8 body=383 status=ok
// SIG undefined FUN_148583ed8(void)

void FUN_148583ed8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2a = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148584058(local_20,local_28,local_2a,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584058 FUN_148584058 body=476 status=ok
// SIG undefined FUN_148584058(void)

longlong FUN_148584058(longlong param_1,longlong param_2,undefined2 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 *local_88;
  undefined2 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined2 local_62;
  code *local_60;
  longlong **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_2;
  local_70 = param_4;
  local_62 = param_3;
  if (param_1 == 0) {
    local_50 = L"CopyBonesFromMesh_InvalidSourceMesh";
    local_48._0_4_ = 0x23;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"CopyBonesFromMesh: SourceMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else if (param_2 == 0) {
    local_50 = L"CopyBonesFromMesh_InvalidTargetMesh";
    local_48._0_4_ = 0x23;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"CopyBonesFromMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    param_2 = 0;
  }
  else {
    local_90 = &local_78;
    local_58 = &local_90;
    local_88 = &local_70;
    local_80 = &local_62;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bc5c8e;
    FUN_1484b8434();
    param_2 = local_78;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584236 FUN_148584236 body=386 status=ok
// SIG undefined FUN_148584236(void)

void FUN_148584236(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2a = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485843ba(local_20,local_28,local_2a,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485843ba FUN_1485843ba body=424 status=ok
// SIG undefined FUN_1485843ba(void)

longlong FUN_1485843ba(longlong param_1,longlong param_2,undefined2 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined2 *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined2 local_62;
  code *local_60;
  longlong **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_1;
  local_70 = param_4;
  local_62 = param_3;
  if (param_1 == 0) {
    local_50 = L"CopyBonesFromSkeleton_InvalidSourceSkeleton";
    local_48._0_4_ = 0x2b;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    pwVar2 = L"CopyBonesFromMesh: SourceSkeleton is Null";
  }
  else {
    if (param_2 != 0) {
      local_90 = &local_78;
      local_58 = &local_90;
      local_88 = &local_62;
      local_80 = &local_70;
      uVar1 = (ulonglong)local_50 >> 0x10;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = (wchar_t *)CONCAT62((uint6)uVar1 & 0xffffffffff00,5);
      local_60 = FUN_143bc7d62;
      FUN_1484b8434(param_2,&local_60,&local_50,0);
      goto LAB_148584480;
    }
    local_50 = L"CopyBonesFromSkeleton_InvalidTargetMesh";
    local_48._0_4_ = 0x27;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    pwVar2 = L"CopyBonesFromMesh: TargetMesh is Null";
  }
  FUN_140208bae(&local_50,&local_60,&local_90,pwVar2);
  FUN_143ba90d7(param_4,2,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
LAB_148584480:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584564 FUN_148584564 body=235 status=ok
// SIG undefined FUN_148584564(void)

void FUN_148584564(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148584650(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584650 FUN_148584650 body=273 status=ok
// SIG undefined FUN_148584650(void)

longlong FUN_148584650(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"DiscardBonesFromMesh_InvalidTargetMesh";
    local_48._0_4_ = 0x26;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"DiscardBonesFromMesh: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    uVar1 = (ulonglong)local_50 >> 0x10;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)CONCAT62((uint6)uVar1 & 0xffffffffff00,5);
    local_60 = &LAB_143bc84f2;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584762 FUN_148584762 body=340 status=ok
// SIG undefined FUN_148584762(void)

void FUN_148584762(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  lVar1 = local_38[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485848b8(local_38[2],plVar2,local_40);
  *param_3 = lVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485848b8 FUN_1485848b8 body=243 status=ok
// SIG undefined FUN_1485848b8(void)

longlong FUN_1485848b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  if (param_1 == 0) {
    local_40 = L"GetAllBonesInfo_InvalidTargetMesh";
    local_38._0_4_ = 0x21;
    FUN_1446e940c(local_4c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_38 = CONCAT44(local_38._4_4_,0x2e);
    FUN_1446e940c(local_50,&local_40);
    FUN_140208bae(&local_40,local_50,local_4c,L"GetAllBonesInfo: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_40 = (wchar_t *)&local_48;
    local_38 = param_2;
    FUN_143bc9f30(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485849b8 FUN_1485849b8 body=601 status=ok
// SIG undefined FUN_1485849b8(void)

void FUN_1485849b8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_45;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_45 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  puVar3 = &local_45;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar4 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar2 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_60;
  local_78 = plVar4;
  FUN_148584c12(local_38,local_40,iVar1 != 0,puVar3);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584c12 FUN_148584c12 body=286 status=ok
// SIG undefined FUN_148584c12(void)

longlong FUN_148584c12(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  undefined1 local_40 [7];
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_39 = param_3;
  local_38 = param_2;
  if (param_1 == 0) {
    local_70 = L"GetBoneChildren_InvalidTargetMesh";
    local_68._0_4_ = 0x21;
    FUN_1446e940c(local_40,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,0x2e);
    FUN_1446e940c(local_44,&local_70);
    FUN_140208bae(&local_70,local_44,local_40,L"GetBoneChildren: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_70);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
  }
  else {
    local_70 = (wchar_t *)&param_6;
    local_68 = &local_38;
    local_58 = param_5;
    local_50 = &local_39;
    local_60 = param_4;
    FUN_143bc8864(&local_70,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584d38 FUN_148584d38 body=499 status=ok
// SIG undefined FUN_148584d38(void)

void FUN_148584d38(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = local_30;
  puVar5 = &local_40;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  FUN_148584f2c(local_30,local_38,puVar4,puVar5);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148584f2c FUN_148584f2c body=264 status=ok
// SIG undefined FUN_148584f2c(void)

longlong FUN_148584f2c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_5;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  if (param_1 == 0) {
    local_60 = L"GetBoneIndex_InvalidTargetMesh";
    local_58._0_4_ = 0x1e;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    FUN_140208bae(&local_60,local_40,local_3c,L"GetBoneIndex: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else {
    local_60 = (wchar_t *)&param_5;
    local_50 = &local_38;
    local_58 = param_4;
    local_48 = param_3;
    FUN_143bc8504(&local_60,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858503c FUN_14858503c body=624 status=ok
// SIG undefined FUN_14858503c(void)

void FUN_14858503c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128 [12];
  undefined8 local_c8 [12];
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_138 = 0xffffffff;
  local_134 = 0;
  local_12c = 0xffffffff;
  puVar5 = &DAT_14c846480;
  puVar6 = local_128;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar6 = local_c8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_68 = &DAT_3f8000003f800000;
  puStack_60 = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  uVar3 = local_40;
  puVar8 = &local_138;
  if (puVar2 != (undefined4 *)0x0) {
    puVar8 = puVar2;
  }
  puVar7 = &local_49;
  if (puVar1 != (undefined1 *)0x0) {
    puVar7 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = local_140;
  FUN_1485852ae(local_40,local_48,puVar7,puVar8);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485852ae FUN_1485852ae body=264 status=ok
// SIG undefined FUN_1485852ae(void)

longlong FUN_1485852ae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_5;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  if (param_1 == 0) {
    local_60 = L"GetBoneInfo_InvalidTargetMesh";
    local_58._0_4_ = 0x1d;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    FUN_140208bae(&local_60,local_40,local_3c,L"GetBoneInfo: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else {
    local_60 = (wchar_t *)&param_5;
    local_58 = &local_38;
    local_50 = param_3;
    local_48 = param_4;
    FUN_143bc9436(&local_60,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485853be FUN_1485853be body=501 status=ok
// SIG undefined FUN_1485853be(void)

void FUN_1485853be(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_3d;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_48 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = local_30;
  puVar5 = &local_3d;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_3c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  FUN_1485855b4(local_30,local_34,puVar4,puVar5);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485855b4 FUN_1485855b4 body=229 status=ok
// SIG undefined FUN_1485855b4(void)

longlong FUN_1485855b4(longlong param_1,undefined4 param_2,uint *param_3,byte *param_4,
                      undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  byte *local_70;
  code *local_68;
  undefined4 **local_60;
  uint local_54;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined1 *local_40;
  uint *local_38;
  code **local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_4c;
  *param_4 = 0;
  local_60 = &local_78;
  local_68 = FUN_143bc315c;
  local_28 = param_5;
  local_4d = 0;
  local_54 = 0;
  local_70 = param_4;
  local_4c = param_2;
  if (param_1 != 0) {
    local_48 = &local_28;
    local_40 = &local_4d;
    local_38 = &local_54;
    local_30 = &local_68;
    FUN_1485bf3a0(&local_48,*(undefined8 *)(param_1 + 0x98));
    if ((*param_4 & 1) != 0) {
      *param_3 = local_54 & 0xffff;
      param_3[1] = (uint)((float)(local_54 >> 0x10) / 65535.0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485856a0 FUN_1485856a0 body=421 status=ok
// SIG undefined FUN_1485856a0(void)

void FUN_1485856a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_40 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_30;
  puVar5 = &local_38;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148585846(local_30,puVar4,puVar5,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585846 FUN_148585846 body=177 status=ok
// SIG undefined FUN_148585846(void)

longlong FUN_148585846(longlong param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  code *local_68;
  undefined4 **local_60;
  undefined1 local_51;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code **local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_3 = 0xffffffff;
  local_60 = &local_70;
  local_68 = FUN_143bc2e4c;
  local_51 = 0;
  local_29 = 0;
  local_70 = param_3;
  local_28 = param_4;
  if (param_1 != 0) {
    local_50 = &local_28;
    local_48 = &local_51;
    local_40 = &local_29;
    local_38 = &local_68;
    FUN_1485bf21c(&local_50,*(undefined8 *)(param_1 + 0x98));
  }
  *param_2 = local_51;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485858f8 FUN_1485858f8 body=326 status=ok
// SIG undefined FUN_1485858f8(void)

void FUN_1485858f8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_28;
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148585a40(local_28,puVar3,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585a40 FUN_148585a40 body=243 status=ok
// SIG undefined FUN_148585a40(void)

longlong FUN_148585a40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  if (param_1 == 0) {
    local_40 = L"GetRootBoneName_InvalidTargetMesh";
    local_38._0_4_ = 0x21;
    FUN_1446e940c(local_4c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_38 = CONCAT44(local_38._4_4_,0x2e);
    FUN_1446e940c(local_50,&local_40);
    FUN_140208bae(&local_40,local_50,local_4c,L"GetRootBoneName: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_40 = (wchar_t *)&local_48;
    local_38 = param_2;
    FUN_143bc8642(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585b3a FUN_148585b3a body=518 status=ok
// SIG undefined FUN_148585b3a(void)

void FUN_148585b3a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_49;
  longlong local_48 [2];
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58;
  FUN_148585d42(local_30,local_34,plVar2,puVar3);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585d42 FUN_148585d42 body=189 status=ok
// SIG undefined FUN_148585d42(void)

longlong FUN_148585d42(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                      undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  code *local_68;
  undefined4 **local_60;
  undefined1 local_55;
  undefined4 local_54;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code **local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_54;
  local_60 = &local_78;
  local_68 = FUN_143bc2ff0;
  local_28 = param_5;
  local_55 = 0;
  local_29 = 0;
  local_70 = param_3;
  local_54 = param_2;
  if (param_1 != 0) {
    local_50 = &local_28;
    local_48 = &local_55;
    local_40 = &local_29;
    local_38 = &local_68;
    FUN_1485bf21c(&local_50,*(undefined8 *)(param_1 + 0x98));
  }
  *param_4 = local_29;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585e06 FUN_148585e06 body=404 status=ok
// SIG undefined FUN_148585e06(void)

void FUN_148585e06(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar2 = local_28;
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148585f9c(local_28,puVar3,local_38,local_40);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148585f9c FUN_148585f9c body=164 status=ok
// SIG undefined FUN_148585f9c(void)

longlong FUN_148585f9c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  local_50 = param_4;
  local_48 = param_3;
  if (param_1 != 0) {
    local_60 = &local_50;
    local_38 = &local_60;
    local_58 = &local_48;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = FUN_143bc2dd0;
    FUN_1484b8434(param_1,&local_40,&local_30,0);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858604e FUN_14858604e body=407 status=ok
// SIG undefined FUN_14858604e(void)

void FUN_14858604e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_40 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_30;
  puVar4 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485861e6(local_30,puVar4,iVar2 != 0,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485861e6 FUN_1485861e6 body=168 status=ok
// SIG undefined FUN_1485861e6(void)

longlong FUN_1485861e6(longlong param_1,undefined1 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  local_49 = param_3;
  local_48 = param_4;
  if (param_1 != 0) {
    local_68 = &local_48;
    local_38 = &local_68;
    local_58 = &local_49;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = FUN_143bc2cc8;
    local_60 = param_2;
    FUN_1484b8434(param_1,&local_40,&local_30,0);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148586296 FUN_148586296 body=325 status=ok
// SIG undefined FUN_148586296(void)

void FUN_148586296(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_28;
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485863dc(local_28,puVar3,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485863dc FUN_1485863dc body=167 status=ok
// SIG undefined FUN_1485863dc(void)

longlong FUN_1485863dc(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_51;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 **local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = &local_69;
  local_68 = &LAB_143bc2cc4;
  local_51 = 0;
  local_29 = 0;
  local_28 = param_3;
  if (param_1 != 0) {
    local_50 = &local_28;
    local_48 = &local_51;
    local_40 = &local_29;
    local_38 = &local_68;
    FUN_1485bf21c(&local_50,*(undefined8 *)(param_1 + 0x98));
  }
  *param_2 = local_51;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148586484 FUN_148586484 body=499 status=ok
// SIG undefined FUN_148586484(void)

void FUN_148586484(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_3a;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3a = 0x100;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  local_48 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  lVar1 = local_38[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50;
  FUN_148586678(local_38[2],plVar2,local_3a,local_48);
  *param_3 = lVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148586678 FUN_148586678 body=352 status=ok
// SIG undefined FUN_148586678(void)

longlong FUN_148586678(longlong param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  longlong local_88;
  undefined2 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined2 local_62;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = param_5;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = param_4;
  local_62 = param_3;
  if (param_1 == 0) {
    local_50 = L"PruneBoneWeights_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2e);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"PruneBoneWeights: TargetMesh is Null");
    FUN_143ba90d7(uVar2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else if (*(int *)(param_2 + 8) != 0) {
    local_90 = &param_5;
    local_58 = &local_90;
    local_80 = &local_62;
    local_78 = &local_70;
    uVar1 = (ulonglong)local_50 >> 0x10;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)CONCAT62((uint6)uVar1 & 0xffffffffff00,5);
    local_60 = FUN_143bc3660;
    local_88 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485867da FUN_1485867da body=419 status=ok
// SIG undefined FUN_1485867da(void)

void FUN_1485867da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_38[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858697e(local_38[2],plVar2,local_40,local_48);
  *param_3 = lVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858697e FUN_14858697e body=707 status=ok
// SIG undefined FUN_14858697e(void)

undefined8 FUN_14858697e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  code *local_138;
  wchar_t ***local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t **local_118;
  undefined8 uStack_110;
  undefined1 local_f9;
  wchar_t **local_f8;
  undefined4 local_f0;
  wchar_t **local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f9 = 0;
  lVar1 = param_2[1];
  local_118 = (wchar_t **)0x0;
  uStack_110 = 0;
  local_140 = param_4;
  if ((longlong)(int)lVar1 < 1) {
    uStack_110._0_4_ = 0;
  }
  else {
    lVar4 = 0;
    local_150 = param_3;
    local_148 = param_1;
    do {
      lVar5 = *param_2;
      uVar6 = *(uint *)(lVar5 + lVar4 * 8);
      if ((int)uVar6 < 0) {
        local_e0 = L"SetAllVertexBoneWeights_InvalidInput";
        local_d8 = 0x24;
        FUN_1446e940c(&local_f8,&local_e0);
        local_e0 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
        local_d8 = 0x2e;
        FUN_1446e940c(&local_128,&local_e0);
        FUN_140208bae(&local_e0,&local_128,&local_f8,
                      L"SetAllVertexBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                     );
        FUN_143ba9449(local_140,2,&local_e0);
        if (local_e0 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_e0 + 0x10))();
        }
        lVar5 = *param_2;
        uVar6 = *(uint *)(lVar5 + lVar4 * 8);
      }
      uVar2 = uStack_110;
      if ((int)uVar6 < 1) {
        uVar6 = 0;
      }
      fVar7 = *(float *)(lVar5 + 4 + lVar4 * 8);
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      lVar5 = (longlong)(int)uStack_110;
      uVar3 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
      if (uStack_110._4_4_ < uVar3) {
        FUN_146faa9c8(&local_118,uVar2 & 0xffffffff);
      }
      *(uint *)((longlong)local_118 + lVar5 * 4) =
           uVar6 & 0xffff | (int)(fVar7 * 65535.0 + 0.5) << 0x10;
      lVar4 = lVar4 + 1;
    } while ((int)lVar1 != lVar4);
    param_1 = local_148;
    param_3 = local_150;
  }
  local_128 = 2;
  uStack_124 = 0xc;
  uStack_120 = 1;
  uStack_11c = 0x100;
  local_b0 = 0;
  local_a8 = 0xc00000000;
  local_f8 = local_118;
  local_f0 = (int)uStack_110;
  local_e8 = &local_e0;
  FUN_146fa976c(&local_e8,&local_f8);
  local_138 = FUN_143bc356a;
  local_130 = &local_f8;
  local_f8 = &local_e0;
  FUN_148587394(param_1,param_3,&local_f9);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148586c48 FUN_148586c48 body=669 status=ok
// SIG undefined FUN_148586c48(void)

void FUN_148586c48(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_89;
  longlong local_88 [3];
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 *local_60;
  longlong *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined4 **local_40;
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar3 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_89 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar4 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_98 = DAT_14c99c780;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = &local_30;
  local_30 = local_a0;
  local_60 = &local_34;
  local_34 = local_6c;
  local_35 = 0;
  local_40 = &local_60;
  local_48 = FUN_143bc327e;
  local_58 = plVar3;
  uVar2 = FUN_148587394(local_68,local_98);
  *puVar4 = uVar2;
  *param_3 = uVar1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148586ee6 FUN_148586ee6 body=729 status=ok
// SIG undefined FUN_148586ee6(void)

void FUN_148586ee6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_68 = (uint)local_68._2_2_ << 0x10;
  uStack_64 = DAT_14c99c780;
  uStack_5c = DAT_14c99c780;
  uStack_50 = 0xbff0000000000000;
  local_48 = 0xbff0000000000000;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_148568536(&local_78);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_78;
  local_88 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_a8 = uStack_3c._4_4_;
  uStack_a4 = (undefined4)uStack_34;
  uStack_a0 = uStack_34._4_4_;
  uStack_9c = uStack_2c;
  local_b8 = (undefined4)local_48;
  uStack_b4 = local_48._4_4_;
  uStack_b0 = uStack_40;
  uStack_ac = (undefined4)uStack_3c;
  local_c8 = uStack_5c._4_4_;
  uStack_c4 = uStack_54;
  uStack_c0 = (undefined4)uStack_50;
  uStack_bc = uStack_50._4_4_;
  local_d8 = local_68;
  uStack_d4 = (undefined4)uStack_64;
  uStack_d0 = uStack_64._4_4_;
  uStack_cc = (undefined4)uStack_5c;
  local_e8 = local_80;
  uVar3 = FUN_1485871c0(local_20,local_28,&local_d8,&local_90);
  *param_3 = uVar3;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485871c0 FUN_1485871c0 body=464 status=ok
// SIG undefined FUN_1485871c0(void)

longlong FUN_1485871c0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong local_40;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_2;
  if (param_1 == 0) {
    local_68 = L"TransferBoneWeightsFromMesh_InvalidSourceMesh";
    local_60._0_4_ = 0x2d;
    FUN_1446e940c(local_44,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2e);
    FUN_1446e940c(local_48,&local_68);
    FUN_140208bae(&local_68,local_48,local_44,L"TransferBoneWeightsFromMesh: Source Mesh is Null");
    FUN_143ba90d7(uVar4,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else if (param_2 == 0) {
    local_68 = L"TransferBoneWeightsFromMesh_InvalidTargetMesh";
    local_60._0_4_ = 0x2d;
    FUN_1446e940c(local_44,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2e);
    FUN_1446e940c(local_48,&local_68);
    FUN_140208bae(&local_68,local_48,local_44,L"TransferBoneWeightsFromMesh: Target Mesh is Null");
    FUN_143ba90d7(uVar4,2,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    param_2 = 0;
  }
  else {
    local_68 = (wchar_t *)&param_5;
    local_58 = &local_40;
    local_60 = param_3;
    local_50 = param_4;
    FUN_143bc5730(&local_68,*(undefined8 *)(param_1 + 0x98));
    param_2 = local_40;
  }
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148587394 FUN_148587394 body=177 status=ok
// SIG undefined FUN_148587394(void)

ulonglong FUN_148587394(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  *param_3 = 0;
  local_49 = 0;
  local_48 = param_2;
  if (param_1 != 0) {
    local_70 = &local_48;
    local_38 = &local_70;
    local_60 = &local_49;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = &LAB_1485bf422;
    local_68 = param_3;
    local_58 = param_4;
    uVar1 = FUN_1484b8434();
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_49);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148587446 FUN_148587446 body=109 status=ok
// SIG undefined FUN_148587446(void)

void FUN_148587446(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1485bf27e(param_1,iVar1);
    }
    FUN_1485bf26b((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1485bf304(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1485874fe FUN_1485874fe body=943 status=ok
// SIG undefined FUN_1485874fe(void)

void FUN_1485874fe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 local_208 [12];
  undefined8 local_1a8 [13];
  undefined8 local_140;
  uint local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  uint local_120;
  undefined1 local_119;
  undefined8 local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_118[0] = 0;
  local_118[1] = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_119 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_119);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_119);
  }
  local_128 = 0x101;
  uStack_124 = 0x3c23d70a;
  local_120 = local_120 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_228 = local_119;
  local_218 = local_130;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_140 = CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
  local_220 = &local_140;
  local_138 = local_120;
  puVar4 = local_118;
  puVar5 = local_1a8;
  for (lVar3 = 0xc; uVar1 = local_b0, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_a8;
  puVar5 = local_208;
  for (lVar3 = 0xc; uVar2 = local_48, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1485878ae(local_48,local_208,uVar1);
  *param_3 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485878ae FUN_1485878ae body=1441 status=ok
// SIG undefined FUN_1485878ae(void)

longlong FUN_1485878ae(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                      char param_5,char *param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_558 [32];
  undefined1 local_538;
  undefined1 local_528 [64];
  wchar_t *local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d5;
  undefined4 local_4d4;
  longlong local_4d0;
  wchar_t *local_4c8;
  undefined8 *puStack_4c0;
  longlong *local_4b8;
  wchar_t **ppwStack_4b0;
  undefined **local_4a8;
  char *pcStack_4a0;
  undefined1 *local_498;
  wchar_t **ppwStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined8 local_480;
  wchar_t *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  longlong local_378 [2];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  char local_358 [32];
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  longlong local_318;
  undefined4 local_310;
  wchar_t **local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined3 uStack_2f0;
  undefined5 local_2ed;
  undefined3 uStack_2e8;
  undefined8 uStack_2e5;
  undefined1 *local_2dc;
  wchar_t *local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  undefined **local_2a8;
  char *pcStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  wchar_t *local_260;
  undefined4 local_258;
  int local_f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4d0 = param_3;
  if (param_1 == 0) {
    local_260 = L"ApplyMeshBoolean_InvalidInput1";
    local_258 = 0x1e;
    FUN_1446e940c(&local_4c8,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_258 = 0x2b;
    FUN_1446e940c(&local_308,&local_260);
    pwVar3 = L"ApplyMeshBoolean: TargetMesh is Null";
  }
  else {
    if (param_3 != 0) {
      local_4d4 = 0;
      if (param_5 == '\x02') {
        local_4d4 = 1;
      }
      else if (param_5 == '\x01') {
        local_4d4 = 2;
      }
      local_538 = 0;
      FUN_1411b354a(&local_260,0,0,0);
      local_498 = &local_4d5;
      local_4d5 = 0;
      ppwStack_490 = &local_4e8;
      local_4e8 = (wchar_t *)0x0;
      uStack_4e0 = 0;
      local_4c8 = (wchar_t *)&local_4d0;
      local_4a8 = (undefined **)&local_4d4;
      pcStack_4a0 = param_6;
      puStack_4c0 = param_2;
      local_4b8 = param_4;
      ppwStack_4b0 = &local_260;
      FUN_143bcaa3a(&local_4c8,*(undefined8 *)(param_1 + 0x98));
      if ((param_6[8] == '\0') && (local_f0 == 0)) {
        local_4c8 = L"BooleanUnion_Failed";
        puStack_4c0._0_4_ = 0x13;
        FUN_1446e940c(&local_308,&local_4c8);
        local_4c8 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
        puStack_4c0 = (undefined8 *)CONCAT44(puStack_4c0._4_4_,0x2b);
        FUN_1446e940c(local_358,&local_4c8);
        FUN_140208bae(&local_4c8,local_358,&local_308,
                      L"BooleanUnion: Boolean operation failed due to an empty result; enable Allow Empty Result if empty results should be accepted."
                     );
        FUN_143ba90d7(param_7,2,&local_4c8);
        if (local_4c8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_4c8 + 0x10))();
        }
      }
      else {
        local_4c8 = (wchar_t *)*param_2;
        puStack_4c0 = (undefined8 *)param_2[1];
        local_4b8 = (longlong *)param_2[2];
        ppwStack_4b0 = (wchar_t **)param_2[3];
        local_4a8 = (undefined **)param_2[4];
        pcStack_4a0 = (char *)param_2[5];
        local_498 = (undefined1 *)param_2[6];
        ppwStack_490 = (wchar_t **)param_2[8];
        uStack_488 = *(undefined4 *)(param_2 + 9);
        uStack_484 = *(undefined4 *)((longlong)param_2 + 0x4c);
        local_480 = param_2[10];
        FUN_146c3cfa5(&local_260,&local_4c8,1);
        if ((0 < (int)uStack_4e0) && (*param_6 == '\x01')) {
          lStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e5 = 0;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2ed = 0;
          local_2dc = &DAT_100000002;
          local_2c8 = (wchar_t *)0x0;
          local_2b8 = (longlong *)0x0;
          local_288 = 0;
          uStack_280 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_338 = 0;
          local_330 = 0;
          local_358[0] = '\0';
          local_358[1] = '\0';
          local_358[2] = '\0';
          local_358[3] = '\0';
          local_358[4] = '\0';
          local_358[5] = '\0';
          local_358[6] = '\0';
          local_358[7] = '\0';
          local_358[8] = '\0';
          local_358[9] = '\0';
          local_358[10] = '\0';
          local_358[0xb] = '\0';
          local_358[0xc] = '\0';
          local_358[0xd] = '\0';
          local_358[0xe] = '\0';
          local_358[0xf] = '\0';
          local_32c = 0xffffffff00000080;
          local_324 = 0;
          local_318 = 0;
          local_310 = 0;
          local_4c8 = local_4e8;
          puStack_4c0 = (undefined8 *)CONCAT44(puStack_4c0._4_4_,(int)uStack_4e0);
          local_308 = &local_260;
          FUN_146bc855c(local_358,&local_4c8);
          local_388 = local_2b8;
          local_398 = local_2c8;
          local_498 = local_298;
          ppwStack_490 = uStack_290;
          local_4a8 = local_2a8;
          pcStack_4a0 = pcStack_2a0;
          local_4b8 = local_2b8;
          ppwStack_4b0 = uStack_2b0;
          local_4c8 = local_2c8;
          puStack_4c0 = (undefined8 *)uStack_2c0;
          local_2c8 = 
          L"譈謁ࡈ䠻琴譇䠊傍䰸䂋䵀삅ཉ큅譄䡀ａ䇈젡譆舄荁\xfff8≴譈䤐쁣赌䀄㥂舌鐏瓀与ҍ䖂䂋䄄\xf883痿쏢쀱쳃赈\xe505㫿䠇䊉䠐䆋䠈䊉䠘䊍쌘赈ࡁ쳃譈䠁䂋ㄘ䣒\xe0ff䡖\xec83䠠캉튅ࡴ襈\xe8f1牶ﱃ襈䣰쒃帠쳃坖腈\xf8ec"
          ;
          local_2b8 = (longlong *)0x0;
          local_2a8 = &PTR_LAB_14af7ade0;
          pcStack_2a0 = local_358;
          uStack_390 = (undefined4)uStack_2c0;
          uStack_38c = uStack_2c0._4_4_;
          local_368 = (undefined4)local_298;
          uStack_364 = local_298._4_4_;
          uStack_360 = (undefined4)uStack_290;
          uStack_35c = uStack_290._4_4_;
          uStack_380 = (undefined4)uStack_2b0;
          uStack_37c = uStack_2b0._4_4_;
          if (local_398 != (wchar_t *)0x0) {
            plVar1 = local_388;
            if (local_388 == (longlong *)0x0) {
              plVar1 = local_378;
            }
            (**(code **)(*plVar1 + 0x10))();
          }
          FUN_146c68b4c(&local_308);
          if ((longlong)(int)local_2f8 != 0) {
            lVar4 = (longlong)(int)local_2f8 << 6;
            lVar2 = lStack_300;
            do {
              FUN_146c7f310(local_528,lVar2);
              FUN_1483150ae(&local_4c8,&local_260,local_528);
              FUN_148315182(&local_4c8,0xffffffff);
              FUN_148315ddc(&local_4c8);
              lVar2 = lVar2 + 0x40;
              lVar4 = lVar4 + -0x40;
            } while (lVar4 != 0);
          }
          local_310 = 0;
          if (local_318 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(local_358);
          FUN_1482f1656(&local_308);
        }
        FUN_1484b1fb6(param_1,&local_260);
      }
      if (local_4e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_141082778(&local_260);
      goto LAB_148587be0;
    }
    local_260 = L"ApplyMeshBoolean_InvalidInput2";
    local_258 = 0x1e;
    FUN_1446e940c(&local_4c8,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_258 = 0x2b;
    FUN_1446e940c(&local_308,&local_260);
    pwVar3 = L"ApplyMeshBoolean: ToolMesh is Null";
  }
  FUN_140208bae(&local_260,&local_308,&local_4c8,pwVar3);
  FUN_143ba90d7(param_7,2,&local_260);
  if (local_260 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_260 + 0x10))();
  }
LAB_148587be0:
  if ((local_40 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148587e50 FUN_148587e50 body=558 status=ok
// SIG undefined FUN_148587e50(void)

void FUN_148587e50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108 [13];
  undefined2 local_9c;
  undefined1 local_9a;
  undefined8 local_98;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_8b = 1;
  local_89 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8b);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar1 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_9c = local_8b;
  local_9a = local_89;
  puVar4 = local_88;
  puVar5 = local_108;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_148588080(local_28,local_108,&local_9c,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148588080 FUN_148588080 body=547 status=ok
// SIG undefined FUN_148588080(void)

longlong FUN_148588080(longlong param_1,double *param_2,char *param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_f8 [40];
  char *local_d0;
  double *local_c8;
  double *local_c0;
  undefined8 *local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  code *local_70;
  char **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 == 0) {
    local_60 = L"ApplyMeshMirror_InvalidInput";
    local_58._0_4_ = 0x1c;
    FUN_1446e940c(&local_d0,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_98,&local_60);
    FUN_140208bae(&local_60,&local_98,&local_d0,L"ApplyMeshMirror: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else {
    local_78 = 0x3ee4f8b588000000;
    local_98 = param_2[4];
    dStack_90 = param_2[5];
    local_88 = param_2[6];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2] + param_2[2];
    local_a0 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
    dStack_a8 = dVar3 * dVar2 - (dVar1 + dVar1) * param_2[3];
    local_b0 = dVar1 * dVar3 + param_2[3] * (dVar2 + dVar2);
    if ((*param_3 == '\x01') && (param_3[1] == '\x01')) {
      local_a0 = -local_a0;
      local_b0 = -local_b0;
      dStack_a8 = -dStack_a8;
    }
    local_68 = &local_d0;
    local_c8 = &local_98;
    local_c0 = &local_b0;
    local_b8 = &local_78;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
    local_70 = FUN_143bcbb8a;
    local_d0 = param_3;
    FUN_1484b8434(param_1,&local_70,&local_60,0);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485882a4 FUN_1485882a4 body=569 status=ok
// SIG undefined FUN_1485882a4(void)

void FUN_1485882a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118 [12];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_98 = CONCAT31(local_98._1_3_,1);
  uStack_94 = 0xffffffff;
  uStack_90 = CONCAT22(uStack_90._2_2_,1);
  uStack_8c = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar1 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_98;
  uStack_b4 = uStack_94;
  uStack_b0 = uStack_90;
  uStack_ac = uStack_8c;
  puVar4 = local_88;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1485884de(local_28,local_118,&local_b8,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485884de FUN_1485884de body=520 status=ok
// SIG undefined FUN_1485884de(void)

longlong FUN_1485884de(longlong param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double *local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  undefined1 local_a1;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  code *local_70;
  double **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == 0) {
    local_60 = L"ApplyMeshPlaneCut_InvalidInput";
    local_58._0_4_ = 0x1e;
    FUN_1446e940c(&local_c8,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_88,&local_60);
    FUN_140208bae(&local_60,&local_88,&local_c8,L"ApplyMeshPlaneCut: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else {
    local_88 = param_2[4];
    dStack_80 = param_2[5];
    local_78 = param_2[6];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2] + param_2[2];
    local_90 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
    dStack_98 = dVar3 * dVar2 - (dVar1 + dVar1) * param_2[3];
    local_a0 = dVar1 * dVar3 + param_2[3] * (dVar2 + dVar2);
    if (*(char *)(param_3 + 9) == '\x01') {
      local_90 = -local_90;
      local_a0 = -local_a0;
      dStack_98 = -dStack_98;
    }
    local_b0 = &local_a1;
    local_a1 = 0;
    local_c8 = &local_88;
    local_68 = &local_c8;
    local_c0 = &local_a0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
    local_70 = FUN_143bcb34e;
    local_b8 = param_3;
    FUN_1484b8434(param_1,&local_70,&local_60,0);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485886e8 FUN_1485886e8 body=585 status=ok
// SIG undefined FUN_1485886e8(void)

void FUN_1485886e8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128 [12];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_9c = CONCAT31(local_9c._1_3_,1);
  uStack_98 = 0xffffffff;
  uStack_94 = CONCAT31(uStack_94._1_3_,1);
  uStack_90 = 0x3f8000003c23d70a;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  uVar1 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_9c;
  uStack_c4 = uStack_98;
  uStack_c0 = uStack_94;
  uStack_bc = (undefined4)uStack_90;
  local_b8 = uStack_90._4_4_;
  puVar4 = local_88;
  puVar5 = local_128;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_148588932(local_28,local_128,&local_c8,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148588932 FUN_148588932 body=510 status=ok
// SIG undefined FUN_148588932(void)

longlong FUN_148588932(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_f8 [40];
  undefined1 *local_d0;
  double *local_c8;
  double *local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_78 [8];
  code *local_70;
  undefined1 **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446ddc76(local_78,"ObjectIndexAttribute",1);
  if (param_1 == 0) {
    local_60 = L"ApplyMeshPlaneSlice_InvalidInput";
    local_58._0_4_ = 0x20;
    FUN_1446e940c(&local_d0,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_98,&local_60);
    FUN_140208bae(&local_60,&local_98,&local_d0,L"ApplyMeshPlaneSlice: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else {
    local_98 = param_2[4];
    dStack_90 = param_2[5];
    local_88 = param_2[6];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    local_c8 = &local_98;
    dVar3 = param_2[2] + param_2[2];
    local_b0 = dVar1 * dVar3 + param_2[3] * (dVar2 + dVar2);
    local_a8 = dVar3 * dVar2 - (dVar1 + dVar1) * param_2[3];
    local_a0 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
    local_c0 = &local_b0;
    local_68 = &local_d0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
    local_70 = FUN_143bcb53c;
    local_d0 = local_78;
    local_b8 = param_3;
    FUN_1484b8434(param_1,&local_70,&local_60,0);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148588b32 FUN_148588b32 body=344 status=ok
// SIG undefined FUN_148588b32(void)

void FUN_148588b32(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0x101;
  uStack_2a = 1;
  uStack_28 = 0x3c23d70a;
  uStack_24 = 0x3f000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_28,CONCAT13(uStack_29,CONCAT12(uStack_2a,local_2c)));
  local_40 = uStack_24;
  FUN_148588c8c(local_20,&local_48,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148588c8c FUN_148588c8c body=422 status=ok
// SIG undefined FUN_148588c8c(void)

longlong FUN_148588c8c(longlong param_1,code *param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  code *local_90;
  code **local_88;
  code *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  code *local_60;
  code **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == 0) {
    local_50 = L"ApplyMeshSelfUnion_InvalidInput";
    local_48._0_4_ = 0x1f;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBooleanFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"ApplyMeshSelfUnion: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_88 = (code **)&local_61;
    local_61 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = &local_90;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bcae3c;
    local_90 = param_2;
    local_80 = (code *)&local_78;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
    if ((0 < (int)uStack_70) && (*param_2 == (code)0x1)) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
      local_90 = FUN_143bcafb2;
      local_88 = &local_60;
      local_60 = (code *)&local_78;
      FUN_1484b8434(param_1,&local_90,&local_50,0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148588e6a FUN_148588e6a body=824 status=ok
// SIG undefined FUN_148588e6a(void)

void FUN_148588e6a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [12];
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined1 local_119;
  undefined8 local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_118[0] = 0;
  local_118[1] = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_119 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_119);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_119);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_128 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_1f0 = local_128;
  local_1f8 = &local_119;
  if (puVar1 != (undefined1 *)0x0) {
    local_1f8 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_118;
  puVar6 = local_188;
  for (lVar4 = 0xc; uVar2 = local_b0, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = local_a8;
  puVar6 = local_1e8;
  for (lVar4 = 0xc; uVar3 = local_48, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1485891a4(local_48,local_1e8,uVar2);
  *param_3 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485891a4 FUN_1485891a4 body=354 status=ok
// SIG undefined FUN_1485891a4(void)

longlong FUN_1485891a4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined1 *param_5,undefined8 param_6)

{
  wchar_t *pwVar1;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_5 = 0;
  local_38 = param_3;
  if (param_1 == 0) {
    local_60 = L"IsIntersectingMesh_InvalidInput";
    local_58._0_4_ = 0x1f;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    pwVar1 = L"IsIntersectingMesh: TargetMesh is Null";
  }
  else {
    if (param_3 != 0) {
      local_60 = (wchar_t *)&local_38;
      local_48 = param_5;
      local_58 = param_2;
      local_50 = param_4;
      FUN_143bcbef8(&local_60,*(undefined8 *)(param_1 + 0x98));
      goto LAB_14858928c;
    }
    local_60 = L"IsIntersectingMesh_InvalidInput2";
    local_58._0_4_ = 0x20;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    pwVar1 = L"IsIntersectingMesh: OtherMesh is Null";
  }
  FUN_140208bae(&local_60,local_40,local_3c,pwVar1);
  FUN_143ba90d7(param_6,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_14858928c:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858930e FUN_14858930e body=685 status=ok
// SIG undefined FUN_14858930e(void)

void FUN_14858930e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_45;
  undefined1 local_44;
  undefined4 uStack_43;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = 1;
  uStack_43 = 0;
  uStack_3f = 0;
  local_3c = 0x358637bd;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_45 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  puVar2 = &local_45;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = CONCAT17(uStack_3d,CONCAT25(uStack_3f,CONCAT41(uStack_43,local_44)));
  local_80 = local_3c;
  local_90 = local_78;
  local_98 = puVar3;
  FUN_1485895bc(local_30,local_38,&local_88,puVar2);
  *param_3 = uVar1;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485895bc FUN_1485895bc body=355 status=ok
// SIG undefined FUN_1485895bc(void)

longlong FUN_1485895bc(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wchar_t *pwVar1;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_4 = 0;
  local_38 = param_2;
  if (param_1 == 0) {
    local_60 = L"IsSameMeshAs_InvalidInput";
    local_58._0_4_ = 0x19;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    pwVar1 = L"IsSameMeshAs: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      local_60 = (wchar_t *)&local_38;
      local_48 = param_5;
      local_58 = param_3;
      local_50 = param_4;
      FUN_143bcbda2(&local_60,*(undefined8 *)(param_1 + 0x98));
      goto LAB_1485896a5;
    }
    local_60 = L"IsSameMeshAs_InvalidInput2";
    local_58._0_4_ = 0x1a;
    FUN_1446e940c(local_3c,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2e);
    FUN_1446e940c(local_40,&local_60);
    pwVar1 = L"IsSameMeshAs: OtherMesh is Null";
  }
  FUN_140208bae(&local_60,local_40,local_3c,pwVar1);
  FUN_143ba90d7(param_6,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_1485896a5:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148589720 FUN_148589720 body=789 status=ok
// SIG undefined FUN_148589720(void)

void FUN_148589720(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_58 = 0;
  puVar5 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_70 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar4 = local_40;
  local_88 = &local_70;
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = puVar5;
  }
  local_90 = &local_68;
  if (puVar3 != (undefined8 *)0x0) {
    local_90 = puVar3;
  }
  local_98 = &local_60;
  if (puVar2 != (undefined8 *)0x0) {
    local_98 = puVar2;
  }
  puVar5 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_78;
  FUN_148589a36(local_40,local_48,local_49,puVar5);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148589a36 FUN_148589a36 body=398 status=ok
// SIG undefined FUN_148589a36(void)

longlong FUN_148589a36(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  wchar_t *pwVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = 0x47efffffe0000000;
  local_40 = param_2;
  local_31 = param_3;
  if (param_1 == 0) {
    local_78 = L"MeasureDistancesBetweenMeshes_InvalidInput";
    local_70._0_4_ = 0x2a;
    FUN_1446e940c(local_44,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x2e);
    FUN_1446e940c(local_48,&local_78);
    pwVar1 = L"MeasureDistancesBetweenMeshes: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      local_78 = (wchar_t *)&local_40;
      local_70 = &local_31;
      local_60 = param_5;
      local_58 = param_6;
      local_50 = param_7;
      local_68 = param_4;
      FUN_143bcc75e(&local_78,*(undefined8 *)(param_1 + 0x98));
      goto LAB_148589b4a;
    }
    local_78 = L"MeasureDistancesBetweenMeshes_InvalidInput2";
    local_70._0_4_ = 0x2b;
    FUN_1446e940c(local_44,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshComparisonFunctions";
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x2e);
    FUN_1446e940c(local_48,&local_78);
    pwVar1 = L"MeasureDistancesBetweenMeshes: OtherMesh is Null";
  }
  FUN_140208bae(&local_78,local_48,local_44,pwVar1);
  FUN_143ba90d7(param_8,2,&local_78);
  if (local_78 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_78 + 0x10))();
  }
LAB_148589b4a:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148589bd4 FUN_148589bd4 body=782 status=ok
// SIG undefined FUN_148589bd4(void)

void FUN_148589bd4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar6 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_148568536(&local_58);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  plVar5 = &local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar3 = local_64;
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar2 = local_68;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  uVar4 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_90 = iVar2 != 0;
  local_98 = iVar3 != 0;
  local_88 = local_70;
  FUN_148589ee4(local_40,*puVar6,&local_80,plVar5);
  *param_3 = uVar4;
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_14689c22e();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148589ee4 FUN_148589ee4 body=625 status=ok
// SIG undefined FUN_148589ee4(void)

longlong FUN_148589ee4(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      char param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined1 local_290;
  longlong *local_288;
  char *local_280;
  wchar_t **local_278;
  undefined1 *local_270;
  undefined1 local_268 [6];
  char local_262;
  undefined1 local_261;
  wchar_t *local_260;
  undefined4 local_258;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_261 = param_6;
  local_262 = param_5;
  if (param_1 == 0) {
    local_260 = L"CopyMeshSelectionToMesh_InvalidInput";
    local_258 = 0x24;
    FUN_1446e940c(&local_288,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_258 = 0x31;
    FUN_1446e940c(local_268,&local_260);
    pwVar4 = L"CopyMeshSelectionToMesh: TargetMesh is Null";
  }
  else if (param_2 == 0) {
    local_260 = L"CopyMeshSelectionToMesh_InvalidInput2";
    local_258 = 0x25;
    FUN_1446e940c(&local_288,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_258 = 0x31;
    FUN_1446e940c(local_268,&local_260);
    pwVar4 = L"CopyMeshSelectionToMesh: StoreToSubmesh is Null";
  }
  else {
    if (*(int *)(*param_3 + 0x10) != *(int *)(*param_3 + 0x3c)) {
      local_298 = 0;
      FUN_1411b354a(&local_260,0,0,0);
      if (param_5 != '\0') {
        local_290 = 1;
        local_298 = 1;
        FUN_146c005f0(&local_260,*(undefined8 *)(param_2 + 0x98),1,1);
      }
      local_280 = &local_262;
      local_270 = &local_261;
      local_288 = param_3;
      local_278 = &local_260;
      FUN_143bcd404(&local_288,*(undefined8 *)(param_1 + 0x98));
      FUN_1484b1fb6(param_2,&local_260);
      *param_4 = param_2;
      FUN_141082778(&local_260);
      goto LAB_14858a022;
    }
    local_260 = L"CopyMeshSelectionToMesh_InvalidList";
    local_258 = 0x23;
    FUN_1446e940c(&local_288,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_258 = 0x31;
    FUN_1446e940c(local_268,&local_260);
    pwVar4 = L"CopyMeshSelectionToMesh: Selection is empty";
  }
  FUN_140208bae(&local_260,local_268,&local_288,pwVar4);
  FUN_143ba90d7(param_7,2,&local_260);
  if (local_260 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_260 + 0x10))();
  }
LAB_14858a022:
  plVar3 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858a156 FUN_14858a156 body=450 status=ok
// SIG undefined FUN_14858a156(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14858a156(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 2);
  }
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  plVar3 = local_40 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  plVar2 = local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_40[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858a31a(local_40[2],*plVar3,plVar2,local_48);
  *param_3 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_14689c22e();
  }
  if ((local_40[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858a31a FUN_14858a31a body=393 status=ok
// SIG undefined FUN_14858a31a(void)

longlong FUN_14858a31a(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_260;
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  wchar_t *local_250;
  undefined4 local_248;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_1 == 0) {
    local_250 = L"CopyMeshToMesh_InvalidFirstInput";
    local_248 = 0x20;
    FUN_1446e940c(local_254,&local_250);
    local_250 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_248 = 0x31;
    FUN_1446e940c(local_258,&local_250);
    pwVar1 = L"CopyMeshToMesh: CopyFromMesh is Null";
  }
  else {
    if (param_2 != 0) {
      local_268 = 0;
      FUN_1411b354a(&local_250,0,0,0);
      local_260 = 1;
      local_268 = 1;
      FUN_146c005f0(&local_250,*(undefined8 *)(param_1 + 0x98),1,1);
      FUN_1484b1fb6(param_2,&local_250);
      *param_3 = param_2;
      FUN_141082778(&local_250);
      goto LAB_14858a423;
    }
    local_250 = L"CopyMeshToMesh_InvalidSecondInput";
    local_248 = 0x21;
    FUN_1446e940c(local_254,&local_250);
    local_250 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_248 = 0x31;
    FUN_1446e940c(local_258,&local_250);
    pwVar1 = L"CopyMeshToMesh: CopyToMesh is Null";
  }
  FUN_140208bae(&local_250,local_258,local_254,pwVar1);
  FUN_143ba90d7(param_4,2,&local_250);
  if (local_250 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_250 + 0x10))();
  }
LAB_14858a423:
  if ((local_30 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858a4a4 FUN_14858a4a4 body=623 status=ok
// SIG undefined FUN_14858a4a4(void)

void FUN_14858a4a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar4 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78[0] = local_50[0];
  local_70 = local_48;
  local_68 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_88 = local_60;
  FUN_14858a714(local_30,*puVar5,local_78,plVar4);
  *param_3 = uVar3;
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_14689c22e();
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858a714 FUN_14858a714 body=650 status=ok
// SIG undefined FUN_14858a714(void)

longlong FUN_14858a714(longlong param_1,longlong param_2,byte *param_3,longlong *param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  wchar_t **local_270;
  byte *local_268;
  undefined1 local_25c [4];
  wchar_t *local_258;
  undefined4 local_250;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_1 == 0) {
    local_258 = L"GetSubMeshFromMesh_InvalidInput";
    local_250 = 0x1f;
    FUN_1446e940c(&local_270,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_250 = 0x31;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"GetSubMeshFromMesh: TargetMesh is Null";
  }
  else if (param_2 == 0) {
    local_258 = L"GetSubMeshFromMesh_InvalidInput2";
    local_250 = 0x20;
    FUN_1446e940c(&local_270,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_250 = 0x31;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"GetSubMeshFromMesh: Submesh is Null";
  }
  else if ((*(longlong *)(param_3 + 8) == 0) || (*(int *)(*(longlong *)(param_3 + 8) + 8) == 0)) {
    local_258 = L"GetSubMeshFromMesh_InvalidList";
    local_250 = 0x1e;
    FUN_1446e940c(&local_270,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_250 = 0x31;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"GetSubMeshFromMesh: TriangleList is empty";
  }
  else {
    if (*param_3 < 2) {
      local_278 = 0;
      FUN_1411b354a(&local_258,0,0,0);
      local_270 = &local_258;
      local_268 = param_3;
      FUN_143bcd17c(&local_270,*(undefined8 *)(param_1 + 0x98));
      FUN_1484b1fb6(param_2,&local_258);
      *param_4 = param_2;
      FUN_141082778(&local_258);
      goto LAB_14858a846;
    }
    local_258 = L"GetSubMeshFromMesh_InvalidList2";
    local_250 = 0x1f;
    FUN_1446e940c(&local_270,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_250 = 0x31;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"GetSubMeshFromMesh: TriangleList has incompatible index type";
  }
  FUN_140208bae(&local_258,local_25c,&local_270,pwVar4);
  FUN_143ba90d7(param_5,2,&local_258);
  if (local_258 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_258 + 0x10))();
  }
LAB_14858a846:
  plVar3 = *(longlong **)(param_3 + 0x10);
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
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858a9a0 FUN_14858a9a0 body=416 status=ok
// SIG undefined FUN_14858a9a0(void)

void FUN_14858a9a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_38[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858ab42(local_38[2],plVar2,local_40,local_48);
  *param_3 = lVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858ab42 FUN_14858ab42 body=284 status=ok
// SIG undefined FUN_14858ab42(void)

longlong FUN_14858ab42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  wchar_t **local_58;
  undefined1 local_4c [4];
  wchar_t *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    local_48 = L"SplitMeshByComponents_InvalidInput";
    uStack_40._0_4_ = 0x22;
    FUN_1446e940c(&local_58,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    uStack_40 = CONCAT44(uStack_40._4_4_,0x31);
    FUN_1446e940c(local_4c,&local_48);
    FUN_140208bae(&local_48,local_4c,&local_58,L"SplitMeshByComponents: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  else {
    local_48 = (wchar_t *)0x0;
    uStack_40 = 0;
    local_58 = &local_48;
    FUN_143bcc954(&local_58,*(undefined8 *)(param_1 + 0x98));
    FUN_14858b3d3(param_1,param_3,&local_48,param_2);
    FUN_1461a8f9d(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858ac60 FUN_14858ac60 body=532 status=ok
// SIG undefined FUN_14858ac60(void)

void FUN_14858ac60(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  FUN_14858ae76(local_30,plVar2,plVar3,local_60);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858ae76 FUN_14858ae76 body=356 status=ok
// SIG undefined FUN_14858ae76(void)

longlong FUN_14858ae76(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  wchar_t **local_58;
  undefined1 local_4c [4];
  wchar_t *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1485bffc0(param_2);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  if (param_1 == 0) {
    local_48 = L"SplitMeshByComponents_InvalidInput";
    uStack_40._0_4_ = 0x22;
    FUN_1446e940c(&local_60,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    uStack_40 = CONCAT44(uStack_40._4_4_,0x31);
    FUN_1446e940c(local_4c,&local_48);
    FUN_140208bae(&local_48,local_4c,&local_60,L"SplitMeshByComponents: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  else {
    local_48 = (wchar_t *)0x0;
    uStack_40 = 0;
    local_60 = param_3;
    local_58 = &local_48;
    FUN_143bccac8(&local_60,*(undefined8 *)(param_1 + 0x98));
    FUN_14858b3d3(param_1,param_4,&local_48,param_2);
    FUN_1461a8f9d(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858afdc FUN_14858afdc body=617 status=ok
// SIG undefined FUN_14858afdc(void)

void FUN_14858afdc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_68;
  local_78 = local_60;
  FUN_14858b246(local_30,CONCAT44(uStack_34,local_38),plVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858b246 FUN_14858b246 body=393 status=ok
// SIG undefined FUN_14858b246(void)

longlong FUN_14858b246(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_3 + 8) = 0;
  local_38 = param_2;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_1485bffc0(param_3);
  }
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  if (param_1 == 0) {
    local_78 = L"SplitMeshByPolygroups_InvalidInput";
    local_70._0_4_ = 0x22;
    FUN_1446e940c(&local_58,&local_78);
    local_78 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0x31);
    FUN_1446e940c(local_3c,&local_78);
    FUN_140208bae(&local_78,local_3c,&local_58,L"SplitMeshByPolygroups: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_78 = (wchar_t *)&local_38;
    local_70 = &param_6;
    local_68 = param_4;
    local_60 = &local_58;
    FUN_143bcccda(&local_78,*(undefined8 *)(param_1 + 0x98));
    FUN_14858b3d3(param_1,param_5,&local_58,param_3);
    FUN_1461a8f9d(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858b3d3 FUN_14858b3d3 body=252 status=ok
// SIG undefined FUN_14858b3d3(void)

void FUN_14858b3d3(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_14858b4d0(param_4);
  uVar1 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar1 == 0) {
    if (param_2 == 0) {
      uVar3 = FUN_1409ffe1d();
      uVar3 = FUN_1484b7d1a(uVar3);
    }
    else {
      uVar3 = FUN_143b6f78e(param_2);
    }
    FUN_1484b8544(uVar3,*(undefined8 *)(param_1 + 0x98));
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
      FUN_1485bfe9e(param_4,iVar2);
    }
    *(undefined8 *)(*param_4 + (longlong)iVar2 * 8) = uVar3;
  }
  else if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (param_2 == 0) {
        uVar3 = FUN_1409ffe1d();
        uVar3 = FUN_1484b7d1a(uVar3);
      }
      else {
        uVar3 = FUN_143b6f78e(param_2);
      }
      FUN_1484b1fb6(uVar3,*param_3 + lVar4);
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_1485bfe9e(param_4,iVar2);
      }
      *(undefined8 *)(*param_4 + (longlong)iVar2 * 8) = uVar3;
      lVar4 = lVar4 + 0x220;
    } while ((ulonglong)uVar1 * 0x220 - lVar4 != 0);
  }
  return;
}



// FUNCTION 14858b4d0 FUN_14858b4d0 body=116 status=ok
// SIG undefined FUN_14858b4d0(void)

void FUN_14858b4d0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1485bfe9e(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)(uint)-iVar1 << 3);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1485bff24(param_1);
  return;
}



// FUNCTION 14858b562 FUN_14858b562 body=749 status=ok
// SIG undefined FUN_14858b562(void)

void FUN_14858b562(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_30 = 0x41200000;
  local_2c = CONCAT31(local_2c._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  uVar1 = local_9c;
  local_128 = local_a0;
  local_120 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_108;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_110 = local_2c;
  local_118 = CONCAT44(uStack_30,local_34);
  FUN_14858b850(local_28,&local_118,local_108,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858b850 FUN_14858b850 body=383 status=ok
// SIG undefined FUN_14858b850(void)

longlong FUN_14858b850(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  wchar_t **local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 *local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  code *local_60;
  wchar_t ***local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_64 = param_4;
  if (param_1 == 0) {
    local_a8 = L"ApplyBendWarpToMesh_InvalidInput";
    uStack_a0._0_4_ = 0x20;
    FUN_1446e940c(&local_50,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2a);
    FUN_1446e940c(&local_c8,&local_a8);
    FUN_140208bae(&local_a8,&local_c8,&local_50,L"ApplyBendWarpToMesh: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    local_a8 = (wchar_t *)param_3[4];
    uStack_a0 = param_3[5];
    local_98 = param_3[6];
    local_c8 = &local_a8;
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_80 = *(undefined4 *)(param_3 + 2);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_78 = *(undefined4 *)(param_3 + 3);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_58 = &local_c8;
    local_b8 = (undefined1 *)&param_5;
    local_b0 = &local_64;
    local_4e = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_60 = FUN_143bcd76e;
    local_c0 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858b9d0 FUN_14858b9d0 body=596 status=ok
// SIG undefined FUN_14858b9d0(void)

void FUN_14858b9d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar5 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_58;
  FUN_14858bc26(local_28,&local_68,puVar5,local_4c);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858bc26 FUN_14858bc26 body=375 status=ok
// SIG undefined FUN_14858bc26(void)

longlong FUN_14858bc26(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  longlong local_78;
  undefined4 local_6c;
  code *local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = param_4;
  if (param_1 == 0) {
    local_58 = L"ApplyDisplaceFromPerVertexVectors_InvalidInput";
    local_50._0_4_ = 0x2e;
    FUN_1446e940c(&local_90,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2a);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_90,
                  L"ApplyDisplaceFromPerVertexVectors: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_90;
    local_88 = &param_5;
    local_80 = &local_6c;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bcf5ba;
    local_90 = param_3;
    local_78 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858bd9e FUN_14858bd9e body=798 status=ok
// SIG undefined FUN_14858bd9e(void)

void FUN_14858bd9e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_70 = 0x3f800000;
  uStack_68 = 0x3ff0000000000000;
  local_60 = 0x3ff0000000000000;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3f000000;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_70;
  uStack_b4 = uStack_6c;
  uStack_b0 = (undefined4)uStack_68;
  uStack_ac = uStack_68._4_4_;
  local_a8 = (undefined4)local_60;
  uStack_a4 = local_60._4_4_;
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  local_98 = (undefined4)uStack_50;
  uStack_94 = uStack_50._4_4_;
  uStack_90 = (undefined4)uStack_48;
  uStack_8c = uStack_48._4_4_;
  local_88 = CONCAT71(uStack_3f,local_40);
  local_c8 = local_38;
  local_c0 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_d0 = local_80;
  local_d8 = local_74;
  FUN_14858c0be(local_20,local_28,&local_c8,&local_b8);
  *param_3 = uVar3;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858c0be FUN_14858c0be body=1027 status=ok
// SIG undefined FUN_14858c0be(void)

longlong FUN_14858c0be(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  undefined8 *local_118;
  longlong local_110;
  wchar_t **local_108;
  longlong *local_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_80;
  undefined1 **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  uVar4 = param_6;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1 == 0) {
    local_f8 = L"ApplyDisplaceFromTextureMap_InvalidInput";
    uStack_f0._0_4_ = 0x28;
    FUN_1446e940c(&local_b8,&local_f8);
    local_f8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2a);
    FUN_1446e940c(&local_120,&local_f8);
    pwVar12 = L"ApplyDisplaceFromTextureMap: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      if ((*(int *)(*param_3 + 0x10) != *(int *)(*param_3 + 0x3c)) ||
         (*(char *)(param_4 + 0x30) == '\0')) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        lStack_b0 = 0;
        uVar10 = 0;
        cVar7 = FUN_1484c23e9(param_2,&local_b8,0);
        if (cVar7 == '\0') {
          local_f8 = L"ApplyDisplaceFromTextureMap_TexReadFailed";
          uStack_f0._0_4_ = 0x29;
          FUN_1446e940c(&local_120,&local_f8);
          local_f8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
          uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2a);
          FUN_1446e940c(&local_70,&local_f8);
          FUN_140208bae(&local_f8,&local_70,&local_120,
                        L"ApplyDisplaceFromTextureMap: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                       );
          FUN_143ba90d7(uVar4,3,&local_f8);
          if (local_f8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8 + 0x10))();
          }
        }
        else {
          uVar8 = 3;
          if ((int)*(uint *)(param_4 + 0x2c) < 3) {
            uVar8 = *(uint *)(param_4 + 0x2c);
          }
          if (0 < (int)uVar8) {
            uVar10 = (ulonglong)uVar8;
          }
          iVar5 = (int)local_b8;
          lVar16 = (longlong)(int)local_b8;
          iVar6 = local_b8._4_4_;
          lVar15 = (longlong)local_b8._4_4_;
          local_f8 = (wchar_t *)0x0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_e0 = 2;
          local_d8 = 2;
          FUN_148544114(&local_f8,4,1);
          local_d0 = DAT_14c84635c;
          local_c8 = DAT_14c8461b4;
          local_e0 = lVar16;
          local_d8 = lVar15;
          FUN_148544114();
          if (0 < local_d8 * local_e0) {
            lVar9 = 0;
            do {
              (local_f8 + lVar9 * 2)[0] = L'\0';
              (local_f8 + lVar9 * 2)[1] = L'\0';
              lVar9 = lVar9 + 1;
            } while (local_d8 * local_e0 - lVar9 != 0);
          }
          fVar17 = 1.0 / (float)iVar5;
          local_c8 = CONCAT44(fVar17,fVar17);
          if (0 < iVar6) {
            lVar9 = 0;
            lVar11 = 0;
            do {
              lVar13 = lVar9;
              lVar14 = lVar16;
              if (0 < iVar5) {
                do {
                  *(undefined4 *)((longlong)local_f8 + lVar13) =
                       *(undefined4 *)(lStack_b0 + uVar10 * 4 + lVar13 * 4);
                  lVar13 = lVar13 + 4;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              lVar11 = lVar11 + 1;
              lVar9 = lVar9 + lVar16 * 4;
            } while (lVar11 != lVar15);
          }
          local_120 = (undefined1 *)&param_5;
          local_78 = &local_120;
          local_118 = &param_6;
          local_6e = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_70 = 0;
          local_80 = FUN_143bced06;
          local_110 = param_4;
          local_108 = &local_f8;
          local_100 = param_3;
          FUN_1484b8434(param_1,&local_80,&local_70,0);
          if (local_f8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (lStack_b0 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14858c26e;
    }
    local_f8 = L"ApplyDisplaceFromTextureMap_InvalidInput2";
    uStack_f0._0_4_ = 0x29;
    FUN_1446e940c(&local_b8,&local_f8);
    local_f8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2a);
    FUN_1446e940c(&local_120,&local_f8);
    pwVar12 = L"ApplyDisplaceFromTextureMap: Texture is Null";
  }
  FUN_140208bae(&local_f8,&local_120,&local_b8,pwVar12);
  FUN_143ba90d7(uVar4,2,&local_f8);
  if (local_f8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_f8 + 0x10))();
  }
LAB_14858c26e:
  plVar3 = (longlong *)param_3[1];
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
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858c4c2 FUN_14858c4c2 body=843 status=ok
// SIG undefined FUN_14858c4c2(void)

void FUN_14858c4c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_128;
  uint local_120;
  undefined8 local_118 [13];
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_30 = 0x41200000;
  local_2c = local_2c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  uVar1 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_120 = local_2c;
  local_128 = CONCAT44(uStack_30,local_34);
  FUN_14858c80e(local_28,&local_128,local_118,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858c80e FUN_14858c80e body=395 status=ok
// SIG undefined FUN_14858c80e(void)

longlong FUN_14858c80e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [40];
  wchar_t **local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined1 *local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  code *local_60;
  wchar_t ***local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_7;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_64 = param_4;
  if (param_1 == 0) {
    local_a8 = L"ApplyFlareWarpToMesh_InvalidInput";
    uStack_a0._0_4_ = 0x21;
    FUN_1446e940c(&local_d0,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2a);
    FUN_1446e940c(&local_50,&local_a8);
    FUN_140208bae(&local_a8,&local_50,&local_d0,L"ApplyFlareWarpToMesh: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    local_a8 = (wchar_t *)param_3[4];
    uStack_a0 = param_3[5];
    local_98 = param_3[6];
    local_d0 = &local_a8;
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_80 = *(undefined4 *)(param_3 + 2);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_78 = *(undefined4 *)(param_3 + 3);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_58 = &local_d0;
    local_c0 = (undefined1 *)&param_6;
    local_b8 = &local_64;
    local_b0 = (undefined1 *)&param_5;
    local_4e = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_60 = FUN_143bcdcd2;
    local_c8 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858c99a FUN_14858c99a body=485 status=ok
// SIG undefined FUN_14858c99a(void)

void FUN_14858c99a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_3c;
  uint local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_3c = 0x3e4ccccd0000000a;
  local_34 = local_34 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_3c;
  local_50 = local_34;
  local_68 = local_30;
  local_60 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_14858cb80(local_20,&local_68,&local_58,local_48);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858cb80 FUN_14858cb80 body=459 status=ok
// SIG undefined FUN_14858cb80(void)

longlong FUN_14858cb80(longlong param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int *local_90;
  double *local_88;
  int local_7c;
  double local_78;
  code *local_70;
  longlong **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == 0) {
    local_60 = L"ApplyIterativeSmoothingToMesh_InvalidInput";
    local_58._0_4_ = 0x2a;
    FUN_1446e940c(&local_98,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2a);
    FUN_1446e940c(&local_70,&local_60);
    FUN_140208bae(&local_60,&local_70,&local_98,L"ApplyIterativeSmoothingToMesh: TargetMesh is Null"
                 );
    FUN_143ba90d7(param_4,2,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
  }
  else if ((*(int *)(*param_2 + 0x10) != *(int *)(*param_2 + 0x3c)) || ((char)param_3[2] == '\0')) {
    local_78 = 0.0;
    if (0.0 <= (float)param_3[1]) {
      dVar6 = (double)(float)param_3[1];
      local_78 = 1.0;
      if (dVar6 <= 1.0) {
        local_78 = dVar6;
      }
    }
    iVar3 = *param_3;
    iVar5 = 100;
    if (iVar3 < 100) {
      iVar5 = iVar3;
    }
    local_7c = 0;
    if (0 < iVar5) {
      local_7c = iVar5;
    }
    if ((0 < iVar3) && ((local_78 != 0.0 || (NAN(local_78))))) {
      local_68 = &local_98;
      local_90 = &local_7c;
      local_88 = &local_78;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
      local_70 = FUN_143bce7ee;
      local_98 = param_2;
      FUN_1484b8434(param_1,&local_70,&local_60,0);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858cd4c FUN_14858cd4c body=657 status=ok
// SIG undefined FUN_14858cd4c(void)

void FUN_14858cd4c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118 [13];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_89;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_98 = 0x3e80000040a00000;
  local_90 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar1 = local_89;
  local_128 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = local_98;
  local_a8 = local_90;
  puVar4 = local_88;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_14858cfde(local_28,local_118,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858cfde FUN_14858cfde body=446 status=ok
// SIG undefined FUN_14858cfde(void)

longlong FUN_14858cfde(longlong param_1,undefined8 *param_2,undefined1 param_3,float *param_4,
                      undefined8 param_5)

{
  undefined1 auStack_118 [32];
  wchar_t **local_f8;
  undefined1 *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_61;
  code *local_60;
  wchar_t ***local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_61 = param_3;
  if (param_1 == 0) {
    local_b8 = L"ApplyFlareWarpToMesh_InvalidInput";
    uStack_b0._0_4_ = 0x21;
    FUN_1446e940c(&local_f8,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x2a);
    FUN_1446e940c(&local_50,&local_b8);
    FUN_140208bae(&local_b8,&local_50,&local_f8,L"ApplyFlareWarpToMesh: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_b8);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
  }
  else {
    local_b8 = (wchar_t *)*param_2;
    uStack_b0 = param_2[1];
    local_a8 = param_2[2];
    uStack_a0 = param_2[3];
    local_f8 = &local_b8;
    local_98 = param_2[4];
    uStack_90 = param_2[5];
    local_88 = param_2[6];
    local_80 = param_2[8];
    uStack_78 = param_2[9];
    local_70 = param_2[10];
    local_c0 = (double)param_4[2];
    local_d8 = &local_c0;
    local_c8 = (double)param_4[1];
    local_e0 = &local_c8;
    local_d0 = (double)*param_4;
    local_e8 = &local_d0;
    local_58 = &local_f8;
    local_f0 = &local_61;
    local_4e = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_60 = FUN_143bcdfb0;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858d19e FUN_14858d19e body=585 status=ok
// SIG undefined FUN_14858d19e(void)

void FUN_14858d19e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_60 = 0x3e80000040a00000;
  uStack_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uStack_48 = DAT_14c8464f0;
  local_40 = 0;
  uStack_38 = CONCAT22(uStack_38._2_2_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_60;
  uStack_94 = local_60._4_4_;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  local_88 = uStack_50;
  uStack_84 = uStack_4c;
  uStack_80 = (undefined4)uStack_48;
  uStack_7c = uStack_48._4_4_;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_a8 = local_30;
  local_a0 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_14858d3e8(local_20,&local_a8,&local_98,local_68);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858d3e8 FUN_14858d3e8 body=362 status=ok
// SIG undefined FUN_14858d3e8(void)

longlong FUN_14858d3e8(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_58 = L"ApplyPerlinNoiseToMesh_InvalidInput";
    local_50._0_4_ = 0x23;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2a);
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(&local_58,&local_78,&local_68,L"ApplyPerlinNoiseToMesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else if ((*(int *)(*param_2 + 0x10) != *(int *)(*param_2 + 0x3c)) ||
          (*(char *)(param_3 + 0x29) == '\0')) {
    local_60 = &local_78;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bce25e;
    local_78 = param_3;
    local_70 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858d554 FUN_14858d554 body=749 status=ok
// SIG undefined FUN_14858d554(void)

void FUN_14858d554(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_30 = 0x41200000;
  local_2c = CONCAT31(local_2c._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  uVar1 = local_9c;
  local_128 = local_a0;
  local_120 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_108;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_110 = local_2c;
  local_118 = CONCAT44(uStack_30,local_34);
  FUN_14858d842(local_28,&local_118,local_108,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858d842 FUN_14858d842 body=383 status=ok
// SIG undefined FUN_14858d842(void)

longlong FUN_14858d842(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  wchar_t **local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 *local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  code *local_60;
  wchar_t ***local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_64 = param_4;
  if (param_1 == 0) {
    local_a8 = L"ApplyTwistWarpToMesh_InvalidInput";
    uStack_a0._0_4_ = 0x21;
    FUN_1446e940c(&local_50,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2a);
    FUN_1446e940c(&local_c8,&local_a8);
    FUN_140208bae(&local_a8,&local_c8,&local_50,L"ApplyTwistWarpToMesh: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    local_a8 = (wchar_t *)param_3[4];
    uStack_a0 = param_3[5];
    local_98 = param_3[6];
    local_c8 = &local_a8;
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_80 = *(undefined4 *)(param_3 + 2);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_78 = *(undefined4 *)(param_3 + 3);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_58 = &local_c8;
    local_b8 = (undefined1 *)&param_5;
    local_b0 = &local_64;
    local_4e = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_60 = FUN_143bcda20;
    local_c0 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858d9cc FUN_14858d9cc body=914 status=ok
// SIG undefined FUN_14858d9cc(void)

void FUN_14858d9cc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar5 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_89 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar6 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_68;
  uStack_b0 = uStack_60;
  local_a8 = local_58;
  local_d8 = local_48;
  uStack_d4 = uStack_44;
  uStack_d0 = uStack_40;
  uStack_cc = uStack_3c;
  local_c8 = local_38;
  local_e0 = local_98;
  local_f8 = local_6c;
  local_f0 = puVar5;
  local_e8 = puVar6;
  FUN_14858dd60(local_30,&local_d8,local_4c);
  plVar3 = plStack_80;
  *param_3 = uVar4;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858dd60 FUN_14858dd60 body=872 status=ok
// SIG undefined FUN_14858dd60(void)

longlong FUN_14858dd60(longlong param_1,double *param_2,undefined4 param_3,double *param_4,
                      undefined8 param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [40];
  wchar_t *local_d0;
  double *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  double local_a8 [4];
  double local_88;
  double dStack_80;
  double local_78;
  undefined4 local_64;
  ulonglong local_60;
  
  puVar3 = param_7;
  uVar2 = param_6;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_7 = 1;
  local_64 = param_3;
  FUN_14858f506(param_6,0);
  uVar4 = param_8;
  if (param_1 == 0) {
    local_d0 = L"CreateSurfacePath_InvalidInput";
    local_c8._0_4_ = 0x1e;
    FUN_1446e940c(&local_88,&local_d0);
    local_d0 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
    local_c8 = (double *)CONCAT44(local_c8._4_4_,0x2c);
    FUN_1446e940c(local_a8,&local_d0);
    FUN_140208bae(&local_d0,local_a8,&local_88,L"CreateSurfacePath: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_d0);
    if (local_d0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_d0 + 0x10))();
    }
  }
  else {
    local_88 = *param_2;
    dStack_80 = param_2[1];
    local_78 = param_2[2];
    dVar8 = local_78 * local_78 + local_88 * local_88 + dStack_80 * dStack_80;
    if ((dVar8 != 1.0) || (NAN(dVar8))) {
      if (dVar8 < 1e-05) {
        local_78 = DAT_14c8462d0;
        local_88 = DAT_14c8462c0;
        dStack_80 = DAT_14c8462c8;
      }
      else {
        dVar8 = 1.0 / SQRT(dVar8);
        local_78 = local_78 * dVar8;
        dStack_80 = dStack_80 * dVar8;
        local_88 = local_88 * dVar8;
      }
    }
    else {
      local_78 = param_2[2];
      local_88 = *param_2;
      dStack_80 = param_2[1];
    }
    local_a8[2] = param_4[2];
    local_a8[0] = *param_4;
    local_a8[1] = param_4[1];
    lVar5 = 0;
    do {
      if ((local_a8[lVar5] < 0.0) && (-0.01 <= local_a8[lVar5])) {
        local_a8[lVar5] = 0.0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar8 = 0.3333333333333333;
    dVar9 = 0.3333333333333333;
    dVar7 = 0.3333333333333333;
    if (0.0 <= local_a8[2] && (0.0 <= local_a8[1] && 0.0 <= local_a8[0])) {
      dVar8 = local_a8[2];
      dVar9 = local_a8[0];
      dVar7 = local_a8[1];
    }
    dVar1 = *param_4 + param_4[1] + param_4[2];
    dVar10 = ABS(dVar1 + -1.0);
    dVar1 = 1.0 / dVar1;
    local_a8[0] = 0.3333333333333333;
    local_a8[1] = 0.3333333333333333;
    if (dVar10 <= 0.05) {
      local_a8[0] = dVar9 * dVar1;
      local_a8[1] = dVar7 * dVar1;
    }
    uVar6 = -(ulonglong)(0.05 < dVar10);
    local_a8[2] = (double)(uVar6 & 0x3fd5555555555555 | ~uVar6 & (ulonglong)(dVar8 * dVar1));
    local_c8 = local_a8;
    local_d0 = (wchar_t *)&local_64;
    local_c0 = &local_88;
    local_b8 = (undefined1 *)&param_5;
    local_b0 = uVar2;
    FUN_143bcf9e4(&local_d0,*(undefined8 *)(param_1 + 0x98));
    *puVar3 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14858e0d0 FUN_14858e0d0 body=911 status=ok
// SIG undefined FUN_14858e0d0(void)

void FUN_14858e0d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar5 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_89 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar6 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = &local_b8;
  local_b8 = local_70;
  uStack_b0 = uStack_68;
  local_a8 = local_60;
  local_d8 = local_50;
  uStack_d4 = uStack_4c;
  uStack_d0 = uStack_48;
  uStack_cc = uStack_44;
  local_c8 = local_40;
  local_e0 = local_98;
  local_f0 = puVar5;
  local_e8 = puVar6;
  FUN_14858e460(local_30,local_34,&local_d8,local_54);
  plVar3 = plStack_80;
  *param_3 = uVar4;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858e460 FUN_14858e460 body=2712 status=ok
// SIG undefined FUN_14858e460(void)

longlong FUN_14858e460(longlong param_1,int param_2,double *param_3,int param_4,double *param_5,
                      longlong *param_6,undefined1 *param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  double *pdVar9;
  longlong lVar10;
  uint uVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  double dVar17;
  undefined1 auStack_6b8 [32];
  undefined1 local_698;
  undefined1 local_690;
  longlong local_688;
  ulonglong uStack_680;
  undefined8 local_678;
  undefined1 local_669;
  longlong local_668;
  int local_660;
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined8 local_638;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double local_600;
  int local_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 local_5d4;
  undefined8 local_430;
  ulonglong local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  longlong local_d8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  *param_7 = 1;
  FUN_14858f506(param_6,0);
  if (param_1 == 0) {
    local_5f8 = 0x4af4c274;
    uStack_5f4 = 1;
    uStack_5f0._0_4_ = 0x23;
    FUN_1446e940c(&local_298,&local_5f8);
    local_5f8 = 0x4af4bb10;
    uStack_5f4 = 1;
    uStack_5f0._0_4_ = 0x2c;
    FUN_1446e940c(&local_610,&local_5f8);
    FUN_140208bae(&local_5f8,&local_610,&local_298,L"GetShortestSurfacePath: TargetMesh is Null");
  }
  else {
    local_298 = local_298 & 0xffffffffffffff00;
    local_5f8 = param_2;
    uStack_5f0 = (double *)&local_298;
    FUN_143bc1772(&local_5f8,*(undefined8 *)(param_1 + 0x98));
    cVar4 = (char)local_298;
    local_298 = local_298 & 0xffffffffffffff00;
    local_5f8 = param_4;
    uStack_5f0 = (double *)&local_298;
    FUN_143bc1772(&local_5f8,*(undefined8 *)(param_1 + 0x98));
    if (cVar4 == '\0') {
      local_5f8 = 0x4af4c338;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x2b;
      FUN_1446e940c(&local_298,&local_5f8);
      local_5f8 = 0x4af4bb10;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x2c;
      pdVar9 = &local_610;
      FUN_1446e940c(pdVar9,&local_5f8);
      pwVar12 = L"GetShortestSurfacePath: Start Point triangle not part of mesh";
    }
    else if ((char)local_298 == '\0') {
      local_5f8 = 0x4af4c408;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x29;
      FUN_1446e940c(&local_298,&local_5f8);
      local_5f8 = 0x4af4bb10;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x2c;
      pdVar9 = &local_610;
      FUN_1446e940c(pdVar9,&local_5f8);
      pwVar12 = L"GetShortestSurfacePath: End Point triangle not part of mesh";
    }
    else {
      local_610 = *param_3;
      if ((((local_610 < 0.0) || (local_608 = param_3[1], local_608 < 0.0)) ||
          (local_600 = param_3[2], local_600 < 0.0)) ||
         (dVar17 = local_610 + local_608 + local_600, 0.05 < ABS(dVar17 + -1.0))) {
        local_610 = 0.3333333333333333;
        local_608 = 0.3333333333333333;
        local_600 = 0.3333333333333333;
      }
      else {
        dVar17 = 1.0 / dVar17;
        local_600 = local_600 * dVar17;
        local_608 = local_608 * dVar17;
        local_610 = local_610 * dVar17;
      }
      local_628 = *param_5;
      if (((local_628 < 0.0) || (local_620 = param_5[1], local_620 < 0.0)) ||
         ((local_618 = param_5[2], local_618 < 0.0 ||
          (dVar17 = local_628 + local_620 + local_618, 0.05 < ABS(dVar17 + -1.0))))) {
        local_628 = 0.3333333333333333;
        local_620 = 0.3333333333333333;
        local_618 = 0.3333333333333333;
      }
      else {
        dVar17 = 1.0 / dVar17;
        local_618 = local_618 * dVar17;
        local_620 = local_620 * dVar17;
        local_628 = local_628 * dVar17;
      }
      if (param_2 != param_4) {
        local_698 = 0;
        FUN_1411b354a(&local_298,0,0,0);
        local_690 = 1;
        local_698 = 1;
        FUN_146c005f0(&local_298,*(undefined8 *)(param_1 + 0x98),1,1);
        uStack_5f4 = 0xffffffff;
        uStack_5f0._0_4_ = -1;
        uStack_5f0._4_4_ = 0xffffffff;
        local_5e8 = (ulonglong *)CONCAT44(0xffffffff,(uint)local_5e8);
        uStack_5e0 = 0xffffffff;
        uStack_5dc = 0xffffffff;
        uStack_5d8 = 0xffffffff;
        local_5d4 = 0xffffffff;
        iVar5 = FUN_146c11d78(&local_298,param_2,&local_610,&local_5f8);
        uVar11 = -(uint)(iVar5 != 0) | (uint)local_5e8;
        iVar5 = FUN_146c11d78(&local_298,param_4,&local_628,&local_5f8);
        uVar14 = -(uint)(iVar5 != 0) | (uint)local_5e8;
        if (uVar11 == 0xffffffff || uVar14 == 0xffffffff) {
          local_648._8_4_ = 0x22;
          local_648._0_8_ = L"GetShortestSurfacePath_PokeFailure";
          FUN_1446e940c(&local_688,local_648);
          local_648._8_4_ = 0x2c;
          local_648._0_8_ = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
          FUN_1446e940c(local_658,local_648);
          FUN_140208bae(local_648,local_658,&local_688,L"GetShortestSurfacePath: failed");
          FUN_143ba90d7(param_8,2,local_648);
          if ((longlong *)local_648._0_8_ != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_648._0_8_ + 0x10))();
          }
        }
        else {
          FUN_1483387d2(&local_5f8,&local_298);
          local_648 = ZEXT816(0);
          lVar6 = FUN_1485b9e20(local_648);
          *(uint *)(lVar6 + 4) = uVar14;
          FUN_14834e91a(&local_5f8,local_648,uVar11,0x7fefffffffffffff);
          local_688 = 0;
          uStack_680 = 0;
          FUN_14834eb2e(&local_5f8,uVar11,&local_688,100000);
          lVar6 = local_688;
          iVar5 = (int)uStack_680;
          uVar13 = uStack_680 & 0xffffffff;
          if ((double)local_648._0_8_ != 0.0) {
            FUN_1400020a8();
          }
          FUN_148338d34();
          local_5f8 = 0;
          uStack_5f4 = 0;
          uStack_5f0._0_4_ = 0;
          uStack_5f0._4_4_ = 0;
          if (uVar13 == 0) {
            local_658 = (undefined1  [16])0x0;
            bVar16 = true;
            lVar10 = 0;
          }
          else {
            iVar8 = iVar5 + -1;
            if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar8);
            }
            if (iVar8 == 0) {
              lVar10 = 0;
            }
            else {
              FUN_1485b9e9c(&local_5f8);
              uVar15 = 1;
              do {
                iVar5 = *(int *)(lVar6 + uVar15 * 4);
                uVar11 = FUN_146c061e0(&local_298,iVar5,*(undefined4 *)(lVar6 + -4 + uVar15 * 4));
                if (uVar11 != 0xffffffff) {
                  iVar8 = *(int *)(*(longlong *)(local_d8 + (ulonglong)(uVar11 >> 9) * 8) + 4 +
                                  (ulonglong)((uVar11 & 0x1ff) << 4));
                  puVar7 = (uint *)FUN_1485b9e60(&local_5f8);
                  *puVar7 = uVar11;
                  puVar7[1] = (uint)(iVar5 == iVar8);
                }
                uVar15 = uVar15 + 1;
              } while (uVar13 != uVar15);
              lVar10 = CONCAT44(uStack_5f4,local_5f8);
            }
            local_658._8_4_ = (int)uStack_5f0;
            local_658._0_8_ = lVar10;
            local_658._12_4_ = uStack_5f0._4_4_;
            bVar16 = (int)uStack_5f0 == 0;
          }
          if (lVar6 != 0) {
            FUN_1400020a8(lVar6);
          }
          if (bVar16) {
            local_5f8 = 0x4af4c628;
            uStack_5f4 = 1;
            uStack_5f0._0_4_ = 0x26;
            FUN_1446e940c(local_648,&local_5f8);
            local_5f8 = 0x4af4bb10;
            uStack_5f4 = 1;
            uStack_5f0._0_4_ = 0x2c;
            FUN_1446e940c(&local_688,&local_5f8);
            FUN_140208bae(&local_5f8,&local_688,local_648,
                          L"GetShortestSurfacePath: failed to find a path connecting the points");
            FUN_143ba90d7(param_8,2,&local_5f8);
            if ((longlong *)CONCAT44(uStack_5f4,local_5f8) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_5f4,local_5f8) + 0x10))();
            }
          }
          else {
            FUN_1482d6460(&local_5f8,&local_298,local_658);
            local_648 = (undefined1  [16])0x0;
            local_638 = 0;
            FUN_1482d6bca(&local_5f8,local_648,0x7fffffff);
            *(undefined1 *)(param_6 + 2) = 0;
            param_6 = (longlong *)*param_6;
            *(undefined4 *)(param_6 + 1) = 0;
            if (*(int *)((longlong)param_6 + 0xc) != 0) {
              FUN_1447a8aa0(param_6,0);
            }
            FUN_1482d7fbe(&local_5f8,&local_668,0x3f847ae147ae147b);
            if (local_660 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(local_660);
            }
            if (*(int *)((longlong)param_6 + 0xc) < local_660) {
              FUN_1447a8aa0(param_6);
            }
            if (local_660 != 0) {
              lVar6 = (longlong)local_660 * 0x28;
              lVar10 = local_668;
              do {
                FUN_1482e190a(&local_688,lVar10,local_430,&local_669);
                iVar5 = (int)param_6[1];
                *(uint *)(param_6 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_6 + 0xc) < iVar5 + 1U) {
                  FUN_1403e3958(param_6,iVar5);
                }
                lVar3 = *param_6;
                *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar5 * 0x18) = local_678;
                plVar2 = (longlong *)(lVar3 + (longlong)iVar5 * 0x18);
                *plVar2 = local_688;
                plVar2[1] = uStack_680;
                lVar10 = lVar10 + 0x28;
                lVar6 = lVar6 + -0x28;
              } while (lVar6 != 0);
            }
            if (local_668 != 0) {
              FUN_1400020a8(local_668);
            }
            *param_7 = 0;
            FUN_14830cf9a(&local_5f8);
            lVar10 = local_658._0_8_;
          }
          if (lVar10 != 0) {
            FUN_1400020a8(lVar10);
          }
        }
        FUN_141082778(&local_298);
        goto LAB_14858e7f6;
      }
      if (((local_600 != local_618) || (NAN(local_600) || NAN(local_618))) ||
         ((local_608 != local_620 ||
          (((NAN(local_608) || NAN(local_620) || (local_610 != local_628)) ||
           (NAN(local_610) || NAN(local_628))))))) {
        local_288 = DAT_14c8464f0;
        local_298 = DAT_14c8464e0;
        uStack_290 = DAT_14c8464e8;
        uStack_5f0 = &local_610;
        local_5f8 = param_2;
        local_5e8 = &local_298;
        FUN_143bc17be(&local_5f8,*(undefined8 *)(param_1 + 0x98));
        local_5e8 = (ulonglong *)local_648;
        local_638 = DAT_14c8464f0;
        local_648._8_8_ = DAT_14c8464e8;
        local_648._0_8_ = DAT_14c8464e0;
        uStack_5f0 = &local_628;
        local_5f8 = param_2;
        FUN_143bc17be(&local_5f8,*(undefined8 *)(param_1 + 0x98));
        *(undefined1 *)(param_6 + 2) = 0;
        plVar2 = (longlong *)*param_6;
        iVar5 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar5 + 1U) {
          FUN_1403e3958(plVar2,iVar5);
        }
        lVar6 = *plVar2;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_288;
        puVar1 = (ulonglong *)(lVar6 + (longlong)iVar5 * 0x18);
        *puVar1 = local_298;
        puVar1[1] = uStack_290;
        param_6 = (longlong *)*param_6;
        iVar5 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar5 + 1U) {
          FUN_1403e3958(param_6,iVar5);
        }
        lVar6 = *param_6;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_638;
        pdVar9 = (double *)(lVar6 + (longlong)iVar5 * 0x18);
        *pdVar9 = (double)local_648._0_8_;
        pdVar9[1] = (double)local_648._8_8_;
        *param_7 = 0;
        goto LAB_14858e7f6;
      }
      local_5f8 = 0x4af4c4ce;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x26;
      FUN_1446e940c(&local_298,&local_5f8);
      local_5f8 = 0x4af4bb10;
      uStack_5f4 = 1;
      uStack_5f0._0_4_ = 0x2c;
      pdVar9 = (double *)local_648;
      FUN_1446e940c(pdVar9,&local_5f8);
      pwVar12 = L"GetShortestSurfacePath: Start and End Point are the same";
    }
    FUN_140208bae(&local_5f8,pdVar9,&local_298,pwVar12);
  }
  FUN_143ba90d7(param_8,2,&local_5f8);
  if ((longlong *)CONCAT44(uStack_5f4,local_5f8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_5f4,local_5f8) + 0x10))();
  }
LAB_14858e7f6:
  if ((local_70 ^ (ulonglong)auStack_6b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14858ef00 FUN_14858ef00 body=621 status=ok
// SIG undefined FUN_14858ef00(void)

void FUN_14858ef00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 local_51;
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar5 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar6 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_60;
  local_78 = puVar6;
  FUN_14858f16e(local_30,local_34,local_38,puVar5);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858f16e FUN_14858f16e body=916 status=ok
// SIG undefined FUN_14858f16e(void)

longlong FUN_14858f16e(longlong param_1,uint param_2,uint param_3,longlong param_4,
                      undefined1 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  uint local_68;
  uint local_64;
  wchar_t **local_60;
  wchar_t *local_58;
  uint *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_5 = 1;
  if (param_1 == 0) {
    local_58 = L"GetShortestVertexPath_InvalidInput";
    puStack_50._0_4_ = 0x22;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,0x2c);
    FUN_1446e940c(local_6c,&local_58);
    pwVar5 = L"GetShortestVertexPath: TargetMesh is Null";
LAB_14858f258:
    FUN_140208bae(&local_58,local_6c,&local_68,pwVar5);
  }
  else {
    if (param_2 == param_3) {
      local_58 = L"GetShortestVertexPath_DuplicateInputs";
      puStack_50._0_4_ = 0x25;
      FUN_1446e940c(&local_68,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
      puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,0x2c);
      FUN_1446e940c(local_6c,&local_58);
      pwVar5 = L"GetShortestVertexPath: Start and End vertex are the same";
      goto LAB_14858f258;
    }
    local_68 = local_68 & 0xffffff00;
    puStack_50 = &local_68;
    local_58._0_4_ = param_2;
    FUN_143bc1682(&local_58,*(undefined8 *)(param_1 + 0x98));
    cVar3 = (char)local_68;
    local_68 = local_68 & 0xffffff00;
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,param_3);
    puStack_50 = &local_68;
    FUN_143bc1682(&local_58,*(undefined8 *)(param_1 + 0x98));
    if (cVar3 != '\0') {
      if ((char)local_68 != '\0') {
        local_58 = (wchar_t *)0x0;
        puStack_50 = (uint *)0x0;
        local_68 = param_2;
        local_64 = param_3;
        local_60 = &local_58;
        FUN_143bc16c6(&local_68,*(undefined8 *)(param_1 + 0x98));
        pwVar5 = local_58;
        uVar4 = (uint)puStack_50;
        lVar6 = (longlong)(int)(uint)puStack_50;
        if (lVar6 == 0) {
          local_58 = L"GetShortestVertexPath_Failed";
          puStack_50._0_4_ = 0x1c;
          FUN_1446e940c(&local_68,&local_58);
          local_58 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
          puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,0x2c);
          FUN_1446e940c(local_6c,&local_58);
          FUN_140208bae(&local_58,local_6c,&local_68,
                        L"GetShortestVertexPath: Failed to find connecting path");
          FUN_143ba90d7(param_6,2,&local_58);
          if (local_58 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_58 + 0x10))();
          }
        }
        else {
          FUN_14856da48(param_4,3,0);
          plVar2 = *(longlong **)(param_4 + 8);
          iVar1 = (int)plVar2[1];
          *(uint *)(plVar2 + 1) = iVar1 + uVar4;
          if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar4) {
            FUN_1446f48e2(plVar2,iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 4 + *plVar2),pwVar5,lVar6 << 2);
          *param_5 = 0;
        }
        if (pwVar5 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar5);
        }
        goto LAB_14858f286;
      }
      local_58 = L"GetShortestVertexPath_InvalidEnd";
      puStack_50._0_4_ = 0x20;
      FUN_1446e940c(&local_68,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
      puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,0x2c);
      FUN_1446e940c(local_6c,&local_58);
      pwVar5 = L"GetShortestVertexPath: End vertex not part of mesh";
      goto LAB_14858f258;
    }
    local_58 = L"GetShortestVertexPath_InvalidStart";
    puStack_50._0_4_ = 0x22;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshGeodesicFunctions";
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,0x2c);
    FUN_1446e940c(local_6c,&local_58);
    FUN_140208bae(&local_58,local_6c,&local_68,
                  L"GetShortestVertexPath: Start vertex not part of mesh");
  }
  FUN_143ba90d7(param_6,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_14858f286:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858f506 FUN_14858f506 body=261 status=ok
// SIG undefined FUN_14858f506(void)

void FUN_14858f506(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14858f51a;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b7f0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14858f51a;
    param_1[1] = 0;
LAB_14858f580:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_14858f51a;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14858f580;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14858f51a:
  FUN_1417247dc(*param_1,param_2);
  return;
}



// FUNCTION 14858f60c FUN_14858f60c body=309 status=ok
// SIG undefined FUN_14858f60c(void)

void FUN_14858f60c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858f742(local_20,local_24,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858f742 FUN_14858f742 body=347 status=ok
// SIG undefined FUN_14858f742(void)

longlong FUN_14858f742(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [44];
  int local_9c;
  code *local_98;
  int *local_90;
  undefined1 local_81;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 local_61;
  code *local_60;
  undefined1 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_50 = L"ClearMaterialIDs_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_80,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_80,L"ClearMaterialIDs: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    if (param_2 < 1) {
      param_2 = 0;
    }
    local_90 = &local_9c;
    local_70 = &local_98;
    local_98 = FUN_143bcfc20;
    local_80 = &local_61;
    local_61 = 1;
    local_78 = &local_81;
    local_81 = 0;
    local_58 = &local_80;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bcfba0;
    local_9c = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858f8a4 FUN_14858f8a4 body=609 status=ok
// SIG undefined FUN_14858f8a4(void)

void FUN_14858f8a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_6c;
  longlong local_68 [2];
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar4 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar2 = local_6c;
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  _Src = local_58;
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_50;
  local_80 = (int)uStack_50;
  if (lVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1411312f2(&local_88,uStack_50 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar5 << 3);
  }
  uVar3 = local_48;
  local_98 = uVar1;
  FUN_14858fb06(local_48,&local_88,plVar4,iVar2 != 0);
  *param_3 = uVar3;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858fb06 FUN_14858fb06 body=201 status=ok
// SIG undefined FUN_14858fb06(void)

longlong FUN_14858fb06(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_51;
  code *local_50;
  undefined1 **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_51 = param_4;
  FUN_14113129a(param_3);
  if (param_1 != 0) {
    local_78 = &stack0x00000028;
    local_48 = &local_78;
    local_60 = &local_51;
    local_3e = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = 0;
    local_50 = FUN_143bd0f82;
    local_70 = param_2;
    local_68 = param_3;
    FUN_1484b8434(param_1,&local_50,&local_40,0);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858fbd6 FUN_14858fbd6 body=486 status=ok
// SIG undefined FUN_14858fbd6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14858fbd6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  int local_3c [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_3c[2] = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c + 2);
  }
  local_3c[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_3c[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c);
  }
  iVar2 = local_3c[0];
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = local_30;
  piVar4 = local_3c + 1;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  FUN_14858fdbe(local_30,local_3c[2],piVar4,iVar2 != 0);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858fdbe FUN_14858fdbe body=166 status=ok
// SIG undefined FUN_14858fdbe(void)

longlong FUN_14858fdbe(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 local_44;
  code *local_40;
  undefined1 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = 0;
  local_44 = param_2;
  if (param_1 != 0) {
    local_60 = &stack0x00000028;
    local_38 = &local_60;
    local_58 = &local_44;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = FUN_143bd0d1e;
    local_50 = param_3;
    FUN_1484b8434(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858fe66 FUN_14858fe66 body=235 status=ok
// SIG undefined FUN_14858fe66(void)

void FUN_14858fe66(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858ff52(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858ff52 FUN_14858ff52 body=340 status=ok
// SIG undefined FUN_14858ff52(void)

longlong FUN_14858ff52(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  undefined *local_98;
  undefined1 *local_90;
  undefined1 local_81;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined **local_70;
  undefined1 local_61;
  code *local_60;
  undefined1 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_50 = L"EnableMaterialIDs_InvalidInput";
    local_48._0_4_ = 0x1e;
    FUN_1446e940c(&local_80,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_80,L"EnableMaterialIDs: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_90 = &local_99;
    local_70 = &local_98;
    local_98 = &DAT_143bcfc1e;
    local_80 = &local_61;
    local_61 = 1;
    local_78 = &local_81;
    local_81 = 0;
    local_58 = &local_80;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bcfba0;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485900ae FUN_1485900ae body=386 status=ok
// SIG undefined FUN_1485900ae(void)

void FUN_1485900ae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  uVar4 = local_30;
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148590232(local_30,puVar5,puVar6);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148590232 FUN_148590232 body=135 status=ok
// SIG undefined FUN_148590232(void)

longlong FUN_148590232(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14856da48(param_2,4,0);
  local_28 = *(undefined8 *)(param_2 + 8);
  *param_3 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x208);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      *param_3 = 1;
      FUN_143bd0484(&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485902ba FUN_1485902ba body=531 status=ok
// SIG undefined FUN_1485902ba(void)

void FUN_1485902ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_58[0] = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78[0] = local_40[0];
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1485904ce(local_28,local_78,puVar5,local_60);
  plVar3 = plStack_48;
  *param_3 = uVar4;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485904ce FUN_1485904ce body=916 status=ok
// SIG undefined FUN_1485904ce(void)

longlong FUN_1485904ce(longlong param_1,byte *param_2,wchar_t *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  char *local_68;
  char *local_60;
  byte *local_58;
  char local_4a;
  char local_49;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14856da48(param_3,4,0);
  if (param_1 == 0) {
    local_70 = L"GetMaterialIDsOfTriangles_InvalidMesh";
    local_68._0_4_ = 0x25;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
    FUN_1446e940c(local_48,&local_70);
    pwVar5 = L"GetMaterialIDsOfTriangles: TargetMesh is Null";
  }
  else if (*(longlong *)(param_2 + 8) == 0) {
    local_70 = L"GetMaterialIDsOfTriangles_InvalidList";
    local_68._0_4_ = 0x25;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
    FUN_1446e940c(local_48,&local_70);
    pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList is Null";
  }
  else if (*param_2 < 2) {
    if ((*(int *)(*(longlong *)(param_2 + 8) + 8) == 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) != 0)) {
      local_70 = L"GetMaterialIDsOfTriangles_EmptyList";
      local_68._0_4_ = 0x23;
      FUN_1446e940c(local_44,&local_70);
      local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
      local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
      FUN_1446e940c(local_48,&local_70);
      FUN_140208bae(&local_70,local_48,local_44,
                    L"GetMaterialIDsOfTriangles: TriangleIDList is empty");
      FUN_143ba9449(param_4,2,&local_70);
      if (local_70 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_70 + 0x10))();
      }
    }
    local_60 = &local_4a;
    local_4a = '\x01';
    local_68 = &local_49;
    local_49 = '\0';
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x208);
    local_58 = param_2;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) != 0)) {
      local_49 = '\x01';
      local_70 = param_3;
      FUN_143bd01e8(&local_70);
      if (local_49 != '\0') {
        if (local_4a != '\0') goto LAB_148590670;
        local_70 = L"GetMaterialIDsOfTriangles_InvalidTriangles";
        local_68._0_4_ = 0x2a;
        FUN_1446e940c(local_44,&local_70);
        local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
        local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
        FUN_1446e940c(local_48,&local_70);
        pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList has invalid triangles";
        goto LAB_148590641;
      }
    }
    local_70 = L"GetMaterialIDsOfTriangles_MissingMaterials";
    local_68._0_4_ = 0x2a;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
    FUN_1446e940c(local_48,&local_70);
    pwVar5 = L"GetMaterialIDsOfTriangles: MaterialID Attribute is not enabled";
  }
  else {
    local_70 = L"GetMaterialIDsOfTriangles_InvalidList2";
    local_68._0_4_ = 0x26;
    FUN_1446e940c(local_44,&local_70);
    local_70 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_68 = (char *)CONCAT44(local_68._4_4_,0x2c);
    FUN_1446e940c(local_48,&local_70);
    pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList has incompatible index type";
  }
LAB_148590641:
  FUN_140208bae(&local_70,local_48,local_44,pwVar5);
  FUN_143ba90d7(param_4,2,&local_70);
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_148590670:
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859086a FUN_14859086a body=240 status=ok
// SIG undefined FUN_14859086a(void)

void FUN_14859086a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14859095c(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859095c FUN_14859095c body=50 status=ok
// SIG undefined FUN_14859095c(void)

undefined8 FUN_14859095c(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar2 = *(longlong *)(lVar1 + 0x208);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
      *param_2 = 1;
      uVar3 = FUN_143bd0318(lVar1,lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148590994 FUN_148590994 body=314 status=ok
// SIG undefined FUN_148590994(void)

void FUN_148590994(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  puVar2 = &local_25;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148590ad0(local_20,local_24,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148590ad0 FUN_148590ad0 body=108 status=ok
// SIG undefined FUN_148590ad0(void)

undefined8 FUN_148590ad0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_c;
  uVar2 = 0;
  local_20 = param_3;
  local_c = param_2;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x208);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      uVar2 = FUN_143bd040a(&local_20);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148590b3e FUN_148590b3e body=443 status=ok
// SIG undefined FUN_148590b3e(void)

void FUN_148590b3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_48[0] = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148590cfa(local_28,local_2c,puVar5,local_50);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148590cfa FUN_148590cfa body=468 status=ok
// SIG undefined FUN_148590cfa(void)

longlong FUN_148590cfa(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_3d;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = param_2;
  FUN_14856da48(param_3,1,0);
  if (param_1 == 0) {
    local_58 = L"GetTrianglesByMaterialID_InvalidInput";
    local_50._0_4_ = 0x25;
    FUN_1446e940c(local_38,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_50 = (undefined4 *)CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(local_3c,&local_58);
    pwVar2 = L"GetTrianglesByMaterialID: TargetMesh is Null";
  }
  else {
    local_58 = (wchar_t *)&local_3d;
    local_3d = '\x01';
    local_50 = &local_34;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x208);
    local_48 = param_3;
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) == 0)) {
      local_58 = L"GetTrianglesByMaterialID_MissingMaterialID";
      local_50._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
      local_50._0_4_ = 0x2a;
      FUN_1446e940c(local_38,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
      local_50 = (undefined4 *)CONCAT44(local_50._4_4_,0x2c);
      FUN_1446e940c(local_3c,&local_58);
      pwVar2 = L"GetTrianglesByMaterialID: MaterialID Attribute is not enabled";
    }
    else {
      FUN_143bd0532(&local_58);
      if (local_3d != '\0') goto LAB_148590ea9;
      local_58 = L"GetTrianglesByMaterialID_InvalidTriangles";
      local_50._0_4_ = 0x29;
      FUN_1446e940c(local_38,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
      local_50 = (undefined4 *)CONCAT44(local_50._4_4_,0x2c);
      FUN_1446e940c(local_3c,&local_58);
      pwVar2 = L"GetTrianglesByMaterialID: TriangleIDList has invalid triangles";
    }
  }
  FUN_140208bae(&local_58,local_3c,local_38,pwVar2);
  FUN_143ba90d7(param_4,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_148590ea9:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148590ed6 FUN_148590ed6 body=748 status=ok
// SIG undefined FUN_148590ed6(void)

void FUN_148590ed6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [7];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_78[4] = 0;
  local_78[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar3 = local_78 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar4 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar5 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  iVar1 = local_80;
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  uVar2 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = iVar1 != 0;
  local_98 = local_88;
  local_a8 = local_7c;
  FUN_1485911c4(local_40,plVar3,plVar4,plVar5);
  *param_3 = uVar2;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485911c4 FUN_1485911c4 body=716 status=ok
// SIG undefined FUN_1485911c4(void)

longlong FUN_1485911c4(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,char param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_128 [40];
  wchar_t *local_100;
  longlong *local_f8;
  char *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  code *local_d0;
  wchar_t **local_c8;
  undefined1 local_b9;
  longlong local_b8 [3];
  char local_99;
  undefined1 *local_98;
  undefined1 *local_90;
  code **local_88;
  undefined1 local_79;
  code *local_78;
  undefined1 **local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar5 = param_7;
  cVar4 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_99 = param_6;
  FUN_14113129a(param_4);
  if (param_1 == 0) {
    local_100 = L"RemapAndCombineMaterials_InvalidInput";
    local_f8._0_4_ = 0x25;
    FUN_1446e940c(&local_68,&local_100);
    local_100 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x2c);
    FUN_1446e940c(&local_98,&local_100);
    FUN_140208bae(&local_100,&local_98,&local_68,L"RemapAndCombineMaterials: TargetMesh is Null");
    FUN_143ba90d7(uVar5,2,&local_100);
    if (local_100 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_100 + 0x10))();
    }
  }
  else {
    local_b8[0] = 0;
    local_b8[1] = 0;
    uVar1 = *(uint *)(param_2 + 1);
    if (cVar4 == '\0') {
      if (uVar1 != 0) {
        iVar2 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar2 + uVar1;
        if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < uVar1) {
          FUN_144769b64(param_4,iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *param_4),(void *)*param_2,(longlong)(int)uVar1 << 3);
      }
    }
    else {
      local_100 = (wchar_t *)CONCAT44(local_100._4_4_,0xffffffff);
      FUN_1448156a8(local_b8,&local_100,uVar1);
      if (0 < (int)param_2[1]) {
        lVar10 = 0;
        do {
          lVar3 = *param_2;
          lVar6 = *param_4;
          iVar2 = (int)param_4[1];
          lVar11 = (longlong)iVar2;
          if (lVar11 != 0) {
            lVar9 = lVar11 * 8;
            lVar8 = 0;
            do {
              if (*(longlong *)(lVar6 + lVar8 * 8) == *(longlong *)(lVar3 + lVar10 * 8)) {
                iVar7 = (int)lVar8;
                if (iVar7 != -1) goto LAB_148591362;
                break;
              }
              lVar8 = lVar8 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          *(uint *)(param_4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
            FUN_144769b64(param_4);
            lVar6 = *param_4;
          }
          *(undefined8 *)(lVar6 + lVar11 * 8) = *(undefined8 *)(lVar3 + lVar10 * 8);
          iVar7 = iVar2;
LAB_148591362:
          *(int *)(local_b8[0] + lVar10 * 4) = iVar7;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)param_2[1]);
      }
    }
    local_100 = (wchar_t *)&param_5;
    local_c8 = &local_100;
    local_f0 = &local_99;
    local_e0 = local_b8;
    local_d8 = &param_7;
    local_88 = &local_d0;
    local_d0 = FUN_143bcffd6;
    local_98 = &local_79;
    local_79 = 1;
    local_90 = &local_b9;
    local_b9 = 0;
    local_70 = &local_98;
    local_66 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = 0;
    local_78 = FUN_143bcfba0;
    local_f8 = param_2;
    local_e8 = param_3;
    FUN_1484b8434(param_1,&local_78,&local_68,0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148591492 FUN_148591492 body=384 status=ok
// SIG undefined FUN_148591492(void)

void FUN_148591492(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148591614(local_20,local_24,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148591614 FUN_148591614 body=378 status=ok
// SIG undefined FUN_148591614(void)

longlong FUN_148591614(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_d8 [40];
  undefined4 *local_b0;
  undefined4 *local_a8;
  code *local_a0;
  undefined4 **local_98;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 local_61;
  code *local_60;
  undefined1 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = param_2;
  local_84 = param_3;
  if (param_1 == 0) {
    local_50 = L"RemapMaterialIDs_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_80,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_80,L"RemapMaterialIDs: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_b0 = &local_88;
    local_98 = &local_b0;
    local_a8 = &local_84;
    local_70 = &local_a0;
    local_a0 = FUN_143bcfcfe;
    local_80 = &local_61;
    local_61 = 1;
    local_78 = &local_89;
    local_89 = 0;
    local_58 = &local_80;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bcfba0;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148591790 FUN_148591790 body=531 status=ok
// SIG undefined FUN_148591790(void)

void FUN_148591790(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_5c;
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  FUN_1485919a4(local_30,plVar2,plVar3,local_5c);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485919a4 FUN_1485919a4 body=724 status=ok
// SIG undefined FUN_1485919a4(void)

longlong FUN_1485919a4(longlong param_1,longlong *param_2,longlong *param_3,int param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  longlong **local_d8;
  undefined1 local_c9;
  longlong local_c8 [3];
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 local_91;
  code *local_90;
  undefined1 **local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar1 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 == 0) {
    local_80 = L"RemapToNewMaterialIDsByMaterial_InvalidInput";
    local_78._0_4_ = 0x2c;
    FUN_1446e940c(&local_b0,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_78 = CONCAT44(local_78._4_4_,0x2c);
    FUN_1446e940c(&local_90,&local_80);
    FUN_140208bae(&local_80,&local_90,&local_b0,
                  L"RemapToNewMaterialIDsByMaterial: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_f8 = param_1;
    FUN_144a1a59e(local_c8,(int)param_2[1],1);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      do {
        if ((longlong)(int)param_3[1] != 0) {
          lVar2 = (longlong)(int)param_3[1] << 3;
          lVar3 = 0;
          do {
            if (*(longlong *)(*param_3 + lVar3 * 8) == *(longlong *)(*param_2 + lVar4 * 8)) {
              if ((int)lVar3 != -1) {
                *(int *)(local_c8[0] + lVar4 * 4) = (int)lVar3;
                goto LAB_148591b1f;
              }
              break;
            }
            lVar3 = lVar3 + 1;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
        if (param_4 < 0) {
          local_80 = L"RemapToNewMaterialIDsByMaterial_MaterialMissing";
          local_78._0_4_ = 0x2f;
          FUN_1446e940c(&local_b0,&local_80);
          local_80 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
          local_78 = CONCAT44(local_78._4_4_,0x2c);
          FUN_1446e940c(&local_90,&local_80);
          FUN_140208bae(&local_80,&local_90,&local_b0,
                        L"RemapToNewMaterialIDsByMaterial: Material in FromMaterialList not found in ToMaterialList, skipping"
                       );
          FUN_143ba9449(uVar1,2,&local_80);
          if (local_80 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_80 + 0x10))();
          }
          *(int *)(local_c8[0] + lVar4 * 4) = (int)lVar4;
        }
        else {
          *(int *)(local_c8[0] + lVar4 * 4) = param_4;
        }
LAB_148591b1f:
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_2[1]);
    }
    param_1 = local_f8;
    local_d8 = &local_f0;
    local_f0 = local_c8;
    local_e8 = &param_5;
    local_a0 = &local_e0;
    local_e0 = FUN_143bcfdf2;
    local_b0 = &local_91;
    local_91 = 1;
    local_a8 = &local_c9;
    local_c9 = 0;
    local_88 = &local_b0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = (wchar_t *)((ulonglong)local_80 & 0xffffffffff000000);
    local_90 = FUN_143bcfba0;
    FUN_1484b8434(local_f8,&local_90,&local_80,0);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148591c80 FUN_148591c80 body=473 status=ok
// SIG undefined FUN_148591c80(void)

void FUN_148591c80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar3 = local_44;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar5 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68[0] = local_40[0];
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_148591e5a(local_28,local_68,iVar3 != 0,local_50);
  plVar4 = plStack_30;
  *param_3 = uVar5;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148591e5a FUN_148591e5a body=697 status=ok
// SIG undefined FUN_148591e5a(void)

longlong FUN_148591e5a(longlong param_1,byte *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_a8 [32];
  byte *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  byte **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (param_1 == 0) {
    local_60 = L"SetAllTriangleMaterialIDs_InvalidMesh";
    local_58._0_4_ = 0x25;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_88,&local_60);
    pwVar4 = L"SetAllTriangleMaterialIDs: TargetMesh is Null";
  }
  else if (*(longlong *)(param_2 + 8) == 0) {
    local_60 = L"SetAllTriangleMaterialIDs_InvalidList";
    local_58._0_4_ = 0x25;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_88,&local_60);
    pwVar4 = L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is Null";
  }
  else {
    if ((*param_2 & 0xfb) == 0) {
      if ((*(int *)(*(longlong *)(param_2 + 8) + 8) == 0) &&
         (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) != 0)) {
        local_60 = L"SetAllTriangleMaterialIDs_EmptyList";
        local_58._0_4_ = 0x23;
        FUN_1446e940c(&local_70,&local_60);
        local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
        local_58 = CONCAT44(local_58._4_4_,0x2c);
        FUN_1446e940c(&local_88,&local_60);
        FUN_140208bae(&local_60,&local_88,&local_70,
                      L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is empty");
        FUN_143ba9449(param_4,2,&local_60);
        if (local_60 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_60 + 0x10))();
        }
      }
      local_68 = &local_88;
      local_80 = &local_78;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
      local_70 = FUN_143bd0672;
      local_88 = param_2;
      FUN_1484b8434(param_1,&local_70,&local_60,param_3);
      goto LAB_148591f78;
    }
    local_60 = L"SetAllTriangleMaterialIDs_InvalidList2";
    local_58._0_4_ = 0x26;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_88,&local_60);
    pwVar4 = L"SetAllTriangleMaterialIDs: TriangleMaterialIDList has incompatible index type";
  }
  FUN_140208bae(&local_60,&local_88,&local_70,pwVar4);
  FUN_143ba90d7(param_4,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_148591f78:
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859211a FUN_14859211a body=542 status=ok
// SIG undefined FUN_14859211a(void)

void FUN_14859211a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar3 = local_40;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_48;
  FUN_14859233a(local_28,&local_58,local_3c,iVar3 != 0);
  *param_3 = uVar4;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859233a FUN_14859233a body=343 status=ok
// SIG undefined FUN_14859233a(void)

longlong FUN_14859233a(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 *local_78;
  undefined4 local_6c;
  code *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = param_3;
  if (param_1 == 0) {
    local_58 = L"SetMaterialIDForMeshSelection_InvalidMesh";
    local_50._0_4_ = 0x29;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_80,&local_58);
    FUN_140208bae(&local_58,&local_80,&local_68,L"SetMaterialIDForMeshSelection: TargetMesh is Null"
                 );
    FUN_143ba90d7(param_5,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_80;
    local_78 = &local_6c;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd0982;
    local_80 = param_2;
    FUN_1484b8434(param_1);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148592498 FUN_148592498 body=559 status=ok
// SIG undefined FUN_148592498(void)

void FUN_148592498(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar3 = local_48;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar5 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68[0] = local_40[0];
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_50;
  FUN_1485926c8(local_28,local_68,local_44,iVar3 != 0);
  plVar4 = plStack_30;
  *param_3 = uVar5;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485926c8 FUN_1485926c8 body=810 status=ok
// SIG undefined FUN_1485926c8(void)

longlong FUN_1485926c8(longlong param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_b8 [40];
  byte *local_90;
  char *local_88;
  undefined4 *local_80;
  char local_75;
  undefined4 local_74;
  code *local_70;
  byte **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_74 = param_3;
  if (param_1 == 0) {
    local_60 = L"SetMaterialIDOnTriangles_InvalidMesh";
    local_58._0_4_ = 0x24;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_70,&local_60);
    pwVar4 = L"SetMaterialIDOnTriangles: TargetMesh is Null";
  }
  else if (*(longlong *)(param_2 + 8) == 0) {
    local_60 = L"SetMaterialIDOnTriangles_InvalidList";
    local_58._0_4_ = 0x24;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_70,&local_60);
    pwVar4 = L"SetMaterialIDOnTriangles: TriangleIDList is Null";
  }
  else if (*param_2 < 2) {
    if ((*(int *)(*(longlong *)(param_2 + 8) + 8) == 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) != 0)) {
      local_60 = L"SetMaterialIDOnTriangles_EmptyList";
      local_58._0_4_ = 0x22;
      FUN_1446e940c(&local_90,&local_60);
      local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
      local_58 = CONCAT44(local_58._4_4_,0x2c);
      FUN_1446e940c(&local_70,&local_60);
      FUN_140208bae(&local_60,&local_70,&local_90,
                    L"SetMaterialIDOnTriangles: TriangleIDList is empty");
      FUN_143ba9449(param_5,2,&local_60);
      if (local_60 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_60 + 0x10))();
      }
    }
    local_88 = &local_75;
    local_75 = '\0';
    local_68 = &local_90;
    local_80 = &local_74;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
    local_70 = FUN_143bd089e;
    local_90 = param_2;
    FUN_1484b8434(param_1,&local_70,&local_60,param_4);
    if (local_75 != '\x01') goto LAB_1485927eb;
    local_60 = L"SetMaterialIDOnTriangles_InvalidTriangles";
    local_58._0_4_ = 0x29;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_70,&local_60);
    pwVar4 = L"SetMaterialIDOnTriangles: TriangleIDList has invalid triangles";
  }
  else {
    local_60 = L"SetMaterialIDOnTriangles_InvalidList2";
    local_58._0_4_ = 0x25;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2c);
    FUN_1446e940c(&local_70,&local_60);
    pwVar4 = L"SetMaterialIDOnTriangles: TriangleIDList has incompatible index type";
  }
  FUN_140208bae(&local_60,&local_70,&local_90,pwVar4);
  FUN_143ba90d7(param_5,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_1485927eb:
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148592a00 FUN_148592a00 body=645 status=ok
// SIG undefined FUN_148592a00(void)

void FUN_148592a00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar2 = local_48;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_30;
  local_68 = &local_41;
  if (puVar1 != (undefined1 *)0x0) {
    local_68 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = iVar2 != 0;
  local_58 = local_50;
  FUN_148592c86(local_30,CONCAT44(uStack_34,local_38),local_3c,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148592c86 FUN_148592c86 body=216 status=ok
// SIG undefined FUN_148592c86(void)

longlong FUN_148592c86(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined1 *param_5,undefined1 param_6)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_5 = 0;
  local_50 = param_3;
  local_4c = param_4;
  local_48 = param_2;
  if (param_1 != 0) {
    local_78 = &local_48;
    local_38 = &local_78;
    local_70 = &stack0x00000038;
    local_68 = &local_50;
    local_60 = &local_4c;
    local_58 = param_5;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = FUN_143bd0a52;
    FUN_1484b8434(param_1,&local_40,&local_30,param_6);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148592d6c FUN_148592d6c body=476 status=ok
// SIG undefined FUN_148592d6c(void)

void FUN_148592d6c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  puVar3 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_148592f4a(local_28,local_2c,local_30,puVar3);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148592f4a FUN_148592f4a body=178 status=ok
// SIG undefined FUN_148592f4a(void)

longlong FUN_148592f4a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                      undefined1 param_5)

{
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_4 = 0;
  local_48 = param_2;
  local_44 = param_3;
  if (param_1 != 0) {
    local_60 = &local_48;
    local_38 = &local_60;
    local_50 = &local_44;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = &LAB_143bd05ee;
    local_58 = param_4;
    FUN_1484b8434(param_1,&local_40,&local_30,CONCAT71((int7)(local_10 >> 8),param_5) & 0xffffffff);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148593044 FUN_148593044 body=504 status=ok
// SIG undefined FUN_148593044(void)

void FUN_148593044(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  uint uStack_40;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_44 = 0x3f800000;
  uStack_40 = uStack_40 & 0xffffff00;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_44;
  uStack_64 = uStack_40;
  uStack_60 = (undefined4)uStack_3c;
  uStack_5c = uStack_3c._4_4_;
  local_58 = local_34;
  local_78 = local_30;
  local_70 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_14859323e(local_20,&local_78,&local_68,local_50);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859323e FUN_14859323e body=166 status=ok
// SIG undefined FUN_14859323e(void)

undefined8
FUN_14859323e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = param_4;
  FUN_14859353e(param_1,&local_48,3,&local_38);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485932e6 FUN_1485932e6 body=599 status=ok
// SIG undefined FUN_1485932e6(void)

void FUN_1485932e6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_48 = 0x3f800000;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = local_38;
  local_78 = local_30;
  local_70 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_88 = local_50;
  FUN_14859353e(local_20,&local_78,local_31,&local_68);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859353e FUN_14859353e body=350 status=ok
// SIG undefined FUN_14859353e(void)

longlong FUN_14859353e(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined1 local_69;
  code *local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_69 = param_3;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshBevelSelection_InvalidInput";
    local_50._0_4_ = 0x24;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_88,L"ApplyMeshBevelSelection: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_88;
    local_80 = &local_69;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd4408;
    local_88 = param_4;
    local_78 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485936a4 FUN_1485936a4 body=462 status=ok
// SIG undefined FUN_1485936a4(void)

void FUN_1485936a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar3 = local_3c;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_148593874(local_28,&local_58,iVar3 != 0,local_48);
  *param_3 = uVar4;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148593874 FUN_148593874 body=367 status=ok
// SIG undefined FUN_148593874(void)

longlong FUN_148593874(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_71 = param_3;
  local_70 = param_4;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshDisconnectFaces_InvalidInput";
    local_50._0_4_ = 0x25;
    FUN_1446e940c(&local_90,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_90,L"ApplyMeshDisconnectFaces: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_90;
    local_88 = &local_70;
    local_80 = &local_71;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd15ce;
    local_90 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485939e4 FUN_1485939e4 body=380 status=ok
// SIG undefined FUN_1485939e4(void)

void FUN_1485939e4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_148593b62(local_20,&local_48,local_38);
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148593b62 FUN_148593b62 body=341 status=ok
// SIG undefined FUN_148593b62(void)

longlong FUN_148593b62(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshDisconnectEdges_InvalidInput";
    local_50._0_4_ = 0x25;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_80,&local_58);
    FUN_140208bae(&local_58,&local_80,&local_68,L"ApplyMeshDisconnectEdges: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_80;
    local_78 = &local_70;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd16f2;
    local_80 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148593cb8 FUN_148593cb8 body=603 status=ok
// SIG undefined FUN_148593cb8(void)

void FUN_148593cb8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar4 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = local_50 & 0xffffff00;
  uStack_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_58;
  FUN_148593f14(local_28,&local_68,puVar4,CONCAT44(uStack_4c,local_50));
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148593f14 FUN_148593f14 body=418 status=ok
// SIG undefined FUN_148593f14(void)

longlong FUN_148593f14(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88 [3];
  undefined8 local_70;
  code *local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_4;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshDuplicateFaces_InvalidInput";
    local_50._0_4_ = 0x24;
    FUN_1446e940c(&local_a8,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_a8,L"ApplyMeshDuplicateFaces: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_88[0] = 0;
    local_88[1] = 0;
    local_60 = &local_a8;
    local_a0 = &param_5;
    local_90 = &local_70;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd18f6;
    local_a8 = param_2;
    local_98 = local_88;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
    FUN_143bb66e6(param_1,local_88,1,param_3);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485940b8 FUN_1485940b8 body=381 status=ok
// SIG undefined FUN_1485940b8(void)

void FUN_1485940b8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0x3f800000;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3f800000;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  local_68 = (undefined4)uStack_38;
  uStack_64 = uStack_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = CONCAT44(uStack_24,local_28);
  FUN_148594236(local_20,&local_78,local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594236 FUN_148594236 body=229 status=ok
// SIG undefined FUN_148594236(void)

undefined8 FUN_148594236(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar4 = *(undefined1 *)(param_2 + 9);
  FUN_148568536(local_80);
  local_b4 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_b8 = uVar1;
  local_b0 = uVar5;
  uStack_a8 = uVar6;
  local_a0 = uVar3;
  local_8c = uVar2;
  local_88 = uVar4;
  FUN_1485948e8(param_1,&local_b8,local_80,param_3);
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859431c FUN_14859431c body=536 status=ok
// SIG undefined FUN_14859431c(void)

void FUN_14859431c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  uint local_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_40 = 0x3f800000;
  uStack_3c = CONCAT22(uStack_3c._2_2_,1);
  uStack_38 = 0x3f80000000000000;
  local_30 = local_30 & 0xffffff00;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_28 = 0x3f80000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_148568536(&local_50);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = (undefined4)uStack_28;
  uStack_6c = uStack_28._4_4_;
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = (undefined4)uStack_38;
  uStack_7c = uStack_38._4_4_;
  FUN_148594536(local_20,&local_88,&local_68,local_58);
  *param_3 = uVar3;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594536 FUN_148594536 body=331 status=ok
// SIG undefined FUN_148594536(void)

longlong FUN_148594536(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshInsetOutsetFaces_InvalidInput";
    local_50._0_4_ = 0x26;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(&local_58,&local_78,&local_68,L"ApplyMeshInsetOutsetFaces: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_78;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd3aea;
    local_78 = param_2;
    local_70 = param_3;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594682 FUN_148594682 body=613 status=ok
// SIG undefined FUN_148594682(void)

void FUN_148594682(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_58 = 0x3f800000;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3ff0000000000000;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_30 = 0x3f80000000000000;
  local_28 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_148568536(&local_68);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_68;
  local_78 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_88 = CONCAT71(uStack_27,local_28);
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = (undefined4)uStack_30;
  uStack_8c = uStack_30._4_4_;
  local_a8 = (undefined4)uStack_48;
  uStack_a4 = uStack_48._4_4_;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = (undefined4)uStack_50;
  uStack_ac = uStack_50._4_4_;
  FUN_1485948e8(local_20,&local_b8,&local_80,local_70);
  *param_3 = uVar3;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485948e8 FUN_1485948e8 body=331 status=ok
// SIG undefined FUN_1485948e8(void)

longlong FUN_1485948e8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshLinearExtrudeFaces_InvalidInput";
    local_50._0_4_ = 0x28;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(&local_58,&local_78,&local_68,L"ApplyMeshLinearExtrudeFaces: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_78;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd2740;
    local_78 = param_2;
    local_70 = param_3;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594a34 FUN_148594a34 body=360 status=ok
// SIG undefined FUN_148594a34(void)

void FUN_148594a34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined8 uStack_30;
  uint local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0x3f800000;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_30 = 0x3dcccccd00000005;
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0x3e4ccccd;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = CONCAT44(uStack_24,local_28);
  FUN_148594b9e(local_20,&local_58,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594b9e FUN_148594b9e body=276 status=ok
// SIG undefined FUN_148594b9e(void)

longlong FUN_148594b9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"ApplyMeshOffset_InvalidInput";
    local_48._0_4_ = 0x1c;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_68,&local_50);
    FUN_140208bae(&local_50,&local_68,&local_60,L"ApplyMeshOffset: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd1f74;
    local_68 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594cb4 FUN_148594cb4 body=516 status=ok
// SIG undefined FUN_148594cb4(void)

void FUN_148594cb4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0x3f800000;
  uStack_34 = CONCAT22(uStack_34._2_2_,2);
  uStack_30 = uStack_30 & 0xffffff00;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  local_58 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_68 = CONCAT44(uStack_24,uStack_28);
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  FUN_148594eba(local_20,&local_78,&local_60,local_50);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148594eba FUN_148594eba body=331 status=ok
// SIG undefined FUN_148594eba(void)

longlong FUN_148594eba(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    local_58 = L"ApplyMeshOffsetFaces_InvalidInput";
    local_50._0_4_ = 0x21;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2c);
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(&local_58,&local_78,&local_68,L"ApplyMeshOffsetFaces: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_60 = &local_78;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd31a0;
    local_78 = param_2;
    local_70 = param_3;
    FUN_1484b8434(param_1,&local_68,&local_58,0);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595006 FUN_148595006 body=429 status=ok
// SIG undefined FUN_148595006(void)

void FUN_148595006(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [192];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98 [12];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b0);
  }
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = 0x3f800000;
  local_d4 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_98;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  uVar1 = local_1b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memcpy(local_1a8,&local_e8,0xc0);
  uVar2 = local_1b0;
  FUN_1485951b4(local_1b0,local_1a8,uVar1);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485951b4 FUN_1485951b4 body=290 status=ok
// SIG undefined FUN_1485951b4(void)

longlong FUN_1485951b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if (param_1 == 0) {
    local_50 = L"ApplyMeshPolygroupBevel_InvalidInput";
    local_48._0_4_ = 0x24;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_78,&local_50);
    FUN_140208bae(&local_50,&local_78,&local_60,L"ApplyMeshPolygroupBevel: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_78;
    local_70 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd47dc;
    local_78 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485952d8 FUN_1485952d8 body=360 status=ok
// SIG undefined FUN_1485952d8(void)

void FUN_1485952d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined8 uStack_30;
  uint local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0x3f800000;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_30 = 0x3dcccccd00000005;
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0x3e4ccccd;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = CONCAT44(uStack_24,local_28);
  FUN_148595442(local_20,&local_58,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595442 FUN_148595442 body=276 status=ok
// SIG undefined FUN_148595442(void)

longlong FUN_148595442(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"ApplyMeshShell_InvalidInput";
    local_48._0_4_ = 0x1b;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2c);
    FUN_1446e940c(&local_68,&local_50);
    FUN_140208bae(&local_50,&local_68,&local_60,L"ApplyMeshShell: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd2136;
    local_68 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859556e FUN_14859556e body=235 status=ok
// SIG undefined FUN_14859556e(void)

void FUN_14859556e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14859565a(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859565a FUN_14859565a body=273 status=ok
// SIG undefined FUN_14859565a(void)

longlong FUN_14859565a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  code *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"AutoRepairNormals_InvalidInput";
    local_48._0_4_ = 0x1e;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"AutoRepairNormals: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd5eea;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859576c FUN_14859576c body=423 status=ok
// SIG undefined FUN_14859576c(void)

void FUN_14859576c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_30 = 0x41700000;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_36 = 0x101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_36);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_36);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_34;
  uStack_54 = uStack_30;
  uStack_50 = uStack_2c;
  uStack_4c = uStack_28;
  local_48 = local_24;
  FUN_148595914(local_20,&local_58,local_36,local_40);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595914 FUN_148595914 body=314 status=ok
// SIG undefined FUN_148595914(void)

longlong FUN_148595914(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 local_62;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_62 = param_3;
  if (param_1 == 0) {
    local_50 = L"ComputeSplitNormals_InvalidInput";
    local_48._0_4_ = 0x20;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_88,L"ComputeSplitNormals: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_88;
    local_80 = &local_70;
    local_78 = &local_62;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd6a5a;
    local_88 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595a50 FUN_148595a50 body=315 status=ok
// SIG undefined FUN_148595a50(void)

void FUN_148595a50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148595b8c(local_20,CONCAT44(uStack_24,local_28),local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595b8c FUN_148595b8c body=306 status=ok
// SIG undefined FUN_148595b8c(void)

longlong FUN_148595b8c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"ComputeTangents_InvalidInput";
    local_48._0_4_ = 0x1c;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_60,L"ComputeTangents: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_80 = &local_68;
    local_58 = &local_80;
    local_78 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd6e64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595cc0 FUN_148595cc0 body=235 status=ok
// SIG undefined FUN_148595cc0(void)

void FUN_148595cc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148595dac(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595dac FUN_148595dac body=273 status=ok
// SIG undefined FUN_148595dac(void)

longlong FUN_148595dac(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"DiscardTangents_InvalidInput";
    local_48._0_4_ = 0x1c;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"DiscardTangents: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = &LAB_143bd6e1c;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595ebe FUN_148595ebe body=235 status=ok
// SIG undefined FUN_148595ebe(void)

void FUN_148595ebe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148595faa(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148595faa FUN_148595faa body=273 status=ok
// SIG undefined FUN_148595faa(void)

longlong FUN_148595faa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  code *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"FlipNormals_InvalidInput";
    local_48._0_4_ = 0x18;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"FlipNormals: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd5d2e;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485960c2 FUN_1485960c2 body=322 status=ok
// SIG undefined FUN_1485960c2(void)

void FUN_1485960c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_28;
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148596206(local_28,puVar3,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596206 FUN_148596206 body=232 status=ok
// SIG undefined FUN_148596206(void)

longlong FUN_148596206(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    local_40 = L"GetMeshHasTangents_InvalidInput";
    local_38 = 0x1f;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_38 = 0x2b;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"GetMeshHasTangents: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    *(undefined1 *)param_2 = 0;
    local_40 = param_2;
    FUN_143bd6de0(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596302 FUN_148596302 body=592 status=ok
// SIG undefined FUN_148596302(void)

void FUN_148596302(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar5 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  puVar7 = &local_4a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar4 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  FUN_143bb6978(local_38,puVar5,puVar6,puVar7);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596566 FUN_148596566 body=735 status=ok
// SIG undefined FUN_148596566(void)

void FUN_148596566(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_80;
  int local_70;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar6 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar8 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  local_69 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar9 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_6a = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a);
  }
  puVar7 = &local_6a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  uVar5 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_70 != 0;
  local_88 = puVar7;
  FUN_143bb700c(local_40,puVar6,puVar8,puVar9);
  plVar4 = plStack_60;
  *param_3 = uVar5;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859684c FUN_14859684c body=391 status=ok
// SIG undefined FUN_14859684c(void)

void FUN_14859684c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined2 local_2a;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2a = 0x101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485969d4(local_28,local_2a,iVar1 != 0,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485969d4 FUN_1485969d4 body=306 status=ok
// SIG undefined FUN_1485969d4(void)

longlong FUN_1485969d4(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 local_62;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_4;
  local_62 = param_2;
  if (param_1 == 0) {
    local_50 = L"RecomputeNormals_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_60,L"RecomputeNormals: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_80 = &local_70;
    local_58 = &local_80;
    local_78 = &local_62;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd5fe2;
    FUN_1484b8434(param_1,&local_60,&local_50,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596b0e FUN_148596b0e body=542 status=ok
// SIG undefined FUN_148596b0e(void)

void FUN_148596b0e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined2 local_3a;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3a = 0x101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar3 = local_40;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_48;
  FUN_148596d2e(local_28,&local_58,local_3a,iVar3 != 0);
  *param_3 = uVar4;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596d2e FUN_148596d2e body=356 status=ok
// SIG undefined FUN_148596d2e(void)

longlong FUN_148596d2e(longlong param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_80;
  undefined2 *local_78;
  undefined2 local_6a;
  code *local_68;
  undefined8 **local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar4 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6a = param_3;
  if (param_1 == 0) {
    local_58 = L"RecomputeNormalsForMeshSelection_InvalidInput";
    local_50._0_4_ = 0x2d;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2b);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_88,
                  L"RecomputeNormalsForMeshSelection: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
  }
  else {
    local_88 = &param_5;
    local_60 = &local_88;
    local_78 = &local_6a;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
    local_68 = FUN_143bd61a0;
    local_80 = param_2;
    FUN_1484b8434(param_1);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148596e94 FUN_148596e94 body=378 status=ok
// SIG undefined FUN_148596e94(void)

void FUN_148596e94(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar4 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_148597010(local_20,&local_50,local_40);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597010 FUN_148597010 body=446 status=ok
// SIG undefined FUN_148597010(void)

longlong FUN_148597010(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  longlong **local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  if (param_1 == 0) {
    local_58 = L"SetMeshPerVertexNormals_InvalidMesh";
    local_50._0_4_ = 0x23;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2b);
    FUN_1446e940c(&local_80,&local_58);
    pwVar4 = L"SetMeshPerVertexNormals: TargetMesh is Null";
  }
  else {
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) != 0)) {
      local_60 = &local_80;
      local_78 = &local_70;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
      local_68 = FUN_143bd71b4;
      local_80 = param_2;
      FUN_1484b8434(param_1,&local_68,&local_58,0);
      goto LAB_1485970d6;
    }
    local_58 = L"SetMeshPerVertexNormals_InvalidList";
    local_50._0_4_ = 0x23;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2b);
    FUN_1446e940c(&local_80,&local_58);
    pwVar4 = L"SetMeshPerVertexNormals: List is empty";
  }
  FUN_140208bae(&local_58,&local_80,&local_68,pwVar4);
  FUN_143ba90d7(param_3,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_1485970d6:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485971d0 FUN_1485971d0 body=533 status=ok
// SIG undefined FUN_1485971d0(void)

void FUN_1485971d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar4 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  local_58 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1485973e6(local_20,&local_70,&local_60,local_50);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485973e6 FUN_1485973e6 body=599 status=ok
// SIG undefined FUN_1485973e6(void)

longlong FUN_1485973e6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  longlong **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_4;
  if (param_1 == 0) {
    local_60 = L"SetMeshPerVertexTangents_InvalidMesh";
    local_58._0_4_ = 0x24;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_70,&local_60);
    pwVar5 = L"SetMeshPerVertexTangents: TargetMesh is Null";
  }
  else if ((*param_2 == 0) || (iVar3 = *(int *)(*param_2 + 8), iVar3 == 0)) {
    local_60 = L"SetMeshPerVertexTangents_InvalidList";
    local_58._0_4_ = 0x24;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_70,&local_60);
    pwVar5 = L"SetMeshPerVertexTangents: TangentXList is empty";
  }
  else {
    if ((*param_3 != 0) && (*(int *)(*param_3 + 8) == iVar3)) {
      local_68 = &local_90;
      local_80 = &local_78;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = (wchar_t *)((ulonglong)local_60 & 0xffffffffff000000);
      local_70 = FUN_143bd755a;
      local_90 = param_2;
      local_88 = param_3;
      FUN_1484b8434(param_1,&local_70,&local_60,0);
      goto LAB_14859756d;
    }
    local_60 = L"SetMeshPerVertexTangents_InvalidListY";
    local_58._0_4_ = 0x25;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_58 = CONCAT44(local_58._4_4_,0x2b);
    FUN_1446e940c(&local_70,&local_60);
    pwVar5 = L"SetMeshPerVertexTangents: TangentYList must be the same size as TangentXList";
  }
  FUN_140208bae(&local_60,&local_70,&local_90,pwVar5);
  FUN_143ba90d7(param_4,2,&local_60);
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
LAB_14859756d:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859764a FUN_14859764a body=726 status=ok
// SIG undefined FUN_14859764a(void)

void FUN_14859764a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128 [9];
  int local_e0;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_84;
  longlong local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined4 local_5c;
  code *local_58;
  undefined4 **local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_c8 = DAT_14c8464f0;
  local_d8._0_4_ = (undefined4)DAT_14c8464e0;
  local_d8._4_4_ = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  puVar6 = &local_d9;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  iVar1 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_d8;
  puVar5 = local_128;
  for (lVar3 = 9; lVar2 = local_80, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_5c = local_84;
  *puVar6 = 0;
  if (lVar2 != 0) {
    local_78 = &local_5c;
    local_50 = &local_78;
    local_46 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = 0;
    local_58 = FUN_143bd7030;
    local_70 = puVar6;
    local_68 = local_128;
    FUN_1484b8434(lVar2,&local_58,&local_48,iVar1 != 0);
  }
  *param_3 = lVar2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597922 FUN_148597922 body=235 status=ok
// SIG undefined FUN_148597922(void)

void FUN_148597922(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148597a0e(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597a0e FUN_148597a0e body=273 status=ok
// SIG undefined FUN_148597a0e(void)

longlong FUN_148597a0e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"SetPerFaceNormals_InvalidInput";
    local_48._0_4_ = 0x1e;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"SetPerFaceNormals: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = &LAB_143bd5fda;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597b20 FUN_148597b20 body=235 status=ok
// SIG undefined FUN_148597b20(void)

void FUN_148597b20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148597c0c(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597c0c FUN_148597c0c body=273 status=ok
// SIG undefined FUN_148597c0c(void)

longlong FUN_148597c0c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  code *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"SetPerVertexNormals_InvalidInput";
    local_48._0_4_ = 0x20;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2b);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"SetPerVertexNormals: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd5f98;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148597d30 FUN_148597d30 body=721 status=ok
// SIG undefined FUN_148597d30(void)

void FUN_148597d30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined2 local_52;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar5 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar4 = local_50;
  local_52 = 0x101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_52);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_52);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar3 = local_58;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar6 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  local_68 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_80 = iVar3 != 0;
  local_78 = local_60;
  local_88 = local_52;
  FUN_148598002(local_38,&local_70,iVar5 != 0,iVar4 != 0);
  *param_3 = uVar6;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148598002 FUN_148598002 body=401 status=ok
// SIG undefined FUN_148598002(void)

longlong FUN_148598002(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                      undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_6a;
  undefined1 local_69;
  code *local_68;
  wchar_t **local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar4 = param_7;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6a = param_3;
  local_69 = param_4;
  if (param_1 == 0) {
    local_98 = L"SetSplitNormalsAlongSelectedEdges_InvalidInput";
    local_90._0_4_ = 0x2e;
    FUN_1446e940c(&local_58,&local_98);
    local_98 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_90 = CONCAT44(local_90._4_4_,0x2b);
    FUN_1446e940c(&local_68,&local_98);
    FUN_140208bae(&local_98,&local_68,&local_58,
                  L"SetSplitNormalsAlongSelectedEdges: TargetMesh is Null");
    FUN_143ba90d7(uVar4,2,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
  }
  else {
    local_98 = (wchar_t *)&param_7;
    local_60 = &local_98;
    local_88 = &local_6a;
    local_80 = &local_69;
    local_78 = (undefined1 *)&param_5;
    local_56 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = 0x400;
    local_68 = FUN_143bd64dc;
    local_90 = param_2;
    FUN_1484b8434(param_1,&local_68,&local_58,param_6);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485981b2 FUN_1485981b2 body=1129 status=ok
// SIG undefined FUN_1485981b2(void)

void FUN_1485981b2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_a4;
  int local_a0;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar4 = local_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar3 = local_64;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  iVar2 = local_a0;
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  uVar5 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = &local_c8;
  local_b8 = local_88;
  local_c8 = local_98;
  uStack_c0 = uStack_90;
  local_130 = &local_e8;
  local_e8 = local_80;
  uStack_e0 = uStack_78;
  local_d8 = local_70;
  local_108 = local_60;
  uStack_104 = uStack_5c;
  uStack_100 = uStack_58;
  uStack_fc = uStack_54;
  local_f8 = local_50;
  local_110 = local_a4 != 0;
  local_120 = &local_99;
  if (puVar1 != (undefined1 *)0x0) {
    local_120 = puVar1;
  }
  local_118 = iVar2 != 0;
  local_138 = iVar3 != 0;
  FUN_143bb7b02(local_40,local_44,iVar4 != 0);
  *param_3 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148598620 FUN_148598620 body=390 status=ok
// SIG undefined FUN_148598620(void)

void FUN_148598620(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485987a8(local_20,CONCAT44(uStack_24,local_28),local_2c,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485987a8 FUN_1485987a8 body=329 status=ok
// SIG undefined FUN_1485987a8(void)

longlong FUN_1485987a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_74 = param_3;
  local_70 = param_4;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"ClearPolygroups_InvalidInput";
    local_48._0_4_ = 0x1c;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"ClearPolygroups: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_90 = &local_68;
    local_58 = &local_90;
    local_88 = &local_70;
    local_80 = &local_74;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd7ff6;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485988f2 FUN_1485988f2 body=471 status=ok
// SIG undefined FUN_1485988f2(void)

void FUN_1485988f2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_148598aca(local_20,CONCAT44(uStack_24,local_28),local_2c,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148598aca FUN_148598aca body=347 status=ok
// SIG undefined FUN_148598aca(void)

longlong FUN_148598aca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_5;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = param_3;
  local_6c = param_4;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"ComputePolygroupsFromAngleThreshold_InvalidInput";
    local_48._0_4_ = 0x30;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,
                  L"ComputePolygroupsFromAngleThreshold: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_90 = &local_68;
    local_58 = &local_90;
    local_88 = &param_5;
    local_80 = &local_6c;
    local_78 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd89ea;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148598c32 FUN_148598c32 body=740 status=ok
// SIG undefined FUN_148598c32(void)

void FUN_148598c32(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar2 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar1 = local_40;
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_60;
  local_78 = local_54;
  local_80 = local_50;
  local_88 = local_48;
  FUN_148598f18(local_30,CONCAT44(uStack_34,local_38),iVar2 != 0,iVar1 != 0);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148598f18 FUN_148598f18 body=382 status=ok
// SIG undefined FUN_148598f18(void)

longlong FUN_148598f18(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 in_stack_00000040;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = in_stack_00000040;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_6a = param_3;
  local_69 = param_4;
  local_68 = param_2;
  if (param_1 == 0) {
    local_a8 = L"ComputePolygroupsFromPolygonDetection_InvalidInput";
    local_a0._0_4_ = 0x32;
    FUN_1446e940c(&local_50,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_a8);
    FUN_140208bae(&local_a8,&local_60,&local_50,
                  L"ComputePolygroupsFromPolygonDetection: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    local_a8 = (wchar_t *)&local_68;
    local_58 = &local_a8;
    local_a0 = &stack0x00000040;
    local_98 = &local_6a;
    local_90 = &local_69;
    local_88 = &stack0x00000028;
    local_80 = &stack0x00000030;
    local_78 = &stack0x00000038;
    local_4e = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_60 = FUN_143bd8bd6;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599098 FUN_148599098 body=315 status=ok
// SIG undefined FUN_148599098(void)

void FUN_148599098(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485991d4(local_20,CONCAT44(uStack_24,local_28),local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485991d4 FUN_1485991d4 body=306 status=ok
// SIG undefined FUN_1485991d4(void)

longlong FUN_1485991d4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"ConvertComponentsToPolygroups_InvalidInput";
    local_48._0_4_ = 0x2a;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_60,L"ConvertComponentsToPolygroups: TargetMesh is Null"
                 );
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_80 = &local_68;
    local_58 = &local_80;
    local_78 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd8856;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599308 FUN_148599308 body=390 status=ok
// SIG undefined FUN_148599308(void)

void FUN_148599308(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148599490(local_20,CONCAT44(uStack_24,local_28),local_2c,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599490 FUN_148599490 body=329 status=ok
// SIG undefined FUN_148599490(void)

longlong FUN_148599490(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_74 = param_3;
  local_70 = param_4;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"ConvertUVIslandsToPolygroups_InvalidInput";
    local_48._0_4_ = 0x29;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"ConvertUVIslandsToPolygroups: TargetMesh is Null")
    ;
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_90 = &local_74;
    local_58 = &local_90;
    local_88 = &local_70;
    local_80 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd8620;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485995da FUN_1485995da body=395 status=ok
// SIG undefined FUN_1485995da(void)

void FUN_1485995da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148599766(local_20,CONCAT44(uStack_24,local_28),CONCAT44(uStack_2c,local_30),local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599766 FUN_148599766 body=329 status=ok
// SIG undefined FUN_148599766(void)

longlong FUN_148599766(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"CopyPolygroupsLayer_InvalidInput";
    local_48._0_4_ = 0x20;
    FUN_1446e940c(&local_90,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_90,L"CopyPolygroupsLayer: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_90 = &local_68;
    local_58 = &local_90;
    local_88 = &local_70;
    local_80 = &local_78;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd823a;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485998b6 FUN_1485998b6 body=568 status=ok
// SIG undefined FUN_1485998b6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1485998b6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  int local_44 [3];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44[2] = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44 + 2);
  }
  local_44[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_44[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  iVar2 = local_44[0];
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_30;
  piVar4 = local_44 + 1;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = iVar2 != 0;
  local_60 = local_50;
  FUN_148599af0(local_30,CONCAT44(uStack_34,local_38),local_44[2],piVar4);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599af0 FUN_148599af0 body=200 status=ok
// SIG undefined FUN_148599af0(void)

longlong FUN_148599af0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                      undefined1 param_5)

{
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  code *local_40;
  undefined8 **local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = 0;
  local_4c = param_3;
  local_48 = param_2;
  if (param_1 != 0) {
    local_70 = &local_48;
    local_38 = &local_70;
    local_68 = &stack0x00000030;
    local_60 = &local_4c;
    local_2e = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_40 = FUN_143bd8e3c;
    local_58 = param_4;
    FUN_1484b8434(param_1,&local_40,&local_30,CONCAT71((int7)(local_10 >> 8),param_5) & 0xffffffff);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599bba FUN_148599bba body=235 status=ok
// SIG undefined FUN_148599bba(void)

void FUN_148599bba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148599ca6(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599ca6 FUN_148599ca6 body=273 status=ok
// SIG undefined FUN_148599ca6(void)

longlong FUN_148599ca6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"EnablePolygroups_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"EnablePolygroups: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = &LAB_143bd7f86;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599db8 FUN_148599db8 body=369 status=ok
// SIG undefined FUN_148599db8(void)

void FUN_148599db8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar4 = local_28;
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar5 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148599f2a(local_28,CONCAT44(uStack_2c,local_30),puVar5);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599f2a FUN_148599f2a body=189 status=ok
// SIG undefined FUN_148599f2a(void)

longlong FUN_148599f2a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68;
  undefined8 *local_60;
  undefined1 local_51;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  code **local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14856da48(param_3,5,0);
  local_70 = *(undefined8 *)(param_3 + 8);
  local_60 = &local_70;
  local_68 = FUN_143bd90ee;
  local_51 = 0;
  local_2c = 0;
  local_28 = param_2;
  if (param_1 != 0) {
    local_50 = &local_28;
    local_48 = &local_51;
    local_40 = &local_2c;
    local_38 = &local_68;
    FUN_1485c192a(&local_50,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148599fe8 FUN_148599fe8 body=369 status=ok
// SIG undefined FUN_148599fe8(void)

void FUN_148599fe8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar4 = local_28;
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar5 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14859a15a(local_28,CONCAT44(uStack_2c,local_30),puVar5);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a15a FUN_14859a15a body=311 status=ok
// SIG undefined FUN_14859a15a(void)

longlong FUN_14859a15a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined8 **local_b8;
  undefined1 local_a9;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  code **local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14856da48(param_3,5,0);
  local_c8 = *(undefined8 *)(param_3 + 8);
  local_d0 = &local_78;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_b8 = &local_d0;
  local_c0 = FUN_143bd91ce;
  local_a9 = 0;
  local_84 = 0;
  local_80 = param_2;
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    local_a8 = &local_80;
    local_a0 = &local_a9;
    local_98 = &local_84;
    local_90 = &local_c0;
    FUN_1485c192a(&local_a8,*(undefined8 *)(param_1 + 0x98));
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_78);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a298 FUN_14859a298 body=395 status=ok
// SIG undefined FUN_14859a298(void)

void FUN_14859a298(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar2 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14859a424(local_20,CONCAT44(uStack_24,local_28),local_2c,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a424 FUN_14859a424 body=177 status=ok
// SIG undefined FUN_14859a424(void)

undefined4 FUN_14859a424(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  undefined1 **local_28;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &local_44;
  *param_4 = 0;
  local_50 = &local_68;
  local_58 = &LAB_143bd8db0;
  local_45 = 0;
  local_1c = 0;
  local_68 = param_4;
  local_44 = param_3;
  local_18 = param_2;
  uVar1 = 0;
  if (param_1 != 0) {
    local_40 = &local_18;
    local_38 = &local_45;
    local_30 = &local_1c;
    local_28 = &local_58;
    FUN_1485c192a(&local_40,*(undefined8 *)(param_1 + 0x98));
    uVar1 = local_1c;
  }
  local_1c = uVar1;
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a4d6 FUN_14859a4d6 body=444 status=ok
// SIG undefined FUN_14859a4d6(void)

void FUN_14859a4d6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  uVar4 = local_28;
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar5 = local_50;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14859a694(local_28,CONCAT44(uStack_2c,local_30),local_34,puVar5);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a694 FUN_14859a694 body=211 status=ok
// SIG undefined FUN_14859a694(void)

longlong FUN_14859a694(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  undefined8 local_78;
  code *local_70;
  undefined4 **local_68;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  code **local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_5c = param_3;
  FUN_14856da48(param_4,1,0);
  local_78 = *(undefined8 *)(param_4 + 8);
  local_68 = &local_80;
  local_70 = FUN_143bd93b0;
  local_5d = 0;
  local_34 = 0;
  local_80 = &local_5c;
  local_30 = param_2;
  if (param_1 != 0) {
    local_58 = &local_30;
    local_50 = &local_5d;
    local_48 = &local_34;
    local_40 = &local_70;
    FUN_1485c192a(&local_58,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a768 FUN_14859a768 body=309 status=ok
// SIG undefined FUN_14859a768(void)

void FUN_14859a768(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14859a89e(local_20,local_24,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a89e FUN_14859a89e body=285 status=ok
// SIG undefined FUN_14859a89e(void)

longlong FUN_14859a89e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined4 local_64;
  code *local_60;
  undefined4 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = param_2;
  if (param_1 == 0) {
    local_50 = L"SetNumExtendedPolygroupLayers_InvalidInput";
    local_48._0_4_ = 0x2a;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_70,&local_50);
    FUN_140208bae(&local_50,&local_70,&local_60,L"SetNumExtendedPolygroupLayers: TargetMesh is Null"
                 );
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_70 = &local_64;
    local_58 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bd7f9a;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859a9c8 FUN_14859a9c8 body=731 status=ok
// SIG undefined FUN_14859a9c8(void)

void FUN_14859a9c8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(&local_48);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar5 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar3 = local_54;
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_78 = local_58 != 0;
  local_80 = iVar3 != 0;
  local_88 = local_50;
  FUN_14859aca4(local_30,CONCAT44(uStack_34,local_38),&local_68,puVar5);
  *param_3 = uVar4;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859aca4 FUN_14859aca4 body=256 status=ok
// SIG undefined FUN_14859aca4(void)

longlong FUN_14859aca4(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                      undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined1 local_51;
  undefined8 local_50;
  code *local_48;
  undefined8 **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_51 = param_6;
  *param_4 = param_5;
  local_50 = param_2;
  if (param_1 != 0) {
    local_80 = &local_50;
    local_40 = &local_80;
    local_78 = &local_51;
    local_70 = &param_5;
    local_36 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = FUN_143bd94fc;
    local_68 = param_4;
    local_60 = param_3;
    FUN_1484b8434(param_1,&local_48,&local_38,param_7);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859adc0 FUN_14859adc0 body=40 status=ok
// SIG undefined FUN_14859adc0(void)

void FUN_14859adc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14859adeb(0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14859adeb FUN_14859adeb body=185 status=ok
// SIG undefined FUN_14859adeb(void)

longlong FUN_14859adeb(char param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_14cb4eea8 == 0 && param_1 == '\0') {
    uVar2 = FUN_1409ffe1d();
    DAT_14cb4eea8 = FUN_1484b7c6a(uVar2);
    uVar1 = *(uint *)(DAT_14cb4eea8 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_1447f71cc(lVar3,0x40000000);
  }
  else if (param_1 != '\0') {
    FUN_1484b8070(DAT_14cb4eea8);
    uVar1 = *(uint *)(DAT_14cb4eea8 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    DAT_14cb4eea8 = 0;
  }
  return DAT_14cb4eea8;
}



// FUNCTION 14859aed8 FUN_14859aed8 body=969 status=ok
// SIG undefined FUN_14859aed8(void)

void FUN_14859aed8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d8 = 1;
  uStack_d6 = 0;
  uStack_d4 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_138[0] = 0;
  local_138[1] = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3ff00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0x3ff00000;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  local_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  local_174 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_174);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_174);
  }
  local_178 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_17c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_17c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_17c);
  }
  local_188 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  uVar1 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = &local_68;
  local_38 = CONCAT71(uStack_13f,local_140);
  local_48 = local_150;
  uStack_44 = uStack_14c;
  uStack_40 = uStack_148;
  uStack_3c = uStack_144;
  local_58 = local_160;
  uStack_54 = uStack_15c;
  uStack_50 = uStack_158;
  uStack_4c = uStack_154;
  local_68 = local_170;
  uStack_64 = uStack_16c;
  uStack_60 = uStack_168;
  uStack_5c = uStack_164;
  puVar3 = local_138;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_198 = local_188;
  local_1a0 = local_17c;
  local_1a8 = local_178;
  local_1b0 = local_174;
  FUN_143bb85b3(local_d0,0,CONCAT44(uStack_d4,CONCAT13(uStack_d5,CONCAT12(uStack_d6,local_d8))));
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859b2a2 FUN_14859b2a2 body=1150 status=ok
// SIG undefined FUN_14859b2a2(void)

void FUN_14859b2a2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_278 [32];
  undefined4 *local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8 [2];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_170;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined8 local_e0;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  uStack_f8 = 0;
  uStack_f7 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_ff = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_170 = 1;
  uStack_16e = 0;
  uStack_16c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0x3ff00000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0x3ff00000;
  uStack_190 = 0;
  uStack_18c = 0x3ff00000;
  local_188 = 0x3ff0000000000000;
  uStack_180 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1d8);
  }
  local_1e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_210);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_210);
  }
  local_214 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_214);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_214);
  }
  local_218 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_218);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_218);
  }
  local_21c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21c);
  }
  local_228 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_228);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_228);
  }
  uVar1 = local_e0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_168;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_258 = &local_78;
  local_48 = CONCAT71(uStack_1df,local_1e0);
  local_58 = local_1f0;
  uStack_54 = uStack_1ec;
  uStack_50 = uStack_1e8;
  uStack_4c = uStack_1e4;
  local_68 = local_200;
  uStack_64 = uStack_1fc;
  uStack_60 = uStack_1f8;
  uStack_5c = uStack_1f4;
  local_78 = local_210;
  uStack_74 = uStack_20c;
  uStack_70 = uStack_208;
  uStack_6c = uStack_204;
  puVar3 = local_1d8;
  puVar4 = local_d8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_238 = local_228;
  local_240 = local_21c;
  local_248 = local_218;
  local_250 = local_214;
  FUN_143bb85b3(local_e0,puVar5,
                CONCAT44(uStack_16c,CONCAT13(uStack_16d,CONCAT12(uStack_16e,local_170))));
  *param_3 = uVar1;
  FUN_1400d7d10(&local_168);
  if ((local_38 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859b722 FUN_14859b722 body=1230 status=ok
// SIG undefined FUN_14859b722(void)

void FUN_14859b722(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined1 local_111;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_10c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_110 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_111 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_111);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_111);
  }
  local_120 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_130 = local_120;
  local_138 = local_111;
  local_140 = local_110;
  local_148 = local_10c;
  local_150 = local_108;
  local_158 = local_104;
  local_160 = local_100;
  local_168 = local_fc;
  FUN_143bb7f2f(local_90,0,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))));
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859bbf2 FUN_14859bbf2 body=1407 status=ok
// SIG undefined FUN_14859bbf2(void)

void FUN_14859bbf2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined1 local_1b1;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_130 = 1;
  uStack_12e = 0;
  uStack_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_154 = 0x3ff00000;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  local_19c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  local_1a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  local_1a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_1ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ac);
  }
  local_1b0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b0);
  }
  local_1b1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b1);
  }
  local_1c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  uVar1 = local_a0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_198;
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1d0 = local_1c0;
  local_1d8 = local_1b1;
  local_1e0 = local_1b0;
  local_1e8 = local_1ac;
  local_1f0 = local_1a8;
  local_1f8 = local_1a4;
  local_200 = local_1a0;
  local_208 = local_19c;
  FUN_143bb7f2f(local_a0,puVar5,
                CONCAT44(uStack_12c,CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130))));
  *param_3 = uVar1;
  FUN_1400d7d10(&local_128);
  if ((local_38 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859c172 FUN_14859c172 body=1023 status=ok
// SIG undefined FUN_14859c172(void)

void FUN_14859c172(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_10c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_10d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10d);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_128 = local_118;
  local_130 = local_10d;
  local_138 = local_10c;
  local_140 = local_108;
  local_148 = local_104;
  local_150 = local_100;
  local_158 = local_fc;
  FUN_1485aabb7(local_90,0,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))));
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859c572 FUN_14859c572 body=1193 status=ok
// SIG undefined FUN_14859c572(void)

void FUN_14859c572(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined1 local_1ad;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_130 = 1;
  uStack_12e = 0;
  uStack_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_154 = 0x3ff00000;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  local_19c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  local_1a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  local_1a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_1ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ac);
  }
  local_1ad = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ad);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ad);
  }
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  uVar1 = local_a0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_198;
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1c8 = local_1b8;
  local_1d0 = local_1ad;
  local_1d8 = local_1ac;
  local_1e0 = local_1a8;
  local_1e8 = local_1a4;
  local_1f0 = local_1a0;
  local_1f8 = local_19c;
  FUN_1485aabb7(local_a0,puVar5,
                CONCAT44(uStack_12c,CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130))));
  *param_3 = uVar1;
  FUN_1400d7d10(&local_128);
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


