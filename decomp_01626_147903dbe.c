// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147903dbe FUN_147903dbe body=24 status=ok
// SIG undefined FUN_147903dbe(void)

bool FUN_147903dbe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144b00ba4();
  return lVar1 == DAT_14c951640;
}



// FUNCTION 147903ddc FUN_147903ddc body=221 status=ok
// SIG undefined FUN_147903ddc(void)

void FUN_147903ddc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = (longlong)*(int *)(param_1 + 0x170);
  if (0 < lVar2) {
    plVar4 = &local_28;
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x38);
    }
    lVar3 = *(longlong *)(param_1 + 0x168) + 8;
    do {
      if (*(longlong *)(lVar3 + -8) == *plVar4) {
        uVar1 = FUN_1456b2ef6();
        goto LAB_147903e6e;
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  uVar1 = 0;
LAB_147903e6e:
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903ec0 FUN_147903ec0 body=230 status=ok
// SIG undefined FUN_147903ec0(void)

void FUN_147903ec0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (ulonglong)*(int *)(param_1 + 0x160);
  if ((longlong)uVar3 < 1) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    if (*(longlong *)(*(longlong *)(param_1 + 0x158) + 0x30) != local_28) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x158) + 0x80);
      uVar2 = 1;
      do {
        uVar5 = uVar2;
        if (uVar3 == uVar5) break;
        lVar1 = *plVar4;
        plVar4 = plVar4 + 10;
        uVar2 = uVar5 + 1;
      } while (lVar1 != local_28);
      bVar6 = uVar5 < uVar3;
    }
  }
  *param_3 = bVar6;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903fc2 FUN_147903fc2 body=283 status=ok
// SIG undefined FUN_147903fc2(void)

byte FUN_147903fc2(longlong *param_1,uint param_2,uint param_3,float param_4)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x2c])) {
    lVar1 = param_1[0x2b] + (ulonglong)param_2 * 0x50;
    cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_2 * 0x50);
    if (cVar2 == '\x02') {
      fVar6 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
    }
    else if (cVar2 == '\x01') {
      fVar6 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
    }
    else {
      fVar6 = *(float *)(lVar1 + 0x24);
    }
  }
  if (((int)param_3 < 0) || ((int)param_1[0x2c] <= (int)param_3)) {
    fVar5 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  }
  else {
    lVar1 = param_1[0x2b] + (ulonglong)param_3 * 0x50;
    cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_3 * 0x50);
    if (cVar2 == '\x02') {
      fVar5 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
    }
    else if (cVar2 == '\x01') {
      fVar5 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
    }
    else {
      fVar5 = *(float *)(lVar1 + 0x24);
    }
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  bVar3 = param_4 <= fVar5;
  if (param_4 < fVar4) {
    bVar3 = param_4 < fVar5;
  }
  return bVar3 & fVar6 <= param_4;
}



// FUNCTION 1479040de FUN_1479040de body=181 status=ok
// SIG undefined FUN_1479040de(void)

int FUN_1479040de(longlong param_1,float param_2,float *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  *param_3 = 0.0;
  lVar5 = -0x2c;
  iVar4 = -1;
  do {
    iVar3 = iVar4 + 1;
    if (*(int *)(param_1 + 0x160) <= iVar3) {
      return -1;
    }
    cVar2 = FUN_147903fc2(param_1,iVar3,iVar4 + 2,param_2);
    lVar5 = lVar5 + 0x50;
    iVar4 = iVar3;
  } while (cVar2 == '\0');
  lVar1 = *(longlong *)(param_1 + 0x158);
  cVar2 = *(char *)(lVar1 + -0xb + lVar5);
  if (cVar2 == '\x02') {
    fVar6 = *(float *)(lVar1 + lVar5) * *(float *)(lVar1 + -4 + lVar5) +
            *(float *)(lVar1 + -8 + lVar5);
  }
  else if (cVar2 == '\x01') {
    fVar6 = *(float *)(lVar1 + -8 + lVar5) + *(float *)(lVar1 + lVar5);
  }
  else {
    fVar6 = *(float *)(lVar1 + lVar5);
  }
  *param_3 = param_2 - fVar6;
  return iVar3;
}



// FUNCTION 147904194 FUN_147904194 body=230 status=ok
// SIG undefined FUN_147904194(void)

void FUN_147904194(longlong *param_1,uint param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  
  *param_3 = 0.0;
  fVar3 = (float)(**(code **)(*param_1 + 0x2b0))();
  *param_4 = fVar3;
  if ((int)param_2 < 0) {
    if (param_2 != 0xffffffff) {
      return;
    }
    param_2 = 0;
  }
  else {
    if ((int)param_2 < (int)param_1[0x2c]) {
      lVar1 = param_1[0x2b] + (ulonglong)param_2 * 0x50;
      cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_2 * 0x50);
      if (cVar2 == '\x02') {
        fVar3 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
      }
      else if (cVar2 == '\x01') {
        fVar3 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
      }
      else {
        fVar3 = *(float *)(lVar1 + 0x24);
      }
      *param_3 = fVar3;
    }
    param_2 = param_2 + 1;
  }
  if ((int)param_2 < (int)param_1[0x2c]) {
    lVar1 = param_1[0x2b] + (ulonglong)param_2 * 0x50;
    cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_2 * 0x50);
    if (cVar2 == '\x02') {
      fVar3 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
    }
    else if (cVar2 == '\x01') {
      fVar3 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x24);
    }
    *param_4 = fVar3;
  }
  return;
}



// FUNCTION 14790427a FUN_14790427a body=213 status=ok
// SIG undefined FUN_14790427a(void)

float FUN_14790427a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(**(code **)(*param_1 + 0x2b0))();
  if ((int)param_2 < 0) {
    fVar5 = 0.0;
    if (param_2 != 0xffffffff) goto LAB_147904344;
    iVar3 = (int)param_1[0x2c];
    param_2 = 0;
  }
  else {
    iVar3 = (int)param_1[0x2c];
    fVar5 = 0.0;
    if ((int)param_2 < iVar3) {
      lVar1 = param_1[0x2b] + (ulonglong)param_2 * 0x50;
      cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_2 * 0x50);
      if (cVar2 == '\x02') {
        fVar5 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
      }
      else if (cVar2 == '\x01') {
        fVar5 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
      }
      else {
        fVar5 = *(float *)(lVar1 + 0x24);
      }
    }
    param_2 = param_2 + 1;
  }
  if ((int)param_2 < iVar3) {
    lVar1 = param_1[0x2b] + (ulonglong)param_2 * 0x50;
    cVar2 = *(char *)(param_1[0x2b] + 0x19 + (ulonglong)param_2 * 0x50);
    if (cVar2 == '\x02') {
      fVar4 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
    }
    else if (cVar2 == '\x01') {
      fVar4 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x24);
    }
  }
LAB_147904344:
  return fVar4 - fVar5;
}



// FUNCTION 147904356 FUN_147904356 body=68 status=ok
// SIG undefined FUN_147904356(void)

void FUN_147904356(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790439c FUN_14790439c body=46 status=ok
// SIG undefined FUN_14790439c(void)

undefined8 * FUN_14790439c(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 0xbc) < 1) {
    FUN_1478df664(param_1,param_2);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0xb8);
  }
  return param_2;
}



// FUNCTION 1479043ca FUN_1479043ca body=94 status=ok
// SIG undefined FUN_1479043ca(void)

longlong FUN_1479043ca(longlong param_1,float param_2,float param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x1a0);
  if (0 < (int)*(uint *)(param_1 + 0x1a0)) {
    if (param_2 <= param_3) {
      lVar3 = *(longlong *)(param_1 + 0x198);
      do {
        if (param_2 < *(float *)(lVar3 + 4)) {
          if (param_3 < *(float *)(lVar3 + 4)) {
            return 0;
          }
          return lVar3;
        }
        lVar3 = lVar3 + 0xc;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      lVar2 = uVar4 * 0xc + *(longlong *)(param_1 + 0x198);
      lVar3 = uVar4 + 1;
      do {
        if (lVar3 + -1 == 0 || lVar3 < 1) {
          return 0;
        }
        pfVar1 = (float *)(lVar2 + -8);
        lVar2 = lVar2 + -0xc;
        lVar3 = lVar3 + -1;
      } while (param_2 <= *pfVar1);
      if (param_3 <= *pfVar1) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147904428 FUN_147904428 body=188 status=ok
// SIG undefined FUN_147904428(void)

void FUN_147904428(longlong *param_1)

{
  void *_Dst;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar5) {
    iVar6 = -(int)param_1[1];
    lVar7 = uVar5 * 0x30;
    do {
      lVar7 = lVar7 + -0x30;
      if (((*(longlong *)(*param_1 + 0x20 + lVar7) != 0) &&
          (*(longlong *)(*param_1 + 0x10 + lVar7) != 0)) && (cVar3 = FUN_145ebbdfc(), cVar3 != '\0')
         ) {
        lVar1 = *param_1;
        _Dst = (void *)(lVar1 + lVar7);
        FUN_1448262fc(_Dst,1);
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar5 != uVar4) {
          memmove(_Dst,(void *)(lVar1 + lVar7 + 0x30),(longlong)(int)(uVar4 + iVar6) * 0x30);
          uVar4 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar4 - 1;
        FUN_1478fc2be(param_1);
      }
      iVar6 = iVar6 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 1479044e4 FUN_1479044e4 body=177 status=ok
// SIG undefined FUN_1479044e4(void)

void FUN_1479044e4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14792b432();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x164) * 0x50);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x174) * 0x18);
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x170) * 0x18;
    lVar2 = *(longlong *)(param_1 + 0x168) + 8;
    do {
      iVar1 = FUN_1478df0ee(lVar2);
      FUN_14484255c(param_2,(longlong)iVar1);
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1a4) * 0xc);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1b4) << 2);
  return;
}



// FUNCTION 147904596 FUN_147904596 body=76 status=ok
// SIG undefined FUN_147904596(void)

undefined8 FUN_147904596(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x170) < 1) {
    uVar1 = 0;
  }
  else {
    lVar3 = 8;
    lVar2 = 0;
    do {
      uVar1 = FUN_1456b2ef6(*(longlong *)(param_1 + 0x168) + lVar3);
      if ((char)uVar1 == '\0') {
        return uVar1;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar2 < *(int *)(param_1 + 0x170));
  }
  return uVar1;
}



// FUNCTION 1479045e2 FUN_1479045e2 body=80 status=ok
// SIG undefined FUN_1479045e2(void)

undefined8 FUN_1479045e2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x170) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x170) * 0x18;
    lVar2 = *(longlong *)(param_1 + 0x168) + 8;
    do {
      lVar3 = lVar3 + -0x18;
      uVar1 = FUN_1478df19e(lVar2);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar3 != 0);
  }
  return uVar1;
}



// FUNCTION 147904632 FUN_147904632 body=96 status=ok
// SIG undefined FUN_147904632(void)

void FUN_147904632(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  FUN_14792e8ba(param_1 + 0x27,param_2,param_3,param_4,param_5,param_6,uVar1);
  return;
}



// FUNCTION 147904692 FUN_147904692 body=112 status=ok
// SIG undefined FUN_147904692(void)

undefined8
FUN_147904692(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  FUN_14792e9b4(param_1 + 0x27,param_2,param_3,param_4,param_5,uVar1,param_6);
  return param_2;
}



// FUNCTION 147904702 FUN_147904702 body=162 status=ok
// SIG undefined FUN_147904702(void)

undefined8 FUN_147904702(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  iVar1 = (int)param_2[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar3) == param_1) {
        return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1478fac1a(param_2,iVar1);
    lVar5 = *param_2;
  }
  *(longlong *)(lVar5 + lVar4 * 8) = param_1;
  if ((longlong)*(int *)(param_1 + 0x170) == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(param_1 + 0x170) * 0x18;
    lVar4 = *(longlong *)(param_1 + 0x168) + 8;
    do {
      lVar5 = lVar5 + -0x18;
      uVar2 = FUN_1478df506(lVar4,param_2);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 0);
  }
  return uVar2;
}



// FUNCTION 1479047ae FUN_1479047ae body=346 status=ok
// SIG undefined FUN_1479047ae(void)

undefined8 * FUN_1479047ae(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xfffffffe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0x7f7fffff7f7fffff;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f80000000000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  FUN_1404163bc(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x191) = 0;
  *(undefined8 *)((longlong)param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  return param_1;
}



// FUNCTION 147904908 FUN_147904908 body=360 status=ok
// SIG undefined FUN_147904908(void)

undefined8 * FUN_147904908(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xfffffffe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0x7f7fffff7f7fffff;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_14485c47a(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f80000000000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  FUN_1404163bc(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x191) = 0;
  *(undefined8 *)((longlong)param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  return param_1;
}



// FUNCTION 147904a70 FUN_147904a70 body=253 status=ok
// SIG undefined FUN_147904a70(void)

void FUN_147904a70(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0x3e4ccccd;
  local_44 = 0;
  local_40 = 0;
  lVar2 = local_58;
  if (*param_1 != 0) {
    FUN_1433c5d2c(&local_68,*param_1 + 200);
    if (DAT_14c950c29 == 1) {
      if (local_68 == 0) {
        local_68 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    local_44 = local_5c;
    local_48 = local_60;
    lVar1 = *param_1;
    local_40 = *(undefined1 *)(lVar1 + 0xc0);
    lVar2 = *(longlong *)(lVar1 + 0x180);
    lStack_50 = local_68;
    if ((DAT_14c950c29 & 1) != 0) {
      if (*(longlong *)(lVar1 + 0x180) == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(lVar1 + 0x180);
      }
    }
  }
  local_58 = lVar2;
  FUN_147904b6e(param_1,param_2,&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147904b6e FUN_147904b6e body=616 status=ok
// SIG undefined FUN_147904b6e(void)

void FUN_147904b6e(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_e8 [40];
  float local_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined1 local_b0;
  char local_af;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_70;
  float local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14c) = param_2;
  lVar1 = param_3[1];
  local_70 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_64 = *(char *)((longlong)param_3 + 0x14);
  local_68 = *(float *)(param_3 + 2);
  cVar2 = FUN_144729dda(param_1 + 0x25);
  if ((cVar2 != '\0') && ((char)param_3[3] == '\x01')) {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_144a5dc74(&local_a0);
    cVar2 = local_64;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_c0 = local_68;
    local_af = local_64;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    lVar4 = *param_3;
    local_a8 = lVar1;
    if ((DAT_14c950c29 & 1) != 0) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *param_3;
      }
    }
    local_b0 = cVar2 != '\0' || lVar1 != 0;
    local_b8 = lVar4;
    uVar3 = FUN_14479d2ce(param_1 + 0x25);
    FUN_1478f7070(uVar3,*param_1,&local_c0);
    local_68 = 0.0;
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_9c,local_a0) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_9c,local_a0) + 0x10))();
    }
  }
  lVar4 = param_1[0x2d];
  FUN_1478cdf00(&local_c0,&local_70);
  *(undefined1 *)((longlong)param_1 + 0x174) = (undefined1)uStack_9c;
  *(undefined1 *)((longlong)param_1 + 0x177) = 1;
  lVar1 = CONCAT44(uStack_bc,local_c0);
  if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x2a] = lVar1;
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_1 + 0x15c);
  fVar5 = local_68 * *(float *)((longlong)param_1 + 0x3c);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x2b) = fVar5;
  *(int *)((longlong)param_1 + 0x16c) = (int)lVar4;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x175) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x177) = 1;
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)(*param_1 + 0x17a);
  param_1[0x33] = *param_3;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147904dd8 FUN_147904dd8 body=90 status=ok
// SIG undefined FUN_147904dd8(void)

longlong * FUN_147904dd8(longlong *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1478fced8(param_1 + 2,param_4);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 147904e32 FUN_147904e32 body=220 status=ok
// SIG undefined FUN_147904e32(void)

void FUN_147904e32(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_30 = 0;
  FUN_1433c5d2c(&local_58);
  if (DAT_14c950c29 == '\x01') {
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  local_34 = local_4c;
  local_38 = local_50;
  lVar1 = *param_1;
  lVar2 = local_48;
  local_40 = local_58;
  if (lVar1 != 0) {
    local_30 = *(undefined1 *)(lVar1 + 0xc1);
    lVar2 = *(longlong *)(lVar1 + 0x188);
    if (DAT_14c950c29 == '\x01') {
      if (*(longlong *)(lVar1 + 0x188) == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(lVar1 + 0x188);
      }
    }
  }
  local_48 = lVar2;
  FUN_1433da1c6(param_1,&local_48,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147904f10 FUN_147904f10 body=5 status=ok
// SIG undefined FUN_147904f10(void)

void FUN_147904f10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147904f16 FUN_147904f16 body=187 status=ok
// SIG undefined FUN_147904f16(void)

void FUN_147904f16(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = DAT_14cacbb44 + 1;
  *(int *)(param_1 + 0x26) = DAT_14cacbb44;
  DAT_14cacbb44 = iVar2;
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 0x29) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0xfffffffe;
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f80000000000000;
    *(undefined1 *)((longlong)param_1 + 0x175) = 1;
    *(undefined1 *)((longlong)param_1 + 0x177) = 1;
    FUN_147904fd2(param_1);
    cVar3 = FUN_144729dda(param_1 + 0x25);
    lVar1 = *param_1;
    if ((cVar3 != '\0') && (0 < *(int *)(lVar1 + 0x140))) {
      param_1[0x32] = *(longlong *)(lVar1 + 300);
    }
    param_1[0xf] = (longlong)param_1;
    param_1[0x10] = lVar1;
  }
  return;
}



// FUNCTION 147904fd2 FUN_147904fd2 body=392 status=ok
// SIG undefined FUN_147904fd2(void)

void FUN_147904fd2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar5 = *param_1;
  iVar8 = *(int *)(lVar5 + 0x160);
  if (0 < iVar8) {
    plVar1 = param_1 + 0x21;
    *(undefined4 *)(param_1 + 0x22) = 0;
    iVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x114) != iVar8) {
      FUN_14481578e(plVar1);
      lVar5 = *param_1;
      iVar4 = (int)param_1[0x22];
      iVar8 = *(int *)((longlong)param_1 + 0x114);
    }
    uVar3 = *(uint *)(lVar5 + 0x160);
    *(uint *)(param_1 + 0x22) = uVar3 + iVar4;
    if ((uint)(iVar8 - iVar4) < uVar3) {
      FUN_1446f48e2(plVar1,iVar4);
      lVar5 = *param_1;
    }
    iVar8 = *(int *)(lVar5 + 0x160);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    plVar2 = param_1 + 0x23;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x124) != iVar8) {
      FUN_14481578e(plVar2);
      lVar5 = *param_1;
      iVar4 = (int)param_1[0x24];
      iVar8 = *(int *)((longlong)param_1 + 0x124);
    }
    uVar3 = *(uint *)(lVar5 + 0x160);
    *(uint *)(param_1 + 0x24) = uVar3 + iVar4;
    if ((uint)(iVar8 - iVar4) < uVar3) {
      FUN_1446f48e2(plVar2,iVar4);
      lVar5 = *param_1;
    }
    if (0 < *(int *)(lVar5 + 0x160)) {
      lVar5 = 0;
      do {
        *(undefined4 *)(param_1[0x23] + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
        lVar9 = *param_1;
        uVar6 = (ulonglong)*(int *)(lVar9 + 0x160);
      } while (lVar5 < (longlong)uVar6);
      if (0 < *(int *)(lVar9 + 0x160)) {
        lVar5 = 0;
        do {
          if (0 < (int)uVar6) {
            plVar10 = (longlong *)(*(longlong *)(lVar9 + 0x158) + 0x30);
            uVar7 = 0;
            do {
              if (*plVar10 == *(longlong *)(*(longlong *)(lVar9 + 0x158) + 0x38 + lVar5 * 0x50)) {
                *(int *)(param_1[0x21] + lVar5 * 4) = (int)uVar7;
                if ((int)uVar7 < (int)param_1[0x22]) {
                  *(int *)(*plVar2 + uVar7 * 4) = (int)lVar5;
                }
                goto LAB_14790511c;
              }
              uVar7 = uVar7 + 1;
              plVar10 = plVar10 + 10;
            } while ((uVar6 & 0xffffffff) != uVar7);
          }
          *(undefined4 *)(*plVar1 + lVar5 * 4) = 0xffffffff;
LAB_14790511c:
          lVar5 = lVar5 + 1;
          lVar9 = *param_1;
          uVar6 = (ulonglong)*(int *)(lVar9 + 0x160);
        } while (lVar5 < (longlong)uVar6);
      }
    }
  }
  return;
}



// FUNCTION 14790515c FUN_14790515c body=35 status=ok
// SIG undefined FUN_14790515c(void)

void FUN_14790515c(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014790517b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 147905180 FUN_147905180 body=95 status=ok
// SIG undefined FUN_147905180(void)

undefined8 *
FUN_147905180(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined8 param_5)

{
  *param_1 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1478fced8(param_1 + 2,param_5);
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 1479051e0 FUN_1479051e0 body=167 status=ok
// SIG undefined FUN_1479051e0(void)

void FUN_1479051e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)*(int *)(*param_1 + 0x160);
  if (lVar1 < 1) {
    local_c = 0xffffffff;
  }
  else {
    lVar4 = *(longlong *)(*param_1 + 0x158);
    plVar2 = (longlong *)(lVar4 + 0x30);
    lVar3 = 0;
    do {
      if (*plVar2 == *param_2) goto LAB_14790522a;
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 10;
    } while (lVar1 != lVar3);
    lVar3 = 0xffffffff;
LAB_14790522a:
    local_c = (undefined4)lVar3;
    plVar2 = (longlong *)(lVar4 + 0x30);
    lVar4 = 0;
    do {
      if (*plVar2 == *param_3) goto LAB_14790525a;
      lVar4 = lVar4 + 1;
      plVar2 = plVar2 + 10;
    } while (lVar1 != lVar4);
  }
  lVar4 = 0xffffffff;
LAB_14790525a:
  local_10 = (undefined4)lVar4;
  FUN_1433dab46(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147905288 FUN_147905288 body=134 status=ok
// SIG undefined FUN_147905288(void)

undefined8 * FUN_147905288(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    uVar1 = FUN_1479040de(*param_1,(int)param_1[0x29],local_1c);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(*param_1 + 0x160))) {
      *param_2 = *(undefined8 *)(*(longlong *)(*param_1 + 0x158) + 0x30 + (ulonglong)uVar1 * 0x50);
      goto LAB_1479052b2;
    }
  }
  *param_2 = 0;
LAB_1479052b2:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147905310 FUN_147905310 body=183 status=ok
// SIG undefined FUN_147905310(void)

undefined8 * FUN_147905310(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    uVar2 = FUN_1479040de(*param_1,(int)param_1[0x29],local_1c);
    if (-1 < (int)uVar2) {
      lVar1 = *param_1;
      if (((int)uVar2 < (int)*(uint *)(lVar1 + 0x160)) && ((int)uVar2 < (int)param_1[0x22])) {
        uVar2 = *(uint *)(param_1[0x21] + (ulonglong)uVar2 * 4);
        if (uVar2 < *(uint *)(lVar1 + 0x160) && -1 < (int)uVar2) {
          if (lVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x158) + 0x30 + (ulonglong)uVar2 * 0x50);
          }
          *param_2 = uVar3;
          goto LAB_14790533a;
        }
      }
    }
  }
  *param_2 = 0;
LAB_14790533a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479053c8 FUN_1479053c8 body=149 status=ok
// SIG undefined FUN_1479053c8(void)

void FUN_1479053c8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_20 = param_1;
    FUN_1479054b8(*(longlong *)(param_1 + 0x1c8) + 0x1b8,&local_20,1);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  if (param_2 != param_1 && param_2 != 0) {
    local_20 = param_1;
    FUN_14791cd38(param_2 + 0x1b8);
    *(longlong *)(param_1 + 0x1c8) = param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790545e FUN_14790545e body=89 status=ok
// SIG undefined FUN_14790545e(void)

void FUN_14790545e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1c8) = 0;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0x1c4) == 0) {
    return;
  }
  FUN_1478fba82(param_1 + 0x1b8,0);
  return;
}



// FUNCTION 1479054b8 FUN_1479054b8 body=169 status=ok
// SIG undefined FUN_1479054b8(void)

undefined8 FUN_1479054b8(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_1478fc166(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 147905562 FUN_147905562 body=225 status=ok
// SIG undefined FUN_147905562(void)

void FUN_147905562(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (0.0001 < ABS(*(float *)(param_1 + 0x148) - *(float *)(lVar1 + 0x148))) {
      *(float *)(param_1 + 0x148) = *(float *)(lVar1 + 0x148);
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffffe;
      *(undefined4 *)(param_1 + 0x54) = 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar1 + 0x14c);
    FUN_147905288(lVar1,&local_28);
    if (local_28 != 0) {
      FUN_147905288(param_1,&local_30);
      if (local_30 == local_28) {
        FUN_147905310(*(undefined8 *)(param_1 + 0x1c8),&local_30);
        FUN_1479051e0(param_1,&local_28,&local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147905644 FUN_147905644 body=63 status=ok
// SIG undefined FUN_147905644(void)

void FUN_147905644(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  
  iVar2 = (int)DAT_14c872be0 + (int)(DAT_14c872be0 / 0xffffffff);
  *(int *)(param_1 + 0x1d0) = iVar2;
  if ((*(longlong *)(param_1 + 0x1c8) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x1c8) + 0x1d0) != iVar2)) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (0.0001 < ABS(*(float *)(param_1 + 0x148) - *(float *)(lVar1 + 0x148))) {
      *(float *)(param_1 + 0x148) = *(float *)(lVar1 + 0x148);
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffffe;
      *(undefined4 *)(param_1 + 0x54) = 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar1 + 0x14c);
    FUN_147905288(lVar1,&lStack_28);
    if (lStack_28 != 0) {
      FUN_147905288(param_1,&lStack_30);
      if (lStack_30 == lStack_28) {
        FUN_147905310(*(undefined8 *)(param_1 + 0x1c8),&lStack_30);
        FUN_1479051e0(param_1,&lStack_28,&lStack_30);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147905684 FUN_147905684 body=82 status=ok
// SIG undefined FUN_147905684(void)

longlong * FUN_147905684(longlong *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1478fd040(param_1 + 1,param_3);
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 1479056d6 FUN_1479056d6 body=967 status=ok
// SIG undefined FUN_1479056d6(void)

ulonglong FUN_1479056d6(longlong *param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_78 [36];
  float local_54;
  ulonglong local_50;
  undefined7 uVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = CONCAT71(uVar6,3);
  if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_147905713;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar3 = FUN_1479040de(param_1[1],*param_2,&local_54);
  *(uint *)((longlong)param_1 + 0x24) = uVar3;
  uVar5 = CONCAT71(uVar6,2);
  if (((int)uVar3 < 0) || (lVar4 = param_1[1], *(int *)(lVar4 + 0x160) <= (int)uVar3))
  goto LAB_147905713;
  lVar1 = *(longlong *)(lVar4 + 0x158) + (ulonglong)uVar3 * 0x50;
  cVar2 = *(char *)(*(longlong *)(lVar4 + 0x158) + 0x19 + (ulonglong)uVar3 * 0x50);
  if (cVar2 == '\x02') {
    fVar8 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
  }
  else if (cVar2 == '\x01') {
    fVar8 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
  }
  else {
    fVar8 = *(float *)(lVar1 + 0x24);
  }
  *(float *)(param_1 + 5) = fVar8;
  uVar9 = FUN_14790427a(lVar4,uVar3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x38) == '\x01') {
    fVar8 = *(float *)(param_1 + 2);
    if (1e-08 < ABS(fVar8)) {
      if (*(char *)(lVar4 + 0x1b0) == '\x01') {
        fVar10 = *(float *)(lVar4 + 0x1ac);
        if (*(char *)(lVar4 + 0x1a8) == '\x01') {
          fVar8 = *(float *)(lVar4 + 0x1a4);
          *param_2 = fVar8;
          uVar3 = FUN_1479040de(param_1[1],fVar8,&local_54);
          *(uint *)((longlong)param_1 + 0x24) = uVar3;
          if (((int)uVar3 < 0) || (lVar4 = param_1[1], *(int *)(lVar4 + 0x160) <= (int)uVar3))
          goto LAB_147905713;
          lVar1 = *(longlong *)(lVar4 + 0x158) + (ulonglong)uVar3 * 0x50;
          cVar2 = *(char *)(*(longlong *)(lVar4 + 0x158) + 0x19 + (ulonglong)uVar3 * 0x50);
          if (cVar2 == '\x02') {
            fVar8 = *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x1c);
          }
          else if (cVar2 == '\x01') {
            fVar8 = *(float *)(lVar1 + 0x1c) + *(float *)(lVar1 + 0x24);
          }
          else {
            fVar8 = *(float *)(lVar1 + 0x24);
          }
          *(float *)(param_1 + 5) = fVar8;
          uVar9 = FUN_14790427a(lVar4,uVar3);
          *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
          fVar8 = *(float *)(param_1 + 2);
        }
        fVar10 = fVar10 - *param_2;
        *(float *)((longlong)param_1 + 0x1c) = fVar10;
        *(float *)(param_1 + 3) = fVar10 / fVar8;
        *(bool *)(param_1 + 4) = 0.0 <= fVar10;
LAB_147905831:
        *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
      }
      else {
        fVar8 = *(float *)(lVar4 + 0x14c) * *(float *)(param_1[1] + 0xb0);
        *(float *)(param_1 + 3) = fVar8;
        if (ABS(fVar8) <= 1e-08) goto LAB_1479058cd;
        cVar2 = FUN_14794faea(param_1[1] + 0x1b8);
        fVar10 = *(float *)(param_1 + 3);
        if ((cVar2 == '\0') || (ABS(fVar10 + -1.0) <= 1e-08)) {
LAB_1479058b4:
          *(bool *)(param_1 + 4) = 0.0 < fVar10;
          fVar10 = fVar10 * *(float *)(param_1 + 2);
          *(float *)((longlong)param_1 + 0x1c) = fVar10;
          goto LAB_147905831;
        }
        FUN_147905a9e(param_1);
        if (*(char *)((longlong)param_1 + 0x31) == '\0') {
          fVar10 = *(float *)(param_1 + 3);
          goto LAB_1479058b4;
        }
        fVar10 = (float)FUN_147905b7e(param_1,*param_2);
        fVar8 = *(float *)(param_1 + 2);
        if ((char)param_1[4] == '\0') {
          fVar8 = -fVar8;
        }
        uVar9 = FUN_14794ffee(param_1 + 0xc,fVar10 + fVar8);
        fVar10 = (float)FUN_147905bd2(param_1,uVar9);
        fVar10 = fVar10 - *param_2;
        *(float *)((longlong)param_1 + 0x1c) = fVar10;
        *(float *)(param_1 + 3) = fVar10 / *(float *)(param_1 + 2);
      }
      if (param_3 != (longlong *)0x0) {
        lVar4 = FUN_1479043ca(param_1[1],*param_2,fVar10 + *param_2);
        *param_3 = lVar4;
        if (lVar4 == 0) {
          fVar10 = *(float *)((longlong)param_1 + 0x1c);
        }
        else {
          fVar10 = *(float *)(lVar4 + 4) - *param_2;
          *(float *)((longlong)param_1 + 0x1c) = fVar10;
        }
      }
      if ((char)param_1[4] == '\x01') {
        local_54 = *(float *)((longlong)param_1 + 0x2c) - local_54;
        bVar7 = fVar10 < local_54;
      }
      else {
        local_54 = -local_54;
        bVar7 = local_54 < fVar10;
      }
      fVar8 = fVar10;
      if (!bVar7) {
        *(float *)((longlong)param_1 + 0x1c) = local_54;
        *(undefined1 *)(param_1 + 6) = 1;
        fVar8 = local_54;
      }
      if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
        if ((fVar10 != fVar8) || (NAN(fVar10) || NAN(fVar8))) {
          *param_3 = 0;
          fVar8 = *(float *)((longlong)param_1 + 0x1c);
        }
      }
      uVar5 = CONCAT71(uVar6,1);
      if (fVar8 != 0.0) {
        *param_2 = fVar8 + *param_2;
        fVar8 = *(float *)(param_1 + 2) -
                *(float *)((longlong)param_1 + 0x1c) / *(float *)(param_1 + 3);
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        *(float *)(param_1 + 2) = fVar8;
        uVar5 = 0;
      }
      goto LAB_147905713;
    }
  }
LAB_1479058cd:
  uVar5 = CONCAT71(uVar6,1);
LAB_147905713:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147905a9e FUN_147905a9e body=222 status=ok
// SIG undefined FUN_147905a9e(void)

void FUN_147905a9e(longlong *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = *(float *)(*param_1 + 0x14c) * *(float *)(param_1[1] + 0xb0);
  if ((fVar2 != *(float *)((longlong)param_1 + 0x14)) ||
     (NAN(fVar2) || NAN(*(float *)((longlong)param_1 + 0x14)))) {
    *(float *)((longlong)param_1 + 0x14) = fVar2;
    *(undefined1 *)((longlong)param_1 + 0x31) = 0;
    *(bool *)(param_1 + 4) = 0.0 < fVar2;
    FUN_14794faf2(param_1 + 0xc,fVar2,param_1[1] + 0x1b8);
    uVar1 = *(undefined4 *)(param_1[1] + 0x160);
    FUN_14005ea14(param_1 + 7,uVar1);
    local_34 = 0xbf800000;
    FUN_1448158c6(param_1 + 7,&local_34,uVar1);
    FUN_14005ea14(param_1 + 9,uVar1);
    local_34 = 0xbf800000;
    FUN_1448158c6(param_1 + 9,&local_34,uVar1);
    *(char *)((longlong)param_1 + 0x31) = (char)param_1[0xc];
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147905b7e FUN_147905b7e body=84 status=ok
// SIG undefined FUN_147905b7e(void)

ulonglong FUN_147905b7e(longlong param_1,float param_2)

{
  ulonglong uVar1;
  
  if ((*(float *)(param_1 + 0x5c) != param_2) || (NAN(*(float *)(param_1 + 0x5c)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x5c) = param_2;
    FUN_14794fe76(param_1 + 0x60,param_1 + 0x34,param_2,param_1 + 0x70);
    uVar1 = FUN_14794ff7a(param_1 + 0x60,*(undefined4 *)(param_1 + 0x34),
                          *(undefined4 *)(param_1 + 0x5c));
    *(int *)(param_1 + 0x58) = (int)uVar1;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x58);
  }
  return uVar1;
}



// FUNCTION 147905bd2 FUN_147905bd2 body=87 status=ok
// SIG undefined FUN_147905bd2(void)

ulonglong FUN_147905bd2(longlong param_1,float param_2)

{
  ulonglong uVar1;
  
  if ((*(float *)(param_1 + 0x58) != param_2) || (NAN(*(float *)(param_1 + 0x58)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x58) = param_2;
    FUN_14794fe76(param_1 + 0x60,param_1 + 0x34,param_2,param_1 + 0x80);
    uVar1 = FUN_14794ffb4(param_1 + 0x60,*(undefined4 *)(param_1 + 0x34),
                          *(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) = (int)uVar1;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x5c);
  }
  return uVar1;
}



// FUNCTION 147905c2a FUN_147905c2a body=86 status=ok
// SIG undefined FUN_147905c2a(void)

void FUN_147905c2a(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(float *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x24) * 4) < 0.0) {
    uVar1 = FUN_14794ff2c(param_1 + 0x60,*(undefined4 *)(param_1 + 0x28),param_1 + 0x70);
    uVar1 = FUN_14794ff7a(param_1 + 0x60,uVar1,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x24) * 4) = uVar1;
  }
  return;
}



// FUNCTION 147905c80 FUN_147905c80 body=102 status=ok
// SIG undefined FUN_147905c80(void)

void FUN_147905c80(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(float *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x24) * 4) < 0.0) {
    fVar2 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c);
    uVar1 = FUN_14794ff2c(param_1 + 0x60,fVar2,param_1 + 0x70);
    uVar1 = FUN_14794ff7a(param_1 + 0x60,uVar1,fVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x24) * 4) = uVar1;
  }
  return;
}



// FUNCTION 147905ce6 FUN_147905ce6 body=215 status=ok
// SIG undefined FUN_147905ce6(void)

float FUN_147905ce6(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (ABS(*(float *)(param_1 + 0x18)) <= 1e-08) {
    fVar2 = 3.4e+38;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      fVar1 = fVar1 + *(float *)(param_1 + 0x2c);
    }
    if (*(int *)(param_1 + 0x34) == -1) {
      fVar2 = ABS((fVar1 - param_2) / *(float *)(param_1 + 0x18));
    }
    else {
      fVar2 = (float)FUN_147905b7e(param_1);
      if (*(char *)(param_1 + 0x20) == '\x01') {
        if (1e-08 < ABS(fVar1 - *(float *)(param_1 + 100))) {
          fVar1 = (float)FUN_147905c80(param_1);
        }
        else {
          fVar1 = *(float *)(param_1 + 0x68);
        }
        fVar2 = fVar1 - fVar2;
      }
      else if (1e-08 < ABS(fVar1)) {
        fVar1 = (float)FUN_147905c2a(param_1);
        fVar2 = fVar2 - fVar1;
      }
    }
  }
  return fVar2;
}



// FUNCTION 147905dbe FUN_147905dbe body=99 status=ok
// SIG undefined FUN_147905dbe(void)

void FUN_147905dbe(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    FUN_1417b38c0();
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = FUN_14001cc68(0x10,0x10);
  FUN_1478d0894(uVar2,*param_2);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447aaeac(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 147905e22 FUN_147905e22 body=826 status=ok
// SIG undefined FUN_147905e22(void)

ulonglong FUN_147905e22(longlong *param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_RDX;
  void *_Src;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  void *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = (longlong)*(int *)(*param_1 + 0x1b0);
  local_a0 = param_1 + 0x25;
  cVar1 = FUN_144729dda();
  _Src = (void *)CONCAT71((int7)((ulonglong)in_RDX >> 8),1);
  if (cVar1 == '\x01' && 0 < lVar11) {
    local_78 = param_1[0x25];
    plVar5 = param_1 + 0x27;
    uVar6 = (ulonglong)(int)param_1[0x28];
    local_b0 = plVar5;
    if (0 < (longlong)uVar6) {
      iVar8 = -(int)param_1[0x28];
      lVar9 = uVar6 * 0xb8;
      local_a8 = lVar11;
      do {
        lVar9 = lVar9 + -0xb8;
        if (*(longlong *)(*plVar5 + 0x50 + lVar9) != 0) {
          pvVar10 = (void *)(*plVar5 + lVar9);
          fVar13 = (float)FUN_14136ab98(pvVar10);
          fVar14 = (float)FUN_140166c3e(pvVar10);
          if ((param_2 <= fVar13) || (fVar14 < param_2)) {
            lVar7 = param_1[0x26];
            lVar11 = *param_1;
            lVar3 = FUN_14479d2ce(local_a0);
            local_98 = *(undefined8 *)(lVar3 + 0x20);
            local_7c = 1;
            local_90 = lVar11;
            local_88 = pvVar10;
            local_80 = (int)lVar7;
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x50) + 0x2f0))
                      (*(longlong **)((longlong)pvVar10 + 0x50),&local_98);
            cVar1 = FUN_144729dda(&local_78);
            if ((cVar1 == '\0') || (lVar11 = FUN_14479d2ce(&local_78), *(int *)(lVar11 + 0x90) == 0)
               ) goto LAB_147906121;
            lVar11 = param_1[0x27];
            pvVar10 = (void *)(lVar11 + lVar9);
            _Src = (void *)0x0;
            FUN_14499183d(pvVar10,1);
            uVar2 = *(uint *)(param_1 + 0x28);
            if (uVar6 != uVar2) {
              _Src = (void *)(lVar11 + lVar9 + 0xb8);
              memmove(pvVar10,_Src,(longlong)(int)(uVar2 + iVar8) * 0xb8);
              uVar2 = *(uint *)(param_1 + 0x28);
            }
            lVar11 = local_a8;
            plVar5 = local_b0;
            *(uint *)(param_1 + 0x28) = uVar2 - 1;
            FUN_1478fc208(local_b0);
          }
        }
        iVar8 = iVar8 + 1;
        bVar12 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar12);
    }
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(*param_1 + 0x88);
      lVar3 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x1a8) + lVar9 * 4) * 0xb8;
      if (*(longlong *)(lVar7 + 0x50 + lVar3) != 0) {
        pvVar10 = (void *)(lVar7 + lVar3);
        fVar13 = (float)FUN_14136ab98(pvVar10);
        fVar14 = (float)FUN_140166c3e(pvVar10);
        if ((fVar13 < param_2) && (param_2 <= fVar14)) {
          if ((longlong)(int)param_1[0x28] != 0) {
            lVar7 = param_1[0x27];
            lVar3 = (longlong)(int)param_1[0x28] * 0xb8;
            do {
              _Src = pvVar10;
              cVar1 = FUN_1402105be(lVar7,pvVar10);
              if (cVar1 != '\0') goto LAB_147906111;
              lVar7 = lVar7 + 0xb8;
              lVar3 = lVar3 + -0xb8;
            } while (lVar3 != 0);
          }
          lVar3 = param_1[0x26];
          lVar7 = *param_1;
          lVar4 = FUN_14479d2ce(local_a0);
          local_98 = *(undefined8 *)(lVar4 + 0x20);
          local_7c = 0;
          local_90 = lVar7;
          local_88 = pvVar10;
          local_80 = (int)lVar3;
          (**(code **)(**(longlong **)((longlong)pvVar10 + 0x50) + 0x2e0))
                    (*(longlong **)((longlong)pvVar10 + 0x50),&local_98);
          cVar1 = FUN_144729dda(&local_78);
          if ((cVar1 == '\0') ||
             (lVar7 = FUN_14479d2ce(&local_78), plVar5 = local_b0, *(int *)(lVar7 + 0x90) == 0))
          goto LAB_147906121;
          iVar8 = (int)param_1[0x28];
          *(uint *)(param_1 + 0x28) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0x144) < iVar8 + 1U) {
            FUN_140ed4548(local_b0,iVar8);
          }
          FUN_140ed40b0((longlong)iVar8 * 0xb8 + *plVar5,pvVar10);
          _Src = pvVar10;
        }
      }
