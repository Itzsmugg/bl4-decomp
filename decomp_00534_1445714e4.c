// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445714e4 FUN_1445714e4 body=155 status=ok
// SIG undefined FUN_1445714e4(void)

undefined8 * FUN_1445714e4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_2;
  uVar2 = FUN_14001cc68(0xa0,0x10);
  local_68[0] = *(longlong *)(lVar1 + 0x1200);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x1220);
    if (*(undefined8 **)(lVar1 + 0x1210) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x1210);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  FUN_149688f72(uVar2,local_68);
  *param_1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144571596 FUN_144571596 body=29 status=ok
// SIG undefined FUN_144571596(void)

undefined8 FUN_144571596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445715b4 FUN_1445715b4 body=155 status=ok
// SIG undefined FUN_1445715b4(void)

undefined8 * FUN_1445715b4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_2;
  uVar2 = FUN_14001cc68(0xa0,0x10);
  local_68[0] = *(longlong *)(lVar1 + 0x1200);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x1220);
    if (*(undefined8 **)(lVar1 + 0x1210) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x1210);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  FUN_149689546(uVar2,local_68);
  *param_1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144571666 FUN_144571666 body=29 status=ok
// SIG undefined FUN_144571666(void)

undefined8 FUN_144571666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445716b8 FUN_1445716b8 body=29 status=ok
// SIG undefined FUN_1445716b8(void)

undefined8 FUN_1445716b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445716d6 FUN_1445716d6 body=42 status=ok
// SIG undefined FUN_1445716d6(void)

void FUN_1445716d6(longlong *param_1,undefined1 *param_2)

{
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x460))(param_1,*param_2);
  FUN_1447f69b6(param_1 + 0x179);
  return;
}



// FUNCTION 14457172a FUN_14457172a body=29 status=ok
// SIG undefined FUN_14457172a(void)

undefined8 FUN_14457172a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571748 FUN_144571748 body=54 status=ok
// SIG undefined FUN_144571748(void)

void FUN_144571748(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x650))(param_1,*(undefined8 *)(param_1[0x176] + 0xa8));
  FUN_1447f69b6(param_1 + 0x179);
  return;
}



// FUNCTION 1445717a8 FUN_1445717a8 body=29 status=ok
// SIG undefined FUN_1445717a8(void)

undefined8 FUN_1445717a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571802 FUN_144571802 body=29 status=ok
// SIG undefined FUN_144571802(void)

undefined8 FUN_144571802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571820 FUN_144571820 body=702 status=ok
// SIG undefined FUN_144571820(void)

void FUN_144571820(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = (longlong)*param_2;
  lVar3 = *param_1;
  uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xce8) + lVar10 * 4);
  iVar8 = *(int *)param_1[1];
  if (iVar8 < 0) {
    iVar9 = *(int *)param_1[2];
    if (-1 < iVar9) {
      bVar13 = false;
      goto LAB_144571884;
    }
LAB_1445718f3:
    pdVar5 = (double *)param_1[4];
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[3] + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
    uVar12 = (ulonglong)(uVar1 & 0x1ff);
    uVar1 = *(uint *)(lVar4 + uVar12 * 0xc);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[3] + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    dVar14 = *(double *)(lVar6 + uVar11 * 0x18) - *pdVar5;
    dVar15 = *(double *)(lVar6 + 8 + uVar11 * 0x18) - pdVar5[1];
    dVar16 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18) - pdVar5[2];
    lVar7 = lVar10 * 0xc;
    *(uint *)(*(longlong *)(lVar3 + 0xd48) + lVar7) =
         (uint)(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15 < (double)*(float *)param_1[5]);
    pdVar5 = (double *)param_1[4];
    uVar1 = *(uint *)(lVar4 + 4 + uVar12 * 0xc);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[3] + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    dVar14 = *(double *)(lVar6 + uVar11 * 0x18) - *pdVar5;
    dVar15 = *(double *)(lVar6 + 8 + uVar11 * 0x18) - pdVar5[1];
    dVar16 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18) - pdVar5[2];
    *(uint *)(*(longlong *)(lVar3 + 0xd48) + 4 + lVar7) =
         (uint)(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15 < (double)*(float *)param_1[5]);
    pdVar5 = (double *)param_1[4];
    uVar1 = *(uint *)(lVar4 + 8 + uVar12 * 0xc);
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[3] + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
    uVar11 = (ulonglong)uVar1 & 0x1ff;
    dVar14 = *(double *)(lVar4 + uVar11 * 0x18) - *pdVar5;
    dVar15 = *(double *)(lVar4 + 8 + uVar11 * 0x18) - pdVar5[1];
    dVar16 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18) - pdVar5[2];
    *(uint *)(*(longlong *)(lVar3 + 0xd48) + 8 + lVar7) =
         (uint)(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15 < (double)*(float *)param_1[5]);
    lVar4 = *(longlong *)(lVar3 + 0xd48);
    if (*(int *)(lVar4 + 4 + lVar7) + *(int *)(lVar4 + lVar7) + *(int *)(lVar4 + 8 + lVar7) != 0) {
      return;
    }
  }
  else {
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xc00) + (longlong)(int)uVar1 * 4);
    bVar13 = iVar2 != iVar8;
    iVar9 = *(int *)param_1[2];
    if (iVar9 < 0) {
      if (iVar2 == iVar8) goto LAB_1445718f3;
    }
    else {
LAB_144571884:
      lVar4 = (*(undefined8 **)(lVar3 + 0xbf8))[1];
      if (lVar4 == 0) {
        iVar8 = FUN_146bc96d4(**(undefined8 **)(lVar3 + 0xbf8));
        iVar9 = *(int *)param_1[2];
      }
      else {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
      }
      if (!(bool)(iVar8 != iVar9 | bVar13)) goto LAB_1445718f3;
    }
    lVar4 = lVar10 * 0xc;
    *(undefined4 *)(*(longlong *)(lVar3 + 0xd48) + 8 + lVar4) = 0;
    *(undefined4 *)(*(longlong *)(lVar3 + 0xd48) + 4 + lVar4) = 0;
    *(undefined4 *)(*(longlong *)(lVar3 + 0xd48) + lVar4) = 0;
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0xce8) + lVar10 * 4) = 0xffffffff;
  return;
}



// FUNCTION 144571bf2 FUN_144571bf2 body=29 status=ok
// SIG undefined FUN_144571bf2(void)

undefined8 FUN_144571bf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571c10 FUN_144571c10 body=105 status=ok
// SIG undefined FUN_144571c10(void)

void FUN_144571c10(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0xd58) + (longlong)*param_2 * 4);
  puVar6 = (undefined8 *)((longlong)*param_2 * 0x18 + *(longlong *)(*param_1 + 0x1490));
  lVar3 = *(longlong *)param_1[1];
  cVar5 = FUN_146bfed03(puVar6);
  if (cVar5 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = puVar6[2];
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x18);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 144571c7a FUN_144571c7a body=179 status=ok
// SIG undefined FUN_144571c7a(void)

void FUN_144571c7a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x1498);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_1484ad52a(*(undefined8 *)(lVar3 + 0x14f0),
                    *(undefined4 *)(*(longlong *)(lVar3 + 0xd58) + lVar5 * 4),
                    *(longlong *)(lVar3 + 0x14a0) + lVar4,*(longlong *)(lVar3 + 0x1490) + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar1 != lVar5);
  }
  if ((*(char *)(lVar3 + 0x14b9) != '\0') && (iVar1 = *(int *)(lVar3 + 0x14c8), 0 < (longlong)iVar1)
     ) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x14c0) + lVar5 * 4);
      if (-1 < iVar2) {
        FUN_1484ad52a(*(undefined8 *)(lVar3 + 0x14f0),iVar2,*(longlong *)(lVar3 + 0x14e0) + lVar4,
                      *(longlong *)(lVar3 + 0x14d0) + lVar4);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar1 != lVar5);
  }
  return;
}



// FUNCTION 144571d32 FUN_144571d32 body=5 status=ok
// SIG undefined FUN_144571d32(void)

longlong FUN_144571d32(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571d38 FUN_144571d38 body=12 status=ok
// SIG undefined FUN_144571d38(void)

void FUN_144571d38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571d44 FUN_144571d44 body=29 status=ok
// SIG undefined FUN_144571d44(void)

undefined8 FUN_144571d44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571d62 FUN_144571d62 body=105 status=ok
// SIG undefined FUN_144571d62(void)

void FUN_144571d62(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0xd58) + (longlong)*param_2 * 4);
  puVar6 = (undefined8 *)((longlong)*param_2 * 0x18 + *(longlong *)(*param_1 + 0x1490));
  lVar3 = *(longlong *)param_1[1];
  cVar5 = FUN_146bfed03(puVar6);
  if (cVar5 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = puVar6[2];
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x18);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 144571dcc FUN_144571dcc body=150 status=ok
// SIG undefined FUN_144571dcc(void)

void FUN_144571dcc(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0x14c0) + (longlong)*param_2 * 4);
  if ((-1 < (int)uVar2) &&
     (lVar3 = *(longlong *)param_1[1],
     (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 9) * 8)
                           + uVar7 * 2) - 1U) < 0xfffe) {
      puVar6 = (undefined8 *)((longlong)*param_2 * 0x18 + *(longlong *)(*param_1 + 0x14d0));
      cVar5 = FUN_146bfed03(puVar6);
      if (cVar5 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = puVar6[2];
        uVar4 = puVar6[1];
        puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x18);
        *puVar1 = *puVar6;
        puVar1[1] = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 144571e62 FUN_144571e62 body=144 status=ok
// SIG undefined FUN_144571e62(void)

void FUN_144571e62(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0xd70);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0xd68);
    lVar4 = 0;
    do {
      local_3c = *(undefined4 *)(lVar3 + lVar4);
      FUN_1447cbafe(lVar2 + 0xc18,local_40,&local_3c,0);
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144571ef8 FUN_144571ef8 body=5 status=ok
// SIG undefined FUN_144571ef8(void)

longlong FUN_144571ef8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571efe FUN_144571efe body=12 status=ok
// SIG undefined FUN_144571efe(void)

void FUN_144571efe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571f0a FUN_144571f0a body=29 status=ok
// SIG undefined FUN_144571f0a(void)

undefined8 FUN_144571f0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571f28 FUN_144571f28 body=48 status=ok
// SIG undefined FUN_144571f28(void)

void FUN_144571f28(undefined8 *param_1)

{
  FUN_1445757bb(*param_1,param_1[2] + 0xd68,param_1[2] + 0xda0,param_1[1],0);
  return;
}



// FUNCTION 144571f5c FUN_144571f5c body=5 status=ok
// SIG undefined FUN_144571f5c(void)

longlong FUN_144571f5c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571f62 FUN_144571f62 body=12 status=ok
// SIG undefined FUN_144571f62(void)

void FUN_144571f62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571f6e FUN_144571f6e body=29 status=ok
// SIG undefined FUN_144571f6e(void)

undefined8 FUN_144571f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571f8c FUN_144571f8c body=36 status=ok
// SIG undefined FUN_144571f8c(void)

void FUN_144571f8c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14968da9e(lVar1 + 0x1240,lVar1 + 0xd68,lVar1 + 0xcb0,lVar1 + 0xcc0);
  return;
}



// FUNCTION 144571fb4 FUN_144571fb4 body=5 status=ok
// SIG undefined FUN_144571fb4(void)

longlong FUN_144571fb4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571fba FUN_144571fba body=12 status=ok
// SIG undefined FUN_144571fba(void)

void FUN_144571fba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571fc6 FUN_144571fc6 body=29 status=ok
// SIG undefined FUN_144571fc6(void)

undefined8 FUN_144571fc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571fe4 FUN_144571fe4 body=43 status=ok
// SIG undefined FUN_144571fe4(void)

void FUN_144571fe4(longlong *param_1)

{
  FUN_146c38f66(*param_1 + 0xdc0,*param_1 + 0x11e8,1,1,0);
  return;
}



// FUNCTION 144572014 FUN_144572014 body=5 status=ok
// SIG undefined FUN_144572014(void)

longlong FUN_144572014(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14457201a FUN_14457201a body=12 status=ok
// SIG undefined FUN_14457201a(void)

void FUN_14457201a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144572023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144572026 FUN_144572026 body=29 status=ok
// SIG undefined FUN_144572026(void)

undefined8 FUN_144572026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144572044 FUN_144572044 body=20 status=ok
// SIG undefined FUN_144572044(void)

void FUN_144572044(undefined8 *param_1)

{
  FUN_1496454de(param_1[1] + 0xfe0,*param_1);
  return;
}



// FUNCTION 14457205c FUN_14457205c body=5 status=ok
// SIG undefined FUN_14457205c(void)

longlong FUN_14457205c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144572062 FUN_144572062 body=12 status=ok
// SIG undefined FUN_144572062(void)

void FUN_144572062(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014457206b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14457206e FUN_14457206e body=29 status=ok
// SIG undefined FUN_14457206e(void)

undefined8 FUN_14457206e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445720aa FUN_1445720aa body=29 status=ok
// SIG undefined FUN_1445720aa(void)

undefined8 FUN_1445720aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445720c8 FUN_1445720c8 body=40 status=ok
// SIG undefined FUN_1445720c8(void)

undefined1 FUN_1445720c8(longlong *param_1)

{
  FUN_1496bb976(param_1[1],*param_1 + 0xc18,*param_1 + 0xd78,0);
  return 1;
}



// FUNCTION 1445720f4 FUN_1445720f4 body=5 status=ok
// SIG undefined FUN_1445720f4(void)

longlong FUN_1445720f4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1445720fa FUN_1445720fa body=12 status=ok
// SIG undefined FUN_1445720fa(void)

void FUN_1445720fa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144572103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144572106 FUN_144572106 body=29 status=ok
// SIG undefined FUN_144572106(void)

undefined8 FUN_144572106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144572124 FUN_144572124 body=33 status=ok
// SIG undefined FUN_144572124(void)

undefined1 FUN_144572124(longlong *param_1)

{
  FUN_1496454de(*param_1 + 0x1240,*param_1 + 0xc18);
  return 1;
}



// FUNCTION 14457214a FUN_14457214a body=5 status=ok
// SIG undefined FUN_14457214a(void)

longlong FUN_14457214a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144572150 FUN_144572150 body=12 status=ok
// SIG undefined FUN_144572150(void)

void FUN_144572150(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144572159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14457215c FUN_14457215c body=29 status=ok
// SIG undefined FUN_14457215c(void)

undefined8 FUN_14457215c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457217a FUN_14457217a body=26 status=ok
// SIG undefined FUN_14457217a(void)

undefined1 FUN_14457217a(longlong *param_1)

{
  FUN_144569cac(*param_1,*param_1 + 0xc18);
  return 1;
}



// FUNCTION 144572198 FUN_144572198 body=5 status=ok
// SIG undefined FUN_144572198(void)

longlong FUN_144572198(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14457219e FUN_14457219e body=12 status=ok
// SIG undefined FUN_14457219e(void)

void FUN_14457219e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445721a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445721aa FUN_1445721aa body=29 status=ok
// SIG undefined FUN_1445721aa(void)

undefined8 FUN_1445721aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445721c7 FUN_1445721c7 body=970 status=ok
// SIG undefined FUN_1445721c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445721c7(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined1 local_6c [4];
  wchar_t *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cc2086c);
  if (cVar1 == '\0') {
    _DAT_14cc2086c = 0;
    uRam000000014cc20874 = 0;
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd90d40,4,0);
  local_68 = L"SMInstance";
  local_60 = 10;
  local_5c = 0;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc208e0 = (ulonglong)uVar2;
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bd92750;
  local_88 = 1;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd927c0,4,&PTR_FUN_14bd92790);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd937d0,2,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14bd95b70;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd95b90,7,0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bd97700;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd97740,4,0);
  local_68 = L"LatticeConstraintChange";
  local_60 = 0x17;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"ULatticeDeformerTool";
  local_60 = 0x14;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Lattice Constraint Change";
  local_60 = 0x19;
  FUN_140208c1e(&DAT_14cc20bb0,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_144563c4c);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bd99110;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd99150,5,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd99950,1,0);
  ppuStack_80 = &PTR_FUN_14bd9be80;
  local_88 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd9bf20,5,0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bd9e1c0;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd9e200,4,0);
  local_68 = (wchar_t *)0x800000014bd9e4dc;
  local_54 = 0x14;
  local_60 = FUN_14577453c(L"MeshModelingToolsExp",&local_54);
  local_5c = 1;
  FUN_1467481d8(&local_68);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14bda0b50;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bda0bb0,6,0);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14bda3360;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bda33c0,5,0);
  ppuStack_80 = &PTR_FUN_14bda6d10;
  local_88 = 0;
  local_78 = 10;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bda6e50,7,0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bda95c0;
  local_88 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bda9600,5,0);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144572594 FUN_144572594 body=55 status=ok
// SIG undefined FUN_144572594(void)

void FUN_144572594(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21480 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21480 = FUN_14171c317(FUN_146749b4b,uVar1,L"EMirrorSaveMode");
  }
  return;
}



// FUNCTION 1445725cb FUN_1445725cb body=55 status=ok
// SIG undefined FUN_1445725cb(void)

void FUN_1445725cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21498 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21498 = FUN_14171c317(FUN_146749b7a,uVar1,L"EMirrorOperationMode");
  }
  return;
}



// FUNCTION 144572602 FUN_144572602 body=55 status=ok
// SIG undefined FUN_144572602(void)

void FUN_144572602(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc214e0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc214e0 = FUN_14171c317(FUN_146749c95,uVar1,L"EMirrorToolAction");
  }
  return;
}



// FUNCTION 14457264a FUN_14457264a body=55 status=ok
// SIG undefined FUN_14457264a(void)

void FUN_14457264a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21570 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21570 = FUN_14171c317(FUN_146749f79,uVar1,L"EOffsetMeshToolOffsetType");
  }
  return;
}



// FUNCTION 144572692 FUN_144572692 body=1364 status=ok
// SIG undefined FUN_144572692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144572692(int *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  iVar8 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0xa8);
  *param_1 = iVar8;
  iVar10 = iVar8 * 0xbb38435 + 0x3619636b;
  param_1[2] = iVar10;
  param_1[3] = iVar10;
  iVar8 = iVar8 * -0x4b9b4d07 + -0x6290db6e;
  param_1[1] = iVar8;
  param_1[4] = iVar8;
  param_1[5] = iVar8;
  cVar3 = *(char *)(*(longlong *)(param_2 + 0xe0) + 0xa8);
  *(char *)(param_1 + 0x1c) = cVar3;
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)(*(longlong *)(param_2 + 0xe0) + 0xa9);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(lVar4 + 0xf0);
  uVar6 = *(undefined8 *)(lVar4 + 0xe8);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(lVar4 + 0xe0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  auVar21 = _DAT_1499387d0;
  auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0xe0) + 0xb0);
  dVar1 = *(double *)(*(longlong *)(param_2 + 0xe0) + 0xc0);
  dVar5 = (double)DAT_1499387d0;
  dVar18 = DAT_1499387d0._8_8_;
  auVar20 = divpd(auVar2,_DAT_1499387d0);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar1;
  auVar22 = divpd(auVar22,_DAT_1499387d0);
  auVar20 = roundpd(auVar20,auVar20,3);
  auVar22 = roundpd(auVar22,auVar22,3);
  dVar19 = (auVar2._0_8_ - auVar20._0_8_ * dVar5) * 0.008726646259971648;
  dVar15 = (auVar2._8_8_ - auVar20._8_8_ * dVar18) * 0.008726646259971648;
  dVar1 = (dVar1 - auVar22._0_8_ * dVar5) * 0.008726646259971648;
  dVar17 = (0.0 - auVar22._8_8_ * dVar18) * 0.008726646259971648;
  dVar11 = sin(dVar19);
  dVar12 = sin(dVar15);
  dVar13 = sin(dVar1);
  sin(dVar17);
  dVar14 = cos(dVar19);
  dVar15 = cos(dVar15);
  dVar16 = cos(dVar1);
  cos(dVar17);
  dVar1 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  dVar19 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar17 = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  dVar15 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  if (cVar3 == '\x01') {
    *(double *)(param_1 + 6) = dVar17;
    *(double *)(param_1 + 8) = dVar15;
    *(double *)(param_1 + 10) = dVar1;
    *(double *)(param_1 + 0xc) = dVar19;
    auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0xe0) + 200);
    dVar1 = *(double *)(*(longlong *)(param_2 + 0xe0) + 0xd8);
    auVar20 = divpd(auVar2,auVar21);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar1;
    auVar22 = divpd(auVar23,auVar21);
    auVar21 = roundpd(auVar20,auVar20,3);
    auVar20 = roundpd(auVar22,auVar22,3);
    dVar19 = (auVar2._0_8_ - auVar21._0_8_ * dVar5) * 0.008726646259971648;
    dVar15 = (auVar2._8_8_ - auVar21._8_8_ * dVar18) * 0.008726646259971648;
    dVar1 = (dVar1 - auVar20._0_8_ * dVar5) * 0.008726646259971648;
    dVar5 = (0.0 - auVar20._8_8_ * dVar18) * 0.008726646259971648;
    dVar18 = sin(dVar19);
    dVar17 = sin(dVar15);
    dVar11 = sin(dVar1);
    sin(dVar5);
    dVar19 = cos(dVar19);
    dVar15 = cos(dVar15);
    dVar12 = cos(dVar1);
    cos(dVar5);
    dVar1 = dVar17 * dVar18 * dVar11 + dVar15 * dVar19 * dVar12;
    *(double *)(param_1 + 0xe) = dVar18 * dVar17 * dVar12 - dVar19 * dVar15 * dVar11;
    *(double *)(param_1 + 0x10) = -(dVar18 * dVar15 * dVar12) - dVar19 * dVar17 * dVar11;
    auVar2._8_4_ = SUB84(dVar1,0);
    auVar2._0_8_ = -(dVar15 * dVar18 * dVar11) + dVar17 * dVar19 * dVar12;
    auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x12) = auVar2;
  }
  else {
    *(double *)(param_1 + 0xe) = dVar17;
    *(double *)(param_1 + 0x10) = dVar15;
    *(double *)(param_1 + 0x12) = dVar1;
    *(double *)(param_1 + 0x14) = dVar19;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
  }
  cVar3 = *(char *)(*(longlong *)(param_2 + 0xe8) + 0xa8);
  *(char *)(param_1 + 0x30) = cVar3;
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)(*(longlong *)(param_2 + 0xe8) + 0xa9);
  lVar4 = *(longlong *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(lVar4 + 0xf0);
  uVar6 = *(undefined8 *)(lVar4 + 0xe8);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(lVar4 + 0xe0);
  *(undefined8 *)(param_1 + 0x2c) = uVar6;
  lVar4 = *(longlong *)(param_2 + 0xe8);
  puVar9 = (undefined8 *)(lVar4 + 0xb0);
  if (cVar3 == '\x01') {
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(lVar4 + 0xc0);
    uVar6 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x1e) = *puVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    lVar4 = *(longlong *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0xd8);
    uVar6 = *(undefined8 *)(lVar4 + 0xd0);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(lVar4 + 200);
    *(undefined8 *)(param_1 + 0x26) = uVar6;
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0xc0);
    uVar6 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x24) = *puVar9;
    *(undefined8 *)(param_1 + 0x26) = uVar6;
    uVar6 = *puVar9;
    uVar7 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(lVar4 + 0xc0);
    *(undefined8 *)(param_1 + 0x1e) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
  }
  cVar3 = *(char *)(*(longlong *)(param_2 + 0xf0) + 0xa9);
  *(char *)(param_1 + 0x44) = cVar3;
  *(undefined1 *)((longlong)param_1 + 0x111) = *(undefined1 *)(*(longlong *)(param_2 + 0xf0) + 0xaa)
  ;
  lVar4 = *(longlong *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(lVar4 + 0xf0);
  uVar6 = *(undefined8 *)(lVar4 + 0xe8);
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(lVar4 + 0xe0);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  lVar4 = *(longlong *)(param_2 + 0xf0);
  puVar9 = (undefined8 *)(lVar4 + 0xb0);
  if (cVar3 == '\x01') {
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(lVar4 + 0xc0);
    uVar6 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x32) = *puVar9;
    *(undefined8 *)(param_1 + 0x34) = uVar6;
    lVar4 = *(longlong *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(lVar4 + 0xd8);
    uVar6 = *(undefined8 *)(lVar4 + 0xd0);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + 200);
    *(undefined8 *)(param_1 + 0x3a) = uVar6;
  }
  else {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(lVar4 + 0xc0);
    uVar6 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x38) = *puVar9;
    *(undefined8 *)(param_1 + 0x3a) = uVar6;
    uVar6 = *puVar9;
    uVar7 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(lVar4 + 0xc0);
    *(undefined8 *)(param_1 + 0x32) = uVar6;
    *(undefined8 *)(param_1 + 0x34) = uVar7;
  }
  return;
}



