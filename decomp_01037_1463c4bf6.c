// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463c4bf6 FUN_1463c4bf6 body=29 status=ok
// SIG undefined FUN_1463c4bf6(void)

undefined8 FUN_1463c4bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c4c14 FUN_1463c4c14 body=29 status=ok
// SIG undefined FUN_1463c4c14(void)

undefined8 FUN_1463c4c14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c4c32 FUN_1463c4c32 body=132 status=ok
// SIG undefined FUN_1463c4c32(void)

void FUN_1463c4c32(longlong param_1,int param_2)

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



// FUNCTION 1463c4cb8 FUN_1463c4cb8 body=143 status=ok
// SIG undefined FUN_1463c4cb8(void)

void FUN_1463c4cb8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1463c4d48 FUN_1463c4d48 body=106 status=ok
// SIG undefined FUN_1463c4d48(void)

undefined8 FUN_1463c4d48(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1463c4db2 FUN_1463c4db2 body=62 status=ok
// SIG undefined FUN_1463c4db2(void)

void FUN_1463c4db2(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463c4dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 1463c4df0 FUN_1463c4df0 body=111 status=ok
// SIG undefined FUN_1463c4df0(void)

void FUN_1463c4df0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14110cf4a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = FUN_141167894();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0x1e6930c2;
  }
  return;
}



// FUNCTION 1463c4e60 FUN_1463c4e60 body=118 status=ok
// SIG undefined FUN_1463c4e60(void)

void FUN_1463c4e60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14110cf4a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = FUN_141167894();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0x1e6930c21e6930c2;
  }
  return;
}



// FUNCTION 1463c4ed6 FUN_1463c4ed6 body=126 status=ok
// SIG undefined FUN_1463c4ed6(void)

void FUN_1463c4ed6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14110cf4a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = FUN_141167894();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x40) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x48) = 0x3bcd261840000000;
  }
  return;
}



// FUNCTION 1463c4f54 FUN_1463c4f54 body=138 status=ok
// SIG undefined FUN_1463c4f54(void)

void FUN_1463c4f54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14110cf4a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = FUN_141167894();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x58) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x60) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x38) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x40) = 0x3bcd261840000000;
    *(undefined8 *)(param_1 + 0x48) = 0x3bcd261840000000;
  }
  return;
}



// FUNCTION 1463c4fde FUN_1463c4fde body=47 status=ok
// SIG undefined FUN_1463c4fde(void)

longlong FUN_1463c4fde(void)

{
  if (DAT_14cad6f40 == 0) {
    FUN_14073dd9a(&DAT_14cad6f40,&PTR_LAB_14a8bd1f8);
  }
  return DAT_14cad6f40;
}



// FUNCTION 1463c500d FUN_1463c500d body=35 status=ok
// SIG undefined FUN_1463c500d(void)

void FUN_1463c500d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8bd940;
  return;
}



// FUNCTION 1463c5035 FUN_1463c5035 body=47 status=ok
// SIG undefined FUN_1463c5035(void)

longlong FUN_1463c5035(void)

{
  if (DAT_14cad6f58 == 0) {
    FUN_14073dd9a(&DAT_14cad6f58,&PTR_LAB_14a8bd8f8);
  }
  return DAT_14cad6f58;
}



// FUNCTION 1463c5064 FUN_1463c5064 body=35 status=ok
// SIG undefined FUN_1463c5064(void)

void FUN_1463c5064(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8bdcb0;
  return;
}



// FUNCTION 1463c508c FUN_1463c508c body=49 status=ok
// SIG undefined FUN_1463c508c(void)

longlong FUN_1463c508c(void)

{
  if (DAT_14cad6f70 == 0) {
    FUN_14073dd9a(&DAT_14cad6f70,&PTR_LAB_14a8bdc68);
  }
  return DAT_14cad6f70;
}



// FUNCTION 1463c50bd FUN_1463c50bd body=677 status=ok
// SIG undefined FUN_1463c50bd(void)

undefined4 * FUN_1463c50bd(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f666666;
  *param_1 = 2;
  pfVar3 = DAT_14cad7840;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar8 + 0xc60) == 0x40000002) {
    param_1[2] = *DAT_14cad7840 / 100.0;
LAB_1463c52b9:
    param_1[3] = *DAT_14cad7858 / 100.0;
LAB_1463c52d1:
    param_1[4] = *DAT_14cad7870 / 100.0;
LAB_1463c52e9:
    param_1[10] = *DAT_14cad79f0;
LAB_1463c52f5:
    fVar9 = *DAT_14cad7888;
LAB_1463c5300:
    param_1[5] = (*DAT_14cad7930 / -100.0 + 1.0) * fVar9;
LAB_1463c5324:
    param_1[6] = *DAT_14cad79a8 / 100.0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0xc60);
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[2] = pfVar3[bVar6 ^ 1] / 100.0;
    pfVar3 = DAT_14cad7858;
    if (iVar2 == 0x40000002) goto LAB_1463c52b9;
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[3] = pfVar3[bVar6 ^ 1] / 100.0;
    pfVar3 = DAT_14cad7870;
    if (iVar2 == 0x40000002) goto LAB_1463c52d1;
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[4] = pfVar3[bVar6 ^ 1] / 100.0;
    puVar5 = DAT_14cad79f0;
    if (iVar2 == 0x40000002) goto LAB_1463c52e9;
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[10] = puVar5[bVar6 ^ 1];
    pfVar3 = DAT_14cad7888;
    if (iVar2 == 0x40000002) goto LAB_1463c52f5;
    bVar6 = FUN_144a61b4f();
    pfVar4 = DAT_14cad7930;
    fVar9 = pfVar3[bVar6 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_1463c5300;
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[5] = fVar9 * (pfVar4[bVar6 ^ 1] / -100.0 + 1.0);
    pfVar3 = DAT_14cad79a8;
    if (iVar2 == 0x40000002) goto LAB_1463c5324;
    bVar6 = FUN_144a61b4f();
    iVar2 = *piVar1;
    param_1[6] = pfVar3[bVar6 ^ 1] / 100.0;
    pfVar3 = DAT_14cad7918;
    if (iVar2 != 0x40000002) {
      bVar6 = FUN_144a61b4f();
      iVar2 = *piVar1;
      param_1[7] = pfVar3[bVar6 ^ 1] / 100.0;
      lVar8 = DAT_14cad7990;
      if (iVar2 == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar6 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar6 ^ 1);
      }
      goto LAB_1463c5287;
    }
  }
  param_1[7] = *DAT_14cad7918 / 100.0;
  uVar7 = 0;
  lVar8 = DAT_14cad7990;
LAB_1463c5287:
  param_1[8] = *(undefined4 *)(lVar8 + uVar7 * 4);
  return param_1;
}



// FUNCTION 1463c5362 FUN_1463c5362 body=55 status=ok
// SIG undefined FUN_1463c5362(void)

void FUN_1463c5362(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad7a58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad7a58 = FUN_140002ddd(FUN_1463c5399,uVar1,L"GraphReference");
  }
  return;
}



// FUNCTION 1463c5399 FUN_1463c5399 body=47 status=ok
// SIG undefined FUN_1463c5399(void)

longlong FUN_1463c5399(void)

{
  if (DAT_14cad7a50 == 0) {
    FUN_14086a14e(&DAT_14cad7a50,&PTR_FUN_14a8bf858);
  }
  return DAT_14cad7a50;
}



// FUNCTION 1463c53c8 FUN_1463c53c8 body=48 status=ok
// SIG undefined FUN_1463c53c8(void)

void FUN_1463c53c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a8ca4b0;
  return;
}



// FUNCTION 1463c53f8 FUN_1463c53f8 body=66 status=ok
// SIG undefined FUN_1463c53f8(void)

void FUN_1463c53f8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8bfae0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 2;
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  return;
}



// FUNCTION 1463c543a FUN_1463c543a body=47 status=ok
// SIG undefined FUN_1463c543a(void)

longlong FUN_1463c543a(void)

{
  if (DAT_14cad7a70 == 0) {
    FUN_14073dd9a(&DAT_14cad7a70,&PTR_LAB_14a8bfa98);
  }
  return DAT_14cad7a70;
}



// FUNCTION 1463c5469 FUN_1463c5469 body=47 status=ok
// SIG undefined FUN_1463c5469(void)

longlong FUN_1463c5469(void)

{
  if (DAT_14cad7aa8 == 0) {
    FUN_14073dd9a(&DAT_14cad7aa8,&PTR_LAB_14a8bffe8);
  }
  return DAT_14cad7aa8;
}



// FUNCTION 1463c5498 FUN_1463c5498 body=55 status=ok
// SIG undefined FUN_1463c5498(void)

void FUN_1463c5498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad7bb8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad7bb8 = FUN_140002ddd(FUN_1463c54cf,uVar1,L"AssetImportInfo");
  }
  return;
}



// FUNCTION 1463c54cf FUN_1463c54cf body=47 status=ok
// SIG undefined FUN_1463c54cf(void)

longlong FUN_1463c54cf(void)

{
  if (DAT_14cad7bb0 == 0) {
    FUN_14086a14e(&DAT_14cad7bb0,&PTR_FUN_14a8c0630);
  }
  return DAT_14cad7bb0;
}



// FUNCTION 1463c54fe FUN_1463c54fe body=48 status=ok
// SIG undefined FUN_1463c54fe(void)

void FUN_1463c54fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a8ca620;
  return;
}



// FUNCTION 1463c552e FUN_1463c552e body=35 status=ok
// SIG undefined FUN_1463c552e(void)

void FUN_1463c552e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c06f0;
  return;
}



// FUNCTION 1463c5551 FUN_1463c5551 body=49 status=ok
// SIG undefined FUN_1463c5551(void)

longlong FUN_1463c5551(void)

{
  if (DAT_14cad7bd0 == 0) {
    FUN_14073dd9a(&DAT_14cad7bd0,&PTR_LAB_14a8c06a8);
  }
  return DAT_14cad7bd0;
}



// FUNCTION 1463c5582 FUN_1463c5582 body=35 status=ok
// SIG undefined FUN_1463c5582(void)

void FUN_1463c5582(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c0a70;
  return;
}



// FUNCTION 1463c55aa FUN_1463c55aa body=47 status=ok
// SIG undefined FUN_1463c55aa(void)