LAB_147906111:
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar11);
    _Src = (void *)CONCAT71((int7)((ulonglong)_Src >> 8),1);
  }
LAB_147906123:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)_Src & 0xffffffff;
LAB_147906121:
  _Src = (void *)0x0;
  goto LAB_147906123;
}



// FUNCTION 14790615e FUN_14790615e body=753 status=ok
// SIG undefined FUN_14790615e(void)

void FUN_14790615e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = param_1 + 0x25;
  cVar3 = FUN_144729dda(plVar7);
  if ((cVar3 != '\0') && (lVar6 = *param_1, lVar6 != 0)) {
    local_40 = *plVar7;
    if ((*param_2 < *(int *)(lVar6 + 0x90)) &&
       (lVar9 = (longlong)*param_2 * 0xb8 + *(longlong *)(lVar6 + 0x88), lVar9 != 0)) {
      if ((*(char *)(lVar9 + 0x90) == '\x01') && (*(longlong *)(lVar9 + 0x3c) != 0)) {
        FUN_1400021e4(lVar9 + 0x3c,&local_50);
        puVar8 = local_50;
        if (local_48 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_70,L"MontageBranchingPoint_%s",puVar8);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_70;
        if ((int)local_68 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_50,puVar8,1);
        uVar5 = FUN_14479d2ce(plVar7);
        lVar6 = FUN_14171b860(uVar5,local_50);
        plVar7 = (longlong *)FUN_14479d2ce(plVar7);
        if (lVar6 == 0) {
          FUN_1478f6e7a(plVar7,lVar9);
        }
        else {
          (**(code **)(*plVar7 + 0x248))(plVar7,lVar6,0);
        }
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (*(longlong *)(lVar9 + 0x50) == 0) {
        if (*(longlong *)(lVar9 + 0x48) == 0) {
          uVar5 = FUN_14479d2ce(plVar7);
          FUN_1478f6e7a(uVar5,lVar9);
        }
        else {
          lVar2 = param_1[0x26];
          lVar4 = FUN_14479d2ce(plVar7);
          local_70 = *(undefined2 **)(lVar4 + 0x20);
          local_54 = 0;
          local_68 = lVar6;
          local_60 = lVar9;
          local_58 = (int)lVar2;
          (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x2c0))();
        }
      }
      else if ((char)param_2[2] == '\0') {
        lVar2 = param_1[0x26];
        lVar4 = FUN_14479d2ce(plVar7);
        local_70 = *(undefined2 **)(lVar4 + 0x20);
        local_54 = 0;
        local_68 = lVar6;
        local_60 = lVar9;
        local_58 = (int)lVar2;
        (**(code **)(**(longlong **)(lVar9 + 0x50) + 0x2e0))();
        cVar3 = FUN_144729dda(&local_40);
        if ((cVar3 != '\0') && (lVar6 = FUN_14479d2ce(&local_40), *(int *)(lVar6 + 0x90) != 0)) {
          iVar1 = (int)param_1[0x28];
          *(uint *)(param_1 + 0x28) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x144) < iVar1 + 1U) {
            FUN_140ed4548(param_1 + 0x27,iVar1);
          }
          FUN_140ed40b0((longlong)iVar1 * 0xb8 + param_1[0x27],lVar9);
        }
      }
      else {
        lVar2 = param_1[0x26];
        lVar4 = FUN_14479d2ce(plVar7);
        local_70 = *(undefined2 **)(lVar4 + 0x20);
        local_54 = 1;
        local_68 = lVar6;
        local_60 = lVar9;
        local_58 = (int)lVar2;
        (**(code **)(**(longlong **)(lVar9 + 0x50) + 0x2f0))();
        cVar3 = FUN_144729dda(&local_40);
        if ((cVar3 != '\0') && (lVar6 = FUN_14479d2ce(&local_40), *(int *)(lVar6 + 0x90) != 0)) {
          FUN_147906450(param_1 + 0x27,lVar9);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147906450 FUN_147906450 body=122 status=ok
// SIG undefined FUN_147906450(void)

void FUN_147906450(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      cVar3 = FUN_1402105be(lVar1 + uVar4,param_2);
      if (cVar3 != '\0') {
        if ((int)(uVar4 >> 3) * -0x1642c859 == -1) {
          return;
        }
        FUN_14791d35e(param_1);
        FUN_1478fc208(param_1);
        return;
      }
      uVar4 = uVar4 + 0xb8;
    } while ((longlong)(int)lVar2 * 0xb8 - uVar4 != 0);
  }
  return;
}



// FUNCTION 1479064ca FUN_1479064ca body=37 status=ok
// SIG undefined FUN_1479064ca(void)

undefined8 * FUN_1479064ca(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1478cdf5a(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1479064ef FUN_1479064ef body=175 status=ok
// SIG undefined FUN_1479064ef(void)

undefined8 FUN_1479064ef(undefined8 param_1)

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
  local_b8 = FUN_144a718e6();
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



// FUNCTION 1479065a0 FUN_1479065a0 body=75 status=ok
// SIG undefined FUN_1479065a0(void)

undefined8 * FUN_1479065a0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 2) = (int)param_2[1];
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1479065ec FUN_1479065ec body=589 status=ok
// SIG undefined FUN_1479065ec(void)

bool FUN_1479065ec(longlong *param_1,float param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_17c;
  float local_178 [26];
  longlong *local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  byte local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar2 + 0x340))(plVar2);
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)((longlong)param_1 + 0x1b4) < 1;
    }
    uStack_f8 = 0;
    local_f0 = 1;
    local_ec = -1;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 0xffffffff;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0x7f7fffff7f7fffff;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_108 = *param_1;
    local_100 = (ulonglong)(uint)(param_2 + 0.0);
    local_110 = param_1;
    if (1e-08 < param_2) {
      do {
        fVar6 = *param_3;
        cVar5 = FUN_1479056d6(&local_110,param_3,0);
        if (cVar5 != '\0') break;
        if (bVar3) {
          local_188 = param_5;
          FUN_1433dbeea(*param_1,local_178,fVar6,*param_3);
          FUN_140167042(param_4,local_178);
        }
        bVar4 = local_f0;
        if ((char)local_e0 == '\x01') {
          iVar1 = *(int *)(*(longlong *)
                            ((longlong)param_1 + (ulonglong)((local_f0 ^ 1) << 4) + 0x108) +
                          (longlong)local_ec * 4);
          if (iVar1 == -1) break;
          FUN_147904194(*param_1,iVar1,local_178,&local_17c);
          fVar6 = local_17c + -0.0001;
          if (bVar4 != 0) {
            fVar6 = local_178[0];
          }
          *param_3 = fVar6;
        }
      } while (1e-08 < (float)local_100);
    }
    FUN_1478fa580(&local_110);
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790683a FUN_14790683a body=1 status=ok
// SIG undefined FUN_14790683a(void)

void FUN_14790683a(void)

{
  return;
}



// FUNCTION 147906846 FUN_147906846 body=421 status=ok
// SIG undefined FUN_147906846(void)

void FUN_147906846(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacbfe4) && (FUN_144b3d300(&DAT_14cacbfe4), DAT_14cacbfe4 == -1)) {
    DAT_14cacbfd8 = 0;
    DAT_14cacbfe0 = -1;
    _Init_thread_footer(&DAT_14cacbfe4);
  }
  if (DAT_14cacbfe0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacbff0) && (FUN_144b3d300(), DAT_14cacbff0 == -1)) {
      FUN_1446ddc76(&DAT_14cacbfe8,"InitialUpdateFunction",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbbb0 == 0) {
      uVar1 = FUN_140002dac();
      DAT_14cacbbb0 = FUN_140002ddd(FUN_1417b4f4e,uVar1,L"AnimNode_Base");
    }
    uVar1 = DAT_14cacbfe8;
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cacbfe0 = -1;
      DAT_14cacbfd8 = uVar1;
    }
    else {
      if (*plVar2 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)plVar2[1];
      }
      DAT_14cacbfe0 = (**(code **)(*plVar2 + 0x130))(plVar2,DAT_14cacbbb0,DAT_14cacbfe8);
      DAT_14cacbfd8 = uVar1;
    }
  }
  local_20 = DAT_14cacbfe0;
  local_28 = DAT_14cacbfd8;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479069ec FUN_1479069ec body=421 status=ok
// SIG undefined FUN_1479069ec(void)

void FUN_1479069ec(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc004) && (FUN_144b3d300(&DAT_14cacc004), DAT_14cacc004 == -1)) {
    DAT_14cacbff8 = 0;
    DAT_14cacc000 = -1;
    _Init_thread_footer(&DAT_14cacc004);
  }
  if (DAT_14cacc000 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc010) && (FUN_144b3d300(), DAT_14cacc010 == -1)) {
      FUN_1446ddc76(&DAT_14cacc008,"BecomeRelevantFunction",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbbb0 == 0) {
      uVar1 = FUN_140002dac();
      DAT_14cacbbb0 = FUN_140002ddd(FUN_1417b4f4e,uVar1,L"AnimNode_Base");
    }
    uVar1 = DAT_14cacc008;
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cacc000 = -1;
      DAT_14cacbff8 = uVar1;
    }
    else {
      if (*plVar2 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)plVar2[1];
      }
      DAT_14cacc000 = (**(code **)(*plVar2 + 0x130))(plVar2,DAT_14cacbbb0,DAT_14cacc008);
      DAT_14cacbff8 = uVar1;
    }
  }
  local_20 = DAT_14cacc000;
  local_28 = DAT_14cacbff8;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147906b92 FUN_147906b92 body=421 status=ok
// SIG undefined FUN_147906b92(void)

void FUN_147906b92(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc024) && (FUN_144b3d300(&DAT_14cacc024), DAT_14cacc024 == -1)) {
    DAT_14cacc018 = 0;
    DAT_14cacc020 = -1;
    _Init_thread_footer(&DAT_14cacc024);
  }
  if (DAT_14cacc020 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc030) && (FUN_144b3d300(), DAT_14cacc030 == -1)) {
      FUN_1446ddc76(&DAT_14cacc028,"UpdateFunction",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbbb0 == 0) {
      uVar1 = FUN_140002dac();
      DAT_14cacbbb0 = FUN_140002ddd(FUN_1417b4f4e,uVar1,L"AnimNode_Base");
    }
    uVar1 = DAT_14cacc028;
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cacc020 = -1;
      DAT_14cacc018 = uVar1;
    }
    else {
      if (*plVar2 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)plVar2[1];
      }
      DAT_14cacc020 = (**(code **)(*plVar2 + 0x130))(plVar2,DAT_14cacbbb0,DAT_14cacc028);
      DAT_14cacc018 = uVar1;
    }
  }
  local_20 = DAT_14cacc020;
  local_28 = DAT_14cacc018;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147906d38 FUN_147906d38 body=19 status=ok
// SIG undefined FUN_147906d38(void)

void FUN_147906d38(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147906d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x38))();
    return;
  }
  return;
}



// FUNCTION 147906d4c FUN_147906d4c body=347 status=ok
// SIG undefined FUN_147906d4c(void)

void FUN_147906d4c(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (void *)0x0;
  local_68 = (int)param_2[1];
  lVar3 = (longlong)local_68;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar3 * 2);
  }
  FUN_147906ea8(&local_60,&local_70);
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14791d562(param_1 + 8,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 0x28) = 0;
  *(undefined8 *)(lVar2 + lVar3 * 0x28) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3 * 0x28) = (undefined4)local_58;
  *(undefined4 *)(lVar2 + 0xc + lVar3 * 0x28) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x28) = local_50;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x28) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar2 + 0x20 + lVar3 * 0x28) = (undefined4)local_40;
  *(undefined4 *)(lVar2 + 0x24 + lVar3 * 0x28) = local_40._4_4_;
  local_40 = 0;
  FUN_147906f22();
  lVar3 = (longlong)(*(int *)(param_1 + 0x10) + -1);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x24 + lVar3 * 0x28) < 0xc) {
    FUN_14791b254(*(longlong *)(param_1 + 8) + lVar3 * 0x28 + 0x18);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147906ea8 FUN_147906ea8 body=121 status=ok
// SIG undefined FUN_147906ea8(void)

undefined8 * FUN_147906ea8(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147906f22 FUN_147906f22 body=59 status=ok
// SIG undefined FUN_147906f22(void)

void FUN_147906f22(longlong *param_1)

{
  FUN_147915d7d(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147906f5e FUN_147906f5e body=539 status=ok
// SIG undefined FUN_147906f5e(void)

longlong FUN_147906f5e(float *param_1,float param_2,longlong *param_3)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 2) + (longlong)((int)param_1[4] + -1) * 0x28;
  uVar1 = *(undefined8 *)(param_1 + 10);
  local_a8 = (void *)0x0;
  local_a0 = (int)param_3[1];
  lVar4 = (longlong)local_a0;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,_Src,lVar4 * 2);
  }
  local_b8 = uVar1;
  FUN_14790717a(local_98,*(undefined8 *)(param_1 + 0x10),param_2 * *param_1,&local_a8);
  iVar3 = *(int *)(lVar2 + 0x20);
  lVar4 = (longlong)iVar3;
  *(uint *)(lVar2 + 0x20) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0x24) < iVar3 + 1U) {
    FUN_14791d5f6((longlong *)(lVar2 + 0x18),iVar3);
  }
  lVar2 = *(longlong *)(lVar2 + 0x18);
  *(undefined4 *)(lVar2 + lVar4 * 0x48) = local_98[0];
  *(undefined8 *)(lVar2 + 8 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar4 * 0x48) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x48) = (undefined4)local_88;
  *(undefined4 *)(lVar2 + 0x14 + lVar4 * 0x48) = local_88._4_4_;
  local_88 = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar4 * 0x48) = local_80;
  local_80 = 0;
  *(undefined4 *)(lVar2 + 0x20 + lVar4 * 0x48) = (undefined4)local_78;
  *(undefined4 *)(lVar2 + 0x24 + lVar4 * 0x48) = local_78._4_4_;
  local_78 = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4 * 0x48) = local_70;
  *(undefined8 *)(lVar2 + 0x30 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x30 + lVar4 * 0x48) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar2 + 0x38 + lVar4 * 0x48) = (undefined4)local_60;
  *(undefined4 *)(lVar2 + 0x3c + lVar4 * 0x48) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar4 * 0x48) = local_58;
  FUN_147907212();
  iVar3 = *(int *)(*(longlong *)(param_1 + 2) + 0x20 + (longlong)((int)param_1[4] + -1) * 0x28);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x18 + (longlong)((int)param_1[4] + -1) * 0x28)
  ;
  if (*(int *)(lVar2 + 0x14 + (longlong)(iVar3 + -1) * 0x48) < 0x32) {
    FUN_14791d68a(lVar2 + (longlong)(iVar3 + -1) * 0x48 + 8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 2) + 0x20 + (longlong)((int)param_1[4] + -1) * 0x28);
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 2) + 0x18 + (longlong)((int)param_1[4] + -1) * 0x28);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar2 + (longlong)(iVar3 + -1) * 0x48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790717a FUN_14790717a body=152 status=ok
// SIG undefined FUN_14790717a(void)

undefined4 *
FUN_14790717a(undefined4 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = (int)param_4[1];
  _Src = (void *)*param_4;
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147907212 FUN_147907212 body=86 status=ok
// SIG undefined FUN_147907212(void)

void FUN_147907212(longlong param_1)

{
  FUN_147915d7d(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_147915ddf(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147907268 FUN_147907268 body=373 status=ok
// SIG undefined FUN_147907268(void)

longlong FUN_147907268(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = lVar2;
  FUN_14790717a(local_70,*(undefined8 *)(param_1 + 0x40),param_2);
  iVar1 = *(int *)(lVar2 + 0x38);
  lVar3 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x38) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x3c) < iVar1 + 1U) {
    FUN_14791d5f6((longlong *)(lVar2 + 0x30),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x30);
  *(undefined4 *)(lVar2 + lVar3 * 0x48) = local_70[0];
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x48) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x48) = (undefined4)local_60;
  *(undefined4 *)(lVar2 + 0x14 + lVar3 * 0x48) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x48) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar2 + 0x20 + lVar3 * 0x48) = (undefined4)local_50;
  *(undefined4 *)(lVar2 + 0x24 + lVar3 * 0x48) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3 * 0x48) = local_48;
  *(undefined8 *)(lVar2 + 0x30 + lVar3 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x30 + lVar3 * 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)(lVar2 + 0x38 + lVar3 * 0x48) = (undefined4)local_38;
  *(undefined4 *)(lVar2 + 0x3c + lVar3 * 0x48) = local_38._4_4_;
  local_38 = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar3 * 0x48) = local_30;
  FUN_147907212();
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
  lVar3 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) + -1);
  if (*(int *)(lVar2 + 0x14 + lVar3 * 0x48) < 0x32) {
    FUN_14791d68a(lVar2 + lVar3 * 0x48 + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
    lVar3 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) + -1);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar2 + lVar3 * 0x48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479073de FUN_1479073de body=4 status=ok
// SIG undefined FUN_1479073de(void)

undefined4 FUN_1479073de(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 1479073e2 FUN_1479073e2 body=366 status=ok
// SIG undefined FUN_1479073e2(void)

void FUN_1479073e2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x908) != *(int *)(param_1 + 0x92c)) {
    uVar6 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x930;
    if (*(longlong *)(param_1 + 0x940) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x940);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x948) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x900);
      if (*(longlong *)(param_1 + 0x900) == 0) {
        lVar4 = param_1;
      }
      do {
        lVar1 = lVar4 + (longlong)iVar3 * 0x120;
        if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x120) == param_2) {
          if ((lVar1 + 8 != 0 && lVar1 != 0) &&
             (uVar6 = *(uint *)(lVar1 + 0x110), 0 < (int)*(uint *)(lVar1 + 0x110)))
          goto LAB_1479074f1;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x118);
      } while (iVar3 != -1);
    }
  }
  goto LAB_14790740f;
  while (bVar7 = 1 < uVar6, uVar6 = uVar5, bVar7) {
LAB_1479074f1:
    uVar5 = uVar6 - 1;
    lVar4 = *(longlong *)(lVar1 + 0x108);
    if (*(longlong *)(lVar1 + 0x108) == 0) {
      lVar4 = lVar1 + 8;
    }
    plVar2 = *(longlong **)(lVar4 + (ulonglong)uVar5 * 0x20);
    (**(code **)(*plVar2 + 8))(plVar2,&local_50);
    if (local_50 == param_2) {
      iVar3 = (*(code *)*param_3)(param_3[1],*(undefined8 *)(lVar4 + (ulonglong)uVar5 * 0x20));
      if ((uVar6 < 2) || (uVar6 = uVar5, iVar3 == 0)) break;
      goto LAB_1479074f1;
    }
  }
LAB_14790740f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147907552 FUN_147907552 body=94 status=ok
// SIG undefined FUN_147907552(void)

longlong * FUN_147907552(longlong *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)FUN_140721bac(*(undefined8 *)(param_2 + 0x10));
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  if ((-1 < (int)param_3) && ((int)param_3 < (int)plVar1[1])) {
    param_1[1] = *(longlong *)(*(longlong *)(*plVar1 + (ulonglong)param_3 * 8) + 0x70);
    *param_1 = param_2 + *(int *)(*(longlong *)(*plVar1 + (ulonglong)param_3 * 8) + 0x44);
  }
  return param_1;
}



// FUNCTION 1479075b0 FUN_1479075b0 body=201 status=ok
// SIG undefined FUN_1479075b0(void)

void FUN_1479075b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14790767a(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790767a FUN_14790767a body=256 status=ok
// SIG undefined FUN_14790767a(void)

undefined8 FUN_14790767a(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbc68 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbc68 = FUN_140002ddd(FUN_1463a5027,uVar2,L"AnimNode_ConvertComponentToLocalSpace");
  }
  local_48 = *(undefined8 *)(DAT_14cacbc68 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14790777c FUN_14790777c body=201 status=ok
// SIG undefined FUN_14790777c(void)

void FUN_14790777c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147907846(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147907846 FUN_147907846 body=256 status=ok
// SIG undefined FUN_147907846(void)

undefined8 FUN_147907846(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbc80 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbc80 = FUN_140002ddd(FUN_1463a50bd,uVar2,L"AnimNode_ConvertLocalToComponentSpace");
  }
  local_48 = *(undefined8 *)(DAT_14cacbc80 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147907956 FUN_147907956 body=382 status=ok
// SIG undefined FUN_147907956(void)

void FUN_147907956(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147907ad6(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%%)",(double)(*(float *)(param_1 + 0xd4) * 100.0));
  iVar2 = local_58 + -1;
  if (local_58 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar2);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = FUN_147906f5e(param_2,0x3f800000);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar3);
  }
  local_98 = 0;
  uStack_90 = 0;
  uVar3 = FUN_147906f5e(param_2,*(undefined4 *)(param_1 + 0xd4));
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar3);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147907ad6 FUN_147907ad6 body=256 status=ok
// SIG undefined FUN_147907ad6(void)

undefined8 FUN_147907ad6(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbc98 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbc98 = FUN_140002ddd(FUN_1463a5153,uVar2,L"AnimNode_ApplyMeshSpaceAdditive");
  }
  local_48 = *(undefined8 *)(DAT_14cacbc98 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147907be2 FUN_147907be2 body=483 status=ok
// SIG undefined FUN_147907be2(void)

void FUN_147907be2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  void *_Src;
  longlong lVar8;
  void *_Dst;
  bool bVar9;
  bool bVar10;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (0 < *(int *)(param_1 + 0x48))) {
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar8 * 8);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar8 * 8);
      if (lVar6 != 0 && plVar2 != (longlong *)0x0) {
        iVar1 = *(int *)((longlong)plVar2 + 0x44);
        _Dst = (void *)((longlong)*(int *)(lVar6 + 0x44) + *(longlong *)(param_1 + 0x38));
        lVar5 = plVar2[1];
        lVar4 = FUN_144a5ab96();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar9 = lVar5 != 0;
          if (lVar5 != lVar4 && bVar9) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar9 = lVar5 != 0;
              if (lVar5 == lVar4) break;
            } while (lVar5 != 0);
          }
        }
        else {
          bVar9 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
        }
        plVar7 = (longlong *)0x0;
        if (bVar9) {
          plVar7 = plVar2;
        }
        lVar5 = *(longlong *)(lVar6 + 8);
        lVar4 = FUN_144a5ab96();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar10 = lVar5 != 0;
          if (lVar5 != lVar4 && bVar10) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar10 = lVar5 != 0;
              if (lVar5 == lVar4) break;
            } while (lVar5 != 0);
          }
        }
        else {
          bVar10 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
        }
        if (!bVar10) {
          lVar6 = 0;
        }
        if ((bool)(bVar9 & bVar10)) {
          if ((*(byte *)((ulonglong)*(byte *)((longlong)plVar7 + 0x71) +
                        *(int *)((longlong)plVar7 + 0x44) + param_2) &
              *(byte *)((longlong)plVar7 + 0x73)) == 0) {
            bVar3 = 0;
          }
          else {
            bVar3 = *(byte *)(lVar6 + 0x72);
          }
          lVar5 = (longlong)*(int *)(lVar6 + 0x44) + *(longlong *)(param_1 + 0x38);
          *(byte *)(lVar5 + (ulonglong)*(byte *)(lVar6 + 0x71)) =
               ~*(byte *)(lVar6 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar6 + 0x71) + lVar5) |
               bVar3;
        }
        else {
          _Src = (void *)(iVar1 + param_2);
          if (_Dst != _Src) {
            if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar2 + 0x100))(plVar2,_Dst,_Src,(int)plVar2[6]);
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 147907dc6 FUN_147907dc6 body=233 status=ok
// SIG undefined FUN_147907dc6(void)

void FUN_147907dc6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    FUN_1457c22ea(param_1 + 0x40,*(undefined4 *)(param_1 + 0x20));
    plVar1 = (longlong *)(param_1 + 0x50);
    FUN_1457c22ea(plVar1,*(undefined4 *)(param_1 + 0x20));
    if (0 < *(int *)(param_1 + 0x20)) {
      lVar6 = 0;
      do {
        lVar4 = FUN_144a8e29b(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8),3);
        if ((lVar4 != 0) &&
           (lVar5 = FUN_144a8e29b(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8),3
                                 ), lVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
            FUN_140001000(param_1 + 0x40,iVar2);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 8) = lVar5;
          iVar2 = *(int *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
            FUN_140001000(plVar1,iVar2);
          }
          *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 147907ec4 FUN_147907ec4 body=435 status=ok
// SIG undefined FUN_147907ec4(void)

void FUN_147907ec4(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x63c) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_14481578e(param_1 + 0x3e0,0);
  }
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if (*(int *)(param_1 + 0x3fc) != 0) {
    FUN_1447a8aa0(param_1 + 0x3f0,0);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_1401017f4(param_1 + 0x400,0);
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (*(int *)(param_1 + 0x41c) != 0) {
    FUN_146ed5086(param_1 + 0x410,0);
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_1447a8aa0(param_1 + 0x420,0);
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(int *)(param_1 + 0x43c) != 0) {
    FUN_140678446(param_1 + 0x430,0);
  }
  *(undefined4 *)(param_1 + 0x448) = 0;
  if (*(int *)(param_1 + 0x44c) != 0) {
    FUN_140678446(param_1 + 0x440,0);
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  if (*(int *)(param_1 + 0x45c) != 0) {
    FUN_140678446(param_1 + 0x450,0);
  }
  *(undefined4 *)(param_1 + 0x468) = 0;
  if (*(int *)(param_1 + 0x46c) != 0) {
    FUN_140678446(param_1 + 0x460,0);
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  if (*(int *)(param_1 + 0x47c) != 0) {
    FUN_140678446(param_1 + 0x470,0);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) != 0) {
    FUN_140678446(param_1 + 0x480,0);
  }
  *(undefined4 *)(param_1 + 0x650) = 0;
  if (*(int *)(param_1 + 0x654) != 0) {
    FUN_14482f6fa(param_1 + 0x648,0);
    return;
  }
  return;
}



// FUNCTION 147908078 FUN_147908078 body=118 status=ok
// SIG undefined FUN_147908078(void)

void FUN_147908078(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146ed5086(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_146ed4f5e(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  return;
}



// FUNCTION 1479080f0 FUN_1479080f0 body=68 status=ok
// SIG undefined FUN_1479080f0(void)

void FUN_1479080f0(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_14791ea6c(param_1,0);
  }
  FUN_14791e86e(param_1,param_2);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x10);
  return;
}



// FUNCTION 147908134 FUN_147908134 body=600 status=ok
// SIG undefined FUN_147908134(void)

void FUN_147908134(longlong param_1,longlong *param_2)

{
  longlong *_Dst;
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  cVar1 = (char)param_2[3];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x02') {
    if ((int)param_2[1] != 0) goto LAB_14790817e;
  }
  else if (cVar1 != '\x01') {
LAB_14790817e:
    if (*(char *)(param_1 + 0xd0) == '\0') {
      lVar6 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar6 = param_1;
      }
      FUN_14791ebc2(lVar6,*(undefined4 *)(param_1 + 200));
      *(undefined1 *)(param_1 + 0xd0) = 1;
    }
    if ((char)param_2[2] == '\0') {
      FUN_146264839(*param_2,(int)param_2[1]);
      *(undefined1 *)(param_2 + 2) = 1;
    }
    uVar5 = *(uint *)(param_1 + 200);
    iVar3 = (int)param_2[1];
    bVar10 = uVar5 == 0;
    if (bVar10 && 0 < iVar3) {
      return;
    }
    uVar8 = 0;
    iVar9 = 0;
    do {
      if ((int)uVar8 < (int)uVar5 && iVar9 == iVar3) {
        do {
          if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
            uVar8 = uVar8 + 1;
          }
          else {
            if (~uVar8 + uVar5 != 0) {
              lVar6 = *(longlong *)(param_1 + 0xc0);
              if (*(longlong *)(param_1 + 0xc0) == 0) {
                lVar6 = param_1;
              }
              memmove((void *)(lVar6 + (longlong)(int)uVar8 * 0x18),
                      (void *)(lVar6 + (longlong)(int)uVar8 * 0x18 + 0x18),
                      (longlong)(int)(~uVar8 + uVar5) * 0x18);
              uVar5 = *(uint *)(param_1 + 200);
            }
            uVar5 = uVar5 - 1;
            *(uint *)(param_1 + 200) = uVar5;
          }
        } while ((int)uVar8 < (int)uVar5);
        return;
      }
      if ((bool)(bVar10 & iVar9 == iVar3)) {
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar6 = param_1;
      }
      _Dst = (longlong *)(lVar6 + (longlong)(int)uVar8 * 0x18);
      lVar6 = *(longlong *)(*param_2 + (longlong)iVar9 * 0xc);
      lVar4 = *_Dst;
      if (lVar4 == lVar6) {
        bVar2 = *(byte *)(*param_2 + (longlong)iVar9 * 0xc + 8);
        if ((bVar2 & 1) != 0) goto LAB_14790822e;
        cVar1 = (char)param_2[3];
        if (cVar1 == '\0') {
LAB_1479082a8:
          uVar8 = uVar8 + 1;
        }
        else {
          if (cVar1 == '\x02') {
            if ((bVar2 & 2) != 0) goto LAB_1479082a8;
          }
          else if ((cVar1 == '\x03') && ((bVar2 & 2) == 0)) goto LAB_1479082a8;
LAB_14790822e:
          if (~uVar8 + uVar5 != 0) {
            memmove(_Dst,_Dst + 3,(longlong)(int)(~uVar8 + uVar5) * 0x18);
            uVar5 = *(uint *)(param_1 + 200);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_1 + 200) = uVar5;
        }
LAB_14790825b:
        iVar9 = iVar9 + 1;
      }
      else {
        iVar7 = (int)lVar4 - (int)lVar6;
        if (iVar7 == 0) {
          iVar7 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar6 >> 0x20);
        }
        if (-1 < iVar7) goto LAB_14790825b;
        if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
          uVar8 = uVar8 + 1;
        }
        else {
          if (~uVar8 + uVar5 != 0) {
            memmove(_Dst,_Dst + 3,(longlong)(int)(~uVar8 + uVar5) * 0x18);
            uVar5 = *(uint *)(param_1 + 200);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_1 + 200) = uVar5;
        }
      }
      bVar10 = uVar8 == uVar5;
      if (bVar10 && iVar9 < iVar3) {
        return;
      }
    } while( true );
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (-1 < *(int *)(param_1 + 0xcc)) {
    return;
  }
  FUN_14791ea6c(param_1,0);
  return;
}



