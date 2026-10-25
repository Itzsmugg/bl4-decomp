// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ea15c0 FUN_144ea15c0 body=215 status=ok
// SIG undefined FUN_144ea15c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea15c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ea15da;
  lVar3 = FUN_144ba3e90();
  iVar1 = FUN_144ba3de0(param_1);
  iVar1 = FUN_1452681f0(param_2,iVar1 << 3,lVar3);
  if (iVar1 < 0) {
    FUN_144ba24f0(6,0x9f,0x9d,"crypto\\evp\\e_camellia.c",0xdd,uVar6);
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_144ba3db0(param_1);
    uVar2 = FUN_144ba3da0(uVar6);
    if ((1 < (uVar2 & 0xf0007) - 1) || (pcVar4 = FUN_145268280, param_4 != 0)) {
      pcVar4 = FUN_145268250;
    }
    *(code **)(lVar3 + 0x118) = pcVar4;
    puVar5 = (undefined *)0x0;
    uVar6 = 1;
    if ((uVar2 & 0xf0007) == 2) {
      puVar5 = &DAT_142659680;
    }
    *(undefined **)(lVar3 + 0x120) = puVar5;
  }
  return uVar6;
}



// FUNCTION 144ea16a0 FUN_144ea16a0 body=232 status=ok
// SIG undefined FUN_144ea16a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea16a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar3 = FUN_144ba3e90();
  if (*(longlong *)(lVar3 + 0x120) == 0) {
    iVar2 = FUN_144ba3dc0(param_1);
    if (iVar2 == 0) {
      uVar4 = FUN_144ba3e50(param_1);
      FUN_144ed66b0(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0x118));
    }
    else {
      uVar4 = FUN_144ba3e50(param_1);
      FUN_144ed64e0(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0x118));
    }
  }
  else {
    uVar1 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
    (**(code **)(lVar3 + 0x120))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar5,uVar1));
  }
  return 1;
}



// FUNCTION 144ea1790 FUN_144ea1790 body=137 status=ok
// SIG undefined FUN_144ea1790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea1790(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_144ba3dd0();
  uVar4 = (ulonglong)iVar1;
  lVar2 = FUN_144ba3e90(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0x118))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 144ea1820 FUN_144ea1820 body=163 status=ok
// SIG undefined FUN_144ea1820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea1820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ea1840;
  lVar1 = FUN_144ba3e90();
  local_18[0] = FUN_144ba3e70(param_1);
  uVar2 = FUN_144ba3e50(param_1);
  FUN_144ed6db0(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0x118));
  FUN_144ba3e80(param_1,local_18[0]);
  return 1;
}



// FUNCTION 144ea18d0 FUN_144ea18d0 body=176 status=ok
// SIG undefined FUN_144ea18d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea18d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ea18ee;
  lVar2 = FUN_144ba3e90();
  local_28[0] = FUN_144ba3e70(param_1);
  uVar1 = FUN_144ba3dc0(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed6f20(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ea1980 FUN_144ea1980 body=176 status=ok
// SIG undefined FUN_144ea1980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea1980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ea199e;
  lVar2 = FUN_144ba3e90();
  local_28[0] = FUN_144ba3e70(param_1);
  uVar1 = FUN_144ba3dc0(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed71b0(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0x118));
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ea1a30 FUN_144ea1a30 body=414 status=ok
// SIG undefined FUN_144ea1a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea1a30(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x144ea1a47;
  lVar3 = FUN_144ba3e90();
  iVar1 = FUN_144ba3f00(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = FUN_144ba3e70(param_1);
        uVar2 = FUN_144ba3dc0(param_1);
        uVar4 = FUN_144ba3e50(param_1);
        FUN_144ed7280(param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                      *(undefined8 *)(lVar3 + 0x118));
        FUN_144ba3e80(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = FUN_144ba3e70(param_1);
    uVar2 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = FUN_144ba3e70(param_1);
    uVar2 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
  }
  FUN_144ed7280(param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0x118));
  FUN_144ba3e80(param_1,local_38[0]);
  return 1;
}



// FUNCTION 144ea1bd0 FUN_144ea1bd0 body=234 status=ok
// SIG undefined FUN_144ea1bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea1bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ea1bf4;
  local_28[0] = FUN_144ba3e70();
  lVar2 = FUN_144ba3e90(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x120);
  uVar3 = FUN_144ba3e60(param_1);
  uVar4 = FUN_144ba3e50(param_1);
  if (lVar1 == 0) {
    FUN_144ed69a0(param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0x118))
    ;
  }
  else {
    FUN_144ed6ba0(param_3);
  }
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ea1cc0 FUN_144ea1cc0 body=8 status=ok
// SIG undefined FUN_144ea1cc0(void)

undefined * FUN_144ea1cc0(void)

{
  return &DAT_149bd2230;
}



// FUNCTION 144ea1cd0 FUN_144ea1cd0 body=8 status=ok
// SIG undefined FUN_144ea1cd0(void)

undefined * FUN_144ea1cd0(void)

{
  return &DAT_149bd21d0;
}



// FUNCTION 144ea1ce0 FUN_144ea1ce0 body=8 status=ok
// SIG undefined FUN_144ea1ce0(void)

undefined * FUN_144ea1ce0(void)

{
  return &DAT_149bd2350;
}



// FUNCTION 144ea1cf0 FUN_144ea1cf0 body=8 status=ok
// SIG undefined FUN_144ea1cf0(void)

undefined * FUN_144ea1cf0(void)

{
  return &DAT_149bd23b0;
}



// FUNCTION 144ea1d00 FUN_144ea1d00 body=8 status=ok
// SIG undefined FUN_144ea1d00(void)

undefined * FUN_144ea1d00(void)

{
  return &DAT_149bd22f0;
}



// FUNCTION 144ea1d10 FUN_144ea1d10 body=8 status=ok
// SIG undefined FUN_144ea1d10(void)

undefined * FUN_144ea1d10(void)

{
  return &DAT_149bd2290;
}



// FUNCTION 144ea1d20 FUN_144ea1d20 body=8 status=ok
// SIG undefined FUN_144ea1d20(void)

undefined * FUN_144ea1d20(void)

{
  return &DAT_149bd2410;
}



// FUNCTION 144ea1d30 FUN_144ea1d30 body=8 status=ok
// SIG undefined FUN_144ea1d30(void)

undefined * FUN_144ea1d30(void)

{
  return &DAT_149bd24d0;
}



// FUNCTION 144ea1d40 FUN_144ea1d40 body=8 status=ok
// SIG undefined FUN_144ea1d40(void)

undefined * FUN_144ea1d40(void)

{
  return &DAT_149bd2470;
}



// FUNCTION 144ea1d50 FUN_144ea1d50 body=8 status=ok
// SIG undefined FUN_144ea1d50(void)

undefined * FUN_144ea1d50(void)

{
  return &DAT_149bd25f0;
}



// FUNCTION 144ea1d60 FUN_144ea1d60 body=8 status=ok
// SIG undefined FUN_144ea1d60(void)

undefined * FUN_144ea1d60(void)

{
  return &DAT_149bd2650;
}



// FUNCTION 144ea1d70 FUN_144ea1d70 body=8 status=ok
// SIG undefined FUN_144ea1d70(void)

undefined * FUN_144ea1d70(void)

{
  return &DAT_149bd2590;
}



// FUNCTION 144ea1d80 FUN_144ea1d80 body=8 status=ok
// SIG undefined FUN_144ea1d80(void)

undefined * FUN_144ea1d80(void)

{
  return &DAT_149bd2530;
}



// FUNCTION 144ea1d90 FUN_144ea1d90 body=8 status=ok
// SIG undefined FUN_144ea1d90(void)

undefined * FUN_144ea1d90(void)

{
  return &DAT_149bd26b0;
}



// FUNCTION 144ea1da0 FUN_144ea1da0 body=8 status=ok
// SIG undefined FUN_144ea1da0(void)

undefined * FUN_144ea1da0(void)

{
  return &DAT_149bd2770;
}



// FUNCTION 144ea1db0 FUN_144ea1db0 body=8 status=ok
// SIG undefined FUN_144ea1db0(void)

undefined * FUN_144ea1db0(void)

{
  return &DAT_149bd2710;
}



// FUNCTION 144ea1dc0 FUN_144ea1dc0 body=8 status=ok
// SIG undefined FUN_144ea1dc0(void)

undefined * FUN_144ea1dc0(void)

{
  return &DAT_149bd2890;
}



// FUNCTION 144ea1dd0 FUN_144ea1dd0 body=8 status=ok
// SIG undefined FUN_144ea1dd0(void)

undefined * FUN_144ea1dd0(void)

{
  return &DAT_149bd28f0;
}



// FUNCTION 144ea1de0 FUN_144ea1de0 body=8 status=ok
// SIG undefined FUN_144ea1de0(void)

undefined * FUN_144ea1de0(void)

{
  return &DAT_149bd2830;
}



// FUNCTION 144ea1df0 FUN_144ea1df0 body=8 status=ok
// SIG undefined FUN_144ea1df0(void)

undefined * FUN_144ea1df0(void)

{
  return &DAT_149bd27d0;
}



// FUNCTION 144ea1e00 FUN_144ea1e00 body=8 status=ok
// SIG undefined FUN_144ea1e00(void)

undefined * FUN_144ea1e00(void)

{
  return &DAT_149bd2950;
}



// FUNCTION 144ea1e10 FUN_144ea1e10 body=239 status=ok
// SIG undefined FUN_144ea1e10(void)

undefined8 FUN_144ea1e10(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x70);
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    lVar9 = 8;
    puVar8 = puVar1;
    do {
      uVar6 = *puVar8;
      puVar4 = puVar8 + (param_2 - (longlong)puVar1) + 3;
      puVar5 = puVar8 + (param_2 - (longlong)puVar1) + 1;
      puVar2 = puVar8 + (param_2 - (longlong)puVar1);
      uVar3 = (longlong)puVar8 - (longlong)puVar1;
      puVar8 = puVar8 + 4;
      *(uint *)(lVar7 + (uVar3 & 0xfffffffffffffffc)) =
           CONCAT31(CONCAT21(CONCAT11(*puVar4,uVar6),*puVar5),*puVar2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_3 + 2);
    lVar9 = 4;
    puVar8 = puVar1;
    do {
      uVar6 = *puVar8;
      puVar4 = puVar8 + (param_3 - (longlong)puVar1) + 3;
      puVar5 = puVar8 + (param_3 - (longlong)puVar1) + 1;
      puVar2 = puVar8 + (param_3 - (longlong)puVar1);
      uVar3 = (longlong)puVar8 - (longlong)puVar1;
      puVar8 = puVar8 + 4;
      *(uint *)(lVar7 + 0x20 + (uVar3 & 0xfffffffffffffffc)) =
           CONCAT31(CONCAT21(CONCAT11(*puVar4,uVar6),*puVar5),*puVar2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(lVar7 + 0x70) = 0;
  return 1;
}



// FUNCTION 144ea1f00 FUN_144ea1f00 body=437 status=ok
// SIG undefined FUN_144ea1f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea1f00(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x70);
  uVar9 = *(uint *)(lVar5 + 0x70);
  puVar1 = (uint *)(lVar5 + 0x70);
  if (uVar9 != 0) {
    for (; (param_4 != 0 && (uVar9 < 0x40)); uVar9 = uVar9 + 1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      *param_2 = *(byte *)((ulonglong)uVar9 + 0x30 + lVar5) ^ bVar4;
      param_2 = param_2 + 1;
      param_4 = param_4 - 1;
    }
    *puVar1 = uVar9;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar9 == 0x40) {
      *puVar1 = 0;
      piVar2 = (int *)(lVar5 + 0x20);
      *piVar2 = *piVar2 + 1;
      if (*piVar2 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
    }
  }
  uVar10 = (uint)param_4 & 0x3f;
  uVar9 = *(uint *)(lVar5 + 0x20);
  uVar6 = param_4 - uVar10;
  if (0x3f < uVar6) {
    do {
      uVar7 = uVar6 >> 6;
      if (0x10000000 < uVar7) {
        uVar7 = 0x10000000;
      }
      uVar9 = uVar9 + (int)uVar7;
      if (uVar9 < uVar7) {
        uVar7 = uVar7 - uVar9;
        uVar9 = 0;
      }
      lVar8 = uVar7 * 0x40;
      FUN_142659e00(param_2,param_3,lVar8,lVar5,(uint *)(lVar5 + 0x20));
      uVar6 = uVar6 + uVar7 * -0x40;
      *(uint *)(lVar5 + 0x20) = uVar9;
      param_3 = param_3 + lVar8;
      param_2 = param_2 + lVar8;
      if (uVar9 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
    } while (0x3f < uVar6);
  }
  uVar6 = (ulonglong)uVar10;
  if ((param_4 & 0x3f) != 0) {
    puVar3 = (undefined8 *)(lVar5 + 0x30);
    *puVar3 = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    FUN_142659e00(puVar3,puVar3,0x40,lVar5,lVar5 + 0x20);
    if ((param_4 & 0x3f) != 0) {
      lVar5 = lVar5 - (longlong)param_3;
      lVar8 = (longlong)param_2 - (longlong)param_3;
      do {
        param_3[lVar8] = param_3[lVar5 + 0x30] ^ *param_3;
        param_3 = param_3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *puVar1 = uVar10;
  }
  return 1;
}



// FUNCTION 144ea20c0 FUN_144ea20c0 body=338 status=ok
// SIG undefined FUN_144ea20c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea20c0(longlong param_1,longlong param_2,void *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_47;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x70);
  if ((param_2 != 0) || (param_3 != (void *)0x0)) {
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    *(undefined8 *)(lVar7 + 200) = 0xffffffffffffffff;
    if (param_3 == (void *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x70);
      if (param_2 != 0) {
        puVar8 = (undefined1 *)(param_2 + 2);
        lVar10 = 8;
        puVar9 = puVar8;
        do {
          uVar5 = *puVar9;
          puVar3 = puVar9 + (param_2 - (longlong)puVar8) + 3;
          puVar4 = puVar9 + (param_2 - (longlong)puVar8) + 1;
          puVar1 = puVar9 + (param_2 - (longlong)puVar8);
          uVar2 = (longlong)puVar9 - (longlong)puVar8;
          puVar9 = puVar9 + 4;
          *(uint *)(lVar7 + (uVar2 & 0xfffffffffffffffc)) =
               CONCAT31(CONCAT21(CONCAT11(*puVar3,uVar5),*puVar4),*puVar1);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *(undefined4 *)(lVar7 + 0x70) = 0;
    }
    else {
      local_48 = 0;
      local_47 = 0;
      local_3f = 0;
      local_3b = 0;
      local_39 = 0;
      iVar6 = *(int *)(lVar7 + 0xc4);
      if (iVar6 < 0x11) {
        memcpy((void *)((longlong)local_38 - (longlong)iVar6),param_3,(longlong)iVar6);
      }
      FUN_144ea1e10(param_1,param_2,&local_48,param_4);
      *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x7c) = *(undefined4 *)(lVar7 + 0x28);
      *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar7 + 0x2c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[0] ^ (ulonglong)auStack_68);
}



// FUNCTION 144ea2220 FUN_144ea2220 body=778 status=ok
// SIG undefined FUN_144ea2220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea2220(longlong param_1,undefined8 *param_2,longlong param_3,size_t param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  size_t _Size;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x70);
  sVar3 = *(size_t *)(lVar2 + 200);
  if (*(int *)(lVar2 + 0xbc) == 0) {
    if ((sVar3 != 0xffffffffffffffff) && (param_2 != (undefined8 *)0x0)) {
      FUN_144ea2960();
      goto LAB_144ea251d;
    }
    puVar1 = (undefined4 *)(lVar2 + 0x20);
    *puVar1 = 0;
    local_78 = puVar1;
    FUN_142659e00(lVar2 + 0x30,&DAT_149bd2a20,0x40,lVar2);
    FUN_1452682c0(lVar2 + 0xd0,lVar2 + 0x30);
    *puVar1 = 1;
    *(undefined4 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xbc) = 1;
    if (sVar3 != 0xffffffffffffffff) {
      FUN_1452683c0(lVar2 + 0xd0,lVar2 + 0x94,0xd);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
    }
  }
  _Size = sVar3;
  if (param_3 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      FUN_1452683c0(lVar2 + 0xd0,param_3,param_4);
      *(longlong *)(lVar2 + 0xa8) = *(longlong *)(lVar2 + 0xa8) + param_4;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
      goto LAB_144ea251d;
    }
    if (*(int *)(lVar2 + 0xb8) != 0) {
      uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
      if (uVar5 != 0) {
        FUN_1452683c0(lVar2 + 0xd0,&DAT_149bd2a20,0x10 - (ulonglong)uVar5);
      }
      *(undefined4 *)(lVar2 + 0xb8) = 0;
    }
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    _Size = param_4;
    if ((sVar3 != 0xffffffffffffffff) && (_Size = sVar3, param_4 != sVar3 + 0x10))
    goto LAB_144ea251d;
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_1452683c0(lVar2 + 0xd0,param_3,_Size);
      FUN_144ea1f00(param_1,param_2,param_3,_Size);
    }
    else {
      FUN_144ea1f00(param_1,param_2,param_3,_Size);
      FUN_1452683c0(lVar2 + 0xd0,param_2,_Size);
    }
    *(longlong *)(lVar2 + 0xb0) = *(longlong *)(lVar2 + 0xb0) + _Size;
    param_3 = param_3 + _Size;
    param_2 = (undefined8 *)((longlong)param_2 + _Size);
    if ((param_3 != 0) && (_Size == param_4)) goto LAB_144ea251d;
  }
  if (*(int *)(lVar2 + 0xb8) != 0) {
    uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
    if (uVar5 != 0) {
      FUN_1452683c0(lVar2 + 0xd0,&DAT_149bd2a20,0x10 - (ulonglong)uVar5);
    }
    *(undefined4 *)(lVar2 + 0xb8) = 0;
  }
  uVar5 = *(uint *)(lVar2 + 0xb0) & 0xf;
  if (uVar5 != 0) {
    FUN_1452683c0(lVar2 + 0xd0,&DAT_149bd2a20,0x10 - (ulonglong)uVar5);
  }
  FUN_1452683c0(lVar2 + 0xd0,lVar2 + 0xa8,0x10);
  puVar7 = (undefined1 *)(lVar2 + 0x84);
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar7 = local_68;
  }
  FUN_1452684b0(lVar2 + 0xd0,puVar7);
  *(undefined4 *)(lVar2 + 0xbc) = 0;
  if ((param_3 == 0) || (param_4 == _Size)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_14259f120(local_68,lVar2 + 0x84,(longlong)*(int *)(lVar2 + 0xc0));
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    iVar6 = FUN_14259f120(local_68,param_3,0x10);
    if (iVar6 != 0) {
      memset((void *)((longlong)param_2 - _Size),0,_Size);
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x8c);
    *param_2 = *(undefined8 *)(lVar2 + 0x84);
    param_2[1] = uVar4;
  }
LAB_144ea251d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ea2540 FUN_144ea2540 body=57 status=ok
// SIG undefined FUN_144ea2540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2540(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = FUN_1452682b0();
    FUN_14259f0c0(*(undefined8 *)(param_1 + 0x70),lVar1 + 0xd0);
  }
  return 1;
}



// FUNCTION 144ea2580 FUN_144ea2580 body=865 status=ok
// SIG undefined FUN_144ea2580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ea2580(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ea259a;
  lVar3 = *(longlong *)(param_1 + 0x70);
  switch(param_2) {
  case 0:
    if (lVar3 == 0) {
      lVar3 = FUN_1452682b0();
      lVar3 = FUN_144ea6670(lVar3 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x1fd);
      *(longlong *)(param_1 + 0x70) = lVar3;
      if (lVar3 == 0) {
        FUN_144ba24f0(6,0xb6,0x86,"crypto\\evp\\e_chacha20_poly1305.c",0x1ff,uVar5);
        return 0;
      }
    }
    *(undefined4 *)(lVar3 + 0xc4) = 0xc;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    *(undefined4 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x94) = 0;
    *(undefined8 *)(lVar3 + 0x9c) = 0;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = FUN_1452682b0();
    lVar3 = FUN_144ea6d10(lVar3,lVar2 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x211);
    param_4[0xe] = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
    FUN_144ba24f0(6,0xb6,0xad,"crypto\\evp\\e_chacha20_poly1305.c",0x213);
    return 0;
  case 9:
    if (param_3 - 1U < 0xc) {
      *(int *)(lVar3 + 0xc4) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 0x10) != 0)) {
      memcpy(param_4,(void *)(lVar3 + 0x84),(longlong)param_3);
      return 1;
    }
    break;
  case 0x11:
    if (param_3 - 1U < 0x10) {
      if (param_4 != (undefined8 *)0x0) {
        memcpy((void *)(lVar3 + 0x84),param_4,(longlong)param_3);
        *(int *)(lVar3 + 0xc0) = param_3;
      }
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 0xc) {
      uVar1 = *(undefined4 *)param_4;
      *(undefined4 *)(lVar3 + 0x24) = uVar1;
      *(undefined4 *)(lVar3 + 0x78) = uVar1;
      uVar1 = *(undefined4 *)((longlong)param_4 + 4);
      *(undefined4 *)(lVar3 + 0x28) = uVar1;
      *(undefined4 *)(lVar3 + 0x7c) = uVar1;
      uVar1 = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(lVar3 + 0x2c) = uVar1;
      *(undefined4 *)(lVar3 + 0x80) = uVar1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      *(undefined8 *)(lVar3 + 0x94) = *param_4;
      *(undefined4 *)(lVar3 + 0x9c) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)(lVar3 + 0xa0) = *(undefined1 *)((longlong)param_4 + 0xc);
      uVar4 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      if (*(int *)(param_1 + 0x10) == 0) {
        if (uVar4 < 0x10) {
          return 0;
        }
        uVar4 = uVar4 - 0x10;
        *(char *)(lVar3 + 0xa0) = (char)uVar4;
        *(char *)(lVar3 + 0x9f) = (char)(uVar4 >> 8);
      }
      *(ulonglong *)(lVar3 + 200) = (ulonglong)uVar4;
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar3 + 0x78);
      *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x94) ^ *(uint *)(lVar3 + 0x7c);
      *(uint *)(lVar3 + 0x2c) = *(uint *)(lVar3 + 0x98) ^ *(uint *)(lVar3 + 0x80);
      *(undefined4 *)(lVar3 + 0xbc) = 0;
      return 0x10;
    }
    break;
  case 0x17:
    return 1;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar3 + 0xc4);
    return 1;
  }
  return 0;
}



// FUNCTION 144ea2940 FUN_144ea2940 body=8 status=ok
// SIG undefined FUN_144ea2940(void)

undefined * FUN_144ea2940(void)

{
  return &DAT_149bd29c0;
}



// FUNCTION 144ea2950 FUN_144ea2950 body=8 status=ok
// SIG undefined FUN_144ea2950(void)

undefined * FUN_144ea2950(void)

{
  return &DAT_14c70afa0;
}



// FUNCTION 144ea2960 FUN_144ea2960 body=755 status=ok
// SIG undefined FUN_144ea2960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea2960(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_178 [48];
  undefined4 auStack_148 [60];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar2 = *(ulonglong *)(lVar1 + 200);
  local_190 = param_1;
  if (param_4 == uVar2 + 0x10) {
    uVar8 = (ulonglong)(-((int)&stack0x00000028 + -0x1a0) & 0xf);
    lVar10 = 0;
    local_198 = local_178 + uVar8;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    local_1a8 = lVar1 + 0x20;
    puVar9 = (undefined4 *)((longlong)auStack_148 + uVar8 + 0x10);
    puVar11 = (undefined4 *)((longlong)auStack_148 + uVar8);
    if (uVar2 < 0xc1) {
      local_188 = uVar2 + 0x7f & 0xffffffffffffffc0;
      FUN_142659e00(local_198,&DAT_149bd2a20,local_188,lVar1);
      FUN_1452682c0(lVar1 + 0xd0,local_198);
      *(undefined4 *)(lVar1 + 0x70) = 0;
      lVar10 = 0x10;
      uVar3 = *(undefined4 *)(lVar1 + 0x98);
      uVar4 = *(undefined4 *)(lVar1 + 0x9c);
      uVar5 = *(undefined4 *)(lVar1 + 0xa0);
      *puVar11 = *(undefined4 *)(lVar1 + 0x94);
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 4) = uVar3;
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 8) = uVar4;
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 0xc) = uVar5;
      *(undefined8 *)(lVar1 + 0xa8) = 0xd;
      *(ulonglong *)(lVar1 + 0xb0) = uVar2;
      if (uVar2 != 0) {
        if (*(int *)(local_190 + 0x10) == 0) {
          puVar9 = (undefined4 *)FUN_142661970(param_2,param_3,puVar9,uVar2);
          param_3 = param_3 + uVar2;
          param_2 = (undefined8 *)((longlong)param_2 + uVar2);
          lVar10 = (longlong)puVar9 - (longlong)puVar11;
        }
        else {
          puVar9 = (undefined4 *)FUN_142661900();
          param_3 = param_3 + uVar2;
          param_2 = (undefined8 *)((longlong)param_2 + uVar2);
          lVar10 = (longlong)puVar9 - (longlong)puVar11;
        }
      }
    }
    else {
      local_188 = 0x40;
      FUN_142659e00(local_198,&DAT_149bd2a20,0x40,lVar1);
      FUN_1452682c0(lVar1 + 0xd0,local_198);
      *(undefined4 *)(lVar1 + 0x20) = 1;
      *(undefined4 *)(lVar1 + 0x70) = 0;
      FUN_1452683c0(lVar1 + 0xd0,lVar1 + 0x94,0x10);
      *(undefined8 *)(lVar1 + 0xa8) = 0xd;
      *(ulonglong *)(lVar1 + 0xb0) = uVar2;
      if (*(int *)(local_190 + 0x10) == 0) {
        FUN_1452683c0(lVar1 + 0xd0,param_3,uVar2);
        local_1a8 = lVar1 + 0x20;
        FUN_142659e00(param_2,param_3,uVar2,lVar1);
      }
      else {
        local_1a8 = lVar1 + 0x20;
        FUN_142659e00(param_2,param_3,uVar2,lVar1);
        FUN_1452683c0(lVar1 + 0xd0,param_2,uVar2);
      }
      param_3 = param_3 + uVar2;
      param_2 = (undefined8 *)((longlong)param_2 + uVar2);
      FUN_1452683c0(lVar1 + 0xd0,&DAT_149bd2a20,-(int)uVar2 & 0xf);
      puVar11 = puVar9;
    }
    uVar3 = *(undefined4 *)(lVar1 + 0xac);
    uVar4 = *(undefined4 *)(lVar1 + 0xb0);
    uVar5 = *(undefined4 *)(lVar1 + 0xb4);
    *puVar9 = *(undefined4 *)(lVar1 + 0xa8);
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    FUN_1452683c0(lVar1 + 0xd0,puVar11,lVar10 + 0x10);
    FUN_14259f0c0(local_198,local_188);
    lVar10 = local_190;
    puVar9 = (undefined4 *)(lVar1 + 0x84);
    if (*(int *)(local_190 + 0x10) == 0) {
      puVar9 = puVar11;
    }
    FUN_1452684b0(lVar1 + 0xd0,puVar9);
    *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
    if (*(int *)(lVar10 + 0x10) == 0) {
      iVar7 = FUN_14259f120(puVar11,param_3,0x10);
      if (iVar7 != 0) {
        memset((void *)((longlong)param_2 + (0x10 - param_4)),0,param_4 - 0x10);
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x8c);
      *param_2 = *(undefined8 *)(lVar1 + 0x84);
      param_2[1] = uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 144ea2c70 FUN_144ea2c70 body=45 status=ok
// SIG undefined FUN_144ea2c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3e90();
  FUN_145268560(param_2,uVar1);
  return 1;
}



