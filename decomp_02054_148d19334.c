// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d19334 FUN_148d19334 body=226 status=ok
// SIG undefined FUN_148d19334(void)

void FUN_148d19334(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  
  lVar1 = param_1 + 0x40;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 == '\0') {
    return;
  }
  uVar2 = FUN_14479d2ce(lVar1);
  cVar3 = FUN_145c088fe(uVar2);
  if (cVar3 == '\0') {
LAB_148d193c9:
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  else {
    cVar4 = FUN_144729dda(param_1 + 0x30);
    if (cVar4 == '\0') {
LAB_148d193c3:
      if (cVar3 == '\x02') goto LAB_148d193c9;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2f95e(uVar2);
      *param_2 = (double)fVar6 * *param_2;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2fbde(uVar2);
    }
    else {
      lVar5 = FUN_14479d2ce(param_1 + 0x30);
      cVar4 = (**(code **)(*(longlong *)(lVar5 + 0x3b60) + 0x50))(lVar5 + 0x3b60);
      if (cVar4 == '\0') goto LAB_148d193c3;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2f92c(uVar2);
      *param_2 = (double)fVar6 * *param_2;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2fbac(uVar2);
    }
    param_2[1] = (double)fVar6 * param_2[1];
  }
  return;
}



// FUNCTION 148d19416 FUN_148d19416 body=69 status=ok
// SIG undefined FUN_148d19416(void)

void FUN_148d19416(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = param_1 + 0x30;
  cVar3 = FUN_144729dda(param_1);
  if (cVar3 != '\0') {
    lVar1 = FUN_14479d2ce(param_1);
    if (*(char *)(lVar1 + 0x73eb) == '\x01') {
      uVar2 = FUN_14479d2ce(param_1);
      FUN_148bf8f8a(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d19464 FUN_148d19464 body=115 status=ok
// SIG undefined FUN_148d19464(void)

void FUN_148d19464(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong *)(&DAT_00006850 + lVar2) != 0) && (cVar1 = FUN_140ed89ca(), cVar1 != '\0')) {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong **)(lVar2 + 0x11e8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x11e8) + 0xeb8))(), cVar1 != '\0')) {
    return;
  }
  uVar3 = FUN_14479d2ce(param_1);
  FUN_140fb28f2(uVar3,0);
  return;
}



// FUNCTION 148d194d8 FUN_148d194d8 body=115 status=ok
// SIG undefined FUN_148d194d8(void)

void FUN_148d194d8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong *)(&DAT_00006850 + lVar2) != 0) && (cVar1 = FUN_140ed89ca(), cVar1 != '\0')) {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong **)(lVar2 + 0x11e8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x11e8) + 0xeb8))(), cVar1 != '\0')) {
    return;
  }
  uVar3 = FUN_14479d2ce(param_1);
  FUN_140fb28f2(uVar3,2);
  return;
}



// FUNCTION 148d1954c FUN_148d1954c body=115 status=ok
// SIG undefined FUN_148d1954c(void)

void FUN_148d1954c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong *)(&DAT_00006850 + lVar2) != 0) && (cVar1 = FUN_140ed89ca(), cVar1 != '\0')) {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong **)(lVar2 + 0x11e8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x11e8) + 0xeb8))(), cVar1 != '\0')) {
    return;
  }
  uVar3 = FUN_14479d2ce(param_1);
  FUN_140fb28f2(uVar3,1);
  return;
}



// FUNCTION 148d195c0 FUN_148d195c0 body=115 status=ok
// SIG undefined FUN_148d195c0(void)

void FUN_148d195c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong *)(&DAT_00006850 + lVar2) != 0) && (cVar1 = FUN_140ed89ca(), cVar1 != '\0')) {
    return;
  }
  lVar2 = FUN_14479d2ce(param_1);
  if ((*(longlong **)(lVar2 + 0x11e8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x11e8) + 0xeb8))(), cVar1 != '\0')) {
    return;
  }
  uVar3 = FUN_14479d2ce(param_1);
  FUN_140fb28f2(uVar3,3);
  return;
}



// FUNCTION 148d19634 FUN_148d19634 body=91 status=ok
// SIG undefined FUN_148d19634(void)

void FUN_148d19634(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_144729dda(param_1 + 0x38);
  if (cVar3 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148a18444(lVar2 + 0x60e8);
    return;
  }
  return;
}



// FUNCTION 148d196a2 FUN_148d196a2 body=140 status=ok
// SIG undefined FUN_148d196a2(void)