// FUNCTION 1479083b0 FUN_1479083b0 body=743 status=ok
// SIG undefined FUN_1479083b0(void)

undefined8 * FUN_1479083b0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a7b61d0;
  param_1[3] = &PTR_FUN_14a7b62d0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e800000;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3d4ccccd3f800000;
  param_1[0x12] = 0x43fa00003f800000;
  param_1[0x13] = 0x4080000043b40000;
  *(undefined4 *)(param_1 + 0x14) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x800000000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3ff00000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0x3ff0000000000000;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3ff00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0x3ff0000000000000;
  param_1[0x57] = 0x3ff0000000000000;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0x3ff0000000000000;
  param_1[0x65] = 0x3ff0000000000000;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x7b) = 0xffff;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  memset(param_1 + 0x7c,0,0xb0);
  *(undefined4 *)((longlong)param_1 + 0x584) = 8;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0x800000000;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined1 *)((longlong)param_1 + 0x63c) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x64d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x655) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xffffffff;
  param_1[0xd0] = 0;
  return param_1;
}



// FUNCTION 1479086b2 FUN_1479086b2 body=856 status=ok
// SIG undefined FUN_1479086b2(void)

void FUN_1479086b2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) < 0) {
    FUN_1474da402(param_1 + 0xa8,0);
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 3;
  local_28 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(undefined4 *)(param_1 + 0x60);
  FUN_140df8b76(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1474da402(param_1 + 200,0);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 3;
  local_38 = *(undefined8 *)(param_1 + 0x68);
  local_30 = *(undefined4 *)(param_1 + 0x70);
  FUN_140df8b76(param_1 + 200);
  local_3c = 0xffffffff;
  FUN_140900d9a(param_1 + 0xe8,&local_3c,*(undefined4 *)(param_1 + 0x80));
  FUN_140df8aa8(param_1 + 0x120);
  FUN_140df8aa8(param_1 + 0x270);
  if (*(int *)(param_1 + 0x3cc) < 8) {
    FUN_140df8c06(param_1 + 0x3c0,8);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_14481578e(param_1 + 0x3e0,0);
  }
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if (*(int *)(param_1 + 0x3fc) != 0) {
    FUN_1447a8aa0(param_1 + 0x3f0,0);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_1401017f4(param_1 + 0x400,0);
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (*(int *)(param_1 + 0x41c) != 0) {
    FUN_146ed5086(param_1 + 0x410,0);
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_1447a8aa0(param_1 + 0x420,0);
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(int *)(param_1 + 0x43c) != 0) {
    FUN_140678446(param_1 + 0x430,0);
  }
  *(undefined4 *)(param_1 + 0x448) = 0;
  if (*(int *)(param_1 + 0x44c) != 0) {
    FUN_140678446(param_1 + 0x440,0);
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  if (*(int *)(param_1 + 0x45c) != 0) {
    FUN_140678446(param_1 + 0x450,0);
  }
  *(undefined4 *)(param_1 + 0x468) = 0;
  if (*(int *)(param_1 + 0x46c) != 0) {
    FUN_140678446(param_1 + 0x460,0);
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  if (*(int *)(param_1 + 0x47c) != 0) {
    FUN_140678446(param_1 + 0x470,0);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) != 0) {
    FUN_140678446(param_1 + 0x480,0);
  }
  if (*(int *)(param_1 + 0x584) < 0) {
    *(undefined4 *)(param_1 + 0x580) = 0;
    FUN_14791ea6c(param_1 + 0x4b8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  *(undefined1 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  *(undefined1 *)(param_1 + 0x63c) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined4 *)(param_1 + 0x650) = 0;
  if (*(int *)(param_1 + 0x654) != 0) {
    FUN_14482f6fa(param_1 + 0x648,0);
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined1 *)(param_1 + 0x65c) = *(undefined1 *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x660) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147908a0c FUN_147908a0c body=278 status=ok
// SIG undefined FUN_147908a0c(void)

void FUN_147908a0c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  lVar2 = *(longlong *)(*param_2 + 0x6a0);
  local_3c = 0xffffffff;
  FUN_140900d9a(param_1 + 0xe8,&local_3c,*(undefined4 *)(param_1 + 0x80));
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar8 = 0xc;
    lVar7 = 0;
    do {
      FUN_140900ef4(*(longlong *)(param_1 + 0x78) + lVar8 + -0xc,*(undefined8 *)(*param_2 + 0x140));
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x78) + -4 + lVar8);
      if ((int)uVar5 < 0) {
        uVar3 = 0xffffffff;
        if ((((~uVar5 & 0x7fffffff) != 0) && (uVar5 = (int)(uVar5 * 2) >> 1, -1 < (int)uVar5)) &&
           ((int)uVar5 < *(int *)(lVar2 + 0x88))) {
          puVar4 = (undefined4 *)((ulonglong)uVar5 * 4 + *(longlong *)(lVar2 + 0x80));
          goto LAB_147908aa8;
        }
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + lVar8);
LAB_147908aa8:
        uVar3 = *puVar4;
      }
      lVar6 = *(longlong *)(param_1 + 0x108);
      if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar6 = param_1 + 0xe8;
      }
      *(undefined4 *)(lVar6 + lVar7 * 4) = uVar3;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x80));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147908b24 FUN_147908b24 body=367 status=ok
// SIG undefined FUN_147908b24(void)

void FUN_147908b24(longlong param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(char *)(param_1 + 0xa4) == '\x01') && (sVar1 = *(short *)(param_1 + 0x3d8), sVar1 != -1))
      && (*(longlong *)(param_1 + 0x3d0) != -1)) && (sVar1 != *(short *)(*param_2 + 0x5e8))) {
    sVar4 = sVar1 + 2;
    if ((short)(sVar1 + 1) != -1) {
      sVar4 = sVar1 + 1;
    }
    if (((sVar4 != *(short *)(*param_2 + 0x5e8)) || (sVar4 == -1)) || (DAT_14c872be0 == -1)) {
      iVar2 = *(int *)(param_1 + 0x3cc);
      FUN_14010165c(*(undefined8 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8));
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
        FUN_140df8c06(param_1 + 0x3c0,0);
      }
      FUN_147907ec4(param_1);
      FUN_140df8aa8(param_1 + 0x120);
      FUN_140df8aa8(param_1 + 0x270);
    }
  }
  lVar3 = *param_2;
  *(undefined2 *)(param_1 + 0x3d8) = *(undefined2 *)(lVar3 + 0x5e8);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(lVar3 + 0x5e0);
  *(undefined2 *)(param_1 + 0x3da) = *(undefined2 *)(lVar3 + 0x5ea);
  local_38 = param_1;
  FUN_147908c94(&local_30,param_2,param_2);
  FUN_14474897c(param_1 + 0x20,param_2);
  *(float *)(param_1 + 0x638) = *(float *)(param_2 + 5) + *(float *)(param_1 + 0x638);
  FUN_1447d2706(local_30 + 0x148,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147908c94 FUN_147908c94 body=257 status=ok
// SIG undefined FUN_147908c94(void)

undefined8 * FUN_147908c94(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a7be0a0;
  local_40 = plVar5 + 2;
  lVar3 = *param_4;
  plVar5[2] = (longlong)&PTR_FUN_14a7be0c0;
  plVar5[3] = lVar3;
  *(undefined4 *)(plVar5 + 4) = *(undefined4 *)((longlong)param_3 + 0x14);
  plVar5[5] = *param_3;
  uVar4 = DAT_14cacc368;
  local_38 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_1447d2a40(param_1,param_2,&local_40,DAT_14cacc368);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_1447d2a40(param_1,param_2,&local_40,uVar4);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147908d96 FUN_147908d96 body=2246 status=ok
// SIG undefined FUN_147908d96(void)

void FUN_147908d96(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  double *pdVar20;
  double *pdVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  undefined4 local_2a8;
  undefined8 local_298 [2];
  undefined8 local_288 [2];
  double local_278 [4];
  double local_258;
  double dStack_250;
  double local_248;
  double local_238;
  double dStack_230;
  double local_228;
  float local_218 [86];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_1447139fe(param_1 + 0x20);
  lVar12 = DAT_14cacbd00;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar17 = 0;
  }
  else {
    bVar10 = FUN_144a61b4f();
    uVar17 = (ulonglong)(bVar10 ^ 1);
  }
  if (*(int *)(lVar12 + uVar17 * 4) == 0) {
    iVar11 = *(int *)(param_1 + 0x3cc);
    FUN_14010165c(*(undefined8 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    if ((iVar11 < 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
      FUN_140df8c06(param_1 + 0x3c0,0);
    }
    FUN_147907ec4(param_1);
    FUN_140df8aa8(param_1 + 0x120);
    FUN_140df8aa8(param_1 + 0x270);
    *(undefined4 *)(param_1 + 0x638) = 0;
    goto LAB_1479094d5;
  }
  lVar12 = *param_2;
  pdVar20 = (double *)(lVar12 + 0x10);
  pdVar21 = local_278;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar21 = *pdVar20;
    pdVar20 = pdVar20 + 1;
    pdVar21 = pdVar21 + 1;
  }
  fVar24 = *(float *)(*(longlong *)(lVar12 + 0x148) + 0xdc0);
  iVar11 = *(int *)(param_1 + 0x348);
  if (0.0 < fVar24 && iVar11 != 0) {
    lVar12 = (longlong)**(int **)(param_1 + 0x340);
    if (lVar12 != -1) {
      lVar14 = param_2[4];
      local_238 = local_238 * *(double *)(lVar14 + 0x20);
      dStack_230 = dStack_230 * *(double *)(lVar14 + 0x28);
      local_228 = *(double *)(lVar14 + 0x30) * local_228;
      dVar25 = dStack_230 * local_278[0] - local_238 * local_278[1];
      dVar3 = local_228 * local_278[1] - dStack_230 * local_278[2];
      dVar4 = local_238 * local_278[2] - local_278[0] * local_228;
      dVar25 = dVar25 + dVar25;
      dVar3 = dVar3 + dVar3;
      dVar4 = dVar4 + dVar4;
      pdVar20 = (double *)(*(longlong *)(param_1 + 0x350) + lVar12 * 0x18);
      dVar29 = *pdVar20 * *(double *)(param_1 + 0x2b0);
      dVar30 = pdVar20[1] * *(double *)(param_1 + 0x2b8);
      dVar28 = *(double *)(*(longlong *)(param_1 + 0x350) + 0x10 + lVar12 * 0x18) *
               *(double *)(param_1 + 0x2c0);
      dVar8 = *(double *)(param_1 + 0x270);
      dVar9 = *(double *)(param_1 + 0x278);
      dVar6 = *(double *)(param_1 + 0x280);
      dVar27 = *(double *)(param_1 + 0x288);
      dVar26 = dVar30 * dVar8 - dVar29 * dVar9;
      dVar7 = dVar28 * dVar9 - dVar30 * dVar6;
      dVar5 = dVar29 * dVar6 - dVar8 * dVar28;
      dVar7 = dVar7 + dVar7;
      dVar5 = dVar5 + dVar5;
      dVar26 = dVar26 + dVar26;
      dVar29 = ((dVar26 * dVar9 - dVar5 * dVar6) + dVar27 * dVar7 + dVar29 +
               *(double *)(param_1 + 0x290)) -
               ((dVar25 * local_278[1] - local_278[2] * dVar4) + local_278[3] * dVar3 + local_238 +
               local_258);
      dVar6 = ((dVar6 * dVar7 - dVar8 * dVar26) + *(double *)(param_1 + 0x288) * dVar5 + dVar30 +
              *(double *)(param_1 + 0x298)) -
              ((dVar3 * local_278[2] - local_278[0] * dVar25) + local_278[3] * dVar4 + dStack_230 +
              dStack_250);
      dVar27 = (dVar26 * dVar27 + dVar28 + (dVar5 * dVar8 - dVar7 * dVar9) +
               *(double *)(param_1 + 0x2a0)) -
               (dVar25 * local_278[3] + local_228 + (dVar4 * local_278[0] - local_278[1] * dVar3) +
               local_248);
      if ((double)(fVar24 * fVar24) < dVar27 * dVar27 + dVar29 * dVar29 + dVar6 * dVar6) {
        FUN_147907ec4(param_1);
      }
    }
    iVar11 = *(int *)(param_1 + 0x348);
  }
  if ((iVar11 == 0) && (*(int *)(param_1 + 0x1f8) == 0)) {
    iVar11 = *(int *)(param_1 + 0x3cc);
    FUN_14010165c(*(undefined8 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    if ((iVar11 < 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
      FUN_140df8c06(param_1 + 0x3c0,0);
    }
  }
  pdVar20 = (double *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x3c8) == 0) {
    if (*(char *)(param_1 + 0x63c) == '\x02') goto LAB_14790939d;
  }
  else {
    lVar12 = FUN_14479d2ce(*(longlong *)(*param_2 + 0x6a0) + 0x40);
    uVar2 = *(undefined4 *)(lVar12 + 0x78);
    if ((longlong)*(int *)(param_1 + 0x3c8) < 1) {
      iVar11 = -1;
    }
    else {
      fVar24 = 3.4028235e+38;
      uVar17 = 0xffffffff;
      uVar22 = 0;
      pfVar15 = *(float **)(param_1 + 0x3c0);
      do {
        if (*pfVar15 < fVar24) {
          uVar17 = uVar22 & 0xffffffff;
          fVar24 = *pfVar15;
        }
        iVar11 = (int)uVar17;
        uVar22 = uVar22 + 1;
        pfVar15 = pfVar15 + 0x14;
      } while ((longlong)*(int *)(param_1 + 0x3c8) != uVar22);
    }
    *(undefined4 *)(param_1 + 0x640) = 0;
    lVar14 = (longlong)iVar11;
    *(float *)(param_1 + 0x644) =
         *(float *)(param_1 + 0x50) * (*(float **)(param_1 + 0x3c0))[lVar14 * 0x14];
    FUN_1448158c6(param_1 + 0x648,param_1 + 0x644,uVar2);
    uVar13 = FUN_14479d2ce(*(longlong *)(*param_2 + 0x6a0) + 0x40);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + 8 + lVar14 * 0x50);
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(param_1 + 0x38);
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x644);
        uVar23 = *(undefined8 *)(param_1 + 0x648);
        puVar18 = local_298;
        goto LAB_14790921e;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x644);
      uVar23 = *(undefined8 *)(param_1 + 0x648);
      puVar18 = local_288;
LAB_14790921e:
      *puVar18 = uVar23;
      *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(param_1 + 0x650);
      FUN_14793878a(lVar12,puVar18,uVar1,uVar13);
    }
    if ((longlong)*(int *)(param_1 + 0x650) == 0) {
      pfVar15 = (float *)0x0;
    }
    else {
      pfVar19 = *(float **)(param_1 + 0x648);
      lVar12 = (longlong)*(int *)(param_1 + 0x650) << 2;
      pfVar15 = (float *)0x0;
      do {
        if ((pfVar15 == (float *)0x0) || (*pfVar15 <= *pfVar19 && *pfVar19 != *pfVar15)) {
          pfVar15 = pfVar19;
        }
        pfVar19 = pfVar19 + 1;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
    fVar24 = *(float *)(param_1 + 0x644);
    if (*(float *)(param_1 + 0x644) <= *pfVar15) {
      fVar24 = *pfVar15;
    }
    *(float *)(param_1 + 0x658) = fVar24;
    lVar12 = *(longlong *)(param_1 + 0x3c0);
    lVar14 = lVar14 * 0x50;
    if (*(char *)(lVar12 + 0x10 + lVar14) == '\x01') {
      *(undefined1 *)(param_1 + 0x65c) = *(undefined1 *)(lVar12 + lVar14 + 0x11);
      lVar16 = *(longlong *)(lVar12 + 0x18 + lVar14);
      if (DAT_14c950c29 == '\x01') {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(lVar12 + lVar14 + 0x18);
        }
      }
      *(longlong *)(param_1 + 0x660) = lVar16;
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      local_218[0] = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x644) = local_218[0];
      FUN_1448158c6(param_1 + 0x648,local_218,uVar2);
      *(float *)(param_1 + 0x658) = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x34);
      *(undefined1 *)(param_1 + 0x65c) = *(undefined1 *)(param_1 + 0x40);
      lVar12 = *(longlong *)(param_1 + 0x48);
      if (DAT_14c950c29 == '\x01') {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_1 + 0x48);
        }
      }
      *(longlong *)(param_1 + 0x660) = lVar12;
    }
    iVar11 = *(int *)(param_1 + 0x3cc);
    FUN_14010165c(*(undefined8 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    if ((iVar11 < 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
      FUN_140df8c06(param_1 + 0x3c0,0);
    }
    if (*(int *)(param_1 + 0x348) != 0) {
      local_2b8 = (double *)(param_1 + 0x120);
      if (*(int *)(param_1 + 0x1f8) == 0) {
        local_2b8 = pdVar20;
      }
      local_2b0 = pdVar20;
      FUN_1433dca56(param_1,param_2 + 4,param_2 + 7,param_2 + 0xb);
    }
    *(undefined1 *)(param_1 + 0x63c) = 2;
LAB_14790939d:
    fVar24 = *(float *)(param_1 + 0x638) + *(float *)(param_1 + 0x640);
    *(float *)(param_1 + 0x640) = fVar24;
    if ((fVar24 < *(float *)(param_1 + 0x658)) ||
       (FUN_147907ec4(param_1), *(char *)(param_1 + 0x63c) == '\x02')) {
      FUN_1433de6ac(param_1,param_2 + 4,param_2 + 7,param_2 + 0xb);
    }
  }
  lVar12 = *(longlong *)(*(longlong *)(*param_2 + 0x148) + 0xa8);
  if ((((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0x1c8), lVar12 == 0)) ||
      (lVar12 = *(longlong *)(lVar12 + 0x120), lVar12 == 0)) ||
     (lVar12 = *(longlong *)(lVar12 + 0xa8), lVar12 == 0)) {
    pdVar21 = (double *)0x0;
  }
  else {
    pdVar21 = *(double **)(lVar12 + 0x18);
  }
  if (*(int *)(param_1 + 0x348) != 0) {
    memcpy(local_218,(void *)(param_1 + 0x120),0x150);
    memcpy((void *)(param_1 + 0x120),pdVar20,0x150);
    memcpy(pdVar20,local_218,0x150);
  }
  local_2a8 = *(undefined4 *)(param_1 + 0x638);
  local_2b8 = local_278;
  local_2b0 = pdVar21;
  FUN_144815352(pdVar20,param_2 + 4,param_2 + 7,param_2 + 0xb);
  *(undefined4 *)(param_1 + 0x638) = 0;
  if (*(char *)(param_1 + 0x63c) == '\x02') {
    fVar24 = *(float *)(param_1 + 0x644);
    if (fVar24 <= 1e-08) {
      fVar24 = 1e-08;
    }
    fVar24 = *(float *)(param_1 + 0x640) / fVar24;
    if (1.0 <= fVar24) {
      fVar24 = 1.0;
    }
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    FUN_14002c5a6(fVar24,*(undefined1 *)(param_1 + 0x65c),*(undefined8 *)(param_1 + 0x660));
  }
LAB_1479094d5:
  if ((local_c0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147909692 FUN_147909692 body=715 status=ok
// SIG undefined FUN_147909692(void)

void FUN_147909692(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  longlong *plVar5;
  int iVar6;
  void *_Src;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined2 *local_a0;
  int local_98;
  longlong local_90;
  int local_88;
  void *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14790995e(param_2,&local_80);
  fVar1 = *(float *)(param_1 + 0x330);
  if (fVar1 <= 0.0001) {
    fVar2 = *(float *)(param_1 + 0x32c);
    fVar10 = *(float *)(param_1 + 0x34c);
    uVar4 = *(undefined1 *)(param_1 + 0x328);
    if (DAT_14cacbd10 == 0) {
      uVar7 = FUN_140002dac();
      DAT_14cacbd10 = FUN_14171c317(FUN_1463a53a8,uVar7,L"EInertializationState");
    }
    FUN_1414aa4be(DAT_14cacbd10,&local_90,uVar4);
    FUN_1400021e4(&local_90,&local_a0);
    puVar9 = local_a0;
    if (local_98 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    pwVar8 = L"(\'%s\' Time: %.3f / %.3f [%.3f])";
  }
  else {
    fVar2 = *(float *)(param_1 + 0x32c);
    fVar3 = *(float *)(param_1 + 0x34c);
    uVar4 = *(undefined1 *)(param_1 + 0x328);
    if (DAT_14cacbd10 == 0) {
      uVar7 = FUN_140002dac();
      DAT_14cacbd10 = FUN_14171c317(FUN_1463a53a8,uVar7,L"EInertializationState");
    }
    fVar10 = (fVar2 * 100.0) / fVar1;
    FUN_1414aa4be(DAT_14cacbd10,&local_90,uVar4);
    FUN_1400021e4(&local_90,&local_a0);
    puVar9 = local_a0;
    if (local_98 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    local_b8 = (double)fVar3;
    pwVar8 = L"(\'%s\' Time: %.3f / %.3f (%.0f%%) [%.3f])";
  }
  local_c0 = (double)fVar10;
  local_c8 = (double)fVar1;
  FUN_140002266(&local_90,pwVar8,puVar9,(double)fVar2);
  iVar6 = local_88 + -1;
  if (local_88 == 0) {
    iVar6 = 0;
  }
  FUN_1400020e8(&local_80,local_90,iVar6);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_80;
  local_b0 = (void *)0x0;
  local_a8 = local_78;
  if ((longlong)local_78 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_78,0);
    memcpy(local_b0,_Src,(longlong)local_78 * 2);
  }
  FUN_147906d4c(param_2,&local_b0,0);
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14790995e FUN_14790995e body=256 status=ok
// SIG undefined FUN_14790995e(void)

undefined8 FUN_14790995e(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbda0 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbda0 = FUN_140002ddd(FUN_1463a562f,uVar2,L"AnimNode_Inertialization");
  }
  local_48 = *(undefined8 *)(DAT_14cacbda0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147909a60 FUN_147909a60 body=318 status=ok
// SIG undefined FUN_147909a60(void)

void FUN_147909a60(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  lVar3 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + 0xa8);
  if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1c8), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 0x120), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0xa8), lVar1 != 0)) {
    local_40 = *(undefined8 *)(lVar1 + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  lVar1 = param_1 + 0x4e0;
  if (iVar2 != *(int *)(param_1 + 0x4e8)) {
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    if (*(int *)(param_1 + 0x4ec) < 0) {
      FUN_1474da402(lVar1,0);
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(undefined1 *)(param_1 + 0x4f0) = 0;
    *(undefined1 *)(param_1 + 0x4f8) = 3;
    local_50 = *(undefined8 *)(param_1 + 0x38);
    local_48 = iVar2;
    FUN_140df8b76(lVar1);
    lVar3 = *param_2;
  }
  local_78 = &local_40;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = lVar1;
  FUN_147909ba0(param_7,param_2 + 4,param_2 + 7,lVar3 + 0x10);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147909ba0 FUN_147909ba0 body=17479 status=ok
// SIG undefined FUN_147909ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147909ba0(longlong *param_1,longlong *param_2,undefined8 param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,longlong param_8)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  char cVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar79;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar99;
  undefined1 auVar98 [16];
  double dVar100;
  double dVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  undefined1 auStack_5d8 [39];
  char local_5b1;
  longlong *local_5b0;
  undefined1 local_5a8 [16];
  undefined8 local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  undefined1 local_578 [16];
  undefined1 local_568 [12];
  undefined4 uStack_55c;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  double local_528;
  double dStack_520;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [24];
  longlong *local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  double *local_498;
  undefined8 local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358 [2];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8 [2];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  lVar27 = param_2[2];
  dVar45 = param_4[1];
  dVar96 = -*param_4;
  dVar62 = param_4[2] * -1.0;
  dVar46 = param_4[3] * 1.0;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar7 = 1;
  if (((*param_5 != param_6[0x16]) || (*param_5 != param_7[0x16])) ||
     ((param_6[0x16] == 0.0 &&
      ((uVar7 = 2,
       ABS((param_6[1] * dVar45 + (param_6[3] * dVar46 - *param_6 * dVar96)) - param_6[2] * dVar62)
       < 0.9990000128746033 ||
       (ABS((dVar45 * param_7[1] + (param_7[3] * dVar46 - dVar96 * *param_7)) - dVar62 * param_7[2])
        < 0.9990000128746033)))))) {
    *(undefined1 *)(param_1 + 6) = uVar7;
  }
  local_4e0 = param_2;
  local_498 = param_4;
  lVar9 = FUN_14479d2ce(lVar27 + 0x40);
  uVar3 = *(uint *)(lVar9 + 0x78);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar12 = 0;
  uVar15 = uVar3;
  if (*(uint *)((longlong)param_1 + 0xc) != uVar3) {
    FUN_14791e7fe(param_1);
    iVar12 = (int)param_1[1];
    uVar15 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar12 + uVar3;
  local_490 = param_3;
  if (uVar15 - iVar12 < uVar3) {
    FUN_14791f8fa(param_1);
  }
  memset((void *)((longlong)iVar12 * 0x60 + *param_1),0,(ulonglong)uVar3 * 0x60);
  uVar3 = *(uint *)(local_4e0 + 1);
  local_5b0 = param_1;
  if ((ulonglong)uVar3 != 0) {
    local_428._8_4_ = SUB84(dVar46,0);
    local_428._0_8_ = dVar46;
    local_428._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    uVar20 = 0;
    local_488 = dVar96;
    dStack_480 = dVar96;
    local_448 = dVar62;
    dStack_440 = dVar62;
    local_438 = -dVar45;
    dStack_430 = -dVar45;
    do {
      lVar9 = *(longlong *)(lVar27 + 0x70);
      lVar25 = (longlong)*(int *)(lVar9 + uVar20 * 4);
      if ((lVar25 != -1) && (*(char *)((longlong)param_6[0xe] + lVar25) == '\x01')) {
        lVar21 = *local_4e0;
        lVar16 = uVar20 * 0x60;
        local_478 = *(double *)(lVar21 + lVar16);
        dStack_470 = ((double *)(lVar21 + lVar16))[1];
        puVar2 = (undefined4 *)(lVar21 + 0x10 + lVar16);
        uVar8 = *puVar2;
        uVar110 = puVar2[1];
        uVar111 = puVar2[2];
        uVar112 = puVar2[3];
        pdVar17 = (double *)(lVar21 + 0x20 + lVar16);
        dVar44 = *pdVar17;
        dVar93 = pdVar17[1];
        puVar2 = (undefined4 *)(lVar21 + 0x30 + lVar16);
        uVar106 = *puVar2;
        uVar107 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        pdVar17 = (double *)(lVar21 + 0x40 + lVar16);
        local_458 = *pdVar17;
        dStack_450 = pdVar17[1];
        pdVar17 = (double *)(lVar21 + 0x50 + lVar16);
        local_468 = *pdVar17;
        dStack_460 = pdVar17[1];
        dVar62 = param_6[0xc];
        lVar16 = lVar25 * 0x60;
        pauVar1 = (undefined1 (*) [16])((longlong)dVar62 + lVar16);
        dVar95 = *(double *)*pauVar1;
        dVar89 = *(double *)(*pauVar1 + 8);
        local_578 = *pauVar1;
        auVar48 = *(undefined1 (*) [16])((longlong)dVar62 + 0x10 + lVar16);
        dVar45 = auVar48._0_8_;
        dVar59 = auVar48._8_8_;
        auVar53 = *(undefined1 (*) [16])((longlong)dVar62 + 0x20 + lVar16);
        pdVar17 = (double *)((longlong)dVar62 + 0x30 + lVar16);
        uVar108 = *(undefined4 *)pdVar17;
        uVar109 = *(undefined4 *)((longlong)pdVar17 + 4);
        dVar79 = *pdVar17;
        pdVar23 = pdVar17 + 1;
        dVar91 = *pdVar23;
        auVar65 = *(undefined1 (*) [16])((longlong)dVar62 + 0x40 + lVar16);
        dVar96 = auVar65._0_8_;
        uVar102 = auVar65._0_4_;
        uVar103 = auVar65._4_4_;
        dVar90 = auVar65._8_8_;
        uVar104 = auVar65._8_4_;
        uVar105 = auVar65._12_4_;
        local_4b8 = *(undefined1 (*) [16])((longlong)dVar62 + 0x50 + lVar16);
        dVar46 = param_7[0xc];
        local_588 = *(double *)((longlong)dVar46 + lVar16);
        dStack_580 = ((double *)((longlong)dVar46 + lVar16))[1];
        local_548 = *(undefined1 (*) [16])((longlong)dVar46 + 0x10 + lVar16);
        local_558 = *(undefined1 (*) [16])((longlong)dVar46 + 0x20 + lVar16);
        pdVar14 = (double *)((longlong)dVar46 + 0x30 + lVar16);
        dVar60 = *pdVar14;
        dVar63 = pdVar14[1];
        cVar26 = *(char *)((longlong)param_7[0xe] + lVar25);
        local_508 = *(undefined1 (*) [16])((longlong)dVar46 + 0x40 + lVar16);
        local_518 = *(undefined1 (*) [16])((longlong)dVar46 + 0x50 + lVar16);
        if (uVar20 == 0) {
          if ((char)param_1[6] == '\x02') {
            dVar62 = *param_6;
            dVar46 = param_6[1];
            dVar96 = param_6[2];
            dVar90 = param_6[3];
            dVar94 = dVar46 * local_448 * -1.0 +
                     local_488 * dVar90 * 1.0 + (double)local_428._0_8_ * dVar62 +
                     local_438 * dVar96;
            dVar97 = dVar62 * dStack_440 * 1.0 +
                     dStack_480 * dVar96 * -1.0 + (double)local_428._8_8_ * dVar46 +
                     dStack_430 * dVar90;
            dVar91 = dVar90 * local_448 * 1.0 +
                     ((local_488 * dVar46 * 1.0 + (double)local_428._0_8_ * dVar96) -
                     local_438 * dVar62);
            dVar92 = dVar96 * dStack_440 * -1.0 +
                     ((dStack_480 * dVar62 * -1.0 + (double)local_428._8_8_ * dVar90) -
                     dStack_430 * dVar46);
            dVar62 = dVar95 * dVar91 * 1.0 +
                     dVar59 * dVar97 + dVar45 * dVar94 * -1.0 + dVar89 * dVar92;
            dVar46 = *param_7;
            dVar96 = param_7[1];
            dVar90 = param_7[2];
            dVar79 = param_7[3];
            dVar47 = dVar96 * local_448 * -1.0 +
                     local_488 * dVar79 * 1.0 + (double)local_428._0_8_ * dVar46 +
                     local_438 * dVar90;
            dVar101 = dVar46 * dStack_440 * 1.0 +
                      dStack_480 * dVar90 * -1.0 + (double)local_428._8_8_ * dVar96 +
                      dStack_430 * dVar79;
            dVar100 = dVar79 * local_448 * 1.0 +
                      ((local_488 * dVar96 * 1.0 + (double)local_428._0_8_ * dVar90) -
                      local_438 * dVar46);
            dVar79 = dVar90 * dStack_440 * -1.0 +
                     ((dStack_480 * dVar46 * -1.0 + (double)local_428._8_8_ * dVar79) -
                     dStack_430 * dVar96);
            dVar96 = dVar101 * local_588;
            dVar90 = dVar101 * dStack_580;
            dVar82 = dVar47 * dStack_580;
            dVar80 = dVar47 * local_588;
            dVar46 = local_588 * dVar100;
            dVar64 = (double)local_548._8_8_ * dVar100;
            local_588 = dStack_580 * dVar100 * -1.0 +
                        (double)local_548._0_8_ * dVar101 +
                        (double)local_548._8_8_ * dVar47 * 1.0 + local_588 * dVar79;
            dStack_580 = dVar46 * 1.0 +
                         (double)local_548._8_8_ * dVar101 +
                         (double)local_548._0_8_ * dVar47 * -1.0 + dStack_580 * dVar79;
            local_548._8_8_ =
                 (double)local_548._0_8_ * dVar100 * -1.0 +
                 ((dVar80 * -1.0 + dVar79 * (double)local_548._8_8_) - dVar90);
            local_548._0_8_ =
                 dVar64 * 1.0 + ((dVar82 * 1.0 + dVar79 * (double)local_548._0_8_) - dVar96);
            local_578._8_4_ = SUB84(dVar62,0);
            local_578._0_8_ =
                 dVar89 * dVar91 * -1.0 + dVar45 * dVar97 + dVar59 * dVar94 * 1.0 + dVar95 * dVar92;
            local_578._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
            auVar48._8_8_ =
                 dVar45 * dVar91 * -1.0 +
                 ((dVar94 * dVar95 * -1.0 + dVar92 * dVar59) - dVar97 * dVar89);
            auVar48._0_8_ =
                 dVar59 * dVar91 * 1.0 +
                 ((dVar94 * dVar89 * 1.0 + dVar92 * dVar45) - dVar97 * dVar95);
            local_5a8 = auVar53;
            local_598 = *pdVar17;
            dStack_590 = *pdVar23;
            local_528 = dVar60;
            dStack_520 = dVar63;
            local_4d8 = uVar106;
            uStack_4d4 = uVar107;
            uStack_4d0 = uVar4;
            uStack_4cc = uVar5;
            local_4c8 = dVar44;
            dStack_4c0 = dVar93;
          }
          else if ((char)param_1[6] == '\x01') {
            pdVar14 = param_6;
            local_5a8 = auVar53;
            local_598 = *pdVar17;
            dStack_590 = *pdVar23;
            local_528 = dVar60;
            dStack_520 = dVar63;
            local_4d8 = uVar106;
            uStack_4d4 = uVar107;
            uStack_4d0 = uVar4;
            uStack_4cc = uVar5;
            local_4c8 = dVar44;
            dStack_4c0 = dVar93;
            local_4a8 = uVar8;
            uStack_4a4 = uVar110;
            uStack_4a0 = uVar111;
            uStack_49c = uVar112;
            uVar8 = FUN_1449437a2(param_6,local_2f8,local_498);
            auVar48 = _DAT_149934d80;
            dVar62 = local_2b8._0_8_;
            dVar63 = local_2b8._8_8_;
            dVar46 = local_2a8._0_8_;
            unique0x00119708 = local_2a8._8_8_;
            auVar53 = minpd(auVar65,local_2b8);
            dVar60 = local_4b8._0_8_;
            auVar84 = minpd(local_4b8,local_2a8);
            auVar65._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
            auVar65._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
            iVar12 = movmskpd(uVar8,auVar65);
            auVar53._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
            auVar53._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
            uVar15 = movmskpd((int)pdVar14,auVar53);
            if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
              dVar97 = local_2f8[0] * (double)local_578._8_8_;
              dVar101 = local_2f8[0] * (double)local_578._0_8_;
              dVar91 = (double)local_578._0_8_ * local_2f8[1];
              dVar94 = (double)local_578._8_8_ * local_2f8[1];
              dVar47 = (double)local_578._8_8_ * (double)local_2e8._0_8_;
              dVar92 = (double)local_5a8._0_8_ * dVar62;
              dVar89 = (double)local_5a8._8_8_ * dVar63;
              local_598 = local_598 * dVar46;
              dStack_590 = dStack_590 * unique0x00119708;
              dVar44 = dVar89 * local_2f8[0] - dVar92 * local_2f8[1];
              dVar93 = local_598 * local_2f8[1] - dVar89 * (double)local_2e8._0_8_;
              dVar95 = dVar92 * (double)local_2e8._0_8_ - local_598 * local_2f8[0];
              dVar79 = dStack_590 * (double)local_2e8._8_8_ - dStack_590 * (double)local_2e8._8_8_;
              dVar93 = dVar93 + dVar93;
              dVar95 = dVar95 + dVar95;
              dVar44 = dVar44 + dVar44;
              dVar79 = dVar79 + dVar79;
              dVar89 = (dVar93 * (double)local_2e8._0_8_ - dVar44 * local_2f8[0]) +
                       (double)local_2e8._8_8_ * dVar95 + dVar89 + dStack_2d0;
              local_598 = (dVar95 * local_2f8[0] - local_2f8[1] * dVar93) +
                          (double)local_2e8._8_8_ * dVar44 + local_598 + (double)local_2c8._0_8_;
              dStack_590 = (dVar79 * (double)local_2e8._8_8_ - dVar79 * (double)local_2e8._8_8_) +
                           (double)local_2e8._8_8_ * dVar79 + dStack_590 + (double)local_2c8._8_8_;
              dVar60 = dVar60 * dVar46;
              dVar46 = local_4b8._8_8_ * unique0x00119708;
              local_578._8_8_ =
                   (double)local_578._0_8_ * (double)local_2e8._0_8_ * 1.0 +
                   dVar59 * local_2f8[1] +
                   dVar45 * local_2f8[0] * -1.0 + (double)local_578._8_8_ * (double)local_2e8._8_8_;
              local_578._0_8_ =
                   dVar47 * -1.0 +
                   dVar45 * local_2f8[1] +
                   dVar59 * local_2f8[0] * 1.0 + (double)local_578._0_8_ * (double)local_2e8._8_8_;
              auVar48._8_8_ =
                   dVar45 * (double)local_2e8._0_8_ * -1.0 +
                   ((dVar101 * -1.0 + dVar59 * (double)local_2e8._8_8_) - dVar94);
              auVar48._0_8_ =
                   dVar59 * (double)local_2e8._0_8_ * 1.0 +
                   ((dVar97 * 1.0 + dVar45 * (double)local_2e8._8_8_) - dVar91);
              local_5a8._8_4_ = SUB84(dVar89,0);
              local_5a8._0_8_ =
                   (dVar44 * local_2f8[1] - (double)local_2e8._0_8_ * dVar95) +
                   (double)local_2e8._8_8_ * dVar93 + dVar92 + local_2d8;
              local_5a8._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
            }
            else {
              local_568._0_8_ = dVar60 * dVar46;
              register0x00001248 = local_4b8._8_8_ * unique0x00119708;
              dVar93 = local_2f8[1] + local_2f8[1];
              dVar95 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
              dVar44 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
              local_1a8 = (1.0 - (dVar44 + local_2f8[1] * dVar93)) * dVar46;
              dVar89 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
              local_1b8 = (dVar93 * (double)local_2e8._8_8_ + local_2f8[0] * dVar95) * dVar46;
              local_1d8 = (dVar93 * local_2f8[0] - dVar95 * (double)local_2e8._8_8_) * dVar63;
              dStack_1b0 = (dVar95 * local_2f8[1] - dVar89) * dVar46;
              dStack_1d0 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar95 + dVar44)) *
                           dVar63;
              local_1c8 = (dVar95 * local_2f8[1] + dVar89) * dVar63;
              local_1e8 = (local_2f8[0] * dVar95 - dVar93 * (double)local_2e8._8_8_) * dVar62;
              local_1f8._8_8_ = (dVar93 * local_2f8[0] + dVar95 * (double)local_2e8._8_8_) * dVar62;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 -
                   ((double)local_2e8._0_8_ * dVar95 + local_2f8[1] * dVar93)) * dVar62;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_2d8;
              dStack_190 = dStack_2d0;
              local_188 = (double)local_2c8._0_8_;
              uStack_180 = 0x3ff0000000000000;
              dVar46 = (double)local_578._8_8_ + (double)local_578._8_8_;
              dVar93 = dVar45 + dVar45;
              dVar44 = (double)local_578._0_8_ * ((double)local_578._0_8_ + (double)local_578._0_8_)
              ;
              local_228 = (1.0 - (dVar44 + (double)local_578._8_8_ * dVar46)) * dVar60;
              dVar95 = ((double)local_578._0_8_ + (double)local_578._0_8_) * dVar59;
              local_238 = (dVar46 * dVar59 + (double)local_578._0_8_ * dVar93) * dVar60;
              dStack_230 = (dVar93 * (double)local_578._8_8_ - dVar95) * dVar60;
              local_278 = ((double)DAT_149934d80 -
                          (dVar45 * dVar93 + (double)local_578._8_8_ * dVar46)) * dVar96;
              dStack_270 = (dVar46 * (double)local_578._0_8_ + dVar93 * dVar59) * dVar96;
              local_248 = (dVar93 * (double)local_578._8_8_ + dVar95) * dVar90;
              local_268 = ((double)local_578._0_8_ * dVar93 - dVar46 * dVar59) * dVar96;
              uStack_260 = 0;
              local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar45 * dVar93 + dVar44)) * dVar90;
              local_258._0_8_ = (dVar46 * (double)local_578._0_8_ - dVar93 * dVar59) * dVar90;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_5a8._0_8_;
              dStack_210 = (double)local_5a8._8_8_;
              local_208 = local_598;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(local_178,&local_278,local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              dVar46 = stack0xfffffffffffffaa0;
              dVar60 = (double)local_568._0_8_;
              auVar84._8_8_ = -(ulonglong)(0.0 <= dVar90 * dVar63);
              auVar84._0_8_ = -(ulonglong)(0.0 <= dVar96 * dVar62);
              auVar53 = blendvpd(_DAT_149936790,auVar48,auVar84);
              dVar45 = (double)(~-(ulonglong)(0.0 <= (double)local_568._0_8_) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= (double)local_568._0_8_) & 0x3ff0000000000000);
              dVar59 = auVar53._0_8_;
              local_178._8_8_ = (double)local_178._8_8_ * dVar59;
              local_178._0_8_ = (double)local_178._0_8_ * dVar59;
              local_168._0_8_ = (double)local_168._0_8_ * dVar59;
              dVar59 = auVar53._8_8_;
              local_148 = local_148 * dVar59;
              local_150 = local_150 * dVar59;
              local_158 = dVar59 * local_158;
              local_128 = local_128 * dVar45;
              local_130 = local_130 * dVar45;
              local_138 = dVar45 * local_138;
              FUN_14481fd10(local_358,local_178);
              dVar45 = (double)local_348._0_8_ * (double)local_348._0_8_ +
                       local_358[0] * local_358[0];
              dVar59 = (double)local_348._8_8_ * (double)local_348._8_8_ +
                       local_358[1] * local_358[1];
              auVar50._0_8_ = dVar45 + dVar59;
              auVar50._8_8_ = dVar45 + dVar59;
              auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              auVar53 = sqrtpd(auVar50,auVar50);
              auVar53 = divpd(auVar48,auVar53);
              auVar72._0_8_ = auVar53._0_8_ * (double)local_348._0_8_;
              auVar72._8_8_ = auVar53._8_8_ * (double)local_348._8_8_;
              auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar72,auVar35);
              local_5a8._8_8_ = dStack_110;
              local_5a8._0_8_ = local_118;
              local_578._8_8_ =
                   (ulonglong)(local_358[1] * auVar53._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              local_578._0_8_ =
                   (ulonglong)(local_358[0] * auVar53._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              local_598 = local_108;
              dStack_590 = 0.0;
            }
            local_568._8_4_ = SUB84(dVar90 * dVar63,0);
            local_568._0_8_ = dVar96 * dVar62;
            uStack_55c = (int)((ulonglong)(dVar90 * dVar63) >> 0x20);
            local_4b8._8_4_ = SUB84(dVar46,0);
            local_4b8._0_8_ = dVar60;
            local_4b8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            pdVar17 = param_7;
            uVar8 = FUN_1449437a2(param_7,local_2f8,local_498);
            auVar53 = _DAT_149934d80;
            dVar62 = local_2b8._0_8_;
            dVar59 = local_2b8._8_8_;
            dVar46 = local_2a8._0_8_;
            dVar45 = local_508._0_8_;
            dVar90 = local_508._8_8_;
            auVar65 = minpd(local_508,local_2b8);
            dVar96 = local_518._0_8_;
            auVar84 = minpd(local_518,local_2a8);
            auVar51._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
            auVar51._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
            iVar12 = movmskpd(uVar8,auVar51);
            auVar73._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
            auVar73._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
            uVar15 = movmskpd((int)pdVar17,auVar73);
            if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
              dVar94 = local_2f8[0] * dStack_580;
              dVar47 = local_2f8[0] * local_588;
              dVar93 = local_588 * local_2f8[1];
              dVar89 = dStack_580 * local_2f8[1];
              dVar60 = local_588 * (double)local_2e8._0_8_;
              dVar92 = (double)local_548._8_8_ * (double)local_2e8._0_8_;
              local_588 = dStack_580 * (double)local_2e8._0_8_ * -1.0 +
                          (double)local_548._0_8_ * local_2f8[1] +
                          (double)local_548._8_8_ * local_2f8[0] * 1.0 +
                          local_588 * (double)local_2e8._8_8_;
              dStack_580 = dVar60 * 1.0 +
                           (double)local_548._8_8_ * local_2f8[1] +
                           (double)local_548._0_8_ * local_2f8[0] * -1.0 +
                           dStack_580 * (double)local_2e8._8_8_;
              dVar79 = (double)local_558._0_8_ * dVar62;
              dVar91 = (double)local_558._8_8_ * dVar59;
              dVar95 = local_528 * dVar46;
              dVar60 = dVar91 * local_2f8[0] - dVar79 * local_2f8[1];
              dVar63 = dVar95 * local_2f8[1] - dVar91 * (double)local_2e8._0_8_;
              dVar44 = dVar79 * (double)local_2e8._0_8_ - dVar95 * local_2f8[0];
              dVar63 = dVar63 + dVar63;
              dVar44 = dVar44 + dVar44;
              dVar60 = dVar60 + dVar60;
              local_508._8_4_ = SUB84(dVar90 * dVar59,0);
              local_508._0_8_ = dVar45 * dVar62;
              local_508._12_4_ = (int)((ulonglong)(dVar90 * dVar59) >> 0x20);
              dVar62 = (dVar63 * (double)local_2e8._0_8_ - dVar60 * local_2f8[0]) +
                       (double)local_2e8._8_8_ * dVar44 + dVar91 + dStack_2d0;
              dVar45 = local_518._8_8_ * local_2a8._8_8_;
              local_518._8_4_ = SUB84(dVar45,0);
              local_518._0_8_ = dVar96 * dVar46;
              local_518._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
              local_548._8_8_ =
                   (double)local_548._0_8_ * (double)local_2e8._0_8_ * -1.0 +
                   ((dVar47 * -1.0 + (double)local_548._8_8_ * (double)local_2e8._8_8_) - dVar89);
              local_548._0_8_ =
                   dVar92 * 1.0 +
                   ((dVar94 * 1.0 + (double)local_548._0_8_ * (double)local_2e8._8_8_) - dVar93);
              local_558._8_4_ = SUB84(dVar62,0);
              local_558._0_8_ =
                   (dVar60 * local_2f8[1] - (double)local_2e8._0_8_ * dVar44) +
                   (double)local_2e8._8_8_ * dVar63 + dVar79 + local_2d8;
              local_558._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
              auVar53 = local_5a8;
              uVar102 = local_568._0_4_;
              uVar103 = local_568._4_4_;
              uVar104 = local_568._8_4_;
              uVar105 = uStack_55c;
              uVar106 = local_4d8;
              uVar107 = uStack_4d4;
              uVar108 = (undefined4)local_598;
              uVar109 = local_598._4_4_;
              uVar8 = local_4a8;
              uVar110 = uStack_4a4;
              uVar111 = uStack_4a0;
              uVar112 = uStack_49c;
              dVar60 = (dVar44 * local_2f8[0] - local_2f8[1] * dVar63) +
                       (double)local_2e8._8_8_ * dVar60 + dVar95 + (double)local_2c8._0_8_;
              dVar44 = local_4c8;
              dVar93 = dStack_4c0;
              local_538 = auVar48;
            }
            else {
              local_4f8._8_8_ = local_518._8_8_ * local_2a8._8_8_;
              local_4f8._0_8_ = dVar96 * dVar46;
              dVar63 = local_2f8[1] + local_2f8[1];
              dVar44 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
              dVar60 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
              local_1a8 = (1.0 - (dVar60 + local_2f8[1] * dVar63)) * dVar46;
              dVar93 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
              local_1b8 = (dVar63 * (double)local_2e8._8_8_ + local_2f8[0] * dVar44) * dVar46;
              local_1d8 = (dVar63 * local_2f8[0] - dVar44 * (double)local_2e8._8_8_) * dVar59;
              dStack_1b0 = (dVar44 * local_2f8[1] - dVar93) * dVar46;
              dVar46 = dVar90 * dVar59;
              dStack_1d0 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar44 + dVar60)) *
                           dVar59;
              local_1c8 = (dVar44 * local_2f8[1] + dVar93) * dVar59;
              local_1e8 = (local_2f8[0] * dVar44 - dVar63 * (double)local_2e8._8_8_) * dVar62;
              local_1f8._8_8_ = (dVar63 * local_2f8[0] + dVar44 * (double)local_2e8._8_8_) * dVar62;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 -
                   ((double)local_2e8._0_8_ * dVar44 + local_2f8[1] * dVar63)) * dVar62;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_2d8;
              dStack_190 = dStack_2d0;
              local_188 = (double)local_2c8._0_8_;
              uStack_180 = 0x3ff0000000000000;
              dVar59 = dStack_580 + dStack_580;
              dVar63 = (double)local_548._0_8_ + (double)local_548._0_8_;
              dVar60 = local_588 * (local_588 + local_588);
              local_228 = (1.0 - (dVar60 + dStack_580 * dVar59)) * dVar96;
              dVar44 = (local_588 + local_588) * (double)local_548._8_8_;
              local_238 = (dVar59 * (double)local_548._8_8_ + local_588 * dVar63) * dVar96;
              dStack_230 = (dVar63 * dStack_580 - dVar44) * dVar96;
              local_278 = ((double)DAT_149934d80 -
                          ((double)local_548._0_8_ * dVar63 + dStack_580 * dVar59)) * dVar45;
              dStack_270 = (dVar59 * local_588 + dVar63 * (double)local_548._8_8_) * dVar45;
              local_248 = (dVar63 * dStack_580 + dVar44) * dVar90;
              local_268 = (local_588 * dVar63 - dVar59 * (double)local_548._8_8_) * dVar45;
              uStack_260 = 0;
              local_258._8_8_ =
                   (DAT_149934d80._8_8_ - ((double)local_548._0_8_ * dVar63 + dVar60)) * dVar90;
              local_258._0_8_ = (dVar59 * local_588 - dVar63 * (double)local_548._8_8_) * dVar90;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_558._0_8_;
              dStack_210 = (double)local_558._8_8_;
              local_208 = local_528;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(local_178,&local_278,local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar65 = local_4f8._0_16_;
              auVar36._8_8_ = -(ulonglong)(0.0 <= dVar46);
              auVar36._0_8_ = -(ulonglong)(0.0 <= dVar45 * dVar62);
              auVar84 = blendvpd(_DAT_149936790,auVar53,auVar36);
              dVar96 = (double)(~-(ulonglong)(0.0 <= (double)local_4f8._0_8_) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= (double)local_4f8._0_8_) & 0x3ff0000000000000);
              dVar59 = auVar84._0_8_;
              local_178._8_8_ = (double)local_178._8_8_ * dVar59;
              local_178._0_8_ = (double)local_178._0_8_ * dVar59;
              local_168._0_8_ = (double)local_168._0_8_ * dVar59;
              dVar59 = auVar84._8_8_;
              local_148 = local_148 * dVar59;
              local_150 = local_150 * dVar59;
              local_158 = dVar59 * local_158;
              local_128 = local_128 * dVar96;
              local_130 = local_130 * dVar96;
              local_138 = dVar96 * local_138;
              FUN_14481fd10(local_358,local_178);
              dVar96 = (double)local_348._0_8_ * (double)local_348._0_8_ +
                       local_358[0] * local_358[0];
              dVar59 = (double)local_348._8_8_ * (double)local_348._8_8_ +
                       local_358[1] * local_358[1];
              auVar52._0_8_ = dVar96 + dVar59;
              auVar52._8_8_ = dVar96 + dVar59;
              auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
              auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
              auVar84 = sqrtpd(auVar52,auVar52);
              auVar53 = divpd(auVar53,auVar84);
              auVar74._0_8_ = auVar53._0_8_ * (double)local_348._0_8_;
              auVar74._8_8_ = auVar53._8_8_ * (double)local_348._8_8_;
              local_548 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar74,auVar37);
              local_558._8_8_ = dStack_110;
              local_558._0_8_ = local_118;
              local_588 = (double)((ulonglong)(local_358[0] * auVar53._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
              dStack_580 = (double)((ulonglong)(local_358[1] * auVar53._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
              local_508._8_4_ = SUB84(dVar46,0);
              local_508._0_8_ = dVar45 * dVar62;
              local_508._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              local_518 = auVar65;
              auVar53 = local_5a8;
              uVar102 = local_568._0_4_;
              uVar103 = local_568._4_4_;
              uVar104 = local_568._8_4_;
              uVar105 = uStack_55c;
              uVar106 = local_4d8;
              uVar107 = uStack_4d4;
              uVar108 = (undefined4)local_598;
              uVar109 = local_598._4_4_;
              uVar8 = local_4a8;
              uVar110 = uStack_4a4;
              uVar111 = uStack_4a0;
              uVar112 = uStack_49c;
              dVar60 = local_108;
              dVar44 = local_4c8;
              dVar93 = dStack_4c0;
            }
          }
        }
        else {
          lVar16 = *(longlong *)(lVar27 + 0x90);
          lVar24 = (longlong)*(int *)(lVar16 + (longlong)(int)uVar20 * 4);
          if (((lVar24 != -1) &&
              (lVar22 = (longlong)*(int *)(lVar9 + lVar24 * 4), param_1 = local_5b0, lVar22 != -1))
             && ((*(char *)((longlong)param_6[0xe] + lVar22) == '\x02' ||
                 (*(char *)((longlong)param_7[0xe] + lVar22) == '\x02')))) {
            pdVar17 = (double *)((longlong)dVar62 + lVar22 * 0x60);
            pdVar14 = local_2f8;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *pdVar14 = *pdVar17;
              pdVar17 = pdVar17 + 1;
              pdVar14 = pdVar14 + 1;
            }
            pdVar17 = (double *)((longlong)dVar46 + lVar22 * 0x60);
            pdVar14 = pdVar17;
            pdVar23 = local_358;
            for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
              *pdVar23 = *pdVar14;
              pdVar14 = pdVar14 + 1;
              pdVar23 = pdVar23 + 1;
            }
            puVar10 = (undefined8 *)(lVar21 + lVar24 * 0x60);
            puVar11 = (undefined8 *)local_3b8;
            for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            lVar21 = (longlong)*(int *)(lVar16 + lVar24 * 4);
            local_4f8._0_16_ = ZEXT816(0x3ff0000000000000) << 0x40;
            local_5b1 = cVar26;
            local_5a8 = auVar53;
            local_598 = dVar79;
            dStack_590 = dVar91;
            _local_568 = auVar65;
            local_538 = auVar48;
            local_528 = dVar60;
            dStack_520 = dVar63;
            local_4d8 = uVar106;
            uStack_4d4 = uVar107;
            uStack_4d0 = uVar4;
            uStack_4cc = uVar5;
            local_4c8 = dVar44;
            dStack_4c0 = dVar93;
            local_4a8 = uVar8;
            uStack_4a4 = uVar110;
            uStack_4a0 = uVar111;
            uStack_49c = uVar112;
            if (lVar21 != -1) {
              iVar12 = *(int *)(lVar9 + lVar21 * 4);
              while ((iVar12 != -1 &&
                     ((lVar9 = (longlong)iVar12, *(char *)((longlong)param_6[0xe] + lVar9) == '\x02'
                      || (*(char *)((longlong)param_7[0xe] + lVar9) == '\x02'))))) {
                dVar62 = param_6[0xc];
                lVar9 = lVar9 * 0x60;
                pdVar14 = (double *)((longlong)dVar62 + lVar9);
                auVar48 = *(undefined1 (*) [16])((longlong)dVar62 + 0x40 + lVar9);
                dVar46 = auVar48._0_8_;
                dVar90 = auVar48._8_8_;
                auVar53 = *(undefined1 (*) [16])((longlong)dVar62 + 0x50 + lVar9);
                dVar45 = auVar53._0_8_;
                dVar96 = local_2b8._0_8_;
                dVar60 = local_2b8._8_8_;
                dVar59 = local_2a8._0_8_;
                dVar63 = local_2a8._8_8_;
                auVar48 = minpd(local_2b8,auVar48);
                auVar65 = minpd(local_2a8,auVar53);
                auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
                auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
                iVar12 = movmskpd(SUB84(dVar62,0),auVar49);
                auVar66._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
                auVar66._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
                uVar15 = movmskpd((int)pdVar17,auVar66);
                if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
                  dVar101 = *pdVar14;
                  dVar100 = pdVar14[1];
                  dVar64 = pdVar14[2];
                  dVar82 = pdVar14[3];
                  dVar62 = pdVar14[3];
                  dVar44 = pdVar14[3];
                  dVar91 = *pdVar14 * local_2f8[1];
                  dVar92 = *pdVar14 * local_2f8[0];
                  dVar95 = pdVar14[1];
                  dVar93 = pdVar14[1];
                  dVar94 = local_2f8[0] * dVar95;
                  dVar47 = local_2f8[1] * dVar93;
                  dVar79 = pdVar14[2];
                  dVar89 = pdVar14[2];
                  dVar97 = local_2f8[0] * dVar89;
                  dVar80 = (double)local_2e8._8_8_ * dVar79;
                  local_2f8[0] = local_2f8[1] * dVar79 * -1.0 +
                                 (double)local_2e8._0_8_ * dVar95 +
                                 (double)local_2e8._8_8_ * *pdVar14 * 1.0 + local_2f8[0] * dVar62;
                  local_2f8[1] = dVar97 * 1.0 +
                                 (double)local_2e8._8_8_ * dVar93 +
                                 (double)local_2e8._0_8_ * *pdVar14 * -1.0 + local_2f8[1] * dVar44;
                  local_2d8 = local_2d8 * dVar46;
                  dStack_2d0 = dStack_2d0 * dVar90;
                  dVar95 = (double)local_2c8._0_8_ * dVar45;
                  dVar93 = (double)local_2c8._8_8_ * auVar53._8_8_;
                  dVar79 = dStack_2d0 * dVar101 - dVar100 * local_2d8;
                  dVar99 = dVar95 * dVar100 - dVar64 * dStack_2d0;
                  dVar81 = local_2d8 * dVar64 - dVar101 * dVar95;
                  dVar97 = dVar93 * dVar82 - dVar82 * dVar93;
                  dVar99 = dVar99 + dVar99;
                  dVar81 = dVar81 + dVar81;
                  dVar79 = dVar79 + dVar79;
                  dVar97 = dVar97 + dVar97;
                  local_2d8 = (dVar79 * dVar100 - dVar64 * dVar81) + dVar62 * dVar99 + local_2d8 +
                              pdVar14[4];
                  dStack_2d0 = (dVar99 * dVar64 - dVar79 * dVar101) + dVar44 * dVar81 + dStack_2d0 +
                               pdVar14[5];
                  dVar93 = (dVar97 * dVar82 - dVar97 * dVar82) + dVar44 * dVar97 + dVar93 +
                           pdVar14[7];
                  local_2e8._8_8_ =
                       (double)local_2e8._0_8_ * dVar89 * -1.0 +
                       ((dVar92 * -1.0 + (double)local_2e8._8_8_ * dVar44) - dVar47);
                  local_2e8._0_8_ =
                       dVar80 * 1.0 + ((dVar91 * 1.0 + (double)local_2e8._0_8_ * dVar62) - dVar94);
                  local_2c8._8_4_ = SUB84(dVar93,0);
                  local_2c8._0_8_ =
                       (dVar81 * dVar101 - dVar100 * dVar99) + dVar62 * dVar79 + dVar95 + pdVar14[6]
                  ;
                  local_2c8._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
                  uVar8 = 0;
                }
                else {
                  dVar93 = *pdVar14;
                  dVar95 = pdVar14[1];
                  dVar89 = pdVar14[2];
                  dVar79 = dVar95 + dVar95;
                  dVar91 = dVar89 + dVar89;
                  dVar44 = dVar93 * (dVar93 + dVar93);
                  local_1a8 = (1.0 - (dVar44 + dVar95 * dVar79)) * dVar45;
                  dVar62 = pdVar14[3];
                  dVar92 = dVar91 * dVar62;
                  dVar94 = (dVar93 + dVar93) * pdVar14[3];
                  dVar62 = dVar79 * dVar62;
                  local_1b8 = (dVar62 + *pdVar14 * dVar91) * dVar45;
                  dStack_1d0 = (1.0 - (dVar89 * dVar91 + dVar44)) * dVar90;
                  dVar44 = (dVar79 * dVar93 + dVar92) * dVar46;
                  local_1c8 = (dVar91 * dVar95 + dVar94) * dVar90;
                  local_1d8 = (dVar79 * dVar93 - dVar92) * dVar90;
                  dStack_1b0 = (dVar91 * dVar95 - dVar94) * dVar45;
                  local_1e8 = (*pdVar14 * dVar91 - dVar62) * dVar46;
                  local_1f8._8_4_ = SUB84(dVar44,0);
                  local_1f8._0_8_ = (1.0 - (dVar89 * dVar91 + dVar95 * dVar79)) * dVar46;
                  local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = pdVar14[4];
                  dStack_190 = pdVar14[5];
                  local_188 = pdVar14[6];
                  uStack_180 = 0x3ff0000000000000;
                  dVar44 = local_2f8[1] + local_2f8[1];
                  dVar93 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                  dVar62 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
                  local_228 = (1.0 - (dVar62 + local_2f8[1] * dVar44)) * dVar59;
                  dVar95 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
                  local_238 = (dVar44 * (double)local_2e8._8_8_ + local_2f8[0] * dVar93) * dVar59;
                  dStack_230 = (dVar93 * local_2f8[1] - dVar95) * dVar59;
                  local_278 = (1.0 - ((double)local_2e8._0_8_ * dVar93 + local_2f8[1] * dVar44)) *
                              dVar96;
                  dVar62 = (1.0 - ((double)local_2e8._0_8_ * dVar93 + dVar62)) * dVar60;
                  dStack_270 = (dVar44 * local_2f8[0] + dVar93 * (double)local_2e8._8_8_) * dVar96;
                  local_248 = (dVar93 * local_2f8[1] + dVar95) * dVar60;
                  local_268 = (local_2f8[0] * dVar93 - dVar44 * (double)local_2e8._8_8_) * dVar96;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar62,0);
                  local_258._0_8_ =
                       (dVar44 * local_2f8[0] - dVar93 * (double)local_2e8._8_8_) * dVar60;
                  local_258._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = local_2d8;
                  dStack_210 = dStack_2d0;
                  local_208 = (double)local_2c8._0_8_;
                  uStack_200 = 0x3ff0000000000000;
                  puVar18 = local_178;
                  FUN_1447fea8d(puVar18,&local_278,local_1f8);
                  FUN_144a1c686(puVar18,0x3e45798ee0000000);
                  auVar48 = _DAT_149934d80;
                  auVar29._8_8_ = -(ulonglong)(0.0 <= dVar90 * dVar60);
                  auVar29._0_8_ = -(ulonglong)(0.0 <= dVar46 * dVar96);
                  auVar65 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
                  uVar28 = -(ulonglong)(0.0 <= dVar45 * dVar59);
                  dVar62 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar44 = auVar65._0_8_;
                  local_178._8_8_ = (double)local_178._8_8_ * dVar44;
                  local_178._0_8_ = (double)local_178._0_8_ * dVar44;
                  local_168._0_8_ = (double)local_168._0_8_ * dVar44;
                  dVar44 = auVar65._8_8_;
                  local_148 = local_148 * dVar44;
                  local_150 = local_150 * dVar44;
                  local_158 = dVar44 * local_158;
                  local_128 = local_128 * dVar62;
                  local_130 = local_130 * dVar62;
                  local_138 = dVar62 * local_138;
                  FUN_14481fd10(&local_418);
                  uVar8 = SUB84(puVar18,0);
                  dVar62 = local_408 * local_408 + local_418 * local_418;
                  dVar44 = dStack_400 * dStack_400 + dStack_410 * dStack_410;
                  auVar67._0_8_ = dVar62 + dVar44;
                  auVar67._8_8_ = dVar62 + dVar44;
                  auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
                  auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
                  auVar65 = sqrtpd(auVar67,auVar67);
                  auVar48 = divpd(auVar48,auVar65);
                  auVar83._0_8_ = auVar48._0_8_ * local_408;
                  auVar83._8_8_ = auVar48._8_8_ * dStack_400;
                  local_2f8[0] = (double)((ulonglong)(local_418 * auVar48._0_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_));
                  local_2f8[1] = (double)((ulonglong)(dStack_410 * auVar48._8_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_));
                  local_2e8 = blendvpd(local_4f8._0_16_,auVar83,auVar30);
                  local_2d8 = local_118;
                  dStack_2d0 = dStack_110;
                  local_2c8._8_8_ = 0;
                  local_2c8._0_8_ = local_108;
                }
                auVar65 = _DAT_149934d80;
                dVar63 = auVar53._8_8_ * dVar63;
                local_2b8._8_4_ = SUB84(dVar90 * dVar60,0);
                local_2b8._0_8_ = dVar46 * dVar96;
                local_2b8._12_4_ = (int)((ulonglong)(dVar90 * dVar60) >> 0x20);
                local_2a8._8_4_ = SUB84(dVar63,0);
                local_2a8._0_8_ = dVar45 * dVar59;
                local_2a8._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                dVar62 = param_7[0xc];
                pdVar17 = (double *)((longlong)dVar62 + lVar9);
                auVar48 = *(undefined1 (*) [16])((longlong)dVar62 + 0x40 + lVar9);
                dVar46 = auVar48._0_8_;
                dVar90 = auVar48._8_8_;
                auVar53 = *(undefined1 (*) [16])((longlong)dVar62 + 0x50 + lVar9);
                dVar45 = auVar53._0_8_;
                dVar96 = local_318._0_8_;
                dVar60 = local_318._8_8_;
                dVar59 = local_308._0_8_;
                dVar63 = local_308._8_8_;
                auVar48 = minpd(local_318,auVar48);
                auVar84 = minpd(local_308,auVar53);
                auVar68._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
                auVar68._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
                iVar12 = movmskpd(SUB84(dVar62,0),auVar68);
                auVar85._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
                auVar85._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
                uVar15 = movmskpd(uVar8,auVar85);
                if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
                  dVar100 = *pdVar17;
                  dVar64 = pdVar17[1];
                  dVar82 = pdVar17[2];
                  dVar80 = pdVar17[3];
                  dVar44 = pdVar17[3];
                  dVar62 = pdVar17[3];
                  dVar91 = *pdVar17 * local_358[1];
                  dVar92 = *pdVar17 * local_358[0];
                  dVar93 = pdVar17[1];
                  dVar95 = pdVar17[1];
                  dVar94 = local_358[0] * dVar93;
                  dVar47 = local_358[1] * dVar95;
                  dVar79 = pdVar17[2];
                  dVar89 = pdVar17[2];
                  dVar97 = local_358[0] * dVar89;
                  dVar81 = (double)local_348._8_8_ * dVar79;
                  local_358[0] = local_358[1] * dVar79 * -1.0 +
                                 (double)local_348._0_8_ * dVar93 +
                                 (double)local_348._8_8_ * *pdVar17 * 1.0 + local_358[0] * dVar44;
                  local_358[1] = dVar97 * 1.0 +
                                 (double)local_348._8_8_ * dVar95 +
                                 (double)local_348._0_8_ * *pdVar17 * -1.0 + local_358[1] * dVar62;
                  local_338 = local_338 * dVar46;
                  dStack_330 = dStack_330 * dVar90;
                  dVar95 = (double)local_328._0_8_ * dVar45;
                  dVar93 = (double)local_328._8_8_ * auVar53._8_8_;
                  dVar79 = dStack_330 * dVar100 - dVar64 * local_338;
                  dVar99 = dVar95 * dVar64 - dVar82 * dStack_330;
                  dVar101 = local_338 * dVar82 - dVar100 * dVar95;
                  dVar97 = dVar93 * dVar80 - dVar80 * dVar93;
                  dVar99 = dVar99 + dVar99;
                  dVar101 = dVar101 + dVar101;
                  dVar79 = dVar79 + dVar79;
                  dVar97 = dVar97 + dVar97;
                  local_338 = (dVar79 * dVar64 - dVar82 * dVar101) + dVar44 * dVar99 + local_338 +
                              pdVar17[4];
                  dStack_330 = (dVar99 * dVar82 - dVar79 * dVar100) + dVar62 * dVar101 + dStack_330
                               + pdVar17[5];
                  dVar93 = (dVar97 * dVar80 - dVar97 * dVar80) + dVar62 * dVar97 + dVar93 +
                           pdVar17[7];
                  local_348._8_8_ =
                       (double)local_348._0_8_ * dVar89 * -1.0 +
                       ((dVar92 * -1.0 + (double)local_348._8_8_ * dVar62) - dVar47);
                  local_348._0_8_ =
                       dVar81 * 1.0 + ((dVar91 * 1.0 + (double)local_348._0_8_ * dVar44) - dVar94);
                  local_328._8_4_ = SUB84(dVar93,0);
                  local_328._0_8_ =
                       (dVar101 * dVar100 - dVar64 * dVar99) + dVar44 * dVar79 + dVar95 + pdVar17[6]
                  ;
                  local_328._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
                }
                else {
                  dVar93 = *pdVar17;
                  dVar95 = pdVar17[1];
                  dVar89 = pdVar17[2];
                  dVar79 = dVar95 + dVar95;
                  dVar91 = dVar89 + dVar89;
                  dVar44 = dVar93 * (dVar93 + dVar93);
                  local_1a8 = (1.0 - (dVar44 + dVar95 * dVar79)) * dVar45;
                  dVar62 = pdVar17[3];
                  dVar92 = dVar91 * dVar62;
                  dVar94 = (dVar93 + dVar93) * pdVar17[3];
                  dVar62 = dVar79 * dVar62;
                  local_1b8 = (dVar62 + *pdVar17 * dVar91) * dVar45;
                  dStack_1d0 = (DAT_149934d80._8_8_ - (dVar89 * dVar91 + dVar44)) * dVar90;
                  dVar44 = (dVar79 * dVar93 + dVar92) * dVar46;
                  local_1c8 = (dVar91 * dVar95 + dVar94) * dVar90;
                  local_1d8 = (dVar79 * dVar93 - dVar92) * dVar90;
                  dStack_1b0 = (dVar91 * dVar95 - dVar94) * dVar45;
                  local_1e8 = (*pdVar17 * dVar91 - dVar62) * dVar46;
                  local_1f8._8_4_ = SUB84(dVar44,0);
                  local_1f8._0_8_ =
                       ((double)DAT_149934d80 - (dVar89 * dVar91 + dVar95 * dVar79)) * dVar46;
                  local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = pdVar17[4];
                  dStack_190 = pdVar17[5];
                  local_188 = pdVar17[6];
                  uStack_180 = 0x3ff0000000000000;
                  dVar44 = local_358[1] + local_358[1];
                  dVar93 = (double)local_348._0_8_ + (double)local_348._0_8_;
                  dVar62 = local_358[0] * (local_358[0] + local_358[0]);
                  local_228 = (1.0 - (dVar62 + local_358[1] * dVar44)) * dVar59;
                  dVar95 = (local_358[0] + local_358[0]) * (double)local_348._8_8_;
                  local_238 = (dVar44 * (double)local_348._8_8_ + local_358[0] * dVar93) * dVar59;
                  dStack_230 = (dVar93 * local_358[1] - dVar95) * dVar59;
                  local_278 = ((double)DAT_149934d80 -
                              ((double)local_348._0_8_ * dVar93 + local_358[1] * dVar44)) * dVar96;
                  dVar62 = (DAT_149934d80._8_8_ - ((double)local_348._0_8_ * dVar93 + dVar62)) *
                           dVar60;
                  dStack_270 = (dVar44 * local_358[0] + dVar93 * (double)local_348._8_8_) * dVar96;
                  local_248 = (dVar93 * local_358[1] + dVar95) * dVar60;
                  local_268 = (local_358[0] * dVar93 - dVar44 * (double)local_348._8_8_) * dVar96;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar62,0);
                  local_258._0_8_ =
                       (dVar44 * local_358[0] - dVar93 * (double)local_348._8_8_) * dVar60;
                  local_258._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = local_338;
                  dStack_210 = dStack_330;
                  local_208 = (double)local_328._0_8_;
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(local_178,&local_278,local_1f8);
                  FUN_144a1c686(local_178,0x3e45798ee0000000);
                  auVar31._8_8_ = -(ulonglong)(0.0 <= dVar90 * dVar60);
                  auVar31._0_8_ = -(ulonglong)(0.0 <= dVar46 * dVar96);
                  auVar48 = blendvpd(_DAT_149936790,auVar65,auVar31);
                  uVar28 = -(ulonglong)(0.0 <= dVar45 * dVar59);
                  dVar62 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar44 = auVar48._0_8_;
                  local_178._8_8_ = (double)local_178._8_8_ * dVar44;
                  local_178._0_8_ = (double)local_178._0_8_ * dVar44;
                  local_168._0_8_ = (double)local_168._0_8_ * dVar44;
                  dVar44 = auVar48._8_8_;
                  local_148 = local_148 * dVar44;
                  local_150 = local_150 * dVar44;
                  local_158 = dVar44 * local_158;
                  local_128 = local_128 * dVar62;
                  local_130 = local_130 * dVar62;
                  local_138 = dVar62 * local_138;
                  FUN_14481fd10(&local_418,local_178);
                  dVar62 = local_408 * local_408 + local_418 * local_418;
                  dVar44 = dStack_400 * dStack_400 + dStack_410 * dStack_410;
                  auVar69._0_8_ = dVar62 + dVar44;
                  auVar69._8_8_ = dVar62 + dVar44;
                  auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
                  auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
                  auVar48 = sqrtpd(auVar69,auVar69);
                  auVar48 = divpd(auVar65,auVar48);
                  auVar86._0_8_ = auVar48._0_8_ * local_408;
                  auVar86._8_8_ = auVar48._8_8_ * dStack_400;
                  local_358[0] = (double)((ulonglong)(local_418 * auVar48._0_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
                  local_358[1] = (double)((ulonglong)(dStack_410 * auVar48._8_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
                  local_348 = blendvpd(local_4f8._0_16_,auVar86,auVar32);
                  local_338 = local_118;
                  dStack_330 = dStack_110;
                  local_328._8_8_ = 0;
                  local_328._0_8_ = local_108;
                }
                auVar65 = _DAT_149934d80;
                dVar63 = auVar53._8_8_ * dVar63;
                local_318._8_4_ = SUB84(dVar90 * dVar60,0);
                local_318._0_8_ = dVar46 * dVar96;
                local_318._12_4_ = (int)((ulonglong)(dVar90 * dVar60) >> 0x20);
                local_308._8_4_ = SUB84(dVar63,0);
                local_308._0_8_ = dVar45 * dVar59;
                local_308._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                lVar9 = *local_4e0;
                lVar16 = (longlong)(int)lVar21 * 0x60;
                pdVar17 = (double *)(lVar9 + lVar16);
                auVar48 = *(undefined1 (*) [16])(lVar9 + 0x40 + lVar16);
                dVar62 = auVar48._0_8_;
                dVar59 = auVar48._8_8_;
                auVar53 = *(undefined1 (*) [16])(lVar9 + 0x50 + lVar16);
                dVar46 = auVar53._0_8_;
                dVar45 = local_378._0_8_;
                dVar90 = local_378._8_8_;
                dVar96 = local_368._0_8_;
                dVar60 = local_368._8_8_;
                auVar48 = minpd(local_378,auVar48);
                auVar84 = minpd(local_368,auVar53);
                auVar70._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
                auVar70._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
                iVar12 = movmskpd((int)lVar9,auVar70);
                auVar87._8_8_ = -(ulonglong)(auVar84._8_8_ < 0.0);
                auVar87._0_8_ = -(ulonglong)(auVar84._0_8_ < 0.0);
                uVar15 = movmskpd((int)lVar16,auVar87);
                if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
                  dVar100 = *pdVar17;
                  dVar64 = pdVar17[1];
                  dVar82 = pdVar17[2];
                  dVar80 = pdVar17[3];
                  dVar44 = pdVar17[3];
                  dVar63 = pdVar17[3];
                  dVar91 = *pdVar17 * (double)local_3b8._8_8_;
                  dVar92 = *pdVar17 * (double)local_3b8._0_8_;
                  dVar93 = pdVar17[1];
                  dVar95 = pdVar17[1];
                  dVar94 = (double)local_3b8._0_8_ * dVar93;
                  dVar47 = (double)local_3b8._8_8_ * dVar95;
                  dVar89 = pdVar17[2];
                  dVar79 = pdVar17[2];
                  dVar97 = (double)local_3b8._0_8_ * dVar79;
                  dVar81 = (double)local_3a8._8_8_ * dVar89;
                  local_3b8._0_8_ =
                       (double)local_3b8._8_8_ * dVar89 * -1.0 +
                       (double)local_3a8._0_8_ * dVar93 +
                       (double)local_3a8._8_8_ * *pdVar17 * 1.0 + (double)local_3b8._0_8_ * dVar44;
                  local_3b8._8_8_ =
                       dVar97 * 1.0 +
                       (double)local_3a8._8_8_ * dVar95 +
                       (double)local_3a8._0_8_ * *pdVar17 * -1.0 + (double)local_3b8._8_8_ * dVar63;
                  local_398 = local_398 * dVar62;
                  dStack_390 = dStack_390 * dVar59;
                  dVar95 = (double)local_388._0_8_ * dVar46;
                  dVar93 = (double)local_388._8_8_ * auVar53._8_8_;
                  dVar89 = dStack_390 * dVar100 - dVar64 * local_398;
                  dVar99 = dVar95 * dVar64 - dVar82 * dStack_390;
                  dVar101 = local_398 * dVar82 - dVar100 * dVar95;
                  dVar97 = dVar93 * dVar80 - dVar80 * dVar93;
                  dVar99 = dVar99 + dVar99;
                  dVar101 = dVar101 + dVar101;
                  dVar89 = dVar89 + dVar89;
                  dVar97 = dVar97 + dVar97;
                  local_398 = (dVar89 * dVar64 - dVar82 * dVar101) + dVar44 * dVar99 + local_398 +
                              pdVar17[4];
                  dStack_390 = (dVar99 * dVar82 - dVar89 * dVar100) + dVar63 * dVar101 + dStack_390
                               + pdVar17[5];
                  dVar93 = (dVar97 * dVar80 - dVar97 * dVar80) + dVar63 * dVar97 + dVar93 +
                           pdVar17[7];
                  local_3a8._8_8_ =
                       (double)local_3a8._0_8_ * dVar79 * -1.0 +
                       ((dVar92 * -1.0 + (double)local_3a8._8_8_ * dVar63) - dVar47);
                  local_3a8._0_8_ =
                       dVar81 * 1.0 + ((dVar91 * 1.0 + (double)local_3a8._0_8_ * dVar44) - dVar94);
                  local_388._8_4_ = SUB84(dVar93,0);
                  local_388._0_8_ =
                       (dVar101 * dVar100 - dVar64 * dVar99) + dVar44 * dVar89 + dVar95 + pdVar17[6]
                  ;
                  local_388._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
                  pdVar17 = (double *)0x0;
                }
                else {
                  dVar93 = *pdVar17;
                  dVar95 = pdVar17[1];
                  dVar89 = pdVar17[2];
                  dVar79 = dVar95 + dVar95;
                  dVar91 = dVar89 + dVar89;
                  dVar44 = dVar93 * (dVar93 + dVar93);
                  local_1a8 = (1.0 - (dVar44 + dVar95 * dVar79)) * dVar46;
                  dVar63 = pdVar17[3];
                  dVar92 = dVar91 * dVar63;
                  dVar94 = (dVar93 + dVar93) * pdVar17[3];
                  dVar63 = dVar79 * dVar63;
                  local_1b8 = (dVar63 + *pdVar17 * dVar91) * dVar46;
                  dStack_1d0 = (DAT_149934d80._8_8_ - (dVar89 * dVar91 + dVar44)) * dVar59;
                  dVar44 = (dVar79 * dVar93 + dVar92) * dVar62;
                  local_1c8 = (dVar91 * dVar95 + dVar94) * dVar59;
                  local_1d8 = (dVar79 * dVar93 - dVar92) * dVar59;
                  dStack_1b0 = (dVar91 * dVar95 - dVar94) * dVar46;
                  local_1e8 = (*pdVar17 * dVar91 - dVar63) * dVar62;
                  local_1f8._8_4_ = SUB84(dVar44,0);
                  local_1f8._0_8_ =
                       ((double)DAT_149934d80 - (dVar89 * dVar91 + dVar95 * dVar79)) * dVar62;
                  local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = pdVar17[4];
                  dStack_190 = pdVar17[5];
                  local_188 = pdVar17[6];
                  uStack_180 = 0x3ff0000000000000;
                  dVar44 = (double)local_3b8._8_8_ + (double)local_3b8._8_8_;
                  dVar93 = (double)local_3a8._0_8_ + (double)local_3a8._0_8_;
                  dVar63 = (double)local_3b8._0_8_ *
                           ((double)local_3b8._0_8_ + (double)local_3b8._0_8_);
                  local_228 = (1.0 - (dVar63 + (double)local_3b8._8_8_ * dVar44)) * dVar96;
                  dVar95 = ((double)local_3b8._0_8_ + (double)local_3b8._0_8_) *
                           (double)local_3a8._8_8_;
                  local_238 = (dVar44 * (double)local_3a8._8_8_ + (double)local_3b8._0_8_ * dVar93)
                              * dVar96;
                  dStack_230 = (dVar93 * (double)local_3b8._8_8_ - dVar95) * dVar96;
                  local_278 = ((double)DAT_149934d80 -
                              ((double)local_3a8._0_8_ * dVar93 + (double)local_3b8._8_8_ * dVar44))
                              * dVar45;
                  dVar63 = (DAT_149934d80._8_8_ - ((double)local_3a8._0_8_ * dVar93 + dVar63)) *
                           dVar90;
                  dStack_270 = (dVar44 * (double)local_3b8._0_8_ + dVar93 * (double)local_3a8._8_8_)
                               * dVar45;
                  local_248 = (dVar93 * (double)local_3b8._8_8_ + dVar95) * dVar90;
                  local_268 = ((double)local_3b8._0_8_ * dVar93 - dVar44 * (double)local_3a8._8_8_)
                              * dVar45;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar63,0);
                  local_258._0_8_ =
                       (dVar44 * (double)local_3b8._0_8_ - dVar93 * (double)local_3a8._8_8_) *
                       dVar90;
                  local_258._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = local_398;
                  dStack_210 = dStack_390;
                  local_208 = (double)local_388._0_8_;
                  uStack_200 = 0x3ff0000000000000;
                  pdVar17 = (double *)local_178;
                  FUN_1447fea8d(pdVar17,&local_278,local_1f8);
                  FUN_144a1c686(pdVar17,0x3e45798ee0000000);
                  auVar33._8_8_ = -(ulonglong)(0.0 <= dVar59 * dVar90);
                  auVar33._0_8_ = -(ulonglong)(0.0 <= dVar62 * dVar45);
                  auVar48 = blendvpd(_DAT_149936790,auVar65,auVar33);
                  uVar28 = -(ulonglong)(0.0 <= dVar46 * dVar96);
                  dVar63 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar44 = auVar48._0_8_;
                  local_178._8_8_ = (double)local_178._8_8_ * dVar44;
                  local_178._0_8_ = (double)local_178._0_8_ * dVar44;
                  local_168._0_8_ = (double)local_168._0_8_ * dVar44;
                  dVar44 = auVar48._8_8_;
                  local_148 = local_148 * dVar44;
                  local_150 = local_150 * dVar44;
                  local_158 = dVar44 * local_158;
                  local_128 = local_128 * dVar63;
                  local_130 = local_130 * dVar63;
                  local_138 = dVar63 * local_138;
                  FUN_14481fd10(&local_418);
                  dVar63 = local_408 * local_408 + local_418 * local_418;
                  dVar44 = dStack_400 * dStack_400 + dStack_410 * dStack_410;
                  auVar71._0_8_ = dVar63 + dVar44;
                  auVar71._8_8_ = dVar63 + dVar44;
                  auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar71._8_8_);
                  auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar71._0_8_);
                  auVar48 = sqrtpd(auVar71,auVar71);
                  auVar48 = divpd(auVar65,auVar48);
                  auVar88._0_8_ = auVar48._0_8_ * local_408;
                  auVar88._8_8_ = auVar48._8_8_ * dStack_400;
                  local_3a8 = blendvpd(local_4f8._0_16_,auVar88,auVar34);
                  local_3b8._8_8_ =
                       (ulonglong)(dStack_410 * auVar48._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar71._8_8_);
                  local_3b8._0_8_ =
                       (ulonglong)(local_418 * auVar48._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar71._0_8_);
                  local_388._8_8_ = 0;
                  local_388._0_8_ = local_108;
                  local_398 = local_118;
                  dStack_390 = dStack_110;
                }
                dVar60 = auVar53._8_8_ * dVar60;
                local_378._8_4_ = SUB84(dVar59 * dVar90,0);
                local_378._0_8_ = dVar62 * dVar45;
                local_378._12_4_ = (int)((ulonglong)(dVar59 * dVar90) >> 0x20);
                local_368._8_4_ = SUB84(dVar60,0);
                local_368._0_8_ = dVar46 * dVar96;
                local_368._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                lVar21 = (longlong)
                         *(int *)(*(longlong *)(lVar27 + 0x90) + (longlong)(int)lVar21 * 4);
                if (lVar21 == -1) break;
                iVar12 = *(int *)(*(longlong *)(lVar27 + 0x70) + lVar21 * 4);
              }
            }
            pdVar17 = local_2f8;
            uVar8 = FUN_1449437a2(pdVar17,&local_418,local_3b8);
            auVar48 = _DAT_149934d80;
            dVar62 = local_3d8._0_8_;
            dVar59 = local_3d8._8_8_;
            dVar46 = local_3c8._0_8_;
            dVar90 = local_3c8._8_8_;
            dVar45 = local_568._0_8_;
            dVar60 = local_568._8_8_;
            auVar53 = minpd(_local_568,local_3d8);
            dVar96 = local_4b8._0_8_;
            dVar63 = local_4b8._8_8_;
            auVar65 = minpd(local_4b8,local_3c8);
            auVar54._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
            auVar54._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
            iVar12 = movmskpd(uVar8,auVar54);
            auVar75._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
            auVar75._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
            uVar15 = movmskpd((int)pdVar17,auVar75);
            if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
              dVar101 = local_418 * (double)local_578._8_8_;
              dVar100 = local_418 * (double)local_578._0_8_;
              dVar91 = (double)local_578._0_8_ * dStack_410;
              dVar92 = (double)local_578._8_8_ * dStack_410;
              dVar97 = (double)local_578._8_8_ * local_408;
              dVar47 = (double)local_538._8_8_ * local_408;
              dVar94 = (double)local_5a8._0_8_ * dVar62;
              dVar89 = (double)local_5a8._8_8_ * dVar59;
              local_598 = local_598 * dVar46;
              dStack_590 = dStack_590 * dVar90;
              dVar44 = dVar89 * local_418 - dVar94 * dStack_410;
              dVar93 = local_598 * dStack_410 - dVar89 * local_408;
              dVar95 = dVar94 * local_408 - local_598 * local_418;
              dVar79 = dStack_590 * dStack_400 - dStack_590 * dStack_400;
              dVar93 = dVar93 + dVar93;
              dVar95 = dVar95 + dVar95;
              dVar44 = dVar44 + dVar44;
              dVar79 = dVar79 + dVar79;
              dVar89 = (dVar93 * local_408 - dVar44 * local_418) + dStack_400 * dVar95 + dVar89 +
                       dStack_3f0;
              local_598 = (dVar95 * local_418 - dStack_410 * dVar93) +
                          dStack_400 * dVar44 + local_598 + local_3e8;
              dStack_590 = (dVar79 * dStack_400 - dVar79 * dStack_400) +
                           dStack_400 * dVar79 + dStack_590 + dStack_3e0;
              local_578._8_8_ =
                   (double)local_578._0_8_ * local_408 * 1.0 +
                   (double)local_538._8_8_ * dStack_410 +
                   (double)local_538._0_8_ * local_418 * -1.0 + (double)local_578._8_8_ * dStack_400
              ;
              local_578._0_8_ =
                   dVar97 * -1.0 +
                   (double)local_538._0_8_ * dStack_410 +
                   (double)local_538._8_8_ * local_418 * 1.0 + (double)local_578._0_8_ * dStack_400;
              local_538._8_8_ =
                   (double)local_538._0_8_ * local_408 * -1.0 +
                   ((dVar100 * -1.0 + (double)local_538._8_8_ * dStack_400) - dVar92);
              local_538._0_8_ =
                   dVar47 * 1.0 + ((dVar101 * 1.0 + (double)local_538._0_8_ * dStack_400) - dVar91);
              local_5a8._8_4_ = SUB84(dVar89,0);
              local_5a8._0_8_ =
                   (dVar44 * dStack_410 - local_408 * dVar95) + dStack_400 * dVar93 + dVar94 +
                   local_3f8;
              local_5a8._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
            }
            else {
              dVar93 = dStack_410 + dStack_410;
              dVar95 = local_408 + local_408;
              dVar44 = local_418 * (local_418 + local_418);
              local_1a8 = (1.0 - (dVar44 + dStack_410 * dVar93)) * dVar46;
              dVar89 = (local_418 + local_418) * dStack_400;
              local_1b8 = (dVar93 * dStack_400 + local_418 * dVar95) * dVar46;
              local_1d8 = (dVar93 * local_418 - dVar95 * dStack_400) * dVar59;
              dStack_1b0 = (dVar95 * dStack_410 - dVar89) * dVar46;
              dStack_1d0 = (DAT_149934d80._8_8_ - (local_408 * dVar95 + dVar44)) * dVar59;
              local_1c8 = (dVar95 * dStack_410 + dVar89) * dVar59;
              local_1e8 = (local_418 * dVar95 - dVar93 * dStack_400) * dVar62;
              local_1f8._8_8_ = (dVar93 * local_418 + dVar95 * dStack_400) * dVar62;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (local_408 * dVar95 + dStack_410 * dVar93)) * dVar62;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_3f8;
              dStack_190 = dStack_3f0;
              local_188 = local_3e8;
              uStack_180 = 0x3ff0000000000000;
              dVar44 = (double)local_578._8_8_ + (double)local_578._8_8_;
              dVar95 = (double)local_538._0_8_ + (double)local_538._0_8_;
              dVar93 = (double)local_578._0_8_ * ((double)local_578._0_8_ + (double)local_578._0_8_)
              ;
              local_228 = (1.0 - (dVar93 + (double)local_578._8_8_ * dVar44)) * dVar96;
              dVar89 = ((double)local_578._0_8_ + (double)local_578._0_8_) * (double)local_538._8_8_
              ;
              local_238 = (dVar44 * (double)local_538._8_8_ + (double)local_578._0_8_ * dVar95) *
                          dVar96;
              dStack_230 = (dVar95 * (double)local_578._8_8_ - dVar89) * dVar96;
              local_278 = ((double)DAT_149934d80 -
                          ((double)local_538._0_8_ * dVar95 + (double)local_578._8_8_ * dVar44)) *
                          dVar45;
              dStack_270 = (dVar44 * (double)local_578._0_8_ + dVar95 * (double)local_538._8_8_) *
                           dVar45;
              local_248 = (dVar95 * (double)local_578._8_8_ + dVar89) * dVar60;
              local_268 = ((double)local_578._0_8_ * dVar95 - dVar44 * (double)local_538._8_8_) *
                          dVar45;
              uStack_260 = 0;
              local_258._8_8_ =
                   (DAT_149934d80._8_8_ - ((double)local_538._0_8_ * dVar95 + dVar93)) * dVar60;
              local_258._0_8_ =
                   (dVar44 * (double)local_578._0_8_ - dVar95 * (double)local_538._8_8_) * dVar60;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_5a8._0_8_;
              dStack_210 = (double)local_5a8._8_8_;
              local_208 = local_598;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(local_178,&local_278,local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar38._8_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
              auVar38._0_8_ = -(ulonglong)(0.0 <= dVar45 * dVar62);
              auVar53 = blendvpd(_DAT_149936790,auVar48,auVar38);
              uVar28 = -(ulonglong)(0.0 <= dVar96 * dVar46);
              dVar44 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
              dVar93 = auVar53._0_8_;
              local_178._8_8_ = (double)local_178._8_8_ * dVar93;
              local_178._0_8_ = (double)local_178._0_8_ * dVar93;
              local_168._0_8_ = (double)local_168._0_8_ * dVar93;
              dVar93 = auVar53._8_8_;
              local_148 = local_148 * dVar93;
              local_150 = local_150 * dVar93;
              local_158 = dVar93 * local_158;
              local_128 = local_128 * dVar44;
              local_130 = local_130 * dVar44;
              local_138 = dVar44 * local_138;
              FUN_14481fd10(&local_298,local_178);
              dVar44 = local_288 * local_288 + local_298 * local_298;
              dVar93 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar55._0_8_ = dVar44 + dVar93;
              auVar55._8_8_ = dVar44 + dVar93;
              auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
              auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
              auVar53 = sqrtpd(auVar55,auVar55);
              auVar48 = divpd(auVar48,auVar53);
              auVar76._0_8_ = auVar48._0_8_ * local_288;
              auVar76._8_8_ = auVar48._8_8_ * dStack_280;
              local_538 = blendvpd(local_4f8._0_16_,auVar76,auVar39);
              local_5a8._8_8_ = dStack_110;
              local_5a8._0_8_ = local_118;
              local_578._8_8_ =
                   (ulonglong)(dStack_290 * auVar48._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
              local_578._0_8_ =
                   (ulonglong)(local_298 * auVar48._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
              local_598 = local_108;
              dStack_590 = 0.0;
            }
            param_1 = local_5b0;
            dVar63 = dVar63 * dVar90;
            local_568._8_4_ = SUB84(dVar60 * dVar59,0);
            local_568._0_8_ = dVar45 * dVar62;
            uStack_55c = (int)((ulonglong)(dVar60 * dVar59) >> 0x20);
            local_4b8._8_4_ = SUB84(dVar63,0);
            local_4b8._0_8_ = dVar96 * dVar46;
            local_4b8._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            pdVar17 = local_358;
            uVar8 = FUN_1449437a2(pdVar17,&local_418,local_3b8);
            cVar26 = local_5b1;
            auVar48 = _DAT_149934d80;
            dVar62 = local_3d8._0_8_;
            dVar59 = local_3d8._8_8_;
            dVar46 = local_3c8._0_8_;
            dVar90 = local_3c8._8_8_;
            dVar45 = local_508._0_8_;
            dVar60 = local_508._8_8_;
            auVar53 = minpd(local_508,local_3d8);
            dVar96 = local_518._0_8_;
            dVar63 = local_518._8_8_;
            auVar65 = minpd(local_518,local_3c8);
            auVar56._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
            auVar56._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
            iVar12 = movmskpd(uVar8,auVar56);
            auVar77._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
            auVar77._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
            uVar15 = movmskpd((int)pdVar17,auVar77);
            if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
              dVar97 = local_418 * dStack_580;
              dVar101 = local_418 * local_588;
              dVar89 = local_588 * dStack_410;
              dVar91 = dStack_580 * dStack_410;
              dVar44 = local_588 * local_408;
              dVar47 = (double)local_548._8_8_ * local_408;
              local_588 = dStack_580 * local_408 * -1.0 +
                          (double)local_548._0_8_ * dStack_410 +
                          (double)local_548._8_8_ * local_418 * 1.0 + local_588 * dStack_400;
              dStack_580 = dVar44 * 1.0 +
                           (double)local_548._8_8_ * dStack_410 +
                           (double)local_548._0_8_ * local_418 * -1.0 + dStack_580 * dStack_400;
              dVar92 = (double)local_558._0_8_ * dVar62;
              dVar94 = (double)local_558._8_8_ * dVar59;
              dVar79 = local_528 * dVar46;
              dVar44 = dVar94 * local_418 - dVar92 * dStack_410;
              dVar93 = dVar79 * dStack_410 - dVar94 * local_408;
              dVar95 = dVar92 * local_408 - dVar79 * local_418;
              dVar93 = dVar93 + dVar93;
              dVar95 = dVar95 + dVar95;
              dVar44 = dVar44 + dVar44;
              local_508._8_4_ = SUB84(dVar60 * dVar59,0);
              local_508._0_8_ = dVar45 * dVar62;
              local_508._12_4_ = (int)((ulonglong)(dVar60 * dVar59) >> 0x20);
              dVar62 = (dVar93 * local_408 - dVar44 * local_418) + dStack_400 * dVar95 + dVar94 +
                       dStack_3f0;
              dVar60 = (dVar95 * local_418 - dStack_410 * dVar93) + dStack_400 * dVar44 + dVar79 +
                       local_3e8;
              dVar63 = dVar63 * dVar90;
              local_518._8_4_ = SUB84(dVar63,0);
              local_518._0_8_ = dVar96 * dVar46;
              local_518._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
              local_548._8_8_ =
                   (double)local_548._0_8_ * local_408 * -1.0 +
                   ((dVar101 * -1.0 + (double)local_548._8_8_ * dStack_400) - dVar91);
              local_548._0_8_ =
                   dVar47 * 1.0 + ((dVar97 * 1.0 + (double)local_548._0_8_ * dStack_400) - dVar89);
              local_558._8_4_ = SUB84(dVar62,0);
              local_558._0_8_ =
                   (dVar44 * dStack_410 - local_408 * dVar95) + dStack_400 * dVar93 + dVar92 +
                   local_3f8;
              local_558._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
            }
            else {
              dVar95 = dStack_410 + dStack_410;
              dVar89 = local_408 + local_408;
              dVar44 = local_418 * (local_418 + local_418);
              local_1a8 = (1.0 - (dVar44 + dStack_410 * dVar95)) * dVar46;
              dVar79 = (local_418 + local_418) * dStack_400;
              local_1b8 = (dVar95 * dStack_400 + local_418 * dVar89) * dVar46;
              local_1d8 = (dVar95 * local_418 - dVar89 * dStack_400) * dVar59;
              dStack_1b0 = (dVar89 * dStack_410 - dVar79) * dVar46;
              dVar93 = dVar60 * dVar59;
              dStack_1d0 = (DAT_149934d80._8_8_ - (local_408 * dVar89 + dVar44)) * dVar59;
              local_1c8 = (dVar89 * dStack_410 + dVar79) * dVar59;
              local_1e8 = (local_418 * dVar89 - dVar95 * dStack_400) * dVar62;
              local_1f8._8_8_ = (dVar95 * local_418 + dVar89 * dStack_400) * dVar62;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (local_408 * dVar89 + dStack_410 * dVar95)) * dVar62;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_3f8;
              dStack_190 = dStack_3f0;
              local_188 = local_3e8;
              uStack_180 = 0x3ff0000000000000;
              dVar59 = dStack_580 + dStack_580;
              dVar95 = (double)local_548._0_8_ + (double)local_548._0_8_;
              dVar44 = local_588 * (local_588 + local_588);
              local_228 = (1.0 - (dVar44 + dStack_580 * dVar59)) * dVar96;
              dVar89 = (local_588 + local_588) * (double)local_548._8_8_;
              local_238 = (dVar59 * (double)local_548._8_8_ + local_588 * dVar95) * dVar96;
              dStack_230 = (dVar95 * dStack_580 - dVar89) * dVar96;
              local_278 = ((double)DAT_149934d80 -
                          ((double)local_548._0_8_ * dVar95 + dStack_580 * dVar59)) * dVar45;
              dStack_270 = (dVar59 * local_588 + dVar95 * (double)local_548._8_8_) * dVar45;
              local_248 = (dVar95 * dStack_580 + dVar89) * dVar60;
              local_268 = (local_588 * dVar95 - dVar59 * (double)local_548._8_8_) * dVar45;
              uStack_260 = 0;
              local_258._8_8_ =
                   (DAT_149934d80._8_8_ - ((double)local_548._0_8_ * dVar95 + dVar44)) * dVar60;
              local_258._0_8_ = (dVar59 * local_588 - dVar95 * (double)local_548._8_8_) * dVar60;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_558._0_8_;
              dStack_210 = (double)local_558._8_8_;
              local_208 = local_528;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(local_178,&local_278,local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar40._8_8_ = -(ulonglong)(0.0 <= dVar93);
              auVar40._0_8_ = -(ulonglong)(0.0 <= dVar45 * dVar62);
              auVar53 = blendvpd(_DAT_149936790,auVar48,auVar40);
              uVar28 = -(ulonglong)(0.0 <= dVar96 * dVar46);
              dVar59 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
              dVar60 = auVar53._0_8_;
              local_178._8_8_ = (double)local_178._8_8_ * dVar60;
              local_178._0_8_ = (double)local_178._0_8_ * dVar60;
              local_168._0_8_ = (double)local_168._0_8_ * dVar60;
              dVar60 = auVar53._8_8_;
              local_148 = local_148 * dVar60;
              local_150 = local_150 * dVar60;
              local_158 = dVar60 * local_158;
              local_128 = local_128 * dVar59;
              local_130 = local_130 * dVar59;
              local_138 = dVar59 * local_138;
              FUN_14481fd10(&local_298,local_178);
              dVar59 = local_288 * local_288 + local_298 * local_298;
              dVar60 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar57._0_8_ = dVar59 + dVar60;
              auVar57._8_8_ = dVar59 + dVar60;
              auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
              auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
              auVar53 = sqrtpd(auVar57,auVar57);
              auVar48 = divpd(auVar48,auVar53);
              auVar78._0_8_ = auVar48._0_8_ * local_288;
              auVar78._8_8_ = auVar48._8_8_ * dStack_280;
              local_548 = blendvpd(local_4f8._0_16_,auVar78,auVar41);
              local_588 = (double)((ulonglong)(local_298 * auVar48._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
              dStack_580 = (double)((ulonglong)(dStack_290 * auVar48._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
              local_558._8_8_ = dStack_110;
              local_558._0_8_ = local_118;
              local_508._8_4_ = SUB84(dVar93,0);
              local_508._0_8_ = dVar45 * dVar62;
              local_508._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
              local_518._8_8_ = dVar63 * dVar90;
              local_518._0_8_ = dVar96 * dVar46;
              dVar60 = local_108;
            }
            auVar53 = local_5a8;
            uVar102 = local_568._0_4_;
            uVar103 = local_568._4_4_;
            uVar104 = local_568._8_4_;
            uVar105 = uStack_55c;
            uVar106 = local_4d8;
            uVar107 = uStack_4d4;
            auVar48 = local_538;
            uVar108 = (undefined4)local_598;
            uVar109 = local_598._4_4_;
            uVar8 = local_4a8;
            uVar110 = uStack_4a4;
            uVar111 = uStack_4a0;
            uVar112 = uStack_49c;
            dVar44 = local_4c8;
            dVar93 = dStack_4c0;
          }
        }
        dVar96 = dStack_470;
        dVar45 = local_478;
        dVar62 = (double)CONCAT44(uVar109,uVar108) - (double)CONCAT44(uVar107,uVar106);
        dVar63 = auVar53._0_8_ - dVar44;
        dVar95 = auVar53._8_8_ - dVar93;
        fVar43 = (float)SQRT(dVar62 * dVar62 + dVar63 * dVar63 + dVar95 * dVar95);
        pdVar17 = (double *)(lVar25 * 0x60 + *param_1);
        dVar59 = DAT_14c8464e8;
        dVar90 = DAT_14c8464e0;
        dVar46 = DAT_14c8464f0;
        if (0.0001 < fVar43) {
          dVar46 = 1.0 / (double)fVar43;
          dVar59 = dVar95 * dVar46;
          dVar90 = dVar46 * dVar63;
          dVar46 = dVar62 * dVar46;
        }
        fVar61 = 0.0;
        local_568._4_4_ = uVar103;
        local_568._0_4_ = uVar102;
        local_568._8_4_ = uVar104;
        uStack_55c = uVar105;
        if (((cVar26 == '\x01') && (0.0001 < fVar43)) && (0.0001 < *(float *)(param_6 + 0x17))) {
          fVar61 = (fVar43 - (float)((dVar60 - (double)CONCAT44(uVar107,uVar106)) * dVar46 +
                                    ((double)local_558._0_8_ - dVar44) * dVar90 +
                                    ((double)local_558._8_8_ - dVar93) * dVar59)) /
                   *(float *)(param_6 + 0x17);
        }
        *pdVar17 = dVar90;
        pdVar17[1] = dVar59;
        pdVar17[2] = dVar46;
        *(float *)(pdVar17 + 9) = fVar43;
        *(float *)((longlong)pdVar17 + 0x4c) = fVar61;
        dVar46 = (double)CONCAT44(uVar110,uVar8) * DAT_149931160;
        dVar90 = (double)CONCAT44(uVar112,uVar111) * DAT_149931160._8_8_;
        dVar62 = auVar48._0_8_;
        dVar60 = auVar48._8_8_;
        dVar63 = (dVar46 * (double)local_578._8_8_ +
                 (dVar90 * (double)local_578._0_8_ * 1.0 - dVar60 * local_478)) -
                 dVar62 * dStack_470 * DAT_149931160;
        dVar44 = (dVar90 * (double)local_578._8_8_ +
                 (dVar46 * (double)local_578._0_8_ * -1.0 - dVar60 * dStack_470)) -
                 dVar62 * local_478 * DAT_149931160._8_8_;
        dVar59 = dVar90 * dVar62 * 1.0 +
                 (double)local_578._8_8_ * local_478 +
                 (dVar46 * dVar60 - (double)local_578._0_8_ * dStack_470 * 1.0);
        dVar60 = dVar46 * dVar62 * -1.0 +
                 (double)local_578._8_8_ * dStack_470 +
                 (dVar90 * dVar60 - (double)local_578._0_8_ * local_478 * -1.0);
        dVar62 = dVar60;
        if (1.0 <= dVar60) {
          dVar62 = 1.0;
        }
        dVar62 = acos((double)(-(ulonglong)(dVar60 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar60 < -1.0) & (ulonglong)dVar62));
        dVar60 = dVar59 * dVar59 + dVar63 * dVar63;
        dVar93 = dVar44 * dVar44 + 0.0;
        auVar58._0_8_ = dVar60 + dVar93;
        auVar58._8_8_ = dVar60 + dVar93;
        auVar42._8_8_ = -(ulonglong)(1e-08 <= auVar58._8_8_);
        auVar42._0_8_ = -(ulonglong)(1e-08 <= auVar58._0_8_);
        auVar48 = sqrtpd(auVar58,auVar58);
        auVar48 = divpd(_DAT_149934d80,auVar48);
        auVar98._0_8_ = dVar63 * auVar48._0_8_;
        auVar98._8_8_ = dVar44 * auVar48._8_8_;
        local_1f8 = blendvpd(ZEXT816(0x3ff0000000000000),auVar98,auVar42);
        if ((-(ulonglong)(1e-08 <= auVar58._0_8_) & 1) == 0) {
          local_1e8 = 0.0;
        }
        else {
          local_1e8 = dVar59 * auVar48._0_8_;
        }
        for (fVar43 = (float)(dVar62 + dVar62); 3.1415927 < fVar43; fVar43 = fVar43 + -6.2831855) {
        }
        for (; fVar43 < -3.1415927; fVar43 = fVar43 + 6.2831855) {
        }
        if (fVar43 < 0.0) {
          uVar28 = local_1f8._0_8_;
          local_1e8 = -local_1e8;
          local_1f8._8_8_ = local_1f8._8_8_ ^ 0x8000000000000000;
          local_1f8._0_8_ = uVar28 ^ 0x8000000000000000;
          fVar43 = -fVar43;
        }
        dVar62 = local_4b8._0_8_;
        fVar61 = 0.0;
        if (((cVar26 == '\x01') && (0.0001 < fVar43)) && (0.0001 < *(float *)(param_6 + 0x17))) {
          dVar59 = -dVar45 * (double)local_548._0_8_ * 1.0 +
                   dVar90 * dStack_580 +
                   (dVar46 * local_588 * -1.0 - (double)local_548._8_8_ * dStack_470);
          dVar45 = dVar46 * (double)local_548._0_8_ * -1.0 +
                   dStack_580 * dStack_470 +
                   local_588 * -dVar45 * -1.0 + dVar90 * (double)local_548._8_8_;
          local_178._8_4_ = SUB84(dVar59,0);
          local_178._0_8_ =
               -dVar96 * (double)local_548._0_8_ * -1.0 +
               dVar46 * dStack_580 +
               (dVar90 * local_588 * 1.0 - (double)local_548._8_8_ * local_478);
          local_178._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          local_168._8_4_ = SUB84(dVar45,0);
          local_168._0_8_ =
               dVar90 * (double)local_548._0_8_ * 1.0 +
               dStack_580 * local_478 + local_588 * -dVar96 * 1.0 + dVar46 * (double)local_548._8_8_
          ;
          local_168._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
          dVar46 = (double)FUN_14010169e(local_178,local_1f8);
          for (fVar61 = fVar43 - (float)dVar46; 3.1415927 < fVar61; fVar61 = fVar61 + -6.2831855) {
          }
          for (; fVar61 < -3.1415927; fVar61 = fVar61 + 6.2831855) {
          }
          fVar61 = fVar61 / *(float *)(param_6 + 0x17);
        }
        pdVar17[5] = local_1e8;
        pdVar17[3] = (double)local_1f8._0_8_;
        pdVar17[4] = (double)local_1f8._8_8_;
        *(float *)(pdVar17 + 10) = fVar43;
        *(float *)((longlong)pdVar17 + 0x54) = fVar61;
        dVar62 = dVar62 - local_468;
        dVar59 = (double)local_568._0_8_ - local_458;
        dVar90 = stack0xfffffffffffffaa0 - dStack_450;
        fVar43 = (float)SQRT(dVar62 * dVar62 + dVar59 * dVar59 + dVar90 * dVar90);
        dVar46 = DAT_14c8464e0;
        dVar45 = DAT_14c8464e8;
        dVar96 = DAT_14c8464f0;
        if (0.0001 < fVar43) {
          dVar96 = 1.0 / (double)fVar43;
          dVar46 = dVar96 * dVar59;
          dVar45 = dVar90 * dVar96;
          dVar96 = dVar62 * dVar96;
        }
        fVar61 = 0.0;
        if (((cVar26 == '\x01') && (0.0001 < fVar43)) && (0.0001 < *(float *)(param_6 + 0x17))) {
          fVar61 = (fVar43 - (float)(((double)local_518._0_8_ - local_468) * dVar96 +
                                    ((double)local_508._0_8_ - local_458) * dVar46 +
                                    ((double)local_508._8_8_ - dStack_450) * dVar45)) /
                   *(float *)(param_6 + 0x17);
        }
        pdVar17[6] = dVar46;
        pdVar17[7] = dVar45;
        pdVar17[8] = dVar96;
        *(float *)(pdVar17 + 0xb) = fVar43;
        *(float *)((longlong)pdVar17 + 0x5c) = fVar61;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  param_1 = param_1 + 2;
  FUN_140101de6(param_1,local_490);
  plVar6 = local_5b0;
  uVar3 = *(uint *)(param_6 + 0x11);
  if (uVar3 != 0) {
    uVar15 = *(uint *)(local_5b0 + 3);
    if ((char)local_5b0[4] == '\0') {
      FUN_14010202e(local_5b0[2],uVar15);
      *(undefined1 *)(plVar6 + 4) = 1;
    }
    if (*(char *)(param_6 + 0x12) == '\0') {
      FUN_140102786(param_6[0x10],*(undefined4 *)(param_6 + 0x11));
      *(undefined1 *)(param_6 + 0x12) = 1;
    }
    uVar19 = uVar15;
    if ((int)uVar15 < (int)uVar3) {
      uVar19 = uVar3;
    }
    iVar12 = (int)uVar19 / 2 + uVar19;
    if (iVar12 < 0) goto LAB_14790dfd9;
    if (*(int *)((longlong)local_5b0 + 0x1c) < iVar12) {
      FUN_14010237e(param_1);
    }
    uVar19 = 0;
    if (uVar15 != 0 || (int)uVar3 < 1) {
      uVar20 = 0;
      lVar27 = 0x10;
      uVar19 = 0;
      do {
        if ((uVar19 == uVar3) && ((longlong)uVar20 <= (longlong)(int)uVar15)) goto LAB_14790dc32;
        lVar9 = *param_1;
        puVar10 = (undefined8 *)((longlong)param_6[0x10] + (longlong)(int)uVar19 * 0x10);
        lVar25 = *(longlong *)((longlong)param_6[0x10] + (longlong)(int)uVar19 * 0x10);
        lVar21 = *(longlong *)(lVar9 + -0x10 + lVar27);
        if (lVar21 == lVar25) {
          *(float *)(lVar9 + lVar27) = *(float *)(puVar10 + 1) - *(float *)(lVar9 + -8 + lVar27);
LAB_14790de3a:
          uVar19 = uVar19 + 1;
        }
        else {
          iVar12 = (int)lVar21 - (int)lVar25;
          if (iVar12 == 0) {
            iVar12 = (int)((ulonglong)lVar21 >> 0x20) - (int)((ulonglong)lVar25 >> 0x20);
          }
          if (-1 < iVar12) {
            puVar11 = (undefined8 *)FUN_140101bb8(param_1,uVar20 & 0xffffffff);
            uVar15 = *(uint *)(local_5b0 + 3);
            *puVar11 = *puVar10;
            *(float *)(puVar11 + 2) = *(float *)(puVar10 + 1) - *(float *)(puVar11 + 1);
            goto LAB_14790de3a;
          }
          *(float *)(lVar9 + lVar27) = 0.0 - *(float *)(lVar9 + -8 + lVar27);
        }
        uVar20 = uVar20 + 1;
        lVar27 = lVar27 + 0x18;
      } while (uVar20 != uVar15 || (int)uVar3 <= (int)uVar19);
    }
    iVar12 = (uVar3 - uVar19) + (int)local_5b0[3];
    if (iVar12 < 0) goto LAB_14790dfd9;
    if (*(int *)((longlong)local_5b0 + 0x1c) < iVar12) {
      FUN_14010237e(param_1);
    }
    iVar12 = uVar3 - uVar19;
    if (iVar12 != 0 && (int)uVar19 <= (int)uVar3) {
      uVar20 = (longlong)(int)uVar19 << 4 | 8;
      do {
        dVar62 = param_6[0x10];
        puVar10 = (undefined8 *)FUN_140101fd8(param_1);
        *puVar10 = *(undefined8 *)((longlong)dVar62 + -8 + uVar20);
        *(float *)(puVar10 + 2) = *(float *)((longlong)dVar62 + uVar20) - *(float *)(puVar10 + 1);
        uVar20 = uVar20 + 0x10;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
LAB_14790dc32:
  plVar6 = local_5b0;
  fVar43 = *(float *)(param_6 + 0x17);
  if ((0.0001 < fVar43) && (uVar3 = *(uint *)(param_7 + 0x11), uVar3 != 0)) {
    uVar15 = *(uint *)(local_5b0 + 3);
    if ((char)local_5b0[4] == '\0') {
      FUN_14010202e(local_5b0[2],uVar15);
      *(undefined1 *)(plVar6 + 4) = 1;
    }
    if (*(char *)(param_7 + 0x12) == '\0') {
      FUN_140102786(param_7[0x10],*(undefined4 *)(param_7 + 0x11));
      *(undefined1 *)(param_7 + 0x12) = 1;
    }
    uVar19 = uVar15;
    if ((int)uVar15 < (int)uVar3) {
      uVar19 = uVar3;
    }
    iVar12 = (int)uVar19 / 2 + uVar19;
    if (-1 < iVar12) {
      if (*(int *)((longlong)local_5b0 + 0x1c) < iVar12) {
        FUN_14010237e(param_1);
      }
      uVar19 = 0;
      if (uVar15 != 0 || (int)uVar3 < 1) {
        uVar20 = 0;
        lVar27 = 0x14;
        uVar19 = 0;
        do {
          if ((uVar19 == uVar3) && ((longlong)uVar20 <= (longlong)(int)uVar15)) goto LAB_14790dd51;
          lVar9 = *param_1;
          puVar10 = (undefined8 *)((longlong)param_7[0x10] + (longlong)(int)uVar19 * 0x10);
          lVar25 = *(longlong *)((longlong)param_7[0x10] + (longlong)(int)uVar19 * 0x10);
          lVar21 = *(longlong *)(lVar9 + -0x14 + lVar27);
          if (lVar21 == lVar25) {
            *(float *)(lVar9 + lVar27) =
                 ((*(float *)(lVar9 + -4 + lVar27) - *(float *)(lVar9 + -0xc + lVar27)) -
                 *(float *)(puVar10 + 1)) / fVar43;
LAB_14790df11:
            uVar19 = uVar19 + 1;
          }
          else {
            iVar12 = (int)lVar21 - (int)lVar25;
            if (iVar12 == 0) {
              iVar12 = (int)((ulonglong)lVar21 >> 0x20) - (int)((ulonglong)lVar25 >> 0x20);
            }
            if (-1 < iVar12) {
              puVar11 = (undefined8 *)FUN_140101bb8(param_1,uVar20 & 0xffffffff);
              uVar15 = *(uint *)(local_5b0 + 3);
              *puVar11 = *puVar10;
              *(float *)((longlong)puVar11 + 0x14) =
                   ((*(float *)(puVar11 + 2) - *(float *)(puVar11 + 1)) - *(float *)(puVar10 + 1)) /
                   fVar43;
              goto LAB_14790df11;
            }
            *(float *)(lVar9 + lVar27) =
                 (*(float *)(lVar9 + -4 + lVar27) - *(float *)(lVar9 + -0xc + lVar27)) / fVar43;
          }
          uVar20 = uVar20 + 1;
          lVar27 = lVar27 + 0x18;
        } while (uVar20 != uVar15 || (int)uVar3 <= (int)uVar19);
      }
      iVar12 = (uVar3 - uVar19) + (int)local_5b0[3];
      if (-1 < iVar12) {
        if (*(int *)((longlong)local_5b0 + 0x1c) < iVar12) {
          FUN_14010237e(param_1);
        }
        iVar12 = uVar3 - uVar19;
        if (iVar12 != 0 && (int)uVar19 <= (int)uVar3) {
          uVar20 = (longlong)(int)uVar19 << 4 | 8;
          do {
            dVar62 = param_7[0x10];
            puVar10 = (undefined8 *)FUN_140101fd8(param_1);
            *puVar10 = *(undefined8 *)((longlong)dVar62 + -8 + uVar20);
            *(float *)((longlong)puVar10 + 0x14) =
                 ((*(float *)(puVar10 + 2) - *(float *)(puVar10 + 1)) -
                 *(float *)((longlong)dVar62 + uVar20)) / fVar43;
            uVar20 = uVar20 + 0x10;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        goto LAB_14790dd51;
      }
    }
LAB_14790dfd9:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
LAB_14790dd51:
  if (0 < *(int *)(param_8 + 8)) {
    FUN_14790e58e(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790dfea FUN_14790dfea body=95 status=ok
// SIG undefined FUN_14790dfea(void)

void FUN_14790dfea(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_6;
  uStack_14 = param_6[1];
  uStack_10 = param_6[2];
  uStack_c = param_6[3];
  local_20 = &local_18;
  local_28 = param_5;
  FUN_14790e04a(param_3,param_2 + 0x20,param_2 + 0x38);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790e04a FUN_14790e04a body=1347 status=ok
// SIG undefined FUN_14790e04a(void)

void FUN_14790e04a(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  undefined1 auVar29 [16];
  double dVar30;
  
  uVar5 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar5 == 0) {
    uVar21 = 0;
  }
  else {
    lVar25 = param_2[2];
    lVar27 = 0;
    uVar24 = 0;
    do {
      lVar18 = (longlong)*(int *)(*(longlong *)(lVar25 + 0x70) + uVar24 * 4);
      if (lVar18 != -1) {
        lVar6 = *param_1;
        lVar18 = lVar18 * 0x60;
        fVar28 = (float)FUN_1401013ad(*(undefined4 *)(lVar6 + 0x48 + lVar18));
        dVar11 = (double)fVar28;
        dVar4 = *(double *)(lVar6 + 0x10 + lVar18);
        lVar7 = *param_2;
        pdVar2 = (double *)(lVar7 + 0x20 + lVar27);
        dVar13 = *(double *)(lVar6 + 8 + lVar18) * dVar11 + pdVar2[1];
        pdVar3 = (double *)(lVar7 + 0x30 + lVar27);
        dVar30 = pdVar3[1];
        auVar8._8_4_ = SUB84(dVar13,0);
        auVar8._0_8_ = dVar11 * *(double *)(lVar6 + lVar18) + *pdVar2;
        auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + 0x20 + lVar27) = auVar8;
        pdVar2 = (double *)(lVar7 + 0x30 + lVar27);
        *pdVar2 = dVar4 * dVar11 + *pdVar3;
        pdVar2[1] = dVar30 + 0.0;
        fVar28 = (float)FUN_1401013ad(*(undefined4 *)(lVar6 + 0x50 + lVar18));
        dVar4 = *(double *)(lVar6 + 0x18 + lVar18);
        dVar30 = *(double *)(lVar6 + 0x20 + lVar18);
        dVar11 = *(double *)(lVar6 + 0x28 + lVar18);
        dVar13 = sin((double)fVar28 * 0.5);
        dVar12 = cos((double)fVar28 * 0.5);
        dVar4 = dVar4 * dVar13;
        dVar30 = dVar30 * dVar13;
        dVar11 = dVar11 * dVar13;
        lVar7 = *param_2;
        dVar14 = *(double *)(lVar7 + lVar27);
        dVar15 = ((double *)(lVar7 + lVar27))[1];
        pdVar2 = (double *)(lVar7 + 0x10 + lVar27);
        dVar16 = *pdVar2;
        dVar17 = pdVar2[1];
        dVar13 = dVar16 * dVar11 * -1.0 +
                 ((dVar4 * dVar14 * -1.0 + dVar12 * dVar17) - dVar30 * dVar15);
        *(double *)(lVar7 + lVar27) =
             dVar15 * dVar11 * -1.0 + dVar16 * dVar30 + dVar4 * dVar17 * 1.0 + dVar12 * dVar14;
        ((double *)(lVar7 + lVar27))[1] =
             dVar14 * dVar11 * 1.0 + dVar17 * dVar30 + dVar4 * dVar16 * -1.0 + dVar12 * dVar15;
        auVar9._8_4_ = SUB84(dVar13,0);
        auVar9._0_8_ = dVar17 * dVar11 * 1.0 +
                       ((dVar4 * dVar15 * 1.0 + dVar12 * dVar16) - dVar30 * dVar14);
        auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + 0x10 + lVar27) = auVar9;
        fVar28 = (float)FUN_1401013ad(*(undefined4 *)(lVar6 + 0x58 + lVar18));
        dVar4 = (double)fVar28;
        lVar7 = *param_2;
        auVar29._0_8_ =
             *(double *)(lVar6 + 0x40 + lVar18) * dVar4 + *(double *)(lVar7 + 0x50 + lVar27);
        dVar30 = *(double *)(lVar6 + 0x38 + lVar18) * dVar4 + *(double *)(lVar7 + 0x48 + lVar27);
        auVar29._8_8_ = 0;
        auVar10._8_4_ = SUB84(dVar30,0);
        auVar10._0_8_ =
             dVar4 * *(double *)(lVar6 + 0x30 + lVar18) + *(double *)(lVar7 + 0x40 + lVar27);
        auVar10._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + 0x40 + lVar27) = auVar10;
        *(undefined1 (*) [16])(lVar7 + 0x50 + lVar27) = auVar29;
      }
      uVar24 = uVar24 + 1;
      lVar27 = lVar27 + 0x60;
    } while (uVar5 != uVar24);
    uVar21 = (undefined4)param_2[1];
  }
  FUN_142400cf0(*param_2,uVar21);
  uVar5 = *(uint *)(param_1 + 3);
  if (uVar5 == 0) {
    return;
  }
  uVar23 = *(uint *)(param_3 + 1);
  if ((char)param_3[2] == '\0') {
    FUN_144716af1(*param_3,uVar23);
    *(undefined1 *)(param_3 + 2) = 1;
  }
  if ((char)param_1[4] == '\0') {
    FUN_14010202e(param_1[2],(int)param_1[3]);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar26 = uVar23;
  if ((int)uVar23 < (int)uVar5) {
    uVar26 = uVar5;
  }
  iVar22 = (int)uVar26 / 2 + uVar26;
  if (-1 < iVar22) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar22) {
      FUN_14480ffb8(param_3);
    }
    uVar26 = 0;
    if (uVar23 != 0 || (int)uVar5 < 1) {
      uVar24 = 0;
      lVar25 = 0xc;
      uVar26 = 0;
      do {
        if ((uVar26 == uVar5) && ((longlong)uVar24 <= (longlong)(int)uVar23)) {
          return;
        }
        lVar27 = *param_3;
        plVar1 = (longlong *)(param_1[2] + (longlong)(int)uVar26 * 0x18);
        lVar18 = *plVar1;
        lVar6 = *(longlong *)(lVar27 + -0xc + lVar25);
        if (lVar6 == lVar18) {
          fVar28 = (float)FUN_1401013ad((int)plVar1[2],*(undefined4 *)((longlong)plVar1 + 0x14),
                                        param_4,param_5);
          *(float *)(lVar27 + -4 + lVar25) = fVar28 + *(float *)(lVar27 + -4 + lVar25);
          *(byte *)(lVar27 + lVar25) =
               *(byte *)(lVar27 + lVar25) | *(byte *)((longlong)plVar1 + 0xc);
LAB_14790e4ce:
          uVar26 = uVar26 + 1;
        }
        else {
          iVar22 = (int)lVar6 - (int)lVar18;
          if (iVar22 == 0) {
            iVar22 = (int)((ulonglong)lVar6 >> 0x20) - (int)((ulonglong)lVar18 >> 0x20);
          }
          if (-1 < iVar22) {
            plVar20 = (longlong *)FUN_144a1cc74(param_3,uVar24 & 0xffffffff);
            uVar23 = *(uint *)(param_3 + 1);
            *plVar20 = *plVar1;
            fVar28 = (float)FUN_1401013ad((int)plVar1[2],*(undefined4 *)((longlong)plVar1 + 0x14),
                                          param_4,param_5);
            *(float *)(plVar20 + 1) = fVar28 + *(float *)(plVar20 + 1);
            *(byte *)((longlong)plVar20 + 0xc) =
                 *(byte *)((longlong)plVar20 + 0xc) | *(byte *)((longlong)plVar1 + 0xc);
            goto LAB_14790e4ce;
          }
          fVar28 = (float)FUN_1401013ad(0,0,param_4,param_5);
          *(float *)(lVar27 + -4 + lVar25) = fVar28 + *(float *)(lVar27 + -4 + lVar25);
        }
        uVar24 = uVar24 + 1;
        lVar25 = lVar25 + 0x10;
      } while (uVar24 != uVar23 || (int)uVar5 <= (int)uVar26);
    }
    iVar22 = (uVar5 - uVar26) + (int)param_3[1];
    if (-1 < iVar22) {
      if (*(int *)((longlong)param_3 + 0xc) < iVar22) {
        FUN_14480ffb8(param_3);
      }
      iVar22 = uVar5 - uVar26;
      if (iVar22 == 0 || (int)uVar5 < (int)uVar26) {
        return;
      }
      lVar25 = (longlong)(int)uVar26 * 0x18 + 0x14;
      do {
        lVar27 = param_1[2];
        puVar19 = (undefined8 *)FUN_14470c6b2(param_3);
        *puVar19 = *(undefined8 *)(lVar27 + -0x14 + lVar25);
        fVar28 = (float)FUN_1401013ad(*(undefined4 *)(lVar27 + -4 + lVar25),
                                      *(undefined4 *)(lVar27 + lVar25),param_4,param_5);
        *(float *)(puVar19 + 1) = fVar28 + *(float *)(puVar19 + 1);
        *(byte *)((longlong)puVar19 + 0xc) =
             *(byte *)((longlong)puVar19 + 0xc) | *(byte *)(lVar27 + -8 + lVar25);
        lVar25 = lVar25 + 0x18;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar22);
}



// FUNCTION 14790e58e FUN_14790e58e body=518 status=ok
// SIG undefined FUN_14790e58e(void)

void FUN_14790e58e(longlong *param_1,longlong *param_2)

{
  longlong *_Dst;
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  cVar1 = (char)param_2[3];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x02') {
    if ((int)param_2[1] != 0) goto LAB_14790e5d2;
  }
  else if (cVar1 != '\x01') {
LAB_14790e5d2:
    if ((char)param_1[2] == '\0') {
      FUN_14010202e(*param_1,(int)param_1[1]);
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if ((char)param_2[2] == '\0') {
      FUN_146264839(*param_2,(int)param_2[1]);
      *(undefined1 *)(param_2 + 2) = 1;
    }
    uVar6 = *(uint *)(param_1 + 1);
    iVar3 = (int)param_2[1];
    bVar10 = uVar6 == 0;
    if (bVar10 && 0 < iVar3) {
      return;
    }
    uVar8 = 0;
    iVar9 = 0;
    do {
      if ((int)uVar8 < (int)uVar6 && iVar9 == iVar3) {
        do {
          if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
            uVar8 = uVar8 + 1;
          }
          else {
            if (~uVar8 + uVar6 != 0) {
              memmove((void *)(*param_1 + (longlong)(int)uVar8 * 0x18),
                      (void *)(*param_1 + (longlong)(int)uVar8 * 0x18 + 0x18),
                      (longlong)(int)(~uVar8 + uVar6) * 0x18);
              uVar6 = *(uint *)(param_1 + 1);
            }
            uVar6 = uVar6 - 1;
            *(uint *)(param_1 + 1) = uVar6;
          }
        } while ((int)uVar8 < (int)uVar6);
        return;
      }
      if ((bool)(bVar10 & iVar9 == iVar3)) {
        return;
      }
      _Dst = (longlong *)(*param_1 + (longlong)(int)uVar8 * 0x18);
      lVar4 = *(longlong *)(*param_2 + (longlong)iVar9 * 0xc);
      lVar5 = *_Dst;
      if (lVar5 == lVar4) {
        bVar2 = *(byte *)(*param_2 + (longlong)iVar9 * 0xc + 8);
        if ((bVar2 & 1) != 0) goto LAB_14790e678;
        cVar1 = (char)param_2[3];
        if (cVar1 == '\0') {
LAB_14790e6ec:
          uVar8 = uVar8 + 1;
        }
        else {
          if (cVar1 == '\x02') {
            if ((bVar2 & 2) != 0) goto LAB_14790e6ec;
          }
          else if ((cVar1 == '\x03') && ((bVar2 & 2) == 0)) goto LAB_14790e6ec;
LAB_14790e678:
          if (~uVar8 + uVar6 != 0) {
            memmove(_Dst,_Dst + 3,(longlong)(int)(~uVar8 + uVar6) * 0x18);
            uVar6 = *(uint *)(param_1 + 1);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(param_1 + 1) = uVar6;
        }
LAB_14790e69f:
        iVar9 = iVar9 + 1;
      }
      else {
        iVar7 = (int)lVar5 - (int)lVar4;
        if (iVar7 == 0) {
          iVar7 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar4 >> 0x20);
        }
        if (-1 < iVar7) goto LAB_14790e69f;
        if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
          uVar8 = uVar8 + 1;
        }
        else {
          if (~uVar8 + uVar6 != 0) {
            memmove(_Dst,_Dst + 3,(longlong)(int)(~uVar8 + uVar6) * 0x18);
            uVar6 = *(uint *)(param_1 + 1);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(param_1 + 1) = uVar6;
        }
      }
      bVar10 = uVar8 == uVar6;
      if (bVar10 && iVar9 < iVar3) {
        return;
      }
    } while( true );
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    return;
  }
  FUN_14010237e(param_1,0);
  return;
}



// FUNCTION 14790e7a4 FUN_14790e7a4 body=68 status=ok
// SIG undefined FUN_14790e7a4(void)

void FUN_14790e7a4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_1478ff71a();
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar1 = (longlong)*(int *)(param_1 + 0x68) << 4;
    do {
      FUN_140320438(lVar2,param_2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14790e7e8 FUN_14790e7e8 body=77 status=ok
// SIG undefined FUN_14790e7e8(void)

void FUN_14790e7e8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1478ff7f0();
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14790e836 FUN_14790e836 body=862 status=ok
// SIG undefined FUN_14790e836(void)

void FUN_14790e836(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  plVar4 = (longlong *)FUN_147508a86();
  if ((plVar4 == (longlong *)0x0) || (param_1[0x11] == 0)) {
    if (0 < (int)param_1[0xd]) {
      FUN_14474897c(param_1[0xc],param_2);
    }
  }
  else {
    cVar2 = FUN_144966fca(plVar4[4]);
    if (cVar2 != '\0') {
      cVar2 = FUN_144a61b4f();
      if (cVar2 != '\0') {
        FUN_14036294a(plVar4[4],1,1);
      }
    }
    lVar5 = plVar4[0x7c];
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*plVar4 + 0x350))(plVar4);
      plVar4[0x7c] = lVar5;
    }
    lVar1 = *param_2;
    *(undefined2 *)(lVar5 + 0x5e8) = *(undefined2 *)(lVar1 + 0x5e8);
    *(undefined8 *)(lVar5 + 0x5e0) = *(undefined8 *)(lVar1 + 0x5e0);
    *(undefined2 *)(lVar5 + 0x5ea) = *(undefined2 *)(lVar1 + 0x5ea);
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)(*param_2 + 0x130));
    local_90 = param_2[1];
    local_88 = CONCAT11(local_88._1_1_,1);
    local_78 = (undefined4)param_2[4];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    local_70 = (undefined4)param_2[5];
    local_84 = *(undefined4 *)((longlong)param_1 + 0x94);
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    local_98 = lVar5;
    (**(code **)(*param_1 + 0x108))(param_1,&local_48);
    FUN_1433d8096(lVar5,&local_98,param_1[0x11],local_48);
  }
  if ((0.0 <= *(float *)(param_1 + 0x13)) || (0.0 <= *(float *)(param_1 + 0x15))) {
    plVar4 = (longlong *)FUN_14025b9ca();
    if (plVar4 != (longlong *)0x0) {
      if (0.0 <= *(float *)(param_1 + 0x13)) {
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_144a5dc74(&local_78);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_98 = CONCAT44(local_98._4_4_,(int)param_1[0x13]);
        lVar5 = param_1[0x14];
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = param_1[0x14];
          }
        }
        local_90 = lVar5;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_98);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
        }
      }
      if (0.0 <= *(float *)(param_1 + 0x15)) {
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_144a5dc74(&local_78);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_98 = CONCAT44(local_98._4_4_,(int)param_1[0x15]);
        lVar5 = param_1[0x16];
        if (DAT_14c950c29 == '\x01') {
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar5 = param_1[0x16];
          }
        }
        local_90 = lVar5;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_98);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
        }
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,*param_2,*(undefined4 *)((longlong)param_2 + 0x14));
    }
  }
  *(undefined4 *)(param_1 + 0x13) = 0xbf800000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xbf800000;
  param_1[0x16] = 0;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790eb96 FUN_14790eb96 body=351 status=ok