// FUNCTION 144ea2ca0 FUN_144ea2ca0 body=254 status=ok
// SIG undefined FUN_144ea2ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2ca0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ea2cbf;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_14526ae30(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar6 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_14526ae30(param_3,param_2,(longlong)(int)param_4,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 144ea2da0 FUN_144ea2da0 body=235 status=ok
// SIG undefined FUN_144ea2da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2da0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_14526ae70(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 144ea2e90 FUN_144ea2e90 body=163 status=ok
// SIG undefined FUN_144ea2e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2e90(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_14526ae00(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 144ea2f40 FUN_144ea2f40 body=279 status=ok
// SIG undefined FUN_144ea2f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea2f40(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_14526aec0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_14526aec0(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 144ea3060 FUN_144ea3060 body=8 status=ok
// SIG undefined FUN_144ea3060(void)

undefined * FUN_144ea3060(void)

{
  return &DAT_149bd2c70;
}



// FUNCTION 144ea3070 FUN_144ea3070 body=8 status=ok
// SIG undefined FUN_144ea3070(void)

undefined * FUN_144ea3070(void)

{
  return &DAT_149bd2b50;
}



// FUNCTION 144ea3080 FUN_144ea3080 body=8 status=ok
// SIG undefined FUN_144ea3080(void)

undefined * FUN_144ea3080(void)

{
  return &DAT_149bd2bb0;
}



// FUNCTION 144ea3090 FUN_144ea3090 body=8 status=ok
// SIG undefined FUN_144ea3090(void)

undefined * FUN_144ea3090(void)

{
  return &DAT_149bd2c10;
}



// FUNCTION 144ea30a0 FUN_144ea30a0 body=62 status=ok
// SIG undefined FUN_144ea30a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea30a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x141b6000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149bd2cd0);
    FUN_144ba2da0(&DAT_149bd4790);
  }
  return 1;
}



// FUNCTION 144ea30e0 FUN_144ea30e0 body=18 status=ok
// SIG undefined FUN_144ea30e0(void)

char * FUN_144ea30e0(longlong param_1)

{
  if (param_1 != 0) {
    return *(char **)(param_1 + 8);
  }
  return "(NONE)";
}



// FUNCTION 144ea3100 FUN_144ea3100 body=4 status=ok
// SIG undefined FUN_144ea3100(void)

undefined4 FUN_144ea3100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 144ea3110 FUN_144ea3110 body=70 status=ok
// SIG undefined FUN_144ea3110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea3110(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ea5860(param_1 + 0x18);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_144ea5960(param_1 + 8,param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 144ea3160 FUN_144ea3160 body=151 status=ok
// SIG undefined FUN_144ea3160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea3160(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = FUN_144ea5860(param_1 + 0x128);
  uVar4 = (ulonglong)uVar1;
  if ((*(longlong *)(param_1 + 0x118) == 0) && (lVar2 = FUN_144b9a240(param_1), lVar2 != 0)) {
    uVar3 = FUN_144bac2a0(lVar2);
    *(undefined8 *)(param_1 + 0x118) = uVar3;
  }
  if ((uVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar4 = FUN_144ea5960(param_1 + 0x118,param_1 + 0x120,*(undefined8 *)(param_1 + 0x128));
  }
  return uVar4;
}



// FUNCTION 144ea3200 FUN_144ea3200 body=44 status=ok
// SIG undefined FUN_144ea3200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ea3200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144e986c0(&DAT_14c796778,FUN_144ea4680,param_3,param_4,0x144ea320a);
  return DAT_14c796770;
}



// FUNCTION 144ea3230 FUN_144ea3230 body=31 status=ok
// SIG undefined FUN_144ea3230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea3230(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144ea3248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  return;
}



// FUNCTION 144ea3250 FUN_144ea3250 body=65 status=ok
// SIG undefined FUN_144ea3250(void)

undefined4 FUN_144ea3250(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = &DAT_149bda630;
    uVar1 = 0;
    while (*piVar2 != *(int *)(param_1 + 0x24)) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
      if (0x15 < uVar1) {
        return 0;
      }
    }
    if ((int)uVar1 != -1) {
      return (&DAT_149bda634)[(longlong)(int)uVar1 * 2];
    }
  }
  return 0;
}



// FUNCTION 144ea32a0 FUN_144ea32a0 body=2855 status=ok
// SIG undefined FUN_144ea32a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea32a0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      char *param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  char *pcVar14;
  longlong *plVar15;
  uint uVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar23;
  undefined8 uVar22;
  longlong *local_48;
  longlong *local_40;
  
  uVar12 = param_6;
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar16 = 0;
  local_48 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  if (((param_5 == (char *)0x0) || (param_3 == (longlong *)0x0)) || (param_4 == 0)) {
    return 0;
  }
  iVar7 = FUN_144ea55d0(param_1,param_6,&param_5);
  uVar6 = DAT_14c7968fc;
  uVar5 = DAT_14c7968f8;
  uVar4 = DAT_14c7968f4;
  uVar3 = DAT_14c7968f0;
  if (iVar7 == 0) {
    return 0;
  }
  iVar7 = (**(code **)(param_1 + 0xa8))();
  lVar10 = FUN_144ea64e0((longlong)iVar7 << 5,"ssl\\ssl_ciph.c",0x5a2);
  if (lVar10 == 0) {
    uVar12 = CONCAT44(uVar23,0x5a4);
LAB_144ea3b81:
    FUN_144ba24f0(0x14,0xa6,0x41,"ssl\\ssl_ciph.c",uVar12);
    return 0;
  }
  uVar22 = CONCAT44(uVar23,uVar3);
  FUN_144ea46a0(param_1,iVar7,uVar5,uVar6,uVar22,uVar4,lVar10,&local_48,&local_40);
  uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
  iVar9 = 1;
  plVar15 = local_48;
  plVar18 = local_40;
  if (local_40 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar15[2];
      if ((((*(byte *)(*plVar15 + 0x1c) & 4) != 0) && ((*(byte *)(*plVar15 + 0x20) & 8) != 0)) &&
         ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar18) {
          if (plVar15 == local_48) {
            local_48 = plVar20;
          }
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar20;
          }
          lVar11 = plVar15[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar15[3];
          }
          plVar18[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar18;
          plVar15[2] = 0;
          plVar18 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar21 = plVar15 != local_40;
      plVar15 = plVar20;
    } while (bVar21);
  }
  plVar15 = local_48;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[2];
      if (((*(byte *)(*plVar15 + 0x1c) & 4) != 0) && ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar20) {
          if (plVar15 == local_48) {
            local_48 = plVar19;
          }
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar19;
          }
          lVar11 = plVar15[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar15[3];
          }
          plVar20[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar20;
          plVar15[2] = 0;
          plVar20 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_48;
  plVar18 = plVar20;
  if (local_48 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[3];
      if (((*(byte *)(*plVar18 + 0x1c) & 4) != 0) && ((int)plVar18[1] != 0)) {
        if (plVar18 != plVar15) {
          if (plVar18 == plVar20) {
            plVar20 = plVar19;
          }
          if (plVar18[2] != 0) {
            *(longlong **)(plVar18[2] + 0x18) = plVar19;
          }
          lVar11 = plVar18[3];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x10) = plVar18[2];
          }
          plVar15[3] = (longlong)plVar18;
          plVar18[2] = (longlong)plVar15;
          plVar18[3] = 0;
          plVar15 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 0;
      }
      bVar21 = plVar18 != local_48;
      plVar18 = plVar19;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x3000) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar19) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar19[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar19;
          plVar18[2] = 0;
          plVar19 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x80000) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar20) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar20[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar20;
          plVar18[2] = 0;
          plVar20 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if (((*(uint *)(*plVar18 + 0x24) & 0x3c0c0) != 0) && ((int)plVar18[1] == 0)) {
        if (plVar18 != plVar19) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar19[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar19;
          plVar18[2] = 0;
          plVar19 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((int)plVar18[1] == 0) {
        if (plVar18 != plVar20) {
          if (plVar18 == plVar15) {
            plVar15 = plVar2;
          }
          if (plVar18[3] != 0) {
            *(longlong **)(plVar18[3] + 0x10) = plVar2;
          }
          lVar11 = plVar18[2];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x18) = plVar18[3];
          }
          plVar20[2] = (longlong)plVar18;
          plVar18[3] = (longlong)plVar20;
          plVar18[2] = 0;
          plVar20 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 1;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x28) & 1) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar19)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar19[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar19;
        plVar18[2] = 0;
        plVar19 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x20) & 4) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar20)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar20[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar20;
        plVar18[2] = 0;
        plVar20 = plVar18;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar19 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x1c) & 1) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar19)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar19[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar19;
        plVar18[2] = 0;
        plVar19 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar2;
    } while (bVar21);
  }
  plVar18 = plVar15;
  plVar20 = plVar19;
  if (plVar19 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x1c) & 8) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != plVar20)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar2;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar2;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        plVar20[2] = (longlong)plVar18;
        plVar18[3] = (longlong)plVar20;
        plVar18[2] = 0;
        plVar20 = plVar18;
      }
      bVar21 = plVar18 != plVar19;
      plVar18 = plVar2;
    } while (bVar21);
  }
  local_40 = plVar20;
  plVar18 = plVar15;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[2];
      if ((((*(byte *)(*plVar18 + 0x24) & 4) != 0) && ((int)plVar18[1] != 0)) &&
         (plVar18 != local_40)) {
        if (plVar18 == plVar15) {
          plVar15 = plVar19;
        }
        if (plVar18[3] != 0) {
          *(longlong **)(plVar18[3] + 0x10) = plVar19;
        }
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x18) = plVar18[3];
        }
        local_40[2] = (longlong)plVar18;
        plVar18[3] = (longlong)local_40;
        plVar18[2] = 0;
        local_40 = plVar18;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar19;
    } while (bVar21);
  }
  local_48 = plVar15;
  iVar8 = FUN_144ea4df0(&local_48,&local_40);
  if (iVar8 == 0) {
    FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",0x5e7);
    return 0;
  }
  plVar15 = local_40;
  plVar18 = local_48;
  if (local_48 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar15[3];
      if (((*(int *)(*plVar15 + 0x2c) == 0x303) && ((int)plVar15[1] != 0)) && (plVar15 != plVar18))
      {
        if (plVar15 == local_40) {
          local_40 = plVar20;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar20;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar18[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar18;
        plVar15[3] = 0;
        plVar18 = plVar15;
      }
      bVar21 = plVar15 != local_48;
      plVar15 = plVar20;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x28) & 0x40) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar20)) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar20[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar20;
        plVar15[3] = 0;
        plVar20 = plVar15;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar18 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x1c) & 6) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar18)) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar18[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar18;
        plVar15[3] = 0;
        plVar18 = plVar15;
      }
      bVar21 = plVar15 != plVar20;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = local_40;
  plVar20 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar15 + 0x28) & 0x40) != 0)) &&
         (((int)plVar15[1] != 0 && (plVar15 != plVar20)))) {
        if (plVar15 == local_40) {
          local_40 = plVar19;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar19;
        }
        lVar11 = plVar15[3];
        if (lVar11 != 0) {
          *(longlong *)(lVar11 + 0x10) = plVar15[2];
        }
        plVar20[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar20;
        plVar15[3] = 0;
        plVar20 = plVar15;
      }
      bVar21 = plVar15 != plVar18;
      plVar15 = plVar19;
    } while (bVar21);
  }
  plVar15 = plVar20;
  plVar18 = local_40;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar18 == (longlong *)0x0) break;
      plVar19 = (longlong *)plVar18[3];
      if ((int)plVar18[1] != 0) {
        if (plVar18 != plVar15) {
          if (plVar18 == local_40) {
            local_40 = plVar19;
          }
          if (plVar18[2] != 0) {
            *(longlong **)(plVar18[2] + 0x18) = plVar19;
          }
          lVar11 = plVar18[3];
          if (lVar11 != 0) {
            *(longlong *)(lVar11 + 0x10) = plVar18[2];
          }
          plVar15[3] = (longlong)plVar18;
          plVar18[2] = (longlong)plVar15;
          plVar18[3] = 0;
          plVar15 = plVar18;
        }
        *(undefined4 *)(plVar18 + 1) = 0;
      }
      bVar21 = plVar18 != plVar20;
      plVar18 = plVar19;
    } while (bVar21);
  }
  local_48 = plVar15;
  lVar11 = FUN_144ea64e0((longlong)(iVar7 + 0x4d) << 3,"ssl\\ssl_ciph.c",0x613);
  if (lVar11 == 0) {
    FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",0x615);
    uVar12 = CONCAT44(uVar23,0x616);
    goto LAB_144ea3b81;
  }
  FUN_144ea49a0(lVar11,0x4c,uVar5,uVar6,CONCAT44(uVar23,uVar3),uVar4,plVar15);
  pcVar17 = param_5;
  iVar7 = strncmp(param_5,"DEFAULT",7);
  pcVar14 = pcVar17;
  if (iVar7 == 0) {
    iVar9 = FUN_144ea4f90("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_48,&local_40,lVar11,uVar12);
    pcVar14 = pcVar17 + 7;
    if (*pcVar14 == ':') {
      pcVar14 = pcVar17 + 8;
    }
    if (iVar9 == 0) goto LAB_144ea3c66;
  }
  cVar1 = *pcVar14;
  pcVar17 = pcVar14;
  for (uVar13 = uVar16; (cVar1 != '\0' && (uVar13 < 0x80000000)); uVar13 = uVar13 + 1) {
    pcVar17 = pcVar17 + 1;
    cVar1 = *pcVar17;
  }
  if ((uVar13 & 0x7fffffff) != 0) {
    iVar9 = FUN_144ea4f90(pcVar14,&local_48,&local_40,lVar11,uVar12);
  }
LAB_144ea3c66:
  FUN_144ea6530(lVar11,"ssl\\ssl_ciph.c",0x62e);
  if (iVar9 == 0) {
    FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",0x631);
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_144babca0();
    if (lVar11 == 0) {
      FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",0x63a);
      lVar11 = 0;
    }
    else {
      iVar7 = FUN_144babbf0(param_2);
      if (0 < iVar7) {
        do {
          uVar12 = FUN_144babc00(param_2,uVar16);
          iVar7 = FUN_144bac1c0(lVar11,uVar12);
          if (iVar7 == 0) {
            uVar12 = 0x642;
            goto LAB_144ea3d9e;
          }
          uVar16 = uVar16 + 1;
          iVar7 = FUN_144babbf0(param_2);
        } while ((int)uVar16 < iVar7);
      }
      plVar15 = local_48;
      if (local_48 != (longlong *)0x0) {
LAB_144ea3d05:
        if (((int)plVar15[1] == 0) || (iVar7 = FUN_144bac1c0(lVar11,*plVar15), iVar7 != 0))
        goto LAB_144ea3d1a;
        uVar12 = 0x64f;
LAB_144ea3d9e:
        FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",uVar12);
        goto LAB_144ea3dad;
      }
LAB_144ea3d23:
      FUN_144ea6530(lVar10,"ssl\\ssl_ciph.c",0x658);
      iVar7 = FUN_144ea58f0(param_4,lVar11);
      if (iVar7 == 0) {
LAB_144ea3dad:
        FUN_144babdb0(lVar11);
        lVar11 = 0;
      }
      else {
        FUN_144babdb0(*param_3);
        *param_3 = lVar11;
      }
    }
  }
  return lVar11;
LAB_144ea3d1a:
  plVar15 = (longlong *)plVar15[2];
  if (plVar15 == (longlong *)0x0) goto LAB_144ea3d23;
  goto LAB_144ea3d05;
}



