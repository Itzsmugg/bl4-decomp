// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fee9ac FUN_145fee9ac body=79 status=ok
// SIG undefined FUN_145fee9ac(void)

void FUN_145fee9ac(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*puVar4;
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
      puVar4 = puVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145fee9fc FUN_145fee9fc body=9 status=ok
// SIG undefined FUN_145fee9fc(void)

void FUN_145fee9fc(longlong param_1)

{
  FUN_145feeb3c(param_1 + 0x10);
  return;
}



// FUNCTION 145feea06 FUN_145feea06 body=48 status=ok
// SIG undefined FUN_145feea06(void)

void FUN_145feea06(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145feea36 FUN_145feea36 body=261 status=ok
// SIG undefined FUN_145feea36(void)

void FUN_145feea36(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(param_1 + 0x10));
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_14480f766(lVar2 + 0x38);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_14480f766(lVar3 + 0x38);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_14480f766(lVar2 + 8);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14480f766(lVar3 + 8);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar3 + 0x20);
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  return;
}



// FUNCTION 145feeb3c FUN_145feeb3c body=737 status=ok
// SIG undefined FUN_145feeb3c(void)

void FUN_145feeb3c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528340;
  FUN_144760e21(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145feee1e(param_1 + 0x16);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5fbf2(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145feee19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145feee1e FUN_145feee1e body=53 status=ok
// SIG undefined FUN_145feee1e(void)

void FUN_145feee1e(longlong *param_1)

{
  FUN_145feee54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145feee54 FUN_145feee54 body=320 status=ok
// SIG undefined FUN_145feee54(void)

void FUN_145feee54(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145feef96 FUN_145feef96 body=78 status=ok
// SIG undefined FUN_145feef96(void)

void FUN_145feef96(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_143cbcb44;
  local_20 = param_2;
  FUN_1400b7536();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145feefe6 FUN_145feefe6 body=104 status=ok
// SIG undefined FUN_145feefe6(void)

void FUN_145feefe6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1 + -0x30;
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140457ffc(lVar2 + 0x22d8,lVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1415b3fc0(lVar1);
  FUN_145fef04e(lVar1);
  return;
}



// FUNCTION 145fef04e FUN_145fef04e body=318 status=ok
// SIG undefined FUN_145fef04e(void)

void FUN_145fef04e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = (longlong)*(int *)(param_1 + 0x78);
  if (0 < lVar6) {
    lVar5 = lVar6 * 8;
    uVar7 = lVar6 + 1;
    do {
      lVar5 = lVar5 + -8;
      uVar4 = FUN_14479d2ce(*(longlong *)(param_1 + 0x70) + lVar5);
      FUN_145fef18e(param_1,uVar4,0);
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_148d8b34e(param_1 + 0x70,0);
  }
  FUN_1449027d0(param_1,&local_30);
  lVar6 = *(longlong *)(local_30 + 0x120);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x100));
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
  if (*(int *)(lVar6 + 0xa8) != 0) {
    iVar3 = *(int *)(lVar6 + 0xac);
    FUN_145fef36a(*(undefined8 *)(lVar6 + 0xa0));
    *(undefined4 *)(lVar6 + 0xa8) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar6 + 0xac) != 0)) {
      FUN_148e64cbe(lVar6 + 0xa0);
    }
    *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
    *(int *)(lVar6 + 0xf8) = *(int *)(lVar6 + 0xf8) + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x100));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fef18e FUN_145fef18e body=372 status=ok
// SIG undefined FUN_145fef18e(void)

void FUN_145fef18e(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    FUN_1449027d0(param_1,&local_48);
    lVar4 = *(longlong *)(local_48 + 0x120);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x100));
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
    uVar5 = (ulonglong)*(uint *)(lVar4 + 0xa8);
    lVar3 = uVar5 << 6;
    do {
      lVar3 = lVar3 + -0x40;
      if ((int)uVar5 < 1) goto LAB_145fef24a;
      *(int *)(lVar4 + 0xb0) = *(int *)(lVar4 + 0xb0) + 1;
      uVar5 = (ulonglong)((int)uVar5 - 1);
    } while (*(int *)(*(longlong *)(lVar4 + 0xa0) + lVar3) != *(int *)(param_2 + 0x394));
    FUN_145fef304(lVar4 + 0xa0);
    *(int *)(lVar4 + 0xf8) = *(int *)(lVar4 + 0xf8) + 1;
LAB_145fef24a:
    FUN_140457ffc(param_2 + 0x1338,param_1);
    FUN_140457ffc(param_2 + 0x6f8,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x100));
  }
  if (param_3 != '\0') {
    lVar4 = FUN_1400d7050(param_1 + 0x30);
    if (lVar4 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_1415b40a0(param_1,lVar4 + 0x2270);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fef304 FUN_145fef304 body=102 status=ok
// SIG undefined FUN_145fef304(void)

void FUN_145fef304(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
    FUN_145fef36a(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)iVar2 << 6);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_145fef3d2(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145fef36a FUN_145fef36a body=38 status=ok
// SIG undefined FUN_145fef36a(void)

void FUN_145fef36a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145fef390(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145fef390 FUN_145fef390 body=66 status=ok
// SIG undefined FUN_145fef390(void)

void FUN_145fef390(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145fef3d2 FUN_145fef3d2 body=62 status=ok
// SIG undefined FUN_145fef3d2(void)

void FUN_145fef3d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145fef410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 145fef410 FUN_145fef410 body=91 status=ok
// SIG undefined FUN_145fef410(void)

ulonglong FUN_145fef410(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 145fef476 FUN_145fef476 body=470 status=ok
// SIG undefined FUN_145fef476(void)

undefined8 * FUN_145fef476(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14aa118c0;
  param_1[5] = &PTR_FUN_14aa122e0;
  param_1[6] = &PTR_LAB_14aa12320;
  param_1[0x55] = &PTR_FUN_14aa12370;
  param_1[0x56] = &PTR_FUN_14aa123f0;
  param_1[0x57] = &PTR_FUN_14aa12400;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0x200000000;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined1 *)((longlong)param_1 + 0x809) = 1;
  *(undefined4 *)(param_1 + 0x10b) = 0;
  param_1[0x10a] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  FUN_140b967fa(param_1,1);
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) & 0x7f;
  *(undefined1 *)((longlong)param_1 + 0x80a) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return param_1;
}



// FUNCTION 145fef64c FUN_145fef64c body=1812 status=ok
// SIG undefined FUN_145fef64c(void)

void FUN_145fef64c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_188 [40];
  longlong local_160;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  uint local_120 [27];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar12 = FUN_14126888e();
  if (uVar12 == 0) goto LAB_145fefa30;
  iVar6 = *(int *)(param_1 + 0x38);
  uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  local_120[0] = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_120[0] = local_120[0] >> 0x10 ^ local_120[0];
  FUN_1448d5e3c(&local_130);
  lVar7 = *(longlong *)(local_130 + 0xe0 + (ulonglong)(iVar6 != 0) * 0x10);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x638));
  *(int *)(lVar7 + 0x630) = *(int *)(lVar7 + 0x630) + 1;
  lVar8 = *(longlong *)(local_130 + 0xe0 + (ulonglong)(iVar6 == 0) * 0x10);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x638));
  *(int *)(lVar8 + 0x630) = *(int *)(lVar8 + 0x630) + 1;
  lVar13 = FUN_1406d14fa(param_1);
  if (lVar13 != 0) {
    lVar14 = FUN_144a5dd5e();
    if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8
         ) == lVar14 + 0x30)) {
      memset(local_120,0,0xd8);
      local_b4 = 0x80;
      local_b0 = 0xffffffff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0xf;
      local_60 = 1;
      local_5c = 0;
      uStack_54 = 0;
      iVar18 = *(int *)(param_1 + 0x120);
      if (iVar18 == -1) {
        if (*(int *)(param_1 + 0x124) == 0) {
          FUN_1407b25f0(local_120,param_1 + 0x48);
        }
        else {
          FUN_145d181c2(lVar7);
          local_160 = FUN_1458730d4(lVar13);
          lVar14 = FUN_145d182e6(lVar13);
          if ((lVar14 == 0) || (lVar14 = FUN_148e5c786(lVar14), lVar14 == 0)) {
            if (((local_160 != 0) && (lVar19 = FUN_1458b3932(local_160), lVar19 != 0)) &&
               ((longlong)*(int *)(lVar19 + 0xe8) != 0)) {
              lVar14 = *(longlong *)(lVar19 + 0xe0);
              lVar19 = (longlong)*(int *)(lVar19 + 0xe8) * 0xf0;
              do {
                if (*(int *)(lVar14 + 0xec) == *(int *)(param_1 + 0x124)) goto LAB_145fefd3f;
                lVar14 = lVar14 + 0xf0;
                lVar19 = lVar19 + -0xf0;
              } while (lVar19 != 0);
            }
          }
          else {
            local_140 = (longlong *)0x0;
            FUN_14485c47a(&local_140,lVar13);
            plVar16 = (longlong *)
                      FUN_1412e3d70(lVar14 + 0x2968,
                                    (uint)((ulonglong)local_140 >> 0x20) ^ (uint)local_140);
            if ((longlong)(int)plVar16[1] != 0) {
              lVar14 = *plVar16;
              lVar19 = (longlong)(int)plVar16[1] * 0xf0;
              do {
                if (*(int *)(lVar14 + 0xd8) == *(int *)(param_1 + 0x124)) goto LAB_145fefd3f;
                lVar14 = lVar14 + 0xf0;
                lVar19 = lVar19 + -0xf0;
              } while (lVar19 != 0);
            }
          }
        }
        goto LAB_145fef884;
      }
      iVar17 = *(int *)(lVar7 + 0xc);
      if (iVar18 == *(int *)(lVar7 + 8)) {
        if (iVar17 == 0) {
          iVar17 = 0;
          goto LAB_145fefbf6;
        }
      }
      else {
LAB_145fefbf6:
        *(int *)(lVar7 + 8) = iVar18;
        *(int *)(lVar7 + 0xc) = iVar17 + 1;
      }
      lVar14 = FUN_145fefd62(param_1);
      if ((lVar14 == 0) || (lVar14 = FUN_140d8e660(lVar14,param_1 + 0x120), lVar14 == 0))
      goto LAB_145fef884;
      FUN_1407b25f0(local_120,lVar14 + 8);
      iVar18 = *(int *)(lVar7 + 0x14);
      if (*(char *)(lVar14 + 0xfc) == *(char *)(lVar7 + 0x10)) {
        if (iVar18 == 0) {
          iVar18 = 0;
          goto LAB_145fefc07;
        }
      }
      else {
LAB_145fefc07:
        *(char *)(lVar7 + 0x10) = *(char *)(lVar14 + 0xfc);
        *(int *)(lVar7 + 0x14) = iVar18 + 1;
      }
      iVar18 = *(int *)(lVar7 + 0x1c);
      if (*(int *)(lVar14 + 0xec) == *(int *)(lVar7 + 0x18)) {
        if (iVar18 == 0) {
          iVar18 = 0;
          goto LAB_145fefc18;
        }
      }
      else {
LAB_145fefc18:
        *(int *)(lVar7 + 0x18) = *(int *)(lVar14 + 0xec);
        *(int *)(lVar7 + 0x1c) = iVar18 + 1;
      }
      cVar9 = FUN_1415b5498(lVar14);
      iVar18 = *(int *)(lVar7 + 0xec);
      if (*(char *)(lVar7 + 0xe8) == cVar9) {
        if (iVar18 == 0) {
          iVar18 = 0;
          goto LAB_145fefc29;
        }
      }
      else {
LAB_145fefc29:
        *(char *)(lVar7 + 0xe8) = cVar9;
        *(int *)(lVar7 + 0xec) = iVar18 + 1;
      }
      uVar11 = FUN_1415b54d6(lVar14);
      goto LAB_145fef87e;
    }
  }
  goto LAB_145fefa0b;
LAB_145fefd3f:
  if (lVar14 != 0) {
    FUN_1407b25f0(local_120,lVar14);
    uVar11 = *(undefined4 *)(lVar14 + 0xdc);
LAB_145fef87e:
    *(undefined4 *)(param_1 + 0x140) = uVar11;
  }
LAB_145fef884:
  cVar9 = FUN_1415b545a(local_120);
  if (cVar9 != '\0') {
    FUN_140babe90(lVar7,local_120,0);
    FUN_140bafb3c(lVar7,lVar8 + 0x218,0);
    FUN_145fefdbe(param_1,&local_140);
    FUN_140bac58e(lVar7,&local_140);
    if (local_140 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140babf00(lVar7,lVar13);
    dVar3 = *(double *)(param_1 + 0x128);
    dVar4 = *(double *)(param_1 + 0x130);
    dVar5 = *(double *)(param_1 + 0x138);
    if ((((dVar3 != *(double *)(lVar7 + 0x440)) || (NAN(dVar3) || NAN(*(double *)(lVar7 + 0x440))))
        || ((dVar4 != *(double *)(lVar7 + 0x448) ||
            (((NAN(dVar4) || NAN(*(double *)(lVar7 + 0x448)) ||
              (dVar5 != *(double *)(lVar7 + 0x450))) ||
             (NAN(dVar5) || NAN(*(double *)(lVar7 + 0x450)))))))) || (*(int *)(lVar7 + 0x458) == 0))
    {
      *(double *)(lVar7 + 0x440) = dVar3;
      *(double *)(lVar7 + 0x448) = dVar4;
      *(double *)(lVar7 + 0x450) = dVar5;
      *(int *)(lVar7 + 0x458) = *(int *)(lVar7 + 0x458) + 1;
    }
    iVar18 = *(int *)(param_1 + 0x140);
    if (iVar18 == 0) {
      FUN_140c65c56(local_120,&local_140);
      if (local_140 != (longlong *)0x0) {
        *(int *)(param_1 + 0x140) = (int)local_140[8];
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_138 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_138 + 0x10))(local_138);
          }
        }
      }
      iVar18 = *(int *)(param_1 + 0x140);
    }
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    FUN_145c56198(&local_140,iVar18,0);
    uVar15 = FUN_1447a1f4a(&local_140);
    FUN_1449a0272(lVar7 + 0x4b0,uVar15);
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 0x10))();
    }
    plVar16 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  if (iVar6 != 0) {
    lVar14 = FUN_145d18230(lVar13);
    if (lVar14 != 0) {
      FUN_145d184c6(lVar14,local_120);
    }
    lVar14 = FUN_145d182e6(lVar13);
    if (lVar14 != 0) {
      FUN_145d18430(lVar14,local_120);
    }
    lVar14 = FUN_1458730d4(lVar13);
    if (lVar14 != 0) {
      FUN_145d1839c(lVar14,local_120);
    }
  }
  cVar9 = FUN_1415b545a(lVar8 + 0x218);
  if (cVar9 != '\0') {
    FUN_140bafb3c(lVar8,local_120,0);
    FUN_145fefdbe(param_1,&local_140);
    FUN_140bac58e(lVar8,&local_140);
    if (local_140 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140babf00(lVar8,lVar13);
    *(int *)(lVar8 + 0x200) = *(int *)(lVar8 + 0x200) + 1;
  }
  uVar15 = FUN_1401e6c61();
  uVar11 = FUN_140df7d8e(lVar13,uVar15);
  FUN_1415b5422(lVar7,uVar11);
  uVar15 = FUN_1401e6c61();
  uVar11 = FUN_140df7d8e(lVar13,uVar15);
  FUN_1415b5422(lVar8,uVar11);
  FUN_140368b56(local_120);
LAB_145fefa0b:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x638));
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x638));
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_128 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_128 + 0x10))(local_128);
      }
    }
  }
LAB_145fefa30:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fefd62 FUN_145fefd62 body=91 status=ok
// SIG undefined FUN_145fefd62(void)

undefined8 FUN_145fefd62(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x3c) != 0)) {
      uVar3 = FUN_140254f32(lVar1,param_1 + 0x3c);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145fefdbe FUN_145fefdbe body=197 status=ok
// SIG undefined FUN_145fefdbe(void)

undefined8 * FUN_145fefdbe(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0xa08), lVar1 != 0)) {
      lVar2 = FUN_144a2f878();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_140bac450(lVar1,local_28);
        FUN_1400021e4(local_28,param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145fefe84 FUN_145fefe84 body=158 status=ok
// SIG undefined FUN_145fefe84(void)

bool FUN_145fefe84(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145feff24 FUN_145feff24 body=120 status=ok
// SIG undefined FUN_145feff24(void)

longlong FUN_145feff24(longlong param_1,longlong param_2)

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
    FUN_145feff9c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145feff9c FUN_145feff9c body=121 status=ok
// SIG undefined FUN_145feff9c(void)

undefined8 * FUN_145feff9c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140105202(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14055df60(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 145ff0016 FUN_145ff0016 body=120 status=ok
// SIG undefined FUN_145ff0016(void)

longlong FUN_145ff0016(longlong param_1,longlong param_2)

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
    FUN_145ff008e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145ff008e FUN_145ff008e body=121 status=ok
// SIG undefined FUN_145ff008e(void)

undefined8 * FUN_145ff008e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140149ffa(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145ff0108 FUN_145ff0108 body=128 status=ok
// SIG undefined FUN_145ff0108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff0108(void)

{
  char cVar1;
  longlong *plVar2;
  
  _DAT_14c9a0201 = 0x1000001;
  DAT_14c9a0205 = 1;
  FUN_145ff0188();
  if ((DAT_14c9a01d8 != (longlong *)0x0 && DAT_14c9a01e0 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c9a01d8 + 0x30))(), cVar1 != '\0')) {
    FUN_145ff0188();
    plVar2 = DAT_14c9a01d8;
    if (DAT_14c9a01e0 == 0) {
      plVar2 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000145ff0185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x58))(plVar2,&DAT_14c9a0201,&DAT_14c9a0202,&DAT_14c9a0203);
    return;
  }
  return;
}



// FUNCTION 145ff0188 FUN_145ff0188 body=113 status=ok
// SIG undefined FUN_145ff0188(void)

void FUN_145ff0188(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a01e8) {
    FUN_144b3d300(&DAT_14c9a01e8);
    if (DAT_14c9a01e8 == -1) {
      DAT_14c9a01d8 = 0;
      DAT_14c9a01e0 = 0;
      atexit(FUN_142b0a82d);
      _Init_thread_footer(&DAT_14c9a01e8);
      return;
    }
  }
  return;
}



// FUNCTION 145ff01fa FUN_145ff01fa body=284 status=ok
// SIG undefined FUN_145ff01fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ff01fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90518) {
    FUN_144b3d300(&DAT_14ca90518);
    if (DAT_14ca90518 == -1) {
      FUN_145ff0316();
      FUN_140db5666(&DAT_14ca90470,0,&DAT_14ca90408,L"FOculusCubemapPS",
                    L"/Engine/Private/OculusShaders.usf",L"MainForCubemap",3,1,FUN_147421594,
                    FUN_14742156c,&LAB_147421568,&LAB_147421564,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14ca90470 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81e6);
      _Init_thread_footer(&DAT_14ca90518);
    }
  }
  return &DAT_14ca90470;
}



// FUNCTION 145ff0316 FUN_145ff0316 body=210 status=ok
// SIG undefined FUN_145ff0316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff0316(void)

{
  if ((DAT_14ca9046f & 2) == 0) {
    DAT_14ca9046f = DAT_14ca9046f | 2;
    _DAT_14ca90410 = L"FOculusCubemapPS";
    _DAT_14ca90428 = FUN_146826540;
    _DAT_14ca90430 = FUN_146825d77;
    _DAT_14ca90438 = FUN_146825fd6;
    _DAT_14ca90440 = FUN_1407e02ea;
    _DAT_14ca90448 = FUN_146826273;
    _DAT_14ca90420 = FUN_147421534;
    _DAT_14ca90460 = 0xffffffff000000f0;
    _DAT_14ca90468 = 8;
    DAT_14ca9046c = 0;
    _DAT_14ca90450 = &LAB_147421560;
    FUN_145ff03e8();
    FUN_145ff0462();
    FUN_1407e00cc(&DAT_14ca90408);
    return;
  }
  return;
}



// FUNCTION 145ff03e8 FUN_145ff03e8 body=121 status=ok
// SIG undefined FUN_145ff03e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff03e8(void)

{
  FUN_145ff04e8();
  _DAT_14ca91c48 = L"InTexture";
  DAT_14ca91c72 = FUN_140850cc5();
  _DAT_14ca91c50 = FUN_140fb78d0();
  _DAT_14ca91c60 = &LAB_14682652b;
  _DAT_14ca91c68 = 0x1000000e0;
  _DAT_14ca91c70 = 0;
  _DAT_14ca91c58 = DAT_14ca90418;
  DAT_14ca90418 = &DAT_14ca91c48;
  return;
}



// FUNCTION 145ff0462 FUN_145ff0462 body=133 status=ok
// SIG undefined FUN_145ff0462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff0462(void)

{
  _DAT_14ca94b18 = L"BASE";
  DAT_14ca94b42 = 4;
  FUN_140b35ae4();
  _DAT_14ca94b28 = DAT_14ca90418;
  _DAT_14ca94b20 = &DAT_14ca8c6c8;
  _DAT_14ca94b30 = &LAB_14682652b;
  DAT_14ca90418 = &DAT_14ca94b18;
  DAT_14ca9046d = DAT_14ca9046d + '\x01';
  _DAT_14ca94b38 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9046e = DAT_14ca9046e + '\x01';
  }
  return;
}



// FUNCTION 145ff04e8 FUN_145ff04e8 body=216 status=ok
// SIG undefined FUN_145ff04e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff04e8(void)

{
  _DAT_14ca91ca8 = L"InFaceIndexParameter";
  DAT_14ca91cd2 = FUN_140850cc5();
  _DAT_14ca91cb0 = FUN_140ec6960();
  _DAT_14ca91cc0 = &LAB_14682652b;
  _DAT_14ca91cc8 = 0x1000000e8;
  _DAT_14ca91cd0 = 0;
  _DAT_14ca91cb8 = DAT_14ca90418;
  DAT_14ca90418 = &DAT_14ca91ca8;
  _DAT_14ca91c78 = L"InTextureSampler";
  DAT_14ca91ca2 = FUN_140850cc5();
  _DAT_14ca91c80 = FUN_140fb78d0();
  _DAT_14ca91c90 = &LAB_14682652b;
  _DAT_14ca91c98 = 0x1000000e4;
  _DAT_14ca91ca0 = 0;
  _DAT_14ca91c88 = DAT_14ca90418;
  DAT_14ca90418 = &DAT_14ca91c78;
  return;
}



// FUNCTION 145ff05c0 FUN_145ff05c0 body=77 status=ok
// SIG undefined FUN_145ff05c0(void)

void FUN_145ff05c0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145ff060e(local_18,param_1);
  FUN_145ff06d8(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff060e FUN_145ff060e body=201 status=ok
// SIG undefined FUN_145ff060e(void)

undefined8 FUN_145ff060e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca5b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a451fd0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_141286692;
  FUN_14123f6f0(&DAT_14cb109f0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff06d8 FUN_145ff06d8 body=201 status=ok
// SIG undefined FUN_145ff06d8(void)

undefined8 FUN_145ff06d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1c8660;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a452040;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_140e5696e;
  FUN_140aa43ac(&DAT_14cb10a08,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff07a2 FUN_145ff07a2 body=70 status=ok
// SIG undefined FUN_145ff07a2(void)

void FUN_145ff07a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  FUN_145ff07e8();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x1d8) = lVar1;
  }
  return;
}



// FUNCTION 145ff07e8 FUN_145ff07e8 body=171 status=ok
// SIG undefined FUN_145ff07e8(void)

void FUN_145ff07e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  FUN_14482855a();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return;
  }
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x110) = lVar1;
    if (lVar1 != 0) goto LAB_145ff0821;
  }
  else {
    FUN_1456cec3c();
    *(longlong *)(param_1 + 0x110) = lVar1;
LAB_145ff0821:
    lVar3 = FUN_144a3a302();
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_145ff0865;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar4 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_145ff0865;
      }
    }
  }
  lVar4 = 0;
LAB_145ff0865:
  *(longlong *)(param_1 + 0x118) = lVar4;
  return;
}



// FUNCTION 145ff0894 FUN_145ff0894 body=96 status=ok
// SIG undefined FUN_145ff0894(void)

longlong * FUN_145ff0894(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x128,0x10);
  FUN_145ff08f4(plVar3);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 145ff08f4 FUN_145ff08f4 body=145 status=ok
// SIG undefined FUN_145ff08f4(void)

