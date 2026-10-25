// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14753f074 FUN_14753f074 body=64 status=ok
// SIG undefined FUN_14753f074(void)

longlong FUN_14753f074(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753e8f2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_14753f0b4(lVar2,1);
  return lVar2;
}



// FUNCTION 14753f0b4 FUN_14753f0b4 body=19 status=ok
// SIG undefined FUN_14753f0b4(void)

void FUN_14753f0b4(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 14753f0c8 FUN_14753f0c8 body=372 status=ok
// SIG undefined FUN_14753f0c8(void)

longlong * FUN_14753f0c8(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
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
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140eb5d8c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x92492 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147528b3c(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140eb5d8c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14753f23e(param_2);
        FUN_147528b3c(uVar3,param_1);
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



// FUNCTION 14753f23e FUN_14753f23e body=73 status=ok
// SIG undefined FUN_14753f23e(void)

longlong FUN_14753f23e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753f2b0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1c + *param_1;
  FUN_14753f287(lVar2,1);
  return lVar2;
}



// FUNCTION 14753f287 FUN_14753f287 body=40 status=ok
// SIG undefined FUN_14753f287(void)

void FUN_14753f287(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0xe) = 0;
    *(undefined2 *)((longlong)param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 3) = 2;
    param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
  }
  return;
}



// FUNCTION 14753f2b0 FUN_14753f2b0 body=157 status=ok
// SIG undefined FUN_14753f2b0(void)

void FUN_14753f2b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14753f34e FUN_14753f34e body=345 status=ok
// SIG undefined FUN_14753f34e(void)

void FUN_14753f34e(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x20),
            (void *)((longlong)(int)param_2 * 0x20 + *plVar3 + 0x20),(longlong)iVar6 << 5);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753f4a8 FUN_14753f4a8 body=355 status=ok
// SIG undefined FUN_14753f4a8(void)

longlong * FUN_14753f4a8(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
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
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140aba048(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146224566(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140aba048(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14753f60c(param_2);
        FUN_146224566(uVar3,param_1);
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



// FUNCTION 14753f60c FUN_14753f60c body=59 status=ok
// SIG undefined FUN_14753f60c(void)

longlong FUN_14753f60c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14753f65a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14753f647(lVar2);
  return lVar2;
}



// FUNCTION 14753f647 FUN_14753f647 body=18 status=ok
// SIG undefined FUN_14753f647(void)

void FUN_14753f647(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  return;
}



// FUNCTION 14753f65a FUN_14753f65a body=132 status=ok
// SIG undefined FUN_14753f65a(void)

void FUN_14753f65a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14753f6e0 FUN_14753f6e0 body=237 status=ok
// SIG undefined FUN_14753f6e0(void)

void FUN_14753f6e0(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_147526062();
  if (uVar5 != param_2) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    lVar4 = *plVar3;
    lVar6 = (longlong)(int)param_2 * 0x20;
    puVar1 = (undefined4 *)(lVar4 + lVar6);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    iVar7 = (int)plVar3[1];
    if (~param_2 + iVar7 != 0) {
      memmove((void *)(lVar4 + lVar6),(void *)(lVar4 + lVar6 + 0x20),
              (longlong)(int)(~param_2 + iVar7) << 5);
      iVar7 = (int)plVar3[1];
    }
    *(int *)(plVar3 + 1) = iVar7 + -1;
    plVar3 = *(longlong **)(param_1 + 0x18);
    iVar7 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar7 + 1U) {
      FUN_14753f65a(plVar3,iVar7);
    }
    lVar6 = (longlong)(int)uVar5 * 0x20;
    memmove((void *)(*plVar3 + lVar6 + 0x20),(void *)(*plVar3 + lVar6),
            (ulonglong)(iVar7 - uVar5) << 5);
    lVar4 = *plVar3;
    puVar1 = (undefined4 *)(lVar4 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753f7ce FUN_14753f7ce body=318 status=ok
// SIG undefined FUN_14753f7ce(void)

uint FUN_14753f7ce(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar12 = FUN_147525f8a();
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_14753f65a(plVar3,iVar2);
  }
  lVar13 = (ulonglong)uVar12 * 0x20;
  memmove((void *)(*plVar3 + lVar13 + 0x20),(void *)(*plVar3 + lVar13),
          (ulonglong)(iVar2 - uVar12) << 5);
  lVar4 = *plVar3;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = param_3[7];
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar13);
  *puVar1 = param_3[4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar4 + lVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x10) != 0)) {
    lVar13 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 8) + 8 + lVar13) != 0) &&
         (*(longlong *)(*(longlong *)(lVar4 + 8) + lVar13) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = param_2 << 0x20 | (ulonglong)uVar12;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(lVar4 + 0x10) * 0x10 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753f90d FUN_14753f90d body=577 status=ok
// SIG undefined FUN_14753f90d(void)

undefined8 *
FUN_14753f90d(undefined8 *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_128 [40];
  undefined1 local_100 [32];
  undefined1 local_e0 [88];
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *param_2;
  iVar5 = *(int *)(lVar2 + 0x70);
  iVar17 = 1;
  if (1 < iVar5) {
    iVar17 = iVar5;
  }
  iVar10 = (int)param_3;
  fVar12 = (float)(param_3 >> 0x20);
  if ((int)*(uint *)(lVar2 + 0x60) < 1) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    uVar15 = *(uint *)(lVar2 + 0x60);
    do {
      uVar1 = (uVar15 >> 1) + iVar16;
      iVar11 = *(int *)(*(longlong *)(lVar2 + 0x58) + (ulonglong)uVar1 * 4);
      if ((iVar11 <= iVar10) && (iVar11 != iVar10 || 0.0 <= fVar12)) {
        iVar16 = uVar1 + (uVar15 & 1);
      }
      bVar3 = 1 < uVar15;
      uVar15 = uVar15 >> 1;
    } while (bVar3);
  }
  iVar11 = 1;
  if (1 < iVar16) {
    iVar11 = iVar16;
  }
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0xffefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar11 < iVar5) {
    iVar11 = iVar11 + -1;
    fVar4 = (float)(param_4 >> 0x20);
    do {
      FUN_147528e64(local_e0,*param_2,iVar11);
      iVar5 = (int)local_88;
      iVar16 = (int)param_4;
      if ((iVar5 != iVar16 && iVar16 <= iVar5) || (iVar5 == iVar16 && fVar4 < 0.0)) break;
      uVar8 = local_88 >> 0x20;
      uVar13 = uVar8;
      if (fVar12 < 0.0) {
        uVar13 = param_3;
      }
      iVar7 = (int)(local_88 >> 0x20);
      if (iVar7 != iVar10) {
        uVar13 = uVar8;
      }
      uVar6 = local_88 & 0xffffffff;
      if (iVar10 < iVar7) {
        uVar13 = param_3;
      }
      uVar14 = uVar13;
      if ((int)uVar13 <= iVar5) {
        if ((float)(uVar13 >> 0x20) <= 0.0) {
          uVar14 = uVar6;
        }
        if (iVar5 != (int)uVar13) {
          uVar14 = uVar6;
        }
      }
      uVar13 = uVar8;
      if (fVar4 < 0.0) {
        uVar13 = param_4;
      }
      if (iVar7 != iVar16) {
        uVar13 = uVar8;
      }
      if (iVar16 < iVar7) {
        uVar13 = param_4;
      }
      uVar8 = uVar13;
      if ((int)uVar13 <= iVar5) {
        uVar9 = uVar13;
        if ((float)(uVar13 >> 0x20) <= 0.0) {
          uVar9 = uVar6;
        }
        uVar8 = uVar6;
        if (iVar5 == (int)uVar13) {
          uVar8 = uVar9;
        }
      }
      FUN_14752f5ec(local_e0,local_100,uVar14,uVar8);
      FUN_14752f572(param_1,local_100);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar17 + -1);
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14753fb50 FUN_14753fb50 body=147 status=ok
// SIG undefined FUN_14753fb50(void)

void FUN_14753fb50(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14753fbe4 FUN_14753fbe4 body=262 status=ok
// SIG undefined FUN_14753fbe4(void)

void FUN_14753fbe4(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = FUN_147526062();
  if (uVar6 != param_2) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    lVar4 = *plVar3;
    lVar5 = (longlong)(int)param_2 * 0x1c;
    puVar1 = (undefined4 *)(lVar4 + lVar5);
    uStack_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    local_3c = puVar1[3];
    puVar2 = (undefined8 *)(lVar4 + 0xc + lVar5);
    uStack_34 = puVar2[1];
    uStack_38 = (undefined4)((ulonglong)*puVar2 >> 0x20);
    iVar7 = (int)plVar3[1];
    if (~param_2 + iVar7 != 0) {
      memmove((void *)(lVar4 + lVar5),(void *)(lVar4 + lVar5 + 0x1c),
              (longlong)(int)(~param_2 + iVar7) * 0x1c);
      iVar7 = (int)plVar3[1];
    }
    *(int *)(plVar3 + 1) = iVar7 + -1;
    plVar3 = *(longlong **)(param_1 + 0x18);
    iVar7 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar7 + 1U) {
      FUN_14753f2b0(plVar3,iVar7);
    }
    lVar5 = (longlong)(int)uVar6 * 0x1c;
    memmove((void *)(*plVar3 + lVar5 + 0x1c),(void *)(*plVar3 + lVar5),
            (ulonglong)(iVar7 - uVar6) * 0x1c);
    lVar4 = *plVar3;
    puVar2 = (undefined8 *)(lVar4 + lVar5);
    *puVar2 = CONCAT44(uStack_44,uStack_48);
    puVar2[1] = CONCAT44(local_3c,uStack_40);
    puVar1 = (undefined4 *)(lVar4 + 0xc + lVar5);
    *puVar1 = local_3c;
    puVar1[1] = uStack_38;
    puVar1[2] = (undefined4)uStack_34;
    puVar1[3] = uStack_34._4_4_;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753fcec FUN_14753fcec body=333 status=ok
// SIG undefined FUN_14753fcec(void)

uint FUN_14753fcec(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar12 = FUN_147525f8a();
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_14753f2b0(plVar3,iVar2);
  }
  lVar13 = (ulonglong)uVar12 * 0x1c;
  memmove((void *)(*plVar3 + lVar13 + 0x1c),(void *)(*plVar3 + lVar13),
          (ulonglong)(iVar2 - uVar12) * 0x1c);
  lVar4 = *plVar3;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  puVar1 = (undefined4 *)(lVar4 + 0xc + lVar13);
  *puVar1 = param_3[3];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar4 + lVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x10) != 0)) {
    lVar13 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 8) + 8 + lVar13) != 0) &&
         (*(longlong *)(*(longlong *)(lVar4 + 8) + lVar13) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = param_2 << 0x20 | (ulonglong)uVar12;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(lVar4 + 0x10) * 0x10 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753fe3a FUN_14753fe3a body=157 status=ok
// SIG undefined FUN_14753fe3a(void)

void FUN_14753fe3a(longlong param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)param_2 * 4);
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      _Dst = (void *)(*plVar2 + (longlong)(int)param_2 * 4);
      memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)(int)(~param_2 + iVar4) << 2);
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_1446f48e2(plVar2,iVar4);
    }
    lVar5 = (longlong)(int)uVar3;
    memmove((void *)(*plVar2 + lVar5 * 4 + 4),(void *)(*plVar2 + lVar5 * 4),
            (ulonglong)(iVar4 - uVar3) << 2);
    *(undefined4 *)(*plVar2 + lVar5 * 4) = uVar1;
  }
  return;
}



// FUNCTION 14753fed8 FUN_14753fed8 body=281 status=ok
// SIG undefined FUN_14753fed8(void)

uint FUN_14753fed8(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147525f8a();
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(plVar2,iVar1);
  }
  uVar6 = (ulonglong)uVar4;
  memmove((void *)(*plVar2 + uVar6 * 4 + 4),(void *)(*plVar2 + uVar6 * 4),
          (ulonglong)(iVar1 - uVar4) << 2);
  *(undefined4 *)(*plVar2 + uVar6 * 4) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar3 + 8) + lVar5) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = param_2 << 0x20 | uVar6;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x10) * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753fff2 FUN_14753fff2 body=342 status=ok
// SIG undefined FUN_14753fff2(void)

