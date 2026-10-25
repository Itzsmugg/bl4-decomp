// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ef0680 FUN_144ef0680 body=1693 status=ok
// SIG undefined FUN_144ef0680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef0680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  int local_58;
  
  iVar1 = FUN_144ba0310(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_144ba0340(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = FUN_144ba0230(param_2,4);
  if ((iVar1 != 0) || (iVar1 = FUN_144ba0230(param_3,4), iVar1 != 0)) {
    lVar4 = FUN_144ef0d20(param_1,param_2,param_3,param_4,param_5);
    return lVar4;
  }
  FUN_144eede20(param_4);
  lVar2 = FUN_144eede90(param_4);
  lVar3 = FUN_144eede90(param_4);
  lVar4 = FUN_144eede90(param_4);
  puVar5 = (undefined8 *)FUN_144eede90(param_4);
  lVar6 = FUN_144eede90(param_4);
  lVar7 = FUN_144eede90(param_4);
  lVar8 = FUN_144eede90(param_4);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = FUN_144ba0570();
    }
    if ((lVar9 != 0) && (iVar1 = FUN_144ba0bb0(lVar4,1), iVar1 != 0)) {
      FUN_144ba0bb0(lVar7,0);
      lVar10 = FUN_144ba06b0(lVar3,param_2);
      if (((lVar10 != 0) && (lVar10 = FUN_144ba06b0(lVar2,param_3), lVar10 != 0)) &&
         (((*(undefined4 *)(lVar2 + 0x10) = 0, *(int *)(lVar3 + 0x10) == 0 &&
           (iVar1 = FUN_144ba0ef0(lVar3,lVar2), iVar1 < 0)) ||
          (iVar1 = FUN_1452a55e0(lVar3,lVar3,lVar2,param_4), iVar1 != 0)))) {
        local_58 = -1;
        iVar1 = FUN_144ba03a0(param_3);
        if ((iVar1 == 0) || (iVar1 = FUN_144ba03d0(param_3), 0x800 < iVar1)) {
          iVar1 = FUN_144ba0340(lVar3);
          lVar10 = lVar2;
          if (iVar1 != 0) goto LAB_144ef0bd4;
          do {
            lVar11 = lVar7;
            lVar2 = lVar3;
            lVar7 = lVar4;
            iVar1 = FUN_144ba03d0(lVar2);
            iVar12 = FUN_144ba03d0(lVar10);
            if (iVar12 == iVar1) {
              iVar1 = FUN_144ba0bb0(puVar5,1);
              if (iVar1 == 0) goto LAB_144ef0cb0;
              iVar1 = FUN_144eee270(lVar6,lVar10,lVar2);
            }
            else {
              iVar1 = FUN_144ba03d0(lVar2);
              iVar12 = FUN_144ba03d0(lVar10);
              if (iVar12 == iVar1 + 1) {
                iVar1 = FUN_144eefe10(lVar8,lVar2);
                if (iVar1 == 0) goto LAB_144ef0cb0;
                iVar1 = FUN_144ba0ef0(lVar10,lVar8);
                if (iVar1 < 0) {
                  iVar1 = FUN_144ba0bb0(puVar5,1);
                  if (iVar1 == 0) goto LAB_144ef0cb0;
                  iVar1 = FUN_144eee270(lVar6,lVar10,lVar2);
                }
                else {
                  iVar1 = FUN_144eee270(lVar6,lVar10,lVar8);
                  if ((iVar1 == 0) || (iVar1 = FUN_144eee4f0(puVar5,lVar8,lVar2), iVar1 == 0))
                  goto LAB_144ef0cb0;
                  iVar1 = FUN_144ba0ef0(lVar10,puVar5);
                  if (iVar1 < 0) {
                    iVar1 = FUN_144ba0bb0(puVar5,2);
                  }
                  else {
                    iVar1 = FUN_144ba0bb0(puVar5,3);
                    if (iVar1 == 0) goto LAB_144ef0cb0;
                    iVar1 = FUN_144eee270(lVar6,lVar6,lVar2);
                  }
                }
              }
              else {
                iVar1 = FUN_144eef830(puVar5,lVar6,lVar10,lVar2,param_4);
              }
            }
            if (iVar1 == 0) goto LAB_144ef0cb0;
            iVar1 = FUN_144ba0350(puVar5);
            lVar4 = lVar7;
            if (iVar1 == 0) {
              iVar1 = FUN_144ba0370(puVar5,2);
              if (iVar1 == 0) {
                iVar1 = FUN_144ba0370(puVar5,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar5 + 1) == 1) {
                    lVar4 = FUN_144ba06b0(lVar10,lVar7);
                    if (lVar4 == 0) goto LAB_144ef0cb0;
                    iVar1 = FUN_14526b160(lVar10,*(undefined8 *)*puVar5);
                  }
                  else {
                    iVar1 = FUN_144eee590(lVar10,puVar5,lVar7,param_4);
                  }
                }
                else {
                  iVar1 = FUN_144eefdb0(lVar10,lVar7,2);
                }
              }
              else {
                iVar1 = FUN_144eefe10(lVar10,lVar7);
              }
              lVar4 = lVar10;
              if (iVar1 == 0) goto LAB_144ef0cb0;
            }
            iVar1 = FUN_144eee4f0(lVar10,lVar4,lVar11);
            if (iVar1 == 0) goto LAB_144ef0cb0;
            local_58 = -local_58;
            iVar1 = FUN_144ba0340(lVar6);
            lVar4 = lVar10;
            lVar3 = lVar6;
            lVar6 = lVar11;
            lVar10 = lVar2;
          } while (iVar1 == 0);
          if (local_58 < 0) goto LAB_144ef0bd4;
        }
        else {
          iVar1 = FUN_144ba0340(lVar3);
          while (iVar1 == 0) {
            iVar12 = 0;
            iVar1 = FUN_144ba0d50(lVar3,0);
            if (iVar1 == 0) {
              do {
                iVar12 = iVar12 + 1;
                iVar1 = FUN_144ba03a0(lVar4);
                if (((iVar1 != 0) && (iVar1 = FUN_144eee420(lVar4,lVar4,param_3), iVar1 == 0)) ||
                   (iVar1 = FUN_144eeff20(lVar4,lVar4), iVar1 == 0)) goto LAB_144ef0cb0;
                iVar1 = FUN_144ba0d50(lVar3,iVar12);
              } while (iVar1 == 0);
              if ((0 < iVar12) && (iVar1 = FUN_144eefec0(lVar3,lVar3,iVar12), iVar1 == 0))
              goto LAB_144ef0cb0;
            }
            iVar12 = 0;
            iVar1 = FUN_144ba0d50(lVar2,0);
            if (iVar1 == 0) {
              do {
                iVar12 = iVar12 + 1;
                iVar1 = FUN_144ba03a0(lVar7);
                if (((iVar1 != 0) && (iVar1 = FUN_144eee420(lVar7,lVar7,param_3), iVar1 == 0)) ||
                   (iVar1 = FUN_144eeff20(lVar7,lVar7), iVar1 == 0)) goto LAB_144ef0cb0;
                iVar1 = FUN_144ba0d50(lVar2,iVar12);
              } while (iVar1 == 0);
              if ((0 < iVar12) && (iVar1 = FUN_144eefec0(lVar2,lVar2,iVar12), iVar1 == 0))
              goto LAB_144ef0cb0;
            }
            iVar1 = FUN_144ba0ef0(lVar3,lVar2);
            if (iVar1 < 0) {
              iVar1 = FUN_144eee420(lVar7,lVar7,lVar4);
              lVar6 = lVar2;
              lVar8 = lVar3;
            }
            else {
              iVar1 = FUN_144eee420(lVar4,lVar4,lVar7);
              lVar6 = lVar3;
              lVar8 = lVar2;
            }
            if ((iVar1 == 0) || (iVar1 = FUN_144eee310(lVar6,lVar6,lVar8), iVar1 == 0))
            goto LAB_144ef0cb0;
            iVar1 = FUN_144ba0340(lVar3);
          }
LAB_144ef0bd4:
          iVar1 = FUN_144eee270(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_144ef0cb0;
        }
        iVar1 = FUN_144ba0350(lVar2);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = FUN_144ba0ef0(lVar7,param_3), iVar1 < 0)) {
            lVar4 = FUN_144ba06b0(lVar9,lVar7);
            bVar13 = lVar4 == 0;
          }
          else {
            iVar1 = FUN_1452a55e0(lVar9,lVar7,param_3,param_4);
            bVar13 = iVar1 == 0;
          }
          lVar4 = lVar9;
          if (!bVar13) goto LAB_144ef0cc3;
        }
      }
    }
  }
LAB_144ef0cb0:
  lVar4 = 0;
  if (param_1 == 0) {
    FUN_144ba0cd0(lVar9);
  }
LAB_144ef0cc3:
  FUN_144eedf20(param_4);
  return lVar4;
}



// FUNCTION 144ef0d20 FUN_144ef0d20 body=741 status=ok
// SIG undefined FUN_144ef0d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef0d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_58;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = 0x144ef0d49;
  lVar9 = 0;
  local_58 = 0;
  FUN_144eede20(param_4);
  lVar2 = FUN_144eede90(param_4);
  lVar3 = FUN_144eede90(param_4);
  lVar4 = FUN_144eede90(param_4);
  uVar5 = FUN_144eede90(param_4);
  lVar6 = FUN_144eede90(param_4);
  lVar7 = FUN_144eede90(param_4);
  lVar8 = FUN_144eede90(param_4);
  if (lVar8 != 0) {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = FUN_144ba0570();
    }
    if ((lVar9 != 0) && (iVar1 = FUN_144ba0bb0(lVar4,1), iVar1 != 0)) {
      FUN_144ba0bb0(lVar7,0);
      lVar8 = FUN_144ba06b0(lVar3,param_2);
      if ((lVar8 != 0) && (lVar8 = FUN_144ba06b0(lVar2,param_3), lVar8 != 0)) {
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((*(int *)(lVar3 + 0x10) != 0) || (iVar1 = FUN_144ba0ef0(lVar3,lVar2), -1 < iVar1)) {
          FUN_144ba1390(local_50);
          FUN_144ba0240(local_50,lVar3,4);
          iVar1 = FUN_1452a55e0(lVar3,local_50,lVar2,param_4);
          if (iVar1 == 0) goto LAB_144ef0fcd;
        }
        iVar10 = -1;
        iVar1 = FUN_144ba0340(lVar3);
        lVar8 = lVar7;
        lVar11 = lVar2;
        if (iVar1 == 0) {
          do {
            lVar7 = lVar4;
            lVar4 = lVar8;
            lVar2 = lVar3;
            FUN_144ba1390(local_50);
            FUN_144ba0240(local_50,lVar11,4);
            iVar1 = FUN_144eef830(uVar5,lVar6,local_50,lVar2,param_4);
            if (((iVar1 == 0) || (iVar1 = FUN_144eee590(lVar11,uVar5,lVar7,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_144eee4f0(lVar11,lVar11,lVar4), iVar1 == 0)) goto LAB_144ef0fcd;
            iVar10 = -iVar10;
            iVar1 = FUN_144ba0340(lVar6);
            lVar3 = lVar6;
            lVar8 = lVar7;
            lVar6 = lVar4;
            lVar4 = lVar11;
            lVar11 = lVar2;
          } while (iVar1 == 0);
          if (iVar10 < 0) goto LAB_144ef0f2d;
        }
        else {
LAB_144ef0f2d:
          iVar1 = FUN_144eee270(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_144ef0fcd;
        }
        iVar1 = FUN_144ba0350(lVar2);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = FUN_144ba0ef0(lVar7,param_3), iVar1 < 0)) {
            lVar3 = FUN_144ba06b0(lVar9,lVar7);
            bVar12 = lVar3 == 0;
          }
          else {
            iVar1 = FUN_1452a55e0(lVar9,lVar7,param_3,param_4);
            bVar12 = iVar1 == 0;
          }
          if (!bVar12) {
            *param_5 = 0;
            local_58 = lVar9;
            goto LAB_144ef0fe0;
          }
        }
      }
    }
  }
LAB_144ef0fcd:
  if (param_1 == 0) {
    FUN_144ba0cd0(lVar9);
  }
LAB_144ef0fe0:
  FUN_144eedf20(param_4);
  return local_58;
}



// FUNCTION 144ef1010 FUN_144ef1010 body=29 status=ok
// SIG undefined FUN_144ef1010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1010(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c026d0);
  return;
}



// FUNCTION 144ef1030 FUN_144ef1030 body=29 status=ok
// SIG undefined FUN_144ef1030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1030(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ef1050 FUN_144ef1050 body=29 status=ok
// SIG undefined FUN_144ef1050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1050(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149c026d0);
  return;
}



// FUNCTION 144ef1080 FUN_144ef1080 body=24 status=ok
// SIG undefined FUN_144ef1080(void)

void FUN_144ef1080(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



// FUNCTION 144ef10a0 FUN_144ef10a0 body=22 status=ok
// SIG undefined FUN_144ef10a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef10a0(void)

{
  FUN_144f03ba0();
  return;
}



// FUNCTION 144ef10c0 FUN_144ef10c0 body=72 status=ok
// SIG undefined FUN_144ef10c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef10c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar2 != (*(uint *)(param_2 + 4) & 0x100)) {
    uVar1 = 1;
    if (uVar2 != 0) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = FUN_144f03cb0();
  if (uVar2 != 0) {
    uVar1 = (ulonglong)(uint)-(int)uVar1;
  }
  return uVar1;
}



// FUNCTION 144ef1110 FUN_144ef1110 body=26 status=ok
// SIG undefined FUN_144ef1110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1110(undefined8 param_1,undefined8 param_2)

{
  FUN_144ef1a80(param_1,param_2,2);
  return;
}



// FUNCTION 144ef1130 FUN_144ef1130 body=26 status=ok
// SIG undefined FUN_144ef1130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1130(undefined8 param_1,undefined8 param_2)

{
  FUN_144ef1bb0(param_1,param_2,2);
  return;
}



// FUNCTION 144ef1150 FUN_144ef1150 body=29 status=ok
// SIG undefined FUN_144ef1150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1150(undefined8 param_1,int param_2)

{
  FUN_144ef1b10(param_1,(longlong)param_2,2);
  return;
}



// FUNCTION 144ef1170 FUN_144ef1170 body=152 status=ok
// SIG undefined FUN_144ef1170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef1170(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((param_1[1] & 0xfffffeffU) != 2) {
    FUN_144ba24f0(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0xffffffff;
  }
  iVar1 = FUN_144ef1990(local_res8,*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                        param_1[1] & 0x100);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (local_res8[0] + 0x80000000 < 0x100000000) {
    uVar2 = local_res8[0] & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144ef1210 FUN_144ef1210 body=26 status=ok
// SIG undefined FUN_144ef1210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1210(undefined8 param_1,undefined8 param_2)

{
  FUN_144ef1c70(param_1,param_2,2);
  return;
}



// FUNCTION 144ef1230 FUN_144ef1230 body=26 status=ok
// SIG undefined FUN_144ef1230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1230(undefined8 param_1,undefined8 param_2)

{
  FUN_144ef1d80(param_1,param_2,2);
  return;
}



// FUNCTION 144ef1250 FUN_144ef1250 body=118 status=ok
// SIG undefined FUN_144ef1250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef1250(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_res8 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_1[1] & 0xfffffeffU) == 10) && (*param_1 < 5)) {
    iVar1 = FUN_144ef1990(local_res8,*(undefined8 *)(param_1 + 2),(longlong)*param_1,
                          param_1[1] & 0x100,0x144ef125a);
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
      if (local_res8[0] + 0x80000000 < 0x100000000) {
        uVar2 = local_res8[0] & 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144ef12d0 FUN_144ef12d0 body=26 status=ok
// SIG undefined FUN_144ef12d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef12d0(undefined8 param_1,undefined8 param_2)

{
  FUN_144ef1d80(param_1,param_2,10);
  return;
}



// FUNCTION 144ef12f0 FUN_144ef12f0 body=43 status=ok
// SIG undefined FUN_144ef12f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef12f0(int *param_1,undefined8 param_2)

{
  FUN_144ef16a0(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_1[1] & 0x100,param_2);
  return;
}



// FUNCTION 144ef1320 FUN_144ef1320 body=446 status=ok
// SIG undefined FUN_144ef1320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef1320(longlong *param_1,longlong *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  int local_res18 [4];
  undefined8 uVar10;
  
  uVar10 = 0x144ef1334;
  uVar7 = (ulonglong)param_3;
  pbVar3 = (byte *)*param_2;
  if (uVar7 == 0) {
    FUN_144ba24f0(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a,0x144ef1334);
    return 0;
  }
  bVar2 = *pbVar3;
  if (uVar7 == 1) {
    uVar6 = 1;
    goto LAB_144ef1390;
  }
  uVar6 = 0;
  if (bVar2 == 0) {
    uVar6 = 1;
LAB_144ef1439:
    if ((bVar2 & 0x80) == (pbVar3[1] & 0x80)) {
      FUN_144ba24f0(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb,0x144ef1334);
      return 0;
    }
  }
  else if (bVar2 == 0xff) {
    uVar8 = 1;
    if (1 < uVar7) {
      do {
        pbVar1 = pbVar3 + uVar8;
        uVar8 = uVar8 + 1;
        uVar6 = (ulonglong)((uint)uVar6 | (uint)*pbVar1);
      } while (uVar8 < uVar7);
    }
    bVar9 = (int)uVar6 != 0;
    uVar6 = (ulonglong)bVar9;
    if (bVar9) goto LAB_144ef1439;
  }
  uVar6 = uVar7 - uVar6;
  if (uVar6 == 0) {
    return 0;
  }
LAB_144ef1390:
  if ((param_1 == (longlong *)0x0) || (lVar5 = *param_1, lVar5 == 0)) {
    lVar5 = FUN_144efe850();
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar5 + 4) = 2;
  }
  iVar4 = FUN_144f03d00(lVar5,0,uVar6 & 0xffffffff);
  if (iVar4 == 0) {
    FUN_144ba24f0(0xd,0xc2,0x41,"crypto\\asn1\\a_int.c",0x139,uVar10);
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar5)) {
      FUN_144efe870(lVar5);
    }
    return 0;
  }
  FUN_144ef17b0(*(undefined8 *)(lVar5 + 8),local_res18,*param_2,uVar7);
  if (local_res18[0] != 0) {
    *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x100;
  }
  *param_2 = *param_2 + uVar7;
  if (param_1 != (longlong *)0x0) {
    *param_1 = lVar5;
    return lVar5;
  }
  return lVar5;
}



// FUNCTION 144ef14e0 FUN_144ef14e0 body=321 status=ok
// SIG undefined FUN_144ef14e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef14e0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  byte local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar3 = (byte *)*param_3;
  uVar10 = (ulonglong)param_4;
  if (uVar10 == 0) {
    uVar6 = 0xe2;
    local_38 = 0x9a;
    uVar9 = 0xde;
LAB_144ef1611:
    FUN_144ba24f0(0xd,uVar6,uVar9,"crypto\\asn1\\a_int.c");
  }
  else {
    bVar2 = *pbVar3;
    uVar7 = 0;
    if (uVar10 == 1) {
      uVar10 = 1;
    }
    else {
      if (bVar2 == 0) {
        uVar8 = 1;
LAB_144ef15ca:
        if ((bVar2 & 0x80) == (pbVar3[1] & 0x80)) {
          uVar6 = 0xe2;
          local_38 = 0xbb;
          uVar9 = 0xdd;
          goto LAB_144ef1611;
        }
      }
      else {
        uVar8 = uVar7;
        if (bVar2 == 0xff) {
          uVar4 = 1;
          uVar5 = 0;
          if (1 < uVar10) {
            do {
              pbVar1 = pbVar3 + uVar4;
              uVar4 = uVar4 + 1;
              uVar5 = (uint)uVar8 | (uint)*pbVar1;
              uVar8 = (ulonglong)uVar5;
            } while (uVar4 < uVar10);
          }
          uVar8 = (ulonglong)(uVar5 != 0);
          if (uVar5 != 0) goto LAB_144ef15ca;
        }
      }
      uVar10 = uVar10 - uVar8;
      if (uVar10 == 0) goto LAB_144ef157c;
      if (8 < uVar10) {
        uVar6 = 0x65;
        local_38 = 0x267;
        uVar9 = 0xdf;
        goto LAB_144ef1611;
      }
    }
    FUN_144ef17b0(local_28,param_2);
    uVar8 = uVar7;
    if (uVar10 != 0) {
      do {
        pbVar3 = local_28 + uVar7;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)*pbVar3;
      } while (uVar7 < uVar10);
    }
    *param_1 = uVar8;
  }
LAB_144ef157c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144ef1630 FUN_144ef1630 body=101 status=ok
// SIG undefined FUN_144ef1630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1630(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ef163a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = 8;
  do {
    lVar2 = lVar1;
    local_20[lVar2 + -1] = (char)param_2;
    param_2 = param_2 >> 8;
    lVar1 = lVar2 + -1;
  } while (param_2 != 0);
  local_28 = param_1;
  FUN_144ef16a0(local_20 + lVar2 + -1,8 - (lVar2 + -1),param_3,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ef16a0 FUN_144ef16a0 body=257 status=ok
// SIG undefined FUN_144ef16a0(void)

void FUN_144ef16a0(byte *param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar6 = 0;
  uVar7 = 0;
  uVar10 = 0;
  uVar5 = uVar6;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    lVar4 = 1;
  }
  else {
    bVar2 = *param_1;
    if (param_3 == 0) {
      if (0x7f < bVar2) {
        lVar4 = param_2 + 1;
        uVar6 = param_2;
        uVar5 = 1;
        goto LAB_144ef1730;
      }
    }
    else {
      uVar10 = 0xff;
      if (0x80 < bVar2) {
        lVar4 = param_2 + 1;
        uVar6 = param_2;
        uVar5 = 1;
        goto LAB_144ef1730;
      }
      if (bVar2 == 0x80) {
        uVar5 = 1;
        if (1 < param_2) {
          do {
            pbVar9 = param_1 + uVar5;
            uVar5 = uVar5 + 1;
            uVar7 = (uint)uVar6 | (uint)*pbVar9;
            uVar6 = (ulonglong)uVar7;
          } while (uVar5 < param_2);
        }
        uVar10 = (uint)(byte)-(uVar7 != 0);
        uVar5 = (ulonglong)((byte)-(uVar7 != 0) & 1);
      }
    }
    lVar4 = uVar5 + param_2;
    uVar6 = param_2;
  }
LAB_144ef1730:
  if ((param_4 != (longlong *)0x0) && (puVar3 = (undefined1 *)*param_4, puVar3 != (undefined1 *)0x0)
     ) {
    uVar7 = uVar10 & 1;
    pbVar9 = param_1 + uVar6;
    *puVar3 = (char)uVar10;
    if (uVar6 != 0) {
      lVar8 = (longlong)pbVar9 - (longlong)param_1;
      do {
        pbVar1 = pbVar9 + -1;
        pbVar9 = pbVar9 + -1;
        lVar8 = lVar8 + -1;
        uVar7 = uVar7 + (*pbVar1 ^ uVar10);
        puVar3[lVar8 + uVar5] = (char)uVar7;
        uVar7 = uVar7 >> 8;
      } while (lVar8 != 0);
    }
    *param_4 = *param_4 + lVar4;
  }
  return;
}



// FUNCTION 144ef17b0 FUN_144ef17b0 body=350 status=ok
// SIG undefined FUN_144ef17b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef17b0(byte *param_1,uint *param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  
  if (param_4 == 0) {
    FUN_144ba24f0(0xd,0xe2,0xde,"crypto\\asn1\\a_int.c",0x9a,0x144ef17bc);
    return 0;
  }
  bVar2 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar2 & 0x80;
  }
  if (param_4 == 1) {
    if (param_1 != (byte *)0x0) {
      bVar3 = *param_3;
      if ((bVar2 & 0x80) != 0) {
        bVar3 = ~bVar3 + 1;
      }
      *param_1 = bVar3;
    }
    return 1;
  }
  uVar6 = 0;
  if (*param_3 == 0) {
    uVar6 = 1;
  }
  else {
    if (*param_3 != 0xff) goto LAB_144ef18a4;
    uVar4 = 1;
    uVar5 = 0;
    if (1 < param_4) {
      do {
        pbVar8 = param_3 + uVar4;
        uVar4 = uVar4 + 1;
        uVar5 = (uint)uVar6 | (uint)*pbVar8;
        uVar6 = (ulonglong)uVar5;
      } while (uVar4 < param_4);
    }
    uVar6 = (ulonglong)(uVar5 != 0);
    if (uVar5 == 0) goto LAB_144ef18a4;
  }
  if ((bVar2 & 0x80) == (param_3[1] & 0x80)) {
    FUN_144ba24f0(0xd,0xe2,0xdd,"crypto\\asn1\\a_int.c",0xbb,0x144ef17bc);
    return 0;
  }
LAB_144ef18a4:
  lVar9 = param_4 - uVar6;
  if (param_1 != (byte *)0x0) {
    bVar2 = -((bVar2 & 0x80) != 0);
    pbVar8 = param_3 + lVar9 + uVar6;
    uVar5 = bVar2 & 1;
    if (lVar9 != 0) {
      pbVar7 = pbVar8 + (-(longlong)param_3 - uVar6);
      do {
        pbVar1 = pbVar8 + -1;
        pbVar8 = pbVar8 + -1;
        pbVar7 = pbVar7 + -1;
        uVar5 = uVar5 + (bVar2 ^ *pbVar1);
        param_1[(longlong)pbVar7] = (byte)uVar5;
        uVar5 = uVar5 >> 8;
      } while (pbVar7 != (byte *)0x0);
    }
  }
  return lVar9;
}



// FUNCTION 144ef1910 FUN_144ef1910 body=113 status=ok
// SIG undefined FUN_144ef1910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1910(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < 9) {
    if (param_2 != 0) {
      uVar2 = 0;
      uVar3 = uVar2;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(uVar3 + param_2);
          uVar3 = uVar3 + 1;
          uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
        } while (uVar3 < param_3);
      }
      *param_1 = uVar2;
      return 1;
    }
  }
  else {
    FUN_144ba24f0(0xd,0xe1,0xdf,"crypto\\asn1\\a_int.c",0xd5);
  }
  return 0;
}



// FUNCTION 144ef1990 FUN_144ef1990 body=227 status=ok
// SIG undefined FUN_144ef1990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1990(ulonglong *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_3 < 9) {
    if (param_2 == 0) {
      return 0;
    }
    uVar2 = 0;
    uVar4 = uVar2;
    if (param_3 != 0) {
      do {
        pbVar1 = (byte *)(uVar4 + param_2);
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 << 8 | (ulonglong)*pbVar1;
      } while (uVar4 < param_3);
    }
    if (param_4 != 0) {
      if (uVar2 < 0x8000000000000000) {
        *param_1 = -uVar2;
        return 1;
      }
      if (uVar2 == 0x8000000000000000) {
        *param_1 = 0x8000000000000000;
        return 1;
      }
      uVar3 = 0xe0;
      uVar6 = 0x109;
      uVar5 = 0xe0;
      goto LAB_144ef1a5b;
    }
    if (uVar2 < 0x8000000000000000) {
      *param_1 = uVar2;
      return 1;
    }
    uVar6 = 0x110;
    uVar3 = 0xe0;
  }
  else {
    uVar6 = 0xd5;
    uVar3 = 0xe1;
  }
  uVar5 = 0xdf;
LAB_144ef1a5b:
  FUN_144ba24f0(0xd,uVar3,uVar5,"crypto\\asn1\\a_int.c",uVar6);
  return 0;
}



// FUNCTION 144ef1a80 FUN_144ef1a80 body=137 status=ok
// SIG undefined FUN_144ef1a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1a80(undefined8 param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_144ba24f0(0xd,0xe3,0x43,"crypto\\asn1\\a_int.c",0x142);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    FUN_144ba24f0(0xd,0xe3,0xe1,"crypto\\asn1\\a_int.c",0x146);
    return 0;
  }
  uVar1 = FUN_144ef1990(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2,param_2[1] & 0x100);
  return uVar1;
}



// FUNCTION 144ef1b10 FUN_144ef1b10 body=146 status=ok
// SIG undefined FUN_144ef1b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1b10(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [31];
  undefined1 auStack_19 [9];
  ulonglong local_10;
  undefined8 uStack_8;
  longlong lVar2;
  
  uStack_8 = 0x144ef1b1a;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(uint *)(param_1 + 4) = param_3;
  lVar2 = 8;
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 | 0x100;
  }
  else {
    do {
      lVar1 = lVar2 + -1;
      auStack_19[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar2 = lVar1;
    } while (param_2 != 0);
    param_3 = param_3 & 0xfffffeff;
  }
  *(uint *)(param_1 + 4) = param_3;
  FUN_144f03d00(param_1,auStack_19 + lVar1 + 1,8 - (int)lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144ef1bb0 FUN_144ef1bb0 body=181 status=ok
// SIG undefined FUN_144ef1bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1bb0(undefined8 param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_144ba24f0(0xd,0xe6,0x43,"crypto\\asn1\\a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != param_3) {
    FUN_144ba24f0(0xd,0xe6,0xe1,"crypto\\asn1\\a_int.c",0x169);
    return 0;
  }
  if (((uint)param_2[1] >> 8 & 1) != 0) {
    FUN_144ba24f0(0xd,0xe6,0xe2,"crypto\\asn1\\a_int.c",0x16d);
    return 0;
  }
  uVar1 = FUN_144ef1910(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  return uVar1;
}



// FUNCTION 144ef1c70 FUN_144ef1c70 body=270 status=ok
// SIG undefined FUN_144ef1c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144ef1c70(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ef1c85;
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)FUN_144f03c50(param_3);
  }
  else {
    param_2[1] = param_3;
    piVar3 = param_2;
  }
  if (piVar3 == (int *)0x0) {
    uVar5 = 0x1cf;
    uVar4 = 0x3a;
  }
  else {
    iVar1 = FUN_144ba0ba0(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_144ba0340(param_1), iVar1 == 0)) {
      piVar3[1] = piVar3[1] | 0x102;
    }
    iVar1 = FUN_144ba03d0(param_1);
    iVar1 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    iVar2 = FUN_144f03d00(piVar3,0,iVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_144ba0340(param_1);
      if (iVar2 == 0) {
        iVar1 = FUN_144ba08c0(param_1,*(undefined8 *)(piVar3 + 2));
      }
      else {
        **(undefined1 **)(piVar3 + 2) = 0;
      }
      *piVar3 = iVar1;
      return piVar3;
    }
    uVar5 = 0x1dc;
    uVar4 = 0x41;
  }
  FUN_144ba24f0(0xd,0xe5,uVar4,"crypto\\asn1\\a_int.c",uVar5,uVar6);
  if (piVar3 != param_2) {
    FUN_144efe870(piVar3);
  }
  return (int *)0x0;
}



// FUNCTION 144ef1d80 FUN_144ef1d80 body=180 status=ok
// SIG undefined FUN_144ef1d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef1d80(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ef1d8c;
  if ((param_1[1] & 0xfffffeff) != param_3) {
    FUN_144ba24f0(0xd,0xe4,0xe1,"crypto\\asn1\\a_int.c",499,0x144ef1d8c);
    return 0;
  }
  lVar1 = FUN_144ba0740(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0xe4,0x69,"crypto\\asn1\\a_int.c",0x1f9,uVar2);
    return 0;
  }
  if ((param_1[1] & 0x100) != 0) {
    FUN_144ba0b80(lVar1,1);
  }
  return lVar1;
}



// FUNCTION 144ef1e40 FUN_144ef1e40 body=40 status=ok
// SIG undefined FUN_144ef1e40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1e40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0x17) {
    return 0;
  }
  uVar1 = FUN_144ef2480(0,param_1);
  return uVar1;
}



// FUNCTION 144ef1e70 FUN_144ef1e70 body=129 status=ok
// SIG undefined FUN_144ef1e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1e70(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x144ef1e7f;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = FUN_1452aa5b0(&local_68,local_60);
  if ((lVar2 != 0) &&
     (((param_3 == 0 && (param_4 == 0)) ||
      (iVar1 = FUN_1452aa5e0(lVar2,param_3,param_4), iVar1 != 0)))) {
    FUN_144ef2970(param_1,lVar2,0x17);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144ef1f00 FUN_144ef1f00 body=40 status=ok
// SIG undefined FUN_144ef1f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1f00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0x18) {
    return 0;
  }
  uVar1 = FUN_144ef2480(0,param_1);
  return uVar1;
}