// FUNCTION 144572be6 FUN_144572be6 body=449 status=ok
// SIG undefined FUN_144572be6(void)

void FUN_144572be6(undefined8 *param_1,int param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar3 = *param_1;
  if (*(longlong *)(param_3 + 0xd8) == 0) {
    if (*(longlong *)(param_3 + 0xe0) == 0) goto LAB_144572c28;
    lVar5 = FUN_14969c95e(uVar3,param_3);
  }
  else {
    lVar5 = FUN_14969cbc8(uVar3,param_3);
  }
  if (lVar5 != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
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
    lVar4 = *(longlong *)param_1[1];
    lVar6 = (longlong)param_2 * 0x50;
    local_108 = *(undefined8 *)(lVar4 + lVar6);
    uStack_100 = ((undefined8 *)(lVar4 + lVar6))[1];
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    local_f8 = *puVar1;
    uStack_f0 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar6);
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    local_d8 = *(undefined8 *)(lVar4 + 0x30 + lVar6);
    puVar1 = (undefined8 *)(lVar4 + 0x38 + lVar6);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar4 + 0x48 + lVar6);
    uStack_d0 = 0;
    uStack_b0 = 0;
    local_128 = param_4[0xe];
    uStack_124 = param_4[0xf];
    uStack_120 = param_4[0x10];
    uStack_11c = param_4[0x11];
    local_168 = *param_4;
    uStack_164 = param_4[1];
    uStack_160 = param_4[2];
    uStack_15c = param_4[3];
    local_158 = param_4[4];
    uStack_154 = param_4[5];
    uStack_150 = param_4[6];
    uStack_14c = param_4[7];
    local_148 = param_4[8];
    uStack_144 = param_4[9];
    uStack_140 = param_4[10];
    uStack_13c = param_4[0xb];
    local_138 = *(undefined8 *)(param_4 + 0xc);
    local_118 = *(undefined8 *)(param_4 + 0x12);
    uStack_130 = 0;
    uStack_110 = 0;
    FUN_14969b2c4(uVar3,&local_a8);
    local_178 = 0;
    FUN_140613f88(lVar5,&local_a8,0,0);
    FUN_14045627c(lVar5,1,1);
    iVar2 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
      FUN_140c43e06(param_5,iVar2);
    }
    *(longlong *)(*param_5 + (longlong)iVar2 * 8) = lVar5;
  }
LAB_144572c28:
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144572da8 FUN_144572da8 body=367 status=ok
// SIG undefined FUN_144572da8(void)

undefined8
FUN_144572da8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_6d8 [32];
  undefined1 local_6b8 [8];
  undefined1 local_6b0;
  longlong local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined1 local_618 [32];
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_598;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  plVar1 = (longlong *)*param_1;
  FUN_14850577a(local_6b8,1);
  local_698 = (**(code **)(*plVar1 + 0x390))(plVar1);
  if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_698);
  }
  local_688 = *param_5;
  uStack_684 = param_5[1];
  uStack_680 = param_5[2];
  uStack_67c = param_5[3];
  local_678 = param_5[4];
  uStack_674 = param_5[5];
  uStack_670 = param_5[6];
  uStack_66c = param_5[7];
  local_668 = param_5[8];
  uStack_664 = param_5[9];
  uStack_660 = param_5[10];
  uStack_65c = param_5[0xb];
  local_658 = *(undefined8 *)(param_5 + 0xc);
  local_648 = *(undefined8 *)(param_5 + 0xe);
  uStack_640 = *(undefined8 *)(param_5 + 0x10);
  local_638 = *(undefined8 *)(param_5 + 0x12);
  uStack_650 = 0;
  uStack_630 = 0;
  iVar3 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(local_628,*param_4,iVar3);
  FUN_1457c8d02(local_618,param_1[1] + 0x10);
  FUN_148505c14(local_6b8,param_3);
  local_6b0 = 3;
  lVar2 = param_1[2];
  local_5f8 = *(undefined1 *)(lVar2 + 0x3b);
  local_5f7 = *(undefined1 *)(lVar2 + 0x3c);
  local_598 = *(undefined1 *)(lVar2 + 0x39);
  uVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148505c7a(param_2,uVar4,local_6b8);
  FUN_1484c7624(local_6b8);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144572f18 FUN_144572f18 body=700 status=ok
// SIG undefined FUN_144572f18(void)

void FUN_144572f18(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined1 local_51;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x268);
  local_51 = param_2;
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x250);
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_144572fc9;
        iVar13 = iVar13 + 0x20;
        uVar9 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar13 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar9 = 0xffffffff;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar10 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_70 = &local_50;
          local_78 = &LAB_1478989f1;
          local_80 = &LAB_146391124;
          local_88 = L"Engine";
          local_90 = 0x10000000000;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        iVar4 = *(int *)(DAT_14cac6e60 + 0x38);
        if ((iVar4 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar4 * 8)
            == DAT_14cac6e60 + 0x30)) {
          FUN_14045627c(lVar10,CONCAT71((int7)(int3)((uint)iVar4 >> 8),local_51),2);
        }
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar14;
      lVar10 = (longlong)iVar4;
      uVar8 = puVar5[lVar10] & uVar9;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar11 = 0;
          do {
            uVar8 = puVar5[lVar10 + lVar11 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar11 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1445730cf;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar10 != lVar11);
          uVar9 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1445730cf:
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_144572fc9:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445731d5 FUN_1445731d5 body=1617 status=ok
// SIG undefined FUN_1445731d5(void)

void FUN_1445731d5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  code *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  undefined8 *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined4 *local_a0;
  longlong local_98;
  int *local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  code *local_68;
  undefined8 *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_4c = 0;
  local_50 = 0x10;
  local_54 = param_7;
  lVar1 = param_1 + 0x80;
  local_58 = 0;
  local_100 = param_3;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      local_a0 = &local_54;
      local_90 = &local_58;
      local_80 = &local_50;
      local_78 = (undefined4 *)&param_5;
      local_70 = &local_4c;
      local_60 = &local_a8;
      local_68 = FUN_144575cd0;
      local_a8 = param_4;
      local_98 = lVar1;
      local_88 = param_1;
      FUN_140002266(local_b8,L"Spheres %d");
      local_108 = 0xffffffff;
      lVar2 = FUN_1484e2e98(param_2,local_b8,1,&local_68);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_14045627c(lVar2,param_6,1);
        FUN_1484d0608(lVar2,local_100);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)(param_1 + 0x88));
  }
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      local_a0 = &local_54;
      local_90 = &local_58;
      local_80 = (undefined4 *)&param_5;
      local_78 = &local_4c;
      local_c0 = &local_a8;
      local_c8 = FUN_14457637c;
      local_a8 = param_4;
      local_98 = lVar1;
      local_88 = param_1;
      FUN_140002266(local_b8,L"Boxes %d",local_58);
      local_108 = 0xffffffff;
      lVar2 = FUN_1484e2e98(param_2,local_b8,1,&local_c8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_14045627c(lVar2,param_6,1);
        FUN_1484d0608(lVar2,local_100);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)(param_1 + 0x98));
  }
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      local_a0 = &local_54;
      local_90 = &local_58;
      local_80 = &local_50;
      local_78 = (undefined4 *)&param_5;
      local_70 = &local_4c;
      local_d0 = &local_a8;
      local_d8 = FUN_14457689e;
      local_a8 = param_4;
      local_98 = lVar1;
      local_88 = param_1;
      FUN_140002266(local_b8,L"Capsules %d",local_58);
      local_108 = 0xffffffff;
      lVar2 = FUN_1484e2e98(param_2,local_b8,1,&local_d8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_14045627c(lVar2,param_6,1);
        FUN_1484d0608(lVar2,local_100);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)(param_1 + 0xa8));
  }
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    do {
      local_a0 = &local_54;
      local_90 = &local_58;
      local_80 = (undefined4 *)&param_5;
      local_78 = &local_4c;
      local_e0 = &local_a8;
      local_e8 = FUN_144577c44;
      local_a8 = param_4;
      local_98 = lVar1;
      local_88 = param_1;
      FUN_140002266(local_b8,L"Convex %d",local_58);
      local_108 = 0xffffffff;
      lVar2 = FUN_1484e2e98(param_2,local_b8,1,&local_e8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_14045627c(lVar2,param_6,1);
        FUN_1484d0608(lVar2,local_100);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)(param_1 + 0xb8));
  }
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      local_a0 = &local_54;
      local_90 = &local_58;
      local_80 = (undefined4 *)&param_5;
      local_78 = &local_4c;
      local_f0 = &local_a8;
      local_f8 = FUN_1445782f0;
      local_a8 = param_4;
      local_98 = lVar1;
      local_88 = param_1;
      FUN_140002266(local_b8,L"Level Set %d",local_58);
      local_108 = 0xffffffff;
      lVar2 = FUN_1484e2e98(param_2,local_b8,1,&local_f8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_14045627c(lVar2,param_6,1);
        FUN_1484d0608(lVar2,local_100);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)(param_1 + 0xd8));
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144573827 FUN_144573827 body=227 status=ok
// SIG undefined FUN_144573827(void)

void FUN_144573827(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined8 *local_50;
  undefined2 local_47;
  undefined1 local_45;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined2 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = &local_19;
  local_19 = param_5;
  local_68 = &local_28;
  local_70 = &local_30;
  local_44 = 0x1000000005;
  uStack_3c = 0x1000000005;
  local_34 = 0;
  local_a8 = &local_47;
  local_47 = 1;
  local_45 = 0;
  local_50 = &local_78;
  local_58 = FUN_144578952;
  local_88 = *(undefined8 *)(param_1 + 0x28);
  local_98 = *(undefined4 *)(param_1 + 0x18);
  uStack_94 = *(undefined4 *)(param_1 + 0x1c);
  uStack_90 = *(undefined4 *)(param_1 + 0x20);
  uStack_8c = *(undefined4 *)(param_1 + 0x24);
  local_78 = param_4;
  local_30 = param_2;
  local_28 = param_3;
  FUN_148508e5a(param_1 + 0x80,&local_98,&local_58,&local_44);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457390b FUN_14457390b body=1192 status=ok
// SIG undefined FUN_14457390b(void)

void FUN_14457390b(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_7c;
  ulonglong local_78;
  uint *local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar10 = *(uint *)(param_1 + 0xa8);
  local_88 = param_2;
  local_7c = param_3;
  if (uVar10 == 0) {
    uVar14 = 1;
    iVar17 = 0;
    uVar13 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x90);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar17 = uVar10 + 0x1e;
      if (-1 < (int)(uVar10 - 1)) {
        iVar17 = uVar10 - 1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar17 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1445739cf;
        iVar17 = iVar17 + 0x20;
        uVar3 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar3 == 0);
    }
    else {
      iVar17 = 0;
      uVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar3 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar10 <= (int)uVar3) {
      uVar3 = uVar10;
    }
  }
  if (uVar3 != uVar10) {
    uVar16 = 0xffffffff;
    local_78 = (ulonglong)uVar10;
    local_70 = (uint *)(param_1 + 0x90);
    do {
      FUN_14850b8aa(local_68,(longlong)(int)uVar3 * 0x20 + *(longlong *)(param_1 + 0x80));
      uVar2 = local_58;
      if (*(char *)(local_88 + 0xb1) == '\x01') {
        FUN_146c89f40(&local_4c,param_3);
      }
      else {
        local_4c = *(undefined4 *)(local_88 + 0xb4);
      }
      FUN_1484d0b76(uVar2,&local_4c);
      lVar11 = local_88;
      FUN_1484d0932(uVar2,*(undefined4 *)(local_88 + 0xac));
      FUN_1484d0608(uVar2,*(undefined8 *)(lVar11 + 0xb8 + (ulonglong)*(byte *)(lVar11 + 0xb0) * 8));
      FUN_14045627c(uVar2,*(undefined1 *)(lVar11 + 0xa8),1);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar5 = local_70;
      }
      uVar10 = *(uint *)(param_1 + 0xa8);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar3 = puVar5[lVar11] & uVar16;
      if (uVar3 == 0) {
        iVar15 = uVar10 + 0x1e;
        if (-1 < (int)(uVar10 - 1)) {
          iVar15 = uVar10 - 1;
        }
        iVar15 = iVar15 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar6 = iVar15;
        if (iVar15 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar4 < iVar15) {
          lVar12 = 0;
          do {
            uVar3 = puVar5[lVar11 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar16 = 0xffffffff;
              goto LAB_144573b8f;
            }
            iVar17 = iVar17 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar11 != lVar12);
          uVar16 = 0xffffffff;
          iVar4 = iVar6;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        uVar3 = uVar10;
      }
      else {
LAB_144573b8f:
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar3 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar10 <= (int)uVar3) {
          uVar3 = uVar10;
        }
      }
      param_3 = param_3 + 1;
    } while (uVar3 != (uint)local_78);
  }
LAB_1445739cf:
  iVar17 = *(int *)(param_1 + 0x58);
  if (iVar17 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar4 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar4 = iVar17 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar15 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_144573bea;
        iVar15 = iVar15 + 0x20;
        uVar10 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar4) {
      iVar4 = iVar17;
    }
  }
  if (iVar4 != iVar17) {
    uVar10 = 0xffffffff;
    local_70 = (uint *)(param_1 + 0x40);
    do {
      FUN_14850b834(local_68,(longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
      uVar2 = local_58;
      if (*(char *)(local_88 + 0xb1) == '\x01') {
        FUN_146c89f40(&local_4c,local_7c);
      }
      else {
        local_4c = *(undefined4 *)(local_88 + 0xb4);
      }
      FUN_1484e3abc(uVar2,&local_4c);
      lVar11 = local_88;
      FUN_1484e3d4a(uVar2,*(undefined8 *)(local_88 + 200));
      if ((*(char *)(lVar11 + 0xd1) == '\x01') && (*(char *)(local_88 + 0xa8) == '\x01')) {
        uVar9 = *(undefined1 *)(local_88 + 0xa9);
      }
      else {
        uVar9 = 0;
      }
      FUN_14045627c(uVar2,uVar9,1);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = local_70;
      }
      iVar6 = *(int *)(param_1 + 0x58);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar3 = puVar5[lVar11] & uVar10;
      if (uVar3 == 0) {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar3 = puVar5[lVar11 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_144573d5b;
            }
            iVar15 = iVar15 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar10 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar6;
      }
      else {
LAB_144573d5b:
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar4) {
          iVar4 = iVar6;
        }
      }
      local_7c = local_7c + 1;
    } while (iVar4 != iVar17);
  }
LAB_144573bea:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144573db4 FUN_144573db4 body=55 status=ok
// SIG undefined FUN_144573db4(void)

void FUN_144573db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21660 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21660 = FUN_14171c317(FUN_14674a18a,uVar1,L"ECollisionGeometryMode");
  }
  return;
}



// FUNCTION 144573deb FUN_144573deb body=55 status=ok
// SIG undefined FUN_144573deb(void)

void FUN_144573deb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21738 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21738 = FUN_14171c317(FUN_14674a620,uVar1,L"EExtractCollisionOutputType");
  }
  return;
}



// FUNCTION 144573e34 FUN_144573e34 body=436 status=ok
// SIG undefined FUN_144573e34(void)

void FUN_144573e34(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_6f8 [32];
  char local_6d8 [8];
  longlong local_6d0;
  undefined1 local_6b8 [32];
  longlong local_698;
  undefined8 local_688 [12];
  undefined1 local_628 [16];
  longlong local_618;
  uint local_610;
  uint local_60c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  plVar1 = (longlong *)*param_1;
  FUN_14850577a(local_6b8,1);
  local_698 = (**(code **)(*plVar1 + 0x3a0))(plVar1);
  if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_698);
  }
  puVar6 = local_688;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(local_628,*param_4,iVar2);
  lVar5 = *(longlong *)param_1[1];
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  uVar3 = local_610;
  lVar7 = (longlong)(int)local_610;
  local_610 = local_610 + 1;
  if (local_60c < local_610) {
    FUN_140655806(&local_618,uVar3);
  }
  *(longlong *)(local_618 + lVar7 * 8) = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  FUN_148505c14(local_6b8,param_2);
  (**(code **)(*(longlong *)plVar1[0x16] + 0x2c0))((longlong *)plVar1[0x16],local_6b8);
  uVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  FUN_148505c7a(local_6d8,uVar4,local_6b8);
  if ((local_6d8[0] == '\0') && (local_6d0 != 0)) {
    plVar1 = (longlong *)param_1[2];
    iVar2 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
      FUN_1447d05f2(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = local_6d0;
  }
  FUN_1484c7624(local_6b8);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144573ffa FUN_144573ffa body=55 status=ok
// SIG undefined FUN_144573ffa(void)

void FUN_144573ffa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21848 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21848 = FUN_14171c317(FUN_14674a81f,uVar1,L"ESetCollisionGeometryInputMode");
  }
  return;
}



// FUNCTION 144574031 FUN_144574031 body=55 status=ok
// SIG undefined FUN_144574031(void)

void FUN_144574031(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21860 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21860 = FUN_14171c317(FUN_14674a84e,uVar1,L"ECollisionGeometryType");
  }
  return;
}



// FUNCTION 144574068 FUN_144574068 body=55 status=ok
// SIG undefined FUN_144574068(void)

void FUN_144574068(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21878 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21878 = FUN_14171c317(FUN_14674a87d,uVar1,L"EProjectedHullAxis");
  }
  return;
}



// FUNCTION 14457409f FUN_14457409f body=55 status=ok
// SIG undefined FUN_14457409f(void)

void FUN_14457409f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21890 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21890 = FUN_14171c317(FUN_14674a8ac,uVar1,L"EConvexDecompositionMethod");
  }
  return;
}



// FUNCTION 1445740e8 FUN_1445740e8 body=2022 status=ok
// SIG undefined FUN_1445740e8(void)