void FUN_14753fff2(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754014a FUN_14754014a body=145 status=ok
// SIG undefined FUN_14754014a(void)

void FUN_14754014a(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = FUN_147526062();
  if (iVar1 != param_2) {
    FUN_14753c5f8(local_58,(longlong)param_2 * 0x30 + **(longlong **)(param_1 + 0x18));
    FUN_147540254(*(undefined8 *)(param_1 + 0x18),param_2);
    FUN_1475401dc(*(undefined8 *)(param_1 + 0x18),local_58,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475401dc FUN_1475401dc body=119 status=ok
// SIG undefined FUN_1475401dc(void)

int FUN_1475401dc(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1475402b4(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x30;
  memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x30);
  FUN_14753c5f8(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 147540254 FUN_147540254 body=96 status=ok
// SIG undefined FUN_147540254(void)

void FUN_147540254(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1475402b4 FUN_1475402b4 body=147 status=ok
// SIG undefined FUN_1475402b4(void)

void FUN_1475402b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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



// FUNCTION 147540348 FUN_147540348 body=215 status=ok
// SIG undefined FUN_147540348(void)

ulonglong FUN_147540348(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_1475401dc(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147540420 FUN_147540420 body=298 status=ok
// SIG undefined FUN_147540420(void)

void FUN_147540420(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  if (~param_2 + iVar4 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar4) << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  FUN_147540254(param_1[3],param_2);
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14754054c FUN_14754054c body=48 status=ok
// SIG undefined FUN_14754054c(void)

void FUN_14754054c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14754057c FUN_14754057c body=52 status=ok
// SIG undefined FUN_14754057c(void)

void FUN_14754057c(longlong *param_1)

{
  FUN_1475405b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475405b0 FUN_1475405b0 body=89 status=ok
// SIG undefined FUN_1475405b0(void)

void FUN_1475405b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 14754060a FUN_14754060a body=312 status=ok
// SIG undefined FUN_14754060a(void)

undefined4 * FUN_14754060a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147540744(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14754082a(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147540918(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147540744 FUN_147540744 body=229 status=ok
// SIG undefined FUN_147540744(void)

int * FUN_147540744(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14754082a FUN_14754082a body=124 status=ok
// SIG undefined FUN_14754082a(void)

undefined8 FUN_14754082a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1475408a6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475408a6 FUN_1475408a6 body=114 status=ok
// SIG undefined FUN_1475408a6(void)

void FUN_1475408a6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147540918 FUN_147540918 body=477 status=ok
// SIG undefined FUN_147540918(void)

void FUN_147540918(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147540af6 FUN_147540af6 body=189 status=ok
// SIG undefined FUN_147540af6(void)

longlong FUN_147540af6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x170;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x170) == *param_3) {
          if (lVar3 != 0) goto LAB_147540b96;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x168);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147540bb4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x170 + *param_1;
LAB_147540b96:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147540bb4 FUN_147540bb4 body=274 status=ok
// SIG undefined FUN_147540bb4(void)

undefined4 * FUN_147540bb4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_140ed7ee8(param_1,local_48);
  FUN_147540cc8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x168) = 0xffffffff;
  cVar1 = FUN_140ed7816(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_40 + 0x16c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x168) =
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
      FUN_140ed8572(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147540cc8 FUN_147540cc8 body=222 status=ok
// SIG undefined FUN_147540cc8(void)

undefined4 * FUN_147540cc8(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [44];
  undefined8 local_15c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined8 local_10c;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_9c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  memset(local_188,0,0x160);
  local_15c = 0xffffffff00000080;
  local_118 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  *param_2 = *(undefined4 *)*param_1;
  FUN_147540da8(param_2 + 2,local_188);
  FUN_140a3194c(local_188);
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147540da8 FUN_147540da8 body=113 status=ok
// SIG undefined FUN_147540da8(void)

longlong FUN_147540da8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140ed768a();
  FUN_140ed768a(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_140ed796c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140ed7a54(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 147540e1a FUN_147540e1a body=132 status=ok
// SIG undefined FUN_147540e1a(void)

void FUN_147540e1a(longlong param_1,int param_2)

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



// FUNCTION 147540ea0 FUN_147540ea0 body=147 status=ok
// SIG undefined FUN_147540ea0(void)

void FUN_147540ea0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147540f34 FUN_147540f34 body=132 status=ok
// SIG undefined FUN_147540f34(void)

void FUN_147540f34(longlong param_1,int param_2)

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



// FUNCTION 147540fba FUN_147540fba body=48 status=ok
// SIG undefined FUN_147540fba(void)

void FUN_147540fba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 147540fea FUN_147540fea body=48 status=ok
// SIG undefined FUN_147540fea(void)

void FUN_147540fea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14754101a FUN_14754101a body=31 status=ok
// SIG undefined FUN_14754101a(void)

undefined8 FUN_14754101a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147541054 FUN_147541054 body=29 status=ok
// SIG undefined FUN_147541054(void)

bool FUN_147541054(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147541072 FUN_147541072 body=26 status=ok
// SIG undefined FUN_147541072(void)

bool FUN_147541072(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14754108c FUN_14754108c body=24 status=ok
// SIG undefined FUN_14754108c(void)

bool FUN_14754108c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1475410a4 FUN_1475410a4 body=93 status=ok
// SIG undefined FUN_1475410a4(void)

void FUN_1475410a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a46d250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147541102 FUN_147541102 body=126 status=ok
// SIG undefined FUN_147541102(void)

void FUN_147541102(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a46d250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147541171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147541180 FUN_147541180 body=35 status=ok
// SIG undefined FUN_147541180(void)

void FUN_147541180(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014754119f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1475411a6 FUN_1475411a6 body=303 status=ok
// SIG undefined FUN_1475411a6(void)

undefined4 * FUN_1475411a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b56fc4(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  local_58 = 0;
  cVar3 = FUN_140b56f26(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140b57378(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475412d6 FUN_1475412d6 body=63 status=ok
// SIG undefined FUN_1475412d6(void)

void FUN_1475412d6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c7cf14(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1457c3c64(param_1);
    return;
  }
  FUN_147541316(param_1);
  FUN_145c7cf14(param_1);
  return;
}



// FUNCTION 147541316 FUN_147541316 body=328 status=ok
// SIG undefined FUN_147541316(void)

void FUN_147541316(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14c + (longlong)iVar4 * 0x150) * 4) =
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



// FUNCTION 147541460 FUN_147541460 body=63 status=ok
// SIG undefined FUN_147541460(void)

void FUN_147541460(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141510f84(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ed8572(param_1);
    return;
  }
  FUN_1475414a0(param_1);
  FUN_141510f84(param_1);
  return;
}



// FUNCTION 1475414a0 FUN_1475414a0 body=328 status=ok
// SIG undefined FUN_1475414a0(void)

void FUN_1475414a0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x16c + (longlong)iVar4 * 0x170) * 4) =
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



// FUNCTION 1475415ea FUN_1475415ea body=63 status=ok
// SIG undefined FUN_1475415ea(void)

void FUN_1475415ea(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14151113c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ed8356(param_1);
    return;
  }
  FUN_14754162a(param_1);
  FUN_14151113c(param_1);
  return;
}



// FUNCTION 14754162a FUN_14754162a body=322 status=ok
// SIG undefined FUN_14754162a(void)

void FUN_14754162a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1475417ae FUN_1475417ae body=325 status=ok
// SIG undefined FUN_1475417ae(void)

void FUN_1475417ae(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xfc + (longlong)iVar4 * 0x100) * 4) =
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



// FUNCTION 1475418f4 FUN_1475418f4 body=48 status=ok
// SIG undefined FUN_1475418f4(void)

void FUN_1475418f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147541924 FUN_147541924 body=132 status=ok
// SIG undefined FUN_147541924(void)

void FUN_147541924(longlong param_1,int param_2)

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



// FUNCTION 1475419aa FUN_1475419aa body=184 status=ok
// SIG undefined FUN_1475419aa(void)

longlong FUN_1475419aa(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x100;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x100) == *param_3) {
          if (lVar3 != 0) goto LAB_147541a45;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xf8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147541a64(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x100 + *param_1;
LAB_147541a45:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147541a64 FUN_147541a64 body=274 status=ok
// SIG undefined FUN_147541a64(void)

undefined4 * FUN_147541a64(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_140ed7b3c(param_1,local_48);
  FUN_147541b78(param_4,local_40);
  *(undefined4 *)(local_40 + 0xf8) = 0xffffffff;
  cVar1 = FUN_140ed7772(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_40 + 0xfc) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xf8) =
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
      FUN_140ed8794(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147541b78 FUN_147541b78 body=202 status=ok
// SIG undefined FUN_147541b78(void)

undefined4 * FUN_147541b78(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = 2;
  local_100 = 2;
  local_f8 = 0xffffffff;
  uStack_f4 = 0xffffffff;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0xffffffff;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 2;
  local_a0 = 2;
  local_98 = 0xffffffff;
  uStack_94 = 0xffffffff;
  uStack_90 = 0xffffffff;
  uStack_8c = 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_140ed80c4(param_2 + 2,&local_108);
  FUN_140a31b96(&local_108);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147541c44 FUN_147541c44 body=189 status=ok
// SIG undefined FUN_147541c44(void)

longlong FUN_147541c44(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x150;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x150) == *param_3) {
          if (lVar3 != 0) goto LAB_147541ce4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x148);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147541d02(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x150 + *param_1;
LAB_147541ce4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147541d02 FUN_147541d02 body=281 status=ok
// SIG undefined FUN_147541d02(void)

undefined4 * FUN_147541d02(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1457c3778(param_1,local_48);
  FUN_147541e1c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x148) = 0xffffffff;
  cVar1 = FUN_1457c344a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_40 + 0x14c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x148) =
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
      FUN_1457c3c64(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147541e1c FUN_147541e1c body=285 status=ok
// SIG undefined FUN_147541e1c(void)

undefined4 * FUN_147541e1c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_178 [32];
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158[0] = DAT_14cab2070;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 2;
  local_138 = 2;
  local_130 = 0xffffffff;
  uStack_12c = 0xffffffff;
  uStack_128 = 0xffffffff;
  uStack_124 = 0xffffffff;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0x3f800000;
  local_d8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 3;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1457c34f4(param_2 + 2,local_158);
  FUN_140a31f9c(local_158);
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147541f3a FUN_147541f3a body=559 status=ok
// SIG undefined FUN_147541f3a(void)

void FUN_147541f3a(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar9 = &local_348;
    do {
      piVar3 = (int *)*plVar9;
      piVar10 = (int *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar3) >> 3);
      piVar8 = piVar3;
      piVar14 = piVar10;
      if (iVar12 != 0) {
LAB_147541ffb:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = (ulonglong)(iVar5 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar3 + uVar6 * 2);
          *(undefined8 *)(piVar3 + uVar6 * 2) = *(undefined8 *)piVar3;
          *(undefined8 *)piVar3 = uVar1;
          piVar7 = piVar10 + 2;
          piVar4 = piVar3;
          do {
            piVar2 = piVar4 + 2;
            piVar11 = piVar4 + 2;
            do {
              piVar4 = piVar11;
              piVar15 = piVar2;
              if (piVar10 < piVar4) break;
              piVar2 = piVar15 + 2;
              piVar11 = piVar4 + 2;
            } while (*piVar4 <= *piVar3);
            piVar2 = piVar7 + -4;
            do {
              piVar11 = piVar7;
              piVar16 = piVar2;
              piVar7 = piVar11 + -2;
              if (piVar7 <= piVar3) break;
              piVar2 = piVar16 + -2;
            } while (*piVar3 <= *piVar7);
            if (piVar7 < piVar4) goto LAB_147542075;
            uVar1 = *(undefined8 *)piVar4;
            *(undefined8 *)piVar4 = *(undefined8 *)piVar7;
            *(undefined8 *)piVar7 = uVar1;
          } while( true );
        }
        if (piVar3 < piVar10) {
          do {
            piVar8 = piVar3;
            if (piVar3 + 2 <= piVar10) {
              piVar14 = piVar3 + 2;
              iVar12 = *piVar3;
              do {
                iVar5 = *piVar14;
                iVar13 = iVar12;
                if (iVar12 <= iVar5) {
                  iVar13 = iVar5;
                }
                if (iVar12 < iVar5) {
                  piVar8 = piVar14;
                }
                piVar14 = piVar14 + 2;
                iVar12 = iVar13;
              } while (piVar14 <= piVar10);
            }
            uVar1 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar10;
            *(undefined8 *)piVar10 = uVar1;
            piVar10 = piVar10 + -2;
          } while (piVar3 < piVar10);
        }
        goto LAB_147542148;
      }
LAB_14754215d:
      FUN_14754216a(piVar3);
LAB_147542148:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147542075:
  uVar1 = *(undefined8 *)piVar3;
  *(undefined8 *)piVar3 = *(undefined8 *)piVar7;
  *(undefined8 *)piVar7 = uVar1;
  iVar12 = iVar12 + -1;
  piVar11 = piVar11 + -4;
  if ((longlong)piVar16 - (longlong)piVar8 < (longlong)piVar14 - (longlong)piVar15) {
    if (piVar4 < piVar10) {
      *plVar9 = (longlong)piVar4;
      plVar9[1] = (longlong)piVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar15 = piVar3;
    if (piVar7 <= piVar3 + 2) goto LAB_147542148;
  }
  else {
    if (piVar3 + 2 < piVar7) {
      *plVar9 = (longlong)piVar3;
      plVar9[1] = (longlong)piVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar3 = piVar4;
    piVar11 = piVar10;
    piVar16 = piVar10;
    if (piVar10 <= piVar4) goto LAB_147542148;
  }
  iVar5 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar15) >> 3);
  piVar8 = piVar15;
  piVar10 = piVar11;
  piVar14 = piVar16;
  if (iVar12 == 0) goto LAB_14754215d;
  goto LAB_147541ffb;
}



// FUNCTION 14754216a FUN_14754216a body=297 status=ok
// SIG undefined FUN_14754216a(void)

void FUN_14754216a(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014754218b:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(int *)(param_1 + iVar2) < *(int *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x00014754218b;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(int *)(param_1 + iVar6) <= *(int *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 147542293 FUN_147542293 body=28 status=ok
// SIG undefined FUN_147542293(void)

void FUN_147542293(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2 * 8) = 0;
      pbVar1 = (byte *)(param_1 + 4 + lVar2 * 8);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1475422b0 FUN_1475422b0 body=62 status=ok
// SIG undefined FUN_1475422b0(void)

void FUN_1475422b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475422ee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1475422ee FUN_1475422ee body=93 status=ok
// SIG undefined FUN_1475422ee(void)

ulonglong FUN_1475422ee(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14754234c FUN_14754234c body=181 status=ok
// SIG undefined FUN_14754234c(void)

longlong FUN_14754234c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_1475423e4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147542402(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_1475423e4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147542402 FUN_147542402 body=265 status=ok
// SIG undefined FUN_147542402(void)

undefined4 * FUN_147542402(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_140ed7d12(param_1,local_48);
  FUN_14754250c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x38) = 0xffffffff;
  cVar1 = FUN_140ed78bc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_40 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
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
      FUN_140ed8356(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754250c FUN_14754250c body=120 status=ok
// SIG undefined FUN_14754250c(void)

undefined4 * FUN_14754250c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_18 = 0;
  FUN_147533aa4();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147542586 FUN_147542586 body=48 status=ok
// SIG undefined FUN_147542586(void)

void FUN_147542586(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x24,4);
  }
  return;
}



// FUNCTION 1475425b6 FUN_1475425b6 body=243 status=ok
// SIG undefined FUN_1475425b6(void)

void FUN_1475425b6(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  if (param_3 >> 0x20 == 0 || (param_3 & 0xffffffff) != 0xffffffff) {
    lVar3 = param_2;
    if ((int)param_3 != -1) {
      lVar3 = ((longlong)param_3 >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) *
              0x20 + *(longlong *)(param_2 + 0x30);
    }
    param_1[1] = lVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    while( true ) {
      if ((lVar3 == 0) ||
         (((longlong)*(int *)(lVar3 + 0x1c) != -1 &&
          (0 < *(int *)(*(longlong *)(param_2 + 0x40) + 4 + (longlong)*(int *)(lVar3 + 0x1c) * 0xc))
          ))) {
        return;
      }
      if ((*(int *)(lVar3 + 0x10) == -1) && (*(int *)(lVar3 + 0x14) != 0)) break;
      plVar1 = (longlong *)(lVar3 + 0x10);
      iVar2 = (int)*plVar1;
      lVar3 = param_2;
      if (iVar2 != -1) {
        lVar3 = (*plVar1 >> 0x20) * 0x20 +
                (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 0xc) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
      param_1[1] = lVar3;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1475426aa FUN_1475426aa body=147 status=ok
// SIG undefined FUN_1475426aa(void)

void FUN_1475426aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754273e FUN_14754273e body=996 status=ok
// SIG undefined FUN_14754273e(void)

void FUN_14754273e(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_37c;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x24 + -0x24;
    local_378 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar21 + fVar21);
    plVar13 = &local_378;
    do {
      puVar15 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      local_37c = (int)plVar13[2];
      iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar15) >> 2);
      puVar17 = puVar14;
      puVar20 = puVar15;
      local_388 = plVar13;
      if (local_37c != 0) {
LAB_147542811:
        uVar10 = iVar8 * 0x38e38e39 + 1;
        plVar13 = local_388;
        if (8 < (int)uVar10) {
          uVar11 = (ulonglong)(uVar10 >> 1);
          local_58 = *(undefined4 *)((longlong)puVar15 + uVar11 * 0x24 + 0x20);
          puVar9 = (undefined8 *)((longlong)puVar15 + uVar11 * 0x24);
          uVar1 = *puVar9;
          uVar2 = puVar9[1];
          puVar9 = (undefined8 *)((longlong)puVar15 + uVar11 * 0x24 + 0x10);
          local_68 = *puVar9;
          uStack_60 = puVar9[1];
          *(undefined4 *)((longlong)puVar15 + uVar11 * 0x24 + 0x20) = *(undefined4 *)(puVar15 + 4);
          uVar3 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[3];
          puVar9 = (undefined8 *)((longlong)puVar15 + uVar11 * 0x24 + 0x10);
          *puVar9 = puVar15[2];
          puVar9[1] = uVar5;
          puVar9 = (undefined8 *)((longlong)puVar15 + uVar11 * 0x24);
          *puVar9 = uVar3;
          puVar9[1] = uVar4;
          *(undefined4 *)(puVar15 + 4) = local_58;
          local_78._0_4_ = (undefined4)uVar1;
          local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar2;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar15[2] = local_68;
          puVar15[3] = uStack_60;
          *(undefined4 *)puVar15 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar15 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_70._4_4_;
          puVar9 = (undefined8 *)((longlong)puVar17 + 0x24);
          puVar16 = puVar15;
          local_78 = uVar1;
          uStack_70 = uVar2;
          do {
            puVar6 = (undefined8 *)((longlong)puVar16 + 0x24);
            puVar18 = (undefined8 *)((longlong)puVar16 + 0x24);
            do {
              puVar16 = puVar18;
              puVar19 = puVar6;
              if (puVar17 < puVar16) break;
              cVar7 = FUN_147533d05(puVar15,puVar16);
              puVar6 = (undefined8 *)((longlong)puVar19 + 0x24);
              puVar18 = (undefined8 *)((longlong)puVar16 + 0x24);
            } while (cVar7 == '\0');
            puVar6 = puVar9 + -9;
            do {
              puVar18 = puVar9;
              puVar12 = puVar6;
              puVar9 = (undefined8 *)((longlong)puVar18 + -0x24);
              if (puVar9 <= puVar15) break;
              cVar7 = FUN_147533d05(puVar9,puVar15);
              puVar6 = (undefined8 *)((longlong)puVar12 + -0x24);
            } while (cVar7 == '\0');
            if (puVar9 < puVar16) goto LAB_14754293d;
            local_58 = *(undefined4 *)(puVar16 + 4);
            uVar1 = *puVar16;
            uVar2 = puVar16[1];
            local_68 = puVar16[2];
            uStack_60 = puVar16[3];
            *(undefined4 *)(puVar16 + 4) = *(undefined4 *)((longlong)puVar18 + -4);
            uVar3 = *puVar9;
            uVar4 = *(undefined8 *)((longlong)puVar18 + -0x1c);
            uVar5 = *(undefined8 *)((longlong)puVar18 + -0xc);
            puVar16[2] = *(undefined8 *)((longlong)puVar18 + -0x14);
            puVar16[3] = uVar5;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            *(undefined4 *)((longlong)puVar18 + -4) = local_58;
            local_78._0_4_ = (undefined4)uVar1;
            local_78._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar2;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined8 *)((longlong)puVar18 + -0x14) = local_68;
            *(undefined8 *)((longlong)puVar18 + -0xc) = uStack_60;
            *(undefined4 *)puVar9 = (undefined4)local_78;
            *(undefined4 *)(puVar18 + -4) = local_78._4_4_;
            *(undefined4 *)((longlong)puVar18 + -0x1c) = (undefined4)uStack_70;
            *(undefined4 *)(puVar18 + -3) = uStack_70._4_4_;
            local_78 = uVar1;
            uStack_70 = uVar2;
          } while( true );
        }
        for (; local_388 = plVar13, puVar20 = puVar15, puVar14 = puVar15, puVar15 < puVar17;
            puVar17 = (undefined8 *)((longlong)puVar17 + -0x24)) {
          while (puVar9 = puVar20, puVar14 = (undefined8 *)((longlong)puVar14 + 0x24),
                puVar14 <= puVar17) {
            cVar7 = FUN_147533d05(puVar9,puVar14);
            puVar20 = puVar14;
            if (cVar7 == '\0') {
              puVar20 = puVar9;
            }
          }
          local_58 = *(undefined4 *)(puVar9 + 4);
          local_78 = *puVar9;
          uStack_70 = puVar9[1];
          local_68 = puVar9[2];
          uStack_60 = puVar9[3];
          uVar4 = local_78;
          uVar5 = uStack_70;
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar17 + 4);
          uVar1 = *puVar17;
          uVar2 = puVar17[1];
          uVar3 = puVar17[3];
          puVar9[2] = puVar17[2];
          puVar9[3] = uVar3;
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
          *(undefined4 *)(puVar17 + 4) = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar17[2] = local_68;
          puVar17[3] = uStack_60;
          *(undefined4 *)puVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
          plVar13 = local_388;
          local_78 = uVar4;
          uStack_70 = uVar5;
        }
        goto LAB_147542af9;
      }
LAB_147542b13:
      FUN_147542b23(puVar15);
      plVar13 = local_388;
LAB_147542af9:
      plVar13 = plVar13 + -3;
    } while (&local_378 <= plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14754293d:
  local_58 = *(undefined4 *)(puVar15 + 4);
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  uVar4 = local_78;
  uVar5 = uStack_70;
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)((longlong)puVar18 + -4);
  uVar1 = *puVar9;
  uVar2 = *(undefined8 *)((longlong)puVar18 + -0x1c);
  uVar3 = *(undefined8 *)((longlong)puVar18 + -0xc);
  puVar15[2] = *(undefined8 *)((longlong)puVar18 + -0x14);
  puVar15[3] = uVar3;
  *puVar15 = uVar1;
  puVar15[1] = uVar2;
  *(undefined4 *)((longlong)puVar18 + -4) = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined8 *)((longlong)puVar18 + -0x14) = local_68;
  *(undefined8 *)((longlong)puVar18 + -0xc) = uStack_60;
  *(undefined4 *)puVar9 = (undefined4)local_78;
  *(undefined4 *)(puVar18 + -4) = local_78._4_4_;
  *(undefined4 *)((longlong)puVar18 + -0x1c) = (undefined4)uStack_70;
  *(undefined4 *)(puVar18 + -3) = uStack_70._4_4_;
  local_37c = local_37c + -1;
  puVar18 = puVar18 + -9;
  local_78 = uVar4;
  uStack_70 = uVar5;
  if ((longlong)puVar12 - (longlong)puVar20 < (longlong)puVar14 - (longlong)puVar19) {
    plVar13 = local_388;
    if (puVar16 < puVar17) {
      *local_388 = (longlong)puVar16;
      local_388[1] = (longlong)puVar17;
      *(int *)(local_388 + 2) = local_37c;
      plVar13 = local_388 + 3;
    }
    puVar14 = puVar12;
    puVar19 = puVar15;
    if (puVar9 <= (undefined8 *)((longlong)puVar15 + 0x24U)) goto LAB_147542af9;
  }
  else {
    if ((undefined8 *)((longlong)puVar15 + 0x24U) < puVar9) {
      *local_388 = (longlong)puVar15;
      local_388[1] = (longlong)puVar18;
      *(int *)(local_388 + 2) = local_37c;
      local_388 = local_388 + 3;
    }
    plVar13 = local_388;
    puVar15 = puVar16;
    puVar18 = puVar17;
    puVar14 = puVar17;
    if (puVar17 <= puVar16) goto LAB_147542af9;
  }
  local_388 = plVar13;
  iVar8 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar19) >> 2);
  puVar17 = puVar18;
  puVar20 = puVar19;
  if (local_37c == 0) goto LAB_147542b13;
  goto LAB_147542811;
}



// FUNCTION 147542b23 FUN_147542b23 body=688 status=ok
// SIG undefined FUN_147542b23(void)

void FUN_147542b23(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar17 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar15 = iVar17;
joined_r0x000147542b68:
    do {
      iVar13 = iVar17 * 2 + 1;
      if (iVar13 < (int)param_2) {
        iVar14 = iVar17 * 2 + 2;
        if ((iVar14 < (int)param_2) &&
           (cVar12 = FUN_147533d05((longlong)param_1 + (longlong)iVar14 * 0x24,
                                   (longlong)param_1 + (longlong)iVar13 * 0x24), cVar12 == '\0')) {
          iVar13 = iVar14;
        }
        puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar17 * 0x24);
        puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar13 * 0x24);
        cVar12 = FUN_147533d05(puVar2,puVar3);
        if (cVar12 != '\0') {
          local_48 = *(undefined4 *)(puVar2 + 4);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          local_58 = puVar2[2];
          uStack_50 = puVar2[3];
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar9 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar9;
          *puVar2 = uVar7;
          puVar2[1] = uVar8;
          *(undefined4 *)(puVar3 + 4) = local_48;
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar3[2] = local_58;
          puVar3[3] = uStack_50;
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar17 = iVar13;
          local_68 = uVar5;
          uStack_60 = uVar6;
          goto joined_r0x000147542b68;
        }
      }
      bVar18 = iVar15 != 0;
      iVar17 = iVar15 + -1;
      iVar15 = iVar17;
    } while (bVar18);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      local_48 = *(undefined4 *)(param_1 + 4);
      uVar5 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_1 + uVar16 * 0x24 + 0x20);
      puVar2 = (undefined8 *)((longlong)param_1 + uVar16 * 0x24);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)param_1 + uVar16 * 0x24 + 0x10);
      uVar11 = puVar2[1];
      param_1[2] = *puVar2;
      param_1[3] = uVar11;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      *(undefined4 *)((longlong)param_1 + uVar16 * 0x24 + 0x20) = local_48;
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar6;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_58._0_4_ = (undefined4)uVar7;
      local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar8;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      puVar4 = (undefined4 *)((longlong)param_1 + uVar16 * 0x24 + 0x10);
      *puVar4 = (undefined4)local_58;
      puVar4[1] = local_58._4_4_;
      puVar4[2] = (undefined4)uStack_50;
      puVar4[3] = uStack_50._4_4_;
      puVar4 = (undefined4 *)((longlong)param_1 + uVar16 * 0x24);
      *puVar4 = (undefined4)local_68;
      puVar4[1] = local_68._4_4_;
      puVar4[2] = (undefined4)uStack_60;
      puVar4[3] = uStack_60._4_4_;
      local_68 = uVar5;
      uStack_60 = uVar6;
      local_58 = uVar7;
      uStack_50 = uVar8;
      if (param_2 != 2) {
        do {
          iVar17 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            iVar17 = iVar17 + 2;
            iVar14 = iVar13;
            if (((longlong)iVar17 < (longlong)uVar16) &&
               (cVar12 = FUN_147533d05((longlong)param_1 + (longlong)iVar17 * 0x24,
                                       (longlong)param_1 + (longlong)iVar13 * 0x24), cVar12 == '\0')
               ) {
              iVar14 = iVar17;
            }
            puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar15 * 0x24);
            puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar14 * 0x24);
            cVar12 = FUN_147533d05(puVar2,puVar3);
            if (cVar12 == '\0') break;
            local_48 = *(undefined4 *)(puVar2 + 4);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            *(undefined4 *)(puVar3 + 4) = local_48;
            local_68._0_4_ = (undefined4)uVar5;
            local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar6;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_58._0_4_ = (undefined4)uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar8;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar17 = iVar14 * 2;
            iVar13 = iVar14 * 2 + 1;
            local_68 = uVar5;
            uStack_60 = uVar6;
            local_58 = uVar7;
            uStack_50 = uVar8;
            iVar15 = iVar14;
          } while ((longlong)iVar13 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          local_48 = *(undefined4 *)(param_1 + 4);
          uVar5 = *param_1;
          uVar6 = param_1[1];
          uVar7 = param_1[2];
          uVar8 = param_1[3];
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_1 + uVar1 * 0x24 + 0x20);
          puVar2 = (undefined8 *)((longlong)param_1 + uVar1 * 0x24);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (undefined8 *)((longlong)param_1 + uVar1 * 0x24 + 0x10);
          uVar11 = puVar2[1];
          param_1[2] = *puVar2;
          param_1[3] = uVar11;
          *param_1 = uVar9;
          param_1[1] = uVar10;
          *(undefined4 *)((longlong)param_1 + uVar1 * 0x24 + 0x20) = local_48;
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_58._0_4_ = (undefined4)uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar8;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          puVar4 = (undefined4 *)((longlong)param_1 + uVar1 * 0x24 + 0x10);
          *puVar4 = (undefined4)local_58;
          puVar4[1] = local_58._4_4_;
          puVar4[2] = (undefined4)uStack_50;
          puVar4[3] = uStack_50._4_4_;
          puVar4 = (undefined4 *)((longlong)param_1 + uVar1 * 0x24);
          *puVar4 = (undefined4)local_68;
          puVar4[1] = local_68._4_4_;
          puVar4[2] = (undefined4)uStack_60;
          puVar4[3] = uStack_60._4_4_;
          bVar18 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar5;
          uStack_60 = uVar6;
          local_58 = uVar7;
          uStack_50 = uVar8;
        } while (bVar18);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147542dd4 FUN_147542dd4 body=761 status=ok
// SIG undefined FUN_147542dd4(void)

void FUN_147542dd4(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar11 = &local_348;
    do {
      puVar7 = (uint *)*plVar11;
      puVar13 = (uint *)plVar11[1];
      iVar12 = (int)plVar11[2];
      iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar7) >> 4);
      if (iVar12 != 0) {
LAB_147542e70:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar2 = *(undefined8 *)(puVar7 + uVar9 * 4);
          uVar3 = *(undefined8 *)(puVar7 + uVar9 * 4 + 2);
          uVar4 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar7 + uVar9 * 4) = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar7 + uVar9 * 4 + 2) = uVar4;
          *(undefined8 *)puVar7 = uVar2;
          *(undefined8 *)(puVar7 + 2) = uVar3;
          puVar6 = puVar7;
          puVar5 = puVar13 + 4;
          do {
            puVar6 = puVar6 + 4;
            if (puVar6 <= puVar13) {
              while (*puVar6 <= *puVar7) {
                if (((*puVar7 <= *puVar6) &&
                    ((puVar7[1] < puVar6[1] || ((puVar7[1] == puVar6[1] && (puVar7[2] < puVar6[2])))
                     ))) || (puVar6 = puVar6 + 4, puVar13 < puVar6)) break;
              }
            }
            puVar14 = puVar5 + -4;
            if (puVar7 < puVar14) {
              uVar1 = *puVar7;
              uVar16 = *puVar14;
              if (uVar1 <= uVar16) {
                puVar15 = puVar5 + -8;
                puVar10 = puVar5;
                do {
                  puVar5 = puVar14;
                  if (uVar16 <= uVar1) {
                    if (puVar7[1] <= puVar15[5]) {
                      if ((puVar15[5] != puVar7[1]) || (puVar7[2] <= puVar15[6]))
                      goto LAB_147542f2c;
                      puVar10 = puVar15 + 8;
                    }
                    puVar14 = puVar15 + 4;
                    puVar5 = puVar10;
                    break;
                  }
LAB_147542f2c:
                  puVar14 = puVar5 + -4;
                  if (puVar15 <= puVar7) break;
                  uVar16 = *puVar15;
                  puVar15 = puVar15 + -4;
                  puVar10 = puVar5;
                } while (uVar1 <= uVar16);
              }
            }
            if (puVar14 < puVar6) goto LAB_147542f75;
            uVar2 = *(undefined8 *)puVar6;
            uVar3 = *(undefined8 *)(puVar6 + 2);
            uVar4 = *(undefined8 *)(puVar14 + 2);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar14;
            *(undefined8 *)(puVar6 + 2) = uVar4;
            *(undefined8 *)puVar14 = uVar2;
            *(undefined8 *)(puVar14 + 2) = uVar3;
            puVar5 = puVar14;
          } while( true );
        }
        for (; puVar6 = puVar7, puVar5 = puVar7, puVar7 < puVar13; puVar13 = puVar13 + -4) {
          while (puVar5 = puVar5 + 4, puVar5 <= puVar13) {
            if ((*puVar6 < *puVar5) ||
               ((*puVar6 <= *puVar5 &&
                ((puVar6[1] < puVar5[1] || (puVar6[2] < puVar5[2] && puVar6[1] == puVar5[1])))))) {
              puVar6 = puVar5;
            }
          }
          local_48 = *(undefined8 *)puVar6;
          uStack_40 = *(undefined8 *)(puVar6 + 2);
          uVar3 = local_48;
          uVar4 = uStack_40;
          uVar2 = *(undefined8 *)(puVar13 + 2);
          *(undefined8 *)puVar6 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar6 + 2) = uVar2;
          local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
          uStack_40._4_4_ = (uint)((ulonglong)uStack_40 >> 0x20);
          *puVar13 = (uint)local_48;
          puVar13[1] = local_48._4_4_;
          puVar13[2] = (uint)uStack_40;
          puVar13[3] = uStack_40._4_4_;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
        goto LAB_147543097;
      }
LAB_147543012:
      FUN_1475430ce(puVar7);
LAB_147543097:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  if ((local_38 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147542f75:
  local_48 = *(undefined8 *)puVar7;
  uStack_40 = *(undefined8 *)(puVar7 + 2);
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar2 = *(undefined8 *)(puVar14 + 2);
  *(undefined8 *)puVar7 = *(undefined8 *)puVar14;
  *(undefined8 *)(puVar7 + 2) = uVar2;
  local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (uint)((ulonglong)uStack_40 >> 0x20);
  *puVar14 = (uint)local_48;
  puVar14[1] = local_48._4_4_;
  puVar14[2] = (uint)uStack_40;
  puVar14[3] = uStack_40._4_4_;
  iVar12 = iVar12 + -1;
  puVar5 = puVar5 + -8;
  local_48 = uVar3;
  uStack_40 = uVar4;
  if ((longlong)puVar5 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar6) {
    if (puVar6 < puVar13) {
      *plVar11 = (longlong)puVar6;
      plVar11[1] = (longlong)puVar13;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    if (puVar14 <= puVar7 + 4) goto LAB_147543097;
  }
  else {
    if (puVar7 + 4 < puVar14) {
      *plVar11 = (longlong)puVar7;
      plVar11[1] = (longlong)puVar5;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    puVar5 = puVar13;
    puVar7 = puVar6;
    if (puVar13 <= puVar6) goto LAB_147543097;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 4);
  puVar13 = puVar5;
  if (iVar12 == 0) goto LAB_147543012;
  goto LAB_147542e70;
}



// FUNCTION 1475430ce FUN_1475430ce body=651 status=ok
// SIG undefined FUN_1475430ce(void)

void FUN_1475430ce(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x000147543109:
    do {
      iVar11 = iVar9 * 2 + 1;
      if (iVar11 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if (iVar13 < (int)param_2) {
          lVar15 = (longlong)iVar13;
          lVar12 = (longlong)iVar11;
          if ((*(uint *)(param_1 + lVar15 * 2) < *(uint *)(param_1 + lVar12 * 2)) ||
             ((*(uint *)(param_1 + lVar15 * 2) <= *(uint *)(param_1 + lVar12 * 2) &&
              ((uVar4 = *(uint *)((longlong)param_1 + lVar12 * 0x10 + 4),
               uVar5 = *(uint *)((longlong)param_1 + lVar15 * 0x10 + 4), uVar5 < uVar4 ||
               (*(uint *)(param_1 + lVar15 * 2 + 1) < *(uint *)(param_1 + lVar12 * 2 + 1) &&
                uVar5 == uVar4)))))) goto LAB_147543153;
        }
        else {
LAB_147543153:
          lVar15 = (longlong)iVar11;
          iVar13 = iVar11;
        }
        puVar2 = param_1 + (longlong)iVar9 * 2;
        puVar3 = param_1 + lVar15 * 2;
        if ((*(uint *)(param_1 + (longlong)iVar9 * 2) < *(uint *)(param_1 + lVar15 * 2)) ||
           ((*(uint *)(param_1 + (longlong)iVar9 * 2) <= *(uint *)(param_1 + lVar15 * 2) &&
            ((*(uint *)((longlong)puVar2 + 4) < *(uint *)((longlong)puVar3 + 4) ||
             ((*(uint *)((longlong)puVar2 + 4) == *(uint *)((longlong)puVar3 + 4) &&
              (*(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1))))))))) {
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar8;
          local_48._0_4_ = (undefined4)uVar6;
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar7;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar3 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_40._4_4_;
          iVar9 = iVar13;
          local_48 = uVar6;
          uStack_40 = uVar7;
          goto joined_r0x000147543109;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = (param_1 + uVar10 * 2)[1];
      *param_1 = param_1[uVar10 * 2];
      param_1[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar10 * 2;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
      local_48 = uVar6;
      uStack_40 = uVar7;
      if (param_2 != 2) {
        do {
          iVar14 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar13 = iVar14 + 2;
            lVar12 = (longlong)iVar13;
            if (lVar12 < (longlong)uVar10) {
              lVar15 = (longlong)iVar9;
              if ((*(uint *)(param_1 + lVar12 * 2) < *(uint *)(param_1 + lVar15 * 2)) ||
                 ((*(uint *)(param_1 + lVar12 * 2) <= *(uint *)(param_1 + lVar15 * 2) &&
                  ((uVar4 = *(uint *)((longlong)param_1 + lVar15 * 0x10 + 4),
                   uVar5 = *(uint *)((longlong)param_1 + lVar12 * 0x10 + 4), uVar5 < uVar4 ||
                   (*(uint *)(param_1 + lVar12 * 2 + 1) < *(uint *)(param_1 + lVar15 * 2 + 1) &&
                    uVar5 == uVar4)))))) goto LAB_14754326d;
            }
            else {
LAB_14754326d:
              lVar12 = (longlong)iVar9;
              iVar13 = iVar9;
            }
            puVar2 = param_1 + (longlong)iVar11 * 2;
            puVar3 = param_1 + lVar12 * 2;
            if ((*(uint *)(param_1 + lVar12 * 2) <= *(uint *)(param_1 + (longlong)iVar11 * 2)) &&
               ((*(uint *)(param_1 + lVar12 * 2) < *(uint *)(param_1 + (longlong)iVar11 * 2) ||
                ((*(uint *)((longlong)puVar3 + 4) <= *(uint *)((longlong)puVar2 + 4) &&
                 ((*(uint *)((longlong)puVar2 + 4) != *(uint *)((longlong)puVar3 + 4) ||
                  (*(uint *)(puVar3 + 1) <= *(uint *)(puVar2 + 1))))))))) break;
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar8;
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            iVar14 = iVar13 * 2;
            iVar9 = iVar13 * 2 + 1;
            iVar11 = iVar13;
          } while ((longlong)iVar9 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar6 = *param_1;
          uVar7 = param_1[1];
          uVar8 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar8;
          local_48._0_4_ = (undefined4)uVar6;
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar7;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar2 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_48 = uVar6;
          uStack_40 = uVar7;
        } while (bVar16);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14754335a FUN_14754335a body=132 status=ok
// SIG undefined FUN_14754335a(void)

void FUN_14754335a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475433df FUN_1475433df body=554 status=ok
// SIG undefined FUN_1475433df(void)

void FUN_1475433df(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar8 = &local_348;
    do {
      puVar2 = (uint *)*plVar8;
      puVar9 = (uint *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 2);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_1475434a0:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_147543516;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                uVar5 = *puVar13;
                bVar16 = uVar12 < uVar5;
                if (uVar12 <= uVar5) {
                  uVar12 = uVar5;
                }
                if (bVar16) {
                  puVar7 = puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_1475435e8;
      }
LAB_1475435fd:
      FUN_14754360a(puVar2);
LAB_1475435e8:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147543516:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_1475435e8;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_1475435e8;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 2);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_1475435fd;
  goto LAB_1475434a0;
}



// FUNCTION 14754360a FUN_14754360a body=279 status=ok
// SIG undefined FUN_14754360a(void)

void FUN_14754360a(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x00014754362b:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((uint)param_1[iVar6] <= (uint)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar1 = param_1[iVar3];
        if (uVar1 < (uint)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar3 = iVar6;
          goto joined_r0x00014754362b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((uint)param_1[iVar6] <= (uint)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar1 = param_1[iVar8];
            if ((uint)param_1[iVar7] <= uVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147543722 FUN_147543722 body=269 status=ok
// SIG undefined FUN_147543722(void)

void FUN_147543722(longlong param_1,undefined8 *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  
  cVar3 = *(char *)(param_1 + 4);
  if ((((cVar3 == '\x02') || (*(char *)(param_1 + 0xc) == '\x02')) ||
      ((*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10) &&
       ((*(int *)(param_1 + 8) != *(int *)(param_1 + 0x10) ||
        (cVar3 != '\0' && *(char *)(param_1 + 0xc) != '\0')))))) &&
     (((cVar4 = *param_3, cVar4 == '\x02' || (param_3[8] == '\x02')) ||
      ((*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc) &&
       ((*(int *)(param_3 + 4) != *(int *)(param_3 + 0xc) || (cVar4 != '\0' && param_3[8] != '\0')))
       ))))) {
    pcVar1 = (char *)(param_1 + 4);
    pcVar6 = param_3 + 8;
    pcVar5 = pcVar6;
    if ((*(char *)(param_1 + 0xc) != '\x02') &&
       (pcVar2 = (char *)(param_1 + 0xc), pcVar5 = pcVar2, *pcVar6 != '\x02')) {
      if (((*(int *)(param_3 + 0xc) <= *(int *)(param_1 + 0x10)) &&
          (pcVar5 = pcVar6, *(int *)(param_1 + 0x10) <= *(int *)(param_3 + 0xc))) &&
         (*(char *)(param_1 + 0xc) == '\0')) {
        pcVar5 = pcVar2;
      }
    }
    pcVar6 = pcVar1;
    if (cVar3 == '\x02') {
      pcVar6 = param_3;
    }
    if (cVar3 != '\x02' && cVar4 != '\x02') {
      pcVar6 = pcVar1;
      if (((*(int *)(param_1 + 8) <= *(int *)(param_3 + 4)) &&
          (pcVar6 = param_3, *(int *)(param_3 + 4) <= *(int *)(param_1 + 8))) && (cVar3 == '\0')) {
        pcVar6 = pcVar1;
      }
    }
    *param_2 = *(undefined8 *)pcVar6;
    param_2[1] = *(undefined8 *)pcVar5;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 147543830 FUN_147543830 body=29 status=ok
// SIG undefined FUN_147543830(void)

undefined8 FUN_147543830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754384e FUN_14754384e body=134 status=ok
// SIG undefined FUN_14754384e(void)

void FUN_14754384e(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 0x1c) == -1) {
    FUN_1475438d6(*(longlong *)(param_1 + 8) + 0x40,&local_48);
    *(undefined4 *)(param_2 + 0x1c) = local_48;
  }
  local_28 = *(undefined4 *)(param_1 + 0x30);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  FUN_147543936(*(longlong *)(param_1 + 8) + 0x40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475438d6 FUN_1475438d6 body=95 status=ok
// SIG undefined FUN_1475438d6(void)

int * FUN_1475438d6(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *param_2 = iVar1;
  lVar3 = param_1[3];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147543a1a(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + (longlong)iVar1 * 0xc) = (int)lVar3;
  *(undefined8 *)(lVar2 + 4 + (longlong)iVar1 * 0xc) = 0x100000000;
  FUN_1475439aa(param_1 + 2,(int)param_1[3] + 1);
  return param_2;
}



// FUNCTION 147543936 FUN_147543936 body=116 status=ok
// SIG undefined FUN_147543936(void)

void FUN_147543936(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  piVar1 = (int *)(*param_1 + (longlong)(int)param_2 * 0xc);
  iVar7 = piVar1[1];
  if (piVar1[2] <= iVar7) {
    iVar7 = piVar1[2] * 2;
    iVar9 = 2;
    if (2 < iVar7) {
      iVar9 = iVar7;
    }
    FUN_147543b8e(param_1,param_2,iVar9);
    iVar7 = piVar1[1];
  }
  lVar8 = (longlong)iVar7 + (longlong)*piVar1;
  lVar3 = param_1[2];
  *(undefined4 *)(lVar3 + 0x20 + lVar8 * 0x24) = *(undefined4 *)(param_3 + 4);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[3];
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar8 * 0x24);
  *puVar2 = param_3[2];
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x24);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 1475439aa FUN_1475439aa body=110 status=ok
// SIG undefined FUN_1475439aa(void)

void FUN_1475439aa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1475426aa(param_1,iVar1);
    }
    FUN_147543aae((longlong)iVar1 * 0x24 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147543ae0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147543a1a FUN_147543a1a body=147 status=ok
// SIG undefined FUN_147543a1a(void)

void FUN_147543a1a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147543aae FUN_147543aae body=49 status=ok
// SIG undefined FUN_147543aae(void)

void FUN_147543aae(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -3) = 0xffffffffffffffff;
      *(undefined2 *)(puVar1 + -1) = 0xffff;
      *(undefined1 *)((longlong)puVar1 + -2) = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147543ae0 FUN_147543ae0 body=62 status=ok
// SIG undefined FUN_147543ae0(void)

void FUN_147543ae0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147543b1e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x24,4);
  }
  return;
}



// FUNCTION 147543b1e FUN_147543b1e body=112 status=ok
// SIG undefined FUN_147543b1e(void)

ulonglong FUN_147543b1e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x24) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147543b58;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x24,4);
      param_2 = param_2 / 0x24;
    }
  }
LAB_147543b58:
  return param_2 & 0xffffffff;
}



// FUNCTION 147543b8e FUN_147543b8e body=115 status=ok
// SIG undefined FUN_147543b8e(void)

void FUN_147543b8e(longlong *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2;
  *(int *)(lVar2 + 8 + lVar3 * 0xc) = param_3;
  iVar1 = (int)param_1[3];
  FUN_1475439aa(param_1 + 2,param_3 + iVar1);
  _Src = (void *)(param_1[2] + (longlong)*(int *)(lVar2 + lVar3 * 0xc) * 0x24);
  memmove((void *)(param_1[2] + (longlong)iVar1 * 0x24),_Src,
          (longlong)*(int *)(lVar2 + 4 + lVar3 * 0xc) * 0x24);
  FUN_147543aae(_Src,*(undefined4 *)(lVar2 + 4 + lVar3 * 0xc));
  *(int *)(lVar2 + lVar3 * 0xc) = iVar1;
  return;
}



// FUNCTION 147543c02 FUN_147543c02 body=94 status=ok
// SIG undefined FUN_147543c02(void)

void FUN_147543c02(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x140),
              (longlong)*(int *)((longlong)param_1 + 0x148) * 0x14);
      FUN_1446efa72((longlong)param_1 + 0x140,0,0,0x14);
      return;
    }
  }
  return;
}



// FUNCTION 147543c60 FUN_147543c60 body=149 status=ok
// SIG undefined FUN_147543c60(void)

void FUN_147543c60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x14);
  return;
}



// FUNCTION 147543cf6 FUN_147543cf6 body=254 status=ok
// SIG undefined FUN_147543cf6(void)

void FUN_147543cf6(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  lVar6 = *(longlong *)(param_1 + 0x140);
  lVar4 = lVar6;
  if (lVar6 == 0) {
    lVar4 = param_1;
  }
  if ((int)uVar1 < 1) {
    uVar10 = 0;
  }
  else {
    uVar3 = *param_2;
    uVar10 = 0;
    uVar8 = (ulonglong)uVar1;
    do {
      uVar9 = (int)(uVar8 >> 1) + uVar10;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar9 * 0x14) < uVar3) {
        uVar10 = uVar9 + (uVar7 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar7);
    if ((int)uVar10 < (int)uVar1) {
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x14) <= uVar3) {
        puVar5 = (uint *)(lVar4 + (ulonglong)uVar10 * 0x14);
        goto LAB_147543dc9;
      }
    }
  }
  *(uint *)(param_1 + 0x148) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x14c) == uVar1) {
    FUN_147543df4(param_1,uVar1);
    lVar6 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar6 == 0) {
    lVar6 = param_1;
  }
  lVar4 = (ulonglong)uVar10 * 0x14;
  memmove((void *)(lVar6 + lVar4 + 0x14),(void *)(lVar6 + lVar4),(ulonglong)(uVar1 - uVar10) * 0x14)
  ;
  lVar6 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar6 = param_1;
  }
  puVar5 = (uint *)(lVar6 + lVar4);
  uVar3 = *param_2;
LAB_147543dc9:
  *puVar5 = uVar3;
  uVar2 = param_3[1];
  *(undefined8 *)(puVar5 + 1) = *param_3;
  *(undefined8 *)(puVar5 + 3) = uVar2;
  return;
}



// FUNCTION 147543df4 FUN_147543df4 body=136 status=ok
// SIG undefined FUN_147543df4(void)

void FUN_147543df4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_147543c60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147543e7e FUN_147543e7e body=261 status=ok
// SIG undefined FUN_147543e7e(void)

void FUN_147543e7e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar4 * 8);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc0) & 1) != 0)) {
        if ((*(char *)(lVar1 + 0xa0) == '\x02' || *(char *)(lVar1 + 0x98) == '\x02') ||
           ((*(int *)(lVar1 + 0x9c) <= *(int *)(lVar1 + 0xa4) &&
            ((*(int *)(lVar1 + 0x9c) != *(int *)(lVar1 + 0xa4) ||
             (*(char *)(lVar1 + 0xa0) != '\0' && *(char *)(lVar1 + 0x98) != '\0')))))) {
          iVar2 = *(int *)(param_2 + 0x108);
          *(uint *)(param_2 + 0x108) = iVar2 + 1U;
          if (*(uint *)(param_2 + 0x10c) < iVar2 + 1U) {
            FUN_14754994c(param_2,iVar2);
          }
          lVar3 = *(longlong *)(param_2 + 0x100);
          if (*(longlong *)(param_2 + 0x100) == 0) {
            lVar3 = param_2;
          }
          *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar1;
          *(int *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = (int)lVar4;
          iVar2 = (int)param_1[1];
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  lVar4 = *(longlong *)(param_2 + 0x100);
  if (*(longlong *)(param_2 + 0x100) == 0) {
    lVar4 = param_2;
  }
  FUN_147549a51(lVar4,*(undefined4 *)(param_2 + 0x108),param_3);
  return;
}



// FUNCTION 147543f84 FUN_147543f84 body=439 status=ok
// SIG undefined FUN_147543f84(void)

void FUN_147543f84(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  char local_88;
  undefined2 local_87;
  undefined1 local_85;
  int local_84;
  char local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  int local_7c;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = param_1[1];
  local_a8 = param_2;
  if ((longlong)(int)lVar7 != 0) {
    lVar5 = *param_1;
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar8);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xc0) & 1) != 0)) {
        cVar1 = *(char *)(lVar6 + 0x98);
        local_4a = *(undefined1 *)(lVar6 + 0x9b);
        local_4c = *(undefined2 *)(lVar6 + 0x99);
        iVar3 = *(int *)(lVar6 + 0x9c);
        cVar2 = *(char *)(lVar6 + 0xa0);
        local_4e = *(undefined1 *)(lVar6 + 0xa3);
        local_50 = *(undefined2 *)(lVar6 + 0xa1);
        iVar4 = *(int *)(lVar6 + 0xa4);
        if ((cVar2 == '\x02' || cVar1 == '\x02') ||
           ((iVar3 <= iVar4 && ((iVar3 != iVar4 || (cVar2 != '\0' && cVar1 != '\0')))))) {
          FUN_1475847ae(&local_a0);
          local_85 = local_4a;
          local_87 = local_4c;
          local_7d = local_4e;
          local_7f = local_50;
          local_78 = &PTR_FUN_14a475c08;
          local_70 = local_a8;
          local_58 = local_90;
          local_68 = local_a0;
          uStack_64 = uStack_9c;
          uStack_60 = uStack_98;
          uStack_5c = uStack_94;
          local_b8 = 0;
          local_88 = cVar1;
          local_84 = iVar3;
          local_80 = cVar2;
          local_7c = iVar4;
          FUN_1475569d4(local_a8,&local_88,&local_78,0xffffffff);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14754413c FUN_14754413c body=88 status=ok
// SIG undefined FUN_14754413c(void)

void FUN_14754413c(undefined4 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &LAB_14754434e;
  local_18 = &LAB_14754a3a6;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147544196();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147544196 FUN_147544196 body=438 status=ok
// SIG undefined FUN_147544196(void)

void FUN_147544196(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_228 [32];
  code **local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  byte *local_1c8;
  byte local_1b9;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((int)param_1[1] != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    local_1a8 = *param_3;
    local_1a0 = param_3[1];
    local_1b8 = (undefined4)*param_1;
    uStack_1b4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_1b0 = (undefined4)param_1[1];
    uStack_1ac = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_147543e7e(&local_1b8,local_158,&local_1a8);
    local_1c8 = &local_1b9;
    puVar3 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar3 = local_158;
    }
    lVar2 = (longlong)(int)local_50;
    local_1d0 = param_2;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*param_1 + (longlong)*(int *)(puVar3 + lVar4 + 8) * 8);
        local_1b9 = *(byte *)(lVar1 + 0xda) & 1;
        local_1d8 = &local_1d0;
        local_1e0 = FUN_1432d70dc;
        FUN_1475847ae(&local_1f8,lVar1);
        local_198 = *(undefined8 *)(lVar1 + 0x98);
        uStack_190 = *(undefined8 *)(lVar1 + 0xa0);
        local_180 = &PTR_FUN_14a475c08;
        local_160 = local_1e8;
        local_170 = local_1f8;
        uStack_16c = uStack_1f4;
        uStack_168 = uStack_1f0;
        uStack_164 = uStack_1ec;
        local_208 = &local_1e0;
        local_178 = param_2;
        FUN_1475569d4(param_2,&local_198,&local_180,0xffffffff);
        lVar4 = lVar4 + 0x10;
      } while (lVar2 * 0x10 != lVar4);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147544376 FUN_147544376 body=88 status=ok
// SIG undefined FUN_147544376(void)

void FUN_147544376(undefined4 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &LAB_14754434e;
  local_18 = &LAB_14754a3a6;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475443d0();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475443d0 FUN_1475443d0 body=463 status=ok
// SIG undefined FUN_1475443d0(void)

void FUN_1475443d0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_228 [32];
  code **local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 *local_1d0;
  byte *local_1c8;
  byte local_1bd;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((int)param_1[1] != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    local_1a8 = *param_3;
    local_1a0 = param_3[1];
    local_1b8 = (undefined4)*param_1;
    uStack_1b4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_1b0 = (undefined4)param_1[1];
    uStack_1ac = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_147543e7e(&local_1b8,local_158,&local_1a8);
    local_1d0 = &local_1bc;
    local_1c8 = &local_1bd;
    puVar3 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar3 = local_158;
    }
    lVar2 = (longlong)(int)local_50;
    local_1d8 = param_2;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*param_1 + (longlong)*(int *)(puVar3 + lVar4 + 8) * 8);
        local_1bc = *(undefined4 *)(*(longlong *)(puVar3 + lVar4) + 0xb8);
        local_1bd = *(byte *)(lVar1 + 0xda) & 1;
        local_1e0 = &local_1d8;
        local_1e8 = FUN_1432d716a;
        FUN_1475847ae(&local_200,lVar1);
        local_198 = *(undefined8 *)(lVar1 + 0x98);
        uStack_190 = *(undefined8 *)(lVar1 + 0xa0);
        local_180 = &PTR_FUN_14a475c08;
        local_160 = local_1f0;
        local_170 = local_200;
        uStack_16c = uStack_1fc;
        uStack_168 = uStack_1f8;
        uStack_164 = uStack_1f4;
        local_208 = &local_1e8;
        local_178 = param_2;
        FUN_1475569d4(param_2,&local_198,&local_180,0xffffffff);
        lVar4 = lVar4 + 0x10;
      } while (lVar2 * 0x10 != lVar4);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475445a0 FUN_1475445a0 body=979 status=ok
// SIG undefined FUN_1475445a0(void)

void FUN_1475445a0(undefined8 param_1,undefined **param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14755661c(param_2,&local_78,param_2);
  if (((int)uStack_70 != 0) ||
     (((longlong)*(int *)((longlong)param_2 + 0x1c) != -1 &&
      (*(int *)(param_2[8] + (longlong)*(int *)((longlong)param_2 + 0x1c) * 0xc + 4) != 0)))) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_147556536(&local_a8,param_2);
    if ((local_98 != -1) || (iStack_94 == 0)) {
      do {
        FUN_14754a3b2(&local_78,param_2,CONCAT44(iStack_94,local_98));
        if (uStack_70 == (undefined **)0x0) {
LAB_1475446b1:
          local_68 = CONCAT44(iStack_94,local_98);
          uStack_60 = CONCAT44(uStack_8c,uStack_90);
          local_78 = (undefined **)CONCAT44(uStack_a4,local_a8);
          uStack_70 = (undefined **)CONCAT44(uStack_9c,uStack_a0);
          FUN_14055b6c8(&local_78,1);
          bVar4 = local_68 >> 0x20 != 0 && (int)local_68 == -1;
          if (bVar4) {
            local_68 = CONCAT44(iStack_94,local_98);
            uStack_60 = CONCAT44(uStack_8c,uStack_90);
            local_78 = (undefined **)CONCAT44(uStack_a4,local_a8);
            uStack_70 = (undefined **)CONCAT44(uStack_9c,uStack_a0);
            FUN_14055b6c8(&local_78,0);
            puVar9 = &DAT_14a46e600;
            ppuVar12 = uStack_70;
          }
          else {
            puVar9 = &DAT_14a46e5f8;
            ppuVar12 = local_78;
          }
          iVar6 = *(int *)(puVar9 + (ulonglong)(((uint)ppuVar12 & 0xff) == (uint)bVar4) * 4);
          if (((int)local_68 != -1) || (local_68 >> 0x20 == 0)) {
            FUN_14754a3b2(&local_c0,param_2,local_68);
            uVar5 = uStack_80;
            while ((((uStack_80 = uVar5, local_b8 != 0 &&
                     (lVar10 = (longlong)*(int *)(local_b8 + 0x1c), lVar10 != -1)) &&
                    (lVar8 = (longlong)local_b0, -1 < lVar8)) &&
                   (local_b0 < *(int *)(*(longlong *)(local_c0 + 0x40) + 4 + lVar10 * 0xc)))) {
              lVar10 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x40) + lVar10 * 0xc) * 0x18 +
                       *(longlong *)(local_c0 + 0x50);
              puVar1 = (ulonglong *)(lVar10 + lVar8 * 0x18);
              local_68 = *puVar1;
              uStack_60 = puVar1[1];
              uVar3 = *(undefined4 *)(lVar10 + 0x14 + lVar8 * 0x18);
              local_78 = (undefined **)CONCAT44(uStack_a4,local_a8);
              uStack_70 = (undefined **)CONCAT44(uStack_9c,uStack_a0);
              uStack_80._0_4_ = (int)uVar5;
              lVar10 = (longlong)(int)uStack_80;
              uVar7 = (int)uStack_80 + 1;
              uStack_80._4_4_ = (uint)(uVar5 >> 0x20);
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
              if (uStack_80._4_4_ < uVar7) {
                FUN_14754a4a6(&local_88,uVar5 & 0xffffffff);
              }
              puVar2 = (undefined4 *)(local_88 + 0x10 + lVar10 * 0x28);
              *puVar2 = (int)local_68;
              puVar2[1] = local_68._4_4_;
              puVar2[2] = (undefined4)uStack_60;
              puVar2[3] = uStack_60._4_4_;
              puVar2 = (undefined4 *)(local_88 + lVar10 * 0x28);
              *puVar2 = (undefined4)local_78;
              puVar2[1] = local_78._4_4_;
              puVar2[2] = (int)uStack_70;
              puVar2[3] = uStack_70._4_4_;
              *(int *)(local_88 + 0x20 + lVar10 * 0x28) = (int)((ulonglong)ppuVar12 >> 0x20) + iVar6
              ;
              *(undefined4 *)(local_88 + 0x24 + lVar10 * 0x28) = uVar3;
              FUN_147544974(&local_c0);
              uVar5 = uStack_80;
            }
          }
        }
        else {
          if ((longlong)*(int *)((longlong)uStack_70 + 0x1c) == -1) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_78[8] + (longlong)*(int *)((longlong)uStack_70 + 0x1c) * 0xc + 4)
            ;
          }
          if (((int)local_68 < 0) || (iVar6 <= (int)local_68)) goto LAB_1475446b1;
        }
        FUN_14055b6c8(&local_a8,1);
        lVar10 = local_88;
      } while ((local_98 != -1) || (iStack_94 == 0));
      lVar8 = (longlong)(int)uStack_80;
      if (lVar8 != 0) {
        lVar11 = local_88 + 0x10;
        lVar13 = 0;
        do {
          local_c8 = *(undefined8 *)(lVar10 + 0x20 + lVar13);
          puVar1 = (ulonglong *)(lVar11 + lVar13);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar2 = (undefined4 *)(lVar10 + lVar13);
          local_e8 = *puVar2;
          uStack_e4 = puVar2[1];
          uStack_e0 = puVar2[2];
          uStack_dc = puVar2[3];
          local_78 = &PTR_FUN_14a475c08;
          local_f8 = 0;
          local_a8 = local_e8;
          uStack_a4 = uStack_e4;
          uStack_a0 = uStack_e0;
          uStack_9c = uStack_dc;
          uStack_70 = param_2;
          local_68 = local_d8;
          uStack_60 = uStack_d0;
          local_58 = local_c8;
          FUN_1475569d4(param_2,&local_a8,&local_78,0xffffffff);
          lVar13 = lVar13 + 0x28;
        } while (lVar8 * 0x28 != lVar13);
      }
      if (local_88 != 0) {
        FUN_1400020a8(local_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147544974 FUN_147544974 body=161 status=ok
// SIG undefined FUN_147544974(void)

void FUN_147544974(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  lVar1 = param_1[1];
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar1 + 0x1c) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x40) + 4 + (longlong)*(int *)(lVar1 + 0x1c) * 0xc);
    }
    if ((-1 < iVar3) && (iVar3 < iVar4)) break;
    if ((*(int *)(lVar1 + 0x10) == -1) && (*(int *)(lVar1 + 0x14) != 0)) {
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    lVar2 = *param_1;
    iVar3 = (int)*(longlong *)(lVar1 + 0x10);
    if (iVar3 != -1) {
      lVar2 = (*(longlong *)(lVar1 + 0x10) >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar3 * 0xc) * 0x20 +
              *(longlong *)(lVar2 + 0x30);
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
    lVar1 = lVar2;
  }
  return;
}