// SIG undefined FUN_14790eb96(void)

void FUN_14790eb96(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_147508a86();
  if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    lVar2 = *param_2;
    cVar4 = FUN_144966fca(plVar5[4]);
    if (cVar4 != '\0') {
      cVar4 = FUN_144a61b4f();
      if (cVar4 != '\0') {
        FUN_14036294a(plVar5[4],1,1);
      }
    }
    lVar6 = plVar5[0x7c];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*plVar5 + 0x350))(plVar5);
      plVar5[0x7c] = lVar6;
    }
    lVar3 = *param_2;
    *(undefined2 *)(lVar6 + 0x5f8) = *(undefined2 *)(lVar3 + 0x5f8);
    *(undefined8 *)(lVar6 + 0x5f0) = *(undefined8 *)(lVar3 + 0x5f0);
    *(undefined2 *)(lVar6 + 0x5fa) = *(undefined2 *)(lVar3 + 0x5fa);
    FUN_144717630(param_2 + 4,*(undefined8 *)(lVar6 + 0x6a0));
    *param_2 = lVar6;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
    uVar1 = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
    FUN_14005af20(lVar6,param_2,*(undefined8 *)(param_1 + 0x88));
    *param_2 = lVar2;
    FUN_144717630(param_2 + 4,*(undefined8 *)(lVar2 + 0x6a0));
    return;
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_1447139fe(*(undefined8 *)(param_1 + 0x60),param_2);
    return;
  }
  if ((char)param_2[0x13] == '\x01') {
    FUN_142400d60(param_2[4],(int)param_2[5]);
    return;
  }
  FUN_1448859f0(param_2 + 4,param_2[6]);
  return;
}