undefined8 * FUN_145ff08f4(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14ac52b80;
  memset(param_1 + 2,0,0x118);
  FUN_1413493a6(param_1 + 2);
  param_1[2] = &PTR_FUN_14ac52cf0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 145ff0986 FUN_145ff0986 body=42 status=ok
// SIG undefined FUN_145ff0986(void)

void FUN_145ff0986(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145ff09b0(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145ff09b0 FUN_145ff09b0 body=199 status=ok
// SIG undefined FUN_145ff09b0(void)

void FUN_145ff09b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((int)param_1[1] != 0) && (puVar3 = (undefined8 *)*param_1, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  plVar1 = param_1 + 2;
  if (((int)param_1[3] != 0) && (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  plVar2 = param_1 + 4;
  if (((int)param_1[5] != 0) && (puVar3 = (undefined8 *)*plVar2, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  FUN_1449db362(plVar2);
  FUN_1449db362(plVar1);
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 145ff0a78 FUN_145ff0a78 body=1590 status=ok
// SIG undefined FUN_145ff0a78(void)

void FUN_145ff0a78(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1415b561e();
  if (*(char *)(param_1 + 0x388) != '\0') goto LAB_145ff0aa1;
  local_38 = (code *)0x0;
  uStack_30 = (code ***)0x0;
  lVar7 = *(longlong *)(param_1 + 0x378);
  lVar6 = lVar7 + 0x4d8;
  lVar5 = FUN_14479d2ce(lVar6);
  if (lVar5 == 0) {
    if (*(longlong *)(lVar7 + 0x4e0) != 0) {
      lVar5 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar6,lVar5);
        if (lVar5 == 0) goto LAB_145ff0c9d;
      }
      else {
        uVar3 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar6,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_145ff0b8a;
    }
  }
  else {
LAB_145ff0b8a:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) && (lVar6 = FUN_140e0b9fc(), lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      lVar7 = *(longlong *)(param_1 + 0x378);
      lVar6 = lVar7 + 0x4d8;
      lVar5 = FUN_14479d2ce(lVar6);
      if (lVar5 == 0) {
        if (*(longlong *)(lVar7 + 0x4e0) != 0) {
          lVar5 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(lVar6,lVar5);
            if (lVar5 == 0) goto LAB_145ff0fcb;
          }
          else {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar6,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_145ff0c01;
        }
LAB_145ff0fcb:
        bVar8 = false;
        lVar7 = 0;
      }
      else {
LAB_145ff0c01:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) ||
            (lVar6 = FUN_140e0b9fc(), lVar6 == 0)) ||
           (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_145ff0fcb;
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar7 = lVar5;
        }
        bVar8 = lVar7 != 0;
        if ((bVar8) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c();
          bVar8 = true;
          lVar7 = lVar5;
        }
      }
      uStack_30 = (code ***)CONCAT44(uStack_30._4_4_,1);
      FUN_140789f3e(&local_38,0);
      *(longlong *)local_38 = lVar7;
      if ((bVar8) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar7);
      }
    }
  }
LAB_145ff0c9d:
  lVar7 = *(longlong *)(param_1 + 0x378);
  lVar6 = lVar7 + 0x500;
  lVar5 = FUN_14479d2ce(lVar6);
  if (lVar5 == 0) {
    if (*(longlong *)(lVar7 + 0x508) != 0) {
      lVar5 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar6,lVar5);
        if (lVar5 == 0) goto LAB_145ff0cca;
      }
      else {
        uVar3 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar6,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_145ff0d9e;
    }
  }
  else {
LAB_145ff0d9e:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) && (lVar6 = FUN_140e0b9fc(), lVar6 != 0)) &&
       (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) &&
        (cVar2 = FUN_144a7afa6(*(longlong *)(param_1 + 0x378) + 0x508,
                               *(longlong *)(param_1 + 0x378) + 0x4e0), cVar2 == '\0')))) {
      lVar7 = *(longlong *)(param_1 + 0x378);
      lVar6 = lVar7 + 0x500;
      lVar5 = FUN_14479d2ce(lVar6);
      if (lVar5 == 0) {
        if (*(longlong *)(lVar7 + 0x508) != 0) {
          lVar5 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(lVar6,lVar5);
            if (lVar5 == 0) goto LAB_145ff105b;
          }
          else {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar6,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_145ff0e37;
        }
LAB_145ff105b:
        bVar8 = false;
        lVar7 = 0;
      }
      else {
LAB_145ff0e37:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) ||
            (lVar6 = FUN_140e0b9fc(), lVar6 == 0)) ||
           (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_145ff105b;
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar7 = lVar5;
        }
        bVar8 = lVar7 != 0;
        if ((bVar8) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c();
          bVar8 = true;
          lVar7 = lVar5;
        }
      }
      uVar1 = (ulonglong)uStack_30;
      lVar6 = (longlong)(int)uStack_30;
      uVar3 = (int)uStack_30 + 1;
      uStack_30 = (code ***)CONCAT44(uStack_30._4_4_,uVar3);
      if (uStack_30._4_4_ < uVar3) {
        FUN_140789f3e(&local_38,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_38 + lVar6 * 8) = lVar7;
      if ((bVar8 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
    }
  }
LAB_145ff0cca:
  if ((int)uStack_30 != 0) {
    uVar4 = FUN_14479d2ce(param_1 + (ulonglong)
                                    (*(byte *)(*(longlong *)(param_1 + 0x378) + 0x4d0) ^ 1) * 8 +
                          0x288);
    FUN_14078b280(param_1 + 0x2f8,uVar4,&local_38);
    FUN_1401b3e2a(param_1 + 0x2f8);
  }
  *(undefined1 *)(param_1 + 0x388) = 1;
  if (local_38 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_145ff0aa1:
  local_48 = &local_51;
  local_40 = &local_50;
  local_50 = FUN_1441701ce;
  uStack_30 = &local_40;
  local_38 = FUN_14417018a;
  uVar4 = FUN_140e0b9fc();
  FUN_140e0b95c(param_1 + 0x2f8,uVar4,&local_38);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff10ba FUN_145ff10ba body=194 status=ok
// SIG undefined FUN_145ff10ba(void)

undefined8 * FUN_145ff10ba(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a665ba0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb4d0) {
    FUN_144b3d300(&DAT_14caeb4d0);
    if (DAT_14caeb4d0 == -1) {
      FUN_1415b5734();
      atexit(FUN_14356e0eb);
      _Init_thread_footer(&DAT_14caeb4d0);
    }
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return param_1;
}



// FUNCTION 145ff117c FUN_145ff117c body=107 status=ok
// SIG undefined FUN_145ff117c(void)

void FUN_145ff117c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145ff11cb:
      FUN_145d1ce00(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14884a220(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145ff11cb;
  FUN_145ff11e8(param_1);
  FUN_145d1ce00(param_1,param_2);
  return;
}



// FUNCTION 145ff11e8 FUN_145ff11e8 body=342 status=ok
// SIG undefined FUN_145ff11e8(void)

void FUN_145ff11e8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x11c + (longlong)iVar4 * 0x120) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff1340 FUN_145ff1340 body=675 status=ok
// SIG undefined FUN_145ff1340(void)

void FUN_145ff1340(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_94 [2];
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined4 local_64;
  undefined **local_60;
  longlong *local_58;
  longlong *local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(char *)(param_1 + 0x6c) != '\x01') {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x68);
    goto LAB_145ff155d;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x68)) {
    FUN_148a7de1c(*(undefined8 *)(param_1 + 0x38));
  }
  lVar4 = FUN_1414354ce(param_1);
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1e0) == 0)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x68), lVar4 == 0)) goto LAB_145ff155d;
  FUN_1415b584a(lVar4,&local_64,*(undefined4 *)(param_1 + 0x30));
  if ((short)local_64 < 0) goto LAB_145ff155d;
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
LAB_145ff15a8:
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_78);
    if (local_78 == (longlong *)0x0) goto LAB_145ff15a8;
    (**(code **)(*local_78 + 0x110))(local_78,&local_88,*(undefined4 *)(param_1 + 0x30));
    local_60 = &PTR_FUN_14a184370;
    local_58 = local_88;
    local_50 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    local_48 = 0;
    local_a8 = (undefined4 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_1414c1098(lVar4,local_94,&local_64,&local_60);
    local_64 = local_94[0];
    local_60 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))(local_88,&local_60);
      FUN_141589e20(lVar4,local_94,&local_64,&local_60);
      local_64 = local_94[0];
      (**(code **)(*local_88 + 0x10))(local_88,local_94);
      (**(code **)(*local_78 + 0x140))(local_78,&local_60,local_88);
      local_a8 = local_94;
      FUN_141589eda(lVar4,&local_8c,&local_64,&local_60);
      local_64 = local_8c;
      if (local_60 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    uVar3 = (**(code **)(*local_78 + 0x138))(local_78,*(undefined4 *)(param_1 + 0x30));
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  FUN_145ff15e4(lVar4,&local_64,uVar3);
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_145ff155d:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff15e4 FUN_145ff15e4 body=81 status=ok
// SIG undefined FUN_145ff15e4(void)

void FUN_145ff15e4(longlong param_1,ushort *param_2,undefined1 param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar2 + 4)) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8);
        } while (-1 < *(short *)(lVar2 + 4));
        if (lVar2 == 0) {
          return;
        }
      }
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x10) + 0xc) = param_3;
      }
    }
  }
  return;
}



// FUNCTION 145ff1636 FUN_145ff1636 body=55 status=ok
// SIG undefined FUN_145ff1636(void)

void FUN_145ff1636(longlong *param_1)

{
  FUN_145ff166e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff166e FUN_145ff166e body=427 status=ok
// SIG undefined FUN_145ff166e(void)

void FUN_145ff166e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x30;
      *(undefined ***)(lVar2 + 8 + lVar5) = &PTR_FUN_14b6e2428;
      FUN_1458ce261(*(undefined8 *)(lVar2 + 0x10 + lVar5),*(undefined4 *)(lVar2 + 0x18 + lVar5));
      if (*(longlong *)(lVar2 + 0x10 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff181a FUN_145ff181a body=254 status=ok
// SIG undefined FUN_145ff181a(void)

undefined8
FUN_145ff181a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e41aa0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b80e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ff191a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff191a FUN_145ff191a body=216 status=ok
// SIG undefined FUN_145ff191a(void)

undefined8 * FUN_145ff191a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff1a00 FUN_145ff1a00 body=37 status=ok
// SIG undefined FUN_145ff1a00(void)

void FUN_145ff1a00(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000145ff1a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 145ff1a26 FUN_145ff1a26 body=192 status=ok
// SIG undefined FUN_145ff1a26(void)

void FUN_145ff1a26(longlong param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  lVar3 = FUN_14479d2ce(param_1 + 0x30);
  if ((lVar3 != 0) && (lVar3 = FUN_14479d2ce(lVar3 + 0x38c), lVar3 != 0)) {
    uVar4 = FUN_144a7af92(lVar3);
    plVar5 = (longlong *)FUN_141165984(uVar4);
    if ((plVar5 != (longlong *)0x0) && ((char)plVar5[0x44] == '\x01')) {
      uVar2 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
      *(undefined4 *)(param_1 + 0x2ac) = uVar2;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  bVar7 = *(int *)(param_1 + 0x2ac) != -1;
  if ((bool)*(char *)(lVar3 + 0xe8) == bVar7) {
    if (*(int *)(lVar3 + 0xec) != 0) goto LAB_145ff1abb;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar3 + 0xec) + 1;
  }
  *(bool *)(lVar3 + 0xe8) = bVar7;
  *(int *)(lVar3 + 0xec) = iVar6;
LAB_145ff1abb:
  puVar1 = *(ushort **)(lVar3 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 145ff1ae6 FUN_145ff1ae6 body=254 status=ok
// SIG undefined FUN_145ff1ae6(void)

void FUN_145ff1ae6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  FUN_145cb307a(param_1,0);
  lVar2 = FUN_140391552(param_1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_14b9d1ea0;
    *(undefined1 *)(puVar3 + 4) = 1;
    FUN_14039144e(lVar2,puVar3);
  }
  if (*(int *)(param_1 + 0x2ac) != -1) {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar2 = FUN_14101baae(lVar2);
      if (lVar2 != 0) {
        lVar4 = FUN_14030d4a0();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          puVar3 = (undefined8 *)FUN_14001cc68(0x28);
          uVar1 = *(undefined4 *)(param_1 + 0x2ac);
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          *puVar3 = &PTR_FUN_14b970e70;
          *(undefined4 *)(puVar3 + 4) = uVar1;
          *(undefined1 *)((longlong)puVar3 + 0x24) = 1;
          FUN_14113cb0e(lVar2,puVar3);
          *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
        }
      }
    }
  }
  return;
}



// FUNCTION 145ff1be4 FUN_145ff1be4 body=54 status=ok
// SIG undefined FUN_145ff1be4(void)

void FUN_145ff1be4(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  DAT_14c99e830 = 0;
  if (DAT_14c99e828 != 0) {
    FUN_1400020a8();
  }
  FUN_145ff1c1a();
  return;
}



// FUNCTION 145ff1c1a FUN_145ff1c1a body=54 status=ok
// SIG undefined FUN_145ff1c1a(void)

void FUN_145ff1c1a(void)

{
  FUN_145ff1c50();
  if (DAT_14c99e808 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99e7e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff1c50 FUN_145ff1c50 body=375 status=ok
// SIG undefined FUN_145ff1c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff1c50(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c99e7f8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c99e810 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c99e7e8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14704513c(*local_58 + (longlong)iStack_3c * 0x100 + 0x10);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c99e7f0 = 0;
  if (DAT_14c99e7f4 != 0) {
    FUN_147046636(&DAT_14c99e7e8,0);
  }
  _DAT_14c99e818 = 0xffffffff;
  DAT_14c99e810 = 0;
  if (0x80 < DAT_14c99e814) {
    DAT_14c99e814 = 0x80;
    FUN_1446efbd8(&DAT_14c99e7f8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff1dd4 FUN_145ff1dd4 body=473 status=ok
// SIG undefined FUN_145ff1dd4(void)

undefined8 * FUN_145ff1dd4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a3de310;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22e) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4a),4000);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x229) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)((longlong)param_1 + 0x22b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x231) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x10;
  param_1[0xd] = 0x1000000006;
  *(undefined4 *)(param_1 + 0x51) = 0;
  return param_1;
}



// FUNCTION 145ff1fb8 FUN_145ff1fb8 body=230 status=ok
// SIG undefined FUN_145ff1fb8(void)

undefined8 * FUN_145ff1fb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad84640;
  param_1[7] = 0;
  uVar2 = FUN_144830b78(param_1 + 8,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 8) = uVar2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = FUN_144830b78(local_34,&DAT_14cb41360);
  *(undefined4 *)(param_1 + 8) = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14ad88390;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff20a0 FUN_145ff20a0 body=40 status=ok
// SIG undefined FUN_145ff20a0(void)

undefined8 FUN_145ff20a0(undefined8 param_1,int param_2)

{
  FUN_145ff20c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ff20c8 FUN_145ff20c8 body=202 status=ok
// SIG undefined FUN_145ff20c8(void)

void FUN_145ff20c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5c09f0;
  param_1[0x72] = &PTR_FUN_14b5c1030;
  param_1[0x73] = &PTR_FUN_14b5c10a0;
  param_1[0x74] = &PTR_FUN_14b5c1110;
  param_1[0x75] = &PTR_FUN_14b5c1140;
  param_1[0x76] = &PTR_FUN_14b5c1170;
  param_1[0x77] = &PTR_FUN_14b5c11a0;
  FUN_1403d7b38(param_1 + 0xef);
  param_1[0xaa] = &PTR_FUN_14b5c4a70;
  if (param_1[0xb2] != 0) {
    FUN_140872868(param_1 + 0xaa);
  }
  FUN_1403d7c6c(param_1 + 0xaa);
  FUN_1403d7bbc(param_1 + 0x99);
  FUN_1403d7d90(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ff2192 FUN_145ff2192 body=37 status=ok
// SIG undefined FUN_145ff2192(void)

void FUN_145ff2192(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x238);
  FUN_145ff21b8(param_2);
  return;
}



// FUNCTION 145ff21b8 FUN_145ff21b8 body=205 status=ok
// SIG undefined FUN_145ff21b8(void)

undefined8 * FUN_145ff21b8(undefined8 *param_1)

{
  FUN_1411b9bf0();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b635130;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}



// FUNCTION 145ff228e FUN_145ff228e body=234 status=ok
// SIG undefined FUN_145ff228e(void)

undefined8 * FUN_145ff228e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1458eee4a();
  *param_1 = &PTR_FUN_14b8e3e40;
  param_1[0x72] = &PTR_FUN_14b8e44f0;
  param_1[0x73] = &PTR_FUN_14b8e4560;
  param_1[0x74] = &PTR_FUN_14b8e4590;
  param_1[0x75] = &PTR_FUN_14b8e45c0;
  param_1[0x76] = &PTR_FUN_14b8e4630;
  param_1[0x77] = &PTR_FUN_14b8e4660;
  param_1[0x78] = &PTR_FUN_14b8e4690;
  param_1[0x79] = &PTR_FUN_14b8e4700;
  param_1[0x7a] = &PTR_FUN_14b8e4720;
  param_1[0x7b] = &PTR_FUN_14b8e4740;
  param_1[0x7c] = &PTR_FUN_14b8e4790;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  *(undefined4 *)(param_1 + 0x17a) = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  param_1[0x17b] = DAT_14c8464e0;
  param_1[0x17c] = uVar1;
  param_1[0x17d] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 145ff2378 FUN_145ff2378 body=144 status=ok
// SIG undefined FUN_145ff2378(void)

code * FUN_145ff2378(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415b591c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComputeShadingOutputs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FComputeShadingOutputs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca1a178;
  return FUN_1462f4bc0;
}



// FUNCTION 145ff2408 FUN_145ff2408 body=226 status=ok
// SIG undefined FUN_145ff2408(void)

longlong * FUN_145ff2408(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f39c4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff24ec FUN_145ff24ec body=138 status=ok
// SIG undefined FUN_145ff24ec(void)

code * FUN_145ff24ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTarget7";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000014f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266c30;
}



// FUNCTION 145ff2576 FUN_145ff2576 body=138 status=ok
// SIG undefined FUN_145ff2576(void)

code * FUN_145ff2576(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTarget3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000014b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ff2600;
}



// FUNCTION 145ff2600 FUN_145ff2600 body=138 status=ok
// SIG undefined FUN_145ff2600(void)

code * FUN_145ff2600(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTarget2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266d44;
}



// FUNCTION 145ff268a FUN_145ff268a body=232 status=ok
// SIG undefined FUN_145ff268a(void)

undefined8 FUN_145ff268a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60 [4];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ff27a8(local_60);
  puVar4 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    puVar4 = local_60;
  }
  if ((longlong)local_38 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = (longlong)local_38 << 4;
    uVar5 = 0;
    do {
      plVar2 = (longlong *)FUN_14054d1d4();
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar3 = (undefined2 *)*puVar4;
      }
      cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar3);
      if (cVar1 != '\0') {
        uVar5 = 1;
        if (puVar4 != (undefined8 *)(param_1 + 0x38)) {
          if (*(longlong *)(param_1 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(param_1 + 0x38) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        break;
      }
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  FUN_145ff2774(local_60);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 145ff2774 FUN_145ff2774 body=52 status=ok
// SIG undefined FUN_145ff2774(void)

void FUN_145ff2774(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a1747(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff27a8 FUN_145ff27a8 body=199 status=ok
// SIG undefined FUN_145ff27a8(void)

undefined8 * FUN_145ff27a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 2;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(&local_68,uVar1);
  local_48 = local_68;
  local_40 = local_60 + -1;
  if (local_60 == 0) {
    local_40 = 0;
  }
  local_38 = L"AssetRegistry.bin";
  local_30 = 0x11;
  FUN_140bee87a(&local_58,&local_48,2);
  *(undefined4 *)(param_1 + 5) = 1;
  *param_1 = local_58;
  local_58 = 0;
  param_1[1] = local_50;
  local_50 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff287c FUN_145ff287c body=257 status=ok
// SIG undefined FUN_145ff287c(void)

undefined8 * FUN_145ff287c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145cc4806();
  *param_1 = &PTR_FUN_14abfac60;
  param_1[5] = &PTR_LAB_14abfaf80;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffff;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  FUN_1400b22c2(&local_30,"Wait Blackboard Time");
  if (param_1 + 6 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 7) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_24;
  }
  FUN_1446f470e(&local_38,L"BlackboardKey",1);
  FUN_145ff297e(param_1 + 0x12,param_1,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff297e FUN_145ff297e body=270 status=ok
// SIG undefined FUN_145ff297e(void)

void FUN_145ff297e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_48);
  FUN_144a882a8(&local_38,local_48,L"_Float");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar3,1);
  lVar2 = FUN_145ff2a8d(param_2,local_50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff2a8d FUN_145ff2a8d body=187 status=ok
// SIG undefined FUN_145ff2a8d(void)

undefined8 FUN_145ff2a8d(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a751d4();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff2b4a FUN_145ff2b4a body=236 status=ok
// SIG undefined FUN_145ff2b4a(void)

void FUN_145ff2b4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14593bf7e(param_1,1);
  FUN_145ff2c7c(DAT_14c872ce0,L"WindowsApplication.Accessibility",&DAT_14c872ce8);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1e8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
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
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    UnhookWindowsHookEx(*(HHOOK *)(param_1 + 0xa0));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xb8))
            (DAT_14c8407a8,L"WindowsApplication.ApplyLowLevelMouseFilter",1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000145ff2c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xb8))
            (DAT_14c8407a8,L"WindowsApplication.RemoveLowLevelMouseFilter",1);
  return;
}



// FUNCTION 145ff2c36 FUN_145ff2c36 body=9 status=ok
// SIG undefined FUN_145ff2c36(void)

void FUN_145ff2c36(longlong param_1)

{
  FUN_145ff2c40(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145ff2c40 FUN_145ff2c40 body=59 status=ok
// SIG undefined FUN_145ff2c40(void)

void FUN_145ff2c40(longlong *param_1)

{
  char cVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      cVar1 = FUN_14593c384(0);
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)*param_1 + 0x10))();
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145ff2c7c FUN_145ff2c7c body=424 status=ok
// SIG undefined FUN_145ff2c7c(void)

ulonglong FUN_145ff2c7c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14052bcbc(param_1,param_3);
  if (plVar4 != (longlong *)0x0) {
    FUN_140056680(&local_50,param_2);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    iVar3 = local_48 + -1;
    if (local_48 == 0) {
      iVar3 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar3,puVar5);
    iVar3 = FUN_14052bbf0(plVar4,uVar2,&local_50);
    if (iVar3 == -1) {
      bVar7 = true;
    }
    else {
      bVar7 = (longlong)iVar3 * 0xc0 + *plVar4 == 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar7) {
      FUN_140056680(&local_50,param_2);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      FUN_140fe62dc(plVar4,&local_50);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (*(char *)(param_1 + 8) == '\0') {
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        lVar1 = plVar4[1];
        iVar3 = *(int *)((longlong)plVar4 + 0x34);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        if ((int)lVar1 == iVar3) {
          plVar4 = (longlong *)FUN_14054d1d4();
          if (*(int *)(param_3 + 1) == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          else {
            puVar5 = (undefined2 *)*param_3;
          }
          local_58 = 0;
          (**(code **)(*plVar4 + 0x30))(plVar4,puVar5,0,0);
        }
        else {
          *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) | 1;
          FUN_140d6d8de(param_1,0,param_3);
        }
      }
      goto LAB_145ff2dc3;
    }
  }
  uVar6 = 0;
LAB_145ff2dc3:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145ff2e25 FUN_145ff2e25 body=35 status=ok
// SIG undefined FUN_145ff2e25(void)

void FUN_145ff2e25(void)

{
  if (DAT_14caf18e8 == 0) {
    DAT_14caf18e8 = FUN_145ff2e48();
  }
  return;
}



// FUNCTION 145ff2e48 FUN_145ff2e48 body=314 status=ok
// SIG undefined FUN_145ff2e48(void)

longlong FUN_145ff2e48(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_258 [40];
  undefined1 *local_230;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined8 *local_218;
  undefined1 local_210 [8];
  undefined4 local_208;
  undefined1 local_204;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0 [53];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_141050fd7();
  lVar2 = FUN_14572b870();
  FUN_140aa7318(lVar2,1);
  *(code **)(lVar2 + 0xc0) = FUN_14005d234;
  FUN_14000e6f0(local_210,2);
  local_208 = 0;
  local_204 = 2;
  local_200 = (undefined1 *)0x0;
  FUN_14000e6f0(local_1e0,2);
  local_1f8 = local_1e0[0];
  local_1f0 = 0x20;
  local_1ec = 2;
  local_1e8 = 0;
  local_218 = local_1e0;
  local_220 = local_210;
  FUN_14000e9de(local_1e0,0x50);
  FUN_1446f07d6(local_1e0,&local_220,0);
  puVar1 = local_220;
  FUN_14000e6f0(local_210,4);
  local_208 = 0x68;
  local_204 = 4;
  local_200 = puVar1;
  local_228 = &local_1f8;
  local_230 = local_210;
  FUN_145ff2f83(lVar2);
  FUN_14000eb08(local_1e0);
  FUN_140010366(lVar2,0);
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff2f83 FUN_145ff2f83 body=135 status=ok
// SIG undefined FUN_145ff2f83(void)

void FUN_145ff2f83(undefined8 param_1,undefined4 *param_2)

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
  FUN_14000e9de(local_1c8,0x268);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff300c FUN_145ff300c body=121 status=ok
// SIG undefined FUN_145ff300c(void)

void FUN_145ff300c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar3) == *param_2) {
        if (iVar2 < 0) {
          return;
        }
        if (iVar1 <= iVar2) {
          return;
        }
        FUN_145ff3086(param_1 + 0x1a0,iVar2);
        iVar1 = *(int *)(param_1 + 0x1b0);
        if (iVar1 < 1 || iVar1 < iVar2) {
          return;
        }
        *(int *)(param_1 + 0x1b0) = iVar1 + -1;
        return;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar3);
  }
  return;
}



// FUNCTION 145ff3086 FUN_145ff3086 body=122 status=ok
// SIG undefined FUN_145ff3086(void)

void FUN_145ff3086(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145ff310c FUN_145ff310c body=231 status=ok
// SIG undefined FUN_145ff310c(void)

undefined8 * FUN_145ff310c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abeedf0;
  param_1[5] = &PTR_LAB_14abef120;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  FUN_1400b22c2(&local_28,"Cooldown");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 4;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40a00000;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffc3 | 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff31fc FUN_145ff31fc body=234 status=ok
// SIG undefined FUN_145ff31fc(void)

undefined8 * FUN_145ff31fc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b1f16c0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1446f470e(&local_28,L"NiagaraComponent",1);
  uVar2 = FUN_144a7e9aa();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff32ee FUN_145ff32ee body=68 status=ok
// SIG undefined FUN_145ff32ee(void)

void FUN_145ff32ee(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x338);
  memset(_Dst,0,0x338);
  FUN_145ff3332(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145ff3332 FUN_145ff3332 body=278 status=ok
// SIG undefined FUN_145ff3332(void)

undefined8 * FUN_145ff3332(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b894a60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  FUN_141355620(param_1 + 0x1b);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  FUN_145ff3448(param_1 + 0x3a);
  param_1[0x57] = 0x100000000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x5c] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x5d) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  return param_1;
}



// FUNCTION 145ff3448 FUN_145ff3448 body=140 status=ok
// SIG undefined FUN_145ff3448(void)