longlong FUN_1463c55aa(void)

{
  if (DAT_14cad7be8 == 0) {
    FUN_14073dd9a(&DAT_14cad7be8,&PTR_LAB_14a8c0a28);
  }
  return DAT_14cad7be8;
}



// FUNCTION 1463c55d9 FUN_1463c55d9 body=46 status=ok
// SIG undefined FUN_1463c55d9(void)

void FUN_1463c55d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c0df0;
  puVar1[5] = &PTR_FUN_14a8c1090;
  return;
}



// FUNCTION 1463c5607 FUN_1463c5607 body=47 status=ok
// SIG undefined FUN_1463c5607(void)

longlong FUN_1463c5607(void)

{
  if (DAT_14cad7c00 == 0) {
    FUN_14073dd9a(&DAT_14cad7c00,&PTR_LAB_14a8c0da8);
  }
  return DAT_14cad7c00;
}



// FUNCTION 1463c5636 FUN_1463c5636 body=46 status=ok
// SIG undefined FUN_1463c5636(void)

void FUN_1463c5636(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c11a0;
  puVar1[5] = &PTR_FUN_14a8c1440;
  return;
}



// FUNCTION 1463c5664 FUN_1463c5664 body=47 status=ok
// SIG undefined FUN_1463c5664(void)

longlong FUN_1463c5664(void)

{
  if (DAT_14cad7c18 == 0) {
    FUN_14073dd9a(&DAT_14cad7c18,&PTR_LAB_14a8c1158);
  }
  return DAT_14cad7c18;
}



// FUNCTION 1463c5693 FUN_1463c5693 body=46 status=ok
// SIG undefined FUN_1463c5693(void)

void FUN_1463c5693(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c1540;
  puVar1[5] = &PTR_FUN_14a8c17e0;
  return;
}



// FUNCTION 1463c56c1 FUN_1463c56c1 body=47 status=ok
// SIG undefined FUN_1463c56c1(void)

longlong FUN_1463c56c1(void)

{
  if (DAT_14cad7c38 == 0) {
    FUN_14073dd9a(&DAT_14cad7c38,&PTR_LAB_14a8c14f8);
  }
  return DAT_14cad7c38;
}



// FUNCTION 1463c56f0 FUN_1463c56f0 body=46 status=ok
// SIG undefined FUN_1463c56f0(void)

void FUN_1463c56f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c1900;
  puVar1[5] = &PTR_FUN_14a8c1ba0;
  return;
}



// FUNCTION 1463c571e FUN_1463c571e body=47 status=ok
// SIG undefined FUN_1463c571e(void)

longlong FUN_1463c571e(void)

{
  if (DAT_14cad7c50 == 0) {
    FUN_14073dd9a(&DAT_14cad7c50,&PTR_LAB_14a8c18b8);
  }
  return DAT_14cad7c50;
}



// FUNCTION 1463c574d FUN_1463c574d body=46 status=ok
// SIG undefined FUN_1463c574d(void)

void FUN_1463c574d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c1cb0;
  puVar1[5] = &PTR_FUN_14a8c1f50;
  return;
}



// FUNCTION 1463c577b FUN_1463c577b body=47 status=ok
// SIG undefined FUN_1463c577b(void)

longlong FUN_1463c577b(void)

{
  if (DAT_14cad7c68 == 0) {
    FUN_14073dd9a(&DAT_14cad7c68,&PTR_LAB_14a8c1c68);
  }
  return DAT_14cad7c68;
}



// FUNCTION 1463c57aa FUN_1463c57aa body=46 status=ok
// SIG undefined FUN_1463c57aa(void)

void FUN_1463c57aa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c20b0;
  puVar1[5] = &PTR_FUN_14a8c2350;
  return;
}



// FUNCTION 1463c57d8 FUN_1463c57d8 body=47 status=ok
// SIG undefined FUN_1463c57d8(void)

longlong FUN_1463c57d8(void)

{
  if (DAT_14cad7c90 == 0) {
    FUN_14073dd9a(&DAT_14cad7c90,&PTR_LAB_14a8c2068);
  }
  return DAT_14cad7c90;
}



// FUNCTION 1463c5807 FUN_1463c5807 body=46 status=ok
// SIG undefined FUN_1463c5807(void)

void FUN_1463c5807(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c2610;
  puVar1[5] = &PTR_FUN_14a8c28b0;
  return;
}



// FUNCTION 1463c5835 FUN_1463c5835 body=47 status=ok
// SIG undefined FUN_1463c5835(void)

longlong FUN_1463c5835(void)

{
  if (DAT_14cad7ca8 == 0) {
    FUN_14073dd9a(&DAT_14cad7ca8,&PTR_LAB_14a8c25c8);
  }
  return DAT_14cad7ca8;
}



// FUNCTION 1463c5864 FUN_1463c5864 body=46 status=ok
// SIG undefined FUN_1463c5864(void)

void FUN_1463c5864(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c29b0;
  puVar1[5] = &PTR_FUN_14a8c2c50;
  return;
}



// FUNCTION 1463c5892 FUN_1463c5892 body=47 status=ok
// SIG undefined FUN_1463c5892(void)

longlong FUN_1463c5892(void)

{
  if (DAT_14cad7cc8 == 0) {
    FUN_14073dd9a(&DAT_14cad7cc8,&PTR_LAB_14a8c2968);
  }
  return DAT_14cad7cc8;
}



// FUNCTION 1463c58c1 FUN_1463c58c1 body=46 status=ok
// SIG undefined FUN_1463c58c1(void)

void FUN_1463c58c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c2d70;
  puVar1[5] = &PTR_FUN_14a8c3010;
  return;
}



// FUNCTION 1463c58ef FUN_1463c58ef body=47 status=ok
// SIG undefined FUN_1463c58ef(void)

longlong FUN_1463c58ef(void)

{
  if (DAT_14cad7ce0 == 0) {
    FUN_14073dd9a(&DAT_14cad7ce0,&PTR_LAB_14a8c2d28);
  }
  return DAT_14cad7ce0;
}



// FUNCTION 1463c591e FUN_1463c591e body=46 status=ok
// SIG undefined FUN_1463c591e(void)

void FUN_1463c591e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c3120;
  puVar1[5] = &PTR_FUN_14a8c33c0;
  return;
}



// FUNCTION 1463c594c FUN_1463c594c body=47 status=ok
// SIG undefined FUN_1463c594c(void)

longlong FUN_1463c594c(void)

{
  if (DAT_14cad7cf8 == 0) {
    FUN_14073dd9a(&DAT_14cad7cf8,&PTR_LAB_14a8c30d8);
  }
  return DAT_14cad7cf8;
}



// FUNCTION 1463c597b FUN_1463c597b body=46 status=ok
// SIG undefined FUN_1463c597b(void)

void FUN_1463c597b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c3530;
  puVar1[5] = &PTR_FUN_14a8c37d0;
  return;
}



// FUNCTION 1463c59a9 FUN_1463c59a9 body=47 status=ok
// SIG undefined FUN_1463c59a9(void)

longlong FUN_1463c59a9(void)

{
  if (DAT_14cad7d10 == 0) {
    FUN_14073dd9a(&DAT_14cad7d10,&PTR_LAB_14a8c34e8);
  }
  return DAT_14cad7d10;
}



// FUNCTION 1463c59d8 FUN_1463c59d8 body=40 status=ok
// SIG undefined FUN_1463c59d8(void)

void FUN_1463c59d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_140b4b170(param_1,uVar1);
  *param_1 = &PTR_FUN_14a8c3a80;
  return;
}



// FUNCTION 1463c5a00 FUN_1463c5a00 body=47 status=ok
// SIG undefined FUN_1463c5a00(void)

longlong FUN_1463c5a00(void)

{
  if (DAT_14cad7d48 == 0) {
    FUN_14073dd9a(&DAT_14cad7d48,&PTR_LAB_14a8c3a38);
  }
  return DAT_14cad7d48;
}



// FUNCTION 1463c5a30 FUN_1463c5a30 body=55 status=ok
// SIG undefined FUN_1463c5a30(void)

void FUN_1463c5a30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad7d60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad7d60 = FUN_140002ddd(FUN_1463c5a67,uVar1,L"TypedElementPasteOptions");
  }
  return;
}



// FUNCTION 1463c5a67 FUN_1463c5a67 body=49 status=ok
// SIG undefined FUN_1463c5a67(void)

longlong FUN_1463c5a67(void)

{
  if (DAT_14cad7d58 == 0) {
    FUN_14086a14e(&DAT_14cad7d58,&PTR_FUN_14a8c3eb8);
  }
  return DAT_14cad7d58;
}



// FUNCTION 1463c5a98 FUN_1463c5a98 body=48 status=ok
// SIG undefined FUN_1463c5a98(void)

void FUN_1463c5a98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a8ca7b0;
  return;
}



// FUNCTION 1463c5ac8 FUN_1463c5ac8 body=49 status=ok
// SIG undefined FUN_1463c5ac8(void)

longlong FUN_1463c5ac8(void)

{
  if (DAT_14cad7dd8 == 0) {
    FUN_14073dd9a(&DAT_14cad7dd8,&PTR_LAB_14a8c53b0);
  }
  return DAT_14cad7dd8;
}



// FUNCTION 1463c5af9 FUN_1463c5af9 body=47 status=ok
// SIG undefined FUN_1463c5af9(void)

longlong FUN_1463c5af9(void)

{
  if (DAT_14cad7d70 == 0) {
    FUN_14000fc22(&DAT_14cad7d70,&PTR_FUN_14a8c3f98);
  }
  return DAT_14cad7d70;
}



// FUNCTION 1463c5b28 FUN_1463c5b28 body=47 status=ok
// SIG undefined FUN_1463c5b28(void)

longlong FUN_1463c5b28(void)

{
  if (DAT_14cad7d78 == 0) {
    FUN_14000fc22(&DAT_14cad7d78,&PTR_FUN_14a8c40d8);
  }
  return DAT_14cad7d78;
}



// FUNCTION 1463c5b57 FUN_1463c5b57 body=47 status=ok
// SIG undefined FUN_1463c5b57(void)

longlong FUN_1463c5b57(void)

{
  if (DAT_14cad7d80 == 0) {
    FUN_14000fc22(&DAT_14cad7d80,&PTR_FUN_14a8c41c8);
  }
  return DAT_14cad7d80;
}