// FUNCTION 144ef1f30 FUN_144ef1f30 body=129 status=ok
// SIG undefined FUN_144ef1f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef1f30(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x144ef1f3f;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = FUN_1452aa5b0(&local_68,local_60);
  if ((lVar2 != 0) &&
     (((param_3 == 0 && (param_4 == 0)) ||
      (iVar1 = FUN_1452aa5e0(lVar2,param_3,param_4), iVar1 != 0)))) {
    FUN_144ef2970(param_1,lVar2,0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144ef1fc0 FUN_144ef1fc0 body=115 status=ok
// SIG undefined FUN_144ef1fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef1fc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ef1fcc;
  local_24 = 0x18;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  local_28 = (undefined4)lVar2;
  local_18 = 0;
  local_20 = param_2;
  iVar1 = FUN_144ef2480(0,&local_28);
  if (iVar1 != 0) {
    if ((param_1 != 0) && (iVar1 = FUN_144f03b30(param_1,&local_28), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144ef2040 FUN_144ef2040 body=35 status=ok
// SIG undefined FUN_144ef2040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef2040(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x18) {
    return 0;
  }
  uVar1 = FUN_144ef2290();
  return uVar1;
}



// FUNCTION 144ef2070 FUN_144ef2070 body=237 status=ok
// SIG undefined FUN_144ef2070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_144ef2070(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  __time64_t local_78 [5];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    _time64(local_78);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    lVar2 = FUN_1452aa5b0(local_78,&local_48);
    bVar3 = lVar2 == 0;
  }
  else {
    iVar1 = FUN_144ef2480(&local_48,param_3);
    bVar3 = iVar1 == 0;
  }
  if (!bVar3) {
    if (param_4 == 0) {
      _time64(local_78);
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_50 = 0;
      lVar2 = FUN_1452aa5b0(local_78,local_78 + 1);
      bVar3 = lVar2 == 0;
    }
    else {
      iVar1 = FUN_144ef2480(local_78 + 1,param_4);
      bVar3 = iVar1 == 0;
    }
    if (!bVar3) {
      FUN_1452aa790(param_1,param_2,&local_48,local_78 + 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ef2170 FUN_144ef2170 body=29 status=ok
// SIG undefined FUN_144ef2170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2170(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c02728);
  return;
}



// FUNCTION 144ef21a0 FUN_144ef21a0 body=159 status=ok
// SIG undefined FUN_144ef21a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef21a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x144ef21af;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  lVar2 = FUN_1452aa5b0(&local_68,local_60);
  if (lVar2 == 0) {
    local_78 = 0x14a;
    FUN_144ba24f0(0xd,0xd9,0xad,"crypto\\asn1\\a_time.c");
  }
  else if (((param_3 == 0) && (param_4 == 0)) ||
          (iVar1 = FUN_1452aa5e0(lVar2,param_3,param_4), iVar1 != 0)) {
    FUN_144ef2970(param_1,lVar2,0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ef2250 FUN_144ef2250 body=51 status=ok
// SIG undefined FUN_144ef2250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef2250(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_144ef1f00();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = FUN_144ef1e40();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ef2290 FUN_144ef2290 body=491 status=ok
// SIG undefined FUN_144ef2290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef2290(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  iVar3 = FUN_144ef2480(&local_58);
  if (iVar3 == 0) {
    FUN_144b9eb80(param_1,"Bad time value",0xe);
    return false;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  iVar3 = *param_2;
  cVar1 = *(char *)((iVar3 + -1) + lVar2);
  if (param_2[1] == 0x18) {
    iVar7 = 0;
    lVar9 = 0;
    if ((0xf < iVar3) && (lVar9 = 0, *(char *)(lVar2 + 0xe) == '.')) {
      lVar9 = lVar2 + 0xe;
      iVar7 = 1;
      if (0xf < iVar3) {
        iVar6 = 0xf;
        puVar8 = (undefined1 *)(lVar2 + 0xf);
        do {
          iVar4 = FUN_144ecfe30(*puVar8);
          if (iVar4 == 0) break;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < iVar3);
      }
    }
    puVar5 = &DAT_149e02088;
    if (cVar1 == 'Z') {
      puVar5 = &DAT_149c028a0;
    }
    iVar3 = FUN_144ec7640(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                          &DAT_149c02808 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                          local_58,iVar7,lVar9,local_44 + 0x76c,puVar5);
  }
  else {
    puVar5 = &DAT_149e02088;
    if (cVar1 == 'Z') {
      puVar5 = &DAT_149c028a0;
    }
    iVar3 = FUN_144ec7640(param_1,"%s %2d %02d:%02d:%02d %d%s",
                          &DAT_149c02808 + (longlong)local_48 * 4,local_4c,local_50,local_54,
                          local_58,local_44 + 0x76c,puVar5);
  }
  return 0 < iVar3;
}



// FUNCTION 144ef2480 FUN_144ef2480 body=1215 status=ok
// SIG undefined FUN_144ef2480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2480(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  ulonglong local_88;
  uint *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar18 = 0;
  local_94 = 0;
  local_88 = 6;
  local_90 = 6;
  local_80 = param_2;
  local_78 = param_1;
  if (param_2[1] == 0x17) {
    uVar4 = param_2[4] & 0x100;
    iVar5 = 0xd;
    if (uVar4 == 0) {
      iVar5 = 0xb;
    }
    local_94 = (uint)(uVar4 != 0);
    uVar9 = (ulonglong)(uVar4 != 0);
    local_88 = 5;
  }
  else {
    if (param_2[1] != 0x18) goto LAB_144ef27ce;
    local_90 = 7;
    if ((param_2[4] & 0x100) == 0) {
      iVar5 = 0xd;
      uVar9 = uVar18;
      local_88 = 6;
    }
    else {
      iVar5 = 0xf;
      local_94 = 1;
      uVar9 = 1;
    }
  }
  uVar4 = *param_2;
  uVar16 = (ulonglong)(int)uVar4;
  lVar2 = *(longlong *)(param_2 + 2);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar8 = uVar18;
  uVar12 = uVar18;
  uVar15 = uVar18;
  uVar17 = uVar18;
  local_98 = uVar4;
  if ((int)uVar4 < iVar5) goto LAB_144ef27ce;
  do {
    uVar13 = (uint)uVar15;
    if (((((int)uVar9 == 0) && (uVar12 == local_88)) &&
        (bVar3 = *(char *)(uVar8 + lVar2) - 0x2b, bVar3 < 0x30)) &&
       (uVar14 = 0, (0x800000000005U >> ((longlong)(char)bVar3 & 0x3fU) & 1) != 0)) break;
    iVar5 = FUN_144ecfe30(*(undefined1 *)(uVar8 + lVar2));
    if (iVar5 == 0) goto LAB_144ef27ce;
    cVar1 = *(char *)(uVar8 + lVar2);
    uVar9 = uVar8 + 1;
    if ((uVar9 == uVar16) || (iVar5 = FUN_144ecfe30(*(undefined1 *)(uVar9 + lVar2)), iVar5 == 0))
    goto LAB_144ef27ce;
    uVar13 = uVar13 + 2;
    iVar5 = (int)*(char *)(uVar9 + lVar2) + cVar1 * 10 + -0x210;
    if (uVar8 + 2 == uVar16) goto LAB_144ef27ce;
    iVar7 = (int)uVar17;
    uVar9 = uVar12;
    iVar6 = iVar7;
    if (local_80[1] == 0x17) {
      uVar9 = uVar12 + 1;
      iVar6 = iVar7 + 1;
    }
    if ((iVar5 < (int)(&DAT_149c02788)[uVar9]) || ((int)(&DAT_149c027b0)[uVar9] < iVar5))
    goto LAB_144ef27ce;
    switch(iVar6) {
    case 0:
      local_60 = CONCAT44((iVar5 + -0x13) * 100,(int)local_60);
      break;
    case 1:
      if (local_80[1] == 0x17) {
        if (iVar5 < 0x32) {
          local_60 = CONCAT44(iVar5 + 100,(int)local_60);
        }
        else {
          local_60 = CONCAT44(iVar5,(int)local_60);
        }
      }
      else {
        local_60 = CONCAT44(local_60._4_4_ + iVar5,(int)local_60);
      }
      break;
    case 2:
      local_60 = CONCAT44(local_60._4_4_,iVar5 + -1);
      break;
    case 3:
      if ((int)local_60 == 1) {
        iVar6 = FUN_144ef2ac0(local_60._4_4_ + 0x76c);
        iVar6 = iVar6 + 0x1c;
      }
      else {
        iVar6 = *(int *)(&DAT_149c027d8 + (longlong)(int)local_60 * 4);
      }
      if (iVar6 < iVar5) goto LAB_144ef27ce;
      uStack_68 = CONCAT44(iVar5,(undefined4)uStack_68);
      FUN_144ef2b20(&local_70);
      break;
    case 4:
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar5);
      break;
    case 5:
      local_70 = CONCAT44(iVar5,(undefined4)local_70);
      break;
    case 6:
      local_70 = CONCAT44(local_70._4_4_,iVar5);
    }
    uVar12 = uVar12 + 1;
    uVar9 = (ulonglong)local_94;
    uVar8 = uVar8 + 2;
    uVar15 = (ulonglong)uVar13;
    uVar17 = (ulonglong)(iVar7 + 1);
    uVar14 = local_94;
  } while ((longlong)uVar12 < (longlong)(ulonglong)local_90);
  if ((local_80[1] == 0x18) && (*(char *)((int)uVar13 + lVar2) == '.')) {
    if ((uVar14 != 0) ||
       ((uVar14 = uVar13 + 1, uVar14 == uVar4 ||
        (lVar10 = (longlong)(int)uVar14, uVar13 = uVar14, (longlong)uVar16 <= lVar10))))
    goto LAB_144ef27ce;
    do {
      iVar5 = FUN_144ecfe30(*(undefined1 *)(lVar10 + lVar2));
      if (iVar5 == 0) break;
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (longlong)uVar16);
    if ((uVar14 == uVar13) || (uVar13 == uVar4)) goto LAB_144ef27ce;
  }
  cVar1 = *(char *)((int)uVar13 + lVar2);
  if (cVar1 == 'Z') {
    uVar14 = uVar13 + 1;
  }
  else {
    if ((local_94 != 0) || ((cVar1 - 0x2bU & 0xfd) != 0)) goto LAB_144ef27ce;
    iVar5 = -1;
    if (cVar1 == '-') {
      iVar5 = 1;
    }
    uVar14 = uVar13 + 1;
    if (uVar13 + 5 != uVar4) goto LAB_144ef27ce;
    uVar9 = (ulonglong)local_90;
    pcVar11 = (char *)((int)uVar14 + lVar2);
    iVar6 = local_90 + 2;
    uVar4 = local_90;
    do {
      iVar7 = FUN_144ecfe30(*pcVar11);
      if (iVar7 == 0) goto LAB_144ef27ce;
      cVar1 = *pcVar11;
      iVar7 = FUN_144ecfe30(pcVar11[1]);
      if (iVar7 == 0) goto LAB_144ef27ce;
      iVar7 = (int)pcVar11[1] + cVar1 * 10 + -0x210;
      uVar8 = uVar9 + 1;
      if (local_80[1] != 0x17) {
        uVar8 = uVar9;
      }
      if ((iVar7 < (int)(&DAT_149c02788)[uVar8]) || ((int)(&DAT_149c027b0)[uVar8] < iVar7))
      goto LAB_144ef27ce;
      if (local_78 != (undefined4 *)0x0) {
        if (uVar9 == local_90) {
          uVar18 = (ulonglong)(uint)(iVar7 * 0xe10);
        }
        else if (uVar4 == local_90 + 1) {
          uVar18 = (ulonglong)(uint)((int)uVar18 + iVar7 * 0x3c);
        }
      }
      uVar14 = uVar14 + 2;
      pcVar11 = pcVar11 + 2;
      uVar4 = uVar4 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar4 < iVar6);
    uVar4 = local_98;
    if (((int)uVar18 != 0) &&
       (iVar5 = FUN_1452aa5e0(&local_70,0,(int)uVar18 * iVar5), uVar4 = local_98, iVar5 == 0))
    goto LAB_144ef27ce;
  }
  if ((uVar14 == uVar4) && (local_78 != (undefined4 *)0x0)) {
    *local_78 = (undefined4)local_70;
    local_78[1] = local_70._4_4_;
    local_78[2] = (undefined4)uStack_68;
    local_78[3] = uStack_68._4_4_;
    *(undefined8 *)(local_78 + 4) = local_60;
    *(undefined8 *)(local_78 + 6) = uStack_58;
    local_78[8] = local_50;
  }
LAB_144ef27ce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144ef2970 FUN_144ef2970 body=328 status=ok
// SIG undefined FUN_144ef2970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144ef2970(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ef298a;
  puVar3 = (undefined4 *)0x0;
  if (param_3 == -1) {
    param_3 = 0x18 - (uint)(param_2[5] - 0x32 < 100);
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_144ef29c4;
  }
  else if (param_3 != 0x18) goto LAB_144ef29c4;
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_144f03a20();
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = FUN_144f03d00(puVar3,0,0x14);
  if (iVar1 != 0) {
    puVar3[1] = param_3;
    if (param_3 == 0x18) {
      uVar2 = *param_2;
      iVar1 = param_2[4];
      uVar8 = param_2[1];
      iVar5 = param_2[5] + 0x76c;
      uVar7 = param_2[2];
      uVar6 = param_2[3];
      pcVar4 = "%04d%02d%02d%02d%02d%02dZ";
    }
    else {
      iVar1 = param_2[4];
      pcVar4 = "%02d%02d%02d%02d%02d%02dZ";
      iVar5 = (int)param_2[5] % 100;
      uVar2 = *param_2;
      uVar8 = param_2[1];
      uVar7 = param_2[2];
      uVar6 = param_2[3];
    }
    uVar2 = FUN_144ec7760(*(undefined8 *)(puVar3 + 2),0x14,pcVar4,iVar5,iVar1 + 1,uVar6,uVar7,uVar8,
                          uVar2,uVar9);
    *puVar3 = uVar2;
    return puVar3;
  }
LAB_144ef29c4:
  if (puVar3 != param_1) {
    FUN_144f03a80(puVar3);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 144ef2ac0 FUN_144ef2ac0 body=94 status=ok
// SIG undefined FUN_144ef2ac0(void)

undefined8 FUN_144ef2ac0(uint param_1)

{
  if (param_1 == ((int)param_1 / 400) * 400) {
    return 1;
  }
  if (param_1 != ((int)param_1 / 100) * 100) {
    param_1 = param_1 & 0x80000003;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffffc) + 1;
    }
    if (param_1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ef2b20 FUN_144ef2b20 body=239 status=ok
// SIG undefined FUN_144ef2b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2b20(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x14) + 0x76c;
  iVar5 = iVar2 + -1 + *(int *)(&DAT_149c02758 + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x1c) = iVar5;
  if (iVar1 < 2) {
    iVar6 = *(int *)(param_1 + 0x14) + 0x76b;
    iVar4 = 0xe;
  }
  else {
    iVar3 = FUN_144ef2ac0(iVar6);
    iVar4 = 2;
    *(int *)(param_1 + 0x1c) = iVar3 + iVar5;
  }
  iVar5 = iVar6 / 100;
  iVar6 = iVar6 % 100;
  *(int *)(param_1 + 0x18) =
       (((iVar4 + iVar1) * 0xd) / 5 + ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + 6 +
        iVar2 + iVar5 * 5 + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) + iVar6) % 7;
  return;
}



// FUNCTION 144ef2c10 FUN_144ef2c10 body=22 status=ok
// SIG undefined FUN_144ef2c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2c10(void)

{
  FUN_144f03ba0();
  return;
}



// FUNCTION 144ef2c30 FUN_144ef2c30 body=22 status=ok
// SIG undefined FUN_144ef2c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2c30(void)

{
  FUN_144f03cb0();
  return;
}



// FUNCTION 144ef2c50 FUN_144ef2c50 body=22 status=ok
// SIG undefined FUN_144ef2c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2c50(void)

{
  FUN_144f03d00();
  return;
}



// FUNCTION 144ef2c70 FUN_144ef2c70 body=308 status=ok
// SIG undefined FUN_144ef2c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef2c70(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,
                       undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  local_res10 = 0;
  *param_1 = 0;
  *param_2 = 0;
  uVar3 = FUN_144ef2e70(&local_res8,param_3,param_5);
  uVar4 = local_res8;
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  uVar5 = 1;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) != 0) {
      FUN_144ef2db0(local_res8);
      return 1;
    }
  }
  else {
    *param_2 = 1;
    if ((uVar3 & 2) != 0) {
      return 0xfffffffe;
    }
  }
  iVar1 = FUN_144ef39b0(local_res8);
  if (0 < iVar1) {
    if (iVar1 == 2) {
      FUN_144ef2db0();
      uVar5 = 1;
      if ((uVar3 & 4) != 0) {
        uVar5 = 0xfffffffe;
      }
LAB_144ef2d23:
      return (ulonglong)uVar5;
    }
    iVar1 = FUN_144ef36c0(uVar4,&local_res10);
    if (iVar1 != 0) {
      iVar2 = FUN_144ef3830(uVar4,param_4,local_res10);
      if (iVar1 == 2) {
        FUN_144babdb0(local_res10);
      }
      if (iVar2 != 0) {
        *param_1 = uVar4;
        if ((uVar3 & 4) != 0) {
          uVar4 = FUN_1452aa9a0(uVar4);
          iVar1 = FUN_144babbf0(uVar4);
          if (iVar1 < 1) {
            return 0xfffffffe;
          }
        }
        goto LAB_144ef2d23;
      }
    }
  }
  FUN_144ef2db0(uVar4);
  return 0;
}



// FUNCTION 144ef2db0 FUN_144ef2db0 body=189 status=ok
// SIG undefined FUN_144ef2db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef2db0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_144babdb0(param_1[3]);
    FUN_144babe00(param_1[4],FUN_144ef3a50);
    puVar1 = (undefined8 *)*param_1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 1)) {
      do {
        FUN_144b47250(*puVar1);
        FUN_144babe00(puVar1[1],FUN_1452aae00);
        FUN_1452aae00(puVar1[2]);
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    FUN_144babe00(param_1[2],FUN_1452aab20);
    FUN_144ea6530(*param_1,"crypto\\x509v3\\pcy_tree.c",0x271);
    FUN_144ea6530(param_1,"crypto\\x509v3\\pcy_tree.c",0x272);
  }
  return;
}



// FUNCTION 144ef2e70 FUN_144ef2e70 body=815 status=ok
// SIG undefined FUN_144ef2e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ef2e70(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  
  uVar14 = 1;
  iVar4 = FUN_144babbf0(param_2);
  *param_1 = 0;
  iVar6 = 0;
  if ((param_3 >> 8 & 1) == 0) {
    iVar6 = iVar4;
  }
  iVar18 = 0;
  if ((param_3 >> 9 & 1) == 0) {
    iVar18 = iVar4;
  }
  iVar13 = 0;
  if ((param_3 >> 10 & 1) == 0) {
    iVar13 = iVar4;
  }
  if (iVar4 == 1) {
    return 2;
  }
  iVar17 = iVar4 + -2;
  for (iVar19 = iVar17; uVar15 = uVar14, iVar3 = iVar17, -1 < iVar19; iVar19 = iVar19 + -1) {
    uVar7 = FUN_144babc00(param_2,iVar19);
    FUN_144ec5450(uVar7,0xffffffff,0);
    lVar8 = FUN_144f03590(uVar7);
    if (lVar8 == 0) {
      return 0;
    }
  }
  while ((-1 < iVar3 && ((0 < iVar6 || ((uVar14 & 2) == 0))))) {
    uVar7 = FUN_144babc00(param_2,iVar3);
    uVar5 = FUN_144ec5660(uVar7);
    if ((uVar5 >> 0xb & 1) != 0) {
      return 0xffffffff;
    }
    lVar8 = FUN_144f03590(uVar7);
    if (((uVar14 & 1) != 0) && (uVar14 = uVar15, *(longlong *)(lVar8 + 8) == 0)) {
      uVar15 = 2;
      uVar14 = 2;
    }
    if (0 < iVar6) {
      iVar19 = iVar6 + -1;
      if ((uVar5 & 0x20) != 0) {
        iVar19 = iVar6;
      }
      iVar2 = *(int *)(lVar8 + 0x14);
      iVar6 = iVar19;
      if ((-1 < iVar2) && (iVar2 < iVar19)) {
        iVar6 = iVar2;
      }
    }
    iVar3 = iVar3 + -1;
  }
  uVar15 = uVar14 | 4;
  if (iVar6 != 0) {
    uVar15 = uVar14;
  }
  if ((uVar15 & 1) != 0) {
    plVar9 = (longlong *)FUN_144ea6670(0x30,"crypto\\x509v3\\pcy_tree.c");
    if (plVar9 == (longlong *)0x0) {
      uVar20 = 0xa7;
    }
    else {
      lVar8 = FUN_144ea6670((longlong)iVar4 << 5,"crypto\\x509v3\\pcy_tree.c",0xb2);
      *plVar9 = lVar8;
      if (lVar8 != 0) {
        *(int *)(plVar9 + 1) = iVar4;
        uVar7 = FUN_144ea8d60(0x2ea);
        lVar10 = FUN_1452aa9c0(0,uVar7,0);
        if (lVar10 != 0) {
          lVar11 = FUN_1452aac80(lVar8,lVar10,0,plVar9);
          if (lVar11 != 0) {
            if (-1 < iVar17) {
              puVar16 = (uint *)(lVar8 + 0x18);
              do {
                uVar7 = FUN_144babc00(param_2,iVar17);
                uVar14 = FUN_144ec5660(uVar7);
                plVar12 = (longlong *)FUN_144f03590(uVar7);
                FUN_144bb6050(uVar7);
                puVar1 = puVar16 + 8;
                *(undefined8 *)(puVar16 + 2) = uVar7;
                if (*plVar12 == 0) {
                  *puVar1 = *puVar1 | 0x200;
                }
                if (iVar18 == 0) {
                  if (((uVar14 & 0x20) == 0) || (iVar17 == 0)) {
                    *puVar1 = *puVar1 | 0x200;
                  }
                }
                else {
                  iVar6 = iVar18 + -1;
                  if ((uVar14 & 0x20) != 0) {
                    iVar6 = iVar18;
                  }
                  iVar4 = (int)plVar12[2];
                  iVar18 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar18 = iVar4;
                  }
                }
                if (iVar13 == 0) {
                  *puVar1 = *puVar1 | 0x400;
                }
                else {
                  iVar6 = iVar13 + -1;
                  if ((uVar14 & 0x20) != 0) {
                    iVar6 = iVar13;
                  }
                  iVar4 = (int)plVar12[3];
                  iVar13 = iVar6;
                  if ((-1 < iVar4) && (iVar4 < iVar6)) {
                    iVar13 = iVar4;
                  }
                }
                iVar17 = iVar17 + -1;
                puVar16 = puVar1;
              } while (-1 < iVar17);
            }
            *param_1 = (longlong)plVar9;
            return uVar15;
          }
          FUN_1452aab20(lVar10);
        }
        FUN_144ef2db0(plVar9);
        return 0;
      }
      FUN_144ea6530(plVar9,"crypto\\x509v3\\pcy_tree.c",0xb3);
      uVar20 = 0xb4;
    }
    FUN_144ba24f0(0x22,0xac,0x41,"crypto\\x509v3\\pcy_tree.c",uVar20);
    return 0;
  }
  return uVar15;
}



// FUNCTION 144ef31a0 FUN_144ef31a0 body=263 status=ok
// SIG undefined FUN_144ef31a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef31a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_144babc00(*(undefined8 *)(param_2 + 8),iVar7);
      bVar1 = false;
      iVar6 = 0;
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + -0x18));
      if (iVar2 < 1) {
LAB_144ef3250:
        if ((*(longlong *)(param_1 + -0x10) != 0) &&
           (lVar3 = FUN_1452aac80(param_1,lVar3,*(longlong *)(param_1 + -0x10),0), lVar3 == 0)) {
          return 0;
        }
      }
      else {
        do {
          uVar4 = FUN_144babc00(*(undefined8 *)(param_1 + -0x18),iVar6);
          iVar2 = FUN_1452aae30(param_1 + -0x20,uVar4,*(undefined8 *)(lVar3 + 8));
          if (iVar2 != 0) {
            lVar5 = FUN_1452aac80(param_1,lVar3,uVar4,0);
            if (lVar5 == 0) {
              return 0;
            }
            bVar1 = true;
          }
          iVar6 = iVar6 + 1;
          iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + -0x18));
        } while (iVar6 < iVar2);
        if (!bVar1) goto LAB_144ef3250;
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_2 + 8));
    } while (iVar7 < iVar2);
  }
  return 1;
}



// FUNCTION 144ef32b0 FUN_144ef32b0 body=157 status=ok
// SIG undefined FUN_144ef32b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef32b0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(*param_4 + 8);
  }
  puVar2 = (uint *)FUN_1452aa9c0(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
    *puVar2 = *puVar2 | 4;
    *(undefined8 *)(puVar2 + 4) = uVar1;
    lVar3 = FUN_1452aac80(param_1,puVar2,param_4,param_5);
    if (lVar3 != 0) {
      return 1;
    }
    FUN_1452aab20(puVar2);
  }
  return 0;
}



// FUNCTION 144ef3350 FUN_144ef3350 body=394 status=ok
// SIG undefined FUN_144ef3350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3350(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + -0x18));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + -0x18),iVar8);
      if (((*(uint *)(param_1 + -8) & 0x400) == 0) && ((*(byte *)*puVar2 & 1) != 0)) {
        uVar6 = *(undefined8 *)((byte *)*puVar2 + 0x18);
        iVar1 = FUN_144babbf0(uVar6);
        if (*(int *)(puVar2 + 2) != iVar1) {
          iVar7 = 0;
          iVar1 = FUN_144babbf0(uVar6);
          if (0 < iVar1) {
            do {
              uVar3 = FUN_144babc00(uVar6,iVar7);
              lVar4 = FUN_1452aaba0(param_1,puVar2,uVar3);
              if ((lVar4 == 0) &&
                 (iVar1 = FUN_144ef32b0(param_1,param_2,uVar3,puVar2,param_3), iVar1 == 0))
              goto LAB_144ef34d6;
              iVar7 = iVar7 + 1;
              iVar1 = FUN_144babbf0(uVar6);
            } while (iVar7 < iVar1);
          }
        }
      }
      else if (*(int *)(puVar2 + 2) == 0) {
        puVar5 = (uint *)FUN_1452aa9c0(0,*(undefined8 *)((uint *)*puVar2 + 2),
                                       *(uint *)*puVar2 & 0x10);
        if (puVar5 == (uint *)0x0) goto LAB_144ef34d6;
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
        *puVar5 = *puVar5 | 4;
        *(undefined8 *)(puVar5 + 4) = uVar6;
        lVar4 = FUN_1452aac80(param_1,puVar5,puVar2,param_3);
        if (lVar4 == 0) {
          FUN_1452aab20(puVar5);
          goto LAB_144ef34d6;
        }
      }
      iVar8 = iVar8 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + -0x18));
    } while (iVar8 < iVar1);
  }
  if ((*(longlong *)(param_1 + -0x10) == 0) ||
     (lVar4 = FUN_1452aac80(param_1,*param_2,*(longlong *)(param_1 + -0x10),0), lVar4 != 0)) {
    uVar6 = 1;
  }
  else {
LAB_144ef34d6:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 144ef34e0 FUN_144ef34e0 body=337 status=ok
// SIG undefined FUN_144ef34e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef34e0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  if ((*(uint *)(param_2 + 0x18) & 0x400) != 0) {
    iVar3 = FUN_144babbf0(uVar2);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      puVar4 = (undefined8 *)FUN_144babc00(uVar2,iVar3);
      if ((*(byte *)*puVar4 & 3) != 0) {
        *(int *)(puVar4[1] + 0x10) = *(int *)(puVar4[1] + 0x10) + -1;
        FUN_144ea6530(puVar4,"crypto\\x509v3\\pcy_tree.c",0x193);
        FUN_144bac0f0(uVar2,iVar3);
      }
    }
  }
  do {
    lVar6 = param_2;
    uVar2 = *(undefined8 *)(lVar6 + -0x18);
    iVar3 = FUN_144babbf0(uVar2);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      lVar5 = FUN_144babc00(uVar2,iVar3);
      if (*(int *)(lVar5 + 0x10) == 0) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x10);
        *piVar1 = *piVar1 + -1;
        FUN_144ea6530(lVar5,"crypto\\x509v3\\pcy_tree.c",0x1a0);
        FUN_144bac0f0(uVar2,iVar3);
      }
    }
    lVar5 = *(longlong *)(lVar6 + -0x10);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) {
      if (*(longlong *)(lVar5 + 8) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x10);
        *piVar1 = *piVar1 + -1;
      }
      FUN_144ea6530(*(undefined8 *)(lVar6 + -0x10),"crypto\\x509v3\\pcy_tree.c",0x1a7);
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    param_2 = lVar6 + -0x20;
  } while (lVar6 + -0x20 != *param_1);
  return 2 - (uint)(*(longlong *)(lVar6 + -0x10) != 0);
}



// FUNCTION 144ef3640 FUN_144ef3640 body=117 status=ok
// SIG undefined FUN_144ef3640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef3640(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    lVar2 = FUN_1452aab80();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_144bac1a0(*param_1,param_2);
  if (-1 < iVar1) {
    return true;
  }
  iVar1 = FUN_144bac1c0(*param_1,param_2);
  return iVar1 != 0;
}



// FUNCTION 144ef36c0 FUN_144ef36c0 body=365 status=ok
// SIG undefined FUN_144ef36c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef36c0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *local_res8;
  
  if (*(longlong *)((longlong)(int)param_1[1] * 0x20 + -0x10 + *param_1) == 0) {
    plVar7 = param_1 + 3;
  }
  else {
    uVar4 = FUN_144ef3640(param_1 + 3);
    plVar7 = param_2;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  local_res8 = param_1 + 3;
  iVar10 = 1;
  if (1 < (int)param_1[1]) {
    puVar9 = (undefined8 *)(*param_1 + 8);
    do {
      lVar2 = puVar9[1];
      if (lVar2 == 0) break;
      puVar1 = puVar9 + 4;
      puVar9 = puVar9 + 4;
      iVar8 = 0;
      iVar3 = FUN_144babbf0(*puVar1);
      if (0 < iVar3) {
        do {
          lVar5 = FUN_144babc00(*puVar9,iVar8);
          if (*(longlong *)(lVar5 + 8) == lVar2) {
            if (*plVar7 == 0) {
              lVar6 = FUN_1452aab80();
              *plVar7 = lVar6;
              if (lVar6 == 0) goto LAB_144ef37e3;
            }
            iVar3 = FUN_144bac1a0(*plVar7,lVar5);
            if ((iVar3 < 0) && (iVar3 = FUN_144bac1c0(*plVar7,lVar5), iVar3 == 0)) {
LAB_144ef37e3:
              if (plVar7 == param_2) {
                FUN_144babdb0(*param_2);
                *param_2 = 0;
              }
              return 0;
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = FUN_144babbf0(*puVar9);
        } while (iVar8 < iVar3);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_1[1]);
  }
  if (plVar7 == param_2) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
    *param_2 = *local_res8;
  }
  return uVar4;
}



// FUNCTION 144ef3830 FUN_144ef3830 body=383 status=ok
// SIG undefined FUN_144ef3830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3830(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = FUN_144babbf0(param_2);
  if (iVar2 < 1) {
    return 1;
  }
  iVar7 = 0;
  iVar8 = 0;
  plVar1 = *(longlong **)((longlong)((int)param_1[1] + -1) * 0x20 + 0x10 + *param_1);
  iVar2 = FUN_144babbf0(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = FUN_144babc00(param_2,iVar8);
      iVar2 = FUN_144ea8fa0(uVar3);
      if (iVar2 == 0x2ea) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar2 = FUN_144babbf0(param_2);
    } while (iVar8 < iVar2);
  }
  iVar2 = FUN_144babbf0(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = FUN_144babc00(param_2,iVar7);
      lVar4 = FUN_1452aac40(param_3,uVar3);
      if (lVar4 == 0) {
        if (plVar1 != (longlong *)0x0) {
          puVar5 = (undefined4 *)FUN_1452aa9c0(0,uVar3,*(uint *)*plVar1 & 0x10);
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
          *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(*plVar1 + 0x10);
          *puVar5 = 0xc;
          lVar4 = FUN_1452aac80(0,puVar5,plVar1[1],param_1);
          goto LAB_144ef3947;
        }
      }
      else {
LAB_144ef3947:
        if (param_1[4] == 0) {
          lVar6 = FUN_144babca0();
          param_1[4] = lVar6;
          if (lVar6 == 0) {
            return 1;
          }
        }
        iVar2 = FUN_144bac1c0(param_1[4],lVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_144babbf0(param_2);
    } while (iVar7 < iVar2);
  }
  return 1;
}



// FUNCTION 144ef39b0 FUN_144ef39b0 body=158 status=ok
// SIG undefined FUN_144ef39b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef39b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = 1;
  puVar1 = (undefined8 *)*param_1;
  if (1 < *(int *)(param_1 + 1)) {
    do {
      puVar4 = puVar1 + 4;
      uVar3 = FUN_144f03590(*puVar4);
      iVar2 = FUN_144ef31a0(puVar4,uVar3);
      if ((iVar2 == 0) ||
         (((*(uint *)(puVar1 + 7) & 0x200) == 0 &&
          (iVar2 = FUN_144ef3350(puVar4,uVar3,param_1), iVar2 == 0)))) {
        return 0;
      }
      uVar3 = FUN_144ef34e0(param_1,puVar4);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      puVar1 = puVar4;
    } while (iVar5 < *(int *)(param_1 + 1));
  }
  return 1;
}