void FUN_1445740e8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  code *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)param_1[0x1b];
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,&local_88);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x19];
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,&local_88);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x1a];
  if (plVar5 != (longlong *)0x0) {
    FUN_140056680(&local_88,L"SetCollisionGeometryTool");
    (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,&local_88);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1484e0e5e(param_1[0x1e]);
  if (param_1[0x6f] != 0) {
    FUN_1484e0e5e();
  }
  plVar5 = (longlong *)param_1[0x6e];
  if (plVar5 != (longlong *)0x0) {
    FUN_140056680(&local_88,&DAT_149dfb77a);
    (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,&local_88);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((char)param_1[0x21] == '\x01') && (lVar4 = param_1[0x20], (longlong)(int)lVar4 != 0)) {
    lVar6 = param_1[0x1f];
    lVar7 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(param_1[0x14] + (longlong)*(int *)(lVar6 + lVar7) * 8));
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar7);
  }
  if (*(char *)(param_1[0x19] + 0x11c) == '\0') {
    FUN_14850635b(*(undefined8 *)(param_1[0x14] + (longlong)((int)param_1[0x15] + -1) * 8));
  }
  lVar4 = param_1[0x1d];
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(lVar4 + 0x40);
    if (*(longlong *)(lVar6 + 8) != 0) {
      FUN_14457d094();
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    *(undefined4 *)(lVar6 + 0x10) = 0;
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = 0;
    FUN_1496cbda8(uVar2);
  }
  if (param_2 != '\x01') goto LAB_144574285;
  FUN_14080c2b4();
  lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = (code *)0x14bdb8204;
  local_80 = 0xf;
  FUN_1446e940c(local_5c,&local_88);
  local_88 = (code *)0x14bdb78e8;
  local_80 = 0x19;
  FUN_1446e940c(local_60,&local_88);
  local_88 = (code *)0x14bdb81e2;
  local_80 = 0x10;
  FUN_140208c1e(local_58,local_60,local_5c,&local_88);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,local_58);
  if (local_58[0] != (code *)0x0) {
    (**(code **)(*(longlong *)local_58[0] + 0x10))();
  }
  plVar5 = (longlong *)
           FUN_1485062e8(*(undefined8 *)(param_1[0x14] + -8 + (longlong)(int)param_1[0x15] * 8));
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cad3688 == 0) {
      local_88 = FUN_144b223ce;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1417963e0;
      local_a8 = &LAB_147a2f4c9;
      local_b0 = &LAB_1400ea6f8;
      local_b8 = L"Engine";
      local_c0 = 0x200000000000;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x720;
      local_a0 = &local_88;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) !=
        DAT_14cad3688 + 0x30)) {
      lVar4 = FUN_1411674f6();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        (**(code **)(*plVar5 + 0x7a0))(plVar5);
        *(undefined1 *)(plVar5 + 0x120) = *(undefined1 *)(param_1[0x19] + 0x118);
        (**(code **)(*plVar5 + 0xc70))(plVar5,param_1[0x5d] + 0x80,1);
        if ((~*(byte *)((longlong)plVar5 + 0x9c) & 3) == 0) {
          bVar3 = *(byte *)((longlong)plVar5 + 0x9d);
          if ((bVar3 & 1) != 0) {
            if ((plVar5[0x16] != 0) || (lVar4 = FUN_1448abda6(plVar5), lVar4 != 0))
            goto LAB_1445744f3;
            bVar3 = *(byte *)((longlong)plVar5 + 0x9d);
          }
          *(byte *)((longlong)plVar5 + 0x9d) = bVar3 | 1;
          FUN_1401057d4(plVar5);
          FUN_14010586c(&DAT_14cad0140,plVar5);
        }
      }
    }
    else {
      lVar4 = plVar5[0xcc];
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      else if (lVar4 == 0) goto LAB_1445744f3;
      plVar5 = *(longlong **)(lVar4 + 0x188);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x2c0))(plVar5);
        plVar1 = plVar5 + 7;
        FUN_147a2cbea(plVar1);
        lVar6 = param_1[0x5d];
        FUN_1401842de(plVar1);
        FUN_14058b698(plVar1,lVar6 + 0x80);
        *(undefined1 *)((longlong)plVar5 + 0x31) = *(undefined1 *)(param_1[0x19] + 0x118);
        (**(code **)(*plVar5 + 0x2a0))(plVar5);
        *(undefined8 *)(lVar4 + 0x248) = 0;
        FUN_147d555b0(lVar4,0);
        if (DAT_14cad3688 == 0) {
          local_88 = FUN_144b223ce;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1417963e0;
          local_a8 = &LAB_147a2f4c9;
          local_b0 = &LAB_1400ea6f8;
          local_b8 = L"Engine";
          local_c0 = 0x200000000000;
          local_c8 = 0x10000004;
          local_d0 = 0x10;
          local_d8 = 0x720;
          local_a0 = &local_88;
          FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
        }
        local_d8 = 0;
        FUN_146123bc0(&local_88,DAT_14cad3688,0,0);
        if (local_78 != (longlong *)0x0) {
          do {
            lVar6 = *local_78;
            if (lVar6 == 0) {
LAB_1445745ff:
              lVar6 = 0;
            }
            else {
              if (DAT_14cad3688 == 0) {
                local_58[0] = FUN_144b223ce;
                local_90 = FUN_14081d0ea;
                local_98 = &LAB_1417963e0;
                local_a8 = &LAB_147a2f4c9;
                local_b0 = &LAB_1400ea6f8;
                local_b8 = L"Engine";
                local_c0 = 0x200000000000;
                local_c8 = 0x10000004;
                local_d0 = 0x10;
                local_d8 = 0x720;
                local_a0 = local_58;
                FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8)
                ;
              }
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30))
              goto LAB_1445745ff;
            }
            lVar7 = *(longlong *)(lVar6 + 0x660);
            if ((DAT_14c950c29 == 1) && (lVar7 != 0)) {
              FUN_1456cec3c(lVar7);
            }
            if (((DAT_14c950c29 & 1) != 0) && (lVar4 != 0)) {
              FUN_1456cec3c(lVar4);
            }
            if (lVar7 == lVar4) {
              bVar3 = *(byte *)(lVar6 + 0x9c);
              if ((bVar3 & 8) != 0) {
                FUN_1406cc378(lVar6);
                bVar3 = *(byte *)(lVar6 + 0x9c);
              }
              if ((~bVar3 & 3) == 0) {
                bVar3 = *(byte *)(lVar6 + 0x9d);
                if ((bVar3 & 1) != 0) {
                  if ((*(longlong *)(lVar6 + 0xb0) != 0) ||
                     (lVar7 = FUN_1448abda6(lVar6), lVar7 != 0)) goto LAB_144574693;
                  bVar3 = *(byte *)(lVar6 + 0x9d);
                }
                *(byte *)(lVar6 + 0x9d) = bVar3 | 1;
                FUN_1401057d4(lVar6);
                FUN_14010586c(&DAT_14cad0140,lVar6);
              }
            }
LAB_144574693:
            FUN_1427b9a5c(&local_88);
          } while (local_78 != (longlong *)0x0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_88 + 0x30));
        FUN_14282b7b8(lVar4);
      }
    }
  }
LAB_1445744f3:
  lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
LAB_144574285:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445748d0 FUN_1445748d0 body=1064 status=ok
// SIG undefined FUN_1445748d0(void)

void FUN_1445748d0(longlong *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  longlong *local_70 [2];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0x24] == '\0') {
    FUN_1496a287a(param_1);
    *(undefined1 *)(param_1 + 0x24) = 1;
    FUN_1496a364e(param_1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_60 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_58 = 0;
  if ((*(char *)(param_1[0x19] + 0xac) == '\0') &&
     ((int)param_1[0x65] != *(int *)((longlong)param_1 + 0x354))) {
    local_50 = L"GeometrySelectionWithoutAppendToExisting";
    local_48 = 0x28;
    FUN_1446e940c(local_74,&local_50);
    local_50 = L"USetCollisionGeometryTool";
    local_48 = 0x19;
    FUN_1446e940c(local_78,&local_50);
    local_50 = 
    L"The tool was invoked with a selection so you may want to enable \'Append to Existing\'";
    local_48 = 0x54;
    FUN_140208c1e(local_70,local_78,local_74,&local_50);
    FUN_140008f88(&local_60,local_70);
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_60,3);
  lVar3 = param_1[0x1d];
  if (lVar3 == 0) goto LAB_144574a44;
  lVar4 = *(longlong *)(lVar3 + 0x40);
  if (lVar4 != 0) {
    dVar5 = (double)param_2 + *(double *)(lVar4 + 0x18);
    *(double *)(lVar4 + 0x18) = dVar5;
    if ((*(int *)(lVar4 + 0x10) == 2) &&
       (dVar5 = dVar5 - *(double *)(lVar4 + 0x30),
       *(double *)(lVar4 + 0x48) <= dVar5 && dVar5 != *(double *)(lVar4 + 0x48))) {
      if (*(longlong *)(lVar4 + 8) != 0) {
        FUN_14457d094();
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (**(int **)(lVar4 + 0x38) < *(int *)(lVar4 + 0x50)) {
        *(undefined1 *)(lVar4 + 0x54) = 0;
        FUN_1496cd4f0(lVar4);
      }
      else {
        *(undefined1 *)(lVar4 + 0x54) = 1;
        *(undefined4 *)(lVar4 + 0x10) = 2;
      }
    }
  }
  FUN_1496cd430(lVar3);
  lVar3 = param_1[0x1d];
  if (*(char *)(lVar3 + 0x30) != '\x01') goto LAB_144574a44;
  lVar4 = *(longlong *)(lVar3 + 0x40);
  if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_14457d094();
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  *(undefined4 *)(lVar4 + 0x10) = 0;
  lVar4 = *(longlong *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  if (lVar4 != 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14bdccab0;
    plVar7[2] = lVar4;
    param_1[0x5d] = lVar4;
    plVar6 = (longlong *)param_1[0x5e];
    if (plVar7 == plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000144574c10:
          if (iVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      param_1[0x5e] = (longlong)plVar7;
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
          iVar2 = *piVar1;
          UNLOCK();
          plVar7 = plVar6;
          goto joined_r0x000144574c10;
        }
      }
    }
    *(undefined1 *)(param_1[0x1b] + 0xd2) = 1;
    FUN_14969ce6c(param_1[0x1e],param_1[0x1b],param_1[0x5d]);
    FUN_14969dca4(param_1[0x1c]);
    FUN_14969d2cf(param_1[0x5d],param_1[0x1c]);
  }
  FUN_1496cbda8(0);
LAB_144574a44:
  lVar3 = param_1[0x1b];
  if (*(char *)(lVar3 + 0xd2) == '\x01') {
    FUN_14457390b(param_1[0x1e],lVar3,0);
    *(undefined1 *)(lVar3 + 0xd2) = 0;
  }
  if (param_1[0x6f] != 0) {
    FUN_14852c593(param_1[0x6f],param_1[0x6e]);
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144574cf9 FUN_144574cf9 body=55 status=ok
// SIG undefined FUN_144574cf9(void)

void FUN_144574cf9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21930 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21930 = FUN_14171c317(FUN_14674a990,uVar1,L"ESimpleCollisionEditorToolAction");
  }
  return;
}



// FUNCTION 144574d41 FUN_144574d41 body=55 status=ok
// SIG undefined FUN_144574d41(void)

void FUN_144574d41(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21a18 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21a18 = FUN_14171c317(FUN_14674acc3,uVar1,L"EPlaneCutToolActions");
  }
  return;
}



// FUNCTION 144574d78 FUN_144574d78 body=485 status=ok
// SIG undefined FUN_144574d78(void)

undefined4 FUN_144574d78(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  undefined8 uStack_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *param_1;
  local_78[0] = param_2;
  plVar5 = (longlong *)FUN_14001cc68(0x270,0x10);
  FUN_14964020e(plVar5,local_78);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x840);
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    uVar7 = *(undefined8 *)(lVar6 + 0x840);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_48 = plVar5;
  }
  local_50 = plVar5 + 2;
  FUN_1496c58da(uVar7,&local_40,&local_50,lVar6 + 0x500);
  FUN_14054c6c4(param_1[1],lVar6 + 0x500);
  uVar4 = (**(code **)(*local_40 + 0x20))(local_40,param_2,0);
  if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0) ||
      (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) != 0)) ||
     (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0)) {
    local_78[2] = 0;
    uStack_60 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_146c09afc(param_2);
    if ((int)uStack_60 != 0) {
      lVar6 = (longlong)(int)((longlong *)param_1[1])[1];
      if (lVar6 != 0) {
        lVar3 = *(longlong *)param_1[1];
        lVar8 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar8) =
               *(undefined4 *)(local_78[2] + (longlong)*(int *)(lVar3 + lVar8) * 4);
          lVar8 = lVar8 + 4;
        } while (lVar6 * 4 != lVar8);
      }
    }
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_149611200(plVar5 + 2);
  if (local_40 != (longlong *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144574f5e FUN_144574f5e body=485 status=ok
// SIG undefined FUN_144574f5e(void)

undefined4 FUN_144574f5e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  undefined8 uStack_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *param_1;
  local_78[0] = param_2;
  plVar5 = (longlong *)FUN_14001cc68(0x270,0x10);
  FUN_14964020e(plVar5,local_78);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x840);
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    uVar7 = *(undefined8 *)(lVar6 + 0x840);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_48 = plVar5;
  }
  local_50 = plVar5 + 2;
  FUN_1496c5eea(uVar7,&local_40,&local_50,lVar6 + 0x500);
  FUN_14054c6c4(param_1[1],lVar6 + 0x500);
  uVar4 = (**(code **)(*local_40 + 0x20))(local_40,param_2,0);
  if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0) ||
      (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) != 0)) ||
     (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0)) {
    local_78[2] = 0;
    uStack_60 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_146c09afc(param_2);
    if ((int)uStack_60 != 0) {
      lVar6 = (longlong)(int)((longlong *)param_1[1])[1];
      if (lVar6 != 0) {
        lVar3 = *(longlong *)param_1[1];
        lVar8 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar8) =
               *(undefined4 *)(local_78[2] + (longlong)*(int *)(lVar3 + lVar8) * 4);
          lVar8 = lVar8 + 4;
        } while (lVar6 * 4 != lVar8);
      }
    }
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_149611200(plVar5 + 2);
  if (local_40 != (longlong *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144575155 FUN_144575155 body=55 status=ok
// SIG undefined FUN_144575155(void)

void FUN_144575155(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21b88 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21b88 = FUN_14171c317(FUN_14674b09d,uVar1,L"EOcclusionTriangleSamplingUIMode");
  }
  return;
}



// FUNCTION 14457518c FUN_14457518c body=55 status=ok
// SIG undefined FUN_14457518c(void)

void FUN_14457518c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21ba0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21ba0 = FUN_14171c317(FUN_14674b0cc,uVar1,L"EOcclusionCalculationUIMode");
  }
  return;
}



// FUNCTION 1445751c3 FUN_1445751c3 body=55 status=ok
// SIG undefined FUN_1445751c3(void)

void FUN_1445751c3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21bb8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21bb8 = FUN_14171c317(FUN_14674b0fb,uVar1,L"EOccludedAction");
  }
  return;
}



// FUNCTION 1445751fa FUN_1445751fa body=213 status=ok
// SIG undefined FUN_1445751fa(void)

undefined8 * FUN_1445751fa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        local_38 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x60) + lVar2 * 8)
                    + 8);
        FUN_144a13f80(param_1,local_3c,&local_38,0);
        lVar2 = lVar2 + 1;
        iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
      } while (lVar2 < iVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445752d0 FUN_1445752d0 body=498 status=ok
// SIG undefined FUN_1445752d0(void)

/* WARNING: Removing unreachable block (ram,0x000144575494) */

void FUN_1445752d0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8 [10];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == '\x01') {
    local_b4 = (**(code **)(*param_1 + 0x378))(param_1);
  }
  else {
    local_b4 = 0;
  }
  if (0 < (int)param_1[0x15]) {
    lVar5 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(param_1[0x14] + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x15]);
  }
  lVar5 = param_1[0x1d];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = param_1[0x1c];
    lVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar9);
      FUN_14851bab8(uVar2,0);
      FUN_14851b2ea(uVar2);
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_1496cff76(param_1 + 0x1c);
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = param_1[0x1b];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = param_1[0x1a];
    lVar9 = 0;
    do {
      FUN_143b84538(*(undefined8 *)(lVar1 + lVar9),&local_b0);
      uVar3 = uStack_50;
      lVar6 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_148f9379a(&local_58,uVar3 & 0xffffffff);
      }
      puVar8 = (undefined8 *)(local_58 + lVar6 * 0x58);
      *puVar8 = local_b0;
      local_b0 = 0;
      puVar7 = local_a8;
      for (lVar6 = 10; puVar8 = puVar8 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  if ((char)local_b4 != '\0') {
    FUN_1496ae4f4(param_1,&local_58);
  }
  FUN_148f93769(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445754c3 FUN_1445754c3 body=55 status=ok
// SIG undefined FUN_1445754c3(void)

void FUN_1445754c3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21c90 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21c90 = FUN_14171c317(FUN_14674b426,uVar1,L"EBrushToolSizeType");
  }
  return;
}



// FUNCTION 1445754fa FUN_1445754fa body=55 status=ok
// SIG undefined FUN_1445754fa(void)

void FUN_1445754fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21cc0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21cc0 = FUN_14171c317(FUN_14674b4ee,uVar1,L"EMeshSculptFalloffType");
  }
  return;
}



// FUNCTION 144575542 FUN_144575542 body=632 status=ok
// SIG undefined FUN_144575542(void)

void FUN_144575542(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  uVar5 = param_2 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_2 == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x388))(param_1);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),'\x02' - cVar1);
  }
  FUN_148445e6c(param_1,uVar5);
  FUN_14851b2ea(param_1[0x147]);
  param_1[0x147] = 0;
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1);
  param_1[0x144] = 0;
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar3 + 0x2b8))(plVar3,&DAT_14cc21d48);
  cVar1 = (**(code **)(*param_1 + 0x438))(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)param_1[0x20];
    FUN_140056680(&local_88,&DAT_149dfb77a);
    (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_88);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)param_1[0x21];
  if (plVar3 != (longlong *)0x0) {
    FUN_140056680(&local_88,&DAT_149dfb77a);
    (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_88);
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)param_1[0x142];
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_88);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x448))(param_1,param_1);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
  if (plVar3 != (longlong *)0x0) {
    FUN_14850635b(param_1[0x14]);
    if ((char)uVar5 == '\x01') {
      local_88 = (undefined4)param_1[0x2e];
      uStack_84 = *(undefined4 *)((longlong)param_1 + 0x174);
      uStack_80 = (undefined4)param_1[0x2f];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x17c);
      local_78 = (undefined4)param_1[0x30];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x184);
      uStack_70 = (undefined4)param_1[0x31];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0x18c);
      local_68 = (undefined4)param_1[0x32];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x194);
      uStack_60 = (undefined4)param_1[0x33];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x19c);
      local_58 = param_1[0x34];
      local_48 = param_1[0x35];
      lStack_40 = param_1[0x36];
      local_38 = param_1[0x37];
      uStack_50 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar3 + 0xaa8))(plVar3,&local_88,1);
      (**(code **)(*param_1 + 0x440))(param_1,plVar3,0);
    }
    FUN_1401bf202(plVar3);
    (**(code **)(*plVar3 + 0x420))(plVar3,0);
  }
  lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (0 < *(int *)((longlong)param_1 + 0xb94)) {
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  }
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445757bb FUN_1445757bb body=328 status=ok
// SIG undefined FUN_1445757bb(void)

void FUN_1445757bb(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined1 *param_4,
                  char param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  longlong **local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined1 *local_40;
  longlong **local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x208);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x38))) {
    lVar1 = **(longlong **)(lVar1 + 0x30);
    local_48 = lVar1;
    if (lVar1 != 0 && param_5 == '\0') {
      *param_4 = 1;
      if (*(int *)(param_3 + 8) != *(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc)) {
        FUN_14830326e(param_3);
        local_28 = &local_40;
        local_68 = &local_60;
        local_60 = (longlong *)0x0;
        local_58 = local_58 & 0xffffffff00000000;
        local_30 = &LAB_144580cd8;
        local_70 = 0;
        local_40 = param_3;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc));
      }
      local_60 = &local_48;
      local_38 = &local_60;
      local_68 = (longlong **)&local_30;
      local_30 = (undefined1 *)0x0;
      local_28 = (undefined1 **)((ulonglong)local_28 & 0xffffffff00000000);
      local_40 = &LAB_144580ce8;
      local_70 = 0;
      local_58 = param_2;
      local_50 = param_3;
      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_2 + 8),1);
      goto LAB_144575807;
    }
  }
  *param_4 = 0;
LAB_144575807:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144575904 FUN_144575904 body=55 status=ok
// SIG undefined FUN_144575904(void)

void FUN_144575904(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21df0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21df0 = FUN_14171c317(FUN_14674b9c0,uVar1,L"ESmoothMeshToolSmoothType");
  }
  return;
}



// FUNCTION 14457593b FUN_14457593b body=55 status=ok
// SIG undefined FUN_14457593b(void)

void FUN_14457593b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21ef8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21ef8 = FUN_14171c317(FUN_14674bdcd,uVar1,L"ESplitMeshesMethod");
  }
  return;
}



// FUNCTION 144575984 FUN_144575984 body=842 status=ok
// SIG undefined FUN_144575984(void)