// FUNCTION 1463c5b86 FUN_1463c5b86 body=47 status=ok
// SIG undefined FUN_1463c5b86(void)

longlong FUN_1463c5b86(void)

{
  if (DAT_14cad7d88 == 0) {
    FUN_14000fc22(&DAT_14cad7d88,&PTR_FUN_14a8c42f8);
  }
  return DAT_14cad7d88;
}



// FUNCTION 1463c5bb5 FUN_1463c5bb5 body=49 status=ok
// SIG undefined FUN_1463c5bb5(void)

longlong FUN_1463c5bb5(void)

{
  if (DAT_14cad7e18 == 0) {
    FUN_14086a14e(&DAT_14cad7e18,&PTR_FUN_14a8c5a78);
  }
  return DAT_14cad7e18;
}



// FUNCTION 1463c5be6 FUN_1463c5be6 body=47 status=ok
// SIG undefined FUN_1463c5be6(void)

longlong FUN_1463c5be6(void)

{
  if (DAT_14cad7d90 == 0) {
    FUN_14000fc22(&DAT_14cad7d90,&PTR_FUN_14a8c44d8);
  }
  return DAT_14cad7d90;
}



// FUNCTION 1463c5c15 FUN_1463c5c15 body=47 status=ok
// SIG undefined FUN_1463c5c15(void)

longlong FUN_1463c5c15(void)

{
  if (DAT_14cad7d98 == 0) {
    FUN_14000fc22(&DAT_14cad7d98,&PTR_FUN_14a8c4658);
  }
  return DAT_14cad7d98;
}



// FUNCTION 1463c5c44 FUN_1463c5c44 body=47 status=ok
// SIG undefined FUN_1463c5c44(void)

longlong FUN_1463c5c44(void)

{
  if (DAT_14cad7da0 == 0) {
    FUN_14000fc22(&DAT_14cad7da0,&PTR_FUN_14a8c4818);
  }
  return DAT_14cad7da0;
}



// FUNCTION 1463c5c73 FUN_1463c5c73 body=47 status=ok
// SIG undefined FUN_1463c5c73(void)

longlong FUN_1463c5c73(void)

{
  if (DAT_14cad7da8 == 0) {
    FUN_14000fc22(&DAT_14cad7da8,&PTR_FUN_14a8c49d8);
  }
  return DAT_14cad7da8;
}



// FUNCTION 1463c5ca2 FUN_1463c5ca2 body=47 status=ok
// SIG undefined FUN_1463c5ca2(void)

longlong FUN_1463c5ca2(void)

{
  if (DAT_14cad7db0 == 0) {
    FUN_14000fc22(&DAT_14cad7db0,&PTR_FUN_14a8c4ba0);
  }
  return DAT_14cad7db0;
}



// FUNCTION 1463c5cd1 FUN_1463c5cd1 body=47 status=ok
// SIG undefined FUN_1463c5cd1(void)

longlong FUN_1463c5cd1(void)

{
  if (DAT_14cad7db8 == 0) {
    FUN_14000fc22(&DAT_14cad7db8,&PTR_FUN_14a8c4d68);
  }
  return DAT_14cad7db8;
}



// FUNCTION 1463c5d00 FUN_1463c5d00 body=47 status=ok
// SIG undefined FUN_1463c5d00(void)

longlong FUN_1463c5d00(void)

{
  if (DAT_14cad7dc0 == 0) {
    FUN_14000fc22(&DAT_14cad7dc0,&PTR_FUN_14a8c4f78);
  }
  return DAT_14cad7dc0;
}



// FUNCTION 1463c5d2f FUN_1463c5d2f body=47 status=ok
// SIG undefined FUN_1463c5d2f(void)

longlong FUN_1463c5d2f(void)

{
  if (DAT_14cad7dc8 == 0) {
    FUN_14000fc22(&DAT_14cad7dc8,&PTR_FUN_14a8c5188);
  }
  return DAT_14cad7dc8;
}



// FUNCTION 1463c5d5e FUN_1463c5d5e body=34 status=ok
// SIG undefined FUN_1463c5d5e(void)

void FUN_1463c5d5e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a53450();
  FUN_14069c8d6(uVar1,&PTR_s_CopyNormalizedElements_14a8c51d0,0xc);
  return;
}



// FUNCTION 1463c5d80 FUN_1463c5d80 body=47 status=ok
// SIG undefined FUN_1463c5d80(void)

longlong FUN_1463c5d80(void)

{
  if (DAT_14cad7e00 == 0) {
    FUN_1409ce572(&DAT_14cad7e00,&PTR_FUN_14a8c58c0);
  }
  return DAT_14cad7e00;
}



// FUNCTION 1463c5db0 FUN_1463c5db0 body=55 status=ok
// SIG undefined FUN_1463c5db0(void)

void FUN_1463c5db0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad7e20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad7e20 = FUN_140002ddd(FUN_1463c5bb5,uVar1,L"TypedElementDeletionOptions");
  }
  return;
}



// FUNCTION 1463c5de8 FUN_1463c5de8 body=48 status=ok
// SIG undefined FUN_1463c5de8(void)

void FUN_1463c5de8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14a8ca9a0;
  return;
}



// FUNCTION 1463c5e18 FUN_1463c5e18 body=47 status=ok
// SIG undefined FUN_1463c5e18(void)

longlong FUN_1463c5e18(void)

{
  if (DAT_14cad7e30 == 0) {
    FUN_14000fc22(&DAT_14cad7e30,&PTR_FUN_14a8c5b58);
  }
  return DAT_14cad7e30;
}



// FUNCTION 1463c5e47 FUN_1463c5e47 body=47 status=ok
// SIG undefined FUN_1463c5e47(void)

longlong FUN_1463c5e47(void)

{
  if (DAT_14cad7e38 == 0) {
    FUN_14000fc22(&DAT_14cad7e38,&PTR_FUN_14a8c5c48);
  }
  return DAT_14cad7e38;
}



// FUNCTION 1463c5e76 FUN_1463c5e76 body=47 status=ok
// SIG undefined FUN_1463c5e76(void)

longlong FUN_1463c5e76(void)

{
  if (DAT_14cad7e40 == 0) {
    FUN_14000fc22(&DAT_14cad7e40,&PTR_FUN_14a8c5d30);
  }
  return DAT_14cad7e40;
}



// FUNCTION 1463c5ea5 FUN_1463c5ea5 body=47 status=ok
// SIG undefined FUN_1463c5ea5(void)

longlong FUN_1463c5ea5(void)

{
  if (DAT_14cad7e48 == 0) {
    FUN_14000fc22(&DAT_14cad7e48,&PTR_FUN_14a8c5eb0);
  }
  return DAT_14cad7e48;
}



// FUNCTION 1463c5ed4 FUN_1463c5ed4 body=47 status=ok
// SIG undefined FUN_1463c5ed4(void)

longlong FUN_1463c5ed4(void)

{
  if (DAT_14cad7e50 == 0) {
    FUN_14000fc22(&DAT_14cad7e50,&PTR_FUN_14a8c5f98);
  }
  return DAT_14cad7e50;
}



// FUNCTION 1463c5f03 FUN_1463c5f03 body=47 status=ok
// SIG undefined FUN_1463c5f03(void)

longlong FUN_1463c5f03(void)

{
  if (DAT_14cad7e58 == 0) {
    FUN_14000fc22(&DAT_14cad7e58,&PTR_FUN_14a8c6080);
  }
  return DAT_14cad7e58;
}



// FUNCTION 1463c5f32 FUN_1463c5f32 body=47 status=ok
// SIG undefined FUN_1463c5f32(void)

longlong FUN_1463c5f32(void)

{
  if (DAT_14cad7e60 == 0) {
    FUN_14000fc22(&DAT_14cad7e60,&PTR_FUN_14a8c6258);
  }
  return DAT_14cad7e60;
}



// FUNCTION 1463c5f61 FUN_1463c5f61 body=47 status=ok
// SIG undefined FUN_1463c5f61(void)

longlong FUN_1463c5f61(void)

{
  if (DAT_14cad7e68 == 0) {
    FUN_14000fc22(&DAT_14cad7e68,&PTR_FUN_14a8c63e8);
  }
  return DAT_14cad7e68;
}



// FUNCTION 1463c5f90 FUN_1463c5f90 body=47 status=ok
// SIG undefined FUN_1463c5f90(void)

longlong FUN_1463c5f90(void)

{
  if (DAT_14cad7e70 == 0) {
    FUN_14000fc22(&DAT_14cad7e70,&PTR_FUN_14a8c6528);
  }
  return DAT_14cad7e70;
}



// FUNCTION 1463c5fbf FUN_1463c5fbf body=47 status=ok
// SIG undefined FUN_1463c5fbf(void)

longlong FUN_1463c5fbf(void)

{
  if (DAT_14cad7e78 == 0) {
    FUN_14000fc22(&DAT_14cad7e78,&PTR_FUN_14a8c6610);
  }
  return DAT_14cad7e78;
}



// FUNCTION 1463c5fee FUN_1463c5fee body=47 status=ok
// SIG undefined FUN_1463c5fee(void)

longlong FUN_1463c5fee(void)

{
  if (DAT_14cad7e80 == 0) {
    FUN_14000fc22(&DAT_14cad7e80,&PTR_FUN_14a8c66f0);
  }
  return DAT_14cad7e80;
}



// FUNCTION 1463c601d FUN_1463c601d body=47 status=ok
// SIG undefined FUN_1463c601d(void)

longlong FUN_1463c601d(void)

{
  if (DAT_14cad7e88 == 0) {
    FUN_14000fc22(&DAT_14cad7e88,&PTR_FUN_14a8c6828);
  }
  return DAT_14cad7e88;
}



// FUNCTION 1463c604c FUN_1463c604c body=47 status=ok
// SIG undefined FUN_1463c604c(void)

longlong FUN_1463c604c(void)

{
  if (DAT_14cad7e90 == 0) {
    FUN_14000fc22(&DAT_14cad7e90,&PTR_FUN_14a8c6958);
  }
  return DAT_14cad7e90;
}



// FUNCTION 1463c607b FUN_1463c607b body=47 status=ok
// SIG undefined FUN_1463c607b(void)

longlong FUN_1463c607b(void)