// FUNCTION 14790ecf6 FUN_14790ecf6 body=676 status=ok
// SIG undefined FUN_14790ecf6(void)

void FUN_14790ecf6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14790ef9c(param_2,&local_40);
  lVar5 = param_1[0x10];
  if ((((lVar5 == 0) || (lVar3 = FUN_1402e44f4(), lVar3 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (lVar5 = param_1[0x10], lVar5 == 0)))) {
    FUN_140002266(&local_50,L"Target: %s",&DAT_149e01fe8);
    iVar1 = local_48 + -1;
    if (local_48 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_40,local_50,iVar1);
    local_60 = local_50;
  }
  else {
    lVar3 = FUN_1402e44f4();
    if ((lVar3 == 0) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1[0x10];
    }
    local_50 = *(undefined2 **)(lVar5 + 0x18);
    FUN_1400021e4(&local_50,&local_60);
    puVar7 = local_60;
    if (local_58 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"Target: %s",puVar7);
    iVar1 = local_48 + -1;
    if (local_48 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_40,local_50,iVar1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  plVar4 = (longlong *)FUN_147508a86(param_1);
  if ((plVar4 == (longlong *)0x0) || (param_1[0x11] == 0)) {
    if ((0 < (int)param_1[0xd]) && (plVar4 = *(longlong **)param_1[0xc], plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
  }
  else {
    cVar2 = FUN_144966fca(plVar4[4]);
    if ((cVar2 != '\0') && (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
      FUN_14036294a(plVar4[4],1,1);
    }
    lVar5 = plVar4[0x7c];
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*plVar4 + 0x350))(plVar4);
      plVar4[0x7c] = lVar5;
    }
    (**(code **)(*param_1 + 0x108))(param_1,&local_78);
    lVar3 = param_1[0x11];
    local_88 = 0;
    uStack_80 = 0;
    uVar6 = FUN_147906f5e(param_2,0x3f800000);
    FUN_1433d89c4(lVar5,uVar6,lVar3,local_78);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14790ef9c FUN_14790ef9c body=256 status=ok
// SIG undefined FUN_14790ef9c(void)

undefined8 FUN_14790ef9c(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbe08 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbe08 = FUN_140002ddd(FUN_1463a568e,uVar2,L"AnimNode_LinkedAnimGraph");
  }
  local_48 = *(undefined8 *)(DAT_14cacbe08 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14790f09e FUN_14790f09e body=219 status=ok
// SIG undefined FUN_14790f09e(void)

void FUN_14790f09e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_147508a86();
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((((lVar1 == 0) || (lVar4 = FUN_1402e44f4(), lVar4 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    FUN_1433e056c(param_1,param_3);
  }
  else {
    FUN_14790f17a(param_1,param_3,0);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  cVar2 = FUN_144966fca(plVar3[4]);
  if ((cVar2 != '\0') && (cVar2 = FUN_144a61b4f(), cVar2 != '\0')) {
    FUN_14036294a(plVar3[4],1,1);
  }
  plVar5 = (longlong *)plVar3[0x7c];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x350))(plVar3);
    plVar3[0x7c] = (longlong)plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014790f159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x80))(plVar5,plVar3);
  return;
}



// FUNCTION 14790f17a FUN_14790f17a body=566 status=ok
// SIG undefined FUN_14790f17a(void)

void FUN_14790f17a(longlong *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  bool bVar9;
  
  lVar3 = FUN_147508a86();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_140721bac(*(undefined8 *)(lVar3 + 0x10));
  }
  FUN_1433e056c(param_1,param_2);
  lVar3 = param_1[0x10];
  if (lVar3 == 0) {
LAB_14790f1f2:
    bVar9 = false;
  }
  else {
    lVar5 = FUN_1402e44f4();
    if (((lVar5 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_14790f1f2;
    bVar9 = param_1[0x10] != 0;
  }
  if ((param_3 == (longlong *)0x0) && (!bVar9)) {
    uVar6 = 0;
    goto LAB_14790f246;
  }
  if (param_3 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    lVar5 = param_1[0x10];
    if (lVar5 == 0) {
LAB_14790f29b:
      lVar5 = 0;
    }
    else {
      lVar7 = FUN_1402e44f4();
      if (((lVar7 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_14790f29b;
      lVar5 = param_1[0x10];
    }
    param_3 = (longlong *)FUN_1417b484e(lVar3,lVar5,0,0,0,0,0,0);
    bVar1 = *(byte *)((longlong)param_3 + 0x31);
    *(byte *)((longlong)param_3 + 0x31) = bVar1 | 8;
    bVar8 = (*(byte *)(param_1 + 0x17) & 2) << 4;
    *(byte *)((longlong)param_3 + 0x31) = bVar1 & 0xdf | 8 | bVar8;
    *(byte *)((longlong)param_3 + 0x31) =
         bVar1 & 0xcf | 8 | bVar8 | (*(byte *)(param_1 + 0x17) & 1) << 4;
    if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    param_1[7] = (longlong)param_3;
    FUN_1433e07bc(param_1,param_2);
    FUN_140737aec(param_3,0);
    if ((*(byte *)(lVar3 + 0x9f) & 0x20) != 0) {
      (**(code **)(*param_3 + 0x330))(param_3);
      FUN_1417b45f8(param_3);
    }
    if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    iVar2 = *(int *)(lVar3 + 0xb80);
    *(uint *)(lVar3 + 0xb80) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xb84) < iVar2 + 1U) {
      FUN_1478fec76((longlong *)(lVar3 + 0xb78),iVar2);
    }
    *(longlong **)(*(longlong *)(lVar3 + 0xb78) + (longlong)iVar2 * 8) = param_3;
    if ((param_3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    param_1[7] = (longlong)param_3;
    FUN_1433e07bc(param_1,param_2);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3[2]);
  uVar6 = FUN_140721bac(param_3[2]);
LAB_14790f246:
  FUN_14790f3b0(param_1,uVar4,uVar6);
  return;
}



// FUNCTION 14790f3b0 FUN_14790f3b0 body=639 status=ok
// SIG undefined FUN_14790f3b0(void)

void FUN_14790f3b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x108))(param_1,&local_28);
  if (param_2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x90))(param_2);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar7 = (uint)local_28 & 0xffff;
      plVar5 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar2[8];
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar7) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar3 = *plVar2 + (longlong)iVar8 * 0x30;
          if (*(longlong *)(*plVar2 + (longlong)iVar8 * 0x30) == local_28) goto LAB_14790f400;
          iVar8 = *(int *)(lVar3 + 0x28);
        } while (iVar8 != -1);
      }
    }
    lVar3 = 0;
LAB_14790f400:
    lVar4 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
  }
  if (param_3 == (longlong *)0x0) {
    pfVar6 = (float *)0x0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x90))(param_3);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar7 = (uint)local_28 & 0xffff;
      plVar5 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar2[8];
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar7) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar3 = *plVar2 + (longlong)iVar8 * 0x30;
          if (*(longlong *)(*plVar2 + (longlong)iVar8 * 0x30) == local_28) goto LAB_14790f42e;
          iVar8 = *(int *)(lVar3 + 0x28);
        } while (iVar8 != -1);
      }
    }
    lVar3 = 0;