// FUNCTION 147544a16 FUN_147544a16 body=161 status=ok
// SIG undefined FUN_147544a16(void)

byte FUN_147544a16(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_4;
  local_28 = param_4[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  bVar5 = (**(code **)(*param_1 + 0x2c0))(param_1,&local_48,param_3,&local_30);
  bVar3 = *(byte *)(param_1 + 0xb);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar5 ^ bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147544ab8 FUN_147544ab8 body=259 status=ok
// SIG undefined FUN_147544ab8(void)

uint FUN_147544ab8(longlong *param_1,undefined8 param_2,int param_3,longlong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar4 == '\x01') {
    iVar6 = FUN_1447addd0(param_2,0x10);
    uVar5 = iVar6 + -0x61c88647 + (uVar5 >> 2) + uVar5 * 0x40 ^ uVar5;
    uVar5 = (uVar5 >> 2) + 0x9e3779b9 + param_3 + uVar5 * 0x40 ^ uVar5;
  }
  else if (param_5 != 0 && cVar4 == '\x02') {
    uVar7 = ((uint)(param_5 >> 0x14) & 0xffff ^ (uint)(param_5 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar5 = uVar5 ^ (uVar7 >> 0x10 ^ uVar7) + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9;
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
  return uVar5;
}



// FUNCTION 147544bbc FUN_147544bbc body=559 status=ok
// SIG undefined FUN_147544bbc(void)

undefined4
FUN_147544bbc(undefined8 param_1,undefined4 *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  local_a8 = param_2;
  local_a0 = param_1;
  local_54 = param_3;
  FUN_1405e06c2(*param_4,&local_98,param_2);
  if ((longlong)local_90 != 0) {
    lVar8 = 0;
    do {
      local_50 = *(undefined8 *)(local_98 + lVar8);
      lVar7 = FUN_14479d2ce(&local_50);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      uVar4 = uStack_60;
      lVar9 = (longlong)(int)uStack_60;
      uVar5 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
      if (uStack_60._4_4_ < uVar5) {
        FUN_140845902(&local_68,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_68 + lVar9 * 8) = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_90 * 8 != lVar8);
  }
  local_98 = FUN_14479d2ce(*param_4 + 0x18);
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_98);
  }
  local_80 = FUN_1400d1226(*param_4,&local_54);
  local_90 = *local_a8;
  uStack_8c = local_a8[1];
  uStack_88 = local_a8[2];
  uStack_84 = local_a8[3];
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  uVar4 = uStack_60;
  lVar8 = local_68;
  local_78 = 0;
  local_70 = (int)uStack_60;
  if ((int)uStack_60 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1402ae8a8(&local_78,uStack_60 & 0xffffffff,0);
    FUN_140160884(local_78,lVar8,uVar4 & 0xffffffff);
  }
  uVar6 = FUN_147520016(local_a0,&local_98);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147544e00 FUN_147544e00 body=71 status=ok
// SIG undefined FUN_147544e00(void)

bool FUN_147544e00(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x2d0))();
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
  return cVar4 != '\x01';
}



// FUNCTION 147544e48 FUN_147544e48 body=292 status=ok
// SIG undefined FUN_147544e48(void)

uint FUN_147544e48(ulonglong param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  iVar3 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      if (plVar5 != (longlong *)0x0) {
        local_58 = *param_4;
        local_50 = param_4[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        local_78 = param_5;
        iVar7 = (**(code **)(*plVar5 + 0x2b0))(plVar5,&local_68,param_3,&local_58);
        uVar6 = uVar6 ^ iVar7 + (uVar6 >> 2) + uVar6 * 0x40 + 0x9e3779b9;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  plVar5 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147544f6e FUN_147544f6e body=316 status=ok
// SIG undefined FUN_147544f6e(void)

ulonglong FUN_147544f6e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 unaff_RSI;
  undefined7 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = *(char *)(param_1 + 0x60);
  bVar13 = cVar3 == '\0';
  uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
  local_4c = param_3;
  uVar9 = FUN_140894a5a();
  uVar9 = FUN_144a78ede(param_1,uVar9);
  iVar4 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    bVar13 = cVar3 == '\0';
    lVar12 = 0;
    do {
      lVar11 = *(longlong *)(lVar5 + lVar12);
      bVar7 = bVar13;
      if (lVar11 != 0) {
        local_60 = *param_4;
        local_58 = param_4[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          lVar11 = *(longlong *)(lVar5 + lVar12);
        }
        local_68 = &local_60;
        cVar8 = FUN_147572202(param_2,&local_4c,lVar11,uVar9);
        cVar3 = *(char *)(param_1 + 0x60);
        if (cVar3 == '\x02') {
          if ((cVar8 != '\0') && (bVar7 = true, bVar13)) {
LAB_147545050:
            bVar13 = false;
            uVar10 = 0;
            break;
          }
        }
        else if (cVar3 == '\x01') {
          if (cVar8 != '\0') {
            bVar13 = true;
            break;
          }
        }
        else if ((cVar3 == '\0') && (cVar8 == '\0')) goto LAB_147545050;
      }
      bVar13 = bVar7;
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar4 * 8 != lVar12);
  }
  plVar6 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar13) & 0xffffffff;
}



// FUNCTION 1475450ac FUN_1475450ac body=248 status=ok
// SIG undefined FUN_1475450ac(void)

ulonglong FUN_1475450ac(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(param_1 + 0x70);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    lVar8 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_58 = uVar3;
        local_50 = plVar4;
        cVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_58);
        if (cVar7 == '\0') {
          uVar9 = 0;
          break;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475451a6 FUN_1475451a6 body=100 status=ok
// SIG undefined FUN_1475451a6(void)

undefined8 * FUN_1475451a6(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *_Dst;
  size_t _Size;
  
  *(undefined2 *)((longlong)param_1 + 0xe) = 7;
  uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  _Size = 0xe;
  _Dst = param_1;
  if (uVar1 != 7) {
    _Size = (size_t)((uint)uVar1 * 2);
    _Dst = (undefined8 *)FUN_144a7d36f(_Size);
    *(ushort *)((longlong)param_1 + 0xe) = uVar1;
    *param_1 = _Dst;
    if (*(short *)((longlong)param_2 + 0xe) != 7) {
      param_2 = (undefined8 *)*param_2;
    }
  }
  memcpy(_Dst,param_2,_Size);
  return param_1;
}



// FUNCTION 14754520a FUN_14754520a body=14 status=ok
// SIG undefined FUN_14754520a(void)

undefined8 * FUN_14754520a(undefined8 *param_1)

{
  if (*(short *)((longlong)param_1 + 0xe) != 7) {
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 147545218 FUN_147545218 body=155 status=ok
// SIG undefined FUN_147545218(void)

longlong * FUN_147545218(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong *_Dst;
  ulonglong _Size;
  
  uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  if (*(ushort *)((longlong)param_1 + 0xe) != 7 && *(ushort *)((longlong)param_1 + 0xe) != uVar1) {
    if (*param_1 != 0) {
      thunk_FUN_1400020a8();
    }
    *(undefined2 *)((longlong)param_1 + 0xe) = 7;
    uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  }
  if (uVar1 == 7) {
    *(undefined2 *)((longlong)param_1 + 0xe) = 7;
    if (*(short *)((longlong)param_2 + 0xe) != 7) {
      param_2 = (undefined8 *)*param_2;
    }
  }
  else {
    _Dst = (longlong *)FUN_144a7d36f((uint)uVar1 * 2);
    *param_1 = (longlong)_Dst;
    uVar1 = *(ushort *)((longlong)param_2 + 0xe);
    *(ushort *)((longlong)param_1 + 0xe) = uVar1;
    if (uVar1 != 7) {
      param_2 = (undefined8 *)*param_2;
      _Size = (ulonglong)((uint)uVar1 * 2);
      goto LAB_147545273;
    }
  }
  _Size = 0xe;
  _Dst = param_1;
LAB_147545273:
  memcpy(_Dst,param_2,_Size);
  return param_1;
}



// FUNCTION 1475452b4 FUN_1475452b4 body=49 status=ok
// SIG undefined FUN_1475452b4(void)

void FUN_1475452b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined2 *)((longlong)param_1 + 0xe) = *(undefined2 *)((longlong)param_2 + 0xe);
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *param_1 = uVar1;
  *(undefined2 *)((longlong)param_2 + 0xe) = 7;
  *(undefined8 *)((longlong)param_2 + 6) = 0x8000800080008000;
  *param_2 = 0x8000800080008000;
  return;
}



// FUNCTION 1475452e6 FUN_1475452e6 body=634 status=ok
// SIG undefined FUN_1475452e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475452e6(undefined8 *param_1,ushort param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  void *_Dst;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *_Src;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar24 [16];
  
  _Dst = (void *)FUN_144a7d36f((uint)param_2 * 2);
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  uVar11 = (ulonglong)uVar1;
  _Src = param_1;
  if (uVar11 != 7) {
    _Src = (undefined8 *)*param_1;
  }
  memmove(_Dst,_Src,(ulonglong)((uint)uVar1 + (uint)uVar1));
  auVar8 = _DAT_149931e80;
  if (uVar1 < param_2) {
    lVar10 = (param_2 - uVar11) + -1;
    auVar12._8_4_ = (int)lVar10;
    auVar12._0_8_ = lVar10;
    auVar12._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar9 = 0;
    auVar14 = pmovsxbq(in_XMM1,0x706);
    auVar15 = pmovsxbq(in_XMM2,0x504);
    auVar16 = pmovsxbq(in_XMM3,0x302);
    auVar17 = pmovsxbq(in_XMM4,0x100);
    auVar12 = auVar12 ^ _DAT_149931e80;
    do {
      auVar18._8_4_ = (int)uVar9;
      auVar18._0_8_ = uVar9;
      auVar18._12_4_ = (int)(uVar9 >> 0x20);
      auVar20 = (auVar18 | auVar17) ^ auVar8;
      lVar10 = auVar12._0_8_;
      auVar21._0_8_ = -(ulonglong)(lVar10 < auVar20._0_8_);
      lVar13 = auVar12._8_8_;
      auVar21._8_8_ = -(ulonglong)(lVar13 < auVar20._8_8_);
      auVar24 = pshuflw(unaff_XMM9,auVar21,0xe8);
      auVar20._8_4_ = 0xffffffff;
      auVar20._0_8_ = 0xffffffffffffffff;
      auVar20._12_4_ = 0xffffffff;
      auVar20 = packssdw(auVar24 ^ auVar20,auVar24 ^ auVar20);
      if ((auVar20._0_4_ & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2) = 0x8000;
      }
      auVar21 = packssdw(auVar21,auVar21);
      auVar24._8_4_ = 0xffffffff;
      auVar24._0_8_ = 0xffffffffffffffff;
      auVar24._12_4_ = 0xffffffff;
      auVar21 = packssdw(auVar21 ^ auVar24,auVar21 ^ auVar24);
      if ((auVar21[2] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 2) = 0x8000;
      }
      auVar21 = (auVar18 | auVar16) ^ auVar8;
      auVar22._0_8_ = -(ulonglong)(lVar10 < auVar21._0_8_);
      auVar22._8_8_ = -(ulonglong)(lVar13 < auVar21._8_8_);
      auVar20 = packssdw(auVar20,auVar22);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar20 = packssdw(auVar20 ^ auVar2,auVar20 ^ auVar2);
      if ((auVar20[4] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 4) = 0x8000;
      }
      auVar21 = pshufhw(auVar22,auVar22,0x84);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar21 = packssdw(auVar21 ^ auVar3,auVar21 ^ auVar3);
      if ((auVar21[6] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 6) = 0x8000;
      }
      auVar21 = (auVar18 | auVar15) ^ auVar8;
      auVar23._0_8_ = -(ulonglong)(lVar10 < auVar21._0_8_);
      auVar23._8_8_ = -(ulonglong)(lVar13 < auVar21._8_8_);
      auVar20 = pshuflw(auVar20,auVar23,0xe8);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      unaff_XMM9 = packssdw(auVar20 ^ auVar4,auVar20 ^ auVar4);
      if ((unaff_XMM9[8] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 8) = 0x8000;
      }
      auVar20 = packssdw(auVar23,auVar23);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar20 = packssdw(auVar20 ^ auVar5,auVar20 ^ auVar5);
      if ((auVar20[10] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 10) = 0x8000;
      }
      auVar18 = (auVar18 | auVar14) ^ auVar8;
      auVar19._0_8_ = -(ulonglong)(lVar10 < auVar18._0_8_);
      auVar19._8_8_ = -(ulonglong)(lVar13 < auVar18._8_8_);
      auVar20 = packssdw(auVar20,auVar19);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar20 = packssdw(auVar20 ^ auVar6,auVar20 ^ auVar6);
      if ((auVar20[0xc] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 0xc) = 0x8000;
      }
      auVar20 = pshufhw(auVar19,auVar19,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar20 = packssdw(auVar20 ^ auVar7,auVar20 ^ auVar7);
      if ((auVar20[0xe] & 1) != 0) {
        *(undefined2 *)((longlong)_Dst + uVar9 * 2 + uVar11 * 2 + 0xe) = 0x8000;
      }
      uVar9 = uVar9 + 8;
    } while (((param_2 - uVar11) + 7 & 0xfffffffffffffff8) != uVar9);
  }
  if (_Src != (undefined8 *)0x0 && uVar1 != 7) {
    thunk_FUN_1400020a8(_Src);
  }
  *(ushort *)((longlong)param_1 + 0xe) = param_2;
  *param_1 = _Dst;
  return;
}



// FUNCTION 147545560 FUN_147545560 body=64 status=ok
// SIG undefined FUN_147545560(void)

int FUN_147545560(undefined8 *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  if (uVar1 != 7) {
    if (uVar1 == 0) {
      return 0;
    }
    param_1 = (undefined8 *)*param_1;
  }
  iVar6 = 0;
  uVar4 = (ulonglong)uVar1;
  uVar3 = (uint)uVar1;
  do {
    uVar4 = uVar4 >> 1;
    uVar5 = (uint)uVar4 + iVar6;
    if (!SBORROW2(0,*(short *)((longlong)param_1 + (ulonglong)uVar5 * 2))) {
      iVar6 = uVar5 + (uVar3 & 1);
    }
    bVar2 = 1 < uVar3;
    uVar3 = (uint)uVar4;
  } while (bVar2);
  return iVar6;
}



// FUNCTION 1475455a0 FUN_1475455a0 body=113 status=ok
// SIG undefined FUN_1475455a0(void)

void FUN_1475455a0(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  uVar2 = 7;
  if (uVar1 != 7) {
    param_1 = (undefined8 *)*param_1;
    uVar2 = (uint)uVar1;
    if (uVar1 == 0) {
      uVar2 = 0;
      uVar4 = 0;
      goto LAB_1475455e4;
    }
  }
  uVar4 = 0;
  uVar6 = (ulonglong)uVar2;
  do {
    uVar3 = (int)(uVar6 >> 1) + uVar4;
    uVar5 = (uint)uVar6;
    if (!SBORROW2(0,*(short *)((longlong)param_1 + (ulonglong)uVar3 * 2))) {
      uVar4 = uVar3 + (uVar5 & 1);
    }
    uVar6 = uVar6 >> 1;
  } while (1 < uVar5);
LAB_1475455e4:
  if ((int)uVar4 < (int)uVar2) {
    uVar2 = uVar4;
  }
  uVar4 = 0;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  *param_2 = param_1;
  *(uint *)(param_2 + 1) = uVar4;
  return;
}



// FUNCTION 147545612 FUN_147545612 body=136 status=ok
// SIG undefined FUN_147545612(void)

void FUN_147545612(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  
  uVar2 = 0xffff;
  if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
    lVar3 = param_1 + 0x1a8;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1b0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1b8) - 1U & (uint)*param_3) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar4 * 0xc);
        if (*puVar1 == *param_3) {
          if (puVar1 + 1 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            uVar2 = puVar1[1];
          }
          break;
        }
        iVar4 = *(int *)(puVar1 + 2);
      } while (iVar4 != -1);
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14754569e FUN_14754569e body=82 status=ok
// SIG undefined FUN_14754569e(void)