{
  if (DAT_14cad7e98 == 0) {
    FUN_14000fc22(&DAT_14cad7e98,&PTR_FUN_14a8c6a90);
  }
  return DAT_14cad7e98;
}



// FUNCTION 1463c60aa FUN_1463c60aa body=47 status=ok
// SIG undefined FUN_1463c60aa(void)

longlong FUN_1463c60aa(void)

{
  if (DAT_14cad7ea0 == 0) {
    FUN_14000fc22(&DAT_14cad7ea0,&PTR_FUN_14a8c6b78);
  }
  return DAT_14cad7ea0;
}



// FUNCTION 1463c60d9 FUN_1463c60d9 body=47 status=ok
// SIG undefined FUN_1463c60d9(void)

longlong FUN_1463c60d9(void)

{
  if (DAT_14cad7ea8 == 0) {
    FUN_14000fc22(&DAT_14cad7ea8,&PTR_FUN_14a8c6c18);
  }
  return DAT_14cad7ea8;
}



// FUNCTION 1463c6108 FUN_1463c6108 body=47 status=ok
// SIG undefined FUN_1463c6108(void)

longlong FUN_1463c6108(void)

{
  if (DAT_14cad7eb0 == 0) {
    FUN_14000fc22(&DAT_14cad7eb0,&PTR_FUN_14a8c6cb8);
  }
  return DAT_14cad7eb0;
}



// FUNCTION 1463c6137 FUN_1463c6137 body=47 status=ok
// SIG undefined FUN_1463c6137(void)

longlong FUN_1463c6137(void)

{
  if (DAT_14cad7eb8 == 0) {
    FUN_14000fc22(&DAT_14cad7eb8,&PTR_FUN_14a8c6d58);
  }
  return DAT_14cad7eb8;
}



// FUNCTION 1463c6166 FUN_1463c6166 body=47 status=ok
// SIG undefined FUN_1463c6166(void)

longlong FUN_1463c6166(void)

{
  if (DAT_14cad7ec0 == 0) {
    FUN_14000fc22(&DAT_14cad7ec0,&PTR_FUN_14a8c6e98);
  }
  return DAT_14cad7ec0;
}



// FUNCTION 1463c6195 FUN_1463c6195 body=47 status=ok
// SIG undefined FUN_1463c6195(void)

longlong FUN_1463c6195(void)

{
  if (DAT_14cad7ec8 == 0) {
    FUN_14000fc22(&DAT_14cad7ec8,&PTR_FUN_14a8c6fd8);
  }
  return DAT_14cad7ec8;
}



// FUNCTION 1463c61c4 FUN_1463c61c4 body=47 status=ok
// SIG undefined FUN_1463c61c4(void)

longlong FUN_1463c61c4(void)

{
  if (DAT_14cad7ed0 == 0) {
    FUN_14000fc22(&DAT_14cad7ed0,&PTR_FUN_14a8c7110);
  }
  return DAT_14cad7ed0;
}



// FUNCTION 1463c61f3 FUN_1463c61f3 body=47 status=ok
// SIG undefined FUN_1463c61f3(void)

longlong FUN_1463c61f3(void)

{
  if (DAT_14cad7ed8 == 0) {
    FUN_14000fc22(&DAT_14cad7ed8,&PTR_FUN_14a8c7240);
  }
  return DAT_14cad7ed8;
}



// FUNCTION 1463c6222 FUN_1463c6222 body=34 status=ok
// SIG undefined FUN_1463c6222(void)

void FUN_1463c6222(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d4b68();
  FUN_14069c8d6(uVar1,&PTR_s_CanDeleteElement_14a8c7280,0x16);
  return;
}



// FUNCTION 1463c6249 FUN_1463c6249 body=35 status=ok
// SIG undefined FUN_1463c6249(void)

void FUN_1463c6249(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c75e0;
  return;
}



// FUNCTION 1463c626c FUN_1463c626c body=46 status=ok
// SIG undefined FUN_1463c626c(void)

void FUN_1463c626c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c7a00;
  puVar1[5] = &PTR_FUN_14a8c7ca0;
  return;
}



// FUNCTION 1463c629a FUN_1463c629a body=47 status=ok
// SIG undefined FUN_1463c629a(void)

longlong FUN_1463c629a(void)

{
  if (DAT_14cad7f00 == 0) {
    FUN_14073dd9a(&DAT_14cad7f00,&PTR_LAB_14a8c79b8);
  }
  return DAT_14cad7f00;
}



// FUNCTION 1463c62c9 FUN_1463c62c9 body=46 status=ok
// SIG undefined FUN_1463c62c9(void)

void FUN_1463c62c9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c7db0;
  puVar1[5] = &PTR_FUN_14a8c8050;
  return;
}



// FUNCTION 1463c62f7 FUN_1463c62f7 body=47 status=ok
// SIG undefined FUN_1463c62f7(void)

longlong FUN_1463c62f7(void)

{
  if (DAT_14cad7f18 == 0) {
    FUN_14073dd9a(&DAT_14cad7f18,&PTR_LAB_14a8c7d68);
  }
  return DAT_14cad7f18;
}



// FUNCTION 1463c6326 FUN_1463c6326 body=46 status=ok
// SIG undefined FUN_1463c6326(void)

void FUN_1463c6326(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c8150;
  puVar1[5] = &PTR_FUN_14a8c83f0;
  return;
}



// FUNCTION 1463c6354 FUN_1463c6354 body=47 status=ok
// SIG undefined FUN_1463c6354(void)

longlong FUN_1463c6354(void)

{
  if (DAT_14cad7f38 == 0) {
    FUN_14073dd9a(&DAT_14cad7f38,&PTR_LAB_14a8c8108);
  }
  return DAT_14cad7f38;
}



// FUNCTION 1463c6383 FUN_1463c6383 body=46 status=ok
// SIG undefined FUN_1463c6383(void)

void FUN_1463c6383(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c8500;
  puVar1[5] = &PTR_FUN_14a8c87a0;
  return;
}



// FUNCTION 1463c63b1 FUN_1463c63b1 body=47 status=ok
// SIG undefined FUN_1463c63b1(void)

longlong FUN_1463c63b1(void)

{
  if (DAT_14cad7f50 == 0) {
    FUN_14073dd9a(&DAT_14cad7f50,&PTR_LAB_14a8c84b8);
  }
  return DAT_14cad7f50;
}



// FUNCTION 1463c63e0 FUN_1463c63e0 body=46 status=ok
// SIG undefined FUN_1463c63e0(void)

void FUN_1463c63e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c8920;
  puVar1[5] = &PTR_FUN_14a8c8bc0;
  return;
}



// FUNCTION 1463c640e FUN_1463c640e body=47 status=ok
// SIG undefined FUN_1463c640e(void)

longlong FUN_1463c640e(void)

{
  if (DAT_14cad7f68 == 0) {
    FUN_14073dd9a(&DAT_14cad7f68,&PTR_LAB_14a8c88d8);
  }
  return DAT_14cad7f68;
}



// FUNCTION 1463c643d FUN_1463c643d body=46 status=ok
// SIG undefined FUN_1463c643d(void)

void FUN_1463c643d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c8d90;
  puVar1[5] = &PTR_FUN_14a8c9030;
  return;
}



// FUNCTION 1463c646b FUN_1463c646b body=47 status=ok
// SIG undefined FUN_1463c646b(void)

longlong FUN_1463c646b(void)

{
  if (DAT_14cad7fb8 == 0) {
    FUN_14073dd9a(&DAT_14cad7fb8,&PTR_LAB_14a8c8d48);
  }
  return DAT_14cad7fb8;
}



// FUNCTION 1463c649a FUN_1463c649a body=32 status=ok
// SIG undefined FUN_1463c649a(void)

void FUN_1463c649a(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14a8c9140;
  return;
}



// FUNCTION 1463c64ba FUN_1463c64ba body=47 status=ok
// SIG undefined FUN_1463c64ba(void)

longlong FUN_1463c64ba(void)

{
  if (DAT_14cad7fd0 == 0) {
    FUN_14073dd9a(&DAT_14cad7fd0,&PTR_LAB_14a8c90f8);
  }
  return DAT_14cad7fd0;
}



// FUNCTION 1463c64e9 FUN_1463c64e9 body=46 status=ok
// SIG undefined FUN_1463c64e9(void)

void FUN_1463c64e9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c9500;
  puVar1[5] = &PTR_FUN_14a8c97a0;
  return;
}



// FUNCTION 1463c6517 FUN_1463c6517 body=47 status=ok
// SIG undefined FUN_1463c6517(void)

longlong FUN_1463c6517(void)

{
  if (DAT_14cad80c8 == 0) {
    FUN_14073dd9a(&DAT_14cad80c8,&PTR_LAB_14a8c94b8);
  }
  return DAT_14cad80c8;
}



// FUNCTION 1463c6546 FUN_1463c6546 body=46 status=ok
// SIG undefined FUN_1463c6546(void)

void FUN_1463c6546(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c98c0;
  puVar1[5] = &PTR_FUN_14a8c9b60;
  return;
}



// FUNCTION 1463c6574 FUN_1463c6574 body=47 status=ok
// SIG undefined FUN_1463c6574(void)

longlong FUN_1463c6574(void)

{
  if (DAT_14cad80e0 == 0) {
    FUN_14073dd9a(&DAT_14cad80e0,&PTR_LAB_14a8c9878);
  }
  return DAT_14cad80e0;
}



// FUNCTION 1463c65a3 FUN_1463c65a3 body=46 status=ok
// SIG undefined FUN_1463c65a3(void)

void FUN_1463c65a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8c9cd0;
  puVar1[5] = &PTR_FUN_14a8c9f70;
  return;
}



// FUNCTION 1463c65d1 FUN_1463c65d1 body=47 status=ok
// SIG undefined FUN_1463c65d1(void)

longlong FUN_1463c65d1(void)

{
  if (DAT_14cad80f8 == 0) {
    FUN_14073dd9a(&DAT_14cad80f8,&PTR_LAB_14a8c9c88);
  }
  return DAT_14cad80f8;
}



// FUNCTION 1463c6600 FUN_1463c6600 body=40 status=ok
// SIG undefined FUN_1463c6600(void)

