// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14800dac0 FUN_14800dac0 body=109 status=ok
// SIG undefined FUN_14800dac0(void)

void FUN_14800dac0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 14800db2e FUN_14800db2e body=113 status=ok
// SIG undefined FUN_14800db2e(void)

void FUN_14800db2e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 14800dba0 FUN_14800dba0 body=109 status=ok
// SIG undefined FUN_14800dba0(void)

void FUN_14800dba0(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,0x10);
  }
  return;
}



// FUNCTION 14800dc0e FUN_14800dc0e body=113 status=ok
// SIG undefined FUN_14800dc0e(void)

void FUN_14800dc0e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14800dc80 FUN_14800dc80 body=109 status=ok
// SIG undefined FUN_14800dc80(void)

void FUN_14800dc80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 14800dcee FUN_14800dcee body=96 status=ok
// SIG undefined FUN_14800dcee(void)

void FUN_14800dcee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 14800ddbe FUN_14800ddbe body=110 status=ok
// SIG undefined FUN_14800ddbe(void)

void FUN_14800ddbe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_14800de2e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14800de2e FUN_14800de2e body=132 status=ok
// SIG undefined FUN_14800de2e(void)

void FUN_14800de2e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 14800deb2 FUN_14800deb2 body=146 status=ok
// SIG undefined FUN_14800deb2(void)

longlong FUN_14800deb2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_14800df46();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x48 != 0) goto LAB_14800def1;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_14800e050(param_1,&local_2c,param_2);
  lVar2 = (longlong)local_2c;
  lVar3 = *param_1;
LAB_14800def1:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x48 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800df46 FUN_14800df46 body=143 status=ok
// SIG undefined FUN_14800df46(void)

