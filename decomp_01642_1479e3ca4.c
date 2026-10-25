// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479e3ca4 FUN_1479e3ca4 body=74 status=ok
// SIG undefined FUN_1479e3ca4(void)

void FUN_1479e3ca4(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x2fc) & 1) != param_2) {
      *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x2fc) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3cee FUN_1479e3cee body=156 status=ok
// SIG undefined FUN_1479e3cee(void)

void FUN_1479e3cee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406f9478(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3dee FUN_1479e3dee body=75 status=ok
// SIG undefined FUN_1479e3dee(void)

void FUN_1479e3dee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140982318(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3e3a FUN_1479e3e3a body=74 status=ok
// SIG undefined FUN_1479e3e3a(void)

void FUN_1479e3e3a(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2d4) & 2) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = (*(uint *)(param_1 + 0x2d4) & 0xfffffffd) + (uint)param_2 * 2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3e84 FUN_1479e3e84 body=76 status=ok
// SIG undefined FUN_1479e3e84(void)

void FUN_1479e3e84(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2d4) & 0x40) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffffffbf | (uint)param_2 << 6;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3ed0 FUN_1479e3ed0 body=78 status=ok
// SIG undefined FUN_1479e3ed0(void)

void FUN_1479e3ed0(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (-1 < (char)*(uint *)(param_1 + 0x2d4) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffffff7f | (uint)param_2 << 7;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3f1e FUN_1479e3f1e body=74 status=ok
// SIG undefined FUN_1479e3f1e(void)

void FUN_1479e3f1e(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x2dc) & 1) != param_2) {
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x2dc) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3f68 FUN_1479e3f68 body=74 status=ok
// SIG undefined FUN_1479e3f68(void)

void FUN_1479e3f68(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2dc) & 2) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2dc) = (*(uint *)(param_1 + 0x2dc) & 0xfffffffd) + (uint)param_2 * 2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3fb2 FUN_1479e3fb2 body=72 status=ok
// SIG undefined FUN_1479e3fb2(void)

void FUN_1479e3fb2(longlong param_1,char param_2)

{
  undefined1 uVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0x2d8) != '\0') {
        uVar1 = 0;
        goto LAB_1479e3feb;
      }
    }
    else if (*(char *)(param_1 + 0x2d8) == '\0') {
      uVar1 = 1;
LAB_1479e3feb:
      *(undefined1 *)(param_1 + 0x2d8) = uVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3ffa FUN_1479e3ffa body=59 status=ok
// SIG undefined FUN_1479e3ffa(void)

void FUN_1479e3ffa(longlong param_1,uint param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(byte *)(param_1 + 0x2d8) != param_2)) {
    *(char *)(param_1 + 0x2d8) = (char)param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479e4036 FUN_1479e4036 body=56 status=ok
// SIG undefined FUN_1479e4036(void)

void FUN_1479e4036(longlong param_1,int param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x2ec) != param_2)) {
    *(int *)(param_1 + 0x2ec) = param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479e406e FUN_1479e406e body=74 status=ok
// SIG undefined FUN_1479e406e(void)

void FUN_1479e406e(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2d4) & 8) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = (*(uint *)(param_1 + 0x2d4) & 0xfffffff7) + (uint)param_2 * 8;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e40b8 FUN_1479e40b8 body=56 status=ok
// SIG undefined FUN_1479e40b8(void)

void FUN_1479e40b8(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479e40e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))(param_1);
  return;
}



// FUNCTION 1479e4136 FUN_1479e4136 body=12 status=ok
// SIG undefined FUN_1479e4136(void)

void FUN_1479e4136(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x340) = 0;
  return;
}



// FUNCTION 1479e4146 FUN_1479e4146 body=93 status=ok
// SIG undefined FUN_1479e4146(void)

undefined8 * FUN_1479e4146(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_1479f8084(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e41a4 FUN_1479e41a4 body=134 status=ok
// SIG undefined FUN_1479e41a4(void)

void FUN_1479e41a4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    (**(code **)(*param_1 + 0x340))(param_1);
    local_28 = param_1;
    FUN_1405edac7(param_1,0);
  }
  FUN_140414380(param_1 + 0x74,0);
  FUN_1405ed516(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4242 FUN_1479e4242 body=68 status=ok
// SIG undefined FUN_1479e4242(void)

void FUN_1479e4242(longlong param_1,int param_2,longlong param_3)

{
  if (param_2 != 0) {
    return;
  }
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x340) = param_3;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479e428a FUN_1479e428a body=221 status=ok
// SIG undefined FUN_1479e428a(void)

void FUN_1479e428a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x628);
  *(uint *)(param_1 + 0x628) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x62c) < iVar3 + 1U) {
    FUN_1479f838a(param_1 + 0x620,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x620);
  lVar9 = (longlong)iVar3 * 0x50;
  *(undefined8 *)(lVar4 + 0x10 + lVar9) = param_2[2];
  uVar8 = param_2[1];
  *(undefined8 *)(lVar4 + lVar9) = *param_2;
  ((undefined8 *)(lVar4 + lVar9))[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x28 + lVar9) = param_3[2];
  uVar8 = param_3[1];
  puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar9);
  *puVar1 = *param_3;
  puVar1[1] = uVar8;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar9);
  *puVar2 = *param_4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined4 *)(lVar4 + 0x40 + lVar9) = param_6;
  *(undefined4 *)(lVar4 + 0x44 + lVar9) = param_7;
  *(undefined1 *)(lVar4 + 0x48 + lVar9) = param_5;
  *(undefined4 *)(lVar4 + 0x4c + lVar9) = param_8;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479e4368 FUN_1479e4368 body=33 status=ok
// SIG undefined FUN_1479e4368(void)

void FUN_1479e4368(longlong param_1)

{
  FUN_1479e438a(param_1 + 0x620);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479e438a FUN_1479e438a body=104 status=ok
// SIG undefined FUN_1479e438a(void)

void FUN_1479e438a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1479f838a(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x50 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x50)
    ;
    return;
  }
  return;
}



// FUNCTION 1479e43f2 FUN_1479e43f2 body=186 status=ok
// SIG undefined FUN_1479e43f2(void)

void FUN_1479e43f2(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x638);
  *(uint *)(param_1 + 0x638) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x63c) < iVar2 + 1U) {
    FUN_1479f841e(param_1 + 0x630,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x630);
  lVar8 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar3 + 0x10 + lVar8) = param_2[2];
  uVar7 = param_2[1];
  *(undefined8 *)(lVar3 + lVar8) = *param_2;
  ((undefined8 *)(lVar3 + lVar8))[1] = uVar7;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar8);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined4 *)(lVar3 + 0x28 + lVar8) = param_4;
  *(undefined4 *)(lVar3 + 0x2c + lVar8) = param_6;
  *(undefined1 *)(lVar3 + 0x30 + lVar8) = param_5;
  *(undefined4 *)(lVar3 + 0x34 + lVar8) = param_7;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479e44ac FUN_1479e44ac body=362 status=ok
// SIG undefined FUN_1479e44ac(void)

void FUN_1479e44ac(longlong param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  FUN_147a00b08();
  bVar5 = (longlong)*(int *)(param_1 + 0x628) != 0;
  if (bVar5) {
    pdVar1 = *(double **)(param_1 + 0x620);
    pdVar2 = pdVar1 + (longlong)*(int *)(param_1 + 0x628) * 10;
    do {
      *pdVar1 = *param_2 + *pdVar1;
      pdVar1[1] = param_2[1] + pdVar1[1];
      pdVar1[2] = param_2[2] + pdVar1[2];
      pdVar1[3] = *param_2 + pdVar1[3];
      pdVar1[4] = param_2[1] + pdVar1[4];
      pdVar1[5] = param_2[2] + pdVar1[5];
      pdVar1 = pdVar1 + 10;
    } while (pdVar1 != pdVar2);
  }
  if ((longlong)*(int *)(param_1 + 0x638) != 0) {
    pdVar1 = *(double **)(param_1 + 0x630);
    pdVar2 = pdVar1 + (longlong)*(int *)(param_1 + 0x638) * 7;
    do {
      *pdVar1 = *param_2 + *pdVar1;
      pdVar1[1] = param_2[1] + pdVar1[1];
      pdVar1[2] = param_2[2] + pdVar1[2];
      pdVar1 = pdVar1 + 7;
    } while (pdVar1 != pdVar2);
    bVar5 = true;
  }
  if ((longlong)*(int *)(param_1 + 0x650) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x648);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x650) * 6;
    do {
      if ((longlong)*(int *)(puVar3 + 1) != 0) {
        pdVar2 = (double *)*puVar3;
        pdVar1 = pdVar2 + (longlong)*(int *)(puVar3 + 1) * 3;
        do {
          *pdVar2 = *param_2 + *pdVar2;
          pdVar2[1] = param_2[1] + pdVar2[1];
          pdVar2[2] = param_2[2] + pdVar2[2];
          pdVar2 = pdVar2 + 3;
        } while (pdVar2 != pdVar1);
        bVar5 = true;
      }
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (bVar5) {
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e4616 FUN_1479e4616 body=155 status=ok
// SIG undefined FUN_1479e4616(void)

void FUN_1479e4616(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479e46b2(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e46b2 FUN_1479e46b2 body=215 status=ok
// SIG undefined FUN_1479e46b2(void)

void FUN_1479e46b2(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 700) != fVar1) || (NAN(*(float *)(param_1 + 700)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x2c0) == fVar2) && (!NAN(*(float *)(param_1 + 0x2c0)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x2c4) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x2c4)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x2c8) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x2c8)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 700) = fVar1;
  *(float *)(param_1 + 0x2c0) = fVar2;
  *(float *)(param_1 + 0x2c4) = fVar3;
  *(float *)(param_1 + 0x2c8) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479e478a FUN_1479e478a body=155 status=ok
// SIG undefined FUN_1479e478a(void)

void FUN_1479e478a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479e4826(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4826 FUN_1479e4826 body=215 status=ok
// SIG undefined FUN_1479e4826(void)

void FUN_1479e4826(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x2cc) != fVar1) || (NAN(*(float *)(param_1 + 0x2cc)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x2d0) == fVar2) && (!NAN(*(float *)(param_1 + 0x2d0)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x2d4) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x2d4)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x2d8) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x2d8)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x2cc) = fVar1;
  *(float *)(param_1 + 0x2d0) = fVar2;
  *(float *)(param_1 + 0x2d4) = fVar3;
  *(float *)(param_1 + 0x2d8) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479e48fe FUN_1479e48fe body=156 status=ok
// SIG undefined FUN_1479e48fe(void)

void FUN_1479e48fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e499c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e499c FUN_1479e499c body=72 status=ok
// SIG undefined FUN_1479e499c(void)

void FUN_1479e499c(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b8)) || NAN(param_2))) {
      fVar1 = 0.0;
      if (0.0 <= param_2) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x2b8) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e49e4 FUN_1479e49e4 body=156 status=ok
// SIG undefined FUN_1479e49e4(void)

void FUN_1479e49e4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e4a82(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4a82 FUN_1479e4a82 body=72 status=ok
// SIG undefined FUN_1479e4a82(void)

void FUN_1479e4a82(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2ac) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ac)) || NAN(param_2))) {
      fVar1 = 0.0;
      if (0.0 <= param_2) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x2ac) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e4aca FUN_1479e4aca body=156 status=ok
// SIG undefined FUN_1479e4aca(void)

void FUN_1479e4aca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e4b68(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4b68 FUN_1479e4b68 body=72 status=ok
// SIG undefined FUN_1479e4b68(void)

void FUN_1479e4b68(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b0)) || NAN(param_2))) {
      fVar1 = 0.0;
      if (0.0 <= param_2) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x2b0) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e4bb0 FUN_1479e4bb0 body=156 status=ok
// SIG undefined FUN_1479e4bb0(void)

void FUN_1479e4bb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e4c4e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4c4e FUN_1479e4c4e body=72 status=ok
// SIG undefined FUN_1479e4c4e(void)

void FUN_1479e4c4e(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b4)) || NAN(param_2))) {
      fVar1 = 0.0;
      if (0.0 <= param_2) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x2b4) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e4c96 FUN_1479e4c96 body=156 status=ok
// SIG undefined FUN_1479e4c96(void)

void FUN_1479e4c96(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e4d34(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4d34 FUN_1479e4d34 body=72 status=ok
// SIG undefined FUN_1479e4d34(void)

void FUN_1479e4d34(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2a8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2a8)) || NAN(param_2))) {
      fVar1 = 0.0;
      if (0.0 <= param_2) {
        fVar1 = param_2;
      }
      *(float *)(param_1 + 0x2a8) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e4dc8 FUN_1479e4dc8 body=299 status=ok
// SIG undefined FUN_1479e4dc8(void)

void FUN_1479e4dc8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479e4ef4(local_19,local_1a,local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e4ef4 FUN_1479e4ef4 body=166 status=ok
// SIG undefined FUN_1479e4ef4(void)

float FUN_1479e4ef4(char param_1,char param_2,float param_3)

{
  float fVar1;
  
  if (param_1 == param_2) {
    return 1.0;
  }
  if (0.9999 <= param_3) {
    param_3 = 0.9999;
  }
  if (param_3 <= -1.0) {
    param_3 = -1.0;
  }
  fVar1 = 10000.0;
  if ((param_1 != '\x01') && (param_1 != '\x03')) {
    if (param_1 == '\x02') {
      fVar1 = 1591.5494 / (1.0 - param_3);
    }
    else {
      fVar1 = 16.0;
    }
  }
  if (param_2 != '\x03') {
    if (param_2 == '\x02') {
      return fVar1 * ((((1.0 - param_3) * 6.2831855) / 100.0) / 100.0);
    }
    if (param_2 != '\x01') {
      return fVar1 * 0.0625;
    }
  }
  return fVar1 * 0.0001;
}



// FUNCTION 1479e4f9a FUN_1479e4f9a body=156 status=ok
// SIG undefined FUN_1479e4f9a(void)

void FUN_1479e4f9a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e5038(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e5038 FUN_1479e5038 body=65 status=ok
// SIG undefined FUN_1479e5038(void)

void FUN_1479e5038(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (1 < *(byte *)(param_1 + 0x1fb))) {
    if ((*(float *)(param_1 + 0x40c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x40c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x40c) = param_2;
      FUN_1479e51b8();
      return;
    }
  }
  return;
}



// FUNCTION 1479e507a FUN_1479e507a body=151 status=ok
// SIG undefined FUN_1479e507a(void)

void FUN_1479e507a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e5112(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e5112 FUN_1479e5112 body=56 status=ok
// SIG undefined FUN_1479e5112(void)

void FUN_1479e5112(longlong param_1,char param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(char *)(param_1 + 0x400) != param_2)) {
    *(char *)(param_1 + 0x400) = param_2;
    FUN_1406f9b24();
    return;
  }
  return;
}



// FUNCTION 1479e514e FUN_1479e514e body=105 status=ok
// SIG undefined FUN_1479e514e(void)

void FUN_1479e514e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_140982318(param_1,lVar1);
  if (*(int *)(lVar1 + 0x40) < 0x154) {
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x408);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e51b8 FUN_1479e51b8 body=42 status=ok
// SIG undefined FUN_1479e51b8(void)

void FUN_1479e51b8(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x2d4) & 2) == 0) {
    if (*(longlong *)(param_1 + 0x398) != 0) {
      FUN_1407dd6e4(*(longlong *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x40c));
      return;
    }
    return;
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar1 = *(byte *)(param_1 + 0x9d);
    if ((bVar1 & 1) == 0) {
LAB_14482163b:
      *(byte *)(param_1 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar2 = FUN_1448abda6(param_1);
      if (lVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 0x9d);
        goto LAB_14482163b;
      }
    }
  }
  return;
}



// FUNCTION 1479e51e2 FUN_1479e51e2 body=86 status=ok
// SIG undefined FUN_1479e51e2(void)

bool FUN_1479e51e2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_2[2] - *(double *)(param_1 + 0x270);
  dVar3 = param_2[1] - *(double *)(param_1 + 0x268);
  dVar2 = *param_2 - *(double *)(param_1 + 0x260);
  dVar4 = (double)*(float *)(param_1 + 0x40c) + param_2[6];
  return dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3 <= dVar4 * dVar4;
}



// FUNCTION 1479e5238 FUN_1479e5238 body=121 status=ok
// SIG undefined FUN_1479e5238(void)

double * FUN_1479e5238(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)*(float *)(param_1 + 0x40c);
  dVar1 = *(double *)(param_1 + 0x270);
  dVar2 = *(double *)(param_1 + 0x260);
  dVar3 = *(double *)(param_1 + 0x268);
  *param_2 = dVar2 - dVar4;
  param_2[1] = dVar3 - dVar4;
  param_2[2] = dVar1 - dVar4;
  param_2[3] = dVar2 + dVar4;
  param_2[4] = dVar3 + dVar4;
  param_2[5] = dVar1 + dVar4;
  *(undefined1 *)(param_2 + 6) = 1;
  return param_2;
}



// FUNCTION 1479e52da FUN_1479e52da body=139 status=ok
// SIG undefined FUN_1479e52da(void)

void FUN_1479e52da(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e5366(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e5366 FUN_1479e5366 body=483 status=ok
// SIG undefined FUN_1479e5366(void)

undefined8 * FUN_1479e5366(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x1a0);
  local_78 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar11);
      if (lVar3 != 0) {
        uVar8 = FUN_14078ee06();
        plVar9 = (longlong *)FUN_144718840(lVar3,uVar8);
        iVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
        uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
        iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if ((iVar4 < 0) || (iVar7 = (**(code **)(*plVar9 + 0x18))(plVar9), iVar7 <= iVar4)) {
          if (iVar6 < 0) {
            local_70 = *(undefined8 *)(lVar3 + 0x18);
            FUN_1400021e4(&local_70,&local_68);
            puVar12 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar12 = local_68;
            }
            pwVar10 = L"%s : %d\n";
          }
          else {
            local_70 = *(undefined8 *)(lVar3 + 0x18);
            FUN_1400021e4(&local_70,&local_68);
            puVar12 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar12 = local_68;
            }
            pwVar10 = L"%s : %d (%d)\n";
            local_88 = iVar6;
          }
        }
        else {
          local_70 = *(undefined8 *)(lVar3 + 0x18);
          FUN_1400021e4(&local_70,&local_68);
          puVar12 = &DAT_149dfb77a;
          if (local_60 != 0) {
            puVar12 = local_68;
          }
          pwVar10 = L"%s : %d (%d, %d)\n";
          local_88 = iVar6;
          local_80 = iVar4;
        }
        FUN_140002266(&local_58,pwVar10,puVar12,uVar5);
        iVar4 = local_50 + -1;
        if (local_50 == 0) {
          iVar4 = 0;
        }
        FUN_1400020e8(local_78,local_58,iVar4);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar1 * 8 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_78;
}



// FUNCTION 1479e554e FUN_1479e554e body=179 status=ok
// SIG undefined FUN_1479e554e(void)

void FUN_1479e554e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1401c4d5c(lVar3 + 0x40,param_1,param_1 + 0x40);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) < 0) {
    FUN_140ec0d20(param_1 + 0x198,0);
  }
  if (-1 < *(int *)(param_1 + 0x194)) {
    *(undefined4 *)(param_1 + 400) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 400) = 0;
  FUN_140ec0d20(param_1 + 0x188,0);
  return;
}



// FUNCTION 1479e5602 FUN_1479e5602 body=202 status=ok
// SIG undefined FUN_1479e5602(void)

uint FUN_1479e5602(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x170);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x178) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 0x30;
        if (*(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 0x30) == lVar1) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return param_3;
          }
          if (*(int *)(lVar4 + 0x20) <= (int)param_3) {
            return param_3;
          }
          return *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)param_3 * 4);
        }
        iVar3 = *(int *)(lVar4 + 0x28);
      } while (iVar3 != -1);
    }
  }
  return param_3;
}



// FUNCTION 1479e56cc FUN_1479e56cc body=71 status=ok
// SIG undefined FUN_1479e56cc(void)

void FUN_1479e56cc(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401fcbb6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x48) = param_2;
      FUN_1479f9910();
      return;
    }
  }
  return;
}



// FUNCTION 1479e5714 FUN_1479e5714 body=204 status=ok
// SIG undefined FUN_1479e5714(void)

uint FUN_1479e5714(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x170);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x178) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x130) + (longlong)iVar6 * 0x30;
        if (*(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar6 * 0x30) == lVar1)
        goto LAB_1479e5729;
        iVar6 = *(int *)(lVar3 + 0x28);
      } while (iVar6 != -1);
    }
  }
  lVar3 = 0;
LAB_1479e5729:
  plVar4 = (longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (((-1 < (int)param_3) && (plVar4 != (longlong *)0x0)) && ((int)param_3 < (int)plVar4[1])) {
    param_3 = *(uint *)(*plVar4 + (ulonglong)param_3 * 4);
  }
  return param_3;
}



// FUNCTION 1479e57e0 FUN_1479e57e0 body=26 status=ok
// SIG undefined FUN_1479e57e0(void)

void FUN_1479e57e0(undefined8 param_1)

{
  FUN_144a7e84a();
  FUN_14347f146(param_1);
  return;
}



// FUNCTION 1479e5806 FUN_1479e5806 body=559 status=ok
// SIG undefined FUN_1479e5806(void)