void FUN_144575984(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_f8 [32];
  int local_d8;
  uint local_d4;
  uint *local_d0;
  int *local_c8;
  undefined1 local_bc [4];
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  lVar4 = param_1[2];
  uVar13 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
  uVar12 = 0;
  if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar11 = 1;
    if (1 < (int)uVar13) {
      uVar11 = uVar13;
    }
    do {
      uVar9 = uVar7;
      uVar12 = uVar11;
      if (uVar11 == uVar9) break;
      uVar7 = uVar9 + 1;
      uVar12 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar9 >> 9] +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  }
  if (uVar12 != uVar13) {
    do {
      local_d0 = (uint *)CONCAT44(local_d0._4_4_,uVar12);
      local_d4 = (*(code *)*param_2)(param_2[1],&local_d0);
      if ((int)uStack_b0 != local_84) {
        puVar10 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar10 = local_80;
        }
        iVar3 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & local_d4) * 4);
        while (iVar3 != -1) {
          lVar1 = local_b8 + (longlong)iVar3 * 0x10;
          if (*(uint *)(local_b8 + (longlong)iVar3 * 0x10) == local_d4) {
            if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
              local_d8 = *(int *)(lVar1 + 4);
              goto LAB_144575be0;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 8);
        }
      }
      local_d8 = -1;
      plVar5 = (longlong *)*param_1;
      iVar3 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
        FUN_140bfc2d4(plVar5,iVar3);
      }
      puVar2 = (undefined8 *)(*plVar5 + (longlong)iVar3 * 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      local_d0 = &local_d4;
      local_c8 = &local_d8;
      local_d8 = iVar3;
      FUN_140263e2a(&local_b8,local_bc,&local_d0,0);
LAB_144575be0:
      lVar1 = *(longlong *)*param_1;
      lVar8 = (longlong)local_d8 * 0x10;
      iVar3 = *(int *)(lVar1 + 8 + lVar8);
      *(uint *)(lVar1 + 8 + lVar8) = iVar3 + 1U;
      if (*(uint *)(lVar1 + 0xc + lVar8) < iVar3 + 1U) {
        FUN_1446f48e2((longlong *)(lVar1 + lVar8),iVar3);
      }
      *(uint *)(*(longlong *)(lVar1 + lVar8) + (longlong)iVar3 * 4) = uVar12;
      uVar7 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar13) {
        uVar7 = uVar13;
      }
      do {
        uVar11 = uVar7;
        if (uVar7 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar11 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar4 + 0x148) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar11;
    } while (uVar12 != uVar13);
  }
  *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + 8);
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144575cd0 FUN_144575cd0 body=783 status=ok
// SIG undefined FUN_144575cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144575cd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined8 *local_120;
  code **local_118;
  undefined8 local_110;
  undefined4 local_108;
  code *local_100;
  undefined8 *local_f8;
  code *local_f0;
  undefined4 local_e8;
  code *local_e0;
  undefined8 *local_d8;
  code *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  longlong local_a8;
  code *local_a0;
  undefined8 *local_98;
  undefined8 local_8c;
  undefined8 uStack_84;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar3 = (undefined8 *)*param_1;
  iVar2 = *(int *)param_1[1];
  *(int *)param_1[1] = iVar2 + 1;
  local_8c = CONCAT44(local_8c._4_4_,iVar2);
  (*(code *)*puVar3)(local_64,puVar3[1],&local_8c);
  lVar4 = *(longlong *)param_1[2];
  lVar6 = (longlong)*(int *)param_1[3] * 0x50;
  pdVar1 = (double *)(lVar4 + 0x30 + lVar6);
  lVar5 = param_1[4];
  local_8c = 0;
  uStack_84 = 0x3f80000000000000;
  local_74 = (float)(*(double *)(lVar4 + 0x40 + lVar6) * *(double *)(lVar5 + 0x28));
  local_7c = (float)(*pdVar1 * *(double *)(lVar5 + 0x18));
  local_78 = (float)(pdVar1[1] * *(double *)(lVar5 + 0x20));
  local_70 = &DAT_3f8000003f800000;
  local_68 = 0x3f800000;
  dVar8 = ABS(*(double *)(lVar5 + 0x28));
  dVar7 = ABS(*(double *)(lVar5 + 0x18));
  if (ABS(*(double *)(lVar5 + 0x20)) <= dVar7) {
    dVar7 = ABS(*(double *)(lVar5 + 0x20));
  }
  if (dVar8 <= dVar7) {
    dVar7 = dVar8;
  }
  fVar9 = (float)((double)*(float *)(lVar4 + 0x48 + lVar6) * dVar7);
  local_b0 = param_1[6];
  local_a8 = param_1[7];
  local_118 = &local_a0;
  local_a0 = FUN_144575fe0;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,DAT_14c846378);
  local_e0 = DAT_14c846370;
  local_f8._0_4_ = DAT_14c846384;
  local_100 = _DAT_14c84637c;
  local_c8 = DAT_14c846338;
  local_d0 = DAT_14c846330;
  local_128 = &local_e0;
  local_120 = &local_8c;
  local_c0 = param_3;
  local_b8 = local_64;
  local_98 = &local_c0;
  FUN_148515757(*(undefined4 *)param_1[5],CONCAT44(unaff_XMM6_Db,fVar9),&local_d0,&local_100);
  local_b0 = param_1[6];
  local_a8 = param_1[7];
  local_e0 = FUN_144576114;
  local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,DAT_14c84636c);
  local_100 = DAT_14c846364;
  local_c8 = DAT_14c846384;
  local_d0 = _DAT_14c84637c;
  local_e8 = DAT_14c846338;
  local_f0 = DAT_14c846330;
  local_128 = &local_100;
  local_120 = &local_8c;
  local_118 = &local_e0;
  local_d8 = &local_c0;
  local_c0 = param_3;
  local_b8 = local_64;
  FUN_148515757(*(undefined4 *)param_1[5],CONCAT44(unaff_XMM6_Db,fVar9),&local_f0,&local_d0);
  local_b8 = local_64;
  local_b0 = param_1[6];
  local_a8 = param_1[7];
  local_100 = FUN_144576248;
  local_c8 = DAT_14c84636c;
  local_d0 = DAT_14c846364;
  local_e8 = DAT_14c846378;
  local_f0 = DAT_14c846370;
  local_108 = DAT_14c846338;
  local_110 = DAT_14c846330;
  local_128 = &local_d0;
  local_120 = &local_8c;
  local_118 = &local_100;
  local_f8 = &local_c0;
  local_c0 = param_3;
  FUN_148515757(*(undefined4 *)param_1[5],CONCAT44(unaff_XMM6_Db,fVar9),&local_110,&local_f0);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144575fe0 FUN_144575fe0 body=307 status=ok
// SIG undefined FUN_144575fe0(void)