undefined8 FUN_1463c6600(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6628 FUN_1463c6628 body=40 status=ok
// SIG undefined FUN_1463c6628(void)

undefined8 FUN_1463c6628(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6650 FUN_1463c6650 body=40 status=ok
// SIG undefined FUN_1463c6650(void)

undefined8 FUN_1463c6650(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6678 FUN_1463c6678 body=40 status=ok
// SIG undefined FUN_1463c6678(void)

undefined8 FUN_1463c6678(undefined8 param_1,int param_2)

{
  FUN_145ad42ae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c66a0 FUN_1463c66a0 body=40 status=ok
// SIG undefined FUN_1463c66a0(void)

undefined8 FUN_1463c66a0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c66c8 FUN_1463c66c8 body=40 status=ok
// SIG undefined FUN_1463c66c8(void)

undefined8 FUN_1463c66c8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c66f0 FUN_1463c66f0 body=40 status=ok
// SIG undefined FUN_1463c66f0(void)

undefined8 FUN_1463c66f0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6718 FUN_1463c6718 body=40 status=ok
// SIG undefined FUN_1463c6718(void)

undefined8 FUN_1463c6718(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6740 FUN_1463c6740 body=40 status=ok
// SIG undefined FUN_1463c6740(void)

undefined8 FUN_1463c6740(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6768 FUN_1463c6768 body=40 status=ok
// SIG undefined FUN_1463c6768(void)

undefined8 FUN_1463c6768(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6790 FUN_1463c6790 body=40 status=ok
// SIG undefined FUN_1463c6790(void)

undefined8 FUN_1463c6790(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c67b8 FUN_1463c67b8 body=40 status=ok
// SIG undefined FUN_1463c67b8(void)

undefined8 FUN_1463c67b8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c67e0 FUN_1463c67e0 body=40 status=ok
// SIG undefined FUN_1463c67e0(void)

undefined8 FUN_1463c67e0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6808 FUN_1463c6808 body=40 status=ok
// SIG undefined FUN_1463c6808(void)

undefined8 FUN_1463c6808(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6830 FUN_1463c6830 body=40 status=ok
// SIG undefined FUN_1463c6830(void)

undefined8 FUN_1463c6830(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6858 FUN_1463c6858 body=40 status=ok
// SIG undefined FUN_1463c6858(void)

undefined8 FUN_1463c6858(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6880 FUN_1463c6880 body=40 status=ok
// SIG undefined FUN_1463c6880(void)

undefined8 FUN_1463c6880(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c68a8 FUN_1463c68a8 body=40 status=ok
// SIG undefined FUN_1463c68a8(void)

undefined8 FUN_1463c68a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c68d0 FUN_1463c68d0 body=40 status=ok
// SIG undefined FUN_1463c68d0(void)

undefined8 FUN_1463c68d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c68f8 FUN_1463c68f8 body=40 status=ok
// SIG undefined FUN_1463c68f8(void)

undefined8 FUN_1463c68f8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6920 FUN_1463c6920 body=40 status=ok
// SIG undefined FUN_1463c6920(void)

undefined8 FUN_1463c6920(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6948 FUN_1463c6948 body=40 status=ok
// SIG undefined FUN_1463c6948(void)

undefined8 FUN_1463c6948(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6970 FUN_1463c6970 body=40 status=ok
// SIG undefined FUN_1463c6970(void)

undefined8 FUN_1463c6970(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6998 FUN_1463c6998 body=40 status=ok
// SIG undefined FUN_1463c6998(void)

undefined8 FUN_1463c6998(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c69c0 FUN_1463c69c0 body=40 status=ok
// SIG undefined FUN_1463c69c0(void)

undefined8 FUN_1463c69c0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c69e8 FUN_1463c69e8 body=40 status=ok
// SIG undefined FUN_1463c69e8(void)

undefined8 FUN_1463c69e8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6a10 FUN_1463c6a10 body=40 status=ok
// SIG undefined FUN_1463c6a10(void)

undefined8 FUN_1463c6a10(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6a38 FUN_1463c6a38 body=40 status=ok
// SIG undefined FUN_1463c6a38(void)

undefined8 FUN_1463c6a38(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6a60 FUN_1463c6a60 body=40 status=ok
// SIG undefined FUN_1463c6a60(void)

undefined8 FUN_1463c6a60(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6a88 FUN_1463c6a88 body=29 status=ok
// SIG undefined FUN_1463c6a88(void)

undefined8 FUN_1463c6a88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6aa6 FUN_1463c6aa6 body=29 status=ok
// SIG undefined FUN_1463c6aa6(void)

undefined8 FUN_1463c6aa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6ac4 FUN_1463c6ac4 body=29 status=ok
// SIG undefined FUN_1463c6ac4(void)

undefined8 FUN_1463c6ac4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6ae2 FUN_1463c6ae2 body=29 status=ok
// SIG undefined FUN_1463c6ae2(void)

undefined8 FUN_1463c6ae2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6b00 FUN_1463c6b00 body=36 status=ok
// SIG undefined FUN_1463c6b00(void)

void FUN_1463c6b00(longlong param_1)

{
  FUN_141220b8a(param_1 + -0x10);
  FUN_14482dff6(param_1 + -0x448,1);
  return;
}



// FUNCTION 1463c6b30 FUN_1463c6b30 body=36 status=ok
// SIG undefined FUN_1463c6b30(void)

void FUN_1463c6b30(longlong param_1)

{
  FUN_141220b8a(param_1 + -0x10);
  FUN_14482f31e(param_1 + -0x448,1);
  return;
}



// FUNCTION 1463c6b54 FUN_1463c6b54 body=29 status=ok
// SIG undefined FUN_1463c6b54(void)

undefined8 FUN_1463c6b54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463c6b7d FUN_1463c6b7d body=47 status=ok
// SIG undefined FUN_1463c6b7d(void)

longlong FUN_1463c6b7d(void)

{
  if (DAT_14cad8320 == 0) {
    FUN_14073dd9a(&DAT_14cad8320,&PTR_LAB_14a8cb6c8);
  }
  return DAT_14cad8320;
}



// FUNCTION 1463c6bac FUN_1463c6bac body=1112 status=ok
// SIG undefined FUN_1463c6bac(void)

void FUN_1463c6bac(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  void *local_50;
  ulonglong uStack_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (void *)0x0;
  uVar1 = *(uint *)(param_2 + 4);
  _Src = (void *)param_2[3];
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  if ((longlong)(int)uVar1 != 0) {
    FUN_1446dd670(&local_40,uVar1,0);
    memcpy(local_40,_Src,(longlong)(int)uVar1 * 2);
    if ((int)uStack_38 < 2) goto LAB_1463c6bf2;
    goto LAB_1463c6cbe;
  }
  uStack_38 = (ulonglong)uVar1;
LAB_1463c6bf2:
  switch((int)param_2[2]) {
  case 1:
    lVar5 = param_2[5];
    if (lVar5 == 0) {
      param_1 = param_1 + 0x88;
      goto LAB_1463c6e89;
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x50) != 0) {
      puVar7 = *(undefined2 **)(param_1 + 0x48);
    }
    goto LAB_1463c6c55;
  case 2:
    if (param_2[5] == 0) {
LAB_1463c6fda:
      FUN_14020fad6(&local_40,&DAT_149dfb77a);
      break;
    }
    FUN_141220240(param_2[5],&local_60);
    local_78 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_78 = local_60;
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x70) != 0) {
      puVar7 = *(undefined2 **)(param_1 + 0x68);
    }
    (**(code **)(*(longlong *)param_2[5] + 0x6a0))((longlong *)param_2[5],&local_70);
    puVar8 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar8 = local_70;
    }
    FUN_140002266(&local_50,L"%s %s %s",puVar8,puVar7);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_40 = local_50;
    uStack_38 = uStack_48;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1463c6ca4;
  case 3:
  case 5:
  case 6:
    break;
  case 4:
    lVar5 = param_2[5];
    if (lVar5 == 0) goto LAB_1463c6fda;
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x60) != 0) {
      puVar7 = *(undefined2 **)(param_1 + 0x58);
    }
LAB_1463c6c55:
    FUN_141220240(lVar5,&local_60);
    puVar8 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar8 = local_60;
    }
    FUN_140002266(&local_50,L"%s%s",puVar8,puVar7);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_40 = local_50;
    uStack_38 = uStack_48;
    local_50 = (void *)0x0;
    uStack_48 = 0;
LAB_1463c6ca4:
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 7:
    param_1 = param_1 + 0x38;
LAB_1463c6e89:
    FUN_144a787a6(&local_40,param_1);
    break;
  default:
    if ((int)param_2[2] == 0x10) {
      lVar5 = param_2[5];
      if (lVar5 != 0) {
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x80) != 0) {
          puVar7 = *(undefined2 **)(param_1 + 0x78);
        }
        goto LAB_1463c6c55;
      }
      param_1 = param_1 + 0x98;
      goto LAB_1463c6e89;
    }
  }
  if ((int)uStack_38 < 2) goto LAB_1463c6e50;
LAB_1463c6cbe:
  lVar5 = *param_2;
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x430) == 0)) goto LAB_1463c6e50;
  lVar4 = FUN_1449db7f2();
  if ((*(longlong *)(lVar5 + 0x430) == 0) ||
     ((((lVar4 == 0 || (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x430) + 0x10), lVar5 == 0)) ||
       (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_1463c6e50;
  lVar5 = *param_2;
  if (*(longlong *)(lVar5 + 0x430) == 0) {
LAB_1463c6e9b:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_1449db7f2();
    lVar5 = *(longlong *)(lVar5 + 0x430);
    if (lVar5 == 0) goto LAB_1463c6e9b;
    lVar6 = 0;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_1463c6e9b;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar6 = lVar5;
      }
    }
  }
  if (*(longlong *)(lVar6 + 0x78) == 0) goto LAB_1463c6e50;
  lVar5 = *param_2;
  if (*(longlong *)(lVar5 + 0x430) == 0) {
LAB_1463c6ea2:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_1449db7f2();
    lVar5 = *(longlong *)(lVar5 + 0x430);
    if (lVar5 == 0) goto LAB_1463c6ea2;
    lVar6 = 0;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_1463c6ea2;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar6 = lVar5;
      }
    }
  }
  if (*(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x40) == 0) goto LAB_1463c6e50;
  lVar5 = *param_2;
  if (*(longlong *)(lVar5 + 0x430) == 0) {
LAB_1463c6ea9:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_1449db7f2();
    lVar5 = *(longlong *)(lVar5 + 0x430);
    if (lVar5 == 0) goto LAB_1463c6ea9;
    lVar6 = 0;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_1463c6ea9;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar6 = lVar5;
      }
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar6 + 0x78) + 0x40);
  (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_40);
LAB_1463c6e50:
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463c7006 FUN_1463c7006 body=55 status=ok
// SIG undefined FUN_1463c7006(void)

void FUN_1463c7006(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad83a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad83a0 = FUN_140002ddd(FUN_1463c703d,uVar1,L"ActorInstanceHandle");
  }
  return;
}



// FUNCTION 1463c703d FUN_1463c703d body=49 status=ok
// SIG undefined FUN_1463c703d(void)

longlong FUN_1463c703d(void)

{
  if (DAT_14cad8398 == 0) {
    FUN_14086a14e(&DAT_14cad8398,&PTR_FUN_14a8cbf30);
  }
  return DAT_14cad8398;
}



// FUNCTION 1463c706e FUN_1463c706e body=48 status=ok
// SIG undefined FUN_1463c706e(void)

void FUN_1463c706e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a8e5230;
  return;
}



// FUNCTION 1463c709e FUN_1463c709e body=262 status=ok
// SIG undefined FUN_1463c709e(void)

undefined8 FUN_1463c709e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_144a3ff20();
  if (lVar3 != 0) {
    local_38 = *(undefined2 **)(lVar3 + 0x18);
    FUN_1400021e4(&local_38,param_2);
LAB_1463c70d8:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar2 = FUN_144729dda(param_1 + 8);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      lVar3 = FUN_14479d2ce(param_1 + 8);
      if (lVar3 == 0) {
        FUN_140056680(&local_38,&DAT_149e01fe8);
      }
      else {
        local_28 = *(undefined8 *)(lVar3 + 0x18);
        FUN_1400021e4(&local_28,&local_38);
      }
      puVar4 = local_38;
      if (local_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"%s:%d",puVar4,uVar1);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1463c70d8;
    }
  }
  FUN_140056680(param_2,L"Invalid");
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1463c71a7 FUN_1463c71a7 body=47 status=ok
// SIG undefined FUN_1463c71a7(void)

longlong FUN_1463c71a7(void)

{
  if (DAT_14cad83d8 == 0) {
    FUN_14073dd9a(&DAT_14cad83d8,&PTR_LAB_14a8cc280);
  }
  return DAT_14cad83d8;
}



// FUNCTION 1463c71d6 FUN_1463c71d6 body=47 status=ok
// SIG undefined FUN_1463c71d6(void)

longlong FUN_1463c71d6(void)

{
  if (DAT_14cad83c8 == 0) {
    FUN_14000fc22(&DAT_14cad83c8,&PTR_FUN_14a8cc130);
  }
  return DAT_14cad83c8;
}



// FUNCTION 1463c7206 FUN_1463c7206 body=34 status=ok
// SIG undefined FUN_1463c7206(void)

void FUN_1463c7206(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71146();
  FUN_14069c8d6(uVar1,&PTR_s_OnActorEndPlay_14a8cc170,1);
  return;
}



// FUNCTION 1463c7228 FUN_1463c7228 body=50 status=ok
// SIG undefined FUN_1463c7228(void)

void FUN_1463c7228(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ba828(puVar1);
  *puVar1 = &PTR_FUN_14a8cc2c0;
  puVar1[6] = &PTR_FUN_14a8cc5a0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1463c725a FUN_1463c725a body=112 status=ok
// SIG undefined FUN_1463c725a(void)

void FUN_1463c725a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_147a91426(lVar3 + 0x20f,param_1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1409edbf4(param_1 + 0x40,0);
  }
  FUN_1413e1940(param_1);
  return;
}



// FUNCTION 1463c72ca FUN_1463c72ca body=25 status=ok
// SIG undefined FUN_1463c72ca(void)

char FUN_1463c72ca(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a792c0(param_1 + -0x30,0x30);
  return cVar1 + '\x01';
}



// FUNCTION 1463c72e3 FUN_1463c72e3 body=49 status=ok
// SIG undefined FUN_1463c72e3(void)

longlong FUN_1463c72e3(void)

{
  if (DAT_14cad8400 == 0) {
    FUN_14073dd9a(&DAT_14cad8400,&PTR_LAB_14a8cc780);
  }
  return DAT_14cad8400;
}



// FUNCTION 1463c7314 FUN_1463c7314 body=47 status=ok
// SIG undefined FUN_1463c7314(void)

longlong FUN_1463c7314(void)

{
  if (DAT_14cad83e8 == 0) {
    FUN_14000fc22(&DAT_14cad83e8,&PTR_FUN_14a8cc620);
  }
  return DAT_14cad83e8;
}



// FUNCTION 1463c7343 FUN_1463c7343 body=47 status=ok
// SIG undefined FUN_1463c7343(void)

longlong FUN_1463c7343(void)

{
  if (DAT_14cad83f0 == 0) {
    FUN_14000fc22(&DAT_14cad83f0,&PTR_FUN_14a8cc6a8);
  }
  return DAT_14cad83f0;
}



// FUNCTION 1463c7372 FUN_1463c7372 body=34 status=ok
// SIG undefined FUN_1463c7372(void)

void FUN_1463c7372(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145959fc0();
  FUN_14069c8d6(uVar1,&PTR_s_Cancel_14a8cc6f0,2);
  return;
}



// FUNCTION 1463c7394 FUN_1463c7394 body=35 status=ok
// SIG undefined FUN_1463c7394(void)

void FUN_1463c7394(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8cc7c0;
  return;
}



// FUNCTION 1463c73b8 FUN_1463c73b8 body=30 status=ok
// SIG undefined FUN_1463c73b8(void)

void FUN_1463c73b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2c0))();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1463c73d6 FUN_1463c73d6 body=55 status=ok
// SIG undefined FUN_1463c73d6(void)