void FUN_1479e5806(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  local_60 = local_3c;
  local_68 = local_38;
  FUN_1479e5a36(param_1,local_28,local_30,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e5a36 FUN_1479e5a36 body=354 status=ok
// SIG undefined FUN_1479e5a36(void)

void FUN_1479e5a36(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *(int *)(param_1 + 0x628);
  *(uint *)(param_1 + 0x628) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x62c) < iVar2 + 1U) {
    FUN_1479f99ee((longlong *)(param_1 + 0x620),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x620) + (longlong)iVar2 * 0x28);
  *plVar1 = 0;
  plVar1[1] = 0;
  *(byte *)(plVar1 + 2) = *(byte *)(plVar1 + 2) & 0xfe;
  *(undefined8 *)((longlong)plVar1 + 0x14) = 0x4200000042000000;
  plVar1[4] = 0;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar3 = DAT_14c950c29;
  *plVar1 = param_2;
  if (param_3 != 0 && (~bVar3 & 1) == 0) {
    FUN_1456cec3c(param_3);
    bVar3 = DAT_14c950c29;
  }
  plVar1[1] = param_3;
  *(uint *)(plVar1 + 2) = *(uint *)(plVar1 + 2) & 0xfffffffe | param_4 & 0xff;
  *(undefined4 *)((longlong)plVar1 + 0x14) = param_5;
  *(undefined4 *)(plVar1 + 3) = param_6;
  if ((param_7 != 0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c(param_7);
  }
  plVar1[4] = param_7;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479e5b98 FUN_1479e5b98 body=192 status=ok
// SIG undefined FUN_1479e5b98(void)

void FUN_1479e5b98(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e5d96(param_1 + 0x620,plVar1);
  FUN_1448215fa(param_1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e5c5c FUN_1479e5c5c body=39 status=ok
// SIG undefined FUN_1479e5c5c(void)

void FUN_1479e5c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x5f0,0x10);
  FUN_14347f5ac(uVar1,param_1);
  return;
}



// FUNCTION 1479e5c84 FUN_1479e5c84 body=274 status=ok
// SIG undefined FUN_1479e5c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1479e5c84(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  
  if ((longlong)*(int *)(param_1 + 0x628) < 1) {
    dVar6 = 1.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x620);
    dVar6 = 1.0;
    lVar5 = 0;
    do {
      if ((*(byte *)(lVar2 + 0x10 + lVar5) & 1) != 0) {
        dVar6 = 4398046511104.0;
        break;
      }
      dVar8 = (double)*(float *)(lVar2 + 0x18 + lVar5);
      dVar10 = (double)*(float *)(lVar2 + 0x14 + lVar5);
      if (dVar6 <= dVar10) {
        dVar6 = dVar10;
      }
      if (dVar6 <= dVar8) {
        dVar6 = dVar8;
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x628) * 0x28 != lVar5);
  }
  auVar9 = *(undefined1 (*) [16])(param_3 + 0x40) & _DAT_149931180;
  auVar7 = _DAT_149931180 & *(undefined1 (*) [16])(param_3 + 0x50);
  auVar3._16_16_ = auVar7;
  auVar3._0_16_ = auVar9;
  auVar7._8_8_ = auVar9._0_8_;
  auVar9 = maxpd(auVar9,auVar3._8_16_);
  auVar7 = maxpd(auVar9,auVar7);
  dVar6 = (double)(float)auVar7._0_8_ * dVar6;
  dVar8 = dVar6 * dVar6 * 3.0;
  if (dVar8 < 0.0) {
    dVar8 = sqrt(dVar8);
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *param_2 = *(undefined8 *)(param_3 + 0x20);
  param_2[1] = uVar4;
  param_2[2] = uVar1;
  param_2[3] = dVar6;
  param_2[4] = dVar6;
  param_2[5] = dVar6;
  param_2[6] = dVar8;
  return param_2;
}



// FUNCTION 1479e5d96 FUN_1479e5d96 body=79 status=ok
// SIG undefined FUN_1479e5d96(void)

undefined8 * FUN_1479e5d96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1479f57e8(param_1,iVar1);
      FUN_1479f585b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479e5e08 FUN_1479e5e08 body=326 status=ok
// SIG undefined FUN_1479e5e08(void)

void FUN_1479e5e08(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined **local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144842962();
  cVar2 = FUN_144a8e1a3();
  if ((cVar2 != '\0') &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    local_98 = 0x9e00;
    FUN_1448ac24a(param_1,&local_98);
    local_98 = local_98 & 0xfffffffffffdffc0 | 0x20001;
    local_a8 = 0;
    uStack_a0 = 0;
    (**(code **)(*param_1 + 0x790))(param_1,&local_a8,0);
    lVar1 = local_a8;
    lVar4 = (longlong)(int)uStack_a0;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          local_80 = &DAT_14cae9e78;
          local_88 = 1;
          local_90 = &local_80;
          FUN_1408ecec8(*(longlong *)(lVar1 + lVar3),local_78,&local_90,&local_98);
          FUN_14588b8d6(local_78);
        }
        lVar3 = lVar3 + 8;
      } while (lVar4 * 8 != lVar3);
    }
    if (local_a8 != 0) {
      FUN_1400020a8(local_a8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479e5f50 FUN_1479e5f50 body=93 status=ok
// SIG undefined FUN_1479e5f50(void)

void FUN_1479e5f50(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x628))) {
    lVar1 = *(longlong *)(param_1 + 0x620);
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)((ulonglong)param_2 * 0x28 + lVar1) = param_3;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e5fae FUN_1479e5fae body=118 status=ok
// SIG undefined FUN_1479e5fae(void)

void FUN_1479e5fae(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (int)param_1[0xc5]) {
    iVar1 = 0;
    do {
      local_30 = (**(code **)(*param_1 + 0x610))(param_1,iVar1);
      FUN_140e3cabe(param_2,&local_30);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xc5]);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6026 FUN_1479e6026 body=54 status=ok
// SIG undefined FUN_1479e6026(void)

void FUN_1479e6026(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = param_1[0xc6];
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0xa68))();
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 1479e605c FUN_1479e605c body=61 status=ok
// SIG undefined FUN_1479e605c(void)

void FUN_1479e605c(longlong *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = *(float *)(param_1 + 199);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    fVar1 = (float)(**(code **)(*param_1 + 0xa70))();
  }
  *param_3 = fVar1;
  return;
}



// FUNCTION 1479e60a0 FUN_1479e60a0 body=167 status=ok
// SIG undefined FUN_1479e60a0(void)

void FUN_1479e60a0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa28))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e614e FUN_1479e614e body=338 status=ok
// SIG undefined FUN_1479e614e(void)

void FUN_1479e614e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa20))(param_1,local_24,iVar1 != 0,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e62a2 FUN_1479e62a2 body=232 status=ok
// SIG undefined FUN_1479e62a2(void)

void FUN_1479e62a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_1479e638c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e638c FUN_1479e638c body=552 status=ok
// SIG undefined FUN_1479e638c(void)

void FUN_1479e638c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)((longlong)param_1 + 0x63c) & 1) == 0) {
    (**(code **)(*param_1 + 0x9f8))(param_1,&local_58);
    if (0 < local_50) {
      uVar13 = 0;
      iVar5 = local_50;
      do {
        lVar7 = *(longlong *)(local_58 + uVar13 * 8);
        if (lVar7 != 0) {
          lVar6 = FUN_144a772c4();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            lVar7 = (**(code **)(*param_1 + 0x668))(param_1,uVar13 & 0xffffffff);
          }
          local_68 = *param_3;
          uStack_64 = param_3[1];
          uStack_60 = param_3[2];
          uStack_5c = param_3[3];
          FUN_144a9d3f0(lVar7,param_2,&local_68);
          iVar5 = local_50;
        }
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < (longlong)iVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x63c) & 2) != 0) {
      FUN_143480270(param_1);
    }
    uVar2 = *(uint *)(param_1 + 0xc9);
    lVar7 = param_1[200];
    uVar12 = 0;
    iVar5 = (int)((ulonglong)param_2 >> 0x20);
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        lVar6 = (ulonglong)uVar1 * 0x30;
        iVar10 = *(int *)(lVar7 + lVar6) - (int)param_2;
        if (iVar10 == 0) {
          iVar10 = *(int *)(lVar7 + 4 + lVar6) - iVar5;
        }
        if (iVar10 < 0) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar4 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar4);
    }
    if ((int)uVar12 < (int)uVar2) {
      lVar6 = (ulonglong)uVar12 * 0x30;
      iVar10 = (int)param_2 - *(int *)(lVar7 + lVar6);
      if (iVar10 == 0) {
        iVar10 = iVar5 - *(int *)(lVar7 + 4 + lVar6);
      }
      if (((-1 < iVar10) && (lVar7 = lVar7 + lVar6, lVar7 != -8)) &&
         (iVar5 = *(int *)(lVar7 + 0x20), (longlong)iVar5 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x18);
        lVar6 = 0;
        do {
          uVar3 = *(undefined4 *)(lVar7 + lVar6);
          lVar8 = (**(code **)(*param_1 + 0x610))(param_1,uVar3);
          if (lVar8 != 0) {
            lVar9 = FUN_144a772c4();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
              lVar8 = (**(code **)(*param_1 + 0x668))(param_1,uVar3);
            }
            local_78 = *param_3;
            uStack_74 = param_3[1];
            uStack_70 = param_3[2];
            uStack_6c = param_3[3];
            FUN_144a9d3f0(lVar8,param_2,&local_78);
          }
          lVar6 = lVar6 + 4;
        } while ((longlong)iVar5 * 4 != lVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479e65b6 FUN_1479e65b6 body=156 status=ok
// SIG undefined FUN_1479e65b6(void)

void FUN_1479e65b6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14054853a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6654 FUN_1479e6654 body=179 status=ok
// SIG undefined FUN_1479e6654(void)

void FUN_1479e6654(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(float *)(param_1 + 0x638) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x638)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x638) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6708 FUN_1479e6708 body=238 status=ok
// SIG undefined FUN_1479e6708(void)

void FUN_1479e6708(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14347fe0c(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e67f8 FUN_1479e67f8 body=266 status=ok
// SIG undefined FUN_1479e67f8(void)

void FUN_1479e67f8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = (float)local_48;
  local_24 = (float)local_40;
  local_20 = (float)local_38;
  local_1c = 0x3f800000;
  FUN_1479e638c(param_1,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6904 FUN_1479e6904 body=103 status=ok
// SIG undefined FUN_1479e6904(void)

void FUN_1479e6904(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = (float)*param_3;
  local_14 = (float)param_3[1];
  local_10 = (float)param_3[2];
  local_c = 0x3f800000;
  FUN_1479e638c(local_10,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6978 FUN_1479e6978 body=238 status=ok
// SIG undefined FUN_1479e6978(void)

ulonglong * FUN_1479e6978(ulonglong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  uVar7 = 0;
  iVar5 = 0;
  while( true ) {
    iVar2 = 0;
    if (*(longlong *)(param_2 + 0xf8) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x160);
    }
    bVar6 = (byte)uVar7;
    if (iVar2 <= iVar5) break;
    lVar3 = FUN_1447ccd9c(param_2,iVar5);
    if (lVar3 == 0) {
      FUN_14003fbd6();
      lVar3 = DAT_14caea080;
    }
    FUN_14470a074(lVar3,local_48,param_3);
    *param_1 = *param_1 | local_48[0];
    uVar4 = local_48[0] >> 0x10 & 0xffff;
    uVar7 = uVar7 & 0xff;
    if (bVar6 < (byte)uVar4) {
      uVar7 = uVar4;
    }
    *(char *)((longlong)param_1 + 2) = (char)uVar7;
    iVar5 = iVar5 + 1;
  }
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_14470a074(*(longlong *)(param_2 + 0x110),local_48,param_3);
    *param_1 = *param_1 | local_48[0];
    bVar1 = (byte)(local_48[0] >> 0x10);
    if (bVar1 <= bVar6) {
      bVar1 = bVar6;
    }
    *(byte *)((longlong)param_1 + 2) = bVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6a6c FUN_1479e6a6c body=234 status=ok
// SIG undefined FUN_1479e6a6c(void)

void FUN_1479e6a6c(longlong *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != '\0') {
    plVar3 = (longlong *)FUN_140083894();
    (**(code **)(*plVar3 + 0x38))(plVar3,0x1e);
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x798))(param_1,&local_58,4);
  lVar2 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar6);
      if (lVar1 != 0) {
        lVar4 = FUN_144a79692();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14371bf72(lVar1,param_2,param_4);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479e6b58 FUN_1479e6b58 body=126 status=ok
// SIG undefined FUN_1479e6b58(void)

void FUN_1479e6b58(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 5;
  local_38 = 0;
  pcVar1 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  local_40 = param_1;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_40,&local_38,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6bd8 FUN_1479e6bd8 body=126 status=ok
// SIG undefined FUN_1479e6bd8(void)

void FUN_1479e6bd8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 5;
  local_38 = 0;
  pcVar1 = (code *)*param_3;
  plVar3 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_3[2];
  }
  local_40 = param_1;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_40,&local_38,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6c58 FUN_1479e6c58 body=547 status=ok
// SIG undefined FUN_1479e6c58(void)

void FUN_1479e6c58(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8 [2];
  longlong local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_3;
  if (param_3 != 0) {
    iVar2 = (**(code **)(*param_1 + 0xa08))();
    iVar3 = (**(code **)(*param_1 + 0x7b0))(param_1);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        lVar6 = (**(code **)(*param_1 + 0x610))(param_1,iVar2);
        if (lVar6 != 0) {
          local_78 = (longlong *)0x0;
          uStack_70 = 0;
          local_88[0] = 0;
          local_88[1] = 0;
          FUN_147bbe748(lVar6,&local_78,local_88);
          if ((longlong)(int)uStack_70 != 0) {
            lVar7 = (longlong)(int)uStack_70 << 4;
            plVar9 = local_78;
LAB_1479e6d0b:
            if (*plVar9 != param_2) goto code_r0x0001479e6d10;
            local_98 = *(longlong *)(lVar6 + 0x18);
            FUN_1400021e4(&local_98,local_a8);
            FUN_144a882a8(&local_98,local_a8,L"_Dynamic");
            iVar4 = local_90 + -1;
            if (local_90 == 0) {
              iVar4 = 0;
            }
            FUN_1446f82e2(&local_68,iVar4,local_98,1);
            uVar1 = local_68;
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            lVar7 = (**(code **)(*param_1 + 0x678))(param_1,iVar2,0,uVar1);
            if ((lVar6 != lVar7) && (iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1), 0 < iVar4)) {
              iVar4 = 0;
              do {
                lVar8 = (**(code **)(*param_1 + 0x610))(param_1,iVar4);
                if (lVar8 == lVar6) {
                  (**(code **)(*param_1 + 0x638))(param_1,iVar4,lVar7);
                }
                iVar4 = iVar4 + 1;
                iVar5 = (**(code **)(*param_1 + 0x7b0))(param_1);
              } while (iVar4 < iVar5);
            }
            if (lVar7 != 0) {
              FUN_1409d961e(lVar7,plVar9,local_b0);
            }
          }
LAB_1479e6d1a:
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001479e6d10:
  plVar9 = plVar9 + 2;
  lVar7 = lVar7 + -0x10;
  if (lVar7 == 0) goto LAB_1479e6d1a;
  goto LAB_1479e6d0b;
}



// FUNCTION 1479e6e80 FUN_1479e6e80 body=75 status=ok
// SIG undefined FUN_1479e6e80(void)

void FUN_1479e6e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_145d0f56c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6ecc FUN_1479e6ecc body=196 status=ok
// SIG undefined FUN_1479e6ecc(void)

undefined8 * FUN_1479e6ecc(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a862068;
  param_1[1] = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[2] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_1 + 6) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_24;
  *(undefined4 *)(param_1 + 7) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e6f92 FUN_1479e6f92 body=1301 status=ok
// SIG undefined FUN_1479e6f92(void)

void FUN_1479e6f92(longlong param_1)

{
  void **ppvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_158 [40];
  longlong *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  int local_fc;
  longlong local_f8 [2];
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_bc [4];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  plVar2 = (longlong *)(param_1 + 0x650);
  local_fc = 0;
  if (*(int *)(param_1 + 0x658) < 1) {
    uStack_e0 = local_a8;
    local_e8 = (void *)0x100000000;
    local_d8 = 0xffffffff;
    local_d0 = 0;
  }
  else {
    do {
      lVar3 = *(longlong *)(*plVar2 + (longlong)local_fc * 8);
      ppvVar1 = (void **)(lVar3 + 0x18);
      local_e8 = (void *)0x0;
      uStack_e0 = (undefined1 *)0x0;
      if (0 < *(int *)(lVar3 + 0x20)) {
        lVar16 = 0;
        do {
          lVar17 = *(longlong *)(lVar3 + 0x10);
          iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x628) + 0x28) + 0x14 +
                           (ulonglong)*(ushort *)(*(longlong *)(lVar3 + 0x18) + lVar16 * 2) * 0x40);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x68);
          if ((DAT_14c950c29 == 1) && (lVar17 != 0)) {
            FUN_1456cec3c(lVar17);
          }
          uVar10 = (ulonglong)uStack_e0;
          if (*(longlong *)((longlong)iVar13 * 0x50 + lVar4) == lVar17) {
            pvVar5 = *ppvVar1;
            lVar17 = (longlong)(int)uStack_e0;
            uVar12 = (int)uStack_e0 + 1;
            uStack_e0 = (undefined1 *)CONCAT44(uStack_e0._4_4_,uVar12);
            if (uStack_e0._4_4_ < uVar12) {
              FUN_14488eebe(&local_e8,uVar10 & 0xffffffff);
            }
            *(undefined2 *)((longlong)local_e8 + lVar17 * 2) =
                 *(undefined2 *)((longlong)pvVar5 + lVar16 * 2);
          }
          else {
            local_130 = (longlong *)(lVar16 * 2 + *(longlong *)(lVar3 + 0x18));
            local_128 = &local_108;
            local_108 = lVar3;
            FUN_1479f9ab2(local_b8,local_bc,&local_130);
            FUN_1449e3bb0(local_f8,&local_fc);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar3 + 0x20));
      }
      pvVar5 = local_e8;
      if (ppvVar1 != &local_e8) {
        iVar13 = (int)uStack_e0;
        lVar16 = (longlong)(int)uStack_e0;
        *(int *)(lVar3 + 0x20) = (int)uStack_e0;
        if ((int)uStack_e0 == 0 && *(int *)(lVar3 + 0x24) == 0) {
          *(undefined4 *)(lVar3 + 0x24) = 0;
        }
        else {
          FUN_140817052(ppvVar1,(ulonglong)uStack_e0 & 0xffffffff);
          if (iVar13 != 0) {
            memcpy(*ppvVar1,pvVar5,lVar16 * 2);
          }
        }
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_fc = local_fc + 1;
    } while (local_fc < *(int *)(param_1 + 0x658));
    uStack_e0 = local_a8;
    local_e8 = (void *)0x100000000;
    local_d8 = 0xffffffff;
    local_d0 = 0;
    if (local_90 != 0) {
      FUN_1449c0562(&local_e8);
    }
  }
  local_118 = local_d8;
  local_110 = local_d0;
  local_10c = local_cc;
  local_128 = local_e8;
  local_120 = uStack_e0;
  local_130 = local_b8;
  do {
    if (*(int *)(local_120 + 0x18) <= local_118._4_4_) {
      FUN_141627008(param_1);
      iVar13 = *(int *)(param_1 + 0x658);
      if (0 < iVar13) {
        iVar14 = 0;
        do {
          if (*(int *)(*(longlong *)(*plVar2 + (longlong)iVar14 * 8) + 0x20) == 0) {
            iVar14 = iVar14 + -1;
            FUN_1479e74a8(plVar2);
            iVar13 = *(int *)(param_1 + 0x658);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar13);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1479f5dc8(local_b8);
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *(longlong *)(*local_130 + 8 + (longlong)local_118._4_4_ * 0x18);
    plVar15 = (longlong *)
              ((longlong)
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x628) + 0x28) + 0x14 +
                       (ulonglong)*(ushort *)(*local_130 + (longlong)local_118._4_4_ * 0x18) * 0x40)
               * 0x50 + *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x68));
    if (*(int *)(param_1 + 0x658) < 1) {
LAB_1479e7342:
      lVar16 = FUN_14001cc68(0x90,0x10);
      FUN_1479e6ecc(lVar16,param_1,*plVar15);
      iVar13 = *(int *)(param_1 + 0x658);
      *(uint *)(param_1 + 0x658) = iVar13 + 1U;
      if (*(uint *)(param_1 + 0x65c) < iVar13 + 1U) {
        FUN_1456bd870(plVar2,iVar13);
      }
      *(longlong *)(*plVar2 + (longlong)iVar13 * 8) = lVar16;
      uVar7 = *(undefined4 *)(lVar3 + 0x34);
      uVar8 = *(undefined4 *)(lVar3 + 0x38);
      uVar9 = *(undefined4 *)(lVar3 + 0x3c);
      *(undefined4 *)(lVar16 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
      *(undefined4 *)(lVar16 + 0x34) = uVar7;
      *(undefined4 *)(lVar16 + 0x38) = uVar8;
      *(undefined4 *)(lVar16 + 0x3c) = uVar9;
    }
    else {
      lVar17 = 0;
      lVar16 = 0;
      bVar11 = DAT_14c950c29;
      do {
        lVar4 = *(longlong *)(*plVar2 + lVar17 * 8);
        lVar6 = *plVar15;
        if (((bVar11 & 1) != 0) && (lVar6 != 0)) {
          FUN_1456cec3c(lVar6);
          bVar11 = DAT_14c950c29;
        }
        if ((*(longlong *)(lVar4 + 0x10) == lVar6) &&
           (*(int *)(lVar4 + 0x3c) == *(int *)(lVar3 + 0x3c) &&
            (*(int *)(lVar4 + 0x38) == *(int *)(lVar3 + 0x38) &&
            (*(int *)(lVar4 + 0x34) == *(int *)(lVar3 + 0x34) &&
            *(int *)(lVar4 + 0x30) == *(int *)(lVar3 + 0x30))))) {
          lVar16 = lVar4;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x658));
      if (lVar16 == 0) goto LAB_1479e7342;
    }
    lVar17 = (longlong)local_118._4_4_;
    lVar3 = *local_130;
    iVar13 = *(int *)(lVar16 + 0x20);
    *(uint *)(lVar16 + 0x20) = iVar13 + 1U;
    if (*(uint *)(lVar16 + 0x24) < iVar13 + 1U) {
      FUN_14488eebe((longlong *)(lVar16 + 0x18),iVar13);
    }
    *(undefined2 *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar13 * 2) =
         *(undefined2 *)(lVar17 * 0x18 + lVar3);
    local_e8 = (void *)CONCAT44(local_e8._4_4_,*(int *)(param_1 + 0x658) + -1);
    FUN_144aa221c(local_f8);
    local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
    FUN_1449c0562(&local_128);
  } while( true );
}



// FUNCTION 1479e74a8 FUN_1479e74a8 body=96 status=ok
// SIG undefined FUN_1479e74a8(void)

void FUN_1479e74a8(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)param_2;
  puVar1 = *(undefined8 **)(*param_1 + lVar3 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + lVar3 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 1479e7508 FUN_1479e7508 body=181 status=ok
// SIG undefined FUN_1479e7508(void)

void FUN_1479e7508(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x638);
  if (lVar2 == 0) {
    lVar2 = FUN_14099beef(param_1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x638) = lVar2;
    FUN_1412e3d1e(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x638);
    *(undefined4 *)(lVar2 + 0xe8) = local_28;
    *(undefined4 *)(lVar2 + 0xec) = uStack_24;
    *(undefined4 *)(lVar2 + 0xf0) = uStack_20;
    *(undefined4 *)(lVar2 + 0xf4) = uStack_1c;
    lVar2 = *(longlong *)(param_1 + 0x638);
  }
  *(undefined1 *)(lVar2 + 0x31) = 3;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x638) + 0xb8);
  *pbVar1 = *pbVar1 & 0xbf;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x638) + 0xb8);
  *pbVar1 = *pbVar1 | 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e75c2 FUN_1479e75c2 body=113 status=ok