// FUNCTION 144ef3a50 FUN_144ef3a50 body=53 status=ok
// SIG undefined FUN_144ef3a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef3a50(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    FUN_144ea6530(param_1,"crypto\\x509v3\\pcy_tree.c",0x25c);
    return;
  }
  return;
}



// FUNCTION 144ef3a90 FUN_144ef3a90 body=21 status=ok
// SIG undefined FUN_144ef3a90(void)

bool FUN_144ef3a90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144ef3ab0 FUN_144ef3ab0 body=5 status=ok
// SIG undefined FUN_144ef3ab0(void)

undefined8 FUN_144ef3ab0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144ef3ac0 FUN_144ef3ac0 body=5 status=ok
// SIG undefined FUN_144ef3ac0(void)

undefined8 FUN_144ef3ac0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144ef3ad0 FUN_144ef3ad0 body=5 status=ok
// SIG undefined FUN_144ef3ad0(void)

undefined8 FUN_144ef3ad0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144ef3ae0 FUN_144ef3ae0 body=5 status=ok
// SIG undefined FUN_144ef3ae0(void)

undefined8 FUN_144ef3ae0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144ef3af0 FUN_144ef3af0 body=37 status=ok
// SIG undefined FUN_144ef3af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3af0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = FUN_144babbf0(*param_1);
  return uVar1;
}



// FUNCTION 144ef3b20 FUN_144ef3b20 body=77 status=ok
// SIG undefined FUN_144ef3b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3b20(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ea8d60(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = FUN_144ef3b70(param_1,lVar1,param_3);
  return uVar2;
}



// FUNCTION 144ef3b70 FUN_144ef3b70 body=161 status=ok
// SIG undefined FUN_144ef3b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef3b70(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return -1;
  }
  uVar1 = *param_1;
  iVar3 = FUN_144babbf0(uVar1);
  iVar2 = -1;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  do {
    iVar2 = iVar2 + 1;
    if (iVar3 <= iVar2) {
      return -1;
    }
    puVar5 = (undefined8 *)FUN_144babc00(uVar1,iVar2);
    iVar4 = FUN_14526beb0(*puVar5,param_2);
  } while (iVar4 != 0);
  return iVar2;
}



// FUNCTION 144ef3c20 FUN_144ef3c20 body=78 status=ok
// SIG undefined FUN_144ef3c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3c20(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_144babbf0(*param_1);
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_144babc00(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144ef3c70 FUN_144ef3c70 body=221 status=ok
// SIG undefined FUN_144ef3c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef3c70(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (((param_1 != (undefined8 *)0x0) && (iVar2 = FUN_144babbf0(*param_1), param_2 < iVar2)) &&
     (-1 < param_2)) {
    uVar1 = *param_1;
    lVar3 = FUN_144bac0f0(uVar1,param_2);
    iVar2 = FUN_144babbf0(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        iVar5 = *(int *)(lVar3 + 0x10) + -1;
      }
      else {
        lVar4 = FUN_144babc00(uVar1,param_2 + -1);
        iVar5 = *(int *)(lVar4 + 0x10);
      }
      lVar4 = FUN_144babc00(uVar1,param_2);
      if (iVar5 + 1 < *(int *)(lVar4 + 0x10)) {
        for (; param_2 < iVar2; param_2 = param_2 + 1) {
          lVar4 = FUN_144babc00(uVar1,param_2);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
        }
      }
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 144ef3d50 FUN_144ef3d50 body=330 status=ok
// SIG undefined FUN_144ef3d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef3d50(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ef3d64;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iVar3 = FUN_144babbf0(uVar1);
  iVar5 = iVar3;
  if ((param_3 <= iVar3) && (iVar5 = param_3, param_3 < 0)) {
    iVar5 = iVar3;
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  bVar7 = param_4 == 0;
  if (param_4 == -1) {
    if (iVar5 == 0) {
      bVar7 = true;
      iVar6 = 0;
      goto LAB_144ef3dfe;
    }
    iVar2 = iVar5 + -1;
  }
  else {
    iVar2 = iVar5;
    if (iVar3 <= iVar5) {
      if (iVar5 != 0) {
        lVar4 = FUN_144babc00(uVar1,iVar5 + -1);
        iVar6 = *(int *)(lVar4 + 0x10) + 1;
      }
      goto LAB_144ef3dfe;
    }
  }
  lVar4 = FUN_144babc00(uVar1,iVar2);
  iVar6 = *(int *)(lVar4 + 0x10);
LAB_144ef3dfe:
  lVar4 = FUN_144eabbc0(param_2);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = iVar6;
    iVar3 = FUN_144bac010(uVar1,lVar4,iVar5);
    if (iVar3 != 0) {
      if (bVar7) {
        iVar3 = FUN_144babbf0(uVar1);
        while (iVar5 = iVar5 + 1, iVar5 < iVar3) {
          lVar4 = FUN_144babc00(uVar1,iVar5);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        }
      }
      return 1;
    }
    FUN_144ba24f0(0xb,0x71,0x41,"crypto\\x509\\x509name.c",0xe3,uVar8);
  }
  FUN_144eabc00(lVar4);
  return 0;
}



// FUNCTION 144ef3ea0 FUN_144ef3ea0 body=185 status=ok
// SIG undefined FUN_144ef3ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef3ea0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ef3ec0;
  lVar1 = FUN_144ea90e0(param_2,0);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xb,0x83,0x77,"crypto\\x509\\x509name.c",0xfc);
    FUN_144ba2bd0(2,"name=",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144ef3fd0(param_1,lVar1,param_3,param_4,param_5,uVar2);
    FUN_144ed0860(lVar1);
  }
  return uVar2;
}



// FUNCTION 144ef3f60 FUN_144ef3f60 body=100 status=ok
// SIG undefined FUN_144ef3f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ef3f60(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uVar3;
  
  uVar3 = 0x144ef3f70;
  lVar2 = FUN_144ef3ea0(0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_144ef3d50(param_1,lVar2,in_stack_00000030,in_stack_00000038,in_stack_00000028,uVar3);
  FUN_144eabc00(lVar2);
  return uVar1;
}



// FUNCTION 144ef3fd0 FUN_144ef3fd0 body=177 status=ok
// SIG undefined FUN_144ef3fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef3fd0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = *param_1, lVar2 != 0)) ||
     (lVar2 = FUN_144eabbe0(), lVar2 != 0)) {
    iVar1 = FUN_144ef4090(lVar2,param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_144ef4110(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (longlong *)0x0) {
        return lVar2;
      }
      if (*param_1 != 0) {
        return lVar2;
      }
      *param_1 = lVar2;
      return lVar2;
    }
    if ((param_1 == (longlong *)0x0) || (lVar2 != *param_1)) {
      FUN_144eabc00(lVar2);
    }
  }
  return 0;
}



// FUNCTION 144ef4090 FUN_144ef4090 body=120 status=ok
// SIG undefined FUN_144ef4090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef4090(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    FUN_144ed0860(*param_1);
    lVar1 = FUN_14526bd70(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  FUN_144ba24f0(0xb,0x73,0x43,"crypto\\x509\\x509name.c",0x136,0x144ef40a0);
  return false;
}