LAB_14790f42e:
    pfVar6 = (float *)(lVar3 + 8);
    if (lVar3 == 0) {
      pfVar6 = (float *)0x0;
    }
  }
  if ((lVar4 == 0) || (*(float *)(lVar4 + 0x10) < 0.0)) {
    *(undefined4 *)(param_1 + 0x13) = 0xbf800000;
    param_1[0x14] = 0;
  }
  else {
    *(float *)(param_1 + 0x13) = *(float *)(lVar4 + 0x10);
    lVar3 = *(longlong *)(lVar4 + 0x18);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(lVar4 + 0x18);
      }
    }
    param_1[0x14] = lVar3;
  }
  if ((pfVar6 == (float *)0x0) || (*pfVar6 < 0.0)) {
    *(undefined4 *)(param_1 + 0x15) = 0xbf800000;
    param_1[0x16] = 0;
  }
  else {
    *(float *)(param_1 + 0x15) = *pfVar6;
    lVar4 = *(longlong *)(pfVar6 + 2);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(pfVar6 + 2);
      }
    }
    param_1[0x16] = lVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14790f630 FUN_14790f630 body=341 status=ok
// SIG undefined FUN_14790f630(void)

void FUN_14790f630(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  if ((((lVar3 != 0) && (lVar1 = FUN_1402e44f4(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     (((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30 && (*param_2 != 0)) && (lVar3 = FUN_140721bac(), lVar3 == 0)))) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = *param_2;
  if ((DAT_14c950c29 & 1) == 0) {
LAB_14790f73b:
    *(longlong *)(param_1 + 0x80) = lVar1;
    if (((lVar1 != 0) && (lVar2 = FUN_1402e44f4(), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      goto LAB_14790f6a9;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_1456cec3c();
      lVar1 = *param_2;
      goto LAB_14790f73b;
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar1 = 0;
LAB_14790f6a9:
  if (((lVar3 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
     (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30) {
      lVar4 = lVar3;
    }
  }
  if (lVar1 == lVar4) {
    return;
  }
  FUN_14790f17a(param_1,param_3,0);
  return;
}



// FUNCTION 14790f7a8 FUN_14790f7a8 body=94 status=ok
// SIG undefined FUN_14790f7a8(void)

undefined8 FUN_14790f7a8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    lVar2 = FUN_145a6af0a();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
      uVar3 = FUN_147508a86(param_1);
      return uVar3;
    }
  }
  return param_2;
}



// FUNCTION 14790f806 FUN_14790f806 body=84 status=ok
// SIG undefined FUN_14790f806(void)

void FUN_14790f806(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_14790f85a(param_1 + 0x40,iVar1);
  if (0 < (longlong)iVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    lVar4 = 0;
    do {
      uVar3 = FUN_144a87586(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8) = uVar3;
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  return;
}



// FUNCTION 14790f85a FUN_14790f85a body=116 status=ok
// SIG undefined FUN_14790f85a(void)

void FUN_14790f85a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140001000(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1476f8c70(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14790f8d0 FUN_14790f8d0 body=157 status=ok
// SIG undefined FUN_14790f8d0(void)

void FUN_14790f8d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14790f806(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    lVar2 = FUN_145a6af0a();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) &&
       ((*(longlong *)(param_1 + 0xc0) != 0 && (lVar1 = *(longlong *)(param_1 + 0x80), lVar1 != 0)))
       ) {
      lVar2 = FUN_1402e44f4();
      if (((lVar2 != 0) &&
          ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)))) && (*(longlong *)(param_1 + 0x80) != 0)) {
        return;
      }
    }
  }
  FUN_14790f96e(param_1,param_3);
  return;
}



// FUNCTION 14790f96e FUN_14790f96e body=400 status=ok
// SIG undefined FUN_14790f96e(void)

void FUN_14790f96e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_147508a86();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_140721bac(*(undefined8 *)(lVar3 + 0x10));
  }
  lVar6 = *(longlong *)(param_2 + 0x20);
  if (param_1[0x11] != 0) {
    FUN_1433e0676(param_1,param_2);
  }
  if ((lVar3 != param_2 && lVar3 != 0) &&
     (cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar3), cVar2 != '\0')) {
    FUN_140107fd2(lVar3);
    local_40 = lVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    local_38 = &local_40;
    FUN_14791b116(lVar6 + 0xb78);
    FUN_144757f48(lVar3,0x40000000);
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar6 + 8);
      lVar3 = 0;
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar7 = uVar1 == *(uint *)(lVar6 + 8);
      if (bVar7) {
        *(uint *)(lVar6 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
      lVar3 = 0;
    } while (!bVar7);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[7] = param_2;
  FUN_1433e07bc(param_1,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,uVar5);
  uVar5 = FUN_140721bac(uVar5);
  lVar6 = FUN_147508a86(param_1);
  if (lVar3 != lVar6) {
    FUN_14790f3b0(param_1,uVar4,uVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14790fb00 FUN_14790fb00 body=112 status=ok
// SIG undefined FUN_14790fb00(void)

void FUN_14790fb00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147508a86();
  if (lVar1 != param_2 && lVar1 != 0) {
    lVar2 = FUN_14021165e(*(undefined8 *)(param_2 + 0x20));
    if (lVar2 != 0) {
      lVar2 = FUN_14792daf8(lVar2,lVar1);
      if (lVar2 != 0) {
        FUN_1433e0676(param_1,param_2);
        *(undefined8 *)(param_1 + 0x38) = 0;
        FUN_14790fb70(param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14790fb70 FUN_14790fb70 body=134 status=ok
// SIG undefined FUN_14790fb70(void)

void FUN_14790fb70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_14021165e(*(undefined8 *)(param_2 + 0x20));
    if (lVar1 != 0) {
      lVar2 = FUN_14792daf8(lVar1,param_2);
      if (lVar2 != 0) {
        (**(code **)(*param_1 + 0x108))(param_1,&local_30);
        FUN_14792ded6(lVar1,param_2,local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790fbf8 FUN_14790fbf8 body=237 status=ok
// SIG undefined FUN_14790fbf8(void)

void FUN_14790fbf8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = FUN_147508a86();
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 == 0) {
LAB_14790fc4d:
    if (param_3 != 0) {
LAB_14790fca6:
      FUN_14790f17a(param_1,param_2,param_3);
      goto LAB_14790fcb4;
    }
  }
  else {
    lVar2 = FUN_145a6af0a();
    if ((((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)) || (*(longlong *)(param_1 + 0xc0) == 0)) goto LAB_14790fc4d;
    lVar3 = *(longlong *)(param_1 + 0x80);
    bVar4 = true;
    if (lVar3 != 0) {
      lVar2 = FUN_1402e44f4();
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        bVar4 = *(longlong *)(param_1 + 0x80) == 0;
      }
    }
    if ((param_3 != 0) || (!bVar4)) goto LAB_14790fca6;
  }
  FUN_14790f96e(param_1,param_2);
LAB_14790fcb4:
  lVar3 = FUN_147508a86(param_1);
  if (lVar1 == lVar3) {
    return;
  }
  FUN_14790fb70(param_1,lVar1);
  return;
}



// FUNCTION 14790fce6 FUN_14790fce6 body=202 status=ok
// SIG undefined FUN_14790fce6(void)

void FUN_14790fce6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14790f85a(param_1 + 10,(int)param_1[4]);
  uVar1 = FUN_140721bac(param_3);
  (**(code **)(*param_1 + 0x108))(param_1,local_28);
  lVar2 = FUN_1478defb4(uVar1);
  if ((lVar2 != 0) && (iVar3 = (int)param_1[6], 0 < iVar3)) {
    lVar4 = 0;
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x58)) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar5) ==
              *(longlong *)(param_1[5] + lVar4 * 8)) {
            *(undefined8 *)(param_1[10] + lVar4 * 8) =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x10 + lVar5);
            iVar3 = (int)param_1[6];
            break;
          }
          lVar5 = lVar5 + 0x18;
        } while ((longlong)*(int *)(lVar2 + 0x58) * 0x18 != lVar5);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14790fdb2 FUN_14790fdb2 body=62 status=ok
// SIG undefined FUN_14790fdb2(void)

byte FUN_14790fdb2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = FUN_14021165e(uVar3);
  bVar4 = (byte)uVar3;
  if (lVar2 != 0) {
    lVar1 = FUN_14792daf8(lVar2,param_2);
    bVar4 = lVar1 == 0;
  }
  return lVar2 == 0 | bVar4 & 1;
}



// FUNCTION 14790fdf8 FUN_14790fdf8 body=137 status=ok
// SIG undefined FUN_14790fdf8(void)

void FUN_14790fdf8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_28 = 1;
    local_18 = *(undefined4 *)(param_2 + 0x20);
    local_14 = *(undefined4 *)(param_2 + 0x24);
    local_10 = *(undefined4 *)(param_2 + 0x28);
    local_20 = *(undefined4 *)(param_2 + 0x14);
    local_24 = *(undefined4 *)(param_1 + 0xb4);
    local_38 = *(longlong *)(param_1 + 0xb8);
    FUN_14474897c(param_1 + 0x28,&local_38);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790fe82 FUN_14790fe82 body=288 status=ok
// SIG undefined FUN_14790fe82(void)

void FUN_14790fe82(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar2 = *param_2;
    *param_2 = *(longlong *)(param_1 + 0xb8);
    FUN_144717630(param_2 + 4,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x6a0));
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
    FUN_1447139fe(param_1 + 0x28,param_2);
    *param_2 = lVar2;
    FUN_144717630(param_2 + 4,*(undefined8 *)(lVar2 + 0x6a0));
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    cVar3 = FUN_144729dda(lVar2 + 0x30);
    if ((((cVar3 != '\0') && (*(longlong *)(lVar2 + 0x48) != 0)) && (0 < *(int *)(lVar2 + 8))) &&
       (((int)param_2[5] == *(int *)(param_1 + 0x40) && ((*(byte *)(param_1 + 0xb0) & 1) != 0)))) {
      FUN_1474ff774(param_2 + 4,param_1 + 0x38);
      FUN_140e4869c(param_2 + 7,param_1 + 0x50);
      FUN_140e486fa(param_2 + 0xb,param_1 + 0x70);
      return;
    }
  }
  if ((char)param_2[0x13] == '\x01') {
    FUN_142400d60(param_2[4],(int)param_2[5]);
    return;
  }
  FUN_1448859f0(param_2 + 4,param_2[6]);
  return;
}



// FUNCTION 14790ffa2 FUN_14790ffa2 body=211 status=ok
// SIG undefined FUN_14790ffa2(void)

void FUN_14790ffa2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147910076(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147910076 FUN_147910076 body=256 status=ok
// SIG undefined FUN_147910076(void)

undefined8 FUN_147910076(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbe38 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbe38 = FUN_140002ddd(FUN_1463a574e,uVar2,L"AnimNode_LinkedInputPose");
  }
  local_48 = *(undefined8 *)(DAT_14cacbe38 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479101a4 FUN_1479101a4 body=201 status=ok
// SIG undefined FUN_1479101a4(void)

void FUN_1479101a4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14791026e(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14791026e FUN_14791026e body=256 status=ok
// SIG undefined FUN_14791026e(void)

undefined8 FUN_14791026e(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbe68 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar2,L"AnimNode_Root");
  }
  local_48 = *(undefined8 *)(DAT_14cacbe68 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147910370 FUN_147910370 body=345 status=ok
// SIG undefined FUN_147910370(void)

void FUN_147910370(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1479104ca(param_2,&local_40);
  FUN_1400021e4(param_1 + 0x28,&local_60);
  puVar4 = local_60;
  if (local_58 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,&DAT_14a7b7b20,puVar4);
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar2);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_147907268(param_2,*(undefined4 *)(param_1 + 0x30));
  _Src = local_40;
  if (lVar3 != 0) {
    local_70 = (void *)0x0;
    local_68 = local_38;
    if ((longlong)local_38 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_38,0);
      memcpy(local_70,_Src,(longlong)local_38 * 2);
    }
    FUN_147906d4c(lVar3,&local_70,0);
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,lVar3);
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479104ca FUN_1479104ca body=256 status=ok
// SIG undefined FUN_1479104ca(void)

undefined8 FUN_1479104ca(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbe80 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbe80 = FUN_140002ddd(FUN_1463a58ad,uVar2,L"AnimNode_SaveCachedPose");
  }
  local_48 = *(undefined8 *)(DAT_14cacbe80 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479105cc FUN_1479105cc body=62 status=ok
// SIG undefined FUN_1479105cc(void)

void FUN_1479105cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2c60);
  if (*(longlong *)(param_1 + 0x2c60) == 0) {
    lVar1 = param_1;
  }
  FUN_14791fd9b(lVar1,*(undefined4 *)(param_1 + 0x2c68));
  if (*(longlong *)(param_1 + 0x2c60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147910626 FUN_147910626 body=414 status=ok
// SIG undefined FUN_147910626(void)

void FUN_147910626(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1479107c6(param_2,&local_50);
  lVar3 = (**(code **)(*param_1 + 0x198))(param_1);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  if (lVar3 == 0) {
    FUN_140002266(&local_60,L"(\'%s\' Play Time: %.3f)",L"NULL",(double)fVar1);
    iVar2 = local_58 + -1;
    if (local_58 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_50,local_60,iVar2);
    local_70 = local_60;
  }
  else {
    local_60 = *(undefined2 **)(lVar3 + 0x18);
    FUN_1400021e4(&local_60,&local_70);
    puVar4 = local_70;
    if (local_68 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_60,L"(\'%s\' Play Time: %.3f)",puVar4,(double)fVar1);
    iVar2 = local_58 + -1;
    if (local_58 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_50,local_60,iVar2);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_80 = (void *)0x0;
  local_78 = local_48;
  if ((longlong)local_48 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_48,0);
    memcpy(local_80,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_80,1);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479107c6 FUN_1479107c6 body=256 status=ok
// SIG undefined FUN_1479107c6(void)

undefined8 FUN_1479107c6(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbea0 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbea0 = FUN_140002ddd(FUN_1463a5943,uVar2,L"AnimNode_SequencePlayerBase");
  }
  local_48 = *(undefined8 *)(DAT_14cacbea0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479108c8 FUN_1479108c8 body=49 status=ok
// SIG undefined FUN_1479108c8(void)

undefined1 FUN_1479108c8(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return 1;
}



// FUNCTION 1479108fa FUN_1479108fa body=438 status=ok
// SIG undefined FUN_1479108fa(void)

bool FUN_1479108fa(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc0a4) && (FUN_144b3d300(&DAT_14cacc0a4), DAT_14cacc0a4 == -1)) {
    DAT_14cacc098 = 0;
    DAT_14cacc0a0 = -1;
    _Init_thread_footer(&DAT_14cacc0a4);
  }
  if (DAT_14cacc0a0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc0b0) && (FUN_144b3d300(), DAT_14cacc0b0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc0a8,"bLoopAnimation",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc0a8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc0a0 = -1;
      DAT_14cacc098 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc0a0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc0a8);
      DAT_14cacc098 = uVar2;
    }
  }
  local_28 = DAT_14cacc0a0;
  local_30 = DAT_14cacc098;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined1 *)0x0;
}



// FUNCTION 147910ab8 FUN_147910ab8 body=425 status=ok
// SIG undefined FUN_147910ab8(void)

void FUN_147910ab8(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc0c4) && (FUN_144b3d300(&DAT_14cacc0c4), DAT_14cacc0c4 == -1)) {
    DAT_14cacc0b8 = 0;
    DAT_14cacc0c0 = -1;
    _Init_thread_footer(&DAT_14cacc0c4);
  }
  if (DAT_14cacc0c0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc0d0) && (FUN_144b3d300(), DAT_14cacc0d0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc0c8,"PlayRateBasis",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc0c8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc0c0 = -1;
      DAT_14cacc0b8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc0c0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc0c8);
      DAT_14cacc0b8 = uVar2;
    }
  }
  local_20 = DAT_14cacc0c0;
  local_28 = DAT_14cacc0b8;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(*puVar1);
  }
  return;
}