// SIG undefined FUN_1479e75c2(void)

void FUN_1479e75c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x658);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x650) + lVar3 * 8) + 0x10);
      if (lVar1 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar1;
        iVar2 = *(int *)(param_1 + 0x658);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 1479e765e FUN_1479e765e body=74 status=ok
// SIG undefined FUN_1479e765e(void)

undefined8 FUN_1479e765e(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  *param_3 = 0;
  if ((-1 < param_2) && (0 < (longlong)*(int *)(param_1 + 0x658))) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x650) + lVar3 * 8);
      iVar4 = iVar4 + *(int *)(lVar1 + 0x4c);
      if (param_2 < iVar4) {
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
        *param_3 = (int)lVar3;
        return uVar2;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x658) != lVar3);
  }
  return 0;
}



// FUNCTION 1479e76a8 FUN_1479e76a8 body=1670 status=ok
// SIG undefined FUN_1479e76a8(void)

void FUN_1479e76a8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  ushort uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_190;
  longlong *local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar26 = *(longlong *)(param_1 + 0x628);
  if (lVar26 != 0) {
    local_108 = 0;
    local_100 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_180 = param_3;
    if (0 < *(int *)(param_1 + 0x648)) {
      lVar26 = 0;
      do {
        uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x640) + lVar26 * 2);
        local_148 = CONCAT44(local_148._4_4_,(uint)uVar9);
        local_168 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x28) + (ulonglong)uVar9 * 0x40 +
                    0x14;
        uStack_160 = &local_148;
        FUN_1479f9f44(&local_128,&local_138,&local_168);
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(param_1 + 0x648));
      lVar26 = *(longlong *)(param_1 + 0x628);
    }
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    if (0 < *(int *)(lVar26 + 0x70)) {
      uVar25 = 0;
      do {
        bVar29 = (longlong)uStack_130 < 0;
        uStack_130 = uStack_130 & 0xffffffff00000000;
        if (bVar29) {
          FUN_14481578e(&local_138,0);
        }
        FUN_146be72fa(&local_128,uVar25 & 0xffffffff,&local_138,0);
        if ((int)uStack_130 != 0) {
          plVar28 = (longlong *)
                    (uVar25 * 0x50 + *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x68));
          bVar29 = (longlong)uStack_140 < 0;
          uStack_140 = uStack_140 & 0xffffffff00000000;
          if (bVar29) {
            FUN_1447a8aa0(&local_148,0);
          }
          if (0 < (int)uStack_130) {
            lVar26 = 0;
            iVar19 = (int)uStack_130;
            do {
              lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x28);
              lVar21 = (longlong)*(int *)(local_138 + lVar26 * 4) * 0x40;
              if (*(char *)(lVar24 + 0x36 + lVar21) != '\0') {
                lVar24 = lVar24 + lVar21;
                lVar21 = 0;
                do {
                  uVar18 = uStack_140;
                  lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x58);
                  lVar22 = (longlong)
                           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x628) + 0x38) +
                                   (*(int *)(lVar24 + 0x10) + lVar21) * 0x18);
                  dVar10 = (double)*(float *)(lVar27 + lVar22 * 0xc) * *(double *)(param_1 + 0x280);
                  dVar11 = (double)*(float *)(lVar27 + 4 + lVar22 * 0xc) *
                           *(double *)(param_1 + 0x288);
                  dVar31 = (double)*(float *)(lVar27 + 8 + lVar22 * 0xc) *
                           *(double *)(param_1 + 0x290);
                  dVar14 = *(double *)(param_1 + 0x240);
                  dVar15 = *(double *)(param_1 + 0x248);
                  dVar16 = *(double *)(param_1 + 0x250);
                  dVar7 = *(double *)(param_1 + 600);
                  dVar33 = dVar11 * dVar14 - dVar10 * dVar15;
                  dVar34 = dVar31 * dVar15 - dVar11 * dVar16;
                  dVar35 = dVar10 * dVar16 - dVar14 * dVar31;
                  dVar34 = dVar34 + dVar34;
                  dVar35 = dVar35 + dVar35;
                  dVar33 = dVar33 + dVar33;
                  dVar8 = *(double *)(param_1 + 0x260);
                  dVar13 = (dVar16 * dVar34 - dVar14 * dVar33) +
                           *(double *)(param_1 + 600) * dVar35 + dVar11 +
                           *(double *)(param_1 + 0x268);
                  dVar11 = *(double *)(param_1 + 0x270);
                  lVar27 = (longlong)(int)uStack_140;
                  uVar20 = (int)uStack_140 + 1;
                  uStack_140 = CONCAT44(uStack_140._4_4_,uVar20);
                  if (uStack_140._4_4_ < uVar20) {
                    FUN_1403e3958(&local_148,uVar18 & 0xffffffff);
                  }
                  auVar12._8_4_ = SUB84(dVar13,0);
                  auVar12._0_8_ =
                       (dVar33 * dVar15 - dVar35 * dVar16) + dVar7 * dVar34 + dVar10 + dVar8;
                  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                  *(undefined1 (*) [16])(local_148 + lVar27 * 0x18) = auVar12;
                  *(double *)(local_148 + 0x10 + lVar27 * 0x18) =
                       dVar33 * dVar7 + dVar31 + (dVar35 * dVar14 - dVar34 * dVar15) + dVar11;
                  lVar21 = lVar21 + 1;
                } while ((uint)lVar21 < (uint)*(byte *)(lVar24 + 0x36));
                iVar19 = (int)uStack_130;
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 < iVar19);
          }
          FUN_140214e6c(&local_168,local_148,uStack_140 & 0xffffffff);
          fVar17 = DAT_14c7615e8;
          lVar24 = (longlong)(int)plVar28[3];
          lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x48);
          fVar32 = *(float *)(lVar26 + lVar24 * 0xc);
          fVar30 = *(float *)(lVar26 + 4 + lVar24 * 0xc);
          fVar3 = *(float *)(lVar26 + 8 + lVar24 * 0xc);
          lVar24 = (longlong)*(int *)((longlong)plVar28 + 0x14);
          fVar4 = *(float *)(lVar26 + lVar24 * 0xc);
          fVar5 = *(float *)(lVar26 + 4 + lVar24 * 0xc);
          fVar6 = *(float *)(lVar26 + 8 + lVar24 * 0xc);
          plVar23 = (longlong *)*plVar28;
          if ((longlong *)*plVar28 == (longlong *)0x0) {
            FUN_14003fbd6();
            plVar23 = DAT_14caea080;
          }
          local_178 = 0;
          uStack_170 = 0;
          local_198 = DAT_14c760db4;
          local_190 = 1;
          (**(code **)(*plVar23 + 0x310))(plVar23,&local_178,4);
          if (0 < (int)uStack_170) {
            fVar30 = SQRT(fVar3 * fVar3 + fVar32 * fVar32 + fVar30 * fVar30);
            fVar32 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
            if (fVar32 <= fVar30) {
              fVar32 = fVar30;
            }
            lVar26 = 0;
            plVar28 = local_180;
            do {
              lVar24 = *(longlong *)(local_178 + lVar26 * 8);
              if (lVar24 != 0) {
                lVar21 = FUN_144a79692();
                if ((*(int *)(lVar21 + 0x38) <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar21 + 0x38) * 8) == lVar21 + 0x30)) {
                  lVar21 = plVar28[1];
                  uVar20 = (int)lVar21 + 1;
                  *(uint *)(plVar28 + 1) = uVar20;
                  if (*(uint *)((longlong)plVar28 + 0xc) < uVar20) {
                    FUN_144781dc0(plVar28);
                  }
                  lVar27 = *plVar28;
                  lVar21 = (longlong)(int)lVar21 * 0x50;
                  puVar1 = (undefined8 *)(lVar27 + 0x30 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar27 + lVar21) = 0;
                  ((undefined8 *)(lVar27 + lVar21))[1] = 0;
                  *(undefined8 *)(lVar27 + 0x40 + lVar21) = 0x3f800000;
                  *(uint *)(lVar27 + 0x48 + lVar21) =
                       *(uint *)(lVar27 + 0x48 + lVar21) & 0xfffffffc | 2;
                  *(undefined8 *)(lVar27 + 0x18 + lVar21) = local_158;
                  puVar2 = (undefined4 *)(lVar27 + 8 + lVar21);
                  *puVar2 = (undefined4)local_168;
                  puVar2[1] = local_168._4_4_;
                  puVar2[2] = (undefined4)uStack_160;
                  puVar2[3] = uStack_160._4_4_;
                  *(undefined8 *)(lVar27 + 0x20 + lVar21) = local_150;
                  *(undefined8 *)(lVar27 + 0x28 + lVar21) = local_150;
                  *(undefined8 *)(lVar27 + 0x30 + lVar21) = local_150;
                  *(undefined8 *)(lVar27 + 0x38 + lVar21) = local_150;
                  *(float *)(lVar27 + 0x40 + lVar21) = fVar17 / fVar32;
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar24);
                  }
                  *(longlong *)(lVar27 + lVar21) = lVar24;
                  plVar28 = local_180;
                }
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 < (int)uStack_170);
          }
          if (local_178 != 0) {
            FUN_1400020a8();
          }
        }
        uVar25 = uVar25 + 1;
      } while ((longlong)uVar25 < (longlong)*(int *)(*(longlong *)(param_1 + 0x628) + 0x70));
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_128);
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479e7d30 FUN_1479e7d30 body=236 status=ok
// SIG undefined FUN_1479e7d30(void)

void FUN_1479e7d30(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1458c3e46(param_1 + 0x650,0);
  if (0 < *(int *)(param_2 + 0x658)) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x650) + lVar4 * 8);
      lVar3 = FUN_14001cc68(0x90,0x10);
      FUN_1479e7e1c(lVar3,uVar2);
      iVar1 = *(int *)(param_1 + 0x658);
      *(uint *)(param_1 + 0x658) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x65c) < iVar1 + 1U) {
        FUN_1456bd870(param_1 + 0x650,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar1 * 8) = lVar3;
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar3 + 8) = param_1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x658));
  }
  lVar4 = *(longlong *)(param_1 + 0x638);
  if ((lVar4 != 0) && (lVar3 = *(longlong *)(param_2 + 0x638), lVar3 != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar3 + 0xe8);
    *(undefined8 *)(lVar4 + 0xf0) = uVar2;
  }
  return;
}



// FUNCTION 1479e7e1c FUN_1479e7e1c body=196 status=ok
// SIG undefined FUN_1479e7e1c(void)