// FUNCTION 144ea3dd0 FUN_144ea3dd0 body=705 status=ok
// SIG undefined FUN_144ea3dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ea3dd0(uint *param_1,longlong *param_2,longlong *param_3,int *param_4,undefined8 *param_5,
             undefined8 *param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ea3de8;
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    return 0;
  }
  piVar9 = (int *)0x0;
  if (param_6 == (undefined8 *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    FUN_144e986c0(&DAT_14c796778,FUN_144ea4680);
    lVar7 = DAT_14c796770;
    *param_6 = 0;
    local_38[0] = param_1[0x76];
    if (lVar7 != 0) {
      uVar2 = FUN_144bac1a0(lVar7,local_38);
      uVar5 = FUN_144babc00(DAT_14c796770,uVar2);
      *param_6 = uVar5;
    }
    if (param_2 == (longlong *)0x0) {
      if (param_3 != (longlong *)0x0) {
        return 0;
      }
      return 1;
    }
  }
  if (param_3 != (longlong *)0x0) {
    piVar8 = &DAT_149bda630;
    piVar6 = piVar9;
    do {
      if (*piVar8 == *(int *)(lVar1 + 0x24)) {
        iVar3 = (int)piVar6;
        if (iVar3 == -1) {
          *param_2 = 0;
        }
        else {
          if (iVar3 == 5) {
            lVar7 = FUN_14526af40();
          }
          else {
            lVar7 = (&DAT_14c7967e0)[iVar3];
          }
          *param_2 = lVar7;
        }
        goto LAB_144ea3ee0;
      }
      piVar6 = (int *)((longlong)piVar6 + 1);
      piVar8 = piVar8 + 2;
    } while (piVar6 < &DAT_00000016);
    *param_2 = 0;
LAB_144ea3ee0:
    piVar8 = &DAT_149bda6e0;
    piVar6 = piVar9;
    do {
      if (*piVar8 == *(int *)(lVar1 + 0x28)) {
        if ((int)piVar6 != -1) {
          lVar7 = (longlong)(int)piVar6;
          *param_3 = (&DAT_14c796780)[lVar7];
          if (param_4 != (int *)0x0) {
            *param_4 = *(int *)(&DAT_14c70b000 + lVar7 * 4);
          }
          piVar9 = param_4;
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = (&DAT_14c796890)[lVar7];
          }
          goto LAB_144ea3f71;
        }
        break;
      }
      piVar6 = (int *)((longlong)piVar6 + 1);
      piVar8 = piVar8 + 2;
    } while (piVar6 < &DAT_0000000c);
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (*(int *)(lVar1 + 0x28) != 0x40) {
      piVar9 = param_4;
    }
LAB_144ea3f71:
    if (((*param_2 != 0) && ((*param_3 != 0 || (uVar4 = FUN_144ba3da0(), (uVar4 >> 0x15 & 1) != 0)))
        ) && ((piVar9 == (int *)0x0 || (*piVar9 != 0)))) {
      if ((((param_7 == 0) && ((*param_1 & 0xffffff00) == 0x300)) && (0x300 < (int)*param_1)) &&
         (((((*(int *)(lVar1 + 0x24) == 4 && (*(int *)(lVar1 + 0x28) == 1)) &&
            (lVar7 = FUN_144baaaf0("RC4-HMAC-MD5"), lVar7 != 0)) ||
           (((((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 2)) &&
              (lVar7 = FUN_144baaaf0("AES-128-CBC-HMAC-SHA1"), lVar7 != 0)) ||
             (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 2)) &&
              (lVar7 = FUN_144baaaf0("AES-256-CBC-HMAC-SHA1"), lVar7 != 0)))) ||
            (((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
             (lVar7 = FUN_144baaaf0("AES-128-CBC-HMAC-SHA256"), lVar7 != 0)))))) ||
          (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
           (lVar7 = FUN_144baaaf0("AES-256-CBC-HMAC-SHA256"), lVar7 != 0)))))) {
        *param_2 = lVar7;
        *param_3 = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ea40a0 FUN_144ea40a0 body=51 status=ok
// SIG undefined FUN_144ea40a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea40a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144b9e170();
  if ((lVar1 != 0) && ((DAT_14c7968fc & *(uint *)(lVar1 + 4)) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ea40e0 FUN_144ea40e0 body=52 status=ok
// SIG undefined FUN_144ea40e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144ea40e0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  if ((piVar1 == (int *)0x0) || ((param_3 == 0 && (*piVar1 == 0)))) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// FUNCTION 144ea4120 FUN_144ea4120 body=824 status=ok
// SIG undefined FUN_144ea4120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144ea4120(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint *puVar8;
  int local_res8 [2];
  undefined8 local_res10;
  
  uVar6 = 0;
  DAT_14c7968f0 = 0;
  FUN_144ec8fc0();
  piVar7 = &DAT_149bda634;
  uVar5 = uVar6;
  do {
    if (*piVar7 == 0) {
      *(undefined8 *)((longlong)&DAT_14c7967e0 + uVar5) = 0;
    }
    else {
      uVar3 = FUN_144ea8ee0();
      lVar4 = FUN_144baaaf0(uVar3);
      *(longlong *)((longlong)&DAT_14c7967e0 + uVar5) = lVar4;
      if (lVar4 == 0) {
        DAT_14c7968f0 = DAT_14c7968f0 | piVar7[-1];
      }
    }
    uVar5 = uVar5 + 8;
    piVar7 = piVar7 + 2;
  } while (uVar5 < 0xb0);
  DAT_14c7968f4 = 0;
  puVar8 = &DAT_149bda6e0;
  do {
    uVar3 = FUN_144ea8ee0(puVar8[1]);
    lVar4 = FUN_144baab30(uVar3);
    *(longlong *)((longlong)&DAT_14c796780 + uVar6) = lVar4;
    if (lVar4 == 0) {
      DAT_14c7968f4 = DAT_14c7968f4 | *puVar8;
    }
    else {
      iVar1 = FUN_144ba3cd0(lVar4);
      if (iVar1 < 0) goto LAB_144ea4443;
      *(longlong *)((longlong)&DAT_14c796890 + uVar6) = (longlong)iVar1;
    }
    uVar6 = uVar6 + 8;
    puVar8 = puVar8 + 2;
  } while (uVar6 < 0x60);
  if ((DAT_14c796780 == 0) || (DAT_14c796788 == 0)) {
LAB_144ea4443:
    uVar3 = 0;
  }
  else {
    DAT_14c7968f8 = 0;
    DAT_14c7968fc = 0;
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = FUN_144ed2b20(&local_res10,"gost-mac",0xffffffff);
    if ((lVar4 != 0) && (iVar1 = FUN_144ed2c80(local_res8,0,0,0,0,lVar4), iVar1 < 1)) {
      local_res8[0] = 0;
    }
    FUN_144ec6930(local_res10);
    _DAT_14c70b00c = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_14c7968f4 = DAT_14c7968f4 | 8;
    }
    else {
      _DAT_14c7968a8 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = FUN_144ed2b20(&local_res10,"gost-mac-12",0xffffffff);
    iVar1 = 0;
    if ((lVar4 != 0) && (iVar2 = FUN_144ed2c80(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    FUN_144ec6930(local_res10);
    _DAT_14c70b01c = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_14c7968f4 = DAT_14c7968f4 | 0x100;
    }
    else {
      _DAT_14c7968c8 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = FUN_144ed2b20(&local_res10,"gost2001",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = FUN_144ed2c80(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    FUN_144ec6930(local_res10);
    if (local_res8[0] == 0) {
      DAT_14c7968fc = DAT_14c7968fc | 0xa0;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = FUN_144ed2b20(&local_res10,"gost2012_256",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = FUN_144ed2c80(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    FUN_144ec6930(local_res10);
    if (local_res8[0] == 0) {
      DAT_14c7968fc = DAT_14c7968fc | 0x80;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = FUN_144ed2b20(&local_res10,"gost2012_512",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = FUN_144ed2c80(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    FUN_144ec6930(local_res10);
    if (local_res8[0] == 0) {
      DAT_14c7968fc = DAT_14c7968fc | 0x80;
    }
    if (((byte)DAT_14c7968fc & 0xa0) == 0xa0) {
      DAT_14c7968f8 = DAT_14c7968f8 | 0x10;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 144ea4460 FUN_144ea4460 body=120 status=ok
// SIG undefined FUN_144ea4460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144ea4460(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = FUN_144babbf0();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_144babc00(param_1,iVar3);
        if (*piVar2 == param_2) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}



// FUNCTION 144ea44e0 FUN_144ea44e0 body=23 status=ok
// SIG undefined FUN_144ea44e0(void)

undefined8 FUN_144ea44e0(byte param_1)

{
  if (param_1 < 0xc) {
    return (&DAT_14c796780)[param_1];
  }
  return 0;
}



// FUNCTION 144ea4500 FUN_144ea4500 body=51 status=ok
// SIG undefined FUN_144ea4500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea4500(void)

{
  uint uVar1;
  
  uVar1 = FUN_144ecba20();
  if ((uVar1 & 0xff) < 0xc) {
    return (&DAT_14c796780)[uVar1 & 0xff];
  }
  return 0;
}



// FUNCTION 144ea4540 FUN_144ea4540 body=54 status=ok
// SIG undefined FUN_144ea4540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea4540(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_144ecba20();
  uVar2 = iVar1 >> 8 & 0xff;
  if (uVar2 < 0xc) {
    return (&DAT_14c796780)[uVar2];
  }
  return 0;
}



// FUNCTION 144ea4580 FUN_144ea4580 body=47 status=ok
// SIG undefined FUN_144ea4580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea4580(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c796770;
  DAT_14c796770 = 0;
  FUN_144babe00(uVar1,FUN_144ea5a80);
  return;
}



// FUNCTION 144ea45c0 FUN_144ea45c0 body=185 status=ok
// SIG undefined FUN_144ea45c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea45c0(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_144ee3f80();
  FUN_14525f240(3);
  DAT_14c796770 = FUN_144babc60(&LAB_144ea45b0);
  iVar2 = FUN_144ea7520(uVar3);
  if (((iVar2 != 0) && (DAT_14c796770 != 0)) &&
     (puVar4 = (undefined4 *)FUN_144ea64e0(0x18,"ssl\\ssl_ciph.c",0x1d3),
     puVar4 != (undefined4 *)0x0)) {
    *(undefined8 *)(puVar4 + 4) = uVar3;
    *puVar4 = 1;
    uVar3 = FUN_144ea7530(uVar3);
    lVar1 = DAT_14c796770;
    *(undefined8 *)(puVar4 + 2) = uVar3;
    FUN_144bac1c0(lVar1,puVar4);
    FUN_144bac390(DAT_14c796770);
  }
  FUN_14525f240(2);
  return 1;
}



// FUNCTION 144ea4680 FUN_144ea4680 body=29 status=ok
// SIG undefined FUN_144ea4680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ea4680(void)

{
  _DAT_14c79677c = FUN_144ea45c0();
  return;
}



// FUNCTION 144ea46a0 FUN_144ea46a0 body=765 status=ok
// SIG undefined FUN_144ea46a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea46a0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong param_7,longlong *param_8,longlong *param_9)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  ulonglong uVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  
  if (0 < param_2) {
    iVar7 = 0;
    iVar8 = 0;
    puVar6 = (undefined8 *)(param_7 + 0x18);
    do {
      piVar2 = (int *)(**(code **)(param_1 + 0xb0))(iVar8);
      if (((((piVar2 != (int *)0x0) && (*piVar2 != 0)) && ((piVar2[7] & param_3) == 0)) &&
          ((((piVar2[8] & param_4) == 0 && ((piVar2[9] & param_5) == 0)) &&
           (((piVar2[10] & param_6) == 0 &&
            ((uVar3 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8, uVar3 != 0 ||
             (piVar2[0xb] != 0)))))))) && ((uVar3 == 0 || (piVar2[0xd] != 0)))) {
        iVar7 = iVar7 + 1;
        puVar6[-3] = piVar2;
        puVar6[-1] = 0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + -2) = 0;
        puVar6 = puVar6 + 4;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    if (0 < iVar7) {
      *(undefined8 *)(param_7 + 0x18) = 0;
      if (1 < iVar7) {
        iVar5 = 1;
        iVar8 = iVar7 + -1;
        *(longlong *)(param_7 + 0x10) = param_7 + 0x20;
        if (((1 < iVar8) && (3 < iVar7 - 2U)) && (1 < DAT_14c707900)) {
          uVar3 = iVar7 - 2U & 0x80000003;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
          }
          plVar9 = (longlong *)(param_7 + 0x50);
          iVar4 = iVar5;
          do {
            iVar1 = iVar4 + 2;
            iVar5 = iVar4 + 4;
            auVar16._0_4_ = iVar4 + -1;
            auVar16._4_4_ = iVar4;
            auVar16._8_4_ = iVar4;
            auVar16._12_4_ = iVar4;
            auVar13._0_4_ = iVar4 + 1;
            auVar13._4_4_ = iVar4 + 2;
            auVar13._8_4_ = iVar4;
            auVar13._12_4_ = iVar4;
            auVar14 = pmovsxdq(in_XMM2,auVar16);
            auVar13 = pmovsxdq(auVar16,auVar13);
            uVar17 = auVar14._8_8_ * 0x20 + param_7;
            plVar9[-3] = auVar14._0_8_ * 0x20 + param_7;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar17;
            plVar9[1] = uVar17;
            plVar9[-4] = auVar13._0_8_ * 0x20 + param_7;
            *plVar9 = auVar13._8_8_ * 0x20 + param_7;
            auVar14._0_4_ = iVar4 + 1;
            auVar14._4_4_ = iVar4 + 2;
            auVar14._8_4_ = iVar1;
            auVar14._12_4_ = iVar1;
            auVar18._0_4_ = iVar4 + 3;
            auVar18._4_4_ = iVar4 + 4;
            auVar18._8_4_ = iVar1;
            auVar18._12_4_ = iVar1;
            auVar16 = pmovsxdq(auVar15,auVar14);
            auVar13 = pmovsxdq(auVar14,auVar18);
            uVar17 = auVar16._8_8_ * 0x20 + param_7;
            plVar9[5] = auVar16._0_8_ * 0x20 + param_7;
            in_XMM2._8_8_ = 0;
            in_XMM2._0_8_ = uVar17;
            plVar9[9] = uVar17;
            plVar9[4] = auVar13._0_8_ * 0x20 + param_7;
            plVar9[8] = auVar13._8_8_ * 0x20 + param_7;
            plVar9 = plVar9 + 0x10;
            iVar4 = iVar5;
          } while (iVar5 < (int)(iVar8 - uVar3));
        }
        lVar12 = (longlong)iVar5;
        lVar11 = (longlong)iVar8;
        if (lVar12 < lVar11) {
          lVar10 = lVar11 - lVar12;
          plVar9 = (longlong *)(param_7 + 0x10 + lVar12 * 0x20);
          do {
            *plVar9 = (longlong)(iVar5 + 1) * 0x20 + param_7;
            plVar9[1] = (longlong)(iVar5 + -1) * 0x20 + param_7;
            lVar10 = lVar10 + -1;
            plVar9 = plVar9 + 4;
            iVar5 = iVar5 + 1;
          } while (lVar10 != 0);
        }
        *(longlong *)(lVar11 * 0x20 + 0x18 + param_7) = (longlong)(iVar7 + -2) * 0x20 + param_7;
      }
      lVar11 = (longlong)(iVar7 + -1) * 0x20 + param_7;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *param_8 = param_7;
      *param_9 = lVar11;
    }
  }
  return;
}



// FUNCTION 144ea49a0 FUN_144ea49a0 body=218 status=ok
// SIG undefined FUN_144ea49a0(void)

void FUN_144ea49a0(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,undefined8 *param_7)

{
  uint *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  for (; param_7 != (undefined8 *)0x0; param_7 = (undefined8 *)param_7[2]) {
    *param_1 = *param_7;
    param_1 = param_1 + 1;
  }
  if (0 < (int)param_2) {
    puVar1 = &DAT_149bda800;
    puVar2 = &DAT_149bda7e0;
    do {
      if (((((puVar1[-1] == 0) || ((~param_3 & puVar1[-1]) != 0)) &&
           ((*puVar1 == 0 || ((~param_4 & *puVar1) != 0)))) &&
          ((puVar1[1] == 0 || ((~param_5 & puVar1[1]) != 0)))) &&
         ((puVar1[2] == 0 || ((~param_6 & puVar1[2]) != 0)))) {
        *param_1 = puVar2;
        param_1 = param_1 + 1;
      }
      puVar2 = puVar2 + 0x50;
      puVar1 = puVar1 + 0x14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 144ea4a80 FUN_144ea4a80 body=879 status=ok
// SIG undefined FUN_144ea4a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea4a80(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,int param_8,int param_9,undefined8 *param_10,undefined8 *param_11)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  bVar2 = false;
  if ((param_8 == 3) || (param_8 == 6)) {
    bVar2 = true;
  }
  plVar4 = (longlong *)*param_10;
  plVar5 = (longlong *)*param_11;
  plVar3 = plVar5;
  plVar6 = plVar4;
  if (bVar2) {
    plVar3 = plVar4;
    plVar6 = plVar5;
  }
  if (plVar3 == (longlong *)0x0) {
    *param_10 = plVar4;
    *param_11 = plVar5;
    return;
  }
  do {
    if (plVar6 == (longlong *)0x0) break;
    if (bVar2) {
      plVar7 = (longlong *)plVar6[3];
    }
    else {
      plVar7 = (longlong *)plVar6[2];
    }
    lVar1 = *plVar6;
    if (param_9 < 0) {
      if (((((((param_1 == 0) || (param_1 == *(int *)(lVar1 + 0x18))) &&
             ((param_2 == 0 || ((*(uint *)(lVar1 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar1 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar1 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar1 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (param_6 == *(int *)(lVar1 + 0x2c))))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         (((param_7 & 0x20) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x20) != 0))))
      goto LAB_144ea4bd9;
    }
    else if (param_9 == *(int *)(lVar1 + 0x44)) {
LAB_144ea4bd9:
      if (param_8 == 1) {
        if ((int)plVar6[1] == 0) {
          if (plVar6 != plVar5) {
            if (plVar6 == plVar4) {
              plVar4 = (longlong *)plVar6[2];
            }
            if (plVar6[3] != 0) {
              *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
            }
            if (plVar6[2] != 0) {
              *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
            }
            plVar5[2] = (longlong)plVar6;
            plVar6[3] = (longlong)plVar5;
            plVar6[2] = 0;
            plVar5 = plVar6;
          }
          *(undefined4 *)(plVar6 + 1) = 1;
        }
      }
      else if (param_8 == 4) {
        if (((int)plVar6[1] != 0) && (plVar6 != plVar5)) {
          if (plVar6 == plVar4) {
            plVar4 = (longlong *)plVar6[2];
          }
          if (plVar6[3] != 0) {
            *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
          }
          if (plVar6[2] != 0) {
            *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
          }
          plVar5[2] = (longlong)plVar6;
          plVar6[3] = (longlong)plVar5;
          plVar6[2] = 0;
          plVar5 = plVar6;
        }
      }
      else if (param_8 == 3) {
        if ((int)plVar6[1] != 0) {
          if (plVar6 == plVar4) {
            *(undefined4 *)(plVar6 + 1) = 0;
          }
          else {
            if (plVar6 == plVar5) {
              plVar5 = (longlong *)plVar6[3];
            }
            if (plVar6[2] != 0) {
              *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
            }
            if (plVar6[3] != 0) {
              *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
            }
            plVar4[3] = (longlong)plVar6;
            plVar6[2] = (longlong)plVar4;
            plVar6[3] = 0;
            *(undefined4 *)(plVar6 + 1) = 0;
            plVar4 = plVar6;
          }
        }
      }
      else if (param_8 == 6) {
        if (((int)plVar6[1] != 0) && (plVar6 != plVar4)) {
          if (plVar6 == plVar5) {
            plVar5 = (longlong *)plVar6[3];
          }
          if (plVar6[2] != 0) {
            *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
          }
          if (plVar6[3] != 0) {
            *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
          }
          plVar4[3] = (longlong)plVar6;
          plVar6[2] = (longlong)plVar4;
          plVar6[3] = 0;
          plVar4 = plVar6;
        }
      }
      else if (param_8 == 2) {
        if (plVar4 == plVar6) {
          plVar4 = (longlong *)plVar6[2];
        }
        else {
          *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
        }
        if (plVar5 == plVar6) {
          plVar5 = (longlong *)plVar6[3];
        }
        *(undefined4 *)(plVar6 + 1) = 0;
        if (plVar6[2] != 0) {
          *(longlong *)(plVar6[2] + 0x18) = plVar6[3];
        }
        if (plVar6[3] != 0) {
          *(longlong *)(plVar6[3] + 0x10) = plVar6[2];
        }
        plVar6[2] = 0;
        plVar6[3] = 0;
      }
    }
    bVar8 = plVar6 != plVar3;
    plVar6 = plVar7;
  } while (bVar8);
  *param_10 = plVar4;
  *param_11 = plVar5;
  return;
}



// FUNCTION 144ea4df0 FUN_144ea4df0 body=403 status=ok
// SIG undefined FUN_144ea4df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea4df0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = 0x144ea4e0a;
  iVar6 = 0;
  for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
    if (((int)plVar2[1] != 0) && (iVar6 < *(int *)(*plVar2 + 0x44))) {
      iVar6 = *(int *)(*plVar2 + 0x44);
    }
  }
  lVar5 = FUN_144ea6670((longlong)(iVar6 + 1) << 2,"ssl\\ssl_ciph.c",0x3a1);
  if (lVar5 == 0) {
    FUN_144ba24f0(0x14,0xe7,0x41,"ssl\\ssl_ciph.c",0x3a3,uVar12);
    uVar12 = 0;
  }
  else {
    for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
      if ((int)plVar2[1] != 0) {
        piVar1 = (int *)(lVar5 + (longlong)*(int *)(*plVar2 + 0x44) * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (0 < *(int *)(lVar5 + lVar7 * 4)) {
          plVar2 = (longlong *)*param_2;
          plVar10 = (longlong *)*param_1;
          plVar8 = plVar2;
          plVar9 = plVar10;
          if (plVar2 != (longlong *)0x0) {
            do {
              if (plVar9 == (longlong *)0x0) break;
              plVar3 = (longlong *)plVar9[2];
              if ((((lVar7 < 0) || (iVar6 == *(int *)(*plVar9 + 0x44))) && ((int)plVar9[1] != 0)) &&
                 (plVar9 != plVar8)) {
                if (plVar9 == plVar10) {
                  plVar10 = plVar3;
                }
                if (plVar9[3] != 0) {
                  *(longlong **)(plVar9[3] + 0x10) = plVar3;
                }
                lVar4 = plVar9[2];
                if (lVar4 != 0) {
                  *(longlong *)(lVar4 + 0x18) = plVar9[3];
                }
                plVar8[2] = (longlong)plVar9;
                plVar9[3] = (longlong)plVar8;
                plVar9[2] = 0;
                plVar8 = plVar9;
              }
              bVar11 = plVar9 != plVar2;
              plVar9 = plVar3;
            } while (bVar11);
          }
          *param_1 = plVar10;
          *param_2 = (longlong)plVar8;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_144ea6530(lVar5,"ssl\\ssl_ciph.c",0x3b9);
    uVar12 = 1;
  }
  return uVar12;
}



// FUNCTION 144ea4f90 FUN_144ea4f90 body=1589 status=ok
// SIG undefined FUN_144ea4f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ea4f90(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,longlong param_5
             )

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  byte *_Str1;
  longlong lVar12;
  size_t _MaxCount;
  int local_res8;
  undefined4 uVar13;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  
  bVar1 = *param_1;
  uVar13 = 1;
  local_res8 = 0;
  local_64 = 1;
  uVar6 = local_64;
  do {
    if (bVar1 == 0) {
      return uVar13;
    }
    local_64 = uVar6;
    if (bVar1 == 0x2d) {
      local_54 = 3;
      local_58 = 3;
      local_60 = 3;
LAB_144ea5017:
      param_1 = param_1 + 1;
LAB_144ea501c:
      local_5c = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_70 = 0;
      local_78 = 0;
      do {
        _Str1 = param_1;
        _MaxCount = 0;
        lVar11 = 0;
        param_1 = _Str1;
        while( true ) {
          bVar1 = *param_1;
          iVar9 = (int)_MaxCount;
          if (((0x2d < (byte)(bVar1 - 0x2d)) ||
              ((0x3ffffff11ffbU >> ((longlong)(char)(bVar1 - 0x2d) & 0x3fU) & 1) == 0)) &&
             (0x19 < (byte)(bVar1 + 0x9f))) break;
          param_1 = param_1 + 1;
          _MaxCount = (size_t)(iVar9 + 1);
          lVar11 = lVar11 + 1;
        }
        if (iVar9 == 0) {
          FUN_144ba24f0(0x14,0xe6,0x118,"ssl\\ssl_ciph.c",0x404);
          return 0;
        }
        if (local_60 == 5) {
LAB_144ea51ef:
          bVar5 = false;
          break;
        }
        if (bVar1 == 0x2b) {
          param_1 = param_1 + 1;
        }
        local_res8 = 0;
        lVar12 = 0;
        if (*param_4 == 0) goto LAB_144ea51ef;
        plVar10 = param_4;
        while ((iVar8 = strncmp((char *)_Str1,*(char **)(*plVar10 + 8),(longlong)iVar9), iVar8 != 0
               || (*(char *)(*(longlong *)(*plVar10 + 8) + lVar11) != '\0'))) {
          lVar12 = lVar12 + 1;
          plVar10 = param_4 + lVar12;
          if (param_4[lVar12] == 0) goto LAB_144ea51ef;
        }
        bVar5 = true;
        piVar4 = (int *)param_4[lVar12];
        uVar2 = piVar4[7];
        uVar7 = local_5c;
        if ((((((uVar2 != 0) && (uVar7 = uVar2, local_5c != 0)) &&
              (local_5c = local_5c & uVar2, uVar7 = local_5c, local_5c == 0)) ||
             (((local_5c = uVar7, uVar2 = piVar4[8], uVar7 = local_68, uVar2 != 0 &&
               (uVar7 = uVar2, local_68 != 0)) &&
              (local_68 = local_68 & uVar2, uVar7 = local_68, local_68 == 0)))) ||
            (((local_68 = uVar7, uVar2 = piVar4[9], uVar7 = local_6c, uVar2 != 0 &&
              (uVar7 = uVar2, local_6c != 0)) &&
             (local_6c = local_6c & uVar2, uVar7 = local_6c, local_6c == 0)))) ||
           (((local_6c = uVar7, uVar2 = piVar4[10], uVar7 = local_70, uVar2 != 0 &&
             (uVar7 = uVar2, local_70 != 0)) &&
            (local_70 = local_70 & uVar2, uVar7 = local_70, local_70 == 0)))) goto LAB_144ea51ef;
        local_70 = uVar7;
        uVar2 = piVar4[0xf];
        uVar7 = local_74;
        if ((((uVar2 & 0x1f) != 0) && (uVar7 = uVar2 & 0x1f, (local_74 & 0x1f) != 0)) &&
           (local_74 = local_74 & (uVar2 | 0xffffffe0), uVar7 = local_74, (local_74 & 0x1f) == 0))
        goto LAB_144ea51ef;
        local_74 = uVar7;
        if ((uVar2 & 0x20) != 0) {
          if ((local_74 & 0x20) == 0) {
            local_74 = local_74 | uVar2 & 0x20;
          }
          else {
            local_74 = local_74 & (uVar2 | 0xffffffdf);
            if ((local_74 & 0x20) == 0) goto LAB_144ea51ef;
          }
        }
        iVar8 = local_78;
        if (*piVar4 == 0) {
          iVar3 = piVar4[0xb];
          if (((iVar3 != 0) && (iVar8 = iVar3, local_78 != 0)) && (local_78 != iVar3)) {
            bVar5 = false;
            break;
          }
        }
        else {
          local_res8 = piVar4[6];
        }
        local_78 = iVar8;
      } while (bVar1 == 0x2b);
      if (local_58 == 5) {
        iVar8 = 0;
        if (iVar9 == 8) {
          iVar9 = strncmp((char *)_Str1,"STRENGTH",_MaxCount);
          if (iVar9 != 0) {
LAB_144ea5472:
            uVar13 = 0x4a7;
            goto LAB_144ea547a;
          }
          iVar8 = FUN_144ea4df0(param_2,param_3);
        }
        else {
          if ((iVar9 != 10) || (iVar9 = strncmp((char *)_Str1,"SECLEVEL=",9), iVar9 != 0))
          goto LAB_144ea5472;
          if ((int)(char)_Str1[9] - 0x30U < 6) {
            iVar8 = 1;
            *(uint *)(param_5 + 0x1f0) = (int)(char)_Str1[9] - 0x30U;
            goto LAB_144ea5495;
          }
          uVar13 = 0x4a1;
LAB_144ea547a:
          FUN_144ba24f0(0x14,0xe6,0x118,"ssl\\ssl_ciph.c",uVar13);
        }
LAB_144ea5495:
        local_64 = 0;
        if (iVar8 != 0) {
          local_64 = uVar6;
        }
        bVar1 = *param_1;
        while ((bVar1 != 0 &&
               ((0x3b < bVar1 || ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
               ))) {
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        }
      }
      else if (bVar5) {
        FUN_144ea4a80(local_res8,local_5c,local_68,local_6c,local_70,local_78,local_74,local_54,
                      0xffffffff,param_2,param_3);
      }
      else {
        bVar1 = *param_1;
        while( true ) {
          if (bVar1 == 0) {
            return uVar6;
          }
          if ((bVar1 < 0x3c) && ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0))
          break;
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        }
      }
      uVar13 = local_64;
      if (*param_1 == 0) {
        return local_64;
      }
    }
    else {
      if (bVar1 == 0x2b) {
        local_54 = 4;
        local_58 = 4;
        local_60 = 4;
        goto LAB_144ea5017;
      }
      if (bVar1 == 0x21) {
        local_54 = 2;
        local_58 = 2;
        local_60 = 2;
        goto LAB_144ea5017;
      }
      if (bVar1 == 0x40) {
        local_54 = 5;
        local_58 = 5;
        local_60 = 5;
        goto LAB_144ea5017;
      }
      local_54 = 1;
      local_60 = 1;
      local_58 = 1;
      if ((0x3b < bVar1) || ((0xc00100100000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
      goto LAB_144ea501c;
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    uVar6 = local_64;
  } while( true );
}



// FUNCTION 144ea55d0 FUN_144ea55d0 body=373 status=ok
// SIG undefined FUN_144ea55d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea55d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ea55ea;
  bVar1 = false;
  iVar2 = strncmp((char *)*param_3,"SUITEB128ONLY",0xd);
  if (iVar2 == 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
    uVar4 = 0x10000;
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x10000;
    bVar1 = false;
  }
  else {
    iVar2 = strncmp((char *)*param_3,"SUITEB128C2",0xb);
    if (iVar2 == 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
      bVar1 = true;
      uVar4 = 0x30000;
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x30000;
    }
    else {
      iVar2 = strncmp((char *)*param_3,"SUITEB128",9);
      if (iVar2 == 0) {
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
        uVar4 = 0x30000;
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x30000;
      }
      else {
        iVar2 = strncmp((char *)*param_3,"SUITEB192",9);
        if (iVar2 == 0) {
          *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffcffff;
          uVar4 = 0x20000;
          *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x20000;
        }
        else {
          uVar4 = *(uint *)(param_2 + 0x1c) & 0x30000;
        }
      }
    }
  }
  if (uVar4 != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 0x10) == 0) {
      FUN_144ba24f0(0x14,0x14b,0x9e,"ssl\\ssl_ciph.c",0x4e0,uVar5);
      return 0;
    }
    if (uVar4 == 0x10000) {
      pcVar3 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar4 == 0x20000) {
      pcVar3 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else {
      if (uVar4 != 0x30000) {
        return 1;
      }
      pcVar3 = "ECDHE-ECDSA-AES256-GCM-SHA384";
      if (!bVar1) {
        pcVar3 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
      }
    }
    *param_3 = pcVar3;
  }
  return 1;
}



// FUNCTION 144ea5750 FUN_144ea5750 body=253 status=ok
// SIG undefined FUN_144ea5750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea5750(void *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ea575c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 < 0x50) {
    _Size = (ulonglong)param_2;
    memcpy(local_68,param_1,_Size);
    if (0x4f < _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_68[_Size] = 0;
    lVar2 = FUN_144ec96d0(local_68);
    if (lVar2 == 0) {
      local_78 = 0x50c;
      uVar3 = 0xb9;
    }
    else {
      iVar1 = FUN_144bac1c0(param_3,lVar2);
      if (iVar1 != 0) goto LAB_144ea5808;
      local_78 = 0x511;
      uVar3 = 0x44;
    }
    FUN_144ba24f0(0x14,0x26e,uVar3,"ssl\\ssl_ciph.c");
  }
  else {
    local_78 = 0x503;
    FUN_144ba24f0(0x14,0x26e,0xb9,"ssl\\ssl_ciph.c");
  }
LAB_144ea5808:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ea5860 FUN_144ea5860 body=139 status=ok
// SIG undefined FUN_144ea5860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea5860(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ea5875;
  lVar2 = FUN_144babca0();
  if (lVar2 == 0) {
    return 0;
  }
  if ((*param_2 != '\0') &&
     (iVar1 = FUN_144ba1dc0(param_2,0x3a,1,FUN_144ea5750,lVar2,uVar3), iVar1 == 0)) {
    FUN_144babdb0(lVar2);
    return 0;
  }
  FUN_144babdb0(*param_1);
  *param_1 = lVar2;
  return 1;
}



// FUNCTION 144ea58f0 FUN_144ea58f0 body=99 status=ok
// SIG undefined FUN_144ea58f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea58f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144bac2a0(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144babdb0(*param_1);
  *param_1 = lVar1;
  FUN_144bac280(lVar1,&LAB_144b9b140);
  FUN_144bac390(*param_1);
  return 1;
}



// FUNCTION 144ea5960 FUN_144ea5960 body=275 status=ok
// SIG undefined FUN_144ea5960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ea5960(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  
  lVar2 = FUN_144bac2a0(*param_1);
  bVar6 = false;
  if (lVar2 != 0) {
    iVar1 = FUN_144babbf0(lVar2);
    while ((0 < iVar1 && (lVar3 = FUN_144babc00(lVar2,0), *(int *)(lVar3 + 0x2c) == 0x304))) {
      FUN_144bac0f0(lVar2);
      iVar1 = FUN_144babbf0(lVar2);
    }
    iVar5 = 0;
    iVar1 = FUN_144babbf0(param_3);
    if (0 < iVar1) {
      do {
        uVar4 = FUN_144babc00(param_3,iVar5);
        FUN_144bac010(lVar2,uVar4,iVar5);
        iVar5 = iVar5 + 1;
        iVar1 = FUN_144babbf0(param_3);
      } while (iVar5 < iVar1);
    }
    lVar3 = FUN_144bac2a0(lVar2);
    bVar6 = lVar3 != 0;
    if (bVar6) {
      FUN_144babdb0(*param_2);
      *param_2 = lVar3;
      FUN_144bac280(lVar3,&LAB_144b9b140);
      FUN_144bac390(*param_2);
      FUN_144babdb0(*param_1);
      *param_1 = lVar2;
    }
  }
  return bVar6;
}



// FUNCTION 144ea5a80 FUN_144ea5a80 body=35 status=ok
// SIG undefined FUN_144ea5a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea5a80(undefined8 param_1)

{
  FUN_144ea6530(param_1,"ssl\\ssl_ciph.c",0x79e);
  return;
}



// FUNCTION 144ea5ab0 FUN_144ea5ab0 body=354 status=ok
// SIG undefined FUN_144ea5ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea5ab0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ea5ac9;
  iVar2 = -1;
  plVar3 = (longlong *)FUN_144ea6410();
  if (plVar3 == (longlong *)0x0) {
    return -1;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_144babca0();
    *plVar3 = lVar4;
    if ((lVar4 == 0) || (iVar1 = FUN_144bac1c0(lVar4,0), iVar1 == 0)) {
      FUN_144ba24f0(0xf,100,0x41,"crypto\\ex_data.c",0xac,uVar6);
      iVar2 = -1;
      goto LAB_144ea5bf0;
    }
  }
  puVar5 = (undefined4 *)FUN_144ea64e0(0x28,"crypto\\ex_data.c",0xb1);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_144ba24f0(0xf,100,0x41,"crypto\\ex_data.c",0xb3,uVar6);
    iVar2 = -1;
  }
  else {
    *puVar5 = param_2;
    *(undefined8 *)(puVar5 + 2) = param_3;
    *(undefined8 *)(puVar5 + 4) = param_4;
    *(undefined8 *)(puVar5 + 8) = param_5;
    *(undefined8 *)(puVar5 + 6) = param_6;
    iVar1 = FUN_144bac1c0(*plVar3,0);
    if (iVar1 == 0) {
      FUN_144ba24f0(0xf,100,0x41,"crypto\\ex_data.c",0xbd,uVar6);
      FUN_144ea6530(puVar5,"crypto\\ex_data.c",0xbe);
    }
    else {
      iVar2 = FUN_144babbf0(*plVar3);
      iVar2 = iVar2 + -1;
      FUN_144babc20(*plVar3,iVar2,puVar5);
    }
  }
LAB_144ea5bf0:
  FUN_144e98640(DAT_14c796900);
  return iVar2;
}



// FUNCTION 144ea5c20 FUN_144ea5c20 body=446 status=ok
// SIG undefined FUN_144ea5c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea5c20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_144ea6410();
  if (puVar3 == (undefined8 *)0x0) goto LAB_144ea5dce;
  *param_3 = 0;
  iVar2 = FUN_144babbf0(*puVar3);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)FUN_144ea64e0(lVar8 * 8,"crypto\\ex_data.c",0xe2);
      if (puVar4 == (undefined1 *)0x0) goto LAB_144ea5ce9;
    }
    iVar7 = 0;
    lVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar5 = FUN_144babc00(*puVar3,iVar7);
        *(undefined8 *)(puVar4 + lVar6 * 8) = uVar5;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
  }
LAB_144ea5ce9:
  FUN_144e98640(DAT_14c796900);
  if ((iVar2 < 1) || (puVar4 != (undefined1 *)0x0)) {
    iVar2 = 0;
    lVar6 = 0;
    if (0 < lVar8) {
      do {
        if ((*(longlong *)(puVar4 + lVar6 * 8) != 0) &&
           (*(longlong *)(*(longlong *)(puVar4 + lVar6 * 8) + 0x10) != 0)) {
          if ((*param_3 == 0) || (iVar7 = FUN_144babbf0(), iVar7 <= iVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_144babc00(*param_3,iVar2);
          }
          puVar1 = *(undefined4 **)(puVar4 + lVar6 * 8);
          local_a0 = *(undefined8 *)(puVar1 + 2);
          local_a8 = *puVar1;
          (**(code **)(puVar1 + 4))(param_2,uVar5,param_3,iVar2);
        }
        iVar2 = iVar2 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar8);
    }
    if (puVar4 != local_98) {
      FUN_144ea6530(puVar4,"crypto\\ex_data.c",0xf5);
    }
  }
  else {
    local_a8 = 0xea;
    FUN_144ba24f0(0xf,0x70,0x41,"crypto\\ex_data.c");
  }
LAB_144ea5dce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144ea5df0 FUN_144ea5df0 body=565 status=ok
// SIG undefined FUN_144ea5df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea5df0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar10 = (undefined1 *)0x0;
  local_a0 = param_2;
  if ((*param_3 == 0) || (puVar4 = (undefined8 *)FUN_144ea6410(), puVar4 == (undefined8 *)0x0))
  goto LAB_144ea6015;
  iVar2 = FUN_144babbf0(*puVar4);
  iVar3 = FUN_144babbf0(*param_3);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  lVar12 = (longlong)iVar2;
  puVar5 = puVar10;
  if (0 < iVar2) {
    if (iVar2 < 10) {
      puVar5 = local_98;
    }
    else {
      puVar5 = (undefined1 *)FUN_144ea64e0(lVar12 * 8,"crypto\\ex_data.c",0x115);
      if (puVar5 == (undefined1 *)0x0) goto LAB_144ea5ed9;
    }
    puVar9 = puVar10;
    puVar11 = puVar10;
    if (0 < iVar2) {
      do {
        uVar6 = FUN_144babc00(*puVar4,puVar11);
        *(undefined8 *)(puVar5 + (longlong)puVar9 * 8) = uVar6;
        puVar11 = (undefined1 *)(ulonglong)((int)puVar11 + 1);
        puVar9 = puVar9 + 1;
      } while ((longlong)puVar9 < lVar12);
    }
  }
LAB_144ea5ed9:
  FUN_144e98640(DAT_14c796900);
  uVar6 = local_a0;
  if (iVar2 != 0) {
    if (puVar5 == (undefined1 *)0x0) {
      local_b8 = 0x11f;
      FUN_144ba24f0(0xf,0x6e,0x41,"crypto\\ex_data.c");
    }
    else {
      uVar7 = FUN_144ea6300(local_a0,iVar2 + -1);
      iVar3 = FUN_144ea6220(uVar6,iVar2 + -1,uVar7);
      if ((iVar3 != 0) && (puVar9 = puVar10, puVar11 = puVar10, 0 < iVar2)) {
        do {
          puVar8 = puVar10;
          if ((*param_3 != 0) && (iVar2 = FUN_144babbf0(), (int)puVar9 < iVar2)) {
            puVar8 = (undefined1 *)FUN_144babc00(*param_3,puVar9);
          }
          puVar1 = *(undefined4 **)(puVar5 + (longlong)puVar11 * 8);
          local_a8 = puVar8;
          if ((puVar1 != (undefined4 *)0x0) && (*(code **)(puVar1 + 8) != (code *)0x0)) {
            local_b0 = *(undefined8 *)(puVar1 + 2);
            local_b8 = *puVar1;
            iVar2 = (**(code **)(puVar1 + 8))(uVar6,param_3,&local_a8,puVar9);
            if (iVar2 == 0) break;
          }
          FUN_144ea6220(uVar6,puVar9,local_a8);
          puVar9 = (undefined1 *)(ulonglong)((int)puVar9 + 1);
          puVar11 = puVar11 + 1;
        } while ((longlong)puVar11 < lVar12);
      }
      if (puVar5 != local_98) {
        FUN_144ea6530(puVar5,"crypto\\ex_data.c",0x137);
      }
    }
  }
LAB_144ea6015:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144ea6040 FUN_144ea6040 body=456 status=ok
// SIG undefined FUN_144ea6040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6040(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_144ea6410();
  if (puVar3 == (undefined8 *)0x0) goto LAB_144ea61e9;
  iVar1 = FUN_144babbf0(*puVar3);
  lVar8 = (longlong)iVar1;
  if (0 < iVar1) {
    if (iVar1 < 10) {
      puVar4 = local_98;
    }
    else {
      puVar4 = (undefined1 *)FUN_144ea64e0(lVar8 * 8,"crypto\\ex_data.c",0x151);
      if (puVar4 == (undefined1 *)0x0) goto LAB_144ea6109;
    }
    iVar1 = 0;
    lVar7 = 0;
    if (0 < lVar8) {
      do {
        uVar5 = FUN_144babc00(*puVar3,iVar1);
        *(undefined8 *)(puVar4 + lVar7 * 8) = uVar5;
        iVar1 = iVar1 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
LAB_144ea6109:
  FUN_144e98640(DAT_14c796900);
  iVar1 = 0;
  lVar7 = 0;
  if (0 < lVar8) {
    do {
      if (puVar4 == (undefined1 *)0x0) {
        FUN_144e98620(DAT_14c796900);
        puVar6 = (undefined4 *)FUN_144babc00(*puVar3,iVar1);
        FUN_144e98640(DAT_14c796900);
      }
      else {
        puVar6 = *(undefined4 **)(puVar4 + lVar7 * 8);
      }
      if ((puVar6 != (undefined4 *)0x0) && (*(longlong *)(puVar6 + 6) != 0)) {
        if ((*param_3 == 0) || (iVar2 = FUN_144babbf0(), iVar2 <= iVar1)) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_144babc00(*param_3,iVar1);
        }
        local_a0 = *(undefined8 *)(puVar6 + 2);
        local_a8 = *puVar6;
        (**(code **)(puVar6 + 6))(param_2,uVar5,param_3,iVar1);
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  if (puVar4 != local_98) {
    FUN_144ea6530(puVar4,"crypto\\ex_data.c",0x167);
  }
LAB_144ea61e9:
  FUN_144babdb0(*param_3);
  *param_3 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144ea6220 FUN_144ea6220 body=213 status=ok
// SIG undefined FUN_144ea6220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea6220(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ea6235;
  if (*param_1 == 0) {
    lVar3 = FUN_144babca0();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      FUN_144ba24f0(0xf,0x66,0x41,"crypto\\ex_data.c",0x177,uVar4);
      return 0;
    }
  }
  iVar1 = FUN_144babbf0(*param_1);
  while( true ) {
    if (param_2 < iVar1) {
      FUN_144babc20(*param_1,param_2,param_3);
      return 1;
    }
    iVar2 = FUN_144bac1c0(*param_1,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  FUN_144ba24f0(0xf,0x66,0x41,"crypto\\ex_data.c",0x17e,uVar4);
  return 0;
}



// FUNCTION 144ea6300 FUN_144ea6300 body=74 status=ok
// SIG undefined FUN_144ea6300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea6300(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_144babbf0();
    if (param_2 < iVar1) {
      uVar2 = FUN_144babc00(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144ea6350 FUN_144ea6350 body=110 status=ok
// SIG undefined FUN_144ea6350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6350(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c796910;
  do {
    FUN_144babe00(*puVar1,FUN_144ea64b0);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((longlong)puVar1 < 0x14c796990);
  FUN_144e98660(DAT_14c796900);
  DAT_14c796900 = 0;
  return;
}



// FUNCTION 144ea63c0 FUN_144ea63c0 body=70 status=ok
// SIG undefined FUN_144ea63c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea63c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bab1c0(0,0,param_3,param_4,0x144ea63ca);
  if (iVar1 == 0) {
    DAT_14c79690c = 0;
    return;
  }
  DAT_14c796900 = FUN_144e985a0();
  DAT_14c79690c = (uint)(DAT_14c796900 != 0);
  return;
}



// FUNCTION 144ea6410 FUN_144ea6410 body=147 status=ok
// SIG undefined FUN_144ea6410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ea6410(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ea641c;
  if (param_1 < 0x10) {
    iVar1 = FUN_144e986c0(&DAT_14c796908);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_14c79690c;
    }
    if (iVar2 != 0) {
      if (DAT_14c796900 == 0) {
        return (undefined8 *)0x0;
      }
      FUN_144e98620();
      return &DAT_14c796910 + (int)param_1;
    }
    uVar4 = 0x3c;
    uVar3 = 0x41;
  }
  else {
    uVar4 = 0x37;
    uVar3 = 7;
  }
  FUN_144ba24f0(0xf,0x71,uVar3,"crypto\\ex_data.c",uVar4,uVar5);
  return (undefined8 *)0x0;
}



// FUNCTION 144ea64b0 FUN_144ea64b0 body=33 status=ok
// SIG undefined FUN_144ea64b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea64b0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\ex_data.c",0x54);
  return;
}



// FUNCTION 144ea64e0 FUN_144ea64e0 body=77 status=ok
// SIG undefined FUN_144ea64e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_144ea64e0(size_t param_1)

{
  void *pvVar1;
  
  if ((PTR_FUN_14c70b038 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b038 != FUN_144ea64e0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ea6509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_14c70b038)();
    return pvVar1;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  _DAT_14c70b030 = 0;
                    /* WARNING: Could not recover jumptable at 0x000144ea6526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}



// FUNCTION 144ea6530 FUN_144ea6530 body=55 status=ok
// SIG undefined FUN_144ea6530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6530(void *param_1)

{
  if ((PTR_FUN_14c70b048 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b048 != FUN_144ea6530)) {
                    /* WARNING: Could not recover jumptable at 0x000144ea6559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_14c70b048)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ea6560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 144ea6570 FUN_144ea6570 body=201 status=ok
// SIG undefined FUN_144ea6570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_144ea6570(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if ((PTR_FUN_14c70b040 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b040 != FUN_144ea6570)) {
                    /* WARNING: Could not recover jumptable at 0x000144ea65a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_FUN_14c70b040)(param_1,param_2);
    return pvVar1;
  }
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_14c70b038 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b038 != FUN_144ea64e0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ea65cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_FUN_14c70b038)(param_2,param_3,param_4);
      return pvVar1;
    }
    if (param_2 != 0) {
      _DAT_14c70b030 = 0;
                    /* WARNING: Could not recover jumptable at 0x000144ea65e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = malloc(param_2);
      return pvVar1;
    }
    return (void *)0x0;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144ea662d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if ((PTR_FUN_14c70b048 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b048 != FUN_144ea6530)) {
    (*(code *)PTR_FUN_14c70b048)(param_1,param_3,param_4,param_4,0x144ea657a);
    return (void *)0x0;
  }
  free(param_1);
  return (void *)0x0;
}



// FUNCTION 144ea6640 FUN_144ea6640 body=46 status=ok
// SIG undefined FUN_144ea6640(void)

void FUN_144ea6640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = PTR_FUN_14c70b038;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR_FUN_14c70b040;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR_FUN_14c70b048;
  }
  return;
}



// FUNCTION 144ea6670 FUN_144ea6670 body=125 status=ok
// SIG undefined FUN_144ea6670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_144ea6670(size_t param_1)

{
  void *_Dst;
  
  if ((PTR_FUN_14c70b038 == (undefined *)0x0) || ((code *)PTR_FUN_14c70b038 == FUN_144ea64e0)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    _DAT_14c70b030 = 0;
    _Dst = malloc(param_1);
  }
  else {
    _Dst = (void *)(*(code *)PTR_FUN_14c70b038)(param_1);
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}



// FUNCTION 144ea66f0 FUN_144ea66f0 body=124 status=ok
// SIG undefined FUN_144ea66f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea66f0(void *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      FUN_14259f0c0();
    }
    if ((PTR_FUN_14c70b048 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b048 != FUN_144ea6530)) {
                    /* WARNING: Could not recover jumptable at 0x000144ea6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_14c70b048)(param_1,param_3,param_4);
      return;
    }
    free(param_1);
  }
  return;
}



// FUNCTION 144ea6770 FUN_144ea6770 body=302 status=ok
// SIG undefined FUN_144ea6770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_144ea6770(void *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                    undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_FUN_14c70b038 != (undefined *)0x0) && ((code *)PTR_FUN_14c70b038 != FUN_144ea64e0)) {
      pvVar1 = (void *)(*(code *)PTR_FUN_14c70b038)(param_3,param_4,param_5);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
    if (param_3 != 0) {
      _DAT_14c70b030 = 0;
      pvVar1 = malloc(param_3);
    }
    return pvVar1;
  }
  if (param_3 == 0) {
    FUN_144ea66f0(param_1,param_2,param_4,param_5);
    return (void *)0x0;
  }
  if (param_3 < param_2) {
    FUN_14259f0c0((longlong)param_1 + param_3,param_2 - param_3);
    return param_1;
  }
  pvVar1 = (void *)FUN_144ea64e0(param_3,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    memcpy(pvVar1,param_1,param_2);
    FUN_144ea66f0(param_1,param_2,param_4,param_5);
  }
  return pvVar1;
}



// FUNCTION 144ea68a0 FUN_144ea68a0 body=89 status=ok
// SIG undefined FUN_144ea68a0(void)

longlong FUN_144ea68a0(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return (ulonglong)(uVar2 & 0x7fffffff) + lVar3;
}



// FUNCTION 144ea6900 FUN_144ea6900 body=124 status=ok
// SIG undefined FUN_144ea6900(void)

longlong FUN_144ea6900(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = uVar4;
  for (; (uVar2 = uVar4, param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    uVar5 = uVar5 + 1;
    param_3 = param_3 - 1;
  }
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
    uVar2 = uVar2 + 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (uVar3 = (uint)uVar4, uVar3 < 0x80000000))) {
    param_2 = param_2 + 1;
    uVar3 = uVar3 + 1;
    cVar1 = *param_2;
    uVar4 = (ulonglong)uVar3;
  }
  return (uVar3 & 0x7fffffff) + uVar2 + uVar5;
}



// FUNCTION 144ea6980 FUN_144ea6980 body=28 status=ok
// SIG undefined FUN_144ea6980(void)

longlong FUN_144ea6980(char *param_1,longlong param_2)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
  }
  return (longlong)pcVar1 - (longlong)param_1;
}



// FUNCTION 144ea69a0 FUN_144ea69a0 body=209 status=ok
// SIG undefined FUN_144ea69a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_144ea69a0(byte *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ea69b0;
  uVar3 = (ulonglong)param_2;
  if (param_2 == 0) {
    pcVar1 = (char *)FUN_144ea6670(1,"crypto\\o_str.c",200);
    return pcVar1;
  }
  pcVar1 = (char *)FUN_144ea64e0((longlong)(int)(param_2 * 3),"crypto\\o_str.c",0xcb);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    if (0 < (int)param_2) {
      do {
        *pcVar2 = "0123456789ABCDEF"[*param_1 >> 4];
        pcVar2[1] = "0123456789ABCDEF"[*param_1 & 0xf];
        pcVar2[2] = ':';
        pcVar2 = pcVar2 + 3;
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
    pcVar2[-1] = '\0';
    return pcVar1;
  }
  FUN_144ba24f0(0xf,0x75,0x41,"crypto\\o_str.c",0xcc,uVar4);
  return (char *)0x0;
}



// FUNCTION 144ea6a80 FUN_144ea6a80 body=382 status=ok
// SIG undefined FUN_144ea6a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_144ea6a80(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ea6a90;
  cVar1 = *param_1;
  pcVar7 = param_1;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  pbVar6 = (byte *)FUN_144ea64e0(uVar3 >> 1 & 0x3fffffff,"crypto\\o_str.c",0x9c);
  if (pbVar6 == (byte *)0x0) {
    FUN_144ba24f0(0xf,0x76,0x41,"crypto\\o_str.c",0x9d,uVar9);
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pbVar8 = pbVar6;
  do {
    if (cVar1 == '\0') {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)pbVar8 - (int)pbVar6;
      }
      return pbVar6;
    }
    cVar1 = *param_1;
    pcVar7 = param_1 + 1;
    if (cVar1 != ':') {
      cVar2 = *pcVar7;
      pcVar7 = param_1 + 2;
      if (cVar2 == '\0') {
        FUN_144ba24f0(0xf,0x76,0x67,"crypto\\o_str.c",0xa7,uVar9);
        FUN_144ea6530(pbVar6,"crypto\\o_str.c",0xa8);
        return (byte *)0x0;
      }
      iVar4 = FUN_144ea6c00();
      iVar5 = FUN_144ea6c00(cVar1);
      if ((iVar4 < 0) || (iVar5 < 0)) {
        FUN_144ea6530(pbVar6,"crypto\\o_str.c",0xae);
        FUN_144ba24f0(0xf,0x76,0x66,"crypto\\o_str.c",0xaf);
        return (byte *)0x0;
      }
      *pbVar8 = (char)iVar5 << 4 | (byte)iVar4;
      pbVar8 = pbVar8 + 1;
    }
    cVar1 = *pcVar7;
    param_1 = pcVar7;
  } while( true );
}



// FUNCTION 144ea6c00 FUN_144ea6c00 body=137 status=ok
// SIG undefined FUN_144ea6c00(void)

undefined8 FUN_144ea6c00(undefined1 param_1)

{
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xffffffff;
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  }
}



// FUNCTION 144ea6d10 FUN_144ea6d10 body=163 status=ok
// SIG undefined FUN_144ea6d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144ea6d10(void *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x144ea6d20;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    _Dst = (void *)FUN_144ea64e0(param_2,param_3,param_4);
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0xf,0x73,0x41,"crypto\\o_str.c",0x42,uVar1);
      return (void *)0x0;
    }
    memcpy(_Dst,param_1,param_2);
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 144ea6dc0 FUN_144ea6dc0 body=100 status=ok
// SIG undefined FUN_144ea6dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea6dc0(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar4 = param_1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    lVar3 = FUN_144ea64e0((uVar2 & 0x7fffffff) + 1);
    if (lVar3 != 0) {
      lVar5 = lVar3 - (longlong)param_1;
      do {
        cVar1 = *param_1;
        param_1[lVar5] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 144ea6e30 FUN_144ea6e30 body=131 status=ok
// SIG undefined FUN_144ea6e30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144ea6e30(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *_Dst;
  size_t _Size;
  
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  for (; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  _Size = (longlong)pcVar1 - (longlong)param_1;
  _Dst = (void *)FUN_144ea64e0(_Size + 1,param_3,param_4);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  return _Dst;
}



// FUNCTION 144ea6ec0 FUN_144ea6ec0 body=48 status=ok
// SIG undefined FUN_144ea6ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ea6ec0(int param_1,char *param_2,size_t param_3)

{
  errno_t eVar1;
  
  eVar1 = strerror_s(param_2,param_3,param_1);
  return eVar1 == 0;
}



// FUNCTION 144ea6ef0 FUN_144ea6ef0 body=3 status=ok
// SIG undefined FUN_144ea6ef0(void)

undefined8 FUN_144ea6ef0(void)

{
  return 0;
}



// FUNCTION 144ea6f00 FUN_144ea6f00 body=22 status=ok
// SIG undefined FUN_144ea6f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6f00(void)

{
  FUN_144ea64e0();
  return;
}



// FUNCTION 144ea6f20 FUN_144ea6f20 body=22 status=ok
// SIG undefined FUN_144ea6f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6f20(void)

{
  FUN_144ea6670();
  return;
}



// FUNCTION 144ea6f40 FUN_144ea6f40 body=22 status=ok
// SIG undefined FUN_144ea6f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6f40(void)

{
  FUN_144ea6530();
  return;
}



// FUNCTION 144ea6f60 FUN_144ea6f60 body=73 status=ok
// SIG undefined FUN_144ea6f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea6f60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    FUN_14259f0c0();
    FUN_144ea6530(param_1,param_3,param_4);
  }
  return;
}



// FUNCTION 144ea6fb0 FUN_144ea6fb0 body=3 status=ok
// SIG undefined FUN_144ea6fb0(void)

undefined8 FUN_144ea6fb0(void)

{
  return 0;
}



// FUNCTION 144ea6fc0 FUN_144ea6fc0 body=74 status=ok
// SIG undefined FUN_144ea6fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea6fc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    FUN_144ba24f0(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144ea7010 FUN_144ea7010 body=88 status=ok
// SIG undefined FUN_144ea7010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea7010(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ea701c;
  lVar1 = FUN_144ea6670(0x20,"crypto\\buffer\\buffer.c",0x23);
  if (lVar1 == 0) {
    FUN_144ba24f0(7,0x65,0x41,"crypto\\buffer\\buffer.c",0x25,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}



// FUNCTION 144ea7070 FUN_144ea7070 body=97 status=ok
// SIG undefined FUN_144ea7070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea7070(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        FUN_144ea66f0(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      "crypto\\buffer\\buffer.c",0x33);
      }
      else {
        FUN_144ea6f60();
      }
    }
    FUN_144ea6530(param_1,"crypto\\buffer\\buffer.c",0x35);
  }
  return;
}



// FUNCTION 144ea70e0 FUN_144ea70e0 body=329 status=ok
// SIG undefined FUN_144ea70e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea70e0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ea70f0;
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    FUN_144ba24f0(7,100,0x41,"crypto\\buffer\\buffer.c",0x5a,0x144ea70f0);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = FUN_144ea6570(param_1[1],uVar2,"crypto\\buffer\\buffer.c",0x61);
  }
  else {
    uVar1 = FUN_144ea7400(param_1);
  }
  if (uVar1 == 0) {
    FUN_144ba24f0(7,100,0x41,"crypto\\buffer\\buffer.c",99,uVar3);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 144ea7230 FUN_144ea7230 body=361 status=ok
// SIG undefined FUN_144ea7230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea7230(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (param_2 <= uVar2) {
    if (param_1[1] != 0) {
      memset((void *)(param_1[1] + param_2),0,uVar2 - param_2);
    }
    *param_1 = param_2;
    return param_2;
  }
  if (param_2 <= param_1[2]) {
    memset((void *)(param_1[1] + uVar2),0,param_2 - uVar2);
    *param_1 = param_2;
    return param_2;
  }
  if (0x5ffffffc < param_2) {
    FUN_144ba24f0(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x80);
    return 0;
  }
  uVar2 = (param_2 + 3) / 3 << 2;
  if ((param_1[3] & 1) == 0) {
    uVar1 = FUN_144ea6770(param_1[1],param_1[2],uVar2,"crypto\\buffer\\buffer.c",0x87,0x144ea7240);
  }
  else {
    uVar1 = FUN_144ea7400(param_1);
  }
  if (uVar1 == 0) {
    FUN_144ba24f0(7,0x69,0x41,"crypto\\buffer\\buffer.c",0x89);
    return 0;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  memset((void *)(uVar1 + *param_1),0,param_2 - *param_1);
  *param_1 = param_2;
  return param_2;
}



// FUNCTION 144ea73a0 FUN_144ea73a0 body=92 status=ok
// SIG undefined FUN_144ea73a0(void)

void FUN_144ea73a0(undefined1 *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    puVar2 = param_1 + (param_3 - 1);
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      puVar2 = puVar2 + -1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else {
    param_1 = param_1 + (param_3 - 1);
    if (param_3 != 0) {
      do {
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + -1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 144ea7400 FUN_144ea7400 body=121 status=ok
// SIG undefined FUN_144ea7400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144ea7400(size_t *param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_144ea6f00(param_2,"crypto\\buffer\\buffer.c",0x3e);
  if (((void *)param_1[1] != (void *)0x0) && (_Dst != (void *)0x0)) {
    memcpy(_Dst,(void *)param_1[1],*param_1);
    FUN_144ea6f60(param_1[1],*param_1,"crypto\\buffer\\buffer.c",0x42);
    param_1[1] = 0;
  }
  return _Dst;
}



// FUNCTION 144ea7480 FUN_144ea7480 body=148 status=ok
// SIG undefined FUN_144ea7480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ea7480(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ea7490;
  plVar2 = (longlong *)FUN_144ea6670(0x20,"crypto\\comp\\comp_lib.c",0x16);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x29,0x67,0x41,"crypto\\comp\\comp_lib.c",0x17,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(plVar2);
    if (iVar1 == 0) {
      FUN_144ea6530(plVar2,"crypto\\comp\\comp_lib.c",0x1c);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// FUNCTION 144ea7520 FUN_144ea7520 body=3 status=ok
// SIG undefined FUN_144ea7520(void)

undefined4 FUN_144ea7520(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144ea7530 FUN_144ea7530 body=5 status=ok
// SIG undefined FUN_144ea7530(void)

undefined8 FUN_144ea7530(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144ea7540 FUN_144ea7540 body=63 status=ok
// SIG undefined FUN_144ea7540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea7540(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
    FUN_144ea6530(param_1,"crypto\\comp\\comp_lib.c",0x38);
  }
  return;
}



// FUNCTION 144ea7580 FUN_144ea7580 body=76 status=ok
// SIG undefined FUN_144ea7580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea7580(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar1;
  }
  return uVar1;
}



// FUNCTION 144ea75d0 FUN_144ea75d0 body=76 status=ok
// SIG undefined FUN_144ea75d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea75d0(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)uVar1;
  }
  return uVar1;
}



// FUNCTION 144ea7620 FUN_144ea7620 body=121 status=ok
// SIG undefined FUN_144ea7620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea7620(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  Ordinal_112(0);
  iVar1 = Ordinal_19((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  FUN_144b9e640(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = FUN_144ea79b0(iVar1);
    if (iVar2 != 0) {
      FUN_144b9e620(param_1,10);
    }
  }
  return iVar1;
}



// FUNCTION 144ea76a0 FUN_144ea76a0 body=173 status=ok
// SIG undefined FUN_144ea76a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea76a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  Ordinal_112(0);
  iVar1 = Ordinal_16((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  FUN_144b9e640(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = FUN_144ea79b0(iVar1);
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        return iVar1;
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
      return 0;
    }
    FUN_144b9e620(param_1,9);
  }
  return iVar1;
}



// FUNCTION 144ea7750 FUN_144ea7750 body=66 status=ok
// SIG undefined FUN_144ea7750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea7750(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  FUN_144ea7620(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}



// FUNCTION 144ea77a0 FUN_144ea77a0 body=260 status=ok
// SIG undefined FUN_144ea77a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ea77a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_2) {
  case 2:
    return *(uint *)(param_1 + 0x28) >> 0xb & 1;
  default:
    return 0;
  case 8:
    return *(uint *)(param_1 + 0x24);
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return 1;
  case 0xb:
  case 0xc:
    return 1;
  case 0x68:
    FUN_144ea7950(param_1);
    *(undefined4 *)(param_1 + 0x30) = *param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x69:
    break;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xffffffff;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  return *(uint *)(param_1 + 0x30);
}



// FUNCTION 144ea7950 FUN_144ea7950 body=70 status=ok
// SIG undefined FUN_144ea7950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea7950(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_14526af50(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 1;
}



// FUNCTION 144ea79a0 FUN_144ea79a0 body=8 status=ok
// SIG undefined FUN_144ea79a0(void)

undefined * FUN_144ea79a0(void)

{
  return &DAT_149bdc470;
}



// FUNCTION 144ea79b0 FUN_144ea79b0 body=100 status=ok
// SIG undefined FUN_144ea79b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea79b0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 + 1U < 2) {
    iVar1 = Ordinal_111();
    if (iVar1 < 0x7f) {
      if ((iVar1 - 0x67U < 0x18) && ((0x800201U >> (iVar1 - 0x67U & 0x1f) & 1) != 0)) {
        return 1;
      }
      if (iVar1 == 4) {
        return 1;
      }
      bVar2 = iVar1 == 0xb;
    }
    else {
      if (iVar1 == 0x86) {
        return 1;
      }
      if (iVar1 == 0x8c) {
        return 1;
      }
      bVar2 = iVar1 == 0x2733;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ea7a20 FUN_144ea7a20 body=102 status=ok
// SIG undefined FUN_144ea7a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea7a20(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144b9e650(&DAT_149bdc470);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144b9f250(lVar1,0x68,param_2,param_1);
  return lVar1;
}



// FUNCTION 144ea7a90 FUN_144ea7a90 body=454 status=ok
// SIG undefined FUN_144ea7a90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea7a90(longlong param_1,void *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar4 = 0;
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  FUN_144b9e640(param_1,0xf);
  iVar8 = (*(int *)(lVar2 + 4) - *(int *)(lVar2 + 0x24)) - *(int *)(lVar2 + 0x20);
  if (iVar8 < param_3) {
    do {
      if (*(int *)(lVar2 + 0x20) != 0) {
        if (0 < iVar8) {
          memcpy((void *)((longlong)(*(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x20)) +
                         *(longlong *)(lVar2 + 0x18)),param_2,(longlong)iVar8);
          param_2 = (void *)((longlong)param_2 + (longlong)iVar8);
          param_3 = param_3 - iVar8;
          uVar7 = (ulonglong)(uint)((int)uVar7 + iVar8);
          *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + iVar8;
        }
        do {
          uVar6 = (uint)uVar7;
          uVar3 = FUN_144b9eb80(*(undefined8 *)(param_1 + 0x40),
                                (longlong)*(int *)(lVar2 + 0x24) + *(longlong *)(lVar2 + 0x18),
                                *(undefined4 *)(lVar2 + 0x20));
          uVar5 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            FUN_144b9f4c0(param_1);
            if ((int)uVar3 < 0) goto LAB_144ea7c23;
            if (uVar3 == 0) {
              return uVar7;
            }
          }
          *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + uVar3;
          piVar1 = (int *)(lVar2 + 0x20);
          *piVar1 = *piVar1 - uVar3;
        } while (*piVar1 != 0);
      }
      *(undefined4 *)(lVar2 + 0x24) = 0;
      if (*(int *)(lVar2 + 4) <= param_3) {
        do {
          uVar6 = (uint)uVar7;
          iVar4 = FUN_144b9eb80(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
          uVar5 = (ulonglong)iVar4;
          if (iVar4 < 1) {
            FUN_144b9f4c0(param_1);
            if (iVar4 < 0) {
LAB_144ea7c23:
              if ((int)uVar6 < 1) {
                return uVar5 & 0xffffffff;
              }
              return (ulonglong)uVar6;
            }
            if (iVar4 == 0) {
              return uVar7;
            }
          }
          uVar7 = (ulonglong)(uVar6 + iVar4);
          param_2 = (void *)((longlong)param_2 + uVar5);
          param_3 = param_3 - iVar4;
          if (param_3 == 0) {
            return uVar7;
          }
        } while (*(int *)(lVar2 + 4) <= param_3);
      }
      iVar4 = (int)uVar7;
      iVar8 = (*(int *)(lVar2 + 4) - *(int *)(lVar2 + 0x24)) - *(int *)(lVar2 + 0x20);
    } while (iVar8 < param_3);
  }
  memcpy((void *)((longlong)(*(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x20)) +
                 *(longlong *)(lVar2 + 0x18)),param_2,(longlong)param_3);
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + param_3;
  return (ulonglong)(uint)(iVar4 + param_3);
}



// FUNCTION 144ea7c60 FUN_144ea7c60 body=338 status=ok
// SIG undefined FUN_144ea7c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea7c60(longlong param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if ((piVar1 == (int *)0x0) || (*(longlong *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  iVar3 = 0;
  FUN_144b9e640(param_1,0xf);
  while( true ) {
    iVar2 = piVar1[4];
    if (iVar2 != 0) {
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      memcpy(param_2,(void *)((longlong)piVar1[5] + *(longlong *)(piVar1 + 2)),(longlong)iVar2);
      piVar1[5] = piVar1[5] + iVar2;
      iVar3 = iVar3 + iVar2;
      piVar1[4] = piVar1[4] - iVar2;
      if (param_3 == iVar2) {
        return iVar3;
      }
      param_3 = param_3 - iVar2;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    }
    if (*piVar1 < param_3) break;
    iVar2 = FUN_144b9e930(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(piVar1 + 2));
    if (iVar2 < 1) {
      FUN_144b9f4c0(param_1);
      if (iVar2 < 0) {
        if (iVar3 < 1) {
          return iVar2;
        }
        return iVar3;
      }
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    piVar1[5] = 0;
    piVar1[4] = iVar2;
  }
  do {
    iVar2 = FUN_144b9e930(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    if (iVar2 < 1) {
      FUN_144b9f4c0(param_1);
      if (iVar2 < 0) {
        if (0 < iVar3) {
          iVar2 = iVar3;
        }
        return iVar2;
      }
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    iVar3 = iVar3 + iVar2;
    if (param_3 == iVar2) {
      return iVar3;
    }
    param_2 = (void *)((longlong)param_2 + (longlong)iVar2);
    param_3 = param_3 - iVar2;
  } while( true );
}



// FUNCTION 144ea7dc0 FUN_144ea7dc0 body=66 status=ok
// SIG undefined FUN_144ea7dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea7dc0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  FUN_144ea7a90(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}



// FUNCTION 144ea7e10 FUN_144ea7e10 body=271 status=ok
// SIG undefined FUN_144ea7e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea7e10(longlong param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  param_3 = param_3 + -1;
  iVar7 = 0;
  FUN_144b9e640(param_1,0xf);
  do {
    while ((int)puVar1[4] < 1) {
      iVar4 = FUN_144b9e930(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(puVar1 + 2),*puVar1);
      if (iVar4 < 1) {
        FUN_144b9f4c0(param_1);
        *param_2 = '\0';
        if (iVar4 < 0) {
          if (iVar7 < 1) {
            return iVar4;
          }
          return iVar7;
        }
        if (iVar4 == 0) {
          return iVar7;
        }
      }
      puVar1[4] = iVar4;
      puVar1[5] = 0;
    }
    iVar4 = puVar1[5];
    lVar2 = *(longlong *)(puVar1 + 2);
    iVar6 = 0;
    bVar3 = false;
    if (0 < (int)puVar1[4]) {
      pcVar5 = (char *)(iVar4 + lVar2);
      do {
        bVar3 = false;
        if ((longlong)param_3 <= (longlong)pcVar5 - (iVar4 + lVar2)) break;
        iVar6 = iVar6 + 1;
        *param_2 = *pcVar5;
        param_2 = param_2 + 1;
        if (*pcVar5 == '\n') {
          bVar3 = true;
          break;
        }
        pcVar5 = pcVar5 + 1;
        bVar3 = false;
      } while (iVar6 < (int)puVar1[4]);
    }
    puVar1[4] = puVar1[4] - iVar6;
    iVar7 = iVar7 + iVar6;
    puVar1[5] = puVar1[5] + iVar6;
    param_3 = param_3 - iVar6;
    if ((bVar3) || (param_3 == 0)) {
      *param_2 = '\0';
      return iVar7;
    }
  } while( true );
}



// FUNCTION 144ea7f20 FUN_144ea7f20 body=912 status=ok
// SIG undefined FUN_144ea7f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea7f20(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  size_t _Size;
  undefined1 local_res10 [8];
  
  piVar2 = *(int **)(param_1 + 0x38);
  _Size = (size_t)param_3;
  switch((int)param_2) {
  case 1:
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
  default:
switchD_144ea7f80_caseD_4:
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 == 0) {
LAB_144ea7f99:
      param_3 = 0;
    }
    else {
LAB_144ea7fea:
      param_3 = FUN_144b9efc0(lVar5,param_2,param_3,param_4);
    }
    break;
  case 2:
    if (0 < piVar2[4]) goto LAB_144ea7f99;
LAB_144ea8239:
    lVar5 = *(longlong *)(param_1 + 0x40);
    goto LAB_144ea7fea;
  case 3:
    param_3 = piVar2[8];
    break;
  case 10:
    iVar4 = piVar2[4];
    goto LAB_144ea7fdd;
  case 0xb:
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 != 0) {
      if (0 < piVar2[8]) {
        FUN_144b9e640(param_1,0xf);
        iVar4 = piVar2[8];
        while (0 < iVar4) {
          iVar4 = FUN_144b9eb80(*(undefined8 *)(param_1 + 0x40),
                                (longlong)piVar2[9] + *(longlong *)(piVar2 + 6),piVar2[8]);
          FUN_144b9f4c0(param_1);
          if (iVar4 < 1) {
            return iVar4;
          }
          piVar2[9] = piVar2[9] + iVar4;
          piVar2[8] = piVar2[8] - iVar4;
          FUN_144b9e640(param_1,0xf);
          iVar4 = piVar2[8];
        }
        piVar2[8] = 0;
        piVar2[9] = 0;
        param_2 = param_2 & 0xffffffff;
        goto LAB_144ea8239;
      }
      goto LAB_144ea7fea;
    }
    goto LAB_144ea7f99;
  case 0xc:
    iVar4 = FUN_144b9f250(param_4,0x75,*piVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_144b9f250(param_4,0x75,piVar2[1],1), param_3 = 1, iVar4 == 0))
    {
      param_3 = 0;
    }
    break;
  case 0xd:
    iVar4 = piVar2[8];
LAB_144ea7fdd:
    if (iVar4 != 0) {
      return iVar4;
    }
    goto switchD_144ea7f80_caseD_4;
  case 0x1d:
    FUN_144ea7c60(param_1,local_res10,0);
    if (piVar2[4] < param_3) {
      param_3 = piVar2[4];
    }
    memcpy(param_4,(void *)((longlong)piVar2[5] + *(longlong *)(piVar2 + 2)),(longlong)param_3);
    break;
  case 0x65:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_144b9e640(param_1,0xf);
      iVar4 = FUN_144b9efc0(*(undefined8 *)(param_1 + 0x40),param_2 & 0xffffffff,param_3,param_4);
      FUN_144b9f4c0(param_1);
      return iVar4;
    }
    goto LAB_144ea7f99;
  case 0x74:
    iVar4 = 0;
    param_3 = 0;
    if (0 < piVar2[4]) {
      uVar8 = (ulonglong)(uint)piVar2[4];
      pcVar7 = (char *)(*(longlong *)(piVar2 + 2) + (longlong)piVar2[5]);
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar4 + 1;
        if (cVar1 != '\n') {
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        uVar8 = uVar8 - 1;
        param_3 = iVar4;
      } while (uVar8 != 0);
    }
    break;
  case 0x75:
    iVar4 = param_3;
    if (param_4 != (int *)0x0) {
      if (*param_4 == 0) {
        iVar4 = piVar2[1];
      }
      else {
        param_3 = *piVar2;
      }
    }
    lVar5 = *(longlong *)(piVar2 + 2);
    lVar6 = *(longlong *)(piVar2 + 6);
    if (((param_3 < 0x1001) || (param_3 == *piVar2)) ||
       (lVar5 = FUN_144ea64e0(_Size,"crypto\\bio\\bf_buff.c",0x141), lVar5 != 0)) {
      if (((iVar4 < 0x1001) || (iVar4 == piVar2[1])) ||
         (lVar6 = FUN_144ea64e0(_Size,"crypto\\bio\\bf_buff.c",0x146), lVar6 != 0)) {
        if (*(longlong *)(piVar2 + 2) != lVar5) {
          FUN_144ea6530(*(longlong *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x14e);
          *(longlong *)(piVar2 + 2) = lVar5;
          piVar2[4] = 0;
          piVar2[5] = 0;
          *piVar2 = param_3;
        }
        if (*(longlong *)(piVar2 + 6) == lVar6) {
          return 1;
        }
        FUN_144ea6530(*(longlong *)(piVar2 + 6),"crypto\\bio\\bf_buff.c",0x155);
        *(longlong *)(piVar2 + 6) = lVar6;
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[1] = iVar4;
        return 1;
      }
      if (lVar5 != *(longlong *)(piVar2 + 2)) {
        FUN_144ea6530(lVar5,"crypto\\bio\\bf_buff.c",0x149);
      }
    }
LAB_144ea810b:
    FUN_144ba24f0(0x20,0x72,0x41,"crypto\\bio\\bf_buff.c",0x197);
    param_3 = 0;
    break;
  case 0x7a:
    if (*piVar2 < param_3) {
      lVar5 = FUN_144ea64e0(_Size,"crypto\\bio\\bf_buff.c",0x124);
      if (lVar5 == 0) goto LAB_144ea810b;
      FUN_144ea6530(*(undefined8 *)(piVar2 + 2),"crypto\\bio\\bf_buff.c",0x127);
      *(longlong *)(piVar2 + 2) = lVar5;
    }
    piVar2[5] = 0;
    piVar2[4] = param_3;
    memcpy(*(void **)(piVar2 + 2),param_4,_Size);
    param_3 = 1;
  }
  return param_3;
}



// FUNCTION 144ea8360 FUN_144ea8360 body=239 status=ok
// SIG undefined FUN_144ea8360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea8360(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)FUN_144ea6670(0x28,"crypto\\bio\\bf_buff.c",0x31);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = FUN_144ea64e0(0x1000,"crypto\\bio\\bf_buff.c",0x36);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      puVar1[1] = 0x1000;
      lVar2 = FUN_144ea64e0(0x1000,"crypto\\bio\\bf_buff.c",0x3c);
      *(longlong *)(puVar1 + 6) = lVar2;
      if (lVar2 == 0) {
        FUN_144ea6530(*(undefined8 *)(puVar1 + 2),"crypto\\bio\\bf_buff.c",0x3e);
        FUN_144ea6530(puVar1,"crypto\\bio\\bf_buff.c",0x3f);
        return 0;
      }
      *(undefined4 **)(param_1 + 0x38) = puVar1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 1;
    }
    FUN_144ea6530(puVar1,"crypto\\bio\\bf_buff.c",0x38);
  }
  return 0;
}



// FUNCTION 144ea8450 FUN_144ea8450 body=134 status=ok
// SIG undefined FUN_144ea8450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea8450(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  FUN_144ea6530(*(undefined8 *)(lVar1 + 8),"crypto\\bio\\bf_buff.c",0x50);
  FUN_144ea6530(*(undefined8 *)(lVar1 + 0x18),"crypto\\bio\\bf_buff.c",0x51);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x38),"crypto\\bio\\bf_buff.c",0x52);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}



// FUNCTION 144ea84e0 FUN_144ea84e0 body=38 status=ok
// SIG undefined FUN_144ea84e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea84e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9f100();
  return uVar1;
}



// FUNCTION 144ea8510 FUN_144ea8510 body=8 status=ok
// SIG undefined FUN_144ea8510(void)

undefined * FUN_144ea8510(void)

{
  return &DAT_149bdc4d0;
}



// FUNCTION 144ea8520 FUN_144ea8520 body=4 status=ok
// SIG undefined FUN_144ea8520(void)

undefined4 FUN_144ea8520(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 144ea8530 FUN_144ea8530 body=234 status=ok
// SIG undefined FUN_144ea8530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ea8530(code *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_144ea6670(0x70,"crypto\\lhash\\lhash.c",0x33);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144ea6670(0x80,"crypto\\lhash\\lhash.c");
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 3) = 8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0x10;
      if (param_2 == (code *)0x0) {
        param_2 = strcmp;
      }
      *(undefined4 *)((longlong)plVar1 + 0x24) = 8;
      plVar1[1] = (longlong)param_2;
      *(undefined4 *)(plVar1 + 5) = 0x200;
      if (param_1 == (code *)0x0) {
        param_1 = FUN_144ea8970;
      }
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x100;
      plVar1[2] = (longlong)param_1;
      return plVar1;
    }
    FUN_144ea6530(0,"crypto\\lhash\\lhash.c",0x47);
    FUN_144ea6530(plVar1,"crypto\\lhash\\lhash.c",0x48);
  }
  return (longlong *)0x0;
}



// FUNCTION 144ea8620 FUN_144ea8620 body=159 status=ok
// SIG undefined FUN_144ea8620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea8620(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar4 = 0;
    if ((int)param_1[3] != 0) {
      do {
        lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        while (lVar2 != 0) {
          lVar1 = *(longlong *)(lVar2 + 8);
          FUN_144ea6530(lVar2,"crypto\\lhash\\lhash.c",0x58);
          lVar2 = lVar1;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 3));
    }
    FUN_144ea6530(*param_1,"crypto\\lhash\\lhash.c",0x5c);
    FUN_144ea6530(param_1,"crypto\\lhash\\lhash.c",0x5d);
  }
  return;
}



// FUNCTION 144ea86c0 FUN_144ea86c0 body=201 status=ok
// SIG undefined FUN_144ea86c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea86c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  
  uVar1 = *(int *)(param_1 + 0x30) << 8;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((*(uint *)(param_1 + 0x28) <= uVar1 / *(uint *)(param_1 + 0x18)) &&
     (iVar2 = FUN_144ea8ab0(param_1,(ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x18)),
     iVar2 == 0)) {
    return 0;
  }
  plVar3 = (longlong *)FUN_144ea8ca0(param_1,param_2,local_res8);
  puVar4 = (undefined8 *)*plVar3;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_144ea64e0(0x18,"crypto\\lhash\\lhash.c");
    if (puVar4 == (undefined8 *)0x0) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      uVar5 = 0;
    }
    else {
      *puVar4 = param_2;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = local_res8[0];
      *plVar3 = (longlong)puVar4;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
  }
  else {
    uVar5 = *puVar4;
    *puVar4 = param_2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return uVar5;
}



// FUNCTION 144ea8790 FUN_144ea8790 body=141 status=ok
// SIG undefined FUN_144ea8790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea8790(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar5 = (longlong *)FUN_144ea8ca0(param_1,param_2,local_res8);
  puVar2 = (undefined8 *)*plVar5;
  if (puVar2 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    return 0;
  }
  *plVar5 = puVar2[1];
  uVar3 = *puVar2;
  FUN_144ea6530(puVar2,"crypto\\lhash\\lhash.c",0x90);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((0x10 < uVar1) &&
     (uVar4 = *(int *)(param_1 + 0x30) << 8, uVar4 / uVar1 <= *(uint *)(param_1 + 0x2c))) {
    FUN_144ea8bd0(param_1,(ulonglong)uVar4 % (ulonglong)uVar1);
  }
  return uVar3;
}



// FUNCTION 144ea8820 FUN_144ea8820 body=73 status=ok
// SIG undefined FUN_144ea8820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea8820(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar2 = (longlong *)FUN_144ea8ca0(param_1,param_2,local_res8);
  if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    return 0;
  }
  uVar1 = *(undefined8 *)*plVar2;
  LOCK();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 144ea8870 FUN_144ea8870 body=109 status=ok
// SIG undefined FUN_144ea8870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea8870(longlong *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 144ea88e0 FUN_144ea88e0 body=133 status=ok
// SIG undefined FUN_144ea88e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea88e0(longlong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2,param_3);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 144ea8970 FUN_144ea8970 body=109 status=ok
// SIG undefined FUN_144ea8970(void)

ulonglong FUN_144ea8970(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (bVar3 = *param_1, bVar3 != 0)) {
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar4 = (int)(char)bVar3 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar1 = ((byte)(uVar4 >> 2) ^ bVar3) & 0xf;
      bVar3 = *param_1;
      uVar4 = ((uint)(uVar2 >> (0x20 - bVar1 & 0x3f)) | (int)uVar2 << bVar1) ^ uVar4 * uVar4;
      uVar2 = (ulonglong)uVar4;
    } while (bVar3 != 0);
    uVar2 = (ulonglong)(uVar4 ^ uVar4 >> 0x10);
  }
  return uVar2;
}



// FUNCTION 144ea89e0 FUN_144ea89e0 body=12 status=ok
// SIG undefined FUN_144ea89e0(void)

undefined4 FUN_144ea89e0(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x30);
  }
  return 0;
}



// FUNCTION 144ea89f0 FUN_144ea89f0 body=4 status=ok
// SIG undefined FUN_144ea89f0(void)

undefined4 FUN_144ea89f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 144ea8a00 FUN_144ea8a00 body=4 status=ok
// SIG undefined FUN_144ea8a00(void)

void FUN_144ea8a00(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 144ea8a10 FUN_144ea8a10 body=160 status=ok
// SIG undefined FUN_144ea8a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ea8a10(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    uVar5 = 0x100;
    do {
      uVar3 = FUN_144ecfdf0((int)cVar1);
      uVar6 = uVar3 | uVar5;
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 0x100;
      bVar2 = ((byte)(uVar6 >> 2) ^ (byte)uVar3) & 0xf;
      cVar1 = *param_1;
      uVar3 = ((uint)(uVar4 >> (0x20 - bVar2 & 0x3f)) | (int)uVar4 << bVar2) ^ uVar6 * uVar6;
      uVar4 = (ulonglong)uVar3;
    } while (cVar1 != '\0');
    return uVar3 >> 0x10 ^ uVar3;
  }
  return 0;
}



// FUNCTION 144ea8ab0 FUN_144ea8ab0 body=273 status=ok
// SIG undefined FUN_144ea8ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea8ab0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)((longlong)param_1 + 0x24);
  uVar4 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar2 + 1 < uVar3) {
    *(uint *)(param_1 + 4) = uVar2 + 1;
  }
  else {
    lVar5 = FUN_144ea6570(*param_1,(ulonglong)(uVar4 * 2) << 3,"crypto\\lhash\\lhash.c",0xe1);
    if (lVar5 == 0) {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      return 0;
    }
    *param_1 = lVar5;
    memset((void *)(lVar5 + (ulonglong)uVar4 * 8),0,(ulonglong)uVar4 << 3);
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    *(uint *)((longlong)param_1 + 0x24) = uVar4;
    *(uint *)((longlong)param_1 + 0x1c) = uVar4 * 2;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  lVar5 = *param_1;
  uVar6 = (ulonglong)(uVar3 + uVar2);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
  plVar1 = (longlong *)(lVar5 + uVar6 * 8);
  plVar7 = (longlong *)(lVar5 + (ulonglong)uVar2 * 8);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)uVar2 * 8);
  while (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x10) % uVar4 == uVar2) {
      plVar7 = (longlong *)(*plVar7 + 8);
    }
    else {
      *plVar7 = *(longlong *)(*plVar7 + 8);
      *(longlong *)(lVar5 + 8) = *plVar1;
      *plVar1 = lVar5;
    }
    lVar5 = *plVar7;
  }
  return 1;
}



// FUNCTION 144ea8bd0 FUN_144ea8bd0 body=205 status=ok
// SIG undefined FUN_144ea8bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea8bd0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)((int)param_1[4] + *(int *)((longlong)param_1 + 0x24) + -1);
  uVar1 = *(undefined8 *)(*param_1 + uVar5 * 8);
  *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
  iVar3 = (int)param_1[4];
  if (iVar3 == 0) {
    lVar4 = FUN_144ea6570(*param_1,*(int *)((longlong)param_1 + 0x24) << 3,"crypto\\lhash\\lhash.c",
                          0x10c);
    if (lVar4 == 0) {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      return;
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
    *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) >> 1;
    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) >> 1;
    iVar3 = *(int *)((longlong)param_1 + 0x24);
    *param_1 = lVar4;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  iVar3 = iVar3 + -1;
  *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
  *(int *)(param_1 + 4) = iVar3;
  lVar4 = *(longlong *)(*param_1 + (longlong)iVar3 * 8);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar4 + 8);
      lVar2 = *(longlong *)(lVar4 + 8);
    }
    *(undefined8 *)(lVar4 + 8) = uVar1;
    return;
  }
  *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar1;
  return;
}



// FUNCTION 144ea8ca0 FUN_144ea8ca0 body=191 status=ok
// SIG undefined FUN_144ea8ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ea8ca0(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  LOCK();
  *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
  UNLOCK();
  *param_3 = uVar4;
  uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x24);
  if (uVar6 < *(uint *)(param_1 + 4)) {
    uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x1c);
  }
  pcVar2 = (code *)param_1[1];
  puVar3 = *(undefined8 **)(*param_1 + (longlong)(int)uVar6 * 8);
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar6 * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return puVar1;
    }
    LOCK();
    *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
    UNLOCK();
    if (*(uint *)(puVar3 + 2) == uVar4) {
      LOCK();
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      UNLOCK();
      iVar5 = (*pcVar2)(*puVar3,param_2);
      if (iVar5 == 0) {
        return puVar1;
      }
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}



// FUNCTION 144ea8d60 FUN_144ea8d60 body=184 status=ok
// SIG undefined FUN_144ea8d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** FUN_144ea8d60(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ea8d6a;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_149bde3d0 + (longlong)(int)param_1 * 0x28) != 0)) {
      return &PTR_s_UNDEF_149bde3c0 + (longlong)(int)param_1 * 5;
    }
    uVar2 = 0xe3;
  }
  else if (DAT_14c796998 == 0) {
    uVar2 = 0xe8;
  }
  else {
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = FUN_144ea8820(DAT_14c796998,local_48);
    if (lVar1 != 0) {
      return *(undefined ***)(lVar1 + 8);
    }
    uVar2 = 0xf2;
  }
  FUN_144ba24f0(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined **)0x0;
}



// FUNCTION 144ea8e20 FUN_144ea8e20 body=179 status=ok
// SIG undefined FUN_144ea8e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ea8e20(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ea8e2a;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_149bde3d0 + (longlong)(int)param_1 * 0x28) != 0)) {
      return (&PTR_s_undefined_149bde3c8)[(longlong)(int)param_1 * 5];
    }
    uVar2 = 0x11a;
  }
  else {
    if (DAT_14c796998 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = FUN_144ea8820(DAT_14c796998,local_48);
    if (lVar1 != 0) {
      return *(undefined **)(*(longlong *)(lVar1 + 8) + 8);
    }
    uVar2 = 0x128;
  }
  FUN_144ba24f0(8,0x66,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined *)0x0;
}



// FUNCTION 144ea8ee0 FUN_144ea8ee0 body=177 status=ok
// SIG undefined FUN_144ea8ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ea8ee0(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ea8eea;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_149bde3d0 + (longlong)(int)param_1 * 0x28) != 0)) {
      return (&PTR_s_UNDEF_149bde3c0)[(longlong)(int)param_1 * 5];
    }
    uVar2 = 0xff;
  }
  else {
    if (DAT_14c796998 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = FUN_144ea8820(DAT_14c796998,local_48);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x10d;
  }
  FUN_144ba24f0(8,0x68,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined *)0x0;
}



// FUNCTION 144ea8fa0 FUN_144ea8fa0 body=306 status=ok
// SIG undefined FUN_144ea8fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ea8fa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 local_38 [2];
  longlong local_30;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    iVar5 = 0;
    if (DAT_14c796998 != 0) {
      local_38[0] = 0;
      local_30 = param_1;
      lVar4 = FUN_144ea8820(DAT_14c796998,local_38);
      if (lVar4 != 0) {
        return *(int *)(*(longlong *)(lVar4 + 8) + 0x10);
      }
    }
    iVar6 = 0x42f;
    iVar1 = *(int *)(param_1 + 0x14);
    do {
      iVar2 = (iVar6 + iVar5) / 2;
      puVar7 = (uint *)(&DAT_149bec3a0 + iVar2 * 4);
      iVar3 = iVar1 - *(int *)(&DAT_149bde3d4 + (ulonglong)*puVar7 * 0x28);
      if (iVar3 == 0) {
        if (iVar1 == 0) goto LAB_144ea9094;
        iVar3 = memcmp(*(void **)(param_1 + 0x18),
                       *(void **)(&DAT_149bde3d8 + (ulonglong)*puVar7 * 0x28),(longlong)iVar1);
      }
      if (-1 < iVar3) {
        if (iVar3 < 1) break;
        iVar5 = iVar2 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
    } while (iVar5 < iVar6);
    if (iVar3 == 0) {
LAB_144ea9094:
      if (puVar7 != (uint *)0x0) {
        return *(int *)(&DAT_149bde3d0 + (ulonglong)*puVar7 * 0x28);
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}



// FUNCTION 144ea90e0 FUN_144ea90e0 body=330 status=ok
// SIG undefined FUN_144ea90e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea90e0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18;
  longlong local_res20;
  
  if (param_2 == 0) {
    iVar1 = FUN_144ea96a0();
    if (iVar1 == 0) {
      iVar1 = FUN_144ea9580(param_1);
      if (iVar1 == 0) goto LAB_144ea9118;
    }
    uVar3 = FUN_144ea8d60(iVar1);
    return uVar3;
  }
LAB_144ea9118:
  iVar1 = FUN_144ed0b50(0,0,param_1,0xffffffff);
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = FUN_144f041d0(0,iVar1,6);
  if (iVar2 < 0) {
    return 0;
  }
  lVar4 = FUN_144ea64e0((longlong)iVar2,"crypto\\objects\\obj_dat.c",0x17c);
  if (lVar4 == 0) {
    FUN_144ba24f0(8,0x6c,0x41,"crypto\\objects\\obj_dat.c",0x17d);
    uVar3 = 0;
  }
  else {
    local_res18 = lVar4;
    FUN_144f04080(&local_res18,0,iVar1,6,0);
    FUN_144ed0b50(local_res18,iVar1,param_1,0xffffffff);
    local_res20 = lVar4;
    uVar3 = FUN_144ed0910(0,&local_res20,iVar2);
    FUN_144ea6530(lVar4,"crypto\\objects\\obj_dat.c",0x189);
  }
  return uVar3;
}



// FUNCTION 144ea9230 FUN_144ea9230 body=836 status=ok
// SIG undefined FUN_144ea9230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea9230(char *param_1,int param_2,longlong param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar13 = (ulonglong)param_2;
  local_78 = 0;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
    if (((param_4 == 0) && (iVar3 = FUN_144ea8fa0(), iVar3 != 0)) &&
       ((lVar4 = FUN_144ea8e20(iVar3), lVar4 != 0 || (lVar4 = FUN_144ea8ee0(), lVar4 != 0)))) {
      if (param_1 != (char *)0x0) {
        FUN_144ea68a0(param_1,lVar4,uVar13);
      }
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(lVar4 + lVar11) != '\0');
    }
    else {
      iVar3 = *(int *)(param_3 + 0x14);
      lVar4 = 0;
      pbVar12 = *(byte **)(param_3 + 0x18);
      local_70 = 1;
      if (0 < iVar3) {
LAB_144ea9320:
        uVar10 = 0;
        bVar2 = false;
        local_74 = iVar3;
LAB_144ea9330:
        do {
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          local_74 = local_74 + -1;
          if ((local_74 == 0) && ((char)bVar1 < '\0')) break;
          if (bVar2) {
            iVar3 = FUN_14526b1f0(lVar4,bVar1 & 0x7f);
            if (iVar3 == 0) break;
          }
          else {
            uVar10 = (ulonglong)((uint)uVar10 | bVar1 & 0x7f);
          }
          uVar9 = (uint)uVar10;
          if (-1 < (char)bVar1) goto LAB_144ea93d8;
          if (!bVar2) {
            if (uVar9 < 0x2000000) {
              uVar10 = (ulonglong)(uVar9 << 7);
              goto LAB_144ea9330;
            }
            if (((lVar4 == 0) && (lVar4 = FUN_144ba0570(), lVar4 == 0)) ||
               (iVar3 = FUN_144ba0bb0(lVar4,uVar10), iVar3 == 0)) break;
            bVar2 = true;
          }
          iVar3 = FUN_144eefdb0(lVar4,lVar4,7);
          if (iVar3 == 0) break;
        } while( true );
      }
LAB_144ea9541:
      FUN_144ba0cd0(lVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
LAB_144ea93d8:
  if (local_70 != 0) {
    local_70 = 0;
    if (uVar9 < 0x50) {
      uVar6 = uVar10 / 0x28;
      uVar10 = (ulonglong)(uVar9 + (int)uVar6 * -0x28);
    }
    else {
      uVar6 = 2;
      if (bVar2) {
        iVar3 = FUN_14526b300(lVar4,0x50);
        if (iVar3 == 0) goto LAB_144ea9541;
      }
      else {
        uVar10 = (ulonglong)(uVar9 - 0x50);
      }
    }
    if ((param_1 != (char *)0x0) && (1 < (int)uVar13)) {
      *param_1 = (char)uVar6 + '0';
      param_1 = param_1 + 1;
      uVar13 = (ulonglong)((int)uVar13 - 1);
      *param_1 = '\0';
    }
    local_78 = local_78 + 1;
  }
  iVar3 = (int)uVar13;
  if (bVar2) {
    lVar11 = FUN_14526b670(lVar4);
    if (lVar11 == 0) goto LAB_144ea9541;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar11 + lVar7) != '\0');
    iVar5 = (int)lVar7;
    if (param_1 != (char *)0x0) {
      if (1 < iVar3) {
        *param_1 = '.';
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
        *param_1 = '\0';
      }
      FUN_144ea68a0(param_1,lVar11,(longlong)iVar3);
      if (iVar3 < iVar5) {
        param_1 = param_1 + iVar3;
        uVar13 = 0;
      }
      else {
        param_1 = param_1 + iVar5;
        uVar13 = (ulonglong)(uint)(iVar3 - iVar5);
      }
    }
    local_78 = local_78 + 1 + iVar5;
    FUN_144ea6530(lVar11,"crypto\\objects\\obj_dat.c",0x1f8);
  }
  else {
    FUN_144ec7760(local_68,0x1a,&DAT_149bf559c,uVar10);
    lVar11 = -1;
    do {
      lVar8 = lVar11 + 1;
      lVar7 = lVar11 + 1;
      lVar11 = lVar8;
    } while (local_68[lVar7] != '\0');
    iVar5 = (int)lVar8;
    if ((param_1 != (char *)0x0) && (0 < iVar3)) {
      FUN_144ea68a0(param_1,local_68,(longlong)iVar3);
      if (iVar3 < iVar5) {
        param_1 = param_1 + iVar3;
        uVar13 = 0;
      }
      else {
        param_1 = param_1 + iVar5;
        uVar13 = (ulonglong)(uint)(iVar3 - iVar5);
      }
    }
    local_78 = local_78 + iVar5;
  }
  iVar3 = local_74;
  if (local_74 < 1) goto LAB_144ea9541;
  goto LAB_144ea9320;
}



// FUNCTION 144ea9580 FUN_144ea9580 body=285 status=ok
// SIG undefined FUN_144ea9580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ea9580(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [8];
  byte *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ea958c;
  if (DAT_14c796998 != 0) {
    local_40 = local_38;
    local_48[0] = 2;
    local_30 = param_1;
    lVar4 = FUN_144ea8820(DAT_14c796998,local_48);
    param_1 = local_30;
    if (lVar4 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x10);
    }
  }
  iVar7 = 0;
  iVar8 = 0x4a2;
  do {
    iVar2 = (iVar8 + iVar7) / 2;
    puVar6 = (uint *)(&DAT_149beb110 + iVar2 * 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar5;
      if (bVar1 != pbVar5[(longlong)(&PTR_s_undefined_149bde3c8)[(ulonglong)*puVar6 * 5] -
                          (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar5[(longlong)
                                       (&PTR_s_undefined_149bde3c8)[(ulonglong)*puVar6 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_144ea9649;
      }
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_144ea9649:
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < 1) break;
      iVar7 = iVar2 + 1;
      iVar2 = iVar8;
    }
    iVar8 = iVar2;
  } while (iVar7 < iVar8);
  if ((uVar3 == 0) && (puVar6 != (uint *)0x0)) {
    return *(undefined4 *)(&DAT_149bde3d0 + (ulonglong)*puVar6 * 0x28);
  }
  return 0;
}



// FUNCTION 144ea96a0 FUN_144ea96a0 body=285 status=ok
// SIG undefined FUN_144ea96a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ea96a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48 [2];
  byte **local_40;
  byte *local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ea96ac;
  if (DAT_14c796998 != 0) {
    local_40 = local_38;
    local_48[0] = 1;
    local_38[0] = param_1;
    lVar4 = FUN_144ea8820(DAT_14c796998,local_48);
    param_1 = local_38[0];
    if (lVar4 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x10);
    }
  }
  iVar7 = 0;
  iVar8 = 0x4a2;
  do {
    iVar2 = (iVar8 + iVar7) / 2;
    puVar6 = (uint *)(&DAT_149be9e80 + iVar2 * 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar5;
      if (bVar1 != pbVar5[(longlong)(&PTR_s_UNDEF_149bde3c0)[(ulonglong)*puVar6 * 5] -
                          (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar5[(longlong)(&PTR_s_UNDEF_149bde3c0)[(ulonglong)*puVar6 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_144ea9769;
      }
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_144ea9769:
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < 1) break;
      iVar7 = iVar2 + 1;
      iVar2 = iVar8;
    }
    iVar8 = iVar2;
  } while (iVar7 < iVar8);
  if ((uVar3 == 0) && (puVar6 != (uint *)0x0)) {
    return *(undefined4 *)(&DAT_149bde3d0 + (ulonglong)*puVar6 * 0x28);
  }
  return 0;
}



// FUNCTION 144ea97c0 FUN_144ea97c0 body=41 status=ok
// SIG undefined FUN_144ea97c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea97c0(void)

{
  FUN_144ea97f0();
  return;
}



// FUNCTION 144ea97f0 FUN_144ea97f0 body=245 status=ok
// SIG undefined FUN_144ea97f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ea97f0(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5,
                      byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = 0;
  lVar5 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (param_3 + iVar4) / 2;
      lVar5 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar5);
      iVar3 = iVar1;
      if (-1 < iVar2) {
        if (iVar2 < 1) break;
        iVar4 = iVar1 + 1;
        iVar3 = param_3;
      }
      param_3 = iVar3;
    } while (iVar4 < param_3);
    if (iVar2 != 0) {
      if ((param_6 & 1) != 0) {
        return lVar5;
      }
      return 0;
    }
  }
  if ((param_6 & 2) != 0) {
    if (0 < iVar1) {
      iVar4 = (iVar1 + -1) * param_4;
      do {
        iVar3 = (*param_5)(param_1,iVar4 + param_2);
        if (iVar3 != 0) break;
        iVar1 = iVar1 + -1;
        iVar4 = iVar4 - param_4;
      } while (0 < iVar1);
    }
    lVar5 = iVar1 * param_4 + param_2;
  }
  return lVar5;
}



// FUNCTION 144ea98f0 FUN_144ea98f0 body=463 status=ok
// SIG undefined FUN_144ea98f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea98f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ea9900;
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  if ((DAT_14c796998 == 0) &&
     (DAT_14c796998 = FUN_144ea8530(FUN_144ea9c80,FUN_144ea9d40), DAT_14c796998 == 0))
  goto LAB_144ea9ab2;
  plVar3 = (longlong *)FUN_14526bd70(param_1);
  if (plVar3 != (longlong *)0x0) {
    local_38[3] = FUN_144ea64e0(0x10,"crypto\\objects\\obj_dat.c",0xb9);
    if (local_38[3] != 0) {
      if ((*(int *)((longlong)plVar3 + 0x14) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        local_38[0] = FUN_144ea64e0(0x10,"crypto\\objects\\obj_dat.c",0xbc);
        if (local_38[0] == 0) goto LAB_144ea9a63;
      }
      if (*plVar3 != 0) {
        local_38[1] = FUN_144ea64e0(0x10,"crypto\\objects\\obj_dat.c",0xbf);
        if (local_38[1] == 0) goto LAB_144ea9a63;
      }
      if (plVar3[1] != 0) {
        local_38[2] = FUN_144ea64e0(0x10,"crypto\\objects\\obj_dat.c",0xc2);
        if (local_38[2] == 0) goto LAB_144ea9a63;
      }
      plVar7 = local_38;
      do {
        lVar2 = DAT_14c796998;
        piVar1 = (int *)*plVar7;
        if (piVar1 != (int *)0x0) {
          *piVar1 = (int)uVar6;
          *(longlong **)(piVar1 + 2) = plVar3;
          uVar4 = FUN_144ea86c0(lVar2);
          FUN_144ea6530(uVar4,"crypto\\objects\\obj_dat.c",0xcb);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        plVar7 = plVar7 + 1;
      } while ((int)uVar5 < 4);
      *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffff2;
      goto LAB_144ea9ab2;
    }
LAB_144ea9a63:
    local_48 = 0xd4;
    FUN_144ba24f0(8,0x69,0x41,"crypto\\objects\\obj_dat.c");
  }
  do {
    FUN_144ea6530(local_38[uVar6],"crypto\\objects\\obj_dat.c",0xd7);
    uVar6 = uVar6 + 1;
  } while ((longlong)uVar6 < 4);
  FUN_144ed0860(plVar3);
LAB_144ea9ab2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[4] ^ (ulonglong)auStack_68);
}



// FUNCTION 144ea9ad0 FUN_144ea9ad0 body=262 status=ok
// SIG undefined FUN_144ea9ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ea9ad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ea9aea;
  uVar2 = 0;
  if (((param_2 == 0) || (iVar1 = FUN_144ea96a0(param_2), iVar1 == 0)) &&
     ((param_3 == 0 || (iVar1 = FUN_144ea9580(param_3), iVar1 == 0)))) {
    plVar3 = (longlong *)FUN_144ea90e0(param_1,1);
    if (plVar3 != (longlong *)0x0) {
      iVar1 = FUN_144ea8fa0(plVar3);
      if (iVar1 == 0) {
        *(int *)(plVar3 + 2) = DAT_14c70b050;
        DAT_14c70b050 = DAT_14c70b050 + 1;
        *plVar3 = param_2;
        plVar3[1] = param_3;
        uVar2 = FUN_144ea98f0(plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
      }
      else {
        FUN_144ba24f0(8,100,0x66,"crypto\\objects\\obj_dat.c",0x2c6,uVar4);
      }
      FUN_144ed0860(plVar3);
      return uVar2;
    }
  }
  else {
    FUN_144ba24f0(8,100,0x66,"crypto\\objects\\obj_dat.c",699,uVar4);
  }
  return 0;
}



// FUNCTION 144ea9be0 FUN_144ea9be0 body=13 status=ok
// SIG undefined FUN_144ea9be0(void)

longlong FUN_144ea9be0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return (longlong)*(int *)(param_1 + 0x14);
}



// FUNCTION 144ea9bf0 FUN_144ea9bf0 body=13 status=ok
// SIG undefined FUN_144ea9bf0(void)

undefined8 FUN_144ea9bf0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144ea9c00 FUN_144ea9c00 body=117 status=ok
// SIG undefined FUN_144ea9c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea9c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_14c796998 != 0) {
    FUN_144ea8a00(DAT_14c796998,0,param_3,param_4,0x144ea9c0a);
    FUN_144ea8870(DAT_14c796998,&LAB_144ea9e30);
    FUN_144ea8870(DAT_14c796998,&LAB_144ea9e50);
    FUN_144ea8870(DAT_14c796998,FUN_144ea9e60);
    FUN_144ea8620(DAT_14c796998);
    DAT_14c796998 = 0;
  }
  return;
}



// FUNCTION 144ea9c80 FUN_144ea9c80 body=186 status=ok
// SIG undefined FUN_144ea9c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ea9c80(int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar1 = *(uint *)((longlong)puVar2 + 0x14);
    uVar3 = uVar1 << 0x14;
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      pbVar5 = (byte *)puVar2[3];
      iVar4 = 0;
      do {
        uVar3 = uVar3 ^ (uint)*pbVar5 << ((char)iVar4 + (char)(iVar4 / 0x18) * -0x18 & 0x1fU);
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 + 3;
      } while (uVar6 != 0);
    }
  }
  else if (iVar4 == 1) {
    uVar3 = FUN_144ea8970(*puVar2);
  }
  else if (iVar4 == 2) {
    uVar3 = FUN_144ea8970(puVar2[1]);
  }
  else {
    if (iVar4 != 3) {
      return 0;
    }
    uVar3 = *(uint *)(puVar2 + 2);
  }
  return *param_1 << 0x1e | uVar3 & 0x3fffffff;
}



// FUNCTION 144ea9d40 FUN_144ea9d40 body=226 status=ok
// SIG undefined FUN_144ea9d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ea9d40(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  uVar5 = iVar2 - *param_2;
  if (uVar5 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    plVar4 = *(longlong **)(param_2 + 2);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pbVar6 = (byte *)*puVar3;
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (*plVar4 == 0) {
          return 1;
        }
        lVar7 = *plVar4 - (longlong)pbVar6;
        while( true ) {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) break;
          pbVar6 = pbVar6 + 1;
          if (bVar1 == 0) {
            return 0;
          }
        }
LAB_144ea9df6:
        return -(uint)bVar8 | 1;
      }
      if (iVar2 == 2) {
        pbVar6 = (byte *)puVar3[1];
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (plVar4[1] == 0) {
          return 1;
        }
        lVar7 = plVar4[1] - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) goto LAB_144ea9df6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      else if (iVar2 == 3) {
        return *(int *)(puVar3 + 2) - (int)plVar4[2];
      }
      return 0;
    }
    uVar5 = *(int *)((longlong)puVar3 + 0x14) - *(int *)((longlong)plVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = memcmp((void *)puVar3[3],(void *)plVar4[3],(longlong)*(int *)((longlong)puVar3 + 0x14)
                    );
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 144ea9e60 FUN_144ea9e60 body=63 status=ok
// SIG undefined FUN_144ea9e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ea9e60(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_144ed0860(*(undefined8 *)(param_1 + 8));
  }
  FUN_144ea6530(param_1,"crypto\\objects\\obj_dat.c",0x96);
  return;
}



// FUNCTION 144ea9ea0 FUN_144ea9ea0 body=144 status=ok
// SIG undefined FUN_144ea9ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ea9ea0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ea9eac;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 != 2) {
    return 0;
  }
  if (param_4 == 3) {
    uVar3 = FUN_144ecfdb0();
    lVar4 = FUN_144ecf180(uVar3);
    if (lVar4 == 0) {
      lVar4 = FUN_144ecfd90();
    }
    uVar2 = FUN_144eaa4e0(uVar1,lVar4,1);
    if (uVar2 == 0) {
      FUN_144ba24f0(0xb,0x66,0x67,"crypto\\x509\\by_dir.c",0x54,uVar6);
    }
    return (ulonglong)uVar2;
  }
  uVar5 = FUN_144eaa4e0(uVar1,param_3,param_4);
  return uVar5;
}



// FUNCTION 144ea9f30 FUN_144ea9f30 body=235 status=ok
// SIG undefined FUN_144ea9f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ea9f30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ea9f40;
  plVar1 = (longlong *)FUN_144ea64e0(0x18,"crypto\\x509\\by_dir.c",0x5f);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",0x62,uVar4);
    return 0;
  }
  lVar2 = FUN_144ea6fc0();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x67;
  }
  else {
    plVar1[1] = 0;
    lVar2 = FUN_144e985a0();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *(longlong **)(param_1 + 0x10) = plVar1;
      return 1;
    }
    FUN_144ea7070(*plVar1);
    uVar3 = 0x6e;
  }
  FUN_144ba24f0(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",uVar3,uVar4);
  FUN_144ea6530(plVar1,"crypto\\x509\\by_dir.c",0x75);
  return 0;
}



// FUNCTION 144eaa020 FUN_144eaa020 body=78 status=ok
// SIG undefined FUN_144eaa020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaa020(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  FUN_144babe00(puVar1[1],FUN_144eaa780);
  FUN_144ea7070(*puVar1);
  FUN_144e98660(puVar1[2]);
  FUN_144ea6530(puVar1,"crypto\\x509\\by_dir.c",0x96);
  return;
}



// FUNCTION 144eaa070 FUN_144eaa070 body=1101 status=ok
// SIG undefined FUN_144eaa070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaa070(longlong param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  wchar_t *local_238;
  uint local_230;
  undefined4 local_228;
  longlong local_220;
  int local_218;
  undefined4 local_210 [2];
  wchar_t *local_208;
  longlong local_200;
  undefined4 *local_1f8;
  int local_1f0 [2];
  undefined1 *local_1e8;
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong local_190;
  undefined1 local_88 [48];
  ulonglong local_58;
  ulonglong uVar7;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_268;
  iVar5 = 0;
  lVar15 = 0;
  local_200 = param_1;
  local_1f8 = param_4;
  if (param_3 == 0) goto LAB_144eaa4ad;
  local_1f0[0] = param_2;
  if (param_2 == 1) {
    local_208 = L"";
    local_190 = param_3;
LAB_144eaa130:
    local_1e8 = local_1d8;
    lVar15 = FUN_144ea6fc0();
    if (lVar15 == 0) {
      local_248 = 0xf4;
      uVar16 = 7;
      goto LAB_144eaa476;
    }
    lVar14 = *(longlong *)(param_1 + 0x10);
    local_220 = lVar14;
    uVar16 = FUN_144bb5540(param_3);
    local_218 = 0;
    local_228 = uVar16;
    iVar3 = FUN_144babbf0(*(undefined8 *)(lVar14 + 8));
    if (0 < iVar3) {
      do {
        puVar6 = (undefined8 *)FUN_144babc00(*(undefined8 *)(lVar14 + 8),iVar5);
        pcVar12 = (char *)*puVar6;
        uVar13 = 0;
        cVar1 = *pcVar12;
        uVar9 = 0;
        uVar4 = uVar13;
        uVar7 = uVar9;
        while ((cVar1 != '\0' && (uVar4 = (uint)uVar7, uVar4 < 0x80000000))) {
          pcVar12 = pcVar12 + 1;
          uVar4 = uVar4 + 1;
          cVar1 = *pcVar12;
          uVar7 = (ulonglong)uVar4;
        }
        lVar8 = FUN_144ea70e0(lVar15,(longlong)(int)((uVar4 & 0x7fffffff) + 0x11));
        if (lVar8 == 0) {
          local_248 = 0x103;
          uVar16 = 0x41;
          goto LAB_144eaa476;
        }
        if ((param_2 == 2) && (puVar6[2] != 0)) {
          local_210[0] = uVar16;
          FUN_144e98600(*(undefined8 *)(lVar14 + 0x10));
          iVar5 = FUN_144bac1a0(puVar6[2],local_210);
          if (iVar5 < 0) {
            FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
            pwVar2 = local_208;
          }
          else {
            uVar9 = FUN_144babc00(puVar6[2],iVar5);
            uVar13 = *(uint *)(uVar9 + 4);
            FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
            pwVar2 = local_208;
          }
        }
        else {
          uVar9 = 0;
          pwVar2 = local_208;
        }
        while( true ) {
          local_248 = 0x2f;
          local_240 = uVar16;
          local_238 = pwVar2;
          local_230 = uVar13;
          FUN_144ec7760(*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),"%s%c%08lx.%s%d",
                        *puVar6);
          iVar5 = _stat64i32(*(undefined8 *)(lVar15 + 8),local_88);
          if (iVar5 < 0) break;
          if (param_2 == 1) {
            iVar5 = FUN_144eaa8b0(param_1,*(undefined8 *)(lVar15 + 8),*(undefined4 *)(puVar6 + 1));
LAB_144eaa2b1:
            if (iVar5 == 0) break;
          }
          else if (param_2 == 2) {
            iVar5 = FUN_144eaaa60(param_1,*(undefined8 *)(lVar15 + 8),*(undefined4 *)(puVar6 + 1));
            goto LAB_144eaa2b1;
          }
          uVar13 = uVar13 + 1;
        }
        FUN_144bb4230(*(undefined8 *)(param_1 + 0x18));
        uVar16 = FUN_144bac1a0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_1f0);
        puVar10 = (undefined4 *)
                  FUN_144babc00(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar16);
        FUN_144bb4250(*(undefined8 *)(param_1 + 0x18));
        lVar14 = local_220;
        if ((param_2 == 2) && (0 < (int)uVar13)) {
          FUN_144e98620(*(undefined8 *)(local_220 + 0x10));
          if (uVar9 == 0) {
            local_210[0] = local_228;
            uVar16 = FUN_144bac1a0(puVar6[2],local_210);
            uVar9 = FUN_144babc00(puVar6[2],uVar16);
            if (uVar9 == 0) {
              puVar11 = (undefined4 *)FUN_144ea64e0(8,"crypto\\x509\\by_dir.c",0x161);
              if (puVar11 == (undefined4 *)0x0) {
                FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
                uVar16 = 0x41;
                local_248 = 0x164;
              }
              else {
                *puVar11 = local_228;
                puVar11[1] = uVar13;
                iVar5 = FUN_144bac1c0(puVar6[2],puVar11);
                if (iVar5 != 0) {
                  FUN_144bac390(puVar6[2]);
                  param_1 = local_200;
                  lVar14 = local_220;
                  FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
                  goto LAB_144eaa3be;
                }
                FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
                FUN_144ea6530(puVar11,"crypto\\x509\\by_dir.c",0x16c);
                uVar16 = 0x41;
                local_248 = 0x16d;
              }
              goto LAB_144eaa476;
            }
          }
          lVar14 = local_220;
          if (*(int *)(uVar9 + 4) < (int)uVar13) {
            *(uint *)(uVar9 + 4) = uVar13;
          }
          FUN_144e98640(*(undefined8 *)(local_220 + 0x10));
        }
LAB_144eaa3be:
        if (puVar10 != (undefined4 *)0x0) {
          *local_1f8 = *puVar10;
          *(undefined8 *)(local_1f8 + 2) = *(undefined8 *)(puVar10 + 2);
          FUN_144ba26f0();
          break;
        }
        iVar5 = local_218 + 1;
        local_218 = iVar5;
        iVar3 = FUN_144babbf0(*(undefined8 *)(lVar14 + 8));
        uVar16 = local_228;
      } while (iVar5 < iVar3);
    }
  }
  else {
    if (param_2 == 2) {
      local_208 = L"rInvalid resolution in tiff: zero or negative.";
      local_1c0 = param_3;
      goto LAB_144eaa130;
    }
    local_248 = 0xef;
    uVar16 = 0x70;
LAB_144eaa476:
    FUN_144ba24f0(0xb,0x67,uVar16,"crypto\\x509\\by_dir.c");
  }
  FUN_144ea7070(lVar15);
LAB_144eaa4ad:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_268);
}



// FUNCTION 144eaa4d0 FUN_144eaa4d0 body=8 status=ok
// SIG undefined FUN_144eaa4d0(void)

undefined ** FUN_144eaa4d0(void)

{
  return &PTR_s_Load_certs_from_files_in_a_direc_14c70b060;
}



// FUNCTION 144eaa4e0 FUN_144eaa4e0 body=580 status=ok
// SIG undefined FUN_144eaa4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaa4e0(longlong param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  size_t _MaxCount;
  char *_Str2;
  char *pcVar9;
  undefined4 uVar10;
  
  if ((param_2 == (char *)0x0) || (_Str2 = param_2, *param_2 == '\0')) {
    FUN_144ba24f0(0xb,100,0x71,"crypto\\x509\\by_dir.c",0xa0,0x144eaa4f0);
    return 0;
  }
  do {
    if ((*param_2 == ';') || (pcVar9 = _Str2, *param_2 == '\0')) {
      pcVar9 = param_2 + 1;
      _MaxCount = (longlong)param_2 - (longlong)_Str2;
      if (_MaxCount != 0) {
        iVar8 = 0;
        iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
        if (0 < iVar2) {
          do {
            puVar4 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 8),iVar8);
            _Str1 = (char *)*puVar4;
            cVar1 = *_Str1;
            pcVar7 = _Str1;
            for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            if (((uVar3 & 0x7fffffff) == _MaxCount) &&
               (iVar2 = strncmp(_Str1,_Str2,_MaxCount), iVar2 == 0)) break;
            iVar8 = iVar8 + 1;
            iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
          } while (iVar8 < iVar2);
        }
        iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
        if (iVar2 <= iVar8) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar5 = FUN_144babca0();
            *(longlong *)(param_1 + 8) = lVar5;
            if (lVar5 == 0) {
              uVar10 = 0xb9;
              goto LAB_144eaa6de;
            }
          }
          plVar6 = (longlong *)FUN_144ea64e0(0x18,"crypto\\x509\\by_dir.c",0xbd);
          if (plVar6 == (longlong *)0x0) {
            uVar10 = 0xbf;
LAB_144eaa6de:
            FUN_144ba24f0(0xb,100,0x41,"crypto\\x509\\by_dir.c",uVar10);
            return 0;
          }
          *(undefined4 *)(plVar6 + 1) = param_3;
          lVar5 = FUN_144babc60(&LAB_144eaa760);
          plVar6[2] = lVar5;
          lVar5 = FUN_144ea6e30(_Str2,_MaxCount,"crypto\\x509\\by_dir.c",0xc4);
          *plVar6 = lVar5;
          if ((lVar5 == 0) || (plVar6[2] == 0)) {
            FUN_144ea6530(lVar5,"crypto\\x509\\by_dir.c",0x8a);
            FUN_144babe00(plVar6[2],FUN_144eaa730);
            FUN_144ea6530(plVar6,"crypto\\x509\\by_dir.c",0x8c);
            return 0;
          }
          iVar2 = FUN_144bac1c0(*(undefined8 *)(param_1 + 8),plVar6);
          if (iVar2 == 0) {
            FUN_144eaa780(plVar6);
            uVar10 = 0xcb;
            goto LAB_144eaa6de;
          }
        }
      }
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    _Str2 = pcVar9;
    if (cVar1 == '\0') {
      return 1;
    }
  } while( true );
}



// FUNCTION 144eaa730 FUN_144eaa730 body=33 status=ok
// SIG undefined FUN_144eaa730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaa730(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\x509\\by_dir.c",0x7b);
  return;
}



// FUNCTION 144eaa780 FUN_144eaa780 body=79 status=ok
// SIG undefined FUN_144eaa780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaa780(undefined8 *param_1)

{
  FUN_144ea6530(*param_1,"crypto\\x509\\by_dir.c",0x8a);
  FUN_144babe00(param_1[2],FUN_144eaa730);
  FUN_144ea6530(param_1,"crypto\\x509\\by_dir.c",0x8c);
  return;
}



// FUNCTION 144eaa7d0 FUN_144eaa7d0 body=195 status=ok
// SIG undefined FUN_144eaa7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eaa7d0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144eaa7e0;
  bVar4 = false;
  if (param_2 == 1) {
    if (param_4 == 3) {
      uVar2 = FUN_144ecfdc0();
      lVar3 = FUN_144ecf180(uVar2);
      if (lVar3 == 0) {
        lVar3 = FUN_144ecfda0();
      }
      iVar1 = FUN_144eaac10(param_1,lVar3,1);
      bVar4 = iVar1 != 0;
      if (!bVar4) {
        FUN_144ba24f0(0xb,0x65,0x68,"crypto\\x509\\by_file.c",0x3c,uVar5);
        return false;
      }
    }
    else {
      if (param_4 == 1) {
        iVar1 = FUN_144eaac10(param_1,param_3,1);
        return iVar1 != 0;
      }
      iVar1 = FUN_144eaa8b0(param_1,param_3,param_4);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



// FUNCTION 144eaa8a0 FUN_144eaa8a0 body=8 status=ok
// SIG undefined FUN_144eaa8a0(void)

undefined ** FUN_144eaa8a0(void)

{
  return &PTR_s_Load_file_into_cache_14c70b0b0;
}



// FUNCTION 144eaa8b0 FUN_144eaa8b0 body=421 status=ok
// SIG undefined FUN_144eaa8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eaa8b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144eaa8d4;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x54;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = FUN_14526c4e0(lVar4,0,0,&DAT_149e02088);
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = FUN_144bb4960(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_144eaaa24;
      iVar7 = iVar7 + 1;
      FUN_144b47250(lVar5);
      lVar5 = FUN_14526c4e0(lVar4,0,0,&DAT_149e02088);
    }
    uVar2 = FUN_144ba26c0();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      FUN_144ba26f0();
LAB_144eaa9de:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_144eaaa24;
      uVar9 = 0x7c;
      uVar8 = 0x87;
    }
    else {
      uVar9 = 0x61;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = FUN_144bb5aa0(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = FUN_144bb4960(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_144eaaa24;
      goto LAB_144eaa9de;
    }
    uVar9 = 0x70;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0x78;
    uVar8 = 100;
  }
  FUN_144ba24f0(0xb,0x6f,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_144eaaa24:
  FUN_144b47250(lVar5);
  FUN_144b9e7b0(lVar4);
  return iVar6;
}



// FUNCTION 144eaaa60 FUN_144eaaa60 body=421 status=ok
// SIG undefined FUN_144eaaa60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eaaa60(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144eaaa84;
  iVar6 = 0;
  iVar7 = 0;
  lVar5 = 0;
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2), iVar1 < 1)) {
    uVar9 = 0x8d;
    uVar8 = 2;
  }
  else if (param_3 == 1) {
    lVar5 = FUN_144bac640(lVar4,0,0,&DAT_149e02088);
    while (iVar6 = 0, lVar5 != 0) {
      iVar1 = FUN_144bb49b0(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar1 == 0) goto LAB_144eaabd4;
      iVar7 = iVar7 + 1;
      FUN_144ee8210(lVar5);
      lVar5 = FUN_144bac640(lVar4,0,0,&DAT_149e02088);
    }
    uVar2 = FUN_144ba26c0();
    if (((uVar2 & 0xfff) == 0x6c) && (0 < iVar7)) {
      FUN_144ba26f0();
LAB_144eaab8e:
      iVar6 = iVar7;
      if (iVar6 != 0) goto LAB_144eaabd4;
      uVar9 = 0xb5;
      uVar8 = 0x89;
    }
    else {
      uVar9 = 0x9a;
      uVar8 = 9;
    }
  }
  else if (param_3 == 2) {
    lVar5 = FUN_144bb5ae0(lVar4,0);
    if (lVar5 != 0) {
      iVar7 = FUN_144bb49b0(*(undefined8 *)(param_1 + 0x18),lVar5);
      if (iVar7 == 0) goto LAB_144eaabd4;
      goto LAB_144eaab8e;
    }
    uVar9 = 0xa9;
    uVar8 = 0xd;
  }
  else {
    uVar9 = 0xb1;
    uVar8 = 100;
  }
  FUN_144ba24f0(0xb,0x70,uVar8,"crypto\\x509\\by_file.c",uVar9,uVar10);
LAB_144eaabd4:
  FUN_144ee8210(lVar5);
  FUN_144b9e7b0(lVar4);
  return iVar6;
}



// FUNCTION 144eaac10 FUN_144eaac10 body=382 status=ok
// SIG undefined FUN_144eaac10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eaac10(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144eaac21;
  uVar6 = 0;
  if (param_3 != 1) {
    uVar2 = FUN_144eaa8b0();
    return uVar2;
  }
  lVar3 = FUN_144ec7480(param_2,L"rInvalid resolution in tiff: zero or negative.");
  if (lVar3 == 0) {
    FUN_144ba24f0(0xb,0x84,2,"crypto\\x509\\by_file.c",199,uVar8);
    return 0;
  }
  lVar4 = FUN_14526bfa0(lVar3,0,0,&DAT_149e02088);
  FUN_144b9e7b0(lVar3);
  if (lVar4 == 0) {
    FUN_144ba24f0(0xb,0x84,9,"crypto\\x509\\by_file.c",0xcd,uVar8);
    return 0;
  }
  iVar7 = 0;
  iVar1 = FUN_144babbf0(lVar4);
  if (0 < iVar1) {
    do {
      plVar5 = (longlong *)FUN_144babc00(lVar4,iVar7);
      if (*plVar5 != 0) {
        iVar1 = FUN_144bb4960(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_144eaad62;
        uVar6 = uVar6 + 1;
      }
      if (plVar5[1] != 0) {
        iVar1 = FUN_144bb49b0(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_144eaad62;
        uVar6 = uVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_144babbf0(lVar4);
    } while (iVar7 < iVar1);
    if (uVar6 != 0) goto LAB_144eaad62;
  }
  FUN_144ba24f0(0xb,0x84,0x88,"crypto\\x509\\by_file.c",0xdf);
LAB_144eaad62:
  FUN_144babe00(lVar4,FUN_14526bf30);
  return (ulonglong)uVar6;
}



// FUNCTION 144eaad90 FUN_144eaad90 body=198 status=ok
// SIG undefined FUN_144eaad90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaad90(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144eaada5;
  if (param_2 != 0) {
    uVar2 = FUN_144eaa8a0();
    lVar3 = FUN_144bb4850(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_144bb4b60(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_144eaa4d0();
    lVar3 = FUN_144bb4850(param_1,uVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_144bb4b60(lVar3,2,param_3,1,0,uVar4), iVar1 == 1)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eaae60 FUN_144eaae60 body=144 status=ok
// SIG undefined FUN_144eaae60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaae60(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eaae6c;
  uVar1 = FUN_144eaa8a0();
  lVar2 = FUN_144bb4850(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_144bb4b60(lVar2,1,0,3,0,uVar3);
    uVar1 = FUN_144eaa4d0();
    lVar2 = FUN_144bb4850(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_144bb4b60(lVar2,2,0,3,0);
      FUN_144ba26f0();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eaaef0 FUN_144eaaef0 body=96 status=ok
// SIG undefined FUN_144eaaef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eaaef0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x68,"crypto\\x509\\x509_vpm.c",0x56);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xb,0x9f,0x41,"crypto\\x509\\x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 144eaaf50 FUN_144eaaf50 body=151 status=ok
// SIG undefined FUN_144eaaf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaaf50(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144babe00(*(undefined8 *)(param_1 + 0x28),FUN_144ed0860);
    FUN_144babe00(*(undefined8 *)(param_1 + 0x30),FUN_144eab4f0);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x68);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x48),"crypto\\x509\\x509_vpm.c",0x69);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0x6a);
    FUN_144ea6530(param_1,"crypto\\x509\\x509_vpm.c",0x6b);
  }
  return;
}



// FUNCTION 144eaaff0 FUN_144eaaff0 body=497 status=ok
// SIG undefined FUN_144eaaff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaaff0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar4 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar4 & 8) != 0) {
    return 1;
  }
  uVar6 = uVar4 & 1;
  uVar5 = uVar4 & 2;
  if ((((((((((uVar5 != 0) ||
             ((*(int *)(param_2 + 0x18) != 0 && ((uVar6 != 0 || (*(int *)(param_1 + 0x18) == 0))))))
            && (*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18), uVar5 != 0)) ||
           ((*(int *)(param_2 + 0x1c) != 0 && ((uVar6 != 0 || (*(int *)(param_1 + 0x1c) == 0))))))
          && (*(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c), uVar5 != 0)) ||
         ((*(int *)(param_2 + 0x20) != -1 && ((uVar6 != 0 || (*(int *)(param_1 + 0x20) == -1))))))
        && (*(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20), uVar5 != 0)) ||
       ((*(int *)(param_2 + 0x24) != -1 && ((uVar6 != 0 || (*(int *)(param_1 + 0x24) == -1)))))) &&
      (*(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24), uVar5 != 0)) ||
     ((*(byte *)(param_1 + 0x14) & 2) == 0)) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  if ((uVar4 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | *(uint *)(param_2 + 0x14);
  if ((uVar5 == 0) &&
     ((*(longlong *)(param_2 + 0x28) == 0 || ((uVar6 == 0 && (*(longlong *)(param_1 + 0x28) != 0))))
     )) {
LAB_144eab102:
    if ((*(int *)(param_2 + 0x38) != 0) && ((uVar6 != 0 || (*(int *)(param_1 + 0x38) == 0))))
    goto LAB_144eab111;
LAB_144eab11b:
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       ((uVar6 != 0 || (*(longlong *)(param_1 + 0x30) == 0)))) goto LAB_144eab12d;
LAB_144eab16e:
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       ((uVar6 != 0 || (*(longlong *)(param_1 + 0x48) == 0)))) goto LAB_144eab180;
  }
  else {
    iVar2 = FUN_144eab260(param_1,*(undefined8 *)(param_2 + 0x28));
    if (iVar2 == 0) {
      return 0;
    }
    if (uVar5 == 0) goto LAB_144eab102;
LAB_144eab111:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    if (uVar5 == 0) goto LAB_144eab11b;
LAB_144eab12d:
    FUN_144babe00(*(undefined8 *)(param_1 + 0x30),FUN_144eab4f0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar3 = FUN_144babea0(*(longlong *)(param_2 + 0x30),FUN_144eab4c0,FUN_144eab4f0);
      *(longlong *)(param_1 + 0x30) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (uVar5 == 0) goto LAB_144eab16e;
LAB_144eab180:
    iVar2 = FUN_144eab680(param_1 + 0x48,param_1 + 0x50,*(undefined8 *)(param_2 + 0x48),
                          *(undefined8 *)(param_2 + 0x50));
    if (iVar2 == 0) {
      return 0;
    }
    if (uVar5 != 0) goto LAB_144eab1af;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return 1;
  }
  if ((uVar6 == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
LAB_144eab1af:
  iVar2 = FUN_144eab400(param_1,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  if (iVar2 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eab1f0 FUN_144eab1f0 body=52 status=ok
// SIG undefined FUN_144eab1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab1f0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  FUN_144eaaff0();
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 144eab230 FUN_144eab230 body=24 status=ok
// SIG undefined FUN_144eab230(void)

undefined8 FUN_144eab230(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  if ((param_2 & 0x780) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
  }
  return 1;
}



// FUNCTION 144eab250 FUN_144eab250 body=4 status=ok
// SIG undefined FUN_144eab250(void)

void FUN_144eab250(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 144eab260 FUN_144eab260 body=245 status=ok
// SIG undefined FUN_144eab260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eab260(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_144babe00(*(undefined8 *)(param_1 + 0x28),FUN_144ed0860);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 1;
  }
  lVar2 = FUN_144babca0();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      uVar3 = FUN_144babc00(param_2,iVar4);
      lVar2 = FUN_14526bd70(uVar3);
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x28),lVar2);
      if (iVar1 == 0) {
        FUN_144ed0860(lVar2);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar4 < iVar1);
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
  return 1;
}



// FUNCTION 144eab360 FUN_144eab360 body=30 status=ok
// SIG undefined FUN_144eab360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144eab520(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 144eab380 FUN_144eab380 body=4 status=ok
// SIG undefined FUN_144eab380(void)

void FUN_144eab380(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 144eab390 FUN_144eab390 body=103 status=ok
// SIG undefined FUN_144eab390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != lVar1) {
    FUN_144ea6530(*(longlong *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x1a1);
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 144eab400 FUN_144eab400 body=61 status=ok
// SIG undefined FUN_144eab400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eab400(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xffffffffffffffeb) == 0) && (param_3 != 0x14)) {
    uVar1 = FUN_144eab680(param_1 + 0x58,param_1 + 0x60,param_2,param_3);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144eab440 FUN_144eab440 body=113 status=ok
// SIG undefined FUN_144eab440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab440(undefined8 param_1)

{
  int iVar1;
  undefined8 local_78 [14];
  undefined8 uStack_8;
  
  uStack_8 = 0x144eab44a;
  local_78[0] = param_1;
  if (DAT_14c7969a0 != 0) {
    iVar1 = FUN_144bac1a0(DAT_14c7969a0,local_78);
    if (-1 < iVar1) {
      FUN_144babc00(DAT_14c7969a0,iVar1);
      return;
    }
  }
  FUN_144ea97c0(local_78,&PTR_s_default_149bf5630,5,0x68,&LAB_144eab730);
  return;
}



// FUNCTION 144eab4c0 FUN_144eab4c0 body=33 status=ok
// SIG undefined FUN_144eab4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab4c0(undefined8 param_1)

{
  FUN_144ea6dc0(param_1,"crypto\\x509\\x509_vpm.c",0x1c);
  return;
}



// FUNCTION 144eab4f0 FUN_144eab4f0 body=33 status=ok
// SIG undefined FUN_144eab4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eab4f0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\x509\\x509_vpm.c",0x21);
  return;
}



// FUNCTION 144eab520 FUN_144eab520 body=342 status=ok
// SIG undefined FUN_144eab520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eab520(longlong param_1,int param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t _MaxCount;
  
  if (param_4 == 0) {
    if (param_3 == (void *)0x0) goto LAB_144eab59b;
    param_4 = 0xffffffffffffffff;
    do {
      param_4 = param_4 + 1;
    } while (*(char *)((longlong)param_3 + param_4) != '\0');
LAB_144eab58a:
    if ((param_4 != 0) && (*(char *)((longlong)param_3 + (param_4 - 1)) == '\0')) {
      param_4 = param_4 - 1;
    }
LAB_144eab59d:
    if (param_2 == 0) {
      FUN_144babe00(*(undefined8 *)(param_1 + 0x30),FUN_144eab4f0);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if ((param_3 != (void *)0x0) && (param_4 != 0)) {
      lVar3 = FUN_144ea6e30(param_3,param_4,"crypto\\x509\\x509_vpm.c",0x3b);
      if (lVar3 == 0) goto LAB_144eab56e;
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = FUN_144babca0();
        *(longlong *)(param_1 + 0x30) = lVar4;
        if (lVar4 == 0) {
          FUN_144ea6530(lVar3,"crypto\\x509\\x509_vpm.c",0x41);
          return 0;
        }
      }
      iVar1 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x30),lVar3);
      if (iVar1 == 0) {
        FUN_144ea6530(lVar3,"crypto\\x509\\x509_vpm.c",0x46);
        iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x30));
        if (iVar1 == 0) {
          FUN_144babdb0(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        return 0;
      }
    }
    uVar5 = 1;
  }
  else {
    if (param_3 == (void *)0x0) {
LAB_144eab59b:
      param_4 = 0;
      goto LAB_144eab59d;
    }
    _MaxCount = param_4 - 1;
    if (param_4 < 2) {
      _MaxCount = param_4;
    }
    pvVar2 = memchr(param_3,0,_MaxCount);
    if (pvVar2 == (void *)0x0) goto LAB_144eab58a;
LAB_144eab56e:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144eab680 FUN_144eab680 body=171 status=ok
// SIG undefined FUN_144eab680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eab680(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
    param_4 = 0;
    lVar1 = param_4;
  }
  else {
    if (param_4 == 0) {
      param_4 = -1;
      do {
        param_4 = param_4 + 1;
      } while (*(char *)(param_3 + param_4) != '\0');
    }
    lVar1 = FUN_144ea6d10(param_3,param_4,"crypto\\x509\\x509_vpm.c",0xf7);
    if (lVar1 == 0) {
      return 0;
    }
  }
  FUN_144ea6530(*param_1,"crypto\\x509\\x509_vpm.c",0xfe);
  *param_1 = lVar1;
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}



// FUNCTION 144eab770 FUN_144eab770 body=532 status=ok
// SIG undefined FUN_144eab770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eab770(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void *_Src;
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res10;
  void *local_28;
  undefined8 *local_20;
  
  _Src = (void *)*param_2;
  iVar2 = 0x100000;
  if (param_3 < 0x100001) {
    iVar2 = param_3;
  }
  local_res10 = 0;
  local_20 = (undefined8 *)0x0;
  local_28 = _Src;
  uVar4 = FUN_144eff890(&local_res10,&local_28,iVar2,&DAT_149bf5940,param_5,param_6,param_7,param_8)
  ;
  if (0 < (int)uVar4) {
    if (*param_1 != 0) {
      FUN_144eabad0(param_1,0);
    }
    iVar2 = FUN_144eaba10(&local_20,0);
    puVar1 = local_20;
    if ((iVar2 != 0) &&
       (lVar5 = FUN_144ea70e0(local_20[2],(longlong)local_28 - (longlong)_Src), lVar5 != 0)) {
      memcpy(*(void **)(puVar1[2] + 8),_Src,(longlong)local_28 - (longlong)_Src);
      iVar7 = 0;
      iVar2 = FUN_144babbf0(local_res10);
      if (0 < iVar2) {
        do {
          uVar6 = FUN_144babc00(local_res10,iVar7);
          iVar8 = 0;
          iVar2 = FUN_144babbf0(uVar6);
          if (0 < iVar2) {
            do {
              lVar5 = FUN_144babc00(uVar6,iVar8);
              *(int *)(lVar5 + 0x10) = iVar7;
              iVar2 = FUN_144bac1c0(*puVar1,lVar5);
              if (iVar2 == 0) goto LAB_144eab91c;
              FUN_144babc20(uVar6,iVar8,0);
              iVar8 = iVar8 + 1;
              iVar2 = FUN_144babbf0(uVar6);
            } while (iVar8 < iVar2);
          }
          iVar7 = iVar7 + 1;
          iVar2 = FUN_144babbf0(local_res10);
        } while (iVar7 < iVar2);
      }
      uVar3 = FUN_144eac010(puVar1);
      if (uVar3 != 0) {
        FUN_144babe00(local_res10,FUN_144eac4a0);
        *(undefined4 *)(puVar1 + 1) = 0;
        *param_1 = (longlong)puVar1;
        *param_2 = local_28;
        return (ulonglong)uVar3;
      }
    }
LAB_144eab91c:
    if (puVar1 != (undefined8 *)0x0) {
      FUN_144eff330(puVar1,&DAT_149bf59a8);
    }
    FUN_144babe00(local_res10,FUN_144eac4c0);
    FUN_144ba24f0(0xd,0x9e,0x3a,"crypto\\x509\\x_name.c",0xce);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144eab990 FUN_144eab990 body=122 status=ok
// SIG undefined FUN_144eab990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eab990(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 8) != 0) {
    uVar4 = FUN_144eabe90(lVar2);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    iVar3 = FUN_144eac010(lVar2);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  uVar1 = **(uint **)(lVar2 + 0x10);
  if (param_2 != (longlong *)0x0) {
    memcpy((void *)*param_2,*(void **)(*(uint **)(lVar2 + 0x10) + 2),(longlong)(int)uVar1);
    *param_2 = *param_2 + (longlong)(int)uVar1;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 144eaba10 FUN_144eaba10 body=183 status=ok
// SIG undefined FUN_144eaba10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaba10(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eaba20;
  plVar1 = (longlong *)FUN_144ea6670(0x28,"crypto\\x509\\x_name.c",0x5c);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144babca0();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_144ea6fc0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
  }
  FUN_144ba24f0(0xd,0xab,0x41,"crypto\\x509\\x_name.c",0x69,uVar3);
  if (plVar1 != (longlong *)0x0) {
    FUN_144babdb0(*plVar1);
    FUN_144ea6530(plVar1,"crypto\\x509\\x_name.c",0x6c);
  }
  return 0;
}



// FUNCTION 144eabad0 FUN_144eabad0 body=120 status=ok
// SIG undefined FUN_144eabad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)
     ) {
    FUN_144ea7070(puVar1[2]);
    FUN_144babe00(*puVar1,FUN_144eabc00);
    FUN_144ea6530(puVar1[3],"crypto\\x509\\x_name.c",0x7b);
    FUN_144ea6530(puVar1,"crypto\\x509\\x_name.c",0x7c);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144eabb50 FUN_144eabb50 body=49 status=ok
// SIG undefined FUN_144eabb50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144eabb50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14526c5b0(param_1,*param_2,param_3,*(undefined4 *)(param_5 + 4),0x144eabb5a);
  uVar2 = 2;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144eabba0 FUN_144eabba0 body=32 status=ok
// SIG undefined FUN_144eabba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabba0(undefined8 param_1)

{
  FUN_144efeb70(&DAT_149bf59a8,param_1);
  return;
}



// FUNCTION 144eabbc0 FUN_144eabbc0 body=32 status=ok
// SIG undefined FUN_144eabbc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabbc0(undefined8 param_1)

{
  FUN_144efeb70(&DAT_149bf58a0,param_1);
  return;
}



// FUNCTION 144eabbe0 FUN_144eabbe0 body=29 status=ok
// SIG undefined FUN_144eabbe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabbe0(void)

{
  FUN_144efec20(&DAT_149bf58a0);
  return;
}



// FUNCTION 144eabc00 FUN_144eabc00 body=29 status=ok
// SIG undefined FUN_144eabc00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabc00(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf58a0);
  return;
}



// FUNCTION 144eabc20 FUN_144eabc20 body=29 status=ok
// SIG undefined FUN_144eabc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabc20(void)

{
  FUN_144efec20(&DAT_149bf59a8);
  return;
}



// FUNCTION 144eabc40 FUN_144eabc40 body=29 status=ok
// SIG undefined FUN_144eabc40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabc40(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf59a8);
  return;
}



// FUNCTION 144eabc60 FUN_144eabc60 body=29 status=ok
// SIG undefined FUN_144eabc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabc60(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144eabc80 FUN_144eabc80 body=29 status=ok
// SIG undefined FUN_144eabc80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eabc80(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149bf59a8);
  return;
}



// FUNCTION 144eabca0 FUN_144eabca0 body=8 status=ok
// SIG undefined FUN_144eabca0(void)

undefined * FUN_144eabca0(void)

{
  return &DAT_149bf59a8;
}



// FUNCTION 144eabcb0 FUN_144eabcb0 body=110 status=ok
// SIG undefined FUN_144eabcb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eabcb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 == param_2) {
    return *param_1 != 0;
  }
  lVar1 = FUN_144efeb70(&DAT_149bf59a8);
  if (lVar1 == 0) {
    return false;
  }
  FUN_144eff330(*param_1,&DAT_149bf59a8);
  *param_1 = lVar1;
  return true;
}



// FUNCTION 144eabd20 FUN_144eabd20 body=364 status=ok
// SIG undefined FUN_144eabd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eabd20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = (char *)FUN_144baf340(param_2,0,0);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    FUN_144ea6530(pcVar2,"crypto\\x509\\x_name.c",0x1f6);
    return 1;
  }
  pcVar4 = pcVar2 + 1;
  pcVar5 = pcVar4;
  for (; *pcVar4 != '/'; pcVar4 = pcVar4 + 1) {
LAB_144eabdd6:
    if (*pcVar4 == '\0') goto LAB_144eabddb;
LAB_144eabe19:
  }
  iVar1 = FUN_144ecfdd0((int)pcVar4[1],2);
  if (iVar1 == 0) goto LAB_144eabdd6;
  if (pcVar4[2] != '=') {
    iVar1 = FUN_144ecfdd0((int)pcVar4[2],2);
    if ((iVar1 == 0) || (pcVar4[3] != '=')) goto LAB_144eabdd6;
  }
LAB_144eabddb:
  iVar6 = (int)pcVar4 - (int)pcVar5;
  iVar1 = FUN_144b9eb80(param_1,pcVar5,iVar6);
  if (iVar1 == iVar6) {
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 != '\0') {
      iVar1 = FUN_144b9eb80(param_1,&DAT_149dfd133,2);
      if (iVar1 != 2) goto LAB_144eabe3a;
      if (*pcVar4 != '\0') goto LAB_144eabe19;
    }
    FUN_144ea6530(pcVar2,"crypto\\x509\\x_name.c",0x210);
    uVar3 = 1;
  }
  else {
LAB_144eabe3a:
    FUN_144ba24f0(0xb,0x75,7,"crypto\\x509\\x_name.c",0x213);
    FUN_144ea6530(pcVar2,"crypto\\x509\\x_name.c",0x214);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144eabe90 FUN_144eabe90 body=383 status=ok
// SIG undefined FUN_144eabe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eabe90(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 uVar6;
  
  uVar6 = 0x144eabea8;
  local_res10 = 0;
  lVar4 = 0;
  iVar2 = -1;
  local_res10 = FUN_144babca0();
  if (local_res10 != 0) {
    iVar5 = 0;
    iVar1 = FUN_144babbf0(*param_1);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_144babc00(*param_1,iVar5);
        if (*(int *)(lVar3 + 0x10) != iVar2) {
          lVar4 = FUN_144babca0();
          if (lVar4 == 0) goto LAB_144eabfc8;
          iVar2 = FUN_144bac1c0(local_res10,lVar4);
          if (iVar2 == 0) {
            FUN_144babdb0(lVar4);
            goto LAB_144eabfc8;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
        }
        iVar1 = FUN_144bac1c0(lVar4,lVar3);
        if (iVar1 == 0) goto LAB_144eabfc8;
        iVar5 = iVar5 + 1;
        iVar1 = FUN_144babbf0(*param_1);
      } while (iVar5 < iVar1);
    }
    iVar2 = FUN_144f01540(&local_res10,0,&DAT_149bf5940,0xffffffff,0xffffffff,uVar6);
    lVar4 = FUN_144ea70e0(param_1[2],(longlong)iVar2);
    if (lVar4 != 0) {
      local_res18 = *(undefined8 *)(param_1[2] + 8);
      FUN_144f01540(&local_res10,&local_res18,&DAT_149bf5940,0xffffffff,0xffffffff);
      FUN_144babe00(local_res10,FUN_144eac4a0);
      *(undefined4 *)(param_1 + 1) = 0;
      return iVar2;
    }
  }
LAB_144eabfc8:
  FUN_144babe00(local_res10,FUN_144eac4a0);
  FUN_144ba24f0(0xd,0xcb,0x41,"crypto\\x509\\x_name.c",0x114);
  return -1;
}



// FUNCTION 144eac010 FUN_144eac010 body=671 status=ok
// SIG undefined FUN_144eac010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eac010(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 uVar11;
  
  lVar5 = 0;
  plVar6 = (longlong *)0x0;
  iVar2 = -1;
  uVar9 = 0;
  FUN_144ea6530(param_1[3],"crypto\\x509\\x_name.c",0x134);
  param_1[3] = 0;
  iVar1 = FUN_144babbf0(*param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar3 = FUN_144babca0();
  if (lVar3 == 0) {
    FUN_144ba24f0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x13d);
  }
  else {
    iVar10 = 0;
    iVar1 = FUN_144babbf0(*param_1);
    if (0 < iVar1) {
      do {
        puVar4 = (undefined8 *)FUN_144babc00(*param_1,iVar10);
        if (*(int *)(puVar4 + 2) != iVar2) {
          lVar5 = FUN_144babca0();
          if (lVar5 == 0) goto LAB_144eac26d;
          iVar2 = FUN_144bac1c0(lVar3,lVar5);
          if (iVar2 == 0) {
            FUN_144babdb0(lVar5);
            FUN_144ba24f0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",0x148);
            goto LAB_144eac26d;
          }
          iVar2 = *(int *)(puVar4 + 2);
        }
        plVar6 = (longlong *)FUN_144efec20(&DAT_149bf58a0);
        if (plVar6 == (longlong *)0x0) {
          uVar11 = 0x14f;
          goto LAB_144eac1a8;
        }
        lVar7 = FUN_14526bd70(*puVar4);
        *plVar6 = lVar7;
        if (lVar7 == 0) {
          uVar11 = 0x154;
          goto LAB_144eac1a8;
        }
        iVar1 = FUN_144eac2b0(plVar6[1],puVar4[1]);
        if (iVar1 == 0) goto LAB_144eac279;
        iVar1 = FUN_144bac1c0(lVar5,plVar6);
        if (iVar1 == 0) {
          uVar11 = 0x15a;
          goto LAB_144eac1a8;
        }
        iVar10 = iVar10 + 1;
        iVar1 = FUN_144babbf0(*param_1);
      } while (iVar10 < iVar1);
    }
    iVar2 = FUN_144eac410(lVar3,0);
    plVar6 = (longlong *)0x0;
    if (-1 < iVar2) {
      *(int *)(param_1 + 4) = iVar2;
      local_res8 = FUN_144ea64e0((longlong)iVar2,"crypto\\x509\\x_name.c",0x166);
      if (local_res8 == 0) {
        uVar11 = 0x168;
LAB_144eac1a8:
        FUN_144ba24f0(0xb,0x9c,0x41,"crypto\\x509\\x_name.c",uVar11);
      }
      else {
        param_1[3] = local_res8;
        iVar2 = FUN_144babbf0(lVar3);
        if (0 < iVar2) {
          do {
            local_res10 = FUN_144babc00(lVar3,plVar6);
            iVar2 = FUN_144f01540(&local_res10,&local_res8,&DAT_149bf58f0,0xffffffff,0xffffffff);
            if (iVar2 < 0) break;
            uVar8 = (int)plVar6 + 1;
            plVar6 = (longlong *)(ulonglong)uVar8;
            iVar2 = FUN_144babbf0(lVar3);
          } while ((int)uVar8 < iVar2);
        }
        uVar9 = 1;
LAB_144eac26d:
        plVar6 = (longlong *)0x0;
      }
    }
  }
LAB_144eac279:
  FUN_144eff330(plVar6,&DAT_149bf58a0);
  FUN_144babe00(lVar3,FUN_144eac4c0);
  return uVar9;
}



// FUNCTION 144eac2b0 FUN_144eac2b0 body=340 status=ok
// SIG undefined FUN_144eac2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eac2b0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar7 = FUN_144eff7d0(*(undefined4 *)(param_2 + 4));
  if ((uVar7 & 0x2956) == 0) {
    iVar4 = FUN_144f03b30(param_1);
    return iVar4 != 0;
  }
  param_1[1] = 0xc;
  iVar4 = FUN_14526c520(param_1 + 2,param_2);
  *param_1 = iVar4;
  if (iVar4 == -1) {
    bVar3 = false;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 2);
    while ((0 < iVar4 && (iVar5 = FUN_144ecfdd0(*pbVar8,8), iVar5 != 0))) {
      pbVar8 = pbVar8 + 1;
      iVar4 = iVar4 + -1;
    }
    if (0 < iVar4) {
      pbVar9 = pbVar8 + (longlong)iVar4 + -1;
      do {
        iVar5 = FUN_144ecfdd0(*pbVar9,8);
        if (iVar5 == 0) break;
        pbVar9 = pbVar9 + -1;
        iVar4 = iVar4 + -1;
      } while (0 < iVar4);
    }
    pbVar9 = *(byte **)(param_1 + 2);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 0x80) == 0) {
          iVar6 = FUN_144ecfdd0(bVar2,8);
          if (iVar6 == 0) {
            bVar2 = FUN_144ecfdf0(*pbVar8);
            *pbVar9 = bVar2;
            goto LAB_144eac3d4;
          }
          *pbVar9 = 0x20;
          do {
            pbVar1 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            iVar5 = iVar5 + 1;
            iVar6 = FUN_144ecfdd0(*pbVar1,8);
          } while (iVar6 != 0);
        }
        else {
          *pbVar9 = bVar2;
LAB_144eac3d4:
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + 1;
        }
        pbVar9 = pbVar9 + 1;
      } while (iVar5 < iVar4);
    }
    bVar3 = true;
    *param_1 = (int)pbVar9 - param_1[2];
  }
  return bVar3;
}



// FUNCTION 144eac410 FUN_144eac410 body=138 status=ok
// SIG undefined FUN_144eac410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eac410(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x144eac42a;
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = FUN_144babbf0();
  if (0 < iVar1) {
    do {
      local_res8 = FUN_144babc00(param_1,iVar3);
      uVar2 = FUN_144f01540(&local_res8,param_2,&DAT_149bf58f0,0xffffffff,0xffffffff,uVar5);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + (int)uVar2;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (iVar3 < iVar1);
  }
  return (ulonglong)uVar4;
}



// FUNCTION 144eac4a0 FUN_144eac4a0 body=22 status=ok
// SIG undefined FUN_144eac4a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac4a0(void)

{
  FUN_144babdb0();
  return;
}



// FUNCTION 144eac4c0 FUN_144eac4c0 body=29 status=ok
// SIG undefined FUN_144eac4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac4c0(undefined8 param_1)

{
  FUN_144babe00(param_1,FUN_144eabc00);
  return;
}



// FUNCTION 144eac4f0 FUN_144eac4f0 body=29 status=ok
// SIG undefined FUN_144eac4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac4f0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf5ab0);
  return;
}



// FUNCTION 144eac510 FUN_144eac510 body=29 status=ok
// SIG undefined FUN_144eac510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac510(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144eac530 FUN_144eac530 body=29 status=ok
// SIG undefined FUN_144eac530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac530(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149bf5b00);
  return;
}



// FUNCTION 144eac550 FUN_144eac550 body=26 status=ok
// SIG undefined FUN_144eac550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac550(longlong param_1)

{
  FUN_144ef4230(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 144eac570 FUN_144eac570 body=26 status=ok
// SIG undefined FUN_144eac570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac570(longlong param_1)

{
  FUN_144ef4260(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 144eac590 FUN_144eac590 body=26 status=ok
// SIG undefined FUN_144eac590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac590(longlong param_1)

{
  FUN_144ef4340(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 144eac5b0 FUN_144eac5b0 body=26 status=ok
// SIG undefined FUN_144eac5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac5b0(longlong param_1)

{
  FUN_144ef4390(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 144eac5d0 FUN_144eac5d0 body=26 status=ok
// SIG undefined FUN_144eac5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac5d0(longlong param_1)

{
  FUN_14526d390(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 144eac5f0 FUN_144eac5f0 body=26 status=ok
// SIG undefined FUN_144eac5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac5f0(longlong param_1)

{
  FUN_144ef4260(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 144eac610 FUN_144eac610 body=26 status=ok
// SIG undefined FUN_144eac610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac610(longlong param_1)

{
  FUN_144ef4340(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 144eac630 FUN_144eac630 body=26 status=ok
// SIG undefined FUN_144eac630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac630(longlong param_1)

{
  FUN_14526d390(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 144eac650 FUN_144eac650 body=26 status=ok
// SIG undefined FUN_144eac650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac650(longlong param_1)

{
  FUN_14526d390(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144eac670 FUN_144eac670 body=36 status=ok
// SIG undefined FUN_144eac670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac670(void)

{
  FUN_144ea6670(0x18,"crypto\\async\\async_wait.c",0x11);
  return;
}



// FUNCTION 144eac6a0 FUN_144eac6a0 body=149 status=ok
// SIG undefined FUN_144eac6a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eac6a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)puVar2 + 0x24) == 0) && ((code *)puVar2[3] != (code *)0x0)) {
        (*(code *)puVar2[3])(param_1,*puVar2,puVar2[1],puVar2[2]);
      }
      puVar1 = (undefined8 *)puVar2[5];
      FUN_144ea6530(puVar2,"crypto\\async\\async_wait.c",0x25);
      puVar2 = puVar1;
    }
    FUN_144ea6530(param_1,"crypto\\async\\async_wait.c",0x29);
  }
  return;
}



// FUNCTION 144eac740 FUN_144eac740 body=458 status=ok
// SIG undefined FUN_144eac740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eac740(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144eac75b;
  lVar6 = 0;
  if (param_1 < param_2) {
    FUN_144ba24f0(0x33,0x65,0x67,"crypto\\async\\async.c",0x142,0x144eac75b);
  }
  else {
    iVar1 = FUN_144bab1c0(0x100,0);
    if ((iVar1 != 0) && (iVar1 = FUN_144bab640(1), iVar1 != 0)) {
      plVar2 = (longlong *)FUN_144ea6670(0x18,"crypto\\async\\async.c",0x14c);
      if (plVar2 == (longlong *)0x0) {
        FUN_144ba24f0(0x33,0x65,0x41,"crypto\\async\\async.c",0x14e,uVar7);
        return 0;
      }
      lVar3 = FUN_144babce0(0,param_2 & 0xffffffff);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        FUN_144ba24f0(0x33,0x65,0x41,"crypto\\async\\async.c",0x154,uVar7);
        uVar7 = 0x155;
      }
      else {
        plVar2[2] = param_1;
        while (param_2 != 0) {
          param_2 = param_2 - 1;
          puVar4 = (undefined8 *)FUN_144eace00();
          if (puVar4 == (undefined8 *)0x0) {
LAB_144eac883:
            FUN_144eace60(puVar4);
            break;
          }
          pvVar5 = CreateFiber(0,FUN_14526d520,(LPVOID)0x0);
          *puVar4 = pvVar5;
          if (pvVar5 == (LPVOID)0x0) goto LAB_144eac883;
          puVar4[3] = 0;
          FUN_144bac1c0(*plVar2,puVar4);
          lVar6 = lVar6 + 1;
        }
        plVar2[1] = lVar6;
        iVar1 = FUN_144e987a0(&DAT_14c7969ac,plVar2);
        if (iVar1 != 0) {
          return 1;
        }
        FUN_144ba24f0(0x33,0x65,0x65,"crypto\\async\\async.c",0x16d);
        FUN_144eacfd0(plVar2);
        FUN_144babdb0(*plVar2);
        uVar7 = 0x175;
      }
      FUN_144ea6530(plVar2,"crypto\\async\\async.c",uVar7);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 144eac910 FUN_144eac910 body=601 status=ok
// SIG undefined FUN_144eac910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eac910(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             void *param_5,size_t param_6)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_144bab1c0(0x100,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144e98760(&DAT_14c7969a8);
  if ((lVar3 == 0) && (lVar3 = FUN_144eacd40(), lVar3 == 0)) {
    return 0;
  }
  if (*param_1 != 0) {
    *(longlong *)(lVar3 + 0x10) = *param_1;
  }
  while( true ) {
    while (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar4 = FUN_144eaceb0();
      *(longlong *)(lVar3 + 0x10) = lVar4;
      if (lVar4 == 0) {
        return 1;
      }
      if (param_5 == (void *)0x0) {
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      else {
        uVar2 = FUN_144ea64e0(param_6,"crypto\\async\\async.c",0xe3);
        *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18) = uVar2;
        _Dst = *(void **)(*(longlong *)(lVar3 + 0x10) + 0x18);
        if (_Dst == (void *)0x0) {
          FUN_144ba24f0(0x33,0x69,0x41,"crypto\\async\\async.c",0xe5);
          FUN_144eacf70(*(undefined8 *)(lVar3 + 0x10));
          *(undefined8 *)(lVar3 + 0x10) = 0;
          return 0;
        }
        memcpy(_Dst,param_5,param_6);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10) = param_4;
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = param_2;
      SwitchToFiber((LPVOID)**(undefined8 **)(lVar3 + 0x10));
    }
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x24);
    if (iVar1 == 3) {
      *param_3 = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x20);
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = 0;
      lVar4 = *(longlong *)(lVar3 + 0x10);
      puVar5 = (undefined8 *)FUN_144e98760(&DAT_14c7969ac);
      FUN_144ea6530(*(undefined8 *)(lVar4 + 0x18),"crypto\\async\\async.c",0x8b);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      FUN_144bac1c0(*puVar5,lVar4);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *param_1 = 0;
      return 3;
    }
    if (iVar1 == 1) {
      *param_1 = *(longlong *)(lVar3 + 0x10);
      *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x24) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      return 2;
    }
    if (iVar1 != 2) break;
    puVar5 = (undefined8 *)*param_1;
    *(undefined8 **)(lVar3 + 0x10) = puVar5;
    SwitchToFiber((LPVOID)*puVar5);
  }
  FUN_144ba24f0(0x33,0x69,0x44,"crypto\\async\\async.c",0xd7);
  FUN_144eacf70(*(undefined8 *)(lVar3 + 0x10));
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *param_1 = 0;
  return 0;
}



// FUNCTION 144eacb70 FUN_144eacb70 body=62 status=ok
// SIG undefined FUN_144eacb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eacb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144bab1c0(0x100,0,param_3,param_4,0x144eacb7a);
  if (iVar1 != 0) {
    lVar2 = FUN_144e98760(&DAT_14c7969a8);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 144eacbb0 FUN_144eacbb0 body=78 status=ok
// SIG undefined FUN_144eacbb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eacbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144eacbba;
  iVar1 = FUN_144e98730(&DAT_14c7969a8,0,param_3,param_4,0x144eacbba);
  if (iVar1 != 0) {
    iVar1 = FUN_144e98730(&DAT_14c7969ac,0,param_3,param_4,uVar2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144e987d0(&DAT_14c7969a8);
  }
  return 0;
}



// FUNCTION 144eacc00 FUN_144eacc00 body=41 status=ok
// SIG undefined FUN_144eacc00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eacc00(void)

{
  FUN_144e987d0(&DAT_14c7969a8);
  FUN_144e987d0(&DAT_14c7969ac);
  return;
}



// FUNCTION 144eacc30 FUN_144eacc30 body=156 status=ok
// SIG undefined FUN_144eacc30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eacc30(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_144e98760(&DAT_14c7969ac);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_144eacfd0(puVar2);
    FUN_144babdb0(*puVar2);
    FUN_144ea6530(puVar2,"crypto\\async\\async.c",0x180);
    FUN_144e987a0(&DAT_14c7969ac,0);
  }
  FUN_14526d540();
  uVar3 = FUN_144e98760(&DAT_14c7969a8);
  iVar1 = FUN_144e987a0(&DAT_14c7969a8,0);
  if (iVar1 != 0) {
    FUN_144ea6530(uVar3,"crypto\\async\\async.c",0x49);
    return;
  }
  return;
}



// FUNCTION 144eaccd0 FUN_144eaccd0 body=66 status=ok
// SIG undefined FUN_144eaccd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaccd0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_144e98760(&DAT_14c7969a8);
  do {
    lVar1 = puVar3[2];
    uVar2 = (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x18));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = 3;
    SwitchToFiber((LPVOID)*puVar3);
  } while( true );
}



// FUNCTION 144eacd20 FUN_144eacd20 body=29 status=ok
// SIG undefined FUN_144eacd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eacd20(void)

{
  FUN_144e98760(&DAT_14c7969a8);
  return;
}