undefined8 * FUN_145ff3448(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 7) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_144a5dc74(param_1 + 0xf);
  FUN_144a5dc74(param_1 + 0x11);
  FUN_144a5dc74(param_1 + 0x13);
  FUN_144a5dc74(param_1 + 0x15);
  FUN_144a5dc74(param_1 + 0x17);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 145ff34dc FUN_145ff34dc body=844 status=ok
// SIG undefined FUN_145ff34dc(void)

undefined8 * FUN_145ff34dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc93280;
  memset(param_1 + 0x2a,0,0xb0);
  FUN_14020fad6(param_1 + 0x3e,L"OneConvexHullPerUCX");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"ImportCollision");
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"ImportCollisionType");
  FUN_145ff382a();
  pvVar2 = DAT_14cc103b0;
  local_60 = (void *)0x0;
  lVar3 = (longlong)DAT_14cc103b8;
  local_58 = DAT_14cc103b8;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc103b8,0);
    memcpy(local_60,pvVar2,lVar3 * 2);
  }
  puVar1 = param_1 + 5;
  FUN_1410835a0(param_1 + 0x2a,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ff38a4();
  pvVar2 = DAT_14cc103c8;
  local_60 = (void *)0x0;
  lVar3 = (longlong)DAT_14cc103d0;
  local_58 = DAT_14cc103d0;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc103d0,0);
    memcpy(local_60,pvVar2,lVar3 * 2);
  }
  FUN_1410835a0(param_1 + 0x2e,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ff391e();
  pvVar2 = DAT_14cc103e0;
  local_60 = (void *)0x0;
  lVar3 = (longlong)DAT_14cc103e8;
  local_58 = DAT_14cc103e8;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc103e8,0);
    memcpy(local_60,pvVar2,lVar3 * 2);
  }
  FUN_1410835a0(param_1 + 0x32,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ff3998();
  pvVar2 = DAT_14cc103f8;
  local_60 = (void *)0x0;
  lVar3 = (longlong)DAT_14cc10400;
  local_58 = DAT_14cc10400;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc10400,0);
    memcpy(local_60,pvVar2,lVar3 * 2);
  }
  FUN_1410835a0(param_1 + 0x36,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_145ff3a12();
  pvVar2 = DAT_14cc10410;
  local_60 = (void *)0x0;
  lVar3 = (longlong)DAT_14cc10418;
  local_58 = DAT_14cc10418;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc10418,0);
    memcpy(local_60,pvVar2,lVar3 * 2);
  }
  FUN_1410835a0(param_1 + 0x3a,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff382a FUN_145ff382a body=121 status=ok
// SIG undefined FUN_145ff382a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff382a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc103c0) {
    FUN_144b3d300(&DAT_14cc103c0);
    if (DAT_14cc103c0 == -1) {
      DAT_14cc103b0 = 0;
      _DAT_14cc103b8 = 0;
      FUN_14020fad6(&DAT_14cc103b0,L"__MeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddba2);
      _Init_thread_footer(&DAT_14cc103c0);
      return;
    }
  }
  return;
}



// FUNCTION 145ff38a4 FUN_145ff38a4 body=121 status=ok
// SIG undefined FUN_145ff38a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff38a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc103d8) {
    FUN_144b3d300(&DAT_14cc103d8);
    if (DAT_14cc103d8 == -1) {
      DAT_14cc103c8 = 0;
      _DAT_14cc103d0 = 0;
      FUN_14020fad6(&DAT_14cc103c8,L"__BoxCollisionMeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddbb3);
      _Init_thread_footer(&DAT_14cc103d8);
      return;
    }
  }
  return;
}



// FUNCTION 145ff391e FUN_145ff391e body=121 status=ok
// SIG undefined FUN_145ff391e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff391e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc103f0) {
    FUN_144b3d300(&DAT_14cc103f0);
    if (DAT_14cc103f0 == -1) {
      DAT_14cc103e0 = 0;
      _DAT_14cc103e8 = 0;
      FUN_14020fad6(&DAT_14cc103e0,L"__CapsuleCollisionMeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddbc4);
      _Init_thread_footer(&DAT_14cc103f0);
      return;
    }
  }
  return;
}



// FUNCTION 145ff3998 FUN_145ff3998 body=121 status=ok
// SIG undefined FUN_145ff3998(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff3998(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10408) {
    FUN_144b3d300(&DAT_14cc10408);
    if (DAT_14cc10408 == -1) {
      DAT_14cc103f8 = 0;
      _DAT_14cc10400 = 0;
      FUN_14020fad6(&DAT_14cc103f8,L"__SphereCollisionMeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddbd5);
      _Init_thread_footer(&DAT_14cc10408);
      return;
    }
  }
  return;
}



// FUNCTION 145ff3a12 FUN_145ff3a12 body=121 status=ok
// SIG undefined FUN_145ff3a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff3a12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10420) {
    FUN_144b3d300(&DAT_14cc10420);
    if (DAT_14cc10420 == -1) {
      DAT_14cc10410 = 0;
      _DAT_14cc10418 = 0;
      FUN_14020fad6(&DAT_14cc10410,L"__ConvexCollisionMeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddbe6);
      _Init_thread_footer(&DAT_14cc10420);
      return;
    }
  }
  return;
}



// FUNCTION 145ff3a8c FUN_145ff3a8c body=76 status=ok
// SIG undefined FUN_145ff3a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff3a8c(void)

{
  DAT_14c874ad0 = 0;
  if (DAT_14c874ac8 != 0) {
    FUN_1400020a8();
  }
  FUN_145ff3ad8();
  _DAT_14c874a80 = 0;
  if (DAT_14c874a78 != 0) {
    FUN_1400020a8();
  }
  FUN_145ff3b0e();
  return;
}



// FUNCTION 145ff3ad8 FUN_145ff3ad8 body=54 status=ok
// SIG undefined FUN_145ff3ad8(void)

void FUN_145ff3ad8(void)