undefined8 * FUN_1479e7e1c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a862068;
  lVar3 = *(longlong *)(param_2 + 8);
  param_1[1] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar3;
  if ((lVar3 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140817052(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  puVar4 = (undefined8 *)(param_2 + 0x28);
  puVar5 = param_1 + 5;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 1479e7efa FUN_1479e7efa body=199 status=ok
// SIG undefined FUN_1479e7efa(void)

void FUN_1479e7efa(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  (**(code **)(*param_1 + 0x550))(param_1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e7fc2 FUN_1479e7fc2 body=199 status=ok
// SIG undefined FUN_1479e7fc2(void)

void FUN_1479e7fc2(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  (**(code **)(*param_1 + 0x558))(param_1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e808a FUN_1479e808a body=199 status=ok
// SIG undefined FUN_1479e808a(void)

void FUN_1479e808a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  (**(code **)(*param_1 + 0x560))(param_1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8152 FUN_1479e8152 body=43 status=ok
// SIG undefined FUN_1479e8152(void)

void FUN_1479e8152(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x478))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e817e FUN_1479e817e body=43 status=ok
// SIG undefined FUN_1479e817e(void)

void FUN_1479e817e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x480))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e81aa FUN_1479e81aa body=42 status=ok
// SIG undefined FUN_1479e81aa(void)

void FUN_1479e81aa(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x4a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e8244 FUN_1479e8244 body=167 status=ok
// SIG undefined FUN_1479e8244(void)

void FUN_1479e8244(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x488))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8304 FUN_1479e8304 body=657 status=ok
// SIG undefined FUN_1479e8304(void)

void FUN_1479e8304(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  int local_1a0;
  int local_19c;
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined4 local_f4;
  undefined4 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
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
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  memset(local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_194 = 0x3f800000;
  local_f4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_19c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  iVar3 = local_19c;
  local_1a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  iVar2 = local_1a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a8 = local_88;
  local_1b8 = local_98;
  uStack_1b0 = uStack_90;
  local_1d8 = local_80;
  uStack_1d4 = uStack_7c;
  uStack_1d0 = uStack_78;
  uStack_1cc = uStack_74;
  local_1c8 = local_70;
  FUN_144a7484c(&local_1b8,local_68);
  local_1e0 = iVar2 != 0;
  local_1e8 = local_198;
  if (puVar1 != (undefined1 *)0x0) {
    local_1e8 = puVar1;
  }
  uVar4 = FUN_1402eda10(param_1,&local_1d8,local_68,iVar3 != 0);
  *param_3 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8596 FUN_1479e8596 body=155 status=ok
// SIG undefined FUN_1479e8596(void)

void FUN_1479e8596(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x528))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8636 FUN_1479e8636 body=162 status=ok
// SIG undefined FUN_1479e8636(void)

void FUN_1479e8636(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x548))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e86da FUN_1479e86da body=282 status=ok
// SIG undefined FUN_1479e86da(void)

void FUN_1479e86da(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = local_20;
  (**(code **)(*param_1 + 0x538))(param_1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e87f6 FUN_1479e87f6 body=168 status=ok
// SIG undefined FUN_1479e87f6(void)

void FUN_1479e87f6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  (**(code **)(*param_1 + 0x530))(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e88a0 FUN_1479e88a0 body=168 status=ok
// SIG undefined FUN_1479e88a0(void)

void FUN_1479e88a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  (**(code **)(*param_1 + 0x540))(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e894a FUN_1479e894a body=160 status=ok
// SIG undefined FUN_1479e894a(void)

void FUN_1479e894a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8a64 FUN_1479e8a64 body=75 status=ok
// SIG undefined FUN_1479e8a64(void)

void FUN_1479e8a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_145ff07e8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8ab0 FUN_1479e8ab0 body=219 status=ok
// SIG undefined FUN_1479e8ab0(void)

undefined8 * FUN_1479e8ab0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  switch(param_3) {
  case 0:
    param_2[2] = *(undefined8 *)(param_1 + 0x150);
    uVar4 = *(undefined4 *)(param_1 + 0x140);
    uVar5 = *(undefined4 *)(param_1 + 0x144);
    uVar6 = *(undefined4 *)(param_1 + 0x148);
    uVar7 = *(undefined4 *)(param_1 + 0x14c);
    goto LAB_1479e8b3d;
  case 1:
switchD_1479e8ad1_caseD_1:
    *param_2 = 0x3ff0000000000000;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  case 2:
switchD_1479e8ad1_caseD_2:
    uVar3 = 0;
    *param_2 = 0;
    param_2[1] = 0x3ff0000000000000;
    break;
  case 3:
switchD_1479e8ad1_caseD_3:
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = 0x3ff0000000000000;
    break;
  case 4:
    plVar1 = (longlong *)FUN_144800528();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    switch(*(undefined1 *)(lVar2 + 0x14d)) {
    default:
      goto switchD_1479e8ad1_default;
    case 1:
      goto switchD_1479e8ad1_caseD_1;
    case 2:
      goto switchD_1479e8ad1_caseD_2;
    case 3:
      goto switchD_1479e8ad1_caseD_3;
    }
  default:
switchD_1479e8ad1_default:
    param_2[2] = DAT_14c8464f0;
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
LAB_1479e8b3d:
    *(undefined4 *)param_2 = uVar4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar5;
    *(undefined4 *)(param_2 + 1) = uVar6;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
    return param_2;
  }
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 1479e8b8c FUN_1479e8b8c body=47 status=ok
// SIG undefined FUN_1479e8b8c(void)

void FUN_1479e8b8c(longlong *param_1)

{
  FUN_1402b6186();
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479e8bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x490))(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e8bbe FUN_1479e8bbe body=96 status=ok
// SIG undefined FUN_1479e8bbe(void)

void FUN_1479e8bbe(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(char *)(param_1 + 0x173) = (char)param_2;
  FUN_1479e8ab0(param_1,&local_30,param_2);
  *(undefined8 *)(param_1 + 0x150) = local_20;
  *(undefined4 *)(param_1 + 0x140) = local_30;
  *(undefined4 *)(param_1 + 0x144) = uStack_2c;
  *(undefined4 *)(param_1 + 0x148) = uStack_28;
  *(undefined4 *)(param_1 + 0x14c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8cc0 FUN_1479e8cc0 body=230 status=ok
// SIG undefined FUN_1479e8cc0(void)

void FUN_1479e8cc0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *param_3 * param_2[1] - *param_2 * param_3[1];
  dVar1 = *param_2 * param_3[2] - *param_3 * param_2[2];
  dVar3 = param_3[1] * param_2[2] - param_2[1] * param_3[2];
  dVar7 = dVar5 * dVar5 + dVar3 * dVar3 + dVar1 * dVar1;
  if (((dVar7 != 1.0) || (dVar2 = dVar1, dVar4 = dVar3, dVar6 = dVar5, NAN(dVar7))) &&
     (dVar2 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar2 = dVar1 * dVar7;
    dVar4 = dVar3 * dVar7;
    dVar6 = dVar5 * dVar7;
  }
  *(double *)(param_1 + 0x140) = dVar4;
  *(double *)(param_1 + 0x148) = dVar2;
  *(double *)(param_1 + 0x150) = dVar6;
  return;
}



// FUNCTION 1479e8dd0 FUN_1479e8dd0 body=140 status=ok
// SIG undefined FUN_1479e8dd0(void)

void FUN_1479e8dd0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x22];
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x2e) & 0x10) != 0)) {
    local_48 = *(undefined8 *)(lVar1 + 0x260);
    uStack_40 = *(undefined8 *)(lVar1 + 0x268);
    local_38 = *(undefined8 *)(lVar1 + 0x270);
    (**(code **)(*param_1 + 0x558))((int)local_38,local_30);
    local_58 = 0;
    FUN_140d93b16(lVar1,local_30,0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8e62 FUN_1479e8e62 body=111 status=ok
// SIG undefined FUN_1479e8e62(void)

void FUN_1479e8e62(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x178) + 0xc0))(param_1 + 0x178,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e8ed6 FUN_1479e8ed6 body=52 status=ok
// SIG undefined FUN_1479e8ed6(void)

void FUN_1479e8ed6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e8f0e FUN_1479e8f0e body=52 status=ok
// SIG undefined FUN_1479e8f0e(void)

void FUN_1479e8f0e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd8))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e8f46 FUN_1479e8f46 body=52 status=ok
// SIG undefined FUN_1479e8f46(void)

void FUN_1479e8f46(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xf0))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e8f7e FUN_1479e8f7e body=52 status=ok
// SIG undefined FUN_1479e8f7e(void)

void FUN_1479e8f7e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e8fb6 FUN_1479e8fb6 body=52 status=ok
// SIG undefined FUN_1479e8fb6(void)

void FUN_1479e8fb6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe8))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e9006 FUN_1479e9006 body=75 status=ok
// SIG undefined FUN_1479e9006(void)

void FUN_1479e9006(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_145ff07e8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9058 FUN_1479e9058 body=86 status=ok
// SIG undefined FUN_1479e9058(void)

undefined8 FUN_1479e9058(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x578))(param_1,local_30);
  FUN_14797bd88(param_2,0,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e90da FUN_1479e90da body=112 status=ok
// SIG undefined FUN_1479e90da(void)

double * FUN_1479e90da(longlong param_1,double *param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + -0xd0) + 0x528))
            (*(longlong **)(param_1 + -0xd0),&local_24,&local_28);
  *param_2 = (double)local_24;
  param_2[1] = (double)local_24;
  param_2[2] = (double)local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e914c FUN_1479e914c body=67 status=ok
// SIG undefined FUN_1479e914c(void)

undefined8 * FUN_1479e914c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + -0xd0) + 0x1c8);
  if (lVar1 == 0) {
    param_2[2] = DAT_14c8462e8;
    uVar2 = DAT_14c8462e0;
    *param_2 = DAT_14c8462d8;
    param_2[1] = uVar2;
  }
  else {
    FUN_14141a100(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1479e9196 FUN_1479e9196 body=261 status=ok
// SIG undefined FUN_1479e9196(void)

void FUN_1479e9196(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  (**(code **)(*param_1 + 0x598))(param_1,&local_58,local_34 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e929c FUN_1479e929c body=100 status=ok
// SIG undefined FUN_1479e929c(void)

void FUN_1479e929c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5a0))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9302 FUN_1479e9302 body=137 status=ok
// SIG undefined FUN_1479e9302(void)

void FUN_1479e9302(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = (undefined4)DAT_14c8464e8;
    uStack_1c = DAT_14c8464e8._4_4_;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x400);
    local_28 = *(undefined4 *)(lVar1 + 0x3f0);
    uStack_24 = *(undefined4 *)(lVar1 + 0x3f4);
    uStack_20 = *(undefined4 *)(lVar1 + 0x3f8);
    uStack_1c = *(undefined4 *)(lVar1 + 0x3fc);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e93a8 FUN_1479e93a8 body=137 status=ok
// SIG undefined FUN_1479e93a8(void)

void FUN_1479e93a8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = (undefined4)DAT_14c8464e8;
    uStack_1c = DAT_14c8464e8._4_4_;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 1000);
    local_28 = *(undefined4 *)(lVar1 + 0x3d8);
    uStack_24 = *(undefined4 *)(lVar1 + 0x3dc);
    uStack_20 = *(undefined4 *)(lVar1 + 0x3e0);
    uStack_1c = *(undefined4 *)(lVar1 + 0x3e4);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9432 FUN_1479e9432 body=59 status=ok
// SIG undefined FUN_1479e9432(void)

void FUN_1479e9432(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    param_2[2] = *(undefined8 *)(lVar1 + 1000);
    uVar2 = *(undefined8 *)(lVar1 + 0x3e0);
    *param_2 = *(undefined8 *)(lVar1 + 0x3d8);
    param_2[1] = uVar2;
    return;
  }
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 1479e9472 FUN_1479e9472 body=41 status=ok
// SIG undefined FUN_1479e9472(void)

void FUN_1479e9472(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x5a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479e949c FUN_1479e949c body=694 status=ok
// SIG undefined FUN_1479e949c(void)

void FUN_1479e949c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0xffffffffffffffff;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = &local_88;
  local_78 = local_58;
  local_88 = local_68;
  uStack_80 = uStack_60;
  local_c0 = &local_a8;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = local_40;
  local_c8 = local_31;
  (**(code **)(*param_1 + 0x588))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9754 FUN_1479e9754 body=694 status=ok
// SIG undefined FUN_1479e9754(void)

void FUN_1479e9754(longlong *param_1,longlong param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0xffffffffffffffff;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = &local_88;
  local_78 = local_58;
  local_88 = local_68;
  uStack_80 = uStack_60;
  local_c0 = &local_a8;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = local_40;
  local_c8 = local_31;
  (**(code **)(*param_1 + 0x590))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9a0e FUN_1479e9a0e body=75 status=ok
// SIG undefined FUN_1479e9a0e(void)

void FUN_1479e9a0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_145ff07a2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9a5a FUN_1479e9a5a body=136 status=ok
// SIG undefined FUN_1479e9a5a(void)

void FUN_1479e9a5a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    cVar5 = (**(code **)(*plVar4 + 0x790))(plVar4);
    if (cVar5 == '\0') {
      plVar4[0x7b] = (longlong)(dVar1 + (double)plVar4[0x7b]);
      plVar4[0x7c] = (longlong)(dVar2 + (double)plVar4[0x7c]);
      plVar4[0x7d] = (longlong)(dVar3 + (double)plVar4[0x7d]);
    }
  }
  return;
}



// FUNCTION 1479e9ae2 FUN_1479e9ae2 body=543 status=ok
// SIG undefined FUN_1479e9ae2(void)

void FUN_1479e9ae2(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    lVar4 = FUN_144a7cbb2();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (plVar1 = *(longlong **)(lVar5 + 0x3c0), plVar1 != (longlong *)0x0)) {
      lVar5 = FUN_144a75eb4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
        if (cVar2 != '\0') {
          FUN_140a175ae(plVar1,local_a0,0);
          local_a8 = param_6;
          local_b0 = param_5;
          local_b8 = param_4;
          FUN_1479e9d02(param_1,param_2,param_3,local_a0);
          if ((plVar1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          iVar3 = FUN_14487fd02(plVar1);
          if (iVar3 != 0) {
            if ((plVar1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            iVar3 = FUN_14487fd02(plVar1);
            if (iVar3 == 2) {
              local_50 = param_6[2];
              local_60 = *param_6;
              uStack_58 = param_6[1];
              local_78 = *param_5;
              uStack_74 = param_5[1];
              uStack_70 = param_5[2];
              uStack_6c = param_5[3];
              local_68 = *(undefined8 *)(param_5 + 4);
              local_90 = *param_3;
              uVar6 = DAT_14cad1b00;
            }
            else {
              local_50 = param_6[2];
              local_60 = *param_6;
              uStack_58 = param_6[1];
              local_78 = *param_5;
              uStack_74 = param_5[1];
              uStack_70 = param_5[2];
              uStack_6c = param_5[3];
              local_68 = *(undefined8 *)(param_5 + 4);
              local_90 = *param_3;
              uVar6 = DAT_14cad1b10;
            }
            local_98 = param_2;
            local_80 = param_4;
            uVar6 = FUN_14477b072(param_1,uVar6);
            (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_98);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9d02 FUN_1479e9d02 body=478 status=ok
// SIG undefined FUN_1479e9d02(void)

void FUN_1479e9d02(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong in_stack_ffffffffffffffb8;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_2 + 0x7b8))(param_2,*param_3,1,0xffffffff);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 == 0) {
LAB_1479e9d77:
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    lVar3 = FUN_140636ec6(lVar3);
  }
  else {
    lVar2 = FUN_144a7cbb2();
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) || (lVar3 = *(longlong *)(lVar3 + 0x3c0), lVar3 == 0))
    goto LAB_1479e9d77;
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar3 = 0;
    }
  }
  switch(param_5) {
  case 0:
    uVar5 = *param_4;
    uVar4 = 0;
    goto LAB_1479e9e32;
  case 1:
    FUN_147c47f06(lVar1,param_6,1,0,*param_4,lVar3);
    break;
  case 2:
    FUN_1458bf406(lVar1,param_6,param_7,1,in_stack_ffffffffffffffb8 & 0xffffffffffffff00,*param_4,
                  lVar3);
    break;
  case 3:
    uVar5 = *param_4;
    uVar4 = 1;
    goto LAB_1479e9ebd;
  case 4:
    uVar5 = *param_4;
    uVar4 = 1;
    goto LAB_1479e9e79;
  case 5:
    FUN_1458e0e22(lVar1,param_6,param_7,*param_4,lVar3);
    break;
  case 6:
    uVar5 = *param_4;
    uVar4 = 0;
LAB_1479e9ebd:
    FUN_140f481a0(lVar1,param_6,uVar4,uVar5,lVar3);
    break;
  case 7:
    uVar5 = *param_4;
    uVar4 = 0;
LAB_1479e9e79:
    FUN_1458dc2aa(lVar1,param_6,uVar4,uVar5,lVar3);
    break;
  case 8:
    FUN_145d816f0(lVar1,param_6,param_7,*param_4,lVar3);
    break;
  case 9:
    uVar5 = *param_4;
    uVar4 = 1;
LAB_1479e9e32:
    FUN_147c47d80(lVar1,param_6,1,uVar4,uVar5,lVar3);
  }
  return;
}



// FUNCTION 1479e9ee0 FUN_1479e9ee0 body=259 status=ok
// SIG undefined FUN_1479e9ee0(void)

void FUN_1479e9ee0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = param_4;
  local_a0 = param_3;
  if (param_2 != 0) {
    local_b8 = param_7;
    local_c0 = param_6;
    local_c8 = param_5;
    FUN_1479e9d02(param_1,param_2,&local_a0,&local_a8);
    local_50 = param_7[2];
    local_60 = *param_7;
    uStack_58 = param_7[1];
    local_78 = *param_6;
    uStack_74 = param_6[1];
    uStack_70 = param_6[2];
    uStack_6c = param_6[3];
    local_68 = *(undefined8 *)(param_6 + 4);
    local_80 = param_5;
    local_98 = param_2;
    local_90 = param_3;
    local_88 = param_4;
    uVar1 = FUN_14477b072(param_1,DAT_14cad1b00);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e9fe4 FUN_1479e9fe4 body=209 status=ok
// SIG undefined FUN_1479e9fe4(void)

void FUN_1479e9fe4(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (((param_2 != 0) &&
      (((lVar1 = param_1[0x16], lVar1 != 0 || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
       (lVar1 = FUN_140636ec6(lVar1), lVar1 != 0)))) &&
     (lVar2 = (**(code **)(*param_1 + 0x5b8))(param_1), lVar2 == 0)) {
    _local_38 = CONCAT44(param_4 - *(int *)(lVar1 + 0x930),param_4);
    local_48 = param_7;
    local_50 = param_6;
    local_58 = param_5;
    FUN_1479e9d02(param_1,param_2,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479ea0b6 FUN_1479ea0b6 body=337 status=ok
// SIG undefined FUN_1479ea0b6(void)

void FUN_1479ea0b6(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [28];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x478))(param_1,local_20,local_24,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea214 FUN_1479ea214 body=729 status=ok
// SIG undefined FUN_1479ea214(void)

void FUN_1479ea214(longlong param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong *plVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined1 local_58 [4];
  float local_54;
  ulonglong local_50;
  
  fVar11 = (float)param_3;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((DAT_14cad1b58 != '\0') || (param_2 == (longlong *)0x0)) || (fVar11 <= 0.0)) ||
     (plVar9 = *(longlong **)(param_1 + 0xa8), plVar9 == (longlong *)0x0)) goto LAB_1479ea245;
  lVar7 = FUN_144a7cbb2();
  if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) {
    lVar7 = FUN_14490fee6();
    if (((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
        ((*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30 || ((*(uint *)(plVar9 + 1) >> 0x1e & 1) != 0)))) ||
       (plVar9 = (longlong *)plVar9[0x7a], plVar9 == (longlong *)0x0)) goto LAB_1479ea245;
  }
  if (((*(uint *)(plVar9 + 1) >> 0x1e & 1) != 0) || (plVar9[0x78] == 0)) goto LAB_1479ea245;
  if (plVar9 == param_2) {
LAB_1479ea40f:
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
    if (((double)*(float *)(param_1 + 0x130) <
         *(double *)(lVar7 + 0x6d0) - (double)*(float *)(param_1 + 0x140)) ||
       (*(float *)(param_1 + 0x13c) <= fVar11)) {
      pfVar10 = (float *)(param_1 + 0x140);
      *(float *)(param_1 + 0x13c) = fVar11;
LAB_1479ea463:
      lVar7 = *(longlong *)(param_1 + 0xb0);
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6(param_1);
      }
      *pfVar10 = (float)*(double *)(lVar7 + 0x6d0);
    }
  }
  else {
    lVar7 = plVar9[0x39];
    if (lVar7 == 0) {
      pdVar8 = (double *)&DAT_14c8464e0;
      uVar12 = (undefined4)DAT_14c8464f0;
      uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar12 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
      pdVar8 = (double *)(lVar7 + 0x260);
    }
    dVar5 = (double)CONCAT44(uVar13,uVar12) - param_4[2];
    dVar1 = *pdVar8;
    dVar2 = pdVar8[1];
    dVar3 = param_4[1];
    dVar4 = *param_4;
    (**(code **)(*plVar9 + 0x528))(plVar9,&local_54,local_58);
    if (dVar5 * dVar5 + (dVar1 - dVar4) * (dVar1 - dVar4) + (dVar2 - dVar3) * (dVar2 - dVar3) <=
        (double)(local_54 * local_54)) goto LAB_1479ea40f;
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
    if (((double)*(float *)(param_1 + 0x130) <
         *(double *)(lVar7 + 0x6d0) - (double)*(float *)(param_1 + 0x138)) ||
       (*(float *)(param_1 + 0x134) <= fVar11)) {
      pfVar10 = (float *)(param_1 + 0x138);
      *(float *)(param_1 + 0x134) = fVar11;
      uVar12 = *(undefined4 *)((longlong)param_4 + 4);
      uVar13 = *(undefined4 *)(param_4 + 1);
      uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)param_4;
      *(undefined4 *)(param_1 + 0x11c) = uVar12;
      *(undefined4 *)(param_1 + 0x120) = uVar13;
      *(undefined4 *)(param_1 + 0x124) = uVar6;
      *(double *)(param_1 + 0x128) = param_4[2];
      goto LAB_1479ea463;
    }
  }
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
    DAT_14cad1b58 = 1;
    local_78 = *(undefined4 *)param_4;
    uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_70 = *(undefined4 *)(param_4 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_68 = param_4[2];
    local_80 = 0;
    local_88 = 0;
    FUN_1478b8698(param_2,param_3,plVar9);
    DAT_14cad1b58 = '\0';
  }
LAB_1479ea245:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea4ee FUN_1479ea4ee body=13 status=ok
// SIG undefined FUN_1479ea4ee(void)

undefined4 FUN_1479ea4ee(longlong param_1,byte param_2)

{
  return *(undefined4 *)(param_1 + 0x134 + (ulonglong)param_2 * 8);
}



// FUNCTION 1479ea4fc FUN_1479ea4fc body=13 status=ok
// SIG undefined FUN_1479ea4fc(void)

undefined4 FUN_1479ea4fc(longlong param_1,byte param_2)

{
  return *(undefined4 *)(param_1 + 0x138 + (ulonglong)param_2 * 8);
}



// FUNCTION 1479ea50e FUN_1479ea50e body=41 status=ok
// SIG undefined FUN_1479ea50e(void)

void FUN_1479ea50e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = FUN_14682fce0();
  *(bool *)param_3 = iVar1 == 1;
  return;
}



// FUNCTION 1479ea53c FUN_1479ea53c body=41 status=ok
// SIG undefined FUN_1479ea53c(void)

void FUN_1479ea53c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = FUN_14682fce0();
  *(bool *)param_3 = iVar1 == 2;
  return;
}



// FUNCTION 1479ea56a FUN_1479ea56a body=40 status=ok
// SIG undefined FUN_1479ea56a(void)

void FUN_1479ea56a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = FUN_14682fce0();
  *(bool *)param_3 = iVar1 != 0;
  return;
}



// FUNCTION 1479ea596 FUN_1479ea596 body=92 status=ok
// SIG undefined FUN_1479ea596(void)

void FUN_1479ea596(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a3ee64();
  local_28 = &LAB_1479ea6e6;
  local_20 = 0;
  FUN_1479ea5f4(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea5f4 FUN_1479ea5f4 body=241 status=ok
// SIG undefined FUN_1479ea5f4(void)

undefined8 FUN_1479ea5f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a861ae0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a861a70;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1479fa03c(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea708 FUN_1479ea708 body=33 status=ok
// SIG undefined FUN_1479ea708(void)

void FUN_1479ea708(undefined8 param_1)

{
  FUN_1448b6576();
  FUN_140457ffc(&DAT_14c867980,param_1);
  return;
}



// FUNCTION 1479ea72a FUN_1479ea72a body=156 status=ok
// SIG undefined FUN_1479ea72a(void)

void FUN_1479ea72a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ea7c8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea7c8 FUN_1479ea7c8 body=65 status=ok
// SIG undefined FUN_1479ea7c8(void)

void FUN_1479ea7c8(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x404) != param_2) ||
       (NAN(*(float *)(param_1 + 0x404)) || NAN(param_2))) {
      *(float *)(param_1 + 0x404) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ea80a FUN_1479ea80a body=156 status=ok
// SIG undefined FUN_1479ea80a(void)

void FUN_1479ea80a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ea8a8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea8a8 FUN_1479ea8a8 body=65 status=ok
// SIG undefined FUN_1479ea8a8(void)

void FUN_1479ea8a8(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x42c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x42c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x42c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ea8ea FUN_1479ea8ea body=156 status=ok
// SIG undefined FUN_1479ea8ea(void)

void FUN_1479ea8ea(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ea988(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ea988 FUN_1479ea988 body=65 status=ok
// SIG undefined FUN_1479ea988(void)

void FUN_1479ea988(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x434) != param_2) ||
       (NAN(*(float *)(param_1 + 0x434)) || NAN(param_2))) {
      *(float *)(param_1 + 0x434) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ea9ca FUN_1479ea9ca body=156 status=ok
// SIG undefined FUN_1479ea9ca(void)

void FUN_1479ea9ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eaa68(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eaa68 FUN_1479eaa68 body=65 status=ok
// SIG undefined FUN_1479eaa68(void)

void FUN_1479eaa68(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x438) != param_2) ||
       (NAN(*(float *)(param_1 + 0x438)) || NAN(param_2))) {
      *(float *)(param_1 + 0x438) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479eaaaa FUN_1479eaaaa body=156 status=ok
// SIG undefined FUN_1479eaaaa(void)

void FUN_1479eaaaa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eab48(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eab48 FUN_1479eab48 body=65 status=ok
// SIG undefined FUN_1479eab48(void)

void FUN_1479eab48(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x430) != param_2) ||
       (NAN(*(float *)(param_1 + 0x430)) || NAN(param_2))) {
      *(float *)(param_1 + 0x430) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479eab8e FUN_1479eab8e body=158 status=ok
// SIG undefined FUN_1479eab8e(void)

void FUN_1479eab8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eac2e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eac2e FUN_1479eac2e body=74 status=ok
// SIG undefined FUN_1479eac2e(void)

void FUN_1479eac2e(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x428) & 1) != param_2) {
      *(uint *)(param_1 + 0x428) = *(uint *)(param_1 + 0x428) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479eac84 FUN_1479eac84 body=75 status=ok
// SIG undefined FUN_1479eac84(void)

void FUN_1479eac84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14098222a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ead8e FUN_1479ead8e body=156 status=ok
// SIG undefined FUN_1479ead8e(void)

void FUN_1479ead8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eae2c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eae2c FUN_1479eae2c body=400 status=ok
// SIG undefined FUN_1479eae2c(void)

void FUN_1479eae2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_144729dda(param_1 + 0xb10);
  if (((cVar4 != '\0') && (*(longlong *)(param_1 + 0xb28) != 0)) && (0 < *(int *)(param_1 + 0xae8)))
  {
    FUN_147a0d636(param_2,&local_68);
    if (iStack_60 != 0) {
      lVar6 = FUN_144a7954a(param_1);
      lVar7 = FUN_144a7954a(param_2);
      if ((lVar6 == lVar7) && (iStack_60 == *(int *)(param_1 + 0xad8))) {
        uVar2 = *(undefined8 *)(param_1 + 0xad0);
        uVar3 = *(undefined8 *)(param_1 + 0xad8);
        *(ulonglong *)(param_1 + 0xad0) = CONCAT44(uStack_64,local_68);
        *(ulonglong *)(param_1 + 0xad8) = CONCAT44(uStack_5c,iStack_60);
        local_58._0_4_ = (undefined4)uVar2;
        local_68 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_64 = local_58._4_4_;
        uStack_50._0_4_ = (int)uVar3;
        iStack_60 = (int)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_5c = uStack_50._4_4_;
        local_58 = uVar2;
        uStack_50 = uVar3;
      }
      else {
        plVar8 = (longlong *)FUN_144a7954a(param_1);
        lVar6 = (**(code **)(*plVar8 + 0x310))(plVar8);
        FUN_144756208((longlong *)(param_1 + 0xad0),lVar6 + 0x30);
        plVar8 = (longlong *)FUN_144a7954a(param_2);
        lVar6 = (**(code **)(*plVar8 + 0x310))(plVar8);
        iVar1 = *(int *)(lVar6 + 0x28);
        if (0 < (longlong)iVar1) {
          lVar6 = 0;
          uVar11 = 0;
          do {
            FUN_14041807a(param_2,&local_58,uVar11 & 0xffffffff);
            iVar5 = FUN_144909502(param_1,local_58);
            if (iVar5 != -1) {
              puVar9 = (undefined8 *)(CONCAT44(uStack_64,local_68) + lVar6);
              puVar10 = (undefined8 *)((longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0xad0));
              for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
            }
            uVar11 = uVar11 + 1;
            lVar6 = lVar6 + 0x60;
          } while ((longlong)iVar1 != uVar11);
        }
      }
      *(undefined1 *)(param_1 + 0xc48) = 1;
    }
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eafbe FUN_1479eafbe body=271 status=ok
// SIG undefined FUN_1479eafbe(void)

void FUN_1479eafbe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_91 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,local_88,local_90,local_91);
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  *(undefined8 *)(param_3 + 4) = local_58;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb0ce FUN_1479eb0ce body=300 status=ok
// SIG undefined FUN_1479eb0ce(void)

void FUN_1479eb0ce(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,&local_88,local_b0,local_b1);
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  FUN_141706cfc(&local_d0);
  *(undefined8 *)(param_3 + 4) = local_c0;
  *param_3 = local_d0;
  param_3[1] = uStack_cc;
  param_3[2] = uStack_c8;
  param_3[3] = uStack_c4;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb1fc FUN_1479eb1fc body=271 status=ok
// SIG undefined FUN_1479eb1fc(void)

void FUN_1479eb1fc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [64];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_91 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,local_88,local_90,local_91);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  *(undefined8 *)(param_3 + 4) = local_38;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb30c FUN_1479eb30c body=289 status=ok
// SIG undefined FUN_1479eb30c(void)

void FUN_1479eb30c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,local_98,local_28,local_29);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb42e FUN_1479eb42e body=453 status=ok
// SIG undefined FUN_1479eb42e(void)

undefined8 *
FUN_1479eb42e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144a7954a();
  if ((((lVar2 == 0) || (cVar1 = FUN_144729dda(param_1 + 0xb10), cVar1 == '\0')) ||
      (*(longlong *)(param_1 + 0xb28) == 0)) || (*(int *)(param_1 + 0xae8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x668);
    if (lVar2 == 0) {
      local_48 = param_1;
      FUN_1479ec9ba(param_2,param_3,param_4,param_1 + 0xae0);
LAB_1479eb5c7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      pwVar6 = 
      L"Cannot return valid bone transform. Leader Pose Component is not of type USkeletalMeshComponent"
      ;
    }
    else {
      lVar3 = FUN_144a7a45a(lVar2);
      if (lVar3 != 0) {
        uVar4 = FUN_1478f84a6(lVar3);
        local_48 = lVar2;
        FUN_1479ec0e2(param_2,param_3,param_4,uVar4);
        goto LAB_1479eb5c7;
      }
      pwVar6 = L"Cannot return valid bone transform. Leader Pose Component has no anim instance";
    }
    FUN_140002266(&local_40,pwVar6);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar5,3,0);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0;
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479eb5fa FUN_1479eb5fa body=156 status=ok
// SIG undefined FUN_1479eb5fa(void)

void FUN_1479eb5fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb698(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb698 FUN_1479eb698 body=282 status=ok
// SIG undefined FUN_1479eb698(void)

void FUN_1479eb698(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  lVar2 = FUN_144a7954a();
  if (lVar2 != 0) {
    iVar1 = FUN_144909502(param_1,param_2);
    if (iVar1 != -1) {
      plVar3 = (longlong *)FUN_144a7954a(param_1);
      lVar2 = (**(code **)(*plVar3 + 0x310))(plVar3);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 0x60);
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0xad0));
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    FUN_1400021e4(&local_28,&local_48);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_38,L"Invalid Bone Name \'%s\'",puVar5);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar5 = local_38;
    if (local_30 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar5,3,0);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb7b4 FUN_1479eb7b4 body=392 status=ok
// SIG undefined FUN_1479eb7b4(void)

void FUN_1479eb7b4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [47];
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  uVar2 = local_c0;
  uVar1 = local_d9;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,local_b8,local_c0,local_d9);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = 0;
  FUN_1479ebdec(param_1,uVar2,local_b8,uVar1);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eb93e FUN_1479eb93e body=408 status=ok
// SIG undefined FUN_1479eb93e(void)

void FUN_1479eb93e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  uVar2 = local_c0;
  uVar1 = local_d9;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_d8;
  uStack_f4 = uStack_d4;
  uStack_f0 = uStack_d0;
  uStack_ec = uStack_cc;
  local_e8 = local_c8;
  FUN_1479eb42e(param_1,&local_b8,local_c0,local_d9);
  FUN_144a7484c(&local_f8,&local_58);
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  FUN_1479ebdec(param_1,uVar2,&local_b8,uVar1);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ebad8 FUN_1479ebad8 body=392 status=ok
// SIG undefined FUN_1479ebad8(void)

void FUN_1479ebad8(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [47];
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  uVar2 = local_c0;
  uVar1 = local_d9;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479eb42e(param_1,local_b8,local_c0,local_d9);
  local_78 = local_d8;
  uStack_70 = uStack_d0;
  local_68 = local_c8;
  uStack_60 = 0;
  FUN_1479ebdec(param_1,uVar2,local_b8,uVar1);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ebc62 FUN_1479ebc62 body=393 status=ok
// SIG undefined FUN_1479ebc62(void)

void FUN_1479ebc62(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88 = 0;
  uStack_80 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_89 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar2 = &local_88;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ebdec(param_1,local_28,puVar2,local_89);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ebdec FUN_1479ebdec body=383 status=ok
// SIG undefined FUN_1479ebdec(void)

void FUN_1479ebdec(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [96];
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_144a7954a();
  if (lVar5 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0xb10);
    if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0xb28) != 0)) &&
       (0 < *(int *)(param_1 + 0xae8))) {
      uVar3 = FUN_144909502(param_1,param_2);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0xad8))) {
        plVar1 = (longlong *)(param_1 + 0xad0);
        lVar7 = (ulonglong)uVar3 * 0x60;
        puVar6 = (undefined8 *)(*plVar1 + lVar7);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *param_3;
          param_3 = param_3 + 1;
          puVar6 = puVar6 + 1;
        }
        if (param_4 == 0) {
          FUN_1447d58ca(*(longlong *)(param_1 + 0xad0) + lVar7,param_1 + 0x240);
        }
        iVar4 = FUN_1434175de(param_1 + 0xae0,uVar3);
        if (-1 < iVar4) {
          local_78[2] = 0;
          local_78[3] = 0;
          local_78[0] = 0;
          local_78[1] = 0;
          local_78[4] = 0;
          FUN_1478d3e2c(local_78,param_1 + 0xae0,plVar1);
          lVar5 = *plVar1;
          FUN_1478d2a7e(local_78,local_d8,iVar4);
          FUN_1447d58ca(lVar7 + lVar5,local_d8);
          if (local_78[3] != 0) {
            FUN_1400020a8();
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
        *(undefined1 *)(param_1 + 0xc48) = 1;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ebf70 FUN_1479ebf70 body=369 status=ok
// SIG undefined FUN_1479ebf70(void)

undefined4 FUN_1479ebf70(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_143490bd8();
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x15b) = 0;
    if (*(int *)((longlong)param_1 + 0xadc) != 0) {
      FUN_1401a2688(param_1 + 0x15a,0);
    }
  }
  else {
    lVar4 = param_1[0x15b];
    plVar2 = (longlong *)FUN_144a7954a(param_1);
    lVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
    if ((int)lVar4 != *(int *)(lVar3 + 0x28)) {
      plVar2 = (longlong *)FUN_144a7954a(param_1);
      lVar4 = (**(code **)(*plVar2 + 0x310))(plVar2);
      FUN_144756208(param_1 + 0x15a,lVar4 + 0x30);
      local_38 = 0;
      uStack_30 = (ulonglong)*(uint *)(param_1 + 0x15b);
      if ((*(uint *)(param_1 + 0x15b) != 0) && (FUN_14488eebe(&local_38,0), 0 < (int)param_1[0x15b])
         ) {
        lVar4 = 0;
        do {
          *(short *)(local_38 + lVar4 * 2) = (short)lVar4;
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)param_1[0x15b]);
      }
      uVar5 = FUN_144a7954a();
      local_48 = 0;
      local_40 = 1;
      local_3c = 0;
      local_58 = local_38;
      local_50 = (undefined4)uStack_30;
      local_68 = 0;
      FUN_1406cb364(param_1 + 0x15c,&local_58,&local_48,uVar5);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_143481592(param_1);
    (**(code **)(*param_1 + 0xb38))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1479ec0e2 FUN_1479ec0e2 body=2263 status=ok
// SIG undefined FUN_1479ec0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1479ec0e2(double *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                      longlong param_5)

{
  double dVar1;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined2 **ppuVar24;
  undefined2 *puVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined2 *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined2 *local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_290 = param_2;
  iVar21 = FUN_144909502(param_5);
  if (iVar21 == -1) {
    FUN_1400021e4(&local_290,local_1e8);
    if (local_1e8._8_4_ == 0) {
      puVar25 = &DAT_149dfb77a;
    }
    else {
      puVar25 = (undefined2 *)local_1e8._0_8_;
    }
    FUN_140002266(&local_168,L"Invalid Bone Name \'%s\'",puVar25);
    if (local_1e8._0_8_ != 0) {
      FUN_1400020a8();
    }
    puVar25 = local_168;
    if (local_160._0_4_ == 0) {
      puVar25 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar25,3,0);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    param_1[9] = 1.0;
    param_1[10] = 1.0;
    param_1[0xb] = 0.0;
    puVar25 = local_168;
  }
  else {
    local_2a8 = 0;
    lStack_2a0 = 0;
    local_2b8 = (undefined2 *)0x0;
    uStack_2b0 = 0;
    local_298 = 0;
    FUN_147a0d636(param_5,&local_168);
    FUN_1478d3e2c(&local_2b8,param_4,&local_168);
    if (local_168 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar24 = &local_2b8;
    if (param_3 == 1) {
      FUN_1478d2a7e(ppuVar24,param_1,iVar21);
    }
    else {
      uVar22 = FUN_1478d2a7e(ppuVar24,&local_318,iVar21);
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      auVar40 = _DAT_149934d80;
      auVar29 = *(undefined1 (*) [16])(param_5 + 0x280);
      dVar5 = auVar29._0_8_;
      dVar9 = auVar29._8_8_;
      auVar4 = *(undefined1 (*) [16])(param_5 + 0x290);
      dVar6 = auVar4._0_8_;
      dVar7 = local_2d8._0_8_;
      dVar10 = local_2d8._8_8_;
      dVar8 = local_2c8._0_8_;
      auVar29 = minpd(local_2d8,auVar29);
      auVar33 = minpd(local_2c8,auVar4);
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar21 = movmskpd(uVar22,auVar30);
      auVar29._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      uVar23 = movmskpd((int)ppuVar24,auVar29);
      if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
        dVar17 = *(double *)(param_5 + 0x240);
        dVar18 = *(double *)(param_5 + 0x248);
        dVar19 = *(double *)(param_5 + 0x250);
        dVar20 = *(double *)(param_5 + 600);
        dVar28 = *(double *)(param_5 + 600);
        dVar34 = *(double *)(param_5 + 600);
        dVar37 = *(double *)(param_5 + 0x240);
        dVar39 = *(double *)(param_5 + 0x240);
        dVar1 = *(double *)(param_5 + 0x248);
        dVar2 = *(double *)(param_5 + 0x248);
        dVar3 = *(double *)(param_5 + 0x250);
        dVar32 = *(double *)(param_5 + 0x250);
        local_2f8 = local_2f8 * dVar5;
        dStack_2f0 = dStack_2f0 * dVar9;
        local_2e8 = local_2e8 * dVar6;
        dStack_2e0 = dStack_2e0 * auVar4._8_8_;
        dVar11 = dStack_2f0 * dVar17 - dVar18 * local_2f8;
        dVar12 = local_2e8 * dVar18 - dVar19 * dStack_2f0;
        dVar15 = local_2f8 * dVar19 - dVar17 * local_2e8;
        dVar16 = dStack_2e0 * dVar20 - dVar20 * dStack_2e0;
        dVar12 = dVar12 + dVar12;
        dVar15 = dVar15 + dVar15;
        dVar11 = dVar11 + dVar11;
        dVar16 = dVar16 + dVar16;
        dVar35 = *(double *)(param_5 + 0x260);
        dVar13 = (dVar12 * dVar19 - dVar11 * dVar17) + dVar34 * dVar15 + dStack_2f0 +
                 *(double *)(param_5 + 0x268);
        dVar36 = *(double *)(param_5 + 0x270);
        dVar38 = *(double *)(param_5 + 0x278);
        *param_1 = dStack_310 * dVar3 * -1.0 +
                   local_308 * dVar1 + dStack_300 * dVar37 * 1.0 + local_318 * dVar28;
        param_1[1] = local_318 * dVar32 * 1.0 +
                     dStack_300 * dVar2 + local_308 * dVar39 * -1.0 + dStack_310 * dVar34;
        param_1[2] = dStack_300 * dVar3 * 1.0 +
                     ((dVar37 * dStack_310 * 1.0 + local_308 * dVar28) - local_318 * dVar1);
        param_1[3] = local_308 * dVar32 * -1.0 +
                     ((dVar39 * local_318 * -1.0 + dStack_300 * dVar34) - dStack_310 * dVar2);
        auVar40._8_4_ = SUB84(dVar13,0);
        auVar40._0_8_ = (dVar11 * dVar18 - dVar19 * dVar15) + dVar28 * dVar12 + local_2f8 + dVar35;
        auVar40._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 4) = auVar40;
        param_1[6] = (dVar15 * dVar17 - dVar18 * dVar12) + dVar28 * dVar11 + local_2e8 + dVar36;
        param_1[7] = (dVar16 * dVar20 - dVar16 * dVar20) + dVar34 * dVar16 + dStack_2e0 + dVar38;
      }
      else {
        dVar1 = *(double *)(param_5 + 0x240);
        dVar2 = *(double *)(param_5 + 0x248);
        dVar3 = *(double *)(param_5 + 0x250);
        dVar32 = dVar2 + dVar2;
        dVar35 = dVar3 + dVar3;
        dVar34 = dVar1 * (dVar1 + dVar1);
        local_198 = (1.0 - (dVar34 + dVar2 * dVar32)) * dVar6;
        dVar39 = *(double *)(param_5 + 0x240) * dVar35;
        dVar28 = *(double *)(param_5 + 600);
        dVar36 = dVar35 * dVar28;
        dVar38 = (dVar1 + dVar1) * *(double *)(param_5 + 600);
        dVar28 = dVar32 * dVar28;
        local_1a8 = (dVar28 + dVar39) * dVar6;
        dVar34 = (DAT_149934d80._8_8_ - (dVar3 * dVar35 + dVar34)) * dVar9;
        dVar37 = (dVar32 * dVar1 + dVar36) * dVar5;
        local_1b8 = (dVar35 * dVar2 + dVar38) * dVar9;
        dStack_1a0 = (dVar35 * dVar2 - dVar38) * dVar6;
        local_1d8 = (dVar39 - dVar28) * dVar5;
        local_1e8._8_4_ = SUB84(dVar37,0);
        local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar3 * dVar35 + dVar2 * dVar32)) * dVar5;
        local_1e8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar34,0);
        local_1c8._0_8_ = (dVar32 * dVar1 - dVar36) * dVar9;
        local_1c8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = *(undefined8 *)(param_5 + 0x260);
        uStack_180 = *(undefined8 *)(param_5 + 0x268);
        local_178 = *(undefined8 *)(param_5 + 0x270);
        uStack_170 = 0x3ff0000000000000;
        dVar34 = dStack_310 + dStack_310;
        dVar37 = local_308 + local_308;
        dVar28 = local_318 * (local_318 + local_318);
        local_218 = (1.0 - (dVar28 + dStack_310 * dVar34)) * dVar8;
        dVar39 = (local_318 + local_318) * dStack_300;
        local_228 = (dVar34 * dStack_300 + local_318 * dVar37) * dVar8;
        dStack_220 = (dVar37 * dStack_310 - dVar39) * dVar8;
        local_268 = ((double)DAT_149934d80 - (local_308 * dVar37 + dStack_310 * dVar34)) * dVar7;
        dVar28 = (DAT_149934d80._8_8_ - (local_308 * dVar37 + dVar28)) * dVar10;
        dStack_260 = (dVar34 * local_318 + dVar37 * dStack_300) * dVar7;
        local_238 = (dVar37 * dStack_310 + dVar39) * dVar10;
        local_258 = (local_318 * dVar37 - dVar34 * dStack_300) * dVar7;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar28,0);
        local_248._0_8_ = (dVar34 * local_318 - dVar37 * dStack_300) * dVar10;
        local_248._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = local_2f8;
        dStack_200 = dStack_2f0;
        local_1f8 = local_2e8;
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar33._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
        auVar33._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
        auVar29 = blendvpd(_DAT_149936790,auVar40,auVar33);
        uVar26 = -(ulonglong)(0.0 <= dVar6 * dVar8);
        dVar28 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
        dVar34 = auVar29._0_8_;
        local_158 = local_158 * dVar34;
        local_160 = local_160 * dVar34;
        local_168 = (undefined2 *)((double)local_168 * dVar34);
        dVar34 = auVar29._8_8_;
        local_138 = local_138 * dVar34;
        local_140 = local_140 * dVar34;
        local_148 = dVar34 * local_148;
        local_118 = local_118 * dVar28;
        local_120 = local_120 * dVar28;
        local_128 = dVar28 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar28 = local_278 * local_278 + local_288 * local_288;
        dVar34 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar31._0_8_ = dVar28 + dVar34;
        auVar31._8_8_ = dVar28 + dVar34;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
        auVar29 = sqrtpd(auVar31,auVar31);
        auVar40 = divpd(auVar40,auVar29);
        auVar41._0_8_ = auVar40._0_8_ * local_278;
        auVar41._8_8_ = auVar40._8_8_ * dStack_270;
        auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar27);
        *param_1 = (double)((ulonglong)(local_288 * auVar40._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
        param_1[1] = (double)((ulonglong)(dStack_280 * auVar40._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
        *(undefined1 (*) [16])(param_1 + 2) = auVar29;
        param_1[4] = local_108;
        param_1[5] = dStack_100;
        param_1[6] = local_f8;
        param_1[7] = 0.0;
      }
      dVar28 = auVar4._8_8_ * local_2c8._8_8_;
      auVar14._8_4_ = SUB84(dVar9 * dVar10,0);
      auVar14._0_8_ = dVar5 * dVar7;
      auVar14._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
      *(undefined1 (*) [16])(param_1 + 8) = auVar14;
      auVar4._8_4_ = SUB84(dVar28,0);
      auVar4._0_8_ = dVar6 * dVar8;
      auVar4._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 10) = auVar4;
    }
    puVar25 = local_2b8;
    if (lStack_2a0 != 0) {
      FUN_1400020a8();
      puVar25 = local_2b8;
    }
  }
  if (puVar25 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479ec9ba FUN_1479ec9ba body=2226 status=ok
// SIG undefined FUN_1479ec9ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1479ec9ba(double *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                      longlong param_5)

{
  double dVar1;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined2 **ppuVar21;
  undefined2 *puVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auStack_328 [32];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined2 *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong lStack_290;
  undefined8 local_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined2 *local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_280 = param_2;
  iVar18 = FUN_144909502(param_5);
  if (iVar18 == -1) {
    FUN_1400021e4(&local_280,local_1d8);
    if (local_1d8._8_4_ == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)local_1d8._0_8_;
    }
    FUN_140002266(&local_158,L"Invalid Bone Name \'%s\'",puVar22);
    if (local_1d8._0_8_ != 0) {
      FUN_1400020a8();
    }
    puVar22 = local_158;
    if (local_150._0_4_ == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar22,3,0);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    param_1[9] = 1.0;
    param_1[10] = 1.0;
    param_1[0xb] = 0.0;
    puVar22 = local_158;
  }
  else {
    local_298 = 0;
    lStack_290 = 0;
    local_2a8 = (undefined2 *)0x0;
    uStack_2a0 = 0;
    local_288 = 0;
    FUN_1478d3e2c(&local_2a8,param_4,param_5 + 0xad0);
    ppuVar21 = &local_2a8;
    if (param_3 == 1) {
      FUN_1478d2a7e(ppuVar21,param_1,iVar18);
    }
    else {
      uVar19 = FUN_1478d2a7e(ppuVar21,&local_308,iVar18);
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      auVar38 = _DAT_149934d80;
      auVar28 = *(undefined1 (*) [16])(param_5 + 0x280);
      dVar6 = auVar28._0_8_;
      dVar10 = auVar28._8_8_;
      auVar4 = *(undefined1 (*) [16])(param_5 + 0x290);
      dVar7 = auVar4._0_8_;
      dVar8 = local_2c8._0_8_;
      dVar11 = local_2c8._8_8_;
      dVar9 = local_2b8._0_8_;
      auVar28 = minpd(local_2c8,auVar28);
      auVar34 = minpd(local_2b8,auVar4);
      auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
      iVar18 = movmskpd(uVar19,auVar29);
      auVar28._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      uVar20 = movmskpd((int)ppuVar21,auVar28);
      if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
        dVar14 = *(double *)(param_5 + 0x240);
        dVar15 = *(double *)(param_5 + 0x248);
        dVar16 = *(double *)(param_5 + 0x250);
        dVar17 = *(double *)(param_5 + 600);
        dVar27 = *(double *)(param_5 + 600);
        dVar35 = *(double *)(param_5 + 600);
        dVar33 = *(double *)(param_5 + 0x240);
        dVar36 = *(double *)(param_5 + 0x240);
        dVar1 = *(double *)(param_5 + 0x248);
        dVar2 = *(double *)(param_5 + 0x248);
        dVar25 = *(double *)(param_5 + 0x250);
        dVar3 = *(double *)(param_5 + 0x250);
        local_2e8 = local_2e8 * dVar6;
        dStack_2e0 = dStack_2e0 * dVar10;
        local_2d8 = local_2d8 * dVar7;
        dStack_2d0 = dStack_2d0 * auVar4._8_8_;
        dVar37 = dStack_2e0 * dVar14 - dVar15 * local_2e8;
        dVar39 = local_2d8 * dVar15 - dVar16 * dStack_2e0;
        dVar40 = local_2e8 * dVar16 - dVar14 * local_2d8;
        dVar13 = dStack_2d0 * dVar17 - dVar17 * dStack_2d0;
        dVar39 = dVar39 + dVar39;
        dVar40 = dVar40 + dVar40;
        dVar37 = dVar37 + dVar37;
        dVar13 = dVar13 + dVar13;
        dVar30 = *(double *)(param_5 + 0x260);
        dVar32 = *(double *)(param_5 + 0x268);
        dVar31 = *(double *)(param_5 + 0x270);
        dVar5 = *(double *)(param_5 + 0x278);
        *param_1 = dStack_300 * dVar25 * -1.0 +
                   local_2f8 * dVar1 + dStack_2f0 * dVar33 * 1.0 + local_308 * dVar27;
        param_1[1] = local_308 * dVar3 * 1.0 +
                     dStack_2f0 * dVar2 + local_2f8 * dVar36 * -1.0 + dStack_300 * dVar35;
        param_1[2] = dStack_2f0 * dVar25 * 1.0 +
                     ((dVar33 * dStack_300 * 1.0 + local_2f8 * dVar27) - local_308 * dVar1);
        param_1[3] = local_2f8 * dVar3 * -1.0 +
                     ((dVar36 * local_308 * -1.0 + dStack_2f0 * dVar35) - dStack_300 * dVar2);
        param_1[4] = (dVar37 * dVar15 - dVar16 * dVar40) + dVar27 * dVar39 + local_2e8 + dVar30;
        param_1[5] = (dVar39 * dVar16 - dVar37 * dVar14) + dVar35 * dVar40 + dStack_2e0 + dVar32;
        param_1[6] = (dVar40 * dVar14 - dVar15 * dVar39) + dVar27 * dVar37 + local_2d8 + dVar31;
        param_1[7] = (dVar13 * dVar17 - dVar13 * dVar17) + dVar35 * dVar13 + dStack_2d0 + dVar5;
      }
      else {
        dVar2 = *(double *)(param_5 + 0x240);
        dVar1 = *(double *)(param_5 + 0x248);
        dVar3 = *(double *)(param_5 + 0x250);
        dVar30 = dVar1 + dVar1;
        dVar31 = dVar3 + dVar3;
        dVar27 = dVar2 * (dVar2 + dVar2);
        dVar33 = (DAT_149934d80._8_8_ - (dVar3 * dVar31 + dVar27)) * dVar10;
        local_188 = (1.0 - (dVar27 + dVar1 * dVar30)) * dVar7;
        dVar36 = *(double *)(param_5 + 0x240) * dVar31;
        dVar27 = *(double *)(param_5 + 600);
        dVar32 = dVar31 * dVar27;
        dVar35 = (dVar2 + dVar2) * *(double *)(param_5 + 600);
        dVar27 = dVar30 * dVar27;
        dVar25 = (dVar30 * dVar2 + dVar32) * dVar6;
        local_1a8 = (dVar31 * dVar1 + dVar35) * dVar10;
        dVar35 = (dVar31 * dVar1 - dVar35) * dVar7;
        local_1c8 = (dVar36 - dVar27) * dVar6;
        local_1d8._8_4_ = SUB84(dVar25,0);
        local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar3 * dVar31 + dVar1 * dVar30)) * dVar6;
        local_1d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar33,0);
        local_1b8._0_8_ = (dVar30 * dVar2 - dVar32) * dVar10;
        local_1b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        uStack_1a0 = 0;
        local_198._8_4_ = SUB84(dVar35,0);
        local_198._0_8_ = (dVar27 + dVar36) * dVar7;
        local_198._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        uStack_180 = 0;
        local_178 = *(undefined8 *)(param_5 + 0x260);
        uStack_170 = *(undefined8 *)(param_5 + 0x268);
        local_168 = *(undefined8 *)(param_5 + 0x270);
        uStack_160 = 0x3ff0000000000000;
        dVar35 = dStack_300 + dStack_300;
        dVar33 = local_2f8 + local_2f8;
        dVar27 = local_308 * (local_308 + local_308);
        local_208 = (1.0 - (dVar27 + dStack_300 * dVar35)) * dVar9;
        dVar36 = (local_308 + local_308) * dStack_2f0;
        local_218 = (dVar35 * dStack_2f0 + local_308 * dVar33) * dVar9;
        dStack_210 = (dVar33 * dStack_300 - dVar36) * dVar9;
        local_258 = ((double)DAT_149934d80 - (local_2f8 * dVar33 + dStack_300 * dVar35)) * dVar8;
        dVar27 = (DAT_149934d80._8_8_ - (local_2f8 * dVar33 + dVar27)) * dVar11;
        dStack_250 = (dVar35 * local_308 + dVar33 * dStack_2f0) * dVar8;
        local_228 = (dVar33 * dStack_300 + dVar36) * dVar11;
        local_248 = (local_308 * dVar33 - dVar35 * dStack_2f0) * dVar8;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar27,0);
        local_238._0_8_ = (dVar35 * local_308 - dVar33 * dStack_2f0) * dVar11;
        local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = local_2e8;
        dStack_1f0 = dStack_2e0;
        local_1e8 = local_2d8;
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
        auVar34._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
        auVar28 = blendvpd(_DAT_149936790,auVar38,auVar34);
        uVar23 = -(ulonglong)(0.0 <= dVar7 * dVar9);
        dVar27 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
        dVar35 = auVar28._0_8_;
        local_148 = local_148 * dVar35;
        local_150 = local_150 * dVar35;
        local_158 = (undefined2 *)((double)local_158 * dVar35);
        dVar35 = auVar28._8_8_;
        local_128 = local_128 * dVar35;
        local_130 = local_130 * dVar35;
        local_138 = dVar35 * local_138;
        local_108 = local_108 * dVar27;
        local_110 = local_110 * dVar27;
        local_118 = dVar27 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar27 = local_268 * local_268 + local_278 * local_278;
        dVar35 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar26._0_8_ = dVar27 + dVar35;
        auVar26._8_8_ = dVar27 + dVar35;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar28 = sqrtpd(auVar26,auVar26);
        auVar28 = divpd(auVar38,auVar28);
        auVar38._0_8_ = auVar28._0_8_ * local_268;
        auVar38._8_8_ = auVar28._8_8_ * dStack_260;
        auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar24);
        *param_1 = (double)((ulonglong)(local_278 * auVar28._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        param_1[1] = (double)((ulonglong)(dStack_270 * auVar28._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        *(undefined1 (*) [16])(param_1 + 2) = auVar38;
        param_1[4] = local_f8;
        param_1[5] = dStack_f0;
        param_1[6] = local_e8;
        param_1[7] = 0.0;
      }
      dVar27 = auVar4._8_8_ * local_2b8._8_8_;
      auVar12._8_4_ = SUB84(dVar10 * dVar11,0);
      auVar12._0_8_ = dVar6 * dVar8;
      auVar12._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
      *(undefined1 (*) [16])(param_1 + 8) = auVar12;
      auVar4._8_4_ = SUB84(dVar27,0);
      auVar4._0_8_ = dVar7 * dVar9;
      auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 10) = auVar4;
    }
    puVar22 = local_2a8;
    if (lStack_290 != 0) {
      FUN_1400020a8();
      puVar22 = local_2a8;
    }
  }
  if (puVar22 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479ed26e FUN_1479ed26e body=33 status=ok
// SIG undefined FUN_1479ed26e(void)

undefined1 FUN_1479ed26e(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_147a0bf44();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0xc48);
  }
  return uVar2;
}