void FUN_14754569e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140560902(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475456f2 FUN_1475456f2 body=84 status=ok
// SIG undefined FUN_1475456f2(void)

void FUN_1475456f2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_140560180(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147545748 FUN_147545748 body=10 status=ok
// SIG undefined FUN_147545748(void)

void FUN_147545748(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014754574f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 147545756 FUN_147545756 body=2173 status=ok
// SIG undefined FUN_147545756(void)

void FUN_147545756(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  char local_281;
  ulonglong local_280;
  int local_274;
  int local_270;
  int local_26c;
  longlong local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  undefined2 *local_248;
  undefined1 *local_240;
  undefined4 *local_238;
  longlong local_230;
  undefined4 *local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 *local_208;
  longlong local_200;
  int local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined2 local_1ca;
  undefined1 local_1c8 [2];
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined1 local_1bb;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  longlong *local_1a8;
  int local_1a0;
  undefined1 local_19c;
  longlong local_198;
  longlong *local_190;
  int local_188;
  longlong local_180;
  longlong *local_178;
  int local_170;
  longlong local_168;
  longlong *local_160;
  int local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar9 = FUN_14009d2a0();
  lVar20 = *(longlong *)(param_1 + 0x28);
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  local_f8 = 0x10000000000;
  local_d0 = 0x10000000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_1a8 = (longlong *)(local_130 + 4);
  local_130._0_4_ = *(undefined4 *)(lVar9 + 0x11a);
  local_1b0 = local_130;
  uVar10 = FUN_1403b5126(&local_118,&local_1b0,2);
  cVar8 = FUN_14050a5e0(lVar20 + 0x28,uVar10);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  plVar16 = local_1a8;
  if (cVar8 != '\0') {
    lVar20 = *(longlong *)(param_1 + 0x28);
    local_268 = *(longlong *)(lVar20 + 0x548);
    lVar13 = *(longlong *)(lVar20 + 0x5d8);
    plVar11 = *(longlong **)(lVar20 + 0x5e0);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (*(char *)(lVar13 + 0x7c) == '\x02') {
      uStack_128 = &local_208;
      local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
      local_1b0._0_4_ = CONCAT22(*(undefined2 *)(lVar9 + 100),(undefined2)local_1b0);
      local_1b0._0_6_ = CONCAT24(*(undefined2 *)(lVar9 + 0x4a),(undefined4)local_1b0);
      local_1b0 = (undefined1 *)CONCAT26(*(undefined2 *)(lVar9 + 0x4e),(undefined6)local_1b0);
      local_1a8 = (longlong *)CONCAT62(local_1a8._2_6_,*(undefined2 *)(lVar9 + 0x6c));
      plVar19 = local_1a8;
      local_1a8._6_2_ = SUB82(plVar16,6);
      local_1a8._0_5_ = (uint5)plVar19;
      local_1a8._0_6_ = (uint6)(uint5)local_1a8;
      local_1a0 = 0x6ff;
      local_19c = 0;
      local_148 = CONCAT22(local_148._2_2_,*(undefined2 *)(lVar9 + 0x11c));
      local_228 = &local_148;
      local_220 = (longlong)&local_148 + 2;
      local_130 = (undefined1  [8])local_268;
      FUN_147545fd4(&local_1b0,&local_118);
      FUN_1432d439e(&local_118,*(longlong *)(param_1 + 0x28) + 0x28,local_130);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      plVar16 = local_1a8;
      local_208 = (undefined8 *)CONCAT71(local_208._1_7_,1);
      local_1b0._0_4_ = CONCAT22(*(undefined2 *)(lVar9 + 100),(undefined2)local_1b0);
      local_1b0._0_6_ = CONCAT24(*(undefined2 *)(lVar9 + 0x4a),(undefined4)local_1b0);
      local_1b0 = (undefined1 *)CONCAT26(*(undefined2 *)(lVar9 + 0x4e),(undefined6)local_1b0);
      local_1a8 = (longlong *)CONCAT62(local_1a8._2_6_,*(undefined2 *)(lVar9 + 0x6c));
      plVar19 = local_1a8;
      local_1a8._6_2_ = SUB82(plVar16,6);
      local_1a8._0_5_ = (uint5)plVar19;
      local_1a8._0_6_ = (uint6)(uint5)local_1a8;
      local_1a0 = 0x6ff;
      local_19c = 0;
      local_148 = CONCAT22(local_148._2_2_,*(undefined2 *)(lVar9 + 0x11a));
      local_238 = &local_148;
      local_230 = (longlong)&local_148 + 2;
      FUN_147545fd4(&local_1b0,&local_118);
      FUN_1432d439e(&local_118,*(longlong *)(param_1 + 0x28) + 0x28,local_130);
    }
    else {
      local_1c6 = *(undefined2 *)(lVar9 + 100);
      local_1c0 = *(undefined2 *)(lVar9 + 0x4a);
      local_1c4 = *(undefined2 *)(lVar9 + 0x4e);
      local_1c2 = *(undefined2 *)(lVar9 + 0x6c);
      local_1bb = 0;
      local_1b8 = 0x6ff;
      local_1b4 = 0;
      local_1ca = *(undefined2 *)(lVar9 + 0x11a);
      local_248 = &local_1ca;
      local_240 = local_1c8;
      FUN_14754606a(local_1c8,&local_118);
      if ((((local_118._2_2_ != -1) && (local_118._4_2_ != -1)) && (local_118._6_2_ != -1)) &&
         ((short)uStack_110 != -1)) {
        lVar20 = *(longlong *)(param_1 + 0x28);
        local_200 = lVar20 + 0x28;
        local_208 = &uStack_100;
        local_281 = *(char *)(lVar20 + 0x298);
        if (local_281 == '\0') {
          *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
        }
        else {
          LOCK();
          *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
          UNLOCK();
        }
        local_1f8 = FUN_1403b8464(&local_208,0);
        local_274 = *(int *)(lVar20 + 0x38);
        plVar16 = plVar11;
        if (local_1f8 != local_274) {
          do {
            local_260 = plVar16;
            lVar20 = *(longlong *)(*(longlong *)(local_200 + 0x60) + (longlong)local_1f8 * 8);
            if (local_281 == '\0') {
              *(undefined4 *)(lVar20 + 0x14) = 0;
              lVar9 = lVar20;
            }
            else {
              lVar9 = 0;
            }
            if (*(ushort *)(lVar20 + 0xc) != 0) {
              plVar16 = *(longlong **)(lVar20 + 0x28);
              lVar13 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
              do {
                if (*(short *)((longlong)plVar16 + 0x1e) == (short)uStack_110) goto LAB_147545b7d;
                plVar16 = plVar16 + 4;
                lVar13 = lVar13 + -0x20;
              } while (lVar13 != 0);
            }
            plVar16 = (longlong *)0x0;
LAB_147545b7d:
            iVar3 = *(int *)(lVar20 + 0x14);
            if (iVar3 == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
            }
            LOCK();
            *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
            UNLOCK();
            lVar13 = *plVar16;
            if (*(ushort *)(lVar20 + 0xc) != 0) {
              plVar11 = *(longlong **)(lVar20 + 0x28);
              lVar14 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
              do {
                if (*(short *)((longlong)plVar11 + 0x1e) == local_118._6_2_) goto LAB_147545ba6;
                plVar11 = plVar11 + 4;
                lVar14 = lVar14 + -0x20;
              } while (lVar14 != 0);
            }
            plVar11 = (longlong *)0x0;
LAB_147545ba6:
            iVar4 = *(int *)(lVar20 + 0x14);
            if (iVar4 == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
            }
            LOCK();
            *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
            UNLOCK();
            local_258 = *plVar11;
            if (*(ushort *)(lVar20 + 0xc) != 0) {
              plVar19 = *(longlong **)(lVar20 + 0x28);
              lVar14 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
              do {
                if (*(short *)((longlong)plVar19 + 0x1e) == local_118._4_2_) goto LAB_147545be1;
                plVar19 = plVar19 + 4;
                lVar14 = lVar14 + -0x20;
              } while (lVar14 != 0);
            }
            plVar19 = (longlong *)0x0;
LAB_147545be1:
            iVar5 = *(int *)(lVar20 + 0x14);
            local_280 = lVar13;
            local_250 = lVar9;
            if (iVar5 == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar19 + 1));
            }
            LOCK();
            *(int *)(plVar19 + 3) = (int)plVar19[3] + 1;
            UNLOCK();
            lVar9 = *plVar19;
            if (*(ushort *)(lVar20 + 0xc) != 0) {
              plVar17 = *(longlong **)(lVar20 + 0x28);
              lVar13 = (ulonglong)*(ushort *)(lVar20 + 0xc) << 5;
              do {
                if (*(short *)((longlong)plVar17 + 0x1e) == local_118._2_2_) goto LAB_147545c16;
                plVar17 = plVar17 + 4;
                lVar13 = lVar13 + -0x20;
              } while (lVar13 != 0);
            }
            plVar17 = (longlong *)0x0;
LAB_147545c16:
            iVar6 = *(int *)(lVar20 + 0x14);
            local_270 = iVar4;
            local_26c = iVar3;
            if (iVar6 == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
            }
            LOCK();
            *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
            UNLOCK();
            local_198 = *plVar17;
            local_1b0 = *(undefined1 **)(lVar20 + 0x18);
            local_170 = local_270;
            local_168 = local_258;
            local_158 = local_26c;
            local_150 = local_280;
            local_280 = (ulonglong)*(ushort *)(lVar20 + 0xe);
            local_1a8 = plVar17;
            local_1a0 = iVar6;
            local_190 = plVar19;
            local_188 = iVar5;
            local_180 = lVar9;
            local_178 = plVar11;
            local_160 = plVar16;
            if (local_280 != 0) {
              lVar20 = 0;
              uVar18 = 0;
              do {
                lVar14 = local_168;
                lVar9 = *(longlong *)(local_150 + uVar18 * 8);
                puVar2 = (undefined4 *)(local_198 + lVar20);
                local_218 = *puVar2;
                uStack_214 = puVar2[1];
                uStack_210 = puVar2[2];
                uStack_20c = puVar2[3];
                lVar13 = *(longlong *)(local_268 + 8);
                lVar15 = (ulonglong)*(ushort *)(local_180 + uVar18 * 4) * 0x128;
                uVar7 = *(undefined4 *)(lVar13 + 0x110 + lVar15);
                uVar10 = *(undefined8 *)(lVar13 + 0x100 + lVar15);
                plVar16 = *(longlong **)(lVar13 + 0x108 + lVar15);
                if (plVar16 == (longlong *)0x0) {
                  local_1d8 = (longlong *)0x0;
                }
                else {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar11 = plVar16 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar16)(plVar16);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                  local_1d8 = plVar16;
                }
                local_1e0 = uVar10;
                plVar11 = (longlong *)FUN_140165676(&local_1e0);
                if (((lVar9 != 0) && (*(char *)(lVar14 + uVar18) == '\0')) &&
                   (lVar13 = *(longlong *)(lVar9 + 0x10), lVar13 != 0)) {
                  uVar12 = FUN_145a67054();
                  cVar8 = FUN_144a7ff9e(lVar13,uVar12);
                  if (cVar8 != '\0') {
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(lVar9);
                    }
                    uVar12 = FUN_145a67054();
                    FUN_144718840(lVar9,uVar12);
                    if (plVar11 != (longlong *)0x0) {
                      if (plVar16 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                        UNLOCK();
                      }
                      local_298 = &local_1f0;
                      local_1f0 = uVar10;
                      local_1e8 = plVar16;
                      FUN_1475740ae(local_130,DAT_14cab25c0,uVar7,&local_218);
                      local_148 = local_130._0_4_;
                      uStack_144 = local_130._4_4_;
                      uStack_140 = (undefined4)uStack_128;
                      uStack_13c = uStack_128._4_4_;
                      local_138 = local_120;
                      lVar13 = (**(code **)(*plVar11 + 0x20))(plVar11);
                      if (lVar13 == 0) {
LAB_147545fa3:
                        lVar13 = 0;
                      }
                      else {
                        lVar14 = FUN_1411def2e();
                        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)
                            ) || (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30))
                        goto LAB_147545fa3;
                      }
                      FUN_14751fc74(lVar9,lVar13,&local_148);
                    }
                  }
                }
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar16 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar16)(plVar16);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar16 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
                uVar18 = uVar18 + 1;
                lVar20 = lVar20 + 0x10;
              } while (local_280 != uVar18);
            }
            FUN_14754ec96(&local_1b0);
            plVar11 = local_260;
            if (local_250 != 0) {
              *(undefined4 *)(local_250 + 0x14) = 1;
            }
            local_1f8 = FUN_1403b8464(&local_208,local_1f8 + 1);
            plVar16 = local_260;
          } while (local_1f8 != local_274);
        }
        if (local_208 != (undefined8 *)0x0) {
          if (*(char *)(local_200 + 0x270) == '\0') {
            *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
          }
          else {
            LOCK();
            *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
            UNLOCK();
          }
        }
      }
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar11 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147545fd4 FUN_147545fd4 body=148 status=ok
// SIG undefined FUN_147545fd4(void)