void FUN_1463c73d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8418 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8418 = FUN_140002ddd(FUN_1463c740d,uVar1,L"DamageEvent");
  }
  return;
}



// FUNCTION 1463c740d FUN_1463c740d body=47 status=ok
// SIG undefined FUN_1463c740d(void)

longlong FUN_1463c740d(void)

{
  if (DAT_14cad8410 == 0) {
    FUN_14086a14e(&DAT_14cad8410,&PTR_FUN_14a8ccb40);
  }
  return DAT_14cad8410;
}



// FUNCTION 1463c743c FUN_1463c743c body=48 status=ok
// SIG undefined FUN_1463c743c(void)

void FUN_1463c743c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e5390;
  return;
}



// FUNCTION 1463c746c FUN_1463c746c body=55 status=ok
// SIG undefined FUN_1463c746c(void)

void FUN_1463c746c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8430 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8430 = FUN_140002ddd(FUN_1463c74a3,uVar1,L"PointDamageEvent");
  }
  return;
}



// FUNCTION 1463c74a3 FUN_1463c74a3 body=47 status=ok
// SIG undefined FUN_1463c74a3(void)

longlong FUN_1463c74a3(void)

{
  if (DAT_14cad8428 == 0) {
    FUN_14086a14e(&DAT_14cad8428,&PTR_FUN_14a8ccca0);
  }
  return DAT_14cad8428;
}



// FUNCTION 1463c74d2 FUN_1463c74d2 body=48 status=ok
// SIG undefined FUN_1463c74d2(void)

void FUN_1463c74d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000130;
  *puVar1 = &PTR_FUN_14a8e54f0;
  return;
}



// FUNCTION 1463c7502 FUN_1463c7502 body=55 status=ok
// SIG undefined FUN_1463c7502(void)

void FUN_1463c7502(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8448 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8448 = FUN_140002ddd(FUN_1463c7539,uVar1,L"RadialDamageParams");
  }
  return;
}



// FUNCTION 1463c7539 FUN_1463c7539 body=47 status=ok
// SIG undefined FUN_1463c7539(void)

longlong FUN_1463c7539(void)

{
  if (DAT_14cad8440 == 0) {
    FUN_14086a14e(&DAT_14cad8440,&PTR_FUN_14a8cce60);
  }
  return DAT_14cad8440;
}



// FUNCTION 1463c7568 FUN_1463c7568 body=48 status=ok
// SIG undefined FUN_1463c7568(void)

void FUN_1463c7568(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14a8e5650;
  return;
}



// FUNCTION 1463c7598 FUN_1463c7598 body=55 status=ok
// SIG undefined FUN_1463c7598(void)

void FUN_1463c7598(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8460 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8460 = FUN_140002ddd(FUN_1463c75cf,uVar1,L"RadialDamageEvent");
  }
  return;
}



// FUNCTION 1463c75cf FUN_1463c75cf body=47 status=ok
// SIG undefined FUN_1463c75cf(void)

longlong FUN_1463c75cf(void)

{
  if (DAT_14cad8458 == 0) {
    FUN_14086a14e(&DAT_14cad8458,&PTR_FUN_14a8cd008);
  }
  return DAT_14cad8458;
}



// FUNCTION 1463c75fe FUN_1463c75fe body=48 status=ok
// SIG undefined FUN_1463c75fe(void)

void FUN_1463c75fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a8e57b0;
  return;
}



// FUNCTION 1463c762e FUN_1463c762e body=47 status=ok
// SIG undefined FUN_1463c762e(void)

longlong FUN_1463c762e(void)

{
  if (DAT_14cad8480 == 0) {
    FUN_1409ce572(&DAT_14cad8480,&PTR_FUN_14a8cd270);
  }
  return DAT_14cad8480;
}



// FUNCTION 1463c765d FUN_1463c765d body=35 status=ok
// SIG undefined FUN_1463c765d(void)

void FUN_1463c765d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8cd330;
  return;
}



// FUNCTION 1463c7685 FUN_1463c7685 body=47 status=ok
// SIG undefined FUN_1463c7685(void)

longlong FUN_1463c7685(void)

{
  if (DAT_14cad84a0 == 0) {
    FUN_14073dd9a(&DAT_14cad84a0,&PTR_LAB_14a8cd2e8);
  }
  return DAT_14cad84a0;
}



// FUNCTION 1463c76b4 FUN_1463c76b4 body=48 status=ok
// SIG undefined FUN_1463c76b4(void)