void FUN_144575fe0(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144576114 FUN_144576114 body=307 status=ok
// SIG undefined FUN_144576114(void)

void FUN_144576114(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144576248 FUN_144576248 body=307 status=ok
// SIG undefined FUN_144576248(void)

void FUN_144576248(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 14457637c FUN_14457637c body=1004 status=ok
// SIG undefined FUN_14457637c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14457637c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double _X;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  float *local_180;
  code **local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_118;
  longlong local_110;
  code *local_108;
  undefined8 *local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar4 = (undefined8 *)*param_1;
  local_ec = *(float *)param_1[1];
  *(float *)param_1[1] = (float)((int)local_ec + 1);
  (*(code *)*puVar4)(local_c4,puVar4[1],&local_ec);
  lVar5 = *(longlong *)(param_1[2] + 0x10);
  lVar12 = (longlong)*(int *)param_1[3] * 0x70;
  auVar3 = *(undefined1 (*) [16])(lVar5 + 0x48 + lVar12);
  dVar2 = *(double *)(lVar5 + 0x58 + lVar12);
  auVar13 = divpd(auVar3,_DAT_1499387d0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar2;
  auVar14 = divpd(auVar14,_DAT_1499387d0);
  auVar13 = roundpd(auVar13,auVar13,3);
  auVar14 = roundpd(auVar14,auVar14,3);
  dVar9 = (auVar3._0_8_ - auVar13._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (auVar3._8_8_ - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar11 = (dVar2 - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  _X = (0.0 - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar9);
  dVar7 = sin(dVar10);
  dVar8 = sin(dVar11);
  sin(_X);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar11 = cos(dVar11);
  cos(_X);
  pdVar1 = (double *)(lVar5 + 0x30 + lVar12);
  lVar6 = param_1[4];
  local_ec = (float)(dVar2 * dVar7 * dVar11 - dVar9 * dVar10 * dVar8);
  local_e8 = (float)(-(dVar2 * dVar10 * dVar11) - dVar9 * dVar7 * dVar8);
  local_e4 = (float)(-(dVar10 * dVar2 * dVar8) + dVar7 * dVar9 * dVar11);
  local_e0 = (float)(dVar7 * dVar2 * dVar8 + dVar10 * dVar9 * dVar11);
  local_d4 = (float)(*(double *)(lVar5 + 0x40 + lVar12) * *(double *)(lVar6 + 0x28));
  local_dc = (float)(*pdVar1 * *(double *)(lVar6 + 0x18));
  local_d8 = (float)(pdVar1[1] * *(double *)(lVar6 + 0x20));
  local_d0 = &DAT_3f8000003f800000;
  local_c8 = 0x3f800000;
  local_f0 = (float)((double)*(float *)(lVar5 + 0x68 + lVar12) * *(double *)(lVar6 + 0x28) * 0.5);
  local_f4 = (float)((double)*(float *)(lVar5 + 100 + lVar12) * *(double *)(lVar6 + 0x20) * 0.5);
  local_f8 = (float)((double)*(float *)(lVar5 + 0x60 + lVar12) * *(double *)(lVar6 + 0x18) * 0.5);
  local_100 = &local_128;
  local_118 = param_1[5];
  local_110 = param_1[6];
  local_178 = &local_108;
  local_108 = FUN_14457676a;
  local_188 = &local_138;
  local_130 = DAT_14c84636c;
  local_138 = DAT_14c846364;
  local_140 = DAT_14c846378;
  local_148 = DAT_14c846370;
  local_150 = DAT_14c846384;
  local_158 = _DAT_14c84637c;
  local_160 = DAT_14c846338;
  local_168 = DAT_14c846330;
  local_180 = &local_ec;
  local_128 = param_3;
  local_120 = local_c4;
  FUN_1485159e9();
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457676a FUN_14457676a body=307 status=ok
// SIG undefined FUN_14457676a(void)

void FUN_14457676a(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 14457689e FUN_14457689e body=3181 status=ok
// SIG undefined FUN_14457689e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14457689e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_2c8 [32];
  code **local_2a8;
  code **local_2a0;
  code **local_298;
  float *local_290;
  code **local_288;
  undefined4 local_278;
  undefined4 local_274;
  double local_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  code *local_1d8;
  undefined4 local_1d0;
  code *local_1c8;
  longlong **local_1c0;
  code *local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  longlong **local_1a0;
  code *local_198;
  longlong **local_190;
  code *local_188;
  longlong **local_180;
  code *local_178;
  longlong **local_170;
  longlong *local_168;
  undefined4 *local_160;
  longlong local_158;
  longlong local_150;
  code *local_148;
  longlong **local_140;
  undefined8 local_134;
  float local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puVar4 = (undefined8 *)*param_1;
  local_11c = *(float *)param_1[1];
  *(float *)param_1[1] = (float)((int)local_11c + 1);
  (*(code *)*puVar4)(&local_f4,puVar4[1],&local_11c);
  lVar5 = *(longlong *)(param_1[2] + 0x20);
  lVar14 = (longlong)*(int *)param_1[3] * 0x68;
  auVar25 = *(undefined1 (*) [16])(lVar5 + 0x48 + lVar14);
  dVar2 = *(double *)(lVar5 + 0x58 + lVar14);
  auVar24 = divpd(auVar25,_DAT_1499387d0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar2;
  auVar27 = divpd(auVar27,_DAT_1499387d0);
  auVar24 = roundpd(auVar24,auVar24,3);
  auVar27 = roundpd(auVar27,auVar27,3);
  dVar6 = (auVar25._0_8_ - auVar24._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar20 = (auVar25._8_8_ - auVar24._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = (dVar2 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (0.0 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar16 = sin(dVar6);
  dVar17 = sin(dVar20);
  dVar18 = sin(dVar2);
  sin(dVar7);
  dVar19 = cos(dVar6);
  dVar20 = cos(dVar20);
  dVar21 = cos(dVar2);
  cos(dVar7);
  dVar2 = -(dVar20 * dVar16 * dVar18) + dVar17 * dVar19 * dVar21;
  dVar6 = dVar17 * dVar16 * dVar18 + dVar20 * dVar19 * dVar21;
  uVar30 = SUB84(dVar6,0);
  uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar8 = dVar16 * dVar17 * dVar21 - dVar19 * dVar20 * dVar18;
  dVar16 = -(dVar16 * dVar20 * dVar21) - dVar19 * dVar17 * dVar18;
  uVar32 = (undefined4)((ulonglong)dVar16 >> 0x20);
  pdVar1 = (double *)(lVar5 + 0x30 + lVar14);
  lVar13 = param_1[4];
  dVar20 = *(double *)(lVar13 + 0x18) * *pdVar1;
  dVar7 = *(double *)(lVar13 + 0x20) * pdVar1[1];
  dVar17 = *(double *)(lVar5 + 0x40 + lVar14) * *(double *)(lVar13 + 0x28);
  local_11c = (float)dVar8;
  auVar10._4_8_ = dVar21;
  auVar10._0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar25._0_8_ = auVar10._0_8_ << 0x20;
  auVar25._8_4_ = SUB84(dVar16,0);
  auVar25._12_4_ = uVar32;
  local_118 = (float)auVar25._8_8_;
  local_114 = (float)dVar2;
  local_110 = (float)dVar6;
  local_104 = (float)dVar17;
  local_108 = (float)dVar7;
  local_10c = (float)dVar20;
  local_100 = &DAT_3f8000003f800000;
  local_f8 = 0x3f800000;
  fVar15 = (float)FUN_147c4b1b2(lVar5 + lVar14,lVar13 + 0x18);
  uVar22 = FUN_147c4b146(lVar5 + lVar14,lVar13 + 0x18);
  uVar23 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_128 = 0;
  local_12c = -(fVar15 * 0.5);
  local_134 = 0;
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_298 = &local_148;
  local_148 = FUN_14457750c;
  local_170 = (longlong **)CONCAT44(local_170._4_4_,DAT_14c846378);
  local_178 = DAT_14c846370;
  local_180._0_4_ = DAT_14c846384;
  local_188 = _DAT_14c84637c;
  local_2a8 = &local_178;
  local_2a0 = (code **)&local_11c;
  local_168 = param_3;
  local_160 = &local_f4;
  local_140 = &local_168;
  local_120 = fVar15 * 0.5;
  FUN_148515757(*(undefined4 *)param_1[5]);
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_178 = FUN_144577640;
  local_180 = (longlong **)CONCAT44(local_180._4_4_,DAT_14c846378);
  local_188 = DAT_14c846370;
  local_190._0_4_ = DAT_14c846384;
  local_198 = _DAT_14c84637c;
  local_2a8 = &local_188;
  local_2a0 = (code **)&local_11c;
  local_298 = &local_178;
  local_170 = &local_168;
  local_168 = param_3;
  local_160 = &local_f4;
  FUN_148515757(*(undefined4 *)param_1[5]);
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_188 = FUN_144577774;
  local_190 = (longlong **)CONCAT44(local_190._4_4_,DAT_14c84636c);
  local_198 = DAT_14c846364;
  local_1a0._0_4_ = DAT_14c846378;
  local_1a8 = DAT_14c846370;
  local_2a8 = (code **)&local_128;
  local_2a0 = &local_1a8;
  local_298 = &local_198;
  local_290 = &local_11c;
  local_288 = &local_188;
  local_180 = &local_168;
  local_168 = param_3;
  local_160 = &local_f4;
  FUN_148515e94(*(undefined4 *)param_1[5]);
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_198 = FUN_1445778a8;
  local_1a0 = (longlong **)CONCAT44(local_1a0._4_4_,DAT_14c84636c);
  local_1a8 = DAT_14c846364;
  local_1c0._0_4_ = DAT_14c846384;
  local_1c8 = _DAT_14c84637c;
  local_2a8 = (code **)&local_128;
  local_2a0 = &local_1c8;
  local_298 = &local_1a8;
  local_290 = &local_11c;
  local_288 = &local_198;
  local_190 = &local_168;
  local_168 = param_3;
  local_160 = &local_f4;
  FUN_148515e94(*(undefined4 *)param_1[5]);
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_1a8 = FUN_1445779dc;
  local_1c0 = (longlong **)CONCAT44(local_1c0._4_4_,DAT_14c84636c);
  local_1c8 = DAT_14c846364;
  local_1b0 = DAT_14c846378;
  local_1b8 = DAT_14c846370;
  local_2a8 = (code **)&local_134;
  local_2a0 = &local_1b8;
  local_298 = &local_1c8;
  local_290 = &local_11c;
  local_288 = &local_1a8;
  local_1a0 = &local_168;
  local_168 = param_3;
  local_160 = &local_f4;
  FUN_148515e94(*(undefined4 *)param_1[5]);
  local_158 = param_1[6];
  local_150 = param_1[7];
  local_1c8 = FUN_144577b10;
  local_1b0 = DAT_14c84636c;
  local_1b8 = DAT_14c846364;
  local_2a0 = &local_1d8;
  local_1d0 = DAT_14c846384;
  local_1d8 = _DAT_14c84637c;
  local_2a8 = (code **)&local_134;
  local_298 = &local_1b8;
  local_290 = &local_11c;
  local_288 = &local_1c8;
  local_1c0 = &local_168;
  local_168 = param_3;
  local_160 = &local_f4;
  FUN_148515e94(*(undefined4 *)param_1[5]);
  local_218._8_4_ = (uint)extraout_XMM0_Qb;
  local_218._0_8_ = uVar22;
  local_218._12_4_ = uVar23;
  local_1e8 = -(float)uVar22;
  uStack_1e4 = (uint)((ulonglong)uVar22 >> 0x20) ^ 0x80000000;
  uStack_1e0 = (uint)extraout_XMM0_Qb ^ 0x80000000;
  uStack_1dc = uVar23 ^ 0x80000000;
  local_258._8_4_ = SUB84(dVar16,0);
  local_258._0_8_ = dVar8;
  local_258._12_4_ = uVar32;
  local_248._8_4_ = uVar30;
  local_248._0_8_ = dVar2;
  local_248._12_4_ = uVar31;
  local_228._8_4_ = SUB84(dVar7,0);
  local_228._0_8_ = dVar20;
  local_228._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_238._8_4_ = uVar30;
  local_238._0_8_ = dVar6;
  local_238._12_4_ = uVar31;
  local_1f8._8_4_ = uVar30;
  local_1f8._0_8_ = dVar8;
  local_1f8._12_4_ = uVar31;
  local_208._8_4_ = SUB84(dVar2,0);
  local_208._0_8_ = dVar16;
  local_208._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_270 = dVar17;
  bVar12 = true;
  do {
    bVar11 = bVar12;
    uVar30 = local_f4;
    fVar15 = local_1e8;
    if (!bVar11) {
      fVar15 = (float)local_218._0_4_;
    }
    local_274 = *(undefined4 *)param_1[7];
    local_278 = *(undefined4 *)param_1[6];
    dVar8 = (double)local_12c;
    dVar6 = (double)local_134._4_4_;
    dVar7 = (double)(float)local_134;
    local_268 = (double)local_120;
    uStack_260 = 0;
    dVar20 = (double)local_128._4_4_;
    dVar17 = (double)(float)local_128;
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_1485156d2(param_3,iVar3);
    }
    uVar31 = local_f4;
    dVar9 = (double)fVar15;
    dVar8 = dVar8 + 0.0;
    dVar6 = dVar6 + 0.0;
    dVar7 = dVar7 + dVar9;
    dVar18 = dVar6 * (double)local_258._0_8_ - dVar16 * dVar7;
    dVar19 = dVar8 * (double)local_258._8_8_ - dVar2 * dVar6;
    uVar22 = local_1f8._0_8_;
    dVar21 = dVar7 * (double)CONCAT44(local_248._4_4_,local_248._0_4_) -
             dVar8 * (double)local_1f8._0_8_;
    dVar19 = dVar19 + dVar19;
    dVar21 = dVar21 + dVar21;
    dVar18 = dVar18 + dVar18;
    local_268 = local_268 + 0.0;
    dVar20 = dVar20 + 0.0;
    dVar17 = dVar17 + dVar9;
    dVar26 = dVar20 * (double)local_258._0_8_ - dVar16 * dVar17;
    dVar29 = local_268 * (double)local_258._8_8_ - dVar2 * dVar20;
    dVar28 = dVar17 * (double)CONCAT44(local_248._4_4_,local_248._0_4_) -
             local_268 * (double)local_1f8._0_8_;
    dVar29 = dVar29 + dVar29;
    dVar28 = dVar28 + dVar28;
    dVar26 = dVar26 + dVar26;
    lVar5 = *param_3;
    lVar13 = (longlong)iVar3 * 0x40;
    *(double *)(lVar5 + lVar13) =
         (dVar26 * (double)local_258._8_8_ - dVar28 * dVar2) +
         (double)local_238._0_8_ * dVar29 + dVar17 + (double)local_228._0_8_;
    ((double *)(lVar5 + lVar13))[1] =
         ((double)CONCAT44(local_248._4_4_,local_248._0_4_) * dVar29 -
         (double)local_1f8._0_8_ * dVar26) + (double)local_238._8_8_ * dVar28 + dVar20 +
         (double)local_228._8_8_;
    *(double *)(lVar5 + 0x10 + lVar13) =
         dVar26 * (double)local_238._0_8_ + local_268 +
         (dVar28 * (double)local_258._0_8_ - dVar29 * dVar16) + local_270;
    pdVar1 = (double *)(lVar5 + 0x18 + lVar13);
    *pdVar1 = (dVar18 * (double)local_258._8_8_ - dVar21 * dVar2) +
              (double)local_238._0_8_ * dVar19 + dVar7 + (double)local_228._0_8_;
    pdVar1[1] = ((double)CONCAT44(local_248._4_4_,local_248._0_4_) * dVar19 -
                (double)local_1f8._0_8_ * dVar18) + (double)local_238._8_8_ * dVar21 + dVar6 +
                (double)local_228._8_8_;
    *(double *)(lVar5 + 0x28 + lVar13) =
         dVar18 * (double)local_238._0_8_ + dVar8 +
         (dVar21 * (double)local_258._0_8_ - dVar19 * dVar16) + local_270;
    *(undefined4 *)(lVar5 + 0x30 + lVar13) = uVar30;
    *(undefined4 *)(lVar5 + 0x34 + lVar13) = local_278;
    *(undefined4 *)(lVar5 + 0x38 + lVar13) = local_274;
    local_274 = *(undefined4 *)param_1[7];
    local_278 = *(undefined4 *)param_1[6];
    dVar7 = (double)local_12c;
    dVar2 = (double)local_134._4_4_;
    dVar20 = (double)(float)local_134;
    dVar8 = (double)local_120;
    dVar6 = (double)local_128._4_4_;
    dVar16 = (double)(float)local_128;
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    local_268 = dVar9;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_1485156d2(param_3,iVar3);
    }
    dVar7 = dVar7 + 0.0;
    dVar2 = dVar2 + local_268;
    dVar20 = dVar20 + 0.0;
    dVar17 = dVar2 * (double)local_258._0_8_ - (double)local_208._0_8_ * dVar20;
    dVar18 = dVar7 * (double)local_258._8_8_ - (double)local_208._8_8_ * dVar2;
    dVar19 = dVar20 * (double)local_248._0_8_ - dVar7 * (double)uVar22;
    dVar18 = dVar18 + dVar18;
    dVar19 = dVar19 + dVar19;
    dVar17 = dVar17 + dVar17;
    dVar8 = dVar8 + 0.0;
    dVar6 = dVar6 + local_268;
    dVar16 = dVar16 + 0.0;
    dVar21 = dVar6 * (double)local_258._0_8_ - (double)local_208._0_8_ * dVar16;
    dVar26 = dVar8 * (double)local_258._8_8_ - (double)local_208._8_8_ * dVar6;
    dVar29 = dVar16 * (double)local_248._0_8_ - dVar8 * (double)uVar22;
    dVar26 = dVar26 + dVar26;
    dVar29 = dVar29 + dVar29;
    dVar21 = dVar21 + dVar21;
    lVar5 = *param_3;
    lVar13 = (longlong)iVar3 * 0x40;
    *(double *)(lVar5 + lVar13) =
         (dVar21 * (double)local_258._8_8_ - dVar29 * (double)local_208._8_8_) +
         (double)local_238._0_8_ * dVar26 + dVar16 + (double)local_228._0_8_;
    ((double *)(lVar5 + lVar13))[1] =
         ((double)local_248._0_8_ * dVar26 - (double)uVar22 * dVar21) +
         (double)local_238._8_8_ * dVar29 + dVar6 + (double)local_228._8_8_;
    *(double *)(lVar5 + 0x10 + lVar13) =
         dVar21 * (double)local_238._0_8_ + dVar8 +
         (dVar29 * (double)local_258._0_8_ - dVar26 * (double)local_208._0_8_) + local_270;
    pdVar1 = (double *)(lVar5 + 0x18 + lVar13);
    *pdVar1 = (dVar17 * (double)local_258._8_8_ - dVar19 * (double)local_208._8_8_) +
              (double)local_238._0_8_ * dVar18 + dVar20 + (double)local_228._0_8_;
    pdVar1[1] = ((double)local_248._0_8_ * dVar18 - (double)uVar22 * dVar17) +
                (double)local_238._8_8_ * dVar19 + dVar2 + (double)local_228._8_8_;
    *(double *)(lVar5 + 0x28 + lVar13) =
         dVar17 * (double)local_238._0_8_ + dVar7 +
         (dVar19 * (double)local_258._0_8_ - dVar18 * (double)local_208._0_8_) + local_270;
    *(undefined4 *)(lVar5 + 0x30 + lVar13) = uVar31;
    *(undefined4 *)(lVar5 + 0x34 + lVar13) = local_278;
    *(undefined4 *)(lVar5 + 0x38 + lVar13) = local_274;
    dVar16 = (double)local_208._0_8_;
    dVar2 = (double)local_208._8_8_;
    bVar12 = false;
  } while (bVar11);
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457750c FUN_14457750c body=307 status=ok
// SIG undefined FUN_14457750c(void)

void FUN_14457750c(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144577640 FUN_144577640 body=307 status=ok
// SIG undefined FUN_144577640(void)

void FUN_144577640(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144577774 FUN_144577774 body=307 status=ok
// SIG undefined FUN_144577774(void)

void FUN_144577774(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 1445778a8 FUN_1445778a8 body=307 status=ok
// SIG undefined FUN_1445778a8(void)

void FUN_1445778a8(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 1445779dc FUN_1445779dc body=307 status=ok
// SIG undefined FUN_1445779dc(void)

void FUN_1445779dc(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144577b10 FUN_144577b10 body=307 status=ok
// SIG undefined FUN_144577b10(void)

void FUN_144577b10(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar11 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[2];
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  uVar9 = *(undefined4 *)param_1[1];
  iVar10 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
    FUN_1485156d2(plVar11,iVar10);
  }
  lVar12 = *plVar11;
  lVar13 = (longlong)iVar10 * 0x40;
  *(double *)(lVar12 + lVar13) = (double)fVar7;
  *(double *)(lVar12 + 8 + lVar13) = (double)fVar8;
  *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar6;
  *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
  *(double *)(lVar12 + 0x20 + lVar13) = (double)fVar5;
  *(double *)(lVar12 + 0x28 + lVar13) = (double)fVar3;
  *(undefined4 *)(lVar12 + 0x30 + lVar13) = uVar9;
  *(undefined4 *)(lVar12 + 0x34 + lVar13) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar13) = uVar1;
  return;
}



// FUNCTION 144577c44 FUN_144577c44 body=1707 status=ok
// SIG undefined FUN_144577c44(void)

void FUN_144577c44(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  double dStack_190;
  double local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  int local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar6 = (undefined8 *)*param_1;
  local_e4 = *(int *)param_1[1];
  *(int *)param_1[1] = local_e4 + 1;
  (*(code *)*puVar6)(&local_e8,puVar6[1]);
  lVar28 = *(longlong *)(param_1[2] + 0x30);
  lVar25 = (longlong)*(int *)param_1[3] * 0x100;
  uVar4 = *(uint *)(lVar28 + 0x48 + lVar25);
  if (2 < (int)uVar4) {
    lVar1 = lVar28 + lVar25;
    local_148 = *(undefined1 (*) [16])(lVar28 + 0x90 + lVar25);
    local_158 = *(undefined1 (*) [16])(lVar28 + 0xa0 + lVar25);
    lVar26 = param_1[4];
    pdVar2 = (double *)(lVar28 + 0xb0 + lVar25);
    dVar20 = pdVar2[1] * *(double *)(lVar26 + 0x20);
    pdVar3 = (double *)(lVar28 + 0xd0 + lVar25);
    local_198 = *(double *)(lVar26 + 0x18) * *pdVar3;
    dStack_190 = *(double *)(lVar26 + 0x20) * pdVar3[1];
    pdVar3 = (double *)(lVar28 + 0xe0 + lVar25);
    dVar32 = *(double *)(lVar26 + 0x28) * *pdVar3;
    dVar19 = pdVar3[1] * 0.0;
    local_180 = *(double *)(lVar26 + 0x28) * *(double *)(lVar1 + 0xc0);
    lVar28 = 0;
    local_118._8_4_ = SUB84(dVar19,0);
    local_118._0_8_ = dVar32;
    local_118._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_168._8_4_ = SUB84(dVar20,0);
    local_168._0_8_ = *pdVar2 * *(double *)(lVar26 + 0x18);
    local_168._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    local_128._8_4_ = local_158._8_4_;
    local_128._0_8_ = local_158._8_8_;
    local_128._12_4_ = local_158._12_4_;
    local_178._8_4_ = local_158._8_4_;
    local_178._0_8_ = local_148._0_8_;
    local_178._12_4_ = local_158._12_4_;
    local_138._8_4_ = local_158._0_4_;
    local_138._0_8_ = local_148._8_8_;
    local_138._12_4_ = local_158._4_4_;
    uVar35 = local_148._0_4_;
    uVar36 = local_148._4_4_;
    uVar41 = local_148._8_4_;
    uVar42 = local_148._12_4_;
    uVar39 = local_158._0_4_;
    uVar40 = local_158._4_4_;
    do {
      uVar23 = local_e8;
      lVar25 = *(longlong *)(lVar1 + 0x30);
      lVar26 = *(longlong *)(lVar1 + 0x40);
      pdVar2 = (double *)(lVar25 + (longlong)*(int *)(lVar26 + lVar28) * 0x18);
      dVar14 = *pdVar2;
      dVar15 = pdVar2[1];
      dVar19 = *(double *)(lVar25 + 0x10 + (longlong)*(int *)(lVar26 + lVar28) * 0x18);
      lVar27 = (longlong)*(int *)(lVar26 + 4 + lVar28);
      pdVar2 = (double *)(lVar25 + lVar27 * 0x18);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      dVar20 = *(double *)(lVar25 + 0x10 + lVar27 * 0x18);
      lVar26 = (longlong)*(int *)(lVar26 + 8 + lVar28);
      pdVar2 = (double *)(lVar25 + lVar26 * 0x18);
      local_108 = *pdVar2;
      dStack_100 = pdVar2[1];
      local_f8 = *(double *)(lVar25 + 0x10 + lVar26 * 0x18);
      uStack_f0 = 0;
      local_19c = *(undefined4 *)param_1[6];
      local_1a0 = *(undefined4 *)param_1[5];
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
        FUN_1485156d2(param_3,iVar5);
      }
      uVar24 = local_e8;
      dVar18 = local_180;
      dVar14 = dVar14 * local_198;
      dVar15 = dVar15 * dStack_190;
      dVar19 = dVar19 * dVar32;
      dVar31 = dVar15 * (double)local_148._0_8_ - (double)CONCAT44(uVar42,uVar41) * dVar14;
      dVar33 = dVar19 * (double)local_148._8_8_ - (double)CONCAT44(uVar40,uVar39) * dVar15;
      dVar29 = dVar14 * (double)local_158._0_8_ - (double)CONCAT44(uVar36,uVar35) * dVar19;
      dVar33 = dVar33 + dVar33;
      dVar29 = dVar29 + dVar29;
      dVar31 = dVar31 + dVar31;
      uVar21 = local_128._0_8_;
      uVar22 = local_128._8_8_;
      dVar10 = dVar10 * local_198;
      dVar11 = dVar11 * dStack_190;
      dVar20 = dVar20 * dVar32;
      dVar34 = dVar11 * (double)local_148._0_8_ - (double)CONCAT44(uVar42,uVar41) * dVar10;
      dVar7 = dVar20 * (double)local_148._8_8_ - (double)CONCAT44(uVar40,uVar39) * dVar11;
      dVar30 = dVar10 * (double)local_158._0_8_ - (double)CONCAT44(uVar36,uVar35) * dVar20;
      dVar7 = dVar7 + dVar7;
      dVar30 = dVar30 + dVar30;
      dVar34 = dVar34 + dVar34;
      dVar14 = (dVar31 * (double)local_148._8_8_ - dVar29 * (double)CONCAT44(uVar40,uVar39)) +
               (double)local_128._0_8_ * dVar33 + dVar14 + (double)local_168._0_8_;
      dVar15 = ((double)local_158._0_8_ * dVar33 - (double)CONCAT44(uVar36,uVar35) * dVar31) +
               (double)local_128._8_8_ * dVar29 + dVar15 + (double)local_168._8_8_;
      uVar37 = SUB84(dVar15,0);
      uVar38 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar15 = dVar31 * (double)local_128._0_8_ + dVar19 +
               (dVar29 * (double)local_148._0_8_ - dVar33 * (double)CONCAT44(uVar42,uVar41)) +
               local_180;
      dVar10 = (dVar34 * (double)local_148._8_8_ - dVar30 * (double)CONCAT44(uVar40,uVar39)) +
               (double)local_128._0_8_ * dVar7 + dVar10 + (double)local_168._0_8_;
      dVar19 = ((double)local_158._0_8_ * dVar7 - (double)CONCAT44(uVar36,uVar35) * dVar34) +
               (double)local_128._8_8_ * dVar30 + dVar11 + (double)local_168._8_8_;
      uVar35 = SUB84(dVar19,0);
      uVar36 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar19 = dVar34 * (double)local_128._0_8_ + dVar20 +
               (dVar30 * (double)local_148._0_8_ - dVar7 * (double)CONCAT44(uVar42,uVar41)) +
               local_180;
      lVar25 = *param_3;
      lVar26 = (longlong)iVar5 * 0x40;
      auVar12._8_4_ = uVar37;
      auVar12._0_8_ = dVar14;
      auVar12._12_4_ = uVar38;
      *(undefined1 (*) [16])(lVar25 + lVar26) = auVar12;
      *(double *)(lVar25 + 0x10 + lVar26) = dVar15;
      auVar8._8_4_ = uVar35;
      auVar8._0_8_ = dVar10;
      auVar8._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar25 + 0x18 + lVar26) = auVar8;
      *(double *)(lVar25 + 0x28 + lVar26) = dVar19;
      *(undefined4 *)(lVar25 + 0x30 + lVar26) = uVar23;
      *(undefined4 *)(lVar25 + 0x34 + lVar26) = local_1a0;
      *(undefined4 *)(lVar25 + 0x38 + lVar26) = local_19c;
      local_19c = *(undefined4 *)param_1[6];
      local_1a0 = *(undefined4 *)param_1[5];
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
        FUN_1485156d2(param_3,iVar5);
      }
      uVar23 = local_e8;
      dVar33 = local_108 * local_198;
      dVar34 = dStack_100 * dStack_190;
      dVar32 = local_f8 * dVar32;
      dVar20 = dVar34 * (double)local_148._0_8_ - (double)CONCAT44(uVar42,uVar41) * dVar33;
      dVar11 = dVar32 * (double)local_148._8_8_ - (double)CONCAT44(uVar40,uVar39) * dVar34;
      dVar31 = dVar33 * (double)local_158._0_8_ - (double)local_178._0_8_ * dVar32;
      dVar11 = dVar11 + dVar11;
      dVar31 = dVar31 + dVar31;
      dVar20 = dVar20 + dVar20;
      lVar25 = *param_3;
      lVar26 = (longlong)iVar5 * 0x40;
      auVar9._8_4_ = uVar35;
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar25 + lVar26) = auVar9;
      *(double *)(lVar25 + 0x10 + lVar26) = dVar19;
      dVar19 = (dVar20 * (double)local_148._8_8_ - dVar31 * (double)CONCAT44(uVar40,uVar39)) +
               (double)uVar21 * dVar11 + dVar33 + (double)local_168._0_8_;
      dVar10 = ((double)local_158._0_8_ * dVar11 - (double)local_178._0_8_ * dVar20) +
               (double)uVar22 * dVar31 + dVar34 + (double)local_168._8_8_;
      uVar39 = SUB84(dVar10,0);
      uVar40 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar18 = dVar20 * (double)uVar21 + dVar32 +
               (dVar31 * (double)local_148._0_8_ - dVar11 * (double)CONCAT44(uVar42,uVar41)) +
               dVar18;
      auVar16._8_4_ = uVar39;
      auVar16._0_8_ = dVar19;
      auVar16._12_4_ = uVar40;
      *(undefined1 (*) [16])(lVar25 + 0x18 + lVar26) = auVar16;
      *(double *)(lVar25 + 0x28 + lVar26) = dVar18;
      *(undefined4 *)(lVar25 + 0x30 + lVar26) = uVar24;
      *(undefined4 *)(lVar25 + 0x34 + lVar26) = local_1a0;
      *(undefined4 *)(lVar25 + 0x38 + lVar26) = local_19c;
      uVar35 = *(undefined4 *)param_1[6];
      uVar36 = *(undefined4 *)param_1[5];
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
        FUN_1485156d2(param_3,iVar5);
      }
      lVar25 = *param_3;
      lVar26 = (longlong)iVar5 * 0x40;
      auVar17._8_4_ = uVar39;
      auVar17._0_8_ = dVar19;
      auVar17._12_4_ = uVar40;
      *(undefined1 (*) [16])(lVar25 + lVar26) = auVar17;
      *(double *)(lVar25 + 0x10 + lVar26) = dVar18;
      auVar13._8_4_ = uVar37;
      auVar13._0_8_ = dVar14;
      auVar13._12_4_ = uVar38;
      *(undefined1 (*) [16])(lVar25 + 0x18 + lVar26) = auVar13;
      *(double *)(lVar25 + 0x28 + lVar26) = dVar15;
      *(undefined4 *)(lVar25 + 0x30 + lVar26) = uVar23;
      *(undefined4 *)(lVar25 + 0x34 + lVar26) = uVar36;
      *(undefined4 *)(lVar25 + 0x38 + lVar26) = uVar35;
      lVar28 = lVar28 + 0xc;
      uVar35 = local_178._0_4_;
      uVar36 = local_178._4_4_;
      uVar41 = local_138._0_4_;
      uVar42 = local_138._4_4_;
      uVar39 = local_138._8_4_;
      uVar40 = local_138._12_4_;
      dVar32 = (double)local_118._0_8_;
    } while (((ulonglong)uVar4 * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3 != lVar28);
  }
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445782f0 FUN_1445782f0 body=1415 status=ok
// SIG undefined FUN_1445782f0(void)

void FUN_1445782f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 *local_230;
  code **local_228;
  longlong local_218;
  undefined8 uStack_210;
  undefined1 local_1fc [4];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [16];
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 local_150;
  undefined1 *local_148;
  longlong local_140;
  longlong local_138;
  code *local_130;
  undefined8 *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  puVar5 = (undefined8 *)*param_1;
  iVar4 = *(int *)param_1[1];
  *(int *)param_1[1] = iVar4 + 1;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar4);
  (*(code *)*puVar5)(local_1fc,puVar5[1],&local_1a0);
  lVar6 = *(longlong *)(param_1[2] + 0x50);
  lVar16 = (longlong)*(int *)param_1[3] * 0xa0;
  puVar5 = (undefined8 *)(lVar6 + 0x30 + lVar16);
  uVar11 = *puVar5;
  uVar12 = puVar5[1];
  puVar5 = (undefined8 *)(lVar6 + 0x40 + lVar16);
  uVar13 = *puVar5;
  uVar14 = puVar5[1];
  lVar15 = param_1[4];
  pdVar1 = (double *)(lVar6 + 0x50 + lVar16);
  dVar10 = *pdVar1 * *(double *)(lVar15 + 0x18);
  dVar22 = pdVar1[1] * *(double *)(lVar15 + 0x20);
  uVar25 = SUB84(dVar22,0);
  uVar26 = (undefined4)((ulonglong)dVar22 >> 0x20);
  pdVar1 = (double *)(lVar6 + 0x70 + lVar16);
  dVar9 = *(double *)(lVar15 + 0x18) * *pdVar1;
  dVar22 = *(double *)(lVar15 + 0x20) * pdVar1[1];
  uVar23 = SUB84(dVar22,0);
  uVar24 = (undefined4)((ulonglong)dVar22 >> 0x20);
  lVar7 = param_1[5];
  lVar8 = param_1[6];
  lVar17 = *(longlong *)(lVar6 + 0x90 + lVar16);
  dVar21 = 0.0;
  uVar27 = 0;
  uVar28 = 0;
  dVar18 = 0.0;
  dVar19 = 0.0;
  dVar20 = 0.0;
  dVar22 = 0.0;
  if (lVar17 != 0) {
    dVar22 = *(double *)(lVar17 + 0xb8);
    dVar21 = *(double *)(lVar17 + 0xc0);
    uVar27 = (undefined4)*(undefined8 *)(lVar17 + 200);
    uVar28 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 200) >> 0x20);
    dVar18 = *(double *)(lVar17 + 0xd0);
    dVar19 = *(double *)(lVar17 + 0xd8);
    dVar20 = *(double *)(lVar17 + 0xe0);
  }
  local_108 = (dVar18 + dVar22) * 0.5;
  local_100 = (dVar21 + dVar19) * 0.5;
  local_f8 = ((double)CONCAT44(uVar28,uVar27) + dVar20) * 0.5;
  local_120 = (dVar18 - dVar22) * 0.5;
  local_118 = (dVar19 - dVar21) * 0.5;
  local_110 = (dVar20 - (double)CONCAT44(uVar28,uVar27)) * 0.5;
  dVar22 = *(double *)(lVar6 + 0x60 + lVar16) * *(double *)(lVar15 + 0x28);
  dVar21 = *(double *)(lVar6 + 0x80 + lVar16) * *(double *)(lVar15 + 0x28);
  local_238 = &local_1b8;
  local_1b8 = DAT_14c8463b8;
  uStack_1b0 = DAT_14c8463c0;
  local_1d8 = DAT_14c846388;
  uStack_1d0 = DAT_14c846390;
  local_1f8 = (undefined4)DAT_14c8463a0;
  uStack_1f4 = DAT_14c8463a0._4_4_;
  uStack_1f0 = (undefined4)DAT_14c8463a8;
  uStack_1ec = DAT_14c8463a8._4_4_;
  local_130 = FUN_144578878;
  local_180._8_4_ = uVar25;
  local_180._0_8_ = dVar10;
  local_180._12_4_ = uVar26;
  local_168._8_4_ = uVar23;
  local_168._0_8_ = dVar9;
  local_168._12_4_ = uVar24;
  local_1a8 = DAT_14c8463c8;
  local_1c8 = DAT_14c846398;
  local_1e8 = DAT_14c8463b0;
  local_230 = &local_1a0;
  local_228 = &local_130;
  local_1a0 = uVar11;
  uStack_198 = uVar12;
  local_190 = uVar13;
  uStack_188 = uVar14;
  local_170 = dVar22;
  local_158 = dVar21;
  local_150 = param_3;
  local_148 = local_1fc;
  local_140 = lVar7;
  local_138 = lVar8;
  local_128 = &local_150;
  FUN_1485160ea();
  local_218 = 0;
  uStack_210 = 0;
  FUN_1479b29d0(lVar6 + lVar16,&local_218,0x3f1a36e2e0000000);
  lVar6 = local_218;
  lVar15 = (longlong)(int)uStack_210;
  if (lVar15 != 0) {
    lVar17 = 0;
    do {
      dVar18 = *(double *)(lVar6 + 0x10 + lVar17);
      dVar19 = *(double *)(lVar6 + 0x28 + lVar17);
      dVar20 = *(double *)(lVar6 + 8 + lVar17);
      dVar2 = *(double *)(lVar6 + 0x20 + lVar17);
      dVar3 = *(double *)(lVar6 + 0x18 + lVar17);
      local_108 = (*(double *)(lVar6 + lVar17) + dVar3) * 0.5;
      local_100 = (dVar20 + dVar2) * 0.5;
      local_f8 = (dVar18 + dVar19) * 0.5;
      local_120 = (dVar3 - *(double *)(lVar6 + lVar17)) * 0.5;
      local_118 = (dVar2 - dVar20) * 0.5;
      local_110 = (dVar19 - dVar18) * 0.5;
      local_1b8 = DAT_14c8463b8;
      uStack_1b0 = DAT_14c8463c0;
      local_1d8 = DAT_14c846388;
      uStack_1d0 = DAT_14c846390;
      local_1f8 = (undefined4)DAT_14c8463a0;
      uStack_1f4 = DAT_14c8463a0._4_4_;
      uStack_1f0 = (undefined4)DAT_14c8463a8;
      uStack_1ec = DAT_14c8463a8._4_4_;
      local_148 = local_1fc;
      local_130 = FUN_144578878;
      local_1a8 = DAT_14c8463c8;
      local_1c8 = DAT_14c846398;
      local_1e8 = DAT_14c8463b0;
      local_230 = &local_1a0;
      local_238 = &local_1b8;
      local_228 = &local_130;
      local_1a0 = uVar11;
      uStack_198 = uVar12;
      local_190 = uVar13;
      uStack_188 = uVar14;
      local_170 = dVar22;
      local_158 = dVar21;
      local_150 = param_3;
      local_140 = lVar7;
      local_138 = lVar8;
      local_128 = &local_150;
      FUN_1485160ea(&local_120,&local_108,&local_1f8,&local_1d8);
      lVar17 = lVar17 + 0x38;
    } while (lVar15 * 0x38 - lVar17 != 0);
  }
  if (local_218 != 0) {
    FUN_1400020a8(local_218);
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144578878 FUN_144578878 body=217 status=ok
// SIG undefined FUN_144578878(void)

void FUN_144578878(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)*param_1;
  uVar2 = *(undefined4 *)param_1[3];
  uVar3 = *(undefined4 *)param_1[2];
  uStack_50 = param_3[2];
  uStack_60 = *param_3;
  uStack_58 = param_3[1];
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined4 *)param_1[1];
  iVar5 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_1485156d2(plVar6,iVar5);
  }
  lVar7 = *plVar6;
  lVar8 = (longlong)iVar5 * 0x40;
  puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar8);
  *puVar1 = (undefined4)uStack_58;
  puVar1[1] = uStack_58._4_4_;
  puVar1[2] = (undefined4)uStack_50;
  puVar1[3] = uStack_50._4_4_;
  puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar8);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar7 + lVar8);
  *puVar1 = local_78;
  puVar1[1] = uStack_74;
  puVar1[2] = uStack_70;
  puVar1[3] = uStack_6c;
  *(undefined4 *)(lVar7 + 0x30 + lVar8) = uVar4;
  *(undefined4 *)(lVar7 + 0x34 + lVar8) = uVar3;
  *(undefined4 *)(lVar7 + 0x38 + lVar8) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144578952 FUN_144578952 body=234 status=ok
// SIG undefined FUN_144578952(void)

void FUN_144578952(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80 [2];
  longlong local_70;
  longlong local_68;
  undefined1 *local_60;
  code *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_2;
  local_70 = CONCAT44(local_70._4_4_,uVar1);
  (**(code **)*param_1)(local_44,((undefined8 *)*param_1)[1],&local_70);
  uVar3 = *(undefined8 *)param_1[1];
  uVar2 = *(undefined4 *)(param_4 + 0x170);
  local_68 = param_1[2];
  local_58 = FUN_144578a3e;
  local_70 = param_4;
  local_60 = local_44;
  local_50 = &local_70;
  FUN_140002266(local_80,L"Shape %d",uVar1);
  local_88 = uVar2;
  lVar4 = FUN_1484e2b86(uVar3,local_80,1,&local_58);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    FUN_14045627c(lVar4,*(undefined1 *)param_1[3],1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144578a3e FUN_144578a3e body=1046 status=ok
// SIG undefined FUN_144578a3e(void)

void FUN_144578a3e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_e8 [44];
  uint local_bc;
  longlong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  float local_94 [3];
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = *param_1;
  lVar15 = *(longlong *)(lVar11 + 0x208);
  if (*(int *)(lVar15 + 0x38) < 1) {
    lVar18 = 0;
  }
  else {
    lVar18 = **(longlong **)(lVar15 + 0x30);
  }
  if (*(int *)(lVar15 + 0x28) < 1) {
    lVar15 = 0;
  }
  else {
    lVar15 = **(longlong **)(lVar15 + 0x20);
  }
  iVar3 = *(int *)(lVar11 + 0x170);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    FUN_1485141da(param_3);
    lVar11 = *param_1;
  }
  uVar12 = *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144);
  uVar17 = 0;
  if ((uVar12 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar13 = 1;
    if (1 < (int)uVar12) {
      uVar16 = uVar12;
    }
    do {
      uVar17 = uVar16;
      if (uVar16 == uVar13) break;
      uVar6 = uVar13 >> 9;
      uVar10 = uVar13 & 0x1ff;
      uVar17 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar11 + 0x148))[uVar6] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  plVar1 = param_3;
  if (uVar17 != uVar12) {
    do {
      local_b0 = plVar1;
      local_b8 = lVar11;
      local_bc = uVar12;
      plVar1 = local_b0;
      lVar11 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
      local_80 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_88 = *(undefined8 *)(lVar11 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      iVar3 = (int)local_b0[1];
      *(uint *)(local_b0 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)local_b0 + 0xc) < iVar3 + 1U) {
        FUN_14854c7dc(local_b0,iVar3);
      }
      lVar11 = *plVar1;
      lVar9 = (longlong)iVar3 * 0xe0;
      puVar2 = (undefined8 *)(lVar11 + 0x3c + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar11 + lVar9) = 0;
      ((undefined8 *)(lVar11 + lVar9))[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x50 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x60 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x70 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x80 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(lVar11 + 0x90 + lVar9) = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x98 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0xa8 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 0xb8 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + 200 + lVar9);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(lVar11 + 0xd8 + lVar9) = 0;
      lVar8 = *(longlong *)param_1[1];
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      *(longlong *)(lVar9 + lVar11) = lVar8;
      local_78 = (longlong *)(lVar9 + lVar11) + 1;
      local_70 = lVar9 + lVar11 + 0x50;
      local_68 = lVar9 + lVar11 + 0x98;
      uVar12 = uVar17 * 3;
      local_a0 = (ulonglong)(uVar12 >> 9);
      local_a8 = (ulonglong)(uVar12 & 0x1ff);
      lVar11 = 0;
      do {
        uVar16 = *(uint *)((longlong)&local_88 + lVar11 * 4);
        uVar13 = uVar12 + (int)lVar11;
        uVar7 = (ulonglong)(uVar13 >> 9);
        uVar14 = (ulonglong)(uVar13 & 0x1ff);
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar18 + 0x78) + uVar7 * 8) + uVar14 * 4);
        lVar8 = 0;
        do {
          uVar13 = iVar3 * 3 + (int)lVar8;
          local_94[lVar8] =
               *(float *)(*(longlong *)(*(longlong *)(lVar18 + 0x48) + (ulonglong)(uVar13 >> 9) * 8)
                         + (ulonglong)(uVar13 & 0x1ff) * 4);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        fVar19 = 0.0;
        if (lVar15 == 0) {
          fVar20 = 0.0;
        }
        else {
          fVar20 = 0.0;
          if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar15 + 0x78) + local_a0 * 8) +
                           local_a8 * 4)) {
            uVar13 = *(uint *)(*(longlong *)(*(longlong *)(lVar15 + 0x78) + uVar7 * 8) + uVar14 * 4)
            ;
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar15 + 0x48) + (ulonglong)(uVar13 >> 5 & 0x3fffff8));
            uVar7 = (ulonglong)((uVar13 & 0xff) << 3);
            fVar20 = *(float *)(lVar8 + uVar7);
            fVar19 = *(float *)(lVar8 + 4 + uVar7);
          }
        }
        uVar7 = (ulonglong)(uVar16 & 0x1ff);
        lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
        plVar4 = (&local_78)[lVar11];
        plVar1 = (longlong *)(lVar8 + uVar7 * 0x18);
        lVar9 = *plVar1;
        lVar5 = plVar1[1];
        plVar4[2] = *(longlong *)(lVar8 + 0x10 + uVar7 * 0x18);
        *plVar4 = lVar9;
        plVar4[1] = lVar5;
        *(undefined4 *)(plVar4 + 8) = *(undefined4 *)param_1[2];
        plVar4[5] = (longlong)(double)local_94[0];
        plVar4[6] = (longlong)(double)local_94[1];
        plVar4[7] = (longlong)(double)local_94[2];
        plVar4[3] = (longlong)(double)fVar20;
        plVar4[4] = (longlong)(double)fVar19;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      uVar12 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)local_bc) {
        uVar12 = local_bc;
      }
      do {
        uVar16 = uVar12;
        if (uVar12 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar16 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_b8 + 0x148) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar16;
      uVar12 = local_bc;
      lVar11 = local_b8;
      plVar1 = local_b0;
    } while (uVar17 != local_bc);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144579176 FUN_144579176 body=641 status=ok