undefined8 * FUN_147545fd4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14754ea8c(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754606a FUN_14754606a body=148 status=ok
// SIG undefined FUN_14754606a(void)

undefined8 * FUN_14754606a(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14754ebce(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147546104 FUN_147546104 body=9 status=ok
// SIG undefined FUN_147546104(void)

undefined1 * FUN_147546104(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 100);
  return param_2;
}



// FUNCTION 14754610e FUN_14754610e body=40 status=ok
// SIG undefined FUN_14754610e(void)

void FUN_14754610e(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  bVar2 = (byte)(param_2 >> 0x10) & 0x1f;
  puVar1 = (uint *)(lVar3 + (ulonglong)(param_2 >> 0x15) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14754613e FUN_14754613e body=220 status=ok
// SIG undefined FUN_14754613e(void)

void FUN_14754613e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined2 *local_a0;
  undefined8 *local_98;
  undefined2 local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14009d2a0();
  local_a8 = &PTR_FUN_14a473cb0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_48 = 0;
  local_68 = 0x10000000000;
  local_40 = 0x10000000000;
  local_38 = 0;
  uStack_30 = 0;
  local_8a = *(undefined2 *)(lVar2 + 0x68);
  local_98 = &local_88;
  local_a0 = &local_8a;
  FUN_1447c44f6(&local_88);
  FUN_140857d6a(lVar1 + 0x28,&local_88,&local_a8,1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754621c FUN_14754621c body=37 status=ok
// SIG undefined FUN_14754621c(void)

undefined8 FUN_14754621c(ulonglong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == 0) || (uVar1 = 0, *param_1 < *(ulonglong *)(param_2 + 0x250))) {
    *param_1 = *(ulonglong *)(param_2 + 0x248);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 147546242 FUN_147546242 body=64 status=ok
// SIG undefined FUN_147546242(void)

ulonglong FUN_147546242(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 extraout_AL;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  if ((uVar1 == 0) || (uVar1 < *(ulonglong *)(param_2 + 0x250))) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x248);
    FUN_14050a5e0(param_2,param_1);
    *(undefined1 *)(param_1 + 0x68) = extraout_AL;
    uVar2 = extraout_AL;
    uVar3 = extraout_var;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x68);
    uVar3 = (undefined7)(uVar1 >> 8);
  }
  return CONCAT71(uVar3,uVar2) & 0xffffffffffffff01;
}



// FUNCTION 147546286 FUN_147546286 body=444 status=ok
// SIG undefined FUN_147546286(void)

void FUN_147546286(longlong param_1,short param_2,undefined8 *param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar13 = 0;
    do {
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar13);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      local_68 = *(undefined8 *)(lVar4 + 0x20 + lVar13);
      if ((short)local_88 == param_2) {
        puVar1 = (undefined4 *)(lVar4 + 8 + lVar13);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar13);
        uVar9 = puVar2[1];
        param_3[2] = *puVar2;
        param_3[3] = uVar9;
        *(undefined4 *)param_3 = uVar5;
        *(undefined4 *)((longlong)param_3 + 4) = uVar6;
        *(undefined4 *)(param_3 + 1) = uVar7;
        *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
        *param_4 = 0;
      }
      else {
        FUN_147546444(param_5);
      }
      lVar13 = lVar13 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar13);
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar13 = 0;
    do {
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar13);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      dVar12 = *(double *)(puVar1 + 2);
      local_68 = *(undefined8 *)(lVar4 + 0x20 + lVar13);
      if ((short)local_88 == param_2) {
        puVar2 = (undefined8 *)(lVar4 + 8 + lVar13);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar13);
        uVar11 = puVar2[1];
        param_3[2] = *puVar2;
        param_3[3] = uVar11;
        *param_3 = uVar9;
        param_3[1] = uVar10;
        *param_4 = (dVar12 != 0.0) + 1;
      }
      else {
        FUN_147546444(param_6);
      }
      lVar13 = lVar13 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar13);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    lVar13 = 0;
    do {
      if (*(short *)(lVar4 + lVar13) == param_2) {
        puVar1 = (undefined4 *)(lVar4 + 8 + lVar13);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar13);
        uVar9 = puVar2[1];
        param_3[2] = *puVar2;
        param_3[3] = uVar9;
        *(undefined4 *)param_3 = uVar5;
        *(undefined4 *)((longlong)param_3 + 4) = uVar6;
        *(undefined4 *)(param_3 + 1) = uVar7;
        *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
        *param_4 = 3;
      }
      lVar13 = lVar13 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147546444 FUN_147546444 body=45 status=ok
