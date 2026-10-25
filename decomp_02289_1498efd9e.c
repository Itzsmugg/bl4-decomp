// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498efd9e FUN_1498efd9e body=101 status=ok
// SIG undefined FUN_1498efd9e(void)

void FUN_1498efd9e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498efe04 FUN_1498efe04 body=103 status=ok
// SIG undefined FUN_1498efe04(void)

undefined8 FUN_1498efe04(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498efe6e FUN_1498efe6e body=132 status=ok
// SIG undefined FUN_1498efe6e(void)

void FUN_1498efe6e(longlong param_1,int param_2)

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



// FUNCTION 1498efef4 FUN_1498efef4 body=136 status=ok
// SIG undefined FUN_1498efef4(void)

void FUN_1498efef4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1498eff7c FUN_1498eff7c body=62 status=ok
// SIG undefined FUN_1498eff7c(void)

void FUN_1498eff7c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498effba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1498effba FUN_1498effba body=93 status=ok
// SIG undefined FUN_1498effba(void)

ulonglong FUN_1498effba(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1498f0018 FUN_1498f0018 body=25 status=ok
// SIG undefined FUN_1498f0018(void)

void FUN_1498f0018(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f002d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498f0032 FUN_1498f0032 body=29 status=ok
// SIG undefined FUN_1498f0032(void)

undefined8 FUN_1498f0032(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f0050 FUN_1498f0050 body=369 status=ok
// SIG undefined FUN_1498f0050(void)

longlong * FUN_1498f0050(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14706f710(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1402ac1b3(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14706f710(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1498f01c2(param_2);
        FUN_1402ac1b3(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1498f01c2 FUN_1498f01c2 body=64 status=ok
// SIG undefined FUN_1498f01c2(void)

longlong FUN_1498f01c2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14706f770(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1498f0202(lVar2,1);
  return lVar2;
}



// FUNCTION 1498f0202 FUN_1498f0202 body=19 status=ok
// SIG undefined FUN_1498f0202(void)

void FUN_1498f0202(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 1498f0242 FUN_1498f0242 body=443 status=ok
// SIG undefined FUN_1498f0242(void)

void FUN_1498f0242(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined7 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*param_1 == 0) && (*(int *)(param_1[0xc] + 0xb8) == 0)) {
    plVar2 = (longlong *)FUN_1498f4c88();
    *param_1 = (longlong)plVar2;
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar5 = (ulonglong)*(ushort *)(param_1 + 10);
    lVar3 = lVar3 + uVar5 + -1;
    lVar7 = lVar3 % (longlong)uVar5;
    iVar9 = (int)(lVar3 / (longlong)uVar5);
    *(int *)(param_1 + 9) = iVar9;
    *(int *)(param_1 + 4) = iVar9;
    uVar10 = iVar9 + 0x1f;
    if (0x1f < uVar10) {
      plVar2 = param_1 + 1;
      uVar11 = uVar10 >> 5;
      if (*(int *)((longlong)param_1 + 0x24) + 0x1fU >> 5 < uVar11) {
        lVar7 = 0;
        FUN_14499171c(plVar2,0,uVar11,4);
        *(uint *)((longlong)param_1 + 0x24) = uVar10 & 0xffffffe0;
      }
      plVar6 = (longlong *)param_1[3];
      if ((longlong *)param_1[3] == (longlong *)0x0) {
        plVar6 = plVar2;
      }
      uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
      if (uVar10 < 0x120) {
        uVar11 = uVar10 >> 3 & 0x3c;
        iVar9 = (int)CONCAT71(uVar8,0xff);
      }
      else {
        uVar11 = uVar11 << 2;
        iVar9 = (int)CONCAT71(uVar8,0xff);
      }
      memset(plVar6,iVar9,(ulonglong)uVar11);
      iVar9 = (int)param_1[4];
      iVar1 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar1 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        if ((longlong *)param_1[3] != (longlong *)0x0) {
          plVar2 = (longlong *)param_1[3];
        }
        bVar4 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar2 + (longlong)(iVar1 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar2 + (longlong)(iVar1 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    if ((*(byte *)(param_1[0xc] + 0xbc) & 1) == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      *(int *)(param_1 + 8) = (int)param_1[9];
      uVar10 = (int)param_1[9] + 0x1f;
      if (0x1f < uVar10) {
        plVar2 = param_1 + 5;
        uVar11 = uVar10 >> 5;
        if (*(int *)((longlong)param_1 + 0x44) + 0x1fU >> 5 < uVar11) {
          FUN_14499171c(plVar2,0,uVar11,4);
          *(uint *)((longlong)param_1 + 0x44) = uVar10 & 0xffffffe0;
        }
        plVar6 = (longlong *)param_1[7];
        if ((longlong *)param_1[7] == (longlong *)0x0) {
          plVar6 = plVar2;
        }
        if (uVar10 < 0x120) {
          uVar11 = uVar10 >> 3 & 0x3c;
        }
        else {
          uVar11 = uVar11 << 2;
        }
        memset(plVar6,0,(ulonglong)uVar11);
        iVar9 = (int)param_1[8];
        iVar1 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (iVar9 % 0x20 != 0) {
          if ((longlong *)param_1[7] != (longlong *)0x0) {
            plVar2 = (longlong *)param_1[7];
          }
          bVar4 = -(char)(iVar9 % 0x20);
          *(uint *)((longlong)plVar2 + (longlong)(iVar1 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar2 + (longlong)(iVar1 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1498f03fe FUN_1498f03fe body=107 status=ok
// SIG undefined FUN_1498f03fe(void)

void FUN_1498f03fe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0xd];
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f046a FUN_1498f046a body=217 status=ok
// SIG undefined FUN_1498f046a(void)

undefined4 FUN_1498f046a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 8) < 2) {
    uVar5 = 0;
    goto LAB_1498f0487;
  }
  local_28 = 0;
  uStack_20 = 0;
  iVar3 = FUN_1403de9f2(0,&local_28,&DAT_149e31048,1);
  lVar1 = local_28;
  if (iVar3 < 1) {
LAB_1498f050b:
    uVar5 = 0;
  }
  else {
    if (iVar3 != 1) {
      cVar2 = FUN_1405b43cc(local_28 + 0x10);
      uVar4 = 0xffffffff;
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x18) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(lVar1 + 0x10);
        }
        uVar4 = _wtoi(_Str);
      }
      if ((uVar4 != 0) && (uVar4 != *(ushort *)(param_2 + 4))) goto LAB_1498f050b;
    }
    uVar5 = FUN_1498f5351(local_28,param_2);
  }
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_1498f0487:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f0544 FUN_1498f0544 body=110 status=ok
// SIG undefined FUN_1498f0544(void)

void FUN_1498f0544(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14befbd10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = *param_2;
  lVar1 = param_2[1];
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  return;
}



// FUNCTION 1498f05b2 FUN_1498f05b2 body=184 status=ok
// SIG undefined FUN_1498f05b2(void)

void FUN_1498f05b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14befbd10;
  if (param_1[0xe] != 0) {
    cVar3 = FUN_144729dda(param_1 + 0x15);
    if (cVar3 != '\0') {
      plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x15);
      (**(code **)(*plVar4 + 0x2f0))(plVar4,param_1[0xe],1);
    }
    FUN_1400020a8(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xc];
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 1);
  return;
}



// FUNCTION 1498f06e6 FUN_1498f06e6 body=984 status=ok
// SIG undefined FUN_1498f06e6(void)

undefined4 FUN_1498f06e6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 uStack_80;
  undefined *local_70;
  int local_68;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  (**(code **)(*param_2 + 0x160))(param_2,&local_88);
  lVar3 = param_1 + 0xa8;
  cVar9 = FUN_1498f0ac0(lVar3);
  if (cVar9 != '\0') {
    FUN_1400021e4(&local_88,&local_b8);
    ppuVar16 = local_b8;
    if ((int)local_b0 == 0) {
      ppuVar16 = (undefined **)&DAT_149dfb77a;
    }
    uVar12 = FUN_1446f4bba();
    local_c8 = 0;
    uVar12 = FUN_146900dcf(uVar12,ppuVar16,8,0);
    FUN_14485c47a(lVar3,uVar12);
    if (local_b8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  uVar11 = 0;
  cVar9 = FUN_144b00e3a(lVar3,0,1);
  if (cVar9 != '\0') {
    FUN_1402ac1b3(param_2,param_1 + 0x90);
    uVar8 = (ulonglong)local_b8 >> 0x20;
    local_b8 = (undefined **)((ulonglong)local_b8 & 0xffffffff00000000);
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_b8,4);
      }
      else {
        FUN_14572512c(param_2,&local_b8);
      }
      uVar15 = (uint)local_b8;
    }
    else {
      uVar15 = *(uint *)*puVar5;
      local_b8 = (undefined **)CONCAT44((int)uVar8,uVar15);
      *puVar5 = (ulonglong)puVar1;
    }
    if (uVar15 < 0x401) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(uint *)(param_1 + 0x84) != uVar15) {
        FUN_14706f710(param_1 + 0x78);
        uVar15 = (uint)local_b8;
      }
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar15 - 1);
      while (0 < (int)uVar15) {
        uVar12 = FUN_1498f01c2(param_1 + 0x78);
        FUN_1402ac1b3(param_2,uVar12);
        uVar15 = (uint)local_b8;
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,(uint)local_b8 - 1);
      }
      pbVar4 = (byte *)(param_1 + 0x88);
      pbVar6 = *(byte **)param_2[1];
      if ((byte *)((undefined8 *)param_2[1])[1] < pbVar6 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,pbVar4,1);
      }
      else {
        *pbVar4 = *pbVar6;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      if (*pbVar4 < 4) {
        FUN_1408383eb(param_2,param_1 + 0xa0);
        FUN_1408383eb(param_2,param_1 + 0x68);
        local_68 = 0;
        puVar5 = (ulonglong *)param_2[1];
        piVar2 = (int *)*puVar5 + 1;
        if ((int *)puVar5[1] < piVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
            iVar10 = local_68;
          }
          else {
            FUN_14572512c(param_2,&local_68);
            iVar10 = local_68;
          }
        }
        else {
          iVar10 = *(int *)*puVar5;
          *puVar5 = (ulonglong)piVar2;
        }
        if (iVar10 < 0x81) {
          local_68 = iVar10 + -1;
          if (0 < iVar10) {
            do {
              local_70 = (undefined *)0x0;
              local_88 = 0;
              uStack_80 = 0;
              (**(code **)(*param_2 + 0x160))(param_2,&local_70);
              FUN_14021219d(param_2,&local_88);
              local_b8 = &local_70;
              local_b0 = &local_88;
              FUN_1406e263c(param_1 + 8,local_64,&local_b8,0);
              if (local_88 != 0) {
                FUN_1400020a8();
              }
              iVar10 = local_68 + -1;
              bVar7 = 0 < local_68;
              local_68 = iVar10;
            } while (bVar7);
          }
          lVar13 = FUN_14479d2ce(lVar3);
          uVar12 = FUN_14001cc68((longlong)
                                 (int)(-*(int *)(lVar13 + 0x5c) &
                                      (*(int *)(lVar13 + 0x58) + *(int *)(lVar13 + 0x5c)) - 1U),0);
          *(undefined8 *)(param_1 + 0x70) = uVar12;
          plVar14 = (longlong *)FUN_14479d2ce(lVar3);
          (**(code **)(*plVar14 + 0x2e8))(plVar14,*(undefined8 *)(param_1 + 0x70),1);
          local_b8 = &PTR_LAB_14ba6ce70;
          local_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          FUN_14904501e(local_98,param_2);
          uVar12 = FUN_14479d2ce(lVar3);
          uVar11 = FUN_14902ace4(*(undefined8 *)(param_1 + 0x70),uVar12,&local_b8);
          FUN_149044fa2(&local_b8);
          goto LAB_1498f0850;
        }
      }
    }
    uVar11 = 0;
  }
LAB_1498f0850:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f0ac0 FUN_1498f0ac0 body=16 status=ok
// SIG undefined FUN_1498f0ac0(void)

byte FUN_1498f0ac0(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1498f0ad0 FUN_1498f0ad0 body=252 status=ok
// SIG undefined FUN_1498f0ad0(void)

undefined8 * FUN_1498f0ad0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  if ((&DAT_14befd410)[*(byte *)(param_2 + 4)] == '\x01') {
    FUN_1400021e4(param_2,&local_28);
    if (iStack_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)CONCAT44(uStack_24,local_28);
    }
    uVar1 = FUN_1446f4bba();
    local_38 = 0;
    uVar1 = FUN_146900dcf(uVar1,puVar2,8,0);
    FUN_14485c47a(param_1,uVar1);
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
  }
  else if ((&DAT_14befd412)[*(byte *)(param_2 + 4)] == '\x01') {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    iStack_20 = param_2[2];
    uStack_1c = param_2[3];
    uVar1 = FUN_1446f4bba();
    uVar1 = FUN_146900d4f(uVar1,&local_28,0);
    FUN_14485c47a(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f0bd0 FUN_1498f0bd0 body=500 status=ok
// SIG undefined FUN_1498f0bd0(void)

undefined8 *
FUN_1498f0bd0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_14befbd90;
  param_1[1] = &PTR_FUN_14befbdc0;
  param_1[2] = DAT_14cc32308;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar7 = 0;
  param_1[9] = puVar7;
  param_1[8] = puVar7;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_140212f8e(param_1 + 0xc);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0xd) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar6;
  param_1[0xf] = param_2;
  *(undefined2 *)(param_1 + 0x10) = 0;
  uVar8 = FUN_1405d8a54(0);
  param_1[3] = uVar8;
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_50);
  (**(code **)(*local_50 + 0x18))(local_50,*param_4);
  (**(code **)(*local_50 + 0x28))(local_50,*(undefined2 *)(param_4 + 1));
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    param_1[6] = local_50;
    plVar9 = (longlong *)param_1[7];
    if (plVar9 == (longlong *)0x0) goto LAB_1498f0cc8;
    param_1[7] = 0;
LAB_1498f0d8c:
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1498f0cc8;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    param_1[6] = local_50;
    plVar9 = (longlong *)param_1[7];
    if (local_48 != plVar9) {
      param_1[7] = local_48;
      if (plVar9 == (longlong *)0x0) goto LAB_1498f0cc8;
      goto LAB_1498f0d8c;
    }
    LOCK();
    plVar9 = local_48 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1498f0cc8;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar9 = plVar1;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1498f0cc8:
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
  FUN_1498f0dc6(param_1);
  local_60 = 0;
  local_68 = 0xffffffffffffffff;
  uVar8 = FUN_1411b1052(param_1,L"FUdpMessageBeacon",0x20000,1);
  param_1[0x11] = uVar8;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f0dc6 FUN_1498f0dc6 body=228 status=ok
// SIG undefined FUN_1498f0dc6(void)

void FUN_1498f0dc6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_40);
  (**(code **)(*local_40 + 0x18))(local_40,0x7f000001);
  (**(code **)(*local_40 + 0x28))(local_40,uVar5);
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
    FUN_146b12f1e((longlong *)(param_1 + 0x50),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_40;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f0eac FUN_1498f0eac body=275 status=ok
// SIG undefined FUN_1498f0eac(void)

void FUN_1498f0eac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14befbd90;
  param_1[1] = &PTR_FUN_14befbdc0;
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)param_1[0x11];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1);
    }
  }
  param_1[6] = 0;
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    param_1[7] = 0;
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
  FUN_146b12a16(param_1[10],*(undefined4 *)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1498fae18(param_1 + 10);
  }
  FUN_14018802a(param_1[3]);
  param_1[3] = 0;
  FUN_146b12a16(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) goto LAB_1498f0f7c;
  while ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    param_1[9] = *(undefined8 *)param_1[9];
LAB_1498f0f7c:
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001498f0fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498f0fc0 FUN_1498f0fc0 body=164 status=ok
// SIG undefined FUN_1498f0fc0(void)

void FUN_1498f0fc0(longlong param_1,int param_2)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < *(int *)(param_1 + 0x20)) {
    FUN_140212f8e(&local_28);
    iVar1 = *(int *)(param_1 + 0x20);
    dVar2 = (double)(param_2 / iVar1);
    *(longlong *)(param_1 + 0x60) =
         (longlong)((double)(*(longlong *)(param_1 + 0x60) - local_28) * dVar2) + local_28;
    *(longlong *)(param_1 + 0x28) =
         local_28 - (longlong)((double)(local_28 - *(longlong *)(param_1 + 0x28)) * dVar2);
    *(int *)(param_1 + 0x20) = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
              (*(longlong **)(param_1 + 0x18),(longlong)param_2 % (longlong)iVar1 & 0xffffffff);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f1070 FUN_1498f1070 body=219 status=ok
// SIG undefined FUN_1498f1070(void)

undefined8 FUN_1498f1070(longlong param_1)

{
  double dVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x80) == '\0') {
    do {
      FUN_140212f8e(&local_48);
      local_50 = *(undefined8 *)(param_1 + 0x10);
      FUN_1498f114c(param_1,&local_48,&local_50);
      dVar1 = (double)(*(longlong *)(param_1 + 0x60) - local_48) / 10000.0;
      if (dVar1 <= 100.0) {
        dVar1 = 100.0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                (*(longlong **)(param_1 + 0x18),(longlong)dVar1,0);
    } while (*(char *)(param_1 + 0x80) != '\x01');
  }
  local_48 = *(longlong *)(param_1 + 0x10);
  FUN_1498f11ca(param_1,3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f114c FUN_1498f114c body=125 status=ok
// SIG undefined FUN_1498f114c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498f114c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1498f14ca();
  if (*param_2 < *(longlong *)(param_1 + 0x60)) {
    return;
  }
  lVar2 = (longlong)((double)_DAT_14cc32300 * (double)*(int *)(param_1 + 0x20));
  lVar3 = DAT_14cc32308;
  if (DAT_14cc32308 < lVar2) {
    lVar3 = lVar2;
  }
  LOCK();
  *(longlong *)(param_1 + 0x10) = lVar3;
  UNLOCK();
  cVar1 = FUN_1498f11ca(param_1,5,param_3);
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x10) + *param_2;
  }
  FUN_1498f1374(param_1,param_3);
  return;
}



// FUNCTION 1498f11ca FUN_1498f11ca body=259 status=ok
// SIG undefined FUN_1498f11ca(void)

ulonglong FUN_1498f11ca(longlong param_1,undefined1 param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_114 [4];
  undefined1 local_110 [168];
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = *(undefined4 *)(param_1 + 0x68);
  uStack_40 = *(undefined4 *)(param_1 + 0x6c);
  uStack_3c = *(undefined4 *)(param_1 + 0x70);
  uStack_38 = *(undefined4 *)(param_1 + 0x74);
  local_58[0] = 0x11;
  local_34 = param_2;
  FUN_146866eea(local_110);
  FUN_1498f12d6(local_110,local_58);
  FUN_1402ac1b3(local_110,param_1 + 0x68);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))
                    (*(longlong **)(param_1 + 0x78),1,*param_3);
  if (cVar1 != '\0') {
    local_128 = *(undefined8 *)(param_1 + 0x30);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x50))
                      (*(longlong **)(param_1 + 0x78),local_68,local_60,local_114);
    uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    if (cVar1 != '\0') goto LAB_1498f1287;
    *(undefined1 *)(param_1 + 0x81) = 1;
  }
  uVar2 = 0;