// FUNCTION 1479ed290 FUN_1479ed290 body=326 status=ok
// SIG undefined FUN_1479ed290(void)

void FUN_1479ed290(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  lVar2 = local_58;
  uVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_58);
  }
  uVar3 = uStack_50;
  local_40 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_38 = uVar3;
  FUN_145bd965a(param_1 + 0x2b0,&local_40,uVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ed3ea FUN_1479ed3ea body=75 status=ok
// SIG undefined FUN_1479ed3ea(void)

void FUN_1479ed3ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_14010df0a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ed436 FUN_1479ed436 body=658 status=ok
// SIG undefined FUN_1479ed436(void)

ulonglong FUN_1479ed436(longlong param_1,double *param_2,float param_3,float *param_4)

{
  int *piVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double _X;
  double dVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  float local_7c;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = *(longlong **)(param_1 + -0x188);
  local_60 = uVar5;
  if (plVar3 != (longlong *)0x0) {
    uVar5 = FUN_140e2e6d8();
    piVar1 = (int *)(uVar5 + 0x38);
    if ((*piVar1 <= *(int *)(plVar3[2] + 0x38)) &&
       (uVar5 = uVar5 + 0x30,
       *(ulonglong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*piVar1 * 8) == uVar5)) {
      local_7c = -1.0;
      cVar4 = (**(code **)(*plVar3 + 0x7c0))(plVar3,param_2,&local_7c,local_78);
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x528))(plVar3,&local_b8,plVar3 + 0x48);
        lVar6 = FUN_140f974a4();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          dVar8 = local_b0 - local_98;
          dVar9 = local_b8 - local_a0;
          dVar2 = *param_2;
          if (dVar9 <= dVar2) {
            dVar9 = local_b8 + local_a0;
            _X = 0.0;
            if (dVar9 < dVar2) goto LAB_1479ed5c0;
          }
          else {
LAB_1479ed5c0:
            _X = (dVar2 - dVar9) * (dVar2 - dVar9);
          }
          dVar9 = local_a8 - local_90;
          dVar2 = param_2[1];
          if ((dVar2 < dVar8) || (dVar8 = local_b0 + local_98, dVar8 < dVar2)) {
            _X = _X + (dVar2 - dVar8) * (dVar2 - dVar8);
          }
          dVar2 = param_2[2];
          if ((dVar2 < dVar9) || (dVar9 = local_a8 + local_90, dVar9 < dVar2)) {
            _X = _X + (dVar2 - dVar9) * (dVar2 - dVar9);
          }
          if (_X < 0.0) {
            dVar2 = sqrt(_X);
          }
          else {
            dVar2 = SQRT(_X);
          }
        }
        else {
          local_88 = SQRT((local_a8 - param_2[2]) * (local_a8 - param_2[2]) +
                          (local_b8 - *param_2) * (local_b8 - *param_2) +
                          (local_b0 - param_2[1]) * (local_b0 - param_2[1])) - local_88;
          dVar2 = 0.0;
          if (0.0 <= local_88) {
            dVar2 = local_88;
          }
        }
        fVar7 = (float)dVar2;
      }
      else if (local_7c < 0.0) {
        fVar7 = sqrtf(local_7c);
      }
      else {
        fVar7 = SQRT(local_7c);
      }
      if (param_4 != (float *)0x0) {
        *param_4 = fVar7;
      }
      uVar5 = (ulonglong)-(uint)(0.0 <= fVar7 && fVar7 <= param_3);
      goto LAB_1479ed4b8;
    }
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
LAB_1479ed4b8:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1479ed6d8 FUN_1479ed6d8 body=7 status=ok
// SIG undefined FUN_1479ed6d8(void)