// SIG undefined FUN_147546444(void)

double * FUN_147546444(double *param_1,double *param_2)

{
  *param_1 = (double)*(float *)(param_2 + 1) * (*param_2 - param_2[2]) + *param_1;
  *(float *)(param_1 + 1) = *(float *)(param_2 + 1) + *(float *)(param_1 + 1);
  return param_1;
}



// FUNCTION 147546472 FUN_147546472 body=1220 status=ok
// SIG undefined FUN_147546472(void)

double FUN_147546472(double *param_1,undefined8 param_2,double param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  double *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  float local_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  int local_94;
  double local_90;
  float local_88;
  double local_80;
  int local_78;
  char local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = 0.0;
  local_88 = 0.0;
  local_80 = 0.0;
  local_78 = -1;
  local_74 = '\x01';
  local_94 = 0;
  local_f8 = &local_a8;
  local_a8 = 0;
  local_a0 = 0.0;
  local_f0 = &local_b8;
  local_b8 = 0.0;
  local_b0 = 0.0;
  FUN_147546286(param_1,param_2,&local_90,&local_94);
  dVar4 = local_80;
  fVar6 = local_88;
  local_c8 = *param_1;
  uStack_c0 = param_1[1];
  uVar1 = local_94 - 1;
  fVar9 = (float)uStack_c0 + local_a0;
  if (2 < uVar1) {
    fVar9 = fVar9 + local_88;
  }
  if ((param_4 != (double *)0x0) && (fVar9 < 1.0)) {
    local_c8 = (double)(1.0 - fVar9) * *param_4 + local_c8;
    uVar5 = (ulonglong)uStack_c0 >> 0x20;
    uStack_c0 = (double)CONCAT44((int)uVar5,(float)uStack_c0 + (1.0 - fVar9));
    fVar9 = 1.0;
  }
  if ((((local_a0 != 0.0) || (NAN(local_a0))) || (local_b0 != 0.0)) || (NAN(local_b0))) {
    dVar8 = local_90;
    if ((local_88 == 0.0) && (!NAN(local_88))) goto LAB_14754670a;
    if (uVar1 < 2) {
      dVar3 = (double)local_88;
      dVar10 = (local_90 - local_80) * dVar3;
      FUN_14754695c(&local_c8,local_d8,&local_a8);
      dVar8 = (double)FUN_147546938(local_d8);
      dVar11 = local_b8 + dVar10;
      if ((dVar11 != 0.0) || (NAN(dVar11))) {
        dVar8 = ((param_3 - dVar8) - param_1[2]) * (dVar10 / dVar11);
      }
      else {
        dVar8 = (param_3 - dVar8) - param_1[2];
      }
      dVar8 = dVar4 + dVar8 / dVar3;
      goto LAB_14754670a;
    }
    if (*(int *)(param_1 + 8) != 0) goto LAB_14754670a;
    FUN_14754695c(&local_c8,local_e8,&local_a8);
    FUN_14754697e(local_e8,local_d8,&local_90);
    if ((local_d0 != 0.0) || (NAN(local_d0))) {
      dVar4 = (double)FUN_147546938(local_d8);
      dVar4 = dVar4 + param_1[2];
    }
    else {
      dVar4 = param_1[2];
    }
    dVar4 = (param_3 - dVar4) + local_90;
  }
  else {
    if (local_94 == 3) {
      if (0 < *(int *)(param_1 + 4)) {
        FUN_14754edb0(param_1[3]);
        dVar4 = local_c8;
        if ((longlong)*(int *)(param_1 + 4) == 0) {
          dVar8 = 0.0;
        }
        else {
          dVar3 = param_1[3];
          dVar8 = 0.0;
          lVar7 = 0;
          do {
            iVar2 = *(int *)((longlong)dVar3 + 0x18 + lVar7);
            if (iVar2 < local_78) {
              if (*(char *)((longlong)dVar3 + 0x1c + lVar7) == '\x01') {
                dVar10 = (double)*(float *)((longlong)dVar3 + 8 + lVar7) *
                         *(double *)((longlong)dVar3 + lVar7);
              }
              else {
                fVar9 = *(float *)((longlong)dVar3 + 8 + lVar7);
                if (1.0 <= fVar9) {
                  dVar4 = *(double *)((longlong)dVar3 + lVar7);
                  goto LAB_147546628;
                }
                dVar11 = (double)fVar9;
                dVar10 = dVar11 * *(double *)((longlong)dVar3 + lVar7);
                dVar4 = dVar4 * (1.0 - dVar11);
              }
              dVar4 = dVar4 + dVar10;
            }
            else if (local_78 < iVar2) {
              if (*(char *)((longlong)dVar3 + 0x1c + lVar7) == '\x01') {
                dVar10 = (double)*(float *)((longlong)dVar3 + 8 + lVar7) *
                         *(double *)((longlong)dVar3 + lVar7);
              }
              else {
                fVar9 = *(float *)((longlong)dVar3 + 8 + lVar7);
                if (1.0 <= fVar9) {
                  dVar8 = *(double *)((longlong)dVar3 + lVar7);
                  goto LAB_147546628;
                }
                dVar11 = (double)fVar9;
                dVar10 = dVar11 * *(double *)((longlong)dVar3 + lVar7);
                dVar8 = dVar8 * (1.0 - dVar11);
              }
              dVar8 = dVar8 + dVar10;
            }
LAB_147546628:
            lVar7 = lVar7 + 0x20;
          } while ((longlong)*(int *)(param_1 + 4) * 0x20 != lVar7);
        }
        if (local_74 == '\0') {
          dVar4 = (param_3 - dVar8) - dVar4 * (1.0 - (double)fVar6);
          dVar8 = dVar4 / (double)fVar6;
        }
        else {
          dVar4 = (param_3 - dVar8) - dVar4;
          dVar8 = dVar4 / (double)fVar6;
        }
        if ((fVar6 != 0.0) || (NAN(fVar6))) goto LAB_14754670a;
        goto LAB_147546706;
      }
    }
    else if (uVar1 < 2) {
      dVar4 = (double)FUN_147546938(&local_c8);
      dVar4 = (param_3 - dVar4) - param_1[2];
      dVar8 = dVar4 / (double)fVar6;
      if ((fVar6 == 0.0) && (!NAN(fVar6))) {
        dVar8 = dVar4;
      }
      dVar8 = dVar8 + local_80;
      goto LAB_14754670a;
    }
    if ((local_88 != 0.0) || (NAN(local_88))) {
      dVar4 = ((param_3 - param_1[2]) * (double)fVar9 - local_c8) / (double)local_88;
    }
    else {
      dVar4 = (param_3 - param_1[2]) * (double)(*(float *)(param_1 + 1) + 1.0) - *param_1;
    }
  }
LAB_147546706:
  dVar8 = dVar4;
LAB_14754670a:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147546938 FUN_147546938 body=36 status=ok
// SIG undefined FUN_147546938(void)

double FUN_147546938(double *param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *(float *)(param_1 + 1);
  dVar2 = *param_1 / (double)fVar1;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    dVar2 = *param_1;
  }
  return dVar2;
}



// FUNCTION 14754695c FUN_14754695c body=33 status=ok
// SIG undefined FUN_14754695c(void)

double * FUN_14754695c(double *param_1,double *param_2,double *param_3)

{
  *param_2 = *param_1 + *param_3;
  *(float *)(param_2 + 1) = *(float *)(param_1 + 1) + *(float *)(param_3 + 1);
  return param_2;
}



// FUNCTION 14754697e FUN_14754697e body=47 status=ok
// SIG undefined FUN_14754697e(void)

double * FUN_14754697e(double *param_1,double *param_2,double *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_3 + 1);
  *param_2 = (double)fVar1 * (*param_3 - param_3[2]) + *param_1;
  *(float *)(param_2 + 1) = fVar1 + *(float *)(param_1 + 1);
  return param_2;
}



// FUNCTION 1475469ae FUN_1475469ae body=70 status=ok
// SIG undefined FUN_1475469ae(void)

void FUN_1475469ae(longlong param_1)

{
  if ((*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xe4)) &&
     (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94))) {
    return;
  }
  FUN_140a1ba40(param_1 + 0xb0,0);
  FUN_14754f4ec(param_1 + 0x60);
  return;
}



// FUNCTION 1475469f8 FUN_1475469f8 body=1298 status=ok
// SIG undefined FUN_1475469f8(void)