// SIG undefined FUN_144579176(void)

double FUN_144579176(longlong param_1,double *param_2)

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
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar5 = 1.0;
  dVar3 = 1.0 - *(double *)(param_1 + 0x78);
  dVar1 = 1.0;
  if (dVar3 <= 1.0) {
    dVar1 = dVar3;
  }
  dVar4 = *(double *)(param_1 + 0x70);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar1) * dVar4;
  dVar1 = dVar3 * 0.7071067811865475;
  local_78 = param_2[2] - *(double *)(param_1 + 0x48);
  local_80 = param_2[1] - *(double *)(param_1 + 0x40);
  local_88 = *param_2 - *(double *)(param_1 + 0x38);
  FUN_146bf2028(param_1 + 0x50,&local_a0);
  dVar6 = DAT_14c8464e0 - dVar1;
  dVar8 = dVar1 + DAT_14c8464f0;
  dVar2 = DAT_14c8464f0 - dVar1;
  dVar9 = dVar1 + DAT_14c8464e8;
  dVar7 = DAT_14c8464e8 - dVar1;
  dVar1 = dVar1 + DAT_14c8464e0;
  if ((((local_a0 < dVar6) || (local_98 < dVar7)) || (dVar1 < local_a0)) ||
     (((local_90 < dVar2 || (dVar9 < local_98)) || (dVar8 < local_90)))) {
    if (dVar6 <= local_a0) {
      dVar6 = 0.0;
      if (dVar1 < local_a0) {
        dVar6 = local_a0 - dVar1;
      }
    }
    else {
      dVar6 = dVar6 - local_a0;
    }
    if (dVar7 <= local_98) {
      dVar7 = 0.0;
      if (dVar9 < local_98) {
        dVar7 = local_98 - dVar9;
      }
    }
    else {
      dVar7 = dVar7 - local_98;
    }
    dVar4 = dVar4 - dVar3;
    if (dVar2 <= local_90) {
      dVar2 = 0.0;
      if (dVar8 < local_90) {
        dVar2 = local_90 - dVar8;
      }
    }
    else {
      dVar2 = dVar2 - local_90;
    }
    dVar3 = dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7;
    dVar5 = 0.0;
    if (dVar3 < dVar4 * dVar4) {
      dVar4 = SQRT(dVar3) / dVar4;
      dVar5 = 1.0;
      if (dVar4 <= 1.0) {
        dVar5 = dVar4;
      }
      dVar5 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar5);
      dVar5 = 1.0 - dVar5 * dVar5;
      dVar5 = dVar5 * dVar5 * dVar5;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return dVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445793f8 FUN_1445793f8 body=640 status=ok
// SIG undefined FUN_1445793f8(void)

ulonglong FUN_1445793f8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = 0x3ff0000000000000;
  dVar3 = 1.0 - *(double *)(param_1 + 0x78);
  dVar1 = 1.0;
  if (dVar3 <= 1.0) {
    dVar1 = dVar3;
  }
  dVar9 = *(double *)(param_1 + 0x70);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar1) * dVar9;
  dVar1 = dVar3 * 0.7071067811865475;
  local_78 = param_2[2] - *(double *)(param_1 + 0x48);
  local_80 = param_2[1] - *(double *)(param_1 + 0x40);
  local_88 = *param_2 - *(double *)(param_1 + 0x38);
  FUN_146bf2028(param_1 + 0x50,&local_a0);
  dVar4 = DAT_14c8464e0 - dVar1;
  dVar6 = dVar1 + DAT_14c8464f0;
  dVar2 = DAT_14c8464f0 - dVar1;
  dVar7 = dVar1 + DAT_14c8464e8;
  dVar5 = DAT_14c8464e8 - dVar1;
  dVar1 = dVar1 + DAT_14c8464e0;
  if ((((local_a0 < dVar4) || (local_98 < dVar5)) || (dVar1 < local_a0)) ||
     (((local_90 < dVar2 || (dVar7 < local_98)) || (dVar6 < local_90)))) {
    if (dVar4 <= local_a0) {
      dVar4 = 0.0;
      if (dVar1 < local_a0) {
        dVar4 = local_a0 - dVar1;
      }
    }
    else {
      dVar4 = dVar4 - local_a0;
    }
    if (dVar5 <= local_98) {
      dVar5 = 0.0;
      if (dVar7 < local_98) {
        dVar5 = local_98 - dVar7;
      }
    }
    else {
      dVar5 = dVar5 - local_98;
    }
    dVar9 = dVar9 - dVar3;
    if (dVar2 <= local_90) {
      dVar2 = 0.0;
      if (dVar6 < local_90) {
        dVar2 = local_90 - dVar6;
      }
    }
    else {
      dVar2 = dVar2 - local_90;
    }
    dVar3 = dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5;
    uVar8 = 0;
    if (dVar3 < dVar9 * dVar9) {
      dVar9 = SQRT(dVar3) / dVar9;
      dVar3 = 1.0;
      if (dVar9 <= 1.0) {
        dVar3 = dVar9;
      }
      uVar8 = -(ulonglong)(dVar9 < 0.0) & 0x3ff0000000000000 |
              ~-(ulonglong)(dVar9 < 0.0) & (ulonglong)(1.0 - dVar3);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457967a FUN_14457967a body=649 status=ok
// SIG undefined FUN_14457967a(void)

double FUN_14457967a(longlong param_1,double *param_2)

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
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = 1.0;
  dVar3 = 1.0 - *(double *)(param_1 + 0x78);
  dVar1 = 1.0;
  if (dVar3 <= 1.0) {
    dVar1 = dVar3;
  }
  dVar4 = *(double *)(param_1 + 0x70);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar1) * dVar4;
  dVar1 = dVar3 * 0.7071067811865475;
  local_78 = param_2[2] - *(double *)(param_1 + 0x48);
  local_80 = param_2[1] - *(double *)(param_1 + 0x40);
  local_88 = *param_2 - *(double *)(param_1 + 0x38);
  FUN_146bf2028(param_1 + 0x50,&local_a0);
  dVar5 = DAT_14c8464e0 - dVar1;
  dVar8 = dVar1 + DAT_14c8464f0;
  dVar2 = DAT_14c8464f0 - dVar1;
  dVar9 = dVar1 + DAT_14c8464e8;
  dVar6 = DAT_14c8464e8 - dVar1;
  dVar1 = dVar1 + DAT_14c8464e0;
  if ((((local_a0 < dVar5) || (local_98 < dVar6)) || (dVar1 < local_a0)) ||
     (((local_90 < dVar2 || (dVar9 < local_98)) || (dVar8 < local_90)))) {
    if (dVar5 <= local_a0) {
      dVar5 = 0.0;
      if (dVar1 < local_a0) {
        dVar5 = local_a0 - dVar1;
      }
    }
    else {
      dVar5 = dVar5 - local_a0;
    }
    if (dVar6 <= local_98) {
      dVar6 = 0.0;
      if (dVar9 < local_98) {
        dVar6 = local_98 - dVar9;
      }
    }
    else {
      dVar6 = dVar6 - local_98;
    }
    dVar4 = dVar4 - dVar3;
    if (dVar2 <= local_90) {
      dVar2 = 0.0;
      if (dVar8 < local_90) {
        dVar2 = local_90 - dVar8;
      }
    }
    else {
      dVar2 = dVar2 - local_90;
    }
    dVar3 = dVar2 * dVar2 + dVar5 * dVar5 + dVar6 * dVar6;
    dVar7 = 0.0;
    if (dVar3 < dVar4 * dVar4) {
      dVar4 = SQRT(dVar3) / dVar4;
      dVar7 = 1.0;
      if (dVar4 <= 1.0) {
        dVar7 = dVar4;
      }
      dVar7 = (double)(-(ulonglong)(dVar4 < 0.0) & 0x3ff0000000000000 |
                      ~-(ulonglong)(dVar4 < 0.0) & (ulonglong)(1.0 - dVar7));
      dVar7 = dVar7 * dVar7 * dVar7;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return dVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144579904 FUN_144579904 body=629 status=ok
// SIG undefined FUN_144579904(void)

double FUN_144579904(longlong param_1,double *param_2)

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
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar5 = 1.0;
  dVar3 = 1.0 - *(double *)(param_1 + 0x78);
  dVar1 = 1.0;
  if (dVar3 <= 1.0) {
    dVar1 = dVar3;
  }
  dVar4 = *(double *)(param_1 + 0x70);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar1) * dVar4;
  dVar1 = dVar3 * 0.7071067811865475;
  local_78 = param_2[2] - *(double *)(param_1 + 0x48);
  local_80 = param_2[1] - *(double *)(param_1 + 0x40);
  local_88 = *param_2 - *(double *)(param_1 + 0x38);
  FUN_146bf2028(param_1 + 0x50,&local_a0);
  dVar6 = DAT_14c8464e0 - dVar1;
  dVar8 = dVar1 + DAT_14c8464f0;
  dVar2 = DAT_14c8464f0 - dVar1;
  dVar9 = dVar1 + DAT_14c8464e8;
  dVar7 = DAT_14c8464e8 - dVar1;
  dVar1 = dVar1 + DAT_14c8464e0;
  if ((((local_a0 < dVar6) || (local_98 < dVar7)) || (dVar1 < local_a0)) ||
     (((local_90 < dVar2 || (dVar9 < local_98)) || (dVar8 < local_90)))) {
    if (dVar6 <= local_a0) {
      dVar6 = 0.0;
      if (dVar1 < local_a0) {
        dVar6 = local_a0 - dVar1;
      }
    }
    else {
      dVar6 = dVar6 - local_a0;
    }
    if (dVar7 <= local_98) {
      dVar7 = 0.0;
      if (dVar9 < local_98) {
        dVar7 = local_98 - dVar9;
      }
    }
    else {
      dVar7 = dVar7 - local_98;
    }
    dVar4 = dVar4 - dVar3;
    if (dVar2 <= local_90) {
      dVar2 = 0.0;
      if (dVar8 < local_90) {
        dVar2 = local_90 - dVar8;
      }
    }
    else {
      dVar2 = dVar2 - local_90;
    }
    dVar3 = dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7;
    dVar5 = 0.0;
    if (dVar3 < dVar4 * dVar4) {
      dVar4 = SQRT(dVar3) / dVar4;
      dVar5 = 1.0;
      if (dVar4 <= 1.0) {
        dVar5 = dVar4;
      }
      dVar5 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar5);
      dVar5 = 1.0 - dVar5 * dVar5;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return dVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144579b7a FUN_144579b7a body=163 status=ok
// SIG undefined FUN_144579b7a(void)

void FUN_144579b7a(longlong *param_1,undefined8 *param_2)

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
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 200) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144579c48 FUN_144579c48 body=29 status=ok
// SIG undefined FUN_144579c48(void)

undefined8 FUN_144579c48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144579c66 FUN_144579c66 body=69 status=ok
// SIG undefined FUN_144579c66(void)

void FUN_144579c66(longlong *param_1,char *param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  param_1 = (longlong *)*param_1;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2 == '\x01');
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],uVar1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000144579ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],uVar1 & 0xffffffff);
  return;
}



// FUNCTION 144579cd6 FUN_144579cd6 body=29 status=ok
// SIG undefined FUN_144579cd6(void)

undefined8 FUN_144579cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144579cf4 FUN_144579cf4 body=29 status=ok
// SIG undefined FUN_144579cf4(void)

undefined8 FUN_144579cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144579d26 FUN_144579d26 body=93 status=ok
// SIG undefined FUN_144579d26(void)