void FUN_148d196a2(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  
  lVar1 = param_1 + 0x38;
  cVar6 = FUN_144729dda(lVar1);
  if (cVar6 != '\0') {
    uVar5 = FUN_14479d2ce(lVar1);
    FUN_140545fa2(uVar5);
  }
  cVar6 = FUN_144729dda(param_1 + 0x30);
  if (cVar6 != '\0') {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    uVar5 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148ccdbf2(uVar5,CONCAT71((int7)((ulonglong)lVar1 >> 8),
                                 9.99999905104687e-09 <=
                                 dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 148d1972e FUN_148d1972e body=159 status=ok
// SIG undefined FUN_148d1972e(void)

void FUN_148d1972e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *UNRECOVERED_JUMPTABLE;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1 = param_1 + 0x38;
  cVar4 = FUN_144729dda(param_1);
  if (cVar4 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    lVar5 = FUN_14479d2ce(param_1);
    lVar6 = 0x80;
    if (9.99999905104687e-09 <= dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) {
      FUN_140545fa2(lVar5);
      lVar5 = FUN_14479d2ce(param_1);
      lVar6 = 0x78;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar5 + 0xda8) + lVar6);
                    /* WARNING: Could not recover jumptable at 0x000148d197be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (lVar5 + 0xda8,CONCAT71((int7)((ulonglong)*(longlong *)(lVar5 + 0xda8) >> 8),1),
               UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 148d197ce FUN_148d197ce body=68 status=ok
// SIG undefined FUN_148d197ce(void)

void FUN_148d197ce(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  param_1 = param_1 + 0x38;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1);
    FUN_140545fa2(uVar1);
    uVar1 = FUN_14479d2ce(param_1);
    FUN_148db916e(uVar1);
    return;
  }
  return;
}



// FUNCTION 148d19812 FUN_148d19812 body=205 status=ok
// SIG undefined FUN_148d19812(void)

void FUN_148d19812(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1 = param_1 + 0x30;
  cVar6 = FUN_144729dda(param_1);
  if (cVar6 != '\0') {
    lVar4 = FUN_14479d2ce(param_1);
    lVar4 = *(longlong *)(lVar4 + 0x11e8);
    if (lVar4 != 0) {
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      if ((((dVar1 == 0.0) && (!NAN(dVar1))) && (dVar2 == 0.0)) &&
         (((!NAN(dVar2) && (dVar3 == 0.0)) && (!NAN(dVar3))))) {
        return;
      }
      uVar5 = FUN_14479d2ce(param_1);
      cVar6 = FUN_140546024(uVar5);
      uVar7 = 0;
      uVar8 = 0;
      if (cVar6 == '\0') {
        uVar7 = SUB84(dVar2,0);
        uVar8 = (int)((ulonglong)dVar2 >> 0x20);
      }
      *(double *)(lVar4 + 0x2f70) = dVar1;
      *(ulonglong *)(lVar4 + 0x2f78) = CONCAT44(uVar8,uVar7);
      *(double *)(lVar4 + 0x2f80) = dVar3;
    }
  }
  return;
}



// FUNCTION 148d198f0 FUN_148d198f0 body=117 status=ok
// SIG undefined FUN_148d198f0(void)

void FUN_148d198f0(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  
  cVar4 = FUN_144729dda(param_1 + 0x30);
  if (cVar4 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000148d19955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x7f0 +
                (ulonglong)(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 < 9.99999905104687e-09) *
                8))(plVar5);
    return;
  }
  return;
}



// FUNCTION 148d19966 FUN_148d19966 body=221 status=ok
// SIG undefined FUN_148d19966(void)

void FUN_148d19966(longlong param_1,double *param_2)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    param_1 = param_1 + 0x30;
    lVar5 = FUN_14479d2ce(param_1);
    if (9.99999905104687e-09 <= dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3) {
      if ((*(longlong *)(lVar5 + 0x430) != 0) &&
         ((*(byte *)(*(longlong *)(lVar5 + 0x430) + 0x5b5) & 0x20) != 0)) {
        plVar6 = (longlong *)FUN_14479d2ce(param_1);
        (**(code **)(*plVar6 + 0x868))(plVar6,0);
      }
      lVar5 = FUN_14479d2ce(param_1);
      if ((*(longlong *)(lVar5 + 0x11e8) == 0) ||
         ((*(byte *)(*(longlong *)(lVar5 + 0x11e8) + 0x36a8) & 1) == 0)) {
        lVar5 = FUN_14479d2ce(param_1);
        if (*(longlong *)(lVar5 + 0x11e8) != 0) {
          pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x11e8) + 0x36a8);
          *pbVar1 = *pbVar1 | 3;
        }
      }
    }
    else if (*(longlong *)(lVar5 + 0x11e8) != 0) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x11e8) + 0x36a8);
      *pbVar1 = *pbVar1 & 0xfd;
    }
  }
  return;
}



// FUNCTION 148d19a44 FUN_148d19a44 body=393 status=ok
// SIG undefined FUN_148d19a44(void)

void FUN_148d19a44(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  lVar10 = param_1 + 0x30;
  cVar5 = FUN_144729dda(lVar10);
  if (((cVar5 == '\0') || (lVar7 = FUN_14479d2ce(param_1 + 0x38), lVar4 = DAT_14cbc91c8, lVar7 == 0)
      ) || (lVar7 = *(longlong *)(lVar7 + 0x21f8), lVar7 == 0)) {
    return;
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar6 ^ 1);
  }
  dVar1 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (*(int *)(lVar4 + uVar8 * 4) == 1) {
    if (dVar1 < 9.99999905104687e-09) {
LAB_148d19b65:
      lVar10 = FUN_14479d2ce(lVar10);
      FUN_140dc8e1a(lVar10 + 0x60e8,0);
      return;
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      uVar9 = FUN_14479d2ce(lVar10);
LAB_148d19b96:
      uVar11 = 0;
      goto LAB_148d19b9f;
    }
    if (*(char *)(lVar7 + 0x100) == '\x01') goto LAB_148d19b3c;
    uVar9 = FUN_14479d2ce(lVar10);
  }
  else {
    if (dVar1 < 9.99999905104687e-09) goto LAB_148d19b65;
    if (*(char *)(lVar7 + 0x100) == '\x01') {
LAB_148d19b3c:
      lVar10 = FUN_14479d2ce(lVar10);
      FUN_140dc8f42(lVar10 + 0x60e8,0);
      return;
    }
    cVar5 = *(char *)(param_1 + 0x48);
    uVar9 = FUN_14479d2ce(lVar10);
    if (cVar5 != '\x01') goto LAB_148d19b96;
  }
  uVar11 = 1;
LAB_148d19b9f:
  FUN_148d19e24(param_1,uVar9,uVar11);
  return;
}



// FUNCTION 148d19bce FUN_148d19bce body=136 status=ok
// SIG undefined FUN_148d19bce(void)

void FUN_148d19bce(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  
  cVar5 = FUN_144729dda(param_1 + 0x30);
  if (cVar5 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    lVar6 = FUN_14479d2ce(param_1 + 0x30);
    bVar4 = 9.99999905104687e-09 <= dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (bVar4) {
      (**(code **)(*(longlong *)(lVar6 + 0x3b60) + 0x68))(lVar6 + 0x3b60);
    }
    else {
      (**(code **)(*(longlong *)(lVar6 + 0x3b60) + 0x70))(lVar6 + 0x3b60,0,0);
    }
    *(bool *)(param_1 + 0x48) = bVar4;
  }
  return;
}



// FUNCTION 148d19c56 FUN_148d19c56 body=56 status=ok
// SIG undefined FUN_148d19c56(void)

void FUN_148d19c56(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148a18444(lVar1 + 0x60e8);
    return;
  }
  return;
}



// FUNCTION 148d19c8e FUN_148d19c8e body=118 status=ok
// SIG undefined FUN_148d19c8e(void)

void FUN_148d19c8e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar1 = DAT_14cbc91c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) != 1) {
    cVar3 = FUN_144729dda(param_1 + 0x30);
    if (cVar3 != '\0') {
      uVar5 = FUN_14479d2ce(param_1 + 0x30);
      FUN_148d19e24(param_1,uVar5,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d19d04 FUN_148d19d04 body=58 status=ok
// SIG undefined FUN_148d19d04(void)

void FUN_148d19d04(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_140bd92d4(lVar1 + 0x60e8,0);
    return;
  }
  return;
}



// FUNCTION 148d19d3e FUN_148d19d3e body=60 status=ok
// SIG undefined FUN_148d19d3e(void)

void FUN_148d19d3e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  FUN_148d19e24(param_1,uVar1,2);
  return;
}



// FUNCTION 148d19d7a FUN_148d19d7a body=169 status=ok
// SIG undefined FUN_148d19d7a(void)

void FUN_148d19d7a(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x38;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    if (param_3 == '\0') {
      FUN_1405463b8();
    }
    else {
      FUN_148d19334(param_1,&local_38);
    }
    plVar3 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar3 + 0xc88))(plVar3,(float)(double)CONCAT44(uStack_2c,uStack_30));
    plVar3 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar3 + 0xc90))(plVar3,(float)(double)CONCAT44(uStack_34,local_38));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d19e24 FUN_148d19e24 body=404 status=ok
// SIG undefined FUN_148d19e24(void)

void FUN_148d19e24(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_89 = (undefined1)param_3;
  uVar7 = param_3 & 0xff;
  lVar4 = (**(code **)(*(longlong *)(param_2 + 0x10e0) + 0x50))(param_2 + 0x10e0);
  if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar6);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x40) == *(char *)(param_1 + 0x50 + uVar7 * 8)))
      goto LAB_148d19e92;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar6);
  }
  lVar6 = FUN_1447210f0(param_2);
  if (lVar6 != 0) {
    if (*(float *)(param_1 + 0x4c + uVar7 * 8) <= (float)*(double *)(lVar6 + 0x6d0)) {
      local_68 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_60 = 0x8000000000;
      local_58 = 0xffffffff;
      uVar5 = FUN_148d1a0de(param_1,param_3 & 0xffffffff);
      local_a8 = &local_88;
      FUN_14122243a(lVar4,&local_a0,uVar5,2);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_88);
      if (local_a0 != 0) {
        *(undefined1 *)(param_1 + 0x50 + uVar7 * 8) = *(undefined1 *)(local_a0 + 0x40);
        FUN_148d1a120(local_a0 + 0x18,&local_88,param_1,&local_89);
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_98 + 0x10))(local_98);
          }
        }
      }
    }
  }
LAB_148d19e92:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d19fba FUN_148d19fba body=290 status=ok
// SIG undefined FUN_148d19fba(void)

undefined8 FUN_148d19fba(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  uVar3 = 0;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x21f8), uVar3 = 0, lVar2 != 0)) {
    if (param_2 == '\x02') {
      lVar2 = lVar2 + 200;
    }
    else {
      uVar3 = 0;
      if (param_2 != '\x01') goto LAB_148d1a00a;
      lVar2 = lVar2 + 0x68;
    }
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88,uVar3);
    FUN_1447c3578(lVar2,local_58,local_88);
    uVar3 = FUN_144a7b41a(local_58,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
LAB_148d1a00a:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a0de FUN_148d1a0de body=66 status=ok
// SIG undefined FUN_148d1a0de(void)

undefined8 FUN_148d1a0de(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x21f8) != 0)) {
    uVar2 = FUN_140963a30(*(longlong *)(lVar1 + 0x21f8) +
                          *(longlong *)(&DAT_14b96ec98 + (longlong)param_2 * 8));
    return uVar2;
  }
  return 0;
}



// FUNCTION 148d1a120 FUN_148d1a120 body=258 status=ok
// SIG undefined FUN_148d1a120(void)

undefined8
FUN_148d1a120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  *local_40 = &PTR_LAB_14b96c2c0;
  *(undefined1 *)(local_40 + 1) = *param_4;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b96c250;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_148d1a224;
  FUN_140ebcfd8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a224 FUN_148d1a224 body=116 status=ok
// SIG undefined FUN_148d1a224(void)

void FUN_148d1a224(longlong param_1,undefined8 param_2,uint param_3)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  *(undefined1 *)(param_1 + 0x50 + (ulonglong)(param_3 & 0xff) * 8) = 0;
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    lVar4 = FUN_1447210f0(uVar2);
    if (lVar4 != 0) {
      dVar1 = *(double *)(lVar4 + 0x6d0);
      fVar5 = (float)FUN_148d19fba(param_1,param_3);
      *(float *)(param_1 + 0x4c + (ulonglong)(param_3 & 0xff) * 8) = fVar5 + (float)dVar1;
    }
  }
  return;
}



// FUNCTION 148d1a298 FUN_148d1a298 body=57 status=ok
// SIG undefined FUN_148d1a298(void)

void FUN_148d1a298(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_1458ae910(uVar1,1,0);
    return;
  }
  return;
}



// FUNCTION 148d1a2d2 FUN_148d1a2d2 body=108 status=ok
// SIG undefined FUN_148d1a2d2(void)

void FUN_148d1a2d2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 unaff_RBX;
  
  cVar5 = FUN_144729dda(param_1 + 0x48);
  if (cVar5 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    uVar4 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1406f37b2(uVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                 9.99999905104687e-09 <=
                                 dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 148d1a33e FUN_148d1a33e body=101 status=ok
// SIG undefined FUN_148d1a33e(void)

void FUN_148d1a33e(longlong param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x48);
  if (cVar2 != '\0') {
    dVar1 = *(double *)(param_2 + 8);
    lVar3 = FUN_14479d2ce(param_1 + 0x48);
    fVar4 = (float)dVar1 + *(float *)(lVar3 + 0x1a70);
    *(float *)(lVar3 + 0x1a70) = fVar4;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= -1.0) {
      fVar4 = -1.0;
    }
    *(float *)(lVar3 + 0x390) = fVar4;
  }
  return;
}



// FUNCTION 148d1a3a4 FUN_148d1a3a4 body=101 status=ok
// SIG undefined FUN_148d1a3a4(void)

void FUN_148d1a3a4(longlong param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x48);
  if (cVar2 != '\0') {
    dVar1 = *(double *)(param_2 + 8);
    lVar3 = FUN_14479d2ce(param_1 + 0x48);
    fVar4 = (float)dVar1 + *(float *)(lVar3 + 0x1a78);
    *(float *)(lVar3 + 0x1a78) = fVar4;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= -1.0) {
      fVar4 = -1.0;
    }
    *(float *)(lVar3 + 0x394) = fVar4;
  }
  return;
}



// FUNCTION 148d1a412 FUN_148d1a412 body=108 status=ok
// SIG undefined FUN_148d1a412(void)

void FUN_148d1a412(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 unaff_RBX;
  
  cVar5 = FUN_144729dda(param_1 + 0x48);
  if (cVar5 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    uVar4 = FUN_14479d2ce(param_1 + 0x48);
    FUN_148f018be(uVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                 9.99999905104687e-09 <=
                                 dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 148d1a47e FUN_148d1a47e body=87 status=ok
// SIG undefined FUN_148d1a47e(void)

void FUN_148d1a47e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    thunk_FUN_148cd797e(uVar1);
    return;
  }
  return;
}



// FUNCTION 148d1a4d6 FUN_148d1a4d6 body=87 status=ok
// SIG undefined FUN_148d1a4d6(void)

void FUN_148d1a4d6(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148cd7a46(uVar1);
    return;
  }
  return;
}



// FUNCTION 148d1a52e FUN_148d1a52e body=89 status=ok
// SIG undefined FUN_148d1a52e(void)

void FUN_148d1a52e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148cd77f4(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 148d1a588 FUN_148d1a588 body=92 status=ok
// SIG undefined FUN_148d1a588(void)

void FUN_148d1a588(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148cd77f4(uVar1,1);
    return;
  }
  return;
}



// FUNCTION 148d1a5e4 FUN_148d1a5e4 body=128 status=ok
// SIG undefined FUN_148d1a5e4(void)

void FUN_148d1a5e4(longlong param_1,double *param_2)

{
  longlong lVar1;
  char cVar2;
  
  param_1 = param_1 + 0x38;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1);
    if (*(longlong *)(lVar1 + 0x2210) != 0) {
      lVar1 = FUN_14479d2ce(param_1);
      FUN_1416adeb6(*(undefined8 *)(lVar1 + 0x2210),1,
                    9.99999905104687e-09 <=
                    param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      return;
    }
  }
  return;
}



// FUNCTION 148d1a664 FUN_148d1a664 body=226 status=ok
// SIG undefined FUN_148d1a664(void)

void FUN_148d1a664(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  
  lVar1 = param_1 + 0x40;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 == '\0') {
    return;
  }
  uVar2 = FUN_14479d2ce(lVar1);
  cVar3 = FUN_145c088fe(uVar2);
  if (cVar3 == '\0') {
LAB_148d1a6f9:
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  else {
    cVar4 = FUN_144729dda(param_1 + 0x30);
    if (cVar4 == '\0') {
LAB_148d1a6f3:
      if (cVar3 == '\x02') goto LAB_148d1a6f9;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2f95e(uVar2);
      *param_2 = (double)fVar6 * *param_2;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2fbde(uVar2);
    }
    else {
      lVar5 = FUN_14479d2ce(param_1 + 0x30);
      cVar4 = (**(code **)(*(longlong *)(lVar5 + 0x518) + 0x50))(lVar5 + 0x518);
      if (cVar4 == '\0') goto LAB_148d1a6f3;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2f92c(uVar2);
      *param_2 = (double)fVar6 * *param_2;
      uVar2 = FUN_14479d2ce(lVar1);
      fVar6 = (float)FUN_145c2fbac(uVar2);
    }
    param_2[1] = (double)fVar6 * param_2[1];
  }
  return;
}



// FUNCTION 148d1a78e FUN_148d1a78e body=139 status=ok
// SIG undefined FUN_148d1a78e(void)

void FUN_148d1a78e(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_48 [12];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145d39426();
  if (lVar1 != 0) {
    lVar1 = FUN_141285870(lVar1);
    if (lVar1 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_145d3948c(param_1,local_3c);
      local_58 = &local_38;
      FUN_1457cd3ba(lVar1,local_48,local_3c,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a81a FUN_148d1a81a body=133 status=ok
// SIG undefined FUN_148d1a81a(void)

void FUN_148d1a81a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [12];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_145d39426();
  if (lVar1 != 0) {
    lVar1 = FUN_141285870(lVar1);
    if (lVar1 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_145d3948c(param_1,local_3c);
      FUN_140ceec8e(lVar1,local_48,local_3c,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a8a0 FUN_148d1a8a0 body=155 status=ok
// SIG undefined FUN_148d1a8a0(void)

void FUN_148d1a8a0(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined *local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = &DAT_14cbc9298;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar2 != 0) {
      FUN_1401269d0(lVar2,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a93c FUN_148d1a93c body=147 status=ok
// SIG undefined FUN_148d1a93c(void)

void FUN_148d1a93c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar2 != 0) {
      FUN_1406114f4(lVar2,*param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1a9d0 FUN_148d1a9d0 body=436 status=ok
// SIG undefined FUN_148d1a9d0(void)

void FUN_148d1a9d0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_144a846f6(*(undefined4 *)param_2);
  if (cVar6 != '\0') {
    if (param_2[6] == 0) {
      plVar7 = (longlong *)FUN_1410c5694(param_1);
    }
    else {
      plVar7 = (longlong *)(**(code **)(*param_1 + 800))(param_1,param_2 + 6);
    }
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2);
      if (lVar8 != 0) {
        (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3);
        lVar8 = FUN_1438c05fc(lVar8);
        if (lVar8 != 0) {
          lVar9 = FUN_14119ae8e();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            FUN_147fa0330(&local_78);
            plVar3 = local_58;
            local_78 = *param_2;
            local_70 = *(undefined1 *)(param_2 + 1);
            local_68 = param_2[2];
            local_60 = param_2[3];
            plVar7 = (longlong *)param_2[4];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar5 = (undefined8 *)*local_58;
                local_58 = plVar7;
                (*(code *)*puVar5)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = local_58;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  plVar7 = local_58;
                }
              }
            }
            local_58 = plVar7;
            iVar4 = *(int *)(lVar8 + 0x40);
            if ((longlong)iVar4 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x38);
              lVar9 = 0;
              do {
                local_78 = *(undefined8 *)(lVar8 + lVar9);
                (**(code **)(*param_1 + 0x2d8))(param_1,&local_78,param_3);
                lVar9 = lVar9 + 8;
              } while ((longlong)iVar4 * 8 != lVar9);
            }
            plVar7 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_58 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1ab86 FUN_148d1ab86 body=1391 status=ok
// SIG undefined FUN_148d1ab86(void)

void FUN_148d1ab86(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144a846f6((int)*param_2);
  if (cVar1 != '\0') {
    if (param_2[6] == 0) {
      lVar2 = FUN_1410c5694(param_1);
    }
    else {
      lVar2 = (**(code **)(*param_1 + 800))(param_1,param_2 + 6);
    }
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x50) != *(int *)(lVar2 + 0x7c))) {
      lVar4 = *param_2;
      uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar7 = (uint)lVar4 & 0xffff;
      lVar10 = lVar2 + 0x80;
      lVar5 = *(longlong *)(lVar2 + 0x88);
      if (*(longlong *)(lVar2 + 0x88) == 0) {
        lVar5 = lVar10;
      }
      iVar8 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar2 + 0x90) - 1U &
                               (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar5 = *(longlong *)(lVar2 + 0x48) + (longlong)iVar8 * 0x60;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar8 * 0x60) == lVar4) {
            local_e0 = (longlong *)(lVar5 + 8);
            if (local_e0 != (longlong *)0x0 && lVar5 != 0) {
              local_e8 = lVar5 + 0x18;
              local_b8 = (longlong *)0x100000000;
              local_a8 = 0xffffffff;
              local_a0 = local_a0 & 0xffffffff00000000;
              local_b0 = local_e8;
              if (*(int *)(lVar5 + 0x30) != 0) {
                FUN_1449c0562(&local_b8);
              }
              local_78 = local_a8;
              local_70 = (uint)local_a0;
              local_6c = local_a0._4_4_;
              local_88 = local_b8;
              local_80 = local_b0;
              local_90 = local_e0;
              iVar8 = *(int *)(lVar5 + 0x30);
              local_b8 = (longlong *)CONCAT44(1 << ((byte)iVar8 & 0x1f),iVar8 >> 5);
              local_b0 = local_e8;
              local_a8 = CONCAT44(iVar8,-1 << ((byte)iVar8 & 0x1f));
              local_a0 = CONCAT44(local_a0._4_4_,iVar8) & 0xffffffffffffffe0;
              if (*(int *)(lVar5 + 0x30) != iVar8) {
                FUN_1449c0562(&local_b8);
                iVar8 = local_a8._4_4_;
              }
              local_e8 = local_b0;
              if ((local_78._4_4_ != iVar8) || (local_80 != local_b0)) {
                local_c0 = param_1 + 6;
                plVar6 = local_e0;
                local_d4 = iVar8;
                local_d0 = lVar10;
                do {
                  lVar5 = *plVar6;
                  lVar3 = (longlong)local_78._4_4_;
                  lVar4 = lVar5 + lVar3 * 0x90;
                  FUN_147fa058a(lVar4);
                  if ((*(byte *)(lVar5 + 0x29 + lVar3 * 0x90) & 1) != 0) {
                    (**(code **)(*param_1 + 0x2c8))(param_1,lVar4,param_2,1);
                    FUN_147f8d430(local_c0,param_1);
                  }
                  lVar4 = FUN_1438c05fc(lVar4);
                  if (lVar4 != 0) {
                    lVar5 = FUN_14119ae8e();
                    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                          (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
                       ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
                      plVar12 = *(longlong **)(lVar4 + 0x38);
                      plVar6 = plVar12 + *(int *)(lVar4 + 0x40);
                      local_c8 = plVar6;
                      do {
                        if (*(int *)(lVar2 + 0x50) != *(int *)(lVar2 + 0x7c)) {
                          lVar4 = *plVar12;
                          uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
                          uVar7 = (uint)lVar4 & 0xffff;
                          lVar5 = *(longlong *)(lVar2 + 0x88);
                          if (*(longlong *)(lVar2 + 0x88) == 0) {
                            lVar5 = lVar10;
                          }
                          iVar8 = *(int *)(lVar5 + (ulonglong)
                                                   (*(int *)(lVar2 + 0x90) - 1U &
                                                   (int)((ulonglong)lVar4 >> 0x20) +
                                                   ((uint)lVar4 << 0x10 | uVar7) +
                                                   (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4)
                                                   ) * 4);
                          if (iVar8 != -1) {
                            do {
                              lVar5 = *(longlong *)(lVar2 + 0x48) + (longlong)iVar8 * 0x60;
                              if (*(longlong *)
                                   (*(longlong *)(lVar2 + 0x48) + (longlong)iVar8 * 0x60) == lVar4)
                              {
                                plVar9 = (longlong *)(lVar5 + 8);
                                if (plVar9 != (longlong *)0x0 && lVar5 != 0) {
                                  lVar10 = lVar5 + 0x18;
                                  local_68 = 0x100000000;
                                  local_58 = 0xffffffff;
                                  local_50 = 0;
                                  local_60 = lVar10;
                                  if (*(int *)(lVar5 + 0x30) != 0) {
                                    FUN_1449c0562(&local_68);
                                  }
                                  local_a0 = local_58;
                                  local_98 = local_50;
                                  local_94 = local_4c;
                                  local_b0 = local_68;
                                  local_a8 = local_60;
                                  uVar11 = *(uint *)(lVar5 + 0x30);
                                  local_68 = CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
                                  local_58 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
                                  local_50 = uVar11 & 0xffffffe0;
                                  local_b8 = plVar9;
                                  local_60 = lVar10;
                                  if (*(uint *)(lVar5 + 0x30) != uVar11) {
                                    FUN_1449c0562(&local_68);
                                    uVar11 = local_58._4_4_;
                                  }
                                  lVar4 = local_60;
                                  plVar6 = local_c8;
                                  lVar10 = local_d0;
                                  if ((local_b8 != plVar9 || local_a8 != local_60) ||
                                      local_a0._4_4_ != uVar11) {
                                    do {
                                      FUN_147fa058a((longlong)(int)local_a0._4_4_ * 0x90 + *local_b8
                                                   );
                                      local_a0 = CONCAT44(local_a0._4_4_,
                                                          (uint)local_a0 & ~local_b0._4_4_);
                                      FUN_1449c0562(&local_b0);
                                      plVar6 = local_c8;
                                      lVar10 = local_d0;
                                    } while (local_b8 != plVar9 ||
                                             (local_a8 != lVar4 || local_a0._4_4_ != uVar11));
                                  }
                                }
                                break;
                              }
                              iVar8 = *(int *)(lVar5 + 0x58);
                            } while (iVar8 != -1);
                          }
                        }
                        plVar12 = plVar12 + 1;
                      } while (plVar12 != plVar6);
                    }
                  }
                  local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
                  FUN_1449c0562(&local_88);
                  plVar6 = local_90;
                } while (local_90 != local_e0 ||
                         (local_80 != local_e8 || local_78._4_4_ != local_d4));
              }
            }
            break;
          }
          iVar8 = *(int *)(lVar5 + 0x58);
        } while (iVar8 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1b0f6 FUN_148d1b0f6 body=120 status=ok
// SIG undefined FUN_148d1b0f6(void)

char FUN_148d1b0f6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  cVar1 = FUN_140266042();
  if (cVar1 == '\x01') {
    cVar1 = '\x01';
    if ((*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x5c)) ||
       (*(char *)(param_1 + 0x58) != '\0')) goto LAB_148d1b152;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\x01') goto LAB_148d1b152;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  cVar1 = '\x02';
LAB_148d1b152:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1b170 FUN_148d1b170 body=386 status=ok
// SIG undefined FUN_148d1b170(void)

longlong * FUN_148d1b170(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148d1b281:
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b96c480;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148d1b281;
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
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b96c480;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d1b2f2 FUN_148d1b2f2 body=325 status=ok
// SIG undefined FUN_148d1b2f2(void)

undefined8 FUN_148d1b2f2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar2 = param_1 + 0x98;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar5 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0xb0);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (local_48 != lVar2)) {
    do {
      iVar3 = *(int *)(*local_78 + (longlong)iStack_5c * 0x38);
      if ((iVar3 != 0) &&
         (((lVar4 = *local_78 + (longlong)iStack_5c * 0x38, *(int *)(lVar4 + 4) != 0 &&
           (iVar3 != DAT_14c948000)) && (*(longlong *)(lVar4 + 0x28) != 0)))) {
        FUN_148d1b810(param_1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != lVar2 || iStack_5c != iVar5));
  }
  FUN_148d24df6(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 148d1b438 FUN_148d1b438 body=404 status=ok
// SIG undefined FUN_148d1b438(void)

undefined8 FUN_148d1b438(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50 [16];
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_2;
  uVar3 = 0;
  if ((uVar2 != 0) && (param_2[1] != 0)) {
    uVar3 = 0;
    if ((0 < param_3) && (uVar3 = 0, uVar2 != DAT_14c948000)) {
      if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
        lVar4 = param_1 + 0x60;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x68);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uVar2) * 4);
        if (iVar6 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x78;
            if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x78) == uVar2) {
              if (lVar4 != -0x28 && lVar4 != 0) {
                plVar5 = (longlong *)FUN_148d243d8(param_1 + 0x88);
                *plVar5 = *plVar5 + param_3;
                if (((*(longlong *)(param_1 + 0xf0) == 0) || (*(longlong *)(param_1 + 0xf8) == 0))
                   || (uVar3 = 1, *(int *)(*(longlong *)(param_1 + 0xf8) + 8) < 1)) {
                  uVar3 = FUN_1401cb356();
                  local_40 = FUN_148d1b2f2;
                  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
                  FUN_148d1b170(local_50,param_1);
                  local_58 = 0;
                  FUN_1405f67fc(uVar3,&local_40,local_50,
                                L"FOakEntitlementManager.ProcessQueuedConsumes");
                  *(code **)(param_1 + 0xf0) = local_40;
                  local_40 = (code *)0x0;
                  plVar5 = *(longlong **)(param_1 + 0xf8);
                  *(longlong **)(param_1 + 0xf8) = local_38;
                  local_38 = (longlong *)0x0;
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))();
                    }
                    if (local_38 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_38 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_38 + 0x10))();
                      }
                    }
                  }
                  FUN_1449db362(local_50);
                  uVar3 = 1;
                }
                goto LAB_148d1b483;
              }
              break;
            }
            iVar6 = *(int *)(lVar4 + 0x70);
          } while (iVar6 != -1);
        }
      }
      uVar3 = 0;
    }
  }
LAB_148d1b483:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148d1b5ce FUN_148d1b5ce body=452 status=ok
// SIG undefined FUN_148d1b5ce(void)

undefined4 FUN_148d1b5ce(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = 0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    uVar7 = 0;
    if ((0 < param_3) && (uVar7 = 0, *param_2 != DAT_14c948000)) {
      iVar9 = 0;
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_60 = 0;
      uStack_58 = 0;
      plVar1 = (longlong *)(param_1 + 0x28);
      lVar2 = param_1 + 0x38;
      local_98 = 0x100000000;
      local_88 = 0xffffffff;
      local_80 = 0;
      local_90 = lVar2;
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_1449c0562(&local_98);
        iVar9 = *(int *)(param_1 + 0x50);
      }
      local_a8 = local_88;
      uVar5 = local_a8;
      local_a0 = local_80;
      local_9c = local_7c;
      local_b8 = local_98;
      local_b0 = local_90;
      local_a8._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      local_c8 = param_1;
      local_c0 = plVar1;
      if ((local_a8._4_4_ != iVar9) || (local_90 != lVar2)) {
        iVar8 = local_a8._4_4_;
        local_a8 = uVar5;
        do {
          lVar3 = *local_c0;
          lVar10 = (longlong)iVar8 * 0x78;
          lVar4 = *(longlong *)(lVar3 + 0x28 + lVar10);
          if ((lVar4 != 0) &&
             (cVar6 = FUN_1488330a0(lVar4,param_2,lVar3 + lVar10 + 0x28), cVar6 != '\0')) {
            FUN_1447715ec(&local_78,lVar3 + lVar10);
            uVar5 = local_a8;
            break;
          }
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar8 = local_a8._4_4_;
          uVar5 = local_a8;
        } while (local_c0 != plVar1 || (local_b0 != lVar2 || local_a8._4_4_ != iVar9));
      }
      local_a8 = uVar5;
      uVar7 = FUN_148d1b438(local_c8,&local_78,param_3);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148d1b810 FUN_148d1b810 body=896 status=ok
// SIG undefined FUN_148d1b810(void)

void FUN_148d1b810(longlong param_1,uint *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  size_t sVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *_Str;
  longlong lVar12;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118 [24];
  longlong local_100;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar6 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x68);
    }
    iVar10 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & *param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 0x78;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 0x78) == *param_2) {
          if (lVar6 != -0x28 && lVar6 != 0) {
            param_1 = param_1 + 0x18;
            cVar4 = FUN_144729dda(param_1);
            if (cVar4 != '\0') {
              uVar5 = FUN_14479d2ce(param_1);
              lVar6 = FUN_144a7ba4c(uVar5);
              if ((lVar6 != 0) && (plVar7 = (longlong *)FUN_140773fe2(), plVar7 != (longlong *)0x0))
              {
                uVar1 = *(undefined4 *)(lVar6 + 0xe0);
                uVar5 = FUN_14479d2ce(param_1);
                uVar5 = FUN_1447210f0(uVar5);
                local_140 = (**(code **)(*plVar7 + 0x2d0))(plVar7,uVar1,uVar5);
                if (local_140 != 0) {
                  plVar7 = (longlong *)FUN_145ca4b27(local_140);
                  if ((longlong)(int)plVar7[1] != 0) {
                    lVar6 = *plVar7;
                    lVar12 = (longlong)(int)plVar7[1] * 0x58;
                    goto LAB_148d1b97e;
                  }
                }
              }
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0x70);
      } while (iVar10 != -1);
    }
  }
  goto LAB_148d1b845;
LAB_148d1b97e:
  do {
    if ((*(char *)(lVar6 + 0x20) == '\x01') && (0 < *(longlong *)(lVar6 + 0x28))) {
      if (*(int *)(lVar6 + 0x50) == 0) {
        _Str = L"";
LAB_148d1b9b8:
        local_a0 = 0;
        sVar8 = wcslen(_Str);
        FUN_1449b853c(&local_120,_Str,sVar8 & 0xffffffff,1);
      }
      else {
        _Str = *(wchar_t **)(lVar6 + 0x48);
        local_a0 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_148d1b9b8;
        local_98 = 0;
        local_90 = 0;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,local_98,0);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if ((uint)local_88 == *param_2) {
        local_138 = FUN_14479d2ce(param_1);
        lVar11 = *(longlong *)(lVar6 + 0x28);
        if (param_3 < *(longlong *)(lVar6 + 0x28)) {
          lVar11 = param_3;
        }
        local_120 = local_138;
        FUN_1447a97f4(local_118,&local_88);
        local_130 = (undefined8 *)0x0;
        local_128 = 0;
        FUN_1446efa72(&local_130,0,5,0x10);
        puVar2 = local_130;
        local_128 = 5;
        *local_130 = &PTR_LAB_14b4daf00;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_130[2] = lVar9;
        *local_130 = &PTR_FUN_14b96c560;
        local_130[3] = 0;
        FUN_14485c47a(local_130 + 3,local_138);
        puVar2[4] = local_120;
        FUN_1404e49e4(puVar2 + 5,local_118);
        FUN_148a5e5b8(local_140,lVar6,lVar11,&local_130);
        if (local_100 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    lVar6 = lVar6 + 0x58;
    lVar12 = lVar12 + -0x58;
  } while (lVar12 != 0);
LAB_148d1b845:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1bb92 FUN_148d1bb92 body=193 status=ok
// SIG undefined FUN_148d1bb92(void)

void FUN_148d1bb92(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  cVar1 = FUN_144729dda(param_1 + 0xc18);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0xc18);
    lVar3 = FUN_1447210f0(uVar2);
    if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x238))) {
      iVar6 = 0;
      lVar7 = 0;
      do {
        lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar7);
        if (lVar4 != 0) {
          lVar5 = FUN_144a5dd5e();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (*(longlong *)(lVar4 + 0xf48) != 0)) {
            FUN_148d1bc54(*(longlong *)(lVar4 + 0xf48) + 0x4f48,param_2);
          }
        }
        lVar7 = lVar7 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar3 + 0x238));
    }
  }
  return;
}



// FUNCTION 148d1bc54 FUN_148d1bc54 body=64 status=ok
// SIG undefined FUN_148d1bc54(void)

void FUN_148d1bc54(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0xc18);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0xc18);
    FUN_1408964e4(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148d1bcbc FUN_148d1bcbc body=64 status=ok
// SIG undefined FUN_148d1bcbc(void)

void FUN_148d1bcbc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = FUN_148d1bcfc(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d1bcd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  _Dst = (void *)FUN_148d1bea2();
  memset(_Dst,0,0xf8);
  FUN_148c147da(_Dst);
  return;
}



// FUNCTION 148d1bcfc FUN_148d1bcfc body=204 status=ok
// SIG undefined FUN_148d1bcfc(void)

longlong FUN_148d1bcfc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14610382c();
  lVar3 = *param_1;
  if (DAT_14cbc9500 != DAT_14cbc952c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc9530;
    if (DAT_14cbc9538 != (undefined *)0x0) {
      puVar7 = DAT_14cbc9538;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc9540 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc94f8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc94f0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 148d1bdc8 FUN_148d1bdc8 body=42 status=ok
// SIG undefined FUN_148d1bdc8(void)

void FUN_148d1bdc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_148d1bea2();
  memset(_Dst,0,0xf8);
  FUN_148c147da(_Dst);
  return;
}



// FUNCTION 148d1be12 FUN_148d1be12 body=40 status=ok
// SIG undefined FUN_148d1be12(void)

undefined8 FUN_148d1be12(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_148d1bcfc(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d1be3a FUN_148d1be3a body=76 status=ok
// SIG undefined FUN_148d1be3a(void)

undefined8 FUN_148d1be3a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_148d1bcfc(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000148d1be7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 148d1bea2 FUN_148d1bea2 body=124 status=ok
// SIG undefined FUN_148d1bea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d1bea2(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cbc9550 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x4d8,0);
    plVar2 = plVar1 + 0x1f;
    *plVar1 = (longlong)plVar2;
    plVar1[0x1f] = (longlong)(plVar1 + 0x3e);
    plVar1[0x3e] = (longlong)(plVar1 + 0x5d);
    plVar1[0x5d] = (longlong)(plVar1 + 0x7c);
    plVar1[0x7c] = (longlong)DAT_14cbc9550;
    DAT_14cbc9558 = DAT_14cbc9558 + 5;
  }
  else {
    plVar2 = (longlong *)*DAT_14cbc9550;
  }
  DAT_14cbc9550 = plVar2;
  _DAT_14cbc955c = _DAT_14cbc955c + 1;
  return;
}



// FUNCTION 148d1bf1e FUN_148d1bf1e body=44 status=ok
// SIG undefined FUN_148d1bf1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d1bf1e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc955c = _DAT_14cbc955c + -1;
  *param_1 = DAT_14cbc9550;
  DAT_14cbc9550 = param_1;
  return;
}



// FUNCTION 148d1bf4a FUN_148d1bf4a body=44 status=ok
// SIG undefined FUN_148d1bf4a(void)

void FUN_148d1bf4a(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0xf8);
  FUN_148c147da(param_1);
  return;
}



// FUNCTION 148d1bf76 FUN_148d1bf76 body=155 status=ok
// SIG undefined FUN_148d1bf76(void)

void FUN_148d1bf76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  local_28 = param_2;
  FUN_14411ebc4(&local_28,param_1 + 10,L"MinPartyRank");
  FUN_14411ebc4(&local_28,param_1 + 0x11,L"MaxPartyRank");
  FUN_14411ebc4(&local_28,param_1 + 0x18,L"HostRank");
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c012 FUN_148d1c012 body=1 status=ok
// SIG undefined FUN_148d1c012(void)

void FUN_148d1c012(void)

{
  return;
}



// FUNCTION 148d1c014 FUN_148d1c014 body=1 status=ok
// SIG undefined FUN_148d1c014(void)

void FUN_148d1c014(void)

{
  return;
}



// FUNCTION 148d1c016 FUN_148d1c016 body=671 status=ok
// SIG undefined FUN_148d1c016(void)

undefined1 * FUN_148d1c016(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if (((param_3 != (longlong *)0x0) &&
      (lVar3 = (**(code **)(*param_3 + 0x180))(param_3), lVar3 != 0)) &&
     (0 < *(int *)(lVar3 + 0x238))) {
    lVar9 = 0;
    puVar10 = &DAT_14cb7c588;
    do {
      lVar4 = FUN_14479d2ce(lVar9 * 8 + *(longlong *)(lVar3 + 0x230));
      if (lVar4 != 0) {
        lVar5 = FUN_144a5dd5e();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (lVar4 = *(longlong *)(lVar4 + 0xf48), lVar4 != 0)) {
          lVar5 = *(longlong *)(param_1 + 8);
          if (lVar5 == DAT_14cbc9600) {
            uVar6 = (ulonglong)*(int *)(lVar4 + 0x6190);
            if (0 < (longlong)uVar6) {
              lVar5 = 0x20;
              uVar8 = 0;
              do {
                if (uVar8 < uVar6) {
                  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x6188) + lVar5);
                  if (((DAT_14c950c29 & 1) != 0) && (lVar1 != 0)) {
                    FUN_1456cec3c();
                    goto LAB_148d1c2ab;
                  }
                  if (lVar1 != 0) goto LAB_148d1c2ab;
                }
                uVar8 = uVar8 + 1;
                lVar5 = lVar5 + 0x170;
              } while (uVar6 != uVar8);
            }
          }
          else if (lVar5 == DAT_14cbc9608) {
            lVar4 = FUN_14018ffce(lVar4);
            if (lVar4 != 0) {
LAB_148d1c2ab:
              uVar7 = 1;
              goto LAB_148d1c22f;
            }
          }
          else if (lVar5 == DAT_14cbc9610) {
            uVar2 = FUN_1403ae46b();
            if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0x78f0))) &&
               ((lVar4 = (ulonglong)uVar2 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
                ((*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 &&
                  *(longlong *)(lVar4 + 0x20) != 0 &&
                 (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))))) {
              lVar5 = FUN_140227782();
              if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_148d1c2ab;
            }
          }
          else if (((lVar5 == DAT_14cbc9618) && (uVar2 = FUN_140232fad(), -1 < (int)uVar2)) &&
                  (((int)uVar2 < *(int *)(lVar4 + 0x78f0) &&
                   (((lVar4 = (ulonglong)uVar2 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
                     (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 &&
                      *(longlong *)(lVar4 + 0x20) != 0)) &&
                    (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))))) {
            lVar5 = FUN_140232dfe();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(char *)(lVar4 + 0xb2c) != '\x01')) goto LAB_148d1c2ab;
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(lVar3 + 0x238));
  }
  uVar7 = 0;
  puVar10 = &DAT_14cb7c580;
LAB_148d1c22f:
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0xc) = uVar7;
  *(undefined8 *)(param_2 + 4) = *puVar10;
  return param_2;
}



// FUNCTION 148d1c2b6 FUN_148d1c2b6 body=249 status=ok
// SIG undefined FUN_148d1c2b6(void)

longlong * FUN_148d1c2b6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b96d740;
  plVar1 = plVar4 + 2;
  FUN_145af841e(plVar1,param_3);
  plVar4[2] = (longlong)&PTR_FUN_14b96d760;
  plVar4[0x23] = 0;
  plVar4[0x24] = 0;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  plVar4[0x27] = 0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148d2837a(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c3b2 FUN_148d1c3b2 body=180 status=ok
// SIG undefined FUN_148d1c3b2(void)

void FUN_148d1c3b2(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 2;
  local_64 = 0;
  local_5c = param_1;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca638;
  local_50 = DAT_14cbca640;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c467 FUN_148d1c467 body=180 status=ok
// SIG undefined FUN_148d1c467(void)

void FUN_148d1c467(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 2;
  local_64 = 0;
  local_5c = param_1;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca650;
  local_50 = DAT_14cbca658;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c51c FUN_148d1c51c body=202 status=ok
// SIG undefined FUN_148d1c51c(void)

void FUN_148d1c51c(byte param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 1;
  local_5c = (uint)param_1;
  puVar2 = &DAT_14cb7c580;
  if (param_1 != 0) {
    puVar2 = &DAT_14cb7c588;
  }
  local_64 = *puVar2;
  FUN_144928b90(local_48,CONCAT71((int7)((ulonglong)puVar2 >> 8),2));
  local_58 = DAT_14cbca680;
  local_50 = DAT_14cbca688;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_2,0);
  if (lVar1 != 0) {
    FUN_140bc53f1(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c5e7 FUN_148d1c5e7 body=234 status=ok
// SIG undefined FUN_148d1c5e7(void)

uint FUN_148d1c5e7(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  char local_68 [4];
  longlong local_64;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca638;
  local_50 = DAT_14cbca640;
  FUN_144928d62(local_38,1);
  lVar2 = FUN_140149a73(param_1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar2,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x03') {
    bVar3 = local_64 == 0;
  }
  else {
    uVar1 = local_5c;
    if (local_68[0] == '\x02') goto LAB_148d1c68e;
    if (local_68[0] != '\x01') {
      uVar1 = 0;
      goto LAB_148d1c68e;
    }
    bVar3 = local_5c == 0;
  }
  uVar1 = (uint)!bVar3;
LAB_148d1c68e:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148d1c6d2 FUN_148d1c6d2 body=211 status=ok
// SIG undefined FUN_148d1c6d2(void)

undefined1 FUN_148d1c6d2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  char local_68 [4];
  undefined8 local_64;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = '\0';
  local_64 = 0;
  local_5c = 0;
  FUN_144928b90(local_48,2);
  local_58 = DAT_14cbca680;
  local_50 = DAT_14cbca688;
  FUN_144928d62(local_38,1);
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    FUN_14039fc7b(local_48,local_68,lVar1,0);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] == '\x01') {
    uVar2 = local_5c != 0;
  }
  else {
    uVar2 = FUN_140321d1a(local_68);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1c7a6 FUN_148d1c7a6 body=988 status=ok
// SIG undefined FUN_148d1c7a6(void)

void FUN_148d1c7a6(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_188 [44];
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  int local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_118 = *param_2;
  local_110 = *(undefined4 *)(param_2 + 1);
  local_158 = param_4;
  FUN_1448075d0(&local_b8,&local_118);
  uVar4 = FUN_14060eaf6(&local_b8);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (uVar4 != 0) {
    FUN_1401bd540(uVar4,&local_b8);
  }
  local_128 = (undefined8 *)0x0;
  local_120 = *(int *)(param_3 + 0x2d8);
  lVar8 = (longlong)local_120;
  _Src = *(void **)(param_3 + 0x2d0);
  if (lVar8 != 0) {
    FUN_1446dd7be(&local_128,local_120,0);
    memcpy(local_128,_Src,lVar8 * 0xc);
    if ((longlong)local_120 != 0) {
      puVar1 = (undefined8 *)((longlong)local_128 + (longlong)local_120 * 0xc);
      uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      local_15c = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      local_15c = local_15c >> 0x10 ^ local_15c;
      puVar7 = local_128;
      do {
        local_140 = *puVar7;
        local_138 = *(undefined4 *)(puVar7 + 1);
        FUN_1448075d0(&local_108,&local_140);
        lVar8 = FUN_14060eaf6(&local_108);
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        local_130 = lVar8;
        if ((lVar8 != 0) &&
           ((FUN_14104f038(lVar8 + 0x4f0,&local_108), local_108 == DAT_14cbcdd80 ||
            (FUN_14104f038(local_130 + 0x4f0,&local_150),
            CONCAT44(uStack_14c,local_150) == DAT_14cbcdd68)))) {
          local_e8 = 0;
          local_e0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_dc = 0xffffffff00000080;
          local_d4 = 0;
          local_c8 = (undefined1 *)0x0;
          local_c0 = 0;
          FUN_14890bbc8(local_130,&local_108);
          if ((int)uStack_100 != local_d4) {
            puVar5 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar5 = local_d0;
            }
            for (iVar3 = *(int *)(puVar5 + (ulonglong)(local_c0 - 1U & local_15c) * 4); iVar3 != -1;
                iVar3 = *(int *)((longlong)iVar3 * 0x10 + local_108 + 8)) {
              if (*(ulonglong *)(local_108 + (longlong)iVar3 * 0x10) == uVar4) goto LAB_148d1ca74;
            }
          }
          puVar6 = *(undefined4 **)(local_130 + 8);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = &DAT_14c9485f0;
          }
          FUN_144a7660c(puVar6,&local_150,1);
          if (local_148 != 0) {
            FUN_144a78877(local_150,local_148);
          }
          iVar3 = FUN_1407a7398(&local_b8);
          if (iVar3 == -1) {
            FUN_1401bcf08(local_158,&local_150,&local_130,0);
          }
LAB_148d1ca74:
          local_c0 = 0;
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1401bcc5a(&local_108);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
      } while (puVar7 != puVar1);
    }
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8(local_128);
    }
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1cb84 FUN_148d1cb84 body=111 status=ok
// SIG undefined FUN_148d1cb84(void)

void FUN_148d1cb84(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x140);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x30) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
  }
  lVar1 = FUN_14133cf3b(uVar2);
  if (lVar1 != 0) {
    lVar1 = FUN_14133cf88(lVar1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x30) != 0)) {
      return;
    }
  }
  FUN_1488448fc(param_1,param_2,param_3);
  return;
}



// FUNCTION 148d1cbfa FUN_148d1cbfa body=372 status=ok
// SIG undefined FUN_148d1cbfa(void)

void FUN_148d1cbfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar4 = *(longlong **)(param_1 + 0x178), plVar4 != (longlong *)0x0)) && (0 < (int)plVar4[1])
     ) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) {
        FUN_140457ffc(0x60,param_1);
        goto LAB_148d1cc73;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    FUN_140457ffc(*(longlong *)(param_1 + 0x170) + 0x60,param_1);
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
LAB_148d1cc73:
    plVar4 = *(longlong **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  lVar9 = param_1 + 0x1d0;
  cVar6 = FUN_144729dda(lVar9);
  if (cVar6 != '\0') {
    lVar8 = FUN_14479d2ce(lVar9);
    uVar3 = *(uint *)(lVar8 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    FUN_14482b126(lVar8,0x40000000);
    lVar9 = FUN_14479d2ce(lVar9);
    FUN_144757f48(lVar9,0x40000000);
    uVar3 = *(uint *)(lVar9 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar9 + 8);
      if ((uVar3 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar10 = uVar3 == *(uint *)(lVar9 + 8);
      if (bVar10) {
        *(uint *)(lVar9 + 8) = uVar3 | 0x200000;
      }
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = FUN_1400bd1c2(param_1);
  if (lVar9 != 0) {
    lVar9 = FUN_1400bd1c2(param_1);
    FUN_140457ffc(lVar9 + 0x570,param_1);
  }
  FUN_148852a4c(param_1);
  return;
}



// FUNCTION 148d1cd6e FUN_148d1cd6e body=446 status=ok
// SIG undefined FUN_148d1cd6e(void)

void FUN_148d1cd6e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [44];
  undefined1 local_cc [8];
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x60) != '\0') goto LAB_148d1cf08;
    *(undefined1 *)(param_1 + 0x60) = 1;
LAB_148d1ce40:
    local_c0[0] = 3;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x3c0) + 0x40))(lVar2 + 0x3c0);
    bVar1 = FUN_143e56542(uVar3);
    if (*(byte *)(param_1 + 0x60) == (bVar1 ^ 1)) goto LAB_148d1cf08;
    *(byte *)(param_1 + 0x60) = bVar1 ^ 1;
    if (bVar1 == 0) goto LAB_148d1ce40;
    local_c0[0] = 4;
  }
  local_28 = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  local_bc = 0;
  local_48 = DAT_14cb7bd68;
  uStack_40 = DAT_14cb7bd70;
  uStack_3c = DAT_14cb7bd80;
  uStack_34 = DAT_14cb7bd88;
  FUN_140daa42e(*(undefined8 *)(param_1 + 0x10),&local_bc);
  FUN_14106b9aa(*(undefined8 *)(param_1 + 0x10),local_cc);
  uStack_a8 = local_c4;
  uStack_b0 = local_cc._0_4_;
  uStack_ac = local_cc._4_4_;
  local_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined4 *)(param_1 + 0x30);
  uStack_3c = *(undefined8 *)(param_1 + 0x34);
  uStack_34 = *(undefined4 *)(param_1 + 0x3c);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(undefined4 *)(param_1 + 0x48);
  FUN_140daa31a(*(undefined8 *)(param_1 + 0x10),local_c0);
  FUN_14105a12a(local_c0);
  FUN_14106ce2e(*(undefined8 *)(param_1 + 0x10));
LAB_148d1cf08:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1cf34 FUN_148d1cf34 body=137 status=ok
// SIG undefined FUN_148d1cf34(void)

void FUN_148d1cf34(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      lVar5 = *(longlong *)(lVar4 + 0x50);
      if ((lVar5 != 0) && (*(char *)(lVar4 + 0x60) == '\x01')) {
        lVar4 = *(longlong *)(lVar4 + 0x58);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14107fe10(param_2,iVar2);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + (longlong)iVar2 * 0x10) = lVar5;
        *(longlong *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = lVar4;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  return;
}



// FUNCTION 148d1cfbe FUN_148d1cfbe body=380 status=ok
// SIG undefined FUN_148d1cfbe(void)

void FUN_148d1cfbe(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar14 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar3 + lVar14) + 0x60) == '\x01') {
        lVar12 = param_2[1];
        uVar13 = (int)lVar12 + 1;
        *(uint *)(param_2 + 1) = uVar13;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar13) {
          FUN_1457ecdd8(param_2);
        }
        lVar4 = *param_2;
        lVar15 = (longlong)(int)lVar12 * 0xa0;
        memset((void *)(lVar15 + lVar4),0,0xa0);
        *(undefined8 *)(lVar4 + 0x78 + lVar15) = DAT_14cb7bd68;
        *(undefined4 *)(lVar4 + 0x80 + lVar15) = DAT_14cb7bd70;
        *(undefined8 *)(lVar4 + 0x84 + lVar15) = DAT_14cb7bd80;
        *(undefined4 *)(lVar4 + 0x8c + lVar15) = DAT_14cb7bd88;
        *(undefined8 *)(lVar4 + 0x90 + lVar15) = 0;
        *(undefined4 *)(lVar4 + 0x98 + lVar15) = 0;
        *(undefined1 *)(lVar4 + lVar15) = 3;
        FUN_140daa42e(param_1,&local_54);
        *(undefined4 *)(lVar4 + 0xc + lVar15) = local_4c;
        *(undefined8 *)(lVar4 + 4 + lVar15) = local_54;
        FUN_14106b9aa(param_1);
        *(undefined4 *)(lVar4 + 0x18 + lVar15) = local_4c;
        *(undefined8 *)(lVar4 + 0x10 + lVar15) = local_54;
        lVar12 = *(longlong *)(lVar3 + lVar14);
        *(undefined4 *)(lVar4 + 0x98 + lVar15) = *(undefined4 *)(lVar12 + 0x48);
        uVar5 = *(undefined4 *)(lVar12 + 0x28);
        uVar6 = *(undefined4 *)(lVar12 + 0x2c);
        uVar7 = *(undefined4 *)(lVar12 + 0x30);
        uVar8 = *(undefined4 *)(lVar12 + 0x34);
        uVar9 = *(undefined4 *)(lVar12 + 0x3c);
        uVar10 = *(undefined4 *)(lVar12 + 0x40);
        uVar11 = *(undefined4 *)(lVar12 + 0x44);
        puVar1 = (undefined4 *)(lVar4 + 0x88 + lVar15);
        *puVar1 = *(undefined4 *)(lVar12 + 0x38);
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        puVar1 = (undefined4 *)(lVar4 + 0x78 + lVar15);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1d13c FUN_148d1d13c body=402 status=ok
// SIG undefined FUN_148d1d13c(void)

void FUN_148d1d13c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14106c25a();
  if (param_2 != 0) {
    uVar5 = FUN_1447210f0(param_2);
    FUN_14040d984(&local_40,uVar5);
    if (local_38 != (longlong *)0x0) {
      iVar4 = (int)local_38[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_38 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_38;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_40 != 0) {
          lVar6 = FUN_14145892e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            FUN_14485c47a(param_1 + 0x58,*(undefined8 *)(param_2 + 0x3a0));
          }
          FUN_148ce03d4(local_40,&local_60,param_2);
          if (local_60 == 0) {
            local_50 = FUN_148d1d538;
            local_48 = 0;
            FUN_148d298b4(&local_40,param_1);
            FUN_148d297cc(local_40 + 0x20,&local_50,&local_40);
            FUN_1449db362(&local_40);
          }
          else {
            FUN_148d1d2d0(param_1,&local_60);
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)local_58 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_58 + 0x10))(local_58);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1d2d0 FUN_148d1d2d0 body=615 status=ok
// SIG undefined FUN_148d1d2d0(void)

void FUN_148d1d2d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) goto LAB_148d1d419;
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 != (longlong *)0x0) {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_148d1d37c;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 == (longlong *)0x0) {
LAB_148d1d341:
      plVar9 = (longlong *)0x0;
    }
    else {
      lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar6 = FUN_1466189da();
      if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148d1d341;
      plVar9 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        plVar9 = plVar2;
      }
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      if ((char)plVar9[0xf] == '\x01') {
        lVar5 = *param_2;
        local_50 = FUN_148d1d62e;
        local_48 = 0;
        FUN_148d2a574(&local_40,param_1);
        FUN_148d2a48c(lVar5 + 0x10,&local_50,&local_40);
        FUN_1449db362(&local_40);
        FUN_148d1d62e(param_1,*param_2 + 0xe8);
      }
      else if ((char)plVar9[0xf] == '\0') {
        lVar5 = *param_2;
        local_50 = FUN_148d1d5a2;
        local_48 = 0;
        FUN_148d29f94(&local_40,param_1);
        FUN_148d29eac(lVar5 + 0x28,&local_50,&local_40);
        FUN_1449db362(&local_40);
        if (*(int *)(*param_2 + 0xf0) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_14479d2ce(*(undefined8 *)(*param_2 + 0xe8));
        }
        local_40 = 0;
        FUN_14485c47a(&local_40,uVar7);
        FUN_148d1d5a2(param_1,&local_40);
      }
    }
  }
LAB_148d1d37c:
  lVar5 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(lVar5);
    }
    FUN_14040d984(&local_40,lVar6);
    if (local_38 != (longlong *)0x0) {
      iVar4 = (int)local_38[1];
      do {
        if (iVar4 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(local_38 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_40 != 0) {
          FUN_140457ffc(local_40 + 0x20,param_1);
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
LAB_148d1d419:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1d538 FUN_148d1d538 body=106 status=ok
// SIG undefined FUN_148d1d538(void)

void FUN_148d1d538(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  
  if (*param_2 != 0) {
    cVar4 = FUN_148d1d750(*param_2 + 0x11c,param_1 + 0x58);
    if (cVar4 != '\0') {
      FUN_148d1d2d0(param_1,param_2);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000148d1d575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d1d5a2 FUN_148d1d5a2 body=138 status=ok
// SIG undefined FUN_148d1d5a2(void)

void FUN_148d1d5a2(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  cVar1 = FUN_144729dda(param_2);
  if (cVar1 != '\0') {
    uStack_30 = CONCAT44(uStack_30._4_4_,1);
    FUN_140155462(&local_38,0);
    *local_38 = *param_2;
  }
  FUN_148d1d62e(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1d62e FUN_148d1d62e body=289 status=ok
// SIG undefined FUN_148d1d62e(void)

void FUN_148d1d62e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] != 0) {
    puVar5 = (undefined8 *)*param_2;
    puVar1 = puVar5 + (int)param_2[1];
    do {
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x48);
        lVar8 = (longlong)*(int *)(param_1 + 0x50) << 6;
        do {
          local_50 = *puVar5;
          cVar3 = FUN_140383372(lVar9,&local_50);
          if (cVar3 != '\0') goto LAB_148d1d6ad;
          lVar9 = lVar9 + 0x40;
          lVar8 = lVar8 + -0x40;
        } while (lVar8 != 0);
      }
      uVar4 = FUN_14479d2ce(puVar5);
      FUN_148d1de78(param_1,uVar4);
LAB_148d1d6ad:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x50);
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    do {
      lVar6 = (lVar9 + -1) * 0x40;
      lVar8 = FUN_14479d2ce(*(longlong *)(param_1 + 0x48) + lVar6);
      if ((lVar8 != 0) && ((longlong)(int)param_2[1] != 0)) {
        lVar10 = *param_2;
        lVar7 = (longlong)(int)param_2[1] << 3;
        do {
          cVar3 = FUN_14069eaf4(lVar10,lVar8);
          if (cVar3 != '\0') goto LAB_148d1d71f;
          lVar10 = lVar10 + 8;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      uVar4 = FUN_14479d2ce(lVar6 + *(longlong *)(param_1 + 0x48));
      FUN_148d1d9a8(param_1,uVar4);
LAB_148d1d71f:
      bVar2 = 1 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1d750 FUN_148d1d750 body=53 status=ok
// SIG undefined FUN_148d1d750(void)

ulonglong FUN_148d1d750(int *param_1,int *param_2)

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



// FUNCTION 148d1d786 FUN_148d1d786 body=545 status=ok
// SIG undefined FUN_148d1d786(void)

void FUN_148d1d786(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_1 + 0x58);
  lVar6 = FUN_14479d2ce(puVar1);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(lVar6);
    }
    FUN_14040d984(&local_40,lVar7);
    plVar9 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar5 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      piVar2 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_40 != 0) {
          FUN_140457ffc(local_40 + 0x20,param_1);
        }
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
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x68);
  if (plVar9 == (longlong *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    iVar5 = (int)plVar9[1];
    do {
      if (iVar5 == 0) goto LAB_148d1d89e;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 != 0) {
      FUN_140457ffc(lVar6 + 0x28,param_1);
      FUN_140457ffc(lVar6 + 0x10,param_1);
    }
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
LAB_148d1d89e:
    plVar9 = *(longlong **)(param_1 + 0x68);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x50);
  if (0 < iVar5) {
    local_40 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    local_38 = iVar5;
    FUN_148d2aa6c(&local_40,iVar5);
    FUN_148d2aac2(local_40,uVar8,iVar5);
    if ((longlong)local_38 != 0) {
      lVar7 = (longlong)local_38 << 6;
      lVar6 = local_40;
      do {
        uVar8 = FUN_14479d2ce(lVar6);
        FUN_148d1d9a8(param_1,uVar8);
        lVar6 = lVar6 + 0x40;
        lVar7 = lVar7 + -0x40;
      } while (lVar7 != 0);
    }
    FUN_148d29782(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_148d2ab30((undefined8 *)(param_1 + 0x48));
    }
    FUN_148d29782(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14106ce84(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1d9a8 FUN_148d1d9a8 body=635 status=ok
// SIG undefined FUN_148d1d9a8(void)

void FUN_148d1d9a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *_Dst;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar10 = (longlong)*(int *)(param_1 + 0x50) << 6;
    uVar9 = 0;
    do {
      lVar6 = FUN_14479d2ce(lVar7);
      if (lVar6 == param_2) {
        if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0x50))) {
          cVar4 = FUN_148846f06(param_1);
          if (cVar4 == '\0') {
            local_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_d4 = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            local_60 = DAT_14cb7bd68;
            local_58 = DAT_14cb7bd70;
            local_54 = DAT_14cb7bd80;
            local_4c = DAT_14cb7bd88;
            local_48 = 0;
            local_40 = 0;
            local_d8[0] = 4;
            FUN_148846e16(param_1,&local_d4);
            FUN_148846e8e(param_1,&local_100);
            uStack_c0 = local_f8;
            uStack_c8 = (undefined4)local_100;
            uStack_c4 = (undefined4)((ulonglong)local_100 >> 0x20);
            lVar7 = *(longlong *)(param_1 + 0x48);
            uVar8 = (ulonglong)(uVar9 & 0x7fffffff);
            lVar10 = uVar8 * 0x40;
            local_f8 = *(undefined4 *)(lVar7 + 0x10 + lVar10);
            local_100 = *(undefined8 *)(lVar7 + 8 + lVar10);
            local_ec = *(undefined4 *)(lVar7 + 0x1c + lVar10);
            local_f4 = *(undefined8 *)(lVar7 + 0x14 + lVar10);
            local_e8 = *(undefined8 *)(lVar7 + 0x20 + lVar10);
            local_40 = *(undefined4 *)(lVar7 + 0x28 + lVar10);
            local_60 = local_100;
            local_58 = local_f8;
            local_54 = local_f4;
            local_4c = local_ec;
            local_48 = local_e8;
            FUN_148846f6c(param_1,local_d8);
            FUN_14105a12a(local_d8);
          }
          else {
            uVar8 = (ulonglong)(uVar9 & 0x7fffffff);
          }
          FUN_140457ffc(param_2 + 0x2b8,param_1);
          lVar7 = *(longlong *)(param_1 + 0x48);
          lVar10 = uVar8 * 0x40;
          *(undefined8 *)(lVar7 + 0x30 + lVar10) = 0;
          plVar3 = *(longlong **)(lVar7 + 0x38 + lVar10);
          if (plVar3 != (longlong *)0x0) {
            *(undefined8 *)(lVar7 + lVar10 + 0x38) = 0;
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
          _Dst = (void *)(lVar10 + *(longlong *)(param_1 + 0x48));
          FUN_148d29782(_Dst,1);
          iVar5 = *(int *)(param_1 + 0x50);
          if (iVar5 - 1U != uVar9) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~uVar9 + iVar5) << 6);
            iVar5 = *(int *)(param_1 + 0x50);
          }
          *(int *)(param_1 + 0x50) = iVar5 + -1;
          FUN_148846dbe(param_1);
        }
        break;
      }
      lVar7 = lVar7 + 0x40;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1dc24 FUN_148d1dc24 body=180 status=ok
// SIG undefined FUN_148d1dc24(void)

void FUN_148d1dc24(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + *(longlong *)(param_1 + 0x48);
    bVar4 = false;
    lVar7 = *(longlong *)(param_1 + 0x48);
    do {
      while( true ) {
        lVar6 = lVar7 + 0x40;
        lVar2 = *(longlong *)(lVar7 + 0x30);
        if (lVar2 == 0) break;
        lVar7 = *(longlong *)(lVar7 + 0x38);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
          UNLOCK();
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14107fe10(param_2,iVar1);
        }
        lVar3 = *param_2;
        *(longlong *)(lVar3 + (longlong)iVar1 * 0x10) = lVar2;
        *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar7;
        bVar4 = true;
        lVar7 = lVar6;
        if (lVar6 == lVar5) {
          return;
        }
      }
      lVar7 = lVar6;
    } while (lVar6 != lVar5);
    if (bVar4) {
      return;
    }
  }
  FUN_1410d72b6(param_1,param_2);
  return;
}



// FUNCTION 148d1dcd8 FUN_148d1dcd8 body=388 status=ok
// SIG undefined FUN_148d1dcd8(void)

void FUN_148d1dcd8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x50) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  lVar11 = *(longlong *)(param_1 + 0x48);
  lVar12 = (longlong)*(int *)(param_1 + 0x50) << 6;
  do {
    cVar9 = FUN_144729dda(lVar11);
    if (cVar9 != '\0') {
      lVar13 = param_2[1];
      uVar10 = (int)lVar13 + 1;
      *(uint *)(param_2 + 1) = uVar10;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar10) {
        FUN_1457ecdd8(param_2);
      }
      lVar3 = *param_2;
      lVar13 = (longlong)(int)lVar13 * 0xa0;
      memset((void *)(lVar13 + lVar3),0,0xa0);
      *(undefined8 *)(lVar3 + 0x78 + lVar13) = DAT_14cb7bd68;
      *(undefined4 *)(lVar3 + 0x80 + lVar13) = DAT_14cb7bd70;
      *(undefined8 *)(lVar3 + 0x84 + lVar13) = DAT_14cb7bd80;
      *(undefined4 *)(lVar3 + 0x8c + lVar13) = DAT_14cb7bd88;
      *(undefined8 *)(lVar3 + 0x90 + lVar13) = 0;
      *(undefined4 *)(lVar3 + 0x98 + lVar13) = 0;
      *(undefined1 *)(lVar3 + lVar13) = 3;
      FUN_148846e16(param_1,&local_4c);
      *(undefined4 *)(lVar3 + 0xc + lVar13) = local_44;
      *(undefined8 *)(lVar3 + 4 + lVar13) = local_4c;
      FUN_148846e8e(param_1);
      *(undefined4 *)(lVar3 + 0x18 + lVar13) = local_44;
      *(undefined8 *)(lVar3 + 0x10 + lVar13) = local_4c;
      *(undefined4 *)(lVar3 + 0x98 + lVar13) = *(undefined4 *)(lVar11 + 0x28);
      uVar4 = *(undefined4 *)(lVar11 + 8);
      uVar5 = *(undefined4 *)(lVar11 + 0xc);
      uVar6 = *(undefined4 *)(lVar11 + 0x10);
      uVar7 = *(undefined4 *)(lVar11 + 0x14);
      uVar8 = *(undefined8 *)(lVar11 + 0x20);
      puVar2 = (undefined8 *)(lVar3 + 0x88 + lVar13);
      *puVar2 = *(undefined8 *)(lVar11 + 0x18);
      puVar2[1] = uVar8;
      puVar1 = (undefined4 *)(lVar3 + 0x78 + lVar13);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
    lVar11 = lVar11 + 0x40;
    lVar12 = lVar12 + -0x40;
  } while (lVar12 != 0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1de78 FUN_148d1de78 body=1165 status=ok
// SIG undefined FUN_148d1de78(void)

void FUN_148d1de78(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_158 [40];
  code *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  longlong local_c0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == (longlong *)0x0) goto LAB_148d1e260;
  uVar5 = FUN_140427846();
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_148d1e260;
  uVar5 = FUN_140427846();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (plVar7 == (longlong *)0x0 || plVar6 == plVar7) goto LAB_148d1e260;
  (**(code **)(*plVar7 + 0x50))(plVar7,&local_e8);
  FUN_140ac173c(&local_10c,&local_e8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (iStack_f4 == 0) goto LAB_148d1e260;
  if ((longlong)*(int *)(param_1 + 0x50) == 0) {
    iVar9 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x48);
    lVar12 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      plVar6 = (longlong *)FUN_14479d2ce(lVar10);
      if (plVar6 == param_2) goto LAB_148d1e260;
      lVar10 = lVar10 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
    iVar9 = *(int *)(param_1 + 0x50);
  }
  *(uint *)(param_1 + 0x50) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar9 + 1U) {
    FUN_148d2ab60(param_1 + 0x48,iVar9);
  }
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar11 = (longlong)iVar9 * 0x40;
  lVar12 = lVar10 + lVar11;
  puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar10 + lVar11) = 0;
  ((undefined8 *)(lVar10 + lVar11))[1] = 0;
  *(undefined8 *)(lVar10 + 8 + lVar11) = DAT_14cb7bd68;
  *(undefined4 *)(lVar10 + 0x10 + lVar11) = DAT_14cb7bd70;
  *(undefined8 *)(lVar10 + 0x14 + lVar11) = DAT_14cb7bd80;
  *(undefined4 *)(lVar10 + 0x1c + lVar11) = DAT_14cb7bd88;
  *(undefined8 *)(lVar10 + 0x20 + lVar11) = 0;
  *(undefined4 *)(lVar10 + 0x28 + lVar11) = 0;
  puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_14485c47a(lVar12,param_2);
  *(undefined4 *)(lVar10 + 0x28 + lVar11) = local_ec;
  puVar3 = (undefined4 *)(lVar10 + 0x18 + lVar11);
  *puVar3 = uStack_fc;
  puVar3[1] = uStack_f8;
  puVar3[2] = iStack_f4;
  puVar3[3] = uStack_f0;
  puVar3 = (undefined4 *)(lVar10 + 8 + lVar11);
  *puVar3 = local_10c;
  puVar3[1] = uStack_108;
  puVar3[2] = uStack_104;
  puVar3[3] = uStack_100;
  FUN_148846fc6(param_1,&local_130);
  puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_FUN_14b400bc0;
  puVar2 = puVar8 + 2;
  FUN_14105926a(puVar2,&local_130);
  uStack_e0 = SUB84(puVar8,0);
  uStack_dc = (undefined4)((ulonglong)puVar8 >> 0x20);
  local_e8 = puVar2;
  FUN_14105930c(&local_e8,puVar2);
  plVar6 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 **)(lVar12 + 0x30) = local_e8;
    plVar7 = *(longlong **)(lVar12 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar12 + 0x38) = 0;
LAB_148d1e2cb:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
joined_r0x000148d1e2bb:
        if (iVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined8 **)(lVar12 + 0x30) = local_e8;
    plVar7 = *(longlong **)(lVar12 + 0x38);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar9 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000148d1e2bb;
      }
    }
    else {
      *(longlong **)(lVar12 + 0x38) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_148d1e2cb;
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar6 = (longlong *)CONCAT44(uStack_124,local_128);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_14106c8ae(*(undefined8 *)(lVar11 + 0x30 + lVar10),param_2,DAT_14cb7cbe8);
  local_130 = FUN_148d1d9a8;
  local_128 = 0;
  FUN_148d2abe6(&local_e8,param_1);
  FUN_14490d954(param_2 + 0x57,&local_130,&local_e8);
  FUN_1449db362(&local_e8);
  FUN_148846dbe(param_1);
  cVar4 = FUN_148846f06(param_1);
  puVar2 = local_e8;
  if (cVar4 == '\0') {
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_70 = DAT_14cb7bd68;
    local_68 = DAT_14cb7bd70;
    local_64 = DAT_14cb7bd80;
    local_5c = DAT_14cb7bd88;
    local_58 = 0;
    local_50 = 0;
    local_e8._0_4_ = CONCAT31(SUB83(puVar2,1),3);
    FUN_148846e16(param_1,(longlong)&local_e8 + 4);
    FUN_148846e8e(param_1,&local_130);
    uStack_d0 = local_128;
    uStack_d8 = SUB84(local_130,0);
    uStack_d4 = (undefined4)((ulonglong)local_130 >> 0x20);
    local_128 = uStack_104;
    local_130 = (code *)CONCAT44(uStack_108,local_10c);
    local_11c = uStack_f8;
    local_68 = uStack_104;
    local_50 = local_ec;
    local_5c = uStack_f8;
    FUN_148846f6c(param_1,&local_e8);
    FUN_14105a12a(&local_e8);
  }
LAB_148d1e260:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1e306 FUN_148d1e306 body=322 status=ok
// SIG undefined FUN_148d1e306(void)

longlong * FUN_148d1e306(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148d1e32c:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d1e32c;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_40 = plVar3;
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
  plVar6 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_148d2b0d0(plVar6,&local_48);
  plVar3 = plVar6 + 2;
  local_30 = plVar3;
  local_28 = plVar6;
  FUN_148d2b206(&local_30,plVar3);
  plVar2 = local_28;
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d1e44c FUN_148d1e44c body=238 status=ok
// SIG undefined FUN_148d1e44c(void)

longlong * FUN_148d1e44c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b96e170;
  plVar1 = plVar4 + 2;
  FUN_148847064(plVar1,param_1 + 8);
  plVar4[2] = (longlong)&PTR_FUN_14b942fe0;
  *(undefined1 *)(plVar4 + 0x11) = *(undefined1 *)(param_1 + 0x40);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_148d2b2d6(&local_40,plVar1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1e53e FUN_148d1e53e body=79 status=ok
// SIG undefined FUN_148d1e53e(void)

undefined8 * FUN_148d1e53e(undefined8 *param_1,longlong *param_2)

{
  FUN_1488554ba();
  *param_1 = &PTR_FUN_14b96b1e0;
  param_1[0x29] = 0;
  FUN_145833896(param_1 + 0x2a);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    FUN_1465cce92();
  }
  return param_1;
}



// FUNCTION 148d1e58e FUN_148d1e58e body=532 status=ok
// SIG undefined FUN_148d1e58e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148d1e58e(longlong param_1,undefined4 param_2,float param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_1498 [32];
  undefined1 local_1478;
  float local_1468;
  undefined1 local_1464;
  undefined8 local_1458 [16];
  undefined8 local_13d8 [2];
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined4 local_13b0;
  undefined4 uStack_13ac;
  undefined4 uStack_13a8;
  undefined4 uStack_13a4;
  undefined8 local_13a0;
  undefined4 local_1398;
  undefined1 local_1388 [2088];
  longlong local_b60;
  longlong local_ad8;
  undefined4 local_ac8;
  undefined1 local_ac4;
  undefined4 local_ab8;
  float local_ab4;
  float local_ab0;
  longlong local_1d0;
  longlong local_148;
  char local_b8;
  ulonglong local_70;
  undefined8 uStack_38;
  
  uStack_38 = 0x148d1e5a0;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1498;
  local_1478 = param_5;
  FUN_1402da024();
  fVar4 = (float)FUN_1402db1d8(param_1,param_3,
                               CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_5) & 0xffffffff);
  if ((*(longlong *)(param_1 + 0x148) != 0) && ((*(byte *)(param_1 + 0x16c) & 4) != 0)) {
    FUN_1479915ae(&local_ab8,param_4);
    local_13b8 = DAT_14c8464f0;
    local_13c8 = DAT_14c8464e0;
    uStack_13c0 = DAT_14c8464e8;
    local_13b0 = (undefined4)DAT_14c8464f8;
    uStack_13ac = DAT_14c8464f8._4_4_;
    uStack_13a8 = (undefined4)DAT_14c846500;
    uStack_13a4 = DAT_14c846500._4_4_;
    local_13a0 = DAT_14c846508;
    local_1398 = 0;
    local_ab8 = param_2;
    local_ab4 = fVar4;
    local_ab0 = param_3;
    FUN_144894d4c(local_1388);
    local_ac8 = 0;
    local_ac4 = 0;
    FUN_147991732(*(undefined8 *)(param_1 + 0x148),&local_ab8,&local_13c8);
    local_13d8[0] = 0;
    local_1468 = local_ab4 * local_ab0;
    if (local_1468 <= 0.0) {
      local_1468 = 0.0;
    }
    local_1464 = *(undefined1 *)(param_1 + 0x34);
    puVar2 = (undefined8 *)(param_1 + 0xc0);
    puVar3 = local_1458;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_14485c47a(local_13d8,*(undefined8 *)(param_1 + 0x40));
    FUN_147991740(&local_1468,&local_13c8,param_4);
    if (local_ad8 != 0) {
      FUN_1400020a8();
    }
    if (local_b60 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 == '\x01') {
      local_b8 = '\0';
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_1d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1e7a4 FUN_148d1e7a4 body=1022 status=ok
// SIG undefined FUN_148d1e7a4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148d1e7a4(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined1 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_13f8 [32];
  undefined8 local_13d8;
  undefined4 *local_13d0;
  undefined4 local_13c8;
  undefined4 uStack_13c4;
  undefined4 uStack_13c0;
  undefined4 uStack_13bc;
  undefined8 local_13b8;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined4 local_1390;
  undefined4 uStack_138c;
  undefined4 uStack_1388;
  undefined4 uStack_1384;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined1 local_1368 [2088];
  longlong local_b40;
  longlong local_ab8;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined8 local_a98;
  longlong *local_a90;
  undefined1 local_a88 [2264];
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  undefined8 uStack_38;
  
  uStack_38 = 0x148d1e7b6;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_13f8;
  local_13c8 = *param_6;
  uStack_13c4 = param_6[1];
  uStack_13c0 = param_6[2];
  uStack_13bc = param_6[3];
  local_13d0 = &local_13c8;
  local_13b8 = *(undefined8 *)(param_6 + 4);
  local_13d8 = CONCAT71(local_13d8._1_7_,param_5);
  FUN_140ad2c8e(param_1,param_2);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar6 = FUN_1465cce92();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      uVar7 = thunk_FUN_14050fd64();
      local_13d8 = 0;
      FUN_14088df30(uVar7,&local_a98,plVar3,0);
      plVar1 = local_a90;
      if ((undefined8 *)(param_1 + 0x18) != &local_a98) {
        *(ulonglong *)(param_1 + 0x18) = local_a98;
        local_a98 = 0;
        plVar4 = *(longlong **)(param_1 + 0x20);
        if (local_a90 != plVar4) {
          local_a90 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x20) = plVar1;
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
      }
      plVar1 = local_a90;
      if (local_a90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a90 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_a90)(local_a90);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      lVar5 = FUN_148d1eba4(plVar3 + 0x13);
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x148);
        if (lVar5 == 0) {
          lVar6 = FUN_14802ec90(param_2);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          *(longlong *)(param_1 + 0x148) = lVar6;
        }
        lVar8 = FUN_148d1eba4(plVar3 + 0x13);
        lVar6 = *(longlong *)(param_1 + 0x148);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        *(longlong *)(lVar6 + 0x28) = lVar8;
        *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x30) =
             *(undefined4 *)((longlong)plVar3 + 0x7c);
        *(float *)(*(longlong *)(param_1 + 0x148) + 0x34) = *(float *)(plVar3 + 0x10) * param_4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x38) =
             *(undefined4 *)((longlong)plVar3 + 0x84);
        *(int *)(*(longlong *)(param_1 + 0x148) + 0x3c) = (int)plVar3[0x11];
        uVar9 = 0;
        if ((*(byte *)(plVar3 + 0x12) & 1) != 0) {
          uVar9 = *(undefined4 *)((longlong)plVar3 + 0x8c);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x40) = uVar9;
        *(byte *)(*(longlong *)(param_1 + 0x148) + 0x44) = *(byte *)(plVar3 + 0x12) & 1;
        if (lVar5 == 0) {
          local_a98 = local_a98 & 0xffffff0000000000;
          local_a90 = (longlong *)0x0;
          FUN_14799139e(*(undefined8 *)(param_1 + 0x148),&local_a98);
          FUN_14799128a(param_1 + 0x150,&local_a98);
          FUN_147991724(*(undefined8 *)(param_1 + 0x148),plVar3 + 0x18);
        }
        else {
          local_a98 = 0x3f80000000000000;
          local_a90._0_4_ = 0x3f800000;
          FUN_1400e6e60(local_a88);
          local_a98 = CONCAT44(param_4 * *(float *)(plVar3 + 0x10),*(undefined4 *)(param_1 + 0x160))
          ;
          local_a90 = (longlong *)CONCAT44(local_a90._4_4_,0x3f800000);
          local_1398 = DAT_14c8464f0;
          local_13a8 = DAT_14c8464e0;
          uStack_13a0 = DAT_14c8464e8;
          local_1390 = (undefined4)DAT_14c8464f8;
          uStack_138c = DAT_14c8464f8._4_4_;
          uStack_1388 = (undefined4)DAT_14c846500;
          uStack_1384 = DAT_14c846500._4_4_;
          local_1380 = DAT_14c846508;
          local_1378 = 0;
          FUN_144894d4c(local_1368);
          local_aa8 = 0;
          local_aa4 = 0;
          FUN_147991b60(*(undefined8 *)(param_1 + 0x148),&local_a98,&local_13a8);
          if (local_ab8 != 0) {
            FUN_1400020a8();
          }
          if (local_b40 != 0) {
            FUN_1400020a8();
          }
          if (local_98 == '\x01') {
            local_98 = '\0';
          }
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_13f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1eba4 FUN_148d1eba4 body=197 status=ok
// SIG undefined FUN_148d1eba4(void)

longlong FUN_148d1eba4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14121c0ce();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148d1ec6a FUN_148d1ec6a body=59 status=ok
// SIG undefined FUN_148d1ec6a(void)

bool FUN_148d1ec6a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1402da012();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else if (*(longlong *)(param_1 + 0x148) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(float *)(param_1 + 0x150) <= *(float *)(param_1 + 0x160);
  }
  return bVar2;
}



// FUNCTION 148d1eca6 FUN_148d1eca6 body=116 status=ok
// SIG undefined FUN_148d1eca6(void)

void FUN_148d1eca6(longlong param_1,char param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14079e64a();
  if ((*(longlong *)(param_1 + 0x148) != 0) &&
     (*(float *)(param_1 + 0x160) < *(float *)(param_1 + 0x150))) {
    local_19 = param_2;
    FUN_147991b6e();
  }
  if (param_2 != '\0') {
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1ed1c FUN_148d1ed1c body=486 status=ok
// SIG undefined FUN_148d1ed1c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148d1ed1c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1468 [32];
  float local_1448;
  undefined1 local_1444;
  undefined8 local_1438 [16];
  undefined8 local_13b8 [2];
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined4 local_1390;
  undefined4 uStack_138c;
  undefined4 uStack_1388;
  undefined4 uStack_1384;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined1 local_1368 [2088];
  longlong local_b40;
  longlong local_ab8;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined4 local_a98;
  float local_a94;
  float local_a90;
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  undefined8 uStack_38;
  
  uStack_38 = 0x148d1ed2e;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1468;
  FUN_148855546();
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_14799151e(param_1 + 0x150);
    if ((*(byte *)(param_1 + 0x16c) & 4) != 0) {
      FUN_147991a64(&local_a98,param_3);
      local_a94 = *(float *)(param_1 + 0x28);
      local_a90 = 1.0;
      local_1398 = DAT_14c8464f0;
      local_13a8 = DAT_14c8464e0;
      uStack_13a0 = DAT_14c8464e8;
      local_1390 = (undefined4)DAT_14c8464f8;
      uStack_138c = DAT_14c8464f8._4_4_;
      uStack_1388 = (undefined4)DAT_14c846500;
      uStack_1384 = DAT_14c846500._4_4_;
      local_1380 = DAT_14c846508;
      local_1378 = 0;
      local_a98 = param_2;
      FUN_144894d4c(local_1368);
      local_aa8 = 0;
      local_aa4 = 0;
      FUN_147991b60(*(undefined8 *)(param_1 + 0x148),&local_a98,&local_13a8);
      local_13b8[0] = 0;
      local_1448 = local_a94 * local_a90;
      if (local_1448 <= 0.0) {
        local_1448 = 0.0;
      }
      local_1444 = *(undefined1 *)(param_1 + 0x34);
      puVar2 = (undefined8 *)(param_1 + 0xc0);
      puVar3 = local_1438;
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_14485c47a(local_13b8,*(undefined8 *)(param_1 + 0x40));
      FUN_147991740(&local_1448,&local_13a8,param_3);
      if (local_ab8 != 0) {
        FUN_1400020a8();
      }
      if (local_b40 != 0) {
        FUN_1400020a8();
      }
      if (local_98 == '\x01') {
        local_98 = '\0';
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (local_1b0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1ef04 FUN_148d1ef04 body=136 status=ok
// SIG undefined FUN_148d1ef04(void)

float FUN_148d1ef04(longlong param_1)

{
  float fVar1;
  undefined1 auStack_58 [40];
  float local_30;
  char local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar1 = (float)FUN_143d46600();
  if ((*(longlong *)(param_1 + 0x148) != 0) && ((*(byte *)(param_1 + 0x16c) & 4) != 0)) {
    local_30 = 0.0;
    local_2c = '\0';
    local_28 = 0;
    FUN_14799139e(*(longlong *)(param_1 + 0x148),&local_30);
    if ((local_2c == '\0') && (fVar1 <= local_30)) {
      fVar1 = local_30;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1ef8e FUN_148d1ef8e body=65 status=ok
// SIG undefined FUN_148d1ef8e(void)

void FUN_148d1ef8e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1415a48c8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d1efe4 FUN_148d1efe4 body=37 status=ok
// SIG undefined FUN_148d1efe4(void)

void FUN_148d1efe4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148d1f00a();
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0x140) = (uint)*(byte *)(lVar1 + 0x710);
  }
  return;
}



// FUNCTION 148d1f00a FUN_148d1f00a body=129 status=ok
// SIG undefined FUN_148d1f00a(void)

longlong FUN_148d1f00a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
    lVar4 = FUN_140334a94(plVar1,uVar3);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x398) != 0)) {
      lVar5 = FUN_144a7b4ca();
      lVar4 = *(longlong *)(lVar4 + 0x398);
      if (lVar4 != 0) {
        if (lVar5 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar4 + 0x10);
        if (lVar2 == 0) {
          return 0;
        }
        if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
              lVar5 + 0x30) {
            return 0;
          }
          return lVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148d1f08c FUN_148d1f08c body=65 status=ok
// SIG undefined FUN_148d1f08c(void)

void FUN_148d1f08c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_148d1f00a();
  if (lVar1 != 0) {
    lVar2 = FUN_1405c673d();
    FUN_145be8d4c(lVar1,*(undefined1 *)(lVar2 + 0x54),1);
    FUN_1459ca14e(param_1,2);
    return;
  }
  return;
}



// FUNCTION 148d1f0ce FUN_148d1f0ce body=36 status=ok
// SIG undefined FUN_148d1f0ce(void)

bool FUN_148d1f0ce(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 800))();
  lVar2 = FUN_1405c673d();
  return uVar1 == *(byte *)(lVar2 + 0x54);
}



// FUNCTION 148d1f0f2 FUN_148d1f0f2 body=57 status=ok
// SIG undefined FUN_148d1f0f2(void)

void FUN_148d1f0f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148d1f00a();
  if (lVar1 != 0) {
    FUN_145be8d4c(lVar1,*(undefined1 *)(param_1 + 0x140),1);
    FUN_1459ca14e(param_1,3);
    return;
  }
  return;
}



// FUNCTION 148d1f134 FUN_148d1f134 body=74 status=ok
// SIG undefined FUN_148d1f134(void)

void FUN_148d1f134(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1405c673d();
  if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0x30))) {
    lVar1 = FUN_148d1f00a(param_1);
    if (lVar1 != 0) {
      FUN_145be8d4c(lVar1,param_2,1);
      FUN_1459ca14e(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148d1f17e FUN_148d1f17e body=33 status=ok
// SIG undefined FUN_148d1f17e(void)

ulonglong FUN_148d1f17e(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_148d1f00a();
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (ulonglong)*(byte *)(lVar1 + 0x710);
  }
  return uVar2;
}



// FUNCTION 148d1f1a0 FUN_148d1f1a0 body=457 status=ok
// SIG undefined FUN_148d1f1a0(void)

longlong * FUN_148d1f1a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = FUN_1405c673d();
  if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
    lVar9 = (longlong)*(int *)(lVar5 + 0x30) * 0x170;
    plVar8 = (longlong *)(*(longlong *)(lVar5 + 0x28) + 0x48);
    do {
      if ((char)plVar8[-4] != '\0') break;
      lVar5 = plVar8[1];
      if (lVar5 == 0) {
        uVar6 = FUN_1465f8f8a();
        lVar5 = FUN_14477b664(uVar6);
        plVar8[1] = lVar5;
      }
      lVar7 = plVar8[2];
      if (lVar7 == 0) {
        if ((*plVar8 != 0) && (lVar5 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            plVar8[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar6,plVar8);
            plVar8[2] = lVar7;
            if (lVar7 != 0) goto LAB_148d1f224;
          }
        }
        FUN_140056680(local_68,L"Missing UXDisplayInfo");
        FUN_140233b1a(&local_58,local_68);
        bVar3 = true;
      }
      else {
LAB_148d1f224:
        local_58 = *(longlong **)(lVar7 + 0x18);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        local_50 = *(undefined4 *)(lVar7 + 0x20);
        bVar3 = false;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14001d63e(param_2,iVar1);
      }
      lVar5 = *param_2;
      *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      *(undefined4 *)(lVar5 + (longlong)iVar1 * 0x10 + 8) = local_50;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if ((bVar3) && (local_68[0] != 0)) {
        FUN_1400020a8();
      }
      plVar8 = plVar8 + 0x2e;
      lVar9 = lVar9 + -0x170;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148d1f374 FUN_148d1f374 body=94 status=ok
// SIG undefined FUN_148d1f374(void)

undefined8 * FUN_148d1f374(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,&DAT_149dfb77a);
  *param_2 = local_28;
  *(undefined4 *)(param_2 + 1) = local_20;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1f3d4 FUN_148d1f3d4 body=94 status=ok
// SIG undefined FUN_148d1f3d4(void)

undefined8 * FUN_148d1f3d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,&DAT_149dfb77a);
  *param_2 = local_28;
  *(undefined4 *)(param_2 + 1) = local_20;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1f43e FUN_148d1f43e body=122 status=ok
// SIG undefined FUN_148d1f43e(void)

longlong FUN_148d1f43e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x4da0);
      if (lVar1 != 0) {
        lVar2 = FUN_144a78b9e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          return lVar1;
        }
      }
      return 0;
    }
  }
  lVar1 = FUN_148861628(param_1,param_2);
  return lVar1;
}



// FUNCTION 148d1f4b8 FUN_148d1f4b8 body=362 status=ok
// SIG undefined FUN_148d1f4b8(void)

undefined8 * FUN_148d1f4b8(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b761f50;
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = FUN_145a8b83c();
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar4);
    *(undefined4 *)(param_1 + 2) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    if (param_1 + 2 == (undefined8 *)&local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_148d1f5f6;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar4);
  }
LAB_148d1f5f6:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1f624 FUN_148d1f624 body=136 status=ok
// SIG undefined FUN_148d1f624(void)

undefined8 * FUN_148d1f624(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == '\x02') {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  return param_2;
}



// FUNCTION 148d1f6ac FUN_148d1f6ac body=327 status=ok
// SIG undefined FUN_148d1f6ac(void)

undefined8 * FUN_148d1f6ac(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e2a(param_1 + 5);
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b7620d0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b96e430;
  FUN_148d1f4b8(plVar3 + 2);
  local_68 = plVar3 + 2;
  local_60 = plVar3;
  FUN_148d1f7f4(local_58);
  FUN_14029d0b6(param_1 + 2,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1f7f4 FUN_148d1f7f4 body=131 status=ok
// SIG undefined FUN_148d1f7f4(void)

undefined8 * FUN_148d1f7f4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148d1f878 FUN_148d1f878 body=70 status=ok
// SIG undefined FUN_148d1f878(void)

void FUN_148d1f878(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar2 = (longlong)*(int *)(param_1 + 0xa8) * 0x70;
    do {
      uVar1 = FUN_144873cc0(lVar3);
      FUN_145d2ddce(param_2,uVar1);
      lVar3 = lVar3 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 148d1f8be FUN_148d1f8be body=92 status=ok
// SIG undefined FUN_148d1f8be(void)

void FUN_148d1f8be(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1488625dc();
  cVar1 = FUN_14885c822(param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_148d1f909;
  }
  param_2 = 0;
LAB_148d1f909:
  FUN_148d1f91a(param_1,param_2);
  return;
}



// FUNCTION 148d1f91a FUN_148d1f91a body=462 status=ok
// SIG undefined FUN_148d1f91a(void)

void FUN_148d1f91a(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xd0);
      do {
        if (*(ulonglong *)(lVar3 + (longlong)iVar5 * 0x30) == param_2) goto LAB_148d1f9f0;
        iVar5 = *(int *)((longlong)iVar5 * 0x30 + lVar3 + 0x28);
      } while (iVar5 != -1);
    }
  }
  lVar3 = FUN_148d1fe6e(param_1);
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xf48), lVar3 != 0 && lVar1 != 0)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = FUN_148d2b62c((longlong *)(param_1 + 0xd0),uVar2 >> 0x10 ^ uVar2,&local_58);
    lVar6 = local_58 + 0x9d8;
    if (*(char *)(local_58 + 0x178) == '\x03') {
      lVar6 = local_58 + 0x3f0;
    }
    FUN_148d1febc(lVar6,&local_60,param_1);
    *(undefined8 *)(lVar4 + 0x18) = local_60;
    if (*(char *)(lVar3 + 0x98) == '\x01') {
      lVar6 = local_58 + 0x2580;
      FUN_148d2010a(param_1,&local_60);
      FUN_1400bc96c(lVar6,&local_60);
      iVar5 = 0;
      do {
        FUN_145907648(local_58,iVar5,0x3f800000);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 6);
    }
    FUN_148d20154(lVar1,lVar4,lVar3);
  }
LAB_148d1f9f0:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1faea FUN_148d1faea body=92 status=ok
// SIG undefined FUN_148d1faea(void)

void FUN_148d1faea(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1488625ea();
  cVar1 = FUN_14885c822(param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) goto LAB_148d1fb35;
  }
  param_2 = 0;
LAB_148d1fb35:
  FUN_148d1fb46(param_1,param_2);
  return;
}



// FUNCTION 148d1fb46 FUN_148d1fb46 body=347 status=ok
// SIG undefined FUN_148d1fb46(void)

void FUN_148d1fb46(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar4 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x110);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      do {
        lVar3 = lVar4 + (longlong)iVar2 * 0x30;
        if (*(ulonglong *)(lVar4 + (longlong)iVar2 * 0x30) == param_2) goto LAB_148d1fb7f;
        iVar2 = *(int *)(lVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_148d1fb7f:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if ((param_2 != 0) && (lVar4 != 0)) {
    FUN_14053d8da(lVar4 + 8,1);
    FUN_148d2010a(param_1,local_40);
    FUN_1400bc8c2(param_2 + 0x2580,local_40);
    if (*(longlong *)(lVar4 + 0x18) != 0) {
      lVar4 = param_2 + 0x9d8;
      if (*(char *)(param_2 + 0x178) == '\x03') {
        lVar4 = param_2 + 0x3f0;
      }
      FUN_14480f766(lVar4);
    }
    FUN_148d2be96((longlong *)(param_1 + 0xd0),param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d1fca2 FUN_148d1fca2 body=150 status=ok
// SIG undefined FUN_148d1fca2(void)

void FUN_148d1fca2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_143d52c86();
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar5);
      if (lVar2 == 0) {
LAB_148d1fd0f:
        lVar2 = 0;
      }
      else {
        lVar3 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_148d1fd0f;
      }
      FUN_148d1f91a(param_1,lVar2);
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 148d1fd38 FUN_148d1fd38 body=309 status=ok
// SIG undefined FUN_148d1fd38(void)

void FUN_148d1fd38(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  FUN_143d52df8();
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xf8);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_148d1fb46(param_1,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x30));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    FUN_148d2b3ac(plVar1);
    FUN_148d2b4f4(plVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1fe6e FUN_148d1fe6e body=78 status=ok
// SIG undefined FUN_148d1fe6e(void)

longlong * FUN_148d1fe6e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465d96e6();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d1febc FUN_148d1febc body=244 status=ok
// SIG undefined FUN_148d1febc(void)

undefined8 FUN_148d1febc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14abe5a20;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b96e450;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148d1ffb2;
  FUN_145a58104(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d1ffb2 FUN_148d1ffb2 body=343 status=ok
// SIG undefined FUN_148d1ffb2(void)

void FUN_148d1ffb2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_148d1fe6e();
    lVar3 = FUN_144a2f878();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (uVar4 = (**(code **)(*param_2 + 0x5d8))(param_2), uVar4 != 0)) {
      lVar3 = FUN_144a5dd5e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(uVar4 + 0x10) + 0x38)) && (lVar2 != 0))
         && ((*(longlong *)
               (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
             (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104))))) {
        uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
        lVar3 = param_1 + 0x108;
        if (*(longlong *)(param_1 + 0x110) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x110);
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x118) - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
        if (iVar6 != -1) {
          do {
            lVar3 = *(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x30;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x30) == uVar4) {
              lVar7 = lVar3 + 8;
              if (lVar7 == 0 || lVar3 == 0) {
                return;
              }
              plVar5 = (longlong *)FUN_14479d2ce(lVar7);
              if (plVar5 == param_2) {
                return;
              }
              FUN_14053d8da(lVar3 + 0x10,1);
              FUN_148d20154(param_2,lVar7,lVar2);
              return;
            }
            iVar6 = *(int *)(lVar3 + 0x28);
          } while (iVar6 != -1);
        }
      }
    }
  }
  return;
}



// FUNCTION 148d2010a FUN_148d2010a body=73 status=ok
// SIG undefined FUN_148d2010a(void)

undefined8 FUN_148d2010a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1488623ca();
  if (lVar1 == 0) {
    FUN_1446ddc76(param_2,"game_mode_module_player_modifiers",1);
  }
  else {
    FUN_1447325ac(*(longlong *)(lVar1 + 0x5e8) + 0x3c0,param_2,1);
  }
  return param_2;
}



// FUNCTION 148d20154 FUN_148d20154 body=190 status=ok
// SIG undefined FUN_148d20154(void)

void FUN_148d20154(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14485c47a(param_2,param_1);
  local_98[0] = 0;
  local_70 = 0;
  FUN_1456bb102(local_98,param_1);
  local_68[0] = 0;
  local_40 = 0;
  local_b0 = &local_99;
  local_b8 = 0;
  FUN_140c3fc86(param_3 + 0xa0,param_2 + 8,param_1,local_98);
  FUN_144a5ac3a(local_68);
  FUN_144a5ac3a(local_98);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d20214 FUN_148d20214 body=140 status=ok
// SIG undefined FUN_148d20214(void)

void FUN_148d20214(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"ArmorToRegenerate",1);
  uVar1 = FUN_145a8a0b4();
  FUN_145a8a0b4();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d202a2 FUN_148d202a2 body=106 status=ok
// SIG undefined FUN_148d202a2(void)

void FUN_148d202a2(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_141864c04();
  if (cVar1 != '\0') {
    FUN_148d2bfcb(*(longlong *)(param_1 + 0xb8),
                  *(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xc0) * 8,&local_11);
    FUN_1487bbc9e(param_1);
    FUN_148d2030e(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2030e FUN_148d2030e body=170 status=ok
// SIG undefined FUN_148d2030e(void)

void FUN_148d2030e(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0xc0);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0xb8);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1401b309e(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 << 3);
  }
  FUN_148beb3f8(param_1 + 0xa8,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d203b9 FUN_148d203b9 body=783 status=ok
// SIG undefined FUN_148d203b9(void)

void FUN_148d203b9(undefined8 param_1,undefined1 param_2,byte param_3,float param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  float *local_310;
  undefined8 local_308;
  byte *local_300;
  undefined *local_2f8;
  undefined2 *local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  undefined2 *local_2d0;
  int local_2c8;
  byte local_2bd;
  float local_2bc;
  undefined8 local_2b8 [4];
  undefined1 local_298;
  undefined8 local_290 [2];
  undefined2 *local_280;
  undefined1 local_270 [32];
  byte local_250;
  undefined1 local_248 [32];
  undefined1 local_228;
  undefined1 local_220 [16];
  longlong local_210;
  undefined1 local_200 [32];
  byte local_1e0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0 [16];
  longlong local_1a0;
  undefined1 local_190 [32];
  byte local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [152];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2bc = param_4;
  if (((DAT_14cbc96bc != 0) && (1e-08 < ABS(param_4))) && ('\x02' < DAT_14cbc96b8)) {
    local_1b8 = 0;
    FUN_14101bd16(local_1d8,&DAT_149dfb77a);
    local_318 = (undefined8 *)local_1d8;
    FUN_140d767d6(local_1b0,&DAT_14cbc9680,3,&DAT_149dfb77a);
    cVar1 = FUN_140e27f2c(local_1b0);
    if (cVar1 == '\0') {
      local_298 = 0;
      FUN_14101bd16(local_2b8,&DAT_149dfb77a);
      local_318 = local_2b8;
      FUN_140d767d6(local_290,&DAT_14cbc9680,3,&DAT_149dfb77a);
      FUN_140d76846(local_168,local_290);
    }
    else {
      local_2bd = param_3 ^ 1;
      uVar2 = FUN_145a3b399();
      FUN_1414aa4be(uVar2,local_168,3);
      FUN_1400021e4(local_168,&local_2d0);
      puVar3 = &DAT_149dfb77a;
      if (local_2c8 != 0) {
        puVar3 = local_2d0;
      }
      local_290[0] = FUN_1414aa4f6(puVar3);
      uVar2 = FUN_145a3b399();
      FUN_1414aa4be(uVar2,local_168,param_2);
      FUN_1400021e4(local_168,&local_2e8);
      puVar3 = &DAT_149dfb77a;
      if (local_2e0 != 0) {
        puVar3 = local_2e8;
      }
      local_2d8 = FUN_1414aa4f6(puVar3);
      local_228 = 0;
      FUN_14101bd16(local_248,&DAT_149dfb77a);
      local_318 = (undefined8 *)local_248;
      FUN_140d767d6(local_220,&DAT_14cbc9680,3,&DAT_149dfb77a);
      local_2f8 = &DAT_14cbc9670;
      local_300 = &local_2bd;
      local_308 = param_5;
      local_310 = &local_2bc;
      local_318 = local_290;
      FUN_148d206c9(local_168,local_220,param_1,&local_2d8);
    }
    FUN_14027c224(local_d8,local_168);
    FUN_14027c198(local_d8);
    FUN_1404eeb8e(local_168);
    if (cVar1 == '\0') {
      (*(code *)(&PTR_FUN_14a1842f0)[local_250])(local_270);
    }
    else {
      (*(code *)(&PTR_FUN_14a1842f0)[local_1e0])(local_200);
      if (local_210 != 0) {
        FUN_1400020a8();
      }
      local_280 = local_2d0;
      if (local_2e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
        local_280 = local_2d0;
      }
    }
    if (local_280 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_170])(local_190);
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d206c9 FUN_148d206c9 body=120 status=ok
// SIG undefined FUN_148d206c9(void)

undefined8
FUN_148d206c9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_148d2c076(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return param_1;
}



// FUNCTION 148d20741 FUN_148d20741 body=1635 status=ok
// SIG undefined FUN_148d20741(void)

void FUN_148d20741(undefined8 param_1,undefined1 param_2,undefined1 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong unaff_GS_OFFSET;
  float fVar16;
  float fVar17;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined1 *local_290;
  undefined8 local_288;
  byte *local_280;
  undefined *local_278;
  undefined2 *local_270;
  int local_268;
  undefined8 local_260;
  int local_258;
  undefined4 uStack_254;
  int local_250;
  undefined8 local_248;
  byte local_239;
  undefined8 local_238 [4];
  undefined1 local_218;
  undefined1 local_210 [32];
  undefined1 local_1f0;
  longlong local_1e8 [2];
  longlong local_1d8;
  undefined1 local_1c8 [32];
  byte local_1a8;
  undefined1 local_1a0 [32];
  undefined1 local_180;
  longlong local_178 [2];
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [144];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((DAT_14cbc96bc != 0) && ('\x02' < DAT_14cbc96b8)) {
    local_180 = 0;
    FUN_14101bd16(local_1a0,&DAT_149dfb77a);
    local_298 = (undefined8 *)local_1a0;
    FUN_140d767d6(local_178,&DAT_14cbc9680,3,&DAT_149dfb77a);
    cVar4 = FUN_140e27f2c(local_178);
    if (cVar4 == '\0') {
      local_218 = 0;
      FUN_14101bd16(local_238,&DAT_149dfb77a);
      local_298 = local_238;
      FUN_140d767d6(local_1e8,&DAT_14cbc9680,3,&DAT_149dfb77a);
      FUN_140d76846(local_130,local_1e8);
      (*(code *)(&PTR_FUN_14a1842f0)[local_1a8])(local_1c8);
    }
    else {
      local_239 = param_4 ^ 1;
      uVar5 = FUN_145a3b399();
      FUN_1414aa4be(uVar5,local_130,param_3);
      FUN_1400021e4(local_130,&local_258);
      uVar5 = param_6;
      puVar11 = &DAT_149dfb77a;
      if (local_250 != 0) {
        puVar11 = (undefined2 *)CONCAT44(uStack_254,local_258);
      }
      local_248 = FUN_1414aa4f6(puVar11);
      uVar6 = FUN_145a3b399();
      FUN_1414aa4be(uVar6,local_130,param_2);
      FUN_1400021e4(local_130,&local_270);
      puVar11 = &DAT_149dfb77a;
      if (local_268 != 0) {
        puVar11 = local_270;
      }
      local_260 = FUN_1414aa4f6(puVar11);
      local_1f0 = 0;
      FUN_14101bd16(local_210,&DAT_149dfb77a);
      local_298 = (undefined8 *)local_210;
      FUN_140d767d6(local_1e8,&DAT_14cbc9680,3,&DAT_149dfb77a);
      local_278 = &DAT_14cbc9678;
      local_280 = &local_239;
      local_288 = uVar5;
      local_290 = (undefined1 *)&param_5;
      local_298 = &local_248;
      FUN_148d206c9(local_130,local_1e8,param_1,&local_260);
      (*(code *)(&PTR_FUN_14a1842f0)[local_1a8])(local_1c8);
      if (local_1d8 != 0) {
        FUN_1400020a8();
      }
      if (local_270 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_1d8 = CONCAT44(uStack_254,local_258);
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    cVar4 = FUN_1411b2f98(local_130);
    if (cVar4 != '\0') {
      if ((longlong)(int)param_7[1] != 0) {
        plVar14 = (longlong *)*param_7;
        plVar1 = plVar14 + (int)param_7[1];
        do {
          plVar3 = (longlong *)*plVar14;
          if (plVar3 != (longlong *)0x0) {
            uVar5 = FUN_144a7b040();
            plVar7 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar5);
            if (plVar7 != (longlong *)0x0) {
              uVar5 = FUN_144a7b040();
              plVar8 = (longlong *)FUN_144718840(plVar7,uVar5);
              if ((plVar8 != (longlong *)0x0 && plVar7 != plVar8) &&
                 (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0)) {
                local_1e8[0] = plVar3[3];
                FUN_1400021e4(local_1e8,local_178);
                if ((longlong)*(int *)(lVar9 + 0x40) == 0) {
                  fVar17 = 0.0;
                }
                else {
                  lVar15 = *(longlong *)(lVar9 + 0x38);
                  lVar13 = (longlong)*(int *)(lVar9 + 0x40) * 0x88;
                  fVar17 = 0.0;
                  do {
                    lVar10 = FUN_145e08e5c(lVar15);
                    if (lVar10 == 0) {
                      local_1e8[0] = 0;
                    }
                    else {
                      puVar12 = *(undefined4 **)(lVar10 + 8);
                      if (puVar12 == (undefined4 *)0x0) {
                        puVar12 = &DAT_14c9485f0;
                      }
                      FUN_1447325ac(puVar12,local_1e8,1);
                    }
                    fVar16 = (float)FUN_14055848a(lVar15);
                    iVar2 = *(int *)(lVar9 + 0x40);
                    fVar16 = fVar16 * 100.0;
                    if ((*(int *)(*(longlong *)
                                   (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                   (ulonglong)_tls_index * 8) + 0x110) < DAT_14cbc98b0) &&
                       (FUN_144b3d300(&DAT_14cbc98b0), DAT_14cbc98b0 == -1)) {
                      DAT_14cbc98a8 = FUN_148d20da6(99);
                      _Init_thread_footer(&DAT_14cbc98b0);
                    }
                    cVar4 = FUN_141567e7e(DAT_14cbc98a8,0);
                    if (cVar4 != '\0') {
                      local_258 = (int)ROUND(fVar16 + fVar16 + 0.5) >> 1;
                      FUN_144121be8(DAT_14cbc98a8,local_178,local_1e8,&local_258);
                    }
                    fVar17 = fVar17 + fVar16 / (float)iVar2;
                    lVar15 = lVar15 + 0x88;
                    lVar13 = lVar13 + -0x88;
                  } while (lVar13 != 0);
                }
                if ((*(int *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cbc98bc) &&
                   (FUN_144b3d300(&DAT_14cbc98bc), DAT_14cbc98bc == -1)) {
                  FUN_1446ddc76(&DAT_14cbc98b4,"total_remaining_hp_percentage",1);
                  _Init_thread_footer(&DAT_14cbc98bc);
                }
                if ((*(int *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cbc98c8) &&
                   (FUN_144b3d300(&DAT_14cbc98c8), DAT_14cbc98c8 == -1)) {
                  DAT_14cbc98c0 = FUN_148d20da6(0x67);
                  _Init_thread_footer(&DAT_14cbc98c8);
                }
                cVar4 = FUN_141567e7e(DAT_14cbc98c0,0);
                if (cVar4 != '\0') {
                  local_1e8[0] = CONCAT44(local_1e8[0]._4_4_,(int)ROUND(fVar17 + fVar17 + 0.5) >> 1)
                  ;
                  FUN_144121be8(DAT_14cbc98c0,local_178,&DAT_14cbc98b4,local_1e8);
                }
                if (local_178[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar1);
      }
      FUN_14027c70a(local_130);
    }
    FUN_1404eeb8e(local_130);
  }
  if ((local_a0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d20da6 FUN_148d20da6 body=107 status=ok
// SIG undefined FUN_148d20da6(void)

longlong FUN_148d20da6(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a2e204(0xf8,L"Boss_Fight");
  lVar2 = FUN_148d2c1be(0xf8);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(lVar1 + 8) = lVar2;
  FUN_145a2e1a4(lVar1,1);
  FUN_145a2e1a2(lVar1,".\\../../OakGame/Source/OakGame/Game/OakAnalytics_BossFight.cpp",param_1);
  return lVar1;
}



// FUNCTION 148d20e12 FUN_148d20e12 body=402 status=ok
// SIG undefined FUN_148d20e12(void)

void FUN_148d20e12(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar7 = *param_3;
    uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar5 = (uint)lVar7 & 0xffff;
    lVar8 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x70);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x14);
        if (*plVar1 == lVar7) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            if ((longlong)*(int *)(param_1 + 0x28) == 0) goto LAB_148d20f16;
            lVar7 = *(longlong *)(param_1 + 0x20);
            lVar8 = (longlong)*(int *)(param_1 + 0x28) << 3;
            goto LAB_148d20ef9;
          }
          break;
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  goto LAB_148d20e35;
  while( true ) {
    lVar7 = lVar7 + 8;
    lVar8 = lVar8 + -8;
    if (lVar8 == 0) break;
LAB_148d20ef9:
    cVar3 = FUN_14088ccfe(lVar7,param_2);
    if (cVar3 != '\0') goto LAB_148d20e35;
  }
LAB_148d20f16:
  local_58[0] = 0;
  FUN_14485c47a(local_58,param_2);
  iVar6 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) {
    FUN_145dce618((longlong *)(param_1 + 0x20),iVar6);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 8) = local_58[0];
  uVar4 = FUN_140e27f24();
  lVar7 = plVar1[1];
  FUN_140d8b592(local_58,param_2);
  local_60 = &local_70;
  local_78 = &local_68;
  local_68 = &LAB_14662691e;
  local_70 = uVar4;
  FUN_140e27f44(uVar4,(int)lVar7,local_58,param_2);
LAB_148d20e35:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d20fa6 FUN_148d20fa6 body=301 status=ok
// SIG undefined FUN_148d20fa6(void)

void FUN_148d20fa6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [36];
  undefined8 local_44 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *param_3;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_44[0] = 0;
            FUN_14485c47a(local_44,param_2);
            iVar4 = FUN_148d210d4(param_1 + 0x20,local_44);
            if (iVar4 != 0) {
              uVar5 = FUN_140e27f24();
              lVar2 = plVar1[1];
              FUN_140d8b592(local_44,param_2);
              FUN_1470ac1d8(uVar5,(int)lVar2,local_44,param_2);
            }
          }
          break;
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d210d4 FUN_148d210d4 body=249 status=ok
// SIG undefined FUN_148d210d4(void)

int FUN_148d210d4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (int)param_1[1];
  iVar3 = iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    bVar5 = false;
    do {
      lVar7 = lVar6 * 8;
      while( true ) {
        cVar2 = FUN_140e27ebc(*param_1 + lVar7,param_2);
        iVar3 = (int)param_1[1];
        if (cVar2 != '\0') break;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
        if (iVar3 <= lVar6) {
          if (bVar5) goto LAB_148d211c0;
          goto LAB_148d211ab;
        }
      }
      do {
        if (iVar3 - 1U != (uint)lVar6) {
          iVar4 = iVar3 + ~(uint)lVar6;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 + -1;
        if (iVar3 + -1 <= lVar6) goto LAB_148d211c0;
        cVar2 = FUN_140e27ebc(*param_1 + lVar7,param_2);
        iVar3 = (int)param_1[1];
      } while (cVar2 != '\0');
      lVar6 = lVar6 + 1;
      bVar5 = true;
    } while (lVar6 < iVar3);
LAB_148d211c0:
    FUN_14586797c(param_1);
    iVar3 = (int)param_1[1];
  }
LAB_148d211ab:
  return iVar1 - iVar3;
}



// FUNCTION 148d211ce FUN_148d211ce body=321 status=ok
// SIG undefined FUN_148d211ce(void)

void FUN_148d211ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    lVar6 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar5 * 0x14) == lVar1) goto LAB_148d212ed;
        iVar5 = *(int *)(lVar6 + (longlong)iVar5 * 0x14 + 0xc);
      } while (iVar5 != -1);
    }
  }
  uVar4 = FUN_140e27f24();
  FUN_1446ddc76(&local_70,"BossFight",1);
  local_48 = (undefined8 *)*param_2;
  local_38 = 0;
  local_50 = local_70;
  local_78 = &local_60;
  local_60 = &LAB_146554320;
  local_68 = uVar4;
  local_58 = &local_68;
  uVar3 = FUN_141427b60(uVar4,1,&local_50,0);
  local_68 = CONCAT44(local_68._4_4_,uVar3);
  local_50 = param_2;
  local_48 = &local_68;
  FUN_148d2c5dc((longlong *)(param_1 + 0x30),&local_60,&local_50);
LAB_148d212ed:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d21310 FUN_148d21310 body=187 status=ok
// SIG undefined FUN_148d21310(void)

void FUN_148d21310(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = FUN_140e27f24();
  local_60 = local_88;
  local_88[0] = 0;
  local_88[1] = 0;
  local_38 = *param_2;
  local_40 = 0;
  local_28 = 0;
  local_68 = &local_48;
  local_48 = 0;
  local_50 = &local_70;
  local_58 = &LAB_14571c398;
  FUN_141427c98(local_70);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c0508e(param_1 + 0x30,*param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d213d4 FUN_148d213d4 body=154 status=ok
// SIG undefined FUN_148d213d4(void)

void FUN_148d213d4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x598) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x410);
    if (lVar1 != 0) {
      lVar3 = FUN_1407fc0e2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_1400bc96c(lVar1 + 0xce0,param_1 + 0x840);
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x598) + 0x410);
    if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x109] == '\0')) {
      *(undefined1 *)(plVar2 + 0x109) = 1;
      (**(code **)(*plVar2 + 0xa98))(plVar2,1);
    }
  }
  FUN_14592bdb2(param_1,0);
  return;
}



// FUNCTION 148d2146e FUN_148d2146e body=327 status=ok
// SIG undefined FUN_148d2146e(void)

longlong * FUN_148d2146e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 2000);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x7e0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x7f8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x7f8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = FUN_14479d2ce((longlong)iStack_6c * 0x14 + *local_88);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447d05f2(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d216d8 FUN_148d216d8 body=256 status=ok
// SIG undefined FUN_148d216d8(void)

void FUN_148d216d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_141362b60(param_1,0);
    local_38 = 0;
    uStack_30 = 0;
    FUN_148d2281c(param_1 + 2000,&local_38);
    FUN_144125248(param_1);
    if (0 < (int)uStack_30) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        lVar1 = FUN_14479d2ce(local_38 + lVar3);
        if (lVar1 != 0) {
          lVar2 = FUN_144a2f878();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_148bf70c2(lVar1 + 0x99b0);
          }
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < (int)uStack_30);
    }
    FUN_14592bdaa(param_1 + 0x648);
    FUN_148d2c79e(param_1 + 0x6c0,param_1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d217da FUN_148d217da body=637 status=ok
// SIG undefined FUN_148d217da(void)

void FUN_148d217da(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141512256(param_1 + 0x7c0);
  FUN_141512256(param_1 + 0x7b0);
  lVar5 = FUN_14151233a();
  if (lVar5 == 0) {
    if (param_3 != 0) {
      lVar5 = FUN_1402095ca();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        iVar1 = *(int *)(param_3 + 0x1ec0);
        if ((longlong)iVar1 != 0) {
          lVar5 = *(longlong *)(param_3 + 0x1eb8);
          lVar6 = 0;
          do {
            if ((*(int *)(lVar5 + 8 + lVar6) != 0) &&
               (plVar2 = *(longlong **)(lVar5 + lVar6), plVar2 != (longlong *)0x0)) {
              cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
              if (cVar4 != '\0') goto LAB_148d21856;
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar6);
        }
        local_60 = FUN_145c7f56c;
        local_58 = 0;
        FUN_148d2200e(param_3 + 0x1eb8,local_50,param_1);
      }
    }
  }
  else {
    lVar6 = FUN_140cf8aa6(lVar5);
    FUN_145c7f56c(param_1,0,lVar5);
    cVar4 = FUN_1449ce79a(lVar5);
    if (lVar6 != 0 && cVar4 == '\x01') {
      local_60 = (code *)0x0;
      FUN_14485c47a(&local_60,lVar6);
      local_68 = FUN_148d2de7e(param_1 + 0x760,(uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60,
                               &local_60);
      iVar1 = *(int *)(param_1 + 0x7b8);
      local_60 = (code *)0x0;
      FUN_14485c47a(&local_60,lVar6);
      FUN_145dce59a(param_1 + 0x7b0,&local_60);
      local_60 = (code *)0x0;
      FUN_14485c47a(&local_60,lVar6);
      FUN_145dce59a(param_1 + 0x7c0,&local_60);
      if (iVar1 != *(int *)(param_1 + 0x7b8)) {
        FUN_148bf1e38(param_1 + 0x710,lVar5);
      }
      uVar3 = local_68;
      FUN_14412497a(param_1,lVar5,local_68);
      if (*(char *)(param_1 + 0x848) == '\x02') {
        FUN_148d2210e(param_1,lVar6);
        if (*(longlong *)(param_1 + 0x590) != 0) {
          FUN_1411d3086(*(longlong *)(param_1 + 0x590),lVar6,0);
        }
      }
      if (param_2 != 0) {
        lVar5 = FUN_140fe7df8();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          local_60 = (code *)0x0;
          FUN_14485c47a(&local_60,param_2);
          FUN_148d2e3be(uVar3,&local_60);
        }
      }
    }
  }
LAB_148d21856:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d21a58 FUN_148d21a58 body=376 status=ok
// SIG undefined FUN_148d21a58(void)

void FUN_148d21a58(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = 0;
  FUN_14025a15c(param_1 + 0x820,0);
  plVar1 = (longlong *)(param_1 + 2000);
  lVar2 = param_1 + 0x7e0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x7f8) != 0) {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0x7f8);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (local_50 != lVar2)) {
    do {
      lVar4 = FUN_14479d2ce((longlong)iStack_64 * 0x14 + *local_80);
      if (lVar4 != 0) {
        lVar5 = FUN_144a2f878();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (*(longlong *)(lVar4 + 0x3f70) != 0)) {
          uVar3 = FUN_140edfc58();
          FUN_14094f414(param_1 + 0x820,uVar3);
        }
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar6));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d21bd2 FUN_148d21bd2 body=137 status=ok
// SIG undefined FUN_148d21bd2(void)

void FUN_148d21bd2(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_14111abfe(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20e,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d21c5c FUN_148d21c5c body=171 status=ok
// SIG undefined FUN_148d21c5c(void)

undefined8 * FUN_148d21c5c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9988) {
    FUN_144b3d300(&DAT_14cbc9988);
    if (DAT_14cbc9988 == -1) {
      builtin_wcsncpy(local_28,L"BossDied",9);
      FUN_1446f470e(&DAT_14cbc9980,local_28,1);
      _Init_thread_footer(&DAT_14cbc9988);
    }
  }
  *param_1 = DAT_14cbc9980;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d21d08 FUN_148d21d08 body=114 status=ok
// SIG undefined FUN_148d21d08(void)

bool FUN_148d21d08(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar1 = FUN_148d2cf66(param_1 + 2000,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d21d7c FUN_148d21d7c body=655 status=ok
// SIG undefined FUN_148d21d7c(void)

undefined4 FUN_148d21d7c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_148d2cd50(param_2,0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_148d2d338(&local_88,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar3)) {
      local_40 = iVar3;
      FUN_148d2d4d6();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar3) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      FUN_148d2cd50(param_2);
    }
    local_a0 = param_1 + 2;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    iStack_94 = 0;
    local_90 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_a8);
    }
    local_b8 = local_98;
    iStack_b4 = iStack_94;
    local_b0 = local_90;
    local_ac = local_8c;
    local_c8 = local_a8;
    local_c0 = local_a0;
    local_d0 = param_1;
    if (iStack_94 < (int)local_a0[3]) {
      do {
        local_a8 = *(undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x48);
        iVar3 = FUN_148d2d68e(&local_88,(uint)((ulonglong)local_a8 >> 0x20) ^ (uint)local_a8,
                              &local_a8);
        if (iVar3 == -1) {
          lVar2 = (longlong)iStack_b4;
          lVar1 = *local_d0;
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_145dce618(param_2,iVar3);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x48 + lVar1);
          FUN_148d2d748(&local_88,&local_a8,(longlong)iStack_b4 * 0x48 + *local_d0);
        }
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 < (int)local_c0[3]);
    }
    lVar1 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_148d2da44(&local_88);
    if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return (int)lVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 148d2200e FUN_148d2200e body=254 status=ok
// SIG undefined FUN_148d2200e(void)

undefined8
FUN_148d2200e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b96eb30;
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
  *local_48 = &PTR_FUN_14b96e7b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148d2dad2(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2210e FUN_148d2210e body=197 status=ok
// SIG undefined FUN_148d2210e(void)

void FUN_148d2210e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1412b88d4(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_148d20e12(local_30,param_2,param_1 + 0x840);
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d221e6 FUN_148d221e6 body=165 status=ok
// SIG undefined FUN_148d221e6(void)

void FUN_148d221e6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  local_30 = &local_38;
  FUN_148d2e526(param_2);
  if (*(int *)(param_2 + 8) == 0) {
    if ((*(char *)(param_2 + 0x30) == '\x01') &&
       (*(undefined1 *)(param_2 + 0x30) = 0, *(char *)(param_1 + 0x848) == '\x02')) {
      FUN_148bf1e38(param_1 + 0x720,param_4);
    }
    FUN_148d224f2(param_1,param_5);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2228c FUN_148d2228c body=129 status=ok
// SIG undefined FUN_148d2228c(void)

void FUN_148d2228c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_14485c47a(&local_40,param_3);
  local_38 = &local_40;
  FUN_148d2e526(param_2 + 0x10);
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_144124b46(param_1,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2230e FUN_148d2230e body=167 status=ok
// SIG undefined FUN_148d2230e(void)

void FUN_148d2230e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d223b6(param_1,param_3);
  local_40 = 0;
  FUN_14485c47a(&local_40,param_2);
  local_38 = &local_40;
  FUN_145ac1ff8(param_1 + 0x7c0);
  local_48 = 0;
  FUN_14485c47a(&local_48,param_2);
  FUN_148d2e632(param_1 + 0x760,local_48);
  FUN_148d22592(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d223b6 FUN_148d223b6 body=314 status=ok
// SIG undefined FUN_148d223b6(void)

void FUN_148d223b6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_140cf8aa6(param_2);
    if (lVar2 != 0) {
      plVar3 = (longlong *)(param_1 + 0x760);
      local_38 = 0;
      FUN_14485c47a(&local_38,lVar2);
      local_30 = local_38;
      iVar1 = FUN_148d2e292(plVar3,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
      if ((iVar1 != -1) && ((*plVar3 + (longlong)iVar1 * 0x48 + 8U & 0xfffffffffffffff7) != 0)) {
        local_40 = 0;
        FUN_14485c47a(&local_40,lVar2);
        local_30 = local_40;
        iVar1 = FUN_148d2e292(plVar3,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
        if (iVar1 == -1) {
          lVar2 = 0;
        }
        else {
          lVar2 = (longlong)iVar1 * 0x48 + *plVar3;
        }
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          FUN_14480f766(param_2 + 0x4e80);
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          FUN_14480f766(param_2 + 0x9948);
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d224f2 FUN_148d224f2 body=159 status=ok
// SIG undefined FUN_148d224f2(void)

void FUN_148d224f2(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = &local_38;
  FUN_145ac1ff8(param_1 + 0x7b0);
  FUN_148bf1e38(param_1 + 0x700,*(undefined8 *)(param_2 + 0xf48));
  if ((*(int *)(param_1 + 0x7b8) == 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_14592bdaa(param_1 + 0x6f0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22592 FUN_148d22592 body=197 status=ok
// SIG undefined FUN_148d22592(void)

void FUN_148d22592(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1412b88d4(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_148d20fa6(local_30,param_2,param_1 + 0x840);
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d2266a FUN_148d2266a body=157 status=ok
// SIG undefined FUN_148d2266a(void)

void FUN_148d2266a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_20 = local_28;
    iVar2 = FUN_148d2e292((longlong *)(param_1 + 0x760),
                          (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x760);
      if ((lVar1 + (longlong)iVar2 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
        *(undefined1 *)(lVar1 + (longlong)iVar2 * 0x48 + 0x38) = 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22708 FUN_148d22708 body=274 status=ok
// SIG undefined FUN_148d22708(void)

undefined8
FUN_148d22708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b96e890;
  local_50[1] = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14b96e820;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2281c FUN_148d2281c body=314 status=ok
// SIG undefined FUN_148d2281c(void)

void FUN_148d2281c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_140373bdc(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140155462(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x14 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22958 FUN_148d22958 body=49 status=ok
// SIG undefined FUN_148d22958(void)

void FUN_148d22958(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != param_2) {
    return;
  }
  FUN_141362b60(param_1,*(undefined1 *)(param_1 + 0x848));
  return;
}



// FUNCTION 148d2298a thunk_FUN_141362b60 body=7 status=ok
// SIG undefined thunk_FUN_141362b60(void)

void thunk_FUN_141362b60(undefined8 param_1,char param_2)

{
  FUN_141362b60(param_1,param_2 * '\x02');
  return;
}



// FUNCTION 148d22992 thunk_FUN_141362b60 body=5 status=ok
// SIG undefined thunk_FUN_141362b60(void)

void thunk_FUN_141362b60(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *pcStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1447210f0();
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x155) & 0x20) == 0)) &&
     (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar4 = FUN_1403ca142();
    plVar1 = *(longlong **)(lVar3 + 0x1f0);
    if (((plVar1 != (longlong *)0x0) && (lVar4 != 0)) &&
       ((lVar3 = plVar1[2], lVar3 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      cVar2 = (**(code **)(*plVar1 + 0x498))();
      if (cVar2 == '\b') {
        if (*(longlong *)(param_1 + 0x640) == 0) {
          if (*(char *)(param_1 + 0x848) == param_2) goto LAB_141362bf7;
        }
        else {
          FUN_14480f766(&DAT_14cb7df68);
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_58);
      }
      *(char *)(param_1 + 0x848) = param_2;
      if (*(longlong *)(param_1 + 0x640) == 0) {
        pcStack_38 = FUN_148d22958;
        uStack_30 = 0;
        FUN_14592be2a(&DAT_14cb7df68,&uStack_28,param_1);
      }
      else {
        FUN_14480f766(&DAT_14cb7df68);
        *(undefined8 *)(param_1 + 0x640) = 0;
        pcStack_38 = FUN_148d22958;
        uStack_30 = 0;
        FUN_14592be2a(&DAT_14cb7df68,&uStack_28,param_1);
      }
      *(undefined8 *)(param_1 + 0x640) = uStack_28;
    }
  }
LAB_141362bf7:
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22998 FUN_148d22998 body=261 status=ok
// SIG undefined FUN_148d22998(void)

longlong * FUN_148d22998(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140da11f2();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = param_3[2];
  if (lVar5 != 0) {
LAB_148d229d7:
    plVar1 = *(longlong **)(lVar5 + 0x18);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar5 + 0x20);
    goto LAB_148d229ef;
  }
  if ((lVar4 != 0) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,param_3);
        param_3[2] = lVar5;
        if (lVar5 != 0) goto LAB_148d229d7;
        goto LAB_148d22a5f;
      }
    }
    param_3[2] = 0;
  }
LAB_148d22a5f:
  FUN_140056680(local_30,L"Missing UI Name");
  FUN_140233b1a(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_148d229ef:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22a9e FUN_148d22a9e body=87 status=ok
// SIG undefined FUN_148d22a9e(void)

void FUN_148d22a9e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(char *)(param_1 + 0x8d8) = (char)param_2;
  FUN_141363288();
  if ((longlong)*(int *)(param_1 + 0x858) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x850);
    lVar3 = (longlong)*(int *)(param_1 + 0x858) << 3;
    do {
      lVar1 = FUN_14479d2ce(lVar2);
      if (lVar1 != 0) {
        FUN_148e00810(lVar1,param_2);
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148d22af6 FUN_148d22af6 body=186 status=ok
// SIG undefined FUN_148d22af6(void)

undefined8 FUN_148d22af6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 2000);
  local_40 = 0;
  FUN_14485c47a(&local_40);
  local_38 = local_40;
  plVar8 = plVar1;
  iVar4 = FUN_148d2cf66(plVar1,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  bVar7 = (byte)plVar8;
  if (iVar4 != -1) {
    lVar2 = *plVar1 + (longlong)iVar4 * 0x14;
    lVar9 = lVar2 + 8;
    bVar7 = 0;
    if (lVar9 != 0 && lVar2 != 0) {
      uVar5 = FUN_148d22bb2(param_1,param_2,lVar9,param_3);
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar3 = 1;
      goto LAB_148d22b78;
    }
  }
  bVar3 = 0;
  uVar6 = 0;
LAB_148d22b78:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar3 & bVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22bb2 FUN_148d22bb2 body=120 status=ok
// SIG undefined FUN_148d22bb2(void)

ulonglong FUN_148d22bb2(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_3 + 1) == param_4) || (*(char *)(param_1 + 0x178) != '\x03')) {
    uVar2 = 0;
  }
  else {
    *(char *)(param_3 + 1) = param_4;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x7c0);
      lVar4 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
      do {
        lVar1 = FUN_14479d2ce(lVar3);
        if (lVar1 != 0) {
          FUN_148dbbc32(lVar1,param_2,*(undefined1 *)(param_3 + 1));
        }
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148d22c2a FUN_148d22c2a body=186 status=ok
// SIG undefined FUN_148d22c2a(void)

undefined8 FUN_148d22c2a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 2000);
  local_40 = 0;
  FUN_14485c47a(&local_40);
  local_38 = local_40;
  plVar8 = plVar1;
  iVar4 = FUN_148d2cf66(plVar1,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  bVar7 = (byte)plVar8;
  if (iVar4 != -1) {
    lVar2 = *plVar1 + (longlong)iVar4 * 0x14;
    lVar9 = lVar2 + 8;
    bVar7 = 0;
    if (lVar9 != 0 && lVar2 != 0) {
      uVar5 = FUN_148d22ce6(param_1,param_2,lVar9,param_3);
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar3 = 1;
      goto LAB_148d22cac;
    }
  }
  bVar3 = 0;
  uVar6 = 0;
LAB_148d22cac:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar3 & bVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d22ce6 FUN_148d22ce6 body=120 status=ok
// SIG undefined FUN_148d22ce6(void)

ulonglong FUN_148d22ce6(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_3 + 2) == param_4) || (*(char *)(param_1 + 0x178) != '\x03')) {
    uVar2 = 0;
  }
  else {
    *(char *)(param_3 + 2) = param_4;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x7c0);
      lVar4 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
      do {
        lVar1 = FUN_14479d2ce(lVar3);
        if (lVar1 != 0) {
          FUN_148dbbc6e(lVar1,param_2,*(undefined1 *)(param_3 + 2));
        }
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148d22d5e FUN_148d22d5e body=308 status=ok
// SIG undefined FUN_148d22d5e(void)

void FUN_148d22d5e(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 2000);
  lVar2 = param_1 + 0x7e0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x7f8) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x7f8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar2)) {
    do {
      lVar5 = (longlong)iStack_6c * 0x14 + *local_88;
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 != 0) {
        FUN_148d22bb2(param_1,lVar3,lVar5 + 8,param_2);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d22e94 FUN_148d22e94 body=308 status=ok
// SIG undefined FUN_148d22e94(void)

void FUN_148d22e94(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 2000);
  lVar2 = param_1 + 0x7e0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x7f8) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x7f8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar2)) {
    do {
      lVar5 = (longlong)iStack_6c * 0x14 + *local_88;
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 != 0) {
        FUN_148d22ce6(param_1,lVar3,lVar5 + 8,param_2);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d22fca FUN_148d22fca body=38 status=ok
// SIG undefined FUN_148d22fca(void)

undefined8 FUN_148d22fca(undefined8 param_1,int param_2)

{
  FUN_145c3cab6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d22ff0 FUN_148d22ff0 body=38 status=ok
// SIG undefined FUN_148d22ff0(void)

undefined8 FUN_148d22ff0(undefined8 param_1,int param_2)

{
  FUN_148d2b1b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d23016 FUN_148d23016 body=83 status=ok
// SIG undefined FUN_148d23016(void)

undefined8 * FUN_148d23016(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b402570;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148d23074 FUN_148d23074 body=122 status=ok
// SIG undefined FUN_148d23074(void)

longlong FUN_148d23074(longlong param_1,longlong param_2)

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
    FUN_148d230ee(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148d230ee FUN_148d230ee body=229 status=ok
// SIG undefined FUN_148d230ee(void)

longlong * FUN_148d230ee(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141276f62(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148d231d4 FUN_148d231d4 body=38 status=ok
// SIG undefined FUN_148d231d4(void)

undefined8 FUN_148d231d4(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d23214 FUN_148d23214 body=29 status=ok
// SIG undefined FUN_148d23214(void)

bool FUN_148d23214(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d23232 FUN_148d23232 body=26 status=ok
// SIG undefined FUN_148d23232(void)

bool FUN_148d23232(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d2324c FUN_148d2324c body=93 status=ok
// SIG undefined FUN_148d2324c(void)

void FUN_148d2324c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d232aa FUN_148d232aa body=93 status=ok
// SIG undefined FUN_148d232aa(void)

void FUN_148d232aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23308 FUN_148d23308 body=126 status=ok
// SIG undefined FUN_148d23308(void)

void FUN_148d23308(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c090;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d23377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d23386 FUN_148d23386 body=152 status=ok
// SIG undefined FUN_148d23386(void)

bool FUN_148d23386(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148d23420 FUN_148d23420 body=31 status=ok
// SIG undefined FUN_148d23420(void)

undefined8 FUN_148d23420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d2345a FUN_148d2345a body=29 status=ok
// SIG undefined FUN_148d2345a(void)

bool FUN_148d2345a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d23478 FUN_148d23478 body=26 status=ok
// SIG undefined FUN_148d23478(void)

bool FUN_148d23478(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d23492 FUN_148d23492 body=24 status=ok
// SIG undefined FUN_148d23492(void)

bool FUN_148d23492(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d234aa FUN_148d234aa body=93 status=ok
// SIG undefined FUN_148d234aa(void)

void FUN_148d234aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23508 FUN_148d23508 body=93 status=ok
// SIG undefined FUN_148d23508(void)

void FUN_148d23508(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23566 FUN_148d23566 body=126 status=ok
// SIG undefined FUN_148d23566(void)

void FUN_148d23566(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d235d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d235e4 FUN_148d235e4 body=40 status=ok
// SIG undefined FUN_148d235e4(void)

void FUN_148d235e4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d23609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d2360c FUN_148d2360c body=152 status=ok
// SIG undefined FUN_148d2360c(void)

bool FUN_148d2360c(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148d236c0 FUN_148d236c0 body=29 status=ok
// SIG undefined FUN_148d236c0(void)

bool FUN_148d236c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d236de FUN_148d236de body=26 status=ok
// SIG undefined FUN_148d236de(void)

bool FUN_148d236de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d236f8 FUN_148d236f8 body=93 status=ok
// SIG undefined FUN_148d236f8(void)

void FUN_148d236f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23756 FUN_148d23756 body=93 status=ok
// SIG undefined FUN_148d23756(void)

void FUN_148d23756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d237b4 FUN_148d237b4 body=126 status=ok
// SIG undefined FUN_148d237b4(void)

void FUN_148d237b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d23823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d23832 FUN_148d23832 body=152 status=ok
// SIG undefined FUN_148d23832(void)

bool FUN_148d23832(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148d238cc FUN_148d238cc body=190 status=ok
// SIG undefined FUN_148d238cc(void)

void FUN_148d238cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar1 = DAT_14c762760 + 1;
  *(int *)(puVar2 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar1;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,param_2);
  *(undefined1 *)(puVar2 + 3) = 1;
  *puVar2 = &PTR_FUN_14b5afc70;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_148d2398a(puVar2 + 4,param_3,param_4);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 148d2398a FUN_148d2398a body=467 status=ok
// SIG undefined FUN_148d2398a(void)

void FUN_148d2398a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410534e0();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar6;
  *local_40 = &PTR_FUN_14b96c1e0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  puVar3[4] = param_3;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b5afca0;
  plVar5[2] = (longlong)local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(plVar5 + 3) = local_38;
  local_38 = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_148d23ae2;
    param_1[1] = 0;
LAB_148d23aa3:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_148d23ae2;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
      if (plVar7 != (longlong *)0x0) goto LAB_148d23aa3;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_148d23ae2:
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d23b5e FUN_148d23b5e body=29 status=ok
// SIG undefined FUN_148d23b5e(void)

undefined8 FUN_148d23b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d23b96 FUN_148d23b96 body=29 status=ok
// SIG undefined FUN_148d23b96(void)

bool FUN_148d23b96(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d23bb4 FUN_148d23bb4 body=26 status=ok
// SIG undefined FUN_148d23bb4(void)

bool FUN_148d23bb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d23bce FUN_148d23bce body=24 status=ok
// SIG undefined FUN_148d23bce(void)

bool FUN_148d23bce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d23be6 FUN_148d23be6 body=93 status=ok
// SIG undefined FUN_148d23be6(void)

void FUN_148d23be6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23c44 FUN_148d23c44 body=93 status=ok
// SIG undefined FUN_148d23c44(void)

void FUN_148d23c44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23ca2 FUN_148d23ca2 body=126 status=ok
// SIG undefined FUN_148d23ca2(void)

void FUN_148d23ca2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c1e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d23d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d23d20 FUN_148d23d20 body=40 status=ok
// SIG undefined FUN_148d23d20(void)

void FUN_148d23d20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d23d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d23d48 FUN_148d23d48 body=152 status=ok
// SIG undefined FUN_148d23d48(void)

bool FUN_148d23d48(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148d23de2 FUN_148d23de2 body=29 status=ok
// SIG undefined FUN_148d23de2(void)

undefined8 FUN_148d23de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d23e1a FUN_148d23e1a body=29 status=ok
// SIG undefined FUN_148d23e1a(void)

bool FUN_148d23e1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d23e38 FUN_148d23e38 body=26 status=ok
// SIG undefined FUN_148d23e38(void)

bool FUN_148d23e38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d23e52 FUN_148d23e52 body=24 status=ok
// SIG undefined FUN_148d23e52(void)

bool FUN_148d23e52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d23e76 FUN_148d23e76 body=93 status=ok
// SIG undefined FUN_148d23e76(void)

void FUN_148d23e76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b96c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23ed4 FUN_148d23ed4 body=93 status=ok
// SIG undefined FUN_148d23ed4(void)

void FUN_148d23ed4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96c2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b96c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d23f32 FUN_148d23f32 body=126 status=ok
// SIG undefined FUN_148d23f32(void)

void FUN_148d23f32(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96c2c0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d23fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d23fb0 FUN_148d23fb0 body=42 status=ok
// SIG undefined FUN_148d23fb0(void)

void FUN_148d23fb0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d23fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (uVar1,param_2,*(undefined1 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d23fda FUN_148d23fda body=154 status=ok
// SIG undefined FUN_148d23fda(void)

bool FUN_148d23fda(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,*(undefined1 *)(param_1 + 8));
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



// FUNCTION 148d24092 FUN_148d24092 body=29 status=ok
// SIG undefined FUN_148d24092(void)

bool FUN_148d24092(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d240b0 FUN_148d240b0 body=26 status=ok
// SIG undefined FUN_148d240b0(void)

bool FUN_148d240b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d240ca FUN_148d240ca body=93 status=ok
// SIG undefined FUN_148d240ca(void)

void FUN_148d240ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d24128 FUN_148d24128 body=93 status=ok
// SIG undefined FUN_148d24128(void)

void FUN_148d24128(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d24186 FUN_148d24186 body=126 status=ok
// SIG undefined FUN_148d24186(void)

void FUN_148d24186(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d241f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d24204 FUN_148d24204 body=152 status=ok
// SIG undefined FUN_148d24204(void)

bool FUN_148d24204(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148d2429e FUN_148d2429e body=132 status=ok
// SIG undefined FUN_148d2429e(void)

void FUN_148d2429e(longlong param_1,int param_2)

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



// FUNCTION 148d24324 FUN_148d24324 body=130 status=ok
// SIG undefined FUN_148d24324(void)

void FUN_148d24324(longlong *param_1,longlong *param_2)

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



// FUNCTION 148d243a8 FUN_148d243a8 body=48 status=ok
// SIG undefined FUN_148d243a8(void)

void FUN_148d243a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148d243d8 FUN_148d243d8 body=180 status=ok
// SIG undefined FUN_148d243d8(void)

longlong FUN_148d243d8(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_148d2446f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148d2448e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_148d2446f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x28;
}



// FUNCTION 148d2448e FUN_148d2448e body=280 status=ok
// SIG undefined FUN_148d2448e(void)

undefined4 * FUN_148d2448e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148d245a8(param_1,local_48);
  FUN_1447a97f4(local_40,*param_4);
  *(undefined8 *)(local_40 + 0x28) = 0;
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_148d2468a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_148d247ec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d245a8 FUN_148d245a8 body=226 status=ok
// SIG undefined FUN_148d245a8(void)

int * FUN_148d245a8(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148d2468a FUN_148d2468a body=169 status=ok
// SIG undefined FUN_148d2468a(void)

undefined8 FUN_148d2468a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148d24734(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 148d24734 FUN_148d24734 body=116 status=ok
// SIG undefined FUN_148d24734(void)

void FUN_148d24734(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148d247a8 FUN_148d247a8 body=68 status=ok
// SIG undefined FUN_148d247a8(void)

void FUN_148d247a8(longlong param_1,uint param_2)

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
  FUN_148d247ec(param_1);
  return;
}



// FUNCTION 148d247ec FUN_148d247ec body=419 status=ok
// SIG undefined FUN_148d247ec(void)

void FUN_148d247ec(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 148d24990 FUN_148d24990 body=125 status=ok
// SIG undefined FUN_148d24990(void)

void FUN_148d24990(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  if (*(longlong *)(*param_1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148d24734(param_1,param_2);
  return;
}



// FUNCTION 148d24a0e FUN_148d24a0e body=64 status=ok
// SIG undefined FUN_148d24a0e(void)

undefined8 * FUN_148d24a0e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b96c480;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148d24a52 FUN_148d24a52 body=81 status=ok
// SIG undefined FUN_148d24a52(void)

undefined8 FUN_148d24a52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148d24aaa FUN_148d24aaa body=89 status=ok
// SIG undefined FUN_148d24aaa(void)

bool FUN_148d24aaa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148d24af5;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148d24af5:
  return lVar6 == param_2;
}



// FUNCTION 148d24b20 FUN_148d24b20 body=118 status=ok
// SIG undefined FUN_148d24b20(void)

void FUN_148d24b20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148d24b96 FUN_148d24b96 body=118 status=ok
// SIG undefined FUN_148d24b96(void)

void FUN_148d24b96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96c480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148d24c0c FUN_148d24c0c body=156 status=ok
// SIG undefined FUN_148d24c0c(void)

void FUN_148d24c0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96c480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d24c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d24ca8 FUN_148d24ca8 body=103 status=ok
// SIG undefined FUN_148d24ca8(void)

ulonglong FUN_148d24ca8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d24d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148d24d10 FUN_148d24d10 body=100 status=ok
// SIG undefined FUN_148d24d10(void)

ulonglong FUN_148d24d10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148d24d69:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148d24d69;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148d24d82 FUN_148d24d82 body=116 status=ok
// SIG undefined FUN_148d24d82(void)

void FUN_148d24d82(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 148d24df6 FUN_148d24df6 body=63 status=ok
// SIG undefined FUN_148d24df6(void)

void FUN_148d24df6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c3cdf2(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148d247ec(param_1);
    return;
  }
  FUN_148d24e36(param_1);
  FUN_145c3cdf2(param_1);
  return;
}



// FUNCTION 148d24e36 FUN_148d24e36 body=322 status=ok
// SIG undefined FUN_148d24e36(void)

void FUN_148d24e36(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 148d24f7a FUN_148d24f7a body=79 status=ok
// SIG undefined FUN_148d24f7a(void)

void FUN_148d24f7a(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_2) {
          FUN_148d24990();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148d24fca FUN_148d24fca body=114 status=ok
// SIG undefined FUN_148d24fca(void)

void FUN_148d24fca(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148d25050 FUN_148d25050 body=114 status=ok
// SIG undefined FUN_148d25050(void)

void FUN_148d25050(longlong *param_1,int param_2)

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



// FUNCTION 148d250c2 FUN_148d250c2 body=114 status=ok
// SIG undefined FUN_148d250c2(void)

void FUN_148d250c2(longlong *param_1,int param_2)

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



// FUNCTION 148d25134 FUN_148d25134 body=262 status=ok
// SIG undefined FUN_148d25134(void)

void FUN_148d25134(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar3 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar7 = *param_1;
      lVar4 = lVar4 * 0x80;
      local_40 = *(undefined8 *)(lVar7 + lVar4);
      local_48 = param_2;
      cVar2 = FUN_140b865d4();
      if (cVar2 == '\0') {
        lVar4 = lVar7 + lVar4;
        do {
          lVar7 = lVar4;
          lVar4 = (longlong)*(int *)(lVar7 + 0x78);
          if (lVar4 == -1) goto LAB_148d25158;
          lVar1 = *param_1;
          lVar4 = lVar4 * 0x80;
          local_40 = *(undefined8 *)(lVar1 + lVar4);
          local_48 = param_2;
          cVar2 = FUN_140b865d4(&local_40,&local_48);
          lVar4 = lVar1 + lVar4;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x78);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar3 + uVar6 * 4);
      }
      FUN_148d2523c(param_1,*puVar5);
    }
  }
LAB_148d25158:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d2523c FUN_148d2523c body=123 status=ok
// SIG undefined FUN_148d2523c(void)

void FUN_148d2523c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x80;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x7c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x78 + lVar6 * 0x80);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x80 + 0x78);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x78);
  FUN_146625df0(*param_1 + lVar2 + 8);
  FUN_148d250c2(param_1,param_2);
  return;
}



// FUNCTION 148d252b8 FUN_148d252b8 body=308 status=ok
// SIG undefined FUN_148d252b8(void)

void FUN_148d252b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1418e5db8(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d253ee FUN_148d253ee body=38 status=ok
// SIG undefined FUN_148d253ee(void)

undefined8 FUN_148d253ee(undefined8 param_1,int param_2)

{
  FUN_1458c3936();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d25414 FUN_148d25414 body=68 status=ok
// SIG undefined FUN_148d25414(void)

undefined8 * FUN_148d25414(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b96d660;
  plVar2 = (longlong *)param_1[4];
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