void FUN_1475469f8(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  int local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined2 local_1b2;
  longlong *local_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
    local_188 = 0;
    lStack_180 = 0;
    local_178 = 0xffffffff00000000;
    local_170 = 0xffffffff;
    local_168 = 0;
    local_160 = *param_3;
    uStack_15c = param_3[1];
    uStack_158 = param_3[2];
    uStack_154 = param_3[3];
    local_150 = param_3[4];
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar11 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_14754f77a(&local_e8,uVar11);
    iVar3 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar3)) {
      local_a0 = iVar3;
      FUN_14078e188();
    }
    local_1c0 = param_5 + 2;
    local_140 = 0x100000000;
    local_130 = 0xffffffff;
    uStack_128 = 0;
    local_1c8 = param_1;
    uStack_138 = local_1c0;
    if ((int)param_5[5] == 0) {
      iVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_140);
      iVar3 = (int)param_5[5];
    }
    uStack_190 = CONCAT44(uStack_124,uStack_128);
    local_198 = local_130;
    uVar7 = local_198;
    local_1a8 = (undefined4)local_140;
    uStack_1a4 = local_140._4_4_;
    uStack_1a0 = (undefined4)uStack_138;
    uStack_19c = uStack_138._4_4_;
    local_1b0 = param_5;
    local_198._4_4_ = (int)((ulonglong)local_130 >> 0x20);
    if ((local_198._4_4_ != iVar3) || (uStack_138 != local_1c0)) {
      local_1c8 = local_1c8 + 0x10;
      local_1d0 = param_2 + 0x28;
      iVar4 = local_198._4_4_;
      local_1d4 = iVar3;
      local_198 = uVar7;
      do {
        lVar1 = local_1c8;
        lVar6 = *local_1b0;
        lVar9 = (longlong)iVar4 * 0x1c;
        local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(lVar6 + 8 + lVar9));
        lVar10 = (longlong)*(int *)(lVar6 + 0x10 + lVar9);
        if (lVar10 == -1) {
          local_188 = 0;
        }
        else {
          local_188 = lVar10 * 0x40 + *(longlong *)(param_4 + 0xd0);
        }
        puVar12 = (uint *)(lVar6 + lVar9);
        if ((longlong)(int)puVar12[3] == -1) {
          lStack_180 = 0;
        }
        else {
          lStack_180 = (longlong)(int)puVar12[3] * 0x10 + *(longlong *)(param_4 + 0xe0);
        }
        local_1f0 = &local_e8;
        local_1f8 = &local_98;
        local_1e8 = 1;
        cVar2 = FUN_14055f390(param_2,param_3,param_4,puVar12);
        puVar5 = (uint *)FUN_14055f8b0(lVar1,puVar12[1] ^ *puVar12 ^ puVar12[2],puVar12);
        iVar3 = local_1d4;
        if (cVar2 == '\0') {
          if ((short)puVar5[1] != -1) {
            lVar6 = FUN_14009d2a0();
            local_120 = 0;
            FUN_1400abb7c(&local_140,lVar6 + 0x144);
            FUN_14055c6c6(local_1d0,(short)puVar5[1],&local_140);
            *(undefined2 *)(puVar5 + 1) = 0xffff;
            *puVar5 = 0xffffffff;
          }
        }
        else if (((short)puVar5[1] == -1) || (*puVar5 != puVar12[4])) {
          *puVar5 = puVar12[4];
          lVar6 = FUN_14479d2ce(puVar12);
          uVar7 = local_198;
          if (lVar6 == 0) break;
          uVar7 = FUN_14055f060();
          plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
          uVar7 = local_198;
          if (plVar8 == (longlong *)0x0) break;
          local_f8 = 0;
          local_f0 = 0x100000000;
          (**(code **)(*plVar8 + 0x10))(plVar8,param_2,&local_188,&local_140);
          if ((int)local_f0 != 0) {
            lVar9 = FUN_14055f146();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              FUN_14056101a(lVar6,param_2,&local_188,&local_140);
            }
            lVar6 = local_1d0;
            FUN_14055fcce(&local_140,&local_1b2,&local_188,local_1d0);
            FUN_14055f22c(lVar6,puVar5 + 1,local_1b2);
          }
          FUN_14055efc8(&local_140);
        }
        local_198 = CONCAT44(local_198._4_4_,(uint)local_198 & ~uStack_1a4);
        FUN_1449c0562(&local_1a8);
        iVar4 = local_198._4_4_;
        uVar7 = local_198;
      } while (local_1b0 != param_5 ||
               ((longlong *)CONCAT44(uStack_19c,uStack_1a0) != local_1c0 || local_198._4_4_ != iVar3
               ));
    }
    local_198 = uVar7;
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140957b56(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14055a9b2(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147546f0c FUN_147546f0c body=147 status=ok
// SIG undefined FUN_147546f0c(void)

void FUN_147546f0c(undefined8 param_1,undefined2 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  uStack_30 = 1;
  local_28 = param_1;
  FUN_1405e07ae(&local_38,0);
  *local_38 = param_2;
  FUN_1403b5876(param_1,local_48,0);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147546fa0 FUN_147546fa0 body=451 status=ok
// SIG undefined FUN_147546fa0(void)

void FUN_147546fa0(longlong param_1,ushort param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  uint local_68 [8];
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(int *)(param_3 + 0x20) + 0x1f;
  if (0x1f < uVar3) {
    iVar9 = 0;
    uVar11 = 0;
    do {
      uVar2 = *(uint *)(param_3 + uVar11 * 4);
      if (uVar2 != 0) {
        iVar5 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        if (iVar5 + 1 == iVar9 || *(int *)(param_3 + 0x20) <= iVar5 - iVar9) break;
        lVar4 = *(longlong *)(param_1 + 0x98);
        uVar12 = (ulonglong)param_2;
        uVar11 = (ulonglong)*(ushort *)(lVar4 + uVar12 * 8);
        if (uVar11 == 0xffff) break;
        lVar1 = *(longlong *)(param_1 + 8) + uVar11 * 0x28;
        FUN_147547164(local_68,*(undefined4 *)(lVar1 + 0x20));
        FUN_147548b82(param_3,local_68);
        FUN_14497de01(lVar1,local_68,4,&local_69);
        cVar6 = FUN_1403b8874((ulonglong)((uint)*(ushort *)(lVar4 + uVar12 * 8) * 0x28) +
                              *(longlong *)(param_1 + 8),local_68);
        if (cVar6 != '\0') break;
        if (local_48 + 0x1fU < 0x20) {
LAB_1475470d3:
          uVar7 = *(undefined2 *)(lVar4 + uVar12 * 8);
          uVar10 = *(undefined2 *)(lVar4 + 2 + uVar12 * 8);
LAB_1475470de:
          *(undefined4 *)(lVar4 + uVar12 * 8) = 0xffff;
          FUN_145721252(param_1,uVar7,uVar10);
        }
        else {
          iVar9 = 0;
          uVar11 = 0;
          while (uVar3 = local_68[uVar11], uVar3 == 0) {
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + -0x20;
            if (local_48 + 0x1fU >> 5 == uVar11) goto LAB_1475470d3;
          }
          iVar5 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
            }
          }
          if (local_48 <= iVar5 - iVar9) goto LAB_1475470d3;
          uVar7 = *(undefined2 *)(lVar4 + uVar12 * 8);
          uVar10 = *(undefined2 *)(lVar4 + 2 + uVar12 * 8);
          if (iVar5 + 1 == iVar9) goto LAB_1475470de;
          uVar8 = FUN_14055ca2e(param_1,local_68,0);
          uVar7 = FUN_14055cf42(param_1,uVar8,uVar7,uVar10);
          *(short *)(lVar4 + uVar12 * 8) = (short)uVar8;
          *(undefined2 *)(lVar4 + 2 + uVar12 * 8) = uVar7;
        }
        *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
        *(undefined1 *)(param_1 + 0x261) = 1;
        break;
      }
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + -0x20;
    } while (uVar3 >> 5 != uVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147547164 FUN_147547164 body=119 status=ok
// SIG undefined FUN_147547164(void)

void * FUN_147547164(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x100;
  *(int *)((longlong)param_1 + 0x20) = param_2;
  uVar4 = param_2 + 0x1f;
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    if (uVar4 < 0x120) {
      uVar5 = uVar5 + (uVar5 == 0);
    }
    else {
      uVar4 = uVar4 & 0xffffffe0;
      *(uint *)((longlong)param_1 + 0x24) = uVar4;
    }
    memset(param_1,(int)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xff),(ulonglong)(uVar5 << 2));
    iVar1 = *(int *)((longlong)param_1 + 0x20);
    iVar2 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      bVar3 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)param_1 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)param_1 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  return param_1;
}



// FUNCTION 1475471dc FUN_1475471dc body=137 status=ok
// SIG undefined FUN_1475471dc(void)

void FUN_1475471dc(void)

{
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = 0;
  local_48 = 0x10000000000;
  local_20 = 0x10000000000;
  local_18 = 0;
  uStack_10 = 0;
  local_70 = &PTR_FUN_14a473cf0;
  FUN_140857d6a();
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147547266 FUN_147547266 body=89 status=ok
// SIG undefined FUN_147547266(void)

undefined8 * FUN_147547266(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x240);
  _Src = *(void **)(param_1 + 0x238);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1475472e4 FUN_1475472e4 body=236 status=ok
// SIG undefined FUN_1475472e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475472e4(void)

{
  _DAT_14cab27a8 = 0;
  _DAT_14cab27b0 = 0;
  _DAT_14cab2788 = 0;
  uRam000000014cab2790 = 0;
  _DAT_14cab27b4 = 0xffffffff00000080;
  _DAT_14cab27bc = 0;
  DAT_14cab27c8 = 0;
  _DAT_14cab27d0 = 0;
  DAT_14cab27f8 = 0;
  DAT_14cab2800 = 0;
  DAT_14cab27d8 = 0;
  _DAT_14cab27e0 = 0;
  _DAT_14cab2804 = 0xffffffff00000080;
  DAT_14cab280c = 0;
  DAT_14cab2818 = 0;
  DAT_14cab2820 = 0;
  DAT_14cab2848 = 0;
  _DAT_14cab2850 = 0x8000000000;
  DAT_14cab2828 = 0;
  _DAT_14cab2830 = 0;
  DAT_14cab2880 = 0;
  _DAT_14cab2888 = 0;
  DAT_14cab2868 = 0;
  DAT_14cab2858 = 0;
  _DAT_14cab2860 = 0;
  _DAT_14cab288c = 0x80;
  DAT_14cab28b8 = 0;
  _DAT_14cab28c0 = 0x8000000000;
  DAT_14cab2890 = 0;
  _DAT_14cab2898 = 0;
  DAT_14cab28a0 = 0;
  DAT_14cab28d8 = 0;
  DAT_14cab28c8 = 0;
  _DAT_14cab28d0 = 0;
  _DAT_14cab2900 = 0;
  DAT_14cab28f0 = 0;
  uRam000000014cab28f8 = 0;
  DAT_14cab28e0 = 0;
  _DAT_14cab28e8 = 0;
  return;
}



// FUNCTION 1475473d4 FUN_1475473d4 body=659 status=ok
// SIG undefined FUN_1475473d4(void)

void FUN_1475473d4(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  uint *local_60;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(ushort *)(param_1 + 6);
  if (uVar2 == 0xffff) {
LAB_147547430:
    if ((*(code **)(*param_1 + 0x2c0) == (code *)&LAB_1475473d0) ||
       (cVar5 = (**(code **)(*param_1 + 0x2c0))(param_1,param_2), cVar5 == '\0'))
    goto LAB_147547452;
  }
  else {
    if (*(char *)(param_2 + 0x289) == '\x01') {
      *(undefined4 *)(param_2 + 0x1f0) = 0;
      local_60 = (uint *)(param_2 + 0x40);
      iVar3 = *(int *)(param_2 + 0x58);
      if (iVar3 == 0) {
        uVar16 = 0;
        uVar15 = 1;
        iVar6 = 0;
        iVar11 = 0;
      }
      else {
        puVar7 = *(uint **)(param_2 + 0x50);
        if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
          puVar7 = local_60;
        }
        uVar8 = *puVar7;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          uVar16 = 0;
          uVar15 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar15 = uVar16;
          }
          iVar11 = 0;
          do {
            if (uVar15 == uVar16) goto LAB_147547613;
            iVar11 = iVar11 + 0x20;
            uVar8 = puVar7[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar16 = 0;
          iVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
      if (iVar6 != iVar3) {
        local_68 = param_2 + 0x1d0;
        uVar8 = 0xffffffff;
        do {
          FUN_14010b303((longlong)iVar6 * 0x28 + *(longlong *)(param_2 + 0x30),local_68,1,&local_49)
          ;
          uVar8 = ~(uint)uVar15 & uVar8;
          puVar7 = *(uint **)(param_2 + 0x50);
          if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
            puVar7 = local_60;
          }
          iVar4 = *(int *)(param_2 + 0x58);
          iVar6 = (int)uVar16;
          lVar13 = (longlong)iVar6;
          uVar12 = puVar7[lVar13] & uVar8;
          if (uVar12 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar6) {
              iVar10 = iVar6;
            }
            if (iVar6 < iVar9) {
              lVar14 = 0;
              do {
                uVar12 = puVar7[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar16 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_1475475dc;
                }
                iVar11 = iVar11 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar10 - lVar13 != lVar14);
              uVar8 = 0xffffffff;
              iVar6 = iVar10;
            }
            uVar16 = (ulonglong)(iVar6 + 1);
            iVar6 = iVar4;
          }
          else {
LAB_1475475dc:
            uVar15 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar15 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar6) {
              iVar6 = iVar4;
            }
          }
        } while (iVar6 != iVar3);
      }
LAB_147547613:
      *(undefined1 *)(param_2 + 0x289) = 0;
    }
    if ((*(uint *)(param_2 + 0x1f0) == (uint)uVar2 ||
         (int)*(uint *)(param_2 + 0x1f0) < (int)(uint)uVar2) ||
       ((*(uint *)(param_2 + 0x1d0 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0))
    goto LAB_147547430;
  }
  local_58 = param_1[2];
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14009ee5c(param_2,&local_58);
LAB_147547452:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147547668 FUN_147547668 body=5 status=ok
// SIG undefined FUN_147547668(void)

void FUN_147547668(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



// FUNCTION 14754766e FUN_14754766e body=5 status=ok
// SIG undefined FUN_14754766e(void)

void FUN_14754766e(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



// FUNCTION 147547674 FUN_147547674 body=168 status=ok
// SIG undefined FUN_147547674(void)

void FUN_147547674(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  longlong lVar4;
  
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  uVar2 = *(ushort *)(param_2 + 0x34);
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x150) == 0) {
    lVar4 = param_1 + 0x140;
  }
  bVar3 = (byte)uVar2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  *(undefined1 *)(param_1 + 0x170) = 1;
  FUN_14754771c((ulonglong)((uint)uVar2 * 0x28) + *(longlong *)(param_1 + 0xb8));
  FUN_1432d816c(param_1 + 0xb8,(uint)uVar2);
  *(undefined2 *)(param_2 + 0x34) = 0xffff;
  FUN_140831aae(param_1 + 0xf0,*(undefined2 *)(param_2 + 0x36));
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
  FUN_1409099e8(param_1 + 0x140);
  return;
}



// FUNCTION 14754771c FUN_14754771c body=101 status=ok
// SIG undefined FUN_14754771c(void)

void FUN_14754771c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014754777d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147547786 FUN_147547786 body=4 status=ok
// SIG undefined FUN_147547786(void)

void FUN_147547786(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2;
  return;
}



// FUNCTION 14754778a FUN_14754778a body=36 status=ok
// SIG undefined FUN_14754778a(void)

void FUN_14754778a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    param_1 = DAT_14c951640;
  }
  lVar1 = FUN_1475477ae(param_1);
  *(undefined4 *)(lVar1 + 0x700) = param_2;
  return;
}



// FUNCTION 1475477ae FUN_1475477ae body=175 status=ok
// SIG undefined FUN_1475477ae(void)

undefined8 FUN_1475477ae(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1407f013e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754785e FUN_14754785e body=125 status=ok
// SIG undefined FUN_14754785e(void)

void FUN_14754785e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  cVar1 = FUN_140d64b1c(0,param_2,&local_38,1);
  FUN_1449db362(&local_38);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x80) == 0) {
      *(undefined4 *)(param_1 + 0x80) = DAT_14cab2be4;
    }
    FUN_14029f2bc(param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475478dc FUN_1475478dc body=381 status=ok
// SIG undefined FUN_1475478dc(void)

void FUN_1475478dc(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar1 = *(undefined1 *)(param_1 + 0x8a);
  *(undefined1 *)(param_1 + 0x8a) = 1;
  lVar5 = *(longlong *)(param_2 + 0x548);
  *(longlong *)(param_2 + 0x270) = *(longlong *)(param_2 + 0x270) + 1;
  plVar8 = (longlong *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_147547a5a(plVar8,iVar2);
  if ((longlong)iVar2 != 0) {
    lVar9 = 0;
    do {
      uVar3 = *(uint *)(lVar6 + lVar9);
      uVar7 = uVar3 & 0xffff;
      if ((int)uVar7 < *(int *)(lVar5 + 0x30)) {
        lVar10 = *(longlong *)(lVar5 + 0x28);
        if (*(longlong *)(lVar5 + 0x28) == 0) {
          lVar10 = lVar5 + 0x18;
        }
        if ((*(uint *)(lVar10 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          if (uVar3 >> 0x10 ==
              (uint)*(ushort *)(*(longlong *)(lVar5 + 8) + 0x11c + (ulonglong)uVar7 * 0x128)) {
            lVar10 = *(longlong *)(lVar5 + 8) + (ulonglong)uVar7 * 0x128;
            if ((*(byte *)(lVar6 + 4 + lVar9) & 6) == 0) {
              if (*(int *)(lVar10 + 0x122) == *(int *)(lVar10 + 0x11a)) {
                iVar4 = *(int *)(param_1 + 0x30);
                *(uint *)(param_1 + 0x30) = iVar4 + 1U;
                if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
                  FUN_14009d478(plVar8,iVar4);
                }
                *(undefined8 *)(*plVar8 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar6 + lVar9);
                FUN_1400a03e4(lVar10,lVar10 + 0x68);
              }
            }
            else {
              if ((*(byte *)(lVar10 + 0x126) & 2) == 0) {
                FUN_14009ff54(lVar10);
              }
              iVar4 = *(int *)(param_1 + 0x30);
              *(uint *)(param_1 + 0x30) = iVar4 + 1U;
              if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
                FUN_14009d478(plVar8,iVar4);
              }
              *(undefined8 *)(*plVar8 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar6 + lVar9);
            }
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  *(undefined1 *)(param_1 + 0x8a) = uVar1;
  return;
}



// FUNCTION 147547a5a FUN_147547a5a body=41 status=ok
// SIG undefined FUN_147547a5a(void)

void FUN_147547a5a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14755034c();
  return;
}



// FUNCTION 147547a84 FUN_147547a84 body=265 status=ok
// SIG undefined FUN_147547a84(void)

undefined8 FUN_147547a84(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x80) == 0) && (*(char *)(param_1 + 0x7c) == '\0')) {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(param_1 + 0x7c);
      *(undefined1 *)(param_1 + 0x7c) = 0x10;
      *(undefined4 *)(lVar2 + 0x29c) = 0;
      if (DAT_14c760ff1 == '\x01') {
        FUN_14009e47c(lVar2 + 0x2a0,lVar2 + 0x28);
      }
      local_40 = 0;
      local_38 = 0x400000000;
      FUN_14009d97a(lVar2 + 0x2a0);
      FUN_14009f68e(lVar2 + 0x2a0,lVar2 + 0x308,lVar2,local_60);
      if ((int)local_38 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_60,0x101);
      }
      *(undefined4 *)(lVar2 + 0x29c) = 1;
      FUN_14588b8d6(local_60);
      *(undefined1 *)(param_1 + 0x7c) = uVar1;
      uVar3 = 1;
      goto LAB_147547aa8;
    }
  }
  uVar3 = 0;
LAB_147547aa8:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147547b8e FUN_147547b8e body=81 status=ok
// SIG undefined FUN_147547b8e(void)

undefined8 * FUN_147547b8e(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147547be0(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147547be0 FUN_147547be0 body=114 status=ok
// SIG undefined FUN_147547be0(void)

longlong * FUN_147547be0(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  UNLOCK();
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_3;
  bVar2 = *(byte *)((longlong)param_2 + 0x1c);
  param_1[2] = *param_2;
  *(uint *)(param_1 + 3) = (uint)bVar2;
  return param_1;
}



// FUNCTION 147547c5a FUN_147547c5a body=648 status=ok
// SIG undefined FUN_147547c5a(void)

longlong * FUN_147547c5a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab2c78) && (FUN_144b3d300(&DAT_14cab2c78), DAT_14cab2c78 == -1)) {
    plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a4758a0;
    DAT_14cab2c68 = plVar6 + 2;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x80;
    *(undefined4 *)(plVar6 + 8) = 0xffffffff;
    DAT_14cab2c70 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    atexit((_func_5014 *)&LAB_1432d6ac2);
    _Init_thread_footer(&DAT_14cab2c78);
  }
  *param_1 = 0;
  plVar6 = DAT_14cab2c70;
  param_1[1] = (longlong)DAT_14cab2c70;
  if (plVar6 == (longlong *)0x0) {
LAB_147547cce:
    plVar5 = (longlong *)*param_1;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) {
        param_1[1] = 0;
        goto LAB_147547cce;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      plVar5 = DAT_14cab2c68;
      UNLOCK();
    } while (!bVar7);
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) goto LAB_147547cce;
    *param_1 = (longlong)DAT_14cab2c68;
  }
  if (plVar5 != (longlong *)0x0) {
    return param_1;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a4758a0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
  *(undefined4 *)(plVar5 + 8) = 0xffffffff;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    if (plVar6 == (longlong *)0x0) goto LAB_147547d9b;
    param_1[1] = 0;
LAB_147547d5c:
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
    if (plVar5 == (longlong *)0x0) goto LAB_147547d9b;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)param_1[1];
    *param_1 = (longlong)(plVar5 + 2);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_147547d5c;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_147547d9b:
  DAT_14cab2c68 = (longlong *)*param_1;
  plVar6 = (longlong *)param_1[1];
  plVar5 = DAT_14cab2c70;
  if (DAT_14cab2c70 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    plVar1 = DAT_14cab2c70;
    plVar5 = plVar6;
    if (DAT_14cab2c70 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)DAT_14cab2c70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  DAT_14cab2c70 = plVar5;
  return param_1;
}



// FUNCTION 147547ee2 FUN_147547ee2 body=50 status=ok
// SIG undefined FUN_147547ee2(void)

void FUN_147547ee2(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  FUN_1409578bc((longlong)iVar1 * 0x128 + *plVar2);
  FUN_1432d8de8(plVar2,iVar1,1);
  return;
}



// FUNCTION 147547f20 FUN_147547f20 body=338 status=ok
// SIG undefined FUN_147547f20(void)

longlong * FUN_147547f20(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined4)*param_4;
  uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_40 = (undefined4)param_4[1];
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar3 = FUN_144aff2e5(&local_48,0x2e,0);
  uVar5 = *(uint *)(param_4 + 1);
  if (uVar3 != 0xffffffff) {
    if ((int)uVar3 < (int)uVar5) {
      uVar5 = uVar3;
    }
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
  }
  FUN_1446f82e2(&local_48,uVar5,*param_4,0);
  if (CONCAT44(uStack_44,local_48) != 0) {
    for (lVar6 = *(longlong *)(param_2 + 0x70); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x48)) {
      if (*(longlong *)(lVar6 + 0x20) == CONCAT44(uStack_44,local_48)) {
        param_3 = param_3 + *(int *)(lVar6 + 0x44);
        if (uVar3 == 0xffffffff) {
          *param_1 = lVar6;
          param_1[1] = param_3;
          goto LAB_147548012;
        }
        lVar7 = *(longlong *)(lVar6 + 8);
        lVar4 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar4 || !bVar8) goto LAB_147547fff;
          goto LAB_147547feb;
        }
        if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_147548003;
        break;
      }
    }
  }
  goto LAB_14754800c;
  while (lVar7 != 0) {
LAB_147547feb:
    lVar7 = *(longlong *)(lVar7 + 0x30);
    bVar8 = lVar7 != 0;
    if (lVar7 == lVar4) break;
  }
LAB_147547fff:
  if (bVar8) {
LAB_147548003:
    if (*(longlong *)(lVar6 + 0x70) != 0) {
      iVar1 = (int)param_4[1];
      iVar2 = ~uVar3 + iVar1;
      if (iVar1 <= (int)(~uVar3 + iVar1)) {
        iVar2 = iVar1;
      }
      local_50 = 0;
      if (0 < iVar2) {
        local_50 = iVar2;
      }
      local_58 = ((longlong)iVar1 * 2 + *param_4) - (ulonglong)(uint)(local_50 * 2);
      FUN_147547f20(param_1,*(longlong *)(lVar6 + 0x70),param_3);
      goto LAB_147548012;
    }
  }
LAB_14754800c:
  *param_1 = 0;
  param_1[1] = 0;
LAB_147548012:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147548076 FUN_147548076 body=38 status=ok
// SIG undefined FUN_147548076(void)

undefined8 FUN_147548076(undefined8 param_1,int param_2)

{
  FUN_140956c04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475480a0 FUN_1475480a0 body=56 status=ok
// SIG undefined FUN_1475480a0(void)

void FUN_1475480a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x6f8);
  if (cVar1 != '\0') {
    FUN_14479d2ce(param_1 + 0x6f8);
    return;
  }
  FUN_14475ec7e(param_1);
  return;
}



// FUNCTION 147548100 FUN_147548100 body=90 status=ok
// SIG undefined FUN_147548100(void)

undefined1 FUN_147548100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147548182 FUN_147548182 body=59 status=ok
// SIG undefined FUN_147548182(void)

undefined8 FUN_147548182(longlong *param_1)

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



// FUNCTION 14754824c FUN_14754824c body=54 status=ok
// SIG undefined FUN_14754824c(void)

undefined1 FUN_14754824c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14754834a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1475482aa FUN_1475482aa body=59 status=ok
// SIG undefined FUN_1475482aa(void)

undefined8 FUN_1475482aa(longlong *param_1)

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



// FUNCTION 14754834a FUN_14754834a body=91 status=ok
// SIG undefined FUN_14754834a(void)

longlong * FUN_14754834a(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1475483d6 FUN_1475483d6 body=112 status=ok
// SIG undefined FUN_1475483d6(void)

undefined1 FUN_1475483d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar8);
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 2) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar3;
      *(undefined4 *)(plVar1 + 3) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14754846e FUN_14754846e body=59 status=ok
// SIG undefined FUN_14754846e(void)

undefined8 FUN_14754846e(longlong *param_1)

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



// FUNCTION 147548546 FUN_147548546 body=100 status=ok
// SIG undefined FUN_147548546(void)

undefined1 FUN_147548546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475485d2 FUN_1475485d2 body=59 status=ok
// SIG undefined FUN_1475485d2(void)

undefined8 FUN_1475485d2(longlong *param_1)

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



// FUNCTION 147548674 FUN_147548674 body=79 status=ok
// SIG undefined FUN_147548674(void)

undefined8 * FUN_147548674(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a473c50;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475486c4 FUN_1475486c4 body=78 status=ok
// SIG undefined FUN_1475486c4(void)

undefined8 FUN_1475486c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147548714();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147548714 FUN_147548714 body=359 status=ok
// SIG undefined FUN_147548714(void)

undefined2 * FUN_147548714(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58[0] = param_4;
  FUN_140560902(local_58,param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  local_a8 = local_58;
  FUN_140ae801a(*(longlong *)(param_3 + 0x230) + 0x60,*(char *)(param_1 + 0x48) * '\x02' + '\x01',
                param_4,param_4);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) != 0) {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_140560180(local_78,param_1 + 8);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar1 + lVar2) + 8))
                (*(longlong **)((longlong)puVar1 + lVar2),local_78,&local_80);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_88;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14754887c FUN_14754887c body=83 status=ok
// SIG undefined FUN_14754887c(void)

void FUN_14754887c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a473c70;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a473c90;
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1475488d0 FUN_1475488d0 body=38 status=ok
// SIG undefined FUN_1475488d0(void)

undefined8 FUN_1475488d0(undefined8 param_1,int param_2)

{
  FUN_14754887c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475488f6 FUN_1475488f6 body=57 status=ok
// SIG undefined FUN_1475488f6(void)

undefined8 * FUN_1475488f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a473c90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147548936 FUN_147548936 body=29 status=ok
// SIG undefined FUN_147548936(void)

undefined8 FUN_147548936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147548954 FUN_147548954 body=108 status=ok
// SIG undefined FUN_147548954(void)

void FUN_147548954(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 * 2,0);
      iVar2 = (int)(uVar3 >> 1);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1475489c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1475489c2 FUN_1475489c2 body=130 status=ok
// SIG undefined FUN_1475489c2(void)

void FUN_1475489c2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,2);
  return;
}



// FUNCTION 147548a44 FUN_147548a44 body=204 status=ok
// SIG undefined FUN_147548a44(void)

void FUN_147548a44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0xc + (longlong)param_2 * 0x10);
  iVar7 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar7 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar8 * 4);
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = *(int *)(lVar2 + 8 + lVar8 * 0x10);
    } while (iVar7 != param_2);
    puVar5 = (undefined4 *)(lVar2 + lVar8 * 0x10 + 8);
  }
  *puVar5 = *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147548b10 FUN_147548b10 body=114 status=ok
// SIG undefined FUN_147548b10(void)

void FUN_147548b10(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147548b82 FUN_147548b82 body=274 status=ok
// SIG undefined FUN_147548b82(void)

void FUN_147548b82(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  uVar4 = *(uint *)(param_2 + 0x20);
  if ((ulonglong)uVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar9 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar9 = 0xffffffff;
    }
    uVar2 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
    if ((int)uVar4 % 0x20 < 1) {
      uVar2 = 0xffffffff;
    }
    if (0 < (int)uVar4) {
      uVar8 = (ulonglong)uVar4 + 0x1f >> 5;
      iVar3 = (int)uVar8;
      uVar4 = iVar3 - 1;
      iVar12 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar12 = iVar1 + 0x1f;
      }
      uVar7 = 0;
      uVar5 = -(uint)(uVar4 != 0) | uVar2;
      uVar11 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar11 = uVar9;
      }
      do {
        uVar10 = 0;
        if ((longlong)uVar7 < (longlong)(iVar12 >> 5)) {
          uVar10 = uVar11 & *(uint *)(param_1 + uVar7 * 4);
        }
        uVar6 = uVar5 & *(uint *)(param_2 + uVar7 * 4);
        uVar11 = 0xffffffff;
        if (uVar4 == uVar7) {
          uVar11 = uVar2;
        }
        uVar5 = 0xffffffff;
        if (iVar3 - 2 == uVar7) {
          uVar5 = uVar2;
        }
        *(uint *)(param_2 + uVar7 * 4) = uVar11 & (uVar6 ^ uVar10);
        bVar13 = (iVar12 >> 5) - 2 == uVar7;
        uVar7 = uVar7 + 1;
        uVar11 = 0xffffffff;
        if (bVar13) {
          uVar11 = uVar9;
        }
      } while (uVar8 != uVar7);
    }
  }
  return;
}



// FUNCTION 147548c94 FUN_147548c94 body=138 status=ok
// SIG undefined FUN_147548c94(void)