void FUN_144579d26(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdcb8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144579d84 FUN_144579d84 body=93 status=ok
// SIG undefined FUN_144579d84(void)

void FUN_144579d84(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdcb8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144579de2 FUN_144579de2 body=126 status=ok
// SIG undefined FUN_144579de2(void)

void FUN_144579de2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcb8e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144579e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144579e78 FUN_144579e78 body=35 status=ok
// SIG undefined FUN_144579e78(void)

undefined8 FUN_144579e78(longlong param_1)

{
  FUN_1485051e4(*(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xf0) +
                 (longlong)*(int *)(param_1 + 0x20) * 8));
  return 1;
}



// FUNCTION 144579e9c FUN_144579e9c body=29 status=ok
// SIG undefined FUN_144579e9c(void)

undefined8 FUN_144579e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144579ece FUN_144579ece body=93 status=ok
// SIG undefined FUN_144579ece(void)

void FUN_144579ece(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcb950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144579f2c FUN_144579f2c body=93 status=ok
// SIG undefined FUN_144579f2c(void)

void FUN_144579f2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcb950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144579f8a FUN_144579f8a body=126 status=ok
// SIG undefined FUN_144579f8a(void)

void FUN_144579f8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcb950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144579ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457a012 FUN_14457a012 body=20 status=ok
// SIG undefined FUN_14457a012(void)

undefined1 FUN_14457a012(longlong param_1)

{
  FUN_14457a026(param_1 + 0x18);
  return 1;
}



// FUNCTION 14457a026 FUN_14457a026 body=231 status=ok
// SIG undefined FUN_14457a026(void)

void FUN_14457a026(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  
  lVar10 = *param_1;
  lVar5 = *(longlong *)(lVar10 + 0xf0);
  lVar6 = *(longlong *)(lVar10 + 0x130);
  dVar1 = *(double *)(lVar6 + 0x90);
  dVar2 = *(double *)(lVar6 + 0x98);
  dVar11 = *(double *)(lVar6 + 0xa0) + *(double *)(lVar6 + 0xa0);
  dVar3 = *(double *)(lVar6 + 0xa8);
  *(double *)(lVar10 + 0x118) = dVar1 * dVar11 + dVar3 * (dVar2 + dVar2);
  *(double *)(lVar10 + 0x120) = dVar11 * dVar2 - (dVar1 + dVar1) * dVar3;
  *(double *)(lVar10 + 0x128) = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  uVar7 = *(undefined4 *)(lVar6 + 0x7c);
  uVar8 = *(undefined4 *)(lVar6 + 0x80);
  uVar9 = *(undefined4 *)(lVar6 + 0x84);
  *(undefined4 *)(lVar10 + 0x100) = *(undefined4 *)(lVar6 + 0x78);
  *(undefined4 *)(lVar10 + 0x104) = uVar7;
  *(undefined4 *)(lVar10 + 0x108) = uVar8;
  *(undefined4 *)(lVar10 + 0x10c) = uVar9;
  *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(lVar6 + 0x88);
  iVar4 = *(int *)(lVar10 + 0xf8);
  if ((longlong)iVar4 != 0) {
    lVar10 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar5 + lVar10));
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar4 * 8 != lVar10);
  }
  return;
}



// FUNCTION 14457a10e FUN_14457a10e body=38 status=ok
// SIG undefined FUN_14457a10e(void)

void FUN_14457a10e(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x3f0))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014457a12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x408))(plVar1);
  return;
}



// FUNCTION 14457a15e FUN_14457a15e body=29 status=ok
// SIG undefined FUN_14457a15e(void)

undefined8 FUN_14457a15e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a1b4 FUN_14457a1b4 body=29 status=ok
// SIG undefined FUN_14457a1b4(void)

undefined8 FUN_14457a1b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a20a FUN_14457a20a body=29 status=ok
// SIG undefined FUN_14457a20a(void)

undefined8 FUN_14457a20a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a254 FUN_14457a254 body=29 status=ok
// SIG undefined FUN_14457a254(void)

undefined8 FUN_14457a254(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a29e FUN_14457a29e body=29 status=ok
// SIG undefined FUN_14457a29e(void)

undefined8 FUN_14457a29e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a2f4 FUN_14457a2f4 body=29 status=ok
// SIG undefined FUN_14457a2f4(void)

undefined8 FUN_14457a2f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a312 FUN_14457a312 body=313 status=ok
// SIG undefined FUN_14457a312(void)

void FUN_14457a312(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cad3688 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144b223ce;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417963e0;
      local_48 = &LAB_147a2f4c9;
      local_50 = &LAB_1400ea6f8;
      local_58 = L"Engine";
      local_60 = 0x200000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30)) {
      lVar2 = FUN_1411674f6();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) goto LAB_14457a384;
    }
    *(int *)*param_1 = *(int *)*param_1 + 1;
  }
LAB_14457a384:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457a44c FUN_14457a44c body=461 status=ok
// SIG undefined FUN_14457a44c(void)

void FUN_14457a44c(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    plVar2 = (longlong *)*param_1;
    if (DAT_14cad3688 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144b223ce;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417963e0;
      local_58 = &LAB_147a2f4c9;
      local_60 = &LAB_1400ea6f8;
      local_68 = L"Engine";
      local_70 = 0x200000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30)) {
      lVar5 = FUN_1411674f6();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_14457a529;
    }
    plVar3 = (longlong *)param_1[1];
    plVar4 = *(longlong **)(param_1[2] + 0x10);
    uVar6 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
    lVar7 = (**(code **)(*plVar4 + 0x2b8))(plVar4,lVar7,uVar6);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_148458f6e(plVar3,iVar1);
    }
    *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = lVar7;
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14457a529:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457a660 FUN_14457a660 body=29 status=ok
// SIG undefined FUN_14457a660(void)

undefined8 FUN_14457a660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a6b0 FUN_14457a6b0 body=29 status=ok
// SIG undefined FUN_14457a6b0(void)

undefined8 FUN_14457a6b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a700 FUN_14457a700 body=29 status=ok
// SIG undefined FUN_14457a700(void)

undefined8 FUN_14457a700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a71e FUN_14457a71e body=75 status=ok
// SIG undefined FUN_14457a71e(void)

void FUN_14457a71e(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0xa8)) {
    cVar1 = *param_2;
    lVar3 = 0;
    do {
      if (cVar1 == '\0') {
        FUN_14850635b(*(undefined8 *)(*(longlong *)(lVar2 + 0xa0) + lVar3 * 8));
      }
      else {
        FUN_148506321();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar2 + 0xa8));
  }
  return;
}



// FUNCTION 14457a794 FUN_14457a794 body=29 status=ok
// SIG undefined FUN_14457a794(void)

undefined8 FUN_14457a794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a7b2 FUN_14457a7b2 body=92 status=ok
// SIG undefined FUN_14457a7b2(void)

void FUN_14457a7b2(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457a83a FUN_14457a83a body=29 status=ok
// SIG undefined FUN_14457a83a(void)

undefined8 FUN_14457a83a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a858 FUN_14457a858 body=92 status=ok
// SIG undefined FUN_14457a858(void)

void FUN_14457a858(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457a8e0 FUN_14457a8e0 body=29 status=ok
// SIG undefined FUN_14457a8e0(void)

undefined8 FUN_14457a8e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a8fe FUN_14457a8fe body=92 status=ok
// SIG undefined FUN_14457a8fe(void)

void FUN_14457a8fe(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457a986 FUN_14457a986 body=29 status=ok
// SIG undefined FUN_14457a986(void)

undefined8 FUN_14457a986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457a9a4 FUN_14457a9a4 body=75 status=ok
// SIG undefined FUN_14457a9a4(void)

void FUN_14457a9a4(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0xa8)) {
    cVar1 = *param_2;
    lVar3 = 0;
    do {
      if (cVar1 == '\0') {
        FUN_14850635b(*(undefined8 *)(*(longlong *)(lVar2 + 0xa0) + lVar3 * 8));
      }
      else {
        FUN_148506321();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar2 + 0xa8));
  }
  return;
}



// FUNCTION 14457aa1a FUN_14457aa1a body=29 status=ok
// SIG undefined FUN_14457aa1a(void)

undefined8 FUN_14457aa1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457aa38 FUN_14457aa38 body=92 status=ok
// SIG undefined FUN_14457aa38(void)

void FUN_14457aa38(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457aac0 FUN_14457aac0 body=29 status=ok
// SIG undefined FUN_14457aac0(void)

undefined8 FUN_14457aac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457aade FUN_14457aade body=92 status=ok
// SIG undefined FUN_14457aade(void)

void FUN_14457aade(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457ab66 FUN_14457ab66 body=29 status=ok
// SIG undefined FUN_14457ab66(void)

undefined8 FUN_14457ab66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ab84 FUN_14457ab84 body=92 status=ok
// SIG undefined FUN_14457ab84(void)

void FUN_14457ab84(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457ac0c FUN_14457ac0c body=29 status=ok
// SIG undefined FUN_14457ac0c(void)

undefined8 FUN_14457ac0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ac2a FUN_14457ac2a body=92 status=ok
// SIG undefined FUN_14457ac2a(void)

void FUN_14457ac2a(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457acb2 FUN_14457acb2 body=29 status=ok
// SIG undefined FUN_14457acb2(void)

undefined8 FUN_14457acb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ad02 FUN_14457ad02 body=29 status=ok
// SIG undefined FUN_14457ad02(void)

undefined8 FUN_14457ad02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ad52 FUN_14457ad52 body=29 status=ok
// SIG undefined FUN_14457ad52(void)

undefined8 FUN_14457ad52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ada2 FUN_14457ada2 body=29 status=ok
// SIG undefined FUN_14457ada2(void)

undefined8 FUN_14457ada2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457adf2 FUN_14457adf2 body=29 status=ok
// SIG undefined FUN_14457adf2(void)

undefined8 FUN_14457adf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ae42 FUN_14457ae42 body=29 status=ok
// SIG undefined FUN_14457ae42(void)

undefined8 FUN_14457ae42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ae92 FUN_14457ae92 body=29 status=ok
// SIG undefined FUN_14457ae92(void)

undefined8 FUN_14457ae92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457aee2 FUN_14457aee2 body=29 status=ok
// SIG undefined FUN_14457aee2(void)

undefined8 FUN_14457aee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457af32 FUN_14457af32 body=29 status=ok
// SIG undefined FUN_14457af32(void)

undefined8 FUN_14457af32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457af82 FUN_14457af82 body=29 status=ok
// SIG undefined FUN_14457af82(void)

undefined8 FUN_14457af82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457afd2 FUN_14457afd2 body=29 status=ok
// SIG undefined FUN_14457afd2(void)

undefined8 FUN_14457afd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b022 FUN_14457b022 body=29 status=ok
// SIG undefined FUN_14457b022(void)

undefined8 FUN_14457b022(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b0ce FUN_14457b0ce body=29 status=ok
// SIG undefined FUN_14457b0ce(void)

undefined8 FUN_14457b0ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b0ec FUN_14457b0ec body=502 status=ok
// SIG undefined FUN_14457b0ec(void)

void FUN_14457b0ec(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0xf0);
  if (*(char *)(lVar5 + 0xa8) == '\x01') {
    dVar1 = *(double *)(lVar4 + 0x108);
    dVar13 = *(double *)(lVar5 + 0xc0) - dVar1;
    dVar2 = *(double *)(lVar4 + 0xf8);
    dVar3 = *(double *)(lVar4 + 0x100);
    dVar14 = *(double *)(lVar5 + 0xb8) - dVar3;
    dVar12 = *(double *)(lVar5 + 0xb0) - dVar2;
    uVar11 = -(ulonglong)(-dVar13 <= dVar13);
    dVar15 = (double)(~uVar11 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar11);
    uVar11 = -(ulonglong)(-dVar14 <= dVar14);
    dVar13 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
    uVar11 = -(ulonglong)(-dVar12 <= dVar12);
    dVar12 = (double)(~uVar11 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar11);
    uVar9 = (uint)(dVar1 < dVar2) * 2;
    if (dVar3 < dVar2) {
      uVar9 = (dVar1 < dVar3) + 1;
    }
    dVar14 = 0.001 / *(double *)(lVar4 + 0xf8 + (ulonglong)uVar9 * 8);
    iVar10 = (uint)(dVar12 < dVar15) * 2;
    if (dVar12 < dVar13) {
      iVar10 = (dVar13 < dVar15) + 1;
    }
    dVar13 = *(double *)(lVar5 + 0xb0 + (ulonglong)(uint)(iVar10 << 3)) /
             *(double *)(lVar4 + 0xf8 + (ulonglong)(uint)(iVar10 << 3));
    if (dVar13 <= dVar14) {
      dVar13 = dVar14;
    }
    *(double *)(lVar5 + 0xb0) = dVar13 * dVar2;
    *(double *)(lVar5 + 0xb8) = dVar3 * dVar13;
    *(double *)(lVar5 + 0xc0) = dVar1 * dVar13;
    *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar5 + 0xc0);
    uVar6 = *(undefined4 *)(lVar5 + 0xb4);
    uVar7 = *(undefined4 *)(lVar5 + 0xb8);
    uVar8 = *(undefined4 *)(lVar5 + 0xbc);
    *(undefined4 *)(lVar4 + 0xf8) = *(undefined4 *)(lVar5 + 0xb0);
    *(undefined4 *)(lVar4 + 0xfc) = uVar6;
    *(undefined4 *)(lVar4 + 0x100) = uVar7;
    *(undefined4 *)(lVar4 + 0x104) = uVar8;
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x28) +
                   (longlong)*(int *)(lVar4 + 0x140) * 8) + 0x10))();
    if (*(char *)(lVar4 + 0x1e0) == '\0') {
      *(undefined1 *)(lVar4 + 0x1e0) = 1;
      FUN_1402160b8(&local_58);
      *(undefined8 *)(lVar4 + 0x1e8) = local_58;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457b30e FUN_14457b30e body=29 status=ok
// SIG undefined FUN_14457b30e(void)

undefined8 FUN_14457b30e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b32c FUN_14457b32c body=502 status=ok
// SIG undefined FUN_14457b32c(void)

void FUN_14457b32c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0xf0);
  if (*(char *)(lVar5 + 0xa8) == '\x01') {
    dVar1 = *(double *)(lVar4 + 0x120);
    dVar13 = *(double *)(lVar5 + 0xd8) - dVar1;
    dVar2 = *(double *)(lVar4 + 0x110);
    dVar3 = *(double *)(lVar4 + 0x118);
    dVar14 = *(double *)(lVar5 + 0xd0) - dVar3;
    dVar12 = *(double *)(lVar5 + 200) - dVar2;
    uVar11 = -(ulonglong)(-dVar13 <= dVar13);
    dVar15 = (double)(~uVar11 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar11);
    uVar11 = -(ulonglong)(-dVar14 <= dVar14);
    dVar13 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
    uVar11 = -(ulonglong)(-dVar12 <= dVar12);
    dVar12 = (double)(~uVar11 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar11);
    uVar9 = (uint)(dVar1 < dVar2) * 2;
    if (dVar3 < dVar2) {
      uVar9 = (dVar1 < dVar3) + 1;
    }
    dVar14 = 0.001 / *(double *)(lVar4 + 0x110 + (ulonglong)uVar9 * 8);
    iVar10 = (uint)(dVar12 < dVar15) * 2;
    if (dVar12 < dVar13) {
      iVar10 = (dVar13 < dVar15) + 1;
    }
    dVar13 = *(double *)(lVar5 + 200 + (ulonglong)(uint)(iVar10 << 3)) /
             *(double *)(lVar4 + 0x110 + (ulonglong)(uint)(iVar10 << 3));
    if (dVar13 <= dVar14) {
      dVar13 = dVar14;
    }
    *(double *)(lVar5 + 200) = dVar13 * dVar2;
    *(double *)(lVar5 + 0xd0) = dVar3 * dVar13;
    *(double *)(lVar5 + 0xd8) = dVar1 * dVar13;
    *(undefined8 *)(lVar4 + 0x120) = *(undefined8 *)(lVar5 + 0xd8);
    uVar6 = *(undefined4 *)(lVar5 + 0xcc);
    uVar7 = *(undefined4 *)(lVar5 + 0xd0);
    uVar8 = *(undefined4 *)(lVar5 + 0xd4);
    *(undefined4 *)(lVar4 + 0x110) = *(undefined4 *)(lVar5 + 200);
    *(undefined4 *)(lVar4 + 0x114) = uVar6;
    *(undefined4 *)(lVar4 + 0x118) = uVar7;
    *(undefined4 *)(lVar4 + 0x11c) = uVar8;
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x28) +
                   (longlong)*(int *)(lVar4 + 0x144) * 8) + 0x10))();
    if (*(char *)(lVar4 + 0x1e0) == '\0') {
      *(undefined1 *)(lVar4 + 0x1e0) = 1;
      FUN_1402160b8(&local_58);
      *(undefined8 *)(lVar4 + 0x1e8) = local_58;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457b54e FUN_14457b54e body=29 status=ok
// SIG undefined FUN_14457b54e(void)

undefined8 FUN_14457b54e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b56c FUN_14457b56c body=502 status=ok
// SIG undefined FUN_14457b56c(void)

void FUN_14457b56c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0xf0);
  if (*(char *)(lVar5 + 0xa8) == '\x01') {
    dVar1 = *(double *)(lVar4 + 0x138);
    dVar13 = *(double *)(lVar5 + 0xf0) - dVar1;
    dVar2 = *(double *)(lVar4 + 0x128);
    dVar3 = *(double *)(lVar4 + 0x130);
    dVar14 = *(double *)(lVar5 + 0xe8) - dVar3;
    dVar12 = *(double *)(lVar5 + 0xe0) - dVar2;
    uVar11 = -(ulonglong)(-dVar13 <= dVar13);
    dVar15 = (double)(~uVar11 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar11);
    uVar11 = -(ulonglong)(-dVar14 <= dVar14);
    dVar13 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
    uVar11 = -(ulonglong)(-dVar12 <= dVar12);
    dVar12 = (double)(~uVar11 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar11);
    uVar9 = (uint)(dVar1 < dVar2) * 2;
    if (dVar3 < dVar2) {
      uVar9 = (dVar1 < dVar3) + 1;
    }
    dVar14 = 0.001 / *(double *)(lVar4 + 0x128 + (ulonglong)uVar9 * 8);
    iVar10 = (uint)(dVar12 < dVar15) * 2;
    if (dVar12 < dVar13) {
      iVar10 = (dVar13 < dVar15) + 1;
    }
    dVar13 = *(double *)(lVar5 + 0xe0 + (ulonglong)(uint)(iVar10 << 3)) /
             *(double *)(lVar4 + 0x128 + (ulonglong)(uint)(iVar10 << 3));
    if (dVar13 <= dVar14) {
      dVar13 = dVar14;
    }
    *(double *)(lVar5 + 0xe0) = dVar13 * dVar2;
    *(double *)(lVar5 + 0xe8) = dVar3 * dVar13;
    *(double *)(lVar5 + 0xf0) = dVar1 * dVar13;
    *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar5 + 0xf0);
    uVar6 = *(undefined4 *)(lVar5 + 0xe4);
    uVar7 = *(undefined4 *)(lVar5 + 0xe8);
    uVar8 = *(undefined4 *)(lVar5 + 0xec);
    *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)(lVar5 + 0xe0);
    *(undefined4 *)(lVar4 + 300) = uVar6;
    *(undefined4 *)(lVar4 + 0x130) = uVar7;
    *(undefined4 *)(lVar4 + 0x134) = uVar8;
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x28) +
                   (longlong)*(int *)(lVar4 + 0x148) * 8) + 0x10))();
    if (*(char *)(lVar4 + 0x1e0) == '\0') {
      *(undefined1 *)(lVar4 + 0x1e0) = 1;
      FUN_1402160b8(&local_58);
      *(undefined8 *)(lVar4 + 0x1e8) = local_58;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457b78e FUN_14457b78e body=29 status=ok
// SIG undefined FUN_14457b78e(void)

undefined8 FUN_14457b78e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b7ac FUN_14457b7ac body=29 status=ok
// SIG undefined FUN_14457b7ac(void)

undefined8 FUN_14457b7ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457b7de FUN_14457b7de body=93 status=ok
// SIG undefined FUN_14457b7de(void)

void FUN_14457b7de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcc050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457b83c FUN_14457b83c body=93 status=ok
// SIG undefined FUN_14457b83c(void)

void FUN_14457b83c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcc050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457b89a FUN_14457b89a body=126 status=ok
// SIG undefined FUN_14457b89a(void)

void FUN_14457b89a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcc050;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457b909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457b918 FUN_14457b918 body=153 status=ok
// SIG undefined FUN_14457b918(void)

void FUN_14457b918(longlong param_1)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar1 + 400);
  uVar3 = *(undefined4 *)(lVar2 + 0x7c);
  uVar4 = *(undefined4 *)(lVar2 + 0x80);
  uVar5 = *(undefined4 *)(lVar2 + 0x84);
  uVar6 = *(undefined4 *)(lVar2 + 0x88);
  uVar7 = *(undefined4 *)(lVar2 + 0x8c);
  uVar8 = *(undefined4 *)(lVar2 + 0x90);
  uVar9 = *(undefined4 *)(lVar2 + 0x94);
  uVar10 = *(undefined4 *)(lVar2 + 0x98);
  uVar11 = *(undefined4 *)(lVar2 + 0x9c);
  uVar12 = *(undefined4 *)(lVar2 + 0xa0);
  uVar13 = *(undefined4 *)(lVar2 + 0xa4);
  *(undefined4 *)(lVar1 + 0x198) = *(undefined4 *)(lVar2 + 0x78);
  *(undefined4 *)(lVar1 + 0x19c) = uVar3;
  *(undefined4 *)(lVar1 + 0x1a0) = uVar4;
  *(undefined4 *)(lVar1 + 0x1a4) = uVar5;
  *(undefined4 *)(lVar1 + 0x1a8) = uVar6;
  *(undefined4 *)(lVar1 + 0x1ac) = uVar7;
  *(undefined4 *)(lVar1 + 0x1b0) = uVar8;
  *(undefined4 *)(lVar1 + 0x1b4) = uVar9;
  *(undefined4 *)(lVar1 + 0x1b8) = uVar10;
  *(undefined4 *)(lVar1 + 0x1bc) = uVar11;
  *(undefined4 *)(lVar1 + 0x1c0) = uVar12;
  *(undefined4 *)(lVar1 + 0x1c4) = uVar13;
  *(undefined8 *)(lVar1 + 0x1c8) = *(undefined8 *)(lVar2 + 0xa8);
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457b9b2 FUN_14457b9b2 body=155 status=ok
// SIG undefined FUN_14457b9b2(void)