LAB_1498f1287:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(local_110);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f12d6 FUN_1498f12d6 body=157 status=ok
// SIG undefined FUN_1498f12d6(void)

void FUN_1498f12d6(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  uVar2 = FUN_1402ac1b3(param_1,param_2 + 4);
  plVar3 = (longlong *)FUN_1402ac1b3(uVar2,param_2 + 0x14);
  puVar1 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
                    /* WARNING: Could not recover jumptable at 0x0001498f135e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x170))(plVar3,param_2 + 0x24,1,*(code **)(*plVar3 + 0x170));
    return;
  }
  param_2[0x24] = *puVar1;
  *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  return;
}



// FUNCTION 1498f1374 FUN_1498f1374 body=341 status=ok
// SIG undefined FUN_1498f1374(void)

void FUN_1498f1374(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_11c [4];
  longlong local_118;
  ulonglong *local_110;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_59;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = *(undefined4 *)(param_1 + 0x68);
  uStack_40 = *(undefined4 *)(param_1 + 0x6c);
  uStack_3c = *(undefined4 *)(param_1 + 0x70);
  uStack_38 = *(undefined4 *)(param_1 + 0x74);
  local_58[0] = 0xb;
  local_34 = 9;
  local_59 = 0x11;
  FUN_146866eea(&local_118);
  FUN_1498f12d6(&local_118,local_58);
  FUN_1402ac1b3(&local_118,param_1 + 0x68);
  puVar1 = (undefined1 *)*local_110 + 1;
  if ((undefined1 *)local_110[1] < puVar1) {
    (**(code **)(local_118 + 0x170))(&local_118,&local_59,1);
  }
  else {
    local_59 = *(undefined1 *)*local_110;
    *local_110 = (ulonglong)puVar1;
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))
                    (*(longlong **)(param_1 + 0x78),1,*param_2);
  if ((cVar4 != '\0') && (iVar2 = *(int *)(param_1 + 0x58), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      local_128 = *(undefined8 *)(lVar3 + lVar5);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x50))
                (*(longlong **)(param_1 + 0x78),local_70,local_68,local_11c);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(&local_118);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f14ca FUN_1498f14ca body=814 status=ok
// SIG undefined FUN_1498f14ca(void)

void FUN_1498f14ca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_b8 [35];
  byte local_95;
  int local_94;
  undefined8 *local_90;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = **(longlong **)(param_1 + 0x48);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x50);
    local_78 = plVar12;
    local_70 = param_1;
    do {
      uVar5 = *(undefined4 *)(lVar11 + 8);
      uVar4 = *(undefined2 *)(lVar11 + 0xc);
      bVar7 = *(byte *)(lVar11 + 0x10);
      lVar9 = *(longlong *)(param_1 + 0x48);
      *(longlong *)(param_1 + 0x48) = lVar11;
      *(undefined4 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 8) = 0;
      if (lVar9 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_58);
      (**(code **)(*local_58 + 0x18))(local_58,uVar5);
      (**(code **)(*local_58 + 0x28))(local_58,uVar4);
      plVar15 = local_50;
      plVar3 = local_58;
      if ((bVar7 & 1) == 0) {
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        iVar6 = *(int *)(param_1 + 0x58);
        lVar11 = (longlong)iVar6;
        if (lVar11 != 0) {
          local_90 = (undefined8 *)*plVar12;
          plVar12 = (longlong *)local_90[1];
          local_68 = local_50;
          if (plVar12 == (longlong *)0x0) {
            bVar7 = (**(code **)(*local_58 + 8))(local_58,*local_90);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            bVar7 = (**(code **)(*local_58 + 8))(local_58);
            LOCK();
            plVar15 = plVar12 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          local_60 = local_90 + 3;
          iVar14 = 0;
          iVar13 = 0;
          do {
            local_95 = bVar7 ^ 1;
            lVar9 = (longlong)iVar13;
            local_88 = iVar13 + 1;
            if (iVar13 + 1 < iVar6) {
              local_88 = iVar6;
            }
            local_80 = lVar9 * 0x10;
            plVar12 = local_60 + lVar9 * 2;
            local_94 = iVar14;
            local_84 = iVar13;
            do {
              lVar9 = lVar9 + 1;
              iVar14 = local_88;
              if (lVar11 <= lVar9) break;
              plVar15 = (longlong *)*plVar12;
              if (plVar15 == (longlong *)0x0) {
                bVar8 = (**(code **)(*plVar3 + 8))(plVar3,plVar12[-1]);
              }
              else {
                LOCK();
                *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                UNLOCK();
                bVar8 = (**(code **)(*plVar3 + 8))(plVar3);
                LOCK();
                plVar2 = plVar15 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
              iVar13 = iVar13 + 1;
              plVar12 = plVar12 + 2;
              iVar14 = iVar13;
            } while ((bVar7 & 1) == bVar8);
            iVar13 = iVar14;
            iVar14 = local_94;
            iVar10 = iVar13 - local_84;
            if ((bVar7 & 1) == 0) {
              if (local_94 != local_84) {
                memmove(local_90 + (longlong)local_94 * 2,(void *)(local_80 + (longlong)local_90),
                        (longlong)iVar10 << 4);
              }
              iVar14 = iVar14 + iVar10;
            }
            else {
              FUN_146b12a16(local_80 + (longlong)local_90,iVar10);
              iVar14 = local_94;
            }
            bVar7 = local_95;
          } while (lVar9 < lVar11);
          *(int *)(local_70 + 0x58) = iVar14;
          param_1 = local_70;
          plVar12 = local_78;
          plVar15 = local_68;
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        iVar6 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar6 + 1U) {
          FUN_146b12f1e(plVar12,iVar6);
        }
        lVar11 = *plVar12;
        *(longlong **)(lVar11 + (longlong)iVar6 * 0x10) = plVar3;
        *(longlong **)(lVar11 + 8 + (longlong)iVar6 * 0x10) = plVar15;
      }
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_50 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar11 = **(longlong **)(param_1 + 0x48);
    } while (lVar11 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f17fa FUN_1498f17fa body=98 status=ok
// SIG undefined FUN_1498f17fa(void)

void FUN_1498f17fa(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_140212f8e(local_30);
  FUN_1498f114c(param_1 + -8,local_30,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f185d FUN_1498f185d body=308 status=ok
// SIG undefined FUN_1498f185d(void)

ulonglong FUN_1498f185d(int *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  int local_50;
  short local_4c;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  lVar4 = DAT_14cc32320;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar1 ^ 1);
  }
  if (*(int *)(lVar4 + uVar3 * 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_14099d55c(DAT_14cc32338,local_38,0);
    local_48 = 0;
    uStack_40 = 0;
    FUN_1403de9f2(local_38,&local_48,&DAT_149e06196,1);
    if ((longlong)(int)uStack_40 != 0) {
      lVar5 = (longlong)(int)uStack_40 << 4;
      lVar4 = local_48;
      do {
        cVar2 = FUN_146b137c6(lVar4,&local_50);
        if (((cVar2 != '\0') && (local_50 == *param_1)) &&
           ((local_4c == 0 || (local_4c == (short)param_1[1])))) {
          uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          goto LAB_1498f193a;
        }
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      uVar3 = 0;
    }
LAB_1498f193a:
    FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f1992 FUN_1498f1992 body=145 status=ok
// SIG undefined FUN_1498f1992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498f1992(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32398) {
    FUN_144b3d300(&DAT_14cc32398);
    if (DAT_14cc32398 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32358);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc32358,4000);
      DAT_14cc32380 = 0;
      _DAT_14cc32388 = 0;
      _DAT_14cc32390 = 2;
      atexit(FUN_1446accb9);
      _Init_thread_footer(&DAT_14cc32398);
      return;
    }
  }
  return;
}



// FUNCTION 1498f1a23 FUN_1498f1a23 body=145 status=ok
// SIG undefined FUN_1498f1a23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498f1a23(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc323e0) {
    FUN_144b3d300(&DAT_14cc323e0);
    if (DAT_14cc323e0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc323a0,4000);
      DAT_14cc323c8 = 0;
      _DAT_14cc323d0 = 0;
      _DAT_14cc323d8 = 2;
      atexit(FUN_1446accf4);
      _Init_thread_footer(&DAT_14cc323e0);
      return;
    }
  }
  return;
}



// FUNCTION 1498f1ab4 FUN_1498f1ab4 body=355 status=ok
// SIG undefined FUN_1498f1ab4(void)

longlong FUN_1498f1ab4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0x11;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  plVar1 = (longlong *)FUN_145b17d02();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  FUN_1498fafb4(param_1 + 200,*(undefined2 *)(lVar2 + 0x34));
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  auVar3 = roundpd(ZEXT816(0x41086a0400000000),ZEXT816(0x41086a0400000000),1);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(longlong *)(param_1 + 0x160) = (longlong)auVar3._0_8_;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0x40;
  *(undefined4 *)(param_1 + 0x1b8) = 0x40;
  return param_1;
}



// FUNCTION 1498f1c18 FUN_1498f1c18 body=938 status=ok
// SIG undefined FUN_1498f1c18(void)

undefined8 *
FUN_1498f1c18(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14befc340;
  param_1[1] = &PTR_FUN_14befc370;
  local_80 = param_2;
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  param_1[3] = puVar6;
  param_1[2] = puVar6;
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  param_1[5] = puVar6;
  param_1[4] = puVar6;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)((longlong)param_1 + 0x19c) = *param_3;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x35) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  param_1[0x36] = *param_4;
  param_1[0x37] = local_80;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c7) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  plVar7 = (longlong *)FUN_145b17d02();
  lVar8 = plVar7[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar8 = plVar7[0x22];
  }
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(lVar8 + 0x58);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  (**(code **)*param_1)(param_1);
  lVar8 = FUN_1405d8a54(0);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14befd420;
  plVar9[2] = lVar8;
  param_1[0x3b] = lVar8;
  plVar7 = (longlong *)param_1[0x3c];
  if (plVar9 == plVar7) {
    if (plVar9 == (longlong *)0x0) goto LAB_1498f1f22;
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1498f1f22;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
  }
  else {
    param_1[0x3c] = plVar9;
    if (plVar7 == (longlong *)0x0) goto LAB_1498f1f22;
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1498f1f22;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
    plVar9 = plVar7;
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1498f1f22:
  FUN_140212f8e(&local_78);
  param_1[7] = local_78;
  plVar7 = (longlong *)FUN_144a8054c();
  iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (iVar5 == 9 || iVar5 < 7) {
    plVar7 = (longlong *)FUN_144a8054c();
    uVar10 = (**(code **)(*plVar7 + 0x30))(plVar7);
    local_78 = FUN_1498f20b2;
    local_70 = 0;
    FUN_1498f1fc4(uVar10,local_68,param_1);
  }
  else {
    FUN_1498f20ec(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f1fc4 FUN_1498f1fc4 body=237 status=ok
// SIG undefined FUN_1498f1fc4(void)

undefined8
FUN_1498f1fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14befd4b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14befd440;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1498fb00e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f20b2 FUN_1498f20b2 body=57 status=ok
// SIG undefined FUN_1498f20b2(void)

void FUN_1498f20b2(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 7) {
    return;
  }
  plVar1 = (longlong *)FUN_144a8054c();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  FUN_140457ffc(uVar2,param_1);
  FUN_1498f20ec(param_1);
  return;
}



// FUNCTION 1498f20ec FUN_1498f20ec body=92 status=ok
// SIG undefined FUN_1498f20ec(void)

void FUN_1498f20ec(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1411b1052(param_1,L"FUdpMessageProcessor",0x20000,1,0xffffffffffffffff,0);
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f213e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498f2148 FUN_1498f2148 body=969 status=ok
// SIG undefined FUN_1498f2148(void)

void FUN_1498f2148(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14befc340;
  param_1[1] = &PTR_FUN_14befc370;
  plVar6 = (longlong *)param_1[0x3a];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,1);
    plVar6 = (longlong *)param_1[0x3a];
    param_1[0x3a] = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,1);
    }
  }
  plVar6 = (longlong *)param_1[6];
  param_1[6] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
  }
  plVar6 = (longlong *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
  }
  plVar6 = (longlong *)FUN_144a8054c();
  uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6);
  FUN_140457ffc(uVar7,param_1);
  plVar6 = param_1 + 0x41;
  if (((*(int *)(param_1 + 0x42) != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar4 != '\0')) {
    plVar2 = param_1 + 0x29;
    puVar3 = param_1 + 0x2b;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar9 = 0;
    local_50 = puVar3;
    if (*(int *)(param_1 + 0x2e) != 0) {
      FUN_1449c0562(&local_58);
      iVar9 = *(int *)(param_1 + 0x2e);
    }
    local_68 = local_48;
    uVar7 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar5 = local_68._4_4_;
    local_80 = plVar2;
    if ((local_68._4_4_ != iVar9) || (local_68 = uVar7, local_50 != puVar3)) {
      do {
        local_68 = uVar7;
        if (*(int *)(param_1 + 0x42) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)*plVar6;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,(longlong)iVar5 * 0x1f0 + *local_80);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar7 = local_68;
      } while (local_80 != plVar2 || (local_70 != puVar3 || local_68._4_4_ != iVar9));
    }
  }
  FUN_1498fb2bc(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_1498f86dc(param_1 + 0x50);
  if (*(char *)(param_1 + 0x4f) == '\x01') {
    FUN_1498f2a72(param_1 + 0x4a);
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  FUN_1449db362(param_1 + 0x47);
  FUN_1449db362(param_1 + 0x45);
  FUN_1449db362(param_1 + 0x43);
  FUN_1449db362(plVar6);
  FUN_1449db362(param_1 + 0x3f);
  FUN_1449db362(param_1 + 0x3d);
  plVar6 = (longlong *)param_1[0x3c];
  if (plVar6 != (longlong *)0x0) {
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
  plVar6 = (longlong *)param_1[0x3a];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,1);
  }
  plVar6 = (longlong *)param_1[0x38];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1498f884a(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1498f8e12(param_1 + 0x1f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1498f8ea0(param_1 + 0x10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_1[6];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
  }
  while (puVar3 = (undefined8 *)param_1[5], puVar3 != (undefined8 *)0x0) {
    param_1[5] = *puVar3;
    FUN_1498f2a72(puVar3 + 1);
    FUN_1400020a8(puVar3);
  }
  FUN_1498f2512(param_1 + 2);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f2512 FUN_1498f2512 body=89 status=ok
// SIG undefined FUN_1498f2512(void)

void FUN_1498f2512(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498f256c FUN_1498f256c body=331 status=ok
// SIG undefined FUN_1498f256c(void)

longlong * FUN_1498f256c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x148);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x158;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x170);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      iVar5 = iStack_74;
      lVar4 = *local_90;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1498eebce(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar5 * 0x1f0 + lVar4 + 0x10);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498f26b8 FUN_1498f26b8 body=657 status=ok
// SIG undefined FUN_1498f26b8(void)

undefined8 * FUN_1498f26b8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined1 auStack_c8 [40];
  LPCRITICAL_SECTION local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  iVar6 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  EnterCriticalSection(lpCriticalSection);
  if ((longlong)*(int *)(param_3 + 1) == 0) {
    plVar9 = (longlong *)(param_1 + 0xf8);
    lVar13 = param_1 + 0x108;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_a0 = lpCriticalSection;
    local_60 = lVar13;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x120);
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar7 = local_78._4_4_;
    local_98 = lVar13;
    local_90 = plVar9;
    if ((local_78._4_4_ != iVar6) ||
       (lpCriticalSection = local_a0, local_78 = uVar4, local_60 != lVar13)) {
      do {
        local_78 = uVar4;
        lVar13 = *local_90;
        plVar8 = (longlong *)
                 FUN_1498fb60e(param_2,*(undefined1 *)((longlong)iVar7 * 0x1c + 0x10 + lVar13));
        iVar1 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar8 + 0xc) < iVar1 + 1U) {
          FUN_140c60952(plVar8,iVar1);
        }
        puVar10 = (undefined4 *)(lVar13 + (longlong)iVar7 * 0x1c);
        uVar5 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        puVar14 = (undefined4 *)(*plVar8 + (longlong)iVar1 * 0x10);
        *puVar14 = *puVar10;
        puVar14[1] = uVar5;
        puVar14[2] = uVar2;
        puVar14[3] = uVar3;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        lpCriticalSection = local_a0;
        iVar7 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar9 || (local_80 != local_98 || local_78._4_4_ != iVar6));
    }
  }
  else {
    puVar14 = (undefined4 *)*param_3;
    lVar13 = (longlong)*(int *)(param_3 + 1) << 4;
    do {
      uVar5 = FUN_1447addd0(puVar14,0x10);
      iVar6 = FUN_1498fbb68((longlong *)(param_1 + 0xf8),uVar5,puVar14);
      if ((iVar6 != -1) &&
         (lVar11 = (longlong)iVar6 * 0x1c + *(longlong *)(param_1 + 0xf8),
         puVar12 = (undefined1 *)(lVar11 + 0x10), puVar12 != (undefined1 *)0x0 && lVar11 != 0)) {
        plVar9 = (longlong *)FUN_1498fb60e(param_2,*puVar12);
        iVar6 = (int)plVar9[1];
        *(uint *)(plVar9 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar9 + 0xc) < iVar6 + 1U) {
          FUN_140c60952(plVar9,iVar6);
        }
        uVar5 = puVar14[1];
        uVar2 = puVar14[2];
        uVar3 = puVar14[3];
        puVar10 = (undefined4 *)(*plVar9 + (longlong)iVar6 * 0x10);
        *puVar10 = *puVar14;
        puVar10[1] = uVar5;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
      }
      puVar14 = puVar14 + 4;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498f294a FUN_1498f294a body=122 status=ok
// SIG undefined FUN_1498f294a(void)

void FUN_1498f294a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0x1c9) == '\0') {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar5 = 0;
    puVar5[1] = uVar2;
    puVar5[2] = lVar3;
    puVar5[3] = uVar4;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar5;
      UNLOCK();
      LOCK();
      *puVar1 = puVar5;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001498f29c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498f29c4 FUN_1498f29c4 body=173 status=ok
// SIG undefined FUN_1498f29c4(void)

undefined8 *
FUN_1498f29c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar3 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1417246d8(param_1 + 2,iVar3,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar3 << 4);
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1498f2a72 FUN_1498f2a72 body=73 status=ok
// SIG undefined FUN_1498f2a72(void)

void FUN_1498f2a72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001498f2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498f2abc FUN_1498f2abc body=235 status=ok
// SIG undefined FUN_1498f2abc(void)

undefined8 * FUN_1498f2abc(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  uVar1 = FUN_1447addd0(param_3,0x10);
  iVar2 = FUN_1498fbbe4((longlong *)(param_1 + 0x80),uVar1,param_3);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x80 + *(longlong *)(param_1 + 0x80);
    if ((undefined8 *)(lVar3 + 0x10) != (undefined8 *)0x0 && lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x10);
      puVar6 = param_2;
      for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_2[0xb] = 0;
      iVar2 = *(int *)(lVar3 + 0x70);
      _Src = *(void **)(lVar3 + 0x68);
      *(int *)(param_2 + 0xc) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)param_2 + 100) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 0xb,iVar2,0);
        memcpy((void *)param_2[0xb],_Src,(longlong)iVar2 * 2);
      }
      goto LAB_1498f2b3c;
    }
  }
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
LAB_1498f2b3c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 1498f2ba8 FUN_1498f2ba8 body=158 status=ok
// SIG undefined FUN_1498f2ba8(void)

void FUN_1498f2ba8(undefined4 param_1,undefined4 *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498f1992();
  cVar1 = FUN_140fde03e(&DAT_14cc32358);
  if (((cVar1 != '\0') && (param_3 = (longlong *)*param_3, *param_3 != 0)) &&
     (*(int *)(param_3[0xc] + 0xb8) != 2)) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_40 = (ulonglong)(uint)((int)param_3[4] << 10);
    local_38 = (ulonglong)(uint)(((int)param_3[4] - (int)param_3[9]) * 0x400);
    local_30 = (ulonglong)(uint)(*(int *)((longlong)param_3 + 0x4c) << 10);
    local_48 = param_1;
    FUN_1498fbc58();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f2c48 FUN_1498f2c48 body=369 status=ok
// SIG undefined FUN_1498f2c48(void)

void FUN_1498f2c48(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  lVar1 = param_1 + 0x80;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    FUN_1498fbd6e(lVar1);
    FUN_1498fbeb2(lVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x148);
  lVar3 = param_1 + 0x158;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar3;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x170);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar3)) {
    do {
      local_60 = *local_88 + (longlong)iStack_6c * 0x1f0;
      uStack_58 = (longlong)iStack_6c * 0x1f0 + *local_88 + 0x180;
      FUN_1498fbfd0(lVar1,local_3c);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar4));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f2dc0 FUN_1498f2dc0 body=454 status=ok
// SIG undefined FUN_1498f2dc0(void)

char FUN_1498f2dc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  
  cVar4 = *(char *)(param_1 + 0x1ca);
  if (cVar4 == '\0') {
    uVar5 = FUN_14001cc68(0x90,0x10);
    FUN_1498f0bd0(uVar5,*(undefined8 *)(param_1 + 0x1b8),param_1 + 0x19c,param_1 + 0x1b0);
    plVar3 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    uVar5 = FUN_14001cc68(0x60,0x10);
    FUN_1498fc506(uVar5,*(undefined8 *)(param_1 + 0x1b8));
    plVar3 = *(longlong **)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = uVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    lVar1 = param_1 + 0x48;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0x11;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0x10;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0xf;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0xe;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0xd;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0xc;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 0xb;
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1447403be(lVar1,iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2) = 10;
    *(undefined1 *)(param_1 + 0x1ca) = 1;
    cVar4 = '\x01';
  }
  return cVar4;
}



// FUNCTION 1498f2f86 FUN_1498f2f86 body=273 status=ok
// SIG undefined FUN_1498f2f86(void)

undefined8 FUN_1498f2f86(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x1c9) == '\0') {
    auVar5 = roundpd(ZEXT816(0x40f86a0800000000),ZEXT816(0x40f86a0800000000),1);
    uVar4 = (longlong)auVar5._0_8_ / 10000;
    if (0xfffffffe < (longlong)uVar4) {
      uVar4 = 0xffffffff;
    }
    if ((longlong)uVar4 < 1) {
      uVar4 = 0;
    }
    do {
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))
                (*(longlong **)(param_1 + 0x1d8),uVar4 & 0xffffffff,0);
      do {
        lVar2 = *(longlong *)(param_1 + 0x38);
        FUN_140212f8e(&local_30);
        *(longlong *)(param_1 + 0x38) = local_30;
        *(longlong *)(param_1 + 0x40) = local_30 - lVar2;
        FUN_1446acd30(param_1);
        FUN_1446adaea(param_1);
        FUN_1446adbc6(param_1);
        FUN_1498f2c48(param_1);
        if (**(longlong **)(param_1 + 0x18) == 0) {
          cVar3 = FUN_1498f3098(param_1);
          if (cVar3 == '\0') {
            bVar1 = *(byte *)(param_1 + 0x1c9);
            goto LAB_1498f3071;
          }
        }
      } while (*(char *)(param_1 + 0x1c9) != '\x01');
      bVar1 = 1;
LAB_1498f3071:
    } while ((bVar1 & 1) == 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3098 FUN_1498f3098 body=334 status=ok
// SIG undefined FUN_1498f3098(void)

undefined8 FUN_1498f3098(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar2 = param_1 + 0x158;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x170);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c * 0x1f0;
      if (((ulonglong)
           ((longlong)*(int *)(lVar3 + 0x120 + lVar5) - (longlong)*(int *)(lVar3 + 0x14c + lVar5)) <
           *(ulonglong *)(lVar3 + 0x178 + lVar5)) &&
         (cVar4 = FUN_1498f474a(lVar3 + lVar5 + 0x10,param_1 + 0x38), cVar4 != '\0')) {
        uVar6 = 1;
        goto LAB_1498f312f;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar6 = 0;
LAB_1498f312f:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1498f31fe FUN_1498f31fe body=697 status=ok
// SIG undefined FUN_1498f31fe(void)

void FUN_1498f31fe(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x10))();
  if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3a] + 0x20))();
  }
  plVar1 = param_1 + 0x29;
  plVar2 = param_1 + 0x2b;
  local_c0 = param_1;
LAB_1498f325b:
  plVar7 = local_c0;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = plVar2;
  if ((int)local_c0[0x2e] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar8 = (int)plVar7[0x2e];
  }
  local_78 = local_a8;
  lVar3 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  iVar4 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar8) || (local_78 = lVar3, uStack_b0 != plVar2)) {
    do {
      local_78 = lVar3;
      lVar6 = *local_90;
      lVar3 = lVar6 + (longlong)iVar4 * 0x1f0;
      lVar9 = lVar3 + 0x98;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar3 + 0xb0) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar6 = lVar6 + (longlong)iVar4 * 0x1f0;
      plVar7 = (longlong *)(lVar6 + 0x88);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar5 = *(uint *)(lVar6 + 0xb0);
      local_68 = (longlong *)CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_50 = uVar5 & 0xffffffe0;
      local_b8 = plVar7;
      local_60 = lVar9;
      if (*(uint *)(lVar6 + 0xb0) != uVar5) {
        FUN_1449c0562(&local_68);
        uVar5 = local_58._4_4_;
      }
      lVar3 = local_60;
      while (((uStack_a0._4_4_ != uVar5 || (local_a8 != lVar3)) || (local_b8 != plVar7))) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*local_b8 + 8 + (longlong)(int)uStack_a0._4_4_ * 0x20) + 0x60);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 0xb8) == 1)) {
          FUN_14000f986(0);
          goto LAB_1498f325b;
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      lVar3 = local_78;
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f34b8 FUN_1498f34b8 body=111 status=ok
// SIG undefined FUN_1498f34b8(void)

void FUN_1498f34b8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + -8;
  FUN_140212f8e(&local_28);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  FUN_1446acd30(lVar1);
  FUN_1446adaea(lVar1);
  FUN_1446adbc6(lVar1);
  FUN_1498f2c48(lVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3528 FUN_1498f3528 body=75 status=ok
// SIG undefined FUN_1498f3528(void)

void FUN_1498f3528(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f3558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 1498f3574 FUN_1498f3574 body=220 status=ok
// SIG undefined FUN_1498f3574(void)

bool FUN_1498f3574(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_1498fca9e(param_2,lVar3 + 8);
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_1498fca9e(lVar3 + 8,&local_48);
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3652 FUN_1498f3652 body=144 status=ok
// SIG undefined FUN_1498f3652(void)

undefined1 FUN_1498f3652(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((((*(int *)(param_2 + 0x14) != *(int *)(param_1 + 0x19c)) ||
       (*(int *)(param_2 + 0x18) != *(int *)(param_1 + 0x1a0))) ||
      (*(int *)(param_2 + 0x1c) != *(int *)(param_1 + 0x1a4))) ||
     (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x1a8))) {
    if (*(int *)(param_1 + 0x240) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x238);
    }
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_2 + 0x14);
    if ((cVar1 != '\0') && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
      lVar3 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x48) + lVar3) == *param_2) {
          return 1;
        }
        bVar4 = (longlong)*(int *)(param_1 + 0x50) + -1 != lVar3;
        lVar3 = lVar3 + 1;
      } while (bVar4);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1498f36e2 FUN_1498f36e2 body=181 status=ok
// SIG undefined FUN_1498f36e2(void)

void FUN_1498f36e2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402ac1b3(*param_2,&local_38);
  if ((((((local_38._4_4_ != 0 || (int)local_38 != 0) || (int)uStack_30 != 0) ||
         uStack_30._4_4_ != 0) && ((int)local_38 == *(int *)(param_3 + 0x10))) &&
      (local_38._4_4_ == *(int *)(param_3 + 0x14))) &&
     (((int)uStack_30 == *(int *)(param_3 + 0x18) && (uStack_30._4_4_ == *(int *)(param_3 + 0x1c))))
     ) {
    if ((*(int *)(param_1 + 0x210) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x208), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
    }
    FUN_1498fead4(param_1 + 0x148,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3798 FUN_1498f3798 body=103 status=ok
// SIG undefined FUN_1498f3798(void)

void FUN_1498f3798(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1402ac1b3(*param_1,&local_28);
  if (((local_28._4_4_ != 0 || (int)local_28 != 0) || (int)uStack_20 != 0) || uStack_20._4_4_ != 0)
  {
    FUN_1498f4472(param_2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3800 FUN_1498f3800 body=555 status=ok
// SIG undefined FUN_1498f3800(void)

void FUN_1498f3800(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_148;
  longlong *local_140;
  undefined1 local_134 [4];
  undefined1 local_130 [168];
  longlong local_88;
  undefined4 local_80;
  byte local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1402ac1b3(*param_2);
  param_2 = (longlong *)*param_2;
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_49);
  }
  else {
    local_49 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  if (((local_48._4_4_ != 0 || (int)local_48 != 0) || (int)uStack_40 != 0) || uStack_40._4_4_ != 0)
  {
    FUN_1498f4472(param_3,&local_48);
  }
  bVar5 = 0x11;
  if (local_49 < 0x11) {
    bVar5 = local_49;
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar6 = 0;
    do {
      if (*(byte *)(*(longlong *)(param_1 + 0x48) + lVar6) == bVar5) {
        *(byte *)(param_3 + 8) = bVar5;
        local_70 = *(undefined8 *)(param_3 + 4);
        uStack_68 = *(undefined8 *)(param_3 + 6);
        local_60 = *(undefined4 *)(param_1 + 0x19c);
        uStack_5c = *(undefined4 *)(param_1 + 0x1a0);
        uStack_58 = *(undefined4 *)(param_1 + 0x1a4);
        uStack_54 = *(undefined4 *)(param_1 + 0x1a8);
        local_50 = 10;
        local_74[0] = bVar5;
        FUN_146866eea(local_130);
        FUN_1498f12d6(local_130,local_74);
        FUN_1402ac1b3(local_130,param_1 + 0x19c);
        plVar4 = *(longlong **)(param_1 + 0x1b8);
        (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_148);
        (**(code **)(*local_148 + 0x18))(local_148,*param_3);
        (**(code **)(*local_148 + 0x28))(local_148,*(undefined2 *)(param_3 + 1));
        local_158 = local_148;
        (**(code **)(*plVar4 + 0x50))(plVar4,local_88,local_80,local_134);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_140 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)local_140 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_140 + 0x10))(local_140);
            }
          }
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_144a7fc42(local_130);
        goto LAB_1498f38f7;
      }
      lVar6 = lVar6 + 1;
    } while (*(int *)(param_1 + 0x50) != lVar6);
  }
  if ((*(int *)(param_1 + 0x210) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x208), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_3 + 4);
  }
  FUN_1498fead4(param_1 + 0x148,param_3 + 4);
LAB_1498f38f7:
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f3a2c FUN_1498f3a2c body=103 status=ok
// SIG undefined FUN_1498f3a2c(void)

void FUN_1498f3a2c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1402ac1b3(*param_1,&local_28);
  if (((local_28._4_4_ != 0 || (int)local_28 != 0) || (int)uStack_20 != 0) || uStack_20._4_4_ != 0)
  {
    FUN_1498f4472(param_2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3a94 FUN_1498f3a94 body=256 status=ok
// SIG undefined FUN_1498f3a94(void)

void FUN_1498f3a94(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_38 [36];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(param_2 + 0x80) != *(int *)(param_2 + 0xac)) &&
     (FUN_1498f45ac(&local_14,*param_1), *(int *)(param_2 + 0x80) != *(int *)(param_2 + 0xac))) {
    lVar5 = param_2 + 0xb0;
    if (*(longlong *)(param_2 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_2 + 0xb8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_2 + 0xc0) - 1U & local_14) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_2 + 0x78) + (longlong)iVar6 * 0x20;
        if (*(uint *)(*(longlong *)(param_2 + 0x78) + (longlong)iVar6 * 0x20) == local_14) {
          if (lVar5 != 0) {
            lVar3 = *(longlong *)(lVar5 + 8);
            plVar4 = *(longlong **)(lVar5 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (lVar3 != 0) {
              FUN_1446af5a8();
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
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f3b96 FUN_1498f3b96 body=376 status=ok
// SIG undefined FUN_1498f3b96(void)

void FUN_1498f3b96(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1498febfc(*param_2);
  FUN_146ed6908(*param_2,&local_48);
  if (0 < (int)uStack_40) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      if ((((*(int *)(param_1 + 0x19c) != *(int *)(local_48 + lVar7)) ||
           (*(int *)(param_1 + 0x1a0) != *(int *)(local_48 + 4 + lVar7))) ||
          (*(int *)(param_1 + 0x1a4) != *(int *)(local_48 + 8 + lVar7))) ||
         (*(int *)(param_1 + 0x1a8) != *(int *)(local_48 + 0xc + lVar7))) {
        lVar6 = local_48 + lVar7;
        uVar3 = FUN_1447addd0(lVar6,0x10);
        iVar4 = FUN_1498fcb98((longlong *)(param_1 + 0x148),uVar3,lVar6);
        if (((iVar4 == -1) ||
            (((longlong)iVar4 * 0x1f0 + *(longlong *)(param_1 + 0x148) + 0x10U & 0xffffffffffffffef)
             == 0)) && (lVar6 = *(longlong *)(param_1 + 0x30), lVar6 != 0)) {
          uVar1 = *(undefined8 *)(local_58 + lVar8 * 8);
          puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar5 = 0;
          puVar5[1] = uVar1;
          *(undefined1 *)(puVar5 + 2) = 1;
          if (puVar5 != (undefined8 *)0x0) {
            puVar2 = *(undefined8 **)(lVar6 + 0x40);
            *(undefined8 **)(lVar6 + 0x40) = puVar5;
            *puVar2 = puVar5;
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < (int)uStack_40);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f3d10 FUN_1498f3d10 body=158 status=ok
// SIG undefined FUN_1498f3d10(void)

bool FUN_1498f3d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1498fdba8(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1498fdba8(lVar1 + 8,&local_58);
    FUN_1498f2a72(&local_58);
    if (lVar2 != 0) {
      FUN_1498f2a72(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3db0 FUN_1498f3db0 body=75 status=ok
// SIG undefined FUN_1498f3db0(void)

void FUN_1498f3db0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f3de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 1498f3dfc FUN_1498f3dfc body=238 status=ok
// SIG undefined FUN_1498f3dfc(void)

void FUN_1498f3dfc(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  uint *local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x110);
  iVar2 = *(int *)(param_1 + 0x13c);
  local_50 = (uint *)CONCAT44(local_50._4_4_,param_2);
  FUN_1498f917c(param_1,&local_50);
  uVar4 = (*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x110)) + (iVar1 - iVar2);
  local_50 = &local_34;
  local_34 = 0;
  local_48 = *param_3;
  local_40 = param_1;
  FUN_1498f9e90(param_1,&local_50);
  *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + (ulonglong)(local_34 << 10);
  *(longlong *)(param_1 + 0x198) = *(longlong *)(param_1 + 0x198) + (ulonglong)local_34;
  if ((ulonglong)local_34 == 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x168) + (ulonglong)uVar4;
    if (0x7ff < uVar3) {
      uVar3 = 0x800;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 0x168) >> 1;
    if (uVar3 < 0x41) {
      uVar3 = 0x40;
    }
  }
  *(ulonglong *)(param_1 + 0x168) = uVar3;
  *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + (ulonglong)uVar4;
  *(int *)(param_1 + 0x1b8) = (int)uVar3;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f3eec FUN_1498f3eec body=197 status=ok
// SIG undefined FUN_1498f3eec(void)

void FUN_1498f3eec(undefined4 *param_1,longlong *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0xb < param_3) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1498f95ac(local_40,param_1);
  FUN_1498f9628(local_40,param_2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f3fc4 FUN_1498f3fc4 body=562 status=ok
// SIG undefined FUN_1498f3fc4(void)

void FUN_1498f3fc4(longlong param_1,uint param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_4;
  local_90 = param_4;
  FUN_1446b2826(param_1,local_78,param_2);
  uVar11 = 0;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar12 = (uint *)*param_3;
    puVar3 = puVar12 + *(int *)(param_3 + 1);
    uVar11 = 0;
    lVar9 = 0;
    do {
      uVar4 = *puVar12;
      uVar6 = uVar4 * uVar4 + param_2;
      if (uVar4 <= param_2) {
        uVar6 = uVar4 + (param_2 + 1) * param_2;
      }
      if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
        lVar8 = *(longlong *)(param_1 + 0x148);
        if (*(longlong *)(param_1 + 0x148) == 0) {
          lVar8 = param_1 + 0x140;
        }
        iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & uVar6) * 4);
        if (iVar5 != -1) {
          lVar8 = *(longlong *)(param_1 + 0x108);
          do {
            lVar10 = (longlong)iVar5 * 0x30;
            if (*(ulonglong *)(lVar8 + lVar10) == (ulonglong)uVar6) {
              local_88 = *(longlong *)(lVar8 + 0x20 + lVar10);
              local_80 = uVar11;
              FUN_1498f92ca((longlong *)(param_1 + 0x108));
              if (lVar9 <= *local_90 - local_88) {
                lVar9 = *local_90 - local_88;
              }
              uVar11 = (ulonglong)((int)local_80 + 1);
              break;
            }
            iVar5 = *(int *)(lVar10 + lVar8 + 0x28);
          } while (iVar5 != -1);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar3);
    if (0 < lVar9) {
      *(longlong *)(param_1 + 0x1c0) =
           (longlong)((double)lVar9 * 0.3999999761581421) +
           (longlong)((double)*(longlong *)(param_1 + 0x1c0) * 0.6000000238418579);
    }
  }
  local_68 = &local_4c;
  local_4c = 0;
  local_60 = *local_90;
  local_58 = param_1;
  FUN_1498f9e90(param_1);
  *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + (ulonglong)(local_4c << 10);
  *(longlong *)(param_1 + 0x198) = *(longlong *)(param_1 + 0x198) + (ulonglong)local_4c;
  if ((ulonglong)local_4c == 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x168) + uVar11;
    if (0x7ff < uVar7) {
      uVar7 = 0x800;
    }
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x168) >> 1;
    if (uVar7 < 0x41) {
      uVar7 = 0x40;
    }
  }
  *(ulonglong *)(param_1 + 0x168) = uVar7;
  *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + uVar11;
  *(int *)(param_1 + 0x1b8) = (int)uVar7;
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f41f8 FUN_1498f41f8 body=616 status=ok
// SIG undefined FUN_1498f41f8(void)

void FUN_1498f41f8(undefined4 *param_1,longlong *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0xb < param_3) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    plVar3 = (longlong *)FUN_1408383eb(param_2,param_1 + 2);
    puVar1 = *(undefined4 **)plVar3[1];
    if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,param_1 + 4,4);
      }
      else {
        FUN_14572512c(plVar3);
      }
    }
    else {
      param_1[4] = *puVar1;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    }
    puVar1 = *(undefined4 **)plVar3[1];
    if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,param_1 + 5,4);
      }
      else {
        FUN_14572512c(plVar3);
      }
    }
    else {
      param_1[5] = *puVar1;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    }
    puVar2 = *(undefined8 **)plVar3[1];
    if ((undefined8 *)((longlong *)plVar3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,param_1 + 6,8);
      }
      else {
        thunk_FUN_146821949(plVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 6) = *puVar2;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 8;
    }
    puVar1 = *(undefined4 **)plVar3[1];
    if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,param_1 + 8,4);
      }
      else {
        FUN_14572512c(plVar3);
      }
    }
    else {
      param_1[8] = *puVar1;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    }
    puVar2 = *(undefined8 **)plVar3[1];
    if ((undefined8 *)((longlong *)plVar3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,param_1 + 10,8);
      }
      else {
        thunk_FUN_146821949(plVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 10) = *puVar2;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  local_40 = *param_1;
  local_3c = param_1[2];
  local_38 = *(undefined2 *)(param_1 + 5);
  local_34 = param_1[6];
  local_30 = *(undefined8 *)(param_1 + 10);
  local_28 = *(undefined2 *)(param_1 + 8);
  local_24 = param_1[4];
  local_20 = param_1;
  FUN_1498f96fa(&local_40,param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f4472 FUN_1498f4472 body=92 status=ok
// SIG undefined FUN_1498f4472(void)

void FUN_1498f4472(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_2 != *(int *)(param_1 + 0x10)) || (param_2[1] != *(int *)(param_1 + 0x14))) ||
      (param_2[2] != *(int *)(param_1 + 0x18))) || (param_2[3] != *(int *)(param_1 + 0x1c))) {
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      FUN_1498f9992(param_1 + 0x28);
      FUN_1498f9ad6(param_1 + 0x28);
    }
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 1498f44ce FUN_1498f44ce body=117 status=ok
// SIG undefined FUN_1498f44ce(void)

undefined4 FUN_1498f44ce(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    local_c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f4544 FUN_1498f4544 body=104 status=ok
// SIG undefined FUN_1498f4544(void)

void FUN_1498f4544(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14041268c(param_2,param_1 + 2);
  return;
}



// FUNCTION 1498f45ac FUN_1498f45ac body=75 status=ok
// SIG undefined FUN_1498f45ac(void)

void FUN_1498f45ac(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f45dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 1498f45f8 FUN_1498f45f8 body=337 status=ok
// SIG undefined FUN_1498f45f8(void)

void FUN_1498f45f8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 **local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  undefined8 local_40 [2];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = (undefined8 *)*param_2;
  if (0 < *(int *)(puVar5 + 8)) {
    pbVar6 = (byte *)(puVar5 + 5);
    if ((byte *)puVar5[7] != (byte *)0x0) {
      pbVar6 = (byte *)puVar5[7];
    }
    if ((*pbVar6 & 1) == 0) {
      local_40[0] = *puVar5;
      cVar1 = FUN_1498f0ac0();
      if (cVar1 != '\0') {
        FUN_1446aca44(local_40,*param_2);
        (*(code *)(&PTR_FUN_14befd2a0)[local_30])(&local_68,&local_58,local_40);
        plVar8 = (longlong *)(param_1 + 0x280);
        puVar7 = local_68;
        if (local_60 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        iVar3 = local_60 + -1;
        if (local_60 == 0) {
          iVar3 = 0;
        }
        uVar2 = FUN_144a49b4a(iVar3,puVar7);
        iVar3 = FUN_1498fe4c0(plVar8,uVar2,&local_68);
        if ((iVar3 == -1) ||
           (lVar4 = (longlong)iVar3 * 0x20 + *plVar8, puVar5 = (undefined8 *)(lVar4 + 0x10),
           puVar5 == (undefined8 *)0x0 || lVar4 == 0)) {
          if (DAT_14c950c28 == '\0') {
            FUN_1498f0ad0(&local_70,local_40);
            local_58 = &local_68;
            local_50 = &local_70;
            FUN_1498fe58c(plVar8,local_44);
            *(undefined8 *)*param_2 = local_70;
          }
        }
        else {
          *(undefined8 *)*param_2 = *puVar5;
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f474a FUN_1498f474a body=295 status=ok
// SIG undefined FUN_1498f474a(void)

undefined8 FUN_1498f474a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar2 = param_1 + 0x88;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar6 = *(int *)(param_1 + 0xa0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar6) || (uStack_48 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x20);
      if ((*plVar3 != 0) && (cVar4 = FUN_1446afb6c(plVar3,param_2), cVar4 != '\0')) {
        uVar5 = 1;
        goto LAB_1498f47e1;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar6));
  }
  uVar5 = 0;
LAB_1498f47e1:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1498f4872 FUN_1498f4872 body=339 status=ok
// SIG undefined FUN_1498f4872(void)

void FUN_1498f4872(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  FUN_1498ff1b0(param_1 + 0xf8);
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar2 = param_1 + 0x158;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x170);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      local_60 = *local_88 + (longlong)iStack_6c * 0x1f0;
      uStack_58 = (longlong)iStack_6c * 0x1f0 + *local_88 + 0x30;
      FUN_1498ff500(param_1 + 0xf8,local_3c);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f49c6 FUN_1498f49c6 body=239 status=ok
// SIG undefined FUN_1498f49c6(void)

undefined4 * FUN_1498f49c6(undefined4 *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  lVar2 = *param_2;
  local_48 = lVar2 + 8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  if (*(int *)(lVar2 + 0x20) != 0) {
    FUN_1449c0562(&local_50,0);
    lVar2 = *param_2;
  }
  FUN_1498f4ab6(lVar2,local_40._4_4_,param_1 + 0xc);
  param_1[5] = local_40._4_4_;
  *param_1 = param_3;
  plVar4 = (longlong *)*param_2;
  param_1[4] = *(undefined4 *)(plVar4[0xc] + 0xbc);
  if ((longlong *)*plVar4 == (longlong *)0x0) {
    uVar1 = 0;
    iVar3 = local_40._4_4_;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)*plVar4 + 0x30))();
    plVar4 = (longlong *)*param_2;
    iVar3 = param_1[5];
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)(iVar3 << 10);
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[8] = (int)plVar4[4];
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f4ab6 FUN_1498f4ab6 body=206 status=ok
// SIG undefined FUN_1498f4ab6(void)

void FUN_1498f4ab6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (((longlong *)*param_1 != (longlong *)0x0) && (param_2 < *(uint *)(param_1 + 4))) {
    plVar3 = param_1 + 1;
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[3];
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    if ((*(uint *)((longlong)plVar3 + (longlong)((int)uVar5 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0
       ) {
      uVar1 = *(ushort *)(param_1 + 10);
      lVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))();
      uVar6 = lVar4 - (ulonglong)uVar1 * (ulonglong)param_2;
      if (*(ushort *)(param_1 + 10) <= uVar6) {
        uVar6 = (ulonglong)*(ushort *)(param_1 + 10);
      }
      FUN_1400ec3e6(param_3,uVar6 & 0xffffffff);
      iVar2 = *(int *)(param_3 + 1);
      *(uint *)(param_3 + 1) = iVar2 + (uint)uVar6;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < (uint)uVar6) {
        FUN_1447403be(param_3);
      }
      (**(code **)(*(longlong *)*param_1 + 0x1a0))
                ((longlong *)*param_1,(ulonglong)uVar1 * (ulonglong)param_2);
                    /* WARNING: Could not recover jumptable at 0x0001498f4b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,*param_3,uVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1498f4b84 FUN_1498f4b84 body=112 status=ok
// SIG undefined FUN_1498f4b84(void)

undefined8 FUN_1498f4b84(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar5 = 0;
    puVar5[1] = uVar2;
    puVar5[2] = lVar3;
    puVar5[3] = uVar4;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar5;
      UNLOCK();
      LOCK();
      *puVar1 = puVar5;
      UNLOCK();
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1498f4bf4 FUN_1498f4bf4 body=147 status=ok
// SIG undefined FUN_1498f4bf4(void)

undefined8 * FUN_1498f4bf4(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x58) < 0x100) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = *(undefined8 *)(param_1 + 0x50);
    param_2[1] = uVar1;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    _Src = *(void **)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 1) = 0x100;
    iVar2 = 0;
    FUN_1447808da(param_2,0);
    memcpy((void *)*param_2,_Src,0x400);
    if (*(int *)(param_1 + 0x58) != 0x100) {
      memmove(*(void **)(param_1 + 0x50),(void *)((longlong)*(void **)(param_1 + 0x50) + 0x400),
              (longlong)(*(int *)(param_1 + 0x58) + -0x100) << 2);
      iVar2 = *(int *)(param_1 + 0x58) + -0x100;
    }
    *(int *)(param_1 + 0x58) = iVar2;
  }
  return param_2;
}



// FUNCTION 1498f4c88 FUN_1498f4c88 body=127 status=ok
// SIG undefined FUN_1498f4c88(void)

undefined8 * FUN_1498f4c88(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  _Dst[0x12] = 0;
  *_Dst = &PTR_FUN_149e1e050;
  _Dst[0x13] = param_1 + 0xa8;
  _Dst[0x14] = 0x7fffffffffffffff;
  *(byte *)(_Dst + 5) = *(byte *)(_Dst + 5) | 1;
  FUN_1449c2eca(_Dst,1);
  return _Dst;
}



// FUNCTION 1498f4d08 FUN_1498f4d08 body=362 status=ok
// SIG undefined FUN_1498f4d08(void)

undefined8 *
FUN_1498f4d08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14befca70;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = 0;
  param_1[7] = 0;
  param_1[8] = *param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = param_6;
  FUN_1446f470e(local_58,L"WINDOWS",1);
  uVar1 = FUN_140272950(local_58);
  param_1[0xc] = uVar1;
  param_1[0xd] = 0;
  param_1[0xe] = *param_2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_1498ff80e(param_1 + 0x11,param_4);
  param_1[0x1b] = 0;
  param_1[0x1b] = *param_5;
  *param_5 = 0;
  *(int *)(param_1 + 0x1c) = (int)param_5[1];
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  if (*param_4 != 0) {
    FUN_1400020a8();
    uVar2 = (undefined4)param_5[1];
  }
  FUN_1447a1747(*param_5,uVar2);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f4e74 FUN_1498f4e74 body=196 status=ok
// SIG undefined FUN_1498f4e74(void)

void FUN_1498f4e74(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14befca70;
  FUN_1446b1d72();
  FUN_1447a1747(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145ceb1fe(param_1 + 0x11);
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f4f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498f4f38 FUN_1498f4f38 body=137 status=ok
// SIG undefined FUN_1498f4f38(void)

undefined8 FUN_1498f4f38(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,(short)param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x10;
        if ((*(int *)(lVar1 + lVar4) == *param_2) &&
           (*(short *)(lVar1 + 4 + lVar4) == (short)param_2[1])) {
          FUN_1499000bc(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498f4fc2 FUN_1498f4fc2 body=38 status=ok
// SIG undefined FUN_1498f4fc2(void)

undefined8 FUN_1498f4fc2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UdpMessageTransport",1);
  return param_2;
}



// FUNCTION 1498f4fe8 FUN_1498f4fe8 body=95 status=ok
// SIG undefined FUN_1498f4fe8(void)

longlong * FUN_1498f4fe8(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1498eebce(param_2,0);
  *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1498eebce(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x40);
  return param_2;
}



// FUNCTION 1498f506c FUN_1498f506c body=167 status=ok
// SIG undefined FUN_1498f506c(void)

byte FUN_1498f506c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = DAT_14cc32460;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar1 ^ 1);
  }
  if ((*(char *)(lVar5 + uVar3) == '\x01') && (cVar2 = FUN_1498f5470(param_2), cVar2 == '\0')) {
    return 0;
  }
  if ((longlong)*(int *)(param_1 + 0xe0) == 0) {
    bVar1 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xd8);
    lVar4 = (longlong)*(int *)(param_1 + 0xe0) * 0x10;
    do {
      lVar4 = lVar4 + -0x10;
      bVar1 = FUN_1498f046a(lVar5,param_3);
      if (bVar1 != 0) break;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 != 0);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 1498f5114 FUN_1498f5114 body=171 status=ok
// SIG undefined FUN_1498f5114(void)

undefined8 *
FUN_1498f5114(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14befd3a0;
  param_1[1] = &PTR_FUN_14befd3d0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_140056680(param_1 + 6,param_4);
  param_1[8] = *param_3;
  *(undefined4 *)(param_1 + 9) = 0xffe3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1446f470e(local_28,L"WINDOWS",1);
  uVar1 = FUN_140272950(local_28);
  param_1[3] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f51ce FUN_1498f51ce body=115 status=ok
// SIG undefined FUN_1498f51ce(void)

void FUN_1498f51ce(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x28);
    local_18 = *(longlong *)(param_1 + 0x30);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f5242 FUN_1498f5242 body=271 status=ok
// SIG undefined FUN_1498f5242(void)

undefined8 * FUN_1498f5242(undefined8 *param_1,undefined8 param_2)

{
  wint_t _C;
  short sVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  wint_t *pwVar8;
  longlong lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = FUN_1403de9f2(param_2,param_1,&DAT_149e0635c,0);
  if ((iVar4 != 4) || ((longlong)*(int *)(param_1 + 1) == 0)) {
    return param_1;
  }
  plVar5 = (longlong *)*param_1;
  plVar7 = plVar5 + (longlong)*(int *)(param_1 + 1) * 2;
LAB_1498f52a1:
  pwVar8 = &DAT_149dfb77a;
  if ((int)plVar5[1] != 0) {
    pwVar8 = (wint_t *)*plVar5;
  }
  if ((*pwVar8 == 0x2d) || (*pwVar8 == 0x2b)) {
    pwVar8 = pwVar8 + 1;
  }
  bVar6 = false;
  do {
    _C = *pwVar8;
    if (_C == 0x2e) {
      bVar3 = true;
      if (bVar6) break;
    }
    else {
      if (_C == 0) goto LAB_1498f5330;
      iVar4 = iswdigit(_C);
      bVar3 = bVar6;
      if (iVar4 == 0) break;
    }
    bVar6 = bVar3;
    pwVar8 = pwVar8 + 1;
  } while( true );
  if ((int)plVar5[1] - 2U < 0x7fffffff) {
    lVar9 = 0;
    do {
      lVar2 = *plVar5;
      iVar4 = iswdigit(*(wint_t *)(lVar2 + lVar9 * 2));
      if (((iVar4 == 0) && (sVar1 = *(short *)(lVar2 + lVar9 * 2), sVar1 != 0x3f)) &&
         (sVar1 != 0x2a)) {
        return param_1;
      }
      lVar9 = lVar9 + 1;
      iVar4 = (int)plVar5[1] + -1;
      if ((int)plVar5[1] == 0) {
        iVar4 = 0;
      }
    } while (lVar9 < iVar4);
  }
LAB_1498f5330:
  plVar5 = plVar5 + 2;
  if (plVar5 == plVar7) {
    return param_1;
  }
  goto LAB_1498f52a1;
}



// FUNCTION 1498f5351 FUN_1498f5351 body=286 status=ok
// SIG undefined FUN_1498f5351(void)

ulonglong FUN_1498f5351(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b135d2(param_2,local_38);
  FUN_1498f5242(&local_48,param_1);
  FUN_1498f5242(&local_58,local_38);
  if (local_50 == 4 && local_40 == 4) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(local_48 + 8 + lVar6);
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      puVar4 = &DAT_149dfb77a;
      if (iVar1 != 0) {
        puVar4 = *(undefined2 **)(local_48 + lVar6);
      }
      uVar3 = FUN_14038a98c(local_58 + lVar6,puVar4,iVar2,1);
      uVar5 = (ulonglong)uVar3;
    } while (((char)uVar3 != '\0') && (bVar7 = lVar6 != 0x30, lVar6 = lVar6 + 0x10, bVar7));
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
  }
  FUN_1447a1747(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1498f5470 FUN_1498f5470 body=172 status=ok
// SIG undefined FUN_1498f5470(void)

ulonglong FUN_1498f5470(ulonglong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  uVar5 = FUN_1447addd0(param_1,0x10);
  iVar6 = FUN_1498fa5e8(uVar5,param_1);
  lVar3 = DAT_14cc32430;
  if (iVar6 != -1) {
    lVar1 = DAT_14cc32490 + (longlong)iVar6 * 0x28;
    puVar7 = (uint *)(lVar1 + 0x10);
    if (puVar7 != (uint *)0x0 && lVar1 != 0) {
      uVar2 = *puVar7;
      param_1 = (ulonglong)uVar2;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar8 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar8 = (ulonglong)(bVar4 ^ 1);
      }
      if (*(int *)(lVar3 + uVar8 * 4) < (int)uVar2) {
        uVar8 = 0;
        goto LAB_1498f54c7;
      }
    }
  }
  uVar8 = CONCAT71((int7)(param_1 >> 8),1);
LAB_1498f54c7:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  return uVar8 & 0xffffffff;
}



// FUNCTION 1498f551c FUN_1498f551c body=295 status=ok
// SIG undefined FUN_1498f551c(void)

void FUN_1498f551c(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  uVar6 = FUN_1447addd0(param_1,0x10);
  piVar7 = (int *)FUN_1498fa66a(uVar6,param_1);
  FUN_140212f8e(&local_38);
  lVar4 = local_38;
  lVar3 = DAT_14cc32448;
  lVar1 = *(longlong *)(piVar7 + 2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar5 ^ 1);
  }
  lVar1 = (lVar4 - lVar1) / 10000000;
  auVar2 = SEXT816(lVar1) * ZEXT816(0x8888888888888889);
  iVar9 = 0;
  if ((int)lVar1 + ((int)(auVar2._8_8_ >> 5) - (auVar2._12_4_ >> 0x1f)) * -0x3c <
      *(int *)(lVar3 + uVar8 * 4)) {
    iVar9 = *piVar7 + 1;
  }
  *piVar7 = iVar9;
  *(longlong *)(piVar7 + 2) = local_38;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32468);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f5644 FUN_1498f5644 body=814 status=ok
// SIG undefined FUN_1498f5644(void)

void FUN_1498f5644(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14706e08c(*param_2,&local_a0);
  local_70 = local_98;
  (**(code **)(*param_1 + 0x160))(param_1);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  FUN_1402ac1b3(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  FUN_1498f0050(param_1,uVar7);
  local_71 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  puVar5 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_71,1);
  }
  else {
    local_71 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x68))();
  FUN_1408383eb(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_1408383eb(param_1,uVar7);
  lVar8 = (*(code *)**(undefined8 **)*param_2)();
  local_78 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  puVar5 = (ulonglong *)param_1[1];
  piVar4 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
    }
    else {
      FUN_14572512c(param_1,&local_78);
    }
  }
  else {
    local_78 = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar4;
  }
  ppuVar9 = (undefined **)(*(code *)**(undefined8 **)*param_2)();
  ppuVar2 = ppuVar9 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  uVar12 = 0;
  local_60 = ppuVar2;
  if (*(int *)(ppuVar9 + 5) != 0) {
    FUN_1449c0562(&local_68);
    uVar12 = *(uint *)(ppuVar9 + 5);
  }
  local_88._0_4_ = local_58;
  local_88._4_4_ = uStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = (undefined8 *)local_68;
  local_90 = local_60;
  local_a0 = ppuVar9;
  if ((uStack_54 != uVar12) || (local_60 != ppuVar2)) {
    do {
      puVar6 = *local_a0;
      lVar8 = (longlong)(int)local_88._4_4_;
      (**(code **)(*param_1 + 0x160))(param_1,puVar6 + lVar8 * 0x20);
      FUN_14021219d(param_1,puVar6 + lVar8 * 0x20 + 8);
      local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != ppuVar9 || (local_90 != ppuVar2 || local_88._4_4_ != uVar12));
  }
  local_a0 = &PTR_FUN_14ba6ce30;
  puVar10 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar10 = &PTR_FUN_14ba6cee0;
  puVar10[1] = param_1;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  local_98 = puVar10;
  local_90 = (undefined **)FUN_14001cc68(0x18,0x10);
  local_90[1] = &DAT_100000001;
  *local_90 = (undefined *)&PTR_FUN_14ba6cf10;
  local_90[2] = (undefined *)puVar10;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  uVar7 = FUN_14479d2ce(uVar7);
  uVar11 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  FUN_149028064(uVar11,uVar7,&local_a0);
  ppuVar2 = local_90;
  local_a0 = &PTR_FUN_14ba6ce30;
  if (local_90 != (undefined **)0x0) {
    LOCK();
    plVar3 = (longlong *)(local_90 + 1);
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar4 = (int *)((longlong)ppuVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)((longlong)*ppuVar2 + 0x10))(ppuVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f5973 FUN_1498f5973 body=931 status=ok
// SIG undefined FUN_1498f5973(void)

void FUN_1498f5973(longlong *param_1,undefined8 *param_2,char param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_f8 [43];
  char local_cd;
  uint local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_7c;
  undefined4 local_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14706e08c(*param_2,&local_c8);
  local_70 = local_c0;
  (**(code **)(*param_1 + 0x160))(param_1);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  FUN_1402ac1b3(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  FUN_1498f0050(param_1,uVar7);
  local_71 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  puVar5 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_71,1);
  }
  else {
    local_71 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  local_78 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  puVar5 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar5 + 1;
  if ((undefined4 *)puVar5[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
    }
    else {
      FUN_14572512c(param_1,&local_78);
    }
  }
  else {
    local_78 = *(undefined4 *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x68))();
  FUN_1408383eb(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_1408383eb(param_1,uVar7);
  lVar8 = (*(code *)**(undefined8 **)*param_2)();
  local_7c = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  puVar5 = (ulonglong *)param_1[1];
  piVar3 = (int *)*puVar5 + 1;
  local_cd = param_3;
  local_cc = param_4;
  if ((int *)puVar5[1] < piVar3) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_7c,4);
    }
    else {
      FUN_14572512c(param_1,&local_7c);
    }
  }
  else {
    local_7c = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar3;
  }
  plVar9 = (longlong *)(*(code *)**(undefined8 **)*param_2)();
  plVar4 = plVar9 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar12 = 0;
  local_60 = plVar4;
  if ((int)plVar9[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar12 = (int)plVar9[5];
  }
  local_b0 = local_58;
  iStack_ac = iStack_54;
  local_a8 = local_50;
  local_a4 = local_4c;
  local_c0 = local_68;
  local_b8 = local_60;
  local_c8 = plVar9;
  if ((iStack_54 != iVar12) || (local_60 != plVar4)) {
    do {
      lVar8 = *local_c8;
      lVar11 = (longlong)iStack_ac;
      (**(code **)(*param_1 + 0x160))(param_1,lVar8 + lVar11 * 0x20);
      FUN_14021219d(param_1,lVar8 + lVar11 * 0x20 + 8);
      local_b0 = local_b0 & ~local_c0._4_4_;
      FUN_1449c0562(&local_c0);
    } while (local_c8 != plVar9 || (local_b8 != plVar4 || iStack_ac != iVar12));
  }
  cVar6 = local_cd;
  local_68 = CONCAT71(local_68._1_7_,local_cd);
  puVar5 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_68,1);
  }
  else {
    local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)*puVar5);
    *puVar5 = (ulonglong)puVar1;
  }
  FUN_147ddea44(&local_c8,param_1,(uint)(cVar6 == '\x04') << 2 | local_cc);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  uVar7 = FUN_14479d2ce(uVar7);
  uVar10 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  FUN_149028064(uVar10,uVar7,&local_c8);
  FUN_147ddea84(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f5d17 FUN_1498f5d17 body=906 status=ok
// SIG undefined FUN_1498f5d17(void)

void FUN_1498f5d17(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_84;
  undefined4 local_80;
  undefined1 local_79;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14706e08c(*param_2,local_78);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x160))(param_1,local_78);
  (**(code **)(*plVar6 + 0x160))(plVar6,local_70);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  FUN_1402ac1b3(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  FUN_1498f0050(param_1,uVar7);
  local_79 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar4 + 1;
  if ((undefined1 *)puVar4[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_79,1);
  }
  else {
    local_79 = *(undefined1 *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  local_80 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  puVar4 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
    }
    else {
      FUN_14572512c(param_1,&local_80);
    }
  }
  else {
    local_80 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x68))();
  FUN_1408383eb(param_1,uVar7);
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_1408383eb(param_1,uVar7);
  lVar8 = (*(code *)**(undefined8 **)*param_2)();
  local_84 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  puVar4 = (ulonglong *)param_1[1];
  piVar3 = (int *)*puVar4 + 1;
  local_d1 = param_3;
  if ((int *)puVar4[1] < piVar3) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
    }
    else {
      FUN_14572512c(param_1,&local_84);
    }
  }
  else {
    local_84 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar3;
  }
  plVar9 = (longlong *)(*(code *)**(undefined8 **)*param_2)();
  plVar6 = plVar9 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar12 = 0;
  local_60 = plVar6;
  if ((int)plVar9[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar12 = (int)plVar9[5];
  }
  local_b8 = local_58;
  iStack_b4 = iStack_54;
  local_b0 = local_50;
  local_ac = local_4c;
  local_c8 = local_68;
  local_c0 = local_60;
  local_d0 = plVar9;
  if ((iStack_54 != iVar12) || (local_60 != plVar6)) {
    do {
      lVar8 = *local_d0;
      lVar11 = (longlong)iStack_b4;
      (**(code **)(*param_1 + 0x160))(param_1,lVar11 * 0x20 + lVar8);
      FUN_14021219d(param_1,lVar11 * 0x20 + lVar8 + 8);
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar9 || (local_c0 != plVar6 || iStack_b4 != iVar12));
  }
  cVar5 = local_d1;
  local_68 = CONCAT71(local_68._1_7_,local_d1);
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar4 + 1;
  if ((undefined1 *)puVar4[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_68,1);
  }
  else {
    local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)*puVar4);
    *puVar4 = (ulonglong)puVar1;
  }
  FUN_147ddea44(&local_d0,param_1,(cVar5 == '\x04') * '\x04' + '\x03');
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  uVar7 = FUN_14479d2ce(uVar7);
  uVar10 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  FUN_149028064(uVar10,uVar7,&local_d0);
  FUN_147ddea84(&local_d0);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f60a2 FUN_1498f60a2 body=413 status=ok
// SIG undefined FUN_1498f60a2(void)

void FUN_1498f60a2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14befcbe0;
  param_1[1] = &PTR_FUN_14befcc10;
  param_1[2] = &PTR_FUN_14befcc58;
  plVar1 = (longlong *)param_1[0x25];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[0x25];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  if (param_1[0x17] != 0) {
    FUN_1446f470e(local_20,L"WINDOWS",1);
    plVar1 = (longlong *)FUN_140272950(local_20);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1[0x17]);
    param_1[0x17] = 0;
  }
  if (param_1[0x28] != 0) {
    FUN_1446f470e(local_20,L"WINDOWS",1);
    plVar1 = (longlong *)FUN_140272950(local_20);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1[0x28]);
    param_1[0x28] = 0;
  }
  FUN_1449db362(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1498fac88(param_1 + 0x1a);
  FUN_1498f6240(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1498fac88(param_1 + 0xc);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_149900bd1(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f6240 FUN_1498f6240 body=89 status=ok
// SIG undefined FUN_1498f6240(void)

void FUN_1498f6240(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498f62a0 FUN_1498f62a0 body=3 status=ok
// SIG undefined FUN_1498f62a0(void)

undefined1 FUN_1498f62a0(void)

{
  return 1;
}



// FUNCTION 1498f62a4 FUN_1498f62a4 body=50 status=ok
// SIG undefined FUN_1498f62a4(void)

undefined8 FUN_1498f62a4(longlong param_1)

{
  if (*(char *)(param_1 + 0x120) == '\0') {
    do {
      FUN_1498f62d6(param_1);
      FUN_14000f986(0);
    } while (*(char *)(param_1 + 0x120) != '\x01');
  }
  return 0;
}



// FUNCTION 1498f62d6 FUN_1498f62d6 body=146 status=ok
// SIG undefined FUN_1498f62d6(void)

void FUN_1498f62d6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140212f8e(&local_20);
  *(undefined8 *)(param_1 + 0x50) = local_20;
  FUN_1498f741a(param_1);
  FUN_1498f6ebc(param_1,*(undefined8 *)(param_1 + 0xb8));
  FUN_1498f6ebc(param_1,*(undefined8 *)(param_1 + 0x140));
  FUN_1498f6ba0(param_1);
  FUN_1498f6a3c(param_1,param_1 + 0x60);
  FUN_1498f6a3c(param_1,param_1 + 0xd0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f6374 FUN_1498f6374 body=597 status=ok
// SIG undefined FUN_1498f6374(void)

undefined8 FUN_1498f6374(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(local_80,L"FUdpMessageTunnel.RemoteConnection");
  FUN_1498ecce2(&local_70,local_80);
  plVar4 = (longlong *)FUN_1498ee466(&local_70);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_70);
    (**(code **)(*local_70 + 0x18))(local_70,*param_2);
    (**(code **)(*local_70 + 0x28))(local_70,*(undefined2 *)(param_2 + 1));
    cVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_70);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_68 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (cVar3 != '\0') {
      lVar6 = FUN_14001cc68(0x90,0x10);
      FUN_1498f65ca(lVar6,plVar4,param_2);
      plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_14befdb40;
      plVar4[2] = lVar6;
      if ((lVar6 != 0) &&
         (((*(longlong *)(lVar6 + 0x10) == 0 || (*(longlong *)(lVar6 + 0x18) == 0)) ||
          (*(int *)(*(longlong *)(lVar6 + 0x18) + 8) < 1)))) {
        if (plVar4 == (longlong *)0x0) {
          *(longlong *)(lVar6 + 0x10) = lVar6;
          plVar5 = *(longlong **)(lVar6 + 0x18);
          if (plVar5 != (longlong *)0x0) {
LAB_1498f6540:
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
            *(longlong **)(lVar6 + 0x18) = plVar4;
            if (plVar4 != (longlong *)0x0) goto LAB_1498f656f;
          }
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          *(longlong *)(lVar6 + 0x10) = lVar6;
          if (*(longlong **)(lVar6 + 0x18) != plVar4) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(lVar6 + 0x18);
            if (plVar5 != (longlong *)0x0) goto LAB_1498f6540;
            *(longlong **)(lVar6 + 0x18) = plVar4;
          }
LAB_1498f656f:
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = lVar6;
      puVar7[2] = plVar4;
      uVar8 = 1;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = *(undefined8 **)(param_1 + 0xb8);
        *(undefined8 **)(param_1 + 0xb8) = puVar7;
        UNLOCK();
        LOCK();
        *puVar2 = puVar7;
        UNLOCK();
      }
      goto LAB_1498f6487;
    }
    FUN_1446f470e(&local_70,L"WINDOWS",1);
    plVar5 = (longlong *)FUN_140272950(&local_70);
    (**(code **)(*plVar5 + 0x38))(plVar5,plVar4);
  }
  uVar8 = 0;
LAB_1498f6487:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1498f65ca FUN_1498f65ca body=298 status=ok
// SIG undefined FUN_1498f65ca(void)

undefined8 * FUN_1498f65ca(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14befcce0;
  param_1[1] = &PTR_LAB_14befcd10;
  param_1[4] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[7] = puVar1;
  param_1[6] = puVar1;
  FUN_140212f8e(param_1 + 8);
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = *param_3;
  param_1[0xd] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_44 = 0;
  (**(code **)(*param_2 + 0x108))(param_2,0x200000,&local_44);
  (**(code **)(*(longlong *)param_1[0xd] + 0x100))((longlong *)param_1[0xd],0x200000,&local_44);
  local_50 = 0;
  local_58 = 0xffffffffffffffff;
  uVar2 = FUN_1411b1052(param_1,L"FUdpMessageTunnelConnection",0x20000,0);
  param_1[0xe] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f66f6 FUN_1498f66f6 body=167 status=ok
// SIG undefined FUN_1498f66f6(void)

undefined4 FUN_1498f66f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x10);
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x18) * 2;
    do {
      lVar2 = plVar6[1];
      lVar4 = *plVar6 + 8;
      if (*plVar6 == 0) {
        lVar4 = 0;
      }
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149900c52(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(longlong *)(lVar3 + (longlong)iVar1 * 0x10) = lVar4;
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
  }
  lVar4 = param_2[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return (int)lVar4;
}



// FUNCTION 1498f67c0 FUN_1498f67c0 body=291 status=ok
// SIG undefined FUN_1498f67c0(void)

void FUN_1498f67c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  (**(code **)(*param_1 + 0x10))();
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  auVar5 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
  *puVar2 = &PTR_FUN_14befa5d0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)((longlong)puVar2 + 0xc) = *param_2;
  puVar2[3] = (longlong)auVar5._0_8_;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0x100;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  uVar3 = FUN_1411b1052(puVar2,L"FTcpListener",0x2000,0,0xffffffffffffffff,0);
  puVar2[6] = uVar3;
  param_1[10] = (longlong)puVar2;
  if (*(int *)(puVar2 + 8) != 3) {
    FUN_1446efa72(puVar2 + 7,0,3,0x10);
    *(undefined4 *)(puVar2 + 8) = 3;
  }
  puVar2 = (undefined8 *)puVar2[7];
  *puVar2 = &PTR_LAB_14befae50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14befdb60;
  puVar2[3] = param_1 + -1;
  puVar2[4] = FUN_1498f68e4;
  *(undefined4 *)(puVar2 + 5) = 0;
  return;
}



// FUNCTION 1498f68e4 FUN_1498f68e4 body=302 status=ok
// SIG undefined FUN_1498f68e4(void)

undefined8 FUN_1498f68e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  lVar3 = FUN_14001cc68(0x90,0x10);
  FUN_1498f65ca(lVar3,param_2,param_3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14befdb40;
  plVar4[2] = lVar3;
  if ((lVar3 == 0) ||
     (((*(longlong *)(lVar3 + 0x10) != 0 && (*(longlong *)(lVar3 + 0x18) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))))) goto LAB_1498f69d4;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar7 = *(longlong **)(lVar3 + 0x18);
    if (plVar7 == (longlong *)0x0) goto LAB_1498f69d4;
LAB_1498f698b:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar3 + 0x18) = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_1498f69d4;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar3 + 0x18);
      if (plVar7 != (longlong *)0x0) goto LAB_1498f698b;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
  }
  LOCK();
  plVar7 = plVar4 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1498f69d4:
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = lVar3;
  puVar5[2] = plVar4;
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar5;
    UNLOCK();
    LOCK();
    uVar6 = *puVar2;
    *puVar2 = puVar5;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}



// FUNCTION 1498f6a12 FUN_1498f6a12 body=42 status=ok
// SIG undefined FUN_1498f6a12(void)

void FUN_1498f6a12(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1498f6a3c FUN_1498f6a3c body=355 status=ok
// SIG undefined FUN_1498f6a3c(void)

void FUN_1498f6a3c(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_2 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = param_2;
  local_58 = param_2;
  local_50 = param_2;
  if (iStack_2c < (int)local_38[3]) {
    auVar1 = roundpd(ZEXT816(0x41d1e1a300200000),ZEXT816(0x41d1e1a300200000),1);
    do {
      if ((longlong)auVar1._0_8_ <
          *(longlong *)(param_1 + 0x50) -
          *(longlong *)(*local_80 + 0x28 + (longlong)iStack_64 * 0x38)) {
        FUN_149901094(local_58);
        local_48 = CONCAT11(local_48._1_1_,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_149900e90(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f6ba0 FUN_1498f6ba0 body=794 status=ok
// SIG undefined FUN_1498f6ba0(void)

void FUN_1498f6ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a4;
  byte local_a0 [4];
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x20)) {
    uVar13 = 0;
    local_c0 = (ulonglong *)(param_1 + 0xb0);
LAB_1498f6c0b:
    lVar12 = uVar13 * 0x10;
    do {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x78))
                        (*(longlong **)(param_1 + 0x140),1,0);
      if (cVar7 == '\0') goto LAB_1498f6e28;
      cVar7 = FUN_1498f7786(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12) + 0x30,&local_78);
      if (cVar7 == '\0') {
        uVar13 = (ulonglong)((int)uVar13 + 1);
        goto LAB_1498f6d3e;
      }
      local_8c = 0;
      uStack_84 = 0;
      local_9c = 0;
      uStack_94 = 0;
      FUN_1498f12d6(local_78,local_a0);
      if (0x11 < local_a0[0]) goto LAB_1498f6e28;
      *(undefined8 *)(local_78 + 0x90) = 0;
      uVar8 = FUN_1447addd0(&local_8c,0x10);
      puVar10 = (undefined8 *)FUN_1499011ae(param_1 + 0xd0,uVar8,&local_8c);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar12);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)puVar10[1];
      *puVar10 = uVar3;
      puVar10[1] = lVar4;
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
      puVar10[3] = *(undefined8 *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0x130) =
           *(longlong *)(param_1 + 0x130) + (longlong)*(int *)(local_78 + 0xa0);
      puVar11 = local_c0;
      if (((local_9c._4_4_ == 0 && (int)local_9c == 0) && (int)uStack_94 == 0) &&
          uStack_94._4_4_ == 0) goto LAB_1498f6d72;
      uVar8 = FUN_1447addd0(&local_9c,0x10);
      iVar9 = FUN_149901234((longlong *)(param_1 + 0x60),uVar8);
      if (iVar9 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x60);
        if ((lVar4 + (longlong)iVar9 * 0x38 + 0x10U & 0xffffffffffffffef) != 0) goto LAB_1498f6eaf;
      }
      if (*(int *)(param_1 + 0x20) <= (int)uVar13) goto LAB_1498f6e28;
    } while( true );
  }
LAB_1498f6e4f:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1498f6eaf:
  puVar11 = (ulonglong *)(lVar4 + (longlong)iVar9 * 0x38 + 0x20);
LAB_1498f6d72:
  uVar6 = *puVar11;
  local_a4 = 0;
  plVar5 = *(longlong **)(param_1 + 0x140);
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_b8);
  (**(code **)(*local_b8 + 0x18))(local_b8,uVar6 & 0xffffffff);
  (**(code **)(*local_b8 + 0x28))(local_b8,uVar6 >> 0x20 & 0xffff);
  local_c8 = local_b8;
  (**(code **)(*plVar5 + 0x50))
            (plVar5,*(undefined8 *)(local_78 + 0x98),*(undefined4 *)(local_78 + 0xa0),&local_a4);
  plVar5 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1498f6d3e:
  if (*(int *)(param_1 + 0x20) <= (int)uVar13) goto LAB_1498f6e28;
  goto LAB_1498f6c0b;
LAB_1498f6e28:
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
  goto LAB_1498f6e4f;
}



// FUNCTION 1498f6ebc FUN_1498f6ebc body=1272 status=ok
// SIG undefined FUN_1498f6ebc(void)

void FUN_1498f6ebc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *_Dst;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined4 local_e0;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  byte local_a8 [4];
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_80;
  uint local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_64 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_1;
  FUN_1446f470e(local_a8,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_140272950(local_a8);
  (**(code **)(*plVar8 + 0x90))(plVar8,&local_78);
  local_7c = 0;
  cVar5 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar5 != '\0') {
    local_c8 = (longlong *)(local_d0 + 0xd0);
    local_c0 = local_d0 + 0x60;
    do {
      _Dst = (undefined8 *)FUN_14001cc68(0xa8);
      memset(_Dst,0,0x90);
      FUN_144869430(_Dst);
      _Dst[0x12] = 0;
      _Dst[0x13] = 0;
      _Dst[0x14] = 0;
      *_Dst = &PTR_FUN_149f22c90;
      *(byte *)(_Dst + 5) = *(byte *)(_Dst + 5) | 1;
      FUN_1449c2eca(_Dst,1);
      plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14bef8e10;
      plVar8[2] = (longlong)_Dst;
      uVar3 = local_7c;
      if (0xffe2 < local_7c) {
        uVar3 = 0xffe3;
      }
      FUN_140393c76(_Dst + 0x13,uVar3,1);
      local_80 = 0;
      local_e0 = 0;
      local_e8 = local_78;
      cVar5 = (**(code **)(*param_2 + 0x60))
                        (param_2,_Dst[0x13],*(undefined4 *)(_Dst + 0x14),&local_80);
      if (cVar5 != '\0') {
        local_94 = 0;
        uStack_8c = 0;
        local_a4 = 0;
        uStack_9c = 0;
        FUN_1498f12d6(_Dst,local_a8);
        if (local_a8[0] < 0x12) {
          uVar6 = FUN_1447addd0(&local_94,0x10);
          iVar7 = FUN_149901234(local_c8,uVar6,&local_94);
          if (iVar7 == -1) {
            _Dst[0x12] = 0;
            if (((local_a4._4_4_ == 0 && (int)local_a4 == 0) && (int)uStack_9c == 0) &&
                uStack_9c._4_4_ == 0) {
              if (0 < *(int *)(local_d0 + 0x20)) {
                lVar9 = 0;
                lVar11 = 0;
                do {
                  uVar2 = *(undefined8 *)(*(longlong *)(local_d0 + 0x18) + lVar9);
                  if (plVar8 == (longlong *)0x0) {
                    local_b8 = _Dst;
                    local_b0 = plVar8;
                    FUN_1498f73b6(uVar2,&local_b8);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                    UNLOCK();
                    local_b8 = _Dst;
                    local_b0 = plVar8;
                    FUN_1498f73b6(uVar2,&local_b8);
                    if (plVar8 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = plVar8 + 1;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)*plVar10 == 0) {
                        (**(code **)*plVar8)(plVar8);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar8 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar8 + 0x10))(plVar8);
                        }
                      }
                    }
                  }
                  lVar11 = lVar11 + 1;
                  lVar9 = lVar9 + 0x10;
                } while (lVar11 < *(int *)(local_d0 + 0x20));
              }
            }
            else {
              uVar6 = FUN_1447addd0(&local_a4,0x10);
              iVar7 = FUN_149901234(local_c8,uVar6,&local_a4);
              if (((iVar7 != -1) &&
                  (lVar9 = (longlong)iVar7 * 0x38 + *local_c8, plVar10 = (longlong *)(lVar9 + 0x10),
                  plVar10 != (longlong *)0x0 && lVar9 != 0)) && (lVar9 = *plVar10, lVar9 != 0)) {
                if (plVar8 == (longlong *)0x0) {
                  local_b8 = _Dst;
                  local_b0 = plVar8;
                  FUN_1498f73b6(lVar9,&local_b8);
                }
                else {
                  LOCK();
                  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                  UNLOCK();
                  local_b8 = _Dst;
                  local_b0 = plVar8;
                  FUN_1498f73b6(lVar9,&local_b8);
                  if (plVar8 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar8 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
                      (**(code **)*plVar8)(plVar8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar8 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar8 + 0x10))(plVar8);
                      }
                    }
                  }
                }
              }
            }
            uVar6 = FUN_1447addd0(&local_94,0x10);
            lVar9 = FUN_1499011ae(local_c0,uVar6,&local_94);
            plVar4 = local_70;
            plVar10 = local_78;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_70 + 1) = (int)local_70[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_78 + 0x20))(local_78,&local_b8);
            (**(code **)(*plVar10 + 0x40))(plVar10,local_64);
            local_b8._0_6_ = CONCAT24(local_64[0],(undefined4)local_b8);
            *(undefined8 **)(lVar9 + 0x10) = local_b8;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar4 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(local_d0 + 0x50);
            *(longlong *)(local_d0 + 0x138) =
                 *(longlong *)(local_d0 + 0x138) + (longlong)*(int *)(_Dst + 0x14);
            goto LAB_1498f7057;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        break;
      }
LAB_1498f7057:
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      cVar5 = (**(code **)(*param_2 + 0x38))(param_2,&local_7c);
    } while (cVar5 != '\0');
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498f73b6 FUN_1498f73b6 body=99 status=ok
// SIG undefined FUN_1498f73b6(void)

void FUN_1498f73b6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  
  cVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x28))(param_1 + 8);
  if (cVar3 != '\0') {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = *param_2;
    lVar1 = param_2[1];
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar4;
      *puVar2 = puVar4;
    }
  }
  return;
}



// FUNCTION 1498f741a FUN_1498f741a body=393 status=ok
// SIG undefined FUN_1498f741a(void)

void FUN_1498f741a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar7 = (ulonglong)*(int *)(param_1 + 0x20);
  if ((longlong)uVar7 < 1) {
    if (**(longlong **)(param_1 + 200) == 0) goto LAB_1498f74d8;
LAB_1498f74fc:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    cVar6 = FUN_1498f75a4(param_1 + 0xc0);
    if (cVar6 != '\0') {
      do {
        iVar4 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
          FUN_149901666(plVar1,iVar4);
        }
        lVar9 = *plVar1;
        *(undefined8 *)(lVar9 + (longlong)iVar4 * 0x10) = local_48;
        *(longlong **)(lVar9 + 8 + (longlong)iVar4 * 0x10) = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_1498f75a4(param_1 + 0xc0,&local_48);
      } while (cVar6 != '\0');
    }
    plVar1 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    lVar9 = uVar7 << 4;
    bVar8 = false;
    do {
      lVar9 = lVar9 + -0x10;
      cVar6 = (**(code **)(*(longlong *)(*(longlong *)(*plVar1 + lVar9) + 8) + 0x28))
                        (*(longlong *)(*plVar1 + lVar9) + 8);
      if (cVar6 == '\0') {
        FUN_149901542(plVar1,(int)uVar7 + -1);
        FUN_1499015ca(plVar1);
        bVar8 = true;
      }
      bVar5 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar5);
    if (**(longlong **)(param_1 + 200) != 0) goto LAB_1498f74fc;
    if (!bVar8) goto LAB_1498f74d8;
  }
  if ((*(int *)(param_1 + 0x150) != 0) && (*(longlong **)(param_1 + 0x148) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x60))();
  }
LAB_1498f74d8:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f75a4 FUN_1498f75a4 body=236 status=ok
// SIG undefined FUN_1498f75a4(void)

bool FUN_1498f75a4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
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
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1498f769a FUN_1498f769a body=145 status=ok
// SIG undefined FUN_1498f769a(void)

void FUN_1498f769a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_14befcce0;
  param_1[1] = &PTR_LAB_14befcd10;
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)param_1[0xe];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0xd];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[0xd] = 0;
  FUN_1498f772c(param_1 + 10);
  FUN_1498f772c(param_1 + 6);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f7720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498f772c FUN_1498f772c body=89 status=ok
// SIG undefined FUN_1498f772c(void)

void FUN_1498f772c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498f7786 FUN_1498f7786 body=236 status=ok
// SIG undefined FUN_1498f7786(void)

bool FUN_1498f7786(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
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
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1498f787c FUN_1498f787c body=153 status=ok
// SIG undefined FUN_1498f787c(void)

undefined8 FUN_1498f787c(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x88) = 1;
  do {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                      (*(longlong **)(param_1 + 0x68),2,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1498f7916(param_1);
      *(undefined1 *)(param_1 + 0x88) = uVar2;
      uVar2 = FUN_1498f7cb4(param_1);
      *(undefined1 *)(param_1 + 0x88) = uVar2;
    }
    FUN_14000f986(0);
  } while (*(char *)(param_1 + 0x88) != '\0');
  FUN_140212f8e(&local_20);
  *(undefined8 *)(param_1 + 0x20) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f7916 FUN_1498f7916 body=924 status=ok
// SIG undefined FUN_1498f7916(void)

ulonglong FUN_1498f7916(longlong param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 *local_120;
  ushort local_112;
  undefined **local_110;
  ulonglong *local_108;
  byte local_e8;
  byte local_e6;
  undefined8 local_80;
  longlong alStack_78 [2];
  int local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_64 = 0;
  do {
    uVar6 = (uint)unaff_RBP;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
    if ((cVar5 == '\0') || (local_64 < 2)) {
      unaff_RBP = CONCAT71((int7)(unaff_R13 >> 8),1);
      break;
    }
    local_68 = 0;
    unaff_RBP = 0;
    memset(&local_110,0,0x90);
    FUN_144869430(&local_110);
    local_80 = 0;
    alStack_78[0] = 0;
    alStack_78[1] = 0;
    local_110 = &PTR_FUN_149f22c90;
    local_e8 = local_e8 | 1;
    FUN_1449c2eca(&local_110,1);
    FUN_140393c76(alStack_78,2,1);
    local_128 = 2;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                      (*(longlong **)(param_1 + 0x68),alStack_78[0],2,&local_68);
    bVar4 = true;
    if (cVar5 != '\0') {
      puVar1 = (ushort *)*local_108 + 1;
      if ((ushort *)local_108[1] < puVar1) {
        if ((local_e6 & 2) == 0) {
          (*(code *)local_110[0x2e])(&local_110,&local_112,2);
        }
        else {
          thunk_FUN_1457251a8(&local_110,&local_112);
        }
      }
      else {
        local_112 = *(ushort *)*local_108;
        *local_108 = (ulonglong)puVar1;
      }
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))
                        (*(longlong **)(param_1 + 0x68),&local_64);
      bVar4 = false;
      if ((cVar5 != '\0') && (bVar4 = false, local_112 + 2 <= local_64)) {
        local_128 = 0;
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                          (*(longlong **)(param_1 + 0x68),&local_112,2,&local_68);
        bVar4 = true;
        if (cVar5 == '\0') {
          uVar6 = 0;
        }
        else {
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + (longlong)local_68;
          puVar7 = (undefined8 *)FUN_14001cc68(0xa8);
          memset(puVar7,0,0x90);
          FUN_144869430(puVar7);
          local_120 = puVar7 + 0x13;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          puVar7[0x14] = 0;
          *puVar7 = &PTR_FUN_149f22c90;
          *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) | 1;
          FUN_1449c2eca(puVar7,1);
          plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14bef8e10;
          plVar8[2] = (longlong)puVar7;
          FUN_140393c76(local_120,local_112,1);
          local_128 = 0;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x68))
                            (*(longlong **)(param_1 + 0x68),puVar7[0x13],
                             *(undefined4 *)(puVar7 + 0x14),&local_68);
          if ((char)uVar6 != '\0') {
            *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + (longlong)local_68;
            puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *puVar9 = 0;
            puVar9[1] = puVar7;
            puVar9[2] = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            if (puVar9 != (undefined8 *)0x0) {
              puVar7 = *(undefined8 **)(param_1 + 0x30);
              *(undefined8 **)(param_1 + 0x30) = puVar9;
              *puVar7 = puVar9;
            }
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
      }
      unaff_RBP = (ulonglong)uVar6;
    }
    if (alStack_78[0] != 0) {
      FUN_1400020a8();
    }
    FUN_144a7fc42(&local_110);
    unaff_R13 = unaff_RBP;
  } while (!bVar4);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffff01;
}



// FUNCTION 1498f7cb4 FUN_1498f7cb4 body=563 status=ok
// SIG undefined FUN_1498f7cb4(void)

ulonglong FUN_1498f7cb4(longlong param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined1 auStack_148 [46];
  undefined2 local_11a;
  undefined **local_118;
  ulonglong *local_110;
  byte local_ee;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70 [2];
  int local_5c;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (**(longlong **)(param_1 + 0x58) == 0) goto LAB_1498f7d04;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),1,0);
  if (cVar5 == '\0') goto LAB_1498f7d04;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_1498f7786(param_1 + 0x50);
  local_5c = 0;
  memset(&local_118,0,0x90);
  FUN_144869430(&local_118);
  local_88 = 0;
  local_118 = &PTR_FUN_149e1e590;
  local_78 = 0;
  local_80 = local_70;
  FUN_144a69558(&local_118,1);
  (*(code *)local_118[0x1e])(&local_118,1);
  local_70[0] = 0;
  local_70[1] = 0;
  local_118 = &PTR_FUN_149e5da80;
  local_11a = *(undefined2 *)(local_58 + 0xa0);
  puVar1 = (undefined2 *)*local_110 + 1;
  if ((undefined2 *)local_110[1] < puVar1) {
    if ((local_ee & 2) == 0) {
      FUN_144a2420a(&local_118,&local_11a,2);
    }
    else {
      thunk_FUN_1457251a8(&local_118,&local_11a);
    }
  }
  else {
    local_11a = *(undefined2 *)*local_110;
    *local_110 = (ulonglong)puVar1;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
                    (*(longlong **)(param_1 + 0x68),local_70[0],2,&local_5c);
  if (cVar5 == '\0') {
LAB_1498f7e7b:
    uVar6 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + (longlong)local_5c;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
                      (*(longlong **)(param_1 + 0x68),*(undefined8 *)(local_58 + 0x98),
                       *(undefined4 *)(local_58 + 0xa0));
    if (cVar5 == '\0') goto LAB_1498f7e7b;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + (longlong)local_5c;
    uVar6 = CONCAT71((int7)((ulonglong)&local_58 >> 8),1);
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(&local_118);
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
LAB_1498f7d04:
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f7ee8 FUN_1498f7ee8 body=31 status=ok
// SIG undefined FUN_1498f7ee8(void)

void FUN_1498f7ee8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 1498f7f22 FUN_1498f7f22 body=26 status=ok
// SIG undefined FUN_1498f7f22(void)

undefined8 FUN_1498f7f22(longlong param_1,undefined8 param_2)

{
  FUN_1498ed684(param_1 + 0x58);
  return param_2;
}



// FUNCTION 1498f7f3c FUN_1498f7f3c body=100 status=ok
// SIG undefined FUN_1498f7f3c(void)

longlong * FUN_1498f7f3c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    local_28 = param_1[3];
  }
  else {
    FUN_140212f8e(&local_28);
  }
  *param_2 = local_28 - param_1[7];
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f7fa2 FUN_1498f7fa2 body=28 status=ok
// SIG undefined FUN_1498f7fa2(void)

bool FUN_1498f7fa2(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))();
  return iVar1 == 1;
}



// FUNCTION 1498f7fbe FUN_1498f7fbe body=38 status=ok
// SIG undefined FUN_1498f7fbe(void)

undefined8 FUN_1498f7fbe(undefined8 param_1,int param_2)

{
  FUN_1498f05b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f7fe6 FUN_1498f7fe6 body=38 status=ok
// SIG undefined FUN_1498f7fe6(void)

undefined8 FUN_1498f7fe6(undefined8 param_1,int param_2)

{
  FUN_1498f0eac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f800c FUN_1498f800c body=45 status=ok
// SIG undefined FUN_1498f800c(void)

longlong FUN_1498f800c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498f0eac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f803c FUN_1498f803c body=38 status=ok
// SIG undefined FUN_1498f803c(void)

undefined8 FUN_1498f803c(undefined8 param_1,int param_2)

{
  FUN_1498f2148();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f8062 FUN_1498f8062 body=45 status=ok
// SIG undefined FUN_1498f8062(void)

longlong FUN_1498f8062(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498f2148(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f8090 FUN_1498f8090 body=38 status=ok
// SIG undefined FUN_1498f8090(void)

undefined8 FUN_1498f8090(undefined8 param_1,int param_2)

{
  FUN_1498f4e74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f80b6 FUN_1498f80b6 body=38 status=ok
// SIG undefined FUN_1498f80b6(void)

undefined8 FUN_1498f80b6(undefined8 param_1,int param_2)

{
  FUN_1498f60a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f80dc FUN_1498f80dc body=45 status=ok
// SIG undefined FUN_1498f80dc(void)

longlong FUN_1498f80dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498f60a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f810a FUN_1498f810a body=45 status=ok
// SIG undefined FUN_1498f810a(void)

longlong FUN_1498f810a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1498f60a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f8138 FUN_1498f8138 body=38 status=ok
// SIG undefined FUN_1498f8138(void)

undefined8 FUN_1498f8138(undefined8 param_1,int param_2)

{
  FUN_1498f769a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f815e FUN_1498f815e body=45 status=ok
// SIG undefined FUN_1498f815e(void)

longlong FUN_1498f815e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498f769a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f81e0 FUN_1498f81e0 body=54 status=ok
// SIG undefined FUN_1498f81e0(void)

undefined1 FUN_1498f81e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1498f823e FUN_1498f823e body=59 status=ok
// SIG undefined FUN_1498f823e(void)

undefined8 FUN_1498f823e(longlong *param_1)

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



// FUNCTION 1498f8284 FUN_1498f8284 body=37 status=ok
// SIG undefined FUN_1498f8284(void)

void FUN_1498f8284(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1498f8304 FUN_1498f8304 body=29 status=ok
// SIG undefined FUN_1498f8304(void)

undefined8 FUN_1498f8304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f8322 FUN_1498f8322 body=167 status=ok
// SIG undefined FUN_1498f8322(void)

void FUN_1498f8322(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1498f839d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1498f839d;
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
LAB_1498f839d:
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
                    /* WARNING: Could not recover jumptable at 0x0001498f83bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1498f83ca FUN_1498f83ca body=218 status=ok
// SIG undefined FUN_1498f83ca(void)

undefined8 *
FUN_1498f83ca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_4;
  lVar3 = param_4[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = *param_3;
  lVar3 = param_3[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1498f84a4 FUN_1498f84a4 body=121 status=ok
// SIG undefined FUN_1498f84a4(void)

void FUN_1498f84a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f8511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498f851e FUN_1498f851e body=189 status=ok
// SIG undefined FUN_1498f851e(void)

longlong * FUN_1498f851e(longlong *param_1,undefined1 param_2,byte param_3,undefined4 param_4)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = (longlong)(param_1 + 0x15);
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  *param_1 = (longlong)&PTR_FUN_14befd030;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = param_4;
  *(undefined1 *)(param_1 + 0x18) = param_2;
  *(byte *)((longlong)param_1 + 0xc1) = param_3;
  if (param_3 < 0xb) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  return param_1;
}



// FUNCTION 1498f85dc FUN_1498f85dc body=50 status=ok
// SIG undefined FUN_1498f85dc(void)

void FUN_1498f85dc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14befd030;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x10);
  return;
}



// FUNCTION 1498f860e FUN_1498f860e body=29 status=ok
// SIG undefined FUN_1498f860e(void)

undefined8 FUN_1498f860e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f862c FUN_1498f862c body=68 status=ok
// SIG undefined FUN_1498f862c(void)

undefined8 * FUN_1498f862c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14befd030;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498f8670 FUN_1498f8670 body=107 status=ok
// SIG undefined FUN_1498f8670(void)

void FUN_1498f8670(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1446b2536(0xa8);
    FUN_1498f84a4(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1446b2536(param_1 + 0x15);
  FUN_1498f84a4(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498f86d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1498f86dc FUN_1498f86dc body=52 status=ok
// SIG undefined FUN_1498f86dc(void)

void FUN_1498f86dc(longlong *param_1)

{
  FUN_1498f8710();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8710 FUN_1498f8710 body=312 status=ok
// SIG undefined FUN_1498f8710(void)

void FUN_1498f8710(longlong *param_1)

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



// FUNCTION 1498f884a FUN_1498f884a body=52 status=ok
// SIG undefined FUN_1498f884a(void)

void FUN_1498f884a(longlong *param_1)

{
  FUN_1498f887e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f887e FUN_1498f887e body=313 status=ok
// SIG undefined FUN_1498f887e(void)

void FUN_1498f887e(longlong *param_1)

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
      FUN_1498f89b8(*local_68 + (longlong)iStack_4c * 0x1f0 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403c4d14(param_1,0);
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



// FUNCTION 1498f89b8 FUN_1498f89b8 body=180 status=ok
// SIG undefined FUN_1498f89b8(void)

void FUN_1498f89b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_1498f8a6c(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1498f8afa(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1498f8c86(param_1 + 0x28);
  return;
}



// FUNCTION 1498f8a6c FUN_1498f8a6c body=52 status=ok
// SIG undefined FUN_1498f8a6c(void)

void FUN_1498f8a6c(longlong *param_1)

{
  FUN_1498f8aa0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8aa0 FUN_1498f8aa0 body=89 status=ok
// SIG undefined FUN_1498f8aa0(void)

void FUN_1498f8aa0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1498f8afa FUN_1498f8afa body=52 status=ok
// SIG undefined FUN_1498f8afa(void)

void FUN_1498f8afa(longlong *param_1)

{
  FUN_1498f8b2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8b2e FUN_1498f8b2e body=343 status=ok
// SIG undefined FUN_1498f8b2e(void)

void FUN_1498f8b2e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f8c86 FUN_1498f8c86 body=52 status=ok
// SIG undefined FUN_1498f8c86(void)

void FUN_1498f8c86(longlong *param_1)

{
  FUN_1498f8cba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8cba FUN_1498f8cba body=343 status=ok
// SIG undefined FUN_1498f8cba(void)

void FUN_1498f8cba(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f8e12 FUN_1498f8e12 body=52 status=ok
// SIG undefined FUN_1498f8e12(void)

void FUN_1498f8e12(longlong *param_1)

{
  FUN_1498f8e46();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8e46 FUN_1498f8e46 body=89 status=ok
// SIG undefined FUN_1498f8e46(void)

void FUN_1498f8e46(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 1498f8ea0 FUN_1498f8ea0 body=52 status=ok
// SIG undefined FUN_1498f8ea0(void)

void FUN_1498f8ea0(longlong *param_1)

{
  FUN_1498f8ed4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f8ed4 FUN_1498f8ed4 body=313 status=ok
// SIG undefined FUN_1498f8ed4(void)

void FUN_1498f8ed4(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x68 + (longlong)iStack_4c * 0x80) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
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



// FUNCTION 1498f900e FUN_1498f900e body=52 status=ok
// SIG undefined FUN_1498f900e(void)

void FUN_1498f900e(longlong *param_1)

{
  FUN_1498f9042();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498f9042 FUN_1498f9042 body=313 status=ok
// SIG undefined FUN_1498f9042(void)

void FUN_1498f9042(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 1498f917c FUN_1498f917c body=333 status=ok
// SIG undefined FUN_1498f917c(void)

void FUN_1498f917c(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x108);
  local_30 = param_1 + 0x118;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (*(int *)(*local_78 + 8 + (longlong)iStack_5c * 0x30) == *param_2) {
        FUN_1498f92ca(local_50);
        local_40 = CONCAT11(local_40._1_1_,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_1498f93a4(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f92ca FUN_1498f92ca body=95 status=ok
// SIG undefined FUN_1498f92ca(void)

void FUN_1498f92ca(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1498f932a();
  return;
}



// FUNCTION 1498f932a FUN_1498f932a body=122 status=ok
// SIG undefined FUN_1498f932a(void)

void FUN_1498f932a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1498f93a4 FUN_1498f93a4 body=68 status=ok
// SIG undefined FUN_1498f93a4(void)

void FUN_1498f93a4(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1498f93e8(param_1);
  return;
}



// FUNCTION 1498f93e8 FUN_1498f93e8 body=451 status=ok
// SIG undefined FUN_1498f93e8(void)

void FUN_1498f93e8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1498f95ac FUN_1498f95ac body=124 status=ok
// SIG undefined FUN_1498f95ac(void)

undefined4 * FUN_1498f95ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 **)(param_1 + 6) = param_2;
  iVar2 = param_2[4];
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_2 + 2);
    lVar5 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar4 + lVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 + 1U;
      if ((uint)param_1[5] < iVar3 + 1U) {
        FUN_14488eebe(param_1 + 2,iVar3);
      }
      *(undefined2 *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 2) = uVar1;
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar2 * 4 != lVar5);
  }
  return param_1;
}



// FUNCTION 1498f9628 FUN_1498f9628 body=210 status=ok
// SIG undefined FUN_1498f9628(void)

void FUN_1498f9628(undefined4 *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14041268c(param_2,param_1 + 2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    **(undefined4 **)(param_1 + 6) = *param_1;
    iVar2 = param_1[4];
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 2);
      lVar6 = *(longlong *)(param_1 + 6);
      lVar7 = 0;
      do {
        uVar1 = *(ushort *)(lVar5 + lVar7);
        iVar3 = *(int *)(lVar6 + 0x10);
        *(uint *)(lVar6 + 0x10) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x14) < iVar3 + 1U) {
          FUN_1447808da((longlong *)(lVar6 + 8),iVar3);
        }
        *(uint *)(*(longlong *)(lVar6 + 8) + (longlong)iVar3 * 4) = (uint)uVar1;
        lVar7 = lVar7 + 2;
      } while ((longlong)iVar2 * 2 != lVar7);
    }
  }
  return;
}



// FUNCTION 1498f96fa FUN_1498f96fa body=663 status=ok
// SIG undefined FUN_1498f96fa(void)

void FUN_1498f96fa(undefined4 *param_1,longlong *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[3] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 6,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 6) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  FUN_140077068(param_2,*(longlong *)(param_1 + 8) + 0x30);
  if (10 < param_3) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 7,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[7] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    **(undefined4 **)(param_1 + 8) = *param_1;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = (longlong)(int)param_1[1];
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = param_1[7];
    *(uint *)(*(longlong *)(param_1 + 8) + 0x14) = (uint)*(ushort *)(param_1 + 2);
    *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18) = (ulonglong)(uint)param_1[3];
    *(uint *)(*(longlong *)(param_1 + 8) + 0x20) = (uint)*(ushort *)(param_1 + 6);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28) = *(undefined8 *)(param_1 + 4);
  }
  return;
}



// FUNCTION 1498f9992 FUN_1498f9992 body=322 status=ok
// SIG undefined FUN_1498f9992(void)

void FUN_1498f9992(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1498f9ad6 FUN_1498f9ad6 body=311 status=ok
// SIG undefined FUN_1498f9ad6(void)

void FUN_1498f9ad6(longlong *param_1)

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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f9c0e FUN_1498f9c0e body=353 status=ok
// SIG undefined FUN_1498f9c0e(void)

void FUN_1498f9c0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x108);
  local_30 = param_1 + 0x118;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if ((*(longlong *)(param_2[1] + 0x1c0) <
           *param_2 - *(longlong *)(*local_78 + 0x20 + (longlong)iStack_5c * 0x30)) &&
         ((*(byte *)(*local_78 + 0x18 + (longlong)iStack_5c * 0x30) & 1) == 0)) {
        FUN_1498f92ca(local_50);
        local_40 = CONCAT11(local_40._1_1_,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_1498f93a4(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f9d70 FUN_1498f9d70 body=136 status=ok
// SIG undefined FUN_1498f9d70(void)

void FUN_1498f9d70(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_1498f9dfa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1498f9dfa FUN_1498f9dfa body=149 status=ok
// SIG undefined FUN_1498f9dfa(void)

void FUN_1498f9dfa(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x18);
  return;
}



// FUNCTION 1498f9e90 FUN_1498f9e90 body=348 status=ok
// SIG undefined FUN_1498f9e90(void)

void FUN_1498f9e90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x108);
  local_30 = param_1 + 0x118;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      cVar2 = FUN_1498f9fee(param_2,*local_78 + (longlong)iStack_5c * 0x30 + 8);
      if (cVar2 != '\0') {
        FUN_1498f92ca(local_50,iStack_5c);
        local_40 = CONCAT11(local_40._1_1_,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_1498f93a4(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498f9fee FUN_1498f9fee body=74 status=ok
// SIG undefined FUN_1498f9fee(void)

ulonglong FUN_1498f9fee(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 unaff_RBX;
  
  bVar1 = (longlong)
          ((double)*(longlong *)(param_1[2] + 0x160) + (double)*(longlong *)(param_1[2] + 0x160)) <
          param_1[1] - *(longlong *)(param_2 + 0x18) & *(byte *)(param_2 + 0x10);
  if (bVar1 == 1) {
    FUN_1498fa038();
    *(int *)*param_1 = *(int *)*param_1 + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
}



// FUNCTION 1498fa038 FUN_1498fa038 body=187 status=ok
// SIG undefined FUN_1498fa038(void)

void FUN_1498fa038(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar6 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb8);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & *param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 0x20) == *param_2) {
          if (lVar6 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar6 + 8);
          plVar4 = *(longlong **)(lVar6 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar3 != 0) {
            FUN_1446afd6a(lVar3,param_2[1]);
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001498fa0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1498fa0f4 FUN_1498fa0f4 body=50 status=ok
// SIG undefined FUN_1498fa0f4(void)

void FUN_1498fa0f4(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  FUN_1498fa260(param_1 + 1);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498fa118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1498fa126 FUN_1498fa126 body=31 status=ok
// SIG undefined FUN_1498fa126(void)

undefined8 FUN_1498fa126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fa162 FUN_1498fa162 body=93 status=ok
// SIG undefined FUN_1498fa162(void)

void FUN_1498fa162(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498fa1c0 FUN_1498fa1c0 body=126 status=ok
// SIG undefined FUN_1498fa1c0(void)

void FUN_1498fa1c0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498fa22f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498fa24a FUN_1498fa24a body=21 status=ok
// SIG undefined FUN_1498fa24a(void)

undefined8 FUN_1498fa24a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498fa260 FUN_1498fa260 body=68 status=ok
// SIG undefined FUN_1498fa260(void)

void FUN_1498fa260(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1498fa2a4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1498fa2a4 FUN_1498fa2a4 body=322 status=ok
// SIG undefined FUN_1498fa2a4(void)

void FUN_1498fa2a4(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1498fa3ec FUN_1498fa3ec body=45 status=ok
// SIG undefined FUN_1498fa3ec(void)

undefined8 FUN_1498fa3ec(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    do {
      FUN_1446b2a08(param_1,param_1 + 0x40);
    } while (*(char *)(param_1 + 0x20) != '\x01');
  }
  return 0;
}



// FUNCTION 1498fa428 FUN_1498fa428 body=38 status=ok
// SIG undefined FUN_1498fa428(void)

undefined8 FUN_1498fa428(undefined8 param_1,int param_2)

{
  FUN_1498fa582();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fa44e FUN_1498fa44e body=45 status=ok
// SIG undefined FUN_1498fa44e(void)

longlong FUN_1498fa44e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498fa582(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fa47c FUN_1498fa47c body=67 status=ok
// SIG undefined FUN_1498fa47c(void)

void FUN_1498fa47c(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_1446b2a08(param_1 + -8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fa4c0 FUN_1498fa4c0 body=121 status=ok
// SIG undefined FUN_1498fa4c0(void)

undefined8 * FUN_1498fa4c0(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *_Dst;
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14befd3e0;
  _Dst = param_1 + 2;
  uVar1 = *param_2;
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_149f22c90;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  FUN_1449c2eca(_Dst,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return param_1;
}



// FUNCTION 1498fa53a FUN_1498fa53a body=42 status=ok
// SIG undefined FUN_1498fa53a(void)

void FUN_1498fa53a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x10);
  return;
}



// FUNCTION 1498fa564 FUN_1498fa564 body=29 status=ok
// SIG undefined FUN_1498fa564(void)

undefined8 FUN_1498fa564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fa582 FUN_1498fa582 body=101 status=ok
// SIG undefined FUN_1498fa582(void)

void FUN_1498fa582(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14befd3a0;
  param_1[1] = &PTR_FUN_14befd3d0;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FUN_1449db362(param_1 + 10);
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498fa5e8 FUN_1498fa5e8 body=130 status=ok
// SIG undefined FUN_1498fa5e8(void)

int FUN_1498fa5e8(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14cc32498 != DAT_14cc324c4) {
    puVar2 = &DAT_14cc324c8;
    if (DAT_14cc324d0 != (undefined *)0x0) {
      puVar2 = DAT_14cc324d0;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cc324d8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1;
        if ((((*(int *)(DAT_14cc32490 + lVar3 * 0x28) == *param_2) &&
             (*(int *)(DAT_14cc32490 + 4 + lVar3 * 0x28) == param_2[1])) &&
            (*(int *)(DAT_14cc32490 + 8 + lVar3 * 0x28) == param_2[2])) &&
           (*(int *)(DAT_14cc32490 + 0xc + lVar3 * 0x28) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(DAT_14cc32490 + lVar3 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1498fa66a FUN_1498fa66a body=134 status=ok
// SIG undefined FUN_1498fa66a(void)

longlong FUN_1498fa66a(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1498fa5e8();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1;
    if (DAT_14cc32490 + lVar2 * 0x28 != 0) goto LAB_1498fa6a4;
  }
  local_28 = param_2;
  FUN_1498fa6f2(&local_1c,param_1);
  lVar2 = (longlong)local_1c;
LAB_1498fa6a4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cc32490 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fa6f2 FUN_1498fa6f2 body=321 status=ok
// SIG undefined FUN_1498fa6f2(void)

undefined4 * FUN_1498fa6f2(undefined4 *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1498fa834(local_68);
  local_58 = 0;
  uStack_50 = 0;
  FUN_140212f8e(&uStack_50);
  uVar2 = ((undefined8 *)*param_3)[1];
  *local_60 = *(undefined8 *)*param_3;
  local_60[1] = uVar2;
  *(undefined4 *)(local_60 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)local_60 + 0x14) = local_58._4_4_;
  *(undefined4 *)(local_60 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)local_60 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)(local_60 + 4) = 0xffffffff;
  cVar3 = FUN_1498fa942(param_2,local_60,local_68);
  if (cVar3 == '\0') {
    uVar4 = DAT_14cc32498 - DAT_14cc324c4;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cc324d8)) {
      param_2 = DAT_14cc324d8 - 1U & param_2;
      *(uint *)((longlong)local_60 + 0x24) = param_2;
      puVar5 = DAT_14cc324d0;
      if (DAT_14cc324d0 == (undefined *)0x0) {
        puVar5 = &DAT_14cc324c8;
      }
      *(undefined4 *)(local_60 + 4) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14cc324d8 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14cc324d0;
      if (DAT_14cc324d0 == (undefined *)0x0) {
        puVar5 = &DAT_14cc324c8;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cc324d8 - 1U & (longlong)(int)param_2) * 4) =
           local_68[0];
    }
    else {
      DAT_14cc324d8 = iVar7;
      FUN_1498faa22();
    }
  }
  *param_1 = local_68[0];
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fa834 FUN_1498fa834 body=270 status=ok
// SIG undefined FUN_1498fa834(void)

int * FUN_1498fa834(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc324c0;
  iVar4 = DAT_14cc32498;
  if (DAT_14cc324c4 == 0) {
    iVar2 = DAT_14cc32498 + 1;
    bVar7 = DAT_14cc3249c == DAT_14cc32498;
    DAT_14cc32498 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cc32490,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc324a0,1);
    puVar3 = DAT_14cc324b0;
    if (DAT_14cc324b0 == (undefined *)0x0) {
      puVar3 = &DAT_14cc324a0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cc324c0;
    DAT_14cc324c0 = *(int *)(DAT_14cc32490 + 4 + lVar6 * 0x28);
    DAT_14cc324c4 = DAT_14cc324c4 + -1;
    iVar4 = iVar2;
    if (DAT_14cc324c4 != 0) {
      *(undefined4 *)(DAT_14cc32490 + (longlong)DAT_14cc324c0 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc324a0;
  if (DAT_14cc324b0 != (undefined *)0x0) {
    puVar3 = DAT_14cc324b0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cc32490;
  return param_1;
}



// FUNCTION 1498fa942 FUN_1498fa942 body=95 status=ok
// SIG undefined FUN_1498fa942(void)

undefined8 FUN_1498fa942(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  
  if ((DAT_14cc32498 - DAT_14cc324c4 != 1) &&
     (iVar10 = FUN_1498fa5e8(), lVar9 = DAT_14cc32490, iVar10 != -1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    puVar1 = (undefined4 *)(DAT_14cc32490 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_2[4];
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar1 = (undefined4 *)(lVar9 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1498fa9a2(*param_3);
    *param_3 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1498fa9a2 FUN_1498fa9a2 body=128 status=ok
// SIG undefined FUN_1498fa9a2(void)

void FUN_1498fa9a2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc32490;
  if (DAT_14cc324c4 != 0) {
    *(int *)(DAT_14cc32490 + (longlong)DAT_14cc324c0 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc324c4) {
    iVar4 = DAT_14cc324c0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14cc324c4 = DAT_14cc324c4 + 1;
  puVar3 = &DAT_14cc324a0;
  if (DAT_14cc324b0 != (undefined *)0x0) {
    puVar3 = DAT_14cc324b0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc324c0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1498faa22 FUN_1498faa22 body=478 status=ok
// SIG undefined FUN_1498faa22(void)

void FUN_1498faa22(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc324d0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc324d0,0,0,4);
  }
  uVar2 = DAT_14cc324d8;
  uVar3 = local_58;
  if (DAT_14cc324d8 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cc324c8,0,DAT_14cc324d8,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cc324d0;
        if (DAT_14cc324d0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc324c8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cc324d8 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_48 = 0x100000000;
    local_40 = &DAT_14cc324a0;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (DAT_14cc324b8 != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = &DAT_14cc32490;
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    if (local_58._4_4_ < *(int *)(local_40 + 0x18)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar1 = *local_70 + (longlong)iVar4 * 0x28;
        iVar5 = FUN_1447addd0(lVar1,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14cc324d8 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x24) = iVar5;
        puVar7 = DAT_14cc324d0;
        if (DAT_14cc324d0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc324c8;
        }
        *(undefined4 *)(lVar1 + 0x20) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cc324d8 - 1U & uVar6) * 4);
        puVar7 = DAT_14cc324d0;
        if (DAT_14cc324d0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc324c8;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14cc324d8 - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fac02 FUN_1498fac02 body=132 status=ok
// SIG undefined FUN_1498fac02(void)

void FUN_1498fac02(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498fac88 FUN_1498fac88 body=52 status=ok
// SIG undefined FUN_1498fac88(void)

void FUN_1498fac88(longlong *param_1)

{
  FUN_1498facbc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498facbc FUN_1498facbc body=343 status=ok
// SIG undefined FUN_1498facbc(void)

void FUN_1498facbc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x38);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fae18 FUN_1498fae18 body=48 status=ok
// SIG undefined FUN_1498fae18(void)

void FUN_1498fae18(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1498fae48 FUN_1498fae48 body=81 status=ok
// SIG undefined FUN_1498fae48(void)

void FUN_1498fae48(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1498fae9a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1498fae9a FUN_1498fae9a body=90 status=ok
// SIG undefined FUN_1498fae9a(void)

void FUN_1498fae9a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1498faef4();
  return;
}



// FUNCTION 1498faef4 FUN_1498faef4 body=78 status=ok
// SIG undefined FUN_1498faef4(void)

void FUN_1498faef4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1498faf42(param_1,param_2);
  return;
}



// FUNCTION 1498faf42 FUN_1498faf42 body=114 status=ok
// SIG undefined FUN_1498faf42(void)

void FUN_1498faf42(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1498fafb4 FUN_1498fafb4 body=90 status=ok
// SIG undefined FUN_1498fafb4(void)

int * FUN_1498fafb4(int *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)(param_2 + -1 + (uint)(param_2 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = 1 << ((byte)lVar2 & 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = uVar3;
  FUN_1446f48e2(param_1 + 2);
  memset(*(void **)(param_1 + 2),0,(ulonglong)uVar3 << 2);
  *param_1 = param_1[4] + -1;
  return param_1;
}



// FUNCTION 1498fb00e FUN_1498fb00e body=230 status=ok
// SIG undefined FUN_1498fb00e(void)

undefined8 * FUN_1498fb00e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1498fb0f6 FUN_1498fb0f6 body=29 status=ok
// SIG undefined FUN_1498fb0f6(void)

undefined8 FUN_1498fb0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fb13c FUN_1498fb13c body=101 status=ok
// SIG undefined FUN_1498fb13c(void)

void FUN_1498fb13c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498fb1a2 FUN_1498fb1a2 body=101 status=ok
// SIG undefined FUN_1498fb1a2(void)

void FUN_1498fb1a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498fb208 FUN_1498fb208 body=134 status=ok
// SIG undefined FUN_1498fb208(void)

void FUN_1498fb208(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14befd4b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd440;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498fb27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498fb2a0 FUN_1498fb2a0 body=25 status=ok
// SIG undefined FUN_1498fb2a0(void)

undefined8 FUN_1498fb2a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498fb2bc FUN_1498fb2bc body=63 status=ok
// SIG undefined FUN_1498fb2bc(void)

void FUN_1498fb2bc(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1498f887e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498fb446(param_1);
    return;
  }
  FUN_1498fb2fc(param_1);
  FUN_1498f887e(param_1);
  return;
}



// FUNCTION 1498fb2fc FUN_1498fb2fc body=328 status=ok
// SIG undefined FUN_1498fb2fc(void)

void FUN_1498fb2fc(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1ec + (longlong)iVar4 * 0x1f0) * 4) =
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



// FUNCTION 1498fb446 FUN_1498fb446 body=455 status=ok
// SIG undefined FUN_1498fb446(void)

void FUN_1498fb446(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x1f0;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1ec + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1e8 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fb60e FUN_1498fb60e body=181 status=ok
// SIG undefined FUN_1498fb60e(void)

longlong FUN_1498fb60e(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1498fb6a6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1498fb6c4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1498fb6a6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1498fb6c4 FUN_1498fb6c4 body=269 status=ok
// SIG undefined FUN_1498fb6c4(void)

undefined4 * FUN_1498fb6c4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498fb7d2(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_1498fb8b8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1498fb9ca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fb7d2 FUN_1498fb7d2 body=229 status=ok
// SIG undefined FUN_1498fb7d2(void)

int * FUN_1498fb7d2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1498fb8b8 FUN_1498fb8b8 body=159 status=ok
// SIG undefined FUN_1498fb8b8(void)

undefined8 FUN_1498fb8b8(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_1498fb958(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498fb958 FUN_1498fb958 body=114 status=ok
// SIG undefined FUN_1498fb958(void)

void FUN_1498fb958(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1498fb9ca FUN_1498fb9ca body=413 status=ok
// SIG undefined FUN_1498fb9ca(void)

void FUN_1498fb9ca(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fbb68 FUN_1498fbb68 body=123 status=ok
// SIG undefined FUN_1498fbb68(void)

int FUN_1498fbb68(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1498fbbe4 FUN_1498fbbe4 body=115 status=ok
// SIG undefined FUN_1498fbbe4(void)

int FUN_1498fbbe4(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x80;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x78);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1498fbc58 FUN_1498fbc58 body=276 status=ok
// SIG undefined FUN_1498fbc58(void)

void FUN_1498fbc58(undefined4 *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
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
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32358);
  uVar4 = (ulonglong)DAT_14cc32388;
  if (0 < (longlong)uVar4) {
    bVar5 = false;
    DAT_14cc32394 = DAT_14cc32394 + 1;
    do {
      lVar6 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(DAT_14cc32380 + lVar6) != 0 &&
             (plVar1 = *(longlong **)(DAT_14cc32380 + -8 + lVar6), plVar1 != (longlong *)0x0))) {
        local_68 = *param_1;
        uStack_64 = param_1[1];
        uStack_60 = param_1[2];
        uStack_5c = param_1[3];
        local_58 = param_1[4];
        uStack_54 = param_1[5];
        uStack_50 = param_1[6];
        uStack_4c = param_1[7];
        local_48 = param_1[8];
        uStack_44 = param_1[9];
        uStack_40 = param_1[10];
        uStack_3c = param_1[0xb];
        cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_68);
        if (cVar3 == '\0') break;
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          DAT_14cc32394 = DAT_14cc32394 + -1;
          if (!bVar5) goto LAB_1498fbd3d;
          goto LAB_1498fbd27;
        }
      }
      uVar4 = uVar7 - 1;
      bVar5 = true;
    } while (1 < uVar7);
    DAT_14cc32394 = DAT_14cc32394 + -1;
LAB_1498fbd27:
    FUN_14109be94(&DAT_14cc32358,0);
  }
LAB_1498fbd3d:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc32358);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fbd6e FUN_1498fbd6e body=322 status=ok
// SIG undefined FUN_1498fbd6e(void)

void FUN_1498fbd6e(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1498fbeb2 FUN_1498fbeb2 body=285 status=ok
// SIG undefined FUN_1498fbeb2(void)

void FUN_1498fbeb2(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x68 + (longlong)iStack_44 * 0x80) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fbfd0 FUN_1498fbfd0 body=296 status=ok
// SIG undefined FUN_1498fbfd0(void)

undefined4 * FUN_1498fbfd0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498fc0fa(param_1,local_48);
  FUN_1498fc256(param_3,local_40);
  *(undefined4 *)(local_40 + 0x78) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1447addd0(local_40,0x10);
  cVar2 = FUN_1498fc1e0(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_40 + 0x7c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x78) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1498fc344(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fc0fa FUN_1498fc0fa body=229 status=ok
// SIG undefined FUN_1498fc0fa(void)

int * FUN_1498fc0fa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140eca382(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1498fc1e0 FUN_1498fc1e0 body=117 status=ok
// SIG undefined FUN_1498fc1e0(void)

undefined8 FUN_1498fc1e0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1498fbbe4(), iVar2 != -1)) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x68 + (longlong)iVar2 * 0x80) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x80),param_3,0x78);
    FUN_1498fc2d2(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1498fc256 FUN_1498fc256 body=123 status=ok
// SIG undefined FUN_1498fc256(void)

undefined4 * FUN_1498fc256(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *param_2 = *puVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  puVar8 = puVar3;
  puVar9 = (undefined8 *)(param_2 + 4);
  for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined8 *)(param_2 + 0x1a) = 0;
  iVar1 = *(int *)(puVar3 + 0xc);
  _Src = (void *)puVar3[0xb];
  param_2[0x1c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[0x1d] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 0x1a,iVar1,0);
    memcpy(*(void **)(param_2 + 0x1a),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1498fc2d2 FUN_1498fc2d2 body=114 status=ok
// SIG undefined FUN_1498fc2d2(void)

void FUN_1498fc2d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1498fc344 FUN_1498fc344 body=449 status=ok
// SIG undefined FUN_1498fc344(void)

void FUN_1498fc344(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x80;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x7c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fc506 FUN_1498fc506 body=234 status=ok
// SIG undefined FUN_1498fc506(void)

undefined8 * FUN_1498fc506(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14befd520;
  param_1[1] = &PTR_FUN_14befd550;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[3] = puVar1;
  param_1[2] = puVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  auVar3 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
  param_1[9] = (longlong)auVar3._0_8_;
  local_24 = 0;
  (**(code **)(*param_2 + 0x100))(param_2,0x80000);
  uVar2 = FUN_1405d8a54(0);
  param_1[10] = uVar2;
  local_30 = 0;
  local_38 = 0xffffffffffffffff;
  uVar2 = FUN_1411b1052(param_1,L"FUdpMessageProcessor.Sender",0x20000,1);
  param_1[7] = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fc5f6 FUN_1498fc5f6 body=125 status=ok
// SIG undefined FUN_1498fc5f6(void)

undefined8 FUN_1498fc5f6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    do {
      cVar1 = FUN_1498fc724(param_1,param_1 + 0x48);
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x30) = 1;
        return 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x48) / 10000;
      if (0xfffffffe < lVar2) {
        lVar2 = 0xffffffff;
      }
      if (lVar2 < 1) {
        lVar2 = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),lVar2,0);
    } while (*(char *)(param_1 + 0x30) != '\x01');
  }
  return 0;
}



// FUNCTION 1498fc68c FUN_1498fc68c body=38 status=ok
// SIG undefined FUN_1498fc68c(void)

undefined8 FUN_1498fc68c(undefined8 param_1,int param_2)

{
  FUN_1498fc9e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fc6b2 FUN_1498fc6b2 body=45 status=ok
// SIG undefined FUN_1498fc6b2(void)

longlong FUN_1498fc6b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498fc9e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fc6e0 FUN_1498fc6e0 body=67 status=ok
// SIG undefined FUN_1498fc6e0(void)

void FUN_1498fc6e0(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_1498fc724(param_1 + -8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fc724 FUN_1498fc724 body=376 status=ok
// SIG undefined FUN_1498fc724(void)

ulonglong FUN_1498fc724(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  uint local_7c;
  undefined8 *local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined2 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  do {
    uVar7 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (**(longlong **)(param_1 + 0x18) == 0) goto LAB_1498fc86e;
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                      (*(longlong **)(param_1 + 0x28),1,*param_2);
    if (cVar6 == '\0') goto LAB_1498fc86e;
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)0x0;
    local_7c = 0;
    FUN_1498fc89e(param_1 + 0x10,&local_78);
    plVar4 = *(longlong **)(param_1 + 0x28);
    (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_90);
    (**(code **)(*local_90 + 0x18))(local_90,local_68);
    (**(code **)(*local_90 + 0x28))(local_90,local_64);
    local_98 = local_90;
    (**(code **)(*plVar4 + 0x50))(plVar4,*local_78,*(undefined4 *)(local_78 + 1),&local_7c);
    plVar4 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    plVar4 = plStack_70;
    uVar5 = local_7c;
    unaff_RBP = (ulonglong)local_7c;
    uVar3 = *(uint *)(local_78 + 1);
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  } while (uVar5 == uVar3);
  uVar7 = 0;
LAB_1498fc86e:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fc89e FUN_1498fc89e body=210 status=ok
// SIG undefined FUN_1498fc89e(void)

void FUN_1498fc89e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_1498fc972(param_2,lVar3 + 8);
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_1498fc972(lVar3 + 8,&local_48);
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fc972 FUN_1498fc972 body=109 status=ok
// SIG undefined FUN_1498fc972(void)

undefined8 * FUN_1498fc972(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1498fc9e0 FUN_1498fc9e0 body=100 status=ok
// SIG undefined FUN_1498fc9e0(void)

void FUN_1498fc9e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14befd520;
  param_1[1] = &PTR_FUN_14befd550;
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FUN_14018802a(param_1[10]);
  param_1[10] = 0;
  FUN_1498fca44(param_1 + 2);
  return;
}



// FUNCTION 1498fca44 FUN_1498fca44 body=89 status=ok
// SIG undefined FUN_1498fca44(void)

void FUN_1498fca44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498fca9e FUN_1498fca9e body=109 status=ok
// SIG undefined FUN_1498fca9e(void)

undefined8 * FUN_1498fca9e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1498fcb0c FUN_1498fcb0c body=139 status=ok
// SIG undefined FUN_1498fcb0c(void)

longlong FUN_1498fcb0c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1498fcb98();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x1f0;
    if (lVar3 + lVar2 != 0) goto LAB_1498fcb48;
  }
  local_30 = param_3;
  FUN_1498fcc12(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x1f0;
LAB_1498fcb48:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fcb98 FUN_1498fcb98 body=121 status=ok
// SIG undefined FUN_1498fcb98(void)

int FUN_1498fcb98(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x1f0;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x1e8);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1498fcc12 FUN_1498fcc12 body=328 status=ok
// SIG undefined FUN_1498fcc12(void)

undefined4 * FUN_1498fcc12(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_248 [32];
  undefined4 local_228 [2];
  undefined4 *local_220;
  undefined1 local_218 [472];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1498fcd5c(param_1,local_228);
  FUN_1498f1ab4(local_218);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_220 = *puVar1;
  local_220[1] = uVar2;
  local_220[2] = uVar3;
  local_220[3] = uVar4;
  FUN_1498fcec0(local_220 + 4,local_218);
  FUN_1498f89b8(local_218);
  local_220[0x7a] = 0xffffffff;
  cVar5 = FUN_1498fce4a(param_1,param_3,local_220,local_228);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_220[0x7b] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_220[0x7a] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_228[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1498fb446(param_1);
    }
  }
  *param_2 = local_228[0];
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fcd5c FUN_1498fcd5c body=237 status=ok
// SIG undefined FUN_1498fcd5c(void)

int * FUN_1498fcd5c(longlong *param_1,int *param_2)

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
      FUN_1457f50c2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1f0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1f0) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1f0 + *param_1;
  return param_2;
}