{
  FUN_145ff3cc0();
  if (DAT_14c874aa8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c874a88 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff3b0e FUN_145ff3b0e body=54 status=ok
// SIG undefined FUN_145ff3b0e(void)

void FUN_145ff3b0e(void)

{
  FUN_145ff3b44();
  if (DAT_14c874a58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c874a38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff3b44 FUN_145ff3b44 body=378 status=ok
// SIG undefined FUN_145ff3b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff3b44(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c874a48;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c874a60 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c874a38;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < (int)local_28[6]) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  _DAT_14c874a40 = 0;
  if (DAT_14c874a44 != 0) {
    FUN_1446f4a44(&DAT_14c874a38,0);
  }
  _DAT_14c874a68 = 0xffffffff;
  DAT_14c874a60 = 0;
  if (0x80 < DAT_14c874a64) {
    DAT_14c874a64 = 0x80;
    FUN_1446efbd8(&DAT_14c874a48,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff3cc0 FUN_145ff3cc0 body=409 status=ok
// SIG undefined FUN_145ff3cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff3cc0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c874a98;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c874ab0 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c874a88;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < (int)local_38[6]) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1468207a0(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  DAT_14c874a90 = 0;
  if (DAT_14c874a94 != 0) {
    FUN_1448fc38a(&DAT_14c874a88,0);
  }
  _DAT_14c874ab8 = 0xffffffff;
  DAT_14c874ab0 = 0;
  if (0x80 < DAT_14c874ab4) {
    DAT_14c874ab4 = 0x80;
    FUN_1446efbd8(&DAT_14c874a98,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff3e5a FUN_145ff3e5a body=53 status=ok
// SIG undefined FUN_145ff3e5a(void)

void FUN_145ff3e5a(longlong *param_1)

{
  FUN_145ff3e90();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ff3e90 FUN_145ff3e90 body=311 status=ok
// SIG undefined FUN_145ff3e90(void)

void FUN_145ff3e90(longlong *param_1)

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
      FUN_145e216be((longlong)iStack_4c * 0x78 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145ff3fc8 FUN_145ff3fc8 body=1102 status=ok
// SIG undefined FUN_145ff3fc8(void)

void FUN_145ff3fc8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_50 = FUN_148e8c856;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9c58,param_1);
      local_50 = FUN_148e8c95e;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff453e(param_1,param_2,&DAT_14cbc9c98,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4666(param_1,param_2,&DAT_14cbc9c98,param_1);
      local_50 = FUN_148e8c9f2;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9ca0,param_1);
      local_50 = FUN_1442cd666;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9ca8,param_1);
      local_50 = FUN_148e8ce26;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff453e(param_1,param_2,&DAT_14cbc9cb0,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4666(param_1,param_2,&DAT_14cbc9cb0,param_1);
      local_50 = FUN_148e8cea4;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff453e(param_1,param_2,&DAT_14cbc9cc0,param_1);
      local_50 = (code *)&LAB_148e8d22a;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff47fa(param_1,param_2,&DAT_14cbc9cc0,param_1);
      local_50 = FUN_1442cd7c8;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff453e(param_1,param_2,&DAT_14cbc9cc8,param_1);
      local_50 = (code *)&LAB_148e8d22a;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff47fa(param_1,param_2,&DAT_14cbc9cc8,param_1);
      local_50 = (code *)&DAT_148e8d262;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9cd0,param_1);
      local_50 = (code *)&DAT_148e8d264;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9cd8,param_1);
      local_50 = (code *)&DAT_148e8d266;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9ce0,param_1);
      local_50 = FUN_148e8d268;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9ce8,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4666(param_1,param_2,&DAT_14cbc9ce8,param_1);
      local_50 = FUN_1442cdb68;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9d20,param_1);
      local_50 = FUN_1442cdcc2;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145ff4418(param_1,param_2,&DAT_14cbc9d28,param_1);
      local_50 = (code *)&LAB_148e8d2b0;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5bb4(param_2,&DAT_14cbc9cf0,2,param_1);
      *(undefined4 *)(param_1 + 0x3a8) = uVar1;
      local_50 = (code *)&LAB_148e8d2c2;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5bb4(param_2,&DAT_14cbc9cf0,0x10,param_1);
      *(undefined4 *)(param_1 + 0x3ac) = uVar1;
      local_50 = (code *)&LAB_148e8d2d4;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5d7a(param_2,&DAT_14cbc9cf8,1,param_1);
      *(undefined4 *)(param_1 + 0x3b0) = uVar1;
      local_50 = (code *)&LAB_148e8d2e6;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5bb4(param_2,&DAT_14cbc9c78,1,param_1);
      *(undefined4 *)(param_1 + 0x3b4) = uVar1;
      local_50 = (code *)&LAB_148e8d2f8;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5bb4(param_2,&DAT_14cbc9c80,1,param_1);
      *(undefined4 *)(param_1 + 0x3b8) = uVar1;
      local_50 = (code *)&LAB_148e8d30a;
      local_48 = 0;
      local_58 = &local_50;
      uVar1 = FUN_1415b5bb4(param_2,&DAT_14cbc9c88,1,param_1);
      *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff4418 FUN_145ff4418 body=293 status=ok
// SIG undefined FUN_145ff4418(void)

void FUN_145ff4418(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1415b5c50(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff453e FUN_145ff453e body=294 status=ok
// SIG undefined FUN_145ff453e(void)

void FUN_145ff453e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  local_58 = &local_48;
  uVar3 = FUN_1415b5d7a(param_2,param_3,1);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff4666 FUN_145ff4666 body=402 status=ok
// SIG undefined FUN_145ff4666(void)

void FUN_145ff4666(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1415b5cd4(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1415b5cd4(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1415b5cd4(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff47fa FUN_145ff47fa body=402 status=ok
// SIG undefined FUN_145ff47fa(void)

void FUN_145ff47fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1415b5d7a(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1415b5d7a(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1415b5d7a(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff4998 FUN_145ff4998 body=475 status=ok
// SIG undefined FUN_145ff4998(void)

undefined8 * FUN_145ff4998(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14a1c1d20;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xf00d1e03;
  param_1[0x17] = "gbx_ue_data_table";
  lVar4 = FUN_140261af2();
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
    FUN_1400bbfae(&local_60,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
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
        goto LAB_145ff4a7e;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145ff4a7e:
  FUN_1400b22c2(local_70,"Data Tables (GbxUE).Definitions");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff4b74 FUN_145ff4b74 body=44 status=ok
// SIG undefined FUN_145ff4b74(void)

void FUN_145ff4b74(longlong param_1)

{
  FUN_145ff4ba0(param_1 + 0x10,0);
  FUN_145779eb8(param_1 + 0x60,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145ff4ba0 FUN_145ff4ba0 body=107 status=ok
// SIG undefined FUN_145ff4ba0(void)

void FUN_145ff4ba0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145ff4bef:
      FUN_145d18bf4(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14884e43a(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145ff4bef;
  FUN_145ff4c0c(param_1);
  FUN_145d18bf4(param_1,param_2);
  return;
}



// FUNCTION 145ff4c0c FUN_145ff4c0c body=335 status=ok
// SIG undefined FUN_145ff4c0c(void)

void FUN_145ff4c0c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff4d5c FUN_145ff4d5c body=594 status=ok
// SIG undefined FUN_145ff4d5c(void)

void FUN_145ff4d5c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = 0;
  uStack_90 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar3 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar5 = local_1a0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  FUN_145ff4fb0(param_1,puVar4,iVar3 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff4fb0 FUN_145ff4fb0 body=14 status=ok
// SIG undefined FUN_145ff4fb0(void)

void FUN_145ff4fb0(void)

{
  FUN_140613f88();
  return;
}



// FUNCTION 145ff4fbe FUN_145ff4fbe body=246 status=ok
// SIG undefined FUN_145ff4fbe(void)

undefined8 *
FUN_145ff4fbe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145ff50b6(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff50b6 FUN_145ff50b6 body=423 status=ok
// SIG undefined FUN_145ff50b6(void)

void FUN_145ff50b6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ff518c:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9db620;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ff518c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9db620;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000145ff5245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ff525e FUN_145ff525e body=117 status=ok
// SIG undefined FUN_145ff525e(void)

longlong * FUN_145ff525e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ff52d4(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ff52d4 FUN_145ff52d4 body=416 status=ok
// SIG undefined FUN_145ff52d4(void)

void FUN_145ff52d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_2f8 [32];
  code *local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8 [424];
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_140a53a96(local_2c8);
  plVar8 = local_e8;
  local_120 = *(undefined4 *)(param_2 + 0x1a8);
  local_11c = *(undefined4 *)(param_2 + 0x1ac);
  local_f0 = *(undefined8 *)(param_2 + 0x1d8);
  plVar3 = *(longlong **)(param_2 + 0x1e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_e8;
      local_e8 = plVar3;
      (*(code *)*puVar4)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_e8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar3 = local_e8;
      }
    }
  }
  local_e8 = plVar3;
  FUN_140a58268(param_1,local_2c8);
  FUN_140a5660c(local_2c8);
  FUN_145ff5476(param_1 + 0x250,param_1,param_2 + 0x1b0);
  uVar5 = *(undefined4 *)(param_2 + 0x1f0);
  uVar6 = *(undefined4 *)(param_2 + 500);
  uVar7 = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x264) = uVar5;
  *(undefined4 *)(param_1 + 0x268) = uVar6;
  *(undefined4 *)(param_1 + 0x26c) = uVar7;
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x271) = *(undefined1 *)(param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_2 + 0x1fd);
  *(undefined1 *)(param_1 + 0x273) = *(undefined1 *)(param_2 + 0x1fe);
  *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_2 + 0x1ff);
  *(undefined1 *)(param_1 + 0x275) = 1;
  FUN_145ff5568(param_1);
  local_2d8 = FUN_145ff5568;
  local_2d0 = 0;
  FUN_145ff56a2(local_2c8,param_1);
  FUN_1448b6402(&DAT_14c8672b0,&local_2d8,local_2c8);
  FUN_1449db362(local_2c8);
  *(code **)(param_1 + 0x288) = local_2d8;
  if ((local_20 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff5476 FUN_145ff5476 body=126 status=ok
// SIG undefined FUN_145ff5476(void)

void FUN_145ff5476(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac1a6a(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    uVar2 = FUN_140133f88(param_3);
    FUN_145ff54f4(param_1,param_2,uVar2);
    return;
  }
  FUN_1400b73c8(param_2,param_1);
  return;
}



// FUNCTION 145ff54f4 FUN_145ff54f4 body=116 status=ok
// SIG undefined FUN_145ff54f4(void)

ulonglong FUN_145ff54f4(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[2] != param_3[2]))
      || ((NAN(param_1[2]) || NAN(param_3[2]) || (param_1[1] != param_3[1])))) ||
     ((NAN(param_1[1]) || NAN(param_3[1]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    FUN_14094e0ca(param_2,param_1,0,1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145ff5568 FUN_145ff5568 body=312 status=ok
// SIG undefined FUN_145ff5568(void)

void FUN_145ff5568(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x275) = 1;
  local_20 = 0;
  FUN_145787b40(DAT_14c98e618,(undefined4 *)(param_1 + 0x278));
  if (DAT_14c98f158 == '\x01') {
    fVar2 = *(float *)(param_1 + 0x284) * DAT_14c75ef68;
    fVar4 = *(float *)(param_1 + 0x280) * DAT_14c75ef68;
    fVar6 = *(float *)(param_1 + 0x27c) * DAT_14c75ef68;
    *(float *)(param_1 + 0x278) = DAT_14c75ef68 * *(float *)(param_1 + 0x278);
    *(float *)(param_1 + 0x27c) = fVar6;
    *(float *)(param_1 + 0x280) = fVar4;
    *(float *)(param_1 + 0x284) = fVar2;
  }
  uVar1 = 0;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x274) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x284);
  }
  if (*(char *)(param_1 + 0x272) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x280);
  }
  uVar5 = 0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x273) == '\x01') {
    uVar7 = *(undefined4 *)(param_1 + 0x27c);
  }
  if (*(char *)(param_1 + 0x271) == '\x01') {
    uVar5 = *(undefined4 *)(param_1 + 0x278);
  }
  *(undefined4 *)(param_1 + 0x278) = uVar5;
  *(undefined4 *)(param_1 + 0x27c) = uVar7;
  *(undefined4 *)(param_1 + 0x280) = uVar1;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  FUN_140163244(param_1,1);
  *(undefined1 *)(param_1 + 0x275) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff56a2 FUN_145ff56a2 body=314 status=ok
// SIG undefined FUN_145ff56a2(void)

longlong * FUN_145ff56a2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ff575f:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f192b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_145ff575f;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f192b0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145ff57e8 FUN_145ff57e8 body=233 status=ok
// SIG undefined FUN_145ff57e8(void)

undefined8 * FUN_145ff57e8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6caee0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x85) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5110) {
    FUN_144b3d300(&DAT_14caf5110);
    if (DAT_14caf5110 == -1) {
      FUN_1446f470e(&DAT_14caf5108,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf5110);
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[6] = DAT_14caf5108;
  return param_1;
}



// FUNCTION 145ff58dc FUN_145ff58dc body=232 status=ok
// SIG undefined FUN_145ff58dc(void)

undefined8 * FUN_145ff58dc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a9a8c10;
  if (DAT_14cae84e8 == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"LocalNotification",L"DefaultPlatformService",&local_28);
    if ((int)uStack_20 - 2U < 0x7fffffff) {
      FUN_1446f470e(&local_30,local_28,1);
      uVar1 = FUN_144a52528();
      plVar2 = (longlong *)FUN_1405f3750(uVar1,local_30,0);
      if (plVar2 != (longlong *)0x0) {
        DAT_14cae84e8 = (**(code **)(*plVar2 + 0x40))(plVar2);
      }
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff59c6 FUN_145ff59c6 body=62 status=ok
// SIG undefined FUN_145ff59c6(void)

void FUN_145ff59c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14027284a(param_1 + 0x3910);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x3d0) == lVar1)) {
    FUN_1458ae910(lVar1,4,0);
  }
  FUN_145ff5a04(param_1);
  return;
}



// FUNCTION 145ff5a04 FUN_145ff5a04 body=60 status=ok
// SIG undefined FUN_145ff5a04(void)

void FUN_145ff5a04(longlong *param_1)

{
  if (param_1[0x7a] != 0) {
    FUN_140aeefbc(param_1[0x7a],0,1);
                    /* WARNING: Could not recover jumptable at 0x000145ff5a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6b0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145ff5a40 FUN_145ff5a40 body=103 status=ok
// SIG undefined FUN_145ff5a40(void)

undefined8 * FUN_145ff5a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbf8f50;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_145ff5aa8(param_1 + 0x3e);
  puVar1 = (undefined8 *)param_1[0x3e];
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  return param_1;
}



// FUNCTION 145ff5aa8 FUN_145ff5aa8 body=141 status=ok
// SIG undefined FUN_145ff5aa8(void)

void FUN_145ff5aa8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0xc,4);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0xc)) {
      uVar3 = uVar2 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 145ff5b36 FUN_145ff5b36 body=489 status=ok
// SIG undefined FUN_145ff5b36(void)

int * FUN_145ff5b36(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
                   ,int *param_6)

{
  void **ppvVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_5c [4];
  int *local_58;
  int **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_4;
  FUN_1446ddc76(param_1 + 1,param_2,1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_3;
  *(longlong *)(param_1 + 0x10) = *param_5;
  *(longlong *)(param_1 + 0x14) = param_5[2];
  param_5[2] = 0;
  lVar7 = param_5[4];
  lVar2 = param_5[5];
  lVar3 = param_5[7];
  *(longlong *)(param_1 + 0x1c) = param_5[6];
  *(longlong *)(param_1 + 0x1e) = lVar3;
  *(longlong *)(param_1 + 0x18) = lVar7;
  *(longlong *)(param_1 + 0x1a) = lVar2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_5 = 0;
  }
  if (param_6 != (int *)0x0) {
    ppvVar1 = (void **)(param_1 + 10);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_58 = param_6;
    sVar5 = strlen((char *)param_6);
    local_50 = (int **)CONCAT44(local_50._4_4_,(int)sVar5);
    FUN_14475bea4(&local_88,&local_58);
    _Src = local_78;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = (int)local_88;
    param_1[7] = local_88._4_4_;
    param_1[8] = (int)uStack_80;
    param_1[9] = uStack_80._4_4_;
    if (ppvVar1 != &local_78) {
      iVar4 = (int)uStack_70;
      lVar7 = (longlong)(int)uStack_70;
      param_1[0xc] = (int)uStack_70;
      if ((int)uStack_70 == 0 && param_1[0xd] == 0) {
        param_1[0xd] = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppvVar1,_Src,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((-1 < *param_1) && ((DAT_14cb75ab0 == (int *)0x0 || (*DAT_14cb75ab0 < *param_1)))) {
    DAT_14cb75ab0 = param_1;
  }
  FUN_14125746e();
  local_50 = &local_90;
  local_90 = param_1;
  local_58 = param_1 + 1;
  FUN_145ff5d20(&DAT_14cb75ab8,local_5c,&local_58,0);
  if (*param_5 != 0) {
    plVar6 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff5d20 FUN_145ff5d20 body=352 status=ok
// SIG undefined FUN_145ff5d20(void)

undefined4 *
FUN_145ff5d20(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ff5f1a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_145ff5e82(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145ff6002(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff5e82 FUN_145ff5e82 body=152 status=ok
// SIG undefined FUN_145ff5e82(void)

void FUN_145ff5e82(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_145bda302((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_145ff5eef;
    }
  }
  uVar5 = 0;
LAB_145ff5eef:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145ff5f1a FUN_145ff5f1a body=231 status=ok
// SIG undefined FUN_145ff5f1a(void)

int * FUN_145ff5f1a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145ff6002 FUN_145ff6002 body=482 status=ok
// SIG undefined FUN_145ff6002(void)

void FUN_145ff6002(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff61e6 FUN_145ff61e6 body=489 status=ok
// SIG undefined FUN_145ff61e6(void)

int * FUN_145ff61e6(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
                   ,int *param_6)

{
  void **ppvVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_5c [4];
  int *local_58;
  int **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_4;
  FUN_1446ddc76(param_1 + 1,param_2,1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_3;
  *(longlong *)(param_1 + 0x10) = *param_5;
  *(longlong *)(param_1 + 0x14) = param_5[2];
  param_5[2] = 0;
  lVar7 = param_5[4];
  lVar2 = param_5[5];
  lVar3 = param_5[7];
  *(longlong *)(param_1 + 0x1c) = param_5[6];
  *(longlong *)(param_1 + 0x1e) = lVar3;
  *(longlong *)(param_1 + 0x18) = lVar7;
  *(longlong *)(param_1 + 0x1a) = lVar2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_5 = 0;
  }
  if (param_6 != (int *)0x0) {
    ppvVar1 = (void **)(param_1 + 10);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_58 = param_6;
    sVar5 = strlen((char *)param_6);
    local_50 = (int **)CONCAT44(local_50._4_4_,(int)sVar5);
    FUN_14475bea4(&local_88,&local_58);
    _Src = local_78;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = (int)local_88;
    param_1[7] = local_88._4_4_;
    param_1[8] = (int)uStack_80;
    param_1[9] = uStack_80._4_4_;
    if (ppvVar1 != &local_78) {
      iVar4 = (int)uStack_70;
      lVar7 = (longlong)(int)uStack_70;
      param_1[0xc] = (int)uStack_70;
      if ((int)uStack_70 == 0 && param_1[0xd] == 0) {
        param_1[0xd] = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppvVar1,_Src,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((-1 < *param_1) && ((DAT_14cb75da8 == (int *)0x0 || (*DAT_14cb75da8 < *param_1)))) {
    DAT_14cb75da8 = param_1;
  }
  FUN_14592c3da();
  local_50 = &local_90;
  local_90 = param_1;
  local_58 = param_1 + 1;
  FUN_145ff63d0(&DAT_14cb75db0,local_5c,&local_58,0);
  if (*param_5 != 0) {
    plVar6 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff63d0 FUN_145ff63d0 body=352 status=ok
// SIG undefined FUN_145ff63d0(void)

undefined4 *
FUN_145ff63d0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ff65ca(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_145ff6532(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145ff66b2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff6532 FUN_145ff6532 body=152 status=ok
// SIG undefined FUN_145ff6532(void)

void FUN_145ff6532(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_145bda4e6((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_145ff659f;
    }
  }
  uVar5 = 0;
LAB_145ff659f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145ff65ca FUN_145ff65ca body=231 status=ok
// SIG undefined FUN_145ff65ca(void)

int * FUN_145ff65ca(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145ff66b2 FUN_145ff66b2 body=482 status=ok
// SIG undefined FUN_145ff66b2(void)

void FUN_145ff66b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff68a0 FUN_145ff68a0 body=228 status=ok
// SIG undefined FUN_145ff68a0(void)

undefined8 * FUN_145ff68a0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a7eeb80;
  memset(param_1 + 7,0,0x120);
  *(undefined4 *)(param_1 + 0x2c) = 0x50;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_1446f470e(&local_28,L"Audio",1);
  param_1[6] = local_28;
  FUN_145ff6986(param_1);
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 1;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x400000003ecccccd;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff6986 FUN_145ff6986 body=345 status=ok
// SIG undefined FUN_145ff6986(void)

void FUN_145ff6986(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(&local_58);
  local_48 = 0x20;
  local_40 = L"DefaultSettingsName";
  local_38 = 0x13;
  FUN_1446e940c(local_5c,&local_40);
  local_40 = L"AudioSettings";
  local_38 = 0xd;
  FUN_1446e940c(local_60,&local_40);
  FUN_140208bae(&local_40,local_60,local_5c,L"Default");
  FUN_140008f88(&local_58,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  iVar2 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
    FUN_145ff6ae0((longlong *)(param_1 + 0x178),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 0x18);
  *puVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  *(undefined4 *)(puVar1 + 1) = local_50;
  *(undefined4 *)(puVar1 + 2) = local_48;
  *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) | 1;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x158) = 16000;
  *(undefined4 *)(param_1 + 0x18c) = 8;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff6ae0 FUN_145ff6ae0 body=147 status=ok
// SIG undefined FUN_145ff6ae0(void)

void FUN_145ff6ae0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ff6b80 FUN_145ff6b80 body=31 status=ok
// SIG undefined FUN_145ff6b80(void)

void FUN_145ff6b80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xa8,0x10);
  FUN_145ff6ba0(uVar1);
  return;
}



// FUNCTION 145ff6ba0 FUN_145ff6ba0 body=446 status=ok
// SIG undefined FUN_145ff6ba0(void)

undefined8 * FUN_145ff6ba0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a2f02b0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000;
  param_1[7] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca46a18) {
    FUN_144b3d300(&DAT_14ca46a18);
    if (DAT_14ca46a18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca46a10 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EarlyZPass",1);
      _Init_thread_footer(&DAT_14ca46a18);
    }
  }
  plVar1 = DAT_14ca46a10;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_149e17030;
  local_30[3] = FUN_1472db242;
  (**(code **)(*plVar1 + 200))(plVar1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff6d6a FUN_145ff6d6a body=330 status=ok
// SIG undefined FUN_145ff6d6a(void)

undefined8 * FUN_145ff6d6a(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65a3c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_14020fad6(param_1 + 0x19,L"Custom");
  FUN_14020fad6(param_1 + 0x16,
                L"// The below expression will get compiled\n// into the output of this node\nfloat3(1, 1, 1)"
               );
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x18) = 2;
  iVar2 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xe4) < iVar2 + 1U) {
    FUN_145ff6eb6(param_1 + 0x1b,iVar2);
  }
  lVar3 = param_1[0x1b];
  lVar4 = (longlong)iVar2 * 0x30;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  FUN_1446f470e(&local_38,&DAT_149dfb77a,1);
  *(undefined8 *)param_1[0x1b] = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff6eb6 FUN_145ff6eb6 body=147 status=ok
// SIG undefined FUN_145ff6eb6(void)

void FUN_145ff6eb6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ff6f4a FUN_145ff6f4a body=127 status=ok
// SIG undefined FUN_145ff6f4a(void)

longlong * FUN_145ff6f4a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ff6fca(*param_1,param_3,**(undefined4 **)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ff6fca FUN_145ff6fca body=8290 status=ok
// SIG undefined FUN_145ff6fca(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000145ff8829) */
/* WARNING: Removing unreachable block (ram,0x000145ff8834) */
/* WARNING: Removing unreachable block (ram,0x000145ff8848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ff6fca(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_2598 [32];
  undefined1 *local_2578;
  longlong local_2570;
  undefined8 local_2568;
  longlong *local_2560;
  undefined1 local_2551;
  undefined8 local_2550;
  longlong *local_2548;
  undefined1 local_2531;
  undefined1 local_2530 [8];
  longlong *local_2528;
  undefined1 local_2511;
  undefined1 local_2510 [8];
  longlong *local_2508;
  undefined1 local_24f1;
  undefined1 local_24f0 [8];
  longlong *local_24e8;
  undefined1 local_24d1;
  undefined8 local_24d0;
  longlong *local_24c8;
  undefined8 local_24b8;
  longlong *local_24b0;
  undefined4 local_24a8;
  undefined1 local_24a4;
  undefined8 local_24a0;
  undefined8 uStack_2498;
  undefined8 local_2490;
  longlong *local_2488;
  undefined8 local_2480;
  longlong *local_2478;
  undefined1 local_2469;
  undefined1 local_2468 [8];
  longlong *local_2460;
  undefined1 local_2449;
  undefined8 local_2448;
  longlong *local_2440;
  undefined1 local_2429;
  undefined8 local_2428;
  longlong *local_2420;
  undefined8 local_2410;
  undefined1 local_2408;
  undefined8 local_2400;
  undefined8 uStack_23f8;
  undefined8 local_23f0;
  longlong *local_23e8;
  undefined4 local_23e0;
  undefined1 local_23dc;
  undefined8 local_23d8;
  undefined8 uStack_23d0;
  undefined4 local_23c8;
  undefined1 local_23c4;
  undefined8 local_23c0;
  undefined8 uStack_23b8;
  undefined2 local_23b0;
  undefined8 local_23a8;
  undefined8 uStack_23a0;
  undefined8 local_2398;
  longlong *local_2390;
  undefined8 local_2388;
  longlong *local_2380;
  undefined1 local_2371;
  undefined8 local_2370;
  longlong *local_2368;
  longlong local_2358 [2];
  longlong *local_2348 [2];
  undefined1 local_2338 [16];
  undefined1 local_2328;
  undefined8 local_2320;
  undefined8 uStack_2318;
  undefined8 local_2310;
  longlong *local_2308;
  undefined8 local_2300;
  longlong *local_22f8;
  undefined8 local_22f0;
  longlong *local_22e8;
  undefined1 local_22d9;
  undefined8 local_22d8;
  longlong *local_22d0;
  undefined1 local_22b9;
  undefined8 local_22b8;
  longlong *local_22b0;
  undefined8 local_22a0;
  undefined1 local_2298;
  undefined8 local_2290;
  undefined8 uStack_2288;
  undefined8 local_2280;
  longlong *local_2278;
  undefined2 local_2270;
  undefined8 local_2268;
  undefined8 uStack_2260;
  undefined4 local_2258;
  undefined1 local_2254;
  undefined8 local_2250;
  undefined8 uStack_2248;
  undefined4 local_2240;
  undefined1 local_223c;
  undefined8 local_2238;
  undefined8 uStack_2230;
  undefined8 local_2228;
  longlong *local_2220;
  undefined8 local_2218;
  longlong *local_2210;
  undefined8 local_2208;
  longlong *local_2200;
  undefined8 local_21f8;
  longlong *local_21f0;
  undefined8 local_21e8;
  longlong *local_21e0;
  undefined4 local_21d8;
  undefined1 local_21d4;
  undefined8 local_21d0;
  undefined8 uStack_21c8;
  undefined4 local_21c0;
  undefined1 local_21bc;
  undefined8 local_21b8;
  undefined8 uStack_21b0;
  undefined8 local_21a8;
  longlong *local_21a0;
  undefined4 local_2198;
  undefined4 uStack_2194;
  undefined4 uStack_2190;
  undefined4 uStack_218c;
  uint local_2188;
  undefined1 local_2184;
  undefined8 local_2180;
  undefined8 uStack_2178;
  undefined8 local_2170;
  undefined8 local_2168;
  undefined1 local_2160;
  undefined8 local_2158;
  undefined8 uStack_2150;
  undefined8 local_2148;
  longlong *local_2140;
  undefined8 local_2138;
  longlong *local_2130;
  longlong local_2128;
  undefined7 uStack_2120;
  undefined1 local_2119;
  undefined4 uStack_2118;
  undefined1 uStack_2114;
  undefined2 uStack_2113;
  undefined8 local_2110;
  undefined4 local_2108;
  undefined4 uStack_2104;
  undefined4 uStack_2100;
  undefined4 uStack_20fc;
  undefined8 local_20f8;
  longlong *plStack_20f0;
  undefined8 local_20e8;
  undefined8 local_20e0;
  undefined4 local_20d8;
  undefined2 local_20d4;
  undefined1 local_20d2;
  undefined4 local_20d0;
  undefined1 local_20c8 [8];
  undefined1 local_20c0;
  undefined1 local_20bf;
  undefined8 local_20b8;
  undefined8 uStack_20b0;
  undefined1 local_20a8 [24];
  undefined4 local_2090;
  undefined4 uStack_208c;
  undefined4 uStack_2088;
  undefined4 uStack_2084;
  undefined1 local_2080;
  undefined1 local_2078 [16];
  undefined4 local_2068;
  undefined1 local_2064;
  undefined4 local_2060;
  undefined1 local_205c;
  undefined1 local_2050 [24];
  undefined4 local_2038;
  undefined4 uStack_2034;
  undefined4 uStack_2030;
  undefined4 uStack_202c;
  undefined1 local_2028;
  undefined1 local_2020 [16];
  undefined4 local_2010;
  undefined1 local_200c;
  undefined4 local_2008;
  undefined1 local_2004;
  undefined1 local_1ff8 [24];
  undefined4 local_1fe0;
  undefined4 uStack_1fdc;
  undefined4 uStack_1fd8;
  undefined4 uStack_1fd4;
  undefined1 local_1fd0;
  undefined1 local_1fc8 [16];
  undefined4 local_1fb8;
  undefined1 local_1fb4;
  undefined4 local_1fb0;
  undefined1 local_1fac;
  undefined1 local_1fa0 [24];
  undefined4 local_1f88;
  undefined4 uStack_1f84;
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  undefined1 local_1f78;
  undefined1 local_1f70 [16];
  undefined4 local_1f60;
  undefined1 local_1f5c;
  undefined4 local_1f58;
  undefined1 local_1f54;
  undefined1 local_1f48 [88];
  undefined1 local_1ef0 [64];
  undefined4 local_1eb0;
  undefined1 local_1eac;
  undefined4 local_1ea8;
  undefined1 local_1ea4;
  undefined1 local_1e98 [424];
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined1 local_1ce0;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined1 *local_1b48;
  undefined8 local_1b18;
  longlong *local_1b10;
  undefined4 local_1af0;
  undefined1 local_1aec;
  undefined1 local_1ae8 [160];
  undefined1 local_1a48 [424];
  undefined8 local_18a0;
  undefined1 local_1898;
  undefined1 local_1890 [128];
  undefined8 local_1810;
  undefined8 uStack_1808;
  undefined1 local_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined2 local_17a0;
  undefined1 local_1798 [352];
  undefined8 local_1638;
  longlong *local_1630;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined1 local_1620 [16];
  undefined4 local_1610;
  undefined1 local_160c;
  undefined1 local_1608 [160];
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  longlong *aplStack_1530 [2];
  undefined4 local_1520;
  undefined1 local_151c;
  undefined8 local_1500;
  undefined8 uStack_14f8;
  undefined1 local_14f0;
  undefined4 local_14ec;
  undefined4 uStack_14e8;
  undefined4 uStack_14e4;
  undefined4 uStack_14e0;
  undefined8 local_14dc;
  undefined1 local_10f8 [424];
  undefined8 local_f50;
  undefined1 local_f48;
  undefined1 local_f40 [128];
  undefined1 local_ec0 [112];
  undefined2 local_e50;
  undefined1 local_e48 [304];
  undefined1 *local_d18;
  undefined8 local_ce8;
  longlong *local_ce0;
  undefined4 local_ca8;
  undefined1 local_ca4;
  undefined1 local_ca0 [16];
  undefined4 local_c90;
  undefined1 local_c8c;
  undefined1 auStack_c88 [112];
  undefined1 local_c18 [440];
  undefined1 local_a60 [440];
  undefined1 local_8a8 [424];
  undefined8 local_700;
  longlong *local_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined1 local_6e4;
  undefined1 local_6e0 [16];
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined1 local_6c8 [64];
  undefined8 local_688;
  longlong *plStack_680;
  undefined1 local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 local_4b8;
  undefined1 local_4b0 [80];
  undefined8 local_460;
  undefined1 local_458;
  undefined1 auStack_450 [136];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  uint local_3b8;
  undefined1 local_3b4;
  undefined1 local_3b0 [88];
  undefined8 local_358;
  longlong *local_350;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x145ff6fe0;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2598;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  plVar12 = (longlong *)(param_1 + 0x288);
  if (*(int *)(param_1 + 0x294) < param_3) {
    FUN_145ff9422(plVar12,param_3);
  }
  local_2570 = param_1;
  if (param_3 != 0) {
    do {
      thunk_FUN_140a5071c(&local_1568);
      FUN_145ff91b2(&local_688,local_ec0);
      FUN_145ff907a(&local_688,&local_358,&local_1568);
      plVar6 = plStack_680;
      if (plStack_680 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_680 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_680)(plStack_680);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_140a4ff8c(&local_1568);
      uVar13 = local_358;
      local_20c0 = DAT_14c96b23b;
      local_20bf = 1;
      local_20b8 = 0;
      uStack_20b0 = 0;
      FUN_14020e622(local_358,&local_20c0);
      param_1 = local_2570;
      aplStack_1530[0] = (longlong *)0x0;
      local_1548 = 0;
      uStack_1540 = 0;
      local_1558 = 0;
      uStack_1550 = 0;
      local_1568 = 0;
      uStack_1560 = 0;
      local_1538 = uVar13;
      if (local_350 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_350 + 1) = (int)local_350[1] + 1;
        UNLOCK();
        local_1538 = uVar13;
        if (local_350 == (longlong *)0x0) {
          LOCK();
          _DAT_00000008 = _DAT_00000008 + -1;
          UNLOCK();
          if (_DAT_00000008 == 0) {
            (*(code *)*_DAT_00000000)(0);
            LOCK();
            _DAT_0000000c = _DAT_0000000c + -1;
            UNLOCK();
            if (_DAT_0000000c == 0) {
              (*(code *)_DAT_00000000[2])(0);
            }
          }
        }
        else {
          aplStack_1530[0] = local_350;
        }
      }
      iVar5 = *(int *)(param_1 + 0x290);
      *(uint *)(param_1 + 0x290) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x294) < iVar5 + 1U) {
        FUN_148e98f86(plVar12,iVar5);
      }
      lVar11 = *plVar12;
      lVar15 = (longlong)iVar5 * 0x40;
      FUN_145ff90f2(lVar11 + lVar15,&local_1568);
      *(undefined8 *)(lVar11 + 0x30 + lVar15) = local_1538;
      *(longlong **)(lVar11 + 0x38 + lVar15) = aplStack_1530[0];
      if (aplStack_1530[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(aplStack_1530[0] + 1) = (int)aplStack_1530[0][1] + 1;
        UNLOCK();
      }
      FUN_145ff903a(&local_1568);
      plVar6 = local_350;
      if (local_350 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_350 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_350)(local_350);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_1407679b0(&local_1568);
  local_2578 = local_ec0;
  FUN_14076837c(&local_688,"SVerticalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x2c);
  FUN_14076784c(&local_688,&local_358,&local_1568);
  local_2568 = local_358;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_350 + 1) = (int)local_350[1] + 1;
    UNLOCK();
    if (local_350 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_350 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar4 = (int *)((longlong)local_350 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_350 + 0x10))(local_350);
        }
      }
    }
  }
  plVar12 = plStack_680;
  local_2560 = local_350;
  if (plStack_680 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_680 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_680)(plStack_680);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_14149255e(&local_1568);
  iVar5 = *(int *)(param_1 + 0x290);
  if ((longlong)iVar5 != 0) {
    lVar11 = *(longlong *)(local_2570 + 0x288);
    lVar15 = 0;
    do {
      FUN_140767c14(local_2568,&local_1568,0xffffffff);
      local_1520 = 1;
      local_151c = 1;
      local_688 = 0x4220000000000000;
      plStack_680 = (longlong *)0x0;
      local_678 = 1;
      local_670 = 0;
      uStack_668 = 0;
      local_1538 = CONCAT71(local_1538._1_7_,1);
      local_1548 = 0x4220000000000000;
      uStack_1540 = 0;
      FUN_144a450dc(aplStack_1530,&local_670);
      FUN_1449db362(&local_670);
      local_688 = *(undefined8 *)(lVar11 + 0x30 + lVar15);
      plVar12 = *(longlong **)(lVar11 + 0x38 + lVar15);
      if (plVar12 == (longlong *)0x0) {
        plStack_680 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        plStack_680 = plVar12;
      }
      FUN_145aaf878(&uStack_1560,&local_688);
      plVar6 = plStack_680;
      if (plStack_680 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_680 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_680)(plStack_680);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar4 = (int *)((longlong)plVar12 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      FUN_140767802(&local_1568);
      lVar15 = lVar15 + 0x40;
    } while ((longlong)iVar5 * 0x40 != lVar15);
  }
  FUN_145ffbb24(local_20c8);
  local_2110 = 0;
  local_2128 = 0;
  uStack_2120 = 0;
  local_2119 = 0;
  uStack_2118 = 0;
  uStack_2114 = 0;
  uStack_2113 = 0;
  local_2108 = 0;
  uStack_2104 = 0;
  uStack_2100 = 0;
  uStack_20fc = 0x3f800000;
  local_20f8 = 0;
  plStack_20f0 = (longlong *)0x0;
  local_20e8 = 0;
  local_20e0 = 0x41c00000;
  local_20d8 = 0;
  local_20d4 = 2;
  local_20d2 = 0;
  local_20d0 = 0x3f800000;
  cVar10 = FUN_14493c216(local_20c8,0);
  lVar11 = local_2128;
  if (((cVar10 == '\0') && (lVar11 = FUN_14479d2ce(local_20c8), lVar11 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  local_2128 = lVar11;
  local_20e0 = CONCAT44(local_20e0._4_4_,0x43000000);
  FUN_1446ddc76(&local_1568,&DAT_149eea5a7,1);
  local_20e8 = local_1568;
  uStack_2118 = 3;
  uStack_2114 = 1;
  local_2108 = 0x3a6ed02d;
  uStack_2104 = 0x3ba9cdc4;
  uStack_2100 = 0x3c1f44d4;
  uStack_20fc = 0x3f19999a;
  FUN_140a581a0(&local_1568);
  FUN_1412cc59c(&uStack_1560,&local_2128);
  local_1500 = 0x3f31a1983f469c45;
  uStack_14f8 = 0x3f8000003f1e0147;
  local_14f0 = 0;
  local_14ec = 0xc0a00000;
  uStack_14e8 = 0x41200000;
  uStack_14e4 = 0x3ba9cdc4;
  uStack_14e0 = 0x3d11d25b;
  local_14dc = 0x3ee147ae3da02081;
  FUN_140e9ea3a(&local_358,&local_1568);
  FUN_140e9e952(&local_1568);
  FUN_140a562d0(&local_688);
  local_4d0 = 0;
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_2170,"WhiteBrush",1);
  local_2168 = (**(code **)(*plVar12 + 0x50))(plVar12,local_2170,0,0);
  local_2160 = 1;
  local_2158 = 0;
  uStack_2150 = 0;
  local_458 = 1;
  local_460 = local_2168;
  FUN_144a450dc(auStack_450,&local_2158);
  FUN_1449db362(&local_2158);
  local_2198 = 0x3a6e8d11;
  uStack_2194 = 0x3ba9bcfd;
  uStack_2190 = 0x3c1f40a3;
  uStack_218c = 0x3f800000;
  local_2188 = local_2188 & 0xffffff00;
  local_2184 = 1;
  local_2180 = 0;
  uStack_2178 = 0;
  local_3c8 = 0x3a6e8d11;
  uStack_3c4 = 0x3ba9bcfd;
  uStack_3c0 = 0x3c1f40a3;
  uStack_3bc = 0x3f800000;
  local_3b8 = local_2188;
  local_3b4 = 1;
  FUN_144a450dc(local_3b0,&local_2180);
  FUN_1449db362(&local_2180);
  local_1568 = 0x41a00000;
  uStack_1560 = 0x41a00000;
  local_1558 = CONCAT71(local_1558._1_7_,1);
  uStack_1550 = 0;
  local_1548 = 0;
  local_4b8 = 1;
  local_4c8 = 0x41a00000;
  uStack_4c4 = 0;
  uStack_4c0 = 0x41a00000;
  uStack_4bc = 0;
  FUN_144a450dc(local_4b0,&uStack_1550);
  FUN_1449db362(&uStack_1550);
  FUN_145ff9e3e(local_8a8);
  local_6f0 = 0x200000000;
  local_21c0 = 2;
  local_21bc = 1;
  local_21b8 = 0;
  uStack_21b0 = 0;
  local_6d0 = 2;
  local_6cc = 1;
  FUN_144a450dc(local_6c8,&local_21b8);
  FUN_1449db362(&local_21b8);
  local_21d8 = 0;
  local_21d4 = 1;
  local_21d0 = 0;
  uStack_21c8 = 0;
  local_6e8 = 0;
  local_6e4 = 1;
  FUN_144a450dc(local_6e0,&local_21d0);
  FUN_1449db362(&local_21d0);
  FUN_140a504fe(local_a60);
  FUN_140a4fdf2(local_1ef0,0);
  local_1eb0 = 2;
  local_1eac = 1;
  local_1ea8 = 0;
  local_1ea4 = 1;
  FUN_140a504fe(local_c18);
  FUN_140a4fdf2(local_1f48,0);
  FUN_140a53a96(local_ec0);
  local_d18 = &DAT_200000002;
  local_2240 = 0x45700000;
  local_223c = 1;
  local_2238 = 0;
  uStack_2230 = 0;
  local_ca8 = 0x45700000;
  local_ca4 = 1;
  FUN_144a450dc(local_ca0,&local_2238);
  FUN_1449db362(&local_2238);
  local_2258 = 0x45070000;
  local_2254 = 1;
  local_2250 = 0;
  uStack_2248 = 0;
  local_c90 = 0x45070000;
  local_c8c = 1;
  FUN_144a450dc(auStack_c88,&local_2250);
  FUN_1449db362(&local_2250);
  local_2270 = CONCAT11(1,DAT_14c96b23b);
  local_2268 = 0;
  uStack_2260 = 0;
  local_e50 = local_2270;
  FUN_144a450dc(local_e48,&local_2268);
  FUN_1449db362(&local_2268);
  FUN_140a53334(local_10f8);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  local_22a0 = (**(code **)(*plVar12 + 0x78))(plVar12);
  local_2298 = 1;
  local_2290 = 0;
  uStack_2288 = 0;
  local_f48 = 1;
  local_f50 = local_22a0;
  FUN_144a450dc(local_f40,&local_2290);
  FUN_1449db362(&local_2290);
  local_2578 = &local_22b9;
  FUN_140a554b8(&local_22b8,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",99);
  plVar12 = local_2560;
  lVar11 = local_2570;
  if (local_22b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_22b0 + 1) = (int)local_22b0[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(local_2570 + 0x3a8);
  *(undefined8 *)(local_2570 + 0x3a0) = local_22b8;
  *(longlong **)(local_2570 + 0x3a8) = local_22b0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar4 = (int *)((longlong)plVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_140a52c70(&local_22b8,&local_2280,local_10f8);
  plVar7 = local_ce0;
  plVar6 = local_2278;
  if (local_2278 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2278 + 1) = (int)local_2278[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2278 + 1) = (int)local_2278[1] + 1;
    UNLOCK();
  }
  local_ce8 = local_2280;
  local_ce0 = local_2278;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_2578 = &local_22d9;
  FUN_140a53d66(&local_22d8,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x5c);
  if (local_22d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_22d0 + 1) = (int)local_22d0[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar11 + 0x2a0);
  *(undefined8 *)(lVar11 + 0x298) = local_22d8;
  *(longlong **)(lVar11 + 0x2a0) = local_22d0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a50bf4(&local_22d8,&local_2228,local_ec0);
  local_2218 = local_2228;
  local_2210 = local_2220;
  if (local_2220 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2220 + 1) = (int)local_2220[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_1f48,&local_2218);
  uVar13 = FUN_140a5058c(local_c18,uVar13);
  FUN_140a4fdf2(local_1fa0,0);
  local_1f60 = 1;
  local_1f5c = 1;
  local_1f58 = 2;
  local_1f54 = 1;
  local_1568 = 0x42c8000042c00000;
  uStack_1560 = 0;
  local_1558._0_1_ = 1;
  uStack_1550 = 0;
  local_1548 = 0;
  local_1f78 = 1;
  local_1f88 = 0x42c00000;
  uStack_1f84 = 0x42c80000;
  uStack_1f80 = 0;
  uStack_1f7c = 0;
  FUN_144a450dc(local_1f70,&uStack_1550);
  FUN_1449db362(&uStack_1550);
  if (plVar12 == (longlong *)0x0) {
    local_22e8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    local_22e8 = plVar12;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_22f0 = local_2568;
  uVar14 = FUN_140a4fd40(local_1fa0,&local_22f0);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  FUN_140a4fdf2(local_1ff8,0);
  local_1fb8 = 1;
  local_1fb4 = 1;
  local_1fb0 = 2;
  local_1fac = 1;
  local_1568 = 0x43d7000042c00000;
  uStack_1560 = 0;
  local_1558 = CONCAT71(local_1558._1_7_,1);
  uStack_1550 = 0;
  local_1548 = 0;
  local_1fd0 = 1;
  local_1fe0 = 0x42c00000;
  uStack_1fdc = 0x43d70000;
  uStack_1fd8 = 0;
  uStack_1fd4 = 0;
  FUN_144a450dc(local_1fc8,&uStack_1550);
  FUN_1449db362(&uStack_1550);
  FUN_140a570d8(&local_1568);
  FUN_1400b22c2(local_2358,"LOADING....");
  FUN_140233b1a(local_2348,local_2358);
  FUN_14023423e(local_2338,local_2348);
  local_2328 = 1;
  local_2320 = 0;
  uStack_2318 = 0;
  lVar15 = FUN_140a54906(&local_1568,local_2338);
  *(undefined8 **)(lVar15 + 0x1d0) = &local_358;
  local_2578 = &local_2371;
  FUN_140a54526(&local_2370,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x75);
  if (local_2368 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2368 + 1) = (int)local_2368[1] + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(lVar11 + 0x2d0);
  *(undefined8 *)(lVar11 + 0x2c8) = local_2370;
  *(longlong **)(lVar11 + 0x2d0) = local_2368;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140a52852(&local_2370,&local_2310,lVar15);
  local_2300 = local_2310;
  local_22f8 = local_2308;
  if (local_2308 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2308 + 1) = (int)local_2308[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_1ff8,&local_2300);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  FUN_140a4fdf2(local_2050,0);
  local_2010 = 3;
  local_200c = 1;
  local_2008 = 3;
  local_2004 = 1;
  local_1810 = 0;
  uStack_1808 = 0x41a0000042a00000;
  local_1800 = 1;
  local_17f8 = 0;
  uStack_17f0 = 0;
  local_2028 = 1;
  local_2038 = 0;
  uStack_2034 = 0;
  uStack_2030 = 0x42a00000;
  uStack_202c = 0x41a00000;
  FUN_144a450dc(local_2020,&local_17f8);
  FUN_1449db362(&local_17f8);
  FUN_140a53a96(&local_1810);
  local_23b0 = CONCAT11(1,DAT_14c96b23b);
  local_23a8 = 0;
  uStack_23a0 = 0;
  local_17a0 = local_23b0;
  FUN_144a450dc(local_1798,&local_23a8);
  FUN_1449db362(&local_23a8);
  local_23c8 = 0x43c80000;
  local_23c4 = 1;
  local_23c0 = 0;
  uStack_23b8 = 0;
  local_1628 = 0x43c80000;
  local_1624 = 1;
  FUN_144a450dc(local_1620,&local_23c0);
  FUN_1449db362(&local_23c0);
  local_23e0 = 0x43c80000;
  local_23dc = 1;
  local_23d8 = 0;
  uStack_23d0 = 0;
  local_1610 = 0x43c80000;
  local_160c = 1;
  FUN_144a450dc(local_1608,&local_23d8);
  FUN_1449db362(&local_23d8);
  FUN_140a53334(local_1a48);
  plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = DAT_14c96b350;
  }
  local_2410 = (**(code **)(*plVar12 + 0x78))(plVar12);
  local_2408 = 1;
  local_2400 = 0;
  uStack_23f8 = 0;
  local_1898 = 1;
  local_18a0 = local_2410;
  FUN_144a450dc(local_1890,&local_2400);
  FUN_1449db362(&local_2400);
  local_2578 = &local_2429;
  FUN_140a554b8(&local_2428,"SImage",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x84);
  lVar11 = local_2570;
  if (local_2420 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2420 + 1) = (int)local_2420[1] + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(local_2570 + 0x478);
  *(undefined8 *)(local_2570 + 0x470) = local_2428;
  *(longlong **)(local_2570 + 0x478) = local_2420;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140a52c70(&local_2428,&local_23f0,local_1a48);
  plVar7 = local_1630;
  plVar12 = local_23e8;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_23e8 + 1) = (int)local_23e8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_23e8 + 1) = (int)local_23e8[1] + 1;
    UNLOCK();
  }
  local_1638 = local_23f0;
  local_1630 = local_23e8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_2578 = &local_2449;
  FUN_140a53d66(&local_2448,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x7f);
  if (local_2440 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2440 + 1) = (int)local_2440[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar11 + 0x2b0);
  *(undefined8 *)(lVar11 + 0x2a8) = local_2448;
  *(longlong **)(lVar11 + 0x2b0) = local_2440;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a50bf4(&local_2448,&local_2398,&local_1810);
  local_2388 = local_2398;
  local_2380 = local_2390;
  if (local_2390 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2390 + 1) = (int)local_2390[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_2050,&local_2388);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  local_2578 = &local_2469;
  FUN_140a536a8(local_2468,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x59);
  FUN_140a4ff16(local_2468,&local_2208,uVar13);
  local_21f8 = local_2208;
  local_21f0 = local_2200;
  if (local_2200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2200 + 1) = (int)local_2200[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fd40(local_1ef0,&local_21f8);
  uVar13 = FUN_140a5058c(local_a60,uVar13);
  FUN_140a4fdf2(local_20a8,0);
  local_2068 = 2;
  local_2064 = 1;
  local_2060 = 1;
  local_205c = 1;
  local_1cf0 = 0x44d4800000000000;
  uStack_1ce8 = 0;
  local_1ce0 = 1;
  local_1cd8 = 0;
  uStack_1cd0 = 0;
  local_2080 = 1;
  local_2090 = 0;
  uStack_208c = 0x44d48000;
  uStack_2088 = 0;
  uStack_2084 = 0;
  FUN_144a450dc(local_2078,&local_1cd8);
  FUN_1449db362(&local_1cd8);
  FUN_140a53a96(&local_1cf0);
  local_1b48 = &DAT_200000002;
  local_24a8 = 0x43c80000;
  local_24a4 = 1;
  local_24a0 = 0;
  uStack_2498 = 0;
  local_1af0 = 0x43c80000;
  local_1aec = 1;
  FUN_144a450dc(local_1ae8,&local_24a0);
  FUN_1449db362(&local_24a0);
  thunk_FUN_140a5071c(local_1e98);
  FUN_145ff9ede(&local_24d0,&local_24d1);
  plVar7 = local_2560;
  if (local_24c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_24c8 + 1) = (int)local_24c8[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(lVar11 + 0x2e0);
  *(undefined8 *)(lVar11 + 0x2d8) = local_24d0;
  *(longlong **)(lVar11 + 0x2e0) = local_24c8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_145ff9482(&local_24d0,&local_24b8,local_1e98);
  plVar3 = local_1b10;
  plVar8 = local_24b0;
  if (local_24b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_24b0 + 1) = (int)local_24b0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_24b0 + 1) = (int)local_24b0[1] + 1;
    UNLOCK();
  }
  local_1b18 = local_24b8;
  local_1b10 = local_24b0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_2578 = &local_24f1;
  FUN_140a53d66(local_24f0,&DAT_149efe19f,
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x8f);
  FUN_140a50bf4(local_24f0,&local_2490,&local_1cf0);
  local_2480 = local_2490;
  local_2478 = local_2488;
  if (local_2488 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2488 + 1) = (int)local_2488[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_20a8,&local_2480);
  uVar13 = FUN_140a5058c(uVar13,uVar14);
  local_2578 = &local_2511;
  FUN_140a536a8(local_2510,"SOverlay",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x54);
  FUN_140a4ff16(local_2510,&local_21e8,uVar13);
  plVar1 = local_6f8;
  plVar3 = local_21e0;
  if (local_21e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_21e0 + 1) = (int)local_21e0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_21e0 + 1) = (int)local_21e0[1] + 1;
    UNLOCK();
  }
  local_700 = local_21e8;
  local_6f8 = local_21e0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar4 = (int *)((longlong)plVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_2578 = &local_2531;
  FUN_145ffa146(local_2530,"SScaleBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x4e);
  FUN_145ff9564(local_2530,&local_21a8,local_8a8);
  plVar9 = local_4d8;
  plVar1 = local_21a0;
  if (local_21a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_21a0 + 1) = (int)local_21a0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_21a0 + 1) = (int)local_21a0[1] + 1;
    UNLOCK();
  }
  local_4e0 = local_21a8;
  local_4d8 = local_21a0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar4 = (int *)((longlong)plVar9 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  local_2578 = &local_2551;
  FUN_140a55c32(&local_2550,"SBorder",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x47);
  if (local_2548 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2548 + 1) = (int)local_2548[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(lVar11 + 0x2c0);
  *(undefined8 *)(lVar11 + 0x2b8) = local_2550;
  *(longlong **)(lVar11 + 0x2c0) = local_2548;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar4 = (int *)((longlong)plVar9 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a530e4(&local_2550,&local_2148,&local_688);
  local_2138 = local_2148;
  local_2130 = local_2140;
  if (local_2140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2140 + 1) = (int)local_2140[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(lVar11 + 0x1e0,&local_2138);
  plVar9 = local_2130;
  if (local_2130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2130)(local_2130);
      LOCK();
      piVar4 = (int *)((longlong)plVar9 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_2140 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2140 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2140)(local_2140);
      LOCK();
      piVar4 = (int *)((longlong)local_2140 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2140 + 0x10))(local_2140);
      }
    }
  }
  if (local_2548 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2548 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2548)(local_2548);
      LOCK();
      piVar4 = (int *)((longlong)local_2548 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2548 + 0x10))(local_2548);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar4 = (int *)((longlong)plVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_21a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_21a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_21a0)(local_21a0);
      LOCK();
      piVar4 = (int *)((longlong)local_21a0 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_21a0 + 0x10))(local_21a0);
      }
    }
  }
  if (local_2528 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2528 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2528)(local_2528);
      LOCK();
      piVar4 = (int *)((longlong)local_2528 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2528 + 0x10))(local_2528);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_21e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_21e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_21e0)(local_21e0);
      LOCK();
      piVar4 = (int *)((longlong)local_21e0 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_21e0 + 0x10))(local_21e0);
      }
    }
  }
  if (local_2508 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2508 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2508)(local_2508);
      LOCK();
      piVar4 = (int *)((longlong)local_2508 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2508 + 0x10))(local_2508);
      }
    }
  }
  plVar3 = local_2478;
  if (local_2478 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2478 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2478)(local_2478);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_2488 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2488 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2488)(local_2488);
      LOCK();
      piVar4 = (int *)((longlong)local_2488 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2488 + 0x10))(local_2488);
      }
    }
  }
  if (local_24e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_24e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_24e8)(local_24e8);
      LOCK();
      piVar4 = (int *)((longlong)local_24e8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_24e8 + 0x10))(local_24e8);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_24b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_24b0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_24b0)(local_24b0);
      LOCK();
      piVar4 = (int *)((longlong)local_24b0 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_24b0 + 0x10))(local_24b0);
      }
    }
  }
  if (local_24c8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_24c8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_24c8)(local_24c8);
      LOCK();
      piVar4 = (int *)((longlong)local_24c8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_24c8 + 0x10))(local_24c8);
      }
    }
  }
  FUN_140a4ff8c(local_1e98);
  FUN_140a5660c(&local_1cf0);
  FUN_1415b5e50(local_20a8);
  plVar8 = local_21f0;
  if (local_21f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_21f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_21f0)(local_21f0);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2200 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2200 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2200)(local_2200);
      LOCK();
      piVar4 = (int *)((longlong)local_2200 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2200 + 0x10))(local_2200);
      }
    }
  }
  if (local_2460 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2460 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2460)(local_2460);
      LOCK();
      piVar4 = (int *)((longlong)local_2460 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2460 + 0x10))(local_2460);
      }
    }
  }
  plVar8 = local_2380;
  if (local_2380 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2380 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2380)(local_2380);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_2390 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2390 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2390)(local_2390);
      LOCK();
      piVar4 = (int *)((longlong)local_2390 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2390 + 0x10))(local_2390);
      }
    }
  }
  if (local_2440 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2440 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2440)(local_2440);
      LOCK();
      piVar4 = (int *)((longlong)local_2440 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2440 + 0x10))(local_2440);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_23e8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar4 = (int *)((longlong)local_23e8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_23e8 + 0x10))(local_23e8);
      }
    }
  }
  if (local_2420 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2420 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2420)(local_2420);
      LOCK();
      piVar4 = (int *)((longlong)local_2420 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2420 + 0x10))(local_2420);
      }
    }
  }
  FUN_140a55a86(local_1a48);
  FUN_140a5660c(&local_1810);
  FUN_1415b5e50(local_2050);
  plVar12 = local_22f8;
  if (local_22f8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_22f8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_22f8)(local_22f8);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2308 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2308 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2308)(local_2308);
      LOCK();
      piVar4 = (int *)((longlong)local_2308 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2308 + 0x10))(local_2308);
      }
    }
  }
  if (local_2368 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2368 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2368)(local_2368);
      LOCK();
      piVar4 = (int *)((longlong)local_2368 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2368 + 0x10))(local_2368);
      }
    }
  }
  if (local_2348[0] != (longlong *)0x0) {
    (**(code **)(*local_2348[0] + 0x10))();
  }
  if (local_2358[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140a59ae6(&local_1568);
  FUN_1415b5e50(local_1ff8);
  plVar12 = local_22e8;
  if (local_22e8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_22e8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_22e8)(local_22e8);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1415b5e50(local_1fa0);
  plVar12 = local_2210;
  if (local_2210 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2210 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2210)(local_2210);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2220 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2220 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2220)(local_2220);
      LOCK();
      piVar4 = (int *)((longlong)local_2220 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2220 + 0x10))(local_2220);
      }
    }
  }
  if (local_22d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_22d0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_22d0)(local_22d0);
      LOCK();
      piVar4 = (int *)((longlong)local_22d0 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_22d0 + 0x10))(local_22d0);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar6 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar4 = (int *)((longlong)plVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_2278 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2278 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2278)(local_2278);
      LOCK();
      piVar4 = (int *)((longlong)local_2278 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_2278 + 0x10))(local_2278);
      }
    }
  }
  if (local_22b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_22b0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_22b0)(local_22b0);
      LOCK();
      piVar4 = (int *)((longlong)local_22b0 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_22b0 + 0x10))(local_22b0);
      }
    }
  }
  FUN_140a55a86(local_10f8);
  FUN_140a5660c(local_ec0);
  FUN_1415b5e50(local_1f48);
  FUN_1415b5e16(local_c18);
  FUN_1415b5e50(local_1ef0);
  FUN_1415b5e16(local_a60);
  FUN_145ff94f2(local_8a8);
  FUN_140a59028(&local_688);
  FUN_140e9e952(&local_358);
  plVar12 = plStack_20f0;
  if (plStack_20f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_20f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_20f0)(plStack_20f0);
      LOCK();
      piVar4 = (int *)((longlong)plVar12 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff902e thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 145ff9034 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 145ff903a FUN_145ff903a body=63 status=ok
// SIG undefined FUN_145ff903a(void)

void FUN_145ff903a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  FUN_1414d03ec(param_1);
  return;
}



// FUNCTION 145ff907a FUN_145ff907a body=119 status=ok
// SIG undefined FUN_145ff907a(void)

longlong * FUN_145ff907a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ffa43e(*param_1,0x3f800000);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ff90f2 FUN_145ff90f2 body=191 status=ok
// SIG undefined FUN_145ff90f2(void)

undefined8 * FUN_145ff90f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145ff91b2 FUN_145ff91b2 body=372 status=ok
// SIG undefined FUN_145ff91b2(void)

undefined8 * FUN_145ff91b2(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x420);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b9c5650;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x410);
  FUN_145ff9328(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145ff9380(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ff9251;
    param_1[1] = 0;
LAB_145ff92c0:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145ff9251;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145ff9251;
      goto LAB_145ff92c0;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ff9251;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145ff9251:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x410;
  FUN_140a52e78(*param_1,"SOakVoice",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x24);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff9328 FUN_145ff9328 body=87 status=ok
// SIG undefined FUN_145ff9328(void)

undefined8 * FUN_145ff9328(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b9c5670;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  FUN_140ca8f8e(param_1 + 0x56);
  FUN_140ca8f8e(param_1 + 0x6c);
  return param_1;
}



// FUNCTION 145ff9380 FUN_145ff9380 body=162 status=ok
// SIG undefined FUN_145ff9380(void)

void FUN_145ff9380(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ff93bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ff93bf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ff93bf:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ff941e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ff9422 FUN_145ff9422 body=95 status=ok
// SIG undefined FUN_145ff9422(void)

void FUN_145ff9422(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 145ff9482 FUN_145ff9482 body=111 status=ok
// SIG undefined FUN_145ff9482(void)

longlong * FUN_145ff9482(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ffbef0(*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ff94f2 FUN_145ff94f2 body=114 status=ok
// SIG undefined FUN_145ff94f2(void)

void FUN_145ff94f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c8);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145ff9564 FUN_145ff9564 body=117 status=ok
// SIG undefined FUN_145ff9564(void)

longlong * FUN_145ff9564(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ff95da(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ff95da FUN_145ff95da body=320 status=ok
// SIG undefined FUN_145ff95da(void)

void FUN_145ff95da(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  uint local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 0x80;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  FUN_145ff971c(param_1 + 0x26c,param_1,param_2 + 0x1d8);
  FUN_145ff9810(param_1 + 0x268,param_1,param_2 + 0x1c0);
  local_30[0] = 0x3f800000;
  FUN_145ff99c2(param_1 + 0x270,param_1,param_2 + 0x1f0,local_30);
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_145ff9906(param_1 + 0x274,param_1,param_2 + 0x208,local_30);
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x1bc);
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1a8);
  FUN_145ff9aea(param_1);
  local_40 = FUN_145b0645e;
  local_38 = 0;
  FUN_145ff9d04(local_30,param_1);
  FUN_1448b6402(&DAT_14c8672b0,&local_40,local_30);
  FUN_1449db362(local_30);
  *(code **)(param_1 + 0x280) = local_40;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ff971c FUN_145ff971c body=173 status=ok
// SIG undefined FUN_145ff971c(void)

void FUN_145ff971c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac1fe4(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar1 != '\0') {
        if (param_3[4] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_3 + 2);
        }
        uVar2 = (**(code **)(*plVar3 + 0x58))();
        *param_3 = uVar2;
      }
    }
    FUN_145ff97ca(param_1,param_2,param_3);
    return;
  }
  FUN_1400b73c8(param_2,param_1);
  return;
}



// FUNCTION 145ff97ca FUN_145ff97ca body=69 status=ok
// SIG undefined FUN_145ff97ca(void)

bool FUN_145ff97ca(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_1400b73c8(param_2,param_1);
  iVar1 = *param_1;
  iVar2 = *param_3;
  if (iVar1 != iVar2) {
    *param_1 = iVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return iVar1 != iVar2;
}



// FUNCTION 145ff9810 FUN_145ff9810 body=173 status=ok
// SIG undefined FUN_145ff9810(void)

void FUN_145ff9810(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac2272(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar1 != '\0') {
        if (param_3[4] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_3 + 2);
        }
        uVar2 = (**(code **)(*plVar3 + 0x58))();
        *param_3 = uVar2;
      }
    }
    FUN_145ff98be(param_1,param_2,param_3);
    return;
  }
  FUN_1400b73c8(param_2,param_1);
  return;
}



// FUNCTION 145ff98be FUN_145ff98be body=71 status=ok
// SIG undefined FUN_145ff98be(void)

bool FUN_145ff98be(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_1400b73c8(param_2,param_1);
  iVar1 = *param_1;
  iVar2 = *param_3;
  if (iVar1 != iVar2) {
    *param_1 = iVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return iVar1 != iVar2;
}



// FUNCTION 145ff9906 FUN_145ff9906 body=187 status=ok
// SIG undefined FUN_145ff9906(void)

void FUN_145ff9906(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146a767f4(param_1,param_2,param_3 + 8);
      return;
    }
  }
  if (param_3[1] == '\x01') {
    if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_3 + 0x10) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_3 + 8);
        }
        uVar2 = (**(code **)(*plVar3 + 0x58))();
        *param_3 = uVar2;
      }
    }
    FUN_140a5ae36(param_1,param_2,param_3);
    return;
  }
  FUN_146aa7d96(param_1,param_2,param_4);
  return;
}



// FUNCTION 145ff99c2 FUN_145ff99c2 body=189 status=ok
// SIG undefined FUN_145ff99c2(void)

void FUN_145ff99c2(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146aa7dde(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
      if (cVar1 != '\0') {
        if (param_3[4] == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_3 + 2);
        }
        uVar3 = (**(code **)(*plVar2 + 0x58))();
        *param_3 = uVar3;
      }
    }
    FUN_145ff9a80(param_1,param_2,param_3);
    return;
  }
  FUN_146a769fe(param_1,param_2,param_4);
  return;
}



// FUNCTION 145ff9a80 FUN_145ff9a80 body=105 status=ok
// SIG undefined FUN_145ff9a80(void)

byte FUN_145ff9a80(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_1400b73c8(param_2,param_1);
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *param_1 = fVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return -(fVar1 != fVar2) & 1;
}



// FUNCTION 145ff9aea FUN_145ff9aea body=537 status=ok
// SIG undefined FUN_145ff9aea(void)

void FUN_145ff9aea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  int local_90;
  int iStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_78._4_4_ = 0.0;
  uStack_70._4_4_ = 0.0;
  local_78._0_4_ = 0.0;
  uStack_70._0_4_ = 0.0;
  fVar11 = 1.0;
  fVar12 = 1.0;
  if (*(int *)(param_1 + 0x26c) != 6) goto LAB_145ff9b46;
  FUN_1469aa384(DAT_14c98e618,&local_88);
  if (local_88 == 0) {
    fVar11 = 1.0;
    fVar12 = 1.0;
  }
  else {
    plVar2 = *(longlong **)(local_88 + 0x270);
    fVar11 = 1.0;
    fVar12 = 1.0;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = *(longlong **)(local_88 + 0x268);
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar2[1];
      do {
        plVar6 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar6 = plVar2;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (plVar3 == (longlong *)0x0 || plVar6 == (longlong *)0x0) {
        fVar11 = 1.0;
        fVar12 = fVar11;
        if (plVar6 == (longlong *)0x0) goto LAB_145ff9c2d;
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_90);
        local_94 = (float)iStack_8c;
        local_98 = (float)local_90;
        FUN_145787b40(DAT_14c98e618,&local_78);
        fVar11 = (float)local_90;
        fVar12 = (float)iStack_8c;
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
LAB_145ff9c2d:
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_145ff9b46:
  fVar8 = local_78._4_4_;
  if (local_78._4_4_ <= uStack_70._4_4_) {
    fVar8 = uStack_70._4_4_;
  }
  fVar9 = (float)local_78;
  if ((float)local_78 <= (float)uStack_70) {
    fVar9 = (float)uStack_70;
  }
  fVar10 = fVar9 / fVar11;
  if (fVar9 / fVar11 <= fVar8 / fVar12) {
    fVar10 = fVar8 / fVar12;
  }
  *(float *)(param_1 + 0x278) = 1.0 - fVar10;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ff9d04 FUN_145ff9d04 body=314 status=ok
// SIG undefined FUN_145ff9d04(void)

longlong * FUN_145ff9d04(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ff9dc1:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f193f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_145ff9dc1;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f193f0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145ff9e3e FUN_145ff9e3e body=160 status=ok
// SIG undefined FUN_145ff9e3e(void)

longlong FUN_145ff9e3e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 **)(param_1 + 0x1b8) = &DAT_200000002;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0x100;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  return param_1;
}



// FUNCTION 145ff9ede FUN_145ff9ede body=314 status=ok
// SIG undefined FUN_145ff9ede(void)

longlong * FUN_145ff9ede(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_145ffa019();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145ffa0a4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ff9f43;
    param_1[1] = 0;
LAB_145ff9fb2:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145ff9f43;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145ff9f43;
      goto LAB_145ff9fb2;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ff9f43;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145ff9f43:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2b0;
  FUN_140a52e78(*param_1,"SOakTooltipText",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakLoadingScreen.cpp",0x94);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffa019 FUN_145ffa019 body=138 status=ok
// SIG undefined FUN_145ffa019(void)

undefined8 * FUN_145ffa019(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2c0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9c5ae0;
  memset(puVar1 + 2,0,0x2b0);
  FUN_140a55f88(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b9c5b00;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  *(undefined4 *)(puVar1 + 0x57) = 0;
  return puVar1;
}



// FUNCTION 145ffa0a4 FUN_145ffa0a4 body=162 status=ok
// SIG undefined FUN_145ffa0a4(void)

void FUN_145ffa0a4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ffa0e3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ffa0e3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ffa0e3:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ffa142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ffa146 FUN_145ffa146 body=401 status=ok
// SIG undefined FUN_145ffa146(void)

longlong *
FUN_145ffa146(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x330,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a356550;
  plVar1 = plVar4 + 2;
  FUN_145ffa37a(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145ffa2d8(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ffa1fc;
    param_1[1] = 0;
LAB_145ffa269:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ffa1fc;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145ffa1fc;
      goto LAB_145ffa269;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ffa1fc;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145ffa1fc:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 800;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffa2d8 FUN_145ffa2d8 body=162 status=ok
// SIG undefined FUN_145ffa2d8(void)

void FUN_145ffa2d8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ffa317;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ffa317;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ffa317:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ffa376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ffa37a FUN_145ffa37a body=195 status=ok
// SIG undefined FUN_145ffa37a(void)

undefined8 * FUN_145ffa37a(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f157f0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  FUN_140a5808e(param_1 + 0x4d,param_1);
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  FUN_140a5808e((longlong)param_1 + 0x26c,param_1);
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  FUN_140a5808e(param_1 + 0x4e,param_1);
  *(undefined1 *)((longlong)param_1 + 0x274) = 0;
  FUN_140a5808e((longlong)param_1 + 0x274,param_1);
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 145ffa43e FUN_145ffa43e body=5861 status=ok
// SIG undefined FUN_145ffa43e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145ffa43e(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_2208 [32];
  undefined1 *local_21e8;
  undefined8 local_21d8;
  undefined1 local_21c9;
  undefined1 local_21c8 [8];
  longlong *local_21c0;
  undefined1 local_21a9;
  undefined1 local_21a8 [8];
  longlong *local_21a0;
  undefined1 local_2189;
  undefined1 local_2188 [8];
  longlong *local_2180;
  undefined1 local_2169;
  undefined8 local_2168;
  longlong *local_2160;
  undefined4 local_2150;
  undefined1 local_214c;
  undefined8 local_2148;
  undefined8 uStack_2140;
  undefined8 local_2138;
  undefined8 uStack_2130;
  uint local_2128;
  undefined1 local_2124;
  undefined8 local_2120;
  undefined8 uStack_2118;
  undefined4 local_2110;
  undefined1 local_210c;
  undefined8 local_2108;
  undefined8 uStack_2100;
  undefined1 local_20f8 [96];
  undefined1 local_2098;
  undefined8 local_2090;
  undefined8 uStack_2088;
  undefined8 local_2080;
  longlong *local_2078;
  undefined8 local_2070;
  longlong *local_2068;
  undefined1 local_2059;
  undefined8 local_2058;
  longlong *local_2050;
  undefined8 local_2040;
  undefined1 local_2038;
  undefined8 local_2030;
  undefined8 uStack_2028;
  undefined8 local_2020;
  longlong *local_2018;
  undefined8 local_2010;
  longlong *local_2008;
  float local_2000;
  undefined1 local_1ffc;
  undefined8 local_1ff8;
  undefined8 uStack_1ff0;
  undefined1 local_1fe1;
  undefined1 local_1fe0 [8];
  longlong *local_1fd8;
  undefined1 local_1fc1;
  undefined1 local_1fc0 [8];
  longlong *local_1fb8;
  undefined8 local_1fa8;
  undefined8 uStack_1fa0;
  undefined1 local_1f98;
  undefined8 local_1f90;
  undefined8 uStack_1f88;
  undefined8 local_1f78;
  undefined8 uStack_1f70;
  uint local_1f68;
  undefined1 local_1f64;
  undefined8 local_1f60;
  undefined8 uStack_1f58;
  undefined8 local_1f48;
  undefined8 uStack_1f40;
  uint local_1f38;
  undefined1 local_1f34;
  undefined8 local_1f30;
  undefined8 uStack_1f28;
  undefined8 local_1f20;
  undefined8 local_1f18;
  undefined1 local_1f10;
  undefined8 local_1f08;
  undefined8 uStack_1f00;
  undefined8 local_1ef8;
  longlong *local_1ef0;
  undefined4 local_1ee8;
  undefined1 local_1ee4;
  undefined8 local_1ee0;
  undefined8 uStack_1ed8;
  undefined8 local_1ed0;
  longlong *local_1ec8;
  undefined8 local_1ec0;
  longlong *local_1eb8;
  undefined1 local_1ea9;
  undefined8 local_1ea8;
  longlong *local_1ea0;
  undefined8 local_1e90;
  undefined1 local_1e88;
  undefined8 local_1e80;
  undefined8 uStack_1e78;
  undefined8 local_1e70;
  longlong *local_1e68;
  undefined8 local_1e60;
  longlong *local_1e58;
  float local_1e50;
  undefined1 local_1e4c;
  undefined8 local_1e48;
  undefined8 uStack_1e40;
  undefined8 local_1e38;
  longlong *local_1e30;
  float local_1e28;
  undefined1 local_1e24;
  undefined8 local_1e20;
  undefined8 uStack_1e18;
  float local_1e10;
  undefined1 local_1e0c;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 local_1df8;
  longlong *local_1df0;
  undefined8 local_1de8;
  longlong *local_1de0;
  undefined1 local_1dd1;
  undefined1 local_1dd0 [8];
  longlong *local_1dc8;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined1 local_1da8;
  undefined8 local_1da0;
  undefined8 uStack_1d98;
  undefined8 local_1d88;
  undefined8 uStack_1d80;
  uint local_1d78;
  undefined1 local_1d74;
  undefined8 local_1d70;
  undefined8 uStack_1d68;
  undefined8 local_1d58;
  undefined8 uStack_1d50;
  uint local_1d48;
  undefined1 local_1d44;
  undefined8 local_1d40;
  undefined8 uStack_1d38;
  undefined8 local_1d28;
  undefined8 local_1d20;
  undefined1 local_1d18;
  undefined8 local_1d10;
  undefined8 uStack_1d08;
  undefined8 local_1d00;
  undefined8 uStack_1cf8;
  undefined1 local_1cf0;
  undefined8 local_1ce8;
  undefined8 uStack_1ce0;
  undefined8 local_1cd8;
  longlong *local_1cd0;
  undefined8 local_1cc8;
  longlong *plStack_1cc0;
  undefined8 local_1cb8;
  longlong *local_1cb0;
  undefined8 local_1ca8;
  longlong *local_1ca0;
  longlong local_1c98;
  undefined7 uStack_1c90;
  undefined1 uStack_1c89;
  undefined7 uStack_1c88;
  undefined8 local_1c80;
  undefined4 local_1c78;
  undefined4 uStack_1c74;
  undefined4 uStack_1c70;
  undefined4 uStack_1c6c;
  undefined8 local_1c68;
  longlong *plStack_1c60;
  undefined8 local_1c58;
  undefined8 local_1c50;
  undefined4 local_1c48;
  undefined2 local_1c44;
  undefined1 local_1c42;
  undefined4 local_1c40;
  undefined1 local_1c38 [8];
  undefined1 local_1c30 [24];
  undefined4 local_1c18;
  undefined4 uStack_1c14;
  undefined4 uStack_1c10;
  undefined4 uStack_1c0c;
  undefined1 local_1c08;
  undefined1 local_1c00 [40];
  undefined1 local_1bd8 [88];
  undefined8 local_1b80;
  undefined8 uStack_1b78;
  undefined1 local_1b70;
  undefined8 local_1b68;
  undefined8 uStack_1b60;
  undefined1 local_19a8 [96];
  undefined1 local_1948;
  undefined1 local_1940 [48];
  undefined4 local_1910;
  undefined4 uStack_190c;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  uint local_1900;
  undefined1 local_18fc;
  undefined1 local_18f8 [344];
  undefined4 local_17a0;
  undefined1 local_179c;
  undefined1 local_1798 [40];
  undefined4 local_1770;
  undefined1 local_176c;
  undefined1 local_1768 [88];
  undefined1 local_1710 [64];
  undefined4 local_16d0;
  undefined1 local_16cc;
  undefined1 local_1650 [424];
  undefined8 local_14a8;
  undefined1 local_14a0;
  undefined1 local_1498 [128];
  undefined1 local_1418 [24];
  undefined4 local_1400;
  undefined4 uStack_13fc;
  undefined4 uStack_13f8;
  undefined4 uStack_13f4;
  undefined1 local_13f0;
  undefined1 local_13e8 [96];
  float local_1388;
  undefined1 local_1384;
  undefined1 local_1380 [40];
  undefined1 local_1358 [552];
  undefined8 local_1130;
  undefined1 local_1128;
  undefined1 local_1120 [96];
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  undefined1 local_10b0;
  undefined1 local_10a8 [16];
  undefined8 local_1098;
  undefined8 uStack_1090;
  uint local_1088;
  undefined1 local_1084;
  undefined1 local_1080 [16];
  undefined8 local_1070;
  undefined8 uStack_1068;
  uint local_1060;
  undefined1 local_105c;
  undefined1 local_1058 [48];
  undefined1 local_1028 [428];
  undefined4 local_e7c;
  undefined8 local_e50;
  longlong *local_e48;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined1 local_e38 [184];
  undefined1 local_d80 [192];
  undefined1 local_cc0 [424];
  undefined8 local_b18;
  undefined1 local_b10;
  undefined1 local_b08 [128];
  undefined1 local_a88 [24];
  undefined4 local_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined1 local_a60;
  undefined1 local_a58 [96];
  float local_9f8;
  undefined1 local_9f4;
  undefined1 local_9f0 [40];
  undefined1 local_9c8 [440];
  undefined1 local_810 [472];
  undefined8 local_638;
  longlong *local_630;
  float local_610;
  undefined1 local_60c;
  undefined1 local_608 [88];
  float local_5b0;
  undefined1 local_5ac;
  undefined1 local_5a8 [64];
  undefined1 local_568 [448];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398;
  undefined1 local_390 [80];
  undefined8 local_340;
  undefined1 local_338;
  undefined1 local_330 [96];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  uint local_298;
  undefined1 local_294;
  undefined1 local_290 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  uint local_270;
  undefined1 local_26c;
  undefined1 local_268 [48];
  undefined1 local_238 [440];
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x145ffa454;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2208;
  FUN_145ffbb24(local_1c38);
  local_1c80 = 0;
  local_1c98 = 0;
  uStack_1c90 = 0;
  uStack_1c89 = 0;
  uStack_1c88 = 0;
  local_1c78 = 0;
  uStack_1c74 = 0;
  uStack_1c70 = 0;
  uStack_1c6c = 0x3f800000;
  local_1c68 = 0;
  plStack_1c60 = (longlong *)0x0;
  local_1c58 = 0;
  local_1c50 = 0x41c00000;
  local_1c48 = 0;
  local_1c44 = 2;
  local_1c42 = 0;
  local_1c40 = 0x3f800000;
  cVar4 = FUN_14493c216(local_1c38,0);
  lVar5 = local_1c98;
  if (((cVar4 == '\0') && (lVar5 = FUN_14479d2ce(local_1c38), lVar5 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  local_1c98 = lVar5;
  local_1c50 = CONCAT44(local_1c50._4_4_,param_2 * 40.0);
  FUN_1446ddc76(&local_1b80,"Medium",1);
  local_1c58 = local_1b80;
  FUN_140a504fe(local_238);
  FUN_140a4fdf2(local_1bd8,0);
  FUN_140a562d0(local_568);
  local_1d00 = 0x4000000000000000;
  uStack_1cf8 = 0x4000000000000000;
  local_1cf0 = 1;
  local_1ce8 = 0;
  uStack_1ce0 = 0;
  local_398 = 1;
  local_3a8 = 0;
  uStack_3a4 = 0x40000000;
  uStack_3a0 = 0;
  uStack_39c = 0x40000000;
  FUN_144a450dc(local_390,&local_1ce8);
  FUN_1449db362(&local_1ce8);
  plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_1d28,"WhiteBrush",1);
  local_1d20 = (**(code **)(*plVar6 + 0x50))(plVar6,local_1d28,0,0);
  local_1d18 = 1;
  local_1d10 = 0;
  uStack_1d08 = 0;
  local_338 = 1;
  local_340 = local_1d20;
  FUN_144a450dc(local_330,&local_1d10);
  FUN_1449db362(&local_1d10);
  local_1d58 = 0x3ba9bcfd3a6e8d11;
  uStack_1d50 = 0x3f4000003c1f40a3;
  local_1d48 = local_1d48 & 0xffffff00;
  local_1d44 = 1;
  local_1d40 = 0;
  uStack_1d38 = 0;
  local_2a8 = 0x3ba9bcfd3a6e8d11;
  uStack_2a0 = 0x3f4000003c1f40a3;
  local_298 = local_1d48;
  local_294 = 1;
  FUN_144a450dc(local_290,&local_1d40);
  FUN_1449db362(&local_1d40);
  local_1d88 = 0x3ba9bcfd3a6e8d11;
  uStack_1d80 = 0x3f4000003c1f40a3;
  local_1d78 = local_1d78 & 0xffffff00;
  local_1d74 = 1;
  local_1d70 = 0;
  uStack_1d68 = 0;
  local_280 = 0x3ba9bcfd3a6e8d11;
  uStack_278 = 0x3f4000003c1f40a3;
  local_270 = local_1d78;
  local_26c = 1;
  FUN_144a450dc(local_268,&local_1d70);
  FUN_1449db362(&local_1d70);
  local_1db8 = 0x3ba9bcfd3a6e8d11;
  uStack_1db0 = 0x3f4000003c1f40a3;
  local_1da8 = 1;
  local_1da0 = 0;
  uStack_1d98 = 0;
  local_2c0 = 1;
  local_2d0 = 0x3ba9bcfd3a6e8d11;
  uStack_2c8 = 0x3f4000003c1f40a3;
  FUN_144a450dc(local_2b8,&local_1da0);
  FUN_1449db362(&local_1da0);
  local_21e8 = &local_1dd1;
  FUN_140a55c32(local_1dd0,"SBorder",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",0x24
               );
  FUN_140a530e4(local_1dd0,&local_1cd8,local_568);
  local_1cc8 = local_1cd8;
  plStack_1cc0 = local_1cd0;
  if (local_1cd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cd0 + 1) = (int)local_1cd0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_1bd8,&local_1cc8);
  local_21d8 = FUN_140a5058c(local_238,uVar7);
  FUN_140a4fdf2(local_1c30,0);
  local_1b80 = 0x41000000;
  uStack_1b78 = 0x41000000;
  local_1b70 = 1;
  local_1b68 = 0;
  uStack_1b60 = 0;
  local_1c08 = 1;
  local_1c18 = 0x41000000;
  uStack_1c14 = 0;
  uStack_1c10 = 0x41000000;
  uStack_1c0c = 0;
  FUN_144a450dc(local_1c00,&local_1b68);
  FUN_1449db362(&local_1b68);
  FUN_140a53a96(local_810);
  local_1e10 = param_2 * 68.0;
  local_1e0c = 1;
  local_1e08 = 0;
  uStack_1e00 = 0;
  local_60c = 1;
  local_610 = local_1e10;
  FUN_144a450dc(local_608,&local_1e08);
  FUN_1449db362(&local_1e08);
  param_2 = param_2 * 64.0;
  local_1e24 = 1;
  local_1e20 = 0;
  uStack_1e18 = 0;
  local_5ac = 1;
  local_1e28 = param_2;
  local_5b0 = param_2;
  FUN_144a450dc(local_5a8,&local_1e20);
  FUN_1449db362(&local_1e20);
  FUN_140a5296a(local_9c8);
  FUN_140a50426(local_a88);
  local_1b80 = 0x40800000;
  uStack_1b78 = 0x40800000;
  local_1b70 = 1;
  local_1b68 = 0;
  uStack_1b60 = 0;
  local_a60 = 1;
  local_a70 = 0x40800000;
  uStack_a6c = 0;
  uStack_a68 = 0x40800000;
  uStack_a64 = 0;
  FUN_144a450dc(local_a58,&local_1b68);
  FUN_1449db362(&local_1b68);
  local_1e4c = 1;
  local_1e48 = 0;
  uStack_1e40 = 0;
  local_9f4 = 1;
  local_1e50 = param_2;
  local_9f8 = param_2;
  FUN_144a450dc(local_9f0,&local_1e48);
  FUN_1449db362(&local_1e48);
  FUN_140a53334(local_cc0);
  plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = DAT_14c96b350;
  }
  local_1e90 = (**(code **)(*plVar6 + 0x78))(plVar6);
  local_1e88 = 1;
  local_1e80 = 0;
  uStack_1e78 = 0;
  local_b10 = 1;
  local_b18 = local_1e90;
  FUN_144a450dc(local_b08,&local_1e80);
  FUN_1449db362(&local_1e80);
  local_21e8 = &local_1ea9;
  FUN_140a554b8(&local_1ea8,"SImage",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",0x37
               );
  if (local_1ea0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ea0 + 1) = (int)local_1ea0[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = local_1ea8;
  *(longlong **)(param_1 + 0x270) = local_1ea0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  FUN_140a52c70(&local_1ea8,&local_1e70,local_cc0);
  local_1e60 = local_1e70;
  local_1e58 = local_1e68;
  if (local_1e68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e68 + 1) = (int)local_1e68[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fe8e(local_a88,&local_1e60);
  uVar7 = FUN_140a52392(local_9c8,uVar7);
  FUN_140a50426(local_d80);
  lVar5 = FUN_140a52578(local_d80);
  local_1b80 = 0x40800000;
  uStack_1b78 = 0x40800000;
  local_1b70 = 1;
  local_1b68 = 0;
  uStack_1b60 = 0;
  *(undefined1 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x18) = 0x40800000;
  *(undefined4 *)(lVar5 + 0x1c) = 0;
  *(undefined4 *)(lVar5 + 0x20) = 0x40800000;
  *(undefined4 *)(lVar5 + 0x24) = 0;
  FUN_144a450dc(lVar5 + 0x30,&local_1b68);
  FUN_1449db362(&local_1b68);
  FUN_140a53a96(local_1028);
  local_1ee8 = 0x40000000;
  local_1ee4 = 1;
  local_1ee0 = 0;
  uStack_1ed8 = 0;
  local_e40 = 0x40000000;
  local_e3c = 1;
  FUN_144a450dc(local_e38,&local_1ee0);
  FUN_1449db362(&local_1ee0);
  local_e7c = 0;
  FUN_140a562d0(local_1358);
  plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_1f20,"WhiteBrush",1);
  local_1f18 = (**(code **)(*plVar6 + 0x50))(plVar6,local_1f20,0,0);
  local_1f10 = 1;
  local_1f08 = 0;
  uStack_1f00 = 0;
  local_1128 = 1;
  local_1130 = local_1f18;
  FUN_144a450dc(local_1120,&local_1f08);
  FUN_1449db362(&local_1f08);
  local_1f48 = 0x3f21cac13f800000;
  uStack_1f40 = 0x3f8000003e0b4396;
  local_1f38 = local_1f38 & 0xffffff00;
  local_1f34 = 1;
  local_1f30 = 0;
  uStack_1f28 = 0;
  local_1098 = 0x3f21cac13f800000;
  uStack_1090 = 0x3f8000003e0b4396;
  local_1088 = local_1f38;
  local_1084 = 1;
  FUN_144a450dc(local_1080,&local_1f30);
  FUN_1449db362(&local_1f30);
  local_1f78 = 0x3f21cac13f800000;
  uStack_1f70 = 0x3f8000003e0b4396;
  local_1f68 = local_1f68 & 0xffffff00;
  local_1f64 = 1;
  local_1f60 = 0;
  uStack_1f58 = 0;
  local_1070 = 0x3f21cac13f800000;
  uStack_1068 = 0x3f8000003e0b4396;
  local_1060 = local_1f68;
  local_105c = 1;
  FUN_144a450dc(local_1058,&local_1f60);
  FUN_1449db362(&local_1f60);
  local_1fa8 = 0x3f21cac13f800000;
  uStack_1fa0 = 0x3f8000003e0b4396;
  local_1f98 = 1;
  local_1f90 = 0;
  uStack_1f88 = 0;
  local_10b0 = 1;
  local_10c0 = 0x3f21cac13f800000;
  uStack_10b8 = 0x3f8000003e0b4396;
  FUN_144a450dc(local_10a8,&local_1f90);
  FUN_1449db362(&local_1f90);
  local_21e8 = &local_1fc1;
  FUN_140a55c32(local_1fc0,"SBorder",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",0x42
               );
  FUN_140a530e4(local_1fc0,&local_1ef8,local_1358);
  plVar9 = local_e48;
  plVar6 = local_1ef0;
  if (local_1ef0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ef0 + 1) = (int)local_1ef0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1ef0 + 1) = (int)local_1ef0[1] + 1;
    UNLOCK();
  }
  local_e50 = local_1ef8;
  local_e48 = local_1ef0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  local_21e8 = &local_1fe1;
  FUN_140a53d66(local_1fe0,&DAT_149efe19f,".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp"
                ,0x3e);
  FUN_140a50bf4(local_1fe0,&local_1ed0,local_1028);
  local_1ec0 = local_1ed0;
  local_1eb8 = local_1ec8;
  if (local_1ec8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ec8 + 1) = (int)local_1ec8[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140a4fe8e(lVar5,&local_1ec0);
  uVar7 = FUN_140a52392(uVar7,uVar8);
  FUN_140a50426(local_1418);
  local_1b80 = 0x40800000;
  uStack_1b78 = 0;
  local_1b70 = 1;
  local_1b68 = 0;
  uStack_1b60 = 0;
  local_13f0 = 1;
  local_1400 = 0x40800000;
  uStack_13fc = 0;
  uStack_13f8 = 0;
  uStack_13f4 = 0;
  FUN_144a450dc(local_13e8,&local_1b68);
  FUN_1449db362(&local_1b68);
  local_1ffc = 1;
  local_1ff8 = 0;
  uStack_1ff0 = 0;
  local_1384 = 1;
  local_2000 = param_2;
  local_1388 = param_2;
  FUN_144a450dc(local_1380,&local_1ff8);
  FUN_1449db362(&local_1ff8);
  FUN_140a53334(local_1650);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  local_2040 = (**(code **)(*plVar9 + 0x78))(plVar9);
  local_2038 = 1;
  local_2030 = 0;
  uStack_2028 = 0;
  local_14a0 = 1;
  local_14a8 = local_2040;
  FUN_144a450dc(local_1498,&local_2030);
  FUN_1449db362(&local_2030);
  local_21e8 = &local_2059;
  FUN_140a554b8(&local_2058,"SImage",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",0x4d
               );
  if (local_2050 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2050 + 1) = (int)local_2050[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = local_2058;
  *(longlong **)(param_1 + 0x280) = local_2050;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a52c70(&local_2058,&local_2020,local_1650);
  local_2010 = local_2020;
  local_2008 = local_2018;
  if (local_2018 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2018 + 1) = (int)local_2018[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140a4fe8e(local_1418,&local_2010);
  uVar7 = FUN_140a52392(uVar7,uVar8);
  FUN_140a50426(local_1710);
  local_16d0 = 1;
  local_16cc = 1;
  uVar8 = FUN_140a52578(local_1710);
  FUN_140a570d8(&local_1b80);
  FUN_144a87366(local_20f8,&local_1c98);
  local_2098 = 1;
  local_2090 = 0;
  uStack_2088 = 0;
  FUN_1412cc59c(local_19a8,local_20f8);
  local_1948 = local_2098;
  FUN_144a450dc(local_1940,&local_2090);
  FUN_141515cba(local_20f8);
  local_2110 = 0;
  local_210c = 1;
  local_2108 = 0;
  uStack_2100 = 0;
  local_1770 = 0;
  local_176c = 1;
  FUN_144a450dc(local_1768,&local_2108);
  FUN_1449db362(&local_2108);
  local_2138 = 0x3ed893753eb43958;
  uStack_2130 = 0x3f8000003ee147ae;
  local_2128 = local_2128 & 0xffffff00;
  local_2124 = 1;
  local_2120 = 0;
  uStack_2118 = 0;
  local_1910 = 0x3eb43958;
  uStack_190c = 0x3ed89375;
  uStack_1908 = 0x3ee147ae;
  uStack_1904 = 0x3f800000;
  local_1900 = local_2128;
  local_18fc = 1;
  FUN_144a450dc(local_18f8,&local_2120);
  FUN_1449db362(&local_2120);
  local_2150 = 0x40000000;
  local_214c = 1;
  local_2148 = 0;
  uStack_2140 = 0;
  local_17a0 = 0x40000000;
  local_179c = 1;
  FUN_144a450dc(local_1798,&local_2148);
  FUN_1449db362(&local_2148);
  local_21e8 = &local_2169;
  FUN_140a54526(&local_2168,"STextBlock",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",
                0x54);
  if (local_2160 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2160 + 1) = (int)local_2160[1] + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x288) = local_2168;
  *(longlong **)(param_1 + 0x290) = local_2160;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a52852(&local_2168,&local_2080,&local_1b80);
  local_2070 = local_2080;
  local_2068 = local_2078;
  if (local_2078 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2078 + 1) = (int)local_2078[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140a4fe8e(uVar8,&local_2070);
  uVar7 = FUN_140a52392(uVar7,uVar8);
  local_21e8 = &local_2189;
  FUN_140a541dc(local_2188,"SHorizontalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",0x32);
  FUN_140a50ec6(local_2188,&local_1e38,uVar7);
  plVar3 = local_630;
  plVar9 = local_1e30;
  if (local_1e30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e30 + 1) = (int)local_1e30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1e30 + 1) = (int)local_1e30[1] + 1;
    UNLOCK();
  }
  local_638 = local_1e38;
  local_630 = local_1e30;
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
  local_21e8 = &local_21a9;
  FUN_140a53d66(local_21a8,&DAT_149efe19f,".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp"
                ,0x2e);
  FUN_140a50bf4(local_21a8,&local_1df8,local_810);
  local_1de8 = local_1df8;
  local_1de0 = local_1df0;
  if (local_1df0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1df0 + 1) = (int)local_1df0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_1c30,&local_1de8);
  uVar7 = FUN_140a5058c(local_21d8,uVar7);
  local_21e8 = &local_21c9;
  FUN_140a536a8(local_21c8,"SOverlay",".\\../../OakGame/Source/OakGame/UI/Loading/SOakVoice.cpp",
                0x21);
  FUN_140a4ff16(local_21c8,&local_1cb8,uVar7);
  local_1ca8 = local_1cb8;
  local_1ca0 = local_1cb0;
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cb0 + 1) = (int)local_1cb0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_1ca8);
  plVar3 = local_1ca0;
  if (local_1ca0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ca0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ca0)(local_1ca0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1cb0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1cb0)(local_1cb0);
      LOCK();
      piVar2 = (int *)((longlong)local_1cb0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1cb0 + 0x10))(local_1cb0);
      }
    }
  }
  if (local_21c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_21c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_21c0)(local_21c0);
      LOCK();
      piVar2 = (int *)((longlong)local_21c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_21c0 + 0x10))(local_21c0);
      }
    }
  }
  plVar3 = local_1de0;
  if (local_1de0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1de0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1de0)(local_1de0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1df0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1df0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1df0)(local_1df0);
      LOCK();
      piVar2 = (int *)((longlong)local_1df0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1df0 + 0x10))(local_1df0);
      }
    }
  }
  if (local_21a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_21a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_21a0)(local_21a0);
      LOCK();
      piVar2 = (int *)((longlong)local_21a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_21a0 + 0x10))(local_21a0);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_1e30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1e30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1e30)(local_1e30);
      LOCK();
      piVar2 = (int *)((longlong)local_1e30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e30 + 0x10))(local_1e30);
      }
    }
  }
  if (local_2180 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2180 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2180)(local_2180);
      LOCK();
      piVar2 = (int *)((longlong)local_2180 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2180 + 0x10))(local_2180);
      }
    }
  }
  plVar9 = local_2068;
  if (local_2068 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2068 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2068)(local_2068);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_2078 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2078 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2078)(local_2078);
      LOCK();
      piVar2 = (int *)((longlong)local_2078 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2078 + 0x10))(local_2078);
      }
    }
  }
  if (local_2160 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2160 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2160)(local_2160);
      LOCK();
      piVar2 = (int *)((longlong)local_2160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2160 + 0x10))(local_2160);
      }
    }
  }
  FUN_140a59ae6(&local_1b80);
  FUN_140a509a6(local_1710);
  plVar9 = local_2008;
  if (local_2008 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2008 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2008)(local_2008);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_2018 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2018 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2018)(local_2018);
      LOCK();
      piVar2 = (int *)((longlong)local_2018 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2018 + 0x10))(local_2018);
      }
    }
  }
  if (local_2050 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2050 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_2050)(local_2050);
      LOCK();
      piVar2 = (int *)((longlong)local_2050 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2050 + 0x10))(local_2050);
      }
    }
  }
  FUN_140a55a86(local_1650);
  FUN_140a509a6(local_1418);
  plVar9 = local_1eb8;
  if (local_1eb8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1eb8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1eb8)(local_1eb8);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_1ec8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1ec8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1ec8)(local_1ec8);
      LOCK();
      piVar2 = (int *)((longlong)local_1ec8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ec8 + 0x10))(local_1ec8);
      }
    }
  }
  if (local_1fd8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1fd8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1fd8)(local_1fd8);
      LOCK();
      piVar2 = (int *)((longlong)local_1fd8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1fd8 + 0x10))(local_1fd8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (local_1ef0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1ef0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1ef0)(local_1ef0);
      LOCK();
      piVar2 = (int *)((longlong)local_1ef0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ef0 + 0x10))(local_1ef0);
      }
    }
  }
  if (local_1fb8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1fb8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1fb8)(local_1fb8);
      LOCK();
      piVar2 = (int *)((longlong)local_1fb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1fb8 + 0x10))(local_1fb8);
      }
    }
  }
  FUN_140a59028(local_1358);
  FUN_140a5660c(local_1028);
  FUN_140a509a6(local_d80);
  plVar6 = local_1e58;
  if (local_1e58 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1e58 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1e58)(local_1e58);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_1e68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1e68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1e68)(local_1e68);
      LOCK();
      piVar2 = (int *)((longlong)local_1e68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e68 + 0x10))(local_1e68);
      }
    }
  }
  if (local_1ea0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1ea0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1ea0)(local_1ea0);
      LOCK();
      piVar2 = (int *)((longlong)local_1ea0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ea0 + 0x10))(local_1ea0);
      }
    }
  }
  FUN_140a55a86(local_cc0);
  FUN_140a509a6(local_a88);
  FUN_145ab33da(local_9c8);
  FUN_140a5660c(local_810);
  FUN_1415b5e50(local_1c30);
  plVar6 = plStack_1cc0;
  if (plStack_1cc0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_1cc0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_1cc0)(plStack_1cc0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_1cd0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1cd0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1cd0)(local_1cd0);
      LOCK();
      piVar2 = (int *)((longlong)local_1cd0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1cd0 + 0x10))(local_1cd0);
      }
    }
  }
  if (local_1dc8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1dc8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1dc8)(local_1dc8);
      LOCK();
      piVar2 = (int *)((longlong)local_1dc8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1dc8 + 0x10))(local_1dc8);
      }
    }
  }
  FUN_140a59028(local_568);
  FUN_1415b5e50(local_1bd8);
  FUN_1415b5e16(local_238);
  plVar6 = plStack_1c60;
  if (plStack_1c60 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_1c60 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_1c60)(plStack_1c60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_2208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ffbb24 FUN_145ffbb24 body=774 status=ok
// SIG undefined FUN_145ffbb24(void)

undefined8 * FUN_145ffbb24(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined1 local_169;
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined2 *local_138;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128 [248];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar9 = FUN_1402735c8();
  if (*(longlong *)(lVar9 + 0x390) != 0) {
    lVar9 = FUN_1402735c8();
    uVar3 = *(undefined8 *)(lVar9 + 0x390);
    *param_1 = 0;
    FUN_14485c47a(param_1,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_198);
  }
  lVar9 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar9 + 0x28);
  plVar4 = *(longlong **)(lVar9 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)FUN_14142d800(uVar3);
  local_138 = (undefined2 *)0x0;
  local_130 = *(int *)(puVar10 + 1);
  lVar9 = (longlong)local_130;
  pvVar5 = (void *)*puVar10;
  if (lVar9 == 0) {
    local_12c = 0;
  }
  else {
    FUN_1446dd670(&local_138,local_130,0);
    memcpy(local_138,pvVar5,lVar9 * 2);
  }
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
  lVar9 = FUN_1402735c8();
  puVar13 = local_138;
  if (local_130 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  iVar8 = local_130 + -1;
  if (local_130 == 0) {
    iVar8 = 0;
  }
  uVar7 = FUN_144a49b4a(iVar8,puVar13);
  iVar8 = FUN_145ffbe2c(lVar9 + 0x340,uVar7,&local_138);
  lVar9 = (longlong)iVar8 * 0x40 + *(longlong *)(lVar9 + 0x340);
  if (lVar9 == 0 || iVar8 == -1) {
    lVar9 = FUN_1402735c8();
    puVar11 = (undefined4 *)(lVar9 + 800);
  }
  else {
    puVar11 = (undefined4 *)(lVar9 + 0x18);
  }
  local_158 = *puVar11;
  uStack_154 = puVar11[1];
  uStack_150 = puVar11[2];
  uStack_14c = puVar11[3];
  local_148 = (void *)0x0;
  local_140 = puVar11[6];
  lVar9 = (longlong)local_140;
  pvVar5 = *(void **)(puVar11 + 4);
  if (lVar9 == 0) {
    local_13c = 0;
  }
  else {
    FUN_1446dd670(&local_148,local_140,0);
    memcpy(local_148,pvVar5,lVar9 * 2);
  }
  FUN_1413e28b0(local_128);
  local_178 = &local_169;
  lVar9 = 0;
  FUN_145bd45fc(local_128,&local_168,&local_158,0);
  if (local_168 != 0) {
    lVar9 = FUN_1409be8d8();
    lVar12 = FUN_1402735c8();
    lVar6 = *(longlong *)(lVar12 + 0x390);
    if (lVar9 == 0) {
      if (lVar6 == 0) {
        lVar9 = 0;
        goto LAB_145ffbd0b;
      }
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
    }
    else {
      if (lVar6 == lVar9) goto LAB_145ffbd0b;
      if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar9);
    }
    *(longlong *)(lVar12 + 0x390) = lVar9;
  }
LAB_145ffbd0b:
  *param_1 = 0;
  FUN_14485c47a(param_1,lVar9);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_160 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_160 + 0x10))(local_160);
      }
    }
  }
  FUN_140f77756(local_128);
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffbe2c FUN_145ffbe2c body=195 status=ok
// SIG undefined FUN_145ffbe2c(void)

int FUN_145ffbe2c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_145ffbe6e:
      lVar10 = (longlong)iVar1 * 0x40;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_145ffbee7;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_145ffbee7;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_145ffbed1;
    }
  }
  return -1;
LAB_145ffbee7:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_145ffbed1:
  iVar1 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_145ffbe6e;
}



// FUNCTION 145ffbef0 FUN_145ffbef0 body=2188 status=ok
// SIG undefined FUN_145ffbef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145ffbef0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_13d8 [32];
  undefined1 *local_13b8;
  undefined1 local_13a9;
  undefined1 local_13a8 [8];
  longlong *local_13a0;
  undefined1 local_1389;
  undefined8 local_1388;
  longlong *local_1380;
  undefined4 local_1370;
  undefined1 local_136c;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined4 local_1358;
  undefined1 local_1354;
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 local_1340;
  longlong *local_1338;
  undefined8 local_1330;
  longlong *local_1328;
  undefined1 local_1319;
  undefined8 local_1318;
  longlong *local_1310;
  undefined4 local_1300;
  undefined1 local_12fc;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  longlong *local_12e0;
  undefined8 local_12d8;
  longlong *local_12d0;
  undefined8 local_12c8;
  longlong *local_12c0;
  undefined8 local_12b8;
  longlong *local_12b0;
  longlong local_12a8;
  undefined7 uStack_12a0;
  undefined1 uStack_1299;
  undefined7 uStack_1298;
  undefined8 local_1290;
  undefined4 local_1288;
  undefined4 uStack_1284;
  undefined4 uStack_1280;
  undefined4 uStack_127c;
  undefined8 local_1278;
  longlong *plStack_1270;
  undefined8 local_1268;
  undefined8 local_1260;
  undefined4 local_1258;
  undefined2 local_1254;
  undefined1 local_1252;
  undefined4 local_1250;
  undefined1 local_1240 [8];
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined1 local_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined1 *local_1068;
  undefined4 local_ee0;
  undefined1 local_edc;
  undefined1 local_ed8 [176];
  undefined4 local_e28;
  undefined1 local_e24;
  undefined1 local_e20 [88];
  undefined1 local_dc8 [192];
  undefined8 local_d08;
  undefined1 local_d00 [72];
  undefined4 local_cb8;
  undefined4 local_ca0;
  undefined4 uStack_c9c;
  undefined4 uStack_c98;
  undefined4 uStack_c94;
  undefined1 local_c90;
  undefined1 *local_b38;
  undefined4 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0 [96];
  undefined1 local_890 [192];
  undefined1 local_7d0 [440];
  undefined1 local_618 [736];
  undefined1 local_338 [744];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_13d8;
  FUN_145ffbb24(local_1240);
  local_1290 = 0;
  local_12a8 = 0;
  uStack_12a0 = 0;
  uStack_1299 = 0;
  uStack_1298 = 0;
  local_1288 = 0;
  uStack_1284 = 0;
  uStack_1280 = 0;
  uStack_127c = 0x3f800000;
  local_1278 = 0;
  plStack_1270 = (longlong *)0x0;
  local_1268 = 0;
  local_1260 = 0x41c00000;
  local_1258 = 0;
  local_1254 = 2;
  local_1252 = 0;
  local_1250 = 0x3f800000;
  cVar4 = FUN_14493c216(local_1240,0);
  lVar5 = local_12a8;
  if (((cVar4 == '\0') && (lVar5 = FUN_14479d2ce(local_1240), lVar5 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  local_12a8 = lVar5;
  FUN_1446ddc76(&local_d08,&DAT_14b9c1d8c,1);
  local_1268 = local_d08;
  FUN_140a581a0(&local_d08);
  FUN_1412cc59c(local_d00,&local_12a8);
  local_cb8 = 0x42400000;
  local_ca0 = 0x3d4ccccd;
  uStack_c9c = 0x3e395810;
  uStack_c98 = 0x3eac8b44;
  uStack_c94 = 0x3f800000;
  local_c90 = 0;
  FUN_140e9ea3a(local_338,&local_d08);
  FUN_140e9e952(&local_d08);
  FUN_1446ddc76(&local_d08,&DAT_14b9c1d91,1);
  local_1268 = local_d08;
  FUN_140a581a0(&local_d08);
  FUN_1412cc59c(local_d00,&local_12a8);
  local_cb8 = 0x42300000;
  local_ca0 = 0x3eb43958;
  uStack_c9c = 0x3ed89375;
  uStack_c98 = 0x3ee147ae;
  uStack_c94 = 0x3f800000;
  local_c90 = 0;
  FUN_140e9ea3a(local_618,&local_d08);
  FUN_140e9e952(&local_d08);
  FUN_1407679b0(local_7d0);
  FUN_145aafb3e(local_890);
  lVar5 = FUN_145aaf900(local_890);
  *(undefined4 *)(lVar5 + 0x40) = 2;
  *(undefined1 *)(lVar5 + 0x44) = 1;
  *(undefined4 *)(lVar5 + 0x48) = 1;
  *(undefined1 *)(lVar5 + 0x4c) = 1;
  uVar6 = FUN_145aaf900(lVar5);
  FUN_140a570d8(&local_d08);
  local_1300 = 1;
  local_12fc = 1;
  local_12f8 = 0;
  uStack_12f0 = 0;
  local_8f8 = 1;
  local_8f4 = 1;
  local_b38 = local_338;
  FUN_144a450dc(local_8f0,&local_12f8);
  FUN_1449db362(&local_12f8);
  local_13b8 = &local_1319;
  FUN_140a54526(&local_1318,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakTooltipText.cpp",0x29);
  if (local_1310 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1310 + 1) = (int)local_1310[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x288) = local_1318;
  *(longlong **)(param_1 + 0x290) = local_1310;
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
  FUN_140a52852(&local_1318,&local_12e8,&local_d08);
  local_12d8 = local_12e8;
  local_12d0 = local_12e0;
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_12e0 + 1) = (int)local_12e0[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_145aaf878(uVar6,&local_12d8);
  uVar6 = FUN_145aaf822(local_7d0,uVar6);
  FUN_145aafb3e(local_dc8);
  lVar5 = FUN_145aaf900(local_dc8);
  local_1238 = 0x41a0000000000000;
  uStack_1230 = 0;
  local_1228 = 1;
  local_1220 = 0;
  uStack_1218 = 0;
  *(undefined1 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41a00000;
  *(undefined4 *)(lVar5 + 0x20) = 0;
  *(undefined4 *)(lVar5 + 0x24) = 0;
  FUN_144a450dc(lVar5 + 0x30,&local_1220);
  FUN_1449db362(&local_1220);
  FUN_140a570d8(&local_1238);
  local_1358 = 0x452f0000;
  local_1354 = 1;
  local_1350 = 0;
  uStack_1348 = 0;
  local_ee0 = 0x452f0000;
  local_edc = 1;
  local_1068 = local_618;
  FUN_144a450dc(local_ed8,&local_1350);
  FUN_1449db362(&local_1350);
  local_1370 = 1;
  local_136c = 1;
  local_1368 = 0;
  uStack_1360 = 0;
  local_e28 = 1;
  local_e24 = 1;
  FUN_144a450dc(local_e20,&local_1368);
  FUN_1449db362(&local_1368);
  local_13b8 = &local_1389;
  FUN_140a54526(&local_1388,"STextBlock",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakTooltipText.cpp",0x31);
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1380 + 1) = (int)local_1380[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x298) = local_1388;
  *(longlong **)(param_1 + 0x2a0) = local_1380;
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
  FUN_140a52852(&local_1388,&local_1340,&local_1238);
  local_1330 = local_1340;
  local_1328 = local_1338;
  if (local_1338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1338 + 1) = (int)local_1338[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_145aaf878(lVar5,&local_1330);
  uVar6 = FUN_145aaf822(uVar6,uVar7);
  local_13b8 = &local_13a9;
  FUN_14076837c(local_13a8,"SVerticalBox",
                ".\\../../OakGame/Source/OakGame/UI/Loading/SOakTooltipText.cpp",0x22);
  FUN_14076784c(local_13a8,&local_12c8,uVar6);
  local_12b8 = local_12c8;
  local_12b0 = local_12c0;
  if (local_12c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_12c0 + 1) = (int)local_12c0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_12b8);
  plVar3 = local_12b0;
  if (local_12b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_12b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_12b0)(local_12b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_12c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_12c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_12c0)(local_12c0);
      LOCK();
      piVar2 = (int *)((longlong)local_12c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_12c0 + 0x10))(local_12c0);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_13a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar2 = (int *)((longlong)local_13a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  plVar3 = local_1328;
  if (local_1328 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1328 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1328)(local_1328);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1338 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1338 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1338)(local_1338);
      LOCK();
      piVar2 = (int *)((longlong)local_1338 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1338 + 0x10))(local_1338);
      }
    }
  }
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1380 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1380)(local_1380);
      LOCK();
      piVar2 = (int *)((longlong)local_1380 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1380 + 0x10))(local_1380);
      }
    }
  }
  FUN_140a59ae6(&local_1238);
  FUN_140767f30(local_dc8);
  plVar3 = local_12d0;
  if (local_12d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_12d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_12d0)(local_12d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_12e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_12e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_12e0)(local_12e0);
      LOCK();
      piVar2 = (int *)((longlong)local_12e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_12e0 + 0x10))(local_12e0);
      }
    }
  }
  if (local_1310 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1310 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1310)(local_1310);
      LOCK();
      piVar2 = (int *)((longlong)local_1310 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1310 + 0x10))(local_1310);
      }
    }
  }
  FUN_140a59ae6(&local_d08);
  FUN_140767f30(local_890);
  FUN_14149255e(local_7d0);
  FUN_145ffc77e(param_1);
  FUN_140e9e952(local_618);
  FUN_140e9e952(local_338);
  plVar3 = plStack_1270;
  if (plStack_1270 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1270 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1270)(plStack_1270);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_13d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ffc77e FUN_145ffc77e body=133 status=ok
// SIG undefined FUN_145ffc77e(void)

void FUN_145ffc77e(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_38);
  FUN_144a5dc74(local_28);
  cVar1 = FUN_145c70191(local_38);
  if (cVar1 != '\0') {
    FUN_145c7026a(param_1,local_38);
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffc804 FUN_145ffc804 body=169 status=ok
// SIG undefined FUN_145ffc804(void)

void FUN_145ffc804(undefined1 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] == '\0') {
    *param_1 = 0;
    FUN_145abd854(param_1 + 0x10);
  }
  puVar1 = param_1 + 4;
  lVar2 = FUN_14479d2ce(puVar1);
  if (lVar2 != 0) {
    FUN_140457ffc(lVar2 + 0x28,param_1);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  lVar2 = FUN_14479d2ce(puVar1);
  if (lVar2 != param_2) {
    FUN_14485c47a(puVar1,param_2);
    FUN_145ffc8ae(param_2 + 0x28,local_28,param_1,FUN_146060100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffc8ae FUN_145ffc8ae body=196 status=ok
// SIG undefined FUN_145ffc8ae(void)

undefined8
FUN_145ffc8ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b538b70;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b5390c0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1410e6738(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffc974 FUN_145ffc974 body=305 status=ok
// SIG undefined FUN_145ffc974(void)

longlong * FUN_145ffc974(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  User *pUVar3;
  longlong *plVar4;
  SessionId SVar5;
  ConnectionId CVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = FUN_1415b5f0c(param_3);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x2b8) != 0)) {
    plVar8 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_1415b603e(plVar8,param_1,param_4);
    plVar1 = plVar8 + 2;
    local_40 = plVar1;
    local_38 = plVar8;
    FUN_145ffcaa6(&local_40,plVar1);
    pUVar3 = *(User **)(lVar7 + 0x2b8);
    plVar8[0xc] = (longlong)pUVar3;
    plVar8[0xd] = (longlong)&DAT_100000001;
    SVar5 = bifrost::session::id(pUVar3);
    *(SessionId *)(plVar8 + 0xb) = SVar5;
    *(undefined2 *)((longlong)plVar8 + 0x5c) = 0;
    CVar6 = bifrost::sockets::create
                      ((User *)plVar8[0xc],*(ConnectionMode *)(plVar8 + 0xd),
                       *(TURNPolicy *)((longlong)plVar8 + 0x6c));
    plVar4 = local_38;
    *(ConnectionId *)(plVar8 + 0xe) = CVar6;
    *(undefined4 *)((longlong)plVar8 + 0x74) = 1;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ffcaa6 FUN_145ffcaa6 body=162 status=ok
// SIG undefined FUN_145ffcaa6(void)

void FUN_145ffcaa6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x30) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x28) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x28) = param_2;
    if (*(longlong **)(param_2 + 0x30) == plVar2) goto LAB_145ffcae5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x30) = plVar2;
      goto LAB_145ffcae5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x30) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ffcae5:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ffcb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ffcb48 FUN_145ffcb48 body=1242 status=ok
// SIG undefined FUN_145ffcb48(void)

void FUN_145ffcb48(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70 [8];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_1412f7014();
    FUN_145ffd14a(&DAT_14cb96850,param_1);
    if (((*(char *)(param_1 + 0x138) != '\x01') || (*(int *)(param_1 + 0xc0) < 1)) &&
       ((*(char *)(param_1 + 0x139) != '\x01' || (*(int *)(param_1 + 0xc4) < 1)))) {
      FUN_145ffd078(param_1);
    }
    lVar5 = FUN_1459982f4();
    lVar8 = *(longlong *)(lVar5 + 0x110);
    if (lVar8 == 0) {
      FUN_140aa6c08(lVar5);
      lVar8 = *(longlong *)(lVar5 + 0x110);
    }
    if ((longlong)*(int *)(lVar8 + 0xd0) != 0) {
      puVar7 = *(undefined8 **)(lVar8 + 200);
      plVar1 = (longlong *)(param_1 + 0x140);
      lVar8 = (longlong)*(int *)(lVar8 + 0xd0) * 0x50;
      do {
        if (*(int *)(puVar7 + 1) == 0) {
          local_98 = *puVar7;
          local_90 = 1;
          local_88 = (void *)0x0;
          uVar2 = *(uint *)(puVar7 + 3);
          pvVar4 = (void *)puVar7[2];
          local_80 = CONCAT44(local_80._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            local_80 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_88,uVar2,0);
            memcpy(local_88,pvVar4,(longlong)(int)uVar2 * 2);
          }
          local_78 = 0;
          local_70[0] = 0;
          local_50 = 0;
          iVar3 = *(int *)(param_1 + 0x148);
          *(uint *)(param_1 + 0x148) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
            FUN_145ffd0b6(plVar1,iVar3);
          }
          puVar6 = (undefined8 *)((longlong)iVar3 * 0x50 + *plVar1);
          *(undefined4 *)(puVar6 + 1) = local_90;
          *puVar6 = local_98;
          puVar6[2] = 0;
          puVar6[2] = local_88;
          local_88 = (void *)0x0;
          *(undefined4 *)(puVar6 + 3) = (undefined4)local_80;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = local_80._4_4_;
          local_80 = 0;
          *(undefined1 *)(puVar6 + 4) = local_78;
          *(byte *)(puVar6 + 9) = local_50;
          (*(code *)(&PTR_caseD_0_14b4da630)[local_50])(puVar6 + 5,local_70);
          (*(code *)(&PTR_LAB_14b4d9d70)[local_50])(local_70);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_98 = *puVar7;
          local_90 = 2;
          local_88 = (void *)0x0;
          uVar2 = *(uint *)(puVar7 + 3);
          pvVar4 = (void *)puVar7[2];
          local_80 = CONCAT44(local_80._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            local_80 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_88,uVar2,0);
            memcpy(local_88,pvVar4,(longlong)(int)uVar2 * 2);
          }
          local_78 = 0;
          local_70[0] = 0;
          local_50 = 0;
          iVar3 = *(int *)(param_1 + 0x148);
          *(uint *)(param_1 + 0x148) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
            FUN_145ffd0b6(plVar1,iVar3);
          }
          puVar6 = (undefined8 *)((longlong)iVar3 * 0x50 + *plVar1);
          *(undefined4 *)(puVar6 + 1) = local_90;
          *puVar6 = local_98;
          puVar6[2] = 0;
          puVar6[2] = local_88;
          local_88 = (void *)0x0;
          *(undefined4 *)(puVar6 + 3) = (undefined4)local_80;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = local_80._4_4_;
          local_80 = 0;
          *(undefined1 *)(puVar6 + 4) = local_78;
          *(byte *)(puVar6 + 9) = local_50;
          (*(code *)(&PTR_caseD_0_14b4da630)[local_50])(puVar6 + 5,local_70);
          (*(code *)(&PTR_LAB_14b4d9d70)[local_50])(local_70);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_98 = *puVar7;
          local_90 = 3;
          local_88 = (void *)0x0;
          uVar2 = *(uint *)(puVar7 + 3);
          pvVar4 = (void *)puVar7[2];
          local_80 = CONCAT44(local_80._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            local_80 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_88,uVar2,0);
            memcpy(local_88,pvVar4,(longlong)(int)uVar2 * 2);
          }
          local_78 = 0;
          local_70[0] = 0;
          local_50 = 0;
          iVar3 = *(int *)(param_1 + 0x148);
          *(uint *)(param_1 + 0x148) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
            FUN_145ffd0b6(plVar1,iVar3);
          }
          puVar6 = (undefined8 *)((longlong)iVar3 * 0x50 + *plVar1);
          *(undefined4 *)(puVar6 + 1) = local_90;
          *puVar6 = local_98;
          puVar6[2] = 0;
          puVar6[2] = local_88;
          local_88 = (void *)0x0;
          *(undefined4 *)(puVar6 + 3) = (undefined4)local_80;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = local_80._4_4_;
          local_80 = 0;
          *(undefined1 *)(puVar6 + 4) = local_78;
          *(byte *)(puVar6 + 9) = local_50;
          (*(code *)(&PTR_caseD_0_14b4da630)[local_50])(puVar6 + 5,local_70);
          (*(code *)(&PTR_LAB_14b4d9d70)[local_50])(local_70);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x148);
          *(uint *)(param_1 + 0x148) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
            FUN_145ffd0b6(plVar1,iVar3);
          }
          FUN_148a65d0a((longlong)iVar3 * 0x50 + *plVar1,puVar7);
        }
        puVar7 = puVar7 + 10;
        lVar8 = lVar8 + -0x50;
      } while (lVar8 != 0);
    }
  }
  else {
    FUN_145ffd03c();
    if (DAT_14c872bf0 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffd03c FUN_145ffd03c body=59 status=ok
// SIG undefined FUN_145ffd03c(void)

longlong FUN_145ffd03c(void)

{
  longlong lVar1;
  
  if (DAT_14cb96658 == 0) {
    lVar1 = FUN_14001cc68(0xa0,0x10);
    FUN_145ffd528(lVar1);
    DAT_14cb96658 = lVar1;
  }
  return DAT_14cb96658;
}



// FUNCTION 145ffd078 FUN_145ffd078 body=62 status=ok
// SIG undefined FUN_145ffd078(void)

void FUN_145ffd078(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1459982f4();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  FUN_145ffd1ec(param_1,lVar2 + 0x38);
  return;
}



// FUNCTION 145ffd0b6 FUN_145ffd0b6 body=147 status=ok
// SIG undefined FUN_145ffd0b6(void)

void FUN_145ffd0b6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ffd14a FUN_145ffd14a body=162 status=ok
// SIG undefined FUN_145ffd14a(void)

void FUN_145ffd14a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145ffd1d7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ffd1d7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ffd1ec FUN_145ffd1ec body=694 status=ok
// SIG undefined FUN_145ffd1ec(void)

void FUN_145ffd1ec(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x138) == '\x01') && (0 < *(int *)(param_1 + 0xc0))) ||
     ((*(char *)(param_1 + 0x139) == '\x01' && (0 < *(int *)(param_1 + 0xc4))))) {
    FUN_14153e274(param_1);
  }
  FUN_145d3e79e(param_1 + 0x28,param_2);
  if (*(int *)(param_1 + 0x90) == 0) {
    lVar1 = FUN_1459982f4();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    FUN_145d3e80c(param_1 + 0x88,lVar2 + 0xb8);
    if (*(int *)(param_1 + 0x90) == 0) goto LAB_145ffd408;
  }
  if (*(int *)(param_1 + 0x84) - 1U < 0x1ff) {
    *(undefined4 *)(param_1 + 0x84) = 0x200;
  }
  FUN_1415b618c(param_1);
  if ((*(int *)(param_1 + 0xc0) < 1) && (*(int *)(param_1 + 0xc4) < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_1415b626c(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_14a1ca5b0;
    LOCK();
    UNLOCK();
    lVar1 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar1 == 0) {
      LOCK();
      UNLOCK();
      lVar1 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_38[2] = lVar1;
    *local_38 = &PTR_FUN_14b4da660;
    local_38[3] = param_1;
    FUN_14123f6f0(&DAT_14cb10980,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_14a1c8660;
    LOCK();
    UNLOCK();
    lVar1 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar1 == 0) {
      LOCK();
      UNLOCK();
      lVar1 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_38[2] = lVar1;
    *local_38 = &PTR_FUN_14b4da6d0;
    local_38[3] = param_1;
    FUN_140aa43ac(&DAT_14cb10a20,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0xb0) = local_40;
  }
  FUN_145ffd4b4();
  FUN_145ffd14a(&DAT_14cb96830,param_1);
LAB_145ffd408:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffd4b4 FUN_145ffd4b4 body=115 status=ok
// SIG undefined FUN_145ffd4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145ffd4b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb96848) {
    FUN_144b3d300(&DAT_14cb96848);
    if (DAT_14cb96848 == -1) {
      DAT_14cb96830 = 0;
      _DAT_14cb96838 = 0;
      _DAT_14cb96840 = 2;
      atexit(FUN_143eeef1e);
      _Init_thread_footer(&DAT_14cb96848);
    }
  }
  return &DAT_14cb96830;
}



// FUNCTION 145ffd528 FUN_145ffd528 body=875 status=ok
// SIG undefined FUN_145ffd528(void)

undefined8 * FUN_145ffd528(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14b4d6690;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 5) = 5;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_140056680(param_1 + 7,&DAT_149dfb77a);
  if (-1 < *(int *)(param_1 + 5)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_140056680(param_1 + 0xc,L"ue.fpshistogram_interval");
  fVar8 = -1.0;
  fVar7 = -1.0;
  if (-1 < *(int *)(param_1 + 10)) {
    fVar7 = (float)*(int *)(param_1 + 10);
  }
  *(float *)((longlong)param_1 + 0x54) = fVar7;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_140056680(param_1 + 0x10,L"ue.fpsaggregate_interval");
  if (-1 < *(int *)(param_1 + 0xe)) {
    fVar8 = (float)*(int *)(param_1 + 0xe);
  }
  *(float *)((longlong)param_1 + 0x74) = fVar8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar4 = FUN_1401cb356();
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar2 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_149e02020;
  uVar5 = FUN_144a3f946();
  puVar2[2] = uVar5;
  *puVar2 = &PTR_FUN_14b4d91f0;
  puVar2[3] = param_1;
  puVar2[4] = FUN_1407f2c16;
  local_88 = 0;
  FUN_1405f67fc(uVar4,&local_60,&local_70,L"FPerfTelemetry_Tick");
  if ((undefined8 **)(param_1 + 0x12) != &local_60) {
    param_1[0x12] = local_60;
    local_60 = (undefined8 *)0x0;
    plVar6 = (longlong *)param_1[0x13];
    param_1[0x13] = local_58;
    local_58 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  FUN_1449db362(&local_70);
  FUN_1446ddc76(&local_78,"Shift",1);
  plVar6 = (longlong *)FUN_1447c1074(local_78);
  if (plVar6 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
    FUN_14485c47a((longlong)param_1 + 0x14,uVar4);
  }
  cVar3 = FUN_144729dda((longlong)param_1 + 0x14);
  if (cVar3 == '\0') {
    uVar4 = FUN_145ffd894();
    local_60 = (undefined8 *)0x0;
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
    FUN_1446efa72(&local_60,0,2,0x10);
    puVar2 = local_60;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,2);
    *local_60 = &PTR_LAB_149e020b0;
    uVar5 = FUN_144a3f946();
    puVar2[2] = uVar5;
    *puVar2 = &PTR_FUN_14b4d9260;
    puVar2[3] = param_1;
    FUN_1448b6402(uVar4,&local_70,&local_60);
    FUN_1449db362(&local_60);
  }
  local_60 = (undefined8 *)0x0;
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_1446efa72(&local_60,0,2,0x10);
  puVar2 = local_60;
  local_58 = (longlong *)CONCAT44(local_58._4_4_,2);
  *local_60 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_14b4d92d0;
  puVar2[3] = param_1;
  FUN_1448b6402(&DAT_14c872d10,&local_70,&local_60);
  FUN_1449db362(&local_60);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffd894 FUN_145ffd894 body=115 status=ok
// SIG undefined FUN_145ffd894(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145ffd894(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb966d8) {
    FUN_144b3d300(&DAT_14cb966d8);
    if (DAT_14cb966d8 == -1) {
      DAT_14cb966c0 = 0;
      _DAT_14cb966c8 = 0;
      _DAT_14cb966d0 = 2;
      atexit(FUN_143eedb78);
      _Init_thread_footer(&DAT_14cb966d8);
    }
  }
  return &DAT_14cb966c0;
}



// FUNCTION 145ffd908 FUN_145ffd908 body=233 status=ok
// SIG undefined FUN_145ffd908(void)

undefined8 * FUN_145ffd908(undefined8 *param_1,longlong *param_2)

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
      FUN_14474d06a(&DAT_14c86a978,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c86a980;
      lVar6 = (longlong)(int)DAT_14c86a980;
      DAT_14c86a980 = DAT_14c86a980 + 1;
      if (DAT_14c86a984 < DAT_14c86a980) {
        FUN_1447a71f6(&DAT_14c86a978,uVar3);
      }
      lVar2 = DAT_14c86a978;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c86a978 + lVar6) = 0;
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



// FUNCTION 145ffd9fe FUN_145ffd9fe body=114 status=ok
// SIG undefined FUN_145ffd9fe(void)

void FUN_145ffd9fe(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ffda72(param_1,iVar1);
    }
    FUN_14004da53((longlong)iVar1 * 2 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb43da(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ffda72 FUN_145ffda72 body=130 status=ok
// SIG undefined FUN_145ffda72(void)

void FUN_145ffda72(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ffdb04 FUN_145ffdb04 body=233 status=ok
// SIG undefined FUN_145ffdb04(void)

undefined8 * FUN_145ffdb04(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a615d10;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"HeightFogComponent0",1);
  uVar2 = FUN_1415494ba();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffdbfa FUN_145ffdbfa body=234 status=ok
// SIG undefined FUN_145ffdbfa(void)

undefined8 * FUN_145ffdbfa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *param_1 = &PTR_FUN_14a6ccbd0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf8;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0x11] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf8;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x19] = DAT_14c8464e0;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1c] = DAT_14c8464e0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = DAT_14c8464f0;
  param_1[0x1f] = 0;
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xf8;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x115) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 145ffdcf0 FUN_145ffdcf0 body=233 status=ok
// SIG undefined FUN_145ffdcf0(void)

undefined8 * FUN_145ffdcf0(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140834366();
  *param_1 = &PTR_FUN_14a74b9c0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"SkyLightComponent0",1);
  uVar2 = FUN_141221a30();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  FUN_1405bab3a(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffdde6 FUN_145ffdde6 body=233 status=ok
// SIG undefined FUN_145ffdde6(void)

undefined8 * FUN_145ffdde6(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a8090f0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_28,L"CameraShakeSourceComponent",1);
  local_48 = FUN_1411e5cd6();
  local_38 = 0;
  local_40 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,local_28,local_48);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
    lVar2 = param_1[0x72];
  }
  param_1[0x39] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffded0 FUN_145ffded0 body=233 status=ok
// SIG undefined FUN_145ffded0(void)

undefined8 * FUN_145ffded0(undefined8 *param_1,longlong *param_2)

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
      FUN_14474d06a(&DAT_14cb121c0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb121c8;
      lVar6 = (longlong)(int)DAT_14cb121c8;
      DAT_14cb121c8 = DAT_14cb121c8 + 1;
      if (DAT_14cb121cc < DAT_14cb121c8) {
        FUN_1447a71f6(&DAT_14cb121c0,uVar3);
      }
      lVar2 = DAT_14cb121c0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb121c0 + lVar6) = 0;
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



// FUNCTION 145ffdfd0 FUN_145ffdfd0 body=234 status=ok
// SIG undefined FUN_145ffdfd0(void)

undefined8 * FUN_145ffdfd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14130963a();
  *param_1 = &PTR_FUN_14ad60dc0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
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
  param_1[0x15] = 0x1000000000000;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7f530;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145ffe0ba FUN_145ffe0ba body=53 status=ok
// SIG undefined FUN_145ffe0ba(void)

void FUN_145ffe0ba(longlong *param_1)

{
  FUN_1415b65f4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ffe0f0 FUN_145ffe0f0 body=53 status=ok
// SIG undefined FUN_145ffe0f0(void)

void FUN_145ffe0f0(longlong *param_1)

{
  FUN_1415b67aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ffe130 FUN_145ffe130 body=233 status=ok
// SIG undefined FUN_145ffe130(void)

undefined8 * FUN_145ffe130(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b7c16c0;
  FUN_1446f470e(&local_20,L"BoxComponent",1);
  uVar1 = FUN_14088b378();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if (lVar2 != 0) {
    FUN_14127091c(lVar2,1);
    local_38 = 0x4072c00000000000;
    local_30 = 0x407f400000000000;
    local_28 = 0x4069000000000000;
    FUN_140c9cc04(lVar2,&local_38,1);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x39] = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffe21a FUN_145ffe21a body=122 status=ok
// SIG undefined FUN_145ffe21a(void)

longlong FUN_145ffe21a(longlong param_1,longlong param_2)

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
    FUN_145ffe294(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145ffe294 FUN_145ffe294 body=123 status=ok
// SIG undefined FUN_145ffe294(void)

undefined8 * FUN_145ffe294(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a9f32c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 145ffe318 FUN_145ffe318 body=237 status=ok
// SIG undefined FUN_145ffe318(void)

undefined8 * FUN_145ffe318(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_14585362c(param_1,uVar1);
  *param_1 = &PTR_FUN_14bd28a00;
  param_1[5] = &PTR_FUN_14bd28cd0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = &DAT_200000002;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  lVar2 = FUN_145a92b78();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[6] = lVar2;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  return param_1;
}



// FUNCTION 145ffe406 FUN_145ffe406 body=613 status=ok
// SIG undefined FUN_145ffe406(void)

void FUN_145ffe406(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 *local_40;
  longlong *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b7090e(param_1,&local_40,param_2);
  if (local_40 != (undefined8 *)0x0) {
    if (*(int *)(local_40 + 2) != 0) {
      *(undefined4 *)(local_40 + 2) = 0;
    }
    local_58 = local_40;
    plStack_50 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    local_30 = &local_58;
    FUN_145ffe6d4(param_1 + 0xe);
    plVar2 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    puVar6 = local_40;
    local_68 = *local_40;
    local_60 = local_40[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_1459b6cd8(param_1 + 0x6e,&local_68);
    lVar4 = param_1[0x24];
    if (lVar4 != 0) {
      local_58 = puVar6;
      plStack_50 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_1415b6960(lVar4,&local_58);
      plVar2 = plStack_50;
      puVar6 = local_40;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          puVar6 = local_40;
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            puVar6 = local_40;
          }
        }
      }
    }
    lVar4 = param_1[0x7f];
    if (lVar4 != 0) {
      local_58 = (undefined8 *)0x0;
      plStack_50 = (longlong *)0x0;
      FUN_14101cdd4(puVar6 + 4,&DAT_14cb97670,&local_58);
      iVar5 = FUN_1411a58b4(lVar4 + 0x50,&local_58);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((iVar5 != 0) && (*(int *)(param_1[0x7f] + 0x58) == *(int *)(param_1[0x7f] + 0x84))) {
        FUN_143f38760(param_1);
      }
    }
    FUN_145c7d76c(param_1);
    plStack_50 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x68))(param_1,&local_58);
    plVar2 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ffe66c FUN_145ffe66c body=9 status=ok
// SIG undefined FUN_145ffe66c(void)

void FUN_145ffe66c(longlong param_1)

{
  FUN_145ffe676(param_1 + 0x10);
  return;
}



// FUNCTION 145ffe676 FUN_145ffe676 body=94 status=ok
// SIG undefined FUN_145ffe676(void)

void FUN_145ffe676(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145ffe6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ffe6d4 FUN_145ffe6d4 body=248 status=ok
// SIG undefined FUN_145ffe6d4(void)

void FUN_145ffe6d4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar7 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar8 = iVar4;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 2;
        iVar8 = iVar7;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar8 - iVar6;
      if (bVar5 == false) {
        if (iVar12 != iVar6) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_14101cee4(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar8;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 145ffe7cc FUN_145ffe7cc body=53 status=ok
// SIG undefined FUN_145ffe7cc(void)

void FUN_145ffe7cc(longlong *param_1)

{
  FUN_145ffe802();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ffe802 FUN_145ffe802 body=314 status=ok
// SIG undefined FUN_145ffe802(void)

void FUN_145ffe802(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffe93e FUN_145ffe93e body=343 status=ok
// SIG undefined FUN_145ffe93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ffe93e(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  
  FUN_145ffea96();
  FUN_145ffeae0();
  puVar2 = DAT_14ca81168;
  if (DAT_14ca81168 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca81168 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (DAT_14ca81148 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca81138 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca81128 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81100);
  if (DAT_14ca810f0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = -0x140;
  puVar3 = &DAT_14ca81080;
  do {
    *(undefined4 *)(puVar3 + 0x48) = 0;
    if (*(longlong *)(puVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400329f4(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  _DAT_14ca80f88 = 0;
  if (DAT_14ca80f80 != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(&DAT_14ca80f40);
  _DAT_14ca80f38 = 0;
  if (DAT_14ca80f30 != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(&DAT_14ca80ef0);
  if (DAT_14ca80ed8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80ec8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ffea96 FUN_145ffea96 body=74 status=ok
// SIG undefined FUN_145ffea96(void)

void FUN_145ffea96(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca811a0;
  puVar3 = DAT_14ca811b0;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145ffeae0 FUN_145ffeae0 body=74 status=ok
// SIG undefined FUN_145ffeae0(void)

void FUN_145ffeae0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca81180;
  puVar3 = DAT_14ca81190;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145ffeb2a FUN_145ffeb2a body=146 status=ok
// SIG undefined FUN_145ffeb2a(void)

code * FUN_145ffeb2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415b6b98();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MarkPass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenTranslucencyRadianceCacheMarkPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000012c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca02500;
  return FUN_145dca818;
}



// FUNCTION 145ffebbc FUN_145ffebbc body=226 status=ok
// SIG undefined FUN_145ffebbc(void)

longlong * FUN_145ffebbc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e96a6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ffeca0 FUN_145ffeca0 body=138 status=ok
// SIG undefined FUN_145ffeca0(void)

code * FUN_145ffeca0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportUVToHZBBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ffed2a;
}



// FUNCTION 145ffed2a FUN_145ffed2a body=138 status=ok
// SIG undefined FUN_145ffed2a(void)

code * FUN_145ffed2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FurthestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ffedb4;
}



// FUNCTION 145ffedb4 FUN_145ffedb4 body=144 status=ok
// SIG undefined FUN_145ffedb4(void)

code * FUN_145ffedb4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c13008();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheMarkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheMarkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e972e;
}



// FUNCTION 145ffee44 FUN_145ffee44 body=659 status=ok
// SIG undefined FUN_145ffee44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ffee44(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eaff0) {
    FUN_144b3d300(&DAT_14c9eaff0);
    if (DAT_14c9eaff0 == -1) {
      _DAT_14c9eaf90 = 0x3f800000bf800000;
      puRam000000014c9eaf98 = &DAT_3f8000003f800000;
      _DAT_14c9eafa0 = &DAT_3f8000003f800000;
      uRam000000014c9eafa8 = 0xbf8000003f800000;
      _DAT_14c9eafb0 = 0xbf8000003f800000;
      uRam000000014c9eafb8 = 0x3f800000bf800000;
      _DAT_14c9eafc0 = &DAT_3f8000003f800000;
      uRam000000014c9eafc8 = 0xbf800000bf800000;
      _DAT_14c9eafd0 = 0xbf8000003f800000;
      uRam000000014c9eafd8 = 0xbf800000bf800000;
      _DAT_14c9eafe0 = 0xbf800000;
      uRam000000014c9eafe4 = 0x3f800000;
      uRam000000014c9eafe8 = 0xbf800000;
      uRam000000014c9eafec = 0xbf800000;
      _Init_thread_footer(&DAT_14c9eaff0);
    }
  }
  local_b8 = &DAT_14a247a20;
  local_b0 = 0x3c;
  local_c8 = &local_b8;
  FUN_1415b6d4b(&local_c0,param_2,L"FInstanceCullingOcclusionQueryBox_IndexBuffer",0);
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 == &local_c0) {
LAB_145fff03d:
    if (local_c0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_c0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar4 = *plVar1;
    *plVar1 = local_c0;
    local_c0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_145fff03d;
    }
  }
  local_b8 = &DAT_14c9eaf90;
  local_b0 = 8;
  local_c8 = &local_b8;
  FUN_1415b6edf(&local_c0,param_2,L"FInstanceCullingOcclusionQueryBox_VertexBuffer",0);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (plVar1 != &local_c0) {
    lVar4 = *plVar1;
    *plVar1 = local_c0;
    local_c0 = 0;
    if (lVar4 == 0) goto LAB_145ffefb6;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c0 != 0) {
    LOCK();
    puVar2 = (uint *)(local_c0 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_145ffefb6:
  local_30 = 0x1100000001;
  local_b8 = (undefined *)0xc00030000;
  lVar5 = FUN_14486d71a();
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != lVar5) {
    *(longlong *)(param_1 + 0x20) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff0d8 FUN_145fff0d8 body=20 status=ok
// SIG undefined FUN_145fff0d8(void)

void FUN_145fff0d8(void)

{
  DAT_14c9a7790 = FUN_145fff0ec();
  return;
}



// FUNCTION 145fff0ec FUN_145fff0ec body=225 status=ok
// SIG undefined FUN_145fff0ec(void)

void FUN_145fff0ec(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c9a7790 == 0) {
    FUN_1446ddc76(&local_18,"AttributeManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14a1c8310;
    DAT_14c9a7790 = FUN_14106fa82(&local_28,local_18,0x20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff1ce FUN_145fff1ce body=99 status=ok
// SIG undefined FUN_145fff1ce(void)

void FUN_145fff1ce(longlong param_1)

{
  FUN_145fff232(param_1 + 0x78);
  FUN_145fff276(param_1 + 200);
  FUN_145fff2ba(param_1 + 0x28);
  FUN_145fff2fe(param_1 + 0x118);
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    FUN_1415b744c(param_1 + 0x168);
    FUN_1415b7596(param_1 + 0x168);
    return;
  }
  return;
}



// FUNCTION 145fff232 FUN_145fff232 body=68 status=ok
// SIG undefined FUN_145fff232(void)

void FUN_145fff232(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1415b707a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145fff276 FUN_145fff276 body=68 status=ok
// SIG undefined FUN_145fff276(void)

void FUN_145fff276(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145fff342();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145fff2ba FUN_145fff2ba body=68 status=ok
// SIG undefined FUN_145fff2ba(void)

void FUN_145fff2ba(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1415b71c0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145fff2fe FUN_145fff2fe body=68 status=ok
// SIG undefined FUN_145fff2fe(void)

void FUN_145fff2fe(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1415b7306();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145fff342 FUN_145fff342 body=332 status=ok
// SIG undefined FUN_145fff342(void)

void FUN_145fff342(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fff48f FUN_145fff48f body=20 status=ok
// SIG undefined FUN_145fff48f(void)

void FUN_145fff48f(void)

{
  DAT_14cb1ae68 = FUN_145fff4a4();
  return;
}



// FUNCTION 145fff4a4 FUN_145fff4a4 body=225 status=ok
// SIG undefined FUN_145fff4a4(void)

void FUN_145fff4a4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1ae68 == 0) {
    FUN_1446ddc76(&local_18,"SpawnManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ab65300;
    DAT_14cb1ae68 = FUN_14106fa82(&local_28,local_18,0x2e);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff586 FUN_145fff586 body=20 status=ok
// SIG undefined FUN_145fff586(void)

void FUN_145fff586(void)

{
  DAT_14cb1c840 = FUN_145fff59a();
  return;
}



// FUNCTION 145fff59a FUN_145fff59a body=225 status=ok
// SIG undefined FUN_145fff59a(void)

void FUN_145fff59a(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb1c840 == 0) {
    FUN_1446ddc76(&local_18,"GbxNavManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ab9f880;
    DAT_14cb1c840 = FUN_14106fa82(&local_28,local_18,10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff67c FUN_145fff67c body=20 status=ok
// SIG undefined FUN_145fff67c(void)

void FUN_145fff67c(void)

{
  DAT_14cb23aa0 = FUN_145fff690();
  return;
}



// FUNCTION 145fff690 FUN_145fff690 body=225 status=ok
// SIG undefined FUN_145fff690(void)

void FUN_145fff690(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb23aa0 == 0) {
    FUN_1446ddc76(&local_18,"TargetingManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac898f0;
    DAT_14cb23aa0 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff772 FUN_145fff772 body=20 status=ok
// SIG undefined FUN_145fff772(void)

void FUN_145fff772(void)

{
  DAT_14cb23a68 = FUN_145fff786();
  return;
}



// FUNCTION 145fff786 FUN_145fff786 body=225 status=ok
// SIG undefined FUN_145fff786(void)

void FUN_145fff786(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb23a68 == 0) {
    FUN_1446ddc76(&local_18,"CoverManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac88d50;
    DAT_14cb23a68 = FUN_14106fa82(&local_28,local_18,2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff868 FUN_145fff868 body=20 status=ok
// SIG undefined FUN_145fff868(void)

void FUN_145fff868(void)

{
  DAT_14cb23f08 = FUN_145fff87c();
  return;
}



// FUNCTION 145fff87c FUN_145fff87c body=225 status=ok
// SIG undefined FUN_145fff87c(void)

void FUN_145fff87c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb23f08 == 0) {
    FUN_1446ddc76(&local_18,"GbxAITicketManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac8b220;
    DAT_14cb23f08 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fff95e FUN_145fff95e body=20 status=ok
// SIG undefined FUN_145fff95e(void)

void FUN_145fff95e(void)

{
  DAT_14cb23f20 = FUN_145fff972();
  return;
}



// FUNCTION 145fff972 FUN_145fff972 body=225 status=ok
// SIG undefined FUN_145fff972(void)

void FUN_145fff972(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb23f20 == 0) {
    FUN_1446ddc76(&local_18,"GpsManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac8b430;
    DAT_14cb23f20 = FUN_14106fa82(&local_28,local_18,10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fffa54 FUN_145fffa54 body=20 status=ok
// SIG undefined FUN_145fffa54(void)

void FUN_145fffa54(void)

{
  DAT_14cb241a8 = FUN_145fffa68();
  return;
}



// FUNCTION 145fffa68 FUN_145fffa68 body=225 status=ok
// SIG undefined FUN_145fffa68(void)

void FUN_145fffa68(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb241a8 == 0) {
    FUN_1446ddc76(&local_18,"GbxBrainManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac8c580;
    DAT_14cb241a8 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fffb4a FUN_145fffb4a body=20 status=ok
// SIG undefined FUN_145fffb4a(void)

void FUN_145fffb4a(void)

{
  DAT_14cb24688 = FUN_145fffb5e();
  return;
}



// FUNCTION 145fffb5e FUN_145fffb5e body=225 status=ok
// SIG undefined FUN_145fffb5e(void)

void FUN_145fffb5e(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb24688 == 0) {
    FUN_1446ddc76(&local_18,"FGbxEffectAreaManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac8d5c0;
    DAT_14cb24688 = FUN_14106fa82(&local_28,local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fffc40 FUN_145fffc40 body=20 status=ok
// SIG undefined FUN_145fffc40(void)

void FUN_145fffc40(void)

{
  DAT_14cb246a0 = FUN_145fffc54();
  return;
}



// FUNCTION 145fffc54 FUN_145fffc54 body=225 status=ok
// SIG undefined FUN_145fffc54(void)

void FUN_145fffc54(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb246a0 == 0) {
    FUN_1446ddc76(&local_18,"PerceptionManager",1);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14a1c87c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14ac8d6f0;
    DAT_14cb246a0 = FUN_14106fa82(&local_28,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fffd36 FUN_145fffd36 body=20 status=ok
// SIG undefined FUN_145fffd36(void)

void FUN_145fffd36(void)

{
  DAT_14cb25ac8 = FUN_145fffd4a();
  return;
}