void FUN_1479ed6d8(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2cf) = param_2;
  return;
}



// FUNCTION 1479ed6e8 FUN_1479ed6e8 body=15 status=ok
// SIG undefined FUN_1479ed6e8(void)

void FUN_1479ed6e8(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  }
  return;
}



// FUNCTION 1479ed704 FUN_1479ed704 body=200 status=ok
// SIG undefined FUN_1479ed704(void)

undefined8 * FUN_1479ed704(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_147a04442();
  *param_1 = &PTR_FUN_14a71de20;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x338);
  lVar1 = *(longlong *)(param_2 + 0x5b8);
  param_1[0x39] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  if ((*(byte *)(param_2 + 0x1f8) & 1) == 0) {
    FUN_1447a91cc(param_2,0,0);
  }
  puVar2 = (undefined8 *)(param_2 + 0x240);
  puVar3 = param_1 + 0x2c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 1479ed7cc FUN_1479ed7cc body=74 status=ok
// SIG undefined FUN_1479ed7cc(void)

void FUN_1479ed7cc(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x5b8) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x5b8) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479ed816 FUN_1479ed816 body=47 status=ok
// SIG undefined FUN_1479ed816(void)

bool FUN_1479ed816(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_147a04652();
  bVar2 = true;
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x1c8) == 0)) {
    bVar2 = *(int *)(param_1 + 0x1c0) != -1;
  }
  return bVar2;
}



// FUNCTION 1479ed846 FUN_1479ed846 body=93 status=ok
// SIG undefined FUN_1479ed846(void)

undefined8 * FUN_1479ed846(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_1479fa504(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ed8a4 FUN_1479ed8a4 body=40 status=ok
// SIG undefined FUN_1479ed8a4(void)

void FUN_1479ed8a4(longlong param_1)

{
  FUN_140156588(param_1 + 0x56e,param_1 + -0x30,0);
  FUN_1479b7dec(param_1);
  return;
}



// FUNCTION 1479ed8cc FUN_1479ed8cc body=208 status=ok
// SIG undefined FUN_1479ed8cc(void)

void FUN_1479ed8cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  undefined1 *local_28;
  uint local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  uStack_1c = 8;
  FUN_1479ed99e(local_68,param_1 + 0x138);
  while (0 < (int)local_20) {
    puVar3 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar3 = local_68;
    }
    lVar1 = *(longlong *)(puVar3 + (ulonglong)local_20 * 8 + -8);
    local_20 = local_20 - 1;
    if (lVar1 != 0) {
      lVar2 = FUN_144a3a302();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1448215fa(lVar1);
      }
      FUN_1479ed99e(local_68,lVar1 + 0x138);
    }
  }
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ed99e FUN_1479ed99e body=102 status=ok
// SIG undefined FUN_1479ed99e(void)

void FUN_1479ed99e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
      FUN_1479fa56a(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    FUN_144738dca(lVar3 + (longlong)iVar2 * 8,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1479eda04 FUN_1479eda04 body=45 status=ok
// SIG undefined FUN_1479eda04(void)

void FUN_1479eda04(longlong param_1)

{
  FUN_1479b7e42();
  FUN_140156588(param_1 + 0x56e,param_1 + -0x30,1);
  return;
}



// FUNCTION 1479eda32 FUN_1479eda32 body=107 status=ok
// SIG undefined FUN_1479eda32(void)

void FUN_1479eda32(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x7a0))(param_1 + -0x30);
  if ((local_18 != 0) && ((*(byte *)(local_18 + 0xb9) & 1) == 0)) {
    FUN_1479fa666(param_2,local_1c,&local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eda9e FUN_1479eda9e body=720 status=ok
// SIG undefined FUN_1479eda9e(void)

void FUN_1479eda9e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x2dd) < '\0') {
    lVar8 = param_3[1];
    if ((((lVar8 == 0) || (lVar6 = FUN_1411311bc(), lVar6 == 0)) ||
        (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (lVar4 = param_3[1],
       lVar4 == 0 ||
       *(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)) {
      plVar7 = (longlong *)FUN_1411311bc();
      lVar8 = plVar7[0x22];
    }
    else {
      lVar8 = FUN_1411311bc();
      if (((lVar8 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_3[1];
      }
      lVar8 = plVar7[0x22];
    }
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar8 = plVar7[0x22];
    }
    cVar5 = (**(code **)(*param_3 + 0x10))(param_3,1);
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*param_3 + 0x10))(param_3,2);
      if ((cVar5 != '\0') && (0.0 < *(float *)(lVar8 + 0x2c))) {
        local_68 = param_3[7];
        local_78 = (undefined4)param_3[5];
        uStack_74 = *(undefined4 *)((longlong)param_3 + 0x2c);
        uStack_70 = (undefined4)param_3[6];
        uStack_6c = *(undefined4 *)((longlong)param_3 + 0x34);
        local_80 = (undefined1)((*(uint *)(lVar8 + 0x28) & 4) >> 2);
        local_88 = 1;
        (**(code **)(*param_1 + 0x6c8))(param_1,&local_78,*(undefined4 *)((longlong)param_3 + 0x1c))
        ;
      }
    }
    else if ((0.0 < *(float *)(lVar8 + 0x2c)) &&
            ((((9.999999747378752e-05 < ABS((double)param_3[3]) ||
               (9.999999747378752e-05 < ABS((double)param_3[4]))) ||
              (9.999999747378752e-05 < ABS((double)param_3[5]))) &&
             (cVar5 = (**(code **)(*param_1 + 0x480))(param_1,param_3[0x24]), cVar5 != '\0')))) {
      dVar1 = (double)param_3[3];
      dVar2 = (double)param_3[4];
      dVar3 = (double)param_3[5];
      dVar9 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
      if (((dVar9 != 1.0) || (local_58 = dVar2, local_50 = dVar3, local_60 = dVar1, NAN(dVar9))) &&
         (local_58 = DAT_14c8464e8, local_50 = DAT_14c8464f0, local_60 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        local_58 = dVar2 * dVar9;
        local_50 = dVar3 * dVar9;
        local_60 = dVar1 * dVar9;
      }
      dVar1 = (double)*(float *)(lVar8 + 0x2c);
      local_50 = local_50 * dVar1;
      local_58 = local_58 * dVar1;
      local_60 = local_60 * dVar1;
      local_38 = param_3[0xd];
      local_48 = (undefined4)param_3[0xb];
      uStack_44 = *(undefined4 *)((longlong)param_3 + 0x5c);
      uStack_40 = (undefined4)param_3[0xc];
      uStack_3c = *(undefined4 *)((longlong)param_3 + 100);
      (**(code **)(*param_1 + 0x6b8))(param_1,&local_60,&local_48,param_3[0x24]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479edd7c FUN_1479edd7c body=36 status=ok
// SIG undefined FUN_1479edd7c(void)

void FUN_1479edd7c(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d6) & 4) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfb | param_2 << 2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edda0 FUN_1479edda0 body=36 status=ok
// SIG undefined FUN_1479edda0(void)

void FUN_1479edda0(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dc) & 0x40) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) & 0xbf | param_2 << 6;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479eddc4 FUN_1479eddc4 body=36 status=ok
// SIG undefined FUN_1479eddc4(void)

void FUN_1479eddc4(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dc) & 0x10) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) & 0xef | param_2 << 4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edde8 FUN_1479edde8 body=35 status=ok
// SIG undefined FUN_1479edde8(void)

void FUN_1479edde8(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dc) & 2) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) & 0xfd | param_2 * '\x02';
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ede0c FUN_1479ede0c body=62 status=ok
// SIG undefined FUN_1479ede0c(void)

void FUN_1479ede0c(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dd) & 2) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dd) = *(byte *)(param_1 + 0x2dd) & 0xfd | param_2 * '\x02';
  FUN_1448215fa(param_1);
  FUN_1479ed8cc(param_1);
  return;
}



// FUNCTION 1479ede4a FUN_1479ede4a body=36 status=ok
// SIG undefined FUN_1479ede4a(void)

void FUN_1479ede4a(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dd) & 4) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dd) = *(byte *)(param_1 + 0x2dd) & 0xfb | param_2 << 2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ede6e FUN_1479ede6e body=36 status=ok
// SIG undefined FUN_1479ede6e(void)

void FUN_1479ede6e(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2dd) & 0x10) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2dd) = *(byte *)(param_1 + 0x2dd) & 0xef | param_2 << 4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ede92 FUN_1479ede92 body=36 status=ok
// SIG undefined FUN_1479ede92(void)

void FUN_1479ede92(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d6) & 0x20) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xdf | param_2 << 5;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edeb6 FUN_1479edeb6 body=45 status=ok
// SIG undefined FUN_1479edeb6(void)

void FUN_1479edeb6(longlong param_1,float param_2)

{
  if (1e-08 < ABS(param_2 - *(float *)(param_1 + 0x38c))) {
    *(float *)(param_1 + 0x38c) = param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479edee4 FUN_1479edee4 body=36 status=ok
// SIG undefined FUN_1479edee4(void)

void FUN_1479edee4(longlong param_1,char param_2)

{
  if (-1 < (char)*(byte *)(param_1 + 0x2d4) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d4) = *(byte *)(param_1 + 0x2d4) & 0x7f | param_2 << 7;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edf08 FUN_1479edf08 body=36 status=ok
// SIG undefined FUN_1479edf08(void)

void FUN_1479edf08(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d6) & 8) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xf7 | param_2 << 3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edf2c FUN_1479edf2c body=36 status=ok
// SIG undefined FUN_1479edf2c(void)

void FUN_1479edf2c(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d6) & 0x10) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xef | param_2 << 4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479edf50 FUN_1479edf50 body=59 status=ok
// SIG undefined FUN_1479edf50(void)

void FUN_1479edf50(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[0xb5];
  if (lVar1 != 0) {
    uVar2 = 1;
    if (param_2 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x738))(param_1,1);
    }
    FUN_143658dc2(lVar1,uVar2,0);
    return;
  }
  return;
}



// FUNCTION 1479edf8c FUN_1479edf8c body=17 status=ok
// SIG undefined FUN_1479edf8c(void)