void FUN_1463c76b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000100;
  *puVar1 = &PTR_FUN_14a8e5a20;
  return;
}



// FUNCTION 1463c76e4 FUN_1463c76e4 body=55 status=ok
// SIG undefined FUN_1463c76e4(void)

void FUN_1463c76e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad84d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad84d0 = FUN_140002ddd(FUN_1463c771b,uVar1,L"HitResultNetSerializerConfig");
  }
  return;
}



// FUNCTION 1463c771b FUN_1463c771b body=47 status=ok
// SIG undefined FUN_1463c771b(void)

longlong FUN_1463c771b(void)

{
  if (DAT_14cad84c8 == 0) {
    FUN_14086a14e(&DAT_14cad84c8,&PTR_FUN_14a8cde80);
  }
  return DAT_14cad84c8;
}



// FUNCTION 1463c774a FUN_1463c774a body=48 status=ok
// SIG undefined FUN_1463c774a(void)

void FUN_1463c774a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e5b90;
  return;
}



// FUNCTION 1463c777a FUN_1463c777a body=35 status=ok
// SIG undefined FUN_1463c777a(void)

void FUN_1463c777a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8ce1c0;
  return;
}



// FUNCTION 1463c77a7 FUN_1463c77a7 body=47 status=ok
// SIG undefined FUN_1463c77a7(void)

longlong FUN_1463c77a7(void)

{
  if (DAT_14cad8600 == 0) {
    FUN_14073dd9a(&DAT_14cad8600,&PTR_LAB_14a8ce178);
  }
  return DAT_14cad8600;
}



// FUNCTION 1463c77d6 FUN_1463c77d6 body=35 status=ok
// SIG undefined FUN_1463c77d6(void)

void FUN_1463c77d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8ce510;
  return;
}



// FUNCTION 1463c77f9 FUN_1463c77f9 body=47 status=ok
// SIG undefined FUN_1463c77f9(void)

longlong FUN_1463c77f9(void)

{
  if (DAT_14cad8618 == 0) {
    FUN_14073dd9a(&DAT_14cad8618,&PTR_LAB_14a8ce4c8);
  }
  return DAT_14cad8618;
}



// FUNCTION 1463c7828 FUN_1463c7828 body=35 status=ok
// SIG undefined FUN_1463c7828(void)

void FUN_1463c7828(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8ce840;
  return;
}



// FUNCTION 1463c784b FUN_1463c784b body=47 status=ok
// SIG undefined FUN_1463c784b(void)

longlong FUN_1463c784b(void)

{
  if (DAT_14cad8630 == 0) {
    FUN_14073dd9a(&DAT_14cad8630,&PTR_LAB_14a8ce7f8);
  }
  return DAT_14cad8630;
}



// FUNCTION 1463c787a FUN_1463c787a body=35 status=ok
// SIG undefined FUN_1463c787a(void)

void FUN_1463c787a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8ceb70;
  return;
}



// FUNCTION 1463c789d FUN_1463c789d body=47 status=ok
// SIG undefined FUN_1463c789d(void)

longlong FUN_1463c789d(void)

{
  if (DAT_14cad8648 == 0) {
    FUN_14073dd9a(&DAT_14cad8648,&PTR_LAB_14a8ceb28);
  }
  return DAT_14cad8648;
}



// FUNCTION 1463c78cc FUN_1463c78cc body=35 status=ok
// SIG undefined FUN_1463c78cc(void)

void FUN_1463c78cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8cee90;
  return;
}



// FUNCTION 1463c78ef FUN_1463c78ef body=47 status=ok
// SIG undefined FUN_1463c78ef(void)

longlong FUN_1463c78ef(void)

{
  if (DAT_14cad8660 == 0) {
    FUN_14073dd9a(&DAT_14cad8660,&PTR_LAB_14a8cee48);
  }
  return DAT_14cad8660;
}



// FUNCTION 1463c791e FUN_1463c791e body=47 status=ok
// SIG undefined FUN_1463c791e(void)

longlong FUN_1463c791e(void)

{
  if (DAT_14cad8670 == 0) {
    FUN_1409ce572(&DAT_14cad8670,&PTR_FUN_14a8cf220);
  }
  return DAT_14cad8670;
}



// FUNCTION 1463c794d FUN_1463c794d body=47 status=ok
// SIG undefined FUN_1463c794d(void)

longlong FUN_1463c794d(void)

{
  if (DAT_14cad8688 == 0) {
    FUN_1409ce572(&DAT_14cad8688,&PTR_FUN_14a8cf290);
  }
  return DAT_14cad8688;
}



// FUNCTION 1463c797c FUN_1463c797c body=55 status=ok
// SIG undefined FUN_1463c797c(void)

void FUN_1463c797c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad86a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad86a8 = FUN_140002ddd(FUN_1463c79b3,uVar1,L"RepAttachment");
  }
  return;
}



// FUNCTION 1463c79b3 FUN_1463c79b3 body=47 status=ok
// SIG undefined FUN_1463c79b3(void)

longlong FUN_1463c79b3(void)

{
  if (DAT_14cad86a0 == 0) {
    FUN_14086a14e(&DAT_14cad86a0,&PTR_FUN_14a8cf4c0);
  }
  return DAT_14cad86a0;
}



// FUNCTION 1463c79e2 FUN_1463c79e2 body=48 status=ok
// SIG undefined FUN_1463c79e2(void)

void FUN_1463c79e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14a8e5e30;
  return;
}



// FUNCTION 1463c7a12 FUN_1463c7a12 body=55 status=ok
// SIG undefined FUN_1463c7a12(void)

void FUN_1463c7a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad86c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad86c0 = FUN_140002ddd(FUN_1463c7a49,uVar1,L"RigidBodyState");
  }
  return;
}



// FUNCTION 1463c7a49 FUN_1463c7a49 body=47 status=ok
// SIG undefined FUN_1463c7a49(void)

longlong FUN_1463c7a49(void)

{
  if (DAT_14cad86b8 == 0) {
    FUN_14086a14e(&DAT_14cad86b8,&PTR_FUN_14a8cf6b8);
  }
  return DAT_14cad86b8;
}



// FUNCTION 1463c7a78 FUN_1463c7a78 body=48 status=ok
// SIG undefined FUN_1463c7a78(void)

void FUN_1463c7a78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14a8e5f90;
  return;
}



// FUNCTION 1463c7aa8 FUN_1463c7aa8 body=55 status=ok
// SIG undefined FUN_1463c7aa8(void)

void FUN_1463c7aa8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad86d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad86d8 = FUN_140002ddd(FUN_1463c7adf,uVar1,L"RepMovement");
  }
  return;
}



// FUNCTION 1463c7adf FUN_1463c7adf body=47 status=ok
// SIG undefined FUN_1463c7adf(void)

longlong FUN_1463c7adf(void)

{
  if (DAT_14cad86d0 == 0) {
    FUN_14086a14e(&DAT_14cad86d0,&PTR_FUN_14a8cfc40);
  }
  return DAT_14cad86d0;
}



// FUNCTION 1463c7b0e FUN_1463c7b0e body=48 status=ok
// SIG undefined FUN_1463c7b0e(void)

void FUN_1463c7b0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14a8e60f0;
  return;
}



// FUNCTION 1463c7b3e FUN_1463c7b3e body=62 status=ok
// SIG undefined FUN_1463c7b3e(void)

void FUN_1463c7b3e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140834366(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d11d0;
  *(undefined2 *)(puVar1 + 0x72) = 0x101;
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 8;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) | 4;
  *(undefined4 *)(puVar1 + 0x34) = 0x3f800000;
  return;
}



// FUNCTION 1463c7b87 FUN_1463c7b87 body=47 status=ok
// SIG undefined FUN_1463c7b87(void)

longlong FUN_1463c7b87(void)

{
  if (DAT_14cad8710 == 0) {
    FUN_14073dd9a(&DAT_14cad8710,&PTR_LAB_14a8d0bc8);
  }
  return DAT_14cad8710;
}



// FUNCTION 1463c7bb6 FUN_1463c7bb6 body=68 status=ok
// SIG undefined FUN_1463c7bb6(void)

void FUN_1463c7bb6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_FUN_14a8d19f0;
  puVar1[6] = &DAT_10000003c;
  *(undefined2 *)(puVar1 + 7) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 1463c7bfa FUN_1463c7bfa body=49 status=ok
// SIG undefined FUN_1463c7bfa(void)

longlong FUN_1463c7bfa(void)

{
  if (DAT_14cad89f8 == 0) {
    FUN_14073dd9a(&DAT_14cad89f8,&PTR_LAB_14a8d2580);
  }
  return DAT_14cad89f8;
}



// FUNCTION 1463c7c2b FUN_1463c7c2b body=47 status=ok
// SIG undefined FUN_1463c7c2b(void)

longlong FUN_1463c7c2b(void)

{
  if (DAT_14cad8960 == 0) {
    FUN_14073dd9a(&DAT_14cad8960,&PTR_LAB_14a8d19a8);
  }
  return DAT_14cad8960;
}



// FUNCTION 1463c7c5a FUN_1463c7c5a body=49 status=ok
// SIG undefined FUN_1463c7c5a(void)

longlong FUN_1463c7c5a(void)

{
  if (DAT_14cad8978 == 0) {
    FUN_14000fc22(&DAT_14cad8978,&PTR_FUN_14a8d1d30);
  }
  return DAT_14cad8978;
}



// FUNCTION 1463c7c8c FUN_1463c7c8c body=55 status=ok
// SIG undefined FUN_1463c7c8c(void)

void FUN_1463c7c8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8988 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8988 = FUN_140002ddd(FUN_1417c59ed,uVar1,L"TimerHandle");
  }
  return;
}



// FUNCTION 1463c7cc4 FUN_1463c7cc4 body=48 status=ok
// SIG undefined FUN_1463c7cc4(void)

void FUN_1463c7cc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a8e6260;
  return;
}



// FUNCTION 1463c7cf4 FUN_1463c7cf4 body=47 status=ok
// SIG undefined FUN_1463c7cf4(void)

longlong FUN_1463c7cf4(void)

{
  if (DAT_14cad8998 == 0) {
    FUN_1409ce572(&DAT_14cad8998,&PTR_FUN_14a8d1ea0);
  }
  return DAT_14cad8998;
}