// FUNCTION 147910c62 FUN_147910c62 body=425 status=ok
// SIG undefined FUN_147910c62(void)

void FUN_147910c62(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc0e4) && (FUN_144b3d300(&DAT_14cacc0e4), DAT_14cacc0e4 == -1)) {
    DAT_14cacc0d8 = 0;
    DAT_14cacc0e0 = -1;
    _Init_thread_footer(&DAT_14cacc0e4);
  }
  if (DAT_14cacc0e0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc0f0) && (FUN_144b3d300(), DAT_14cacc0f0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc0e8,"PlayRate",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc0e8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc0e0 = -1;
      DAT_14cacc0d8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc0e0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc0e8);
      DAT_14cacc0d8 = uVar2;
    }
  }
  local_20 = DAT_14cacc0e0;
  local_28 = DAT_14cacc0d8;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(*puVar1);
  }
  return;
}



// FUNCTION 147910e0c FUN_147910e0c body=421 status=ok
// SIG undefined FUN_147910e0c(void)

void FUN_147910e0c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc104) && (FUN_144b3d300(&DAT_14cacc104), DAT_14cacc104 == -1)) {
    DAT_14cacc0f8 = 0;
    DAT_14cacc100 = -1;
    _Init_thread_footer(&DAT_14cacc104);
  }
  if (DAT_14cacc100 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc110) && (FUN_144b3d300(), DAT_14cacc110 == -1)) {
      FUN_1446ddc76(&DAT_14cacc108,"PlayRateScaleBiasClampConstants",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar1 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar1,L"AnimNode_SequencePlayer");
    }
    uVar1 = DAT_14cacc108;
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cacc100 = -1;
      DAT_14cacc0f8 = uVar1;
    }
    else {
      if (*plVar2 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)plVar2[1];
      }
      DAT_14cacc100 = (**(code **)(*plVar2 + 0x130))(plVar2,DAT_14cacbeb8,DAT_14cacc108);
      DAT_14cacc0f8 = uVar1;
    }
  }
  local_20 = DAT_14cacc100;
  local_28 = DAT_14cacc0f8;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147910fb2 FUN_147910fb2 body=425 status=ok
// SIG undefined FUN_147910fb2(void)

void FUN_147910fb2(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc124) && (FUN_144b3d300(&DAT_14cacc124), DAT_14cacc124 == -1)) {
    DAT_14cacc118 = 0;
    DAT_14cacc120 = -1;
    _Init_thread_footer(&DAT_14cacc124);
  }
  if (DAT_14cacc120 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc130) && (FUN_144b3d300(), DAT_14cacc130 == -1)) {
      FUN_1446ddc76(&DAT_14cacc128,"StartPosition",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc128;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc120 = -1;
      DAT_14cacc118 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc120 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc128);
      DAT_14cacc118 = uVar2;
    }
  }
  local_20 = DAT_14cacc120;
  local_28 = DAT_14cacc118;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(*puVar1);
  }
  return;
}



// FUNCTION 14791115c FUN_14791115c body=423 status=ok
// SIG undefined FUN_14791115c(void)

undefined1 FUN_14791115c(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc144) && (FUN_144b3d300(&DAT_14cacc144), DAT_14cacc144 == -1)) {
    DAT_14cacc138 = 0;
    DAT_14cacc140 = -1;
    _Init_thread_footer(&DAT_14cacc144);
  }
  if (DAT_14cacc140 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc150) && (FUN_144b3d300(), DAT_14cacc150 == -1)) {
      FUN_1446ddc76(&DAT_14cacc148,"bLoopAnimation",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc148;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc140 = -1;
      DAT_14cacc138 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc140 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc148);
      DAT_14cacc138 = uVar2;
    }
  }
  local_20 = DAT_14cacc140;
  local_28 = DAT_14cacc138;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 147911304 FUN_147911304 body=423 status=ok
// SIG undefined FUN_147911304(void)

undefined1 FUN_147911304(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc164) && (FUN_144b3d300(&DAT_14cacc164), DAT_14cacc164 == -1)) {
    DAT_14cacc158 = 0;
    DAT_14cacc160 = -1;
    _Init_thread_footer(&DAT_14cacc164);
  }
  if (DAT_14cacc160 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc170) && (FUN_144b3d300(), DAT_14cacc170 == -1)) {
      FUN_1446ddc76(&DAT_14cacc168,"bStartFromMatchingPose",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc168;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc160 = -1;
      DAT_14cacc158 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc160 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc168);
      DAT_14cacc158 = uVar2;
    }
  }
  local_20 = DAT_14cacc160;
  local_28 = DAT_14cacc158;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 1479114ac FUN_1479114ac body=435 status=ok
// SIG undefined FUN_1479114ac(void)

undefined8 * FUN_1479114ac(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc184) && (FUN_144b3d300(&DAT_14cacc184), DAT_14cacc184 == -1)) {
    DAT_14cacc178 = 0;
    DAT_14cacc180 = -1;
    _Init_thread_footer(&DAT_14cacc184);
  }
  if (DAT_14cacc180 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc190) && (FUN_144b3d300(), DAT_14cacc190 == -1)) {
      FUN_1446ddc76(&DAT_14cacc188,"GroupName",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc188;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc180 = -1;
      DAT_14cacc178 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc180 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc188);
      DAT_14cacc178 = uVar2;
    }
  }
  local_28 = DAT_14cacc180;
  local_30 = DAT_14cacc178;
  puVar1 = (undefined8 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  *param_2 = *puVar1;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147911660 FUN_147911660 body=424 status=ok
// SIG undefined FUN_147911660(void)

undefined1 FUN_147911660(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc1a4) && (FUN_144b3d300(&DAT_14cacc1a4), DAT_14cacc1a4 == -1)) {
    DAT_14cacc198 = 0;
    DAT_14cacc1a0 = -1;
    _Init_thread_footer(&DAT_14cacc1a4);
  }
  if (DAT_14cacc1a0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc1b0) && (FUN_144b3d300(), DAT_14cacc1b0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc1a8,"GroupRole",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc1a8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc1a0 = -1;
      DAT_14cacc198 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc1a0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc1a8);
      DAT_14cacc198 = uVar2;
    }
  }
  local_20 = DAT_14cacc1a0;
  local_28 = DAT_14cacc198;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 14791180a FUN_14791180a body=423 status=ok
// SIG undefined FUN_14791180a(void)

undefined1 FUN_14791180a(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc1c4) && (FUN_144b3d300(&DAT_14cacc1c4), DAT_14cacc1c4 == -1)) {
    DAT_14cacc1b8 = 0;
    DAT_14cacc1c0 = -1;
    _Init_thread_footer(&DAT_14cacc1c4);
  }
  if (DAT_14cacc1c0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc1d0) && (FUN_144b3d300(), DAT_14cacc1d0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc1c8,"Method",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc1c8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc1c0 = -1;
      DAT_14cacc1b8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc1c0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc1c8);
      DAT_14cacc1b8 = uVar2;
    }
  }
  local_20 = DAT_14cacc1c0;
  local_28 = DAT_14cacc1b8;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 1479119b2 FUN_1479119b2 body=423 status=ok
// SIG undefined FUN_1479119b2(void)

undefined1 FUN_1479119b2(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc1e4) && (FUN_144b3d300(&DAT_14cacc1e4), DAT_14cacc1e4 == -1)) {
    DAT_14cacc1d8 = 0;
    DAT_14cacc1e0 = -1;
    _Init_thread_footer(&DAT_14cacc1e4);
  }
  if (DAT_14cacc1e0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc1f0) && (FUN_144b3d300(), DAT_14cacc1f0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc1e8,"bIgnoreForRelevancyTest",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc1e8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc1e0 = -1;
      DAT_14cacc1d8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc1e0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc1e8);
      DAT_14cacc1d8 = uVar2;
    }
  }
  local_20 = DAT_14cacc1e0;
  local_28 = DAT_14cacc1d8;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 147911b5a FUN_147911b5a body=440 status=ok
// SIG undefined FUN_147911b5a(void)

bool FUN_147911b5a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc204) && (FUN_144b3d300(&DAT_14cacc204), DAT_14cacc204 == -1)) {
    DAT_14cacc1f8 = 0;
    DAT_14cacc200 = -1;
    _Init_thread_footer(&DAT_14cacc204);
  }
  if (DAT_14cacc200 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc210) && (FUN_144b3d300(), DAT_14cacc210 == -1)) {
      FUN_1446ddc76(&DAT_14cacc208,"GroupName",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc208;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc200 = -1;
      DAT_14cacc1f8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc200 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc208);
      DAT_14cacc1f8 = uVar2;
    }
  }
  local_28 = DAT_14cacc200;
  local_30 = DAT_14cacc1f8;
  puVar1 = (undefined8 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined8 *)0x0;
}



// FUNCTION 147911d14 FUN_147911d14 body=439 status=ok
// SIG undefined FUN_147911d14(void)

bool FUN_147911d14(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc224) && (FUN_144b3d300(&DAT_14cacc224), DAT_14cacc224 == -1)) {
    DAT_14cacc218 = 0;
    DAT_14cacc220 = -1;
    _Init_thread_footer(&DAT_14cacc224);
  }
  if (DAT_14cacc220 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc230) && (FUN_144b3d300(), DAT_14cacc230 == -1)) {
      FUN_1446ddc76(&DAT_14cacc228,"GroupRole",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc228;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc220 = -1;
      DAT_14cacc218 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc220 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc228);
      DAT_14cacc218 = uVar2;
    }
  }
  local_28 = DAT_14cacc220;
  local_30 = DAT_14cacc218;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined1 *)0x0;
}



// FUNCTION 147911ecc FUN_147911ecc body=438 status=ok
// SIG undefined FUN_147911ecc(void)

bool FUN_147911ecc(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc244) && (FUN_144b3d300(&DAT_14cacc244), DAT_14cacc244 == -1)) {
    DAT_14cacc238 = 0;
    DAT_14cacc240 = -1;
    _Init_thread_footer(&DAT_14cacc244);
  }
  if (DAT_14cacc240 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc250) && (FUN_144b3d300(), DAT_14cacc250 == -1)) {
      FUN_1446ddc76(&DAT_14cacc248,"Method",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc248;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc240 = -1;
      DAT_14cacc238 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc240 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc248);
      DAT_14cacc238 = uVar2;
    }
  }
  local_28 = DAT_14cacc240;
  local_30 = DAT_14cacc238;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined1 *)0x0;
}



// FUNCTION 147912084 FUN_147912084 body=438 status=ok
// SIG undefined FUN_147912084(void)

bool FUN_147912084(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc264) && (FUN_144b3d300(&DAT_14cacc264), DAT_14cacc264 == -1)) {
    DAT_14cacc258 = 0;
    DAT_14cacc260 = -1;
    _Init_thread_footer(&DAT_14cacc264);
  }
  if (DAT_14cacc260 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc270) && (FUN_144b3d300(), DAT_14cacc270 == -1)) {
      FUN_1446ddc76(&DAT_14cacc268,"bIgnoreForRelevancyTest",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc268;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc260 = -1;
      DAT_14cacc258 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc260 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc268);
      DAT_14cacc258 = uVar2;
    }
  }
  local_28 = DAT_14cacc260;
  local_30 = DAT_14cacc258;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined1 *)0x0;
}



// FUNCTION 14791223c FUN_14791223c body=449 status=ok
// SIG undefined FUN_14791223c(void)

bool FUN_14791223c(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc284) && (FUN_144b3d300(&DAT_14cacc284), DAT_14cacc284 == -1)) {
    DAT_14cacc278 = 0;
    DAT_14cacc280 = -1;
    _Init_thread_footer(&DAT_14cacc284);
  }
  if (DAT_14cacc280 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc290) && (FUN_144b3d300(), DAT_14cacc290 == -1)) {
      FUN_1446ddc76(&DAT_14cacc288,"StartPosition",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc288;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc280 = -1;
      DAT_14cacc278 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc280 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc288);
      DAT_14cacc278 = uVar2;
    }
  }
  local_38 = DAT_14cacc280;
  local_40 = DAT_14cacc278;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined4 *)0x0;
}



// FUNCTION 1479123fe FUN_1479123fe body=449 status=ok
// SIG undefined FUN_1479123fe(void)

bool FUN_1479123fe(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc2a4) && (FUN_144b3d300(&DAT_14cacc2a4), DAT_14cacc2a4 == -1)) {
    DAT_14cacc298 = 0;
    DAT_14cacc2a0 = -1;
    _Init_thread_footer(&DAT_14cacc2a4);
  }
  if (DAT_14cacc2a0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc2b0) && (FUN_144b3d300(), DAT_14cacc2b0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc2a8,"PlayRate",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc2a8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc2a0 = -1;
      DAT_14cacc298 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc2a0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc2a8);
      DAT_14cacc298 = uVar2;
    }
  }
  local_38 = DAT_14cacc2a0;
  local_40 = DAT_14cacc298;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined4 *)0x0;
}



// FUNCTION 1479125c0 FUN_1479125c0 body=449 status=ok
// SIG undefined FUN_1479125c0(void)

bool FUN_1479125c0(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc2c4) && (FUN_144b3d300(&DAT_14cacc2c4), DAT_14cacc2c4 == -1)) {
    DAT_14cacc2b8 = 0;
    DAT_14cacc2c0 = -1;
    _Init_thread_footer(&DAT_14cacc2c4);
  }
  if (DAT_14cacc2c0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc2d0) && (FUN_144b3d300(), DAT_14cacc2d0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc2c8,"PlayRateBasis",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbeb8 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbeb8 = FUN_140002ddd(FUN_1463a59d9,uVar2,L"AnimNode_SequencePlayer");
    }
    uVar2 = DAT_14cacc2c8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc2c0 = -1;
      DAT_14cacc2b8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc2c0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbeb8,DAT_14cacc2c8);
      DAT_14cacc2b8 = uVar2;
    }
  }
  local_38 = DAT_14cacc2c0;
  local_40 = DAT_14cacc2b8;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1 != (undefined4 *)0x0;
}