int FUN_14800df46(longlong *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1;
        if (*(int *)(lVar4 + 0x28 + lVar5 * 0x48) == *(int *)(param_3 + 0x28)) {
          lVar4 = lVar4 + lVar5 * 0x48;
          lVar7 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar7 = param_3;
          }
          lVar6 = *(longlong *)(lVar4 + 0x20);
          if (lVar6 == 0) {
            lVar6 = lVar4;
          }
          cVar2 = FUN_14800dfd5(lVar6,lVar7);
          if (cVar2 != '\0') {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x40 + lVar5 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14800dfd5 FUN_14800dfd5 body=68 status=ok
// SIG undefined FUN_14800dfd5(void)

char FUN_14800dfd5(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_14800e01a(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + 8;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 14800e01a FUN_14800e01a body=53 status=ok
// SIG undefined FUN_14800e01a(void)

ulonglong FUN_14800e01a(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14800e050 FUN_14800e050 body=282 status=ok
// SIG undefined FUN_14800e050(void)

undefined4 * FUN_14800e050(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14800e16c(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  FUN_14800e2d8(local_40,*param_4);
  *(undefined4 *)(local_40 + 0x38) = *puVar1;
  *(undefined4 *)(local_40 + 0x40) = 0xffffffff;
  cVar2 = FUN_14800e252(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x44) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x40) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14800e412(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800e16c FUN_14800e16c body=230 status=ok
// SIG undefined FUN_14800e16c(void)

int * FUN_14800e16c(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 14800e252 FUN_14800e252 body=133 status=ok
// SIG undefined FUN_14800e252(void)

undefined8 FUN_14800e252(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_14800df46(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    if (*(longlong *)(puVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14800e3a0(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 14800e2d8 FUN_14800e2d8 body=110 status=ok
// SIG undefined FUN_14800e2d8(void)

void * FUN_14800e2d8(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  _Src = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    FUN_14800e346(param_1,iVar1);
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
  return param_1;
}



// FUNCTION 14800e346 FUN_14800e346 body=90 status=ok
// SIG undefined FUN_14800e346(void)

void FUN_14800e346(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 5) {
    iVar3 = 4;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_14800e377;
  }
  iVar2 = iVar3;
  FUN_14800de2e(param_1,0,iVar2);
LAB_14800e377:
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}



// FUNCTION 14800e3a0 FUN_14800e3a0 body=114 status=ok
// SIG undefined FUN_14800e3a0(void)

void FUN_14800e3a0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14800e412 FUN_14800e412 body=420 status=ok
// SIG undefined FUN_14800e412(void)

void FUN_14800e412(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x30 + lVar6 * 0x48);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 14800e5b8 FUN_14800e5b8 body=132 status=ok
// SIG undefined FUN_14800e5b8(void)

void FUN_14800e5b8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800e63e FUN_14800e63e body=146 status=ok
// SIG undefined FUN_14800e63e(void)

void FUN_14800e63e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xe8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800e6d2 FUN_14800e6d2 body=668 status=ok
// SIG undefined FUN_14800e6d2(void)

void FUN_14800e6d2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 14800e9b8 FUN_14800e9b8 body=57 status=ok
// SIG undefined FUN_14800e9b8(void)

undefined8 * FUN_14800e9b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad29c30;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800e9f2 FUN_14800e9f2 body=132 status=ok
// SIG undefined FUN_14800e9f2(void)

void FUN_14800e9f2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800ea78 FUN_14800ea78 body=112 status=ok
// SIG undefined FUN_14800ea78(void)

undefined8 * FUN_14800ea78(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad29c30;
  puVar2[3] = 0;
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 14800eae8 FUN_14800eae8 body=144 status=ok
// SIG undefined FUN_14800eae8(void)

void FUN_14800eae8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xf0);
  if (param_2 <= (int)uVar1) {
    iVar7 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xf4) < 3) {
        uVar3 = 4;
        if (4 < uVar1) {
          uVar3 = uVar1;
        }
        lVar4 = (longlong)(int)uVar3;
      }
      else {
        lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar4 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5 >> 4;
      iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar7 = 0x7fffffff;
      if ((int)uVar1 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    *(int *)(param_1 + 0xf4) = iVar7;
    FUN_14800eb7a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800eb7a FUN_14800eb7a body=141 status=ok
// SIG undefined FUN_14800eb7a(void)

void FUN_14800eb7a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe0,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0xe0),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe0,param_2,param_3,0x70);
  return;
}



// FUNCTION 14800ec08 FUN_14800ec08 body=116 status=ok
// SIG undefined FUN_14800ec08(void)

void FUN_14800ec08(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 4;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xf4)) {
    *(int *)(param_1 + 0xf4) = iVar4;
    FUN_14800eb7a(param_1,*(undefined4 *)(param_1 + 0xf0));
    return;
  }
  return;
}



// FUNCTION 14800ec7c FUN_14800ec7c body=400 status=ok
// SIG undefined FUN_14800ec7c(void)

longlong * FUN_14800ec7c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0xf0) * 0x70,
             (longlong)*(int *)(param_2 + 0xf4) * 0x70);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0xf0);
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
       (*(undefined4 *)(param_2 + 0xf0) = 0, *(int *)(param_2 + 0xf4) != 0)) {
      FUN_14800ec08(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x24924 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0xf0) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0xe0);
      if (*(longlong *)(param_2 + 0xe0) == 0) {
        lVar4 = param_2;
      }
      FUN_147fe64aa(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x70;
    } while (lVar7 < *(int *)(param_2 + 0xf0));
  }
  else {
    *(undefined4 *)(param_2 + 0xf0) = 0;
    if ((*(uint *)(param_2 + 0xf4) == local_2c) || (FUN_14800ec08(param_2), 0 < (int)local_2c)) {
      iVar5 = 0;
      do {
        uVar3 = FUN_14800ee0e(param_2);
        FUN_147fe64aa(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14800ee0e FUN_14800ee0e body=82 status=ok
// SIG undefined FUN_14800ee0e(void)

longlong FUN_14800ee0e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xf0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xf4) < iVar1 + 1U) {
    FUN_14800eae8(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x70 + lVar2;
  FUN_14800ee60(lVar2);
  return lVar2;
}



// FUNCTION 14800ee60 FUN_14800ee60 body=59 status=ok
// SIG undefined FUN_14800ee60(void)

void FUN_14800ee60(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3ff00000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x16) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 14800ee9c FUN_14800ee9c body=111 status=ok
// SIG undefined FUN_14800ee9c(void)

void FUN_14800ee9c(longlong param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x70,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 4;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (param_3 < iVar4) {
    FUN_14800eb7a(param_1,0,iVar4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xf4) = param_3;
  return;
}



// FUNCTION 14800ef0c FUN_14800ef0c body=311 status=ok
// SIG undefined FUN_14800ef0c(void)

undefined4 * FUN_14800ef0c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14800f044(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48 + 4;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 2;
  }
  local_48[0x24] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_14800f132(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x25] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x24] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14800f242(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800f044 FUN_14800f044 body=238 status=ok
// SIG undefined FUN_14800f044(void)

int * FUN_14800f044(longlong *param_1,int *param_2)

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
      FUN_141431dd2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 14800f132 FUN_14800f132 body=149 status=ok
// SIG undefined FUN_14800f132(void)

undefined8 FUN_14800f132(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xa0);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xa0) == *param_3) {
          memmove(_Dst,param_3,0x90);
          FUN_14800f1c8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14800f1c8 FUN_14800f1c8 body=122 status=ok
// SIG undefined FUN_14800f1c8(void)

void FUN_14800f1c8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 14800f242 FUN_14800f242 body=433 status=ok
// SIG undefined FUN_14800f242(void)

void FUN_14800f242(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xa0;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x94 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar7) =
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



// FUNCTION 14800f3f4 FUN_14800f3f4 body=73 status=ok
// SIG undefined FUN_14800f3f4(void)

void FUN_14800f3f4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14800f43e FUN_14800f43e body=9 status=ok
// SIG undefined FUN_14800f43e(void)

void FUN_14800f43e(longlong param_1)

{
  FUN_14800f466(param_1 + 0x10);
  return;
}



// FUNCTION 14800f448 FUN_14800f448 body=29 status=ok
// SIG undefined FUN_14800f448(void)

undefined8 FUN_14800f448(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800f466 FUN_14800f466 body=88 status=ok
// SIG undefined FUN_14800f466(void)

void FUN_14800f466(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad2a780;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14800f504(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014800f4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14800f4de FUN_14800f4de body=38 status=ok
// SIG undefined FUN_14800f4de(void)

undefined8 FUN_14800f4de(undefined8 param_1,int param_2)

{
  FUN_14800f466();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800f504 FUN_14800f504 body=54 status=ok
// SIG undefined FUN_14800f504(void)

void FUN_14800f504(longlong *param_1)

{
  FUN_14800f53a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14800f53a FUN_14800f53a body=128 status=ok
// SIG undefined FUN_14800f53a(void)

void FUN_14800f53a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14800f5bc FUN_14800f5bc body=167 status=ok
// SIG undefined FUN_14800f5bc(void)

void FUN_14800f5bc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14800f637;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14800f637;
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
LAB_14800f637:
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
                    /* WARNING: Could not recover jumptable at 0x00014800f657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14800f664 FUN_14800f664 body=74 status=ok
// SIG undefined FUN_14800f664(void)

void FUN_14800f664(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14ad2a880;
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014800f6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14800f6ae FUN_14800f6ae body=29 status=ok
// SIG undefined FUN_14800f6ae(void)

undefined8 FUN_14800f6ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800f6ec FUN_14800f6ec body=85 status=ok
// SIG undefined FUN_14800f6ec(void)

undefined8 * FUN_14800f6ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad2a880;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800f742 FUN_14800f742 body=167 status=ok
// SIG undefined FUN_14800f742(void)

void FUN_14800f742(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14800f7bd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14800f7bd;
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
LAB_14800f7bd:
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
                    /* WARNING: Could not recover jumptable at 0x00014800f7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14800f7ea FUN_14800f7ea body=9 status=ok
// SIG undefined FUN_14800f7ea(void)

void FUN_14800f7ea(longlong param_1)

{
  FUN_14800f812(param_1 + 0x10);
  return;
}



// FUNCTION 14800f7f4 FUN_14800f7f4 body=29 status=ok
// SIG undefined FUN_14800f7f4(void)

undefined8 FUN_14800f7f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800f812 FUN_14800f812 body=56 status=ok
// SIG undefined FUN_14800f812(void)

void FUN_14800f812(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14800f84a(param_1);
  return;
}



// FUNCTION 14800f84a FUN_14800f84a body=52 status=ok
// SIG undefined FUN_14800f84a(void)

void FUN_14800f84a(longlong *param_1)

{
  FUN_14800f87e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14800f87e FUN_14800f87e body=315 status=ok
// SIG undefined FUN_14800f87e(void)

void FUN_14800f87e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 14800f9ba FUN_14800f9ba body=48 status=ok
// SIG undefined FUN_14800f9ba(void)

void FUN_14800f9ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14800f9ea FUN_14800f9ea body=132 status=ok
// SIG undefined FUN_14800f9ea(void)

void FUN_14800f9ea(longlong param_1,int param_2)

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



// FUNCTION 14800fa70 FUN_14800fa70 body=263 status=ok
// SIG undefined FUN_14800fa70(void)

void FUN_14800fa70(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
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
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_14800f3f4(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 14800fb78 FUN_14800fb78 body=29 status=ok
// SIG undefined FUN_14800fb78(void)

undefined8 FUN_14800fb78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800fb96 FUN_14800fb96 body=1 status=ok
// SIG undefined FUN_14800fb96(void)

void FUN_14800fb96(void)

{
  return;
}



// FUNCTION 14800fb98 FUN_14800fb98 body=15 status=ok
// SIG undefined FUN_14800fb98(void)

void FUN_14800fb98(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 14800fbaa FUN_14800fbaa body=29 status=ok
// SIG undefined FUN_14800fbaa(void)

undefined8 FUN_14800fbaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800fbda FUN_14800fbda body=29 status=ok
// SIG undefined FUN_14800fbda(void)

undefined8 FUN_14800fbda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800fc12 FUN_14800fc12 body=48 status=ok
// SIG undefined FUN_14800fc12(void)

void FUN_14800fc12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 14800fc42 FUN_14800fc42 body=68 status=ok
// SIG undefined FUN_14800fc42(void)

void FUN_14800fc42(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14800fc86();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14800fc86 FUN_14800fc86 body=322 status=ok
// SIG undefined FUN_14800fc86(void)

void FUN_14800fc86(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14800fdca FUN_14800fdca body=132 status=ok
// SIG undefined FUN_14800fdca(void)

void FUN_14800fdca(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800fe50 FUN_14800fe50 body=285 status=ok
// SIG undefined FUN_14800fe50(void)

undefined4 * FUN_14800fe50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14800ff6e(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_148010054(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148010142(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800ff6e FUN_14800ff6e body=229 status=ok
// SIG undefined FUN_14800ff6e(void)

int * FUN_14800ff6e(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 148010054 FUN_148010054 body=124 status=ok
// SIG undefined FUN_148010054(void)

undefined8 FUN_148010054(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1480100d0(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480100d0 FUN_1480100d0 body=114 status=ok
// SIG undefined FUN_1480100d0(void)

void FUN_1480100d0(longlong *param_1,int param_2)

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



// FUNCTION 148010142 FUN_148010142 body=422 status=ok
// SIG undefined FUN_148010142(void)

void FUN_148010142(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 1480102e9 FUN_1480102e9 body=247 status=ok
// SIG undefined FUN_1480102e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480102e9(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined4 *)(param_1 + 0x30);
    uVar4 = 0;
    auVar7 = pmovsxbq(in_XMM1,0x302);
    auVar8 = pmovsxbq(in_XMM2,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      lVar3 = auVar5._0_8_;
      lVar6 = auVar5._8_8_;
      if ((bool)(~(lVar3 < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-0xc] = 0xffffffff;
      }
      auVar9._8_4_ = (int)uVar4;
      auVar9._0_8_ = uVar4;
      auVar9._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ auVar1._8_8_) <= lVar6) {
        puVar2[-8] = 0xffffffff;
      }
      auVar9 = (auVar9 | auVar7) ^ auVar1;
      if (auVar9._0_8_ <= lVar3) {
        puVar2[-4] = 0xffffffff;
      }
      if (auVar9._8_8_ <= lVar6) {
        *puVar2 = 0xffffffff;
      }
      uVar4 = uVar4 + 4;
      puVar2 = puVar2 + 0x10;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar4);
  }
  return;
}



// FUNCTION 1480103e0 FUN_1480103e0 body=70 status=ok
// SIG undefined FUN_1480103e0(void)

undefined8 FUN_1480103e0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
           (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1))) ||
          (*(char *)(param_1 + 8 + lVar1) != *(char *)(param_2 + 8 + lVar1))) ||
         (*(char *)(param_1 + 9 + lVar1) != *(char *)(param_2 + 9 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 148010426 FUN_148010426 body=103 status=ok
// SIG undefined FUN_148010426(void)

bool FUN_148010426(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 14801048e FUN_14801048e body=136 status=ok
// SIG undefined FUN_14801048e(void)

undefined8 * FUN_14801048e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x58,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 2;
  *puVar2 = &PTR_LAB_14ad29d30;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148010536 FUN_148010536 body=69 status=ok
// SIG undefined FUN_148010536(void)

undefined8 * FUN_148010536(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad29db0;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14801057c FUN_14801057c body=69 status=ok
// SIG undefined FUN_14801057c(void)

undefined8 * FUN_14801057c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad29db0;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14801060c FUN_14801060c body=189 status=ok
// SIG undefined FUN_14801060c(void)

undefined8 FUN_14801060c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_40 = &PTR_LAB_14ad29ea0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ad29e30;
  puVar1[3] = param_3;
  puVar1[4] = FUN_147fe913e;
  FUN_1480106ca(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480106ca FUN_1480106ca body=230 status=ok
// SIG undefined FUN_1480106ca(void)

undefined8 * FUN_1480106ca(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1480107b2 FUN_1480107b2 body=29 status=ok
// SIG undefined FUN_1480107b2(void)

undefined8 FUN_1480107b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480107f8 FUN_1480107f8 body=93 status=ok
// SIG undefined FUN_1480107f8(void)

void FUN_1480107f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad29ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad29e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148010856 FUN_148010856 body=93 status=ok
// SIG undefined FUN_148010856(void)

void FUN_148010856(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad29ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad29e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1480108b4 FUN_1480108b4 body=126 status=ok
// SIG undefined FUN_1480108b4(void)

void FUN_1480108b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad29ea0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad29e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148010923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148010940 FUN_148010940 body=21 status=ok
// SIG undefined FUN_148010940(void)

undefined8 FUN_148010940(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148010958 FUN_148010958 body=107 status=ok
// SIG undefined FUN_148010958(void)

void * FUN_148010958(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  _Src = (void *)*param_2;
  uVar3 = param_2[1] - (longlong)_Src;
  uVar2 = uVar3 >> 3;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  }
  else {
    FUN_1480109c4(param_1,uVar2,0);
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar3 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
  }
  return param_1;
}



// FUNCTION 1480109c4 FUN_1480109c4 body=101 status=ok
// SIG undefined FUN_1480109c4(void)

void FUN_1480109c4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147fd7696(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 148010a2a FUN_148010a2a body=164 status=ok
// SIG undefined FUN_148010a2a(void)

void FUN_148010a2a(longlong *param_1,undefined8 param_2)

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
        goto LAB_148010aaa;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148010aaa:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148010ace FUN_148010ace body=48 status=ok
// SIG undefined FUN_148010ace(void)

void FUN_148010ace(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148010afe FUN_148010afe body=48 status=ok
// SIG undefined FUN_148010afe(void)

void FUN_148010afe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148010b2e FUN_148010b2e body=48 status=ok
// SIG undefined FUN_148010b2e(void)

void FUN_148010b2e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148010b5e FUN_148010b5e body=57 status=ok
// SIG undefined FUN_148010b5e(void)

void FUN_148010b5e(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fd2fb0();
  *param_1 = &PTR_LAB_14ad29f10;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 148010bc4 FUN_148010bc4 body=64 status=ok
// SIG undefined FUN_148010bc4(void)

undefined8 * FUN_148010bc4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad0ff20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148010c04 FUN_148010c04 body=124 status=ok
// SIG undefined FUN_148010c04(void)

void FUN_148010c04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_148010c82(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148010c82 FUN_148010c82 body=132 status=ok
// SIG undefined FUN_148010c82(void)

void FUN_148010c82(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 148010d06 FUN_148010d06 body=132 status=ok
// SIG undefined FUN_148010d06(void)

void FUN_148010d06(longlong param_1,int param_2)

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



// FUNCTION 148010d8c FUN_148010d8c body=132 status=ok
// SIG undefined FUN_148010d8c(void)

void FUN_148010d8c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148010e12 FUN_148010e12 body=132 status=ok
// SIG undefined FUN_148010e12(void)

void FUN_148010e12(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148010e98 FUN_148010e98 body=261 status=ok
// SIG undefined FUN_148010e98(void)

longlong FUN_148010e98(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ad29f60;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  FUN_147fd2fb0(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_LAB_14ad29f10;
  plVar3[6] = 0;
  plVar3[7] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148010f58;
    param_1[1] = 0;
LAB_148010f19:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148010f58;
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
      if (plVar4 != (longlong *)0x0) goto LAB_148010f19;
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
LAB_148010f58:
  return *param_1;
}



// FUNCTION 148010f9e FUN_148010f9e body=34 status=ok
// SIG undefined FUN_148010f9e(void)

void FUN_148010f9e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14ad0ff20;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148010fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148010fc0 FUN_148010fc0 body=29 status=ok
// SIG undefined FUN_148010fc0(void)

undefined8 FUN_148010fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148010fde FUN_148010fde body=48 status=ok
// SIG undefined FUN_148010fde(void)

void FUN_148010fde(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14801100e FUN_14801100e body=48 status=ok
// SIG undefined FUN_14801100e(void)

void FUN_14801100e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14801103e FUN_14801103e body=57 status=ok
// SIG undefined FUN_14801103e(void)

void FUN_14801103e(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fd2fb0();
  *param_1 = &PTR_LAB_14ad29f80;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 1480110a4 FUN_1480110a4 body=38 status=ok
// SIG undefined FUN_1480110a4(void)

undefined8 FUN_1480110a4(undefined8 param_1,int param_2)

{
  FUN_1480110ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480110ca FUN_1480110ca body=88 status=ok
// SIG undefined FUN_1480110ca(void)

void FUN_1480110ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad29f80;
  FUN_14801137f(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ad0ff20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148011117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148011122 FUN_148011122 body=132 status=ok
// SIG undefined FUN_148011122(void)

void FUN_148011122(longlong param_1,int param_2)

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



// FUNCTION 1480111a8 FUN_1480111a8 body=118 status=ok
// SIG undefined FUN_1480111a8(void)

void FUN_1480111a8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x20);
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
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar5) << 5);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14801121e FUN_14801121e body=62 status=ok
// SIG undefined FUN_14801121e(void)

void FUN_14801121e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14801125c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14801125c FUN_14801125c body=93 status=ok
// SIG undefined FUN_14801125c(void)

ulonglong FUN_14801125c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1480112ba FUN_1480112ba body=86 status=ok
// SIG undefined FUN_1480112ba(void)

void FUN_1480112ba(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148011310 FUN_148011310 body=104 status=ok
// SIG undefined FUN_148011310(void)

void FUN_148011310(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar2 = *(longlong *)(param_2 + 8 + lVar3);
    *(longlong *)(param_1 + 8 + lVar3) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    bVar1 = *(byte *)(param_2 + lVar3 + 0x18);
    *(byte *)(param_1 + lVar3 + 0x18) = bVar1;
    (*(code *)(&PTR_caseD_0_14ad29fd0)[bVar1])(param_1 + lVar3 + 0x10,param_2 + lVar3 + 0x10);
    lVar3 = lVar3 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14801137f FUN_14801137f body=73 status=ok
// SIG undefined FUN_14801137f(void)

void FUN_14801137f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1480113c8 FUN_1480113c8 body=261 status=ok
// SIG undefined FUN_1480113c8(void)

longlong FUN_1480113c8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ad29fe0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  FUN_147fd2fb0(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_LAB_14ad29f80;
  plVar3[6] = 0;
  plVar3[7] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148011488;
    param_1[1] = 0;
LAB_148011449:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148011488;
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
      if (plVar4 != (longlong *)0x0) goto LAB_148011449;
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
LAB_148011488:
  return *param_1;
}



// FUNCTION 1480114ce FUN_1480114ce body=9 status=ok
// SIG undefined FUN_1480114ce(void)

void FUN_1480114ce(longlong param_1)

{
  FUN_1480110ca(param_1 + 0x10);
  return;
}



// FUNCTION 1480114d8 FUN_1480114d8 body=29 status=ok
// SIG undefined FUN_1480114d8(void)

undefined8 FUN_1480114d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480114f6 FUN_1480114f6 body=39 status=ok
// SIG undefined FUN_1480114f6(void)

void FUN_1480114f6(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fd2fb0();
  *param_1 = &PTR_LAB_14ad2a000;
  return;
}



// FUNCTION 14801154a FUN_14801154a body=64 status=ok
// SIG undefined FUN_14801154a(void)

undefined8 * FUN_14801154a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad0ff20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14801158a FUN_14801158a body=208 status=ok
// SIG undefined FUN_14801158a(void)

void FUN_14801158a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_145b67b9c();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1480115af;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1480115af;
      }
    }
  }
  lVar4 = 0;
LAB_1480115af:
  lVar1 = *(longlong *)(lVar4 + 0x28);
  if (lVar1 != 0) {
    local_28 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    local_38 = *(undefined8 *)(param_2 + 8);
    local_30 = *(longlong *)(param_2 + 0x10);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_147ff0de6(param_3,&local_38,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801165c FUN_14801165c body=243 status=ok
// SIG undefined FUN_14801165c(void)

longlong FUN_14801165c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ad2a050;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  FUN_147fd2fb0(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_LAB_14ad2a000;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14801170f;
    param_1[1] = 0;
LAB_1480116d0:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14801170f;
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
      if (plVar4 != (longlong *)0x0) goto LAB_1480116d0;
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
LAB_14801170f:
  return *param_1;
}



// FUNCTION 148011750 FUN_148011750 body=34 status=ok
// SIG undefined FUN_148011750(void)

void FUN_148011750(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14ad0ff20;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014801176d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148011772 FUN_148011772 body=29 status=ok
// SIG undefined FUN_148011772(void)

undefined8 FUN_148011772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011790 FUN_148011790 body=83 status=ok
// SIG undefined FUN_148011790(void)

void FUN_148011790(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fd2fb0();
  *param_1 = &PTR_LAB_14ad2a070;
  FUN_145a598dc(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 148011810 FUN_148011810 body=38 status=ok
// SIG undefined FUN_148011810(void)

undefined8 FUN_148011810(undefined8 param_1,int param_2)

{
  FUN_148011836();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011836 FUN_148011836 body=99 status=ok
// SIG undefined FUN_148011836(void)

void FUN_148011836(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad2a070;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb468(param_1 + 4);
  *param_1 = &PTR_LAB_14ad0ff20;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014801188e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1480118a8 FUN_1480118a8 body=179 status=ok
// SIG undefined FUN_1480118a8(void)

undefined8 FUN_1480118a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14801195b();
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14801191b;
    param_1[1] = 0;
LAB_1480118dc:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14801191b;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar3 + 2;
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
      param_1[1] = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1480118dc;
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
LAB_14801191b:
  return *param_1;
}



// FUNCTION 14801195b FUN_14801195b body=126 status=ok
// SIG undefined FUN_14801195b(void)

undefined8 * FUN_14801195b(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ad2a1a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_147fd2fb0(puVar1 + 2);
  puVar1[2] = &PTR_LAB_14ad2a070;
  FUN_145a598dc(puVar1 + 6);
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return puVar1;
}



// FUNCTION 1480119e4 FUN_1480119e4 body=29 status=ok
// SIG undefined FUN_1480119e4(void)

undefined8 FUN_1480119e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011a02 FUN_148011a02 body=136 status=ok
// SIG undefined FUN_148011a02(void)

int FUN_148011a02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if ((*(longlong *)(lVar1 + uVar5) == lVar2) &&
         (*(char *)(lVar1 + 0x16 + uVar5) == *(char *)((longlong)param_2 + 0x16))) {
        return (int)(uVar5 >> 3) * -0x55555555;
      }
      uVar5 = uVar5 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != uVar5);
  }
  return -1;
}



// FUNCTION 148011a8a FUN_148011a8a body=132 status=ok
// SIG undefined FUN_148011a8a(void)

void FUN_148011a8a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148011b10 FUN_148011b10 body=132 status=ok
// SIG undefined FUN_148011b10(void)

void FUN_148011b10(longlong param_1,int param_2)

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



// FUNCTION 148011b96 FUN_148011b96 body=48 status=ok
// SIG undefined FUN_148011b96(void)

void FUN_148011b96(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148011bc6 FUN_148011bc6 body=9 status=ok
// SIG undefined FUN_148011bc6(void)

void FUN_148011bc6(longlong param_1)

{
  FUN_148011d04(param_1 + 0x10);
  return;
}



// FUNCTION 148011bd0 FUN_148011bd0 body=29 status=ok
// SIG undefined FUN_148011bd0(void)

undefined8 FUN_148011bd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011bee FUN_148011bee body=167 status=ok
// SIG undefined FUN_148011bee(void)

void FUN_148011bee(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_148011c69;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_148011c69;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148011c69:
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
                    /* WARNING: Could not recover jumptable at 0x000148011c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148011c96 FUN_148011c96 body=9 status=ok
// SIG undefined FUN_148011c96(void)

void FUN_148011c96(longlong param_1)

{
  FUN_148011d04(param_1 + 0x10);
  return;
}



// FUNCTION 148011ca0 FUN_148011ca0 body=29 status=ok
// SIG undefined FUN_148011ca0(void)

undefined8 FUN_148011ca0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011cde FUN_148011cde body=38 status=ok
// SIG undefined FUN_148011cde(void)

undefined8 FUN_148011cde(undefined8 param_1,int param_2)

{
  FUN_148011d04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011d04 FUN_148011d04 body=164 status=ok
// SIG undefined FUN_148011d04(void)

void FUN_148011d04(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ad0ffe0;
  FUN_1480024bc(param_1[0x16a],*(undefined4 *)(param_1 + 0x16b));
  if (param_1[0x16a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x169];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x165];
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
  FUN_147fd6a5a(param_1 + 8);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148011d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148011da8 FUN_148011da8 body=167 status=ok
// SIG undefined FUN_148011da8(void)

void FUN_148011da8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_148011e23;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_148011e23;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148011e23:
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
                    /* WARNING: Could not recover jumptable at 0x000148011e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148011e50 FUN_148011e50 body=118 status=ok
// SIG undefined FUN_148011e50(void)

void FUN_148011e50(undefined8 *param_1)

{
  memset(param_1,0,0xb70);
  *param_1 = &PTR_LAB_14ad0ffe0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_147fd8372(param_1 + 8);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *param_1 = &PTR_LAB_14ad2a280;
  return;
}



// FUNCTION 148011ed2 FUN_148011ed2 body=9 status=ok
// SIG undefined FUN_148011ed2(void)

void FUN_148011ed2(longlong param_1)

{
  FUN_147fe6e9a(param_1 + 0x10);
  return;
}



// FUNCTION 148011edc FUN_148011edc body=29 status=ok
// SIG undefined FUN_148011edc(void)

undefined8 FUN_148011edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148011efa FUN_148011efa body=164 status=ok
// SIG undefined FUN_148011efa(void)

void FUN_148011efa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_148011f72;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148011f72;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148011f72:
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
                    /* WARNING: Could not recover jumptable at 0x000148011f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148011f9e FUN_148011f9e body=98 status=ok
// SIG undefined FUN_148011f9e(void)

void FUN_148011f9e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148012000 FUN_148012000 body=82 status=ok
// SIG undefined FUN_148012000(void)

void FUN_148012000(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148012052 FUN_148012052 body=9 status=ok
// SIG undefined FUN_148012052(void)

void FUN_148012052(longlong param_1)

{
  FUN_14801207a(param_1 + 0x10);
  return;
}



// FUNCTION 14801205c FUN_14801205c body=29 status=ok
// SIG undefined FUN_14801205c(void)

undefined8 FUN_14801205c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14801207a FUN_14801207a body=80 status=ok
// SIG undefined FUN_14801207a(void)

void FUN_14801207a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad2a7d0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001480120bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1480120ea FUN_1480120ea body=38 status=ok
// SIG undefined FUN_1480120ea(void)

undefined8 FUN_1480120ea(undefined8 param_1,int param_2)

{
  FUN_14801207a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148012110 FUN_148012110 body=167 status=ok
// SIG undefined FUN_148012110(void)

void FUN_148012110(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14801218b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14801218b;
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
LAB_14801218b:
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
                    /* WARNING: Could not recover jumptable at 0x0001480121ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1480121b8 FUN_1480121b8 body=31 status=ok
// SIG undefined FUN_1480121b8(void)

undefined8 FUN_1480121b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480121f4 FUN_1480121f4 body=93 status=ok
// SIG undefined FUN_1480121f4(void)

void FUN_1480121f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad2a2f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148012252 FUN_148012252 body=126 status=ok
// SIG undefined FUN_148012252(void)

void FUN_148012252(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad2a2f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480122c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480122d0 FUN_1480122d0 body=21 status=ok
// SIG undefined FUN_1480122d0(void)

undefined8 FUN_1480122d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1480122ea FUN_1480122ea body=124 status=ok
// SIG undefined FUN_1480122ea(void)

void FUN_1480122ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_148012368(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148012368 FUN_148012368 body=132 status=ok
// SIG undefined FUN_148012368(void)

void FUN_148012368(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x10);
  return;
}



// FUNCTION 1480123ec FUN_1480123ec body=165 status=ok
// SIG undefined FUN_1480123ec(void)

undefined8 * FUN_1480123ec(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)*param_1 != 0) {
    FUN_147fd8af8(*(longlong *)*param_1 + 0x20,&local_28);
    *param_2 = local_28;
    param_2[1] = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148012492 FUN_148012492 body=543 status=ok
// SIG undefined FUN_148012492(void)

undefined8 FUN_148012492(longlong *param_1,undefined1 param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
    piVar12 = (int *)param_1[1];
    iVar4 = *piVar12;
    iVar5 = piVar12[1];
    iVar6 = piVar12[2];
    iVar7 = piVar12[3];
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(piVar12 + 4);
    *param_3 = iVar4;
    param_3[1] = iVar5;
    param_3[2] = iVar6;
    param_3[3] = iVar7;
LAB_1480124dc:
    uVar8 = 1;
    goto LAB_1480124de;
  case 1:
    goto switchD_1480124c8_caseD_1;
  case 2:
    local_30 = *(longlong *)(*param_1 + 8);
    plVar2 = *(longlong **)(*param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (local_30 != 0) {
      iVar4 = *(int *)(local_30 + 0x40);
      iVar5 = *(int *)(local_30 + 0x44);
      iVar6 = *(int *)(local_30 + 0x48);
      iVar7 = *(int *)(local_30 + 0x4c);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(local_30 + 0x50);
      *param_3 = iVar4;
      param_3[1] = iVar5;
      param_3[2] = iVar6;
      param_3[3] = iVar7;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar12 = (int *)((longlong)plVar2 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    goto joined_r0x0001480125ea;
  case 3:
    lVar9 = FUN_147fd28d4();
    lVar10 = param_1[1];
    piVar12 = (int *)(lVar10 + 0x100);
    if (*(int **)(lVar10 + 0x1e0) != (int *)0x0) {
      piVar12 = *(int **)(lVar10 + 0x1e0);
    }
    if ((longlong)*(int *)(lVar10 + 0x1f0) != 0) {
      lVar10 = (longlong)*(int *)(lVar10 + 0x1f0) * 0x70;
      do {
        if (*piVar12 == *(int *)(lVar9 + 0x30)) {
          if (piVar12 != (int *)0x0) {
            iVar4 = piVar12[0xd];
            iVar5 = piVar12[0xe];
            iVar6 = piVar12[0xf];
            uVar8 = *(undefined8 *)(piVar12 + 0x10);
            *param_3 = piVar12[0xc];
            param_3[1] = iVar4;
            param_3[2] = iVar5;
            param_3[3] = iVar6;
            *(undefined8 *)(param_3 + 4) = uVar8;
            goto LAB_1480124dc;
          }
          break;
        }
        piVar12 = piVar12 + 0x1c;
        lVar10 = lVar10 + -0x70;
      } while (lVar10 != 0);
    }
    goto switchD_1480124c8_caseD_1;
  case 4:
    FUN_1480123ec(param_1,&local_30);
    bVar3 = true;
    if (((local_30 != 0) && (lVar10 = FUN_14479d2ce(local_30 + 0x28), lVar10 != 0)) &&
       (lVar10 = FUN_14364b714(lVar10), lVar10 != 0)) {
      puVar11 = &DAT_14c846480;
      if (*(longlong *)(lVar10 + 0x1c8) != 0) {
        puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x1c8) + 0x240);
      }
      iVar4 = *(int *)((longlong)puVar11 + 0x24);
      iVar5 = *(int *)(puVar11 + 5);
      iVar6 = *(int *)((longlong)puVar11 + 0x2c);
      uVar8 = puVar11[6];
      *param_3 = *(int *)(puVar11 + 4);
      param_3[1] = iVar4;
      param_3[2] = iVar5;
      param_3[3] = iVar6;
      *(undefined8 *)(param_3 + 4) = uVar8;
      bVar3 = false;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar12 = (int *)((longlong)local_28 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    uVar8 = 1;
    if (!bVar3) goto LAB_1480124de;
  }
  goto switchD_1480124c8_default;
switchD_1480124c8_caseD_1:
  FUN_1480123ec(param_1,&local_30);
  if (local_30 != 0) {
    iVar4 = *(int *)(local_30 + 0x40);
    iVar5 = *(int *)(local_30 + 0x44);
    iVar6 = *(int *)(local_30 + 0x48);
    iVar7 = *(int *)(local_30 + 0x4c);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(local_30 + 0x50);
    *param_3 = iVar4;
    param_3[1] = iVar5;
    param_3[2] = iVar6;
    param_3[3] = iVar7;
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar12 = (int *)((longlong)local_28 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
joined_r0x0001480125ea:
  uVar8 = 1;
  if (local_30 != 0) goto LAB_1480124de;
switchD_1480124c8_default:
  uVar8 = 0;
LAB_1480124de:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1480126b2 FUN_1480126b2 body=1112 status=ok
// SIG undefined FUN_1480126b2(void)

void FUN_1480126b2(longlong *param_1,double *param_2,double *param_3,undefined1 param_4,
                  double *param_5)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong *plVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  longlong *plStack_80;
  double local_78;
  ulonglong local_70;
  
  dVar1 = DAT_14c8464f0;
  plVar17 = DAT_14c8464e8;
  dVar16 = DAT_14c8464e0;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  switch(param_4) {
  case 0:
    lVar9 = param_1[1];
    local_98 = *(undefined8 *)(lVar9 + 0x28);
    local_a8 = *(undefined8 *)(lVar9 + 0x18);
    uStack_a0 = *(undefined8 *)(lVar9 + 0x20);
    FUN_1401c9a0e(&local_a8,&local_88,param_3);
    break;
  case 1:
    goto switchD_148012727_caseD_1;
  case 2:
    lVar9 = *(longlong *)(*param_1 + 8);
    plVar2 = *(longlong **)(*param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      local_98 = *(undefined8 *)(lVar9 + 0x68);
      local_a8 = *(undefined8 *)(lVar9 + 0x58);
      uStack_a0 = *(undefined8 *)(lVar9 + 0x60);
      FUN_1401c9a0e(&local_a8,&local_88,param_3);
      dVar16 = local_88;
      plVar17 = plStack_80;
      dVar1 = local_78;
    }
    local_88 = dVar16;
    plStack_80 = plVar17;
    local_78 = dVar1;
    local_b8 = lVar9;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar2 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar11 = (int *)((longlong)plVar2 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    goto joined_r0x0001480127d1;
  case 3:
    lVar8 = FUN_147fd28d4();
    lVar9 = param_1[1];
    piVar11 = (int *)(lVar9 + 0x100);
    if (*(int **)(lVar9 + 0x1e0) != (int *)0x0) {
      piVar11 = *(int **)(lVar9 + 0x1e0);
    }
    if ((longlong)*(int *)(lVar9 + 0x1f0) != 0) {
      lVar9 = (longlong)*(int *)(lVar9 + 0x1f0) * 0x70;
      do {
        if (*piVar11 == *(int *)(lVar8 + 0x30)) {
          if (piVar11 != (int *)0x0) {
            dVar12 = *(double *)(piVar11 + 4);
            dVar3 = *(double *)(piVar11 + 6);
            dVar4 = *(double *)(piVar11 + 8);
            dVar5 = *param_3;
            dVar6 = param_3[1];
            dVar1 = *(double *)(piVar11 + 10);
            dVar16 = dVar6 * dVar12 - dVar3 * dVar5;
            dVar13 = param_3[2] * dVar3 - dVar4 * dVar6;
            dVar14 = dVar5 * dVar4 - dVar12 * param_3[2];
            dVar13 = dVar13 + dVar13;
            dVar14 = dVar14 + dVar14;
            dVar16 = dVar16 + dVar16;
            local_78 = dVar16 * dVar1 + param_3[2] + (dVar14 * dVar12 - dVar13 * dVar3);
            local_88 = (dVar16 * dVar3 - dVar14 * dVar4) + dVar1 * dVar13 + dVar5;
            plStack_80 = (longlong *)
                         ((dVar4 * dVar13 - dVar12 * dVar16) +
                         *(double *)(piVar11 + 10) * dVar14 + dVar6);
            goto LAB_14801289e;
          }
          break;
        }
        piVar11 = piVar11 + 0x1c;
        lVar9 = lVar9 + -0x70;
      } while (lVar9 != 0);
    }
    goto switchD_148012727_caseD_1;
  case 4:
    FUN_1480123ec(param_1,&local_88);
    if (((local_88 == 0.0) || (lVar9 = FUN_14479d2ce((longlong)local_88 + 0x28), lVar9 == 0)) ||
       (lVar9 = FUN_14364b714(lVar9), lVar9 == 0)) {
      bVar7 = false;
    }
    else {
      pdVar10 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar9 + 0x1c8) != 0) {
        pdVar10 = (double *)(*(longlong *)(lVar9 + 0x1c8) + 0x240);
      }
      dVar3 = *param_3;
      dVar4 = param_3[1];
      dVar5 = *pdVar10;
      dVar6 = pdVar10[1];
      dVar13 = pdVar10[2];
      dVar16 = pdVar10[3];
      dVar12 = dVar4 * dVar5 - dVar3 * dVar6;
      dVar14 = param_3[2] * dVar6 - dVar4 * dVar13;
      dVar15 = dVar3 * dVar13 - dVar5 * param_3[2];
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar12 = dVar12 + dVar12;
      dVar1 = dVar12 * dVar16 + param_3[2] + (dVar15 * dVar5 - dVar14 * dVar6);
      dVar16 = (dVar12 * dVar6 - dVar15 * dVar13) + dVar16 * dVar14 + dVar3;
      plVar17 = (longlong *)((dVar13 * dVar14 - dVar5 * dVar12) + pdVar10[3] * dVar15 + dVar4);
      bVar7 = true;
    }
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar11 = (int *)((longlong)plStack_80 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
        }
      }
    }
    local_88 = dVar16;
    plStack_80 = plVar17;
    local_78 = dVar1;
    if (!bVar7) goto switchD_148012727_default;
    break;
  case 5:
    local_88 = *param_3;
    plStack_80 = (longlong *)param_3[1];
    local_78 = param_3[2];
    break;
  default:
    goto switchD_148012727_default;
  }
  goto LAB_14801289e;
switchD_148012727_caseD_1:
  FUN_1480123ec(param_1,&local_b8);
  if (local_b8 != 0) {
    local_98 = *(undefined8 *)(local_b8 + 0x68);
    local_a8 = *(undefined8 *)(local_b8 + 0x58);
    uStack_a0 = *(undefined8 *)(local_b8 + 0x60);
    FUN_1401c9a0e(&local_a8,&local_88,param_3);
    dVar16 = local_88;
    plVar17 = plStack_80;
    dVar1 = local_78;
  }
  local_88 = dVar16;
  plStack_80 = plVar17;
  local_78 = dVar1;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_b0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar11 = (int *)((longlong)local_b0 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
joined_r0x0001480127d1:
  if (local_b8 == 0) goto switchD_148012727_default;
LAB_14801289e:
  dVar1 = param_2[2];
  dVar16 = param_2[1];
  *param_5 = local_88 + *param_2;
  param_5[1] = (double)plStack_80 + dVar16;
  param_5[2] = local_78 + dVar1;
switchD_148012727_default:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148012b0c FUN_148012b0c body=281 status=ok
// SIG undefined FUN_148012b0c(void)

double * FUN_148012b0c(double *param_1,longlong param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0.0 < param_3) {
    uVar3 = SUB84(param_3,0);
    uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
    if (*(char *)(param_2 + 0x6d) == '\0') goto LAB_148012b57;
  }
  do {
    do {
      dVar1 = (double)FUN_147fdbd1e(param_2);
    } while (dVar1 <= 0.0);
  } while (*(char *)(param_2 + 0x6d) != '\0');
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
LAB_148012b57:
  dVar1 = (double)FUN_147fdbcf0(param_2);
  if ((*(char *)(param_2 + 0x6f) == '\0') ||
     (((double)CONCAT44(uVar4,uVar3) <= 1.0 && (double)CONCAT44(uVar4,uVar3) != 1.0) &&
      *(char *)(param_2 + 0x6f) == '\x02')) {
    dVar1 = tan(dVar1 * 0.5 * 0.017453292519943295);
    dVar1 = atan(dVar1 / (double)CONCAT44(uVar4,uVar3));
    dVar1 = dVar1 + dVar1;
    dVar2 = tan(dVar1 * 0.5);
    dVar2 = atan(dVar2 * (double)CONCAT44(uVar4,uVar3));
    *param_1 = (dVar2 + dVar2) * 57.29577951308232;
  }
  else {
    *param_1 = dVar1;
    dVar1 = tan(dVar1 * 0.5 * 0.017453292519943295);
    dVar1 = atan(dVar1 / (double)CONCAT44(uVar4,uVar3));
    dVar1 = dVar1 + dVar1;
  }
  param_1[1] = dVar1 * 57.29577951308232;
  return param_1;
}



// FUNCTION 148012c26 FUN_148012c26 body=155 status=ok
// SIG undefined FUN_148012c26(void)

void FUN_148012c26(longlong param_1,longlong param_2)

{
  double dVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == 0) || (*(char *)(param_1 + 0x6d) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  local_24 = 0;
  local_28 = 0;
  FUN_14039bfee(param_2,&local_24,&local_28);
  if (local_28 < 1 || local_24 < 1) {
    dVar1 = (double)FUN_147fdbd1e(param_1);
  }
  else {
    dVar1 = (double)local_24 / (double)local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar1);
}



// FUNCTION 148012cd2 FUN_148012cd2 body=1119 status=ok
// SIG undefined FUN_148012cd2(void)

undefined8 FUN_148012cd2(undefined8 param_1,ulonglong *param_2,double param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  uint uVar9;
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [128];
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  ulonglong local_318;
  ulonglong uStack_310;
  ulonglong local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  double local_278 [3];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double dStack_188;
  undefined8 local_180;
  undefined1 local_178 [136];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_308 = param_2[2] ^ 0x8000000000000000;
  local_378 = 0x3ff0000000000000;
  local_370 = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0x3ff0000000000000;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0x3ff0000000000000;
  local_320 = 0;
  local_318 = *param_2 ^ 0x8000000000000000;
  uStack_310 = param_2[1] ^ 0x8000000000000000;
  local_300 = 0x3ff0000000000000;
  dVar8 = (double)param_2[3];
  dVar2 = (double)param_2[5];
  dVar6 = ((double)param_2[4] * 3.1415927410125732) / 180.0;
  dVar3 = cos(dVar6);
  dVar4 = sin(dVar6);
  dVar5 = sin(dVar6);
  local_1f8 = cos(dVar6);
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0x3ff0000000000000;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  dStack_188 = 0.0;
  local_180 = 0x3ff0000000000000;
  dVar6 = (dVar8 * 3.1415927410125732) / 180.0;
  dStack_1f0 = -dVar5;
  local_1d8 = dVar4;
  local_1d0 = dVar3;
  dVar8 = cos(dVar6);
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar6);
  local_278[0] = cos(dVar6);
  local_278[1] = 0.0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  local_278[2] = -dVar4;
  local_238 = dVar3;
  local_228 = dVar8;
  FUN_1447fea8d(local_178,&local_1f8);
  dVar4 = (dVar2 * 3.1415927410125732) / 180.0;
  dVar8 = cos(dVar4);
  dVar2 = sin(dVar4);
  dVar3 = sin(dVar4);
  local_2d0 = cos(dVar4);
  local_2f8 = 0x3ff0000000000000;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0x3ff0000000000000;
  local_2c8 = dVar3;
  local_2b0 = -dVar2;
  local_2a8 = dVar8;
  FUN_1447fea8d(local_3f8,local_178);
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_1e8 = 0x3ff0000000000000;
  uStack_1e0 = 0;
  local_1d8 = 1.0;
  local_1d0 = 0.0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0x3ff0000000000000;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  dStack_188 = 0.0;
  local_180 = 0x3ff0000000000000;
  FUN_1447fea8d(local_178,local_3f8,&local_1f8);
  fVar1 = *(float *)(param_2 + 0xc);
  uVar7 = -(uint)(0.0 < fVar1);
  uVar9 = ~uVar7 & DAT_14c75b140;
  dVar8 = (double)FUN_147fdbcf0(param_2);
  if (dVar8 <= 0.0010000000474974513) {
    dVar8 = 0.0010000000474974513;
  }
  dVar2 = dVar8 * 0.5 * 0.017453292519943295;
  dVar8 = tan(dVar2);
  local_1f8 = tan(dVar2);
  local_1f8 = 1.0 / local_1f8;
  dStack_1f0 = 0.0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0.0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0x3ff0000000000000;
  uStack_198 = 0;
  uStack_190 = 0;
  local_180 = 0;
  local_1d0 = param_3 / dVar8;
  dStack_188 = (double)(float)(uVar9 | (uint)fVar1 & uVar7);
  FUN_1447fea8d(local_278,&local_378,local_178);
  FUN_1447fea8d(param_1,local_278,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148013132 FUN_148013132 body=292 status=ok
// SIG undefined FUN_148013132(void)

void FUN_148013132(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  if (fVar1 <= 0.0) {
    if (0.0 < fVar1) {
      return;
    }
  }
  else {
    fVar5 = (float)(-(uint)(param_2 != 0.0) & (uint)(param_2 / param_3));
    fVar6 = (fVar5 + fVar5) / fVar1;
    fVar1 = expf(-fVar1 * param_3);
    fVar2 = param_1[1] - fVar6;
    fVar3 = *param_1 * fVar2;
    fVar4 = param_1[2] + fVar3 + fVar5;
    fVar3 = ((fVar4 - fVar3) - fVar4 * *param_1 * param_3) * fVar1 - fVar5;
    param_2 = (((fVar4 * param_3 + fVar2) * fVar1 + fVar6) - fVar5 * param_3) + param_2;
    param_1[1] = param_2;
    param_1[2] = fVar3;
    if (DAT_14c762770 < ABS(param_2)) {
      return;
    }
    if (DAT_14c762770 < ABS(fVar3)) {
      return;
    }
  }
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}



// FUNCTION 148013256 FUN_148013256 body=253 status=ok
// SIG undefined FUN_148013256(void)

void FUN_148013256(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
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
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  param_1 = param_1 + 2;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148013312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      return;
    }
    thunk_FUN_14572512c(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 148013358 FUN_148013358 body=202 status=ok
// SIG undefined FUN_148013358(void)

void FUN_148013358(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b67e5a();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801336a;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801336a;
      }
    }
  }
  lVar6 = 0;
LAB_14801336a:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x48;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  return;
}



// FUNCTION 148013422 FUN_148013422 body=602 status=ok
// SIG undefined FUN_148013422(void)

void FUN_148013422(longlong param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  double *pdVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x28);
  if (lVar9 == 0) goto LAB_14801346f;
  lVar9 = FUN_14364b714(lVar9);
  if (lVar9 == 0) goto LAB_14801346f;
  cVar7 = FUN_14801367e(param_1 + 0x18,param_3 + 0x11);
  pdVar12 = (double *)(param_1 + 0x28);
  dVar10 = (double)FUN_14801367e(pdVar12,param_3 + 0x11);
  if (cVar7 != '\0') {
    lVar1 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar1 == 0) {
      pdVar12 = (double *)&DAT_14c8464e0;
      uVar13 = (undefined4)DAT_14c8464f0;
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar13 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar12 = (double *)(lVar1 + 0x260);
    }
    dVar15 = *pdVar12;
    dVar4 = pdVar12[1];
    if ((((*param_3 == dVar15) && (!NAN(*param_3) && !NAN(dVar15))) && (param_3[1] == pdVar12[1]))
       && (!NAN(param_3[1]) && !NAN(pdVar12[1]))) {
      if ((param_3[2] == (double)CONCAT44(uVar14,uVar13)) &&
         (!NAN(param_3[2]) && !NAN((double)CONCAT44(uVar14,uVar13)))) goto LAB_148013521;
    }
    *(undefined1 *)(param_3 + 0xe) = 1;
    *param_3 = dVar15;
    param_3[1] = dVar4;
    param_3[2] = (double)CONCAT44(uVar14,uVar13);
  }
LAB_148013521:
  uVar13 = SUB84(pdVar12,0);
  if (SUB81(dVar10,0) != '\0') {
    lVar9 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar9 == 0) {
      uVar13 = SUB84(DAT_14c8464f8,0);
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
      dVar10 = DAT_14c846500;
      dVar15 = DAT_14c846508;
    }
    else {
      dVar15 = *(double *)(lVar9 + 0x240);
      dVar4 = *(double *)(lVar9 + 0x248);
      dVar5 = *(double *)(lVar9 + 0x250);
      dVar6 = *(double *)(lVar9 + 600);
      pdVar12 = *(double **)(lVar9 + 0x228);
      local_88 = dVar15;
      uStack_80 = dVar4;
      local_78 = dVar5;
      dStack_70 = dVar6;
      if (pdVar12 == (double *)0x0) {
        uVar13 = 0x40;
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar12[4] = DAT_14c8464f8;
        pdVar12[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        *(double **)(lVar9 + 0x228) = pdVar12;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
      auVar2._0_8_ = -(ulonglong)(dVar15 != *pdVar12);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
      uVar11 = movmskpd(uVar13,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        pdVar12[2] = local_78;
        pdVar12[3] = dStack_70;
        *(undefined4 *)pdVar12 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar12 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar12[6] = local_58;
        pdVar12[4] = local_68;
        pdVar12[5] = dStack_60;
      }
      uVar13 = SUB84(pdVar12[4],0);
      uVar14 = (undefined4)((ulonglong)pdVar12[4] >> 0x20);
      dVar10 = pdVar12[5];
      dVar15 = pdVar12[6];
    }
    if (((param_3[3] == (double)CONCAT44(uVar14,uVar13)) &&
        (!NAN(param_3[3]) && !NAN((double)CONCAT44(uVar14,uVar13)))) &&
       ((param_3[4] == dVar10 && (!NAN(param_3[4]) && !NAN(dVar10))))) {
      if ((param_3[5] == dVar15) && (!NAN(param_3[5]) && !NAN(dVar15))) goto LAB_14801346f;
    }
    *(undefined1 *)((longlong)param_3 + 0x71) = 1;
    param_3[3] = (double)CONCAT44(uVar14,uVar13);
    param_3[4] = dVar10;
    param_3[5] = dVar15;
  }
LAB_14801346f:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801367e FUN_14801367e body=62 status=ok
// SIG undefined FUN_14801367e(void)

undefined8 FUN_14801367e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if ((((*(int *)(param_1 + 1) == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (puVar2 = (undefined1 *)((ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60)),
     puVar2 == (undefined1 *)0x0)) {
    puVar2 = (undefined1 *)*param_1;
  }
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),*puVar2);
}



// FUNCTION 1480136c8 FUN_1480136c8 body=50 status=ok
// SIG undefined FUN_1480136c8(void)

void FUN_1480136c8(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145b67f44();
  }
  fVar1 = (float)FUN_1480136fa(param_1);
  *param_3 = fVar1 + 0.0;
  return;
}



// FUNCTION 1480136fa FUN_1480136fa body=115 status=ok
// SIG undefined FUN_1480136fa(void)

float FUN_1480136fa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_1459ec6e2();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801370b;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_14801370b;
      }
    }
  }
  lVar4 = 0;
LAB_14801370b:
  if (*(float *)(lVar4 + 0x38) <= 0.0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x20) / *(float *)(lVar4 + 0x38);
  }
  return fVar5;
}



// FUNCTION 14801377a FUN_14801377a body=109 status=ok
// SIG undefined FUN_14801377a(void)

void FUN_14801377a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b6802e();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801378f;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_14801378f;
      }
    }
  }
  lVar5 = 0;
LAB_14801378f:
  if (*(longlong *)(lVar5 + 0x38) != 0) {
    uVar3 = FUN_147fdaba2(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return;
}



// FUNCTION 1480137e8 FUN_1480137e8 body=91 status=ok
// SIG undefined FUN_1480137e8(void)

undefined8 FUN_1480137e8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_147fe89a0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148013844 FUN_148013844 body=60 status=ok
// SIG undefined FUN_148013844(void)

void FUN_148013844(longlong param_1,longlong param_2,undefined8 *param_3)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147fcf4ae(*(longlong *)(param_1 + 0x18),param_2,param_3);
    return;
  }
  thunk_FUN_147fe7e0c(*param_3,*(undefined8 *)(param_2 + 0x10),1);
  *(undefined2 *)(param_3 + 1) = 0x101;
  return;
}



// FUNCTION 14801388e FUN_14801388e body=2154 status=ok
// SIG undefined FUN_14801388e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14801388e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pdVar2 = (double *)param_2[1];
  pdVar3 = (double *)*param_3;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_147fd9eac(pdVar3,pdVar2);
    *(undefined1 *)(pdVar3 + 0x15a) = 1;
    *(undefined2 *)(param_3 + 1) = 0x101;
    goto LAB_148013bf3;
  }
  FUN_147fdbece(pdVar3,&local_110);
  FUN_147fdbece(pdVar2,&local_140);
  dVar20 = *pdVar3;
  dVar21 = pdVar3[1];
  dVar9 = pdVar3[2];
  dVar17 = *pdVar2;
  dVar1 = pdVar2[1];
  dVar8 = pdVar2[2];
  FUN_147fcf4b8(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  if (*(char *)(param_3 + 1) != '\0') goto LAB_148013bf3;
  iVar6 = *(int *)(param_1 + 0x54);
  if (iVar6 == 0) {
    cVar4 = FUN_1480140fa(&local_110,&local_140,&local_148,&local_150);
    if (((cVar4 == '\0') || (local_148 <= 0.0)) || (local_150 <= 0.0)) {
      iVar6 = 1;
      if ((((*(double *)(param_1 + 0x20) == 0.0) && (!NAN(*(double *)(param_1 + 0x20)))) &&
          ((*(double *)(param_1 + 0x28) == 0.0 &&
           ((!NAN(*(double *)(param_1 + 0x28)) && (*(double *)(param_1 + 0x30) == 0.0)))))) &&
         (!NAN(*(double *)(param_1 + 0x30)))) {
        bVar5 = FUN_144aa09e0(param_1 + 0x38);
        iVar6 = bVar5 + 1;
      }
      *(int *)(param_1 + 0x54) = iVar6;
      fVar7 = DAT_14c762774;
      if (DAT_14c762774 <= 0.01) {
        fVar7 = 0.01;
      }
      *(float *)(param_1 + 0x50) = fVar7;
    }
    else {
      local_190 = (double)*(float *)(*(longlong *)(param_1 + 0x18) + 0x18);
      local_1c0 = (dVar8 - dVar9) * local_190 + dVar9;
      local_1c8 = (dVar1 - dVar21) * local_190 + dVar21;
      local_1b0 = local_e8 * local_148 + local_100;
      dVar16 = local_f0 * local_148 + local_108;
      dVar19 = local_148 * local_f8 + local_110;
      local_198 = local_118 * local_150 + local_130;
      dVar18 = local_120 * local_150 + local_138;
      local_1b8 = local_150 * local_128 + local_140;
      local_1a0 = (local_198 - local_1b0) * local_190 + local_1b0;
      local_1a8 = (dVar18 - dVar16) * local_190 + dVar16;
      local_188 = (local_1b8 - dVar19) * local_190 + dVar19;
      local_158 = local_1a0 - local_1c0;
      local_160 = local_1a8 - local_1c8;
      dVar24 = local_188 - ((dVar17 - dVar20) * local_190 + dVar20);
      local_168 = 1.0 / SQRT(local_158 * local_158 + dVar24 * dVar24 + local_160 * local_160);
      local_158 = local_158 * local_168;
      local_160 = local_160 * local_168;
      local_168 = local_168 * dVar24;
      FUN_144a79a9c(&local_168,&local_180);
      dVar17 = local_1b8 - dVar17;
      dVar18 = dVar18 - dVar1;
      dVar24 = (double)(float)pdVar3[5];
      dVar8 = local_198 - dVar8;
      dVar20 = SQRT((local_1b0 - dVar9) * (local_1b0 - dVar9) +
                    (dVar16 - dVar21) * (dVar16 - dVar21) + (dVar19 - dVar20) * (dVar19 - dVar20));
      dVar20 = (SQRT(dVar8 * dVar8 + dVar18 * dVar18 + dVar17 * dVar17) - dVar20) * local_190 +
               dVar20;
      dVar9 = local_1a0 - local_158 * dVar20;
      dVar17 = local_1a8 - local_160 * dVar20;
      dVar1 = local_188 - dVar20 * local_168;
      dVar20 = pdVar3[2];
      dVar21 = pdVar3[1];
      *(double *)(param_1 + 0x20) = dVar1 - *pdVar3;
      *(double *)(param_1 + 0x28) = dVar17 - dVar21;
      *(double *)(param_1 + 0x30) = dVar9 - dVar20;
      dVar20 = pdVar3[5];
      dVar21 = pdVar3[4];
      *(double *)(param_1 + 0x38) = local_180 - pdVar3[3];
      *(double *)(param_1 + 0x40) = local_178 - dVar21;
      *(double *)(param_1 + 0x48) = dVar24 - dVar20;
      if (((((*pdVar3 != dVar1) || (NAN(*pdVar3) || NAN(dVar1))) || (pdVar3[1] != dVar17)) ||
          ((NAN(pdVar3[1]) || NAN(dVar17) || (pdVar3[2] != dVar9)))) ||
         (NAN(pdVar3[2]) || NAN(dVar9))) {
        *(undefined1 *)(pdVar3 + 0xe) = 1;
        *pdVar3 = dVar1;
        pdVar3[1] = dVar17;
        pdVar3[2] = dVar9;
      }
      if (((pdVar3[3] != local_180) || (NAN(pdVar3[3]) || NAN(local_180))) ||
         ((pdVar3[4] != local_178 ||
          (((NAN(pdVar3[4]) || NAN(local_178) || (pdVar3[5] != dVar24)) ||
           (NAN(pdVar3[5]) || NAN(dVar24))))))) {
        *(undefined1 *)((longlong)pdVar3 + 0x71) = 1;
        pdVar3[3] = local_180;
        pdVar3[4] = local_178;
        pdVar3[5] = dVar24;
      }
      iVar6 = *(int *)(param_1 + 0x54);
    }
  }
  if (iVar6 != 1) goto LAB_148013bf3;
  fVar7 = *(float *)(param_1 + 0x50) - *(float *)(*param_2 + 0x18);
  *(float *)(param_1 + 0x50) = fVar7;
  if (fVar7 <= 0.0) {
    *(double *)(param_1 + 0x30) = DAT_14c8464f0;
    dVar20 = DAT_14c8464e8;
    *(double *)(param_1 + 0x20) = DAT_14c8464e0;
    *(double *)(param_1 + 0x28) = dVar20;
    dVar20 = DAT_14c846500;
    *(double *)(param_1 + 0x38) = DAT_14c8464f8;
    *(double *)(param_1 + 0x40) = dVar20;
    *(double *)(param_1 + 0x48) = DAT_14c846508;
    *(undefined8 *)(param_1 + 0x50) = 0x2bf800000;
    goto LAB_148013bf3;
  }
  fVar15 = DAT_14c762774;
  if (DAT_14c762774 <= 0.01) {
    fVar15 = 0.01;
  }
  dVar24 = (double)((fVar15 - fVar7) / fVar15);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar8 = DAT_14c846500 - dVar20;
  dVar21 = *(double *)(param_1 + 0x38);
  dVar9 = DAT_14c8464f8 - dVar21;
  dVar17 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar27._8_8_ = dVar8;
  auVar27._0_8_ = dVar9;
  auVar10 = divpd(auVar27,_DAT_1499387d0);
  auVar10 = roundpd(auVar10,auVar10,3);
  dVar9 = dVar9 - auVar10._0_8_ * dVar17;
  dVar8 = dVar8 - auVar10._8_8_ * dVar1;
  auVar22._0_8_ = dVar9 + dVar17;
  auVar22._8_8_ = dVar8 + dVar1;
  auVar11._8_8_ = -(ulonglong)(0.0 <= dVar8);
  auVar11._0_8_ = -(ulonglong)(0.0 <= dVar9);
  auVar23._8_4_ = SUB84(dVar8,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar23 = blendvpd(auVar22,auVar23,auVar11);
  dVar9 = *(double *)(param_1 + 0x48);
  dVar8 = DAT_14c846508 - dVar9;
  auVar12._0_8_ = dVar8 / 360.0;
  auVar12._8_8_ = 0;
  auVar10 = roundpd(auVar12,auVar12,3);
  auVar28._0_8_ = dVar8 - auVar10._0_8_ * dVar17;
  auVar28._8_8_ = 0.0 - auVar10._8_8_ * dVar1;
  auVar26._0_8_ = dVar17 + auVar28._0_8_;
  auVar26._8_8_ = dVar1 + auVar28._8_8_;
  auVar13._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
  auVar13._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
  auVar27 = blendvpd(auVar26,auVar28,auVar13);
  dVar17 = auVar23._8_8_ + -360.0;
  auVar14._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
  auVar14._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
  auVar10._8_4_ = SUB84(dVar17,0);
  auVar10._0_8_ = auVar23._0_8_ + -360.0;
  auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar10 = blendvpd(auVar23,auVar10,auVar14);
  dVar25 = auVar27._0_8_;
  dVar17 = *pdVar3;
  dVar1 = pdVar3[1];
  dVar8 = pdVar3[2];
  dVar16 = (DAT_14c8464f0 - *(double *)(param_1 + 0x30)) * dVar24 + *(double *)(param_1 + 0x30) +
           dVar8;
  dVar18 = (DAT_14c8464e8 - *(double *)(param_1 + 0x28)) * dVar24 + *(double *)(param_1 + 0x28) +
           dVar1;
  dVar19 = (DAT_14c8464e0 - *(double *)(param_1 + 0x20)) * dVar24 + *(double *)(param_1 + 0x20) +
           dVar17;
  if (((dVar17 != dVar19) || (NAN(dVar17) || NAN(dVar19))) ||
     ((dVar1 != dVar18 || (NAN(dVar1) || NAN(dVar18))))) {
LAB_148013b7b:
    *(undefined1 *)(pdVar3 + 0xe) = 1;
    *pdVar3 = dVar19;
    pdVar3[1] = dVar18;
    pdVar3[2] = dVar16;
  }
  else if ((dVar8 != dVar16) || (NAN(dVar8) || NAN(dVar16))) goto LAB_148013b7b;
  dVar17 = pdVar3[3];
  dVar1 = pdVar3[4];
  dVar8 = pdVar3[5];
  dVar9 = (double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                  (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25)) * dVar24 + dVar9 +
          dVar8;
  dVar20 = auVar10._8_8_ * dVar24 + dVar20 + dVar1;
  dVar21 = auVar10._0_8_ * dVar24 + dVar21 + dVar17;
  if ((((dVar17 != dVar21) || (NAN(dVar17) || NAN(dVar21))) || (dVar1 != dVar20)) ||
     (NAN(dVar1) || NAN(dVar20))) {
LAB_148013bc0:
    *(undefined1 *)((longlong)pdVar3 + 0x71) = 1;
    pdVar3[3] = dVar21;
    pdVar3[4] = dVar20;
    pdVar3[5] = dVar9;
  }
  else if ((dVar8 != dVar9) || (NAN(dVar8) || NAN(dVar9))) goto LAB_148013bc0;
  *(undefined2 *)(param_3 + 1) = 0;
LAB_148013bf3:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480140fa FUN_1480140fa body=435 status=ok
// SIG undefined FUN_1480140fa(void)

byte FUN_1480140fa(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = param_1[3];
  dVar8 = param_1[4];
  dVar2 = param_1[5];
  dVar10 = 1.0 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar8 * dVar8);
  dVar3 = param_2[3];
  dVar4 = param_2[4];
  dVar5 = param_2[5];
  dVar7 = 1.0 / SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4);
  dVar6 = dVar2 * dVar10 * dVar5 * dVar7 +
          dVar10 * dVar1 * dVar7 * dVar3 + dVar8 * dVar10 * dVar4 * dVar7;
  dVar9 = 1.0 - dVar6 * dVar6;
  if ((dVar9 != 0.0) || (NAN(dVar9))) {
    dVar8 = dVar2 * dVar10 * (param_2[2] - param_1[2]) +
            dVar10 * dVar1 * (*param_2 - *param_1) + dVar8 * dVar10 * (param_2[1] - param_1[1]);
    dVar1 = (param_2[2] - param_1[2]) * dVar5 * dVar7 +
            (*param_2 - *param_1) * dVar7 * dVar3 + dVar4 * dVar7 * (param_2[1] - param_1[1]);
    *param_3 = (dVar8 - dVar1 * dVar6) / dVar9;
    *param_4 = (dVar8 * dVar6 - dVar1) / dVar9;
  }
  return -(dVar9 != 0.0) & 1;
}



// FUNCTION 1480142ae FUN_1480142ae body=199 status=ok
// SIG undefined FUN_1480142ae(void)

void FUN_1480142ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14480c34d(param_3,param_1 + 0x20);
  FUN_1401fb57a(param_3,param_1 + 0x38);
  puVar1 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x50),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar1 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148014344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x170))(param_3,puVar2,4);
      return;
    }
    thunk_FUN_14572512c(param_3,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  return;
}



// FUNCTION 148014376 FUN_148014376 body=114 status=ok
// SIG undefined FUN_148014376(void)

undefined8 FUN_148014376(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong *)(param_1 + 0x38);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_1480143ea(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480143ea FUN_1480143ea body=171 status=ok
// SIG undefined FUN_1480143ea(void)

undefined8 * FUN_1480143ea(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_28 = 0;
  FUN_14802557a(&local_48,*param_2,(ulonglong)(param_2[1] - *param_2) >> 3);
  (*(code *)(&PTR_LAB_14ad0ff10)[*(byte *)(param_1 + 6)])(param_1);
  if (local_28 == 0) {
    param_1[2] = local_38;
    param_1[3] = uStack_30;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
  }
  param_1[4] = local_28;
  *(undefined4 *)(param_1 + 5) = local_20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_1c;
  *(undefined1 *)(param_1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480144a4 FUN_1480144a4 body=38 status=ok
// SIG undefined FUN_1480144a4(void)

void FUN_1480144a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  thunk_FUN_147fe7e0c(*param_3,*(undefined8 *)(param_2 + 0x10),1);
  *(undefined2 *)(param_3 + 1) = 0x101;
  return;
}



// FUNCTION 1480144ca FUN_1480144ca body=75 status=ok
// SIG undefined FUN_1480144ca(void)

void FUN_1480144ca(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  lVar2 = *param_3;
  FUN_147fd9eac(lVar2,lVar1);
  if ((*(char *)(lVar1 + 0xad0) != '\0') || (*(char *)(*param_2 + 0x20) == '\x01')) {
    *(undefined1 *)(lVar2 + 0xad0) = 1;
  }
  *(undefined2 *)(param_3 + 1) = 0x101;
  return;
}



// FUNCTION 148014526 FUN_148014526 body=82 status=ok
// SIG undefined FUN_148014526(void)

void FUN_148014526(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_1c);
  *(undefined4 *)(param_1 + 3) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801457a FUN_14801457a body=69 status=ok
// SIG undefined FUN_14801457a(void)

void FUN_14801457a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  thunk_FUN_147fe7f78(*param_3,*(undefined8 *)(param_2 + 0x10),*(uint *)(param_2 + 0x18) | 1,
                      *(undefined4 *)(param_1 + 0x18));
  *(bool *)(param_3 + 1) = 1.0 <= *(float *)(param_1 + 0x18);
  *(undefined1 *)((longlong)param_3 + 9) = *(undefined1 *)(param_1 + 0x1c);
  return;
}



// FUNCTION 1480145c0 FUN_1480145c0 body=58 status=ok
// SIG undefined FUN_1480145c0(void)

void FUN_1480145c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  FUN_147fd9f5a(*param_3,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x18));
  *(bool *)(param_3 + 1) = 1.0 <= *(float *)(param_1 + 0x18);
  *(undefined1 *)((longlong)param_3 + 9) = *(undefined1 *)(param_1 + 0x1c);
  return;
}



// FUNCTION 1480145fa FUN_1480145fa body=224 status=ok
// SIG undefined FUN_1480145fa(void)

void FUN_1480145fa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  piVar2 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x1c);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x1c) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x1c) = *piVar2 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480146dc FUN_1480146dc body=207 status=ok
// SIG undefined FUN_1480146dc(void)

void FUN_1480146dc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    lVar3 = FUN_1459ec6e2();
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148014701;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_148014701;
      }
    }
  }
  lVar4 = 0;
LAB_148014701:
  fVar5 = *(float *)(param_2 + 0x18) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar5;
  if (*(float *)(lVar4 + 0x38) <= fVar5) {
    *(float *)(param_1 + 4) = *(float *)(lVar4 + 0x38);
    *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  }
  local_24 = 0;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_24);
  *(undefined4 *)(param_1 + 3) = local_24;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480147b0 FUN_1480147b0 body=196 status=ok
// SIG undefined FUN_1480147b0(void)

void FUN_1480147b0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_1480147c4:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_145b68202();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) goto LAB_1480147c4;
    lVar4 = 0;
    if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_1480147c4;
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar4 = lVar1;
      }
    }
  }
  fVar5 = (float)FUN_1480136fa(param_1);
  if (*(int *)(lVar4 + 0x40) == 1) {
    fVar7 = fVar5 * fVar5;
    fVar6 = (fVar5 * 6.0 + -15.0) * fVar5 + 10.0;
  }
  else {
    if (*(int *)(lVar4 + 0x40) != 0) {
      fVar6 = 1.0;
      goto LAB_14801485e;
    }
    fVar6 = 3.0 - (fVar5 + fVar5);
    fVar7 = fVar5;
  }
  fVar6 = fVar6 * fVar7 * fVar5;
LAB_14801485e:
  *param_3 = fVar6;
  return;
}



// FUNCTION 148014888 FUN_148014888 body=560 status=ok
// SIG undefined FUN_148014888(void)

void FUN_148014888(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 **ppuVar9;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_1480148ae:
    lVar8 = 0;
  }
  else {
    lVar7 = FUN_145b682ec();
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_1480148ae;
    lVar8 = 0;
    if ((lVar7 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_1480148ae;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        lVar8 = lVar3;
      }
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar8 + 0x78;
  if (*(longlong *)(lVar8 + 0x80) != 0) {
    uVar5 = FUN_1447addd0(*(longlong *)(lVar8 + 0x80) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    uVar6 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  *(longlong *)(param_1 + 0x28) = lVar8 + 0x48;
  if (*(longlong *)(lVar8 + 0x60) != 0) {
    uVar5 = FUN_1447addd0(*(longlong *)(lVar8 + 0x60) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    uVar6 = (**(code **)(**(longlong **)(lVar8 + 0x60) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar6;
  }
  plVar1 = *(longlong **)(lVar8 + 0x90);
  if (plVar1 == (longlong *)0x0) {
    local_30 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    local_30[1] = 0;
    local_30[2] = 0;
    *(undefined8 *)((longlong)local_30 + 0x11) = 0;
    *(undefined8 *)((longlong)local_30 + 0x19) = 0;
    *local_30 = &PTR_FUN_14ad2a860;
  }
  else {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_30);
  }
  ppuVar9 = (undefined8 **)(param_1 + 0x38);
  if (ppuVar9 == &local_30) {
LAB_148014975:
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  else {
    puVar2 = *ppuVar9;
    *ppuVar9 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      goto LAB_148014975;
    }
  }
  plVar1 = *(longlong **)(lVar8 + 0x98);
  if (plVar1 == (longlong *)0x0) {
    local_30 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    local_30[1] = 0;
    local_30[2] = 0;
    *(undefined8 *)((longlong)local_30 + 0x11) = 0;
    *(undefined8 *)((longlong)local_30 + 0x19) = 0;
    *local_30 = &PTR_FUN_14ad2a860;
  }
  else {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_30);
  }
  ppuVar9 = (undefined8 **)(param_1 + 0x40);
  if (ppuVar9 != &local_30) {
    puVar2 = *ppuVar9;
    *ppuVar9 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1480149e7;
    (**(code **)*puVar2)(puVar2,1);
  }
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
LAB_1480149e7:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148014aba FUN_148014aba body=514 status=ok
// SIG undefined FUN_148014aba(void)

void FUN_148014aba(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  double *local_88;
  double *local_80;
  double local_70;
  double local_68;
  double local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 8) == 0) goto LAB_148014b15;
  lVar7 = FUN_147fd85c6();
  lVar8 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x28);
  if ((lVar8 == 0 || lVar7 == 0) ||
     (FUN_148014cbe(param_1,&local_70,param_2,param_3), local_58 != '\x01')) goto LAB_148014b15;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_148014b68:
    lVar10 = 0;
  }
  else {
    lVar9 = FUN_145b682ec();
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 == 0) goto LAB_148014b68;
    lVar10 = 0;
    if ((lVar9 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_148014b68;
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        lVar10 = lVar4;
      }
    }
  }
  if ((*(longlong *)(lVar10 + 0x70) == 0) || (cVar6 = FUN_148014e50(param_3 + 0x11), cVar6 != '\0'))
  {
    if (*(int *)(param_2 + 0x1c) == 0) {
      local_88 = param_3;
      FUN_148014e94(param_1,lVar7,&local_70,param_2);
      local_88 = (double *)param_2;
      local_80 = param_3;
      FUN_1438df96c(param_1,lVar7,lVar8,&local_70);
    }
    else {
      dVar1 = *param_3;
      dVar2 = param_3[1];
      dVar3 = param_3[2];
      dVar13 = (double)*(float *)(param_1 + 0x54);
      dVar11 = (local_60 - dVar3) * dVar13 + dVar3;
      dVar12 = (local_68 - dVar2) * dVar13 + dVar2;
      dVar13 = (local_70 - dVar1) * dVar13 + dVar1;
      if ((dVar1 == dVar13) && (!NAN(dVar1) && !NAN(dVar13))) {
        if ((dVar2 == dVar12) && (!NAN(dVar2) && !NAN(dVar12))) {
          if ((dVar3 == dVar11) && (!NAN(dVar3) && !NAN(dVar11))) goto LAB_148014b15;
        }
      }
      *(undefined1 *)(param_3 + 0xe) = 1;
      *param_3 = dVar13;
      param_3[1] = dVar12;
      param_3[2] = dVar11;
    }
  }
  else {
    local_88 = (double *)param_2;
    local_80 = param_3;
    FUN_1480152a4(param_1,0,0,&local_70);
  }
LAB_148014b15:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148014cbe FUN_148014cbe body=400 status=ok
// SIG undefined FUN_148014cbe(void)

undefined4 * FUN_148014cbe(longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_3 != 0) && (param_3[1] != 0)) {
    FUN_148014fb4(param_1,&local_50,param_3);
    if (local_38 == '\x01') {
      local_68 = local_40;
      local_78 = local_50;
      uStack_74 = uStack_4c;
      uStack_70 = uStack_48;
      uStack_6c = uStack_44;
      pdVar3 = (double *)FUN_1480150c2(param_1 + 0x28,param_4 + 0x88);
      local_98 = *pdVar3;
      dStack_90 = pdVar3[1];
      local_88 = pdVar3[2];
      if ((local_98 != 0.0) || (NAN(local_98))) {
LAB_148014dc4:
        if (*(longlong *)(param_1 + 8) == 0) {
LAB_148014dcb:
          lVar5 = 0;
        }
        else {
          lVar4 = FUN_145b682ec();
          lVar1 = *(longlong *)(param_1 + 8);
          if (lVar1 == 0) goto LAB_148014dcb;
          lVar5 = 0;
          if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
            if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_148014dcb;
            lVar5 = 0;
            if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30) {
              lVar5 = lVar1;
            }
          }
        }
        uVar6 = 3;
        if ((byte)*(int *)(lVar5 + 0x68) < 5) {
          uVar6 = 0x400030201U >> ((byte)(*(int *)(lVar5 + 0x68) << 3) & 0x3f) & 0xffffffff;
        }
        local_a8 = &local_78;
        local_60 = param_3;
        local_58 = param_4;
        FUN_1480126b2(&local_60,local_a8,&local_98,uVar6);
      }
      else {
        if ((dStack_90 != 0.0) || (NAN(dStack_90))) goto LAB_148014dc4;
        if ((local_88 != 0.0) || (NAN(local_88))) goto LAB_148014dc4;
      }
      *(undefined8 *)(param_2 + 4) = local_68;
      *param_2 = local_78;
      param_2[1] = uStack_74;
      param_2[2] = uStack_70;
      param_2[3] = uStack_6c;
      *(undefined1 *)(param_2 + 6) = 1;
      goto LAB_148014cf5;
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
LAB_148014cf5:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148014e50 FUN_148014e50 body=67 status=ok
// SIG undefined FUN_148014e50(void)

ulonglong FUN_148014e50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,*(undefined1 *)(param_2 + 0x40));
  uVar1 = FUN_1447addd0(param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7c44(param_1,uVar1);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xc) & 4) != 0)) &&
     (puVar3 = (undefined1 *)((ulonglong)*(uint *)(lVar2 + 8) + *(longlong *)(param_1 + 0x60)),
     puVar3 != (undefined1 *)0x0)) {
    uVar4 = CONCAT71(uVar5,*puVar3);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148014e94 FUN_148014e94 body=287 status=ok
// SIG undefined FUN_148014e94(void)

void FUN_148014e94(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [304];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b682ec();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148014ecb;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_148014ecb;
      }
    }
  }
  lVar5 = 0;
LAB_148014ecb:
  if ((*(char *)(lVar5 + 0xa0) == '\x01') && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_144b20cb4(local_188);
    cVar3 = FUN_144a410ba(param_2,param_1 + 0x48,local_188);
    if (cVar3 != '\0') {
      local_198 = local_58;
      local_190 = local_50;
      local_1a8 = param_5;
      FUN_148015192(param_1,&local_198,param_3,param_4);
    }
    FUN_1449b675c(local_188);
  }
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148014fb4 FUN_148014fb4 body=268 status=ok
// SIG undefined FUN_148014fb4(void)

undefined4 * FUN_148014fb4(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b682ec();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148015020;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_148015020;
      }
    }
  }
  lVar5 = 0;
LAB_148015020:
  if ((*(longlong *)(lVar5 + 0x40) == 0) ||
     (cVar3 = FUN_1480150fe(param_4 + 0x88,*(longlong *)(lVar5 + 0x40),&local_50), cVar3 == '\0')) {
    cVar3 = '\x03';
    if (*(byte *)(lVar5 + 0x38) < 4) {
      cVar3 = *(byte *)(lVar5 + 0x38) + 1;
    }
    local_38 = param_3;
    local_30 = param_4;
    cVar3 = FUN_148012492(&local_38,cVar3,&local_50);
    if (cVar3 != '\0') {
      *(undefined8 *)(param_2 + 4) = local_40;
      *param_2 = local_50;
      param_2[1] = uStack_4c;
      param_2[2] = uStack_48;
      param_2[3] = uStack_44;
    }
    *(bool *)(param_2 + 6) = cVar3 != '\0';
  }
  else {
    *(undefined8 *)(param_2 + 4) = local_40;
    *param_2 = local_50;
    param_2[1] = uStack_4c;
    param_2[2] = uStack_48;
    param_2[3] = uStack_44;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1480150c2 FUN_1480150c2 body=60 status=ok
// SIG undefined FUN_1480150c2(void)

longlong FUN_1480150c2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((((int)param_1[1] == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (lVar1 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60), lVar1 == 0)) {
    lVar1 = *param_1;
  }
  return lVar1;
}



// FUNCTION 1480150fe FUN_1480150fe body=83 status=ok
// SIG undefined FUN_1480150fe(void)

undefined8 FUN_1480150fe(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1447addd0(param_2 + 0x2c,0x10);
  lVar2 = FUN_147fe7c44(param_1,uVar1);
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xc) & 4) == 0)) ||
     (puVar3 = (undefined8 *)((ulonglong)*(uint *)(lVar2 + 8) + *(longlong *)(param_1 + 0x60)),
     puVar3 == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    param_3[2] = puVar3[2];
    uVar4 = puVar3[1];
    *param_3 = *puVar3;
    param_3[1] = uVar4;
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 148015152 FUN_148015152 body=64 status=ok
// SIG undefined FUN_148015152(void)

undefined4 FUN_148015152(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if ((((*(int *)(param_1 + 1) == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (puVar2 = (undefined4 *)((ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60)),
     puVar2 == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*param_1;
  }
  return *puVar2;
}



// FUNCTION 148015192 FUN_148015192 body=273 status=ok
// SIG undefined FUN_148015192(void)

void FUN_148015192(double param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar6 = 0.0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    param_1 = 0.0;
    do {
      if ((*(byte *)(lVar1 + 0xad + lVar3) & 1) != 0) {
        dVar4 = *(double *)(lVar1 + 0x88 + lVar3);
        dVar8 = dVar4 - *(double *)(lVar1 + 0x70 + lVar3);
        dVar7 = *(double *)(lVar1 + 0x90 + lVar3);
        dVar9 = dVar7 - *(double *)(lVar1 + 0x78 + lVar3);
        dVar5 = *(double *)(lVar1 + 0x98 + lVar3);
        dVar10 = dVar5 - *(double *)(lVar1 + 0x80 + lVar3);
        dVar10 = SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
        if (0.0 < dVar10) {
          dVar4 = *(double *)(lVar1 + 0x10 + lVar3) - dVar4;
          dVar7 = *(double *)(lVar1 + 0x18 + lVar3) - dVar7;
          dVar5 = *(double *)(lVar1 + 0x20 + lVar3) - dVar5;
          param_1 = SQRT(dVar5 * dVar5 + dVar7 * dVar7 + dVar4 * dVar4) / dVar10;
          fVar6 = (float)param_1;
          uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
          goto LAB_1480151af;
        }
      }
      lVar3 = lVar3 + 0x100;
    } while ((longlong)(int)param_2[1] * 0x100 != lVar3);
  }
  uVar2 = 0;
LAB_1480151af:
  FUN_1480152a4(param_1,uVar2,fVar6,param_3,param_4,param_5);
  return;
}



// FUNCTION 1480152a4 FUN_1480152a4 body=536 status=ok
// SIG undefined FUN_1480152a4(void)

void FUN_1480152a4(longlong param_1,char param_2,float param_3,double *param_4,longlong param_5,
                  double *param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [40];
  double *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == '\0') &&
     (*(float *)(param_1 + 0x54) <= 1e-08 && *(float *)(param_1 + 0x54) != 1e-08)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    goto LAB_14801541c;
  }
  if (param_3 <= *(float *)(param_1 + 0x50)) {
    if (param_3 < *(float *)(param_1 + 0x50)) {
      fVar9 = *(float *)(param_1 + 0x54);
      local_64 = *(undefined1 *)(param_5 + 0x20);
      local_68 = *(undefined4 *)(param_5 + 0x18);
      iVar8 = 1;
LAB_14801547b:
      lVar7 = 0x40;
      goto LAB_148015345;
    }
    iVar8 = *(int *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x54);
    local_64 = *(undefined1 *)(param_5 + 0x20);
    local_68 = *(undefined4 *)(param_5 + 0x18);
    local_70 = param_6 + 0x11;
    if (iVar8 == 0) goto LAB_148015340;
    if (iVar8 == 1) goto LAB_14801547b;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x54);
    local_64 = *(undefined1 *)(param_5 + 0x20);
    local_68 = *(undefined4 *)(param_5 + 0x18);
    iVar8 = 0;
LAB_148015340:
    lVar7 = 0x38;
LAB_148015345:
    local_70 = param_6 + 0x11;
    plVar6 = *(longlong **)(param_1 + lVar7);
    lVar1 = plVar6[2];
    lVar2 = plVar6[3];
    plVar6[2] = (longlong)(double)fVar9;
    plVar6[3] = (longlong)(double)param_3;
    (**(code **)(*plVar6 + 8))(plVar6,lVar1,lVar2);
    plVar6 = *(longlong **)(param_1 + lVar7);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_68,&local_70);
    fVar9 = (float)(double)plVar6[2];
  }
  if (0.0 < fVar9) {
    dVar3 = *param_6;
    dVar4 = param_6[1];
    dVar5 = param_6[2];
    dVar12 = (double)fVar9;
    dVar10 = (param_4[2] - dVar5) * dVar12 + dVar5;
    dVar11 = (param_4[1] - dVar4) * dVar12 + dVar4;
    dVar12 = (*param_4 - dVar3) * dVar12 + dVar3;
    if ((dVar3 == dVar12) && (!NAN(dVar3) && !NAN(dVar12))) {
      if ((dVar4 == dVar11) && (!NAN(dVar4) && !NAN(dVar11))) {
        if ((dVar5 == dVar10) && (!NAN(dVar5) && !NAN(dVar10))) goto LAB_14801540f;
      }
    }
    *(undefined1 *)(param_6 + 0xe) = 1;
    *param_6 = dVar12;
    param_6[1] = dVar11;
    param_6[2] = dVar10;
  }
LAB_14801540f:
  *(float *)(param_1 + 0x50) = param_3;
  *(float *)(param_1 + 0x54) = fVar9;
  *(int *)(param_1 + 0x58) = iVar8;
LAB_14801541c:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480154ca FUN_1480154ca body=378 status=ok
// SIG undefined FUN_1480154ca(void)

void FUN_1480154ca(undefined8 *param_1)

{
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_1 = &PTR_LAB_14ad2da80;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_148025bf0(&local_f8,param_1 + 8);
  FUN_148015646(&local_f8,&local_a8);
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  FUN_148025d98(&local_148,&local_a8);
  FUN_14801579c(param_1,&local_148);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_148025b38(&local_a8);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_148023db4(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_148025d62(param_1 + 8);
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148015646 FUN_148015646 body=341 status=ok
// SIG undefined FUN_148015646(void)

void FUN_148015646(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
  longlong local_80;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar2 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (local_48 != plVar1)) {
    do {
      local_50 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10);
      local_80 = FUN_14479d2ce();
      if (local_80 != 0) {
        FUN_148025e88(param_2,local_84,&local_80);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar2));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_148025d62(param_1);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801579c FUN_14801579c body=561 status=ok
// SIG undefined FUN_14801579c(void)

void FUN_14801579c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_2 + 2;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  iVar7 = 0;
  plStack_80 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_88);
    iVar7 = (int)param_2[5];
  }
  local_98 = local_78;
  lVar3 = local_98;
  local_90 = (undefined4)uStack_70;
  local_8c = uStack_70._4_4_;
  local_a8 = local_88;
  local_a0 = plStack_80;
  local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  local_b0 = param_2;
  if ((local_98._4_4_ != iVar7) || (plStack_80 != plVar1)) {
    plVar6 = (longlong *)(param_1 + 0x90);
    iVar4 = local_98._4_4_;
    local_98 = lVar3;
    do {
      plVar2 = *(longlong **)(*local_b0 + (longlong)iVar4 * 0x10);
      if (plVar2 != (longlong *)0x0) {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        local_b8 = 0;
        FUN_14485c47a(&local_b8,plVar2);
        local_68 = local_b8;
        iVar4 = FUN_148026bf6(plVar6,(uint)((ulonglong)local_b8 >> 0x20) ^ (uint)local_b8,&local_68)
        ;
        if (iVar4 != -1) {
          FUN_1480271c0(&local_88,*plVar6 + (longlong)iVar4 * 0x30 + 8);
          FUN_148027230(plVar6,iVar4);
          uVar8 = (ulonglong)(int)plStack_80;
          if (0 < (longlong)uVar8) {
            uVar5 = 0;
            do {
              (**(code **)(*plVar2 + 0x638))
                        (plVar2,uVar5 & 0xffffffff,*(undefined8 *)(local_88 + uVar5 * 8));
              uVar5 = uVar5 + 1;
            } while (uVar8 != uVar5);
          }
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
      FUN_1449c0562(&local_a8);
      iVar4 = local_98._4_4_;
      lVar3 = local_98;
    } while (local_b0 != param_2 || (local_a0 != plVar1 || local_98._4_4_ != iVar7));
  }
  local_98 = lVar3;
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_148025b38(param_2);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480159ce FUN_1480159ce body=93 status=ok
// SIG undefined FUN_1480159ce(void)

void FUN_1480159ce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    lVar1 = FUN_147fd85c6();
    if (lVar1 != 0) {
      FUN_148015a2c(param_1,lVar1);
      FUN_1438dff34(param_1,lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148015a2c FUN_148015a2c body=1096 status=ok
// SIG undefined FUN_148015a2c(void)

void FUN_148015a2c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_458 [36];
  undefined1 local_434 [4];
  longlong *local_430;
  undefined8 local_428;
  undefined1 *local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 local_408;
  undefined1 *local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [64];
  longlong local_308;
  undefined4 local_300;
  undefined1 local_2f8 [64];
  longlong local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  longlong local_258 [4];
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  longlong local_208 [2];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  int local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [304];
  longlong local_88;
  int local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_144b20cb4(local_1b8);
    cVar2 = FUN_144a410ba(param_2,param_1 + 0x38,local_1b8);
    if (cVar2 != '\0') {
      local_1e8 = 0;
      local_1e0 = 0;
      local_208[0] = 0;
      local_208[1] = 0;
      local_1dc = 0xffffffff00000080;
      local_1d4 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      if ((longlong)local_80 != 0) {
        lVar8 = (longlong)local_80 << 8;
        lVar7 = local_88 + 0xd8;
        do {
          lVar4 = FUN_14479d2ce(lVar7);
          if (lVar4 != 0) {
            lVar5 = FUN_144a7a726();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              local_258[0] = lVar4;
              FUN_148025e88(local_208,local_2f8,local_258);
            }
          }
          lVar7 = lVar7 + 0x100;
          lVar8 = lVar8 + -0x100;
        } while (lVar8 != 0);
      }
      local_238 = 0;
      local_230 = 0;
      local_258[0] = 0;
      local_258[1] = 0;
      local_22c = 0xffffffff00000080;
      local_224 = 0;
      local_218 = 0;
      local_210 = 0;
      lVar7 = param_1 + 0x40;
      local_288 = 0;
      local_280 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_27c = 0xffffffff00000080;
      local_274 = 0;
      local_268 = 0;
      local_260 = 0;
      FUN_148025bf0(&local_2a8,lVar7);
      FUN_148015646(&local_2a8,local_258);
      FUN_148015e76(local_208,local_2f8,local_258);
      FUN_148015e76(local_258,local_348,local_208);
      FUN_148016086(lVar7);
      local_408 = 0x100000000;
      local_3f8 = 0xffffffff;
      local_3f0 = 0;
      iVar6 = 0;
      local_400 = local_1f8;
      if (local_1e0 != 0) {
        FUN_1449c0562(&local_408);
        iVar6 = local_1e0;
      }
      local_418 = local_3f8;
      uVar1 = local_418;
      local_410 = local_3f0;
      local_40c = local_3ec;
      local_428 = local_408;
      local_420 = local_400;
      local_418._4_4_ = (int)((ulonglong)local_3f8 >> 0x20);
      local_430 = local_208;
      if ((local_418._4_4_ != iVar6) || (local_400 != local_1f8)) {
        iVar3 = local_418._4_4_;
        local_418 = uVar1;
        do {
          local_408 = 0;
          FUN_14485c47a(&local_408,*(undefined8 *)(*local_430 + (longlong)iVar3 * 0x10));
          FUN_148026656(lVar7,local_434,&local_408);
          local_418 = CONCAT44(local_418._4_4_,(uint)local_418 & ~local_428._4_4_);
          FUN_1449c0562(&local_428);
          iVar3 = local_418._4_4_;
          uVar1 = local_418;
        } while (local_430 != local_208 || (local_420 != local_1f8 || local_418._4_4_ != iVar6));
      }
      local_418 = uVar1;
      local_378 = 0;
      local_370 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_36c = 0xffffffff00000080;
      local_364 = 0;
      local_358 = 0;
      local_350 = 0;
      FUN_148025d98(&local_398,local_2f8);
      FUN_1480160ca(param_1,&local_398);
      local_3c8 = 0;
      local_3c0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3bc = 0xffffffff00000080;
      local_3b4 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      FUN_148025d98(&local_3e8,local_348);
      FUN_14801579c(param_1,&local_3e8);
      *(undefined8 *)(param_1 + 0x38) = 0;
      local_300 = 0;
      if (local_308 != 0) {
        FUN_1400020a8();
      }
      FUN_148025b38(local_348);
      local_2b0 = 0;
      if (local_2b8 != 0) {
        FUN_1400020a8();
      }
      FUN_148025b38(local_2f8);
      local_210 = 0;
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      FUN_148025b38(local_258);
      local_1c0 = 0;
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      FUN_148025b38(local_208);
    }
    FUN_1449b675c(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148015e76 FUN_148015e76 body=525 status=ok
// SIG undefined FUN_148015e76(void)

undefined8 * FUN_148015e76(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
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
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_148026374(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_148026196(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar1 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar3 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar3 = param_3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)param_3[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ulonglong *)(*param_3 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_148015ff1;
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_3 + 8);
          } while (iVar2 != -1);
        }
      }
      FUN_148025e88(param_2,&local_58,*local_80 + (longlong)iStack_64 * 0x10);
LAB_148015ff1:
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148016086 FUN_148016086 body=68 status=ok
// SIG undefined FUN_148016086(void)

void FUN_148016086(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148026512();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1480160ca FUN_1480160ca body=819 status=ok
// SIG undefined FUN_1480160ca(void)

void FUN_1480160ca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[1] != 0) {
    lVar12 = FUN_145b683d6();
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      lVar10 = 0;
      if ((lVar12 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0)) goto LAB_14801613a;
      if (*(int *)(lVar12 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar10 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
            lVar12 + 0x30) {
          lVar10 = lVar4;
        }
        goto LAB_14801613a;
      }
    }
  }
  lVar10 = 0;
LAB_14801613a:
  local_b0 = *(longlong *)(lVar10 + 0x38);
  uVar8 = local_80;
  if (local_b0 != 0) {
    plVar1 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    iVar11 = 0;
    local_c8 = param_1;
    local_68 = plVar1;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
      iVar11 = (int)param_2[5];
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = local_60;
    uVar8 = local_80;
    local_78 = local_58;
    local_74 = local_54;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = param_2;
    if ((local_80._4_4_ != iVar11) || (local_68 != plVar1)) {
      local_c8 = local_c8 + 0x12;
      iVar6 = local_80._4_4_;
      local_80 = uVar8;
      do {
        plVar3 = *(longlong **)(*local_98 + (longlong)iVar6 * 0x10);
        if (plVar3 != (longlong *)0x0) {
          local_a0 = (undefined8 *)0x0;
          FUN_14485c47a(&local_a0,plVar3);
          local_70 = local_a0;
          iVar6 = FUN_148026bf6(local_c8,(uint)((ulonglong)local_a0 >> 0x20) ^ (uint)local_a0,
                                &local_70);
          if (iVar6 == -1) {
            local_a8 = 0;
            FUN_14485c47a(&local_a8,plVar3);
            plVar5 = local_c8;
            local_70 = &local_a8;
            FUN_148026cb0(local_c8,&local_4c,&local_70);
            lVar12 = (longlong)local_4c;
            lVar4 = *plVar5;
            iVar6 = (**(code **)(*plVar3 + 0x7b0))(plVar3);
            if (0 < iVar6) {
              lVar4 = lVar4 + lVar12 * 0x30;
              local_c0 = (longlong *)(lVar4 + 0x18);
              iVar6 = 0;
              do {
                uVar8 = FUN_1448c9576(plVar3,iVar6);
                uVar9 = (**(code **)(*plVar3 + 0x678))(plVar3,iVar6,local_b0,0);
                iVar7 = *(int *)(lVar4 + 0x10);
                *(uint *)(lVar4 + 0x10) = iVar7 + 1U;
                if (*(uint *)(lVar4 + 0x14) < iVar7 + 1U) {
                  local_b8 = uVar8;
                  FUN_144769b64((longlong *)(lVar4 + 8),iVar7);
                  uVar8 = local_b8;
                }
                *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)iVar7 * 8) = uVar8;
                iVar7 = *(int *)(lVar4 + 0x20);
                *(uint *)(lVar4 + 0x20) = iVar7 + 1U;
                if (*(uint *)(lVar4 + 0x24) < iVar7 + 1U) {
                  FUN_144769b64(local_c0,iVar7);
                }
                *(undefined8 *)(*local_c0 + (longlong)iVar7 * 8) = uVar9;
                (**(code **)(*plVar3 + 0x638))(plVar3,iVar6);
                iVar6 = iVar6 + 1;
                iVar7 = (**(code **)(*plVar3 + 0x7b0))(plVar3);
              } while (iVar6 < iVar7);
            }
          }
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar6 = local_80._4_4_;
        uVar8 = local_80;
      } while (local_98 != param_2 || (local_88 != plVar1 || local_80._4_4_ != iVar11));
    }
  }
  local_80 = uVar8;
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_148025b38(param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148016420 FUN_148016420 body=214 status=ok
// SIG undefined FUN_148016420(void)

void FUN_148016420(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = FUN_145b684c0();
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar6 = 0;
      if ((lVar7 == 0) || (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 == 0)) goto LAB_14801643f;
      if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar6 = lVar3;
        }
        goto LAB_14801643f;
      }
    }
  }
  lVar6 = 0;
LAB_14801643f:
  iVar1 = *(int *)(lVar6 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x38);
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar7) != 0) {
        uVar5 = FUN_147fdaba2(param_2);
        iVar2 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
          FUN_148002906((longlong *)(param_1 + 0x18),iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = uVar5;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 1480164f6 FUN_1480164f6 body=78 status=ok
// SIG undefined FUN_1480164f6(void)

void FUN_1480164f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_147fdae0a(lVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148016566 FUN_148016566 body=259 status=ok
// SIG undefined FUN_148016566(void)

void FUN_148016566(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_14801658d:
    lVar7 = 0;
  }
  else {
    lVar6 = FUN_145b685aa();
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_14801658d;
    lVar7 = 0;
    if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_14801658d;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        lVar7 = lVar3;
      }
    }
  }
  uVar5 = FUN_147fdaba2(param_2,*(undefined8 *)(lVar7 + 0x80));
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  plVar1 = *(longlong **)(lVar7 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_28);
    ppuVar8 = (undefined8 **)(param_1 + 0x30);
    if (ppuVar8 != &local_28) {
      puVar2 = *ppuVar8;
      *ppuVar8 = local_28;
      local_28 = (undefined8 *)0x0;
      if (puVar2 == (undefined8 *)0x0) goto LAB_1480165fc;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
LAB_1480165fc:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801666a FUN_14801666a body=301 status=ok
// SIG undefined FUN_14801666a(void)

void FUN_14801666a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_147fdabdc(param_1,4);
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b685aa();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801668a;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801668a;
      }
    }
  }
  lVar6 = 0;
LAB_14801668a:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x38) = lVar6 + 0x60;
  if (*(longlong *)(lVar6 + 0x68) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x68) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x68) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  *(longlong *)(param_1 + 0x48) = lVar6 + 0x70;
  if (*(longlong *)(lVar6 + 0x78) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x78) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x48) = uVar4;
  }
  *(undefined8 *)(param_1 + 0x68) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x58) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 148016798 FUN_148016798 body=91 status=ok
// SIG undefined FUN_148016798(void)

undefined8 FUN_148016798(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_147fe89a0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480167f4 FUN_1480167f4 body=2189 status=ok
// SIG undefined FUN_1480167f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480167f4(longlong param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  longlong *plVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_3b8 [40];
  double local_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_298 = DAT_14c846508;
  local_2a8 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_2a0 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_2b8 = *(undefined8 *)(param_2 + 8);
    local_2b0 = *(longlong *)(param_2 + 0x10);
    if (local_2b0 != 0) {
      LOCK();
      *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)FUN_148017082(&local_2b8);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x680))(plVar13,&local_2a8);
    }
  }
  else {
    FUN_147fdae0a(*(longlong *)(param_1 + 0x28),param_2,param_3);
    uStack_2a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18);
    local_2a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20);
    local_298 = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145b685aa();
  }
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar30 = param_3[2];
  FUN_144a7484c(&local_2a8,&local_168);
  dVar11 = local_158;
  dVar10 = dStack_160;
  dVar9 = local_168;
  auVar24 = _DAT_149934d80;
  local_318 = local_168;
  dStack_310 = dStack_160;
  local_308 = local_158;
  dStack_300 = dStack_150;
  uStack_2e0 = 0;
  dVar26 = (double)DAT_149934d80;
  dVar5 = DAT_149934d80._8_8_;
  local_2d8 = _DAT_149934d80;
  local_2c8 = 0x3ff0000000000000;
  uStack_2c0 = 0;
  lVar16 = param_1 + 0x18;
  pdVar1 = param_3 + 0x11;
  local_388 = dVar2;
  dStack_380 = dVar3;
  local_2f8 = dVar2;
  dStack_2f0 = dVar3;
  local_2e8 = dVar30;
  pdVar14 = (double *)FUN_1480150c2(lVar16,pdVar1);
  dVar2 = *pdVar14;
  local_390 = pdVar14[1];
  dVar3 = pdVar14[2];
  dVar7 = *pdVar14;
  dVar18 = pdVar14[1];
  auVar22 = minpd(auVar24,auVar24);
  auVar28 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
  auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  iVar12 = movmskpd((int)pdVar14,auVar23);
  auVar22._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  uVar15 = movmskpd((int)lVar16,auVar22);
  if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar6 = dVar11 * 0.0 * -1.0 + dVar10 * 0.0 + dVar9 * 1.0 * 1.0 + dStack_150 * 0.0;
    dVar27 = dVar11 * 0.0 * 1.0 + dVar10 * 1.0 + dVar9 * 0.0 * -1.0 + dStack_150 * 0.0;
    auVar31._0_8_ = dVar11 * 1.0 * 1.0 + ((dVar9 * 0.0 * 1.0 + dStack_150 * 0.0) - dVar10 * 0.0);
    auVar31._8_8_ = dVar11 * 0.0 * -1.0 + ((dVar9 * 0.0 * -1.0 + dStack_150 * 1.0) - dVar10 * 0.0);
    dVar29 = pdVar14[2] * 1.0;
    dVar19 = dVar18 * dVar9 - dVar10 * dVar7;
    dVar20 = dVar29 * dVar10 - dVar11 * dVar18;
    dVar21 = dVar2 * dVar11 - dVar9 * dVar29;
    dVar26 = dStack_150 * 0.0 - dStack_150 * 0.0;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar19 = dVar19 + dVar19;
    dVar26 = dVar26 + dVar26;
    uVar32 = 0;
    uVar33 = 0x3ff00000;
    uVar34 = 0;
    uVar35 = 0x3ff00000;
    dStack_340 = (dVar26 * dStack_150 - dVar26 * dStack_150) + dStack_150 * dVar26 + 0.0 + 0.0;
    dVar5 = local_388 + (dVar19 * dVar10 - dVar11 * dVar21) + dStack_150 * dVar20 + dVar7;
    dVar26 = dStack_380 + (dVar20 * dVar11 - dVar19 * dVar9) + dStack_150 * dVar21 + dVar18;
    dVar30 = dVar30 + (dVar21 * dVar9 - dVar10 * dVar20) + dStack_150 * dVar19 + dVar29;
  }
  else {
    dVar27 = dVar10 + dVar10;
    dVar29 = dVar11 + dVar11;
    dVar6 = dVar9 * (dVar9 + dVar9);
    dStack_1c0 = dVar5 - (dVar11 * dVar29 + dVar6);
    local_198 = 1.0 - (dVar6 + dVar10 * dVar27);
    dStack_1a0 = (dVar9 + dVar9) * dStack_150;
    dVar5 = dVar27 * dVar9 + dVar29 * dStack_150;
    local_1b8 = dVar29 * dVar10 + dStack_1a0;
    uVar32 = auVar24._0_4_;
    uVar33 = auVar24._4_4_;
    uVar34 = auVar24._8_4_;
    uVar35 = auVar24._12_4_;
    local_1a8 = dVar27 * dStack_150 + dVar9 * dVar29;
    local_1c8 = dVar27 * dVar9 - dVar29 * dStack_150;
    dStack_1a0 = dVar29 * dVar10 - dStack_1a0;
    local_1d8 = dVar9 * dVar29 - dVar27 * dStack_150;
    local_1e8._8_4_ = SUB84(dVar5,0);
    local_1e8._0_8_ = dVar26 - (dVar11 * dVar29 + dVar10 * dVar27);
    local_1e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = local_388;
    dStack_180 = dStack_380;
    uStack_170 = 0x3ff0000000000000;
    local_268 = (double *)&DAT_3ff0000000000000;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0x3ff0000000000000;
    uStack_210 = 0;
    local_1f8._8_4_ = 0;
    local_1f8._0_8_ = pdVar14[2];
    local_1f8._12_4_ = 0x3ff00000;
    local_248 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_208 = dVar7;
    dStack_200 = dVar18;
    local_178 = dVar30;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    FUN_14481fd10(&local_288,&local_168);
    dVar30 = local_278 * local_278 + local_288 * local_288;
    dVar26 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar28._0_8_ = dVar30 + dVar26;
    auVar28._8_8_ = dVar30 + dVar26;
    uVar17 = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar22 = sqrtpd(auVar28,auVar28);
    auVar24 = divpd(auVar24,auVar22);
    auVar25._0_8_ = auVar24._0_8_ * local_278;
    auVar25._8_8_ = auVar24._8_8_ * dStack_270;
    dVar6 = (double)((ulonglong)(local_288 * auVar24._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dVar27 = (double)((ulonglong)(dStack_280 * auVar24._8_8_) & uVar17);
    auVar24._8_4_ = (int)uVar17;
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar24._12_4_ = (int)(uVar17 >> 0x20);
    auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar24);
    dStack_340 = 0.0;
    dVar5 = local_108;
    dVar26 = dStack_100;
    dVar30 = local_f8;
  }
  dVar2 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + local_390 * local_390);
  if ((0.0 < dVar2) && (*(longlong *)(param_1 + 0x30) != 0)) {
    if (*(char *)(param_2 + 0x20) == '\0') {
      if (*(char *)(param_3 + 0x15a) == '\0') {
        dVar7 = local_2e8 - *(double *)(param_1 + 0x68);
        dVar18 = dStack_2f0 - *(double *)(param_1 + 0x60);
        dVar3 = local_2f8 - *(double *)(param_1 + 0x58);
        FUN_1401c9a0e(&local_2a8,&local_168,&DAT_14c8462d8);
        dVar3 = dVar7 * local_158 + dVar3 * local_168 + dVar18 * dStack_160 +
                *(double *)(param_1 + 0x70);
        *(double *)(param_1 + 0x70) = dVar3;
        plVar13 = *(longlong **)(param_1 + 0x30);
        lVar16 = plVar13[2];
        lVar4 = plVar13[3];
        plVar13[2] = (longlong)dVar3;
        plVar13[3] = 0;
        (**(code **)(*plVar13 + 8))(plVar13,lVar16,lVar4);
        auVar8._11_5_ = 0;
        auVar8._0_11_ = local_1e8._5_11_;
        local_1e8 = auVar8 << 0x28;
        local_1e8._0_4_ = *(undefined4 *)(param_2 + 0x18);
        plVar13 = *(longlong **)(param_1 + 0x30);
        local_268 = pdVar1;
        (**(code **)(*plVar13 + 0x10))(plVar13);
        dVar3 = (double)plVar13[2];
        dVar7 = dVar3;
        if (0.0 <= dVar3) {
          if (((0.0 < dVar3) &&
              (dVar18 = (double)FUN_1480170d4(param_1 + 0x48,pdVar1), 0.0 < dVar18)) &&
             (dVar7 = dVar2 * dVar18, dVar3 <= dVar2 * dVar18)) {
            dVar7 = dVar3;
          }
        }
        else {
          dVar18 = (double)FUN_1480170d4(param_1 + 0x38,pdVar1);
          if ((0.0 < dVar18) && (dVar7 = dVar18 * -dVar2, dVar18 * -dVar2 <= dVar3)) {
            dVar7 = dVar3;
          }
        }
        dVar30 = dVar30 - local_158 * dVar7;
        dVar26 = dVar26 - dStack_160 * dVar7;
        dVar5 = dVar5 - local_168 * dVar7;
        dStack_340 = 0.0;
        *(double *)(param_1 + 0x70) = dVar7;
      }
      else {
        FUN_1401c9a0e(&local_2a8,&local_168,&DAT_14c8462d8);
        dVar2 = *(double *)(param_1 + 0x70);
        dVar30 = dVar30 - local_158 * dVar2;
        dVar26 = dVar26 - dStack_160 * dVar2;
        dVar5 = dVar5 - dVar2 * local_168;
        dStack_340 = 0.0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(double *)(param_1 + 0x58) = local_2f8;
    *(double *)(param_1 + 0x60) = dStack_2f0;
    *(double *)(param_1 + 0x68) = local_2e8;
  }
  local_378._8_4_ = SUB84(dVar27,0);
  local_378._0_8_ = dVar6;
  local_378._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  local_358._8_4_ = SUB84(dVar26,0);
  local_358._0_8_ = dVar5;
  local_358._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  local_328 = 0x3ff0000000000000;
  uStack_320 = 0;
  local_368 = auVar31;
  local_348 = dVar30;
  local_338 = uVar32;
  uStack_334 = uVar33;
  uStack_330 = uVar34;
  uStack_32c = uVar35;
  FUN_147fdbbf0(param_3);
  FUN_147fe654c(param_3 + 0x20,&local_318);
  if ((local_e0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148017082 FUN_148017082 body=81 status=ok
// SIG undefined FUN_148017082(void)

undefined8 FUN_148017082(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14479d2ce(*param_1 + 0x28);
  }
  plVar3 = (longlong *)param_1[1];
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
  return uVar4;
}



// FUNCTION 1480170d4 FUN_1480170d4 body=64 status=ok
// SIG undefined FUN_1480170d4(void)

undefined8 FUN_1480170d4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((*(int *)(param_1 + 1) == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (puVar2 = (undefined8 *)((ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60)),
     puVar2 == (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*param_1;
  }
  return *puVar2;
}



// FUNCTION 148017114 FUN_148017114 body=257 status=ok
// SIG undefined FUN_148017114(void)

void FUN_148017114(longlong param_1,longlong param_2,int *param_3)

{
  double dVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x28) == 0) && (param_3 != (int *)0x0)) && (*param_3 == 0)) {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_28 = *(longlong *)(param_2 + 0x10);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)FUN_148017082(&local_30);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x680))(plVar2,&local_48);
      if ((char)param_3[4] == '\x01') {
        dVar1 = *(double *)(param_3 + 2);
        if (*(char *)((longlong)param_3 + 0x11) != '\0') {
          dVar1 = *(double *)(param_3 + 2) + local_40;
        }
        local_40 = dVar1;
        param_3[2] = 0;
        param_3[3] = 0;
        *(undefined1 *)(param_3 + 4) = 0;
      }
      if ((char)param_3[8] == '\x01') {
        dVar1 = *(double *)(param_3 + 6);
        if (*(char *)((longlong)param_3 + 0x21) != '\0') {
          dVar1 = *(double *)(param_3 + 6) + local_48;
        }
        local_48 = dVar1;
        param_3[6] = 0;
        param_3[7] = 0;
        *(undefined1 *)(param_3 + 8) = 0;
      }
      (**(code **)(*plVar2 + 0x688))(plVar2,&local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148017216 FUN_148017216 body=117 status=ok
// SIG undefined FUN_148017216(void)

undefined8 FUN_148017216(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong *)(param_1 + 0x80);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_1480143ea(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148017298 FUN_148017298 body=91 status=ok
// SIG undefined FUN_148017298(void)

undefined8 FUN_148017298(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_147fe89a0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480172f4 FUN_1480172f4 body=118 status=ok
// SIG undefined FUN_1480172f4(void)

void FUN_1480172f4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b68694();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148017309;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_148017309;
      }
    }
  }
  lVar5 = 0;
LAB_148017309:
  if ((*(longlong *)(lVar5 + 0x38) != 0) && (*(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x48) != 0)
     ) {
    uVar3 = FUN_147fdaba2(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return;
}



// FUNCTION 14801737a FUN_14801737a body=167 status=ok
// SIG undefined FUN_14801737a(void)

void FUN_14801737a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x20) != '\x01') goto LAB_1480173c7;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_1480173a6:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_145b68694();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) goto LAB_1480173a6;
    lVar4 = 0;
    if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_1480173a6;
      lVar4 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar4 = lVar1;
      }
    }
  }
  FUN_147fe61ac(local_28,lVar4 + 0x38);
  FUN_147fe61b4(local_28,param_2,param_3);
LAB_1480173c7:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801743c FUN_14801743c body=4 status=ok
// SIG undefined FUN_14801743c(void)

void FUN_14801743c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 14801744e FUN_14801744e body=1045 status=ok
// SIG undefined FUN_14801744e(void)

void FUN_14801744e(wchar_t *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  wchar_t *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x1c) == 0) {
    uVar1 = param_2[1];
    local_90 = L"MissingCameraRig";
    local_88._0_4_ = 0x10;
    FUN_1446e940c(local_94,&local_90);
    local_90 = L"CameraRigCameraNode";
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,0x13);
    FUN_1446e940c(local_98,&local_90);
    FUN_140208bae(&local_90,local_98,local_94,L"No camera rig specified on camera rig node.");
    FUN_147fd2ef2(uVar1,1,param_1,&local_90);
    if (local_90 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_90 + 0x10))();
    }
  }
  else {
    FUN_147fdd630(*param_2,*(longlong *)(param_1 + 0x1c) + 0xb8);
    local_60 = 0;
    local_58 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = param_1;
    local_88 = param_2;
    FUN_148017864();
    if ((longlong)*(int *)(param_1 + 0x24) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar3 = (longlong)*(int *)(param_1 + 0x24) * 0x48;
      do {
        FUN_14801792e(&local_90,lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x2c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = (longlong)*(int *)(param_1 + 0x2c) * 0x48;
      do {
        FUN_148017eb0(&local_90,lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x34) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar3 = (longlong)*(int *)(param_1 + 0x34) * 0x48;
      do {
        FUN_148018432(&local_90,lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x3c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      lVar3 = (longlong)*(int *)(param_1 + 0x3c) * 0x48;
      do {
        FUN_1480189b4(&local_90,lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x44) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar3 = (longlong)*(int *)(param_1 + 0x44) * 0x48;
      do {
        FUN_148018f36(&local_90,lVar2);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x4c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar3 = (longlong)*(int *)(param_1 + 0x4c) * 0x50;
      do {
        FUN_1480194b8(&local_90,lVar2);
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x54) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      lVar3 = (longlong)*(int *)(param_1 + 0x54) * 0x50;
      do {
        FUN_148019a3a(&local_90,lVar2);
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x5c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar3 = (longlong)*(int *)(param_1 + 0x5c) * 0x58;
      do {
        FUN_148019fbc(&local_90,lVar2);
        lVar2 = lVar2 + 0x58;
        lVar3 = lVar3 + -0x58;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 100) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      lVar3 = (longlong)*(int *)(param_1 + 100) * 0x60;
      do {
        FUN_14801a53e(&local_90,lVar2);
        lVar2 = lVar2 + 0x60;
        lVar3 = lVar3 + -0x60;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x6c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
      lVar3 = (longlong)*(int *)(param_1 + 0x6c) * 0x70;
      do {
        FUN_14801aac0(&local_90,lVar2);
        lVar2 = lVar2 + 0x70;
        lVar3 = lVar3 + -0x70;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x74) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      lVar3 = (longlong)*(int *)(param_1 + 0x74) * 0x50;
      do {
        FUN_14801b042(&local_90,lVar2);
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x7c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      lVar3 = (longlong)*(int *)(param_1 + 0x7c) * 0x58;
      do {
        FUN_14801b5c4(&local_90,lVar2);
        lVar2 = lVar2 + 0x58;
        lVar3 = lVar3 + -0x58;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x84) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
      lVar3 = (longlong)*(int *)(param_1 + 0x84) << 7;
      do {
        FUN_14801bb46(&local_90,lVar2);
        lVar2 = lVar2 + 0x80;
        lVar3 = lVar3 + -0x80;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x8c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar3 = (longlong)*(int *)(param_1 + 0x8c) * 0xb0;
      do {
        FUN_14801c0c8(&local_90,lVar2);
        lVar2 = lVar2 + 0xb0;
        lVar3 = lVar3 + -0xb0;
      } while (lVar3 != 0);
    }
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1480245e6(&local_80);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148017864 FUN_148017864 body=201 status=ok
// SIG undefined FUN_148017864(void)

void FUN_148017864(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148023f40(param_1 + 2);
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x38) + 0x88);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x38) + 0x80);
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar3);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      local_60 = lVar2 + 0x50;
      local_68 = lVar2;
      local_58 = &local_68;
      FUN_1480240c8(param_1 + 2,local_4c,&local_60);
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801792e FUN_14801792e body=1409 status=ok
// SIG undefined FUN_14801792e(void)

void FUN_14801792e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x40),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_148017c46;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_148017c46:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148017eb0 FUN_148017eb0 body=1409 status=ok
// SIG undefined FUN_148017eb0(void)

void FUN_148017eb0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x40),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_1480181c8;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1480181c8:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148018432 FUN_148018432 body=1409 status=ok
// SIG undefined FUN_148018432(void)

void FUN_148018432(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x40),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801874a;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801874a:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480189b4 FUN_1480189b4 body=1409 status=ok
// SIG undefined FUN_1480189b4(void)

void FUN_1480189b4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x40),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_148018ccc;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_148018ccc:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148018f36 FUN_148018f36 body=1409 status=ok
// SIG undefined FUN_148018f36(void)

void FUN_148018f36(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x40),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801924e;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801924e:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480194b8 FUN_1480194b8 body=1409 status=ok
// SIG undefined FUN_1480194b8(void)

void FUN_1480194b8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x48),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_1480197d0;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1480197d0:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148019a3a FUN_148019a3a body=1409 status=ok
// SIG undefined FUN_148019a3a(void)

void FUN_148019a3a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x48),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_148019d52;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_148019d52:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148019fbc FUN_148019fbc body=1409 status=ok
// SIG undefined FUN_148019fbc(void)

void FUN_148019fbc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x50) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x50),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801a2d4;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801a2d4:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801a53e FUN_14801a53e body=1409 status=ok
// SIG undefined FUN_14801a53e(void)

void FUN_14801a53e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x50) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x50),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801a856;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801a856:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801aac0 FUN_14801aac0 body=1409 status=ok
// SIG undefined FUN_14801aac0(void)

void FUN_14801aac0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x60) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x60),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801add8;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801add8:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801b042 FUN_14801b042 body=1409 status=ok
// SIG undefined FUN_14801b042(void)

void FUN_14801b042(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x48) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x48),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801b35a;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801b35a:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801b5c4 FUN_14801b5c4 body=1409 status=ok
// SIG undefined FUN_14801b5c4(void)

void FUN_14801b5c4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x50) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x50),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801b8dc;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801b8dc:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801bb46 FUN_14801bb46 body=1409 status=ok
// SIG undefined FUN_14801bb46(void)

void FUN_14801bb46(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0x70) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0x70),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801be5e;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801be5e:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801c0c8 FUN_14801c0c8 body=1412 status=ok
// SIG undefined FUN_14801c0c8(void)

void FUN_14801c0c8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(*param_1 + 0x38);
  lVar8 = FUN_148027604();
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_d8,local_e8);
    FUN_140009b9a(local_f8,param_2 + 0x20);
    local_88 = L"MissingInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"No camera rig interface parameter named \'{0}\' exists on \'{1}\'.");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x60);
    if (lVar3 != 0) {
      uVar5 = *(undefined4 *)(lVar3 + 0x30);
      uVar6 = *(undefined4 *)(lVar3 + 0x34);
      uVar7 = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      FUN_144a787a6(param_2 + 0x20,lVar8 + 0x40);
      if (*(longlong *)(param_2 + 0xa0) != 0) {
        lVar9 = *(longlong *)param_1[1];
        FUN_147fdde46(*(longlong *)(param_2 + 0xa0),&local_88);
        iVar2 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar2 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar2 + 1U) {
          FUN_147fd807e((longlong *)(lVar9 + 8),iVar2);
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0xc) = local_80[0];
        *(wchar_t **)(lVar9 + (longlong)iVar2 * 0xc) = local_88;
      }
      goto LAB_14801c3e3;
    }
    uVar10 = *(undefined8 *)(param_1[1] + 8);
    if (lVar9 == 0) {
      FUN_140056680(local_e8,&DAT_149e01fe8);
    }
    else {
      local_88 = *(wchar_t **)(lVar9 + 0x18);
      FUN_1400021e4(&local_88,local_e8);
    }
    FUN_140233b1a(local_130,local_e8);
    FUN_140009b9a(local_140,param_2 + 0x20);
    local_88 = L"UnbuiltInterfaceParameter";
    local_80[0] = 0x19;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"CameraRigCameraNode";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Camera rig interface parameter \'{0}\' was not built correctly on \'{1}\'.");
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar9 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar9 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar9) = 0;
      }
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_148 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_147fd2ef2(uVar10,1,*param_1,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14801c3e3:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801c656 FUN_14801c656 body=1810 status=ok
// SIG undefined FUN_14801c656(void)

void FUN_14801c656(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  int local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  thunk_FUN_1446e0b6e();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x38) != lVar2) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x38) = lVar2;
      FUN_147fe0f40((longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (0 < *(int *)(param_1 + 0x130)) {
    local_30 = *(undefined8 *)(param_1 + 0x128);
    local_28 = *(int *)(param_1 + 0x130);
    FUN_148024674(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x134);
    FUN_145ad0054(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
      FUN_14800d7a2(param_1 + 0x128,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    local_40 = *(undefined8 *)(param_1 + 0x138);
    local_38 = *(int *)(param_1 + 0x140);
    FUN_1480246d4(param_1 + 0x50);
    iVar1 = *(int *)(param_1 + 0x144);
    FUN_145ad0023(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x144) != 0)) {
      FUN_14800d814(param_1 + 0x138,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x150)) {
    local_50 = *(undefined8 *)(param_1 + 0x148);
    local_48 = *(int *)(param_1 + 0x150);
    FUN_148024734(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x154);
    FUN_145acfff2(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x154) != 0)) {
      FUN_14800d886(param_1 + 0x148,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x160)) {
    local_60 = *(undefined8 *)(param_1 + 0x158);
    local_58 = *(int *)(param_1 + 0x160);
    FUN_148024794(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x164);
    FUN_145acffc1(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x164) != 0)) {
      FUN_14800d8f8(param_1 + 0x158,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x170)) {
    local_70 = *(undefined8 *)(param_1 + 0x168);
    local_68 = *(int *)(param_1 + 0x170);
    FUN_1480247f4(param_1 + 0x80);
    iVar1 = *(int *)(param_1 + 0x174);
    FUN_145acff90(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
      FUN_14800d96a(param_1 + 0x168,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x180)) {
    local_80 = *(undefined8 *)(param_1 + 0x178);
    local_78 = *(int *)(param_1 + 0x180);
    FUN_148024854(param_1 + 0x90);
    iVar1 = *(int *)(param_1 + 0x184);
    FUN_145acff5f(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x180) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x184) != 0)) {
      FUN_14800d9dc(param_1 + 0x178,0);
    }
  }
  if (0 < *(int *)(param_1 + 400)) {
    local_90 = *(undefined8 *)(param_1 + 0x188);
    local_88 = *(int *)(param_1 + 400);
    FUN_1480248b4(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0x194);
    FUN_145acff2e(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x194) != 0)) {
      FUN_14800da4e(param_1 + 0x188,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1a0)) {
    local_a0 = *(undefined8 *)(param_1 + 0x198);
    local_98 = *(int *)(param_1 + 0x1a0);
    FUN_148024914(param_1 + 0xb0);
    iVar1 = *(int *)(param_1 + 0x1a4);
    FUN_145acfefd(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x1a4) != 0)) {
      FUN_14800dac0(param_1 + 0x198,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1b0)) {
    local_b0 = *(undefined8 *)(param_1 + 0x1a8);
    local_a8 = *(int *)(param_1 + 0x1b0);
    FUN_148024970(param_1 + 0xc0);
    iVar1 = *(int *)(param_1 + 0x1b4);
    FUN_145acfecc(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x1b4) != 0)) {
      FUN_14800db2e(param_1 + 0x1a8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1c0)) {
    local_c0 = *(undefined8 *)(param_1 + 0x1b8);
    local_b8 = *(int *)(param_1 + 0x1c0);
    FUN_1480249d0(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 0x1c4);
    FUN_145acfe9b(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c4) != 0)) {
      FUN_14800dba0(param_1 + 0x1b8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1d0)) {
    local_d0 = *(undefined8 *)(param_1 + 0x1c8);
    local_c8 = *(int *)(param_1 + 0x1d0);
    FUN_148024a2c(param_1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0x1d4);
    FUN_145acfe6a(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x1d4) != 0)) {
      FUN_14800dc0e(param_1 + 0x1c8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1e0)) {
    local_e0 = *(undefined8 *)(param_1 + 0x1d8);
    local_d8 = *(int *)(param_1 + 0x1e0);
    FUN_148024a8c(param_1 + 0xf0);
    iVar1 = *(int *)(param_1 + 0x1e4);
    FUN_145acfe39(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
      FUN_14800dc80(param_1 + 0x1d8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1f0)) {
    local_f0 = *(undefined8 *)(param_1 + 0x1e8);
    local_e8 = *(int *)(param_1 + 0x1f0);
    FUN_148024ae8(param_1 + 0x100);
    iVar1 = *(int *)(param_1 + 500);
    FUN_145acfe08(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 500) != 0)) {
      FUN_14800dcee(param_1 + 0x1e8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x200)) {
    local_100 = *(undefined8 *)(param_1 + 0x1f8);
    local_f8 = *(int *)(param_1 + 0x200);
    FUN_148024b46(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x204);
    FUN_145ad0085(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200));
    *(undefined4 *)(param_1 + 0x200) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x204) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_128);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801cd82 FUN_14801cd82 body=202 status=ok
// SIG undefined FUN_14801cd82(void)

void FUN_14801cd82(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b6877e();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801cd94;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801cd94;
      }
    }
  }
  lVar6 = 0;
LAB_14801cd94:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x48;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  return;
}



// FUNCTION 14801ce4c FUN_14801ce4c body=128 status=ok
// SIG undefined FUN_14801ce4c(void)

void FUN_14801ce4c(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  float fVar2;
  
  dVar1 = (double)FUN_1480170d4(param_1 + 0x18,param_3 + 0x88);
  fVar2 = (float)dVar1;
  if (0.0 < fVar2) {
    if ((*(float *)(param_3 + 0x60) != fVar2) || (NAN(*(float *)(param_3 + 0x60)) || NAN(fVar2))) {
      *(undefined1 *)(param_3 + 0x7c) = 1;
      *(float *)(param_3 + 0x60) = fVar2;
    }
  }
  dVar1 = (double)FUN_1480170d4(param_1 + 0x28,param_3 + 0x88);
  fVar2 = (float)dVar1;
  if (0.0 < fVar2) {
    if ((*(float *)(param_3 + 100) != fVar2) || (NAN(*(float *)(param_3 + 100)) || NAN(fVar2))) {
      *(undefined1 *)(param_3 + 0x7d) = 1;
      *(float *)(param_3 + 100) = fVar2;
    }
  }
  return;
}



// FUNCTION 14801ced8 FUN_14801ced8 body=370 status=ok
// SIG undefined FUN_14801ced8(void)

void FUN_14801ced8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68868();
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar7 = 0;
      if ((lVar5 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_14801cf38;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar7 = lVar2;
        }
        goto LAB_14801cf38;
      }
    }
  }
  lVar7 = 0;
LAB_14801cf38:
  *(longlong *)(param_1 + 0x18) = lVar7 + 0x38;
  if (*(longlong *)(lVar7 + 0x40) != 0) {
    uVar4 = FUN_1447addd0(*(longlong *)(lVar7 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  *(longlong *)(param_1 + 0x28) = lVar7 + 0x48;
  if (*(longlong *)(lVar7 + 0x50) != 0) {
    uVar4 = FUN_1447addd0(*(longlong *)(lVar7 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar6;
  }
  *(longlong *)(param_1 + 0x38) = lVar7 + 0x58;
  if (*(longlong *)(lVar7 + 0x60) != 0) {
    uVar4 = FUN_1447addd0(*(longlong *)(lVar7 + 0x60) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar6;
  }
  param_3 = param_3 + 0x88;
  uVar4 = FUN_148015152(param_1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  uVar4 = FUN_148015152(param_1 + 0x28,param_3);
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar4 = FUN_148015152(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 100) = 0;
  lVar2 = *(longlong *)(param_2 + 8);
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  return;
}



// FUNCTION 14801d04a FUN_14801d04a body=902 status=ok
// SIG undefined FUN_14801d04a(void)

void FUN_14801d04a(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160 [6];
  longlong alStack_130 [32];
  
  alStack_130[10] = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar9 = *(int *)(param_1 + 0x30);
  iVar10 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x20) != -1) {
    uVar14 = FUN_148015152(param_1 + 0x18,param_3 + 0x11);
    *(undefined4 *)(param_1 + 0x48) = uVar14;
  }
  if (iVar9 != -1) {
    uVar14 = FUN_148015152(param_1 + 0x28,param_3 + 0x11);
    *(undefined4 *)(param_1 + 0x54) = uVar14;
  }
  if (iVar10 != -1) {
    uVar14 = FUN_148015152(param_1 + 0x38,param_3 + 0x11);
    *(undefined4 *)(param_1 + 0x60) = uVar14;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  alStack_130[7] = 0;
  alStack_130[8] = 0;
  alStack_130[5] = 0;
  alStack_130[6] = 0;
  alStack_130[3] = 0;
  alStack_130[4] = 0;
  alStack_130[1] = 0;
  alStack_130[2] = 0;
  local_160[5] = 0.0;
  alStack_130[0] = 0;
  local_160[3] = 0.0;
  local_160[4] = 0.0;
  FUN_1438e0452(param_1,param_2,param_3);
  if (*(char *)(param_2 + 0x20) == '\0') {
    if (*(char *)(param_3 + 0x15a) == '\0') {
      dVar4 = *(double *)(param_1 + 0x80);
      local_160[2] = dVar3 - dVar4;
      dVar5 = *(double *)(param_1 + 0x70);
      dVar6 = *(double *)(param_1 + 0x78);
      local_160[1] = dVar2 - dVar6;
      local_160[0] = dVar1 - dVar5;
      lVar13 = 0x18;
      local_168 = dVar3;
      do {
        dVar3 = *(double *)((longlong)local_160 + lVar13);
        dVar7 = *(double *)((longlong)local_160 + lVar13 + 8);
        dVar8 = *(double *)((longlong)local_160 + lVar13 + 0x10);
        lVar11 = *(longlong *)((longlong)local_160 + lVar13 + 0x18);
        dVar12 = local_160[2] * dVar8 + local_160[0] * dVar3 + local_160[1] * dVar7;
        FUN_148013132(lVar11,(float)(dVar12 / 100.0) - *(float *)(lVar11 + 4),
                      *(undefined4 *)(param_2 + 0x18));
        dVar12 = dVar12 - (double)*(float *)(lVar11 + 4) * 100.0;
        dVar4 = dVar4 + dVar8 * dVar12;
        dVar6 = dVar6 + dVar7 * dVar12;
        dVar5 = dVar5 + dVar12 * dVar3;
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != 0x78);
      *(double *)(param_1 + 0x88) = dVar1 - dVar5;
      *(double *)(param_1 + 0x90) = dVar2 - dVar6;
      *(double *)(param_1 + 0x98) = local_168 - dVar4;
      dVar3 = dVar4;
      dVar2 = dVar6;
      dVar1 = dVar5;
    }
    else {
      dVar3 = dVar3 - *(double *)(param_1 + 0x98);
      dVar2 = dVar2 - *(double *)(param_1 + 0x90);
      dVar1 = dVar1 - *(double *)(param_1 + 0x88);
    }
  }
  *(double *)(param_1 + 0x70) = dVar1;
  *(double *)(param_1 + 0x78) = dVar2;
  *(double *)(param_1 + 0x80) = dVar3;
  if ((*param_3 == dVar1) && (!NAN(*param_3) && !NAN(dVar1))) {
    if ((param_3[1] == dVar2) && (!NAN(param_3[1]) && !NAN(dVar2))) {
      if ((param_3[2] == dVar3) && (!NAN(param_3[2]) && !NAN(dVar3))) goto LAB_14801d1a6;
    }
  }
  *(undefined1 *)(param_3 + 0xe) = 1;
  *param_3 = dVar1;
  param_3[1] = dVar2;
  param_3[2] = dVar3;
LAB_14801d1a6:
  if ((alStack_130[10] ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14801d3d2 FUN_14801d3d2 body=69 status=ok
// SIG undefined FUN_14801d3d2(void)

void FUN_14801d3d2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_148013256(param_1 + 0x48,param_3);
  FUN_148013256(param_1 + 0x54,param_3);
  FUN_148013256(param_1 + 0x60,param_3);
  FUN_14480c34d(param_3,param_1 + 0x70);
  return;
}



// FUNCTION 14801d424 FUN_14801d424 body=136 status=ok
// SIG undefined FUN_14801d424(void)

void FUN_14801d424(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68952();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801d436;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801d436;
      }
    }
  }
  lVar6 = 0;
LAB_14801d436:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  return;
}



// FUNCTION 14801d4ac FUN_14801d4ac body=78 status=ok
// SIG undefined FUN_14801d4ac(void)

void FUN_14801d4ac(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_148015152(param_1 + 0x18,param_3 + 0x88);
  if ((*(float *)(param_3 + 0x38) != fVar1) || (NAN(*(float *)(param_3 + 0x38)) || NAN(fVar1))) {
    *(undefined1 *)(param_3 + 0x7e) = 1;
    *(float *)(param_3 + 0x38) = fVar1;
  }
  if ((*(float *)(param_3 + 0x3c) != -1.0) || (NAN(*(float *)(param_3 + 0x3c)))) {
    *(undefined1 *)(param_3 + 0x7f) = 1;
    *(undefined4 *)(param_3 + 0x3c) = 0xbf800000;
  }
  return;
}



// FUNCTION 14801d506 FUN_14801d506 body=369 status=ok
// SIG undefined FUN_14801d506(void)

void FUN_14801d506(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68a3c();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801d51c;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801d51c;
      }
    }
  }
  lVar6 = 0;
LAB_14801d51c:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x48;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  *(longlong *)(param_1 + 0x38) = lVar6 + 0x58;
  if (*(longlong *)(lVar6 + 0x60) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x60) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x60) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  *(longlong *)(param_1 + 0x48) = lVar6 + 0x68;
  if (*(longlong *)(lVar6 + 0x70) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x70) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x48) = uVar4;
  }
  *(longlong *)(param_1 + 0x58) = lVar6 + 0x78;
  if (*(longlong *)(lVar6 + 0x80) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x80) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x58) = uVar4;
  }
  return;
}



// FUNCTION 14801d678 FUN_14801d678 body=302 status=ok
// SIG undefined FUN_14801d678(void)

void FUN_14801d678(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar1 = param_3 + 0x88;
  fVar6 = (float)FUN_148015152(param_1 + 0x18,lVar1);
  if (0.0 < fVar6) {
    if ((*(float *)(param_3 + 0x4c) != fVar6) || (NAN(*(float *)(param_3 + 0x4c)) || NAN(fVar6))) {
      *(undefined1 *)(param_3 + 0x76) = 1;
      *(float *)(param_3 + 0x4c) = fVar6;
    }
  }
  fVar6 = (float)FUN_148015152(param_1 + 0x28,lVar1);
  if (0.0 < fVar6) {
    if ((*(float *)(param_3 + 0x50) != fVar6) || (NAN(*(float *)(param_3 + 0x50)) || NAN(fVar6))) {
      *(undefined1 *)(param_3 + 0x77) = 1;
      *(float *)(param_3 + 0x50) = fVar6;
    }
  }
  fVar6 = (float)FUN_148015152(param_1 + 0x38,lVar1);
  if (0.0 < fVar6) {
    if ((*(float *)(param_3 + 0x54) != fVar6) || (NAN(*(float *)(param_3 + 0x54)) || NAN(fVar6))) {
      *(undefined1 *)(param_3 + 0x78) = 1;
      *(float *)(param_3 + 0x54) = fVar6;
    }
  }
  cVar3 = FUN_14801367e(param_1 + 0x48,lVar1);
  if (*(char *)(param_3 + 0x6d) != cVar3) {
    *(undefined1 *)(param_3 + 0x81) = 1;
    *(char *)(param_3 + 0x6d) = cVar3;
  }
  cVar3 = FUN_14801367e(param_1 + 0x58,lVar1);
  if (*(char *)(param_3 + 0x6e) != cVar3) {
    *(undefined1 *)(param_3 + 0x82) = 1;
    *(char *)(param_3 + 0x6e) = cVar3;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b68a3c();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801d748;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_14801d748;
      }
    }
  }
  lVar5 = 0;
LAB_14801d748:
  cVar3 = *(char *)(lVar5 + 0x88);
  if (*(char *)(param_3 + 0x6f) != cVar3) {
    *(undefined1 *)(param_3 + 0x83) = 1;
    *(char *)(param_3 + 0x6f) = cVar3;
  }
  return;
}



// FUNCTION 14801d7b2 FUN_14801d7b2 body=369 status=ok
// SIG undefined FUN_14801d7b2(void)

void FUN_14801d7b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68b26();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801d7c8;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801d7c8;
      }
    }
  }
  lVar6 = 0;
LAB_14801d7c8:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x40) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x48;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  *(longlong *)(param_1 + 0x38) = lVar6 + 0x58;
  if (*(longlong *)(lVar6 + 0x60) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x60) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x60) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  *(longlong *)(param_1 + 0x48) = lVar6 + 0x68;
  if (*(longlong *)(lVar6 + 0x70) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x70) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x48) = uVar4;
  }
  *(longlong *)(param_1 + 0x58) = lVar6 + 0x78;
  if (*(longlong *)(lVar6 + 0x80) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x80) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x58) = uVar4;
  }
  return;
}



// FUNCTION 14801d924 FUN_14801d924 body=291 status=ok
// SIG undefined FUN_14801d924(void)

void FUN_14801d924(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  
  lVar1 = param_3 + 0x88;
  fVar3 = (float)FUN_148015152(param_1 + 0x18,lVar1);
  if (0.0 < fVar3) {
    if ((*(float *)(param_3 + 0x3c) != fVar3) || (NAN(*(float *)(param_3 + 0x3c)) || NAN(fVar3))) {
      *(undefined1 *)(param_3 + 0x7f) = 1;
      *(float *)(param_3 + 0x3c) = fVar3;
    }
    if ((*(float *)(param_3 + 0x38) != -1.0) || (NAN(*(float *)(param_3 + 0x38)))) {
      *(undefined1 *)(param_3 + 0x7e) = 1;
      *(undefined4 *)(param_3 + 0x38) = 0xbf800000;
    }
  }
  fVar3 = (float)FUN_148015152(param_1 + 0x28,lVar1);
  if (0.0 < fVar3) {
    if ((*(float *)(param_3 + 0x48) != fVar3) || (NAN(*(float *)(param_3 + 0x48)) || NAN(fVar3))) {
      *(undefined1 *)(param_3 + 0x75) = 1;
      *(float *)(param_3 + 0x48) = fVar3;
    }
  }
  fVar3 = (float)FUN_148015152(param_1 + 0x38,lVar1);
  if (0.0 < fVar3) {
    if ((*(float *)(param_3 + 0x40) != fVar3) || (NAN(*(float *)(param_3 + 0x40)) || NAN(fVar3))) {
      *(undefined1 *)(param_3 + 0x73) = 1;
      *(float *)(param_3 + 0x40) = fVar3;
    }
  }
  fVar3 = (float)FUN_148015152(param_1 + 0x48,lVar1);
  if (0.0 < fVar3) {
    if ((*(float *)(param_3 + 0x44) != fVar3) || (NAN(*(float *)(param_3 + 0x44)) || NAN(fVar3))) {
      *(undefined1 *)(param_3 + 0x74) = 1;
      *(float *)(param_3 + 0x44) = fVar3;
    }
  }
  cVar2 = FUN_14801367e(param_1 + 0x58,lVar1);
  if (*(char *)(param_3 + 0x6c) != cVar2) {
    *(undefined1 *)(param_3 + 0x80) = 1;
    *(char *)(param_3 + 0x6c) = cVar2;
  }
  if (cVar2 == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0;
  }
  if ((*(float *)(param_3 + 0x68) != fVar3) || (NAN(*(float *)(param_3 + 0x68)) || NAN(fVar3))) {
    *(undefined1 *)(param_3 + 0x7b) = 1;
    *(float *)(param_3 + 0x68) = fVar3;
  }
  return;
}



// FUNCTION 14801da54 FUN_14801da54 body=202 status=ok
// SIG undefined FUN_14801da54(void)

void FUN_14801da54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68c10();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801da66;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801da66;
      }
    }
  }
  lVar6 = 0;
LAB_14801da66:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x38;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x50) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x58;
  if (*(longlong *)(lVar6 + 0x70) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x70) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  return;
}



// FUNCTION 14801db1e FUN_14801db1e body=60 status=ok
// SIG undefined FUN_14801db1e(void)

longlong FUN_14801db1e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((((int)param_1[1] == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (lVar1 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60), lVar1 == 0)) {
    lVar1 = *param_1;
  }
  return lVar1;
}



// FUNCTION 14801db66 FUN_14801db66 body=106 status=ok
// SIG undefined FUN_14801db66(void)

void FUN_14801db66(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_145b68cfa();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801db78;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_14801db78;
      }
    }
  }
  lVar4 = 0;
LAB_14801db78:
  FUN_147fe9264(param_3 + 0x200,lVar4 + 0x40);
  return;
}



// FUNCTION 14801dbdc FUN_14801dbdc body=136 status=ok
// SIG undefined FUN_14801dbdc(void)

void FUN_14801dbdc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68de4();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801dbee;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801dbee;
      }
    }
  }
  lVar6 = 0;
LAB_14801dbee:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x40;
  if (*(longlong *)(lVar6 + 0x48) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x48) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  return;
}