void FUN_1479edf8c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **ppuStack_78;
  undefined1 *apuStack_68 [2];
  undefined ***pppuStack_58;
  undefined **ppuStack_48;
  longlong lStack_40;
  ulonglong uStack_20;
  
  lVar5 = *(longlong *)(param_1 + 0x5a8);
  if (lVar5 == 0) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14365931b;
    if (iVar7 != 1) goto LAB_143659316;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14365931b;
  }
  else {
LAB_143659316:
    if (iVar7 == 0x10) goto LAB_14365931b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2)) {
LAB_14365931b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14365931b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_1436594cd;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14365fa42);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_1436594cd:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14365954d;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14365954d:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aa59f48;
    puVar16[0x15] = lVar5;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      apuStack_68[0] = (undefined1 *)CONCAT71(apuStack_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      apuStack_68[0] = (undefined1 *)CONCAT71(apuStack_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    ppuStack_78 = apuStack_68;
    pppuStack_58 = (undefined ***)0x0;
    ppuStack_48 = &PTR_LAB_14aa59f00;
    apuStack_68[0] = &LAB_1436625f0;
    lStack_40 = lVar5;
    FUN_14005a792(&DAT_14ca9a440,L"ResetSceneVelocity",&DAT_14cafe1d0);
    if (apuStack_68[0] != (undefined1 *)0x0) {
      pppuVar14 = pppuStack_58;
      if (pppuStack_58 == (undefined ***)0x0) {
        pppuVar14 = &ppuStack_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479edf9e FUN_1479edf9e body=38 status=ok
// SIG undefined FUN_1479edf9e(void)

void FUN_1479edf9e(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x3ac) = param_2;
  (**(code **)(*param_1 + 0x540))();
  FUN_1448c69c8(param_1);
  return;
}



// FUNCTION 1479edfe4 FUN_1479edfe4 body=58 status=ok
// SIG undefined FUN_1479edfe4(void)

undefined8 FUN_1479edfe4(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x638))();
                    /* WARNING: Could not recover jumptable at 0x0001479ee012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x668))(param_1,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1479ee01e FUN_1479ee01e body=52 status=ok
// SIG undefined FUN_1479ee01e(void)

void FUN_1479ee01e(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_145d804a6(param_1 + 0x340);
  if (cVar1 != '\0') {
    FUN_140136708(param_1);
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479ee052 FUN_1479ee052 body=227 status=ok
// SIG undefined FUN_1479ee052(void)

undefined4 FUN_1479ee052(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar5);
      if (plVar4 != (longlong *)0x0) {
        local_58 = 0xff;
        local_50 = 0xffffffff;
        local_4c = 0;
        local_8c = (undefined4)param_2;
        local_88 = 0;
        local_84 = (undefined4)((ulonglong)param_2 >> 0x20);
        local_80 = 0xffffffff;
        local_7c = 2;
        local_98 = 3;
        cVar1 = (**(code **)(*plVar4 + 0x3c0))(plVar4,0,&local_8c,local_78);
        uVar3 = local_50;
        if (cVar1 != '\0') goto LAB_1479ee108;
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  uVar3 = 0xffffffff;
LAB_1479ee108:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1479ee136 FUN_1479ee136 body=227 status=ok
// SIG undefined FUN_1479ee136(void)

undefined4 FUN_1479ee136(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar5);
      if (plVar4 != (longlong *)0x0) {
        local_58 = 0xff;
        local_50 = 0xffffffff;
        local_4c = 0;
        local_8c = (undefined4)param_2;
        local_88 = 0;
        local_84 = (undefined4)((ulonglong)param_2 >> 0x20);
        local_80 = 0xffffffff;
        local_7c = 2;
        local_98 = 3;
        cVar1 = (**(code **)(*plVar4 + 0x3c0))(plVar4,1,&local_8c,local_78);
        uVar3 = local_50;
        if (cVar1 != '\0') goto LAB_1479ee1ec;
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  uVar3 = 0xffffffff;
LAB_1479ee1ec:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1479ee21a FUN_1479ee21a body=149 status=ok
// SIG undefined FUN_1479ee21a(void)

void FUN_1479ee21a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1479ee052();
  if (-1 < iVar1) {
    local_40 = (undefined4 *)0x0;
    local_38 = 1;
    FUN_1447c510a(&local_40,1,0);
    *local_40 = param_3;
    FUN_145d8044e(param_1,iVar1,&local_40);
    if (local_40 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee2b0 FUN_1479ee2b0 body=248 status=ok
// SIG undefined FUN_1479ee2b0(void)

void FUN_1479ee2b0(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  float *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = FUN_1479ee136();
  if (-1 < iVar5) {
    dVar1 = param_3[3];
    dVar2 = param_3[2];
    dVar3 = param_3[1];
    dVar4 = *param_3;
    local_70 = (float *)0x0;
    local_68 = 4;
    FUN_1447c510a(&local_70,4,0);
    *local_70 = (float)dVar4;
    local_70[1] = (float)dVar3;
    local_70[2] = (float)dVar2;
    local_70[3] = (float)dVar1;
    FUN_145d8044e(param_1,iVar5,&local_70);
    if (local_70 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee3aa FUN_1479ee3aa body=138 status=ok
// SIG undefined FUN_1479ee3aa(void)

void FUN_1479ee3aa(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4 *)0x0;
  local_38 = 1;
  FUN_1447c510a(&local_40,1,0);
  *local_40 = param_3;
  FUN_145d8044e(param_1,param_2,&local_40);
  if (local_40 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee436 FUN_1479ee436 body=167 status=ok
// SIG undefined FUN_1479ee436(void)

void FUN_1479ee436(undefined8 param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  float *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = param_3[1];
  dVar2 = *param_3;
  local_50 = (float *)0x0;
  local_48 = 2;
  FUN_1447c510a(&local_50,2,0);
  *local_50 = (float)dVar2;
  local_50[1] = (float)dVar1;
  FUN_145d8044e(param_1,param_2,&local_50);
  if (local_50 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee4de FUN_1479ee4de body=229 status=ok
// SIG undefined FUN_1479ee4de(void)

void FUN_1479ee4de(undefined8 param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [40];
  float *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = param_3[3];
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = *param_3;
  local_70 = (float *)0x0;
  local_68 = 4;
  FUN_1447c510a(&local_70,4,0);
  *local_70 = (float)dVar4;
  local_70[1] = (float)dVar3;
  local_70[2] = (float)dVar2;
  local_70[3] = (float)dVar1;
  FUN_145d8044e(param_1,param_2,&local_70);
  if (local_70 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee5c4 FUN_1479ee5c4 body=149 status=ok
// SIG undefined FUN_1479ee5c4(void)

void FUN_1479ee5c4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1479ee052();
  if (-1 < iVar1) {
    local_40 = (undefined4 *)0x0;
    local_38 = 1;
    FUN_1447c510a(&local_40,1,0);
    *local_40 = param_3;
    FUN_1479ee01e(param_1,iVar1,&local_40);
    if (local_40 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee65a FUN_1479ee65a body=248 status=ok
// SIG undefined FUN_1479ee65a(void)

void FUN_1479ee65a(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  float *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = FUN_1479ee136();
  if (-1 < iVar5) {
    dVar1 = param_3[3];
    dVar2 = param_3[2];
    dVar3 = param_3[1];
    dVar4 = *param_3;
    local_70 = (float *)0x0;
    local_68 = 4;
    FUN_1447c510a(&local_70,4,0);
    *local_70 = (float)dVar4;
    local_70[1] = (float)dVar3;
    local_70[2] = (float)dVar2;
    local_70[3] = (float)dVar1;
    FUN_1479ee01e(param_1,iVar5,&local_70);
    if (local_70 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee754 FUN_1479ee754 body=138 status=ok
// SIG undefined FUN_1479ee754(void)

void FUN_1479ee754(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4 *)0x0;
  local_38 = 1;
  FUN_1447c510a(&local_40,1,0);
  *local_40 = param_3;
  FUN_1479ee01e(param_1,param_2,&local_40);
  if (local_40 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee7e0 FUN_1479ee7e0 body=167 status=ok
// SIG undefined FUN_1479ee7e0(void)

void FUN_1479ee7e0(undefined8 param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  float *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = param_3[1];
  dVar2 = *param_3;
  local_50 = (float *)0x0;
  local_48 = 2;
  FUN_1447c510a(&local_50,2,0);
  *local_50 = (float)dVar2;
  local_50[1] = (float)dVar1;
  FUN_1479ee01e(param_1,param_2,&local_50);
  if (local_50 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee888 FUN_1479ee888 body=195 status=ok
// SIG undefined FUN_1479ee888(void)

void FUN_1479ee888(undefined8 param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [40];
  float *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  local_60 = (float *)0x0;
  local_58 = 3;
  FUN_1447c510a(&local_60,3,0);
  *local_60 = (float)dVar3;
  local_60[1] = (float)dVar2;
  local_60[2] = (float)dVar1;
  FUN_1479ee01e(param_1,param_2,&local_60);
  if (local_60 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ee94c FUN_1479ee94c body=229 status=ok
// SIG undefined FUN_1479ee94c(void)

void FUN_1479ee94c(undefined8 param_1,undefined4 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [40];
  float *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = param_3[3];
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = *param_3;
  local_70 = (float *)0x0;
  local_68 = 4;
  FUN_1447c510a(&local_70,4,0);
  *local_70 = (float)dVar4;
  local_70[1] = (float)dVar3;
  local_70[2] = (float)dVar2;
  local_70[3] = (float)dVar1;
  FUN_1479ee01e(param_1,param_2,&local_70);
  if (local_70 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eea3c FUN_1479eea3c body=134 status=ok
// SIG undefined FUN_1479eea3c(void)

void FUN_1479eea3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x36) & 2) != 0) {
    local_60[0] = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_14 = 3;
    local_18 = 0x10;
    FUN_1479eeac4(param_2 + 0x88,local_60);
    FUN_1479eeb62(local_60);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eeac4 FUN_1479eeac4 body=158 status=ok
// SIG undefined FUN_1479eeac4(void)

void FUN_1479eeac4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_1479f6092(param_1 + 6,param_2 + 6);
  FUN_1479f60ee(param_1 + 10,param_2 + 10);
  FUN_1479f614c(param_1 + 0xe,param_2 + 0xe);
  *param_1 = *param_1 | *param_2 & 1;
  uVar1 = param_1[0x12];
  uVar2 = param_2[0x12] & 2;
  param_1[0x12] = uVar2 | uVar1;
  uVar4 = (param_2[0x12] | uVar1) & 4;
  param_1[0x12] = uVar2 | uVar1 & 0xfffffffb | uVar4;
  uVar5 = (param_2[0x12] | uVar1) & 0x10;
  param_1[0x12] = uVar2 | uVar1 & 0xffffffeb | uVar4 | uVar5;
  param_1[0x12] = uVar2 | uVar1 & 0xffffffcb | uVar4 | uVar5 | (uVar1 | param_2[0x12]) & 0x20;
  bVar3 = (byte)param_2[0x13];
  if ((bVar3 != 3 & DAT_14c76124c) == 1) {
    if (bVar3 <= (byte)param_1[0x13]) {
      bVar3 = (byte)param_1[0x13];
    }
    *(byte *)(param_1 + 0x13) = bVar3;
  }
  return;
}



// FUNCTION 1479eeb62 FUN_1479eeb62 body=91 status=ok
// SIG undefined FUN_1479eeb62(void)

void FUN_1479eeb62(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1478d8cc2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1478d8bd6(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 8);
  return;
}



// FUNCTION 1479eebd4 FUN_1479eebd4 body=23 status=ok
// SIG undefined FUN_1479eebd4(void)

undefined8 * FUN_1479eebd4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + -0x68);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 1479eebf0 FUN_1479eebf0 body=159 status=ok
// SIG undefined FUN_1479eebf0(void)

void FUN_1479eebf0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = param_4[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *(undefined8 *)(param_3 + 4);
  local_50 = &DAT_14cad0f08;
  local_58 = &DAT_14cad0f10;
  local_60 = param_5;
  local_68 = DAT_14cad0ec4;
  (**(code **)(*param_1 + 0x970))(local_48,param_2,&local_48,&local_28);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479eec90 FUN_1479eec90 body=984 status=ok
// SIG undefined FUN_1479eec90(void)

undefined4
FUN_1479eec90(longlong *param_1,undefined8 param_2,undefined8 **param_3,double *param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 **local_200;
  double *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  longlong *local_1c8;
  undefined8 **local_1c0;
  double *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 *local_188;
  undefined8 *puStack_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f0;
  undefined1 *local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar12 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar12 != 0) {
    local_200 = (undefined8 **)CONCAT71(local_200._1_7_,*(undefined1 *)(param_6 + 0x13));
    local_208 = (undefined8 *)CONCAT71(local_208._1_7_,*(undefined1 *)(param_6 + 0x10));
    FUN_143606068(lVar12,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_228);
  }
  (**(code **)(param_1[0x57] + 0x20))(param_1 + 0x57,&local_90);
  local_a0 = local_90;
  local_98 = local_88;
  FUN_144a56970(local_80);
  lVar12 = local_90;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if ((longlong)local_88 != 0) {
    lVar13 = 0;
    local_1c8 = param_1;
    local_1c0 = param_3;
    local_1b8 = param_4;
    local_1b0 = param_2;
    do {
      local_148 = *(undefined8 *)(lVar12 + lVar13);
      local_120 = 1;
      local_128 = &local_148;
      cVar9 = FUN_144b06fd6(local_68,&local_128);
      uVar8 = uStack_1a0;
      if (cVar9 == '\0') {
        lVar14 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_14075a758(&local_1a8,uVar8 & 0xffffffff);
        }
        *(undefined8 *)(local_1a8 + lVar14 * 8) = *(undefined8 *)(lVar12 + lVar13);
      }
      lVar13 = lVar13 + 8;
      param_2 = local_1b0;
      param_3 = local_1c0;
      param_1 = local_1c8;
      param_4 = local_1b8;
    } while ((longlong)local_88 * 8 != lVar13);
  }
  if (local_90 != 0) {
    FUN_1400020a8(local_90);
  }
  local_90 = local_1a8;
  local_88 = (int)uStack_1a0;
  local_84 = uStack_1a0._4_4_;
  local_a8 = local_68;
  local_200 = &local_128;
  local_118 = 0xffffffff;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f0 = 0;
  local_138 = local_1a8;
  local_130 = (int)uStack_1a0;
  local_208 = (undefined8 *)CONCAT71(local_208._1_7_,*(undefined1 *)(param_6 + 0x10));
  uVar11 = FUN_1479ef06c(&local_a8,&local_138,param_3,param_4);
  if ((char)uVar11 != '\0') {
    uStack_140 = 0;
    local_148 = 0xfffff00000000;
    local_f0 = 7;
    uVar7 = *(undefined1 *)(param_6 + 0x13);
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_18c = 0x3ff00000;
    puVar1 = param_3[2];
    puVar2 = *param_3;
    puVar3 = param_3[1];
    local_188 = *param_3;
    puStack_180 = param_3[1];
    local_178 = param_3[2];
    uStack_170 = 0;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    dVar4 = param_4[2];
    dVar5 = *param_4;
    dVar6 = param_4[1];
    lVar12 = param_1[0x16];
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(param_1);
    }
    local_1e8 = &local_1a8;
    local_208 = &local_148;
    local_1e0 = 1;
    local_1f0 = 0;
    local_200 = param_3;
    local_1f8 = param_4;
    local_1d8 = uVar7;
    thunk_FUN_1400b2b4d(lVar12,&local_128,param_2,
                        (float)SQRT((dVar4 - (double)puVar1) * (dVar4 - (double)puVar1) +
                                    (dVar5 - (double)puVar2) * (dVar5 - (double)puVar2) +
                                    (dVar6 - (double)puVar3) * (dVar6 - (double)puVar3)));
  }
  FUN_1448635f4(local_80);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1479ef06c FUN_1479ef06c body=1565 status=ok
// SIG undefined FUN_1479ef06c(void)

undefined8
FUN_1479ef06c(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4,
             undefined1 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_2c8 [40];
  double local_2a0;
  undefined8 *local_298;
  undefined4 local_290;
  undefined8 *local_288;
  byte *local_280;
  double *local_278;
  undefined1 *local_270;
  double *local_268;
  double *local_260;
  double local_258;
  double *local_250;
  undefined1 local_248;
  longlong local_240;
  code *local_238;
  undefined8 **local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_208 [16];
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_118;
  double dStack_110;
  double local_108;
  byte local_f1;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_f1 = 0;
  *(undefined4 *)(param_6 + 0x70) = 0x7f7fffff;
  local_108 = param_4[2] - param_3[2];
  dStack_110 = param_4[1] - param_3[1];
  local_118 = *param_4 - *param_3;
  dVar14 = SQRT(local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110);
  if (9.999999747378752e-05 <= dVar14) {
    pdVar4 = (double *)&DAT_14c846480;
    pdVar5 = local_178;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *pdVar5 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      lVar6 = 0;
      local_2a0 = dVar14;
      do {
        local_180 = *(undefined8 *)(lVar1 + lVar6);
        FUN_146e1fc90(*param_1,&local_1e8);
        dVar12 = *param_3 - local_1c8;
        dVar13 = param_3[1] - dStack_1c0;
        dVar11 = param_3[2] - local_1b8;
        dVar9 = -local_1e8;
        dVar10 = -dStack_1e0;
        dVar7 = local_1d8 * -1.0;
        dVar8 = dStack_1d0 * 1.0;
        dVar14 = dVar13 * dVar9 - dVar12 * dVar10;
        dVar18 = dVar11 * dVar10 - dVar13 * dVar7;
        dVar17 = dVar12 * dVar7 - dVar11 * dVar9;
        dVar18 = dVar18 + dVar18;
        dVar17 = dVar17 + dVar17;
        dVar14 = dVar14 + dVar14;
        dVar15 = dStack_110 * dVar9 - dVar10 * local_118;
        dVar16 = local_108 * dVar10 - dVar7 * dStack_110;
        dVar19 = local_118 * dVar7 - dVar9 * local_108;
        dVar16 = dVar16 + dVar16;
        dVar19 = dVar19 + dVar19;
        dVar15 = dVar15 + dVar15;
        local_1f8 = dVar14 * dVar8 + dVar11 + (dVar17 * dVar9 - dVar18 * dVar10);
        dVar11 = local_1e8 * dVar14 + dVar7 * dVar18 + dVar8 * dVar17 + dVar13;
        local_208._8_4_ = SUB84(dVar11,0);
        local_208._0_8_ = (dVar14 * dVar10 - dVar17 * dVar7) + dVar8 * dVar18 + dVar12;
        local_208._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_218 = dVar15 * dVar8 + local_108 + (dVar19 * dVar9 - dVar16 * dVar10);
        local_228 = (dVar15 * dVar10 - dVar19 * dVar7) + dVar8 * dVar16 + local_118;
        dStack_220 = local_1e8 * dVar15 + dVar7 * dVar16 + dVar8 * dVar19 + dStack_110;
        local_280 = &local_f1;
        local_270 = local_208;
        local_268 = &local_228;
        local_260 = &local_118;
        local_258 = local_2a0;
        local_248 = param_5;
        local_240 = param_6;
        local_230 = &local_288;
        local_238 = FUN_1479fad36;
        local_298 = &local_180;
        local_290 = 1;
        local_288 = param_1;
        local_278 = &local_1e8;
        local_250 = local_178;
        FUN_146e202d6(*param_1,&local_298,&local_238);
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
      if ((local_f1 & 1) != 0) {
        dVar14 = *(double *)(param_6 + 0x58);
        dVar11 = *(double *)(param_6 + 0x60);
        dVar15 = dVar11 * local_178[0] - dVar14 * local_178[1];
        dVar16 = *(double *)(param_6 + 0x68) * local_178[1] - dVar11 * local_178[2];
        dVar19 = dVar14 * local_178[2] - *(double *)(param_6 + 0x68) * local_178[0];
        dVar16 = dVar16 + dVar16;
        dVar19 = dVar19 + dVar19;
        dVar15 = dVar15 + dVar15;
        *(double *)(param_6 + 0x58) =
             (dVar15 * local_178[1] - dVar19 * local_178[2]) + local_178[3] * dVar16 + dVar14;
        *(double *)(param_6 + 0x60) =
             (local_178[2] * dVar16 - local_178[0] * dVar15) + local_178[3] * dVar19 + dVar11;
        *(double *)(param_6 + 0x68) =
             dVar15 * local_178[3] + *(double *)(param_6 + 0x68) +
             (dVar19 * local_178[0] - dVar16 * local_178[1]);
        dVar14 = *(double *)(param_6 + 0x40);
        dVar11 = *(double *)(param_6 + 0x48);
        dVar15 = dVar11 * local_178[0] - local_178[1] * dVar14;
        dVar16 = *(double *)(param_6 + 0x50) * local_178[1] - local_178[2] * dVar11;
        dVar19 = dVar14 * local_178[2] - local_178[0] * *(double *)(param_6 + 0x50);
        dVar16 = dVar16 + dVar16;
        dVar19 = dVar19 + dVar19;
        dVar15 = dVar15 + dVar15;
        *(double *)(param_6 + 0x40) =
             (dVar15 * local_178[1] - dVar19 * local_178[2]) + local_178[3] * dVar16 + dVar14 +
             local_158;
        *(double *)(param_6 + 0x48) =
             (local_178[2] * dVar16 - local_178[0] * dVar15) + local_178[3] * dVar19 + dVar11 +
             dStack_150;
        *(double *)(param_6 + 0x50) =
             dVar15 * local_178[3] + *(double *)(param_6 + 0x50) +
             (dVar19 * local_178[0] - dVar16 * local_178[1]) + local_148;
        uVar2 = 1;
        goto LAB_1479ef176;
      }
    }
  }
  uVar2 = 0;
LAB_1479ef176:
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ef68a FUN_1479ef68a body=1069 status=ok
// SIG undefined FUN_1479ef68a(void)

ulonglong FUN_1479ef68a(longlong param_1,undefined8 **param_2,double *param_3,double *param_4,
                       longlong *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_268 [32];
  double *local_248;
  undefined8 *local_240;
  undefined8 **local_238;
  double *local_230;
  double *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined4 local_210;
  undefined1 local_208;
  undefined1 local_200;
  double *local_1f0;
  double *local_1e8;
  undefined8 **local_1e0;
  longlong local_1d8;
  undefined1 local_1c9;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_142;
  undefined1 local_141;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 local_108;
  undefined1 *local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  undefined1 local_88 [8];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1d8 = param_1;
  (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))(param_1 + 0x2b8,&local_b0);
  local_c0 = local_b0;
  local_b8 = local_a8;
  FUN_144a56970(local_a0);
  lVar11 = local_b0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if ((longlong)local_a8 != 0) {
    lVar12 = 0;
    local_1f0 = param_4;
    local_1e8 = param_3;
    local_1e0 = param_2;
    do {
      local_1c8 = *(undefined8 *)(lVar11 + lVar12);
      local_138 = 1;
      local_140 = &local_1c8;
      cVar9 = FUN_144b06fd6(local_88,&local_140);
      uVar14 = uStack_1a0;
      if (cVar9 == '\0') {
        lVar13 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_14075a758(&local_1a8,uVar14 & 0xffffffff);
        }
        *(undefined8 *)(local_1a8 + lVar13 * 8) = *(undefined8 *)(lVar11 + lVar12);
      }
      lVar12 = lVar12 + 8;
      param_3 = local_1e8;
      param_4 = local_1f0;
      param_2 = local_1e0;
    } while ((longlong)local_a8 * 8 != lVar12);
  }
  if (local_b0 != 0) {
    FUN_1400020a8(local_b0);
  }
  local_b0 = local_1a8;
  local_a8 = (int)uStack_1a0;
  local_a4 = uStack_1a0._4_4_;
  local_c8 = local_88;
  local_238 = &local_140;
  local_130 = 0xffffffff;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0xffffffff;
  local_108 = 0;
  local_142 = *(undefined1 *)(param_8 + 0x10);
  local_240 = (undefined8 *)&local_142;
  local_141 = 1;
  local_198 = param_5[2];
  lStack_190 = param_5[3];
  local_188 = *param_3;
  dStack_180 = param_3[1];
  local_178 = param_3[2];
  uStack_170 = 0;
  local_168 = 0x3ff0000000000000;
  uStack_160 = 0x3ff0000000000000;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0;
  local_1b8 = local_1a8;
  local_1b0 = (int)uStack_1a0;
  local_248 = param_4;
  local_1a8 = *param_5;
  uStack_1a0 = param_5[1];
  cVar9 = FUN_1479efab8(&local_c8,&local_1b8,param_6,&local_1a8);
  if (cVar9 == '\0') {
    uVar14 = 0;
  }
  else {
    uStack_1c0 = 0;
    local_1c8 = 0xfffff00000000;
    local_108 = 0x407;
    local_1c9 = 0;
    uVar7 = *(undefined1 *)(param_8 + 0x12);
    uVar8 = *(undefined1 *)(param_8 + 0x13);
    local_1a8 = *param_5;
    uStack_1a0 = param_5[1];
    local_198 = param_5[2];
    lStack_190 = param_5[3];
    dVar1 = param_3[2];
    dVar2 = *param_3;
    dVar3 = param_3[1];
    local_188 = *param_3;
    dStack_180 = param_3[1];
    local_178 = param_3[2];
    uStack_170 = 0;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0x3ff0000000000000;
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    dVar4 = param_4[2];
    dVar5 = *param_4;
    dVar6 = param_4[1];
    lVar11 = *(longlong *)(local_1d8 + 0xb0);
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6();
    }
    local_220 = param_6;
    local_240 = &local_1c8;
    local_248 = (double *)
                CONCAT44(local_248._4_4_,
                         (float)SQRT((dVar4 - dVar1) * (dVar4 - dVar1) +
                                     (dVar5 - dVar2) * (dVar5 - dVar2) +
                                     (dVar6 - dVar3) * (dVar6 - dVar3)));
    local_210 = 0;
    local_238 = param_2;
    local_230 = param_3;
    local_228 = param_4;
    local_218 = &local_1a8;
    local_208 = uVar7;
    local_200 = uVar8;
    FUN_1417baf7a(&local_1c9,lVar11,1,&local_140);
    uVar14 = CONCAT71((int7)((ulonglong)&local_1c9 >> 8),local_1c9);
  }
  FUN_1448635f4(local_a0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1479efab8 FUN_1479efab8 body=744 status=ok
// SIG undefined FUN_1479efab8(void)

ulonglong FUN_1479efab8(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       double *param_5,undefined8 param_6,undefined8 *param_7)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1b8 [32];
  undefined8 **local_198;
  double *local_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined8 *local_178;
  double *pdStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined1 *local_158;
  double *local_150;
  double local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 **local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_e8;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_61 = 0;
  local_70 = param_5[2] - *(double *)(param_4 + 0x30);
  local_78 = param_5[1] - *(double *)(param_4 + 0x28);
  local_80 = *param_5 - *(double *)(param_4 + 0x20);
  dVar2 = SQRT(local_70 * local_70 + local_80 * local_80 + local_78 * local_78);
  if (dVar2 < 9.99999993922529e-09) {
    local_198 = &local_178;
    local_178 = (undefined8 *)0x0;
    pdStack_170 = (double *)0x0;
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_190 = &local_118;
    uVar9 = FUN_1479faf08(param_1,&local_98,SUB84(local_80,0),param_4);
    uVar10 = (ulonglong)uVar9;
    if ((int)pdStack_170 != 0) {
      param_7[6] = local_178[6];
      uVar3 = *local_178;
      uVar4 = local_178[1];
      uVar5 = local_178[2];
      uVar6 = local_178[3];
      uVar7 = local_178[5];
      param_7[4] = local_178[4];
      param_7[5] = uVar7;
      param_7[2] = uVar5;
      param_7[3] = uVar6;
      *param_7 = uVar3;
      param_7[1] = uVar4;
      param_7[0xb] = local_e8 * local_118;
      param_7[0xc] = local_110 * local_e8;
      param_7[0xd] = local_108 * local_e8;
    }
    if (local_178 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_b0 = 1.0 / dVar2;
    local_a0 = local_70 * local_b0;
    local_a8 = local_78 * local_b0;
    local_b0 = local_80 * local_b0;
    *(undefined4 *)(param_7 + 0xe) = 0x7f7fffff;
    lVar8 = param_2[1];
    if ((longlong)(int)lVar8 == 0) {
      uVar10 = 0;
    }
    else {
      lVar1 = *param_2;
      lVar11 = 0;
      do {
        local_b8 = *(undefined8 *)(lVar1 + lVar11);
        FUN_146e1fc90(*param_1,&local_118);
        local_158 = &local_61;
        local_150 = &local_80;
        local_140 = &local_b0;
        local_138 = param_7;
        local_130 = param_6;
        local_120 = &local_178;
        local_128 = FUN_1479fb53a;
        local_188 = &local_b8;
        local_180 = 1;
        local_178 = param_1;
        pdStack_170 = &local_118;
        local_168 = param_3;
        local_160 = param_4;
        local_148 = dVar2;
        FUN_146e202d6(*param_1,&local_188,&local_128);
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar11);
      uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),local_61);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar10 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479efda2 FUN_1479efda2 body=1020 status=ok
// SIG undefined FUN_1479efda2(void)

ulonglong FUN_1479efda2(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                       longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  int local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_f8 = *param_4;
  uStack_f0 = param_4[1];
  local_e8 = param_4[2];
  uStack_e0 = param_4[3];
  local_d8 = *param_3;
  uStack_d4 = param_3[1];
  uStack_d0 = (undefined4)*(undefined8 *)(param_3 + 2);
  uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  local_c8 = *(undefined8 *)(param_3 + 4);
  uStack_c0 = 0;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x20))(param_2 + 0x2b8,&local_108);
  (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))(param_1 + 0x2b8,&local_118);
  local_128 = local_108;
  local_120 = (int)uStack_100;
  FUN_144a56970(local_80);
  puVar4 = local_108;
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  if ((longlong)(int)uStack_100 != 0) {
    lVar7 = 0;
    do {
      local_158 = *(undefined8 *)((longlong)puVar4 + lVar7);
      uStack_90 = CONCAT44(uStack_90._4_4_,1);
      local_98 = &local_158;
      cVar2 = FUN_144b06fd6(local_68,&local_98);
      uVar6 = uStack_130;
      if (cVar2 == '\0') {
        lVar8 = (longlong)(int)uStack_130;
        uVar3 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar3);
        if (uStack_130._4_4_ < uVar3) {
          FUN_14075a758(&local_138,uVar6 & 0xffffffff);
        }
        local_138[lVar8] = *(undefined8 *)((longlong)puVar4 + lVar7);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)uStack_100 * 8 != lVar7);
  }
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8(local_108);
  }
  local_108 = local_138;
  uStack_100 = uStack_130;
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  lVar7 = CONCAT44(uStack_114,local_118);
  if ((longlong)iStack_110 != 0) {
    lVar8 = 0;
    do {
      local_158 = *(undefined8 *)(lVar7 + lVar8);
      uStack_90 = CONCAT44(uStack_90._4_4_,1);
      local_98 = &local_158;
      cVar2 = FUN_144b06fd6(local_68,&local_98);
      uVar6 = uStack_130;
      if (cVar2 == '\0') {
        lVar9 = (longlong)(int)uStack_130;
        uVar3 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar3);
        if (uStack_130._4_4_ < uVar3) {
          FUN_14075a758(&local_138,uVar6 & 0xffffffff);
        }
        *(undefined8 *)((longlong)local_138 + lVar9 * 8) = *(undefined8 *)(lVar7 + lVar8);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iStack_110 * 8 != lVar8);
    lVar7 = CONCAT44(uStack_114,local_118);
  }
  if (lVar7 != 0) {
    FUN_1400020a8(lVar7);
  }
  local_118 = (undefined4)local_138;
  uStack_114 = local_138._4_4_;
  iStack_110 = (int)uStack_130;
  uStack_10c = uStack_130._4_4_;
  local_140 = local_68;
  if ((longlong)(int)uStack_100 != 0) {
    puVar5 = local_108 + (int)uStack_100;
    puVar4 = local_108;
    do {
      lVar7 = (longlong)iStack_110;
      if (lVar7 != 0) {
        uVar1 = *puVar4;
        lVar8 = CONCAT44(uStack_114,local_118);
        lVar9 = 0;
        do {
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          local_168 = *(undefined1 *)(param_5 + 0x10);
          local_160 = &local_98;
          cVar2 = FUN_1479f01a0(&local_140,*(undefined8 *)(lVar8 + lVar9),uVar1,&local_f8);
          if (cVar2 != '\0') {
            local_138 = (undefined8 *)0x0;
            uStack_130 = 0;
            uStack_150 = 0;
            local_158 = 0xfffff00000000;
            thunk_FUN_1402d488d(uStack_90 & 0xffffffff,local_98,&local_158,&local_138);
            if ((int)uStack_130 != 0) {
              FUN_1479c9bc0(param_6,&local_138);
              if (local_138 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_98 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
              goto LAB_1479f00fd;
            }
            if (local_138 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          lVar9 = lVar9 + 8;
        } while (lVar7 * 8 != lVar9);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar5);
  }
  uVar6 = 0;
LAB_1479f00fd:
  FUN_1448635f4(local_80);
  if (CONCAT44(uStack_114,local_118) != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1479f01a0 FUN_1479f01a0 body=229 status=ok
// SIG undefined FUN_1479f01a0(void)

undefined4
FUN_1479f01a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 *local_90;
  code **local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = local_58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a861ba0;
  local_20 = param_6;
  local_58[0] = FUN_1479fc1fc;
  local_90 = &local_78;
  local_68 = DAT_14c8464f0;
  local_78 = (undefined4)DAT_14c8464e0;
  uStack_74 = DAT_14c8464e0._4_4_;
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_a0 = param_5;
  local_98 = 0;
  local_a8 = param_4;
  local_30 = param_1;
  local_28 = param_2;
  uVar1 = FUN_140555974((undefined4)DAT_14c8464e0,param_2,&DAT_14c846480,param_3);
  if (local_58[0] != (code *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f0286 FUN_1479f0286 body=194 status=ok
// SIG undefined FUN_1479f0286(void)

undefined4 FUN_1479f0286(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar2 != 0) {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    FUN_143606076(lVar2,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_58 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar1 = FUN_1479f034a(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1479f034a FUN_1479f034a body=193 status=ok
// SIG undefined FUN_1479f034a(void)

undefined4
FUN_1479f034a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a73fdc(local_68,param_3,param_4);
  local_78 = param_5;
  local_80 = &DAT_14cad0f08;
  local_88 = &DAT_14cad0f10;
  local_90 = &DAT_14cad0f68;
  local_98 = DAT_14cad0ec4;
  uVar1 = (**(code **)(*param_1 + 0x9a8))(param_1,param_2,param_3,local_68[0]);
  FUN_144aa6594(local_68);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f040c FUN_1479f040c body=731 status=ok
// SIG undefined FUN_1479f040c(void)

ulonglong FUN_1479f040c(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000048;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 local_160;
  longlong *local_150;
  undefined4 *local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))(param_1 + 0x2b8,&local_a8);
  local_b8 = local_a8;
  local_b0 = local_a0;
  FUN_144a56970(local_80);
  lVar1 = local_a8;
  local_98 = 0;
  uStack_90 = 0;
  if ((longlong)local_a0 != 0) {
    lVar4 = 0;
    local_150 = param_3;
    local_148 = param_2;
    local_140 = param_4;
    do {
      local_d8 = *(longlong *)(lVar1 + lVar4);
      lStack_130 = CONCAT44(lStack_130._4_4_,1);
      local_138 = &local_d8;
      cVar2 = FUN_144b06fd6(local_68,&local_138);
      uVar6 = uStack_90;
      if (cVar2 == '\0') {
        lVar5 = (longlong)(int)uStack_90;
        uVar3 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
        if (uStack_90._4_4_ < uVar3) {
          FUN_14075a758(&local_98,uVar6 & 0xffffffff);
        }
        *(undefined8 *)(local_98 + lVar5 * 8) = *(undefined8 *)(lVar1 + lVar4);
      }
      lVar4 = lVar4 + 8;
      param_2 = local_148;
      param_4 = local_140;
      param_3 = local_150;
    } while ((longlong)local_a0 * 8 != lVar4);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
  local_a8 = local_98;
  local_a0 = (int)uStack_90;
  local_9c = uStack_90._4_4_;
  local_c0 = local_68;
  local_168 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_138 = (longlong *)*param_3;
  lStack_130 = param_3[1];
  local_128 = param_3[2];
  lStack_120 = param_3[3];
  local_118 = *param_2;
  uStack_114 = param_2[1];
  uStack_110 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  local_108 = *(undefined8 *)(param_2 + 4);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  local_160 = 0;
  cVar2 = FUN_1479faf08(&local_c0,&local_98,param_4);
  if (cVar2 != '\0') {
    local_138 = (longlong *)0x0;
    lStack_130 = 0;
    uStack_90 = 0;
    local_98 = 0xfffff00000000;
    thunk_FUN_1402d488d(uStack_d0 & 0xffffffff,local_d8,&local_98,&local_138);
    if ((int)lStack_130 != 0) {
      FUN_1479c9bc0(in_stack_00000048,&local_138);
      if (local_138 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
      goto LAB_1479f0655;
    }
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar6 = 0;
LAB_1479f0655:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1448635f4(local_80);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1479f06e8 FUN_1479f06e8 body=91 status=ok
// SIG undefined FUN_1479f06e8(void)

undefined1 FUN_1479f06e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x408)) {
    lVar2 = 0xe0;
    lVar3 = 0;
    do {
      lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x400) + lVar2);
      if (lVar1 == param_2) {
        return 1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x108;
    } while (lVar3 < *(int *)(param_1 + 0x408));
  }
  return 0;
}



// FUNCTION 1479f0748 FUN_1479f0748 body=267 status=ok
// SIG undefined FUN_1479f0748(void)

void FUN_1479f0748(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433b7b66(param_2);
  uVar2 = *(uint *)(param_1 + 0x408);
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1478c61ac(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_1409e9cce(param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x408) * 0x108;
    lVar3 = *(longlong *)(param_1 + 0x400) + 0xe0;
    do {
      local_38 = FUN_14479d2ce(lVar3);
      if (local_38 != 0) {
        FUN_1409e9912(param_2,local_3c,&local_38,0);
      }
      lVar3 = lVar3 + 0x108;
      lVar4 = lVar4 + -0x108;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f0856 FUN_1479f0856 body=545 status=ok
// SIG undefined FUN_1479f0856(void)

undefined8 FUN_1479f0856(longlong *param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < (int)param_1[0x28]) {
    lVar5 = param_1[0x16];
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
    if (((param_2 != '\0') && ((*(byte *)(param_1 + 0x5d) & 1) == 0)) &&
       (*(double *)(lVar5 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x3a4) < 1.0)) {
LAB_1479f08cf:
      uVar8 = 0;
      goto LAB_1479f0a4e;
    }
    local_48 = (undefined1 *)0x0;
    local_40 = 0x1800000000;
    if (((longlong)(int)param_1[0x44] < 1) ||
       (lVar7 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8), lVar7 == 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = (*(byte *)(lVar7 + 0x608) & 4) == 0;
    }
    FUN_144738d58(local_108,param_1 + 0x27);
    uVar6 = local_40 & 0xffffffff;
    if (0 < (int)(uint)local_40) {
      do {
        puVar9 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar9 = local_108;
        }
        plVar1 = *(longlong **)(puVar9 + uVar6 * 8 + -8);
        uVar2 = (int)uVar6 - 1;
        local_40 = CONCAT44(local_40._4_4_,uVar2);
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)(plVar1 + 0x3f) & 0xc) != 0) {
            lVar7 = FUN_144a3a302();
            if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                 lVar7 + 0x30)) &&
               ((!(bool)(~bVar10 & (*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) &&
                ((uVar2 = (**(code **)(*plVar1 + 0x570))(plVar1), uVar2 < 6 &&
                 ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)))))) {
              uVar3 = (**(code **)(*param_1 + 0x580))(param_1);
              iVar4 = (**(code **)(*plVar1 + 0x578))(plVar1,uVar3);
              if (iVar4 != 0) {
                *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xfe;
                *(float *)((longlong)param_1 + 0x3a4) = (float)*(double *)(lVar5 + 0x6d0);
                if (local_48 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_1479f08cf;
              }
            }
          }
          FUN_144738d58(local_108,plVar1 + 0x27);
          uVar2 = (uint)local_40;
        }
        uVar6 = (ulonglong)uVar2;
      } while (0 < (int)uVar2);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 1;
  uVar8 = 1;
LAB_1479f0a4e:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1479f0a78 FUN_1479f0a78 body=225 status=ok
// SIG undefined FUN_1479f0a78(void)

undefined8 * FUN_1479f0a78(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar4 = *(int *)(param_1 + 1000);
  uVar5 = (ulonglong)iVar4;
  if (0 < (longlong)uVar5) {
    iVar7 = -iVar4;
    uVar8 = uVar5;
    do {
      iVar4 = (int)uVar5;
      lVar1 = *(longlong *)(param_1 + 0x3e0);
      lVar2 = *(longlong *)(lVar1 + -8 + uVar8 * 8);
      if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
        if (uVar8 != (uVar5 & 0xffffffff)) {
          iVar6 = iVar4 + iVar7;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar1 + uVar8 * 8 + -8),(void *)(lVar1 + (longlong)(iVar4 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          iVar4 = *(int *)(param_1 + 1000);
        }
        uVar5 = (ulonglong)(iVar4 - 1U);
        *(uint *)(param_1 + 1000) = iVar4 - 1U;
      }
      iVar4 = (int)uVar5;
      iVar7 = iVar7 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  *param_2 = 0;
  _Src = *(void **)(param_1 + 0x3e0);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1457242e8(param_2,iVar4,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar4 << 3);
  }
  return param_2;
}



// FUNCTION 1479f0b7c FUN_1479f0b7c body=177 status=ok
// SIG undefined FUN_1479f0b7c(void)

void FUN_1479f0b7c(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + 0x3f0;
  local_28 = 0;
  FUN_1479f0c2e(param_1,&local_28,1);
  if (param_2 != 0) {
    local_28 = param_2;
    if (param_3 == '\0') {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_14028d478(param_1,&local_28,1);
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_1479fc42a(param_1,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f0c2e FUN_1479f0c2e body=214 status=ok
// SIG undefined FUN_1479f0c2e(void)

int FUN_1479f0c2e(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = (int)param_1[1];
  iVar5 = iVar1;
  if (0 < iVar1) {
    uVar6 = 0;
    bVar4 = 0;
    do {
      lVar2 = *param_1;
      lVar3 = *param_2;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
        iVar5 = (int)param_1[1];
      }
      if (*(longlong *)(lVar2 + (longlong)(int)uVar6 * 8) == lVar3) {
        iVar7 = ~uVar6 + iVar5;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(*param_1 + (longlong)(int)uVar6 * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 1) = iVar5;
        bVar4 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
    if ((bool)(param_3 == '\x01' & bVar4)) {
      FUN_1479fc388(param_1);
      iVar5 = (int)param_1[1];
    }
  }
  return iVar1 - iVar5;
}



// FUNCTION 1479f0d04 FUN_1479f0d04 body=225 status=ok
// SIG undefined FUN_1479f0d04(void)

undefined8 * FUN_1479f0d04(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar4 = *(int *)(param_1 + 0x3f8);
  uVar5 = (ulonglong)iVar4;
  if (0 < (longlong)uVar5) {
    iVar7 = -iVar4;
    uVar8 = uVar5;
    do {
      iVar4 = (int)uVar5;
      lVar1 = *(longlong *)(param_1 + 0x3f0);
      lVar2 = *(longlong *)(lVar1 + -8 + uVar8 * 8);
      if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
        if (uVar8 != (uVar5 & 0xffffffff)) {
          iVar6 = iVar4 + iVar7;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar1 + uVar8 * 8 + -8),(void *)(lVar1 + (longlong)(iVar4 - iVar6) * 8),
                  (longlong)iVar6 << 3);
          iVar4 = *(int *)(param_1 + 0x3f8);
        }
        uVar5 = (ulonglong)(iVar4 - 1U);
        *(uint *)(param_1 + 0x3f8) = iVar4 - 1U;
      }
      iVar4 = (int)uVar5;
      iVar7 = iVar7 + 1;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  *param_2 = 0;
  _Src = *(void **)(param_1 + 0x3f0);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1479fc4e6(param_2,iVar4,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar4 << 3);
  }
  return param_2;
}



// FUNCTION 1479f0e0e FUN_1479f0e0e body=469 status=ok
// SIG undefined FUN_1479f0e0e(void)

void FUN_1479f0e0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      FUN_1479f0fe4(param_1 + 0x5a0);
    }
    if (lVar1 == 0) {
      return;
    }
    if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
      return;
    }
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) < 0) {
      return;
    }
    if ((*(byte *)(lVar1 + 0x348) & 2) != 0) {
      return;
    }
    FUN_1478b7cfc(lVar1);
    if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
      return;
    }
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) < 0) {
      return;
    }
    if ((*(byte *)(lVar1 + 0x348) & 2) != 0) {
      return;
    }
    FUN_1479f1076(lVar1 + 0x206,lVar1);
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (param_1 != 0) {
    if (param_2 == param_1) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      FUN_1479f0fe4(param_1 + 0x5a0);
    }
    if (lVar1 == lVar2) goto LAB_1479f0ef4;
    if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
        (-1 < *(int *)(*(longlong *)(lVar2 + 0x10) + 0xd4))) &&
       ((((*(byte *)(lVar2 + 0x348) & 2) == 0 &&
         (FUN_1478b7cfc(lVar2), (*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
        ((-1 < *(int *)(*(longlong *)(lVar2 + 0x10) + 0xd4) && ((*(byte *)(lVar2 + 0x348) & 2) == 0)
         ))))) {
      FUN_1479f1076(lVar2 + 0x206,lVar2);
    }
  }
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      ((-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) &&
       ((((*(byte *)(lVar1 + 0x348) & 2) == 0 &&
         (FUN_1478b7ccc(lVar1), (*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
        (-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4))))))) &&
     ((*(byte *)(lVar1 + 0x348) & 2) == 0)) {
    FUN_1479f1108(lVar1 + 0x205,lVar1);
  }
LAB_1479f0ef4:
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  FUN_1479f119a(param_2 + 0x59f,param_2);
  return;
}



// FUNCTION 1479f0fe4 FUN_1479f0fe4 body=128 status=ok
// SIG undefined FUN_1479f0fe4(void)

void FUN_1479f0fe4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1479fc5e8(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1478903c3(local_28,param_2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1076 FUN_1479f1076 body=128 status=ok
// SIG undefined FUN_1479f1076(void)

void FUN_1479f1076(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1479fc76c(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1478ba6c3(local_28,param_2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1108 FUN_1479f1108 body=128 status=ok
// SIG undefined FUN_1479f1108(void)

void FUN_1479f1108(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1479fc8f0(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1478ba684(local_28,param_2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f119a FUN_1479f119a body=128 status=ok
// SIG undefined FUN_1479f119a(void)

void FUN_1479f119a(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1479fca74(param_1,&local_28);
  if (local_28 != 0) {
    FUN_147890384(local_28,param_2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f122c FUN_1479f122c body=503 status=ok
// SIG undefined FUN_1479f122c(void)

void FUN_1479f122c(undefined4 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      return;
    }
    lVar1 = *(longlong *)(param_2 + 0xa8);
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      FUN_1479f1424(param_2 + 0x5a6,param_1);
    }
    if (lVar1 == 0) {
      return;
    }
    if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
      return;
    }
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) < 0) {
      return;
    }
    if ((*(byte *)(lVar1 + 0x348) & 2) != 0) {
      return;
    }
    FUN_1478b81a0(lVar1,param_1);
    if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0) {
      return;
    }
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) < 0) {
      return;
    }
    if ((*(byte *)(lVar1 + 0x348) & 2) != 0) {
      return;
    }
    FUN_1479f14bc(lVar1 + 0x20c,param_1,lVar1);
    return;
  }
  lVar1 = *(longlong *)(param_3 + 0xa8);
  if (param_2 != 0) {
    if (param_3 == param_2) {
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0xa8);
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      FUN_1479f1424(param_2 + 0x5a6,param_1);
    }
    if (lVar1 == lVar2) goto LAB_1479f131f;
    if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
        (-1 < *(int *)(*(longlong *)(lVar2 + 0x10) + 0xd4))) &&
       ((((*(byte *)(lVar2 + 0x348) & 2) == 0 &&
         (FUN_1478b81a0(lVar2,param_1), (*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
        ((-1 < *(int *)(*(longlong *)(lVar2 + 0x10) + 0xd4) && ((*(byte *)(lVar2 + 0x348) & 2) == 0)
         ))))) {
      FUN_1479f14bc(lVar2 + 0x20c,param_1,lVar2);
    }
  }
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      ((-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) &&
       ((((*(byte *)(lVar1 + 0x348) & 2) == 0 &&
         (FUN_1478b8144(lVar1,param_1), (*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
        (-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4))))))) &&
     ((*(byte *)(lVar1 + 0x348) & 2) == 0)) {
    FUN_1479f1554(lVar1 + 0x20b,param_1,lVar1);
  }
LAB_1479f131f:
  if ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  FUN_1479f15ec(param_3 + 0x5a5,param_1,param_3);
  return;
}



// FUNCTION 1479f1424 FUN_1479f1424 body=134 status=ok
// SIG undefined FUN_1479f1424(void)

void FUN_1479f1424(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fcbf8(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478906c4(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f14bc FUN_1479f14bc body=134 status=ok
// SIG undefined FUN_1479f14bc(void)

void FUN_1479f14bc(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fcd7c(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478ba9c4(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1554 FUN_1479f1554 body=134 status=ok
// SIG undefined FUN_1479f1554(void)

void FUN_1479f1554(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fcf00(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478ba982(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f15ec FUN_1479f15ec body=134 status=ok
// SIG undefined FUN_1479f15ec(void)

void FUN_1479f15ec(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fd084(param_1,&local_30);
  if (local_30 != 0) {
    FUN_147890682(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1684 FUN_1479f1684 body=364 status=ok
// SIG undefined FUN_1479f1684(void)

void FUN_1479f1684(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
      (-1 < *(int *)(*(longlong *)(lVar5 + 0x10) + 0xd4))) && ((*(byte *)(lVar5 + 0x348) & 2) == 0))
  {
    local_30 = *param_2;
    local_28 = param_2[1];
    local_20 = param_2[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1478b7d2c(lVar5,&local_30);
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(*(longlong *)(lVar5 + 0x10) + 0xd4) && ((*(byte *)(lVar5 + 0x348) & 2) == 0))
       )) {
      lVar3 = lVar5 + 0x207;
      local_48 = *param_2;
      local_40 = param_2[1];
      local_38 = param_2[2];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
        lVar5 = *(longlong *)(param_1 + 0xa8);
      }
      FUN_1479f17f2(lVar3,lVar5,&local_48);
    }
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    local_60 = *param_2;
    local_58 = param_2[1];
    local_50 = param_2[2];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1479f18e0(param_1 + 0x5a1,param_1,&local_60);
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