void FUN_147548c94(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147548d1e FUN_147548d1e body=128 status=ok
// SIG undefined FUN_147548d1e(void)

void FUN_147548d1e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cab27d8;
  if (DAT_14cab280c != 0) {
    *(int *)(DAT_14cab27d8 + (longlong)DAT_14cab2808 * 0xc) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xc) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cab280c) {
    iVar4 = DAT_14cab2808;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xc) = iVar4;
  DAT_14cab280c = DAT_14cab280c + 1;
  puVar3 = &DAT_14cab27e8;
  if (DAT_14cab27f8 != (undefined *)0x0) {
    puVar3 = DAT_14cab27f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cab2808 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147548de4 FUN_147548de4 body=54 status=ok
// SIG undefined FUN_147548de4(void)

undefined1 FUN_147548de4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147548ef6(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147548e42 FUN_147548e42 body=59 status=ok
// SIG undefined FUN_147548e42(void)

undefined8 FUN_147548e42(longlong *param_1)

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



// FUNCTION 147548e88 FUN_147548e88 body=32 status=ok
// SIG undefined FUN_147548e88(void)

void FUN_147548e88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14754771c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147548ef6 FUN_147548ef6 body=183 status=ok
// SIG undefined FUN_147548ef6(void)

undefined8 * FUN_147548ef6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar5;
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
  uVar3 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[3];
  param_1[2] = uVar3;
  param_1[3] = lVar5;
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
  lVar5 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[4];
    }
  }
  param_1[4] = lVar5;
  return param_1;
}



// FUNCTION 147549012 FUN_147549012 body=54 status=ok
// SIG undefined FUN_147549012(void)

undefined1 FUN_147549012(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147549124(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147549070 FUN_147549070 body=59 status=ok
// SIG undefined FUN_147549070(void)

undefined8 FUN_147549070(longlong *param_1)

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



// FUNCTION 1475490b6 FUN_1475490b6 body=32 status=ok
// SIG undefined FUN_1475490b6(void)

void FUN_1475490b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_140955ee2(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147549124 FUN_147549124 body=202 status=ok
// SIG undefined FUN_147549124(void)

undefined8 * FUN_147549124(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140955f96(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1475491ee(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1475491ee FUN_1475491ee body=96 status=ok
// SIG undefined FUN_1475491ee(void)

undefined8 * FUN_1475491ee(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1475492a8 FUN_1475492a8 body=59 status=ok
// SIG undefined FUN_1475492a8(void)

undefined8 FUN_1475492a8(longlong *param_1)

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



// FUNCTION 1475492f4 FUN_1475492f4 body=38 status=ok
// SIG undefined FUN_1475492f4(void)

void FUN_1475492f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_140955db6(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 14754936a FUN_14754936a body=29 status=ok
// SIG undefined FUN_14754936a(void)

undefined8 FUN_14754936a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147549388 FUN_147549388 body=29 status=ok
// SIG undefined FUN_147549388(void)

undefined8 FUN_147549388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475493a6 FUN_1475493a6 body=104 status=ok
// SIG undefined FUN_1475493a6(void)

longlong * FUN_1475493a6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(ulonglong *)(lVar1 + 0x10);
    if (*(ulonglong *)(lVar1 + 0x10) < (ulonglong)param_1[1]) {
      uVar2 = param_1[1];
    }
    *(ulonglong *)(lVar1 + 0x10) = uVar2;
    LOCK();
    *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[2] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14754946c FUN_14754946c body=132 status=ok
// SIG undefined FUN_14754946c(void)

undefined1 FUN_14754946c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    bVar12 = DAT_14c950c29;
    do {
      lVar13 = *(longlong *)(param_3 + lVar14);
      if ((bVar12 & 1) != 0) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + lVar14);
          bVar12 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar14);
      *plVar1 = lVar13;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar14);
      plVar2 = (longlong *)(param_3 + 0x10 + lVar14);
      lVar13 = plVar2[1];
      plVar1[2] = *plVar2;
      plVar1[3] = lVar13;
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar14);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x29 + lVar14);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      *(undefined4 *)(plVar1 + 4) = *puVar3;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar5;
      *(undefined4 *)(plVar1 + 5) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x29) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x2d) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x31) = uVar10;
      *(undefined4 *)((longlong)plVar1 + 0x35) = uVar11;
      lVar14 = lVar14 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147549518 FUN_147549518 body=59 status=ok
// SIG undefined FUN_147549518(void)

undefined8 FUN_147549518(longlong *param_1)

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



// FUNCTION 1475495ee FUN_1475495ee body=54 status=ok
// SIG undefined FUN_1475495ee(void)

undefined1 FUN_1475495ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147549706(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14754964c FUN_14754964c body=59 status=ok
// SIG undefined FUN_14754964c(void)

undefined8 FUN_14754964c(longlong *param_1)

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



// FUNCTION 147549692 FUN_147549692 body=37 status=ok
// SIG undefined FUN_147549692(void)

void FUN_147549692(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147549706 FUN_147549706 body=79 status=ok
// SIG undefined FUN_147549706(void)

undefined8 * FUN_147549706(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147549756(param_1,iVar1);
      FUN_1475497b8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147549756 FUN_147549756 body=98 status=ok
// SIG undefined FUN_147549756(void)

void FUN_147549756(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475497b8 FUN_1475497b8 body=126 status=ok
// SIG undefined FUN_1475497b8(void)

void FUN_1475497b8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  
  if (param_3 != 0) {
    lVar12 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar12);
      *(longlong *)(param_1 + lVar12) = lVar2;
      if ((lVar2 != 0 & bVar11) == 1) {
        FUN_1456cec3c();
        bVar11 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar12;
      lVar1 = param_2 + lVar12;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      uVar10 = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = uVar10;
      uVar3 = *(undefined4 *)(lVar1 + 0x24);
      uVar4 = *(undefined4 *)(lVar1 + 0x28);
      uVar5 = *(undefined4 *)(lVar1 + 0x2c);
      uVar6 = *(undefined4 *)(lVar1 + 0x29);
      uVar7 = *(undefined4 *)(lVar1 + 0x2d);
      uVar8 = *(undefined4 *)(lVar1 + 0x31);
      uVar9 = *(undefined4 *)(lVar1 + 0x35);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)(lVar2 + 0x24) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      *(undefined4 *)(lVar2 + 0x29) = uVar6;
      *(undefined4 *)(lVar2 + 0x2d) = uVar7;
      *(undefined4 *)(lVar2 + 0x31) = uVar8;
      *(undefined4 *)(lVar2 + 0x35) = uVar9;
      lVar12 = lVar12 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475498a4 FUN_1475498a4 body=65 status=ok
// SIG undefined FUN_1475498a4(void)

undefined2 FUN_1475498a4(longlong *param_1,undefined2 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754994c FUN_14754994c body=119 status=ok
// SIG undefined FUN_14754994c(void)

void FUN_14754994c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1475499c4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1475499c4 FUN_1475499c4 body=141 status=ok
// SIG undefined FUN_1475499c4(void)

void FUN_1475499c4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 147549a51 FUN_147549a51 body=748 status=ok
// SIG undefined FUN_147549a51(void)

void FUN_147549a51(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_398 [40];
  longlong *local_370;
  int local_364;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_358;
    do {
      puVar10 = (undefined8 *)*plVar8;
      puVar11 = (undefined8 *)plVar8[1];
      local_364 = (int)plVar8[2];
      uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 4) + 1;
      puVar12 = puVar10;
      puVar13 = puVar11;
      local_370 = plVar8;
      if (local_364 != 0) {
LAB_147549b21:
        plVar8 = local_370;
        if (8 < (int)uVar6) {
          uVar1 = puVar10[(ulonglong)(uVar6 >> 1) * 2];
          uVar2 = (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1];
          uVar3 = puVar10[1];
          puVar10[(ulonglong)(uVar6 >> 1) * 2] = *puVar10;
          (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          puVar15 = puVar13 + 2;
          puVar9 = puVar10;
          local_360 = puVar12;
          local_58 = uVar1;
          uStack_50 = uVar2;
          do {
            puVar4 = puVar9 + 2;
            puVar14 = puVar9 + 2;
            do {
              puVar9 = puVar14;
              puVar12 = puVar4;
              if (puVar13 < puVar9) break;
              cVar5 = (*(code *)*param_3)(param_3[1],puVar10,puVar9);
              puVar4 = puVar12 + 2;
              puVar14 = puVar9 + 2;
            } while (cVar5 == '\0');
            puVar4 = puVar15 + -4;
            do {
              puVar14 = puVar15;
              puVar7 = puVar4;
              puVar15 = puVar14 + -2;
              if (puVar15 <= puVar10) break;
              cVar5 = (*(code *)*param_3)(param_3[1],puVar15,puVar10);
              puVar4 = puVar7 + -2;
            } while (cVar5 == '\0');
            if (puVar15 < puVar9) goto LAB_147549bde;
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            uVar3 = puVar14[-1];
            *puVar9 = *puVar15;
            puVar9[1] = uVar3;
            local_58._0_4_ = (undefined4)uVar1;
            local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar2;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar15 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
            local_58 = uVar1;
            uStack_50 = uVar2;
          } while( true );
        }
        for (; local_370 = plVar8, puVar12 = puVar10, puVar11 = puVar10, puVar10 < puVar13;
            puVar13 = puVar13 + -2) {
          while (puVar15 = puVar12, puVar11 = puVar11 + 2, puVar11 <= puVar13) {
            cVar5 = (*(code *)*param_3)(param_3[1],puVar15,puVar11);
            puVar12 = puVar11;
            if (cVar5 == '\0') {
              puVar12 = puVar15;
            }
          }
          local_58 = *puVar15;
          uStack_50 = puVar15[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          uVar1 = puVar13[1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          plVar8 = local_370;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_147549d11;
      }
LAB_147549d2b:
      FUN_147549d3e(puVar10,uVar6,param_3);
      plVar8 = local_370;
LAB_147549d11:
      plVar8 = plVar8 + -3;
    } while (&local_358 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147549bde:
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = puVar14[-1];
  *puVar10 = *puVar15;
  puVar10[1] = uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
  local_364 = local_364 + -1;
  puVar14 = puVar14 + -4;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar7 - (longlong)local_360 < (longlong)puVar11 - (longlong)puVar12) {
    plVar8 = local_370;
    if (puVar9 < puVar13) {
      *local_370 = (longlong)puVar9;
      local_370[1] = (longlong)puVar13;
      *(int *)(local_370 + 2) = local_364;
      plVar8 = local_370 + 3;
    }
    puVar12 = puVar10;
    puVar11 = puVar7;
    if (puVar15 <= puVar10 + 2) goto LAB_147549d11;
  }
  else {
    if (puVar10 + 2 < puVar15) {
      *local_370 = (longlong)puVar10;
      local_370[1] = (longlong)puVar14;
      *(int *)(local_370 + 2) = local_364;
      local_370 = local_370 + 3;
    }
    plVar8 = local_370;
    puVar10 = puVar9;
    puVar14 = puVar13;
    puVar11 = puVar13;
    if (puVar13 <= puVar9) goto LAB_147549d11;
  }
  local_370 = plVar8;
  uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 4) + 1;
  puVar13 = puVar14;
  if (local_364 == 0) goto LAB_147549d2b;
  goto LAB_147549b21;
}



// FUNCTION 147549d3e FUN_147549d3e body=509 status=ok
// SIG undefined FUN_147549d3e(void)

void FUN_147549d3e(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar7;
joined_r0x000147549d88:
    do {
      iVar6 = iVar7 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar8 = iVar7 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           (cVar5 = (*(code *)*param_3)(param_3[1],param_1 + (longlong)iVar8 * 2,
                                        param_1 + (longlong)iVar6 * 2), cVar5 == '\0')) {
          iVar6 = iVar8;
        }
        puVar10 = param_1 + (longlong)iVar7 * 2;
        puVar11 = param_1 + (longlong)iVar6 * 2;
        cVar5 = (*(code *)*param_3)(param_3[1],puVar10,puVar11);
        if (cVar5 != '\0') {
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          iVar7 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x000147549d88;
        }
      }
      bVar13 = iVar9 != 0;
      iVar7 = iVar9 + -1;
      iVar9 = iVar7;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar12 * 2)[1];
      *param_1 = param_1[uVar12 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar12 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar6 = 1;
          iVar9 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar8 = iVar6;
            if (((longlong)iVar7 < (longlong)uVar12) &&
               (cVar5 = (*(code *)*param_3)(param_3[1],param_1 + (longlong)iVar7 * 2,
                                            param_1 + (longlong)iVar6 * 2), cVar5 == '\0')) {
              iVar8 = iVar7;
            }
            puVar10 = param_1 + (longlong)iVar9 * 2;
            puVar11 = param_1 + (longlong)iVar8 * 2;
            cVar5 = (*(code *)*param_3)(param_3[1],puVar10,puVar11);
            if (cVar5 == '\0') break;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar11[1];
            *puVar10 = *puVar11;
            puVar10[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar11 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
            iVar7 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar9 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar12;
          uVar12 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147549f3c FUN_147549f3c body=29 status=ok
// SIG undefined FUN_147549f3c(void)

undefined8 FUN_147549f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147549f5a FUN_147549f5a body=132 status=ok
// SIG undefined FUN_147549f5a(void)

void FUN_147549f5a(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 0x1c) == -1) {
    FUN_147549fe0(*(longlong *)(param_1 + 8) + 0x40,&local_38,1);
    *(undefined4 *)(param_2 + 0x1c) = local_38;
  }
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  FUN_14754a04a(*(longlong *)(param_1 + 8) + 0x40);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147549fe0 FUN_147549fe0 body=105 status=ok
// SIG undefined FUN_147549fe0(void)

int * FUN_147549fe0(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  *param_2 = iVar1;
  lVar3 = param_1[3];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14754a12e(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + lVar4 * 0xc) = (int)lVar3;
  *(undefined4 *)(lVar2 + 4 + lVar4 * 0xc) = 0;
  *(int *)(lVar2 + 8 + lVar4 * 0xc) = param_3;
  FUN_14754a0b8(param_1 + 2,param_3 + (int)param_1[3],1);
  return param_2;
}



// FUNCTION 14754a04a FUN_14754a04a body=109 status=ok
// SIG undefined FUN_14754a04a(void)

void FUN_14754a04a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)(*param_1 + (longlong)(int)param_2 * 0xc);
  iVar5 = piVar1[1];
  if (piVar1[2] <= iVar5) {
    iVar5 = piVar1[2] * 2;
    iVar6 = 2;
    if (2 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_14754a330(param_1,param_2,iVar6);
    iVar5 = piVar1[1];
  }
  iVar6 = *piVar1;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + 0x10 + ((longlong)iVar5 + (longlong)iVar6) * 0x18) = param_3[2];
  uVar4 = param_3[1];
  puVar2 = (undefined8 *)(lVar3 + ((longlong)iVar5 + (longlong)iVar6) * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 14754a0b8 FUN_14754a0b8 body=116 status=ok
// SIG undefined FUN_14754a0b8(void)

void FUN_14754a0b8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14754a1e6(param_1,iVar1);
    }
    FUN_14754a1c2((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14754a27a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14754a12e FUN_14754a12e body=147 status=ok
// SIG undefined FUN_14754a12e(void)

void FUN_14754a12e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754a1c2 FUN_14754a1c2 body=36 status=ok
// SIG undefined FUN_14754a1c2(void)

void FUN_14754a1c2(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0x80000000;
    *(undefined2 *)((longlong)param_1 + 0x14) = 0;
    *(undefined1 *)((longlong)param_1 + 0x16) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14754a1e6 FUN_14754a1e6 body=147 status=ok
// SIG undefined FUN_14754a1e6(void)

void FUN_14754a1e6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754a27a FUN_14754a27a body=63 status=ok
// SIG undefined FUN_14754a27a(void)

void FUN_14754a27a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14754a2ba(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 14754a2ba FUN_14754a2ba body=117 status=ok
// SIG undefined FUN_14754a2ba(void)

ulonglong FUN_14754a2ba(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14754a330 FUN_14754a330 body=118 status=ok
// SIG undefined FUN_14754a330(void)

void FUN_14754a330(longlong *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2;
  *(int *)(lVar2 + 8 + lVar3 * 0xc) = param_3;
  iVar1 = (int)param_1[3];
  FUN_14754a0b8(param_1 + 2,param_3 + iVar1,1);
  _Src = (void *)(param_1[2] + (longlong)*(int *)(lVar2 + lVar3 * 0xc) * 0x18);
  memmove((void *)(param_1[2] + (longlong)iVar1 * 0x18),_Src,
          (longlong)*(int *)(lVar2 + 4 + lVar3 * 0xc) * 0x18);
  FUN_14754a1c2(_Src,*(undefined4 *)(lVar2 + 4 + lVar3 * 0xc));
  *(int *)(lVar2 + lVar3 * 0xc) = iVar1;
  return;
}



// FUNCTION 14754a3b2 FUN_14754a3b2 body=243 status=ok
// SIG undefined FUN_14754a3b2(void)

void FUN_14754a3b2(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  if (param_3 >> 0x20 == 0 || (param_3 & 0xffffffff) != 0xffffffff) {
    lVar3 = param_2;
    if ((int)param_3 != -1) {
      lVar3 = ((longlong)param_3 >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) *
              0x20 + *(longlong *)(param_2 + 0x30);
    }
    param_1[1] = lVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    while( true ) {
      if ((lVar3 == 0) ||
         (((longlong)*(int *)(lVar3 + 0x1c) != -1 &&
          (0 < *(int *)(*(longlong *)(param_2 + 0x40) + 4 + (longlong)*(int *)(lVar3 + 0x1c) * 0xc))
          ))) {
        return;
      }
      if ((*(int *)(lVar3 + 0x10) == -1) && (*(int *)(lVar3 + 0x14) != 0)) break;
      plVar1 = (longlong *)(lVar3 + 0x10);
      iVar2 = (int)*plVar1;
      lVar3 = param_2;
      if (iVar2 != -1) {
        lVar3 = (*plVar1 >> 0x20) * 0x20 +
                (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 0xc) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
      param_1[1] = lVar3;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14754a4a6 FUN_14754a4a6 body=147 status=ok
// SIG undefined FUN_14754a4a6(void)

void FUN_14754a4a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754a53a FUN_14754a53a body=29 status=ok
// SIG undefined FUN_14754a53a(void)

undefined8 FUN_14754a53a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a5b0 FUN_14754a5b0 body=29 status=ok
// SIG undefined FUN_14754a5b0(void)

undefined8 FUN_14754a5b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a5ce FUN_14754a5ce body=291 status=ok
// SIG undefined FUN_14754a5ce(void)

void FUN_14754a5ce(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754a60d;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754a60d:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754a650;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754a650:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754a6da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754a6f2 FUN_14754a6f2 body=29 status=ok
// SIG undefined FUN_14754a6f2(void)

undefined8 FUN_14754a6f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a762 FUN_14754a762 body=53 status=ok
// SIG undefined FUN_14754a762(void)

void FUN_14754a762(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14754a797(param_2,param_3);
      param_3 = param_3 + 4;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754a797 FUN_14754a797 body=240 status=ok
// SIG undefined FUN_14754a797(void)

void FUN_14754a797(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  uVar1 = FUN_146339f22();
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,uVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754a888 FUN_14754a888 body=31 status=ok
// SIG undefined FUN_14754a888(void)

undefined8 FUN_14754a888(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a8a8 FUN_14754a8a8 body=29 status=ok
// SIG undefined FUN_14754a8a8(void)

undefined8 FUN_14754a8a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a91a FUN_14754a91a body=31 status=ok
// SIG undefined FUN_14754a91a(void)

undefined8 FUN_14754a91a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a93a FUN_14754a93a body=29 status=ok
// SIG undefined FUN_14754a93a(void)

undefined8 FUN_14754a93a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a9ac FUN_14754a9ac body=31 status=ok
// SIG undefined FUN_14754a9ac(void)

undefined8 FUN_14754a9ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754a9cc FUN_14754a9cc body=29 status=ok
// SIG undefined FUN_14754a9cc(void)

undefined8 FUN_14754a9cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754aa3e FUN_14754aa3e body=31 status=ok
// SIG undefined FUN_14754aa3e(void)

undefined8 FUN_14754aa3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754aa5e FUN_14754aa5e body=291 status=ok
// SIG undefined FUN_14754aa5e(void)

void FUN_14754aa5e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754aa9d;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754aa9d:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754aae0;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754aae0:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ab6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754ab82 FUN_14754ab82 body=29 status=ok
// SIG undefined FUN_14754ab82(void)

undefined8 FUN_14754ab82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754ac0c FUN_14754ac0c body=294 status=ok
// SIG undefined FUN_14754ac0c(void)

void FUN_14754ac0c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ac4b;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754ac4b:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ac8e;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754ac8e:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ad1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754ad32 FUN_14754ad32 body=29 status=ok
// SIG undefined FUN_14754ad32(void)

undefined8 FUN_14754ad32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754adb8 FUN_14754adb8 body=29 status=ok
// SIG undefined FUN_14754adb8(void)

undefined8 FUN_14754adb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754add6 FUN_14754add6 body=311 status=ok
// SIG undefined FUN_14754add6(void)

void FUN_14754add6(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ae15;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754ae15:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ae58;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754ae58:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar4 = (undefined8 *)((longlong)(int)param_2[1] * 0xc + *plVar8);
    lVar3 = 0;
    do {
      lVar6 = (longlong)*(int *)(*param_4 + lVar3 * 4);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar5 + 8 + lVar6 * 0xc);
      *puVar4 = *(undefined8 *)(lVar5 + lVar6 * 0xc);
      lVar3 = lVar3 + 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    } while (lVar3 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754aef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754af0e FUN_14754af0e body=29 status=ok
// SIG undefined FUN_14754af0e(void)

undefined8 FUN_14754af0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754af7e FUN_14754af7e body=29 status=ok
// SIG undefined FUN_14754af7e(void)

undefined8 FUN_14754af7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