undefined8 FUN_14457b9b2(longlong param_1)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar1 + 400);
  uVar3 = *(undefined4 *)(lVar2 + 0x7c);
  uVar4 = *(undefined4 *)(lVar2 + 0x80);
  uVar5 = *(undefined4 *)(lVar2 + 0x84);
  uVar6 = *(undefined4 *)(lVar2 + 0x88);
  uVar7 = *(undefined4 *)(lVar2 + 0x8c);
  uVar8 = *(undefined4 *)(lVar2 + 0x90);
  uVar9 = *(undefined4 *)(lVar2 + 0x94);
  uVar10 = *(undefined4 *)(lVar2 + 0x98);
  uVar11 = *(undefined4 *)(lVar2 + 0x9c);
  uVar12 = *(undefined4 *)(lVar2 + 0xa0);
  uVar13 = *(undefined4 *)(lVar2 + 0xa4);
  *(undefined4 *)(lVar1 + 0x198) = *(undefined4 *)(lVar2 + 0x78);
  *(undefined4 *)(lVar1 + 0x19c) = uVar3;
  *(undefined4 *)(lVar1 + 0x1a0) = uVar4;
  *(undefined4 *)(lVar1 + 0x1a4) = uVar5;
  *(undefined4 *)(lVar1 + 0x1a8) = uVar6;
  *(undefined4 *)(lVar1 + 0x1ac) = uVar7;
  *(undefined4 *)(lVar1 + 0x1b0) = uVar8;
  *(undefined4 *)(lVar1 + 0x1b4) = uVar9;
  *(undefined4 *)(lVar1 + 0x1b8) = uVar10;
  *(undefined4 *)(lVar1 + 0x1bc) = uVar11;
  *(undefined4 *)(lVar1 + 0x1c0) = uVar12;
  *(undefined4 *)(lVar1 + 0x1c4) = uVar13;
  *(undefined8 *)(lVar1 + 0x1c8) = *(undefined8 *)(lVar2 + 0xa8);
  if (*(char *)(lVar1 + 0x1e0) == '\0') {
    *(undefined1 *)(lVar1 + 0x1e0) = 1;
    FUN_1402160b8(&local_20);
    *(undefined8 *)(lVar1 + 0x1e8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457ba4e FUN_14457ba4e body=107 status=ok
// SIG undefined FUN_14457ba4e(void)

void FUN_14457ba4e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c688c4(param_2,&local_48,1);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x108) = local_28;
  *(undefined4 *)(lVar1 + 0x10c) = uStack_24;
  *(undefined4 *)(lVar1 + 0x110) = uStack_20;
  *(undefined4 *)(lVar1 + 0x114) = uStack_1c;
  *(undefined4 *)(lVar1 + 0xf8) = local_38;
  *(undefined4 *)(lVar1 + 0xfc) = uStack_34;
  *(undefined4 *)(lVar1 + 0x100) = uStack_30;
  *(undefined4 *)(lVar1 + 0x104) = uStack_2c;
  *(undefined4 *)(lVar1 + 0xe8) = local_48;
  *(undefined4 *)(lVar1 + 0xec) = uStack_44;
  *(undefined4 *)(lVar1 + 0xf0) = uStack_40;
  *(undefined4 *)(lVar1 + 0xf4) = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457baba FUN_14457baba body=234 status=ok
// SIG undefined FUN_14457baba(void)

double * FUN_14457baba(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar3 = param_4[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457bbd0 FUN_14457bbd0 body=29 status=ok
// SIG undefined FUN_14457bbd0(void)

undefined8 FUN_14457bbd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bbee FUN_14457bbee body=192 status=ok
// SIG undefined FUN_14457bbee(void)

undefined4 *
FUN_14457bbee(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  local_58 = *(undefined8 *)(param_4 + 4);
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      FUN_146c5cfa8(lVar1,&local_48,&local_68);
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457bcda FUN_14457bcda body=29 status=ok
// SIG undefined FUN_14457bcda(void)

undefined8 FUN_14457bcda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bcf8 FUN_14457bcf8 body=53 status=ok
// SIG undefined FUN_14457bcf8(void)

undefined4 * FUN_14457bcf8(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(char *)(*(longlong *)*param_2 + 0xb1) == '\x01') {
    FUN_146c89f40(param_1,*param_3);
  }
  else {
    *param_1 = *(undefined4 *)(*(longlong *)*param_2 + 0xb4);
  }
  return param_1;
}



// FUNCTION 14457bd2e FUN_14457bd2e body=53 status=ok
// SIG undefined FUN_14457bd2e(void)

undefined4 * FUN_14457bd2e(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(char *)(*(longlong *)*param_2 + 0xb1) == '\x01') {
    FUN_146c89f40(param_1,*param_3);
  }
  else {
    *param_1 = *(undefined4 *)(*(longlong *)*param_2 + 0xb4);
  }
  return param_1;
}



// FUNCTION 14457bd64 FUN_14457bd64 body=53 status=ok
// SIG undefined FUN_14457bd64(void)

undefined4 * FUN_14457bd64(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(char *)(*(longlong *)*param_2 + 0xb1) == '\x01') {
    FUN_146c89f40(param_1,*param_3);
  }
  else {
    *param_1 = *(undefined4 *)(*(longlong *)*param_2 + 0xb4);
  }
  return param_1;
}



// FUNCTION 14457bd9a FUN_14457bd9a body=53 status=ok
// SIG undefined FUN_14457bd9a(void)

undefined4 * FUN_14457bd9a(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(char *)(*(longlong *)*param_2 + 0xb1) == '\x01') {
    FUN_146c89f40(param_1,*param_3);
  }
  else {
    *param_1 = *(undefined4 *)(*(longlong *)*param_2 + 0xb4);
  }
  return param_1;
}



// FUNCTION 14457be06 FUN_14457be06 body=29 status=ok
// SIG undefined FUN_14457be06(void)

undefined8 FUN_14457be06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457be5a FUN_14457be5a body=29 status=ok
// SIG undefined FUN_14457be5a(void)

undefined8 FUN_14457be5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457beae FUN_14457beae body=29 status=ok
// SIG undefined FUN_14457beae(void)

undefined8 FUN_14457beae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bf02 FUN_14457bf02 body=29 status=ok
// SIG undefined FUN_14457bf02(void)

undefined8 FUN_14457bf02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bf56 FUN_14457bf56 body=29 status=ok
// SIG undefined FUN_14457bf56(void)

undefined8 FUN_14457bf56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bfaa FUN_14457bfaa body=29 status=ok
// SIG undefined FUN_14457bfaa(void)

undefined8 FUN_14457bfaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457bfc8 FUN_14457bfc8 body=38 status=ok
// SIG undefined FUN_14457bfc8(void)

undefined8
FUN_14457bfc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146bc96d4(*param_3,*param_4);
  FUN_146c89f40(param_1,uVar1);
  return param_1;
}



// FUNCTION 14457c018 FUN_14457c018 body=29 status=ok
// SIG undefined FUN_14457c018(void)

undefined8 FUN_14457c018(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c036 FUN_14457c036 body=163 status=ok
// SIG undefined FUN_14457c036(void)

void FUN_14457c036(longlong *param_1,undefined8 *param_2)

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
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xb0) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457c104 FUN_14457c104 body=29 status=ok
// SIG undefined FUN_14457c104(void)

undefined8 FUN_14457c104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c19a FUN_14457c19a body=29 status=ok
// SIG undefined FUN_14457c19a(void)

undefined8 FUN_14457c19a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c1ee FUN_14457c1ee body=29 status=ok
// SIG undefined FUN_14457c1ee(void)

undefined8 FUN_14457c1ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c20c FUN_14457c20c body=106 status=ok
// SIG undefined FUN_14457c20c(void)

void FUN_14457c20c(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_14851bab8(*(undefined8 *)(*param_1 + 0xd8),*param_2);
  lVar1 = param_1[1];
  lVar2 = *(longlong *)(lVar1 + 0xb8);
  if (*(char *)(lVar2 + 0xab) == '\0') {
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
LAB_14457c25b:
    FUN_148506321(uVar3);
    return;
  }
  if (*(char *)(lVar2 + 0xa8) == '\x01') {
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
    if (*(char *)(lVar2 + 0xaa) != '\0') goto LAB_14457c25b;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
  }
  FUN_14850635b(uVar3);
  return;
}



// FUNCTION 14457c2a0 FUN_14457c2a0 body=29 status=ok
// SIG undefined FUN_14457c2a0(void)

undefined8 FUN_14457c2a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c336 FUN_14457c336 body=29 status=ok
// SIG undefined FUN_14457c336(void)

undefined8 FUN_14457c336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c354 FUN_14457c354 body=102 status=ok
// SIG undefined FUN_14457c354(void)

void FUN_14457c354(longlong *param_1,char *param_2)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  cVar1 = *param_2;
  *(undefined1 *)(param_1 + 100) = 0;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x18],cVar1 == '\0');
  *(bool *)(param_1[0x18] + 0xa8) = cVar1 == '\0';
  *(undefined1 *)(param_1[0x18] + 0xd2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014457c3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x18]);
  return;
}



// FUNCTION 14457c3e4 FUN_14457c3e4 body=29 status=ok
// SIG undefined FUN_14457c3e4(void)

undefined8 FUN_14457c3e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c402 FUN_14457c402 body=203 status=ok
// SIG undefined FUN_14457c402(void)

void FUN_14457c402(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *param_1;
  plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149fab260;
  FUN_146bff712(plVar5 + 2,param_3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(lVar4 + 0xf8);
  *(uint *)(lVar4 + 0xf8) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0xfc) < iVar3 + 1U) {
    FUN_1484d76ae((longlong *)(lVar4 + 0xf0),iVar3);
  }
  lVar4 = *(longlong *)(lVar4 + 0xf0);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 14457c4f8 FUN_14457c4f8 body=29 status=ok
// SIG undefined FUN_14457c4f8(void)

undefined8 FUN_14457c4f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c520 FUN_14457c520 body=270 status=ok
// SIG undefined FUN_14457c520(void)

void FUN_14457c520(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248 [68];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar4 = (longlong)*param_2;
  lVar1 = *param_1;
  local_250 = 0;
  local_258 = 0x3e800000000;
  FUN_148506727(local_248,*(undefined8 *)(*(longlong *)(lVar1 + 0xa0) + lVar4 * 8));
  FUN_146c00942(lVar4 * 0x220 + *(longlong *)(lVar1 + 0x110),local_248);
  FUN_141082778(local_248);
  if (*(char *)param_1[1] == '\x01') {
    lVar3 = **(longlong **)(lVar1 + 0x2f8);
    uVar2 = FUN_1485062e8(*(undefined8 *)(*(longlong *)(lVar1 + 0xa0) + lVar4 * 8));
    FUN_14850815e(lVar4 * 0x100 + lVar3,uVar2,1);
    FUN_1485063a5(local_248,*(undefined8 *)(*(longlong *)(lVar1 + 0xa0) + lVar4 * 8));
    puVar5 = local_248;
    puVar6 = (undefined8 *)(lVar4 * 0x60 + **(longlong **)(lVar1 + 0x308));
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14457c630 FUN_14457c630 body=63 status=ok
// SIG undefined FUN_14457c630(void)

void FUN_14457c630(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1[0x1a] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],*(int *)(param_1[0x19] + 0xb0) == 3);
  }
  FUN_1496a364e(param_1);
  return;
}



// FUNCTION 14457c69a FUN_14457c69a body=29 status=ok
// SIG undefined FUN_14457c69a(void)

undefined8 FUN_14457c69a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c6ea FUN_14457c6ea body=29 status=ok
// SIG undefined FUN_14457c6ea(void)

undefined8 FUN_14457c6ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c73e FUN_14457c73e body=29 status=ok
// SIG undefined FUN_14457c73e(void)

undefined8 FUN_14457c73e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c78e FUN_14457c78e body=29 status=ok
// SIG undefined FUN_14457c78e(void)

undefined8 FUN_14457c78e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c7de FUN_14457c7de body=29 status=ok
// SIG undefined FUN_14457c7de(void)

undefined8 FUN_14457c7de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c82e FUN_14457c82e body=29 status=ok
// SIG undefined FUN_14457c82e(void)

undefined8 FUN_14457c82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c87e FUN_14457c87e body=29 status=ok
// SIG undefined FUN_14457c87e(void)

undefined8 FUN_14457c87e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c8ce FUN_14457c8ce body=29 status=ok
// SIG undefined FUN_14457c8ce(void)

undefined8 FUN_14457c8ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c91e FUN_14457c91e body=29 status=ok
// SIG undefined FUN_14457c91e(void)

undefined8 FUN_14457c91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c96e FUN_14457c96e body=29 status=ok
// SIG undefined FUN_14457c96e(void)

undefined8 FUN_14457c96e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457c9be FUN_14457c9be body=29 status=ok
// SIG undefined FUN_14457c9be(void)

undefined8 FUN_14457c9be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ca0e FUN_14457ca0e body=29 status=ok
// SIG undefined FUN_14457ca0e(void)

undefined8 FUN_14457ca0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ca5e FUN_14457ca5e body=29 status=ok
// SIG undefined FUN_14457ca5e(void)

undefined8 FUN_14457ca5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457caae FUN_14457caae body=29 status=ok
// SIG undefined FUN_14457caae(void)

undefined8 FUN_14457caae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cafe FUN_14457cafe body=29 status=ok
// SIG undefined FUN_14457cafe(void)

undefined8 FUN_14457cafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cb4e FUN_14457cb4e body=29 status=ok
// SIG undefined FUN_14457cb4e(void)

undefined8 FUN_14457cb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cb9e FUN_14457cb9e body=29 status=ok
// SIG undefined FUN_14457cb9e(void)

undefined8 FUN_14457cb9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cbee FUN_14457cbee body=29 status=ok
// SIG undefined FUN_14457cbee(void)

undefined8 FUN_14457cbee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cc3e FUN_14457cc3e body=29 status=ok
// SIG undefined FUN_14457cc3e(void)

undefined8 FUN_14457cc3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cc8e FUN_14457cc8e body=29 status=ok
// SIG undefined FUN_14457cc8e(void)

undefined8 FUN_14457cc8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ccde FUN_14457ccde body=29 status=ok
// SIG undefined FUN_14457ccde(void)

undefined8 FUN_14457ccde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cd2e FUN_14457cd2e body=29 status=ok
// SIG undefined FUN_14457cd2e(void)

undefined8 FUN_14457cd2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cd7e FUN_14457cd7e body=29 status=ok
// SIG undefined FUN_14457cd7e(void)

undefined8 FUN_14457cd7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cdce FUN_14457cdce body=29 status=ok
// SIG undefined FUN_14457cdce(void)

undefined8 FUN_14457cdce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ce1e FUN_14457ce1e body=29 status=ok
// SIG undefined FUN_14457ce1e(void)

undefined8 FUN_14457ce1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ce6e FUN_14457ce6e body=29 status=ok
// SIG undefined FUN_14457ce6e(void)

undefined8 FUN_14457ce6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cebe FUN_14457cebe body=29 status=ok
// SIG undefined FUN_14457cebe(void)

undefined8 FUN_14457cebe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cf0e FUN_14457cf0e body=29 status=ok
// SIG undefined FUN_14457cf0e(void)

undefined8 FUN_14457cf0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cf5e FUN_14457cf5e body=29 status=ok
// SIG undefined FUN_14457cf5e(void)

undefined8 FUN_14457cf5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457cfae FUN_14457cfae body=29 status=ok
// SIG undefined FUN_14457cfae(void)

undefined8 FUN_14457cfae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457d01e FUN_14457d01e body=29 status=ok
// SIG undefined FUN_14457d01e(void)

undefined8 FUN_14457d01e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457d076 FUN_14457d076 body=29 status=ok
// SIG undefined FUN_14457d076(void)

undefined8 FUN_14457d076(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457d094 FUN_14457d094 body=101 status=ok
// SIG undefined FUN_14457d094(void)

void FUN_14457d094(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x130) = 1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14bdcca00;
  puVar1[2] = param_1;
  if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457d0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,puVar1,3,*(code **)(*DAT_14c8442c0 + 0x18));
    return;
  }
  FUN_14457d0fa(puVar1);
  return;
}



// FUNCTION 14457d0fa FUN_14457d0fa body=77 status=ok
// SIG undefined FUN_14457d0fa(void)

void FUN_14457d0fa(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_140187fa0(param_1[2],1,0);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457d13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14457d166 FUN_14457d166 body=211 status=ok
// SIG undefined FUN_14457d166(void)

uint * FUN_14457d166(longlong param_1,uint *param_2)

{
  char *pcVar1;
  longlong lVar2;
  double dVar3;
  
  *param_2 = 4;
  param_2[2] = 0;
  param_2[3] = 0xbff00000;
  if (*(char *)(param_1 + 0x54) == '\x01') {
LAB_14457d19d:
    *param_2 = 3;
    dVar3 = *(double *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      dVar3 = *(double *)(param_1 + 0x18);
      lVar2 = 0x30;
      goto LAB_14457d1ad;
    }
    if (*(int *)(lVar2 + 0x10) != 0) goto LAB_14457d19d;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x20))(*(longlong **)(lVar2 + 0x18),0xffffffff,0)
      ;
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 8) + 0x50);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
      if (*(int *)(param_1 + 0x10) == 1) {
        dVar3 = *(double *)(param_1 + 0x18);
        *(double *)(param_1 + 0x28) = dVar3;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x28);
      }
      *param_2 = (uint)(*(int *)(param_1 + 0x10) == 2);
    }
    else {
      *param_2 = 2;
      dVar3 = *(double *)(param_1 + 0x30);
    }
  }
  lVar2 = 0x20;
LAB_14457d1ad:
  *(double *)(param_2 + 2) = dVar3 - *(double *)(param_1 + lVar2);
  return param_2;
}



// FUNCTION 14457d23a FUN_14457d23a body=205 status=ok
// SIG undefined FUN_14457d23a(void)

void FUN_14457d23a(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*param_2;
  uVar1 = *(undefined8 *)(*(longlong *)*param_1 + lVar4 * 0x10);
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = uVar1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  lVar2 = *(longlong *)(*(longlong *)param_1[1] + lVar4 * 8);
  *(undefined8 **)(*(longlong *)param_1[1] + lVar4 * 8) = puVar3;
  if (lVar2 != 0) {
    FUN_146be9400(lVar2 + 8);
    FUN_1400020a8(lVar2);
  }
  local_38 = param_1[2];
  local_58 = 0;
  local_48 = &PTR_LAB_14bdccad0;
  local_68 = FUN_14457d308;
  local_40 = uVar1;
  FUN_142984024(*(undefined8 *)(*(longlong *)param_1[1] + lVar4 * 8));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457d308 FUN_14457d308 body=89 status=ok
// SIG undefined FUN_14457d308(void)

void FUN_14457d308(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_3;
  local_10 = *param_2;
  local_18 = *param_1;
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457d38c FUN_14457d38c body=29 status=ok
// SIG undefined FUN_14457d38c(void)

undefined8 FUN_14457d38c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457d3aa FUN_14457d3aa body=262 status=ok
// SIG undefined FUN_14457d3aa(void)

void FUN_14457d3aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14457d4b0 FUN_14457d4b0 body=385 status=ok
// SIG undefined FUN_14457d4b0(void)

void FUN_14457d4b0(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_638 [32];
  undefined1 local_618;
  undefined1 local_610 [8];
  undefined1 local_608 [1496];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_638;
  lVar3 = *(longlong *)*param_1;
  lVar6 = (longlong)*param_2 * 0x10;
  local_618 = 0;
  FUN_1482e14f4(local_610,*(undefined8 *)(lVar3 + lVar6),
                *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)param_1[1] + (longlong)*(int *)(lVar3 + 8 + lVar6) * 8) + 8) +
                 (longlong)*(int *)(lVar3 + 0xc + lVar6) * 8),0);
  plVar4 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149fab260;
  FUN_146bffece(plVar4 + 2,local_608);
  if (plVar4 == (longlong *)0x0) {
    lVar3 = *(longlong *)param_1[2];
    *(undefined8 *)(lVar3 + lVar6) = 0x10;
    plVar5 = *(longlong **)(lVar3 + 8 + lVar6);
    if (plVar5 == (longlong *)0x0) goto LAB_14457d5ff;
    *(undefined8 *)(lVar3 + lVar6 + 8) = 0;
LAB_14457d5c0:
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
    if (plVar4 == (longlong *)0x0) goto LAB_14457d5ff;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar3 = *(longlong *)param_1[2];
    *(longlong **)(lVar3 + lVar6) = plVar4 + 2;
    plVar5 = *(longlong **)(lVar3 + 8 + lVar6);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(lVar3 + lVar6 + 8) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14457d5c0;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14457d5ff:
  FUN_1482e1868(local_610);
  if ((local_30 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