// FUNCTION 144ef4110 FUN_144ef4110 body=227 status=ok
// SIG undefined FUN_144ef4110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef4110(undefined8 *param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ef412b;
  uVar4 = param_4 & 0xffffffff;
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != 0 || ((int)param_4 == 0)))) {
    if ((0 < (int)param_2) && ((param_2 >> 0xc & 1) != 0)) {
      uVar1 = FUN_144ea8fa0(*param_1);
      lVar3 = FUN_1452a13b0(param_1 + 1,param_3,param_4 & 0xffffffff,param_2,uVar1,uVar5);
      return lVar3 != 0;
    }
    if ((int)param_4 < 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(char *)(param_3 + uVar4) != '\0');
    }
    iVar2 = FUN_144f03d00(param_1[1],param_3,uVar4 & 0xffffffff);
    if (iVar2 != 0) {
      if (param_2 != 0xffffffff) {
        if (param_2 == 0xfffffffe) {
          uVar1 = FUN_1452aaf20(param_3,uVar4 & 0xffffffff);
          *(undefined4 *)(param_1[1] + 4) = uVar1;
          return true;
        }
        *(uint *)(param_1[1] + 4) = param_2;
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 144ef4200 FUN_144ef4200 body=12 status=ok
// SIG undefined FUN_144ef4200(void)

undefined8 FUN_144ef4200(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 144ef4210 FUN_144ef4210 body=13 status=ok
// SIG undefined FUN_144ef4210(void)

undefined8 FUN_144ef4210(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144ef4220 FUN_144ef4220 body=4 status=ok
// SIG undefined FUN_144ef4220(void)

undefined4 FUN_144ef4220(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144ef4230 FUN_144ef4230 body=34 status=ok
// SIG undefined FUN_144ef4230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4230(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144babbf0();
  return uVar1;
}



// FUNCTION 144ef4260 FUN_144ef4260 body=77 status=ok
// SIG undefined FUN_144ef4260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4260(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144ea8d60(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = FUN_144ef42b0(param_1,lVar1,param_3);
  return uVar2;
}



// FUNCTION 144ef42b0 FUN_144ef42b0 body=139 status=ok
// SIG undefined FUN_144ef42b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef42b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar4 = 0;
  if (-1 < param_3 + 1) {
    iVar4 = param_3 + 1;
  }
  iVar1 = FUN_144babbf0();
  while( true ) {
    if (iVar1 <= iVar4) {
      return -1;
    }
    puVar3 = (undefined8 *)FUN_144babc00(param_1,iVar4);
    iVar2 = FUN_14526beb0(*puVar3,param_2);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



// FUNCTION 144ef4340 FUN_144ef4340 body=75 status=ok
// SIG undefined FUN_144ef4340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4340(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_144babbf0();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_144babc00(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144ef4390 FUN_144ef4390 body=75 status=ok
// SIG undefined FUN_144ef4390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4390(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_144babbf0();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = FUN_144bac0f0(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144ef43e0 FUN_144ef43e0 body=55 status=ok
// SIG undefined FUN_144ef43e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef43e0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_144ef2c50(param_1 + 0x10,*(undefined8 *)(param_2 + 2),*param_2,param_4,0x144ef43ea);
  return iVar1 != 0;
}



// FUNCTION 144ef4420 FUN_144ef4420 body=12 status=ok
// SIG undefined FUN_144ef4420(void)

undefined8 FUN_144ef4420(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 144ef4430 FUN_144ef4430 body=13 status=ok
// SIG undefined FUN_144ef4430(void)

longlong FUN_144ef4430(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return param_1 + 0x10;
}



// FUNCTION 144ef4440 FUN_144ef4440 body=14 status=ok
// SIG undefined FUN_144ef4440(void)

bool FUN_144ef4440(longlong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = 0 < *(int *)(param_1 + 8);
  }
  return bVar1;
}



// FUNCTION 144ef4450 caseD_1 body=29 status=ok
// SIG undefined caseD_1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_144ef46d0::caseD_1(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_144ef44e0(*(undefined4 *)(param_1 + 0x18),param_2,param_3 | 0x18);
  return;
}



// FUNCTION 144ef4470 caseD_5 body=29 status=ok
// SIG undefined caseD_5(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_144ef46d0::caseD_5(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_144ef44e0(*(undefined4 *)(param_1 + 0x18),param_2,param_3 & 0xffffffe7);
  return;
}



// FUNCTION 144ef4490 caseD_0 body=78 status=ok
// SIG undefined caseD_0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 switchD_144ef46d0::caseD_0(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ec5450(param_2,0xffffffff,0);
  if ((((int)uVar1 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_2 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 144ef44e0 FUN_144ef44e0 body=287 status=ok
// SIG undefined FUN_144ef44e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef44e0(int param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = 0;
    if (plVar1[1] != 0) {
      iVar4 = 0;
      iVar2 = FUN_144babbf0();
      if (0 < iVar2) {
        do {
          uVar3 = FUN_144babc00(plVar1[1],iVar4);
          iVar2 = FUN_144ea8fa0(uVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if ((iVar2 == 0x38e) && ((param_3 & 0x10) != 0)) {
            return 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = FUN_144babbf0(plVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*plVar1 != 0) {
      iVar2 = FUN_144babbf0();
      if (0 < iVar2) {
        do {
          uVar3 = FUN_144babc00(*plVar1,iVar5);
          iVar2 = FUN_144ea8fa0(uVar3);
          if ((iVar2 == param_1) || ((iVar2 == 0x38e && ((param_3 & 0x10) != 0)))) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = FUN_144babbf0(*plVar1);
        } while (iVar5 < iVar2);
      }
      return 2;
    }
  }
  if (((((param_3 & 8) != 0) && (uVar3 = FUN_144ec5450(param_2,0xffffffff,0), (int)uVar3 == 1)) &&
      ((param_3 & 4) == 0)) && ((*(uint *)(param_2 + 0xd0) & 0x2000) != 0)) {
    return uVar3;
  }
  return 3;
}



// FUNCTION 144ef4600 FUN_144ef4600 body=285 status=ok
// SIG undefined FUN_144ef4600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144ef4600(longlong param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int local_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ef4615;
  if (param_2 == 0) {
    uVar1 = FUN_144ef44e0(0x38e,param_1,param_3 | 8);
    return uVar1;
  }
  if (param_2 - 1U < 8) {
    iVar3 = param_2 + -1;
  }
  else {
    if (DAT_14c7975c8 == 0) goto LAB_144ef46ff;
    local_38[0] = param_2;
    iVar3 = FUN_144bac1a0(DAT_14c7975c8,local_38);
    if (iVar3 < 0) goto LAB_144ef46ff;
    iVar3 = iVar3 + 8;
  }
  if (iVar3 != -1) {
    if (iVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000144ef469d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_DAT_00000008)(0,param_1,param_3);
      return uVar1;
    }
    if (iVar3 < 8) {
      switch(iVar3) {
      case 0:
        goto switchD_144ef46d0_caseD_0;
      default:
        uVar1 = FUN_144ef44e0(*(undefined4 *)((longlong)iVar3 * 0x28 + 0x14c70ee98),param_1,
                              param_3 | 0x18);
        return uVar1;
      case 5:
      case 6:
        uVar1 = FUN_144ef44e0(*(undefined4 *)((longlong)iVar3 * 0x28 + 0x14c70ee98),param_1,
                              param_3 & 0xffffffe7);
        return uVar1;
      }
    }
    lVar2 = FUN_144babc00(DAT_14c7975c8,iVar3 + -8);
                    /* WARNING: Could not recover jumptable at 0x000144ef46fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 8))(lVar2,param_1,param_3);
    return uVar1;
  }
LAB_144ef46ff:
  uVar1 = (*(code *)PTR_FUN_14c70ee70)(param_2,param_1,param_3);
  return uVar1;
switchD_144ef46d0_caseD_0:
  uStack_10 = 0x144ef44a0;
  uStack_30 = 0x144ef44b7;
  uVar1 = FUN_144ec5450(param_1,0xffffffff,0);
  if ((((int)uVar1 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_1 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 144ef4720 FUN_144ef4720 body=78 status=ok
// SIG undefined FUN_144ef4720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef4720(int param_1)

{
  int iVar1;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x144ef472a;
  if (param_1 - 1U < 8) {
    return param_1 + -1;
  }
  if (DAT_14c7975c8 != 0) {
    local_38[0] = param_1;
    iVar1 = FUN_144bac1a0(DAT_14c7975c8,local_38);
    if (-1 < iVar1) {
      return iVar1 + 8;
    }
  }
  return -1;
}



// FUNCTION 144ef47a0 FUN_144ef47a0 body=29 status=ok
// SIG undefined FUN_144ef47a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef47a0(void)

{
  FUN_144efec20(&DAT_149c02bb0);
  return;
}



// FUNCTION 144ef47c0 FUN_144ef47c0 body=29 status=ok
// SIG undefined FUN_144ef47c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef47c0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c02bb0);
  return;
}



// FUNCTION 144ef47e0 FUN_144ef47e0 body=207 status=ok
// SIG undefined FUN_144ef47e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef47e0(int *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (((param_1 != (int *)0x0) && (uVar2 = uVar3, param_2 != (int *)0x0)) && (*param_1 == *param_2))
  {
    switch(*param_1) {
    case 0:
      uVar2 = FUN_144ef4950(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 1:
    case 2:
    case 3:
    case 6:
      uVar2 = FUN_144f03cb0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 4:
      uVar2 = FUN_144bb54b0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 5:
      uVar2 = FUN_144ef49b0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 7:
      uVar2 = FUN_144ef2c30(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    case 8:
      uVar1 = FUN_14526beb0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),0xffffffff,
                            param_1,0x144ef47ea);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}



// FUNCTION 144ef48e0 FUN_144ef48e0 body=29 status=ok
// SIG undefined FUN_144ef48e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef48e0(void)

{
  FUN_144efec20(&DAT_149c02c00);
  return;
}



// FUNCTION 144ef4900 FUN_144ef4900 body=29 status=ok
// SIG undefined FUN_144ef4900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef4900(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c02c00);
  return;
}



// FUNCTION 144ef4930 FUN_144ef4930 body=29 status=ok
// SIG undefined FUN_144ef4930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef4930(void)

{
  FUN_144efec20(&DAT_149c029f0);
  return;
}



// FUNCTION 144ef4950 FUN_144ef4950 body=87 status=ok
// SIG undefined FUN_144ef4950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_14526beb0(*param_1,*param_2);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_144ed0680(param_1[1],param_2[1]);
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 144ef49b0 FUN_144ef49b0 body=131 status=ok
// SIG undefined FUN_144ef49b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef49b0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    if (*param_1 == 0) {
      if (*param_2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (*param_2 == 0) {
        return 1;
      }
      if ((*param_1 != 0) && (uVar1 = FUN_144f03cb0(), (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    if ((param_1[1] != 0) && (param_2[1] != 0)) {
      uVar1 = FUN_144f03cb0();
      return uVar1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144ef4a60 FUN_144ef4a60 body=462 status=ok
// SIG undefined FUN_144ef4a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ef4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ef4a84;
  puVar4 = (undefined8 *)0x0;
  plVar2 = (longlong *)FUN_144efec20(&DAT_149c02e90);
  if (plVar2 == (longlong *)0x0) {
LAB_144ef4bcf:
    FUN_144ba24f0(0x22,0x93,0x41,"crypto\\x509v3\\v3_ncons.c",0xa1);
LAB_144ef4bef:
    FUN_144eff330(plVar2,&DAT_149c02e90);
    FUN_144eff330(puVar4,&DAT_149c02e20);
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar6 = 0;
    iVar1 = FUN_144babbf0(param_3);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_144babc00(param_3,iVar6);
        iVar1 = strncmp(*(char **)(lVar3 + 8),"permitted",9);
        if ((iVar1 == 0) && (*(char *)(*(longlong *)(lVar3 + 8) + 9) != '\0')) {
          local_30 = *(longlong *)(lVar3 + 8) + 10;
          plVar5 = plVar2;
        }
        else {
          iVar1 = strncmp(*(char **)(lVar3 + 8),"excluded",8);
          if ((iVar1 != 0) || (*(char *)(*(longlong *)(lVar3 + 8) + 8) == '\0')) {
            FUN_144ba24f0(0x22,0x93,0x8f,"crypto\\x509v3\\v3_ncons.c",0x8e);
            puVar4 = (undefined8 *)0x0;
            goto LAB_144ef4bef;
          }
          plVar5 = plVar2 + 1;
          local_30 = *(longlong *)(lVar3 + 8) + 9;
        }
        local_28 = *(undefined8 *)(lVar3 + 0x10);
        puVar4 = (undefined8 *)FUN_144efec20(&DAT_149c02e20);
        if (puVar4 == (undefined8 *)0x0) goto LAB_144ef4bcf;
        lVar3 = FUN_1452abf80(*puVar4,param_1,param_2,local_38,1);
        if (lVar3 == 0) goto LAB_144ef4bef;
        if (*plVar5 == 0) {
          lVar3 = FUN_144babca0();
          *plVar5 = lVar3;
          if (lVar3 == 0) goto LAB_144ef4bcf;
        }
        iVar1 = FUN_144bac1c0(*plVar5,puVar4);
        if (iVar1 == 0) goto LAB_144ef4bcf;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_144babbf0(param_3);
      } while (iVar6 < iVar1);
    }
  }
  return plVar2;
}



// FUNCTION 144ef4c30 FUN_144ef4c30 body=117 status=ok
// SIG undefined FUN_144ef4c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef4c30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_144ef4fa0(param_1,*param_2,param_3,param_4,"Permitted",0x144ef4c4a);
  FUN_144ef4fa0(param_1,param_2[1],param_3,param_4 & 0xffffffff,"Excluded");
  return 1;
}



// FUNCTION 144ef4cb0 FUN_144ef4cb0 body=446 status=ok
// SIG undefined FUN_144ef4cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef4cb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28 [2];
  longlong local_20;
  
  local_20 = 0x144ef4cd4;
  lVar5 = FUN_144bb4f50();
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x100));
  iVar2 = FUN_144ef3af0(lVar5);
  iVar8 = 0;
  iVar7 = 0;
  if (iVar2 < 0) {
    iVar2 = iVar7;
  }
  if (iVar1 < 0) {
    iVar1 = iVar7;
  }
  if (iVar2 <= 0x7fffffff - iVar1) {
    iVar3 = FUN_144babbf0(param_2[1]);
    iVar4 = FUN_144babbf0(*param_2);
    if (iVar4 < 0) {
      iVar4 = iVar7;
    }
    if (iVar3 < 0) {
      iVar3 = iVar7;
    }
    if ((iVar4 <= 0x7fffffff - iVar3) &&
       ((iVar1 + iVar2 < 1 || (iVar4 + iVar3 <= (int)(0x100000 / (longlong)(iVar1 + iVar2)))))) {
      iVar1 = FUN_144ef3af0(lVar5);
      if (0 < iVar1) {
        local_28[0] = 4;
        local_20 = lVar5;
        uVar6 = FUN_144ef5170(local_28,param_2);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        local_28[0] = 1;
        for (iVar1 = FUN_144ef3b20(lVar5,0x30,0xffffffff); iVar1 != -1;
            iVar1 = FUN_144ef3b20(lVar5,0x30,iVar1)) {
          uVar6 = FUN_144ef3c20(lVar5,iVar1);
          local_20 = FUN_144ef4210(uVar6);
          if (*(int *)(local_20 + 4) != 0x16) {
            return 0x35;
          }
          uVar6 = FUN_144ef5170(local_28,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
      }
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x100));
      if (0 < iVar1) {
        do {
          uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x100),iVar8);
          uVar6 = FUN_144ef5170(uVar6,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar8 = iVar8 + 1;
          iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x100));
        } while (iVar8 < iVar1);
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144ef4e70 FUN_144ef4e70 body=267 status=ok
// SIG undefined FUN_144ef4e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef4e70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_48 [2];
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ef4e88;
  uVar3 = FUN_144bb4f50();
  local_28 = 0;
  local_34 = 0x16;
  local_40 = &local_38;
  local_48[0] = 2;
  iVar1 = FUN_144ef3b20(uVar3,0xd);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    uVar4 = FUN_144ef3c20(uVar3,iVar1);
    uVar4 = FUN_144ef4210(uVar4);
    uVar5 = FUN_144ef57a0(uVar4,&local_res20,&local_res18);
    uVar4 = local_res20;
    if ((int)uVar5 != 0) break;
    if (local_res18 != 0) {
      local_30 = local_res20;
      local_38 = (undefined4)local_res18;
      uVar2 = FUN_144ef5170(local_48,param_2);
      FUN_144ea6530(uVar4,"crypto\\x509v3\\v3_ncons.c",0x1be);
      if (uVar2 != 0) {
        return (ulonglong)uVar2;
      }
    }
    iVar1 = FUN_144ef3b20(uVar3,0xd,iVar1);
  }
  return uVar5;
}



// FUNCTION 144ef4f80 FUN_144ef4f80 body=29 status=ok
// SIG undefined FUN_144ef4f80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef4f80(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c02e90);
  return;
}



// FUNCTION 144ef4fa0 FUN_144ef4fa0 body=452 status=ok
// SIG undefined FUN_144ef4fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef4fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_144babbf0(param_2);
  if (0 < iVar2) {
    FUN_144ec7640(param_3,"%*s%s:\n",param_4,&DAT_149e02088,param_5);
  }
  iVar5 = 0;
  iVar2 = FUN_144babbf0(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_2,iVar5);
      FUN_144ec7640(param_3,&DAT_149c02f70,param_4 + 2,&DAT_149e02088);
      if (*(int *)*puVar3 == 7) {
        piVar1 = *(int **)((int *)*puVar3 + 2);
        puVar6 = *(undefined1 **)(piVar1 + 2);
        iVar2 = *piVar1;
        FUN_144b9ebc0(param_3,&DAT_149c02f74);
        if (iVar2 == 8) {
          FUN_144ec7640(param_3,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar6,puVar6[1],puVar6[2],puVar6[3],
                        puVar6[4],puVar6[5],puVar6[6],puVar6[7]);
        }
        else if (iVar2 == 0x20) {
          iVar2 = 0;
          do {
            FUN_144ec7640(param_3,&DAT_149c02f90,CONCAT11(*puVar6,puVar6[1]));
            puVar6 = puVar6 + 2;
            if (iVar2 == 7) {
              pwVar4 = L"/Disabled";
LAB_144ef50fc:
              FUN_144b9ebc0(param_3,pwVar4);
            }
            else if (iVar2 != 0xf) {
              pwVar4 = L":Asset";
              goto LAB_144ef50fc;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x10);
        }
        else {
          FUN_144ec7640(param_3,"IP Address:<invalid>");
        }
      }
      else {
        FUN_1452ab980(param_3);
      }
      FUN_144b9ebc0(param_3,&DAT_149dfc0af);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_144babbf0(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}



// FUNCTION 144ef5170 FUN_144ef5170 body=277 status=ok
// SIG undefined FUN_144ef5170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef5170(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = FUN_144babbf0(*param_2);
  iVar5 = iVar6;
  iVar4 = iVar6;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(*param_2,iVar5);
      if (*param_1 == *(int *)*puVar2) {
        if (puVar2[1] != 0) {
          return 0x31;
        }
        if (puVar2[2] != 0) {
          return 0x31;
        }
        if (iVar4 != 2) {
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          uVar3 = FUN_144ef5290(param_1);
          if ((int)uVar3 == 0) {
            iVar4 = 2;
          }
          else if ((int)uVar3 != 0x2f) {
            return uVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_144babbf0(*param_2);
    } while (iVar5 < iVar1);
    if (iVar4 == 1) {
      return 0x2f;
    }
  }
  iVar5 = FUN_144babbf0(param_2[1]);
  if (0 < iVar5) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(param_2[1],iVar6);
      if (*param_1 == *(int *)*puVar2) {
        if ((puVar2[1] != 0) || (puVar2[2] != 0)) {
          return 0x31;
        }
        uVar3 = FUN_144ef5290(param_1);
        if ((int)uVar3 == 0) {
          return 0x30;
        }
        if ((int)uVar3 != 0x2f) {
          return uVar3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = FUN_144babbf0(param_2[1]);
    } while (iVar6 < iVar5);
  }
  return 0;
}



// FUNCTION 144ef5290 FUN_144ef5290 body=219 status=ok
// SIG undefined FUN_144ef5290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef5290(longlong param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar3 = *param_2;
  if (iVar3 == 1) {
    uVar4 = FUN_144ef5400(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  if (iVar3 == 2) {
    iVar3 = **(int **)(param_2 + 2);
    pcVar2 = *(char **)(*(int **)(param_2 + 2) + 2);
    lVar5 = *(longlong *)(*(int **)(param_1 + 8) + 2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar3 <= iVar1) &&
       (((iVar1 <= iVar3 || (lVar5 = lVar5 + (iVar1 - iVar3), *pcVar2 == '.')) ||
        (*(char *)(lVar5 + -1) == '.')))) {
      iVar3 = FUN_144ef5740(pcVar2,lVar5,(longlong)iVar3,pcVar2,0x144ef529a);
      return (ulonglong)(-(uint)(iVar3 != 0) & 0x2f);
    }
    return 0x2f;
  }
  if (iVar3 == 4) {
    uVar4 = FUN_144ef5370(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  if (iVar3 != 6) {
    if (iVar3 != 7) {
      return 0x33;
    }
    uVar4 = FUN_144ef56b0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  uVar4 = FUN_144ef5580(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  return uVar4;
}



// FUNCTION 144ef5370 FUN_144ef5370 body=137 status=ok
// SIG undefined FUN_144ef5370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ef5370(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = FUN_144eabc80(param_1,0), iVar1 < 0)) {
    return 0x11;
  }
  if ((*(int *)(param_2 + 8) != 0) && (iVar1 = FUN_144eabc80(param_2,0), iVar1 < 0)) {
    return 0x11;
  }
  if (*(int *)(param_2 + 0x20) <= *(int *)(param_1 + 0x20)) {
    iVar1 = memcmp(*(void **)(param_2 + 0x18),*(void **)(param_1 + 0x18),
                   (longlong)*(int *)(param_2 + 0x20));
    return -(iVar1 != 0) & 0x2f;
  }
  return 0x2f;
}



// FUNCTION 144ef5400 FUN_144ef5400 body=383 status=ok
// SIG undefined FUN_144ef5400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef5400(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *_Str1;
  char *pcVar9;
  size_t _MaxCount;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar1 = *param_2;
  uVar12 = (ulonglong)(int)uVar1;
  _Str1 = *(char **)(param_2 + 2);
  pcVar8 = *(char **)(param_1 + 2);
  uVar3 = uVar12;
  uVar7 = uVar12;
  uVar11 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar11 = (uint)uVar7;
      if (_Str1[uVar3 - 1] == '@') break;
      uVar11 = uVar11 - 1;
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)uVar11;
    } while (0 < (longlong)uVar3);
  }
  if (uVar11 == 0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = _Str1 + (int)(uVar11 - 1);
  }
  uVar11 = *param_1;
  uVar7 = (ulonglong)(int)uVar11;
  uVar3 = uVar7;
  uVar6 = uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar6 = (uint)uVar3;
      if (pcVar8[uVar7 - 1] == '@') break;
      uVar6 = uVar6 - 1;
      uVar7 = uVar7 - 1;
      uVar3 = (ulonglong)uVar6;
    } while (0 < (longlong)uVar7);
  }
  if ((uVar6 == 0) || (pcVar9 = pcVar8 + (int)(uVar6 - 1), pcVar9 == (char *)0x0)) {
    return 0x35;
  }
  if (pcVar10 == (char *)0x0) {
    if ((0 < (int)uVar1) && (*_Str1 == '.')) {
      if ((int)uVar11 <= (int)uVar1) {
        return 0x2f;
      }
      pcVar8 = pcVar8 + (int)(uVar11 - uVar1);
      goto LAB_144ef556a;
    }
  }
  else {
    if (pcVar10 != _Str1) {
      _MaxCount = (longlong)pcVar9 - (longlong)pcVar8;
      if ((longlong)pcVar10 - (longlong)_Str1 != _MaxCount) {
        return 0x2f;
      }
      pvVar4 = memchr(_Str1,0,(longlong)pcVar10 - (longlong)_Str1);
      if ((pvVar4 != (void *)0x0) || (pvVar4 = memchr(pcVar8,0,_MaxCount), pvVar4 != (void *)0x0)) {
        return 0x35;
      }
      iVar2 = strncmp(_Str1,pcVar8,_MaxCount);
      if (iVar2 != 0) {
        return 0x2f;
      }
    }
    _Str1 = pcVar10 + 1;
  }
  pcVar8 = pcVar9 + 1;
  uVar12 = ((longlong)(int)*param_1 - (longlong)pcVar8) + *(longlong *)(param_1 + 2);
  if (((longlong)(int)*param_2 - (longlong)_Str1) + *(longlong *)(param_2 + 2) != uVar12) {
    return 0x2f;
  }
LAB_144ef556a:
  uVar5 = FUN_144ef5740(_Str1,pcVar8,uVar12);
  if ((int)uVar5 != 0) {
    return 0x2f;
  }
  return uVar5;
}



// FUNCTION 144ef5580 FUN_144ef5580 body=289 status=ok
// SIG undefined FUN_144ef5580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef5580(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  pcVar2 = *(char **)(param_2 + 2);
  pvVar4 = memchr(*(void **)(param_1 + 2),0x3a,(longlong)*param_1);
  if ((((pvVar4 == (void *)0x0) ||
       (((longlong)*param_1 + *(longlong *)(param_1 + 2)) - (longlong)pvVar4 < 3)) ||
      (*(char *)((longlong)pvVar4 + 1) != '/')) || (*(char *)((longlong)pvVar4 + 2) != '/')) {
    return 0x35;
  }
  pvVar4 = (void *)((longlong)pvVar4 + 3);
  pvVar5 = memchr(pvVar4,0x3a,((longlong)*param_1 + *(longlong *)(param_1 + 2)) - (longlong)pvVar4);
  if ((pvVar5 == (void *)0x0) &&
     (pvVar5 = memchr(pvVar4,0x2f,
                      ((longlong)*param_1 - (longlong)pvVar4) + *(longlong *)(param_1 + 2)),
     pvVar5 == (void *)0x0)) {
    iVar3 = (param_1[2] - (int)pvVar4) + *param_1;
  }
  else {
    iVar3 = (int)pvVar5 - (int)pvVar4;
  }
  if (iVar3 != 0) {
    iVar1 = *param_2;
    lVar7 = (longlong)iVar1;
    if ((iVar1 < 1) || (*pcVar2 != '.')) {
      if (iVar1 != iVar3) {
        return 0x2f;
      }
      lVar7 = (longlong)iVar3;
    }
    else {
      if (iVar3 <= iVar1) {
        return 0x2f;
      }
      pvVar4 = (void *)((iVar3 - lVar7) + (longlong)pvVar4);
    }
    uVar6 = FUN_144ef5740(pvVar4,pcVar2,lVar7);
    if ((int)uVar6 != 0) {
      return 0x2f;
    }
    return uVar6;
  }
  return 0x35;
}



// FUNCTION 144ef56b0 FUN_144ef56b0 body=136 status=ok
// SIG undefined FUN_144ef56b0(void)

undefined8 FUN_144ef56b0(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar2 = *param_1;
  iVar3 = *param_2;
  if (((iVar2 == 4) || (iVar2 == 0x10)) && ((iVar3 == 8 || (iVar3 == 0x20)))) {
    if (iVar2 * 2 != iVar3) {
      return 0x2f;
    }
    pbVar1 = (byte *)((longlong)iVar2 + *(longlong *)(param_2 + 2));
    if (0 < iVar2) {
      pbVar4 = pbVar1;
      do {
        if ((pbVar4[*(longlong *)(param_1 + 2) - (longlong)pbVar1] & *pbVar4) !=
            (pbVar4[*(longlong *)(param_2 + 2) - (longlong)pbVar1] & *pbVar4)) {
          return 0x2f;
        }
        pbVar4 = pbVar4 + 1;
      } while ((longlong)pbVar4 - (longlong)pbVar1 < (longlong)iVar2);
    }
    return 0;
  }
  return 0x35;
}



// FUNCTION 144ef5740 FUN_144ef5740 body=86 status=ok
// SIG undefined FUN_144ef5740(void)

undefined4 FUN_144ef5740(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    do {
      bVar3 = param_2[param_1];
      bVar1 = *param_2;
      if (bVar3 != bVar1) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 + 0x20;
        }
        if (bVar3 != bVar1) {
          uVar2 = 1;
          if (bVar3 < bVar1) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



// FUNCTION 144ef57a0 FUN_144ef57a0 body=336 status=ok
// SIG undefined FUN_144ef57a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef57a0(undefined8 param_1,undefined8 *param_2,size_t *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _MaxCount;
  void *local_res10;
  
  uVar5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar3 = FUN_14526c520(&local_res10,param_1);
  uVar6 = (ulonglong)(int)uVar3;
  if ((int)uVar3 < 0) {
    return 0x11;
  }
  uVar7 = uVar6;
  if (0 < (int)uVar3) {
    do {
      uVar3 = (uint)uVar7;
      if (*(char *)((longlong)local_res10 + (uVar6 - 1)) != '\0') break;
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)uVar3;
      uVar6 = uVar6 - 1;
    } while (0 < (longlong)uVar6);
  }
  _MaxCount = (size_t)(int)uVar3;
  pvVar4 = memchr(local_res10,0,_MaxCount);
  if (pvVar4 != (void *)0x0) {
    FUN_144ea6530(local_res10,"crypto\\x509v3\\v3_ncons.c",0x164);
    return 0x35;
  }
  uVar6 = uVar5;
  uVar7 = uVar5;
  if (0 < (int)uVar3) {
    do {
      bVar1 = *(byte *)(uVar5 + (longlong)local_res10);
      if (((0x2f < (byte)(bVar1 - 0x30)) ||
          ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30 & 0xff) & 0x3f) & 1) == 0)) &&
         (0x19 < (byte)(bVar1 + 0x9f))) {
        if (((longlong)uVar5 < 1) || ((int)(uVar3 - 1) <= (int)uVar7)) goto LAB_144ef58c5;
        if (bVar1 != 0x2d) {
          if (((bVar1 != 0x2e) ||
              (cVar2 = *(char *)(uVar5 + 1 + (longlong)local_res10), cVar2 == '.')) ||
             ((*(char *)((uVar5 - 1) + (longlong)local_res10) == '-' || (cVar2 == '-'))))
          goto LAB_144ef58c5;
          uVar6 = 1;
        }
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while ((longlong)uVar5 < (longlong)_MaxCount);
    if ((int)uVar6 != 0) {
      *param_2 = local_res10;
      *param_3 = _MaxCount;
      return 0;
    }
  }
LAB_144ef58c5:
  FUN_144ea6530(local_res10,"crypto\\x509v3\\v3_ncons.c",0x194);
  return 0;
}



// FUNCTION 144ef58f0 FUN_144ef58f0 body=112 status=ok
// SIG undefined FUN_144ef58f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef58f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6530(param_1[1],"crypto\\x509v3\\v3_utl.c",0x6c);
    FUN_144ea6530(param_1[2],"crypto\\x509v3\\v3_utl.c",0x6d);
    FUN_144ea6530(*param_1,"crypto\\x509v3\\v3_utl.c",0x6e);
    FUN_144ea6530(param_1,"crypto\\x509v3\\v3_utl.c",0x6f);
  }
  return;
}



// FUNCTION 144ef5960 FUN_144ef5960 body=612 status=ok
// SIG undefined FUN_144ef5960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef5960(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ef596c;
  pcVar1 = (char *)param_1[2];
  if (pcVar1 == (char *)0x0) {
LAB_144ef5b63:
    FUN_144ba24f0(0x22,0x6e,0x68,"crypto\\x509v3\\v3_utl.c",0x121);
    FUN_144ba2bd0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar4);
    return 0;
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_149e3b7ee)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  lVar2 = 0;
  while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_149dfbe6e)[lVar3]) {
    lVar2 = lVar3 + 1;
    if (lVar3 + 1 == 5) {
      *param_2 = 0xff;
      return (int)lVar3 + -3;
    }
  }
  if (((*pcVar1 != 'Y') || (pcVar1[1] != '\0')) && ((*pcVar1 != 'y' || (pcVar1[1] != '\0')))) {
    lVar2 = 0;
    while (lVar3 = lVar2, pcVar1[lVar3] == (&DAT_14a17992c)[lVar3]) {
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        *param_2 = 0xff;
        return (int)lVar3 + -2;
      }
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (pcVar1[lVar2] != (&DAT_149dfbe7e)[lVar2]) {
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "FALSE"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        lVar2 = 0;
        while (lVar3 = lVar2, pcVar1[lVar3] == "false"[lVar3]) {
          lVar2 = lVar3 + 1;
          if (lVar3 + 1 == 6) {
            *param_2 = 0;
            return (int)lVar3 + -4;
          }
        }
        if (((((*pcVar1 == 'N') && (pcVar1[1] == '\0')) || ((*pcVar1 == 'n' && (pcVar1[1] == '\0')))
             ) || (((*pcVar1 == 'N' && (pcVar1[1] == 'O')) && (pcVar1[2] == '\0')))) ||
           (((*pcVar1 == 'n' && (pcVar1[1] == 'o')) && (pcVar1[2] == '\0')))) {
          *param_2 = 0;
          return 1;
        }
        goto LAB_144ef5b63;
      }
      lVar2 = lVar3;
    } while (lVar3 != 4);
  }
  *param_2 = 0xff;
  return 1;
}



// FUNCTION 144ef5bd0 FUN_144ef5bd0 body=130 status=ok
// SIG undefined FUN_144ef5bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef5bd0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ef5be0;
  lVar1 = FUN_144ef5e60(0,param_1[2]);
  if (lVar1 == 0) {
    FUN_144ba2bd0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2],uVar2);
    return 0;
  }
  *param_2 = lVar1;
  return 1;
}



// FUNCTION 144ef5c60 FUN_144ef5c60 body=69 status=ok
// SIG undefined FUN_144ef5c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef5c60(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    uVar2 = uVar2 & 0x7fffffff;
  }
  FUN_144ef6d00(param_1,param_2,uVar2,param_3);
  return;
}



// FUNCTION 144ef5cb0 FUN_144ef5cb0 body=113 status=ok
// SIG undefined FUN_144ef5cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef5cb0(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    pcVar2 = "FALSE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "FALSE";
  }
  else {
    pcVar2 = "TRUE";
    do {
      if (0x7fffffff < uVar1) break;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = "TRUE";
  }
  FUN_144ef6d00(param_1,pcVar2,uVar1 & 0x7fffffff,param_3);
  return;
}



// FUNCTION 144ef5d30 FUN_144ef5d30 body=176 status=ok
// SIG undefined FUN_144ef5d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ef5d30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
    return 1;
  }
  pcVar4 = (char *)FUN_144ef5de0(0);
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    pcVar5 = pcVar4;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar3 = FUN_144ef6d00(param_1,pcVar4,uVar2 & 0x7fffffff,param_3);
    FUN_144ea6530(pcVar4,"crypto\\x509v3\\v3_utl.c",0x103);
    return uVar3;
  }
  return 0;
}



// FUNCTION 144ef5de0 FUN_144ef5de0 body=124 status=ok
// SIG undefined FUN_144ef5de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef5de0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ef5dec;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_144ef1230(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_144ef6e80(lVar1);
    if (lVar2 != 0) goto LAB_144ef5e46;
  }
  FUN_144ba24f0(0x22,0x78,0x41,"crypto\\x509v3\\v3_utl.c",0xbe,uVar3);
LAB_144ef5e46:
  FUN_144ba0cd0(lVar1);
  return lVar2;
}



// FUNCTION 144ef5e60 FUN_144ef5e60 body=371 status=ok
// SIG undefined FUN_144ef5e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef5e60(undefined8 param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong local_res10;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ef5e70;
  local_res10 = 0;
  if (param_2 == (char *)0x0) {
    FUN_144ba24f0(0x22,0x6c,0x6d,"crypto\\x509v3\\v3_utl.c",0xca,0x144ef5e70);
    return 0;
  }
  local_res10 = FUN_144ba0570();
  if (local_res10 != 0) {
    bVar4 = *param_2 == '-';
    if (bVar4) {
      param_2 = param_2 + 1;
    }
    if ((*param_2 == '0') && ((param_2[1] + 0xa8U & 0xdf) == 0)) {
      param_2 = param_2 + 2;
      iVar1 = FUN_14526b8f0(&local_res10,param_2);
    }
    else {
      iVar1 = FUN_14526bb00(&local_res10,param_2);
    }
    if ((iVar1 == 0) || (param_2[iVar1] != '\0')) {
      FUN_144ba0cd0(local_res10);
      uVar3 = 100;
      uVar5 = 0xe5;
    }
    else {
      if ((bVar4) && (iVar1 = FUN_144ba0340(local_res10), iVar1 != 0)) {
        bVar4 = false;
      }
      lVar2 = FUN_144ef1210(local_res10,0);
      FUN_144ba0cd0(local_res10);
      if (lVar2 != 0) {
        if (bVar4) {
          *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 0x100;
        }
        return lVar2;
      }
      uVar5 = 0xf0;
      uVar3 = 0x65;
    }
    FUN_144ba24f0(0x22,0x6c,uVar3,"crypto\\x509v3\\v3_utl.c",uVar5);
    return 0;
  }
  FUN_144ba24f0(0x22,0x6c,0x41,"crypto\\x509v3\\v3_utl.c",0xcf,uVar6);
  return 0;
}



// FUNCTION 144ef5fe0 FUN_144ef5fe0 body=124 status=ok
// SIG undefined FUN_144ef5fe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef5fe0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ef5fec;
  lVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_144ef12d0(param_2,0);
  if (lVar1 != 0) {
    lVar2 = FUN_144ef6e80(lVar1);
    if (lVar2 != 0) goto LAB_144ef6046;
  }
  FUN_144ba24f0(0x22,0x79,0x41,"crypto\\x509v3\\v3_utl.c",0xb0,uVar3);
LAB_144ef6046:
  FUN_144ba0cd0(lVar1);
  return lVar2;
}



// FUNCTION 144ef6060 FUN_144ef6060 body=614 status=ok
// SIG undefined FUN_144ef6060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6060(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_res10;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar6;
  
  uVar14 = 0x144ef607e;
  uVar9 = 0;
  uVar8 = 0;
  local_res10 = 0;
  pcVar1 = (char *)FUN_144ea6dc0(param_1,"crypto\\x509v3\\v3_utl.c",0x141);
  if (pcVar1 == (char *)0x0) {
    uVar13 = 0x143;
    uVar11 = 0x41;
LAB_144ef6246:
    FUN_144ba24f0(0x22,0x6d,uVar11,"crypto\\x509v3\\v3_utl.c",uVar13,uVar14);
    FUN_144ea6530(pcVar1,"crypto\\x509v3\\v3_utl.c",0x18b);
    FUN_144babe00(local_res10,FUN_144ef58f0);
    local_res10 = 0;
  }
  else {
    cVar4 = *pcVar1;
    iVar12 = 1;
    pcVar7 = pcVar1;
    uVar3 = uVar9;
    pcVar2 = pcVar1;
    if (cVar4 == '\0') {
LAB_144ef6226:
      uVar3 = FUN_144ef68a0(pcVar2);
      if (uVar3 == 0) {
        uVar13 = 0x182;
LAB_144ef623b:
        uVar11 = 0x6c;
        goto LAB_144ef6246;
      }
      uVar8 = 0;
      pcVar2 = (char *)0x0;
    }
    else {
      do {
        if ((cVar4 == '\r') || (cVar4 == '\n')) break;
        if (iVar12 == 1) {
          if (cVar4 == ':') {
            *pcVar7 = '\0';
            iVar12 = 2;
            uVar3 = FUN_144ef68a0(pcVar2);
            if (uVar3 == 0) {
              uVar13 = 0x154;
              goto LAB_144ef623b;
            }
            pcVar2 = pcVar7 + 1;
          }
          else if (cVar4 == ',') {
            *pcVar7 = '\0';
            uVar3 = FUN_144ef68a0(pcVar2);
            pcVar2 = pcVar7 + 1;
            if (uVar3 == 0) {
              uVar13 = 0x15e;
              goto LAB_144ef623b;
            }
            FUN_144ef6d00(uVar3,0,0,&local_res10);
          }
        }
        else if ((iVar12 == 2) && (cVar4 == ',')) {
          *pcVar7 = '\0';
          pcVar2 = (char *)FUN_144ef68a0(pcVar2);
          if (pcVar2 == (char *)0x0) {
            uVar13 = 0x16c;
            uVar11 = 0x6d;
            goto LAB_144ef6246;
          }
          uVar5 = 0;
          cVar4 = *pcVar2;
          pcVar10 = pcVar2;
          uVar6 = uVar9;
          while ((cVar4 != '\0' && (uVar5 = (uint)uVar6, uVar5 < 0x80000000))) {
            pcVar10 = pcVar10 + 1;
            uVar5 = uVar5 + 1;
            cVar4 = *pcVar10;
            uVar6 = (ulonglong)uVar5;
          }
          FUN_144ef6d00(uVar3,pcVar2,uVar5 & 0x7fffffff,&local_res10);
          pcVar2 = pcVar7 + 1;
          iVar12 = 1;
          uVar3 = uVar9;
        }
        cVar4 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      if (iVar12 != 2) goto LAB_144ef6226;
      pcVar2 = (char *)FUN_144ef68a0(pcVar2);
      if (pcVar2 == (char *)0x0) {
        uVar13 = 0x17b;
        uVar11 = 0x6d;
        goto LAB_144ef6246;
      }
      cVar4 = *pcVar2;
      pcVar7 = pcVar2;
      while ((cVar4 != '\0' && (uVar8 = (uint)uVar9, uVar8 < 0x80000000))) {
        pcVar7 = pcVar7 + 1;
        uVar8 = uVar8 + 1;
        cVar4 = *pcVar7;
        uVar9 = (ulonglong)uVar8;
      }
      uVar8 = uVar8 & 0x7fffffff;
    }
    FUN_144ef6d00(uVar3,pcVar2,uVar8,&local_res10);
    FUN_144ea6530(pcVar1,"crypto\\x509v3\\v3_utl.c",0x187);
  }
  return local_res10;
}



// FUNCTION 144ef62d0 FUN_144ef62d0 body=188 status=ok
// SIG undefined FUN_144ef62d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef62d0(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_144ef62fe:
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar4 = memchr(param_2,0,_MaxCount);
      if (pvVar4 != (void *)0x0) goto LAB_144ef62fe;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar3 = FUN_144ef76b0(param_1,param_2,param_3,param_4,2,param_5);
  }
  return uVar3;
}



// FUNCTION 144ef6390 FUN_144ef6390 body=187 status=ok
// SIG undefined FUN_144ef6390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6390(undefined8 param_1,char *param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  size_t _MaxCount;
  
  if (param_2 == (char *)0x0) {
LAB_144ef63be:
    uVar3 = 0xfffffffe;
  }
  else {
    if (param_3 == 0) {
      cVar1 = *param_2;
      pcVar5 = param_2;
      for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      param_3 = (ulonglong)(uVar2 & 0x7fffffff);
    }
    else {
      _MaxCount = param_3 - 1;
      if (param_3 < 2) {
        _MaxCount = param_3;
      }
      pvVar4 = memchr(param_2,0,_MaxCount);
      if (pvVar4 != (void *)0x0) goto LAB_144ef63be;
    }
    if ((1 < param_3) && (param_2[param_3 - 1] == '\0')) {
      param_3 = param_3 - 1;
    }
    uVar3 = FUN_144ef76b0(param_1,param_2,param_3,param_4,1,0);
  }
  return uVar3;
}



// FUNCTION 144ef6450 FUN_144ef6450 body=53 status=ok
// SIG undefined FUN_144ef6450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6450(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  uVar1 = FUN_144ef76b0();
  return uVar1;
}



// FUNCTION 144ef6490 FUN_144ef6490 body=152 status=ok
// SIG undefined FUN_144ef6490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef6490(char *param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ef64a0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    iVar1 = FUN_144ef6960(local_28,param_1);
    if (iVar1 == 0) goto LAB_144ef6516;
    uVar4 = 4;
  }
  else {
    iVar1 = FUN_144ef6a50();
    if (iVar1 == 0) goto LAB_144ef6516;
    uVar4 = 0x10;
  }
  lVar3 = FUN_144efe930();
  if ((lVar3 != 0) && (iVar1 = FUN_144ef2c50(lVar3,local_28,uVar4), iVar1 == 0)) {
    FUN_144efe950(lVar3);
  }
LAB_144ef6516:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ef6540 FUN_144ef6540 body=309 status=ok
// SIG undefined FUN_144ef6540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef6540(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  char *pcVar5;
  
  uStack_10 = 0x144ef6555;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar5 = (char *)0x0;
  pcVar4 = (char *)0x0;
  pcVar2 = strchr(param_1,0x2f);
  if ((pcVar2 == (char *)0x0) ||
     (_Str = (char *)FUN_144ea6dc0(param_1,"crypto\\x509v3\\v3_utl.c",0x410), _Str == (char *)0x0))
  goto LAB_144ef6668;
  pcVar2[(longlong)_Str - (longlong)param_1] = '\0';
  pcVar3 = strchr(_Str,0x3a);
  if (pcVar3 == (char *)0x0) {
    iVar1 = FUN_144ef6960(local_38,_Str);
    if (iVar1 != 0) {
      lVar6 = 4;
      goto LAB_144ef65e8;
    }
  }
  else {
    iVar1 = FUN_144ef6a50();
    pcVar4 = pcVar5;
    if (iVar1 != 0) {
      lVar6 = 0x10;
LAB_144ef65e8:
      iVar1 = FUN_144ef67b0(local_38 + lVar6,pcVar2 + ((longlong)_Str - (longlong)param_1) + 1);
      FUN_144ea6530(_Str,"crypto\\x509v3\\v3_utl.c",0x41d);
      pcVar2 = (char *)0x0;
      pcVar4 = pcVar5;
      _Str = pcVar5;
      if ((((iVar1 != 0) && (_Str = pcVar2, (int)lVar6 == iVar1)) &&
          (pcVar4 = (char *)FUN_144efe930(), pcVar4 != (char *)0x0)) &&
         (iVar1 = FUN_144ef2c50(pcVar4,local_38,iVar1 + (int)lVar6), iVar1 != 0))
      goto LAB_144ef6668;
    }
  }
  FUN_144ea6530(_Str,"crypto\\x509v3\\v3_utl.c",0x42c);
  FUN_144efe950(pcVar4);
LAB_144ef6668:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144ef6690 FUN_144ef6690 body=275 status=ok
// SIG undefined FUN_144ef6690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6690(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ef66a5;
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = FUN_144babbf0(param_2);
  if (0 < iVar3) {
    do {
      lVar5 = FUN_144babc00(param_2,iVar6);
      pbVar8 = *(byte **)(lVar5 + 8);
      bVar2 = *pbVar8;
      pbVar7 = pbVar8;
      while (bVar2 != 0) {
        if ((bVar2 < 0x3b) && ((0x400500000000000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) {
          if (pbVar7[1] != 0) {
            pbVar8 = pbVar7 + 1;
          }
          break;
        }
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar8 == 0x2b) {
        uVar4 = 0xffffffff;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar4 = 0;
      }
      iVar3 = FUN_144ef3f60(param_1,pbVar8,param_3,*(undefined8 *)(lVar5 + 0x10),0xffffffff,
                            0xffffffff,uVar4,uVar9);
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_144babbf0(param_2);
    } while (iVar6 < iVar3);
  }
  return 1;
}



// FUNCTION 144ef67b0 FUN_144ef67b0 body=94 status=ok
// SIG undefined FUN_144ef67b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ef67b0(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_144ef6a50();
    return -(iVar1 != 0) & 0x10;
  }
  iVar1 = FUN_144ef6960(param_1,param_2);
  return -(iVar1 != 0) & 4;
}



// FUNCTION 144ef6810 FUN_144ef6810 body=22 status=ok
// SIG undefined FUN_144ef6810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef6810(void)

{
  FUN_144ef6d00();
  return;
}



// FUNCTION 144ef6830 FUN_144ef6830 body=110 status=ok
// SIG undefined FUN_144ef6830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef6830(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  iVar3 = strncmp(param_1,param_2,(ulonglong)(uVar2 & 0x7fffffff));
  if (iVar3 == 0) {
    if ((param_1[uVar2 & 0x7fffffff] != '\0') && (param_1[uVar2 & 0x7fffffff] != '.')) {
      return 1;
    }
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 144ef68a0 FUN_144ef68a0 body=191 status=ok
// SIG undefined FUN_144ef68a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_144ef68a0(char *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_1 != '\0') {
    while (iVar1 = FUN_144ecfdd0((int)*param_1,8), iVar1 != 0) {
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
    }
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  pcVar3 = param_1;
  do {
    uVar2 = (uint)pcVar4;
    if (0x7fffffff < uVar2) break;
    pcVar3 = pcVar3 + 1;
    uVar2 = uVar2 + 1;
    pcVar4 = (char *)(ulonglong)uVar2;
  } while (*pcVar3 != '\0');
  pcVar4 = param_1 + ((ulonglong)(uVar2 & 0x7fffffff) - 1);
  do {
    if (pcVar4 == param_1) {
LAB_144ef6945:
      if (*param_1 == '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    iVar1 = FUN_144ecfdd0((int)*pcVar4,8);
    if (iVar1 == 0) {
      if (param_1 != pcVar4) {
        pcVar4[1] = '\0';
      }
      goto LAB_144ef6945;
    }
    pcVar4 = pcVar4 + -1;
  } while( true );
}



// FUNCTION 144ef6960 FUN_144ef6960 body=234 status=ok
// SIG undefined FUN_144ef6960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6960(undefined1 *param_1,longlong param_2)

{
  int iVar1;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  local_10 = 0x144ef6970;
  iVar1 = FUN_145834187(param_2,"%d.%d.%d.%d%n",&local_14,&local_18,local_res20,local_res18,
                        &local_10);
  if ((((iVar1 == 4) && (local_14 < 0x100)) && (local_18 < 0x100)) &&
     ((local_res20[0] < 0x100 && (local_res18[0] < 0x100)))) {
    if ((*(char *)((int)local_10 + param_2) == '\0') ||
       (iVar1 = FUN_144ecfdd0((int)*(char *)((int)local_10 + param_2),8), iVar1 != 0)) {
      *param_1 = (char)local_14;
      param_1[1] = (char)local_18;
      param_1[2] = (char)local_res20[0];
      param_1[3] = (char)local_res18[0];
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ef6a50 FUN_144ef6a50 body=341 status=ok
// SIG undefined FUN_144ef6a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef6a50(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ef6a5c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = -1;
  local_28 = 0;
  local_20 = 0;
  local_48 = &local_38;
  iVar2 = FUN_144ba1dc0(param_2,0x3a,0,FUN_144ef6bc0);
  iVar1 = local_28;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  _Size = (size_t)local_24;
  if (local_24 == -1) {
    if (local_28 != 0x10) goto LAB_144ef6adc;
  }
  else {
    if ((local_28 == 0x10) || (3 < local_20)) goto LAB_144ef6adc;
    if (local_20 == 3) {
      if (0 < local_28) goto LAB_144ef6adc;
    }
    else if (local_20 == 2) {
      if ((local_24 != 0) && (local_24 != local_28)) goto LAB_144ef6adc;
    }
    else if ((local_24 == 0) || (local_24 == local_28)) goto LAB_144ef6adc;
    if (-1 < local_24) {
      memcpy(param_1,&local_38,_Size);
      memset((void *)(_Size + (longlong)param_1),0,(longlong)(0x10 - iVar1));
      if (local_28 != local_24) {
        memcpy((void *)(((longlong)local_24 - (longlong)local_28) + 0x10 + (longlong)param_1),
               (void *)((longlong)&local_38 + (longlong)local_24),(longlong)(local_28 - local_24));
      }
      goto LAB_144ef6adc;
    }
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
LAB_144ef6adc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 144ef6bc0 FUN_144ef6bc0 body=173 status=ok
// SIG undefined FUN_144ef6bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6bc0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != 0x10) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x14) == -1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        *(int *)(param_3 + 0x14) = iVar1;
        return 1;
      }
      if (*(int *)(param_3 + 0x14) == iVar1) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        return 1;
      }
    }
    else if (param_2 < 5) {
      iVar1 = FUN_144ef6c70(param_3 + iVar1,param_1,param_2);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
        return 1;
      }
    }
    else if ((iVar1 < 0xd) && (*(char *)(param_2 + param_1) == '\0')) {
      iVar1 = FUN_144ef6960(param_3 + iVar1,param_1);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144ef6c70 FUN_144ef6c70 body=133 status=ok
// SIG undefined FUN_144ef6c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6c70(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  uVar4 = 0;
  if (param_3 < 5) {
    while (param_3 != 0) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      iVar2 = FUN_144ea6c00(uVar1);
      if (iVar2 < 0) goto LAB_144ef6c9f;
      uVar4 = uVar4 << 4 | (short)(char)iVar2;
    }
    param_1[1] = (char)uVar4;
    *param_1 = (char)(uVar4 >> 8);
    uVar3 = 1;
  }
  else {
LAB_144ef6c9f:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144ef6d00 FUN_144ef6d00 body=383 status=ok
// SIG undefined FUN_144ef6d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef6d00(longlong param_1,void *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ef6d24;
  lVar1 = *param_4;
  puVar6 = (undefined8 *)0x0;
  lVar3 = 0;
  lVar5 = 0;
  if ((((param_1 == 0) ||
       (lVar3 = FUN_144ea6dc0(param_1,"crypto\\x509v3\\v3_utl.c",0x2d), lVar3 != 0)) &&
      (((param_2 == (void *)0x0 || (param_3 == 0)) ||
       ((pvVar4 = memchr(param_2,0,param_3 - 1), pvVar4 == (void *)0x0 &&
        (lVar5 = FUN_144ea6e30(param_2,param_3,"crypto\\x509v3\\v3_utl.c",0x36), lVar5 != 0)))))) &&
     (puVar6 = (undefined8 *)FUN_144ea64e0(0x18,"crypto\\x509v3\\v3_utl.c"),
     puVar6 != (undefined8 *)0x0)) {
    if (lVar1 == 0) {
      lVar7 = FUN_144babca0();
      *param_4 = lVar7;
      if (lVar7 == 0) goto LAB_144ef6ded;
    }
    *puVar6 = 0;
    puVar6[1] = lVar3;
    puVar6[2] = lVar5;
    iVar2 = FUN_144bac1c0(*param_4,puVar6);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_144ef6ded:
  FUN_144ba24f0(0x22,0xae,0x41,"crypto\\x509v3\\v3_utl.c",0x45,uVar8);
  if (lVar1 == 0) {
    FUN_144babdb0(*param_4);
    *param_4 = 0;
  }
  FUN_144ea6530(puVar6,"crypto\\x509v3\\v3_utl.c",0x4a);
  FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_utl.c",0x4b);
  FUN_144ea6530(lVar5,"crypto\\x509v3\\v3_utl.c",0x4c);
  return 0;
}



// FUNCTION 144ef6e80 FUN_144ef6e80 body=301 status=ok
// SIG undefined FUN_144ef6e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ef6e80(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ef6e8c;
  iVar2 = FUN_144ba03d0();
  if (iVar2 < 0x80) {
    lVar4 = FUN_14526b670();
    return lVar4;
  }
  pcVar5 = (char *)FUN_14526b540(param_1);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    iVar2 = (uVar3 & 0x7fffffff) + 3;
    lVar4 = FUN_144ea64e0(iVar2,"crypto\\x509v3\\v3_utl.c",0x94);
    if (lVar4 != 0) {
      if (*pcVar5 == '-') {
        FUN_144ea68a0(lVar4,&DAT_149c02fc8,iVar2);
        pcVar6 = pcVar5 + 1;
      }
      else {
        FUN_144ea68a0(lVar4,&DAT_14a179929,iVar2);
        pcVar6 = pcVar5;
      }
      FUN_144ea6900(lVar4,pcVar6,iVar2);
      FUN_144ea6530(pcVar5,"crypto\\x509v3\\v3_utl.c",0xa3);
      return lVar4;
    }
    FUN_144ba24f0(0x22,0xa7,0x41,"crypto\\x509v3\\v3_utl.c",0x96,uVar7);
    FUN_144ea6530(pcVar5,"crypto\\x509v3\\v3_utl.c",0x97);
    return 0;
  }
  return 0;
}



// FUNCTION 144ef6fb0 FUN_144ef6fb0 body=160 status=ok
// SIG undefined FUN_144ef6fb0(void)

undefined8
FUN_144ef6fb0(char *param_1,ulonglong param_2,char *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 == param_4) {
    if (param_2 != 0) {
      lVar5 = (longlong)param_1 - (longlong)param_3;
      do {
        cVar3 = param_3[lVar5];
        cVar4 = *param_3;
        if (cVar3 == '\0') {
          return 0;
        }
        if (cVar3 != cVar4) {
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) {
            return 0;
          }
        }
        param_3 = param_3 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144ef7050 FUN_144ef7050 body=125 status=ok
// SIG undefined FUN_144ef7050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef7050(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  
  uVar1 = param_2;
  pcVar2 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    for (; ((param_4 < uVar1 && (*pcVar2 != '\0')) && (((param_5 & 0x10) == 0 || (*pcVar2 != '.'))))
        ; pcVar2 = pcVar2 + 1) {
      uVar1 = uVar1 - 1;
    }
    if (uVar1 == param_4) {
      param_1 = pcVar2;
      param_2 = uVar1;
    }
  }
  if (param_2 != param_4) {
    return false;
  }
  iVar3 = memcmp(param_1,param_3,param_2);
  return iVar3 == 0;
}



// FUNCTION 144ef70d0 FUN_144ef70d0 body=183 status=ok
// SIG undefined FUN_144ef70d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef70d0(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  size_t _Size;
  
  if (param_2 == param_4) {
    _Size = param_2;
    if (param_2 != 0) {
      pcVar3 = (char *)((longlong)param_1 + param_2);
      do {
        pcVar3 = pcVar3 + -1;
        _Size = _Size - 1;
        if ((*pcVar3 == '@') || (pcVar3[(longlong)param_3 - (longlong)param_1] == '@')) {
          uVar2 = FUN_144ef6fb0(pcVar3,param_2 - _Size,(longlong)param_3 + _Size,param_2 - _Size,0,
                                0x144ef70ea);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          break;
        }
      } while (_Size != 0);
    }
    if (_Size == 0) {
      _Size = param_2;
    }
    iVar1 = memcmp(param_1,param_3,_Size);
    uVar2 = (ulonglong)(iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144ef7190 FUN_144ef7190 body=339 status=ok
// SIG undefined FUN_144ef7190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef7190(undefined8 param_1,longlong param_2,char *param_3,longlong param_4,char *param_5,
             ulonglong param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ef71a0;
  if (param_6 < (ulonglong)(param_2 + param_4)) {
    return 0;
  }
  uVar4 = FUN_144ef6fb0(param_1,param_2,param_5,param_2,param_7,0x144ef71a0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  pbVar5 = (byte *)(param_5 + param_2);
  pbVar6 = (byte *)(param_5 + (param_6 - param_4));
  iVar3 = FUN_144ef6fb0(pbVar6,param_4,param_3,param_4,param_7,uVar7);
  if (iVar3 != 0) {
    bVar2 = false;
    if ((param_2 == 0) && (*param_3 == '.')) {
      if (pbVar5 != pbVar6) {
        if ((param_7 & 8) != 0) {
          bVar2 = true;
        }
LAB_144ef726e:
        if ((pbVar6 != pbVar5 + 1) || (*pbVar5 != 0x2a)) {
          for (; pbVar5 != pbVar6; pbVar5 = pbVar5 + 1) {
            bVar1 = *pbVar5;
            if (((0x2d < (byte)(bVar1 - 0x2d)) ||
                ((0x3ffffff01ff9U >> ((ulonglong)(bVar1 - 0x2d & 0xff) & 0x3f) & 1) == 0)) &&
               (0x19 < (byte)(bVar1 + 0x9f))) {
              if (!bVar2) {
                return 0;
              }
              if (bVar1 != 0x2e) {
                return 0;
              }
            }
          }
        }
        return 1;
      }
    }
    else if ((param_6 < 4) || (iVar3 = _strnicmp(param_5,"xn--",4), bVar2 = false, iVar3 != 0))
    goto LAB_144ef726e;
  }
  return 0;
}



// FUNCTION 144ef72f0 FUN_144ef72f0 body=363 status=ok
// SIG undefined FUN_144ef72f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_144ef72f0(char *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *_Str1;
  
  pcVar6 = (char *)0x0;
  uVar7 = 1;
  bVar3 = false;
  iVar8 = 0;
  if (param_2 != 0) {
    _Str1 = param_1;
    do {
      cVar2 = *_Str1;
      if (cVar2 == '*') {
        lVar1 = -(longlong)param_1 + (longlong)_Str1;
        if ((lVar1 == param_2 - 1) || (param_1[lVar1 + 1] == '.')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((((pcVar6 != (char *)0x0) || (bVar3)) || (iVar8 != 0)) ||
            (((param_3 & 4) != 0 && (((uVar7 & 1) == 0 || (!bVar4)))))) ||
           (((uVar7 & 1) == 0 && (!bVar4)))) goto LAB_144ef743c;
        uVar7 = uVar7 & 0xfffffffe;
        pcVar6 = _Str1;
      }
      else if (((byte)(cVar2 + 0x9fU) < 0x1a) ||
              (((byte)(cVar2 - 0x30U) < 0x2b &&
               ((0x7fffffe03ffU >> ((ulonglong)(byte)(cVar2 - 0x30U) & 0x3f) & 1) != 0)))) {
        if (((uVar7 & 1) != 0) &&
           (((char *)0x3 < param_1 + (param_2 - (longlong)_Str1) &&
            (iVar5 = _strnicmp(_Str1,"xn--",4), iVar5 == 0)))) {
          bVar3 = true;
        }
        uVar7 = 0;
      }
      else if (cVar2 == '.') {
        if (uVar7 != 0) goto LAB_144ef743c;
        uVar7 = 1;
        bVar3 = false;
        iVar8 = iVar8 + 1;
      }
      else {
        if ((cVar2 != '-') || ((uVar7 & 1) != 0)) goto LAB_144ef743c;
        uVar7 = uVar7 | 4;
      }
      _Str1 = _Str1 + 1;
    } while ((ulonglong)(-(longlong)param_1 + (longlong)_Str1) < param_2);
  }
  if ((uVar7 != 0) || (iVar8 < 2)) {
LAB_144ef743c:
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}



// FUNCTION 144ef7460 FUN_144ef7460 body=171 status=ok
// SIG undefined FUN_144ef7460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef7460(longlong param_1,longlong param_2,char *param_3,ulonglong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (((param_4 < 2) || (*param_3 != '.')) &&
     (lVar1 = FUN_144ef72f0(param_1,param_2,param_5), lVar1 != 0)) {
    FUN_144ef7190(param_1,lVar1 - param_1,lVar1 + 1,param_2 + -1 + (param_1 - lVar1),param_3,param_4
                  ,param_5);
    return;
  }
  FUN_144ef6fb0(param_1,param_2,param_3,param_4,CONCAT44(uVar2,param_5));
  return;
}



// FUNCTION 144ef7510 FUN_144ef7510 body=402 status=ok
// SIG undefined FUN_144ef7510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef7510(int *param_1,int param_2,code *param_3,undefined4 param_4,void *param_5,
                 size_t param_6,longlong *param_7)

{
  void *_Buf1;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0x144ef7523;
  _Buf1 = *(void **)(param_1 + 2);
  if (_Buf1 == (void *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 < 1) {
    iVar1 = FUN_14526c520(&local_res8,param_1);
    if (-1 < iVar1) {
      iVar2 = (*param_3)(local_res8,(longlong)iVar1,param_5,param_6,param_4,uVar4);
      if ((0 < iVar2) && (param_7 != (longlong *)0x0)) {
        lVar3 = FUN_144ea6e30(local_res8,(longlong)iVar1,"crypto\\x509v3\\v3_utl.c",0x354);
        *param_7 = lVar3;
        if (lVar3 == 0) {
          FUN_144ea6530(local_res8,"crypto\\x509v3\\v3_utl.c",0x356);
          return -1;
        }
      }
      FUN_144ea6530(local_res8,"crypto\\x509v3\\v3_utl.c",0x35a);
      return iVar2;
    }
  }
  else {
    if (param_2 != param_1[1]) {
      return 0;
    }
    if (param_2 == 0x16) {
      iVar1 = (*param_3)(_Buf1,(longlong)iVar1,param_5,param_6,param_4,0x144ef7523);
      if (iVar1 < 1) {
        return iVar1;
      }
    }
    else {
      if (iVar1 != (int)param_6) {
        return 0;
      }
      iVar1 = memcmp(_Buf1,param_5,param_6);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = 1;
    }
    if (param_7 == (longlong *)0x0) {
      return iVar1;
    }
    lVar3 = FUN_144ea6e30(*(undefined8 *)(param_1 + 2),(longlong)*param_1,"crypto\\x509v3\\v3_utl.c"
                          ,0x343);
    *param_7 = lVar3;
    if (lVar3 != 0) {
      return iVar1;
    }
  }
  return -1;
}



// FUNCTION 144ef76b0 FUN_144ef76b0 body=724 status=ok
// SIG undefined FUN_144ef76b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ef76b0(undefined8 param_1,char *param_2,ulonglong param_3,uint param_4,int param_5,
                 longlong *param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int local_res20;
  char *in_stack_ffffffffffffff88;
  undefined8 local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x144ef76d0;
  bVar2 = false;
  local_res20 = 0;
  param_4 = param_4 & 0xffff7fff;
  iVar5 = 0;
  if (param_5 == 1) {
    uVar14 = 0x16;
    local_res20 = 0x30;
    pcVar7 = FUN_144ef70d0;
  }
  else if (param_5 == 2) {
    local_res20 = 0xd;
    if ((1 < param_3) && (*param_2 == '.')) {
      param_4 = param_4 | 0x8000;
    }
    pcVar7 = FUN_144ef6fb0;
    uVar14 = 0x16;
    if ((param_4 & 2) == 0) {
      pcVar7 = FUN_144ef7460;
    }
  }
  else {
    uVar14 = 4;
    pcVar7 = FUN_144ef7050;
  }
  if (param_3 == 0) {
    cVar1 = *param_2;
    pcVar12 = param_2;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    param_3 = (ulonglong)(uVar3 & 0x7fffffff);
  }
  lVar8 = FUN_144eac5d0(param_1,0x55,0);
  if (lVar8 != 0) {
    iVar13 = 0;
    iVar4 = FUN_144babbf0(lVar8);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar6;
        piVar9 = (int *)FUN_144babc00(lVar8,iVar13);
        if (*piVar9 == param_5) {
          bVar2 = true;
          in_stack_ffffffffffffff88 = param_2;
          iVar5 = FUN_144ef7510(*(undefined8 *)(piVar9 + 2),uVar14,pcVar7,param_4,param_2,param_3,
                                param_6);
          if (iVar5 != 0) break;
        }
        iVar13 = iVar13 + 1;
        iVar4 = FUN_144babbf0(lVar8);
        iVar6 = iVar5;
      } while (iVar13 < iVar4);
    }
    FUN_144ef4900(lVar8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((bVar2) && ((param_4 & 1) == 0)) {
      return 0;
    }
  }
  if ((local_res20 != 0) && ((param_4 & 0x20) == 0)) {
    uVar10 = FUN_144bb4f50(param_1);
    for (iVar5 = FUN_144ef3b20(uVar10,local_res20,0xffffffff); -1 < iVar5;
        iVar5 = FUN_144ef3b20(uVar10,local_res20,iVar5)) {
      uVar11 = FUN_144ef3c20(uVar10,iVar5);
      piVar9 = (int *)FUN_144ef4210(uVar11);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      if ((*(longlong *)(piVar9 + 2) != 0) && (*piVar9 != 0)) {
        iVar6 = FUN_14526c520(local_58,piVar9);
        if (iVar6 < 0) {
          return -1;
        }
        in_stack_ffffffffffffff88 = (char *)CONCAT44(uVar14,param_4);
        iVar4 = (*pcVar7)(local_58[0],(longlong)iVar6,param_2,param_3,in_stack_ffffffffffffff88);
        if ((0 < iVar4) && (param_6 != (longlong *)0x0)) {
          lVar8 = FUN_144ea6e30(local_58[0],(longlong)iVar6,"crypto\\x509v3\\v3_utl.c",0x354);
          *param_6 = lVar8;
          if (lVar8 == 0) {
            FUN_144ea6530(local_58[0],"crypto\\x509v3\\v3_utl.c",0x356);
            return -1;
          }
        }
        FUN_144ea6530(local_58[0],"crypto\\x509v3\\v3_utl.c",0x35a);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144ef7990 FUN_144ef7990 body=123 status=ok
// SIG undefined FUN_144ef7990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef7990(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144ef8120(param_3,*param_2,param_4,"Autonomous System Numbers");
  if (iVar1 != 0) {
    iVar1 = FUN_144ef8120(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ef7a30 FUN_144ef7a30 body=1057 status=ok
// SIG undefined FUN_144ef7a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ef7a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int extraout_EAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar6;
  char *_Str;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong local_res20;
  undefined8 uVar10;
  size_t sVar5;
  
  local_res20 = 0;
  puVar2 = (undefined8 *)FUN_144efec20(&DAT_149c03210);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",0x20e);
    return (undefined8 *)0x0;
  }
  iVar9 = 0;
  iVar1 = FUN_144babbf0(param_3);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_3,iVar9);
      iVar1 = FUN_144ef6830(puVar3[1],&DAT_14996c678);
      if (iVar1 != 0) {
        iVar1 = FUN_144ef6830(puVar3[1],&DAT_149c0332c);
        if (iVar1 == 0) {
          uVar7 = 1;
          goto LAB_144ef7b11;
        }
        uVar10 = 0x21f;
        uVar8 = 0x73;
LAB_144ef7b5d:
        FUN_144ba24f0(0x22,0xa3,uVar8,"crypto\\x509v3\\v3_asid.c",uVar10);
        FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_144ef7ba7;
      }
      uVar7 = 0;
LAB_144ef7b11:
      lVar6 = 0;
      do {
        lVar4 = lVar6 + 1;
        if (((char *)puVar3[2])[lVar6] != "inherit"[lVar6]) {
          sVar5 = strspn((char *)puVar3[2],"0123456789");
          extraout_EAX = (int)sVar5;
          _Str = (char *)(puVar3[2] + (longlong)extraout_EAX);
          if (*_Str == '\0') {
            iVar1 = FUN_144ef5bd0(puVar3,&local_res20);
            if (iVar1 == 0) {
              uVar8 = 0x24f;
LAB_144ef7de3:
              FUN_144ba24f0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar8);
              goto LAB_144ef7ba7;
            }
            lVar6 = 0;
LAB_144ef7d25:
            iVar1 = FUN_144ef7f30(puVar2,uVar7,local_res20,lVar6);
            if (iVar1 != 0) {
              local_res20 = 0;
              goto LAB_144ef7d4e;
            }
            uVar8 = 0x267;
          }
          else {
            sVar5 = strspn(_Str," \t");
            iVar1 = extraout_EAX + (int)sVar5;
            if (*(char *)((longlong)iVar1 + puVar3[2]) != '-') {
              uVar10 = 0x23b;
              uVar8 = 0xa2;
              goto LAB_144ef7b5d;
            }
            iVar1 = iVar1 + 1;
            sVar5 = strspn((char *)((longlong)iVar1 + puVar3[2])," \t");
            iVar1 = iVar1 + (int)sVar5;
            sVar5 = strspn((char *)(puVar3[2] + (longlong)iVar1),"0123456789");
            if (*(char *)((longlong)((int)sVar5 + iVar1) + puVar3[2]) != '\0') {
              uVar10 = 0x244;
              uVar8 = 0xa3;
              goto LAB_144ef7b5d;
            }
            lVar4 = FUN_144ea6dc0(puVar3[2],"crypto\\x509v3\\v3_asid.c",0x253);
            if (lVar4 == 0) {
              uVar8 = 0x255;
              goto LAB_144ef7de3;
            }
            *(undefined1 *)(extraout_EAX + lVar4) = 0;
            local_res20 = FUN_144ef5e60(0,lVar4);
            lVar6 = FUN_144ef5e60(0,iVar1 + lVar4);
            FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_asid.c",0x25b);
            if ((local_res20 != 0) && (lVar6 != 0)) {
              iVar1 = FUN_144ef10c0(local_res20,lVar6);
              if (iVar1 < 1) goto LAB_144ef7d25;
              FUN_144ba24f0(0x22,0xa3,0x74,"crypto\\x509v3\\v3_asid.c",0x262);
              goto LAB_144ef7ba9;
            }
            uVar8 = 0x25d;
          }
          FUN_144ba24f0(0x22,0xa3,0x41,"crypto\\x509v3\\v3_asid.c",uVar8);
          goto LAB_144ef7ba9;
        }
        lVar6 = lVar4;
      } while (lVar4 != 8);
      iVar1 = FUN_144ef7ea0(puVar2,uVar7);
      if (iVar1 == 0) {
        uVar10 = 0x22b;
        uVar8 = 0xa5;
        goto LAB_144ef7b5d;
      }
LAB_144ef7d4e:
      iVar9 = iVar9 + 1;
      iVar1 = FUN_144babbf0(param_3);
    } while (iVar9 < iVar1);
  }
  iVar1 = FUN_144ef85f0(*puVar2);
  if ((iVar1 == 0) || (iVar1 = FUN_144ef85f0(puVar2[1]), iVar1 == 0)) {
LAB_144ef7ba7:
    lVar6 = 0;
LAB_144ef7ba9:
    FUN_144eff330(puVar2,&DAT_149c03210);
    FUN_144efe870(local_res20);
    FUN_144efe870(lVar6);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 144ef7e80 FUN_144ef7e80 body=29 status=ok
// SIG undefined FUN_144ef7e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef7e80(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c03210);
  return;
}



// FUNCTION 144ef7ea0 FUN_144ef7ea0 body=133 status=ok
// SIG undefined FUN_144ef7ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef7ea0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return false;
    }
    param_1 = param_1 + 1;
  }
  if (*param_1 != 0) {
LAB_144ef7f0f:
    return *(int *)*param_1 == 0;
  }
  lVar1 = FUN_144efec20(&DAT_149c031a0);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_144efea10();
    *(longlong *)(*param_1 + 8) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)*param_1 = 0;
      goto LAB_144ef7f0f;
    }
  }
  return false;
}



// FUNCTION 144ef7f30 FUN_144ef7f30 body=305 status=ok
// SIG undefined FUN_144ef7f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef7f30(longlong *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    param_1 = param_1 + 1;
  }
  if ((int *)*param_1 == (int *)0x0) {
    lVar2 = FUN_144efec20(&DAT_149c031a0);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_144babc60(FUN_144ef82e0);
    *(undefined8 *)(*param_1 + 8) = uVar3;
    if (*(longlong *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
  }
  else if (*(int *)*param_1 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_144efec20(&DAT_149c03130);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = param_3;
  }
  else {
    *puVar4 = 1;
    puVar5 = (undefined8 *)FUN_144efec20(&DAT_149c030c0);
    *(undefined8 **)(puVar4 + 2) = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_144ef803b;
    FUN_144efe870(*puVar5);
    **(undefined8 **)(puVar4 + 2) = param_3;
    FUN_144efe870(*(undefined8 *)(*(longlong *)(puVar4 + 2) + 8));
    *(longlong *)(*(longlong *)(puVar4 + 2) + 8) = param_4;
  }
  iVar1 = FUN_144bac1c0(*(undefined8 *)(*param_1 + 8),puVar4);
  if (iVar1 != 0) {
    return 1;
  }
LAB_144ef803b:
  FUN_144eff330(puVar4,&DAT_149c03130);
  return 0;
}



// FUNCTION 144ef8070 FUN_144ef8070 body=67 status=ok
// SIG undefined FUN_144ef8070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef8070(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = FUN_144ef8380(*param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_144ef8380(param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ef80c0 FUN_144ef80c0 body=87 status=ok
// SIG undefined FUN_144ef80c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef80c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_144babbf0();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_144ef8b40(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// FUNCTION 144ef8120 FUN_144ef8120 body=440 status=ok
// SIG undefined FUN_144ef8120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ef8120(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ef8130;
  if (param_2 == (int *)0x0) {
    return 1;
  }
  FUN_144ec7640(param_1,"%*s%s:\n",param_3,&DAT_149e02088,param_4,0x144ef8130);
  iVar1 = (int)param_3;
  if (*param_2 == 0) {
    FUN_144ec7640(param_1,"%*sinherit\n",iVar1 + 2,&DAT_149e02088,param_4,uVar6);
  }
  else {
    if (*param_2 != 1) {
      return 0;
    }
    iVar5 = 0;
    iVar2 = FUN_144babbf0(*(undefined8 *)(param_2 + 2));
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_2 + 2),iVar5);
        if (*piVar3 == 0) {
          lVar4 = FUN_144ef5de0(0,*(undefined8 *)(piVar3 + 2));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_144ec7640(param_1,"%*s%s\n",iVar1 + 2,&DAT_149e02088,lVar4);
          uVar6 = 0x53;
        }
        else {
          if (*piVar3 != 1) {
            return 0;
          }
          lVar4 = FUN_144ef5de0(0,**(undefined8 **)(piVar3 + 2));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_144ec7640(param_1,"%*s%s-",iVar1 + 2,&DAT_149e02088,lVar4);
          FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_asid.c",0x59);
          lVar4 = FUN_144ef5de0(0,*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_144ec7640(param_1,&DAT_149980abc,lVar4);
          uVar6 = 0x5d;
        }
        FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_asid.c",uVar6);
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(*(undefined8 *)(param_2 + 2));
      } while (iVar5 < iVar2);
    }
  }
  return 1;
}



// FUNCTION 144ef82e0 FUN_144ef82e0 body=157 status=ok
// SIG undefined FUN_144ef82e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef82e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*param_2;
  iVar3 = *piVar1;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    uVar4 = *(undefined8 *)(piVar1 + 2);
  }
  else {
    if ((iVar3 == 1) && (*piVar2 == 1)) {
      iVar3 = FUN_144ef10c0(**(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
      if (iVar3 != 0) {
        return;
      }
      FUN_144ef10c0(*(undefined8 *)(*(longlong *)(piVar1 + 2) + 8),
                    *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
      return;
    }
    if (iVar3 == 0) {
      FUN_144ef10c0(*(undefined8 **)(piVar1 + 2),**(undefined8 **)(piVar2 + 2));
      return;
    }
    uVar4 = **(undefined8 **)(piVar1 + 2);
  }
  FUN_144ef10c0(uVar4,*(undefined8 *)(piVar2 + 2));
  return;
}



// FUNCTION 144ef8380 FUN_144ef8380 body=617 status=ok
// SIG undefined FUN_144ef8380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ef8380(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_res8;
  undefined4 uVar13;
  
  uVar8 = 0;
  local_res8 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (0 < iVar1 + -1) {
    do {
      piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),uVar6);
      uVar10 = (int)uVar6 + 1;
      piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),(ulonglong)uVar10);
      if (piVar2 == (int *)0x0) goto LAB_144ef856b;
      if (*piVar2 == 0) {
        uVar9 = *(undefined8 *)(piVar2 + 2);
        uVar11 = uVar9;
      }
      else {
        if (*piVar2 != 1) goto LAB_144ef856b;
        uVar9 = **(undefined8 **)(piVar2 + 2);
        uVar11 = (*(undefined8 **)(piVar2 + 2))[1];
      }
      if (piVar3 == (int *)0x0) goto LAB_144ef856b;
      if (*piVar3 == 0) {
        uVar7 = *(undefined8 *)(piVar3 + 2);
        uVar12 = uVar7;
      }
      else {
        if (*piVar3 != 1) goto LAB_144ef856b;
        uVar7 = **(undefined8 **)(piVar3 + 2);
        uVar12 = (*(undefined8 **)(piVar3 + 2))[1];
      }
      iVar1 = FUN_144ef10c0(uVar9,uVar7);
      if (((-1 < iVar1) || (iVar1 = FUN_144ef10c0(uVar9,uVar11), 0 < iVar1)) ||
         (iVar1 = FUN_144ef10c0(uVar7,uVar12), 0 < iVar1)) goto LAB_144ef856b;
      if (((uVar4 == 0) && (uVar4 = FUN_144ba0570(), uVar4 == 0)) ||
         ((lVar5 = FUN_144ef1230(uVar11,uVar4), lVar5 == 0 ||
          (iVar1 = FUN_14526b1f0(uVar4,1), iVar1 == 0)))) {
        uVar13 = 0x130;
LAB_144ef85b6:
        FUN_144ba24f0(0x22,0xa2,0x41,"crypto\\x509v3\\v3_asid.c",uVar13);
        goto LAB_144ef856b;
      }
      uVar6 = FUN_144ef1210(uVar4,uVar8);
      if (uVar6 == 0) {
        uVar13 = 0x138;
        goto LAB_144ef85b6;
      }
      iVar1 = FUN_144ef10c0(uVar6,uVar7);
      uVar8 = uVar6;
      if (-1 < iVar1) goto LAB_144ef856b;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar1 + -1);
  }
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
  piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) ||
     (iVar1 = FUN_144ef10c0(**(undefined8 **)(piVar2 + 2),(*(undefined8 **)(piVar2 + 2))[1]),
     iVar1 < 1)) {
    local_res8 = 1;
  }
LAB_144ef856b:
  FUN_144efe870(uVar8);
  FUN_144ba0cd0(uVar4);
  return local_res8;
}



// FUNCTION 144ef85f0 FUN_144ef85f0 body=1011 status=ok
// SIG undefined FUN_144ef85f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ef85f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int local_res8;
  ulonglong local_res10;
  longlong local_res18;
  undefined4 uVar14;
  
  uVar6 = 0;
  bVar13 = false;
  local_res10 = 0;
  local_res18 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return true;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    FUN_144ba24f0(0x22,0xa1,0x74,"crypto\\x509v3\\v3_asid.c",0x179);
    return false;
  }
  FUN_144bac390(*(undefined8 *)(param_1 + 2));
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1 + -1) {
    local_res8 = 1;
    uVar10 = uVar6;
    do {
      iVar1 = (int)uVar10;
      piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),uVar10);
      piVar4 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),local_res8);
      uVar6 = local_res10;
      if (piVar3 == (int *)0x0) goto LAB_144ef892a;
      if (*piVar3 == 0) {
        uVar9 = *(undefined8 *)(piVar3 + 2);
        uVar11 = uVar9;
      }
      else {
        if (*piVar3 != 1) goto LAB_144ef892a;
        uVar9 = (*(undefined8 **)(piVar3 + 2))[1];
        uVar11 = **(undefined8 **)(piVar3 + 2);
      }
      if (piVar4 == (int *)0x0) goto LAB_144ef892a;
      if (*piVar4 == 0) {
        uVar8 = *(undefined8 *)(piVar4 + 2);
        uVar12 = uVar8;
      }
      else {
        if (*piVar4 != 1) goto LAB_144ef892a;
        uVar8 = **(undefined8 **)(piVar4 + 2);
        uVar12 = (*(undefined8 **)(piVar4 + 2))[1];
      }
      iVar2 = FUN_144ef10c0(uVar11,uVar8);
      if (((0 < iVar2) || (iVar2 = FUN_144ef10c0(uVar11,uVar9), 0 < iVar2)) ||
         (iVar2 = FUN_144ef10c0(uVar8,uVar12), 0 < iVar2)) goto LAB_144ef892a;
      iVar2 = FUN_144ef10c0(uVar9,uVar8);
      if (-1 < iVar2) {
        uVar14 = 0x1a2;
        uVar9 = 0x74;
LAB_144ef890e:
        FUN_144ba24f0(0x22,0xa1,uVar9,"crypto\\x509v3\\v3_asid.c",uVar14);
        uVar6 = local_res10;
        goto LAB_144ef892a;
      }
      if (((local_res18 == 0) && (local_res18 = FUN_144ba0570(), local_res18 == 0)) ||
         ((lVar5 = FUN_144ef1230(uVar9,local_res18), lVar5 == 0 ||
          (iVar2 = FUN_14526b1f0(local_res18,1), iVar2 == 0)))) {
        uVar14 = 0x1ad;
LAB_144ef8908:
        uVar9 = 0x41;
        goto LAB_144ef890e;
      }
      uVar6 = FUN_144ef1210(local_res18,local_res10);
      if (uVar6 == 0) {
        FUN_144ba24f0(0x22,0xa1,0x41,"crypto\\x509v3\\v3_asid.c",0x1b5);
        uVar6 = local_res10;
        goto LAB_144ef892a;
      }
      iVar2 = FUN_144ef10c0(uVar6,uVar8);
      local_res10 = uVar6;
      if (iVar2 == 0) {
        if (*piVar3 == 0) {
          puVar7 = (undefined8 *)FUN_144ea64e0(0x10,"crypto\\x509v3\\v3_asid.c",0x1c0);
          if (puVar7 == (undefined8 *)0x0) {
            uVar14 = 0x1c2;
            goto LAB_144ef8908;
          }
          *puVar7 = uVar11;
          puVar7[1] = uVar12;
          *piVar3 = 1;
          *(undefined8 **)(piVar3 + 2) = puVar7;
        }
        else if (*piVar3 == 1) {
          FUN_144efe870(*(undefined8 *)(*(longlong *)(piVar3 + 2) + 8));
          *(undefined8 *)(*(longlong *)(piVar3 + 2) + 8) = uVar12;
        }
        if (*piVar4 == 0) {
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        else if (*piVar4 == 1) {
          *(undefined8 *)(*(longlong *)(piVar4 + 2) + 8) = 0;
        }
        FUN_144eff330(piVar4,&DAT_149c03130);
        FUN_144bac0f0(*(undefined8 *)(param_1 + 2),local_res8);
        iVar1 = iVar1 + -1;
        local_res8 = local_res8 + -1;
      }
      local_res8 = local_res8 + 1;
      uVar10 = (ulonglong)(iVar1 + 1U);
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
    } while ((int)(iVar1 + 1U) < iVar2 + -1);
  }
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
  piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
     (iVar1 = FUN_144ef10c0(**(undefined8 **)(piVar3 + 2),(*(undefined8 **)(piVar3 + 2))[1]),
     iVar1 < 1)) {
    iVar1 = FUN_144ef8380(param_1);
    bVar13 = iVar1 != 0;
  }
LAB_144ef892a:
  FUN_144efe870(uVar6);
  FUN_144ba0cd0(local_res18);
  return bVar13;
}



// FUNCTION 144ef89f0 FUN_144ef89f0 body=335 status=ok
// SIG undefined FUN_144ef89f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef89f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((param_2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar7 = 0;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_144babc00(param_2,iVar7);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if (*piVar2 == 0) {
        uVar5 = *(undefined8 *)(piVar2 + 2);
        uVar8 = uVar5;
      }
      else {
        if (*piVar2 != 1) {
          return 0;
        }
        uVar5 = (*(undefined8 **)(piVar2 + 2))[1];
        uVar8 = **(undefined8 **)(piVar2 + 2);
      }
      while( true ) {
        iVar1 = FUN_144babbf0(param_1);
        if (iVar1 <= iVar4) {
          return 0;
        }
        piVar2 = (int *)FUN_144babc00(param_1,iVar4);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          uVar3 = *(undefined8 *)(piVar2 + 2);
          uVar6 = uVar3;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          uVar3 = (*(undefined8 **)(piVar2 + 2))[1];
          uVar6 = **(undefined8 **)(piVar2 + 2);
        }
        iVar1 = FUN_144ef10c0(uVar3,uVar5);
        if (-1 < iVar1) break;
        iVar4 = iVar4 + 1;
      }
      iVar1 = FUN_144ef10c0(uVar6,uVar8);
      if (0 < iVar1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar7 < iVar1);
  }
  return 1;
}



// FUNCTION 144ef8b40 FUN_144ef8b40 body=1091 status=ok
// SIG undefined FUN_144ef8b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ef8b40(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = 1;
  bVar3 = false;
  if ((param_2 == 0) || (iVar4 = FUN_144babbf0(param_2), iVar4 < 1)) {
LAB_144ef8f66:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_144ef8f66;
  if (param_3 == (undefined8 *)0x0) {
    iVar4 = 0;
    lVar7 = FUN_144babc00(param_2,0);
    param_3 = *(undefined8 **)(lVar7 + 0x118);
    if (param_3 == (undefined8 *)0x0) goto LAB_144ef8f5f;
  }
  else {
    iVar4 = -1;
    lVar7 = 0;
  }
  iVar5 = FUN_144ef8070(param_3);
  uVar6 = 1;
  if (iVar5 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (uVar6 == 0) goto LAB_144ef8f5f;
      goto LAB_144ef8c1c;
    }
  }
  else {
LAB_144ef8c1c:
    piVar1 = (int *)*param_3;
    lVar9 = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        bVar3 = true;
        lVar9 = 0;
      }
      else if (*piVar1 == 1) {
        lVar9 = *(longlong *)(piVar1 + 2);
      }
    }
    piVar1 = (int *)param_3[1];
    lVar10 = 0;
    bVar2 = false;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 == 0) {
        bVar2 = true;
        lVar10 = 0;
      }
      else {
        bVar2 = false;
        if (*piVar1 == 1) {
          lVar10 = *(longlong *)(piVar1 + 2);
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = FUN_144babbf0(param_2);
    if (iVar4 < iVar5) {
      do {
        lVar7 = FUN_144babc00(param_2,iVar4);
        if (lVar7 == 0) goto LAB_144ef8eb4;
        if (*(longlong *)(lVar7 + 0x118) == 0) {
          if ((lVar9 != 0) || (lVar10 != 0)) {
            if (param_1 == 0) goto LAB_144ef8f5d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x000144ef8e7e:
            if (uVar6 == 0) goto LAB_144ef8f5f;
          }
        }
        else {
          iVar5 = FUN_144ef8070();
          if (iVar5 == 0) {
            if (param_1 == 0) goto LAB_144ef8f5d;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_144ef8f5f;
          }
          if ((**(longlong **)(lVar7 + 0x118) == 0) && (lVar9 != 0)) {
            if (param_1 == 0) goto LAB_144ef8f5d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_144ef8f5f;
            lVar9 = 0;
            bVar3 = false;
          }
          piVar1 = (int *)**(undefined8 **)(lVar7 + 0x118);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
            if ((bVar3) || (iVar5 = FUN_144ef89f0(*(undefined8 *)(piVar1 + 2),lVar9), iVar5 != 0)) {
              bVar3 = false;
              lVar9 = *(longlong *)(**(longlong **)(lVar7 + 0x118) + 8);
            }
            else {
              if (param_1 == 0) goto LAB_144ef8f5d;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = iVar4;
              *(longlong *)(param_1 + 0xb8) = lVar7;
              uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (uVar6 == 0) goto LAB_144ef8f5f;
            }
          }
          if ((*(longlong *)(*(longlong *)(lVar7 + 0x118) + 8) == 0) && (lVar10 != 0)) {
            if (param_1 == 0) goto LAB_144ef8f5d;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(int *)(param_1 + 0xac) = iVar4;
            *(longlong *)(param_1 + 0xb8) = lVar7;
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (uVar6 == 0) goto LAB_144ef8f5f;
            lVar10 = 0;
            bVar2 = false;
          }
          piVar1 = *(int **)(*(longlong *)(lVar7 + 0x118) + 8);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
            if ((!bVar2) && (iVar5 = FUN_144ef89f0(*(undefined8 *)(piVar1 + 2),lVar10), iVar5 == 0))
            {
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = iVar4;
                *(longlong *)(param_1 + 0xb8) = lVar7;
                uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
                goto joined_r0x000144ef8e7e;
              }
              goto LAB_144ef8f5d;
            }
            bVar2 = false;
            lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x118) + 8) + 8);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_144babbf0(param_2);
      } while (iVar4 < iVar5);
    }
    if (lVar7 == 0) {
LAB_144ef8eb4:
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
      }
      return 0;
    }
    if (*(undefined8 **)(lVar7 + 0x118) == (undefined8 *)0x0) goto LAB_144ef8f5f;
    piVar1 = (int *)**(undefined8 **)(lVar7 + 0x118);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      if (param_1 == 0) goto LAB_144ef8f5d;
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (uVar6 == 0) goto LAB_144ef8f5f;
    }
    piVar1 = *(int **)(*(longlong *)(lVar7 + 0x118) + 8);
    if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) goto LAB_144ef8f5f;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(int *)(param_1 + 0xac) = iVar4;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      uVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar8;
    }
  }
LAB_144ef8f5d:
  uVar6 = 0;
LAB_144ef8f5f:
  return (ulonglong)uVar6;
}



// FUNCTION 144ef8f90 FUN_144ef8f90 body=1919 status=ok
// SIG undefined FUN_144ef8f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef8f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *_Str;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *_Control;
  undefined8 uVar13;
  ulong *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  longlong local_88;
  char *local_80;
  int local_78;
  ulong local_74;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = param_3;
  lVar4 = FUN_144babc60(FUN_144efaee0);
  local_88 = lVar4;
  if (lVar4 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x390);
    FUN_144ba24f0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
  }
  else {
    iVar12 = 0;
    local_78 = 0;
    iVar2 = FUN_144babbf0(param_3);
    if (0 < iVar2) {
      do {
        puVar5 = (undefined8 *)FUN_144babc00(param_3,iVar12);
        _Control = (char *)0x0;
        local_70 = (char *)0x0;
        puVar14 = (ulong *)0x0;
        iVar2 = FUN_144ef6830(puVar5[1],&DAT_149c037b0);
        if (iVar2 != 0) {
          iVar2 = FUN_144ef6830(puVar5[1],&DAT_149c037b8);
          if (iVar2 == 0) {
LAB_144ef90cf:
            iVar2 = 2;
            goto LAB_144ef90d4;
          }
          iVar2 = FUN_144ef6830(puVar5[1],"IPv4-SAFI");
          if (iVar2 == 0) {
            iVar2 = 1;
            puVar14 = &local_74;
            goto LAB_144ef90d4;
          }
          iVar2 = FUN_144ef6830(puVar5[1],"IPv6-SAFI");
          if (iVar2 == 0) {
            puVar14 = &local_74;
            goto LAB_144ef90cf;
          }
          local_a8 = CONCAT44(local_a8._4_4_,0x3a7);
          uVar13 = 0x73;
LAB_144ef94f8:
          FUN_144ba24f0(0x22,0x9f,uVar13,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar5[2];
          local_a0 = ",value:";
          local_a8 = puVar5[1];
          FUN_144ba2bd0(6,"section:",*puVar5,",name:");
          _Str = (char *)0x0;
          lVar4 = local_88;
          goto LAB_144ef94bf;
        }
        iVar2 = 1;
LAB_144ef90d4:
        if (iVar2 == 1) {
          _Control = "0123456789.";
          local_70 = _Control;
        }
        else if (iVar2 == 2) {
          _Control = "0123456789.:abcdefABCDEF";
          local_70 = _Control;
        }
        if (iVar2 == 1) {
          iVar12 = 4;
        }
        else if (iVar2 == 2) {
          iVar12 = 0x10;
        }
        else {
          iVar12 = 0;
        }
        if (puVar14 == (ulong *)0x0) {
          _Str = (char *)FUN_144ea6dc0((char *)puVar5[2],"crypto\\x509v3\\v3_addr.c");
        }
        else {
          uVar3 = strtoul((char *)puVar5[2],&local_80,0);
          *puVar14 = uVar3;
          sVar6 = strspn(local_80," \t");
          local_80 = local_80 + sVar6;
          if ((0xff < uVar3) || (cVar1 = *local_80, local_80 = local_80 + 1, cVar1 != ':')) {
            local_a8 = CONCAT44(local_a8._4_4_,0x3bf);
            uVar13 = 0xa4;
            goto LAB_144ef94f8;
          }
          sVar6 = strspn(local_80," \t");
          local_80 = local_80 + sVar6;
          _Str = (char *)FUN_144ea6dc0(local_80,"crypto\\x509v3\\v3_addr.c");
          lVar4 = local_88;
        }
        if (_Str == (char *)0x0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3c9);
          FUN_144ba24f0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
          lVar4 = local_88;
          goto LAB_144ef94bf;
        }
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 1;
          if (_Str[lVar8] != "inherit"[lVar8]) {
            sVar6 = strspn(_Str,_Control);
            sVar7 = strspn(_Str + (int)sVar6," \t");
            iVar10 = (int)sVar6 + (int)sVar7;
            iVar11 = iVar10 + 1;
            cVar1 = _Str[iVar10];
            _Str[(int)sVar6] = '\0';
            iVar10 = FUN_144ef67b0(local_50,_Str);
            lVar4 = local_88;
            if (iVar10 != iVar12) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3e3);
              uVar13 = 0xa6;
              goto LAB_144ef955b;
            }
            if (cVar1 == '\0') {
              local_a8 = CONCAT44(local_a8._4_4_,iVar12 * 8);
              iVar2 = FUN_144ef9ad0(local_88,iVar2,puVar14,local_50);
              if (iVar2 == 0) {
                local_a8 = CONCAT44(local_a8._4_4_,0x415);
                FUN_144ba24f0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
                goto LAB_144ef94bf;
              }
LAB_144ef946c:
              FUN_144ea6530(_Str,"crypto\\x509v3\\v3_addr.c");
              goto LAB_144ef9488;
            }
            if (cVar1 == '-') {
              sVar6 = strspn(_Str + iVar11," \t");
              iVar11 = (int)sVar6 + iVar11;
              sVar6 = strspn(_Str + iVar11,local_70);
              iVar10 = (int)sVar6 + iVar11;
              if ((iVar11 == iVar10) || (_Str[iVar10] != '\0')) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3fe);
                uVar13 = 0x74;
                goto LAB_144ef955b;
              }
              iVar10 = FUN_144ef67b0(local_40,_Str + iVar11);
              if (iVar10 != iVar12) {
                local_a8 = CONCAT44(local_a8._4_4_,0x404);
                uVar13 = 0xa6;
                goto LAB_144ef955b;
              }
              if (iVar2 == 1) {
                sVar6 = 4;
              }
              else if (iVar2 == 2) {
                sVar6 = 0x10;
              }
              else {
                sVar6 = 0;
              }
              iVar12 = memcmp(local_50,local_40,sVar6);
              lVar4 = local_88;
              if (0 < iVar12) {
                local_a8 = CONCAT44(local_a8._4_4_,0x40a);
                uVar13 = 0x74;
                goto LAB_144ef955b;
              }
              lVar8 = FUN_144efae10(local_88,iVar2,puVar14);
              if (iVar2 == 1) {
                uVar13 = 4;
              }
              else if (iVar2 == 2) {
                uVar13 = 0x10;
              }
              else {
                uVar13 = 0;
              }
              if ((lVar8 != 0) &&
                 (iVar2 = FUN_144efaa90(&local_60,local_50,local_40,uVar13), uVar13 = local_60,
                 iVar2 != 0)) {
                iVar2 = FUN_144bac1c0(lVar8,local_60);
                if (iVar2 != 0) goto LAB_144ef946c;
                FUN_144eff330(uVar13,&DAT_149c03490);
              }
              local_a8 = CONCAT44(local_a8._4_4_,0x40f);
            }
            else {
              if (cVar1 != '/') {
                local_a8 = CONCAT44(local_a8._4_4_,0x41b);
                uVar13 = 0x74;
                goto LAB_144ef955b;
              }
              uVar3 = strtoul(_Str + iVar11,&local_80,10);
              lVar4 = local_88;
              if ((((local_80 == _Str + iVar11) || (*local_80 != '\0')) || (iVar12 * 8 < (int)uVar3)
                  ) || ((int)uVar3 < 0)) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3f0);
                uVar13 = 0x74;
                goto LAB_144ef955b;
              }
              lVar8 = FUN_144efae10(local_88,iVar2,puVar14);
              if ((lVar8 != 0) &&
                 (iVar2 = FUN_144efa970(&local_68,local_50,uVar3), uVar13 = local_68, iVar2 != 0)) {
                iVar2 = FUN_144bac1c0(lVar8,local_68);
                if (iVar2 != 0) goto LAB_144ef946c;
                FUN_144eff330(uVar13,&DAT_149c03490);
              }
              local_a8 = CONCAT44(local_a8._4_4_,0x3f5);
            }
            FUN_144ba24f0(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
            goto LAB_144ef94bf;
          }
          lVar8 = lVar9;
        } while (lVar9 != 8);
        iVar2 = FUN_144ef9a50(lVar4,iVar2,puVar14);
        if (iVar2 == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3d4);
          uVar13 = 0xa5;
LAB_144ef955b:
          FUN_144ba24f0(0x22,0x9f,uVar13,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar5[2];
          local_a0 = ",value:";
          local_a8 = puVar5[1];
          FUN_144ba2bd0(6,"section:",*puVar5,",name:");
          lVar4 = local_88;
          goto LAB_144ef94bf;
        }
        FUN_144ea6530(_Str,"crypto\\x509v3\\v3_addr.c");
LAB_144ef9488:
        param_3 = local_58;
        iVar12 = local_78 + 1;
        local_78 = iVar12;
        iVar2 = FUN_144babbf0(local_58);
      } while (iVar12 < iVar2);
    }
    _Str = (char *)0x0;
    iVar2 = FUN_144efa000(lVar4);
    lVar4 = local_88;
    if (iVar2 == 0) {
LAB_144ef94bf:
      FUN_144ea6530(_Str,"crypto\\x509v3\\v3_addr.c",0x42c);
      FUN_144babe00(lVar4,FUN_144ef9a30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144ef9770 FUN_144ef9770 body=540 status=ok
// SIG undefined FUN_144ef9770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef9770(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ef9794;
  iVar8 = 0;
  iVar3 = FUN_144babbf0(param_2);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)FUN_144babc00(param_2,iVar8);
      if ((((puVar4 == (undefined8 *)0x0) || (piVar1 = (int *)*puVar4, piVar1 == (int *)0x0)) ||
          (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar1 < 2)) {
        sVar7 = 0;
      }
      else {
        sVar7 = CONCAT11(*puVar2,puVar2[1]);
      }
      if (sVar7 == 1) {
        pcVar6 = "%*sIPv4";
LAB_144ef9833:
        FUN_144ec7640(param_3,pcVar6,param_4,&DAT_149e02088);
      }
      else {
        if (sVar7 == 2) {
          pcVar6 = "%*sIPv6";
          goto LAB_144ef9833;
        }
        FUN_144ec7640(param_3,"%*sUnknown AFI %u",param_4,&DAT_149e02088,sVar7,uVar9);
      }
      if (2 < *(int *)*puVar4) {
        switch(*(undefined1 *)(*(longlong *)((int *)*puVar4 + 2) + 2)) {
        case 1:
          FUN_144b9ebc0(param_3," (Unicast)");
          break;
        case 2:
          FUN_144b9ebc0(param_3," (Multicast)");
          break;
        case 3:
          FUN_144b9ebc0(param_3," (Unicast/Multicast)");
          break;
        case 4:
          FUN_144b9ebc0(param_3," (MPLS)");
          break;
        default:
          FUN_144ec7640(param_3," (Unknown SAFI %u)");
          break;
        case 0x40:
          FUN_144b9ebc0(param_3," (Tunnel)");
          break;
        case 0x41:
          FUN_144b9ebc0(param_3," (VPLS)");
          break;
        case 0x42:
          FUN_144b9ebc0(param_3," (BGP MDT)");
          break;
        case 0x80:
          FUN_144b9ebc0(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)puVar4[1] == 0) {
        FUN_144b9ebc0(param_3,": inherit\n");
      }
      else if (*(int *)puVar4[1] == 1) {
        FUN_144b9ebc0(param_3,&DAT_149c03794);
        uVar5 = FUN_144efa3c0(param_3,param_4 + 2,*(undefined8 *)(puVar4[1] + 8),sVar7);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_144babbf0(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}



// FUNCTION 144ef9a30 FUN_144ef9a30 body=29 status=ok
// SIG undefined FUN_144ef9a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef9a30(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149c03570);
  return;
}



// FUNCTION 144ef9a50 FUN_144ef9a50 body=127 status=ok
// SIG undefined FUN_144ef9a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ef9a50(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144efacf0();
  if (((lVar2 != 0) && (piVar1 = *(int **)(lVar2 + 8), piVar1 != (int *)0x0)) &&
     ((*piVar1 != 1 || (*(longlong *)(piVar1 + 2) == 0)))) {
    if (*piVar1 == 0) {
      if (*(longlong *)(piVar1 + 2) != 0) {
        return 1;
      }
    }
    else if (*(longlong *)(piVar1 + 2) != 0) goto LAB_144ef9ab2;
    lVar3 = FUN_144efea10();
    *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
    if (lVar3 != 0) {
LAB_144ef9ab2:
      **(undefined4 **)(lVar2 + 8) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ef9ad0 FUN_144ef9ad0 body=167 status=ok
// SIG undefined FUN_144ef9ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ef9ad0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ef9ae5;
  lVar2 = FUN_144efae10();
  if (lVar2 != 0) {
    if (param_2 == 1) {
      uVar3 = 4;
    }
    else if (param_2 == 2) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0;
    }
    iVar1 = FUN_144efa970(&local_18,param_4,param_5,uVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_144bac1c0(lVar2,local_18);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_144eff330(local_18,&DAT_149c03490);
    }
  }
  return 0;
}



// FUNCTION 144ef9b80 FUN_144ef9b80 body=43 status=ok
// SIG undefined FUN_144ef9b80(void)

undefined2 FUN_144ef9b80(undefined8 *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
      (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 != (undefined1 *)0x0)) && (1 < *piVar1)) {
    return CONCAT11(*puVar2,puVar2[1]);
  }
  return 0;
}



// FUNCTION 144ef9bb0 FUN_144ef9bb0 body=1082 status=ok
// SIG undefined FUN_144ef9bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ef9bb0(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  short sVar12;
  undefined8 uVar13;
  size_t _Size;
  int iVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [15];
  char acStack_51 [17];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    iVar14 = 0;
    iVar5 = FUN_144babbf0();
    if (0 < iVar5 + -1) {
      do {
        puVar7 = (undefined8 *)FUN_144babc00(param_1,iVar14);
        iVar14 = iVar14 + 1;
        puVar8 = (undefined8 *)FUN_144babc00(param_1,iVar14);
        piVar10 = (int *)*puVar7;
        piVar11 = (int *)*puVar8;
        iVar5 = *piVar10;
        iVar15 = *piVar11;
        piVar9 = piVar11;
        if (iVar5 <= iVar15) {
          piVar9 = piVar10;
        }
        iVar6 = memcmp(*(void **)(piVar10 + 2),*(void **)(piVar11 + 2),(longlong)*piVar9);
        if (iVar6 == 0) {
          iVar6 = iVar5 - iVar15;
        }
        if (-1 < iVar6) goto LAB_144ef9fda;
        iVar5 = FUN_144babbf0(param_1);
      } while (iVar14 < iVar5 + -1);
    }
    iVar5 = 0;
    local_78 = 0;
    iVar14 = FUN_144babbf0(param_1);
    if (0 < iVar14) {
      do {
        puVar7 = (undefined8 *)FUN_144babc00(param_1,iVar5);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar10 = (int *)*puVar7, piVar10 == (int *)0x0)) ||
            (puVar2 = *(undefined1 **)(piVar10 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar10 < 2)
           ) {
          sVar12 = 0;
        }
        else {
          sVar12 = CONCAT11(*puVar2,puVar2[1]);
        }
        if (sVar12 == 1) {
          _Size = 4;
        }
        else if (sVar12 == 2) {
          _Size = 0x10;
        }
        else {
          _Size = 0;
        }
        if ((puVar7 == (undefined8 *)0x0) || (piVar10 = (int *)puVar7[1], piVar10 == (int *)0x0))
        break;
        if (*piVar10 != 0) {
          if (*piVar10 != 1) break;
          uVar3 = *(undefined8 *)(piVar10 + 2);
          iVar14 = FUN_144babbf0(uVar3);
          if (iVar14 == 0) break;
          iVar15 = 0;
          iVar14 = FUN_144babbf0(uVar3);
          if (0 < iVar14 + -1) {
            do {
              piVar10 = (int *)FUN_144babc00(uVar3,iVar15);
              iVar15 = iVar15 + 1;
              piVar11 = (int *)FUN_144babc00(uVar3,iVar15);
              if (piVar10 == (int *)0x0) goto LAB_144ef9fda;
              if (*piVar10 == 0) {
                iVar5 = FUN_144efa130(local_60,*(undefined8 *)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) goto LAB_144ef9fda;
                uVar13 = *(undefined8 *)(piVar10 + 2);
              }
              else {
                if ((*piVar10 != 1) ||
                   (iVar5 = FUN_144efa130(local_60,**(undefined8 **)(piVar10 + 2),_Size,0),
                   iVar5 == 0)) goto LAB_144ef9fda;
                uVar13 = *(undefined8 *)(*(longlong *)(piVar10 + 2) + 8);
              }
              iVar5 = FUN_144efa130(local_70,uVar13,_Size,0xff);
              if ((iVar5 == 0) || (piVar11 == (int *)0x0)) goto LAB_144ef9fda;
              if (*piVar11 == 0) {
                iVar5 = FUN_144efa130(acStack_51 + 1,*(undefined8 *)(piVar11 + 2),_Size,0);
                if (iVar5 == 0) goto LAB_144ef9fda;
                uVar13 = *(undefined8 *)(piVar11 + 2);
              }
              else {
                if ((*piVar11 != 1) ||
                   (iVar5 = FUN_144efa130(acStack_51 + 1,**(undefined8 **)(piVar11 + 2),_Size,0),
                   iVar5 == 0)) goto LAB_144ef9fda;
                uVar13 = *(undefined8 *)(*(longlong *)(piVar11 + 2) + 8);
              }
              iVar5 = FUN_144efa130(local_40,uVar13,_Size,0xff);
              if ((((iVar5 == 0) || (iVar5 = memcmp(local_60,acStack_51 + 1,_Size), -1 < iVar5)) ||
                  (iVar5 = memcmp(local_60,local_70,_Size), 0 < iVar5)) ||
                 (iVar5 = memcmp(acStack_51 + 1,local_40,_Size), sVar4 = _Size, 0 < iVar5))
              goto LAB_144ef9fda;
              do {
                if ((longlong)(sVar4 - 1) < 0) break;
                cVar1 = acStack_51[sVar4];
                acStack_51[sVar4] = cVar1 + -1;
                sVar4 = sVar4 - 1;
              } while (cVar1 == '\0');
              iVar5 = memcmp(local_70,acStack_51 + 1,_Size);
              if ((-1 < iVar5) ||
                 ((*piVar10 == 1 && (iVar5 = FUN_144efa790(local_60,local_70,_Size), -1 < iVar5))))
              goto LAB_144ef9fda;
              iVar14 = FUN_144babbf0(uVar3);
              iVar5 = local_78;
            } while (iVar15 < iVar14 + -1);
          }
          iVar14 = FUN_144babbf0(uVar3);
          piVar10 = (int *)FUN_144babc00(uVar3,iVar14 + -1);
          if (((piVar10 != (int *)0x0) && (*piVar10 == 1)) &&
             ((iVar14 = FUN_144efa130(local_60,**(undefined8 **)(piVar10 + 2),_Size,0), iVar14 == 0
              || (((iVar14 = FUN_144efa130(local_70,*(undefined8 *)(*(longlong *)(piVar10 + 2) + 8),
                                           _Size,0xff), iVar14 == 0 ||
                   (iVar14 = memcmp(local_60,local_70,_Size), 0 < iVar14)) ||
                  (iVar14 = FUN_144efa790(local_60,local_70,_Size), -1 < iVar14)))))) break;
        }
        iVar5 = iVar5 + 1;
        local_78 = iVar5;
        iVar14 = FUN_144babbf0(param_1);
      } while (iVar5 < iVar14);
    }
  }
LAB_144ef9fda:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 144efa000 FUN_144efa000 body=206 status=ok
// SIG undefined FUN_144efa000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144efa000(undefined8 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = FUN_144babbf0();
  uVar6 = uVar7;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)FUN_144babc00(param_1,uVar6);
      if (*(int *)puVar4[1] == 1) {
        piVar1 = (int *)*puVar4;
        uVar5 = uVar7;
        if (((piVar1 != (int *)0x0) &&
            (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 != (undefined1 *)0x0)) && (1 < *piVar1))
        {
          uVar5 = (uint)CONCAT11(*puVar2,puVar2[1]);
        }
        iVar3 = FUN_144efaf30(*(undefined8 *)((int *)puVar4[1] + 2),uVar5);
        if (iVar3 == 0) {
          return false;
        }
      }
      uVar6 = uVar6 + 1;
      iVar3 = FUN_144babbf0(param_1);
    } while ((int)uVar6 < iVar3);
  }
  FUN_144bac280(param_1,FUN_144efaee0);
  FUN_144bac390(param_1);
  iVar3 = FUN_144ef9bb0(param_1);
  return iVar3 != 0;
}



// FUNCTION 144efa0d0 FUN_144efa0d0 body=87 status=ok
// SIG undefined FUN_144efa0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efa0d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_144babbf0();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_144efb470(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



// FUNCTION 144efa130 FUN_144efa130 body=167 status=ok
// SIG undefined FUN_144efa130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efa130(void *param_1,int *param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  
  iVar2 = *param_2;
  if ((iVar2 < 0) || (param_3 < iVar2)) {
    uVar3 = 0;
  }
  else {
    if (0 < iVar2) {
      memcpy(param_1,*(void **)(param_2 + 2),(longlong)iVar2);
      if ((param_2[4] & 7U) != 0) {
        bVar4 = (byte)(0xff >> (8U - (char)(param_2[4] & 7U) & 0x1f));
        if (param_4 == 0) {
          pbVar1 = (byte *)((longlong)(*param_2 + -1) + (longlong)param_1);
          *pbVar1 = *pbVar1 & ~bVar4;
        }
        else {
          pbVar1 = (byte *)((longlong)(*param_2 + -1) + (longlong)param_1);
          *pbVar1 = *pbVar1 | bVar4;
        }
      }
    }
    memset((void *)((longlong)param_1 + (longlong)*param_2),(uint)param_4,
           (longlong)(param_3 - *param_2));
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 144efa1e0 FUN_144efa1e0 body=458 status=ok
// SIG undefined FUN_144efa1e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efa1e0(undefined8 param_1,int param_2,undefined1 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  char acStack_4a [18];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_4 < 0) goto LAB_144efa39d;
  if (param_2 == 1) {
    iVar2 = FUN_144efa130(acStack_4a + 2,param_4,4,param_3);
    if (iVar2 != 0) {
      local_50 = (uint)(byte)acStack_4a[5];
      local_58 = (uint)(byte)acStack_4a[4];
      FUN_144ec7640(param_1,"%d.%d.%d.%d",acStack_4a[2],acStack_4a[3]);
    }
    goto LAB_144efa39d;
  }
  if (param_2 != 2) {
    iVar2 = 0;
    if (0 < *param_4) {
      lVar1 = 0;
      do {
        pwVar4 = L"";
        if (0 < iVar2) {
          pwVar4 = L":Asset";
        }
        FUN_144ec7640(param_1,"%s%02x",pwVar4,*(undefined1 *)(lVar1 + *(longlong *)(param_4 + 2)));
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
      } while (iVar2 < *param_4);
    }
    FUN_144ec7640(param_1,&DAT_14bd49fdb,param_4[4] & 7);
    goto LAB_144efa39d;
  }
  iVar3 = 0x10;
  iVar2 = FUN_144efa130(acStack_4a + 2,param_4,0x10,param_3);
  if (iVar2 == 0) goto LAB_144efa39d;
  lVar1 = 0x10;
  do {
    if ((acStack_4a[lVar1 + 1] != '\0') || (acStack_4a[lVar1] != '\0')) break;
    iVar3 = iVar3 + -2;
    lVar1 = lVar1 + -2;
  } while (1 < lVar1);
  iVar2 = 0;
  lVar1 = 0;
  if ((longlong)iVar3 < 1) {
LAB_144efa321:
    FUN_144b9ebc0(param_1,L":Asset");
  }
  else {
    do {
      pwVar4 = L"";
      if (iVar2 < 0xe) {
        pwVar4 = L":Asset";
      }
      FUN_144ec7640(param_1,&DAT_149c036ac,CONCAT11(acStack_4a[lVar1 + 2],acStack_4a[lVar1 + 3]),
                    pwVar4);
      iVar2 = iVar2 + 2;
      lVar1 = lVar1 + 2;
    } while (lVar1 < iVar3);
    if (iVar2 < 0x10) goto LAB_144efa321;
  }
  if (iVar2 == 0) {
    FUN_144b9ebc0(param_1,L":Asset");
  }
LAB_144efa39d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 144efa3c0 FUN_144efa3c0 body=313 status=ok
// SIG undefined FUN_144efa3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efa3c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(param_3);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_144babc00(param_3,iVar3);
      FUN_144ec7640(param_1,&DAT_149c02f70,param_2,&DAT_149e02088);
      if (*piVar2 == 0) {
        iVar1 = FUN_144efa1e0(param_1,param_4,0,*(undefined8 *)(piVar2 + 2));
        if (iVar1 == 0) {
          return 0;
        }
        FUN_144ec7640(param_1,&DAT_149c036bc,
                      **(int **)(piVar2 + 2) * 8 - ((*(int **)(piVar2 + 2))[4] & 7U));
      }
      else if (*piVar2 == 1) {
        iVar1 = FUN_144efa1e0(param_1,param_4,0,**(undefined8 **)(piVar2 + 2));
        if (iVar1 == 0) {
          return 0;
        }
        FUN_144b9ebc0(param_1,L"-`[Left Bracket");
        iVar1 = FUN_144efa1e0(param_1,param_4,0xff,*(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
        if (iVar1 == 0) {
          return 0;
        }
        FUN_144b9ebc0(param_1,&DAT_149dfc0af);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_3);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 144efa500 FUN_144efa500 body=573 status=ok
// SIG undefined FUN_144efa500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efa500(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_88 [32];
  byte local_68 [16];
  byte local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144efa515;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    piVar2 = *(int **)(param_1 + 2);
    iVar1 = *piVar2;
    if ((iVar1 < 0) || (param_3 < iVar1)) goto LAB_144efa730;
    if (0 < iVar1) {
      memcpy(local_58,*(void **)(piVar2 + 2),(longlong)iVar1);
      if ((piVar2[4] & 7U) != 0) {
        local_58[iVar1 + -1] =
             local_58[iVar1 + -1] & ~(byte)(0xff >> (8U - (char)(piVar2[4] & 7U) & 0x1f));
      }
    }
    memset(local_58 + iVar1,0,(longlong)(param_3 - iVar1));
  }
  else if (*param_1 == 1) {
    piVar2 = (int *)**(undefined8 **)(param_1 + 2);
    iVar1 = *piVar2;
    if ((iVar1 < 0) || (param_3 < iVar1)) goto LAB_144efa730;
    if (0 < iVar1) {
      memcpy(local_58,*(void **)(piVar2 + 2),(longlong)iVar1);
      if ((piVar2[4] & 7U) != 0) {
        local_58[iVar1 + -1] =
             local_58[iVar1 + -1] & ~(byte)(0xff >> (8U - (char)(piVar2[4] & 7U) & 0x1f));
      }
    }
    memset(local_58 + iVar1,0,(longlong)(param_3 - iVar1));
  }
  if (*param_2 == 0) {
    piVar2 = *(int **)(param_2 + 2);
    iVar1 = *piVar2;
    if ((iVar1 < 0) || (param_3 < iVar1)) goto LAB_144efa730;
    if (0 < iVar1) {
      memcpy(local_68,*(void **)(piVar2 + 2),(longlong)iVar1);
      if ((piVar2[4] & 7U) != 0) {
        local_68[iVar1 + -1] =
             local_68[iVar1 + -1] & ~(byte)(0xff >> (8U - (char)(piVar2[4] & 7U) & 0x1f));
      }
    }
    memset(local_68 + iVar1,0,(longlong)(param_3 - iVar1));
  }
  else if (*param_2 == 1) {
    piVar2 = (int *)**(undefined8 **)(param_2 + 2);
    iVar1 = *piVar2;
    if ((iVar1 < 0) || (param_3 < iVar1)) goto LAB_144efa730;
    if (0 < iVar1) {
      memcpy(local_68,*(void **)(piVar2 + 2),(longlong)iVar1);
      if ((piVar2[4] & 7U) != 0) {
        local_68[iVar1 + -1] =
             local_68[iVar1 + -1] & ~(byte)(0xff >> (8U - (char)(piVar2[4] & 7U) & 0x1f));
      }
    }
    memset(local_68 + iVar1,0,(longlong)(param_3 - iVar1));
  }
  memcmp(local_58,local_68,(longlong)param_3);
LAB_144efa730:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 144efa750 FUN_144efa750 body=32 status=ok
// SIG undefined FUN_144efa750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efa750(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144efa500(*param_1,*param_2,4);
  return;
}



// FUNCTION 144efa770 FUN_144efa770 body=32 status=ok
// SIG undefined FUN_144efa770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efa770(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144efa500(*param_1,*param_2,0x10);
  return;
}



// FUNCTION 144efa790 FUN_144efa790 body=306 status=ok
// SIG undefined FUN_144efa790(void)

int FUN_144efa790(longlong param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_3) {
    pcVar4 = param_2;
    iVar5 = 0;
    do {
      if (pcVar4[param_1 - (longlong)param_2] != *pcVar4) break;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((longlong)pcVar4 - (longlong)param_2 < (longlong)param_3);
  }
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    pcVar4 = param_2 + param_3;
    do {
      if ((pcVar4[param_1 - (longlong)param_2] != '\0') || (*pcVar4 != -1)) break;
      pcVar4 = pcVar4 + -1;
      param_3 = param_3 + -1;
    } while (-1 < (longlong)pcVar4 - (longlong)param_2);
  }
  if (param_3 <= iVar5) {
    if (param_3 < iVar5) {
      return iVar5 * 8;
    }
    bVar1 = *(byte *)(iVar5 + param_1);
    bVar3 = param_2[iVar5] ^ bVar1;
    switch(bVar3) {
    case 1:
      iVar2 = 7;
      break;
    default:
      goto switchD_144efa86f_caseD_2;
    case 3:
      iVar2 = 6;
      break;
    case 7:
      iVar2 = 5;
      break;
    case 0xf:
      iVar2 = 4;
      break;
    case 0x1f:
      iVar2 = 3;
      break;
    case 0x3f:
      iVar2 = 2;
      break;
    case 0x7f:
      iVar2 = 1;
    }
    if (((bVar3 & bVar1) == 0) && ((param_2[iVar5] & bVar3) == bVar3)) {
      return iVar2 + iVar5 * 8;
    }
  }
switchD_144efa86f_caseD_2:
  return -1;
}



// FUNCTION 144efa970 FUN_144efa970 body=287 status=ok
// SIG undefined FUN_144efa970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efa970(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = (int)(((int)(param_3 + 7) >> 0x1f & 7U) + param_3 + 7) >> 3;
  uVar4 = param_3 & 0x80000007;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
  }
  puVar2 = (undefined4 *)FUN_144efec20(&DAT_149c03490);
  if ((int)param_3 < 0) {
    return 0;
  }
  if (param_4 * 8 < (int)param_3) {
    return 0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0;
  if (*(longlong *)(puVar2 + 2) == 0) {
    lVar3 = FUN_144efe800();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 == 0) goto LAB_144efaa16;
  }
  iVar1 = FUN_1452a3080(*(undefined8 *)(puVar2 + 2),param_2,iVar6);
  if (iVar1 != 0) {
    *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) =
         *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) & 0xfffffff8;
    *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) = *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) | 8;
    if (0 < (int)uVar4) {
      pbVar5 = (byte *)((longlong)(iVar6 + -1) + *(longlong *)(*(longlong *)(puVar2 + 2) + 8));
      *pbVar5 = *pbVar5 & ~(byte)(0xff >> ((byte)uVar4 & 0x1f));
      *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) =
           *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) | 8 - uVar4;
    }
    *param_1 = puVar2;
    return 1;
  }
LAB_144efaa16:
  FUN_144eff330(puVar2,&DAT_149c03490);
  return 0;
}



// FUNCTION 144efaa90 FUN_144efaa90 body=605 status=ok
// SIG undefined FUN_144efaa90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efaa90(undefined8 *param_1,void *param_2,void *param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t sVar9;
  uint uVar10;
  size_t _Size;
  
  _Size = (size_t)param_4;
  iVar3 = memcmp(param_2,param_3,_Size);
  if (0 < iVar3) {
    return 0;
  }
  iVar3 = FUN_144efa790(param_2,param_3,param_4);
  if (-1 < iVar3) {
    uVar5 = FUN_144efa970(param_1,param_2,iVar3,param_4);
    return uVar5;
  }
  puVar6 = (undefined4 *)FUN_144efec20(&DAT_149c03490);
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar6 = 1;
  plVar7 = (longlong *)FUN_144efec20(&DAT_149c03420);
  *(longlong **)(puVar6 + 2) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 == 0) {
      lVar8 = FUN_144efe800();
      **(longlong **)(puVar6 + 2) = lVar8;
      if (lVar8 == 0) goto LAB_144efacc0;
    }
    if (*(longlong *)(*(longlong *)(puVar6 + 2) + 8) == 0) {
      lVar8 = FUN_144efe800();
      *(longlong *)(*(longlong *)(puVar6 + 2) + 8) = lVar8;
      if (lVar8 == 0) goto LAB_144efacc0;
    }
    sVar9 = _Size;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        if (*(char *)((longlong)param_2 + (sVar9 - 1)) != '\0') break;
        iVar3 = iVar3 + -1;
        sVar9 = sVar9 - 1;
      } while (0 < (longlong)sVar9);
    }
    iVar4 = FUN_1452a3080(**(undefined8 **)(puVar6 + 2),param_2,iVar3);
    if (iVar4 != 0) {
      *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) & 0xfffffff8;
      *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) | 8;
      if (0 < iVar3) {
        iVar4 = 1;
        bVar2 = *(byte *)((longlong)(iVar3 + -1) + (longlong)param_2);
        if ((bVar2 & 0x7f) != 0) {
          do {
            iVar4 = iVar4 + 1;
          } while (((uint)bVar2 & 0xffU >> ((byte)iVar4 & 0x1f)) != 0);
        }
        *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
             *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) | 8U - iVar4;
      }
      sVar9 = _Size;
      if (0 < param_4) {
        do {
          if (*(char *)((longlong)param_3 + (_Size - 1)) != -1) break;
          sVar9 = (size_t)((int)sVar9 - 1);
          _Size = _Size - 1;
        } while (0 < (longlong)_Size);
      }
      iVar3 = FUN_1452a3080(*(undefined8 *)(*(longlong *)(puVar6 + 2) + 8),param_3,
                            sVar9 & 0xffffffff);
      if (iVar3 != 0) {
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 & 0xfffffff8;
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 | 8;
        if (0 < (int)sVar9) {
          iVar3 = 1;
          bVar2 = *(byte *)((longlong)((int)sVar9 + -1) + (longlong)param_3);
          if ((bVar2 & 0x7f) != 0x7f) {
            do {
              iVar3 = iVar3 + 1;
              uVar10 = 0xff >> ((byte)iVar3 & 0x1f);
            } while ((uVar10 & bVar2) != uVar10);
          }
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
          *puVar1 = *puVar1 | 8U - iVar3;
        }
        *param_1 = puVar6;
        return 1;
      }
    }
  }
LAB_144efacc0:
  FUN_144eff330(puVar6,&DAT_149c03490);
  return 0;
}



// FUNCTION 144efacf0 FUN_144efacf0 body=286 status=ok
// SIG undefined FUN_144efacf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144efacf0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res11 = (undefined1)param_2;
  local_res10 = (undefined1)((ulonglong)param_2 >> 8);
  if (param_3 == (undefined1 *)0x0) {
    uVar5 = 2;
  }
  else {
    local_res12 = *param_3;
    uVar5 = 3;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0();
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)FUN_144babc00(param_1,iVar4);
      if ((*(uint *)*plVar2 == uVar5) &&
         (iVar1 = memcmp(*(void **)((uint *)*plVar2 + 2),&local_res10,(ulonglong)uVar5), iVar1 == 0)
         ) {
        return plVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (iVar4 < iVar1);
  }
  plVar2 = (longlong *)FUN_144efec20(&DAT_149c03570);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[1] == 0) {
      lVar3 = FUN_144efec20(&DAT_149c03500);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_144efade8;
    }
    if (*plVar2 == 0) {
      lVar3 = FUN_144efe930();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_144efade8;
    }
    iVar1 = FUN_144ef2c50(*plVar2,&local_res10,uVar5);
    if ((iVar1 != 0) && (iVar1 = FUN_144bac1c0(param_1,plVar2), iVar1 != 0)) {
      return plVar2;
    }
  }
LAB_144efade8:
  FUN_144eff330(plVar2,&DAT_149c03570);
  return (longlong *)0x0;
}



// FUNCTION 144efae10 FUN_144efae10 body=196 status=ok
// SIG undefined FUN_144efae10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efae10(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  
  lVar2 = FUN_144efacf0();
  if (((lVar2 == 0) || (piVar1 = *(int **)(lVar2 + 8), piVar1 == (int *)0x0)) ||
     ((*piVar1 == 0 && (*(longlong *)(piVar1 + 2) != 0)))) {
    return 0;
  }
  if ((*piVar1 == 1) && (*(longlong *)(piVar1 + 2) != 0)) {
    return *(longlong *)(piVar1 + 2);
  }
  lVar3 = FUN_144babca0();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    pcVar4 = FUN_144efa750;
  }
  else {
    if (param_2 != 2) goto LAB_144efaea2;
    pcVar4 = FUN_144efa770;
  }
  FUN_144bac280(lVar3,pcVar4);
LAB_144efaea2:
  **(undefined4 **)(lVar2 + 8) = 1;
  *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
  return lVar3;
}



// FUNCTION 144efaee0 FUN_144efaee0 body=79 status=ok
// SIG undefined FUN_144efaee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144efaee0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar3 = *(int **)*param_1;
  iVar1 = *piVar3;
  piVar4 = *(int **)*param_2;
  iVar2 = *piVar4;
  piVar6 = piVar4;
  if (iVar1 <= iVar2) {
    piVar6 = piVar3;
  }
  iVar5 = memcmp(*(void **)(piVar3 + 2),*(void **)(piVar4 + 2),(longlong)*piVar6);
  if (iVar5 == 0) {
    iVar5 = iVar1 - iVar2;
  }
  return iVar5;
}



// FUNCTION 144efaf30 FUN_144efaf30 body=792 status=ok
// SIG undefined FUN_144efaf30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efaf30(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  char local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar9 = 0;
  if (param_2 == 1) {
    uVar8 = 4;
  }
  else if (param_2 == 2) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0;
  }
  FUN_144bac390();
  iVar3 = FUN_144babbf0(param_1);
  if (0 < iVar3 + -1) {
    _Size = (ulonglong)uVar8;
    iVar3 = 1;
    do {
      piVar5 = (int *)FUN_144babc00(param_1,iVar9);
      piVar6 = (int *)FUN_144babc00(param_1,iVar3);
      if (piVar5 == (int *)0x0) goto LAB_144efb21b;
      if (*piVar5 == 0) {
        iVar4 = FUN_144efa130(local_50,*(undefined8 *)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) goto LAB_144efb21b;
        uVar7 = *(undefined8 *)(piVar5 + 2);
      }
      else {
        if (*piVar5 != 1) goto LAB_144efb21b;
        iVar4 = FUN_144efa130(local_50,**(undefined8 **)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) goto LAB_144efb21b;
        uVar7 = *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8);
      }
      iVar4 = FUN_144efa130(local_40,uVar7,uVar8,0xff);
      if ((iVar4 == 0) || (piVar6 == (int *)0x0)) goto LAB_144efb21b;
      if (*piVar6 == 0) {
        iVar4 = FUN_144efa130(local_70,*(undefined8 *)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) goto LAB_144efb21b;
        uVar7 = *(undefined8 *)(piVar6 + 2);
      }
      else {
        if (*piVar6 != 1) goto LAB_144efb21b;
        iVar4 = FUN_144efa130(local_70,**(undefined8 **)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) goto LAB_144efb21b;
        uVar7 = *(undefined8 *)(*(longlong *)(piVar6 + 2) + 8);
      }
      iVar4 = FUN_144efa130(local_60,uVar7,uVar8,0xff);
      if ((((iVar4 == 0) || (iVar4 = memcmp(local_50,local_40,_Size), 0 < iVar4)) ||
          (iVar4 = memcmp(local_70,local_60,_Size), 0 < iVar4)) ||
         (iVar4 = memcmp(local_40,local_70,_Size), uVar2 = _Size, -1 < iVar4)) goto LAB_144efb21b;
      do {
        if ((longlong)(uVar2 - 1) < 0) break;
        cVar1 = local_70[uVar2 - 1];
        local_70[uVar2 - 1] = cVar1 + -1;
        uVar2 = uVar2 - 1;
      } while (cVar1 == '\0');
      iVar4 = memcmp(local_40,local_70,_Size);
      if (iVar4 == 0) {
        iVar4 = FUN_144efaa90(&local_78,local_50,local_60);
        if (iVar4 == 0) goto LAB_144efb21b;
        FUN_144babc20(param_1,iVar9,local_78);
        FUN_144bac0f0(param_1,iVar3);
        FUN_144eff330(piVar5,&DAT_149c03490);
        FUN_144eff330(piVar6,&DAT_149c03490);
        iVar9 = iVar9 + -1;
        iVar3 = iVar3 + -1;
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 1;
      iVar4 = FUN_144babbf0(param_1);
    } while (iVar9 < iVar4 + -1);
  }
  iVar9 = FUN_144babbf0(param_1);
  piVar5 = (int *)FUN_144babc00(param_1,iVar9 + -1);
  if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
    iVar9 = FUN_144efa130(local_60,**(undefined8 **)(piVar5 + 2),uVar8,0);
    if ((iVar9 != 0) &&
       (iVar9 = FUN_144efa130(local_50,*(undefined8 *)(*(longlong *)(piVar5 + 2) + 8),uVar8,0xff),
       iVar9 != 0)) {
      memcmp(local_60,local_50,(ulonglong)uVar8);
    }
  }
LAB_144efb21b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 144efb260 FUN_144efb260 body=516 status=ok
// SIG undefined FUN_144efb260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efb260(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 != 0) && (param_1 != param_2)) && (param_1 != 0)) {
    iVar4 = 0;
    iVar5 = 0;
    iVar1 = FUN_144babbf0(param_2);
    if (0 < iVar1) {
      while (piVar2 = (int *)FUN_144babc00(param_2,iVar5), piVar2 != (int *)0x0) {
        if (*piVar2 == 0) {
          iVar1 = FUN_144efa130(local_58,*(undefined8 *)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) break;
          uVar3 = *(undefined8 *)(piVar2 + 2);
        }
        else {
          if (*piVar2 != 1) break;
          iVar1 = FUN_144efa130(local_58,**(undefined8 **)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) break;
          uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        }
        iVar1 = FUN_144efa130(local_78,uVar3,param_3,0xff);
        if (iVar1 == 0) break;
        while( true ) {
          iVar1 = FUN_144babbf0(param_1);
          if ((iVar1 <= iVar4) ||
             (piVar2 = (int *)FUN_144babc00(param_1,iVar4), piVar2 == (int *)0x0))
          goto LAB_144efb447;
          if (*piVar2 == 0) {
            iVar1 = FUN_144efa130(local_48,*(undefined8 *)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) goto LAB_144efb447;
            uVar3 = *(undefined8 *)(piVar2 + 2);
          }
          else {
            if (*piVar2 != 1) goto LAB_144efb447;
            iVar1 = FUN_144efa130(local_48,**(undefined8 **)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) goto LAB_144efb447;
            uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
          }
          iVar1 = FUN_144efa130(local_68,uVar3,param_3,0xff);
          if (iVar1 == 0) goto LAB_144efb447;
          iVar1 = memcmp(local_68,local_78,(longlong)param_3);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = memcmp(local_48,local_58,(longlong)param_3);
        if (0 < iVar1) break;
        iVar5 = iVar5 + 1;
        iVar1 = FUN_144babbf0(param_2);
        if (iVar1 <= iVar5) break;
      }
    }
  }
LAB_144efb447:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144efb470 FUN_144efb470 body=1131 status=ok
// SIG undefined FUN_144efb470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144efb470(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_res20;
  
  lVar5 = 0;
  iVar9 = 1;
  if ((param_2 == 0) || (iVar3 = FUN_144babbf0(param_2), iVar3 < 1)) {
LAB_144efb8c3:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_144efb8c3;
  if (param_3 == 0) {
    local_res20 = 0;
    lVar6 = FUN_144babc00(param_2,0);
    param_3 = *(longlong *)(lVar6 + 0x110);
    if (param_3 == 0) goto LAB_144efb8a1;
  }
  else {
    local_res20 = -1;
    lVar6 = 0;
  }
  iVar3 = FUN_144ef9bb0(param_3);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = local_res20;
      *(longlong *)(param_1 + 0xb8) = lVar6;
      iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar9 == 0) goto LAB_144efb8a1;
      goto LAB_144efb542;
    }
  }
  else {
LAB_144efb542:
    FUN_144bac280(param_3,FUN_144efaee0);
    lVar5 = FUN_144bac2a0(param_3);
    if (lVar5 != 0) {
      local_res20 = local_res20 + 1;
      iVar3 = FUN_144babbf0(param_2);
      if (local_res20 < iVar3) {
        do {
          lVar6 = FUN_144babc00(param_2,local_res20);
          iVar3 = FUN_144ef9bb0(*(undefined8 *)(lVar6 + 0x110));
          if (iVar3 == 0) {
            if (param_1 == 0) goto LAB_144efb89a;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = local_res20;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar9 == 0) goto LAB_144efb8a1;
          }
          if (*(longlong *)(lVar6 + 0x110) == 0) {
            iVar10 = 0;
            iVar3 = FUN_144babbf0(lVar5);
            if (0 < iVar3) {
LAB_144efb630:
              lVar7 = FUN_144babc00(lVar5,iVar10);
              if (**(int **)(lVar7 + 8) == 0) goto code_r0x000144efb643;
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = local_res20;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x000144efb725:
                if (iVar9 == 0) goto LAB_144efb8a1;
                goto LAB_144efb733;
              }
              goto LAB_144efb89a;
            }
          }
          else {
            FUN_144bac280(*(longlong *)(lVar6 + 0x110),FUN_144efaee0);
            iVar10 = 0;
            iVar3 = FUN_144babbf0(lVar5);
            if (0 < iVar3) {
              do {
                lVar7 = FUN_144babc00(lVar5,iVar10);
                uVar4 = FUN_144bac1a0(*(undefined8 *)(lVar6 + 0x110),lVar7);
                lVar8 = FUN_144babc00(*(undefined8 *)(lVar6 + 0x110),uVar4);
                if (lVar8 == 0) {
                  if (**(int **)(lVar7 + 8) == 1) {
                    if (param_1 == 0) goto LAB_144efb89a;
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = local_res20;
                    *(longlong *)(param_1 + 0xb8) = lVar6;
                    iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                    goto joined_r0x000144efb725;
                  }
                }
                else {
                  piVar1 = *(int **)(lVar8 + 8);
                  if (*piVar1 == 1) {
                    piVar2 = *(int **)(lVar7 + 8);
                    if (*piVar2 != 0) {
                      iVar3 = FUN_144ef9b80(lVar7);
                      if (iVar3 == 1) {
                        uVar11 = 4;
                      }
                      else if (iVar3 == 2) {
                        uVar11 = 0x10;
                      }
                      else {
                        uVar11 = 0;
                      }
                      iVar3 = FUN_144efb260(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2),
                                            uVar11);
                      if (iVar3 == 0) {
                        if (param_1 != 0) {
                          *(int *)(param_1 + 0xac) = local_res20;
                          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                          *(longlong *)(param_1 + 0xb8) = lVar6;
                          iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                          if (iVar9 != 0) goto LAB_144efb881;
                          goto LAB_144efb8a1;
                        }
                        goto LAB_144efb89a;
                      }
                    }
                    FUN_144babc20(lVar5,iVar10);
                  }
                }
LAB_144efb881:
                iVar10 = iVar10 + 1;
                iVar3 = FUN_144babbf0(lVar5);
              } while (iVar10 < iVar3);
            }
          }
LAB_144efb733:
          local_res20 = local_res20 + 1;
          iVar3 = FUN_144babbf0(param_2);
        } while (local_res20 < iVar3);
      }
      if (*(longlong *)(lVar6 + 0x110) != 0) {
        iVar10 = 0;
        iVar3 = FUN_144babbf0();
        if (0 < iVar3) {
          do {
            lVar7 = FUN_144babc00(*(undefined8 *)(lVar6 + 0x110),iVar10);
            if ((**(int **)(lVar7 + 8) == 0) && (iVar3 = FUN_144bac1a0(lVar5,lVar7), -1 < iVar3)) {
              if (param_1 == 0) goto LAB_144efb89a;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = local_res20;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar9 == 0) break;
            }
            iVar10 = iVar10 + 1;
            iVar3 = FUN_144babbf0(*(undefined8 *)(lVar6 + 0x110));
          } while (iVar10 < iVar3);
        }
      }
      goto LAB_144efb8a1;
    }
    FUN_144ba24f0(0x22,0xa6,0x41,"crypto\\x509v3\\v3_addr.c",0x4cd);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
    }
  }
  iVar9 = 0;
LAB_144efb8a1:
  FUN_144babdb0(lVar5);
  return iVar9;
code_r0x000144efb643:
  iVar10 = iVar10 + 1;
  iVar3 = FUN_144babbf0(lVar5);
  if (iVar3 <= iVar10) goto LAB_144efb733;
  goto LAB_144efb630;
LAB_144efb89a:
  iVar9 = 0;
  goto LAB_144efb8a1;
}



// FUNCTION 144efb8e0 FUN_144efb8e0 body=314 status=ok
// SIG undefined FUN_144efb8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144efb8e0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144efb8ec;
  if (param_1 == (byte *)0x0) {
    FUN_144ba24f0(0x10,0x6c,0x6c,"crypto\\ec\\ec_lib.c",0x19,0x144efb8ec);
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_144ba24f0(0x10,0x6c,0x42,"crypto\\ec\\ec_lib.c",0x1d,0x144efb8ec);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_144ea6670(0xa8,"crypto\\ec\\ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x10,0x6c,0x41,"crypto\\ec\\ec_lib.c",0x23,uVar4);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 & 2) == 0) {
    lVar3 = FUN_144ba0570();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_144efb9d8;
    lVar3 = FUN_144ba0570();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_144efb9d8;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 4;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_144efb9d8:
  FUN_144ba0cd0(puVar2[2]);
  FUN_144ba0cd0(puVar2[3]);
  FUN_144ea6530(puVar2,"crypto\\ec\\ec_lib.c",0x39);
  return (undefined8 *)0x0;
}



// FUNCTION 144efba20 FUN_144efba20 body=184 status=ok
// SIG undefined FUN_144efba20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efba20(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
      (**(code **)(*param_1 + 0x10))();
    }
    FUN_144efd350(param_1);
    FUN_144ece7b0(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1);
      }
      FUN_144ea6530(plVar1,"crypto\\ec\\ec_lib.c",0x2af);
    }
    FUN_144ba0cd0(param_1[2]);
    FUN_144ba0cd0(param_1[3]);
    FUN_144ea6530(param_1[6],"crypto\\ec\\ec_lib.c",0x6b);
    FUN_144ea6530(param_1,"crypto\\ec\\ec_lib.c",0x6c);
  }
  return;
}



// FUNCTION 144efbae0 FUN_144efbae0 body=215 status=ok
// SIG undefined FUN_144efbae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efbae0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x18);
    if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*param_1 + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)();
    }
    FUN_144efd350(param_1);
    FUN_144ece7b0(param_1[0x12]);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x60);
      if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(*plVar1 + 0x58), pcVar2 != (code *)0x0)) {
        (*pcVar2)(plVar1);
      }
      FUN_144ea66f0(plVar1,0x30,"crypto\\ec\\ec_lib.c",699);
    }
    FUN_144ba0630(param_1[2]);
    FUN_144ba0630(param_1[3]);
    FUN_144ea66f0(param_1[6],param_1[7],"crypto\\ec\\ec_lib.c",0x7e);
    FUN_144ea66f0(param_1,0xa8,"crypto\\ec\\ec_lib.c");
  }
  return;
}



// FUNCTION 144efbbc0 FUN_144efbbc0 body=676 status=ok
// SIG undefined FUN_144efbbc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efbbc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Dst;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    FUN_144ba24f0(0x10,0x6a,0x42,"crypto\\ec\\ec_lib.c",0x85,0x144efbbd0);
    return 0;
  }
  if (*param_1 != *param_2) {
    FUN_144ba24f0(0x10,0x6a,0x65,"crypto\\ec\\ec_lib.c",0x89,0x144efbbd0);
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  iVar1 = (int)param_2[0x13];
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else if (iVar1 == 4) {
    lVar2 = FUN_1452ad670(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  else if (iVar1 == 5) {
    lVar2 = FUN_1452ae600(param_2[0x14]);
    param_1[0x14] = lVar2;
  }
  if (param_2[0x12] == 0) {
    FUN_144ece7b0(param_1[0x12]);
    param_1[0x12] = 0;
  }
  else {
    if (param_1[0x12] == 0) {
      lVar2 = FUN_144ece690();
      param_1[0x12] = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar2 = FUN_144eceaa0(param_1[0x12],param_2[0x12]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (param_2[1] == 0) {
    FUN_144efc7e0(param_1[1]);
    param_1[1] = 0;
  }
  else {
    if (param_1[1] == 0) {
      lVar2 = FUN_144efc690(param_1);
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_144efc830(param_1[1],param_2[1]);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if ((*(byte *)*param_2 & 2) == 0) {
    lVar2 = FUN_144ba06b0(param_1[2],param_2[2]);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_144ba06b0(param_1[3],param_2[3]);
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 5) = (int)param_2[5];
  if (param_2[6] == 0) {
    FUN_144ea6530(param_1[6],"crypto\\ec\\ec_lib.c",0xe2);
    param_1[6] = 0;
    param_1[7] = 0;
LAB_144efbe48:
                    /* WARNING: Could not recover jumptable at 0x000144efbe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return uVar3;
  }
  FUN_144ea6530(param_1[6],"crypto\\ec\\ec_lib.c",0xd9);
  _Dst = (void *)FUN_144ea64e0(param_2[7],"crypto\\ec\\ec_lib.c",0xda);
  param_1[6] = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
    FUN_144ba24f0(0x10,0x6a,0x41,"crypto\\ec\\ec_lib.c",0xdb);
  }
  else {
    memcpy(_Dst,(void *)param_2[6],param_2[7]);
    if (_Dst != (void *)0x0) {
      param_1[7] = param_2[7];
      goto LAB_144efbe48;
    }
  }
  return 0;
}



// FUNCTION 144efbe70 FUN_144efbe70 body=102 status=ok
// SIG undefined FUN_144efbe70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efbe70(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = FUN_144efb8e0(*param_1);
  if (lVar2 != 0) {
    iVar1 = FUN_144efbbc0(lVar2,param_1);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_144efba20(lVar2);
  }
  return 0;
}



// FUNCTION 144efbee0 FUN_144efbee0 body=4 status=ok
// SIG undefined FUN_144efbee0(void)

undefined8 FUN_144efbee0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144efbef0 FUN_144efbef0 body=4 status=ok
// SIG undefined FUN_144efbef0(void)

undefined4 FUN_144efbef0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144efbf00 FUN_144efbf00 body=481 status=ok
// SIG undefined FUN_144efbf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efbf00(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144efbf1b;
  if (param_2 == 0) {
    uVar5 = 0x14e;
    uVar4 = 0x43;
  }
  else if (((*(longlong *)(param_1 + 0x40) == 0) || (iVar1 = FUN_144ba0340(), iVar1 != 0)) ||
          (iVar1 = FUN_144ba0ba0(*(undefined8 *)(param_1 + 0x40)), iVar1 != 0)) {
    uVar5 = 0x155;
    uVar4 = 0x67;
  }
  else {
    if (((param_3 != 0) && (iVar1 = FUN_144ba0340(param_3), iVar1 == 0)) &&
       (iVar1 = FUN_144ba0ba0(param_3), iVar1 == 0)) {
      iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
      iVar2 = FUN_144ba03d0(param_3);
      if (iVar2 <= iVar1 + 1) {
        if ((param_4 == 0) || (iVar1 = FUN_144ba0ba0(param_4), iVar1 == 0)) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar3 = FUN_144efc690(param_1);
            *(longlong *)(param_1 + 8) = lVar3;
            if (lVar3 == 0) {
              return 0;
            }
          }
          iVar1 = FUN_144efc830(*(undefined8 *)(param_1 + 8),param_2);
          if (iVar1 == 0) {
            return 0;
          }
          lVar3 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x10),param_3);
          if (lVar3 == 0) {
            return 0;
          }
          if ((param_4 == 0) || (iVar1 = FUN_144ba0340(param_4), iVar1 != 0)) {
            iVar1 = FUN_144efd4b0(param_1);
            if (iVar1 == 0) {
              FUN_144ba0bb0(*(undefined8 *)(param_1 + 0x18),0);
              return 0;
            }
          }
          else {
            lVar3 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x18),param_4);
            if (lVar3 == 0) {
              return 0;
            }
          }
          iVar1 = FUN_144ba03a0(*(undefined8 *)(param_1 + 0x10));
          if (iVar1 == 0) {
            FUN_144ece7b0(*(undefined8 *)(param_1 + 0x90));
            *(undefined8 *)(param_1 + 0x90) = 0;
            return 1;
          }
          uVar6 = FUN_144efd410(param_1);
          return uVar6;
        }
        uVar5 = 0x16a;
        uVar4 = 0xa4;
        goto LAB_144efc0b5;
      }
    }
    uVar5 = 0x160;
    uVar4 = 0x7a;
  }
LAB_144efc0b5:
  FUN_144ba24f0(0x10,0x6f,uVar4,"crypto\\ec\\ec_lib.c",uVar5,uVar6);
  return 0;
}



// FUNCTION 144efc0f0 FUN_144efc0f0 body=5 status=ok
// SIG undefined FUN_144efc0f0(void)

undefined8 FUN_144efc0f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144efc100 FUN_144efc100 body=71 status=ok
// SIG undefined FUN_144efc100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144efc100(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_144ba06b0(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_144ba0340(param_2);
      return iVar1 == 0;
    }
  }
  return false;
}



// FUNCTION 144efc150 FUN_144efc150 body=5 status=ok
// SIG undefined FUN_144efc150(void)

undefined8 FUN_144efc150(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144efc160 FUN_144efc160 body=24 status=ok
// SIG undefined FUN_144efc160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efc160(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144efc174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 144efc180 FUN_144efc180 body=75 status=ok
// SIG undefined FUN_144efc180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144efc180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = FUN_144ba06b0(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x18));
      return iVar1 == 0;
    }
  }
  return false;
}



// FUNCTION 144efc1d0 FUN_144efc1d0 body=5 status=ok
// SIG undefined FUN_144efc1d0(void)

undefined8 FUN_144efc1d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144efc1e0 FUN_144efc1e0 body=4 status=ok
// SIG undefined FUN_144efc1e0(void)

void FUN_144efc1e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 144efc1f0 FUN_144efc1f0 body=4 status=ok
// SIG undefined FUN_144efc1f0(void)

undefined4 FUN_144efc1f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 144efc200 FUN_144efc200 body=4 status=ok
// SIG undefined FUN_144efc200(void)

void FUN_144efc200(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 144efc210 FUN_144efc210 body=4 status=ok
// SIG undefined FUN_144efc210(void)

undefined4 FUN_144efc210(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// FUNCTION 144efc220 FUN_144efc220 body=4 status=ok
// SIG undefined FUN_144efc220(void)

void FUN_144efc220(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 144efc230 FUN_144efc230 body=4 status=ok
// SIG undefined FUN_144efc230(void)

undefined4 FUN_144efc230(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 144efc240 FUN_144efc240 body=5 status=ok
// SIG undefined FUN_144efc240(void)

undefined8 FUN_144efc240(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144efc250 FUN_144efc250 body=5 status=ok
// SIG undefined FUN_144efc250(void)

undefined8 FUN_144efc250(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 144efc260 FUN_144efc260 body=213 status=ok
// SIG undefined FUN_144efc260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t FUN_144efc260(longlong param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x144efc275;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x30),"crypto\\ec\\ec_lib.c",0x1e1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_3 != 0) && (param_2 != (void *)0x0)) {
    _Dst = (void *)FUN_144ea64e0(param_3,"crypto\\ec\\ec_lib.c",0x1e8);
    *(void **)(param_1 + 0x30) = _Dst;
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0x10,0x11e,0x41,"crypto\\ec\\ec_lib.c",0x1e9,uVar1);
      return 0;
    }
    memcpy(_Dst,param_2,param_3);
    *(size_t *)(param_1 + 0x38) = param_3;
    return param_3;
  }
  return 1;
}



// FUNCTION 144efc340 FUN_144efc340 body=72 status=ok
// SIG undefined FUN_144efc340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc340(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    FUN_144ba24f0(0x10,0x124,0x42,"crypto\\ec\\ec_lib.c",0x200);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efc385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



// FUNCTION 144efc390 FUN_144efc390 body=72 status=ok
// SIG undefined FUN_144efc390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc390(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
    FUN_144ba24f0(0x10,0x123,0x42,"crypto\\ec\\ec_lib.c",0x20a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efc3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}



// FUNCTION 144efc3e0 FUN_144efc3e0 body=72 status=ok
// SIG undefined FUN_144efc3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc3e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
    FUN_144ba24f0(0x10,0xad,0x42,"crypto\\ec\\ec_lib.c",0x22f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efc425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x38))();
  return uVar1;
}



// FUNCTION 144efc430 FUN_144efc430 body=72 status=ok
// SIG undefined FUN_144efc430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc430(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) == (code *)0x0) {
    FUN_144ba24f0(0x10,0xab,0x42,"crypto\\ec\\ec_lib.c",0x239);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efc475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}



// FUNCTION 144efc480 FUN_144efc480 body=517 status=ok
// SIG undefined FUN_144efc480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efc480(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = 0;
  if (*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) {
    return 1;
  }
  if ((((int)param_1[4] != 0) && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])) {
    return 1;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    return 0;
  }
  lVar9 = lVar10;
  if ((param_3 == 0) && (param_3 = FUN_144eedd20(), lVar9 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  FUN_144eede20(param_3);
  uVar3 = FUN_144eede90(param_3);
  uVar4 = FUN_144eede90(param_3);
  uVar5 = FUN_144eede90(param_3);
  uVar6 = FUN_144eede90(param_3);
  uVar7 = FUN_144eede90(param_3);
  lVar8 = FUN_144eede90(param_3);
  if (lVar8 == 0) {
LAB_144efc670:
    FUN_144eedf20(param_3);
    FUN_144eeddc0(lVar9);
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,uVar3,uVar4,uVar5,param_3);
  if (((iVar2 != 0) &&
      (iVar2 = (**(code **)(*param_2 + 0x30))(param_2,uVar6,uVar7,lVar8,param_3), iVar2 != 0)) &&
     ((iVar2 = FUN_144ba0c40(uVar3,uVar6), iVar2 == 0 &&
      (((iVar2 = FUN_144ba0c40(uVar4,uVar7), iVar2 == 0 &&
        (iVar2 = FUN_144ba0c40(uVar5,lVar8), iVar2 == 0)) &&
       (iVar2 = FUN_144efcf30(param_1,param_1[1],param_2[1],param_3), iVar2 == 0)))))) {
    lVar8 = param_1[3];
    lVar1 = param_2[3];
    if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_144efc670;
    iVar2 = FUN_144ba0c40();
    if ((iVar2 == 0) && (iVar2 = FUN_144ba0c40(lVar8,lVar1), iVar2 == 0)) goto LAB_144efc640;
  }
  lVar10 = 1;
LAB_144efc640:
  FUN_144eedf20(param_3);
  FUN_144eeddc0(lVar9);
  return lVar10;
}



// FUNCTION 144efc690 FUN_144efc690 body=260 status=ok
// SIG undefined FUN_144efc690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144efc690(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144efc69c;
  if (param_1 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0x79,0x43,"crypto\\ec\\ec_lib.c",0x28f,0x144efc69c);
    return (longlong *)0x0;
  }
  if (*(longlong *)(*param_1 + 0x50) == 0) {
    FUN_144ba24f0(0x10,0x79,0x42,"crypto\\ec\\ec_lib.c",0x293,0x144efc69c);
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)FUN_144ea6670(0x30,"crypto\\ec\\ec_lib.c",0x297);
  if (plVar3 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0x79,0x41,"crypto\\ec\\ec_lib.c",0x299,uVar4);
    return (longlong *)0x0;
  }
  lVar1 = *param_1;
  *plVar3 = lVar1;
  *(int *)(plVar3 + 1) = (int)param_1[4];
  iVar2 = (**(code **)(lVar1 + 0x50))(plVar3);
  if (iVar2 == 0) {
    FUN_144ea6530(plVar3,"crypto\\ec\\ec_lib.c",0x2a1);
    return (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 144efc7a0 FUN_144efc7a0 body=63 status=ok
// SIG undefined FUN_144efc7a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efc7a0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
      (**(code **)(*param_1 + 0x58))();
    }
    FUN_144ea6530(param_1,"crypto\\ec\\ec_lib.c",0x2af);
  }
  return;
}



// FUNCTION 144efc7e0 FUN_144efc7e0 body=77 status=ok
// SIG undefined FUN_144efc7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efc7e0(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_144ea66f0(param_1,0x30,"crypto\\ec\\ec_lib.c",699);
  }
  return;
}



// FUNCTION 144efc830 FUN_144efc830 body=128 status=ok
// SIG undefined FUN_144efc830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc830(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2c1;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[1] == (int)param_2[1]) || ((int)param_1[1] == 0)) || ((int)param_2[1] == 0)
         ) {
        if (param_1 == param_2) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x000144efc884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar3 = 0x2c8;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0x72,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efc8b0 FUN_144efc8b0 body=114 status=ok
// SIG undefined FUN_144efc8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc8b0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_144ba24f0(0x10,0x7f,0x42,"crypto\\ec\\ec_lib.c",0x2ec);
    return 0;
  }
  if (*param_1 != *param_2) {
    FUN_144ba24f0(0x10,0x7f,0x65,"crypto\\ec\\ec_lib.c",0x2f0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efc91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// FUNCTION 144efc930 FUN_144efc930 body=116 status=ok
// SIG undefined FUN_144efc930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efc930(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x2fd;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000144efc978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x302;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0x7e,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efc9b0 FUN_144efc9b0 body=368 status=ok
// SIG undefined FUN_144efc9b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efc9b0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144efc9c0;
  pcVar1 = *(code **)(*param_1 + 0x88);
  if (pcVar1 == (code *)0x0) {
    FUN_144ba24f0(0x10,0x126,0x42,"crypto\\ec\\ec_lib.c",0x322,0x144efc9c0);
    return 0;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    FUN_144ba24f0(0x10,0x126,0x65,"crypto\\ec\\ec_lib.c",0x326,0x144efc9c0);
    return 0;
  }
  uVar4 = param_5;
  iVar2 = (*pcVar1)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 0xd0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pcVar1 == (code *)0x0) {
    uVar4 = CONCAT44(uVar3,0x3ae);
    uVar3 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
      iVar2 = (*pcVar1)(param_1,param_2,param_5,pcVar1,uVar4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (0 < iVar2) {
        return 1;
      }
      goto LAB_144efcabd;
    }
    uVar4 = CONCAT44(uVar3,0x3b2);
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x77,uVar3,"crypto\\ec\\ec_lib.c",uVar4,uVar5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_144efcabd:
  FUN_144ba24f0(0x10,0x126,0x6b,"crypto\\ec\\ec_lib.c",CONCAT44(uVar3,0x32d),uVar5);
  return 0;
}



// FUNCTION 144efcb20 FUN_144efcb20 body=311 status=ok
// SIG undefined FUN_144efcb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144efcb20(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144efcb3a;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x90) == 0) {
    uVar5 = 0x34b;
    uVar4 = 0x42;
LAB_144efcc2a:
    FUN_144ba24f0(0x10,0x125,uVar4,"crypto\\ec\\ec_lib.c",uVar5,uVar6);
    return 0;
  }
  if ((lVar1 != *param_2) ||
     (((iVar2 = (int)param_1[4], iVar2 != 0 && ((int)param_2[1] != 0)) && (iVar2 != (int)param_2[1])
      ))) {
    uVar5 = 0x34f;
    uVar4 = 0x65;
    goto LAB_144efcc2a;
  }
  if (*(code **)(lVar1 + 200) == (code *)0x0) {
    uVar6 = 0x399;
    uVar3 = 0x42;
  }
  else {
    if (((iVar2 == 0) || ((int)param_2[1] == 0)) || (iVar2 == (int)param_2[1])) {
      iVar2 = (**(code **)(lVar1 + 200))(param_1,param_2);
      if (iVar2 != 0) {
        uVar5 = 0x353;
        uVar4 = 0x6a;
        goto LAB_144efcc2a;
      }
      goto LAB_144efcbb1;
    }
    uVar6 = 0x39d;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x76,uVar3,"crypto\\ec\\ec_lib.c",uVar6,0x144efcb3a);
LAB_144efcbb1:
  uVar6 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
  return uVar6;
}



// FUNCTION 144efcc60 FUN_144efcc60 body=168 status=ok
// SIG undefined FUN_144efcc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efcc60(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb0) == (code *)0x0) {
    uVar4 = 0x36f;
    uVar3 = 0x42;
  }
  else {
    if ((((lVar2 == *param_2) &&
         ((((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
           (iVar1 == (int)param_2[1])) && (lVar2 == *param_3)))) &&
        ((((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])) &&
         (lVar2 == *param_4)))) &&
       (((iVar1 == 0 || ((int)param_4[1] == 0)) || (iVar1 == (int)param_4[1])))) {
                    /* WARNING: Could not recover jumptable at 0x000144efccdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb0))(param_1);
      return uVar3;
    }
    uVar4 = 0x374;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x70,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x144efcc6c);
  return 0;
}



// FUNCTION 144efcd10 FUN_144efcd10 body=147 status=ok
// SIG undefined FUN_144efcd10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efcd10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xb8) == (code *)0x0) {
    uVar4 = 0x37e;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x000144efcd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xb8))(param_1);
      return uVar3;
    }
    uVar4 = 0x382;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x73,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x144efcd1c);
  return 0;
}



// FUNCTION 144efcdb0 FUN_144efcdb0 body=121 status=ok
// SIG undefined FUN_144efcdb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efcdb0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x38b;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000144efcdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x38f;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0xd2,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efce30 FUN_144efce30 body=116 status=ok
// SIG undefined FUN_144efce30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efce30(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x399;
    uVar2 = 0x42;
  }
  else {
    if (*param_1 == *param_2) {
      if ((int)param_1[4] == 0) {
LAB_144efce74:
                    /* WARNING: Could not recover jumptable at 0x000144efce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
      if (((int)param_2[1] == 0) || ((int)param_1[4] == (int)param_2[1])) goto LAB_144efce74;
    }
    uVar3 = 0x39d;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0x76,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efceb0 FUN_144efceb0 body=119 status=ok
// SIG undefined FUN_144efceb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efceb0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3ae;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000144efcefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3b2;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0x77,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efcf30 FUN_144efcf30 body=148 status=ok
// SIG undefined FUN_144efcf30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efcf30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xd8) == (code *)0x0) {
    uVar4 = 0x3bc;
    uVar3 = 0x42;
  }
  else {
    if (((lVar2 == *param_2) &&
        (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) ||
         (iVar1 == (int)param_2[1])))) &&
       ((lVar2 == *param_3 &&
        (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x000144efcf96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0xd8))(param_1);
      return uVar3;
    }
    uVar4 = 0x3c0;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x71,uVar3,"crypto\\ec\\ec_lib.c",uVar4,0x144efcf3c);
  return 0xffffffff;
}



// FUNCTION 144efcfd0 FUN_144efcfd0 body=119 status=ok
// SIG undefined FUN_144efcfd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efcfd0(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar3 = 0x3c9;
    uVar2 = 0x42;
  }
  else {
    if ((*param_1 == *param_2) &&
       ((((int)param_1[4] == 0 || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1]))))
    {
                    /* WARNING: Could not recover jumptable at 0x000144efd01b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar3 = 0x3cd;
    uVar2 = 0x65;
  }
  FUN_144ba24f0(0x10,0x78,uVar2,"crypto\\ec\\ec_lib.c",uVar3);
  return 0;
}



// FUNCTION 144efd050 FUN_144efd050 body=222 status=ok
// SIG undefined FUN_144efd050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd050(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_144ba24f0(0x10,0x88,0x42,"crypto\\ec\\ec_lib.c",0x3d9,0x144efd065);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(longlong **)(param_3 + uVar3 * 8);
      if ((*param_1 != *plVar2) ||
         ((((int)param_1[4] != 0 && (iVar1 = (int)plVar2[1], iVar1 != 0)) &&
          ((int)param_1[4] != iVar1)))) {
        FUN_144ba24f0(0x10,0x88,0x65,"crypto\\ec\\ec_lib.c",0x3de,0x144efd065);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000144efd0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar4;
}



// FUNCTION 144efd130 FUN_144efd130 body=400 status=ok
// SIG undefined FUN_144efd130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144efd130(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                       longlong param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144efd149;
  if ((*param_1 == *param_2) &&
     (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])
      ))) {
    if ((param_3 == 0) && (param_4 == 0)) {
      uVar5 = FUN_144efc8b0();
    }
    else {
      uVar5 = 0;
      if (param_4 != 0) {
        do {
          plVar3 = *(longlong **)(param_5 + uVar5 * 8);
          if ((*param_1 != *plVar3) ||
             (((iVar1 != 0 && (iVar2 = (int)plVar3[1], iVar2 != 0)) && (iVar1 != iVar2)))) {
            uVar8 = 0x3fd;
            uVar7 = 0x65;
            goto LAB_144efd1ff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4);
      }
      uVar6 = 0;
      if ((param_7 == 0) && (param_7 = FUN_144eedd90(), uVar6 = param_7, param_7 == 0)) {
        uVar8 = 0x403;
        uVar7 = 0x44;
LAB_144efd1ff:
        FUN_144ba24f0(0x10,0x122,uVar7,"crypto\\ec\\ec_lib.c",uVar8);
        uVar5 = 0;
      }
      else if (*(code **)(*param_1 + 0xf0) == (code *)0x0) {
        uVar4 = FUN_1452ae6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar8);
        uVar5 = (ulonglong)uVar4;
        FUN_144eeddc0(uVar6);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0xf0))();
        uVar5 = (ulonglong)uVar4;
        FUN_144eeddc0(uVar6);
      }
    }
  }
  else {
    FUN_144ba24f0(0x10,0x122,0x65,"crypto\\ec\\ec_lib.c",0x3f4);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144efd2c0 FUN_144efd2c0 body=89 status=ok
// SIG undefined FUN_144efd2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efd2c0(void)

{
  FUN_144efd130();
  return;
}



// FUNCTION 144efd320 FUN_144efd320 body=44 status=ok
// SIG undefined FUN_144efd320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efd320(longlong *param_1)

{
  if (*(code **)(*param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144efd340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))();
    return;
  }
  FUN_144efd600();
  return;
}



// FUNCTION 144efd350 FUN_144efd350 body=92 status=ok
// SIG undefined FUN_144efd350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efd350(longlong param_1)

{
  if (*(int *)(param_1 + 0x98) == 4) {
    FUN_1452ad690(*(undefined8 *)(param_1 + 0xa0));
  }
  else if (*(int *)(param_1 + 0x98) == 5) {
    FUN_1452ae620(*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 144efd3b0 FUN_144efd3b0 body=38 status=ok
// SIG undefined FUN_144efd3b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd3b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = FUN_144ba03d0();
  return uVar1;
}



// FUNCTION 144efd3e0 FUN_144efd3e0 body=44 status=ok
// SIG undefined FUN_144efd3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd3e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144efd409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 400))();
  return uVar1;
}



// FUNCTION 144efd410 FUN_144efd410 body=149 status=ok
// SIG undefined FUN_144efd410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_144eedd20();
  uVar4 = 0;
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144ece690();
    *(longlong *)(param_1 + 0x90) = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_144ece810(lVar3,*(undefined8 *)(param_1 + 0x10),lVar2);
      if (iVar1 == 0) {
        FUN_144ece7b0(*(undefined8 *)(param_1 + 0x90));
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  FUN_144eeddc0(lVar2);
  return uVar4;
}



// FUNCTION 144efd4b0 FUN_144efd4b0 body=336 status=ok
// SIG undefined FUN_144efd4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144efd4b0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  uVar7 = 0;
  iVar1 = FUN_144ba03d0(param_1[8]);
  iVar2 = FUN_144ba03d0(param_1[2]);
  if (iVar2 <= (iVar1 + 1) / 2 + 3) {
    FUN_144ba0bb0(param_1[3],0);
    return 1;
  }
  lVar3 = FUN_144eedd20();
  uVar8 = 0;
  if (lVar3 != 0) {
    FUN_144eede20(lVar3);
    lVar4 = FUN_144eede90(lVar3);
    uVar8 = 0;
    if (lVar4 != 0) {
      if (*(int *)(*param_1 + 4) == 0x197) {
        FUN_144ba0bb0(lVar4,0);
        iVar1 = FUN_144ba03d0(param_1[8]);
        iVar1 = FUN_144ba0f40(lVar4,iVar1 + -1);
        bVar9 = iVar1 == 0;
      }
      else {
        lVar5 = FUN_144ba06b0(lVar4,param_1[8]);
        bVar9 = lVar5 == 0;
      }
      uVar8 = uVar7;
      if (!bVar9) {
        iVar1 = FUN_144eeff20(param_1[3],param_1[2]);
        if (iVar1 != 0) {
          iVar1 = FUN_144eee4f0(param_1[3],param_1[3],lVar4);
          if (iVar1 != 0) {
            lVar4 = param_1[3];
            uVar6 = FUN_144ba03c0();
            iVar1 = FUN_144eee4f0(lVar4,lVar4,uVar6);
            if (iVar1 != 0) {
              iVar1 = FUN_144eef830(param_1[3],0,param_1[3],param_1[2],lVar3);
              uVar8 = 0;
              if (iVar1 != 0) {
                uVar8 = 1;
              }
            }
          }
        }
      }
    }
    FUN_144eedf20(lVar3);
    FUN_144eeddc0(lVar3);
  }
  return uVar8;
}



// FUNCTION 144efd600 FUN_144efd600 body=246 status=ok
// SIG undefined FUN_144efd600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efd600(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
LAB_144efd63b:
    lVar3 = 0;
  }
  else {
    lVar4 = 0;
    if (param_4 == 0) {
      param_4 = FUN_144eedd90();
      lVar4 = param_4;
      if (param_4 == 0) goto LAB_144efd63b;
    }
    FUN_144eede20(param_4);
    lVar2 = FUN_144eede90(param_4);
    lVar3 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_144ba0bb0(lVar2,2);
      lVar3 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_144eee270(lVar2,*(undefined8 *)(param_1 + 0x10),lVar2);
        if (iVar1 != 0) {
          iVar1 = FUN_1452a5f00(param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x10),param_4,
                                *(undefined8 *)(param_1 + 0x90));
          lVar3 = 0;
          if (iVar1 != 0) {
            lVar3 = 1;
          }
        }
      }
    }
    FUN_144eedf20(param_4);
    FUN_144eeddc0(lVar4);
  }
  return lVar3;
}



// FUNCTION 144efd700 FUN_144efd700 body=121 status=ok
// SIG undefined FUN_144efd700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd700(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x144efd71a;
  uVar3 = 0;
  local_18 = 0;
  iVar2 = FUN_144efd810(param_3,&local_18);
  lVar1 = local_18;
  if (-1 < iVar2) {
    local_10 = *(undefined8 *)(local_18 + 8);
    uVar3 = (*param_2)(param_4,&local_10,iVar2);
  }
  FUN_144ea7070(lVar1);
  return uVar3;
}



// FUNCTION 144efd780 FUN_144efd780 body=130 status=ok
// SIG undefined FUN_144efd780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efd780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144efd79a;
  uVar3 = 0;
  local_res20 = 0;
  iVar2 = FUN_144efd810(param_2,&local_res20);
  lVar1 = local_res20;
  if (-1 < iVar2) {
    local_18 = *(undefined8 *)(local_res20 + 8);
    uVar3 = FUN_144eff7f0(param_3,&local_18,iVar2,param_1);
  }
  FUN_144ea7070(lVar1);
  return uVar3;
}



// FUNCTION 144efd810 FUN_144efd810 body=798 status=ok
// SIG undefined FUN_144efd810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144efd810(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 uVar13;
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar10 = 0;
  lVar4 = FUN_144ea6fc0();
  if (lVar4 == 0) {
    FUN_144ba24f0(0xd,0x6b,0x41,"crypto\\asn1\\a_d2i_fp.c",0x6e);
    return 0xffffffff;
  }
  FUN_144ba26f0();
  uVar12 = 0;
  uVar11 = 0;
  do {
    while( true ) {
      uVar6 = uVar12;
      if (uVar12 - uVar11 < 9) {
        uVar7 = (uVar11 - uVar12) + 8;
        if ((uVar12 + uVar7 < uVar12) || (lVar5 = FUN_144ea7230(lVar4), lVar5 == 0)) {
          uVar13 = 0x78;
          uVar9 = 0x41;
          goto LAB_144efdaf0;
        }
        iVar2 = FUN_144b9e930(param_1,*(longlong *)(lVar4 + 8) + uVar12,uVar7 & 0xffffffff);
        if ((iVar2 < 0) && (uVar12 == uVar11)) {
          uVar13 = 0x7d;
          uVar9 = 0x8e;
          goto LAB_144efdaf0;
        }
        if ((0 < iVar2) && (uVar6 = (longlong)iVar2 + uVar12, uVar6 < uVar12)) {
          uVar13 = 0x82;
          goto LAB_144efdaea;
        }
      }
      lVar5 = *(longlong *)(lVar4 + 8) + uVar11;
      local_40 = lVar5;
      bVar1 = FUN_144f03ea0(&local_40,local_res18,local_res20,local_48,(int)uVar6 - (int)uVar11);
      if ((char)bVar1 < '\0') {
        uVar3 = FUN_144ba2690();
        if ((uVar3 & 0xfff) != 0x9b) goto LAB_144efdb04;
        FUN_144ba26f0();
      }
      uVar12 = uVar11 + (longlong)((int)local_40 - (int)lVar5);
      uVar11 = uVar12;
      if ((bVar1 & 1) == 0) break;
      if (iVar10 == -1) {
        uVar13 = 0x9c;
        uVar9 = 0x7b;
        goto LAB_144efdaf0;
      }
      iVar10 = iVar10 + 1;
      uVar12 = uVar6;
    }
    if (((iVar10 == 0) || (local_res18[0] != 0)) || (local_res20[0] != 0)) {
      if (uVar6 - uVar12 < (ulonglong)(longlong)local_res18[0]) {
        uVar11 = 0x4000;
        uVar7 = (longlong)local_res18[0] + (uVar12 - uVar6);
        if ((0x7fffffff < uVar7) || (uVar6 + uVar7 < uVar6)) {
          uVar13 = 0xb1;
          goto LAB_144efdaea;
        }
        while (uVar7 != 0) {
          uVar8 = uVar7;
          if (uVar11 < uVar7) {
            uVar8 = uVar11;
          }
          lVar5 = FUN_144ea7230(lVar4,uVar8 + uVar6);
          if (lVar5 == 0) {
            uVar13 = 0xbe;
            uVar9 = 0x41;
            goto LAB_144efdaf0;
          }
          uVar7 = uVar7 - uVar8;
          for (; uVar8 != 0; uVar8 = uVar8 - (longlong)iVar2) {
            iVar2 = FUN_144b9e930(param_1,*(longlong *)(lVar4 + 8) + uVar6,uVar8 & 0xffffffff);
            if (iVar2 < 1) {
              uVar13 = 0xc6;
              uVar9 = 0x8e;
              goto LAB_144efdaf0;
            }
            uVar6 = uVar6 + (longlong)iVar2;
          }
          if (uVar11 < 0x3fffffff) {
            uVar11 = uVar11 * 2;
          }
        }
      }
      uVar11 = (longlong)local_res18[0] + uVar12;
      if (uVar11 < uVar12) {
        uVar13 = 0xd5;
        goto LAB_144efdaea;
      }
    }
    else {
      iVar10 = iVar10 + -1;
    }
    uVar12 = uVar6;
  } while (iVar10 != 0);
  if (uVar11 < 0x80000000) {
    *param_2 = lVar4;
    uVar11 = uVar11 & 0xffffffff;
  }
  else {
    uVar13 = 0xe1;
LAB_144efdaea:
    uVar9 = 0x9b;
LAB_144efdaf0:
    FUN_144ba24f0(0xd,0x6b,uVar9,"crypto\\asn1\\a_d2i_fp.c",uVar13);
LAB_144efdb04:
    FUN_144ea7070(lVar4);
    uVar11 = 0xffffffff;
  }
  return uVar11;
}



// FUNCTION 144efdb30 FUN_144efdb30 body=396 status=ok
// SIG undefined FUN_144efdb30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efdb30(undefined4 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144efdb49;
  local_res10 = *param_3;
  if ((param_2 == (longlong *)0x0) || (lVar4 = *param_2, lVar4 == 0)) {
    lVar4 = FUN_144ba6d80();
    if (lVar4 == 0) {
      FUN_144ba24f0(0xd,0x9a,6,"crypto\\asn1\\d2i_pr.c",0x1d);
      return 0;
    }
  }
  else {
    FUN_144ec6930(*(undefined8 *)(lVar4 + 0x18));
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  iVar2 = FUN_144ba6870(lVar4,param_1);
  if (iVar2 == 0) {
    uVar8 = 0x29;
    uVar7 = 0xa3;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xb8);
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(lVar4,&local_res10,param_4), lVar6 = lVar4, iVar2 != 0)) {
LAB_144efdc59:
      *param_3 = local_res10;
      if (param_2 == (longlong *)0x0) {
        return lVar6;
      }
      *param_2 = lVar6;
      return lVar6;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40) != 0) {
      lVar5 = FUN_144efe460(0,&local_res10,param_4);
      if (lVar5 != 0) {
        lVar6 = FUN_144efe5a0(lVar5);
        FUN_144efe440(lVar5);
        if (lVar6 != 0) {
          FUN_144ba6e60(lVar4);
          iVar2 = FUN_144ba6760(lVar6);
          iVar3 = FUN_144ba6700(param_1);
          lVar4 = lVar6;
          if (iVar3 == iVar2) goto LAB_144efdc59;
        }
      }
      goto LAB_144efdc8f;
    }
    uVar8 = 0x3e;
    uVar7 = 0xd;
  }
  FUN_144ba24f0(0xd,0x9a,uVar7,"crypto\\asn1\\d2i_pr.c",uVar8,uVar9);
LAB_144efdc8f:
  if ((param_2 == (longlong *)0x0) || (*param_2 != lVar4)) {
    FUN_144ba6e60(lVar4);
  }
  return 0;
}



// FUNCTION 144efdcc0 FUN_144efdcc0 body=342 status=ok
// SIG undefined FUN_144efdcc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144efdcc0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  FUN_144ba3130();
  local_res10[0] = *param_2;
  lVar2 = FUN_144efe460(0,local_res10,param_3);
  if (lVar2 == 0) {
    local_res20 = *param_2;
    uVar4 = FUN_144efe710(0,&local_res20,param_3);
    local_res20 = *param_2;
    iVar1 = FUN_144babbf0(uVar4);
    if (iVar1 == 6) {
      uVar5 = 0x74;
    }
    else {
      iVar1 = FUN_144babbf0(uVar4);
      uVar5 = 6;
      if (iVar1 == 4) {
        uVar5 = 0x198;
      }
    }
    FUN_144babe00(uVar4,FUN_144efe790);
    lVar3 = FUN_144efdb30(uVar5,param_1,param_2,param_3);
    if (lVar3 == 0) {
      FUN_144ba3290();
    }
    else {
      FUN_144ba3170();
    }
  }
  else {
    lVar3 = FUN_144efe5a0(lVar2);
    FUN_144efe440(lVar2);
    if (lVar3 == 0) {
      FUN_144ba3290();
      FUN_144ba24f0(0xd,0xcf,0xa7,"crypto\\asn1\\d2i_pr.c",0x7b);
      return 0;
    }
    *param_2 = local_res10[0];
    FUN_144ba3290();
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 144efde20 FUN_144efde20 body=8 status=ok
// SIG undefined FUN_144efde20(void)

undefined * FUN_144efde20(void)

{
  return &DAT_149c03870;
}



// FUNCTION 144efde30 FUN_144efde30 body=153 status=ok
// SIG undefined FUN_144efde30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144efde30(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_144efde5e:
    uVar1 = 0;
  }
  else {
    if (param_3 != -1) {
      if (param_1[1] == 0) {
        uVar1 = FUN_144efe770();
        param_1[1] = uVar1;
      }
      if (param_1[1] == 0) goto LAB_144efde5e;
    }
    FUN_144ed0860(*param_1);
    *param_1 = param_2;
    if (param_3 != 0) {
      if (param_3 == -1) {
        FUN_144efe790();
        param_1[1] = 0;
      }
      else {
        FUN_144ed0590(param_1[1],param_3,param_4);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144efded0 FUN_144efded0 body=53 status=ok
// SIG undefined FUN_144efded0(void)

void FUN_144efded0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((undefined4 *)param_4[1] == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
      return;
    }
    *param_2 = *(undefined4 *)param_4[1];
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_4[1] + 8);
    }
  }
  return;
}



// FUNCTION 144efdf10 FUN_144efdf10 body=81 status=ok
// SIG undefined FUN_144efdf10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efdf10(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(byte *)(param_2 + 0xc) & 8) == 0) {
    uVar3 = 5;
  }
  uVar1 = FUN_144ba3cb0(param_2);
  uVar2 = FUN_144ea8d60(uVar1);
  FUN_144efde30(param_1,uVar2,uVar3,0);
  return;
}



// FUNCTION 144efdf70 FUN_144efdf70 body=86 status=ok
// SIG undefined FUN_144efdf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efdf70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14526beb0(*param_1,*param_2);
  if (iVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      return;
    }
    FUN_144ed0680(param_1[1],param_2[1]);
  }
  return;
}



// FUNCTION 144efdfd0 FUN_144efdfd0 body=29 status=ok
// SIG undefined FUN_144efdfd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144efdfd0(void)

{
  FUN_144efec20(&DAT_149c03870);
  return;
}