// FUNCTION 1479127a0 FUN_1479127a0 body=161 status=ok
// SIG undefined FUN_1479127a0(void)

undefined8 * FUN_1479127a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0x300000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  FUN_1404163bc(param_1 + 0x11);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  return param_1;
}



// FUNCTION 147912842 FUN_147912842 body=329 status=ok
// SIG undefined FUN_147912842(void)

void FUN_147912842(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_3 + 4) != -1) && (*param_2 != 0)) &&
     (plVar3 = *(longlong **)(*param_2 + 0x138), plVar3 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    *(uint *)(param_1 + 0x28) = ~*(uint *)(param_3 + 4) + *(int *)(lVar4 + 8);
    local_68 = (undefined4)*param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = 1;
    local_54 = 0xffffffffffffffff;
    FUN_140320438(param_1 + 0x20);
    local_70 = param_2;
    if ((*param_2 != 0) && (0 < *(int *)(param_3 + 0x28))) {
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_3 + 0x20) + lVar4 * 4);
        if (uVar1 == 0xffffffff) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(*local_70 + 0x130);
          plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
          lVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
          lVar7 = *(int *)(*(longlong *)
                            (*plVar5 + (longlong)(int)(~uVar1 + *(int *)(lVar6 + 8)) * 8) + 0x44) +
                  lVar7;
        }
        iVar2 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
          FUN_147920520((longlong *)(param_1 + 0x48),iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8) = lVar7;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_3 + 0x28));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14791298c FUN_14791298c body=76 status=ok
// SIG undefined FUN_14791298c(void)

void FUN_14791298c(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe08 = FUN_140002ddd(FUN_1463a568e,uVar1,L"AnimNode_LinkedAnimGraph");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbe08);
  return;
}



// FUNCTION 1479129d8 FUN_1479129d8 body=76 status=ok
// SIG undefined FUN_1479129d8(void)

void FUN_1479129d8(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe20 = FUN_140002ddd(FUN_1463a56ee,uVar1,L"AnimNode_LinkedAnimLayer");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbe20);
  return;
}



// FUNCTION 147912a24 FUN_147912a24 body=222 status=ok
// SIG undefined FUN_147912a24(void)

undefined8 * FUN_147912a24(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a42d900;
  local_30 = plVar4 + 2;
  plVar4[2] = (longlong)&PTR_FUN_14a42d920;
  uVar3 = DAT_14cacb914;
  local_28 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_1447d2a40(param_1,param_2,&local_30,DAT_14cacb914);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1447d2a40(param_1,param_2,&local_30,uVar3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147912b04 FUN_147912b04 body=391 status=ok
// SIG undefined FUN_147912b04(void)

void FUN_147912b04(undefined8 param_1,undefined1 *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [32];
  longlong local_c0;
  void *local_a8;
  int local_a0;
  undefined1 local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_3 + 0x28) != -1) {
    iVar2 = *(int *)(param_3 + 0x50);
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x48) + lVar7 * 8);
        if ((*(char *)(lVar4 + 0x99) == '\0') || (0 < *(int *)(lVar4 + 0x94))) {
          if ((param_4 == '\0') || (puVar3 = param_2, *(char *)(lVar4 + 0x98) != '\0')) {
            puVar3 = (undefined1 *)
                     FUN_140c12f06(param_1,*(undefined4 *)
                                            (param_3 + 0x30 +
                                            (ulonglong)(*(char *)(lVar4 + 0x98) == '\0') * 4),
                                   param_2);
          }
          FUN_147912c8c(lVar4,puVar3);
          iVar2 = *(int *)(param_3 + 0x50);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < iVar2);
    }
    FUN_144ade07e(local_e0,param_2,0);
    FUN_1447139fe(param_3 + 0x20);
    uVar1 = *(uint *)(param_2 + 0x28);
    if ((ulonglong)uVar1 != 0) {
      lVar7 = 0;
      do {
        puVar5 = (undefined8 *)(local_c0 + lVar7);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar7);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        lVar7 = lVar7 + 0x60;
      } while ((ulonglong)uVar1 * 0x60 != lVar7);
    }
    if (local_e0 != param_2) {
      *(int *)(param_2 + 0x40) = local_a0;
      if (local_a0 == 0 && *(int *)(param_2 + 0x44) == 0) {
        *(undefined4 *)(param_2 + 0x44) = 0;
      }
      else {
        FUN_14471726c(param_2 + 0x38,local_a0);
        if (local_a0 != 0) {
          memcpy(*(void **)(param_2 + 0x38),local_a8,(longlong)local_a0 << 4);
        }
      }
    }
    param_2[0x48] = local_98;
    FUN_1447166b4();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147912c8c FUN_147912c8c body=76 status=ok
// SIG undefined FUN_147912c8c(void)

void FUN_147912c8c(longlong param_1,longlong param_2)

{
  FUN_1474ff7d8(param_1 + 0x18,param_2 + 0x20);
  FUN_1433eddcc(param_1 + 0x18);
  FUN_140101796(param_1 + 0x30,param_2 + 0x38);
  FUN_14495568a(param_1 + 0x50,param_2 + 0x58);
  return;
}



// FUNCTION 147912cd8 FUN_147912cd8 body=256 status=ok
// SIG undefined FUN_147912cd8(void)

undefined8 FUN_147912cd8(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbf18 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar2,L"AnimNode_StateMachine");
  }
  local_48 = *(undefined8 *)(DAT_14cacbf18 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147912dda FUN_147912dda body=76 status=ok
// SIG undefined FUN_147912dda(void)

void FUN_147912dda(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe08 = FUN_140002ddd(FUN_1463a568e,uVar1,L"AnimNode_LinkedAnimGraph");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbe08);
  return;
}



// FUNCTION 147912e26 FUN_147912e26 body=75 status=ok
// SIG undefined FUN_147912e26(void)

void FUN_147912e26(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_147920738(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 0x50),(void *)*param_1,(ulonglong)uVar1 * 0x50);
  FUN_147902516(*param_1,param_2);
  return;
}



// FUNCTION 147912e72 FUN_147912e72 body=41 status=ok
// SIG undefined FUN_147912e72(void)

void FUN_147912e72(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + (longlong)iVar1 * 0x78);
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 147912e9c FUN_147912e9c body=271 status=ok
// SIG undefined FUN_147912e9c(void)

undefined4 FUN_147912e9c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined **)CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 8));
  if (DAT_14cacbe68 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar2,L"AnimNode_Root");
  }
  uVar1 = FUN_1468ec2ac(&local_50,*(undefined8 *)(DAT_14cacbe68 + 0x18));
  if ((char)uVar1 != '\0') {
    local_48 = 0;
    local_40 = 0;
    local_50 = &PTR_FUN_14a7b77a0;
    local_38 = 0;
    uStack_30 = 0xffffffff;
    if (DAT_14cacbe68 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar2,L"AnimNode_Root");
    }
    FUN_14483b62e(DAT_14cacbe68,param_3,&local_50,0);
    *(undefined2 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 8) = local_48;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x1c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x20) = uStack_30;
    *(undefined4 *)(param_1 + 0x24) = uStack_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147912fac FUN_147912fac body=423 status=ok
// SIG undefined FUN_147912fac(void)

undefined4 FUN_147912fac(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc2e4) && (FUN_144b3d300(&DAT_14cacc2e4), DAT_14cacc2e4 == -1)) {
    DAT_14cacc2d8 = 0;
    DAT_14cacc2e0 = -1;
    _Init_thread_footer(&DAT_14cacc2e4);
  }
  if (DAT_14cacc2e0 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc2f0) && (FUN_144b3d300(), DAT_14cacc2f0 == -1)) {
      FUN_1446ddc76(&DAT_14cacc2e8,"StateIndex",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbf50 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar2,L"AnimNode_StateResult");
    }
    uVar2 = DAT_14cacc2e8;
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cacc2e0 = -1;
      DAT_14cacc2d8 = uVar2;
    }
    else {
      if (*plVar3 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar3[1];
      }
      DAT_14cacc2e0 = (**(code **)(*plVar3 + 0x130))(plVar3,DAT_14cacbf50,DAT_14cacc2e8);
      DAT_14cacc2d8 = uVar2;
    }
  }
  local_20 = DAT_14cacc2e0;
  local_28 = DAT_14cacc2d8;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *puVar1;
}



// FUNCTION 147913182 FUN_147913182 body=188 status=ok
// SIG undefined FUN_147913182(void)

void FUN_147913182(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar2 = *param_2;
  if ((((*(short *)(param_1 + 0xa8) != -1) && (*(longlong *)(param_1 + 0xa0) != -1)) &&
      (*(short *)(param_1 + 0xa8) == *(short *)(lVar2 + 0x5d8))) &&
     (*(longlong *)(param_1 + 0xa0) == *(longlong *)(lVar2 + 0x5d0))) {
    return;
  }
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(lVar2 + 0x5d8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0x5d0);
  *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(lVar2 + 0x5da);
  bVar1 = *(byte *)(param_1 + 0x99);
  uVar4 = (uint)bVar1;
  if (bVar1 != 1) {
    if (bVar1 != 2) goto LAB_147913213;
    uVar4 = 1;
    if (1 < (int)*(uint *)(param_1 + 0x90)) {
      uVar4 = *(uint *)(param_1 + 0x90);
    }
  }
  *(uint *)(param_1 + 0x94) = uVar4;
LAB_147913213:
  uVar3 = *(undefined8 *)(*param_2 + 0x6a0);
  FUN_1478ff6b8(param_1 + 0x18,uVar3);
  FUN_1478e2ea2(param_1 + 0x30,uVar3);
  return;
}



// FUNCTION 1479132c0 FUN_1479132c0 body=88 status=ok
// SIG undefined FUN_1479132c0(void)

void FUN_1479132c0(longlong param_1,longlong param_2)

{
  FUN_1474ff774(param_2 + 0x20,param_1 + 0x18);
  FUN_140e4869c(param_2 + 0x38,param_1 + 0x30);
  FUN_140e486fa(param_2 + 0x58,param_1 + 0x50);
  if ((*(char *)(param_1 + 0x99) != '\0') && (0 < *(int *)(param_1 + 0x94))) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
  }
  return;
}



// FUNCTION 147913318 FUN_147913318 body=247 status=ok
// SIG undefined FUN_147913318(void)

void FUN_147913318(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147913410(param_2,&local_38);
  FUN_140002266(&local_48,L"(Cached Frames Remaining: %i)",*(undefined4 *)(param_1 + 0x94));
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_58 = (void *)0x0;
  local_50 = local_30;
  if ((longlong)local_30 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_30,0);
    memcpy(local_58,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_58,0);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147913410 FUN_147913410 body=256 status=ok
// SIG undefined FUN_147913410(void)

undefined8 FUN_147913410(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbf98 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbf98 = FUN_140002ddd(FUN_1463a5d85,uVar2,L"AnimNode_TransitionPoseEvaluator");
  }
  local_48 = *(undefined8 *)(DAT_14cacbf98 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14791351e FUN_14791351e body=176 status=ok
// SIG undefined FUN_14791351e(void)

void FUN_14791351e(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479135d0(param_2,&local_38);
  _Src = local_38;
  local_48 = (void *)0x0;
  local_40 = local_30;
  if ((longlong)local_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_48,0);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479135d0 FUN_1479135d0 body=256 status=ok
// SIG undefined FUN_1479135d0(void)

undefined8 FUN_1479135d0(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbfb0 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbfb0 = FUN_140002ddd(FUN_1463a5e1b,uVar2,L"AnimNode_TransitionResult");
  }
  local_48 = *(undefined8 *)(DAT_14cacbfb0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479136d2 FUN_1479136d2 body=296 status=ok
// SIG undefined FUN_1479136d2(void)

void FUN_1479136d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1479137fc(param_2,&local_38);
  FUN_1400021e4(param_1 + 0x28,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_48,&DAT_14a7b7b20,puVar2);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_68 = (void *)0x0;
  local_60 = local_30;
  if ((longlong)local_30 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_30,0);
    memcpy(local_68,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_68,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479137fc FUN_1479137fc body=256 status=ok
// SIG undefined FUN_1479137fc(void)

undefined8 FUN_1479137fc(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cacbfc8 == 0) {
    uVar2 = FUN_140002dac();
    DAT_14cacbfc8 = FUN_140002ddd(FUN_1463a5eb1,uVar2,L"AnimNode_UseCachedPose");
  }
  local_48 = *(undefined8 *)(DAT_14cacbfc8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147913908 FUN_147913908 body=104 status=ok
// SIG undefined FUN_147913908(void)

undefined8
FUN_147913908(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  FUN_14792e9b4(param_1 + 0x27,param_2,param_3,param_4,param_5,uVar1,0);
  return param_2;
}



// FUNCTION 147913974 FUN_147913974 body=45 status=ok
// SIG undefined FUN_147913974(void)

longlong FUN_147913974(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14591fa74(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479139a2 FUN_1479139a2 body=45 status=ok
// SIG undefined FUN_1479139a2(void)

longlong FUN_1479139a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14591fa74(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479139d0 FUN_1479139d0 body=45 status=ok
// SIG undefined FUN_1479139d0(void)

longlong FUN_1479139d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14591fa74(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479139fe FUN_1479139fe body=55 status=ok
// SIG undefined FUN_1479139fe(void)

void FUN_1479139fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbc68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbc68 = FUN_140002ddd(FUN_1463a5027,uVar1,L"AnimNode_ConvertComponentToLocalSpace");
  }
  return;
}



// FUNCTION 147913a36 FUN_147913a36 body=57 status=ok
// SIG undefined FUN_147913a36(void)

void FUN_147913a36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbc80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbc80 = FUN_140002ddd(FUN_1463a50bd,uVar1,L"AnimNode_ConvertLocalToComponentSpace");
  }
  return;
}



// FUNCTION 147913a74 FUN_147913a74 body=57 status=ok
// SIG undefined FUN_147913a74(void)

void FUN_147913a74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbc98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbc98 = FUN_140002ddd(FUN_1463a5153,uVar1,L"AnimNode_ApplyMeshSpaceAdditive");
  }
  return;
}



// FUNCTION 147913ab4 FUN_147913ab4 body=38 status=ok
// SIG undefined FUN_147913ab4(void)

undefined8 FUN_147913ab4(undefined8 param_1,int param_2)

{
  FUN_145928e3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147913ada FUN_147913ada body=55 status=ok
// SIG undefined FUN_147913ada(void)

void FUN_147913ada(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbcc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbcc8 = FUN_140002ddd(FUN_1463a52b1,uVar1,L"AnimNode_CustomProperty");
  }
  return;
}



// FUNCTION 147913b12 FUN_147913b12 body=42 status=ok
// SIG undefined FUN_147913b12(void)

undefined8 FUN_147913b12(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Animation/AnimNode_CustomProperty.h",0x59,
                L"Pure virtual not implemented (%s)",L"FAnimNode_CustomProperty::GetTargetClass");
  return 0;
}



// FUNCTION 147913b3c FUN_147913b3c body=38 status=ok
// SIG undefined FUN_147913b3c(void)

undefined8 FUN_147913b3c(undefined8 param_1,int param_2)

{
  FUN_147917206();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147913b62 FUN_147913b62 body=55 status=ok
// SIG undefined FUN_147913b62(void)

void FUN_147913b62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbce0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbce0 = FUN_140002ddd(FUN_1463a5349,uVar1,L"AnimNode_DeadBlending");
  }
  return;
}



// FUNCTION 147913b9a FUN_147913b9a body=45 status=ok
// SIG undefined FUN_147913b9a(void)

longlong FUN_147913b9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_147917206(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147913bda FUN_147913bda body=38 status=ok
// SIG undefined FUN_147913bda(void)

undefined8 FUN_147913bda(undefined8 param_1,int param_2)

{
  FUN_14791836e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147913c00 FUN_147913c00 body=55 status=ok
// SIG undefined FUN_147913c00(void)

void FUN_147913c00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe08 = FUN_140002ddd(FUN_1463a568e,uVar1,L"AnimNode_LinkedAnimGraph");
  }
  return;
}



// FUNCTION 147913c3c FUN_147913c3c body=72 status=ok
// SIG undefined FUN_147913c3c(void)

undefined8 FUN_147913c3c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((((lVar1 != 0) && (lVar2 = FUN_1402e44f4(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x80);
  }
  return 0;
}



// FUNCTION 147913c88 FUN_147913c88 body=55 status=ok
// SIG undefined FUN_147913c88(void)

void FUN_147913c88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar1,L"AnimNode_Root");
  }
  return;
}



// FUNCTION 147913cc0 FUN_147913cc0 body=55 status=ok
// SIG undefined FUN_147913cc0(void)

void FUN_147913cc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe80 = FUN_140002ddd(FUN_1463a58ad,uVar1,L"AnimNode_SaveCachedPose");
  }
  return;
}



// FUNCTION 147913cf8 FUN_147913cf8 body=38 status=ok
// SIG undefined FUN_147913cf8(void)

undefined8 FUN_147913cf8(undefined8 param_1,int param_2)

{
  FUN_14791aea4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147913d1e FUN_147913d1e body=55 status=ok
// SIG undefined FUN_147913d1e(void)

void FUN_147913d1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf98 = FUN_140002ddd(FUN_1463a5d85,uVar1,L"AnimNode_TransitionPoseEvaluator");
  }
  return;
}



// FUNCTION 147913d56 FUN_147913d56 body=55 status=ok
// SIG undefined FUN_147913d56(void)

void FUN_147913d56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbfb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbfb0 = FUN_140002ddd(FUN_1463a5e1b,uVar1,L"AnimNode_TransitionResult");
  }
  return;
}



// FUNCTION 147913d8e FUN_147913d8e body=55 status=ok
// SIG undefined FUN_147913d8e(void)

void FUN_147913d8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbfc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbfc8 = FUN_140002ddd(FUN_1463a5eb1,uVar1,L"AnimNode_UseCachedPose");
  }
  return;
}



// FUNCTION 147913dfa FUN_147913dfa body=63 status=ok
// SIG undefined FUN_147913dfa(void)

undefined1 FUN_147913dfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411a1ca6(param_2,param_3);
    param_3 = param_3 + 0x8b0;
    param_2 = param_2 + 0x8b0;
  }
  return 1;
}



// FUNCTION 147913e62 FUN_147913e62 body=59 status=ok
// SIG undefined FUN_147913e62(void)

undefined8 FUN_147913e62(longlong *param_1)

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



// FUNCTION 147913eae FUN_147913eae body=38 status=ok
// SIG undefined FUN_147913eae(void)

void FUN_147913eae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x8b0) == '\x01') {
    FUN_14064e066(param_2);
    *(undefined1 *)(param_2 + 0x8b0) = 0;
  }
  return;
}



// FUNCTION 147913f24 FUN_147913f24 body=111 status=ok
// SIG undefined FUN_147913f24(void)

undefined8 * FUN_147913f24(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_147913f94(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 147913f94 FUN_147913f94 body=89 status=ok
// SIG undefined FUN_147913f94(void)

void FUN_147913f94(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147913fee FUN_147913fee body=280 status=ok
// SIG undefined FUN_147913fee(void)

undefined8 * FUN_147913fee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1478da716(param_1,iVar1,0);
    FUN_1478da78c(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar3 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar1 << 3);
  }
  param_1[5] = param_2[5];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1463a1620(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 0xc);
  }
  uVar2 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 147914106 FUN_147914106 body=77 status=ok
// SIG undefined FUN_147914106(void)

undefined8 * FUN_147914106(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14791b2f6(param_1,iVar1,0);
    FUN_14052b3b1(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147914154 FUN_147914154 body=1110 status=ok
// SIG undefined FUN_147914154(void)

void FUN_147914154(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0xb10) = 0;
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FUN_1400020a8();
  }
  lVar13 = param_1 + 0x950;
  lVar10 = param_1 + 0xae0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar10;
  if (*(int *)(param_1 + 0xaf0) != 0) {
    FUN_144a81a4c(&local_60);
  }
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_88 = lVar13;
  if (iStack_4c < *(int *)(local_58 + 0x10)) {
    do {
      lVar9 = *(longlong *)(local_88 + 0x180);
      if (*(longlong *)(local_88 + 0x180) == 0) {
        lVar9 = local_88;
      }
      if (*(longlong *)(lVar9 + 0x48 + (longlong)iStack_6c * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_144a81a4c(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xad8) = 0;
  if (*(int *)(param_1 + 0xadc) != 0) {
    FUN_144729344(lVar13,0);
  }
  *(undefined8 *)(param_1 + 0xaf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  if (0x20 < *(uint *)(param_1 + 0xaf4)) {
    *(undefined4 *)(param_1 + 0xaf4) = 0x20;
    FUN_14008f53c(lVar10,0);
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x948) = 0;
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x910);
  iVar3 = *(int *)(param_1 + 0x920);
  if (iVar3 == 0) {
    uVar11 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x918);
    if (*(uint **)(param_1 + 0x918) == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar11) goto LAB_1479142e4;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar15 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0x900);
      if (*(longlong *)(param_1 + 0x900) == 0) {
        lVar13 = param_1;
      }
      lVar13 = lVar13 + (longlong)iVar4 * 0x120;
      lVar10 = *(longlong *)(lVar13 + 0x108);
      if (*(longlong *)(lVar13 + 0x108) == 0) {
        lVar10 = lVar13 + 8;
      }
      FUN_14474a06b(lVar10,*(undefined4 *)(lVar13 + 0x110));
      if (*(longlong *)(lVar13 + 0x108) != 0) {
        FUN_1400020a8();
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = *(uint **)(param_1 + 0x918);
      if (*(uint **)(param_1 + 0x918) == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = *(int *)(param_1 + 0x920);
      iVar4 = (int)uVar11;
      lVar13 = (longlong)iVar4;
      uVar5 = puVar8[lVar13] & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar8[lVar13 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) goto LAB_1479142e4;
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1479142e4:
  *(undefined4 *)(param_1 + 0x908) = 0;
  if (*(int *)(param_1 + 0x90c) != 0) {
    FUN_14472925c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x928) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x920) = 0;
  if (0x20 < *(uint *)(param_1 + 0x924)) {
    *(undefined4 *)(param_1 + 0x924) = 0x20;
    FUN_14008f53c(puVar1,0);
  }
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479145ac FUN_1479145ac body=61 status=ok
// SIG undefined FUN_1479145ac(void)

void FUN_1479145ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_14474a06b(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1479145ea FUN_1479145ea body=148 status=ok
// SIG undefined FUN_1479145ea(void)

void FUN_1479145ea(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x900);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x120);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x900,0,param_3,0x120);
    memmove(*(void **)((longlong)param_1 + 0x900),param_1,(longlong)param_2 * 0x120);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x900,param_2,param_3,0x120);
  return;
}



// FUNCTION 14791467e FUN_14791467e body=130 status=ok
// SIG undefined FUN_14791467e(void)

void FUN_14791467e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147914796 FUN_147914796 body=54 status=ok
// SIG undefined FUN_147914796(void)

undefined1 FUN_147914796(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1433e31aa(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1479147f4 FUN_1479147f4 body=59 status=ok
// SIG undefined FUN_1479147f4(void)

undefined8 FUN_1479147f4(longlong *param_1)

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



// FUNCTION 14791493a FUN_14791493a body=83 status=ok
// SIG undefined FUN_14791493a(void)

undefined1 FUN_14791493a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      FUN_1433e31aa(param_2 + -0x40,param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_147914a7a(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479149b6 FUN_1479149b6 body=59 status=ok
// SIG undefined FUN_1479149b6(void)

undefined8 FUN_1479149b6(longlong *param_1)

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



// FUNCTION 1479149fc FUN_1479149fc body=48 status=ok
// SIG undefined FUN_1479149fc(void)

void FUN_1479149fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a7b9fd0;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147914a7a FUN_147914a7a body=79 status=ok
// SIG undefined FUN_147914a7a(void)

undefined8 * FUN_147914a7a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147914aca(param_1,iVar1);
      FUN_147914b2c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147914aca FUN_147914aca body=98 status=ok
// SIG undefined FUN_147914aca(void)

void FUN_147914aca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147914b2c FUN_147914b2c body=82 status=ok
// SIG undefined FUN_147914b2c(void)

void FUN_147914b2c(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147914bba FUN_147914bba body=75 status=ok
// SIG undefined FUN_147914bba(void)

undefined8 FUN_147914bba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1478f9708();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147914c2e FUN_147914c2e body=59 status=ok
// SIG undefined FUN_147914c2e(void)

undefined8 FUN_147914c2e(longlong *param_1)

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



// FUNCTION 147914ccc FUN_147914ccc body=50 status=ok
// SIG undefined FUN_147914ccc(void)

void FUN_147914ccc(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_140eff75d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147914d92 FUN_147914d92 body=82 status=ok
// SIG undefined FUN_147914d92(void)

undefined8 FUN_147914d92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1433e31aa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147914e0c FUN_147914e0c body=59 status=ok
// SIG undefined FUN_147914e0c(void)

undefined8 FUN_147914e0c(longlong *param_1)

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



// FUNCTION 147914eac FUN_147914eac body=29 status=ok
// SIG undefined FUN_147914eac(void)

undefined8 FUN_147914eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147914f4a FUN_147914f4a body=59 status=ok
// SIG undefined FUN_147914f4a(void)

undefined8 FUN_147914f4a(longlong *param_1)

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



// FUNCTION 147915030 FUN_147915030 body=54 status=ok
// SIG undefined FUN_147915030(void)

undefined1 FUN_147915030(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14791512e(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14791508e FUN_14791508e body=59 status=ok
// SIG undefined FUN_14791508e(void)

undefined8 FUN_14791508e(longlong *param_1)

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



// FUNCTION 14791512e FUN_14791512e body=109 status=ok
// SIG undefined FUN_14791512e(void)

longlong * FUN_14791512e(longlong *param_1,longlong *param_2)

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
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 1479151ca FUN_1479151ca body=63 status=ok
// SIG undefined FUN_1479151ca(void)

undefined1 FUN_1479151ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479152f4(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 147915232 FUN_147915232 body=59 status=ok
// SIG undefined FUN_147915232(void)

undefined8 FUN_147915232(longlong *param_1)

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



// FUNCTION 14791527e FUN_14791527e body=40 status=ok
// SIG undefined FUN_14791527e(void)

void FUN_14791527e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_1478f61e0(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1479152f4 FUN_1479152f4 body=532 status=ok
// SIG undefined FUN_1479152f4(void)

longlong * FUN_1479152f4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *param_2;
    }
  }
  *param_1 = lVar8;
  FUN_1478fced8(param_1 + 1,param_2 + 1);
  FUN_1478fced8(param_1 + 3,param_2 + 3);
  FUN_1478fd040(param_1 + 5,param_2 + 5);
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  lVar8 = param_2[7];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar5 = param_2[8];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar6 = param_2[10];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(int *)(param_1 + 10) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(int *)(param_1 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 8) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  FUN_1478da7c8(param_1 + 0xc,param_2 + 0xc);
  *(short *)(param_1 + 0xe) = (short)param_2[0xe];
  FUN_147915508(param_1 + 0xf,param_2 + 0xf);
  FUN_14054c6c4(param_1 + 0x21,param_2 + 0x21);
  FUN_14054c6c4(param_1 + 0x23,param_2 + 0x23);
  param_1[0x25] = param_2[0x25];
  *(int *)(param_1 + 0x26) = (int)param_2[0x26];
  FUN_1417b5a8e(param_1 + 0x27,param_2 + 0x27);
  param_1[0x29] = param_2[0x29];
  lVar8 = param_2[0x2a];
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = param_2[0x2a];
    }
  }
  param_1[0x2a] = lVar8;
  lVar8 = param_2[0x2c];
  lVar5 = param_2[0x2d];
  lVar6 = param_2[0x2e];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = lVar8;
  param_1[0x2d] = lVar5;
  param_1[0x2e] = lVar6;
  *(int *)(param_1 + 0x2f) = (int)param_2[0x2f];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x184);
  lVar8 = param_2[0x31];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x18c);
  lVar5 = param_2[0x32];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x194);
  lVar6 = param_2[0x33];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x19c);
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar1;
  *(int *)(param_1 + 0x31) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar2;
  *(int *)(param_1 + 0x32) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar3;
  *(int *)(param_1 + 0x33) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar4;
  *(char *)(param_1 + 0x34) = (char)param_2[0x34];
  if (param_2 == param_1) goto LAB_14791545b;
  if ((char)param_2[0x35] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_2 + 0x1a4);
    uVar7 = 1;
LAB_1479154b7:
    *(undefined1 *)(param_1 + 0x35) = uVar7;
  }
  else if ((char)param_1[0x35] == '\x01') {
    uVar7 = 0;
    goto LAB_1479154b7;
  }
  if ((char)param_2[0x36] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  else if ((char)param_1[0x36] == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = 0;
  }
LAB_14791545b:
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  FUN_14791558a(param_1 + 0x37,param_2 + 0x37);
  param_1[0x39] = param_2[0x39];
  *(int *)(param_1 + 0x3a) = (int)param_2[0x3a];
  return param_1;
}



// FUNCTION 147915508 FUN_147915508 body=130 status=ok
// SIG undefined FUN_147915508(void)

undefined4 * FUN_147915508(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
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
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_144a67f5c(param_1 + 0xe,param_2 + 0xe);
  FUN_144a67f5c(param_1 + 0x12,param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_144a67f5c(param_1 + 0x1c,param_2 + 0x1c);
  FUN_144a67f5c(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 14791558a FUN_14791558a body=88 status=ok
// SIG undefined FUN_14791558a(void)

undefined8 * FUN_14791558a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479156cc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1479155e2 FUN_1479155e2 body=117 status=ok
// SIG undefined FUN_1479155e2(void)

void FUN_1479155e2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147915658 FUN_147915658 body=116 status=ok
// SIG undefined FUN_147915658(void)

undefined8 * FUN_147915658(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  *param_1 = &PTR_FUN_14a5c6de8;
  lVar1 = *(longlong *)(param_2 + 8);
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1479156cc FUN_1479156cc body=98 status=ok
// SIG undefined FUN_1479156cc(void)

void FUN_1479156cc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147915730 FUN_147915730 body=52 status=ok
// SIG undefined FUN_147915730(void)

void FUN_147915730(longlong *param_1)

{
  FUN_147915764();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147915764 FUN_147915764 body=337 status=ok
// SIG undefined FUN_147915764(void)

void FUN_147915764(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1448262fc(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479158b6 FUN_1479158b6 body=57 status=ok
// SIG undefined FUN_1479158b6(void)

undefined8 * FUN_1479158b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7b9fd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791596c FUN_14791596c body=59 status=ok
// SIG undefined FUN_14791596c(void)

undefined8 FUN_14791596c(longlong *param_1)

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



// FUNCTION 147915a7a FUN_147915a7a body=59 status=ok
// SIG undefined FUN_147915a7a(void)

undefined8 FUN_147915a7a(longlong *param_1)

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



// FUNCTION 147915b96 FUN_147915b96 body=59 status=ok
// SIG undefined FUN_147915b96(void)

undefined8 FUN_147915b96(longlong *param_1)

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



// FUNCTION 147915cdc FUN_147915cdc body=59 status=ok
// SIG undefined FUN_147915cdc(void)

undefined8 FUN_147915cdc(longlong *param_1)

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



// FUNCTION 147915d7d FUN_147915d7d body=98 status=ok
// SIG undefined FUN_147915d7d(void)

void FUN_147915d7d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_147915d7d(plVar1[5],(int)plVar1[6]);
      if (plVar1[5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_147915ddf(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147915ddf FUN_147915ddf body=38 status=ok
// SIG undefined FUN_147915ddf(void)

void FUN_147915ddf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147906f22(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 147915e3e FUN_147915e3e body=54 status=ok
// SIG undefined FUN_147915e3e(void)

undefined1 FUN_147915e3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147915f56(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147915e9c FUN_147915e9c body=59 status=ok
// SIG undefined FUN_147915e9c(void)

undefined8 FUN_147915e9c(longlong *param_1)

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



// FUNCTION 147915ee2 FUN_147915ee2 body=38 status=ok
// SIG undefined FUN_147915ee2(void)

void FUN_147915ee2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147915f56 FUN_147915f56 body=83 status=ok
// SIG undefined FUN_147915f56(void)

longlong * FUN_147915f56(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  FUN_1447bdc4c(param_1 + 2,param_2 + 2);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147915fd6 FUN_147915fd6 body=42 status=ok
// SIG undefined FUN_147915fd6(void)

void FUN_147915fd6(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_2);
  return;
}



// FUNCTION 147916016 FUN_147916016 body=60 status=ok
// SIG undefined FUN_147916016(void)

undefined8 FUN_147916016(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140816cc4(param_2,param_3);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 14791607a FUN_14791607a body=59 status=ok
// SIG undefined FUN_14791607a(void)

undefined8 FUN_14791607a(longlong *param_1)

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



// FUNCTION 1479160c0 FUN_1479160c0 body=53 status=ok
// SIG undefined FUN_1479160c0(void)

void FUN_1479160c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1479161a8 FUN_1479161a8 body=59 status=ok
// SIG undefined FUN_1479161a8(void)

undefined8 FUN_1479161a8(longlong *param_1)

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



// FUNCTION 1479162b6 FUN_1479162b6 body=59 status=ok
// SIG undefined FUN_1479162b6(void)

undefined8 FUN_1479162b6(longlong *param_1)

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



// FUNCTION 1479163ba FUN_1479163ba body=59 status=ok
// SIG undefined FUN_1479163ba(void)

undefined8 FUN_1479163ba(longlong *param_1)

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



// FUNCTION 1479164be FUN_1479164be body=59 status=ok
// SIG undefined FUN_1479164be(void)

undefined8 FUN_1479164be(longlong *param_1)

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



// FUNCTION 1479165a6 FUN_1479165a6 body=59 status=ok
// SIG undefined FUN_1479165a6(void)

undefined8 FUN_1479165a6(longlong *param_1)

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



// FUNCTION 147916750 FUN_147916750 body=59 status=ok
// SIG undefined FUN_147916750(void)

undefined8 FUN_147916750(longlong *param_1)

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



// FUNCTION 1479167f0 FUN_1479167f0 body=29 status=ok
// SIG undefined FUN_1479167f0(void)

undefined8 FUN_1479167f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14791680e FUN_14791680e body=55 status=ok
// SIG undefined FUN_14791680e(void)

void FUN_14791680e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbcb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbcb0 = FUN_140002ddd(FUN_1463a51e9,uVar1,L"AnimNode_AssetPlayerBase");
  }
  return;
}



// FUNCTION 147916848 FUN_147916848 body=29 status=ok
// SIG undefined FUN_147916848(void)

undefined8 FUN_147916848(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147916866 FUN_147916866 body=55 status=ok
// SIG undefined FUN_147916866(void)

void FUN_147916866(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe50 = FUN_140002ddd(FUN_1463a521a,uVar1,L"AnimNode_AssetPlayerRelevancyBase");
  }
  return;
}