// FUNCTION 1463c7d23 FUN_1463c7d23 body=47 status=ok
// SIG undefined FUN_1463c7d23(void)

longlong FUN_1463c7d23(void)

{
  if (DAT_14cad89b0 == 0) {
    FUN_14000fc22(&DAT_14cad89b0,&PTR_FUN_14a8d1ee0);
  }
  return DAT_14cad89b0;
}



// FUNCTION 1463c7d52 FUN_1463c7d52 body=47 status=ok
// SIG undefined FUN_1463c7d52(void)

longlong FUN_1463c7d52(void)

{
  if (DAT_14cad89b8 == 0) {
    FUN_14000fc22(&DAT_14cad89b8,&PTR_FUN_14a8d1fd0);
  }
  return DAT_14cad89b8;
}



// FUNCTION 1463c7d81 FUN_1463c7d81 body=47 status=ok
// SIG undefined FUN_1463c7d81(void)

longlong FUN_1463c7d81(void)

{
  if (DAT_14cad89c0 == 0) {
    FUN_14000fc22(&DAT_14cad89c0,&PTR_FUN_14a8d2078);
  }
  return DAT_14cad89c0;
}



// FUNCTION 1463c7db0 FUN_1463c7db0 body=47 status=ok
// SIG undefined FUN_1463c7db0(void)

longlong FUN_1463c7db0(void)

{
  if (DAT_14cad89c8 == 0) {
    FUN_14000fc22(&DAT_14cad89c8,&PTR_FUN_14a8d2118);
  }
  return DAT_14cad89c8;
}



// FUNCTION 1463c7ddf FUN_1463c7ddf body=47 status=ok
// SIG undefined FUN_1463c7ddf(void)

longlong FUN_1463c7ddf(void)

{
  if (DAT_14cad89d0 == 0) {
    FUN_14000fc22(&DAT_14cad89d0,&PTR_FUN_14a8d21a0);
  }
  return DAT_14cad89d0;
}



// FUNCTION 1463c7e0e FUN_1463c7e0e body=47 status=ok
// SIG undefined FUN_1463c7e0e(void)

longlong FUN_1463c7e0e(void)

{
  if (DAT_14cad89d8 == 0) {
    FUN_14000fc22(&DAT_14cad89d8,&PTR_FUN_14a8d2240);
  }
  return DAT_14cad89d8;
}



// FUNCTION 1463c7e3d FUN_1463c7e3d body=47 status=ok
// SIG undefined FUN_1463c7e3d(void)

longlong FUN_1463c7e3d(void)

{
  if (DAT_14cad89e0 == 0) {
    FUN_14000fc22(&DAT_14cad89e0,&PTR_FUN_14a8d2328);
  }
  return DAT_14cad89e0;
}



// FUNCTION 1463c7e6c FUN_1463c7e6c body=47 status=ok
// SIG undefined FUN_1463c7e6c(void)

longlong FUN_1463c7e6c(void)

{
  if (DAT_14cad89e8 == 0) {
    FUN_14000fc22(&DAT_14cad89e8,&PTR_FUN_14a8d23b0);
  }
  return DAT_14cad89e8;
}



// FUNCTION 1463c7e9c FUN_1463c7e9c body=34 status=ok
// SIG undefined FUN_1463c7e9c(void)

void FUN_1463c7e9c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458e6494();
  FUN_14069c8d6(uVar1,&PTR_s_FetchAndUpdate_14a8d23f0,8);
  return;
}



// FUNCTION 1463c7ebe FUN_1463c7ebe body=42 status=ok
// SIG undefined FUN_1463c7ebe(void)

void FUN_1463c7ebe(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d25c0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 1463c7eed FUN_1463c7eed body=47 status=ok
// SIG undefined FUN_1463c7eed(void)

longlong FUN_1463c7eed(void)

{
  if (DAT_14cad8a08 == 0) {
    FUN_14000fc22(&DAT_14cad8a08,&PTR_FUN_14a8d2a08);
  }
  return DAT_14cad8a08;
}



// FUNCTION 1463c7f1c FUN_1463c7f1c body=49 status=ok
// SIG undefined FUN_1463c7f1c(void)

longlong FUN_1463c7f1c(void)

{
  if (DAT_14cad8a30 == 0) {
    FUN_14073dd9a(&DAT_14cad8a30,&PTR_LAB_14a8d2e00);
  }
  return DAT_14cad8a30;
}



// FUNCTION 1463c7f4d FUN_1463c7f4d body=47 status=ok
// SIG undefined FUN_1463c7f4d(void)

longlong FUN_1463c7f4d(void)

{
  if (DAT_14cad8a10 == 0) {
    FUN_14000fc22(&DAT_14cad8a10,&PTR_FUN_14a8d2ae8);
  }
  return DAT_14cad8a10;
}



// FUNCTION 1463c7f7c FUN_1463c7f7c body=47 status=ok
// SIG undefined FUN_1463c7f7c(void)

longlong FUN_1463c7f7c(void)

{
  if (DAT_14cad8a18 == 0) {
    FUN_14000fc22(&DAT_14cad8a18,&PTR_FUN_14a8d2c60);
  }
  return DAT_14cad8a18;
}



// FUNCTION 1463c7fab FUN_1463c7fab body=47 status=ok
// SIG undefined FUN_1463c7fab(void)

longlong FUN_1463c7fab(void)

{
  if (DAT_14cad8a20 == 0) {
    FUN_14000fc22(&DAT_14cad8a20,&PTR_FUN_14a8d2d08);
  }
  return DAT_14cad8a20;
}



// FUNCTION 1463c7fda FUN_1463c7fda body=34 status=ok
// SIG undefined FUN_1463c7fda(void)

void FUN_1463c7fda(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140140310();
  FUN_14069c8d6(uVar1,&PTR_s_AddDisplayDelegate_14a8d2d50,3);
  return;
}



// FUNCTION 1463c8001 FUN_1463c8001 body=43 status=ok
// SIG undefined FUN_1463c8001(void)

void FUN_1463c8001(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14a8d2e40;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1463c802c FUN_1463c802c body=92 status=ok
// SIG undefined FUN_1463c802c(void)

void FUN_1463c802c(longlong param_1)

{
  FUN_1458a0d75(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_147aac9de(param_1 + 0x30);
  }
  FUN_1458a0db1(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    return;
  }
  FUN_147aaca0e(param_1 + 0x40);
  return;
}



// FUNCTION 1463c8088 FUN_1463c8088 body=104 status=ok
// SIG undefined FUN_1463c8088(void)

void FUN_1463c8088(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14109bb0a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d3500;
  puVar1[5] = &PTR_FUN_14a8d3ad0;
  puVar1[6] = &PTR_LAB_14a8d3b10;
  puVar1[0x2f] = &PTR_FUN_14a8d3b60;
  puVar1[0x3c] = 0x457a000044960000;
  puVar1[0x3d] = 0x4100000045fa0000;
  *(byte *)(puVar1 + 0x3e) = *(byte *)(puVar1 + 0x3e) & 0xfe;
  *(undefined1 *)(puVar1 + 0x39) = *(undefined1 *)(puVar1 + 0x32);
  return;
}



// FUNCTION 1463c80f5 FUN_1463c80f5 body=47 status=ok
// SIG undefined FUN_1463c80f5(void)

longlong FUN_1463c80f5(void)

{
  if (DAT_14cad8a50 == 0) {
    FUN_14073dd9a(&DAT_14cad8a50,&PTR_LAB_14a8d34b8);
  }
  return DAT_14cad8a50;
}



// FUNCTION 1463c8124 FUN_1463c8124 body=47 status=ok
// SIG undefined FUN_1463c8124(void)

longlong FUN_1463c8124(void)

{
  if (DAT_14cad8a60 == 0) {
    FUN_1409ce572(&DAT_14cad8a60,&PTR_FUN_14a8d3d00);
  }
  return DAT_14cad8a60;
}



// FUNCTION 1463c8154 FUN_1463c8154 body=55 status=ok
// SIG undefined FUN_1463c8154(void)

void FUN_1463c8154(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8a80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8a80 = FUN_140002ddd(FUN_1463c818b,uVar1,L"FontCharacter");
  }
  return;
}



// FUNCTION 1463c818b FUN_1463c818b body=47 status=ok
// SIG undefined FUN_1463c818b(void)

longlong FUN_1463c818b(void)

{
  if (DAT_14cad8a78 == 0) {
    FUN_14086a14e(&DAT_14cad8a78,&PTR_FUN_14a8d3ef0);
  }
  return DAT_14cad8a78;
}



// FUNCTION 1463c81ba FUN_1463c81ba body=48 status=ok
// SIG undefined FUN_1463c81ba(void)

void FUN_1463c81ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14a8e6520;
  return;
}



// FUNCTION 1463c81ef FUN_1463c81ef body=47 status=ok
// SIG undefined FUN_1463c81ef(void)

longlong FUN_1463c81ef(void)

{
  if (DAT_14cad8a98 == 0) {
    FUN_14073dd9a(&DAT_14cad8a98,&PTR_LAB_14a8d4528);
  }
  return DAT_14cad8a98;
}



// FUNCTION 1463c821e FUN_1463c821e body=55 status=ok
// SIG undefined FUN_1463c821e(void)

void FUN_1463c821e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad8ab0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad8ab0 = FUN_140002ddd(FUN_1463c8255,uVar1,L"FontFacePlatformRasterizationOverrides");
  }
  return;
}



// FUNCTION 1463c8255 FUN_1463c8255 body=47 status=ok
// SIG undefined FUN_1463c8255(void)

longlong FUN_1463c8255(void)

{
  if (DAT_14cad8aa8 == 0) {
    FUN_14086a14e(&DAT_14cad8aa8,&PTR_FUN_14a8d4b18);
  }
  return DAT_14cad8aa8;
}



// FUNCTION 1463c8284 FUN_1463c8284 body=48 status=ok
// SIG undefined FUN_1463c8284(void)

void FUN_1463c8284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14a8e6690;
  return;
}



// FUNCTION 1463c82b4 FUN_1463c82b4 body=47 status=ok
// SIG undefined FUN_1463c82b4(void)

longlong FUN_1463c82b4(void)

{
  if (DAT_14cad8ac8 == 0) {
    FUN_14073dd9a(&DAT_14cad8ac8,&PTR_LAB_14a8d52b8);
  }
  return DAT_14cad8ac8;
}


