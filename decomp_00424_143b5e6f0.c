// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b5e6f0 FUN_143b5e6f0 body=128 status=ok
// SIG undefined FUN_143b5e6f0(void)

void FUN_143b5e6f0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  iVar1 = *param_2;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') {
      return;
    }
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar6 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar3)(uVar5);
    *pcVar2 = cVar4;
    if (cVar4 != '\0') {
      return;
    }
  }
  if (*(char *)(*(longlong *)param_1[1] + (longlong)iVar1) != '\x01') {
    return;
  }
  FUN_14833cf7a(param_1[3],*(undefined8 *)(*(longlong *)(param_1[2] + 0x18) + (longlong)iVar1 * 8));
  return;
}



// FUNCTION 143b5e770 FUN_143b5e770 body=141 status=ok
// SIG undefined FUN_143b5e770(void)

void FUN_143b5e770(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*param_2;
  pcVar1 = *(char **)*param_1;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x90);
    if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x80);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  if (*(char *)(*(longlong *)param_1[1] + lVar6) == '\x01') {
    FUN_14833cb66(param_1[4],*(undefined8 *)(*(longlong *)(param_1[2] + 0x18) + lVar6 * 8),
                  lVar6 * 0x10 + *(longlong *)param_1[3],1,1);
  }
  return;
}



// FUNCTION 143b5e7fe FUN_143b5e7fe body=130 status=ok
// SIG undefined FUN_143b5e7fe(void)

void FUN_143b5e7fe(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  iVar1 = *param_2;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') {
      return;
    }
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar6 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar3)(uVar5);
    *pcVar2 = cVar4;
    if (cVar4 != '\0') {
      return;
    }
  }
  if (*(char *)(*(longlong *)param_1[1] + (longlong)iVar1) != '\x01') {
    return;
  }
  FUN_14833cf7a(param_1[2],(longlong)iVar1 * 0x10 + *(longlong *)param_1[3]);
  return;
}



// FUNCTION 143b5e8b8 FUN_143b5e8b8 body=29 status=ok
// SIG undefined FUN_143b5e8b8(void)

undefined8 FUN_143b5e8b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e90e FUN_143b5e90e body=29 status=ok
// SIG undefined FUN_143b5e90e(void)

undefined8 FUN_143b5e90e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5e92c FUN_143b5e92c body=93 status=ok
// SIG undefined FUN_143b5e92c(void)

undefined8 FUN_143b5e92c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5e98a FUN_143b5e98a body=93 status=ok
// SIG undefined FUN_143b5e98a(void)

undefined8 FUN_143b5e98a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5e9e8 FUN_143b5e9e8 body=93 status=ok
// SIG undefined FUN_143b5e9e8(void)

undefined8 FUN_143b5e9e8(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5ea46 FUN_143b5ea46 body=93 status=ok
// SIG undefined FUN_143b5ea46(void)

undefined8 FUN_143b5ea46(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5eaa4 FUN_143b5eaa4 body=93 status=ok
// SIG undefined FUN_143b5eaa4(void)

undefined8 FUN_143b5eaa4(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5eb02 FUN_143b5eb02 body=93 status=ok
// SIG undefined FUN_143b5eb02(void)

undefined8 FUN_143b5eb02(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5eb60 FUN_143b5eb60 body=93 status=ok
// SIG undefined FUN_143b5eb60(void)

undefined8 FUN_143b5eb60(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5ebbe FUN_143b5ebbe body=93 status=ok
// SIG undefined FUN_143b5ebbe(void)

undefined8 FUN_143b5ebbe(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146bcb256(*param_2 + 0xb0,param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5ec1c FUN_143b5ec1c body=38 status=ok
// SIG undefined FUN_143b5ec1c(void)

void FUN_143b5ec1c(longlong *param_1,undefined8 param_2)

{
  FUN_146c005f0(*(undefined8 *)(*param_1 + 8),param_2,1,1,1,1);
  return;
}



// FUNCTION 143b5ec84 FUN_143b5ec84 body=29 status=ok
// SIG undefined FUN_143b5ec84(void)

undefined8 FUN_143b5ec84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5ecd0 FUN_143b5ecd0 body=29 status=ok
// SIG undefined FUN_143b5ecd0(void)

undefined8 FUN_143b5ecd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5ecee FUN_143b5ecee body=1030 status=ok
// SIG undefined FUN_143b5ecee(void)

double * FUN_143b5ecee(double *param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *param_2;
  local_88 = param_3[2] - *(double *)(lVar1 + 0xb8);
  dStack_90 = param_3[1] - *(double *)(lVar1 + 0xb0);
  local_98 = *param_3 - *(double *)(lVar1 + 0xa8);
  FUN_146bf2028(lVar1 + 0xc0,&local_b0);
  dVar4 = 0.0;
  if (*(int *)(lVar1 + 0x130) != 1) {
    dVar4 = local_a0;
  }
  local_b0 = *(double *)(lVar1 + 0x118) * local_b0;
  local_a8 = *(double *)(lVar1 + 0x120) * local_a8;
  local_a0 = dVar4 * *(double *)(lVar1 + 0x128);
  FUN_146bed047(&local_98,lVar1 + 0xf8,&local_b0);
  dVar4 = *(double *)(lVar1 + 0xf0);
  dVar6 = *(double *)(lVar1 + 0xe0);
  dVar5 = *(double *)(lVar1 + 0xe8);
  *param_1 = local_98 + dVar6;
  param_1[1] = dStack_90 + dVar5;
  param_1[2] = local_88 + dVar4;
  if (*(int *)(lVar1 + 0x130) == 2) {
    dVar4 = dVar4 - *(double *)(lVar1 + 0xb8);
    dVar5 = dVar5 - *(double *)(lVar1 + 0xb0);
    dVar6 = dVar6 - *(double *)(lVar1 + 0xa8);
    dVar7 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5);
    dStack_90 = 0.0;
    dVar8 = 1.0 / dVar7;
    local_98 = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar6 * dVar8));
    if (0.0 < dVar7) {
      local_88 = dVar4 * dVar8;
      dStack_90 = dVar5 * dVar8;
    }
    else {
      local_88 = 0.0;
    }
    local_d8 = param_1;
    cVar2 = FUN_14848488c(lVar1 + 0xe0,param_3,&local_98,2);
    if (cVar2 == '\0') {
      local_b8 = -local_88;
      local_c8 = -local_98;
      dStack_c0 = -dStack_90;
      local_d8 = param_1;
      cVar2 = FUN_14848488c(lVar1 + 0xe0,param_3,&local_c8,2);
      if (cVar2 == '\0') {
        param_1[2] = param_3[2];
        dVar4 = param_3[1];
        *param_1 = *param_3;
        param_1[1] = dVar4;
      }
    }
    dVar4 = param_3[1];
    dVar6 = param_3[2];
    dVar5 = local_88 * local_88 + local_98 * local_98 + dStack_90 * dStack_90;
    dVar7 = local_98;
    dVar8 = dStack_90;
    dVar9 = local_88;
    if (9.99999993922529e-09 < dVar5) {
      dVar9 = 1.0 / SQRT(dVar5);
      dVar7 = local_98 * dVar9;
      dVar8 = dStack_90 * dVar9;
      dVar9 = local_88 * dVar9;
    }
    dVar5 = (param_1[2] - dVar6) * dVar9 +
            (*param_1 - *param_3) * dVar7 + (param_1[1] - dVar4) * dVar8;
    uVar3 = -(ulonglong)(-dVar5 <= dVar5);
    if (*(double *)(lVar1 + 0x138) < (double)(~uVar3 & (ulonglong)-dVar5 | uVar3 & (ulonglong)dVar5)
       ) {
      dVar5 = *(double *)(lVar1 + 0x138) *
              (double)(-(ulonglong)(0.0 < dVar5) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar5) &
                      (ulonglong)((uint)(-(ulonglong)(dVar5 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
      *param_1 = *param_3 + dVar7 * dVar5;
      param_1[1] = dVar4 + dVar8 * dVar5;
      param_1[2] = dVar6 + dVar9 * dVar5;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b5f120 FUN_143b5f120 body=29 status=ok
// SIG undefined FUN_143b5f120(void)

undefined8 FUN_143b5f120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5f13e FUN_143b5f13e body=38 status=ok
// SIG undefined FUN_143b5f13e(void)

void FUN_143b5f13e(longlong *param_1,undefined8 param_2)

{
  FUN_146c005f0(*(undefined8 *)(*param_1 + 8),param_2,1,1,1,1);
  return;
}



// FUNCTION 143b5f1a6 FUN_143b5f1a6 body=29 status=ok
// SIG undefined FUN_143b5f1a6(void)

undefined8 FUN_143b5f1a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5f1f2 FUN_143b5f1f2 body=29 status=ok
// SIG undefined FUN_143b5f1f2(void)

undefined8 FUN_143b5f1f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5f282 FUN_143b5f282 body=29 status=ok
// SIG undefined FUN_143b5f282(void)

undefined8 FUN_143b5f282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5f2a0 FUN_143b5f2a0 body=855 status=ok
// SIG undefined FUN_143b5f2a0(void)

void FUN_143b5f2a0(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  DWORD DVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint unaff_R14D;
  uint unaff_R15D;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = param_1[1];
  local_118 = (ulonglong)(*param_2 >> 9);
  lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + local_118 * 8);
  local_110 = (ulonglong)(*param_2 & 0x1ff);
  local_f8 = *(undefined8 *)(lVar8 + 0x10 + local_110 * 0x18);
  puVar1 = (undefined4 *)(lVar8 + local_110 * 0x18);
  local_108 = *puVar1;
  uStack_104 = puVar1[1];
  uStack_100 = puVar1[2];
  uStack_fc = puVar1[3];
  dwTlsIndex = DAT_14c763024;
  if (DAT_14c763024 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar11 = DAT_14c763024 != 0xffffffff;
    DVar5 = dwTlsIndex;
    if (bVar11) {
      DVar6 = DAT_14c763024;
      DVar5 = DAT_14c763024;
    }
    DAT_14c763024 = DVar5;
    UNLOCK();
    if (bVar11) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  local_120 = TlsGetValue(dwTlsIndex);
  if (local_120 == (undefined8 *)0x0) {
    local_120 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_120 = 0;
    local_120[1] = 0;
    DVar6 = GetCurrentThreadId();
    *(DWORD *)(local_120 + 1) = DVar6;
    *local_120 = &PTR_FUN_14aee5920;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    local_120[5] = 0;
    FUN_140fddf04(local_120);
    TlsSetValue(dwTlsIndex,local_120);
  }
  local_128 = local_120 + 2;
  if (*(int *)(lVar3 + 0xb8) < 2) {
    local_d0[0] = 0;
    local_cc = 0x3f800000;
    FUN_148484b84();
  }
  else {
    FUN_148484b5a(local_128,*(undefined4 *)(lVar3 + 0xa0));
  }
  iVar10 = *(int *)(lVar3 + 0xa0);
  fVar13 = 0.0;
  if (0 < iVar10) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      iVar2 = *(int *)(lVar3 + 0xb8);
      if ((iVar2 != 1) || (*(int *)(*(longlong *)param_1[2] + 0x20 + lVar8) != 0)) {
        fVar12 = (float)FUN_148484ccc(*(longlong *)param_1[2] + lVar8,&local_108);
        fVar12 = fVar12 / *(float *)param_1[3];
        if (fVar12 <= 0.0001) {
          fVar12 = 0.0001;
        }
        fVar12 = 1.0 / ((1.0 - *(float *)param_1[4]) * fVar12 +
                       *(float *)param_1[4] * fVar12 * fVar12);
        fVar12 = fVar12 * fVar12;
        if (iVar2 < 2) {
          if (fVar12 <= fVar13) goto LAB_143b5f3c8;
          unaff_R14D = unaff_R14D & 0xffff0000 | (uint)lVar9 & 0xffff;
          puVar7 = (uint *)*local_128;
          *puVar7 = unaff_R14D;
          fVar13 = fVar12;
        }
        else {
          iVar10 = *(int *)(local_120 + 3);
          *(uint *)(local_120 + 3) = iVar10 + 1U;
          if (*(uint *)((longlong)local_120 + 0x1c) < iVar10 + 1U) {
            FUN_148484c46(local_128,iVar10);
          }
          unaff_R15D = unaff_R15D & 0xffff0000 | (uint)lVar9 & 0xffff;
          puVar7 = (uint *)(*local_128 + (longlong)iVar10 * 8);
          *puVar7 = unaff_R15D;
          fVar13 = fVar13 + fVar12;
        }
        puVar7[1] = (uint)fVar12;
        iVar10 = *(int *)(lVar3 + 0xa0);
      }
LAB_143b5f3c8:
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar9 < iVar10);
  }
  puVar4 = local_120;
  FUN_143b5f5f8(local_120,fVar13,*(undefined4 *)(param_1[5] + 4));
  lVar3 = *(longlong *)param_1[6];
  local_e8 = puVar4[4];
  local_e0 = *(undefined4 *)(puVar4 + 5);
  local_a0 = 0;
  local_98 = 0xc00000000;
  local_d8 = local_d0;
  FUN_146fa976c(&local_d8,&local_e8,param_1[5]);
  FUN_146bea50a((ulonglong)(uint)((int)local_110 << 6) +
                *(longlong *)(*(longlong *)(lVar3 + 0x20) + local_118 * 8),local_d0);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b5f5f8 FUN_143b5f5f8 body=1220 status=ok
// SIG undefined FUN_143b5f5f8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b5f5f8(longlong param_1,float param_2,int param_3)

{
  float *pfVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [190];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  iVar14 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar14 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      *(float *)(lVar13 + 4 + lVar6) = *(float *)(lVar13 + 4 + lVar6) / param_2;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar14 * 8 != lVar6);
    iVar14 = *(int *)(param_1 + 0x18);
    if (1 < (longlong)iVar14) {
      lVar13 = *(longlong *)(param_1 + 0x10);
      memset(local_398,0,0x2f0);
      local_3a0 = lVar13 + (longlong)iVar14 * 8 + -8;
      local_3a8 = lVar13;
      fVar25 = logf((float)iVar14);
      local_398[0] = (int)(longlong)(fVar25 + fVar25);
      plVar5 = &local_3a8;
      do {
        puVar7 = (undefined8 *)*plVar5;
        puVar11 = (undefined8 *)plVar5[1];
        iVar14 = (int)plVar5[2];
        iVar18 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar7) >> 3);
        uVar17 = iVar18 + 1;
        puVar22 = puVar11;
        puVar23 = puVar7;
        if (iVar14 != 0) {
LAB_143b5f6fe:
          puVar8 = puVar7;
          if (8 < (int)uVar17) {
            uVar3 = puVar8[uVar17 >> 1];
            puVar8[uVar17 >> 1] = *puVar8;
            *puVar8 = uVar3;
            puVar19 = puVar11 + 1;
            puVar7 = puVar8;
            do {
              puVar4 = puVar7 + 1;
              puVar12 = puVar7 + 1;
              do {
                puVar7 = puVar12;
                puVar20 = puVar4;
                if (puVar11 < puVar7) break;
                puVar4 = puVar20 + 1;
                puVar12 = puVar7 + 1;
              } while (*(float *)((longlong)puVar8 + 4) < *(float *)((longlong)puVar7 + 4) ||
                       *(float *)((longlong)puVar8 + 4) == *(float *)((longlong)puVar7 + 4));
              puVar4 = puVar19 + -2;
              do {
                puVar12 = puVar19;
                puVar21 = puVar4;
                puVar19 = puVar12 + -1;
                if (puVar19 <= puVar8) break;
                puVar4 = puVar21 + -1;
              } while (*(float *)((longlong)puVar12 + -4) < *(float *)((longlong)puVar8 + 4) ||
                       *(float *)((longlong)puVar12 + -4) == *(float *)((longlong)puVar8 + 4));
              if (puVar19 < puVar7) goto LAB_143b5f788;
              uVar3 = *puVar7;
              *puVar7 = *puVar19;
              *puVar19 = uVar3;
            } while( true );
          }
          for (; puVar7 = puVar8, puVar22 = puVar8, puVar8 < puVar11; puVar11 = puVar11 + -1) {
            while (puVar23 = puVar7, puVar7 = puVar22 + 1, puVar7 <= puVar11) {
              pfVar1 = (float *)((longlong)puVar22 + 0xc);
              puVar22 = puVar7;
              if (*(float *)((longlong)puVar23 + 4) < *pfVar1 ||
                  *(float *)((longlong)puVar23 + 4) == *pfVar1) {
                puVar7 = puVar23;
              }
            }
            uVar3 = *puVar23;
            *puVar23 = *puVar11;
            *puVar11 = uVar3;
          }
          goto LAB_143b5f9b2;
        }
LAB_143b5f81b:
        if (uVar17 != 0) {
          iVar14 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
          iVar18 = iVar14;
joined_r0x000143b5f842:
          do {
            iVar16 = iVar14 * 2 + 1;
            if (iVar16 < (int)uVar17) {
              iVar15 = iVar14 * 2 + 2;
              if ((iVar15 < (int)uVar17) &&
                 (fVar25 = *(float *)((longlong)puVar7 + (longlong)iVar15 * 8 + 4),
                 pfVar1 = (float *)((longlong)puVar7 + (longlong)iVar16 * 8 + 4),
                 fVar25 < *pfVar1 || fVar25 == *pfVar1)) {
                iVar16 = iVar15;
              }
              lVar6 = (longlong)iVar14;
              lVar13 = (longlong)iVar16;
              fVar25 = *(float *)((longlong)puVar7 + lVar6 * 8 + 4);
              pfVar1 = (float *)((longlong)puVar7 + lVar13 * 8 + 4);
              if (*pfVar1 <= fVar25 && fVar25 != *pfVar1) {
                uVar3 = puVar7[lVar6];
                puVar7[lVar6] = puVar7[lVar13];
                puVar7[lVar13] = uVar3;
                iVar14 = iVar16;
                goto joined_r0x000143b5f842;
              }
            }
            bVar24 = iVar18 != 0;
            iVar14 = iVar18 + -1;
            iVar18 = iVar14;
          } while (bVar24);
          if (1 < (int)uVar17) {
            uVar9 = (ulonglong)uVar17;
            uVar3 = *puVar7;
            *puVar7 = puVar7[uVar9 - 1];
            puVar7[uVar9 - 1] = uVar3;
            if (uVar17 != 2) {
              do {
                uVar10 = uVar9 - 1;
                iVar14 = 0;
                iVar16 = 1;
                iVar18 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar15 = iVar16;
                  if (((longlong)iVar14 < (longlong)uVar10) &&
                     (fVar25 = *(float *)((longlong)puVar7 + (longlong)iVar14 * 8 + 4),
                     pfVar1 = (float *)((longlong)puVar7 + (longlong)iVar16 * 8 + 4),
                     fVar25 < *pfVar1 || fVar25 == *pfVar1)) {
                    iVar15 = iVar14;
                  }
                  lVar13 = (longlong)iVar18;
                  lVar6 = (longlong)iVar15;
                  fVar25 = *(float *)((longlong)puVar7 + lVar13 * 8 + 4);
                  pfVar1 = (float *)((longlong)puVar7 + lVar6 * 8 + 4);
                  if (fVar25 < *pfVar1 || fVar25 == *pfVar1) break;
                  uVar3 = puVar7[lVar13];
                  puVar7[lVar13] = puVar7[lVar6];
                  puVar7[lVar6] = uVar3;
                  iVar14 = iVar15 * 2;
                  iVar16 = iVar15 * 2 + 1;
                  iVar18 = iVar15;
                } while ((longlong)iVar16 < (longlong)uVar10);
                uVar3 = *puVar7;
                *puVar7 = puVar7[uVar9 - 2];
                puVar7[uVar9 - 2] = uVar3;
                uVar9 = uVar10;
              } while (2 < uVar10);
            }
          }
        }
LAB_143b5f9b2:
        plVar5 = plVar5 + -3;
      } while (&local_3a8 <= plVar5);
    }
  }
  FUN_146fa8b64(param_1 + 0x20,param_3);
  iVar14 = *(int *)(param_1 + 0x18);
  if (param_3 < *(int *)(param_1 + 0x18)) {
    iVar14 = param_3;
  }
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      fVar25 = *(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar13 * 8);
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x10) + lVar13 * 8);
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      iVar14 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar14 + 1U) {
        FUN_146faa9c8(param_1 + 0x20,iVar14);
      }
      *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar14 * 4) =
           (int)(fVar25 * 65535.0 + 0.5) << 0x10 | (uint)uVar2;
      lVar13 = lVar13 + 1;
      iVar14 = *(int *)(param_1 + 0x18);
      if (param_3 < *(int *)(param_1 + 0x18)) {
        iVar14 = param_3;
      }
    } while (lVar13 < iVar14);
  }
  if ((local_a0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143b5f788:
  uVar3 = *puVar8;
  *puVar8 = *puVar19;
  *puVar19 = uVar3;
  iVar14 = iVar14 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar21 - (longlong)puVar23 < (longlong)puVar22 - (longlong)puVar20) {
    if (puVar7 < puVar11) {
      *plVar5 = (longlong)puVar7;
      plVar5[1] = (longlong)puVar11;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    puVar7 = puVar8;
    if (puVar19 <= puVar8 + 1) goto LAB_143b5f9b2;
  }
  else {
    if (puVar8 + 1 < puVar19) {
      *plVar5 = (longlong)puVar8;
      plVar5[1] = (longlong)puVar12;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    puVar8 = puVar20;
    puVar12 = puVar11;
    puVar21 = puVar11;
    if (puVar11 <= puVar7) goto LAB_143b5f9b2;
  }
  iVar18 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar8) >> 3);
  uVar17 = iVar18 + 1;
  puVar11 = puVar12;
  puVar22 = puVar21;
  puVar23 = puVar8;
  if (iVar14 == 0) goto LAB_143b5f81b;
  goto LAB_143b5f6fe;
}



// FUNCTION 143b5fabe FUN_143b5fabe body=102 status=ok
// SIG undefined FUN_143b5fabe(void)

undefined8 * FUN_143b5fabe(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aee5928;
  puVar1 = TlsGetValue(DAT_14c763024);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c763024,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5fb24 FUN_143b5fb24 body=74 status=ok
// SIG undefined FUN_143b5fb24(void)

undefined8 * FUN_143b5fb24(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aee5928;
  puVar1 = TlsGetValue(DAT_14c763024);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c763024,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b5fb6e FUN_143b5fb6e body=2279 status=ok
// SIG undefined FUN_143b5fb6e(void)

void FUN_143b5fb6e(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint local_1b4;
  longlong *local_1b0;
  uint local_1a8;
  uint local_1a4;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  longlong local_108 [2];
  int local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar7 = (longlong)*param_2;
  local_1a0 = *param_1;
  local_198 = lVar7;
  if ((*(int *)(local_1a0 + 0xb8) != 1) ||
     (*(int *)(*(longlong *)param_1[1] + 0x20 + lVar7 * 0x28) != 0)) {
    local_e8 = 0xffffffff00000000;
    uStack_e0 = 0xffffffff00000000;
    local_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    puVar2 = (undefined4 *)param_1[2];
    local_1c8 = *(undefined4 *)param_1[3];
    FUN_148476346(local_108,*puVar2,puVar2[1],puVar2[2]);
    local_190 = lVar7 * 0x28;
    FUN_148486574(*(longlong *)param_1[1] + local_190,&local_140);
    lVar7 = param_1[4];
    fVar27 = *(float *)(lVar7 + 0x20);
    fVar25 = ((float)local_140 - *(float *)(lVar7 + 0x24)) / fVar27;
    uVar10 = (int)ROUND(fVar25 + fVar25 + -0.5) >> 1;
    fVar25 = ((float)local_128 - *(float *)(lVar7 + 0x24)) / fVar27;
    local_1a4 = (int)ROUND(fVar25 + fVar25 + -0.5) >> 1;
    local_1b0 = param_1;
    if ((int)uVar10 <= (int)local_1a4) {
      fVar25 = ((float)local_138 - *(float *)(lVar7 + 0x28)) / fVar27;
      local_1b4 = (int)ROUND(fVar25 + fVar25 + -0.5) >> 1;
      fVar25 = ((float)local_130 - *(float *)(lVar7 + 0x2c)) / fVar27;
      fVar24 = ((float)local_118 - *(float *)(lVar7 + 0x2c)) / fVar27;
      uVar15 = (int)ROUND(fVar25 + fVar25 + -0.5) >> 1;
      uVar18 = (int)ROUND(fVar24 + fVar24 + -0.5) >> 1;
      fVar27 = ((float)local_120 - *(float *)(lVar7 + 0x28)) / fVar27;
      local_1a8 = (int)ROUND(fVar27 + fVar27 + -0.5) >> 1;
      uVar13 = uVar18;
      if ((int)uVar18 < (int)uVar15) {
        uVar13 = uVar15;
      }
      uVar4 = local_1a8;
      if ((int)local_1a8 < (int)local_1b4) {
        uVar4 = local_1b4;
      }
      do {
        if ((int)local_1b4 <= (int)local_1a8) {
          uVar12 = local_1b4;
          do {
            if ((int)uVar15 <= (int)uVar18) {
              uVar9 = uVar15;
              do {
                if ((((-1 < (int)(uVar12 | uVar10 | uVar9)) && ((int)uVar10 < local_f8)) &&
                    ((int)uVar12 < local_f4)) && ((int)uVar9 < local_f0)) {
                  lVar7 = local_1b0[4];
                  fVar27 = *(float *)(lVar7 + 0x20);
                  fVar25 = *(float *)(lVar7 + 0x30);
                  fVar23 = (float)(int)uVar10 * fVar27 + *(float *)(lVar7 + 0x24) + fVar25;
                  fVar24 = *(float *)(lVar7 + 0x34);
                  fVar29 = (float)(int)uVar12 * fVar27 + *(float *)(lVar7 + 0x28) + fVar24;
                  fVar26 = *(float *)(lVar7 + 0x38);
                  fVar27 = (float)(int)uVar9 * fVar27 + *(float *)(lVar7 + 0x2c) + fVar26;
                  local_150 = (double)(fVar27 + fVar26);
                  local_158 = (double)(fVar29 + fVar24);
                  local_160 = (double)(fVar23 + fVar25);
                  local_168 = (double)(fVar27 - fVar26);
                  local_170 = (double)(fVar29 - fVar24);
                  local_178 = (double)(fVar23 - fVar25);
                  local_148 = 1;
                  cVar5 = FUN_148486646(*(longlong *)local_1b0[1] + local_190,&local_178);
                  if (cVar5 != '\0') {
                    local_184 = uVar10;
                    local_180 = uVar12;
                    local_17c = uVar9;
                    FUN_148486500(&local_e8,&local_184);
                    *(undefined4 *)
                     (local_108[0] +
                     (longlong)(int)((local_f4 * uVar9 + uVar12) * local_f8 + uVar10) * 4) = 0;
                  }
                }
                uVar9 = uVar9 + 1;
              } while (uVar13 + 1 != uVar9);
            }
            bVar22 = uVar12 != uVar4;
            uVar12 = uVar12 + 1;
          } while (bVar22);
        }
        bVar22 = uVar10 != local_1a4;
        uVar10 = uVar10 + 1;
      } while (bVar22);
    }
    plVar20 = local_1b0;
    iVar6 = (int)uStack_e0;
    if (((int)local_e8 != (int)uStack_e0) || (local_e8._4_4_ != uStack_e0._4_4_)) {
      do {
        if (uStack_e0._4_4_ == 0xff) {
          lVar7 = (longlong)iVar6;
          iVar6 = *(int *)(local_d0 + 4 + lVar7 * 0x10);
          *(undefined1 *)(local_d0 + lVar7 * 0x10) = 1;
          local_d8 = local_d8 + 1;
          uStack_e0._4_4_ = -1;
          uStack_e0._0_4_ = iVar6;
        }
        uStack_e0._4_4_ = uStack_e0._4_4_ + 1;
        lVar7 = *(longlong *)(local_d0 + 8 + (longlong)iVar6 * 0x10);
        lVar8 = (longlong)uStack_e0._4_4_;
        iVar6 = *(int *)(lVar7 + lVar8 * 0xc);
        iVar14 = *(int *)(lVar7 + 4 + lVar8 * 0xc);
        iVar16 = *(int *)(lVar7 + 8 + lVar8 * 0xc);
        fVar27 = *(float *)(local_108[0] +
                           (longlong)((local_f4 * iVar16 + iVar14) * local_f8 + iVar6) * 4);
        lVar7 = 8;
        do {
          iVar11 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar7) + iVar6;
          if (-1 < iVar11) {
            iVar1 = *(int *)((longlong)&PTR_FUN_149f3c868 + lVar7 + 4);
            iVar21 = iVar1 + iVar14;
            if (-1 < iVar21) {
              iVar19 = *(int *)((longlong)&DAT_149f3c870 + lVar7) + iVar16;
              if (((-1 < iVar19) && (iVar11 < local_f8)) &&
                 ((iVar21 < local_f4 &&
                  ((iVar19 < local_f0 &&
                   (plVar3 = (longlong *)plVar20[4], plVar20 = local_1b0,
                   *(int *)(*plVar3 +
                           (longlong)
                           ((*(int *)((longlong)plVar3 + 0x14) * iVar19 + iVar21) * (int)plVar3[2] +
                           iVar11) * 4) != 0)))))) {
                fVar25 = *(float *)(plVar3 + 4);
                fVar24 = (float)*(int *)((longlong)&DAT_149f3c870 + lVar7) * fVar25;
                fVar26 = (float)iVar1 * fVar25;
                fVar25 = (float)*(int *)((longlong)&PTR_FUN_149f3c868 + lVar7) * fVar25;
                fVar25 = SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26) + fVar27;
                if (fVar25 < *(float *)(local_108[0] +
                                       (longlong)((local_f4 * iVar19 + iVar21) * local_f8 + iVar11)
                                       * 4)) {
                  local_178 = (double)CONCAT44(iVar21,iVar11);
                  local_170 = (double)CONCAT44(local_170._4_4_,iVar19);
                  FUN_148486500(&local_e8);
                  *(float *)(local_108[0] +
                            (longlong)((iVar19 * local_f4 + iVar21) * local_f8 + iVar11) * 4) =
                       fVar25;
                }
              }
            }
          }
          lVar7 = lVar7 + 0xc;
        } while (lVar7 != 0x140);
        iVar6 = (int)uStack_e0;
      } while (((int)local_e8 != (int)uStack_e0) || (local_e8._4_4_ != uStack_e0._4_4_));
    }
    iVar6 = *(int *)plVar20[5];
    if (0 < iVar6) {
      uVar10 = 0;
      do {
        lVar7 = plVar20[4];
        lVar8 = *(longlong *)(*(longlong *)(plVar20[6] + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        uVar17 = (ulonglong)(uVar10 & 0x1ff);
        dVar31 = *(double *)(lVar8 + uVar17 * 0x18);
        dVar30 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
        dVar28 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
        fVar27 = *(float *)(lVar7 + 0x20);
        fVar25 = ((float)dVar31 - *(float *)(lVar7 + 0x24)) / fVar27;
        uVar13 = (uint)ROUND(fVar25 + fVar25 + -0.5);
        iVar14 = (int)uVar13 >> 1;
        fVar25 = ((float)dVar30 - *(float *)(lVar7 + 0x28)) / fVar27;
        uVar15 = (uint)ROUND(fVar25 + fVar25 + -0.5);
        iVar16 = (int)uVar15 >> 1;
        fVar25 = ((float)dVar28 - *(float *)(lVar7 + 0x2c)) / fVar27;
        uVar18 = (uint)ROUND(fVar25 + fVar25 + -0.5);
        iVar11 = (int)uVar18 >> 1;
        if ((((-1 < (int)(uVar15 | uVar13 | uVar18) >> 1) && (iVar14 < local_f8)) &&
            (iVar16 < local_f4)) && (iVar11 < local_f0)) {
          dVar31 = dVar31 - (double)((float)iVar14 * fVar27 + *(float *)(lVar7 + 0x24) +
                                    *(float *)(lVar7 + 0x30));
          dVar30 = dVar30 - (double)((float)iVar16 * fVar27 + *(float *)(lVar7 + 0x28) +
                                    *(float *)(lVar7 + 0x34));
          dVar28 = dVar28 - (double)((float)iVar11 * fVar27 + *(float *)(lVar7 + 0x2c) +
                                    *(float *)(lVar7 + 0x38));
          fVar27 = (float)((double)*(float *)(local_108[0] +
                                             (longlong)
                                             ((local_f4 * iVar11 + iVar16) * local_f8 + iVar14) * 4)
                          + SQRT(dVar28 * dVar28 + dVar30 * dVar30 + dVar31 * dVar31)) /
                   *(float *)plVar20[3];
          if (fVar27 <= 0.0001) {
            fVar27 = 0.0001;
          }
          fVar27 = 1.0 / ((1.0 - *(float *)plVar20[7]) * fVar27 +
                         *(float *)plVar20[7] * fVar27 * fVar27);
          *(float *)(*(longlong *)plVar20[8] +
                    (longlong)(int)(*(int *)(local_1a0 + 0xa0) * uVar10 + (int)local_198) * 4) =
               fVar27 * fVar27;
          iVar6 = *(int *)plVar20[5];
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar6);
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    FUN_148486a08(local_d0,uStack_c8 & 0xffffffff);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b60456 FUN_143b60456 body=694 status=ok
// SIG undefined FUN_143b60456(void)

void FUN_143b60456(longlong *param_1,uint *param_2)

{
  float fVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  DWORD DVar5;
  DWORD dwTlsIndex;
  undefined8 *lpTlsValue;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint unaff_ESI;
  longlong lVar10;
  uint unaff_R14D;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 *local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = (ulonglong)*param_2;
  lVar2 = *param_1;
  dwTlsIndex = DAT_14c763024;
  if (DAT_14c763024 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar12 = DAT_14c763024 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar12) {
      DVar5 = DAT_14c763024;
      DVar3 = DAT_14c763024;
    }
    DAT_14c763024 = DVar3;
    UNLOCK();
    if (bVar12) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  uVar11 = local_d8;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    DVar5 = GetCurrentThreadId();
    *(DWORD *)(lpTlsValue + 1) = DVar5;
    *lpTlsValue = &PTR_FUN_14aee5920;
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    lpTlsValue[4] = 0;
    lpTlsValue[5] = 0;
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_d0 = lpTlsValue + 2;
  if (*(int *)(lVar2 + 0xb8) < 2) {
    local_b0[0] = 0;
    local_ac = 0x3f800000;
    FUN_148484b84();
  }
  else {
    FUN_148484b5a(local_d0,*(undefined4 *)(lVar2 + 0xa0));
  }
  iVar4 = *(int *)(lVar2 + 0xa0);
  fVar13 = 0.0;
  if (0 < iVar4) {
    lVar10 = 0x20;
    lVar9 = 0;
    plVar7 = local_d0;
    do {
      if ((*(int *)(lVar2 + 0xb8) != 1) || (*(int *)(*(longlong *)param_1[1] + lVar10) != 0)) {
        uVar8 = (uint)lVar9;
        fVar1 = *(float *)(*(longlong *)param_1[2] +
                          (longlong)(int)(iVar4 * (int)uVar11 + uVar8) * 4);
        if (*(int *)(lVar2 + 0xb8) < 2) {
          if (fVar1 <= fVar13) goto LAB_143b605a8;
          unaff_R14D = unaff_R14D & 0xffff0000 | uVar8 & 0xffff;
          puVar6 = (uint *)*plVar7;
          *puVar6 = unaff_R14D;
          fVar13 = fVar1;
        }
        else {
          iVar4 = *(int *)(lpTlsValue + 3);
          *(uint *)(lpTlsValue + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)lpTlsValue + 0x1c) < iVar4 + 1U) {
            FUN_148484c46(plVar7,iVar4);
            plVar7 = local_d0;
          }
          unaff_ESI = unaff_ESI & 0xffff0000 | uVar8 & 0xffff;
          puVar6 = (uint *)(*plVar7 + (longlong)iVar4 * 8);
          *puVar6 = unaff_ESI;
          uVar11 = local_d8;
          fVar13 = fVar13 + fVar1;
        }
        puVar6[1] = (uint)fVar1;
        iVar4 = *(int *)(lVar2 + 0xa0);
      }
LAB_143b605a8:
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x28;
    } while (lVar9 < iVar4);
  }
  FUN_143b5f5f8(lpTlsValue,fVar13,*(undefined4 *)(param_1[3] + 4));
  lVar2 = *(longlong *)param_1[4];
  local_c8 = lpTlsValue[4];
  local_c0 = *(undefined4 *)(lpTlsValue + 5);
  local_80 = 0;
  local_78 = 0xc00000000;
  local_b8 = local_b0;
  FUN_146fa976c(&local_b8,&local_c8,param_1[3]);
  FUN_146bea50a((ulonglong)(((uint)uVar11 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar11 >> 9 & 0x7fffff) * 8),local_b0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6071b FUN_143b6071b body=687 status=ok
// SIG undefined FUN_143b6071b(void)

void FUN_143b6071b(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = &PTR_FUN_14aee1ec0;
  local_58 = 4;
  local_68 = 0;
  FUN_14282b410(L"/Script/ModelingOperators",&PTR_FUN_14aee1f40,1,0);
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14aee2280 + lVar2),L"/Script/ModelingOperators"
                  ,*(undefined8 *)(&UNK_14aee2288 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_14aee2290 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xd0);
  ppuStack_60 = &PTR_FUN_14aee2a10;
  local_58 = 1;
  local_68 = 0;
  lVar2 = 0;
  FUN_14282b410(L"/Script/ModelingOperators",&PTR_FUN_14aee2a30,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14aee2ba0 + lVar2),L"/Script/ModelingOperators"
                  ,*(undefined8 *)((longlong)&PTR_u_ENormalCalculationMethod_14aee2ba8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14aee2bb0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  FUN_14098d3d2(FUN_143b56c5f,L"/Script/ModelingOperators",L"EHoleFillOpFillType",&DAT_14cb4bc80);
  lVar2 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14aee2d70 + lVar2),L"/Script/ModelingOperators"
                  ,*(undefined8 *)((longlong)&PTR_u_ERemeshType_14aee2d78 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14aee2d80 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14aee2ee0 + lVar2),L"/Script/ModelingOperators"
                  ,*(undefined8 *)(&UNK_14aee2ee8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_14aee2ef0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x70);
  FUN_14098d3d2(FUN_143b573a8,L"/Script/ModelingOperators",L"EMorphologyOperation",&DAT_14cb4bd10);
  local_48 = "ObjectIndexAttribute";
  local_40 = 0x14;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  DAT_14cb4bd28 = (ulonglong)uVar1;
  local_48 = (char *)0x800000014aee3020;
  local_34 = 0x11;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1464909dc(&local_48);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingOperators",&PTR_FUN_14aee33d0,1,0);
  ppuStack_60 = &PTR_FUN_14aee3e30;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ModelingOperators",&PTR_FUN_14aee3e50,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingOperators",&PTR_FUN_14aee4230,1,0);
  FUN_14098d3d2(FUN_143b5a6a2,L"/Script/ModelingOperators",L"EUVProjectionMethod",&DAT_14cb4bdb8);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b609cc FUN_143b609cc body=4578 status=ok
// SIG undefined FUN_143b609cc(void)

void FUN_143b609cc(longlong *param_1,longlong param_2,double *param_3,char param_4,double param_5,
                  double param_6,byte param_7)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double *pdVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double dVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  bool bVar25;
  int iVar26;
  longlong lVar27;
  undefined4 *puVar28;
  int iVar29;
  longlong lVar30;
  longlong *plVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_888 [32];
  undefined8 *local_868;
  undefined8 *local_860;
  byte local_858;
  char local_841;
  longlong *local_840;
  double local_838;
  double local_830;
  double local_828;
  double local_820;
  longlong local_818 [2];
  longlong local_808;
  longlong local_800;
  undefined8 *local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined4 *local_788;
  uint local_780;
  undefined4 local_77c;
  longlong local_778;
  undefined8 uStack_770;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  double local_748;
  longlong local_738;
  undefined8 uStack_730;
  undefined8 *local_728;
  ulonglong uStack_720;
  double local_710;
  double local_708;
  double local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined2 local_6c0;
  undefined1 local_6be;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  double local_688;
  double local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 *local_658;
  undefined8 local_648;
  undefined **local_638;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  double local_620;
  undefined8 local_618 [2];
  undefined8 local_608;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  double local_5c8;
  undefined3 uStack_5c0;
  undefined5 uStack_5bd;
  undefined3 uStack_5b8;
  undefined5 uStack_5b5;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  undefined8 local_598;
  ulonglong uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined8 local_548;
  ulonglong uStack_540;
  undefined2 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_504;
  undefined4 local_4fc;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined2 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_364;
  undefined4 local_35c;
  undefined8 local_350;
  undefined4 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_310;
  double local_308;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_888;
  puVar3 = *(undefined4 **)(param_2 + 8);
  local_678 = *puVar3;
  uStack_674 = puVar3[1];
  uStack_670 = puVar3[2];
  uStack_66c = puVar3[3];
  local_668 = puVar3[4];
  uStack_664 = puVar3[5];
  uStack_660 = puVar3[6];
  uStack_65c = puVar3[7];
  local_841 = param_4;
  local_840 = param_1;
  local_808 = param_2;
  FUN_143b635ed(&local_6b0,&local_678);
  local_828 = (double)CONCAT44(uStack_674,local_678);
  local_830 = (double)CONCAT44(uStack_66c,uStack_670);
  local_838 = (double)CONCAT44(uStack_664,local_668);
  uVar22 = 0;
  local_820 = (double)CONCAT44(uStack_65c,uStack_660);
  uVar13 = 0xffffffff;
  uVar14 = 0xffefffff;
  uVar38 = 0xffffffff;
  uVar40 = 0xffefffff;
  uVar12 = 0xffffffff;
  uVar43 = 0x7fefffff;
  uVar45 = 0xffffffff;
  uVar47 = 0x7fefffff;
  dVar5 = -1.79769313486232e+308;
  dVar7 = 1.79769313486232e+308;
  do {
    local_5d8 = param_3 + 3;
    if (((uVar22 >> 1 ^ uVar22) & 1) == 0) {
      local_5d8 = param_3;
    }
    local_5d8 = (double *)*local_5d8;
    pdVar15 = param_3 + 4;
    if ((uVar22 & 2) == 0) {
      pdVar15 = param_3 + 1;
    }
    uStack_5d0 = *pdVar15;
    pdVar15 = param_3 + 5;
    if (uVar22 < 4) {
      pdVar15 = param_3 + 2;
    }
    local_5c8 = *pdVar15;
    FUN_146bca7ae(&local_6b0,&local_310,&local_5d8,2);
    uVar41 = (undefined4)((ulonglong)local_310 >> 0x20);
    uVar37 = (undefined4)((ulonglong)local_308 >> 0x20);
    uVar46 = SUB84(local_310,0);
    uVar48 = uVar41;
    if ((double)CONCAT44(uVar47,uVar45) <= local_310) {
      uVar46 = uVar45;
      uVar48 = uVar47;
    }
    uVar39 = SUB84(local_310,0);
    if (local_310 <= (double)CONCAT44(uVar40,uVar38)) {
      uVar39 = uVar38;
      uVar41 = uVar40;
    }
    uVar42 = SUB84(local_308,0);
    uVar44 = uVar37;
    if ((double)CONCAT44(uVar43,uVar12) <= local_308) {
      uVar42 = uVar12;
      uVar44 = uVar43;
    }
    uVar36 = SUB84(local_308,0);
    if (local_308 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar36 = uVar13;
      uVar37 = uVar14;
    }
    dVar6 = (local_5c8 * local_838 + (double)local_5d8 * local_828 + uStack_5d0 * local_830) -
            local_820;
    dVar8 = dVar6;
    if (dVar7 <= dVar6) {
      dVar8 = dVar7;
    }
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    uVar22 = uVar22 + 1;
    uVar13 = uVar36;
    uVar14 = uVar37;
    uVar38 = uVar39;
    uVar40 = uVar41;
    uVar12 = uVar42;
    uVar43 = uVar44;
    uVar45 = uVar46;
    uVar47 = uVar48;
    dVar5 = dVar6;
    dVar7 = dVar8;
  } while (uVar22 != 8);
  uVar22 = 0;
  local_868 = (undefined8 *)((ulonglong)local_868 & 0xffffffffffffff00);
  FUN_1411b354a(&local_310,1,1,0);
  plVar31 = local_840;
  FUN_148487d3c(&local_310,*(undefined4 *)((longlong)local_840 + 0x14));
  local_6e8 = DAT_14c8464f0;
  local_6f8 = DAT_14c8464e0;
  dStack_6f0 = DAT_14c8464e8;
  local_6d4 = DAT_14c846330;
  local_6cc = DAT_14c846338;
  local_6c8 = DAT_14c84635c;
  local_6be = 0;
  local_6c0 = 0x101;
  local_6d8 = -(float)local_838;
  local_6dc = -(float)local_830;
  local_6e0 = -(float)local_828;
  do {
    uVar13 = uVar46;
    uVar14 = uVar48;
    if (uVar22 != 0) {
      uVar13 = uVar39;
      uVar14 = uVar41;
    }
    uVar38 = uVar46;
    uVar40 = uVar48;
    if (uVar22 != 3) {
      uVar38 = uVar13;
      uVar40 = uVar14;
    }
    uVar13 = uVar42;
    uVar14 = uVar44;
    if (1 < uVar22) {
      uVar13 = uVar36;
      uVar14 = uVar37;
    }
    local_5d8 = (double *)CONCAT44(uVar40,uVar38);
    local_5c8 = 0.0;
    uStack_5d0._0_4_ = uVar13;
    uStack_5d0._4_4_ = uVar14;
    FUN_146bed047(&local_7f8,&local_698,&local_5d8);
    local_6e8 = local_7e8 + local_6a0;
    dStack_6f0 = uStack_7f0 + local_6a8;
    local_6f8 = (double)local_7f8 + local_6b0;
    uVar12 = FUN_146c02208(&local_310,&local_6f8);
    FUN_14848845a(&local_310,uVar12,
                  CONCAT44((float)((double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar44,uVar42)
                                  ) * (float)param_5,
                           (float)((double)CONCAT44(uVar40,uVar38) - (double)CONCAT44(uVar48,uVar46)
                                  ) * (float)param_5),*(undefined4 *)((longlong)plVar31 + 0x14));
    uVar22 = uVar22 + 1;
  } while (uVar22 != 4);
  local_5d8 = (double *)0x100000000;
  uStack_5d0._0_4_ = 2;
  FUN_146c01152(&local_310,&local_5d8,0);
  local_5d8 = (double *)0x200000000;
  uStack_5d0 = (double)CONCAT44(uStack_5d0._4_4_,3);
  FUN_146c01152(&local_310,&local_5d8,0);
  if (local_841 != '\0') {
    fVar2 = *(float *)(local_808 + 0x60);
    lVar30 = local_808 + 0x54;
    dVar7 = (double)CONCAT44(uVar41,uVar39) - (double)CONCAT44(uVar48,uVar46);
    dVar5 = (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar44,uVar42);
    dVar5 = (double)(float)((double)(-(ulonglong)(0.0 <= dVar5) & (ulonglong)dVar5) *
                           (double)(-(ulonglong)(0.0 <= dVar7) & (ulonglong)dVar7)) / 1000000.0;
    if (dVar5 < 0.0) {
      dVar5 = sqrt(dVar5);
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    dVar7 = 0.001;
    if (0.001 <= dVar5) {
      dVar7 = dVar5;
    }
    uVar13 = SUB84(dVar7,0);
    if (dVar7 <= (double)fVar2) {
      uVar13 = SUB84((double)fVar2,0);
    }
    FUN_14848aaee(&local_310,uVar13);
    local_710 = local_698 * (local_688 + local_688) + local_680 * (local_690 + local_690);
    local_708 = (local_688 + local_688) * local_690 - (local_698 + local_698) * local_680;
    local_700 = 1.0 - ((local_690 + local_690) * local_690 + local_698 * (local_698 + local_698));
    local_868 = (undefined8 *)CONCAT71(local_868._1_7_,1);
    FUN_14848b0a4(plVar31,&local_310,&local_710,lVar30);
    FUN_146c38c5e(&local_310,0);
  }
  local_728 = (undefined8 *)0x0;
  uStack_720 = 0;
  local_738 = 0;
  uStack_730 = 0;
  uStack_5d0 = 0.0;
  uStack_5b8 = 0;
  uStack_5b5 = 0;
  uStack_5b0 = (uint)uStack_5b0._3_1_ << 0x18;
  local_5c8 = 0.0;
  uStack_5c0 = 0;
  uStack_5bd = 0;
  uStack_5ac = 2;
  uStack_5a8 = 1;
  local_598 = 0;
  local_588 = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_5d8 = &local_310;
  FUN_146c68b4c(&local_5d8);
  if ((longlong)*(int *)((longlong)uStack_5d0 + 0x10) != 0) {
    lVar30 = (longlong)*(int *)((longlong)uStack_5d0 + 0x10) << 2;
    lVar27 = 0;
    do {
      if (*(int *)(*(longlong *)((longlong)uStack_5d0 + 8) + lVar27 * 4) == 0) {
        FUN_14054c6c4(&local_728,(longlong)uStack_5d0 + 8);
        if ((int)lVar27 == 0) goto LAB_143b61071;
        goto LAB_143b61020;
      }
      lVar27 = lVar27 + 1;
      lVar30 = lVar30 + -4;
    } while (lVar30 != 0);
  }
  FUN_14054c6c4(&local_728,(longlong)uStack_5d0 + 8);
  lVar27 = 0xffffffff;
LAB_143b61020:
  if ((int)lVar27 < (int)(uint)uStack_720) {
    puVar18 = (undefined8 *)((longlong)local_728 + (longlong)(int)lVar27 * 4);
    puVar17 = local_728;
    puVar21 = puVar18;
    do {
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar18 + 4);
        uVar13 = *(undefined4 *)puVar17;
        *(undefined4 *)puVar17 = *(undefined4 *)puVar18;
        puVar17 = (undefined8 *)((longlong)puVar17 + 4);
        *(undefined4 *)puVar18 = uVar13;
        if (puVar1 == (undefined8 *)((longlong)local_728 + (longlong)(int)(uint)uStack_720 * 4))
        break;
        puVar18 = puVar1;
        if (puVar17 == puVar21) {
          puVar21 = puVar1;
        }
      }
      puVar18 = puVar21;
    } while (puVar17 != puVar21);
  }
LAB_143b61071:
  uVar32 = uStack_730;
  plVar31 = (longlong *)(longlong)(int)uStack_730;
  uVar22 = (int)uStack_730 + 1;
  uStack_730 = CONCAT44(uStack_730._4_4_,uVar22);
  if (uStack_730._4_4_ < uVar22) {
    FUN_1446f48e2(&local_738,uVar32 & 0xffffffff);
  }
  *(undefined4 *)(local_738 + (longlong)plVar31 * 4) = 0;
  if (0 < (int)(uint)uStack_720) {
    iVar26 = 1;
    lVar30 = 0;
    plVar31 = &local_738;
    iVar29 = (uint)uStack_720;
    do {
      uVar32 = uStack_730;
      if (*(int *)((longlong)local_728 + lVar30 * 4) == iVar26) {
        lVar27 = (longlong)(int)uStack_730;
        uVar22 = (int)uStack_730 + 1;
        uStack_730 = CONCAT44(uStack_730._4_4_,uVar22);
        if (uStack_730._4_4_ < uVar22) {
          FUN_1446f48e2(plVar31,uVar32 & 0xffffffff);
        }
        iVar26 = iVar26 + 1;
        *(int *)(local_738 + lVar27 * 4) = (int)lVar30;
        iVar29 = (uint)uStack_720;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 < iVar29);
  }
  FUN_1482f1656();
  if (param_7 == 0) {
    dVar9 = (double)CONCAT44(uStack_664,local_668);
    local_838 = (double)CONCAT44(local_838._4_4_,(float)dVar9);
    dVar5 = (double)CONCAT44(uStack_674,local_678);
    dVar7 = (double)CONCAT44(uStack_66c,uStack_670);
    local_820 = (double)CONCAT44(local_820._4_4_,(float)dVar7);
    plVar16 = local_818;
    dVar19 = 0.0;
    uVar32 = CONCAT71((int7)((ulonglong)plVar31 >> 8),1);
    lVar30 = 0;
    do {
      lVar27 = *(longlong *)(*local_840 + lVar30 * 8);
      *plVar16 = lVar27;
      local_860 = (undefined8 *)CONCAT71(local_860._1_7_,1);
      local_868 = (undefined8 *)CONCAT71(local_868._1_7_,1);
      local_830 = dVar19;
      FUN_146c005f0(lVar27,&local_310,1,1);
      local_7f8 = (undefined8 *)0x0;
      uStack_7f0 = 0.0;
      local_758 = 0.0;
      uStack_750 = 0.0;
      local_828 = (double)CONCAT44(local_828._4_4_,(int)uVar32);
      dVar19 = dVar6;
      if ((uVar32 & 1) != 0) {
        FUN_146c0aee0(lVar27,1);
        dVar19 = dVar8;
      }
      local_6e0 = (float)(int)lVar30 + (float)(int)lVar30 + -1.0;
      local_6d8 = local_6e0 * local_838._0_4_;
      local_6dc = local_6e0 * local_820._0_4_;
      local_6e0 = local_6e0 * (float)dVar5;
      lVar30 = 0x10;
      iVar29 = 0;
      do {
        lVar23 = **(longlong **)(lVar27 + 0x10);
        local_6e8 = *(double *)(lVar23 + lVar30) + dVar9 * dVar19;
        dStack_6f0 = *(double *)(lVar23 + -8 + lVar30) + dVar7 * dVar19;
        local_6f8 = *(double *)(lVar23 + -0x10 + lVar30) + dVar19 * dVar5;
        uVar13 = FUN_146c02208(lVar27,&local_6f8);
        dVar10 = uStack_7f0;
        lVar23 = (longlong)(int)uStack_7f0;
        uVar22 = (int)uStack_7f0 + 1;
        uStack_7f0 = (double)CONCAT44(uStack_7f0._4_4_,uVar22);
        if (uStack_7f0._4_4_ < uVar22) {
          FUN_1446f48e2(&local_7f8,(ulonglong)dVar10 & 0xffffffff);
        }
        dVar10 = uStack_750;
        *(undefined4 *)((longlong)local_7f8 + lVar23 * 4) = uVar13;
        lVar23 = (longlong)(int)uStack_750;
        uVar22 = (int)uStack_750 + 1;
        uStack_750 = (double)CONCAT44(uStack_750._4_4_,uVar22);
        if (uStack_750._4_4_ < uVar22) {
          FUN_1446f48e2(&local_758,(ulonglong)dVar10 & 0xffffffff);
        }
        *(int *)((longlong)local_758 + lVar23 * 4) = iVar29;
        lVar30 = lVar30 + 0x18;
        iVar29 = iVar29 + 1;
      } while (lVar30 != 0x70);
      local_5d8 = (double *)*local_7f8;
      uStack_5d0._0_4_ = *(undefined4 *)(local_7f8 + 1);
      uVar13 = FUN_146c01152(lVar27,&local_5d8,0);
      local_5d8 = (double *)CONCAT44(*(undefined4 *)(local_7f8 + 1),*(undefined4 *)local_7f8);
      uStack_5d0 = (double)CONCAT44(uStack_5d0._4_4_,*(undefined4 *)((longlong)local_7f8 + 0xc));
      uVar14 = FUN_146c01152(lVar27,&local_5d8,0);
      if (((ulonglong)local_830 & 1) != 0) {
        FUN_146c0adfe(lVar27,uVar13);
        FUN_146c0adfe(lVar27,uVar14);
      }
      dVar10 = local_828;
      local_578 = 0;
      uStack_570 = 0;
      local_588 = 0;
      uStack_580 = 0;
      local_598 = 0;
      uStack_590 = 0;
      uStack_5a8 = 0;
      uStack_5a4 = 0;
      uStack_5a0 = 0;
      uStack_5b8 = 0;
      uStack_5b5 = 0;
      uStack_5b0 = 0;
      uStack_5ac = 0;
      local_5c8 = 0.0;
      uStack_5c0 = 0;
      uStack_5bd = 0;
      local_5d8 = (double *)0x0;
      uStack_5d0 = 0.0;
      local_858 = SUB81(local_828,0) & 1;
      local_868 = &local_758;
      local_860 = &local_5d8;
      local_778 = lVar27;
      FUN_146bc5af6(&local_778,&local_728,&local_738,&local_7f8);
      FUN_146bc8622(&local_5d8);
      if (local_758 != 0.0) {
        FUN_1400020a8();
      }
      puVar18 = local_7f8;
      if (local_7f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar30 = 1;
      dVar19 = (double)CONCAT71((int7)((ulonglong)puVar18 >> 8),1);
      plVar16 = &local_800;
      uVar32 = 0;
    } while (((ulonglong)dVar10 & 1) != 0);
  }
  plVar31 = local_840;
  if (param_6 <= 0.0) goto LAB_143b6148f;
  uVar4 = *(undefined8 *)(*local_840 + (ulonglong)(param_7 ^ 1) * 0x10);
  param_6 = param_6 * 0.5;
  local_748 = (double)CONCAT44(uStack_664,local_668) * param_6;
  uStack_750 = (double)CONCAT44(uStack_66c,uStack_670) * param_6;
  local_758 = param_6 * (double)CONCAT44(uStack_674,local_678);
  if (param_7 == 0) {
    plVar31 = local_818;
    uVar22 = 0;
    bVar11 = true;
    do {
      bVar25 = bVar11;
      dVar5 = (double)((ulonglong)uVar22 << 0x20) + (double)((ulonglong)uVar22 << 0x20) + -1.0;
      local_5c8 = local_748 * dVar5;
      uStack_5d0 = uStack_750 * dVar5;
      local_5d8 = (double *)(dVar5 * local_758);
      FUN_146c3c4e4(*plVar31,&local_5d8);
      plVar31 = &local_800;
      uVar22 = 0x3ff00000;
      bVar11 = false;
    } while (bVar25);
  }
  local_860._0_1_ = 1;
  local_868 = (undefined8 *)CONCAT71(local_868._1_7_,1);
  FUN_146c005f0(uVar4,&local_310,1,1);
  FUN_146c0aee0(uVar4,1);
  FUN_146c3c4e4(uVar4,&local_758);
  uStack_5b8 = 0;
  uStack_5b5 = 0;
  uStack_5b0 = 0;
  local_5d8 = (double *)0x0;
  uStack_5d0 = 0.0;
  uStack_5ac = 0x80;
  uStack_5a8 = 0xffffffff;
  uStack_5a4 = 0;
  local_598 = 0;
  uStack_590 = uStack_590 & 0xffffffff00000000;
  local_568 = 0;
  local_560 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_55c = 0x80;
  uStack_558 = 0xffffffff;
  uStack_554 = 0;
  local_548 = 0;
  uStack_540 = uStack_540 & 0xffffffff00000000;
  local_538 = 0x101;
  local_510 = 0;
  local_508 = 0;
  local_530 = 0;
  uStack_528 = 0;
  local_504 = 0xffffffff00000080;
  local_4fc = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4b4 = 0xffffffff00000080;
  local_4ac = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = 0x101;
  local_468 = 0;
  local_460 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_45c = 0xffffffff00000080;
  local_454 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_410 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_40c = 0xffffffff00000080;
  local_404 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e7 = 1;
  local_3e8 = 1;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3b4 = 0xffffffff00000080;
  local_3ac = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_370 = 0;
  local_368 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_364 = 0xffffffff00000080;
  local_35c = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0x101;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_868 = local_618;
  local_618[0] = 0;
  local_608 = 0;
  local_620 = local_748;
  local_630 = (undefined4)local_758;
  uStack_62c = local_758._4_4_;
  uStack_628 = (int)uStack_750;
  uStack_624 = uStack_750._4_4_;
  local_648 = 0;
  local_638 = &PTR_LAB_14aee61d0;
  local_658 = &LAB_143b6a9e8;
  local_860 = (undefined8 *)((ulonglong)local_860._1_7_ << 8);
  local_760 = uVar4;
  FUN_146bcbbdc(&local_760,&local_310);
  local_778 = 0;
  uStack_770 = 0;
  if ((int)(uint)uStack_720 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_720 & 0xffffffff);
  }
  if ((uStack_720 & 0xffffffff) == 0) {
    local_780 = 0;
LAB_143b61a37:
    local_788 = (undefined4 *)0x0;
    local_77c = 0;
  }
  else {
    FUN_14481578e(&local_778);
    puVar18 = local_728;
    lVar30 = (longlong)(int)(uint)uStack_720;
    local_788 = (undefined4 *)0x0;
    local_780 = (uint)uStack_720;
    if (lVar30 == 0) goto LAB_143b61a37;
    FUN_144a06ca8(&local_788,uStack_720 & 0xffffffff,0);
    memcpy(local_788,puVar18,lVar30 << 2);
    puVar3 = local_788;
    if (1 < (int)local_780) {
      lVar30 = 0;
      puVar28 = local_788;
      do {
        uVar13 = *puVar28;
        *puVar28 = local_788[(ulonglong)local_780 + lVar30 + -1];
        local_788[(ulonglong)local_780 + lVar30 + -1] = uVar13;
        lVar30 = lVar30 + -1;
        puVar28 = puVar28 + 1;
      } while (-lVar30 != (ulonglong)(local_780 >> 1));
    }
    if (local_780 != 0) {
      lVar27 = (longlong)(int)local_780;
      lVar30 = 0;
      do {
        uVar13 = FUN_146bcd1d8(&local_5d8,*(undefined4 *)((longlong)puVar3 + lVar30));
        uVar32 = uStack_770;
        lVar23 = (longlong)(int)uStack_770;
        uVar22 = (int)uStack_770 + 1;
        uStack_770 = CONCAT44(uStack_770._4_4_,uVar22);
        if (uStack_770._4_4_ < uVar22) {
          FUN_1446f48e2(&local_778,uVar32 & 0xffffffff);
        }
        *(undefined4 *)(local_778 + lVar23 * 4) = uVar13;
        lVar30 = lVar30 + 4;
      } while (lVar27 * 4 != lVar30);
    }
  }
  local_798 = 0;
  uStack_790 = 0;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7e8 = 0.0;
  uStack_7e0 = 0;
  local_7f8 = (undefined8 *)0x0;
  uStack_7f0 = 0.0;
  FUN_146bc50be(&local_760,&local_788,&local_778,&local_7f8);
  FUN_146bc8622(&local_7f8);
  if (local_788 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  plVar31 = local_840;
  if (local_778 != 0) {
    FUN_1400020a8();
  }
  FUN_146bfdcfe(&local_5d8);
LAB_143b6148f:
  if (0 < (int)plVar31[1]) {
    lVar30 = 0;
    do {
      lVar27 = *(longlong *)(*plVar31 + lVar30 * 8);
      FUN_148487e31(lVar27,*(undefined4 *)((longlong)plVar31 + 0x14));
      uVar24 = *(int *)(lVar27 + 0x140) * 0x200 + *(int *)(lVar27 + 0x144);
      uVar22 = 0;
      if (uVar24 != 0) {
        uVar22 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar27 + 0x148) - 1U)) {
          uVar34 = 1;
          uVar35 = 1;
          if (1 < (int)uVar24) {
            uVar34 = uVar24;
          }
          do {
            uVar22 = uVar34;
            if (uVar34 == uVar35) break;
            uVar20 = uVar35 >> 9;
            uVar33 = uVar35 & 0x1ff;
            uVar22 = uVar35;
            uVar35 = uVar35 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar27 + 0x148))[uVar20] +
                                               (ulonglong)uVar33 * 2) - 1U));
        }
      }
LAB_143b6159b:
      if (uVar22 != uVar24) {
        local_5d8 = (double *)CONCAT44(local_5d8._4_4_,0xffffffff);
        FUN_146bedf4e(*(longlong *)(*(longlong *)(lVar27 + 0x208) + 0x48) + 0x18,&local_5d8,uVar22);
        uVar34 = uVar22 + 1;
        if ((int)(uVar22 + 1) < (int)uVar24) {
          uVar34 = uVar24;
        }
        uVar35 = uVar22;
        do {
          uVar22 = uVar34;
          if (uVar34 - 1 == uVar35) break;
          uVar22 = uVar35 + 1;
          uVar35 = uVar22;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar27 + 0x148) +
                                               (ulonglong)(uVar22 >> 9) * 8) +
                                             (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
        goto LAB_143b6159b;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 < (int)plVar31[1]);
  }
  if (local_738 != 0) {
    FUN_1400020a8();
  }
  if (local_728 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_141082778(&local_310);
  if ((local_f0 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b61bb0 FUN_143b61bb0 body=6715 status=ok
// SIG undefined FUN_143b61bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b61bb0(code *param_1,uint param_2,longlong param_3,code **param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int *piVar6;
  code *pcVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double *pdVar15;
  code **ppcVar16;
  char cVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [8];
  code **ppcVar29;
  int iVar30;
  code **ppcVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong *puVar37;
  code **ppcVar38;
  undefined4 *puVar39;
  code ***pppcVar40;
  bool bVar41;
  longlong lVar42;
  longlong lVar43;
  int *piVar44;
  ulonglong uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  undefined1 auVar50 [16];
  float fVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auStack_488 [32];
  undefined1 **local_468;
  undefined4 local_460;
  undefined8 *local_458;
  uint local_444;
  code *local_440;
  ulonglong *local_438;
  code **local_430;
  longlong local_428;
  ulonglong local_420;
  ulonglong local_418;
  code **local_410;
  code **local_408;
  code **local_400;
  code **local_3f8;
  int local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d0;
  code ***local_3c8;
  longlong local_3c0;
  undefined1 *local_3b8;
  undefined8 *local_3b0;
  undefined1 *local_3a8;
  longlong *local_3a0;
  code **local_398;
  code ***pppcStack_390;
  undefined8 local_388;
  double local_378;
  undefined8 uStack_370;
  code **local_368;
  int local_360;
  void *local_348;
  code **ppcStack_340;
  longlong local_338;
  undefined8 uStack_330;
  void *local_328;
  ulonglong uStack_320;
  longlong local_318;
  ulonglong uStack_310;
  code **local_308;
  undefined1 local_300 [8];
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2e8;
  code **ppcStack_2e0;
  code ***local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  longlong local_2b8 [4];
  undefined1 local_298;
  undefined1 *local_288 [2];
  undefined8 local_278;
  code *local_248;
  undefined8 uStack_240;
  longlong *local_238;
  longlong lStack_230;
  code **local_228;
  double dStack_220;
  undefined8 local_218;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  _RTL_CRITICAL_SECTION local_128;
  double local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_318 = 0;
  uStack_310 = 0;
  local_444 = param_2;
  local_428 = param_3;
  FUN_146bcf452(&local_318,*(undefined4 *)(param_3 + 0x10));
  local_248 = (code *)0x14aee5ac7;
  uStack_240._0_4_ = 0x10;
  uStack_240._4_4_ = uStack_240._4_4_ & 0xffffff00;
  uVar18 = FUN_14001a6c0();
  local_418 = (ulonglong)uVar18;
  if ((longlong)(int)uStack_310 != 0) {
    lVar26 = (longlong)(int)uStack_310 * 0x220 + local_318;
    lVar42 = local_318;
    do {
      FUN_148487d3c(lVar42,*(undefined4 *)(param_1 + 0x14));
      uStack_240._0_4_ = DAT_14c84636c;
      local_248 = DAT_14c846364;
      FUN_146c01e94(lVar42,&local_248);
      FUN_14582ed12(lVar42);
      FUN_14582ed9a(*(undefined8 *)(lVar42 + 0x208));
      uVar20 = *(undefined8 *)(lVar42 + 0x208);
      puVar19 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar19[1] = 0;
      *puVar19 = &PTR_FUN_14aee60c0;
      puVar19[2] = lVar42;
      FUN_146bee4b2(puVar19 + 3);
      FUN_1484a6d6a(puVar19);
      FUN_146c18272(uVar20);
      lVar42 = lVar42 + 0x220;
    } while (lVar42 != lVar26);
  }
  local_328 = (void *)0x0;
  uStack_320 = 0;
  uVar45 = (ulonglong)local_444;
  local_440 = param_1;
  local_420 = uVar45;
  if ((int)local_444 < 1) {
    if ((int)local_444 < 0) goto LAB_143b635e2;
  }
  else {
    uStack_320 = (ulonglong)local_444;
    FUN_143b69ec6(&local_328);
    memset(local_328,0,uVar45 << 4);
  }
  if (0 < *(int *)(local_428 + 0x20)) {
    lVar42 = 0;
    do {
      uVar18 = *(uint *)(*(longlong *)(local_428 + 0x18) + 4 + lVar42 * 8);
      if ((int)uVar18 < 0) {
        uVar18 = *(uint *)(local_440 + 0x10);
      }
      uVar25 = *(uint *)(*(longlong *)(local_428 + 0x18) + lVar42 * 8);
      if ((int)uVar25 < (int)uStack_320 && -1 < (int)uVar25) {
        lVar26 = (ulonglong)uVar25 * 0x10;
        plVar23 = (longlong *)((longlong)local_328 + lVar26);
        iVar30 = *(int *)((longlong)local_328 + lVar26 + 8);
        *(uint *)((longlong)local_328 + lVar26 + 8) = iVar30 + 1U;
        if (*(uint *)((longlong)local_328 + lVar26 + 0xc) < iVar30 + 1U) {
          FUN_143b69fba(plVar23,iVar30);
        }
        *(longlong *)(*plVar23 + (longlong)iVar30 * 8) = lVar42;
      }
      if ((-1 < (int)uVar18) && ((int)uVar18 < (int)uStack_320)) {
        lVar26 = (ulonglong)uVar18 * 0x10;
        plVar23 = (longlong *)((longlong)local_328 + lVar26);
        iVar30 = *(int *)((longlong)local_328 + lVar26 + 8);
        *(uint *)((longlong)local_328 + lVar26 + 8) = iVar30 + 1U;
        if (*(uint *)((longlong)local_328 + lVar26 + 0xc) < iVar30 + 1U) {
          FUN_143b69fba(plVar23,iVar30);
        }
        *(longlong *)(*plVar23 + (longlong)iVar30 * 8) = lVar42 + 0x100000000;
      }
      lVar42 = lVar42 + 1;
    } while (lVar42 < *(int *)(local_428 + 0x20));
  }
  fVar47 = 0.0;
  if (0 < (longlong)*(int *)(local_428 + 0x10)) {
    lVar42 = *(longlong *)(local_428 + 0x38);
    local_438 = DAT_14c8464e0;
    fVar47 = 0.0;
    lVar26 = 0;
    do {
      lVar34 = (longlong)*(int *)(*(longlong *)(local_428 + 0x28) + 8 + lVar26 * 0x10);
      dVar55 = DAT_14c8464f0;
      dVar49 = DAT_14c8464e8;
      puVar37 = DAT_14c8464e0;
      if (2 < lVar34) {
        piVar6 = *(int **)(*(longlong *)(local_428 + 0x28) + lVar26 * 0x10);
        lVar35 = (longlong)*piVar6;
        lVar36 = 2;
        do {
          lVar27 = (longlong)piVar6[lVar36 + -1];
          lVar43 = (longlong)piVar6[lVar36];
          dVar52 = *(double *)(lVar42 + 0x10 + lVar27 * 0x18);
          dVar4 = *(double *)(lVar42 + lVar27 * 0x18);
          dVar5 = *(double *)(lVar42 + 8 + lVar27 * 0x18);
          dVar10 = *(double *)(lVar42 + 0x10 + lVar43 * 0x18) - dVar52;
          dVar52 = dVar52 - *(double *)(lVar42 + 0x10 + lVar35 * 0x18);
          dVar9 = *(double *)(lVar42 + 8 + lVar43 * 0x18) - dVar5;
          dVar5 = dVar5 - *(double *)(lVar42 + 8 + lVar35 * 0x18);
          dVar11 = *(double *)(lVar42 + lVar43 * 0x18) - dVar4;
          dVar4 = dVar4 - *(double *)(lVar42 + lVar35 * 0x18);
          dVar55 = dVar55 + (dVar4 * dVar9 - dVar11 * dVar5);
          dVar49 = dVar49 + (dVar52 * dVar11 - dVar10 * dVar4);
          puVar37 = (ulonglong *)((double)puVar37 + (dVar5 * dVar10 - dVar9 * dVar52));
          lVar36 = lVar36 + 1;
        } while (lVar34 != lVar36);
      }
      fVar47 = fVar47 + (float)SQRT(dVar55 * dVar55 +
                                    (double)puVar37 * (double)puVar37 + dVar49 * dVar49);
      lVar26 = lVar26 + 1;
    } while (lVar26 != *(int *)(local_428 + 0x10));
  }
  dVar49 = (double)fVar47 / 1000000.0;
  fVar47 = *(float *)(local_428 + 0x60);
  local_430 = param_4;
  if (dVar49 < 0.0) {
    dVar49 = sqrt(dVar49);
  }
  else {
    dVar49 = SQRT(dVar49);
  }
  ppcVar16 = local_430;
  ppcStack_2e0 = &local_248;
  local_238 = &local_318;
  dStack_220 = 0.001;
  if (0.001 <= dVar49) {
    dStack_220 = dVar49;
  }
  if (dStack_220 <= (double)fVar47) {
    dStack_220 = (double)fVar47;
  }
  local_248 = local_440;
  uStack_240._0_4_ = (undefined4)local_418;
  uStack_240._4_4_ = (uint)(local_418 >> 0x20);
  lStack_230 = local_428;
  local_228 = local_430;
  local_458 = &local_178;
  local_178 = 0;
  uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
  local_2e8 = FUN_143b6a114;
  local_460 = 0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_428 + 0x10));
  if (0 < (int)local_444) {
    uVar45 = 0;
    do {
      lVar42 = *(longlong *)(*(longlong *)local_440 + uVar45 * 8);
      uVar20 = *(undefined8 *)(lVar42 + 0x208);
      puVar19 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar19[1] = 0;
      *puVar19 = &PTR_FUN_14aee60c0;
      puVar19[2] = lVar42;
      FUN_146bee4b2(puVar19 + 3);
      FUN_1484a6d6a(puVar19);
      FUN_146c18272(uVar20,local_418);
      lVar26 = (longlong)*(int *)((longlong)local_328 + uVar45 * 0x10 + 8);
      if (lVar26 != 0) {
        piVar44 = *(int **)((longlong)local_328 + uVar45 * 0x10);
        piVar6 = piVar44 + lVar26 * 2;
        do {
          FUN_14848c346(lVar42,(longlong)*piVar44 * 0x220 + local_318);
          piVar44 = piVar44 + 2;
        } while (piVar44 != piVar6);
      }
      uVar45 = uVar45 + 1;
    } while (uVar45 != local_420);
  }
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  InitializeCriticalSection(&local_128);
  SetCriticalSectionSpinCount(&local_128,4000);
  local_100 = 1e-05;
  local_f8 = 0xffffffffffffffff;
  if (0 < (int)local_444) {
    uVar45 = 0;
    do {
      lVar42 = *(longlong *)(*(longlong *)local_440 + uVar45 * 8);
      uVar25 = *(int *)(lVar42 + 0x20) * 0x200 + *(int *)(lVar42 + 0x24);
      uVar18 = 0;
      if (uVar25 != 0) {
        uVar18 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar42 + 0x28) - 1U)) {
          uVar22 = 1;
          uVar46 = 1;
          if (1 < (int)uVar25) {
            uVar46 = uVar25;
          }
          do {
            uVar21 = (uint)uVar22;
            uVar18 = uVar46;
            if (uVar46 == uVar21) break;
            uVar33 = uVar22 >> 9;
            uVar22 = (ulonglong)(uVar21 + 1);
            uVar18 = uVar21;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar42 + 0x28))[uVar33] +
                                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        }
      }
LAB_143b623ae:
      if (uVar18 != uVar25) {
        lVar26 = *(longlong *)(*(longlong *)(lVar42 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
        uVar22 = (ulonglong)(uVar18 & 0x1ff);
        local_378 = (double)CONCAT44(uVar18,(int)uVar45);
        auVar54._0_8_ = *(double *)(lVar26 + 0x10 + uVar22 * 0x18) / local_100;
        auVar54._8_8_ = 0;
        auVar54 = roundsd(auVar54,auVar54,9);
        auVar53._0_8_ = *(double *)(lVar26 + 8 + uVar22 * 0x18) / local_100;
        auVar53._8_8_ = 0;
        auVar53 = roundsd(auVar53,auVar53,9);
        auVar50._0_8_ = *(double *)(lVar26 + uVar22 * 0x18) / local_100;
        auVar50._8_8_ = 0;
        auVar50 = roundsd(auVar50,auVar50,9);
        local_2e8 = (code *)CONCAT44((int)auVar53._0_8_,(int)auVar50._0_8_);
        ppcStack_2e0 = (code **)CONCAT44(ppcStack_2e0._4_4_,(int)auVar54._0_8_);
        local_248 = (code *)&local_2e8;
        uStack_240 = &local_378;
        FUN_1484a79ec(&local_178,&local_308);
        uVar46 = uVar18 + 1;
        if ((int)(uVar18 + 1) < (int)uVar25) {
          uVar46 = uVar25;
        }
        uVar21 = uVar18;
        do {
          uVar18 = uVar46;
          if (uVar46 - 1 == uVar21) break;
          uVar18 = uVar21 + 1;
          uVar21 = uVar18;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar42 + 0x28) +
                                               (ulonglong)(uVar18 >> 9) * 8) +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        goto LAB_143b623ae;
      }
      uVar45 = uVar45 + 1;
    } while (uVar45 != local_420);
  }
  local_338 = 0;
  uStack_330 = 0;
  if (-1 < (int)local_444) {
    if (local_444 != 0) {
      FUN_14475e67c(&local_338);
      uVar18 = local_444;
      do {
        uVar45 = uStack_330;
        lVar42 = (longlong)(int)uStack_330;
        uVar25 = (int)uStack_330 + 1;
        uStack_330 = CONCAT44(uStack_330._4_4_,uVar25);
        if (uStack_330._4_4_ < uVar25) {
          FUN_1401c3474(&local_338,uVar45 & 0xffffffff);
        }
        *(undefined1 *)(local_338 + lVar42) = 0;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    ppcVar38 = (code **)(ulonglong)local_444;
    local_420 = local_420 << 4;
    ppcVar29 = (code **)&DAT_00000001;
    if (1 < (int)local_444) {
      ppcVar29 = ppcVar38;
    }
    iVar30 = 0;
    local_408 = ppcVar29;
    do {
      local_348 = (void *)0x0;
      ppcStack_340 = (code **)0x0;
      if ((int)ppcVar38 < 1) {
        if ((int)ppcVar38 != 0) goto LAB_143b624b2;
        uVar45 = 0;
LAB_143b62d70:
        FUN_143b6a6c1(local_348,uVar45);
        if (local_348 != (void *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      ppcStack_340 = ppcVar38;
      FUN_143b6a726(&local_348);
      memset(local_348,0,local_420);
LAB_143b624b2:
      ppcVar38 = (code **)0x0;
      bVar41 = false;
      local_3ec = iVar30;
      auVar28 = local_300;
      do {
        if (*(char *)(local_338 + (longlong)ppcVar38) == '\0') {
          local_438 = *(ulonglong **)(*(longlong *)local_440 + (longlong)ppcVar38 * 8);
          local_300 = auVar28;
          FUN_146ba21d6(&local_248,local_438,1);
          local_288[0] = (undefined1 *)0x0;
          local_278 = 0;
          local_2e8 = (code *)0x7fefffffffffffff;
          local_2d8 = (code ***)0x0;
          local_2c8 = (longlong *)0x0;
          local_298 = 0;
          local_468 = local_288;
          FUN_146bdf272(&local_248,&local_378,1,&local_2e8);
          if (local_2d8 != (code ***)0x0) {
            plVar23 = local_2c8;
            if (local_2c8 == (longlong *)0x0) {
              plVar23 = local_2b8;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if ((longlong)local_360 != 0) {
            ppcVar31 = local_368 + (longlong)local_360 * 7;
            ppcVar29 = local_368;
            puVar37 = local_438;
            local_400 = ppcVar31;
            local_3f8 = ppcVar38;
            do {
              lVar42 = *(longlong *)(puVar37[0x26] + (ulonglong)(*(uint *)ppcVar29 >> 9) * 8);
              uVar45 = (ulonglong)*(uint *)ppcVar29 & 0x1ff;
              local_300._0_4_ = *(undefined4 *)(lVar42 + 8 + uVar45 * 0xc);
              local_308 = *(code ***)(lVar42 + uVar45 * 0xc);
              lVar42 = *(longlong *)
                        (puVar37[0x26] + (ulonglong)(*(uint *)((longlong)ppcVar29 + 4) >> 9) * 8);
              uVar45 = (ulonglong)*(uint *)((longlong)ppcVar29 + 4) & 0x1ff;
              local_2f4 = *(undefined4 *)(lVar42 + 8 + uVar45 * 0xc);
              uVar20 = *(undefined8 *)(lVar42 + uVar45 * 0xc);
              local_300._4_4_ = (undefined4)uVar20;
              local_2f8 = (undefined4)((ulonglong)uVar20 >> 0x20);
              lVar42 = 0;
              iVar30 = 0;
              do {
                uVar18 = *(uint *)((longlong)&local_308 + lVar42 * 4);
                lVar26 = *(longlong *)(puVar37[2] + (ulonglong)(uVar18 >> 9) * 8);
                uVar45 = (ulonglong)(uVar18 & 0x1ff);
                uVar22 = 0;
                do {
                  lVar34 = *(longlong *)
                            (puVar37[2] +
                            (ulonglong)(*(uint *)(local_300 + uVar22 * 4 + 4) >> 9) * 8);
                  uVar33 = (ulonglong)(*(uint *)(local_300 + uVar22 * 4 + 4) & 0x1ff);
                  dVar52 = *(double *)(lVar34 + uVar33 * 0x18) - *(double *)(lVar26 + uVar45 * 0x18)
                  ;
                  dVar49 = *(double *)(lVar34 + 8 + uVar33 * 0x18) -
                           *(double *)(lVar26 + 8 + uVar45 * 0x18);
                  dVar55 = *(double *)(lVar34 + 0x10 + uVar33 * 0x18) -
                           *(double *)(lVar26 + 0x10 + uVar45 * 0x18);
                  dVar49 = dVar55 * dVar55 + dVar52 * dVar52 + dVar49 * dVar49;
                  iVar30 = (uint)(dVar49 < 1e-08) + iVar30;
                  if (1 < uVar22) break;
                  uVar22 = uVar22 + 1;
                } while (1e-08 <= dVar49);
                lVar42 = lVar42 + 1;
              } while (lVar42 != 3);
              if (iVar30 < 1) {
                lVar42 = (longlong)ppcVar38 * 0x10;
                plVar23 = (longlong *)((longlong)local_348 + lVar42);
                iVar30 = *(int *)((longlong)local_348 + lVar42 + 8);
                *(uint *)((longlong)local_348 + lVar42 + 8) = iVar30 + 1U;
                if (*(uint *)((longlong)local_348 + lVar42 + 0xc) < iVar30 + 1U) {
                  FUN_143b6a81a(plVar23,iVar30);
                  puVar37 = local_438;
                }
                lVar42 = *plVar23;
                puVar19 = (undefined8 *)(lVar42 + (longlong)iVar30 * 0x18);
                *puVar19 = *ppcVar29;
                puVar19[1] = 0;
                puVar19[2] = 0;
                uVar20 = CONCAT71((int7)((ulonglong)lVar42 >> 8),1);
                pppcVar40 = &local_308;
                local_410 = ppcVar29;
                do {
                  local_430 = (code **)CONCAT44(local_430._4_4_,(int)uVar20);
                  lVar42 = 0;
                  do {
                    uVar18 = *(uint *)((longlong)pppcVar40 + lVar42 * 4);
                    lVar26 = *(longlong *)(puVar37[2] + (ulonglong)(uVar18 >> 9) * 8);
                    uVar45 = (ulonglong)(uVar18 & 0x1ff);
                    local_388 = *(undefined8 *)(lVar26 + 0x10 + uVar45 * 0x18);
                    puVar1 = (undefined8 *)(lVar26 + uVar45 * 0x18);
                    local_398 = (code **)*puVar1;
                    pppcStack_390 = (code ***)puVar1[1];
                    local_3a0 = &local_3c0;
                    local_3a8 = &LAB_1484a7dc2;
                    local_2e8 = local_440;
                    local_3b0 = &local_2e8;
                    local_3b8 = &LAB_143b6a986;
                    local_468 = &local_3a8;
                    ppcStack_2e0 = local_398;
                    local_2d8 = pppcStack_390;
                    local_2d0 = local_388;
                    FUN_14848c798(&local_178,&local_398,&local_3b8,puVar19 + 1);
                    lVar42 = lVar42 + 1;
                    puVar37 = local_438;
                  } while (lVar42 != 3);
                  pppcVar40 = (code ***)(local_300 + 4);
                  uVar20 = 0;
                } while (((ulonglong)local_430 & 1) != 0);
                bVar41 = true;
                ppcVar29 = local_410;
                ppcVar31 = local_400;
                ppcVar38 = local_3f8;
              }
              ppcVar29 = ppcVar29 + 7;
            } while (ppcVar29 != ppcVar31);
          }
          FUN_146c74de8(&local_378);
          FUN_1457e5b52(&local_248);
          ppcVar29 = local_408;
          auVar28 = local_300;
        }
        ppcVar38 = (code **)((longlong)ppcVar38 + 1);
      } while (ppcVar38 != ppcVar29);
      local_300 = auVar28;
      if (!bVar41) {
        uVar45 = (ulonglong)ppcStack_340 & 0xffffffff;
        goto LAB_143b62d70;
      }
      if (local_444 != 0) {
        ppcVar38 = (code **)0x0;
        do {
          *(undefined1 *)(local_338 + (longlong)ppcVar38) = 1;
          ppcVar38 = (code **)((longlong)ppcVar38 + 1);
        } while (ppcVar29 != ppcVar38);
        ppcVar38 = (code **)0x0;
        do {
          auVar28 = (undefined1  [8])&local_3c0;
          ppcVar29 = *(code ***)(*(longlong *)local_440 + (longlong)ppcVar38 * 8);
          local_3c0 = FUN_146bce3f6(ppcVar29[0x41],local_418);
          pppcStack_390 = &local_308;
          lVar42 = (longlong)*(int *)((longlong)local_348 + (longlong)ppcVar38 * 0x10 + 8);
          local_430 = ppcVar29;
          local_3c8 = &local_398;
          local_398 = ppcVar29;
          local_308 = ppcVar29;
          if (lVar42 != 0) {
            puVar39 = *(undefined4 **)((longlong)local_348 + (longlong)ppcVar38 * 0x10);
            puVar2 = puVar39 + lVar42 * 6;
            do {
              local_300 = auVar28;
              cVar17 = FUN_143b637ba(&local_3c8,*puVar39,puVar39[1],0x3ff0000000000000);
              auVar28 = local_300;
              if (cVar17 != '\0') {
                dVar49 = 0.0;
                iVar30 = 4;
                dVar55 = 1.0;
                do {
                  dVar52 = (dVar49 + dVar55) * 0.5;
                  cVar17 = FUN_143b637ba(&local_3c8,*puVar39,puVar39[1],dVar52);
                  if (cVar17 == '\0') {
                    dVar49 = dVar52;
                    dVar52 = dVar55;
                  }
                  iVar30 = iVar30 + -1;
                  dVar55 = dVar52;
                } while (iVar30 != 0);
                *(undefined1 *)(local_338 + (longlong)ppcVar38) = 0;
                auVar28 = local_300;
                if ((longlong)(int)puVar39[4] != 0) {
                  puVar37 = *(ulonglong **)(puVar39 + 2);
                  local_438 = puVar37 + (int)puVar39[4];
                  dVar55 = 1.0 - dVar49;
                  do {
                    local_3d0 = *puVar37;
                    iVar30 = (int)local_3d0;
                    uVar45 = local_3d0 >> 0x29;
                    lVar42 = *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)local_440 + (longlong)iVar30 * 8) + 0x10
                                ) + uVar45 * 8);
                    uVar18 = (uint)(local_3d0 >> 0x20);
                    uVar22 = (ulonglong)(uVar18 & 0x1ff);
                    local_2d8 = *(code ****)(lVar42 + 0x10 + uVar22 * 0x18);
                    puVar19 = (undefined8 *)(lVar42 + uVar22 * 0x18);
                    local_2e8 = (code *)*puVar19;
                    ppcStack_2e0 = (code **)puVar19[1];
                    if ((code **)(local_3d0 & 0xffffffff) == ppcVar38) {
                      lVar42 = *(longlong *)(*(longlong *)local_300 + 0x20);
                      lVar26 = 0;
                      do {
                        uVar25 = uVar18 * 3 + (int)lVar26;
                        (&local_248)[lVar26] =
                             *(code **)(*(longlong *)(lVar42 + (ulonglong)(uVar25 >> 9) * 8) +
                                       (ulonglong)(uVar25 & 0x1ff) * 8);
                        lVar26 = lVar26 + 1;
                      } while (lVar26 != 3);
                      lVar42 = *(longlong *)(local_308[2] + uVar45 * 8);
                      local_238 = (longlong *)
                                  ((double)local_238 * dVar55 +
                                  *(double *)(lVar42 + 0x10 + uVar22 * 0x18) * dVar49);
                      uStack_240 = (double *)
                                   ((double)uStack_240 * dVar55 +
                                   *(double *)(lVar42 + 8 + uVar22 * 0x18) * dVar49);
                      local_248 = (code *)((double)local_248 * dVar55 +
                                          *(double *)(lVar42 + uVar22 * 0x18) * dVar49);
                      cVar17 = FUN_146bfed03(&local_248);
                      if (cVar17 != '\0') {
                        lVar42 = *(longlong *)(local_430[2] + uVar45 * 8);
                        *(longlong **)(lVar42 + 0x10 + uVar22 * 0x18) = local_238;
                        puVar19 = (undefined8 *)(lVar42 + uVar22 * 0x18);
                        *puVar19 = local_248;
                        puVar19[1] = uStack_240;
                        if (*(char *)(local_430 + 0x42) == '\x01') {
                          LOCK();
                          *(uint *)((longlong)local_430 + 0x214) =
                               *(uint *)((longlong)local_430 + 0x214) + 1;
                          UNLOCK();
                        }
                      }
                    }
                    else {
                      *(undefined1 *)(local_338 + iVar30) = 0;
                      lVar42 = *(longlong *)(*(longlong *)local_440 + (longlong)iVar30 * 8);
                      lVar26 = FUN_146bce3f6(*(undefined8 *)(lVar42 + 0x208));
                      uVar18 = local_3d0._4_4_;
                      lVar26 = *(longlong *)(lVar26 + 0x20);
                      lVar34 = 0;
                      do {
                        uVar25 = local_3d0._4_4_ * 3 + (int)lVar34;
                        (&local_378)[lVar34] =
                             *(double *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar25 >> 9) * 8) +
                              (ulonglong)(uVar25 & 0x1ff) * 8);
                        lVar34 = lVar34 + 1;
                      } while (lVar34 != 3);
                      local_238 = (longlong *)
                                  ((double)local_368 * dVar55 + (double)local_2d8 * dVar49);
                      uStack_240 = (double *)(uStack_370 * dVar55 + (double)ppcStack_2e0 * dVar49);
                      local_248 = (code *)(local_378 * dVar55 + (double)local_2e8 * dVar49);
                      cVar17 = FUN_146bfed03(&local_248);
                      if (cVar17 != '\0') {
                        lVar26 = *(longlong *)
                                  (*(longlong *)(lVar42 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                        uVar45 = (ulonglong)(uVar18 & 0x1ff);
                        *(longlong **)(lVar26 + 0x10 + uVar45 * 0x18) = local_238;
                        puVar19 = (undefined8 *)(lVar26 + uVar45 * 0x18);
                        *puVar19 = local_248;
                        puVar19[1] = uStack_240;
                        if (*(char *)(lVar42 + 0x210) == '\x01') {
                          LOCK();
                          *(int *)(lVar42 + 0x214) = *(int *)(lVar42 + 0x214) + 1;
                          UNLOCK();
                        }
                      }
                    }
                    FUN_14848ca8c(&local_178,&local_3d0,&local_2e8,&local_248);
                    puVar37 = puVar37 + 1;
                    auVar28 = local_300;
                  } while (puVar37 != local_438);
                }
              }
              puVar39 = puVar39 + 6;
            } while (puVar39 != puVar2);
          }
          ppcVar38 = (code **)((longlong)ppcVar38 + 1);
          ppcVar29 = local_408;
          local_300 = auVar28;
        } while (ppcVar38 != local_408);
      }
      local_300 = auVar28;
      FUN_143b6a6c1(local_348,(ulonglong)ppcStack_340 & 0xffffffff);
      iVar30 = local_3ec;
      if (local_348 != (void *)0x0) {
        FUN_1400020a8();
      }
      iVar30 = iVar30 + 1;
      ppcVar38 = (code **)(ulonglong)local_444;
    } while (iVar30 != 10);
    if (local_444 != 0) {
      ppcVar29 = (code **)0x0;
      do {
        lVar42 = *(longlong *)(*(longlong *)local_440 + (longlong)ppcVar29 * 8);
        FUN_146c3d890(*(undefined8 *)(lVar42 + 0x208),local_418);
        uVar25 = *(int *)(lVar42 + 0x20) * 0x200 + *(int *)(lVar42 + 0x24);
        uVar18 = 0;
        if (uVar25 != 0) {
          uVar18 = 0;
          if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar42 + 0x28) - 1U)) {
            uVar46 = 1;
            uVar21 = 1;
            if (1 < (int)uVar25) {
              uVar46 = uVar25;
            }
            do {
              uVar18 = uVar46;
              if (uVar46 == uVar21) break;
              uVar24 = uVar21 >> 9;
              uVar32 = uVar21 & 0x1ff;
              uVar18 = uVar21;
              uVar21 = uVar21 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar42 + 0x28))[uVar24] +
                                                 (ulonglong)uVar32 * 2) - 1U));
          }
        }
LAB_143b62ec7:
        if (uVar18 != uVar25) {
          local_3e8 = _DAT_14cb4bdd0;
          uStack_3e0 = uRam000000014cb4bdd8;
          lVar26 = FUN_146bce3f6(*(undefined8 *)(lVar42 + 0x208),DAT_14cb4bdf0);
          lVar34 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar26 + 0x20) + (ulonglong)(uVar18 >> 7 & 0x7fffff) * 8)
              + (ulonglong)((uVar18 & 0x7f) << 4) + lVar34 * 4) =
                 *(undefined4 *)((longlong)&local_3e8 + lVar34 * 4);
            lVar34 = lVar34 + 1;
          } while (lVar34 != 4);
          uVar46 = uVar18 + 1;
          if ((int)(uVar18 + 1) < (int)uVar25) {
            uVar46 = uVar25;
          }
          uVar21 = uVar18;
          do {
            uVar18 = uVar46;
            if (uVar46 - 1 == uVar21) break;
            uVar18 = uVar21 + 1;
            uVar21 = uVar18;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar42 + 0x28) +
                                                 (ulonglong)(uVar18 >> 9) * 8) +
                                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
          goto LAB_143b62ec7;
        }
        ppcVar29 = (code **)((longlong)ppcVar29 + 1);
      } while (ppcVar29 != local_408);
    }
    lVar42 = local_428;
    local_2e8 = (code *)0x0;
    ppcStack_2e0 = (code **)0x0;
    local_248 = (code *)0x7f7fffff7f7fffff;
    FUN_14848cbc2(&local_2e8,&local_248,*(undefined4 *)(local_428 + 0x10));
    local_378 = 0.0;
    uStack_370 = 0.0;
    iVar30 = *(int *)(lVar42 + 0x10);
    if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar30);
    }
    pdVar15 = uStack_240;
    if (iVar30 != 0) {
      FUN_146c7ec56(&local_378);
      lVar42 = local_428;
      pdVar15 = uStack_240;
      if (0 < *(int *)(local_428 + 0x10)) {
        lVar26 = 0;
        lVar34 = 0;
        do {
          uStack_240 = pdVar15;
          FUN_143b635ed(&local_248,*(longlong *)(lVar42 + 8) + lVar26);
          uVar45 = (ulonglong)uStack_370;
          lVar35 = (longlong)(int)uStack_370;
          uVar18 = (int)uStack_370 + 1;
          uStack_370 = (double)CONCAT44(uStack_370._4_4_,uVar18);
          pdVar15 = uStack_240;
          if (uStack_370._4_4_ < uVar18) {
            FUN_146c8d502(&local_378,uVar45 & 0xffffffff);
            pdVar15 = uStack_240;
          }
          uStack_240._4_4_ = (uint)((ulonglong)pdVar15 >> 0x20);
          uStack_240._0_4_ = SUB84(pdVar15,0);
          lVar35 = lVar35 * 0x38;
          *(undefined8 *)((longlong)local_378 + 0x30 + lVar35) = local_218;
          auVar12._8_4_ = (undefined4)uStack_240;
          auVar12._0_8_ = local_248;
          auVar12._12_4_ = uStack_240._4_4_;
          auVar13._8_8_ = lStack_230;
          auVar13._0_8_ = local_238;
          auVar14._8_8_ = dStack_220;
          auVar14._0_8_ = local_228;
          *(undefined1 (*) [16])((longlong)local_378 + 0x20 + lVar35) = auVar14;
          *(undefined1 (*) [16])((longlong)local_378 + 0x10 + lVar35) = auVar13;
          *(undefined1 (*) [16])((longlong)local_378 + lVar35) = auVar12;
          lVar34 = lVar34 + 1;
          lVar26 = lVar26 + 0x20;
        } while (lVar34 < *(int *)(lVar42 + 0x10));
      }
    }
    if ((longlong)*(int *)(local_440 + 8) != 0) {
      ppcVar29 = *(code ***)local_440;
      local_410 = ppcVar29 + *(int *)(local_440 + 8);
      do {
        pcVar7 = *ppcVar29;
        uVar25 = *(int *)(pcVar7 + 0x140) * 0x200 + *(int *)(pcVar7 + 0x144);
        uVar18 = 0;
        if (uVar25 != 0) {
          uVar18 = 0;
          if (0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar7 + 0x148) - 1U)) {
            uVar46 = 1;
            uVar21 = 1;
            if (1 < (int)uVar25) {
              uVar46 = uVar25;
            }
            do {
              uVar18 = uVar46;
              if (uVar46 == uVar21) break;
              uVar24 = uVar21 >> 9;
              uVar32 = uVar21 & 0x1ff;
              uVar18 = uVar21;
              uVar21 = uVar21 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar7 + 0x148))[uVar24] +
                                                 (ulonglong)uVar32 * 2) - 1U));
          }
        }
        local_430 = ppcVar29;
        if (uVar18 != uVar25) {
          local_438 = *(ulonglong **)(*(longlong *)(pcVar7 + 0x208) + 0x48);
          do {
            uVar45 = (ulonglong)(uVar18 & 0x1ff);
            uVar46 = *(uint *)(*(longlong *)(local_438[4] + (ulonglong)(uVar18 >> 9) * 8) +
                              uVar45 * 4);
            uVar21 = ~uVar46;
            if (-1 < (int)uVar46) {
              uVar21 = 0xffffffff;
            }
            if (-1 < (int)uVar21) {
              lVar42 = *(longlong *)(*(longlong *)(pcVar7 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
              pppcStack_390 =
                   (code ***)
                   CONCAT44(pppcStack_390._4_4_,*(undefined4 *)(lVar42 + 8 + uVar45 * 0xc));
              local_398 = *(code ***)(lVar42 + uVar45 * 0xc);
              uVar45 = (ulonglong)uVar21;
              lVar42 = 0;
              do {
                uVar46 = *(uint *)((longlong)&local_398 + lVar42 * 4);
                lVar26 = *(longlong *)(*(longlong *)(pcVar7 + 0x10) + (ulonglong)(uVar46 >> 9) * 8);
                uVar22 = (ulonglong)(uVar46 & 0x1ff);
                puVar19 = (undefined8 *)(lVar26 + uVar22 * 0x18);
                local_248 = (code *)*puVar19;
                uVar20 = puVar19[1];
                uStack_240._0_4_ = (undefined4)uVar20;
                uStack_240._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
                local_238 = *(longlong **)(lVar26 + 0x10 + uVar22 * 0x18);
                FUN_146bca7ae((longlong)local_378 + uVar45 * 0x38,&local_308,&local_248,2);
                pdVar15 = (double *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                fVar47 = *(float *)((longlong)local_2e8 + uVar45 * 8);
                fVar3 = *(float *)((longlong)local_2e8 + 4 + uVar45 * 8);
                uVar46 = -(uint)((float)(double)local_308 <= fVar47);
                *(uint *)((longlong)local_2e8 + uVar45 * 8) =
                     uVar46 & (uint)(float)(double)local_308 | ~uVar46 & (uint)fVar47;
                uVar46 = -(uint)((float)(double)local_300 <= fVar3);
                *(uint *)((longlong)local_2e8 + 4 + uVar45 * 8) =
                     uVar46 & (uint)(float)(double)local_300 | ~uVar46 & (uint)fVar3;
                lVar42 = lVar42 + 1;
              } while (lVar42 != 3);
            }
            uVar46 = uVar18 + 1;
            if ((int)(uVar18 + 1) < (int)uVar25) {
              uVar46 = uVar25;
            }
            do {
              uVar21 = uVar46;
              if (uVar46 - 1 == uVar18) break;
              uVar18 = uVar18 + 1;
              uVar21 = uVar18;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(pcVar7 + 0x148) +
                                                   (ulonglong)(uVar18 >> 9) * 8) +
                                                 (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
            uVar18 = uVar21;
          } while (uVar18 != uVar25);
        }
        pcVar7 = local_440;
        ppcVar29 = local_430 + 1;
      } while (ppcVar29 != local_410);
      if ((longlong)*(int *)(local_440 + 8) != 0) {
        ppcVar29 = *(code ***)local_440;
        local_400 = ppcVar29 + *(int *)(local_440 + 8);
        do {
          pcVar8 = *ppcVar29;
          uVar18 = *(int *)(pcVar8 + 0x140) * 0x200 + *(int *)(pcVar8 + 0x144);
          uVar25 = 0;
          if (uVar18 != 0) {
            uVar25 = 0;
            if (0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar8 + 0x148) - 1U)) {
              uVar46 = 1;
              uVar21 = 1;
              if (1 < (int)uVar18) {
                uVar46 = uVar18;
              }
              do {
                uVar25 = uVar46;
                if (uVar46 == uVar21) break;
                uVar24 = uVar21 >> 9;
                uVar32 = uVar21 & 0x1ff;
                uVar25 = uVar21;
                uVar21 = uVar21 + 1;
              } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar8 + 0x148))[uVar24] +
                                                   (ulonglong)uVar32 * 2) - 1U));
            }
          }
          local_3f8 = ppcVar29;
          if (uVar25 != uVar18) {
            local_430 = *(code ***)(*(longlong *)(pcVar8 + 0x208) + 0x48);
            local_410 = (code **)CONCAT44(local_410._4_4_,uVar18);
            do {
              uVar45 = (ulonglong)(uVar25 & 0x1ff);
              uVar46 = *(uint *)(*(longlong *)(local_430[4] + (ulonglong)(uVar25 >> 9) * 8) +
                                uVar45 * 4);
              uVar21 = ~uVar46;
              if (-1 < (int)uVar46) {
                uVar21 = 0xffffffff;
              }
              if (-1 < (int)uVar21) {
                lVar42 = *(longlong *)(*(longlong *)(pcVar8 + 0x130) + (ulonglong)(uVar25 >> 9) * 8)
                ;
                pppcStack_390 =
                     (code ***)
                     CONCAT44(pppcStack_390._4_4_,*(undefined4 *)(lVar42 + 8 + uVar45 * 0xc));
                local_398 = *(code ***)(lVar42 + uVar45 * 0xc);
                uVar45 = (ulonglong)uVar21;
                local_438 = (ulonglong *)(uVar45 * 0x38);
                lVar42 = 0;
                do {
                  uVar18 = *(uint *)((longlong)&local_398 + lVar42 * 4);
                  lVar26 = *(longlong *)
                            (*(longlong *)(pcVar8 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
                  puVar19 = (undefined8 *)(lVar26 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
                  local_248 = (code *)*puVar19;
                  uVar20 = puVar19[1];
                  uStack_240._0_4_ = (undefined4)uVar20;
                  uStack_240._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
                  local_238 = *(longlong **)(lVar26 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
                  FUN_146bca7ae((longlong)local_378 + (longlong)local_438,&local_308,&local_248,2);
                  if (0 < *(int *)(pcVar7 + 0x14)) {
                    fVar48 = (float)(double)local_308;
                    fVar47 = *(float *)((longlong)local_2e8 + uVar45 * 8);
                    fVar51 = (float)(double)local_300;
                    fVar3 = *(float *)((longlong)local_2e8 + 4 + uVar45 * 8);
                    iVar30 = 0;
                    do {
                      FUN_1484883eb(pcVar8,uVar18,
                                    CONCAT44((fVar51 - fVar3) * (float)(double)ppcVar16,
                                             (fVar48 - fVar47) * (float)(double)ppcVar16),iVar30);
                      iVar30 = iVar30 + 1;
                    } while (iVar30 < *(int *)(pcVar7 + 0x14));
                  }
                  pdVar15 = (double *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  lVar42 = lVar42 + 1;
                } while (lVar42 != 3);
                uVar18 = (uint)local_410;
              }
              uVar46 = uVar25 + 1;
              if ((int)(uVar25 + 1) < (int)uVar18) {
                uVar46 = uVar18;
              }
              do {
                uVar21 = uVar46;
                if (uVar46 - 1 == uVar25) break;
                uVar25 = uVar25 + 1;
                uVar21 = uVar25;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(pcVar8 + 0x148) +
                                                     (ulonglong)(uVar25 >> 9) * 8) +
                                                   (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
              uVar25 = uVar21;
            } while (uVar25 != uVar18);
          }
          ppcVar29 = local_3f8 + 1;
        } while (ppcVar29 != local_400);
      }
    }
    uStack_240 = pdVar15;
    if (local_378 != 0.0) {
      FUN_1400020a8();
    }
    if (local_2e8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_338 != 0) {
      FUN_1400020a8();
    }
    FUN_14848cc2e(&local_178);
    FUN_143b69e9a(local_328,uStack_320 & 0xffffffff);
    if (local_328 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1461a8f9d(local_318,uStack_310 & 0xffffffff);
    if (local_318 != 0) {
      FUN_1400020a8();
    }
    if ((local_f0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_143b635e2:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_420);
}



// FUNCTION 143b635ed FUN_143b635ed body=459 status=ok
// SIG undefined FUN_143b635ed(void)

double * FUN_143b635ed(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = param_2[3];
  dVar2 = param_2[2];
  dVar3 = param_2[1];
  dVar4 = *param_2;
  local_a8 = param_2[2];
  local_b8 = *param_2;
  dStack_b0 = param_2[1];
  uVar6 = -(ulonglong)(-local_a8 <= local_a8);
  dVar7 = (double)(uVar6 & (ulonglong)local_a8 | ~uVar6 & (ulonglong)-local_a8);
  uVar6 = -(ulonglong)(-dStack_b0 <= dStack_b0);
  dVar8 = (double)(uVar6 & (ulonglong)dStack_b0 | ~uVar6 & (ulonglong)-dStack_b0);
  uVar6 = -(ulonglong)(-local_b8 <= local_b8);
  dVar9 = (double)(uVar6 & (ulonglong)local_b8 | ~uVar6 & (ulonglong)-local_b8);
  param_1[5] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 1.0;
  *param_1 = dVar1 * dVar4;
  param_1[1] = dVar3 * dVar1;
  param_1[2] = dVar2 * dVar1;
  local_88 = DAT_14c8463c8;
  local_98 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_90 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(param_1 + 3,&local_98,&local_b8);
  uVar5 = (uint)(dVar7 < dVar9) * 2;
  if (dVar8 < dVar9) {
    uVar5 = (dVar7 < dVar8) + 1;
  }
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (&local_98)[uVar5] = 0x3ff0000000000000;
  FUN_1482ae2be(param_1,0,&local_98,&local_b8);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b637ba FUN_143b637ba body=688 status=ok
// SIG undefined FUN_143b637ba(void)

void FUN_143b637ba(longlong *param_1,uint param_2,uint param_3,double param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  double local_1e8;
  double local_1e0 [8];
  double local_1a0 [9];
  double local_158 [9];
  double local_110 [9];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar7 = *(longlong *)(*(longlong *)*param_1 + 0x130);
  lVar4 = *(longlong *)(lVar7 + (ulonglong)(param_3 >> 9) * 8);
  local_1e0[0]._0_4_ = *(undefined4 *)(lVar4 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  local_1e8 = *(double *)(lVar4 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  plVar5 = (longlong *)((longlong *)*param_1)[1];
  lVar4 = *(longlong *)(*(longlong *)plVar5[1] + 0x20);
  lVar6 = *(longlong *)(*plVar5 + 0x10);
  dVar14 = 1.0 - param_4;
  lVar12 = 0;
  do {
    uVar3 = *(uint *)((longlong)&local_1e8 + lVar12 * 4);
    lVar8 = 0;
    do {
      uVar10 = uVar3 * 3 + (int)lVar8;
      local_158[lVar8] =
           *(double *)
            (*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 8);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)(uVar3 & 0x1ff);
    dVar1 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
    dVar2 = *(double *)(lVar8 + 8 + uVar13 * 0x18);
    local_1a0[lVar12 * 3] = local_158[0] * dVar14 + *(double *)(lVar8 + uVar13 * 0x18) * param_4;
    local_1a0[lVar12 * 3 + 1] = local_158[1] * dVar14 + dVar2 * param_4;
    local_1a0[lVar12 * 3 + 2] = local_158[2] * dVar14 + dVar1 * param_4;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(param_2 >> 9) * 8);
  local_1f0 = *(undefined4 *)(lVar7 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  local_1f8 = *(undefined8 *)(lVar7 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  lVar7 = 0;
  do {
    uVar3 = *(uint *)((longlong)&local_1f8 + lVar7 * 4);
    lVar12 = 0;
    do {
      uVar10 = uVar3 * 3 + (int)lVar12;
      local_158[lVar12] =
           *(double *)
            (*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 8);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    lVar12 = *(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)(uVar3 & 0x1ff);
    dVar1 = *(double *)(lVar12 + 0x10 + uVar13 * 0x18);
    dVar2 = *(double *)(lVar12 + 8 + uVar13 * 0x18);
    (&local_1e8)[lVar7 * 3] = local_158[0] * dVar14 + *(double *)(lVar12 + uVar13 * 0x18) * param_4;
    local_1e0[lVar7 * 3] = local_158[1] * dVar14 + dVar2 * param_4;
    local_1e0[lVar7 * 3 + 1] = local_158[2] * dVar14 + dVar1 * param_4;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  local_c8 = 0x3e45798ee2308c3a;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0;
  pdVar9 = &local_1e8;
  pdVar11 = local_158;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar11 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar11 = pdVar11 + 1;
  }
  pdVar9 = local_1a0;
  pdVar11 = local_110;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar11 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar11 = pdVar11 + 1;
  }
  FUN_146bdb916(local_158);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b63a6b FUN_143b63a6b body=7170 status=ok
// SIG undefined FUN_143b63a6b(void)

void FUN_143b63a6b(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  float *pfVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 *puVar30;
  uint uVar31;
  longlong lVar32;
  int *piVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  int *piVar37;
  ulonglong uVar38;
  int *piVar39;
  uint *puVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  bool bVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar52;
  undefined1 auVar51 [16];
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 local_698 [32];
  int **local_678;
  undefined1 **local_670;
  undefined8 *local_668;
  ulonglong local_660;
  longlong local_658;
  int local_64c;
  ulonglong local_648;
  ulonglong local_640;
  undefined8 local_638;
  longlong local_630;
  int local_628;
  int local_624;
  longlong local_620;
  longlong *local_618;
  undefined8 *puStack_610;
  longlong *local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong *local_5b8;
  longlong *plStack_5b0;
  longlong *local_5a8;
  longlong local_598 [2];
  longlong local_588;
  undefined8 uStack_580;
  longlong local_578 [2];
  undefined1 *local_568;
  undefined8 *local_560;
  undefined1 *local_558;
  longlong *local_550;
  undefined1 *local_548;
  undefined8 *local_540;
  undefined1 *local_538;
  undefined8 *local_530;
  int *local_528;
  ulonglong uStack_520;
  longlong local_518 [13];
  undefined8 uStack_4b0;
  longlong local_4a8;
  undefined8 uStack_4a0;
  int *local_498;
  undefined8 uStack_490;
  code *local_488;
  longlong **local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  int local_458;
  undefined4 local_454;
  undefined1 local_280;
  undefined8 auStack_228 [2];
  longlong local_218 [16];
  undefined8 local_198;
  ulonglong uStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 uStack_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  _RTL_CRITICAL_SECTION local_f8;
  undefined8 local_d0;
  ulonglong local_c0;
  double dVar10;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_698;
  if ((int)param_2 != -1) {
    local_638 = param_2;
    iVar23 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (param_3 != '\0') {
      uVar31 = (uint)local_638;
      local_630 = (longlong)(int)uVar31;
      uVar25 = *(uint *)(*(longlong *)(param_1 + 0x430) + local_630 * 4);
      local_660 = (ulonglong)uVar25;
      iVar34 = *(int *)(*(longlong *)(param_1 + 0x450) + local_630 * 4) + uVar25;
      iVar24 = uVar31 + 1;
      if (iVar24 < iVar23) {
        lVar27 = 0;
        do {
          uVar25 = *(uint *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar24 * 4 + lVar27 * 4);
          if ((int)uVar25 < (int)local_660) {
            local_660 = (ulonglong)uVar25;
          }
          else {
            iVar41 = uVar25 + *(int *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar24 * 4 +
                                      lVar27 * 4);
            if (iVar34 <= iVar41) {
              iVar34 = iVar41;
            }
          }
          lVar27 = lVar27 + 1;
        } while (~uVar31 + iVar23 != (int)lVar27);
      }
      uVar25 = iVar34 - (int)local_660;
      local_648 = (ulonglong)uVar25;
      local_498 = (int *)0x0;
      uStack_490 = 0;
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar25 * 3);
      }
      uVar26 = 0;
      local_658 = param_1;
      if (uVar25 != 0) {
        FUN_143b68a24(&local_498);
        uVar26 = (undefined4)local_648;
      }
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_518[0xc] = 0;
      uStack_4b0 = 0;
      FUN_140ccfae8(&local_4a8,uVar26,1);
      uVar25 = (uint)uStack_4b0;
      lVar27 = (longlong)(int)(uint)uStack_4b0;
      uVar31 = (uint)local_648;
      local_628 = iVar34;
      if ((int)(uint)uStack_4b0 < (int)uVar31) {
        uVar35 = uVar31 - (uint)uStack_4b0;
        uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar31);
        if (uStack_4b0._4_4_ - uVar25 < uVar35) {
          FUN_14475e4ac(local_518 + 0xc);
        }
        memset((void *)(lVar27 * 4 + local_518[0xc]),0,(longlong)(int)uVar35 << 2);
      }
      else if (uVar31 < (uint)uStack_4b0) {
        uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar31);
        FUN_1401fef06();
      }
      uVar38 = local_648;
      local_518[10] = 0;
      local_518[0xb] = 0;
      local_518[8] = 0;
      local_518[9] = 0;
      FUN_146bad868(local_518 + 8,local_648);
      local_518[6] = 0;
      local_518[7] = 0;
      local_518[4] = 0;
      local_518[5] = 0;
      FUN_146bad868(local_518 + 4,uVar38 & 0xffffffff);
      lVar27 = local_630;
      lVar28 = local_658;
      uVar38 = local_660;
      local_64c = iVar23;
      if ((int)local_638 < iVar23) {
        do {
          lVar32 = (longlong)*(int *)(*(longlong *)(lVar28 + 0x490) + lVar27 * 4);
          if (0 < lVar32) {
            lVar43 = (longlong)*(int *)(*(longlong *)(lVar28 + 0x470) + lVar27 * 4);
            lVar32 = lVar32 + lVar43;
            lVar36 = lVar43 * 0xc + 8;
            do {
              lVar14 = *(longlong *)(lVar28 + 0x250);
              lVar15 = *(longlong *)(lVar28 + 0x2f0);
              iVar23 = *(int *)(lVar15 + -8 + lVar36);
              lVar29 = (longlong)iVar23 * 0x10;
              if ((((*(float *)(lVar14 + lVar29) <= 0.0 && *(float *)(lVar14 + lVar29) != 0.0) ||
                   (pfVar4 = (float *)(lVar14 + 4 + lVar29), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) ||
                  (pfVar4 = (float *)(lVar14 + 8 + lVar29), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) ||
                 (pfVar4 = (float *)(lVar14 + lVar29 + 0xc), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) {
                iVar34 = (int)uVar38;
                FUN_146b9cc7c(local_518 + 8,iVar23 - iVar34,*(int *)(lVar15 + -4 + lVar36) - iVar34)
                ;
                FUN_146b9cc7c(local_518 + 8,*(int *)(lVar15 + -4 + lVar36) - iVar34,
                              *(int *)(lVar15 + lVar36) - iVar34);
                iVar23 = *(int *)(lVar15 + -8 + lVar36);
                iVar34 = *(int *)(lVar15 + -4 + lVar36);
                lVar28 = (longlong)(int)(uint)uStack_490;
                uVar25 = (uint)uStack_490 + 1;
                if (uStack_490._4_4_ < uVar25) {
                  uVar38 = uStack_490 & 0xffffffff;
                  uStack_490._0_4_ = uVar25;
                  FUN_143b68b6a(&local_498,uVar38);
                  uVar25 = (uint)uStack_490;
                }
                uStack_490._0_4_ = uVar25;
                uVar25 = (uint)uStack_490;
                local_498[lVar28 * 3] = iVar23 - (int)local_660;
                local_498[lVar28 * 3 + 1] = iVar34 - (int)local_660;
                local_498[lVar28 * 3 + 2] = 0x3f000000;
                iVar23 = *(int *)(lVar15 + -4 + lVar36);
                iVar34 = *(int *)(lVar15 + lVar36);
                lVar28 = (longlong)(int)(uint)uStack_490;
                uStack_490._0_4_ = (uint)uStack_490 + 1;
                if (uStack_490._4_4_ < (uint)uStack_490) {
                  FUN_143b68b6a(&local_498,uVar25);
                }
                uVar25 = (uint)uStack_490;
                local_498[lVar28 * 3] = iVar23 - (int)local_660;
                local_498[lVar28 * 3 + 1] = iVar34 - (int)local_660;
                local_498[lVar28 * 3 + 2] = 0x3f000000;
                iVar23 = *(int *)(lVar15 + -8 + lVar36);
                iVar34 = *(int *)(lVar15 + lVar36);
                lVar28 = (longlong)(int)(uint)uStack_490;
                uStack_490._0_4_ = (uint)uStack_490 + 1;
                if (uStack_490._4_4_ < (uint)uStack_490) {
                  FUN_143b68b6a(&local_498,uVar25);
                }
                local_498[lVar28 * 3] = iVar34 - (int)local_660;
                local_498[lVar28 * 3 + 1] = iVar23 - (int)local_660;
                local_498[lVar28 * 3 + 2] = 0x3f000000;
                lVar28 = local_658;
                uVar38 = local_660;
              }
              lVar43 = lVar43 + 1;
              lVar36 = lVar36 + 0xc;
            } while (lVar43 < lVar32);
          }
          lVar27 = lVar27 + 1;
        } while (local_64c != (int)lVar27);
      }
      iVar23 = local_64c;
      local_518[2] = 0;
      local_518[3] = 0;
      FUN_146eb7819(lVar28 + 0xb0,lVar28 + 0x110);
      local_518[0] = 0;
      local_518[1] = 0;
      FUN_146bca1c8(local_518,local_648,1);
      local_640 = (ulonglong)(int)uVar38;
      if ((int)uVar38 < local_628) {
        lVar27 = 2;
        uVar38 = local_640;
        do {
          lVar28 = (longlong)*(int *)(*(longlong *)(local_658 + 0x2d0) + uVar38 * 4) * 0x60;
          lVar32 = *(longlong *)(local_658 + 0x230) + local_640 * 0xc;
          pdVar5 = (double *)(local_518[2] + 0x40 + lVar28);
          dVar50 = (double)*(float *)(lVar32 + -8 + lVar27 * 4) * *pdVar5;
          dVar52 = (double)*(float *)(lVar32 + -4 + lVar27 * 4) * pdVar5[1];
          dVar47 = (double)*(float *)(lVar32 + lVar27 * 4) *
                   *(double *)(local_518[2] + 0x50 + lVar28);
          dVar16 = *(double *)(local_518[2] + lVar28);
          dVar17 = ((double *)(local_518[2] + lVar28))[1];
          dVar18 = *(double *)(local_518[2] + 0x10 + lVar28);
          pdVar5 = (double *)(local_518[2] + 0x18 + lVar28);
          dVar9 = *pdVar5;
          dVar10 = *pdVar5;
          dVar54 = dVar52 * dVar16 - dVar50 * dVar17;
          dVar55 = dVar47 * dVar17 - dVar52 * dVar18;
          dVar56 = dVar50 * dVar18 - dVar16 * dVar47;
          dVar55 = dVar55 + dVar55;
          dVar56 = dVar56 + dVar56;
          dVar54 = dVar54 + dVar54;
          pdVar5 = (double *)(local_518[2] + 0x20 + lVar28);
          dVar12 = pdVar5[1];
          dVar11 = *(double *)(local_518[2] + 0x30 + lVar28);
          *(float *)(local_518[0] + -8 + lVar27 * 4) =
               (float)((dVar54 * dVar17 - dVar56 * dVar18) + dVar9 * dVar55 + dVar50 + *pdVar5);
          *(float *)(local_518[0] + -4 + lVar27 * 4) =
               (float)((dVar18 * dVar55 - dVar16 * dVar54) + dVar10 * dVar56 + dVar52 + dVar12);
          *(float *)(local_518[0] + lVar27 * 4) =
               (float)(dVar54 * dVar9 + dVar47 + (dVar56 * dVar16 - dVar55 * dVar17) + dVar11);
          uVar38 = uVar38 + 1;
          lVar27 = lVar27 + 3;
        } while ((longlong)local_628 != uVar38);
      }
      local_128 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = 0;
      local_100 = 0;
      InitializeCriticalSection(&local_f8);
      SetCriticalSectionSpinCount(&local_f8,4000);
      local_d0 = 0xffffffff3b83126f;
      local_528 = (int *)0x0;
      uStack_520 = 0;
      param_1 = local_658;
      uVar38 = local_660;
      if ((int)local_638 < iVar23) {
        lVar27 = local_630;
        do {
          iVar34 = *(int *)(*(longlong *)(param_1 + 0x430) + lVar27 * 4);
          iVar24 = *(int *)(*(longlong *)(param_1 + 0x450) + lVar27 * 4);
          local_218[0] = CONCAT44(local_218[0]._4_4_,iVar34);
          if (0 < iVar24) {
            iVar24 = iVar24 + iVar34;
            do {
              lVar28 = *(longlong *)(param_1 + 0x250);
              lVar32 = (longlong)iVar34 * 0x10;
              if (((*(float *)(lVar28 + lVar32) <= 0.0 && *(float *)(lVar28 + lVar32) != 0.0) ||
                  (pfVar4 = (float *)(lVar28 + 4 + lVar32), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) ||
                 ((pfVar4 = (float *)(lVar28 + 8 + lVar32), *pfVar4 <= 0.0 && *pfVar4 != 0.0 ||
                  (pfVar4 = (float *)(lVar28 + 0xc + lVar32), *pfVar4 <= 0.0 && *pfVar4 != 0.0)))) {
                iVar34 = iVar34 - (int)uVar38;
                lVar28 = (longlong)iVar34;
                iVar41 = *(int *)(local_518[8] + lVar28 * 4);
                if (iVar41 != iVar34) {
                  piVar39 = (int *)(local_518[8] + lVar28 * 4);
                  do {
                    *piVar39 = *(int *)(local_518[8] + (longlong)iVar41 * 4);
                    iVar34 = *(int *)(local_518[8] + lVar28 * 4);
                    lVar28 = (longlong)iVar34;
                    piVar39 = (int *)(local_518[8] + lVar28 * 4);
                    iVar41 = *piVar39;
                  } while (iVar41 != iVar34);
                }
                if (*(int *)(local_518[10] + lVar28 * 4) == 1) {
                  auVar48._4_4_ = DAT_14cb4bde4;
                  auVar48._0_4_ = DAT_14cb4bde0;
                  auVar48._8_4_ = DAT_14cb4bde8;
                  auVar48._12_4_ = DAT_14cb4bdec;
                  *(undefined1 (*) [16])
                   (*(longlong *)(param_1 + 0x250) + (longlong)(int)local_218[0] * 0x10) = auVar48;
                  iVar34 = (int)local_218[0];
                }
                else {
                  uVar45 = (longlong)(int)local_218[0] - local_640;
                  local_5f8 = CONCAT44(local_5f8._4_4_,
                                       *(undefined4 *)(local_518[0] + 8 + uVar45 * 0xc));
                  local_600 = *(ulonglong *)(local_518[0] + uVar45 * 0xc);
                  uVar25 = *(uint *)(local_518[8] + uVar45 * 4);
                  uVar44 = uVar45 & 0xffffffff;
                  if (uVar25 != (uint)uVar45) {
                    puVar40 = (uint *)(local_518[8] + uVar45 * 4);
                    do {
                      *puVar40 = *(uint *)(local_518[8] + (longlong)(int)uVar25 * 4);
                      uVar31 = *(uint *)(local_518[8] + uVar45 * 4);
                      uVar44 = (ulonglong)uVar31;
                      uVar45 = (ulonglong)(int)uVar31;
                      puVar40 = (uint *)(local_518[8] + uVar45 * 4);
                      uVar25 = *puVar40;
                    } while (uVar25 != uVar31);
                  }
                  bVar46 = (longlong)uStack_520 < 0;
                  uStack_520 = uStack_520 & 0xffffffff00000000;
                  local_624 = iVar24;
                  local_620 = lVar27;
                  if (bVar46) {
                    FUN_14481578e(&local_528,0);
                    uVar38 = local_660;
                  }
                  local_538 = &LAB_146ed2d2c;
                  local_468 = local_518;
                  local_460 = &local_600;
                  iVar23 = (int)uVar38;
                  local_548 = &LAB_143b68cd6;
                  local_670 = &local_538;
                  local_678 = &local_528;
                  local_540 = &local_468;
                  local_530 = &local_198;
                  local_458 = iVar23;
                  FUN_146ed2782(&local_148);
                  piVar39 = local_528;
                  lVar27 = (longlong)(int)uStack_520;
                  if (lVar27 != 0) {
                    lVar28 = 0;
                    do {
                      iVar34 = *(int *)((longlong)piVar39 + lVar28) - iVar23;
                      FUN_146b9cc7c(local_518 + 4,(int)local_218[0] - iVar23,iVar34);
                      FUN_146b9cc7c(local_518 + 8,uVar44,iVar34);
                      lVar28 = lVar28 + 4;
                    } while (lVar27 * 4 != lVar28);
                  }
                  auVar48 = roundss(ZEXT416((uint)((float)local_5f8 / (float)local_d0)),
                                    ZEXT416((uint)((float)local_5f8 / (float)local_d0)),9);
                  auVar51 = roundss(ZEXT416((uint)(local_600._4_4_ / (float)local_d0)),
                                    ZEXT416((uint)(local_600._4_4_ / (float)local_d0)),9);
                  auVar49 = roundss(ZEXT416((uint)((float)local_600 / (float)local_d0)),
                                    ZEXT416((uint)((float)local_600 / (float)local_d0)),9);
                  local_198 = CONCAT44((int)auVar51._0_4_,(int)auVar49._0_4_);
                  uStack_190 = CONCAT44(uStack_190._4_4_,(int)auVar48._0_4_);
                  local_468 = &local_198;
                  local_460 = local_218;
                  FUN_146be634e(&local_148,local_218 + 8,&local_468,0);
                  param_1 = local_658;
                  lVar27 = local_620;
                  iVar24 = local_624;
                  iVar34 = (int)local_218[0];
                  iVar23 = local_64c;
                }
              }
              iVar34 = iVar34 + 1;
              local_218[0] = CONCAT44(local_218[0]._4_4_,iVar34);
            } while (iVar34 < iVar24);
          }
          lVar27 = lVar27 + 1;
        } while (iVar23 != (int)lVar27);
      }
      iVar34 = (int)uVar38;
      local_178 = 0;
      local_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_16c = 0x80;
      uStack_168 = 0xffffffff;
      local_164 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      if ((int)local_638 < iVar23) {
        lVar27 = local_630;
        do {
          lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + lVar27 * 4);
          if (0 < lVar28) {
            lVar32 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + lVar27 * 4);
            lVar28 = lVar28 + lVar32;
            local_630 = lVar27;
            do {
              iVar23 = (int)uVar38;
              lVar36 = *(longlong *)(param_1 + 0x250);
              lVar43 = lVar32 * 0x10;
              fVar53 = *(float *)(lVar36 + lVar43);
              if (((0.0 <= fVar53) && (fVar6 = *(float *)(lVar36 + 4 + lVar43), 0.0 <= fVar6)) &&
                 ((fVar7 = *(float *)(lVar36 + 8 + lVar43), 0.0 <= fVar7 &&
                  (fVar8 = *(float *)(lVar36 + 0xc + lVar43), 0.0 <= fVar8)))) {
                local_600 = *(ulonglong *)(local_518[0] + (lVar32 - local_640) * 0xc);
                local_5f8 = CONCAT44(local_5f8._4_4_,
                                     *(undefined4 *)(local_518[0] + 8 + (lVar32 - local_640) * 0xc))
                ;
                bVar46 = (longlong)uStack_520 < 0;
                uStack_520 = uStack_520 & 0xffffffff00000000;
                if (bVar46) {
                  FUN_14481578e(&local_528,0);
                  iVar23 = (int)local_660;
                }
                local_558 = &LAB_146ed2d2c;
                local_468 = local_518;
                local_460 = &local_600;
                local_568 = &LAB_143b68d22;
                local_670 = &local_558;
                local_678 = &local_528;
                local_560 = &local_468;
                local_550 = local_218 + 8;
                local_458 = iVar23;
                FUN_146ed2782();
                lVar27 = local_630;
                param_1 = local_658;
                uVar38 = local_660;
                if ((longlong)(int)uStack_520 != 0) {
                  piVar39 = local_528 + (int)uStack_520;
                  piVar37 = local_528;
                  do {
                    iVar23 = *piVar37;
                    lVar27 = (longlong)iVar23 - local_640;
                    iVar34 = *(int *)(local_518[8] + lVar27 * 4);
                    iVar41 = (int)lVar27;
                    iVar24 = iVar41;
                    if (iVar34 != iVar41) {
                      piVar33 = (int *)(local_518[8] + lVar27 * 4);
                      lVar36 = lVar27;
                      do {
                        *piVar33 = *(int *)(local_518[8] + (longlong)iVar34 * 4);
                        iVar24 = *(int *)(local_518[8] + lVar36 * 4);
                        lVar36 = (longlong)iVar24;
                        piVar33 = (int *)(local_518[8] + lVar36 * 4);
                        iVar34 = *piVar33;
                      } while (iVar34 != iVar24);
                    }
                    local_468 = (longlong *)CONCAT44(local_468._4_4_,iVar24);
                    iVar34 = *(int *)(local_518[8] + lVar27 * 4);
                    lVar36 = lVar27;
                    if (iVar34 != iVar41) {
                      piVar33 = (int *)(local_518[8] + lVar27 * 4);
                      do {
                        *piVar33 = *(int *)(local_518[8] + (longlong)iVar34 * 4);
                        iVar24 = *(int *)(local_518[8] + lVar36 * 4);
                        lVar36 = (longlong)iVar24;
                        piVar33 = (int *)(local_518[8] + lVar36 * 4);
                        iVar34 = *piVar33;
                      } while (iVar34 != iVar24);
                    }
                    if (*(int *)(local_518[10] + lVar36 * 4) == 1) {
                      lVar36 = *(longlong *)(local_658 + 0x250);
                      lVar43 = (longlong)iVar23 * 0x10;
                      *(float *)(lVar36 + lVar43) = fVar53;
                      *(float *)(lVar36 + 4 + lVar43) = fVar6;
                      *(float *)(lVar36 + 8 + lVar43) = fVar7;
                      *(float *)(lVar36 + 0xc + lVar43) = fVar8;
                    }
                    FUN_1447cbafe(&local_198,local_218 + 8,&local_468,0);
                    iVar23 = *(int *)(local_518[4] + lVar27 * 4);
                    if (iVar23 != iVar41) {
                      piVar33 = (int *)(local_518[4] + lVar27 * 4);
                      do {
                        *piVar33 = *(int *)(local_518[4] + (longlong)iVar23 * 4);
                        iVar34 = *(int *)(local_518[4] + lVar27 * 4);
                        lVar27 = (longlong)iVar34;
                        piVar33 = (int *)(local_518[4] + lVar27 * 4);
                        iVar23 = *piVar33;
                      } while (iVar23 != iVar34);
                    }
                    lVar36 = lVar27 * 0x10;
                    *(float *)(local_4a8 + lVar36) = *(float *)(local_4a8 + lVar36) + fVar53;
                    *(float *)(local_4a8 + 4 + lVar36) = *(float *)(local_4a8 + 4 + lVar36) + fVar6;
                    *(float *)(local_4a8 + 8 + lVar36) = *(float *)(local_4a8 + 8 + lVar36) + fVar7;
                    *(float *)(local_4a8 + 0xc + lVar36) =
                         *(float *)(local_4a8 + 0xc + lVar36) + fVar8;
                    *(float *)(local_518[0xc] + lVar27 * 4) =
                         *(float *)(local_518[0xc] + lVar27 * 4) + 1.0;
                    piVar37 = piVar37 + 1;
                    lVar27 = local_630;
                    param_1 = local_658;
                    uVar38 = local_660;
                  } while (piVar37 != piVar39);
                }
              }
              lVar32 = lVar32 + 1;
            } while (lVar32 < lVar28);
          }
          iVar34 = (int)uVar38;
          lVar27 = lVar27 + 1;
          iVar23 = local_64c;
        } while (local_64c != (int)lVar27);
      }
      uVar38 = local_648;
      if (0 < (int)uStack_4a0) {
        lVar27 = 0xc;
        lVar28 = 0;
        do {
          fVar53 = *(float *)(local_518[0xc] + lVar28 * 4);
          if (0.0 < fVar53) {
            fVar53 = 1.0 / fVar53;
            *(float *)(local_4a8 + -0xc + lVar27) = *(float *)(local_4a8 + -0xc + lVar27) * fVar53;
            *(float *)(local_4a8 + -8 + lVar27) = *(float *)(local_4a8 + -8 + lVar27) * fVar53;
            *(float *)(local_4a8 + -4 + lVar27) = *(float *)(local_4a8 + -4 + lVar27) * fVar53;
            *(float *)(local_4a8 + lVar27) = fVar53 * *(float *)(local_4a8 + lVar27);
            *(undefined4 *)(local_518[0xc] + lVar28 * 4) = 0x3f800000;
          }
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 0x10;
        } while (lVar28 < (int)uStack_4a0);
      }
      local_578[0] = 0;
      local_578[1] = 0;
      if (local_628 == iVar34) {
        local_588 = 0;
        uStack_580 = 0;
        FUN_148340bca(local_518 + 8,local_598,local_648);
      }
      else {
        FUN_14481578e(local_578,local_648 & 0xffffffff);
        local_588 = 0;
        uStack_580 = 0;
        FUN_148340bca(local_518 + 8,local_598,uVar38 & 0xffffffff);
        iVar34 = 0;
        do {
          lVar28 = (longlong)iVar34;
          uVar25 = *(uint *)(local_598[0] + lVar28 * 4);
          lVar27 = (longlong)(int)uVar25;
          uVar31 = *(uint *)(local_518[8] + lVar27 * 4);
          if (uVar31 != uVar25) {
            puVar40 = (uint *)(local_518[8] + lVar27 * 4);
            do {
              *puVar40 = *(uint *)(local_518[8] + (longlong)(int)uVar31 * 4);
              uVar25 = *(uint *)(local_518[8] + lVar27 * 4);
              lVar27 = (longlong)(int)uVar25;
              puVar40 = (uint *)(local_518[8] + lVar27 * 4);
              uVar31 = *puVar40;
            } while (uVar31 != uVar25);
          }
          iVar24 = *(int *)(local_518[10] + lVar27 * 4);
          iVar34 = iVar34 + iVar24;
          if ((iVar24 != 1) && ((int)uStack_190 != local_164)) {
            puVar30 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar30 = local_160;
            }
            iVar41 = *(int *)(puVar30 + (ulonglong)(local_150 - 1U & uVar25) * 4);
            if (iVar41 != -1) {
LAB_143b64be3:
              if (*(uint *)(local_198 + (longlong)iVar41 * 0xc) != uVar25)
              goto code_r0x000143b64bef;
              local_5b8 = (longlong *)0x0;
              plStack_5b0 = (longlong *)0x0;
              local_5a8 = (longlong *)0x0;
              local_468 = (longlong *)CONCAT44(local_468._4_4_,0xffffffff);
              FUN_1448156a8(local_578,&local_468);
              if (0 < iVar24) {
                iVar24 = 0;
                lVar27 = lVar28;
                do {
                  iVar41 = *(int *)(local_598[0] + lVar27 * 4);
                  lVar32 = (longlong)iVar41;
                  iVar42 = *(int *)(local_518[4] + lVar32 * 4);
                  if (iVar42 != iVar41) {
                    piVar39 = (int *)(local_518[4] + lVar32 * 4);
                    do {
                      *piVar39 = *(int *)(local_518[4] + (longlong)iVar42 * 4);
                      iVar13 = *(int *)(local_518[4] + lVar32 * 4);
                      lVar32 = (longlong)iVar13;
                      piVar39 = (int *)(local_518[4] + lVar32 * 4);
                      iVar42 = *piVar39;
                    } while (iVar42 != iVar13);
                  }
                  if (*(float *)(local_518[0xc] + lVar32 * 4) <= 0.0) {
                    if (*(int *)(local_578[0] + lVar32 * 4) == -1) {
                      *(int *)(local_578[0] + lVar32 * 4) = iVar24;
                      iVar24 = iVar24 + 1;
                    }
                  }
                  else {
                    puVar1 = (undefined8 *)(local_4a8 + lVar32 * 0x10);
                    uVar19 = puVar1[1];
                    puVar2 = (undefined8 *)
                             (*(longlong *)(local_658 + 0x250) +
                             (longlong)(iVar41 + (int)local_660) * 0x10);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar19;
                  }
                  lVar27 = lVar27 + 1;
                } while (lVar27 < iVar34);
                if (iVar24 != 0) {
                  lVar27 = (longlong)iVar24;
                  local_600 = local_600 & 0xffffffffffffff00;
                  local_5c8 = 0;
                  uStack_5c0 = 0;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  local_5e8 = 0;
                  uStack_5e0 = 0;
                  local_5f8 = 0;
                  uStack_5f0 = 0;
                  FUN_146dde6fa(&local_600,lVar27,lVar27);
                  local_218[8] = 0;
                  local_218[9] = 0;
                  local_640 = CONCAT44(local_640._4_4_,iVar24);
                  if (iVar24 < 1) {
                    local_218[9] = lVar27;
                    local_218[10] = 0;
                    local_218[0xb] = lVar27;
                    local_218[0xc] = 0;
                    local_218[0xd] = lVar27;
                    local_218[0xe] = 0;
                    local_218[0xf] = lVar27;
                    local_218[0] = 0;
                    local_218[1] = lVar27;
                    local_218[2] = 0;
                    local_218[3] = lVar27;
                    local_218[4] = 0;
                    local_218[5] = lVar27;
LAB_143b64f47:
                    lVar32 = 0;
                  }
                  else {
                    lVar32 = lVar27 * 4;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[10] = 0;
                    local_218[0xb] = 0;
                    local_218[8] = lVar36;
                    local_218[9] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[0xc] = 0;
                    local_218[0xd] = 0;
                    local_218[10] = lVar36;
                    local_218[0xb] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[0xe] = 0;
                    local_218[0xf] = 0;
                    local_218[0xc] = lVar36;
                    local_218[0xd] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[0] = 0;
                    local_218[1] = 0;
                    local_218[0xe] = lVar36;
                    local_218[0xf] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[2] = 0;
                    local_218[3] = 0;
                    local_218[0] = lVar36;
                    local_218[1] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[4] = 0;
                    local_218[5] = 0;
                    local_218[2] = lVar36;
                    local_218[3] = lVar27;
                    lVar36 = FUN_14001cc68(lVar32,0x10);
                    if (lVar36 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                    }
                    local_218[6] = 0;
                    local_218[7] = 0;
                    local_218[4] = lVar36;
                    local_218[5] = lVar27;
                    lVar32 = FUN_14001cc68(lVar32,0x10);
                    if (lVar32 == 0) {
                      FUN_14001cc68(0xffffffffffffffff,0x10);
                      goto LAB_143b64f47;
                    }
                  }
                  local_218[6] = lVar32;
                  local_218[7] = lVar27;
                  lVar27 = 0;
                  do {
                    local_460 = *(longlong **)((longlong)local_218 + lVar27 + 8);
                    local_454 = 0;
                    FUN_146dde1b2((longlong)local_218 + lVar27,&local_468,&local_618);
                    uVar38 = local_640;
                    lVar27 = lVar27 + 0x10;
                  } while (lVar27 != 0x40);
                  iVar23 = (int)local_640;
                  FUN_14005ea14(&local_588);
                  iVar24 = (int)uStack_580;
                  lVar27 = (longlong)(int)uStack_580;
                  if ((int)uStack_580 < iVar23) {
                    uVar25 = iVar23 - (int)uStack_580;
                    uStack_580 = CONCAT44(uStack_580._4_4_,iVar23);
                    if ((uint)(uStack_580._4_4_ - iVar24) < uVar25) {
                      FUN_14475e4ac(&local_588);
                    }
                    memset((void *)(lVar27 * 4 + local_588),0,(longlong)(int)uVar25 << 2);
                  }
                  else {
                    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(uVar38 & 0xffffffff);
                    }
                    if (iVar23 < (int)uStack_580) {
                      uStack_580 = CONCAT44(uStack_580._4_4_,(int)local_640);
                    }
                  }
                  if ((longlong)(int)(uint)uStack_490 != 0) {
                    piVar39 = local_498 + (longlong)(int)(uint)uStack_490 * 3;
                    piVar37 = local_498;
                    do {
                      iVar23 = *piVar37;
                      lVar27 = (longlong)iVar23;
                      iVar24 = *(int *)(local_518[4] + lVar27 * 4);
                      if (iVar24 != iVar23) {
                        piVar33 = (int *)(local_518[4] + lVar27 * 4);
                        do {
                          *piVar33 = *(int *)(local_518[4] + (longlong)iVar24 * 4);
                          iVar23 = *(int *)(local_518[4] + lVar27 * 4);
                          lVar27 = (longlong)iVar23;
                          piVar33 = (int *)(local_518[4] + lVar27 * 4);
                          iVar24 = *piVar33;
                        } while (iVar24 != iVar23);
                      }
                      iVar41 = piVar37[1];
                      lVar32 = (longlong)iVar41;
                      iVar24 = *(int *)(local_518[4] + lVar32 * 4);
                      if (iVar24 != iVar41) {
                        piVar33 = (int *)(local_518[4] + lVar32 * 4);
                        do {
                          *piVar33 = *(int *)(local_518[4] + (longlong)iVar24 * 4);
                          iVar41 = *(int *)(local_518[4] + lVar32 * 4);
                          lVar32 = (longlong)iVar41;
                          piVar33 = (int *)(local_518[4] + lVar32 * 4);
                          iVar24 = *piVar33;
                        } while (iVar24 != iVar41);
                      }
                      iVar24 = *(int *)(local_578[0] + lVar27 * 4);
                      lVar27 = (longlong)iVar24;
                      iVar42 = *(int *)(local_578[0] + lVar32 * 4);
                      if (lVar27 == -1) {
                        iVar24 = iVar42;
                        iVar41 = iVar23;
                        if (iVar42 != -1) goto LAB_143b6546a;
                      }
                      else {
                        if (iVar42 == -1) {
LAB_143b6546a:
                          if (*(float *)(local_518[0xc] + (longlong)iVar41 * 4) <= 0.0)
                          goto LAB_143b6551b;
                          lVar27 = (longlong)iVar41 * 0x10;
                          fVar53 = (float)piVar37[2];
                          local_468 = (longlong *)
                                      CONCAT44(*(float *)(local_4a8 + 4 + lVar27) * fVar53,
                                               fVar53 * *(float *)(local_4a8 + lVar27));
                          local_460 = (longlong *)
                                      CONCAT44(*(float *)(local_4a8 + 0xc + lVar27) * fVar53,
                                               *(float *)(local_4a8 + 8 + lVar27) * fVar53);
                          lVar32 = (longlong)iVar24;
                          lVar27 = 0;
                          do {
                            lVar36 = *(longlong *)((longlong)local_218 + lVar27 * 4);
                            *(float *)(lVar36 + lVar32 * 4) =
                                 *(float *)((longlong)&local_468 + lVar27) +
                                 *(float *)(lVar36 + lVar32 * 4);
                            lVar27 = lVar27 + 4;
                          } while (lVar27 != 0x10);
                        }
                        else {
                          local_468 = (longlong *)CONCAT44(iVar42,iVar24);
                          if (plStack_5b0 == local_5a8) {
                            local_460._0_4_ = piVar37[2] ^ 0x80000000U;
                            FUN_14849b1b8(&local_5b8,plStack_5b0,&local_468);
                          }
                          else {
                            *(uint *)(plStack_5b0 + 1) = piVar37[2] ^ 0x80000000U;
                            *plStack_5b0 = (longlong)local_468;
                            plStack_5b0 = (longlong *)((longlong)plStack_5b0 + 0xc);
                          }
                          local_468 = (longlong *)CONCAT44(iVar24,iVar42);
                          local_460 = (longlong *)
                                      (CONCAT44(local_460._4_4_,piVar37[2]) ^ 0x80000000);
                          if (plStack_5b0 == local_5a8) {
                            FUN_14849b1b8(&local_5b8,plStack_5b0,&local_468);
                          }
                          else {
                            *(uint *)(plStack_5b0 + 1) = piVar37[2] ^ 0x80000000;
                            *plStack_5b0 = (longlong)local_468;
                            plStack_5b0 = (longlong *)((longlong)plStack_5b0 + 0xc);
                          }
                          lVar32 = (longlong)iVar42;
                          *(float *)(local_588 + lVar27 * 4) =
                               (float)piVar37[2] + *(float *)(local_588 + lVar27 * 4);
                        }
                        *(float *)(local_588 + lVar32 * 4) =
                             (float)piVar37[2] + *(float *)(local_588 + lVar32 * 4);
                      }
LAB_143b6551b:
                      piVar37 = piVar37 + 3;
                    } while (piVar37 != piVar39);
                  }
                  iVar23 = local_64c;
                  if (0 < (int)local_640) {
                    uVar38 = local_640 & 0xffffffff;
                    uVar45 = 0;
                    do {
                      local_468 = (longlong *)CONCAT44((int)uVar45,(int)uVar45);
                      uVar26 = *(undefined4 *)(local_588 + uVar45 * 4);
                      local_460 = (longlong *)CONCAT44(local_460._4_4_,uVar26);
                      if (plStack_5b0 == local_5a8) {
                        FUN_14849b1b8(&local_5b8,plStack_5b0,&local_468);
                      }
                      else {
                        *(undefined4 *)(plStack_5b0 + 1) = uVar26;
                        *plStack_5b0 = (longlong)local_468;
                        plStack_5b0 = (longlong *)((longlong)plStack_5b0 + 0xc);
                      }
                      uVar45 = uVar45 + 1;
                    } while (uVar38 != uVar45);
                  }
                  local_468 = plStack_5b0;
                  local_618 = local_5b8;
                  FUN_14849b363(&local_618,&local_468,&local_600);
                  FUN_148499ce6(&local_600);
                  FUN_148499e04(&local_468);
                  local_280 = 1;
                  FUN_148499eec(&local_468,&local_600);
                  FUN_14849a306(&local_468,&local_600);
                  local_618 = local_218 + 8;
                  local_608 = local_218;
                  local_478 = 0;
                  local_470 = 0;
                  local_488 = FUN_143b69cfe;
                  local_668 = &local_478;
                  local_670 = (undefined1 **)((ulonglong)local_670 & 0xffffffff00000000);
                  puStack_610 = &local_468;
                  local_480 = &local_618;
                  FUN_1401f8d10(L"ParallelFor Task",4,1,&local_488);
                  do {
                    iVar24 = *(int *)(local_598[0] + lVar28 * 4);
                    lVar27 = (longlong)iVar24;
                    iVar41 = *(int *)(local_518[4] + lVar27 * 4);
                    if (iVar41 != iVar24) {
                      piVar39 = (int *)(local_518[4] + lVar27 * 4);
                      do {
                        *piVar39 = *(int *)(local_518[4] + (longlong)iVar41 * 4);
                        iVar42 = *(int *)(local_518[4] + lVar27 * 4);
                        lVar27 = (longlong)iVar42;
                        piVar39 = (int *)(local_518[4] + lVar27 * 4);
                        iVar41 = *piVar39;
                      } while (iVar41 != iVar42);
                    }
                    lVar27 = (longlong)*(int *)(local_578[0] + lVar27 * 4);
                    if (lVar27 != -1) {
                      local_618 = (longlong *)0x0;
                      puStack_610 = (undefined8 *)0x3f80000000000000;
                      lVar32 = 0;
                      do {
                        fVar53 = *(float *)(*(longlong *)((longlong)local_218 + lVar32 * 4 + 0x40) +
                                           lVar27 * 4);
                        if (fVar53 <= 0.0) {
                          fVar53 = 0.0;
                        }
                        *(float *)((longlong)&local_618 + lVar32) = fVar53;
                        lVar32 = lVar32 + 4;
                      } while (lVar32 != 0x10);
                      plVar3 = (longlong *)
                               (*(longlong *)(local_658 + 0x250) +
                               (longlong)(iVar24 + (int)local_660) * 0x10);
                      *plVar3 = (longlong)local_618;
                      plVar3[1] = (longlong)puStack_610;
                    }
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < iVar34);
                  FUN_14849b166(&local_468);
                  lVar27 = 0x40;
                  do {
                    FUN_1400020a8(*(undefined8 *)((longlong)auStack_228 + lVar27));
                    lVar27 = lVar27 + -0x10;
                  } while (lVar27 != 0);
                  lVar27 = 0x40;
                  do {
                    FUN_1400020a8(*(undefined8 *)((longlong)local_218 + lVar27 + 0x30));
                    lVar27 = lVar27 + -0x10;
                  } while (lVar27 != 0);
                  FUN_146de02bc(&local_600);
                }
              }
              FUN_1484a3264(&local_5b8);
              uVar38 = local_648;
            }
          }
LAB_143b64bfb:
          param_1 = local_658;
        } while (iVar34 < (int)uVar38);
      }
      if (local_598[0] != 0) {
        FUN_1400020a8();
      }
      if (local_588 != 0) {
        FUN_1400020a8();
      }
      if (local_578[0] != 0) {
        FUN_1400020a8();
      }
      local_150 = 0;
      if (local_158 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar38 = uStack_190 >> 0x20;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      if ((int)uVar38 != 0) {
        FUN_1447a08a2(&local_198,0);
      }
      uStack_168 = 0xffffffff;
      local_164 = 0;
      local_170 = 0;
      if (0x80 < local_16c) {
        local_16c = 0x80;
        FUN_1446efbd8(local_188,0);
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_528 != (int *)0x0) {
        FUN_1400020a8();
      }
      FUN_146ed2a8e(&local_148);
      if (local_518[0] != 0) {
        FUN_1400020a8();
      }
      if (local_518[2] != 0) {
        FUN_1400020a8();
      }
      if (local_518[6] != 0) {
        FUN_1400020a8();
      }
      if (local_518[4] != 0) {
        FUN_1400020a8();
      }
      if (local_518[10] != 0) {
        FUN_1400020a8();
      }
      if (local_518[8] != 0) {
        FUN_1400020a8();
      }
      if (local_518[0xc] != 0) {
        FUN_1400020a8();
      }
      if (local_4a8 != 0) {
        FUN_1400020a8();
      }
      if (local_498 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar22 = DAT_14cb4bdec;
    uVar21 = DAT_14cb4bde8;
    uVar20 = DAT_14cb4bde4;
    uVar26 = DAT_14cb4bde0;
    if ((int)local_638 < iVar23) {
      lVar27 = (longlong)(int)local_638;
      do {
        lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + lVar27 * 4);
        if (0 < lVar28) {
          lVar32 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + lVar27 * 4);
          lVar28 = lVar28 + lVar32;
          uVar38 = lVar32 << 4 | 0xc;
          do {
            lVar36 = *(longlong *)(param_1 + 0x250);
            pfVar4 = (float *)(lVar36 + -0xc + uVar38);
            if ((((*pfVar4 <= 0.0 && *pfVar4 != 0.0) ||
                 (pfVar4 = (float *)(lVar36 + -8 + uVar38), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) ||
                (pfVar4 = (float *)(lVar36 + -4 + uVar38), *pfVar4 <= 0.0 && *pfVar4 != 0.0)) ||
               (*(float *)(lVar36 + uVar38) <= 0.0 && *(float *)(lVar36 + uVar38) != 0.0)) {
              *(undefined4 *)(lVar36 + -0xc + uVar38) = uVar26;
              *(undefined4 *)(lVar36 + -8 + uVar38) = uVar20;
              *(undefined4 *)(lVar36 + -4 + uVar38) = uVar21;
              *(undefined4 *)(lVar36 + uVar38) = uVar22;
            }
            lVar32 = lVar32 + 1;
            uVar38 = uVar38 + 0x10;
          } while (lVar32 < lVar28);
        }
        lVar27 = lVar27 + 1;
      } while (iVar23 != (int)lVar27);
    }
  }
  if ((local_c0 ^ (ulonglong)local_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143b64bef:
  iVar41 = *(int *)(local_198 + (longlong)iVar41 * 0xc + 4);
  if (iVar41 == -1) goto LAB_143b64bfb;
  goto LAB_143b64be3;
}



// FUNCTION 143b65670 FUN_143b65670 body=586 status=ok
// SIG undefined FUN_143b65670(void)

uint FUN_143b65670(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_ac;
  uint *local_a8;
  int local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar9 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = 0xffffffff;
  if (param_2 < param_3) {
    lVar10 = (longlong)param_2;
    do {
      lVar6 = *(longlong *)(param_1 + 0x390);
      if (*(longlong *)(param_1 + 0x390) == 0) {
        lVar6 = param_1 + 0x380;
      }
      uVar3 = (uint)lVar10;
      uVar8 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar8 = uVar3;
      }
      if ((*(uint *)(lVar6 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        local_ac = *(uint *)(*(longlong *)(param_1 + 0x360) + lVar10 * 4);
        if ((int)uStack_90 != local_64) {
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_60;
          }
          iVar1 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_ac) * 4);
          while (iVar1 != -1) {
            lVar6 = local_98 + (longlong)iVar1 * 0x10;
            if (*(uint *)(local_98 + (longlong)iVar1 * 0x10) == local_ac) {
              if (lVar6 != 0) goto LAB_143b657dc;
              break;
            }
            iVar1 = *(int *)(lVar6 + 8);
          }
        }
        local_b8 = 0;
        local_a8 = &local_ac;
        FUN_1407932ac(&local_98,&local_9c,local_ac,&local_a8);
        lVar6 = (longlong)local_9c * 0x10 + local_98;
LAB_143b657dc:
        iVar2 = *(int *)(lVar6 + 4);
        iVar1 = iVar2 + 1;
        *(int *)(lVar6 + 4) = iVar1;
        if (iVar9 <= iVar2) {
          uVar7 = local_ac;
          iVar9 = iVar1;
        }
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 != param_3);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b658bc FUN_143b658bc body=628 status=ok
// SIG undefined FUN_143b658bc(void)

int FUN_143b658bc(longlong *param_1,uint param_2,ulonglong param_3,ulonglong param_4,int param_5,
                 int param_6,int param_7)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int **local_c0;
  int local_ac;
  double *local_a8;
  longlong local_a0;
  int local_98 [4];
  double local_88;
  double dStack_80;
  double local_78;
  int local_6c [3];
  undefined8 local_60;
  double **local_58;
  int *local_50;
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *param_1;
  local_6c[0] = -1;
  local_6c[1] = -1;
  local_6c[2] = -1;
  local_6c[param_2] = param_5;
  local_6c[param_3 & 0xffffffff] = param_6;
  local_6c[param_4 & 0xffffffff] = param_7;
  plVar4 = (longlong *)param_1[2];
  uVar6 = FUN_1448eb174(local_6c,0xc,0);
  iVar7 = FUN_146be86d0(plVar4,uVar6,local_6c);
  if (iVar7 != -1) {
    lVar5 = *plVar4;
    if ((lVar5 + (longlong)iVar7 * 0x18 != 0) &&
       (piVar8 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0xc), piVar8 != (int *)0x0)) {
      local_98[0] = *piVar8;
      goto LAB_143b6596b;
    }
  }
  plVar4 = (longlong *)param_1[1];
  local_78 = *(double *)(plVar4[4] + (longlong)local_6c[2] * 8);
  dStack_80 = *(double *)(plVar4[2] + (longlong)local_6c[1] * 8);
  local_88 = *(double *)(*plVar4 + (longlong)local_6c[0] * 8);
  local_a8 = &local_88;
  local_58 = &local_a8;
  local_c0 = &local_50;
  local_50 = (int *)&LAB_146c80466;
  local_c8 = &local_60;
  local_60 = &LAB_143b69d50;
  local_a0 = lVar3;
  local_48 = &local_ac;
  FUN_146c80058(param_1[3],local_98,local_a8,0x3f1a36e2eb1c432d);
  if (local_98[0] == -1) {
    iVar7 = *(int *)(lVar3 + 0x40);
    *(uint *)(lVar3 + 0x40) = iVar7 + 1U;
    if (*(uint *)(lVar3 + 0x44) < iVar7 + 1U) {
      FUN_1403e3958((longlong *)(lVar3 + 0x38),iVar7);
    }
    lVar3 = *(longlong *)(lVar3 + 0x38);
    *(double *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18) = local_78;
    pdVar1 = (double *)(lVar3 + (longlong)iVar7 * 0x18);
    *pdVar1 = local_88;
    pdVar1[1] = dStack_80;
    local_ac = iVar7;
    local_50 = local_6c;
    local_48 = &local_ac;
    FUN_146be8736(param_1[2],&local_60,&local_50,0);
    dVar2 = *(double *)(param_1[3] + 0x78);
    auVar9._0_8_ = local_78 / dVar2;
    auVar9._8_8_ = 0;
    auVar9 = roundsd(auVar9,auVar9,9);
    auVar11._0_8_ = dStack_80 / dVar2;
    auVar11._8_8_ = 0;
    auVar11 = roundsd(auVar11,auVar11,9);
    auVar10._0_8_ = local_88 / dVar2;
    auVar10._8_8_ = 0;
    auVar10 = roundsd(auVar10,auVar10,9);
    local_60 = (undefined1 *)CONCAT44((int)auVar11._0_8_,(int)auVar10._0_8_);
    local_58 = (double **)CONCAT44(local_58._4_4_,(int)auVar9._0_8_);
    local_50 = (int *)&local_60;
    local_48 = &local_ac;
    FUN_146be634e(param_1[3],&local_a8,&local_50,0);
    local_98[0] = local_ac;
  }
LAB_143b6596b:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_98[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b65b32 FUN_143b65b32 body=168 status=ok
// SIG undefined FUN_143b65b32(void)

void FUN_143b65b32(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)(*param_1 + 0x1b0) + (longlong)param_2 * 4);
  if ((((char)param_1[4] == '\x01') && (iVar1 == 2)) ||
     ((iVar1 == 1 && (-1 < *(int *)(*(longlong *)(*param_1 + 400) + (longlong)param_2 * 4))))) {
    local_30 = param_3;
    local_24 = param_2;
    cVar3 = (**(code **)param_1[2])(((undefined8 *)param_1[2])[1]);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_1[3];
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar2,iVar1);
      }
      *(int *)(*plVar2 + (longlong)iVar1 * 4) = param_2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b65bdb FUN_143b65bdb body=10012 status=ok
// SIG undefined FUN_143b65bdb(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_143b65bdb(longlong *param_1,undefined8 *param_2,longlong *param_3,double param_4,
             undefined8 *param_5,char param_6,int param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  void *_Src;
  undefined4 ****ppppuVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int *piVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  int *piVar29;
  uint *puVar30;
  uint uVar31;
  int *piVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  uint *puVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_8d8 [32];
  undefined8 *local_8b8;
  undefined1 local_8b0;
  longlong *local_8a0;
  uint *local_898;
  ulonglong local_890;
  int local_884;
  longlong local_880;
  uint *local_878;
  int *local_870;
  uint *local_868;
  int *local_860;
  int *local_858;
  longlong *local_850;
  longlong *local_848;
  undefined4 ****local_840;
  uint local_838 [26];
  undefined4 *****local_7d0;
  undefined1 *local_7c8;
  undefined8 local_788 [12];
  undefined1 local_728 [16];
  double local_718;
  uint ****local_6d8;
  undefined8 uStack_6d0;
  undefined4 ****local_6c8;
  undefined8 uStack_6c0;
  uint local_6ac;
  uint *local_6a8;
  undefined8 uStack_6a0;
  void *local_690;
  uint local_688;
  uint local_684;
  longlong *local_680;
  undefined8 local_678 [12];
  uint local_618 [4];
  undefined8 local_608;
  undefined8 local_5d8 [2];
  undefined8 local_5c8;
  uint ****local_598;
  undefined8 uStack_590;
  uint **local_588;
  double dStack_580;
  double dStack_578;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined8 local_560;
  double dStack_558;
  double local_550;
  double local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined8 local_510;
  double dStack_508;
  double local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined1 local_4b6;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined2 local_490;
  undefined1 local_48e;
  undefined4 local_48c;
  undefined1 local_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 local_460;
  ulonglong local_458;
  undefined8 local_450;
  double dStack_448;
  double local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined1 local_3c0;
  undefined8 local_3b8;
  ulonglong uStack_3b0;
  undefined2 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined2 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [12];
  int iStack_2cc;
  double local_2c8 [2];
  longlong local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 uStack_2a8;
  int local_2a4;
  undefined1 local_2a0 [8];
  undefined1 *local_298;
  int local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  int local_254;
  undefined1 local_250 [8];
  undefined1 *local_248;
  int local_240;
  longlong local_238;
  ulonglong uStack_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined4 local_210;
  uint local_20c;
  undefined4 uStack_208;
  int local_204;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  uint local_1d8 [4];
  uint *local_1c8;
  uint local_1c0;
  uint local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  ulonglong uStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 uStack_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  puVar25 = &DAT_14c846480;
  puVar28 = local_678;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar28 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar28 = puVar28 + 1;
  }
  local_680 = param_1;
  FUN_146eca9e2(&local_680,0);
  uVar7 = DAT_14c996af0;
  local_598 = (uint ****)0x149f63798;
  uStack_590 = (undefined4 ****)CONCAT35(uStack_590._5_3_,9);
  uVar8 = FUN_14001a6c0(&local_598,1);
  local_8a0 = param_1;
  local_878 = (uint *)FUN_146eab2fc(param_1,uVar8,uVar7);
  local_690 = (void *)0x0;
  local_688 = *(uint *)(param_2 + 1);
  lVar16 = (longlong)(int)local_688;
  _Src = (void *)*param_2;
  if (lVar16 == 0) {
    local_684 = 0;
  }
  else {
    FUN_144a06ca8(&local_690,local_688,0);
    memcpy(local_690,_Src,lVar16 << 2);
    plVar20 = local_8a0;
    uVar31 = local_688;
    if (local_688 != 0) goto LAB_143b65da3;
  }
  plVar20 = local_8a0;
  if ((int)local_8a0[0x33] < 1) {
    uVar31 = 0;
  }
  else {
    iVar23 = 0;
    do {
      uVar31 = local_688;
      lVar16 = (longlong)(int)local_688;
      local_688 = local_688 + 1;
      if (local_684 < local_688) {
        FUN_1446f48e2(&local_690,uVar31);
        plVar20 = local_8a0;
      }
      *(int *)((longlong)local_690 + lVar16 * 4) = iVar23;
      iVar23 = iVar23 + 1;
      uVar31 = local_688;
    } while (iVar23 < (int)plVar20[0x33]);
  }
LAB_143b65da3:
  if (uVar31 == *(uint *)(param_3 + 1)) {
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    local_178 = 0;
    local_170 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_16c = 0x80;
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_158 = (undefined1 *)0x0;
    local_150 = 0;
    local_6a8 = (uint *)0x0;
    uStack_6a0 = 0;
    local_1c8 = (uint *)0x0;
    local_1c0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1bc = 0x80;
    uStack_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_218 = 0;
    local_210 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_20c = 0x80;
    uStack_208 = 0xffffffff;
    local_204 = 0;
    local_1f8 = (undefined1 *)0x0;
    local_1f0 = 0;
    local_268 = 0;
    local_260 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_25c = 0xffffffff00000080;
    local_254 = 0;
    local_248 = (undefined1 *)0x0;
    local_240 = 0;
    if (0 < (int)uVar31) {
      lVar16 = 0;
      lVar35 = 0;
      do {
        lVar17 = (longlong)*(int *)((longlong)local_690 + lVar35 * 4);
        iVar23 = *(int *)(plVar20[0x32] + lVar17 * 4);
        local_728._0_4_ = iVar23;
        if ((-1 < iVar23) && (*(int *)(plVar20[0x36] + lVar17 * 4) == 1)) {
          FUN_1447cbafe(&local_238,&local_598,local_728,0);
          uStack_590 = (undefined4 ****)(*param_3 + lVar16);
          local_598 = (uint ****)local_728;
          FUN_146e3963e(&local_148,local_2d8);
          plVar20 = local_8a0;
          uVar31 = local_688;
        }
        lVar35 = lVar35 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar35 < (int)uVar31);
    }
    if ((longlong)*(int *)(param_5 + 1) != 0) {
      piVar32 = (int *)*param_5;
      piVar24 = piVar32 + *(int *)(param_5 + 1);
      do {
        uVar31 = *(uint *)(plVar20[0x32] + (longlong)*piVar32 * 4);
        local_598 = (uint ****)CONCAT44(local_598._4_4_,uVar31);
        if (((-1 < (int)uVar31) && (*(int *)(local_8a0[0x36] + (longlong)*piVar32 * 4) == 1)) &&
           ((int)uStack_140 != local_114)) {
          puVar12 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar12 = local_110;
          }
          for (iVar23 = *(int *)(puVar12 + (ulonglong)(local_100 + 0x7fffffffU & uVar31) * 4);
              iVar23 != -1; iVar23 = *(int *)(local_148 + (longlong)iVar23 * 0x18 + 0x10)) {
            if (*(uint *)(local_148 + (longlong)iVar23 * 0x18) == uVar31) {
              FUN_1447cbafe(&local_1e8,local_2d8,&local_598,0);
              break;
            }
          }
        }
        piVar32 = piVar32 + 1;
        plVar20 = local_8a0;
      } while (piVar32 != piVar24);
    }
    uVar26 = (ulonglong)local_1c0;
    if (local_1c0 == 0) {
      piVar32 = (int *)&DAT_00000001;
      iVar23 = 0;
      piVar24 = (int *)0x0;
      uVar31 = 0;
    }
    else {
      puVar30 = local_1c8;
      if (local_1c8 == (uint *)0x0) {
        puVar30 = local_1d8;
      }
      uVar31 = *puVar30;
      if (uVar31 == 0) {
        iVar23 = local_1c0 + 0x1e;
        if (-1 < (int)(local_1c0 - 1)) {
          iVar23 = local_1c0 - 1;
        }
        piVar24 = (int *)0x0;
        piVar32 = (int *)(ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          piVar32 = piVar24;
        }
        iVar23 = 0;
        do {
          if (piVar32 == piVar24) goto LAB_143b661a2;
          iVar23 = iVar23 + 0x20;
          uVar31 = puVar30[(longlong)((longlong)piVar24 + 1)];
          piVar24 = (int *)((longlong)piVar24 + 1);
        } while (uVar31 == 0);
      }
      else {
        iVar23 = 0;
        piVar24 = (int *)0x0;
      }
      piVar32 = (int *)(ulonglong)(-uVar31 & uVar31);
      uVar22 = (longlong)piVar32 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar31 = (iVar23 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)local_1c0 <= (int)uVar31) {
        uVar31 = local_1c0;
      }
    }
    if (uVar31 != local_1c0) {
      local_848 = local_8a0 + 0x22;
      local_850 = local_8a0 + 0x16;
      uVar10 = 0xffffffff;
      uVar19 = local_1c0;
      local_890 = uVar26;
LAB_143b6711d:
      uVar31 = *(uint *)(local_1e8 + (longlong)(int)uVar31 * 0xc);
      local_840 = (undefined4 ****)CONCAT44(local_840._4_4_,uVar31);
      if ((int)uStack_190 != local_164) {
        puVar12 = local_158;
        if (local_158 == (undefined1 *)0x0) {
          puVar12 = local_160;
        }
        iVar9 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & uVar31) * 4);
        while (iVar9 != -1) {
          lVar16 = local_198 + (longlong)iVar9 * 0x10;
          if (*(uint *)(local_198 + (longlong)iVar9 * 0x10) == uVar31) goto LAB_143b6719c;
          iVar9 = *(int *)(lVar16 + 8);
        }
      }
      lVar16 = 0;
LAB_143b6719c:
      piVar29 = (int *)(lVar16 + 4);
      if (lVar16 == 0) {
        piVar29 = (int *)0x0;
      }
      if ((piVar29 == (int *)0x0) ||
         (*(double *)(local_6a8 + (longlong)*piVar29 * 0xc + 4) < param_4)) {
        plVar20 = (longlong *)(*(longlong *)(local_878 + 4) + (longlong)(int)uVar31 * 0x50);
        local_6ac = 0xffffffff;
        lVar16 = (longlong)(int)uVar31 * 0x50 + *(longlong *)(local_878 + 4);
        puVar30 = (uint *)(lVar16 + 0x10);
        iVar9 = *(int *)(lVar16 + 0x28);
        local_868 = (uint *)CONCAT44(local_868._4_4_,uVar10);
        local_870 = piVar29;
        local_860 = piVar32;
        local_858 = piVar24;
        if (iVar9 == 0) {
          uVar22 = 1;
          uVar27 = 0;
          iVar34 = 0;
          iVar21 = 0;
        }
        else {
          puVar36 = (uint *)plVar20[4];
          if ((uint *)plVar20[4] == (uint *)0x0) {
            puVar36 = puVar30;
          }
          uVar31 = *puVar36;
          if (uVar31 == 0) {
            iVar21 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar21 = iVar9 + -1;
            }
            uVar27 = 0;
            uVar22 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar22 = uVar27;
            }
            iVar34 = 0;
            do {
              if (uVar22 == uVar27) goto LAB_143b67e1f;
              iVar34 = iVar34 + 0x20;
              uVar31 = puVar36[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar31 == 0);
          }
          else {
            uVar27 = 0;
            iVar34 = 0;
          }
          uVar22 = (ulonglong)(-uVar31 & uVar31);
          uVar2 = uVar22 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar21 = (iVar34 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar21) {
            iVar21 = iVar9;
          }
        }
        if (iVar21 != iVar9) {
          uVar31 = 0xffffffff;
          dVar3 = -1.79769313486232e+308;
          local_898 = puVar30;
          local_884 = iVar23;
LAB_143b672c2:
          uVar19 = *(uint *)(*plVar20 + (longlong)iVar21 * 0xc);
          if ((uVar19 != (uint)local_840) && ((int)uStack_230 != local_204)) {
            puVar12 = local_1f8;
            if (local_1f8 == (undefined1 *)0x0) {
              puVar12 = local_200;
            }
            iVar23 = *(int *)(puVar12 + (ulonglong)(local_1f0 - 1U & uVar19) * 4);
            if (iVar23 != -1) {
              lVar16 = (longlong)(int)uVar19;
              lVar35 = (longlong)(int)(uint)local_840;
              do {
                puVar30 = local_898;
                if (*(uint *)(local_238 + (longlong)iVar23 * 0xc) == uVar19) {
                  if (param_7 != 0) {
                    local_6c8 = (undefined4 ****)CONCAT44(local_6c8._4_4_,(uint)local_840);
                    if ((int)uStack_280 == local_254) goto LAB_143b67471;
                    puVar12 = local_248;
                    if (local_248 == (undefined1 *)0x0) {
                      puVar12 = local_250;
                    }
                    uVar10 = *(uint *)(puVar12 + (ulonglong)(local_240 - 1U & (uint)local_840) * 4);
                    if (uVar10 == 0xffffffff) goto LAB_143b67471;
                    goto LAB_143b673ad;
                  }
                  if ((int)uStack_140 == local_114) {
                    puVar36 = (uint *)0x0;
                    goto LAB_143b67467;
                  }
                  puVar12 = local_108;
                  if (local_108 == (undefined1 *)0x0) {
                    puVar12 = local_110;
                  }
                  uVar10 = *(uint *)(puVar12 + (ulonglong)(local_100 - 1U & uVar19) * 4);
                  if (uVar10 == 0xffffffff) goto LAB_143b67465;
                  goto LAB_143b6744e;
                }
                iVar23 = *(int *)(local_238 + (longlong)iVar23 * 0xc + 4);
              } while (iVar23 != -1);
            }
          }
          goto LAB_143b67903;
        }
        goto LAB_143b67e1f;
      }
      goto LAB_143b67e40;
    }
LAB_143b661a2:
    local_6c8 = (undefined4 ****)0x0;
    uStack_6c0 = 0;
    local_6d8 = (uint ****)0x0;
    uStack_6d0 = 0;
    if ((longlong)(int)uStack_6a0 == 0) {
      uVar26 = 0;
    }
    else {
      local_898 = local_6a8 + (longlong)(int)uStack_6a0 * 0xc;
      plVar20 = local_8a0;
      puVar30 = local_6a8;
      do {
        if (*puVar30 != 0xffffffff) {
          if ((char)puVar30[6] == '\x01') {
            FUN_148496ce4(puVar30 + 8,puVar30);
            plVar20 = local_8a0;
          }
          uVar31 = puVar30[10];
          if ((longlong)(int)uVar31 != 0) {
            lVar16 = *(longlong *)(puVar30 + 8);
            lVar35 = 0;
            do {
              uVar26 = uStack_6c0;
              iVar23 = *(int *)(lVar16 + lVar35);
              lVar17 = plVar20[0x76];
              lVar33 = (longlong)(int)uStack_6c0;
              uVar19 = (int)uStack_6c0 + 1;
              uStack_6c0 = CONCAT44(uStack_6c0._4_4_,uVar19);
              if (uStack_6c0._4_4_ < uVar19) {
                FUN_1446f48e2(&local_6c8,uVar26 & 0xffffffff);
                plVar20 = local_8a0;
              }
              *(undefined4 *)((longlong)local_6c8 + lVar33 * 4) =
                   *(undefined4 *)(lVar17 + (longlong)iVar23 * 4);
              lVar35 = lVar35 + 4;
            } while ((longlong)(int)uVar31 * 4 != lVar35);
          }
          uVar26 = uStack_6d0;
          uVar31 = *puVar30;
          lVar16 = plVar20[0x76];
          lVar35 = (longlong)(int)uStack_6d0;
          uVar19 = (int)uStack_6d0 + 1;
          uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uVar19);
          if (uStack_6d0._4_4_ < uVar19) {
            FUN_1446f48e2(&local_6d8,uVar26 & 0xffffffff);
            plVar20 = local_8a0;
          }
          *(uint *)((longlong)local_6d8 + lVar35 * 4) =
               *(uint *)(lVar16 + (longlong)(int)uVar31 * 4);
        }
        puVar30 = puVar30 + 0xc;
      } while (puVar30 != local_898);
      uVar26 = uStack_6c0 & 0xffffffff;
    }
    FUN_144958a06(local_6c8,uVar26);
    FUN_144958a06(local_6d8,uStack_6d0 & 0xffffffff);
    plVar20 = local_8a0;
    puVar25 = local_678;
    puVar28 = local_788;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar28 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar28 = puVar28 + 1;
    }
    local_598 = local_6c8;
    uStack_590 = (undefined4 ****)CONCAT44(uStack_590._4_4_,(int)uStack_6c0);
    local_8b8._0_1_ = 1;
    FUN_148486eaa(local_728,local_8a0,&local_598);
    puVar25 = local_678;
    puVar30 = local_838;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined8 *)puVar30 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar30 = puVar30 + 2;
    }
    local_598 = local_6d8;
    uStack_590 = (undefined4 ****)CONCAT44(uStack_590._4_4_,(int)uStack_6d0);
    local_8b8 = (undefined8 *)CONCAT71(local_8b8._1_7_,1);
    FUN_148486eaa(&local_7d0,plVar20,&local_598);
    local_2b8 = 0;
    local_2b0 = 0;
    _local_2d8 = ZEXT816(0);
    local_2ac = 0x80;
    uStack_2a8 = 0xffffffff;
    local_2a4 = 0;
    local_298 = (undefined1 *)0x0;
    local_290 = 0;
    local_6ac = 0;
    if (0 < (int)local_728._8_4_) {
      do {
        local_598 = (uint ****)
                    ((longlong)
                     *(int *)(*(uint ***)(local_728._0_8_ + (longlong)(int)local_6ac * 8) + 0x44) *
                     4 + plVar20[0x32]);
        uStack_590 = (undefined4 ****)&local_6ac;
        FUN_140263e2a(local_2d8,&local_840,&local_598,0);
        local_6ac = local_6ac + 1;
      } while ((int)local_6ac < (int)local_728._8_4_);
    }
    if (0 < (int)local_7c8) {
      lVar16 = 0;
      do {
        ppppuVar4 = local_7d0[lVar16];
        if ((int)uStack_190 != local_164) {
          uVar31 = *(uint *)(plVar20[0x32] + (longlong)(int)*(uint *)(ppppuVar4 + 0x44) * 4);
          puVar12 = local_158;
          if (local_158 == (undefined1 *)0x0) {
            puVar12 = local_160;
          }
          iVar23 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & uVar31) * 4);
          while (iVar23 != -1) {
            lVar35 = local_198 + (longlong)iVar23 * 0x10;
            if (*(uint *)(local_198 + (longlong)iVar23 * 0x10) == uVar31) goto LAB_143b66525;
            iVar23 = *(int *)(lVar35 + 8);
          }
        }
        lVar35 = 0;
LAB_143b66525:
        lVar35 = (longlong)*(int *)(lVar35 + 4);
        if ((local_6a8[lVar35 * 0xc] != 0xffffffff) &&
           (local_840 = ppppuVar4, (longlong)(int)local_6a8[lVar35 * 0xc + 10] != 0)) {
          puVar36 = *(uint **)(local_6a8 + lVar35 * 0xc + 8);
          puVar30 = puVar36 + (int)local_6a8[lVar35 * 0xc + 10];
          do {
            if (local_2d8._8_4_ != local_2a4) {
              puVar12 = local_298;
              if (local_298 == (undefined1 *)0x0) {
                puVar12 = local_2a0;
              }
              iVar23 = *(int *)(puVar12 + (ulonglong)(local_290 - 1U & *puVar36) * 4);
              if (iVar23 != -1) {
                do {
                  lVar35 = local_2d8._0_8_ + (longlong)iVar23 * 0x10;
                  if (*(uint *)(local_2d8._0_8_ + (longlong)iVar23 * 0x10) == *puVar36)
                  goto LAB_143b665c9;
                  iVar23 = *(int *)(lVar35 + 8);
                } while (iVar23 != -1);
              }
            }
            lVar35 = 0;
LAB_143b665c9:
            if (param_6 == '\0') {
              dStack_578 = 0.0;
              local_570 = 0;
              local_598 = (uint ****)0x0;
              uStack_590 = (undefined4 ****)0x0;
              uStack_56c = 0x80;
              local_568 = 0xffffffff;
              uStack_564 = 0;
              dStack_558 = 0.0;
              local_550 = (double)((ulonglong)local_550 & 0xffffffff00000000);
              uStack_528 = 0;
              local_520 = 0;
              local_548 = 0.0;
              uStack_540 = 0;
              uStack_51c = 0x80;
              local_518 = 0xffffffff;
              uStack_514 = 0;
              dStack_508 = 0.0;
              local_500 = (double)((ulonglong)local_500 & 0xffffffff00000000);
              local_4f8 = CONCAT62(local_4f8._2_6_,0x101);
              local_4d0 = 0;
              local_4c8 = 0;
              uStack_4f0 = 0;
              local_4e8 = 0;
              uStack_4c4 = 0x80;
              local_4c0 = 0xffffffff;
              uStack_4bc = 0;
              local_4b0 = 0;
              local_4a8 = 0;
              uStack_480 = 0;
              uStack_47c = 0;
              local_478 = 0;
              local_4a0 = 0;
              uStack_498 = 0;
              uStack_474 = 0x80;
              local_470 = 0xffffffff;
              uStack_46c = 0;
              local_460 = 0;
              local_458 = local_458 & 0xffffffff00000000;
              local_450 = CONCAT62(local_450._2_6_,0x101);
              local_428 = 0;
              local_420 = 0;
              dStack_448 = 0.0;
              local_440 = 0.0;
              uStack_41c = 0x80;
              uStack_418 = 0xffffffff;
              uStack_414 = 0;
              uStack_408 = 0;
              local_400 = 0;
              local_3d8 = 0;
              local_3d0 = 0;
              local_3f8 = 0;
              uStack_3f0 = 0;
              uStack_3cc = 0x80;
              local_3c8 = 0xffffffff;
              local_3c4 = 0;
              local_3b8 = 0;
              uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
              local_3a8 = 0x101;
              local_380 = 0;
              local_378 = 0;
              local_3a0 = 0;
              uStack_398 = 0;
              uStack_374 = 0x80;
              local_370 = 0xffffffff;
              local_36c = 0;
              uStack_360 = 0;
              local_358 = 0;
              local_330 = 0;
              local_328 = 0;
              local_350 = 0;
              uStack_348 = 0;
              uStack_324 = 0x80;
              local_320 = 0xffffffff;
              local_31c = 0;
              local_310 = 0;
              local_308 = 0;
              local_300 = 0x101;
              local_2e8 = 0;
              uStack_2e0 = 0;
              local_2f8 = 0;
              uStack_2f0 = 0;
              local_5d8[0] = 0;
              local_5c8 = 0;
              local_618[0] = 0;
              local_618[1] = 0;
              local_608 = 0;
              local_8b8 = local_5d8;
              local_8b0 = 0;
              FUN_146bcbbdc(&local_840,
                            *(uint ***)(local_728._0_8_ + (longlong)*(int *)(lVar35 + 4) * 8),
                            &local_598,local_618);
              FUN_146bfdcfe(&local_598);
            }
            else {
              local_598 = (uint ****)&PTR_FUN_149f64a58;
              local_538 = DAT_14c846520;
              local_548 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
              uStack_540 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
              local_550 = DAT_14c8464f0;
              local_560 = DAT_14c8464e0;
              dStack_558 = DAT_14c8464e8;
              local_570 = 0;
              uStack_56c = 0;
              dStack_580 = 0.0;
              dStack_578 = 0.0;
              local_568 = 0;
              uStack_564 = 0x3ff00000;
              local_4e8 = DAT_14c846520;
              local_4f8 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
              uStack_4f0 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
              local_500 = DAT_14c8464f0;
              local_510 = DAT_14c8464e0;
              dStack_508 = DAT_14c8464e8;
              local_520 = 0;
              uStack_51c = 0;
              local_530 = 0;
              uStack_528 = 0;
              local_518 = 0;
              uStack_514 = 0x3ff00000;
              local_4e0 = 0;
              local_4d8 = 0x3eb0c6f7a0000000;
              local_4d0 = CONCAT71(local_4d0._1_7_,1);
              local_4c8 = 0;
              uStack_4c4 = 0x3ff80000;
              local_4c0 = 0;
              uStack_4bc = 0x3fe00000;
              local_4b8 = 1;
              local_4b6 = 0;
              local_4b0 = 0;
              local_4a0 = 0x3fb999999999999a;
              uStack_498 = 0x3fe0000000000000;
              local_490 = 0x101;
              local_48e = 1;
              local_48c = 0x358637bd;
              local_488 = 1;
              local_484 = 0x3c23d70a;
              uStack_480 = 0xffffffff;
              local_478 = SUB84(ppppuVar4,0);
              uStack_474 = (undefined4)((ulonglong)ppppuVar4 >> 0x20);
              local_460 = 0;
              local_470 = 0;
              uStack_46c = 0;
              uStack_468 = 0;
              local_458 = 0x3ff0000000000000;
              local_440 = DAT_14c8464f0;
              local_450 = DAT_14c8464e0;
              dStack_448 = DAT_14c8464e8;
              local_428 = DAT_14c846520;
              local_438 = (undefined4)DAT_14c846510;
              uStack_434 = DAT_14c846510._4_4_;
              uStack_430 = (undefined4)DAT_14c846518;
              uStack_42c = DAT_14c846518._4_4_;
              uStack_3f0 = 0;
              local_3e8 = 0;
              local_410 = 0;
              uStack_408 = 0;
              local_420 = 0;
              uStack_41c = 0;
              uStack_418 = 0;
              uStack_414 = 0;
              local_3e4 = 0xffffffff00000080;
              local_3dc = 0;
              local_3d0 = 0;
              uStack_3cc = 0;
              local_3c8 = 0;
              local_3c0 = 0;
              uStack_398 = 0;
              local_390 = 0;
              local_3b8 = 0;
              uStack_3b0 = 0;
              local_38c = 0xffffffff00000080;
              local_384 = 0;
              local_378 = 0;
              uStack_374 = 0;
              local_370 = 0;
              uStack_348 = 0;
              local_340 = 0;
              local_368 = 0;
              uStack_360 = 0;
              local_33c = 0xffffffff00000080;
              local_334 = 0;
              local_328 = 0;
              uStack_324 = 0;
              local_320 = 0;
              local_318 = 0x101;
              local_4b7 = 0;
              local_4a8 = CONCAT31(local_4a8._1_3_,1);
              uStack_590 = ppppuVar4;
              local_588 = *(uint ***)(local_728._0_8_ + (longlong)*(int *)(lVar35 + 4) * 8);
              FUN_146c6fae2(&local_598);
              FUN_146ec7826(&local_598);
            }
            puVar36 = puVar36 + 1;
          } while (puVar36 != puVar30);
        }
        lVar16 = lVar16 + 1;
        plVar20 = local_8a0;
      } while (lVar16 < (int)local_7c8);
    }
    FUN_148487bbe(&local_7d0,local_8a0);
    plVar20 = local_8a0;
    if ((longlong)(int)uStack_6a0 != 0) {
      puVar30 = local_6a8 + (longlong)(int)uStack_6a0 * 0xc;
      puVar36 = local_6a8;
      local_878 = puVar30;
      do {
        if ((longlong)(int)*puVar36 != -1) {
          local_870 = (int *)CONCAT44(local_870._4_4_,
                                      *(undefined4 *)(plVar20[0x76] + (longlong)(int)*puVar36 * 4));
          local_598 = (uint ****)0x0;
          uStack_590 = (undefined4 ****)0x0;
          if ((longlong)(int)puVar36[10] != 0) {
            piVar24 = *(int **)(puVar36 + 8);
            local_860 = piVar24 + (int)puVar36[10];
            local_868 = puVar36;
            do {
              lVar16 = (longlong)*(int *)(plVar20[0x76] + (longlong)*piVar24 * 4) * 0x50;
              plVar1 = (longlong *)(plVar20[0x28] + lVar16);
              lVar16 = plVar20[0x28] + lVar16;
              puVar30 = (uint *)(lVar16 + 0x10);
              iVar23 = *(int *)(lVar16 + 0x28);
              local_858 = piVar24;
              if (iVar23 == 0) {
                uVar26 = 1;
                puVar36 = (uint *)0x0;
                iVar21 = 0;
                iVar9 = 0;
              }
              else {
                puVar11 = (uint *)plVar1[4];
                if ((uint *)plVar1[4] == (uint *)0x0) {
                  puVar11 = puVar30;
                }
                uVar31 = *puVar11;
                if (uVar31 == 0) {
                  iVar9 = iVar23 + 0x1e;
                  if (-1 < iVar23 + -1) {
                    iVar9 = iVar23 + -1;
                  }
                  puVar36 = (uint *)0x0;
                  puVar18 = (uint *)(ulonglong)(uint)(iVar9 >> 5);
                  if (iVar9 >> 5 < 1) {
                    puVar18 = puVar36;
                  }
                  iVar21 = 0;
                  do {
                    if (puVar18 == puVar36) goto LAB_143b66f28;
                    iVar21 = iVar21 + 0x20;
                    uVar31 = puVar11[(longlong)puVar36 + 1];
                    puVar36 = (uint *)((longlong)puVar36 + 1);
                  } while (uVar31 == 0);
                }
                else {
                  puVar36 = (uint *)0x0;
                  iVar21 = 0;
                }
                uVar26 = (ulonglong)(-uVar31 & uVar31);
                uVar22 = uVar26 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                iVar9 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if (iVar23 <= iVar9) {
                  iVar9 = iVar23;
                }
              }
              if (iVar9 != iVar23) {
                uVar31 = 0xffffffff;
                do {
                  ppppuVar4 = uStack_590;
                  uVar19 = *(uint *)(*plVar1 + (longlong)iVar9 * 0xc);
                  lVar16 = (longlong)(int)uStack_590;
                  uVar10 = (int)uStack_590 + 1;
                  uStack_590 = (undefined4 ****)CONCAT44(uStack_590._4_4_,uVar10);
                  if (uStack_590._4_4_ < uVar10) {
                    local_898 = puVar36;
                    FUN_1446f48e2(&local_598,(ulonglong)ppppuVar4 & 0xffffffff);
                    puVar36 = local_898;
                  }
                  *(uint *)((longlong)local_598 + lVar16 * 4) = uVar19;
                  uVar31 = uVar31 & ~(uint)uVar26;
                  puVar11 = (uint *)plVar1[4];
                  if ((uint *)plVar1[4] == (uint *)0x0) {
                    puVar11 = puVar30;
                  }
                  iVar34 = (int)plVar1[5];
                  iVar9 = (int)puVar36;
                  lVar16 = (longlong)iVar9;
                  uVar19 = puVar11[lVar16] & uVar31;
                  if (uVar19 == 0) {
                    iVar13 = iVar34 + 0x1e;
                    if (-1 < iVar34 + -1) {
                      iVar13 = iVar34 + -1;
                    }
                    iVar13 = iVar13 >> 5;
                    iVar21 = iVar21 + 0x20;
                    iVar14 = iVar13;
                    if (iVar13 < iVar9) {
                      iVar14 = iVar9;
                    }
                    if (iVar9 < iVar13) {
                      lVar35 = 0;
                      do {
                        uVar19 = (puVar11 + lVar16 + 1)[lVar35];
                        if (uVar19 != 0) {
                          puVar36 = (uint *)(ulonglong)(iVar9 + (int)lVar35 + 1);
                          uVar31 = 0xffffffff;
                          goto LAB_143b6702d;
                        }
                        iVar21 = iVar21 + 0x20;
                        lVar35 = lVar35 + 1;
                      } while (iVar14 - lVar16 != lVar35);
                      uVar31 = 0xffffffff;
                      iVar9 = iVar14;
                    }
                    puVar36 = (uint *)(ulonglong)(iVar9 + 1);
                    iVar9 = iVar34;
                  }
                  else {
LAB_143b6702d:
                    uVar26 = (ulonglong)(-uVar19 & uVar19);
                    uVar22 = uVar26 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar22 != 0) {
                      for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    iVar9 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                    if (iVar34 <= iVar9) {
                      iVar9 = iVar34;
                    }
                  }
                } while (iVar9 != iVar23);
              }
LAB_143b66f28:
              puVar36 = local_868;
              puVar30 = local_878;
              piVar24 = local_858 + 1;
              plVar20 = local_8a0;
            } while (piVar24 != local_860);
            if ((int)uStack_590 != 0) {
              FUN_146eb9b25(local_8a0,(ulonglong)local_870 & 0xffffffff,&local_598);
              plVar20 = local_8a0;
            }
          }
          if (local_598 != (uint ****)0x0) {
            FUN_1400020a8();
            plVar20 = local_8a0;
          }
        }
        puVar36 = puVar36 + 0xc;
      } while (puVar36 != puVar30);
    }
    (**(code **)(*plVar20 + 0x28))(plVar20,&DAT_14c9974a8,&local_6c8,0x100);
    local_290 = 0;
    if (local_298 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_2d8._8_4_ = 0;
    if (iStack_2cc != 0) {
      FUN_14472eb64(local_2d8,0);
    }
    uStack_2a8 = 0xffffffff;
    local_2a4 = 0;
    local_2b0 = 0;
    if (0x80 < local_2ac) {
      local_2ac = 0x80;
      FUN_1446efbd8(local_2c8,0);
    }
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8._0_8_ != 0) {
      FUN_1400020a8();
    }
    FUN_148499b58(&local_7d0);
    FUN_148499b58(local_728);
    if (local_6d8 != (uint ****)0x0) {
      FUN_1400020a8();
    }
    if (local_6c8 != (undefined4 ****)0x0) {
      FUN_1400020a8();
    }
    local_240 = 0;
    if (local_248 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140aee53c(&local_288);
    local_1f0 = 0;
    if (local_1f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar26 = uStack_230 >> 0x20;
    uStack_230 = uStack_230 & 0xffffffff00000000;
    if ((int)uVar26 != 0) {
      FUN_1447a08a2(&local_238,0);
    }
    uStack_208 = 0xffffffff;
    local_204 = 0;
    local_210 = 0;
    if (0x80 < local_20c) {
      local_20c = 0x80;
      FUN_1446efbd8(local_228,0);
    }
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    local_1a0 = 0;
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    uVar26 = uStack_1e0 >> 0x20;
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    if ((int)uVar26 != 0) {
      FUN_1447a08a2(&local_1e8,0);
    }
    uStack_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1c0 = 0;
    if (0x80 < local_1bc) {
      local_1bc = 0x80;
      FUN_1446efbd8(local_1d8,0);
    }
    if (local_1c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    FUN_143b6aeea(local_6a8,uStack_6a0 & 0xffffffff);
    if (local_6a8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_150 = 0;
    if (local_158 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar26 = uStack_190 >> 0x20;
    uStack_190 = uStack_190 & 0xffffffff00000000;
    if ((int)uVar26 != 0) {
      FUN_14472eb64(&local_198,0);
    }
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_170 = 0;
    if (0x80 < local_16c) {
      local_16c = 0x80;
      FUN_1446efbd8(local_188,0);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    local_100 = 0;
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146e2d074(&local_148);
  }
  if (local_690 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar10 = puVar36[4], uVar10 != 0xffffffff) {
LAB_143b6744e:
    puVar36 = (uint *)(local_148 + (longlong)(int)uVar10 * 0x18);
    if (*puVar36 == uVar19) goto LAB_143b67467;
  }
LAB_143b67465:
  puVar36 = (uint *)0x0;
LAB_143b67467:
  dVar5 = *(double *)(puVar36 + 2);
  goto LAB_143b678f0;
  while (uVar10 = puVar30[8], uVar10 != 0xffffffff) {
LAB_143b673ad:
    puVar30 = (uint *)(local_288 + (longlong)(int)uVar10 * 0x28);
    if (*puVar30 == (uint)local_840) {
      if ((puVar30 != (uint *)0x0) &&
         ((undefined1 (*) [16])(puVar30 + 2) != (undefined1 (*) [16])0x0)) {
        local_2c8[0] = *(double *)(puVar30 + 6);
        _local_2d8 = *(undefined1 (*) [16])(puVar30 + 2);
        goto LAB_143b6764e;
      }
      break;
    }
  }
LAB_143b67471:
  local_880 = lVar16;
  FUN_146eba115(&local_598,local_850,local_848,*(undefined4 *)(local_8a0[0x76] + lVar35 * 4));
  lVar16 = local_8a0[0x7a];
  lVar35 = lVar35 * 0x38;
  dVar5 = (*(double *)(lVar16 + lVar35) + *(double *)(lVar16 + 0x18 + lVar35)) * 0.5 * dStack_558;
  dVar6 = (*(double *)(lVar16 + 8 + lVar35) + *(double *)(lVar16 + 0x20 + lVar35)) * 0.5 * local_550
  ;
  dVar37 = (*(double *)(lVar16 + 0x10 + lVar35) + *(double *)(lVar16 + 0x28 + lVar35)) * 0.5 *
           local_548;
  dVar38 = dVar6 * (double)local_598 - dVar5 * (double)uStack_590;
  dVar39 = dVar37 * (double)uStack_590 - dVar6 * (double)local_588;
  dVar40 = dVar5 * (double)local_588 - (double)local_598 * dVar37;
  dVar39 = dVar39 + dVar39;
  dVar40 = dVar40 + dVar40;
  dVar38 = dVar38 + dVar38;
  dVar6 = ((double)local_588 * dVar39 - (double)local_598 * dVar38) + dStack_580 * dVar40 + dVar6 +
          (double)CONCAT44(uStack_56c,local_570);
  local_2c8[0] = dVar38 * dStack_580 + dVar37 +
                 (dVar40 * (double)local_598 - dVar39 * (double)uStack_590) +
                 (double)CONCAT44(uStack_564,local_568);
  local_2d8._8_4_ = SUB84(dVar6,0);
  local_2d8._0_8_ =
       (dVar38 * (double)uStack_590 - dVar40 * (double)local_588) + dStack_580 * dVar39 + dVar5 +
       dStack_578;
  iStack_2cc = (int)((ulonglong)dVar6 >> 0x20);
  local_728._8_8_ = local_2d8;
  local_728._0_8_ = &local_6c8;
  FUN_1484a6baa(&local_288,&local_7d0,local_728,0);
  lVar16 = local_880;
LAB_143b6764e:
  puVar30 = local_898;
  local_6d8 = (uint ****)CONCAT44(local_6d8._4_4_,uVar19);
  if ((int)uStack_280 != local_254) {
    puVar12 = local_248;
    if (local_248 == (undefined1 *)0x0) {
      puVar12 = local_250;
    }
    uVar10 = *(uint *)(puVar12 + (ulonglong)(local_240 - 1U & uVar19) * 4);
    while (uVar10 != 0xffffffff) {
      puVar36 = (uint *)(local_288 + (longlong)(int)uVar10 * 0x28);
      if (*puVar36 == uVar19) {
        if ((puVar36 != (uint *)0x0) &&
           ((undefined1 (*) [16])(puVar36 + 2) != (undefined1 (*) [16])0x0)) {
          local_718 = *(double *)(puVar36 + 6);
          local_728 = *(undefined1 (*) [16])(puVar36 + 2);
          goto LAB_143b67898;
        }
        break;
      }
      uVar10 = puVar36[8];
    }
  }
  local_880 = lVar16;
  FUN_146eba115(&local_598,local_850,local_848,*(undefined4 *)(local_8a0[0x76] + lVar16 * 4));
  lVar16 = local_8a0[0x7a];
  lVar35 = local_880 * 0x38;
  dVar5 = (*(double *)(lVar16 + lVar35) + *(double *)(lVar16 + 0x18 + lVar35)) * 0.5 * dStack_558;
  dVar6 = (*(double *)(lVar16 + 8 + lVar35) + *(double *)(lVar16 + 0x20 + lVar35)) * 0.5 * local_550
  ;
  dVar37 = (*(double *)(lVar16 + 0x10 + lVar35) + *(double *)(lVar16 + 0x28 + lVar35)) * 0.5 *
           local_548;
  dVar40 = dVar6 * (double)local_598 - dVar5 * (double)uStack_590;
  dVar39 = dVar37 * (double)uStack_590 - dVar6 * (double)local_588;
  dVar38 = dVar5 * (double)local_588 - (double)local_598 * dVar37;
  dVar39 = dVar39 + dVar39;
  dVar38 = dVar38 + dVar38;
  dVar40 = dVar40 + dVar40;
  dVar6 = ((double)local_588 * dVar39 - (double)local_598 * dVar40) + dStack_580 * dVar38 + dVar6 +
          (double)CONCAT44(uStack_56c,local_570);
  local_718 = dVar40 * dStack_580 + dVar37 +
              (dVar38 * (double)local_598 - dVar39 * (double)uStack_590) +
              (double)CONCAT44(uStack_564,local_568);
  local_728._8_4_ = SUB84(dVar6,0);
  local_728._0_8_ =
       (dVar40 * (double)uStack_590 - dVar38 * (double)local_588) + dStack_580 * dVar39 + dVar5 +
       dStack_578;
  local_728._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_7d0 = &local_6d8;
  local_7c8 = local_728;
  FUN_1484a6baa(&local_288,&local_6c8,&local_7d0,0);
LAB_143b67898:
  dVar5 = 1.0 / ((local_2c8[0] - local_718) * (local_2c8[0] - local_718) +
                 ((double)local_2d8._0_8_ - (double)local_728._0_8_) *
                 ((double)local_2d8._0_8_ - (double)local_728._0_8_) +
                 (stack0xfffffffffffffd30 - (double)local_728._8_8_) *
                 (stack0xfffffffffffffd30 - (double)local_728._8_8_) + 1e-08);
LAB_143b678f0:
  if (dVar3 < dVar5) {
    dVar3 = dVar5;
    local_6ac = uVar19;
  }
LAB_143b67903:
  uVar2 = uStack_6a0;
  puVar36 = local_6a8;
  uVar19 = local_6ac;
  iVar23 = local_884;
  uVar31 = uVar31 & ~(uint)uVar22;
  puVar11 = (uint *)plVar20[4];
  if ((uint *)plVar20[4] == (uint *)0x0) {
    puVar11 = puVar30;
  }
  iVar13 = (int)plVar20[5];
  iVar21 = (int)uVar27;
  lVar16 = (longlong)iVar21;
  uVar10 = puVar11[lVar16] & uVar31;
  if (uVar10 == 0) {
    iVar14 = iVar13 + 0x1e;
    if (-1 < iVar13 + -1) {
      iVar14 = iVar13 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar34 = iVar34 + 0x20;
    iVar15 = iVar14;
    if (iVar14 < iVar21) {
      iVar15 = iVar21;
    }
    if (iVar21 < iVar14) {
      lVar35 = 0;
      do {
        uVar10 = puVar11[lVar16 + lVar35 + 1];
        if (uVar10 != 0) {
          uVar27 = (ulonglong)(iVar21 + (int)lVar35 + 1);
          uVar31 = 0xffffffff;
          goto LAB_143b67976;
        }
        iVar34 = iVar34 + 0x20;
        lVar35 = lVar35 + 1;
      } while (iVar15 - lVar16 != lVar35);
      uVar31 = 0xffffffff;
      iVar21 = iVar15;
    }
    uVar27 = (ulonglong)(iVar21 + 1);
    puVar30 = local_898;
    iVar21 = iVar13;
  }
  else {
LAB_143b67976:
    uVar22 = (ulonglong)(-uVar10 & uVar10);
    uVar26 = uVar22 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar21 = (iVar34 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar21) {
      iVar21 = iVar13;
    }
  }
  if (iVar21 == iVar9) goto LAB_143b679bc;
  goto LAB_143b672c2;
LAB_143b679bc:
  uVar26 = local_890;
  if (local_6ac != 0xffffffff) {
    if (local_870 == (int *)0x0) {
      if ((int)uStack_190 != local_164) {
        puVar12 = local_158;
        if (local_158 == (undefined1 *)0x0) {
          puVar12 = local_160;
        }
        iVar9 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & local_6ac) * 4);
        while (iVar9 != -1) {
          lVar16 = local_198 + (longlong)iVar9 * 0x10;
          if (*(uint *)(local_198 + (longlong)iVar9 * 0x10) == local_6ac) {
            if ((int *)(lVar16 + 4) != (int *)0x0 && lVar16 != 0) {
              local_728._0_4_ = *(int *)(lVar16 + 4);
              uVar31 = (uint)local_840;
              if ((int)uStack_140 == local_114) goto LAB_143b680a1;
              puVar12 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar12 = local_110;
              }
              uVar19 = *(uint *)(puVar12 + (ulonglong)(local_100 - 1U & (uint)local_840) * 4);
              if (uVar19 == 0xffffffff) goto LAB_143b680a1;
              goto LAB_143b6808a;
            }
            break;
          }
          iVar9 = *(int *)(lVar16 + 8);
        }
      }
      iVar23 = (int)uStack_6a0;
      uVar31 = (int)uStack_6a0 + 1;
      uStack_6a0 = CONCAT44(uStack_6a0._4_4_,uVar31);
      if (uStack_6a0._4_4_ < uVar31) {
        FUN_143b6af1a(&local_6a8,uVar2 & 0xffffffff);
      }
      puVar36 = local_6a8;
      uVar19 = local_6ac;
      lVar16 = (longlong)iVar23;
      uVar31 = (uint)local_840;
      puVar30 = local_6a8 + lVar16 * 0xc;
      puVar11 = puVar30 + 8;
      *puVar30 = 0xffffffff;
      puVar30[2] = 0;
      puVar30[3] = 0;
      puVar30[4] = 0;
      puVar30[5] = 0;
      *(undefined1 *)(puVar30 + 6) = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar30[10] = 0;
      puVar30[0xb] = 0;
      puVar30[10] = 1;
      FUN_1446f48e2(puVar11,0);
      **(uint **)puVar11 = uVar31;
      if ((int)uStack_140 != local_114) {
        puVar12 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar12 = local_110;
        }
        uVar10 = *(uint *)(puVar12 + (ulonglong)(local_100 - 1U & uVar19) * 4);
        while (uVar10 != 0xffffffff) {
          puVar30 = (uint *)(local_148 + (longlong)(int)uVar10 * 0x18);
          if (*puVar30 == uVar19) goto LAB_143b67ce4;
          uVar10 = puVar30[4];
        }
      }
      puVar30 = (uint *)0x0;
LAB_143b67ce4:
      puVar18 = puVar36 + lVar16 * 0xc;
      dVar3 = *(double *)(puVar30 + 2);
      if (dVar3 < param_4) {
        uVar10 = puVar18[10];
        puVar18[10] = uVar10 + 1;
        if (puVar18[0xb] < uVar10 + 1) {
          FUN_1446f48e2(puVar11,uVar10);
        }
        *(uint *)(*(longlong *)(puVar18 + 8) + (longlong)(int)uVar10 * 4) = uVar19;
        *(undefined1 *)(puVar18 + 6) = 1;
      }
      uVar26 = local_890;
      *(double *)(puVar36 + lVar16 * 0xc + 2) = dVar3;
      if ((int)uStack_140 == local_114) {
        puVar30 = (uint *)0x0;
      }
      else {
        puVar12 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar12 = local_110;
        }
        uVar10 = *(uint *)(puVar12 + (ulonglong)(local_100 - 1U & uVar31) * 4);
        while (uVar10 != 0xffffffff) {
          puVar30 = (uint *)(local_148 + (longlong)(int)uVar10 * 0x18);
          if (*puVar30 == uVar31) goto LAB_143b67d92;
          uVar10 = puVar30[4];
        }
        puVar30 = (uint *)0x0;
      }
LAB_143b67d92:
      *(double *)(puVar18 + 4) = dVar3 + *(double *)(puVar30 + 2);
      *puVar18 = uVar19;
      local_728._0_4_ = iVar23;
      local_598 = (uint ****)&local_840;
      uStack_590 = (undefined4 ****)local_728;
      FUN_140263e2a(&local_198,local_2d8,&local_598,0);
      local_598 = (uint ****)&local_6ac;
      uStack_590 = (undefined4 ****)local_728;
      FUN_140263e2a(&local_198,local_2d8,&local_598,0);
      iVar23 = local_884;
    }
    else {
      local_728._0_4_ = *local_870;
      lVar16 = (longlong)(int)local_728._0_4_;
      if ((int)uStack_190 != local_164) {
        puVar12 = local_158;
        if (local_158 == (undefined1 *)0x0) {
          puVar12 = local_160;
        }
        iVar9 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & local_6ac) * 4);
        if (iVar9 != -1) {
LAB_143b67a33:
          lVar35 = local_198 + (longlong)iVar9 * 0x10;
          if (*(uint *)(local_198 + (longlong)iVar9 * 0x10) != local_6ac) goto code_r0x000143b67a48;
          if ((int *)(lVar35 + 4) == (int *)0x0 || lVar35 == 0) goto LAB_143b67ae1;
          iVar9 = *(int *)(lVar35 + 4);
          if (local_728._0_4_ == iVar9) goto LAB_143b67e1f;
          local_898 = local_6a8;
          if ((longlong)(int)local_6a8[lVar16 * 0xc + 10] != 0) {
            puVar18 = *(uint **)(local_6a8 + lVar16 * 0xc + 8);
            puVar11 = puVar18 + (int)local_6a8[lVar16 * 0xc + 10];
            puVar30 = local_6a8 + (longlong)iVar9 * 0xc + 8;
            do {
              uVar31 = *puVar18;
              uVar19 = puVar36[(longlong)iVar9 * 0xc + 10];
              uVar10 = uVar19 + 1;
              puVar36[(longlong)iVar9 * 0xc + 10] = uVar10;
              if (puVar36[(longlong)iVar9 * 0xc + 0xb] < uVar10) {
                FUN_1446f48e2();
              }
              *(uint *)(*(longlong *)puVar30 + (longlong)(int)uVar19 * 4) = uVar31;
              if ((int)uStack_190 == local_164) {
                lVar35 = 0;
              }
              else {
                puVar12 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar12 = local_160;
                }
                iVar23 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & uVar31) * 4);
                while (iVar23 != -1) {
                  lVar35 = local_198 + (longlong)iVar23 * 0x10;
                  if (*(uint *)(local_198 + (longlong)iVar23 * 0x10) == uVar31) goto LAB_143b67fca;
                  iVar23 = *(int *)(lVar35 + 8);
                }
                lVar35 = 0;
              }
LAB_143b67fca:
              *(int *)(lVar35 + 4) = iVar9;
              puVar18 = puVar18 + 1;
            } while (puVar18 != puVar11);
          }
          puVar11 = local_898;
          puVar30 = local_898 + lVar16 * 0xc;
          if ((char)puVar30[6] == '\0') {
            uVar31 = puVar36[(longlong)iVar9 * 0xc + 10];
            uVar19 = uVar31 + 1;
            puVar36[(longlong)iVar9 * 0xc + 10] = uVar19;
            if (puVar36[(longlong)iVar9 * 0xc + 0xb] < uVar19) {
              FUN_1446f48e2(puVar36 + (longlong)iVar9 * 0xc + 8);
            }
            uVar19 = *puVar30;
            *(uint *)(*(longlong *)(puVar36 + (longlong)iVar9 * 0xc + 8) + (longlong)(int)uVar31 * 4
                     ) = uVar19;
            if ((int)uStack_190 == local_164) {
              lVar35 = 0;
            }
            else {
              puVar12 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar12 = local_160;
              }
              iVar23 = *(int *)(puVar12 + (ulonglong)(local_150 - 1U & uVar19) * 4);
              while (iVar23 != -1) {
                lVar35 = local_198 + (longlong)iVar23 * 0x10;
                if (*(uint *)(local_198 + (longlong)iVar23 * 0x10) == uVar19) goto LAB_143b6819d;
                iVar23 = *(int *)(lVar35 + 8);
              }
              lVar35 = 0;
            }
LAB_143b6819d:
            *(int *)(lVar35 + 4) = iVar9;
          }
          uVar26 = local_890;
          *(double *)(puVar36 + (longlong)iVar9 * 0xc + 4) =
               *(double *)(puVar30 + 4) + *(double *)(puVar36 + (longlong)iVar9 * 0xc + 4);
          *puVar30 = 0xffffffff;
          puVar30[2] = 0;
          puVar30[3] = 0;
          puVar30[4] = 0;
          puVar30[5] = 0;
          *(undefined1 *)(puVar30 + 6) = 0;
          if (*(longlong *)(puVar30 + 8) != 0) {
            FUN_1400020a8();
          }
          puVar30 = puVar11 + lVar16 * 0xc + 8;
          puVar30[0] = 0;
          puVar30[1] = 0;
          puVar11 = puVar11 + lVar16 * 0xc + 10;
          puVar11[0] = 0;
          puVar11[1] = 0;
          iVar23 = local_884;
          goto LAB_143b67e1f;
        }
      }
LAB_143b67ae1:
      if ((int)uStack_140 != local_114) {
        puVar12 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar12 = local_110;
        }
        uVar31 = *(uint *)(puVar12 + (ulonglong)(local_100 - 1U & local_6ac) * 4);
        while (uVar31 != 0xffffffff) {
          puVar30 = (uint *)(local_148 + (longlong)(int)uVar31 * 0x18);
          if (*puVar30 == local_6ac) goto LAB_143b67b3c;
          uVar31 = puVar30[4];
        }
      }
      puVar30 = (uint *)0x0;
LAB_143b67b3c:
      puVar36 = local_6a8 + lVar16 * 0xc;
      dVar3 = *(double *)(puVar30 + 2);
      *(double *)(puVar36 + 4) = *(double *)(puVar36 + 4) + dVar3;
      if (((char)puVar36[6] == '\x01') &&
         (*(double *)(puVar36 + 2) <= dVar3 && dVar3 != *(double *)(puVar36 + 2))) {
        *puVar36 = local_6ac;
        *(double *)(puVar36 + 2) = dVar3;
      }
      if (param_4 <= dVar3) {
        *(undefined1 *)(puVar36 + 6) = 0;
      }
      else {
        uVar31 = puVar36[10];
        puVar36[10] = uVar31 + 1;
        if (puVar36[0xb] < uVar31 + 1) {
          FUN_1446f48e2(puVar36 + 8,uVar31);
        }
        *(uint *)(*(longlong *)(puVar36 + 8) + (longlong)(int)uVar31 * 4) = uVar19;
      }
      uVar26 = local_890;
      local_598 = (uint ****)&local_6ac;
      uStack_590 = (undefined4 ****)local_728;
      FUN_140263e2a(&local_198,local_2d8,&local_598,0);
    }
  }
LAB_143b67e1f:
  piVar24 = local_858;
  piVar32 = local_860;
  uVar19 = local_1c0;
  uVar10 = (uint)local_868;
LAB_143b67e40:
  uVar10 = uVar10 & ~(uint)piVar32;
  puVar30 = local_1c8;
  if (local_1c8 == (uint *)0x0) {
    puVar30 = local_1d8;
  }
  iVar9 = (int)piVar24;
  lVar16 = (longlong)iVar9;
  uVar31 = puVar30[lVar16] & uVar10;
  if (uVar31 == 0) {
    iVar21 = uVar19 + 0x1e;
    if (-1 < (int)(uVar19 - 1)) {
      iVar21 = uVar19 - 1;
    }
    iVar21 = iVar21 >> 5;
    iVar23 = iVar23 + 0x20;
    iVar34 = iVar21;
    if (iVar21 < iVar9) {
      iVar34 = iVar9;
    }
    if (iVar9 < iVar21) {
      lVar35 = 0;
      do {
        uVar31 = puVar30[lVar16 + lVar35 + 1];
        if (uVar31 != 0) {
          piVar24 = (int *)(ulonglong)(iVar9 + (int)lVar35 + 1);
          uVar10 = 0xffffffff;
          goto LAB_143b67ebd;
        }
        iVar23 = iVar23 + 0x20;
        lVar35 = lVar35 + 1;
      } while (iVar34 - lVar16 != lVar35);
      uVar10 = 0xffffffff;
      lVar16 = (longlong)iVar34;
    }
    piVar24 = (int *)(lVar16 + 1U & 0xffffffff);
    uVar26 = local_890;
    uVar31 = uVar19;
  }
  else {
LAB_143b67ebd:
    piVar32 = (int *)(ulonglong)(-uVar31 & uVar31);
    uVar22 = (longlong)piVar32 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar31 = (iVar23 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar31) {
      uVar31 = uVar19;
    }
  }
  if (uVar31 == (uint)uVar26) goto LAB_143b661a2;
  goto LAB_143b6711d;
  while (uVar19 = puVar30[4], uVar19 != 0xffffffff) {
LAB_143b6808a:
    puVar30 = (uint *)(local_148 + (longlong)(int)uVar19 * 0x18);
    if (*puVar30 == (uint)local_840) goto LAB_143b680a3;
  }
LAB_143b680a1:
  puVar30 = (uint *)0x0;
LAB_143b680a3:
  puVar36 = local_6a8 + (longlong)(int)local_728._0_4_ * 0xc;
  dVar3 = *(double *)(puVar30 + 2);
  *(double *)(puVar36 + 4) = *(double *)(puVar36 + 4) + dVar3;
  if (((char)puVar36[6] == '\x01') &&
     (*(double *)(puVar36 + 2) <= dVar3 && dVar3 != *(double *)(puVar36 + 2))) {
    *puVar36 = (uint)local_840;
    *(double *)(puVar36 + 2) = dVar3;
  }
  uVar19 = puVar36[10];
  puVar36[10] = uVar19 + 1;
  if (puVar36[0xb] < uVar19 + 1) {
    FUN_1446f48e2(puVar36 + 8,uVar19);
  }
  *(uint *)(*(longlong *)(puVar36 + 8) + (longlong)(int)uVar19 * 4) = uVar31;
  local_598 = (uint ****)&local_840;
  uStack_590 = (undefined4 ****)local_728;
  FUN_140263e2a(&local_198,local_2d8,&local_598,0);
  uVar26 = local_890;
  goto LAB_143b67e1f;
code_r0x000143b67a48:
  iVar9 = *(int *)(lVar35 + 8);
  if (iVar9 == -1) goto LAB_143b67ae1;
  goto LAB_143b67a33;
}



// FUNCTION 143b682f8 FUN_143b682f8 body=532 status=ok
// SIG undefined FUN_143b682f8(void)

double FUN_143b682f8(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  
  lVar6 = (longlong)param_3;
  if (*(int *)(*(longlong *)(param_1 + 0x1b0) + lVar6 * 4) == 1) {
    dVar17 = *(double *)(*param_2 + lVar6 * 8);
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x140) + lVar6 * 0x50);
    lVar6 = *(longlong *)(param_1 + 0x140) + lVar6 * 0x50;
    puVar15 = (uint *)(lVar6 + 0x10);
    iVar3 = *(int *)(lVar6 + 0x28);
    if (iVar3 == 0) {
      uVar14 = 1;
      uVar16 = 0;
      iVar8 = 0;
      iVar11 = 0;
    }
    else {
      puVar12 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar12 = puVar15;
      }
      uVar13 = *puVar12;
      if (uVar13 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        uVar16 = 0;
        uVar14 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar14 = uVar16;
        }
        iVar8 = 0;
        do {
          if (uVar14 == uVar16) {
            return 0.0;
          }
          iVar8 = iVar8 + 0x20;
          uVar13 = puVar12[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar16 = 0;
        iVar8 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar14 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar11 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar11) {
        iVar11 = iVar3;
      }
    }
    dVar17 = 0.0;
    if (iVar11 != iVar3) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      iVar9 = iVar9 >> 5;
      if ((uint *)plVar1[4] != (uint *)0x0) {
        puVar15 = (uint *)plVar1[4];
      }
      lVar6 = *plVar1;
      uVar13 = 0xffffffff;
      do {
        dVar18 = (double)FUN_143b682f8(dVar17,param_2,
                                       *(undefined4 *)(lVar6 + (longlong)iVar11 * 0xc));
        dVar17 = dVar18 + dVar17;
        uVar13 = ~(uint)uVar14 & uVar13;
        iVar11 = (int)uVar16;
        lVar7 = (longlong)iVar11;
        uVar4 = puVar15[lVar7] & uVar13;
        if (uVar4 == 0) {
          iVar5 = iVar9;
          if (iVar9 < iVar11) {
            iVar5 = iVar11;
          }
          if (iVar9 <= iVar11) {
            return dVar17;
          }
          lVar10 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar4 = puVar15[lVar7 + lVar10 + 1];
            if (uVar4 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar5 - lVar7 == lVar10) {
              return dVar17;
            }
          }
          uVar16 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar14 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar3);
    }
  }
  return dVar17;
}



// FUNCTION 143b6850c FUN_143b6850c body=768 status=ok
// SIG undefined FUN_143b6850c(void)

double * FUN_143b6850c(double *param_1,longlong param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  double *pdVar3;
  undefined4 *puVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  char local_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar16 = (longlong)*(int *)(*(longlong *)(param_2 + 400) + (longlong)param_4 * 4);
  if (lVar16 != -1) {
    lVar19 = *param_3;
    lVar16 = lVar16 * 0x38;
    param_1[6] = *(double *)(lVar19 + 0x30 + lVar16);
    dVar24 = *(double *)(lVar19 + lVar16);
    dVar6 = ((double *)(lVar19 + lVar16))[1];
    pdVar3 = (double *)(lVar19 + 0x10 + lVar16);
    dVar7 = *pdVar3;
    dVar8 = pdVar3[1];
    puVar4 = (undefined4 *)(lVar19 + 0x20 + lVar16);
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    *(undefined4 *)(param_1 + 4) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 5) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
    param_1[2] = dVar7;
    param_1[3] = dVar8;
    *param_1 = dVar24;
    param_1[1] = dVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar16 = (longlong)param_4 * 0x50;
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x140) + lVar16);
  lVar16 = *(longlong *)(param_2 + 0x140) + lVar16;
  puVar20 = (uint *)(lVar16 + 0x10);
  uVar5 = *(uint *)(lVar16 + 0x28);
  if (uVar5 == 0) {
    uVar21 = 1;
    uVar23 = 0;
    iVar17 = 0;
    uVar12 = 0;
  }
  else {
    puVar13 = (uint *)plVar1[4];
    if ((uint *)plVar1[4] == (uint *)0x0) {
      puVar13 = puVar20;
    }
    uVar12 = *puVar13;
    if (uVar12 == 0) {
      iVar17 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar17 = uVar5 - 1;
      }
      uVar23 = 0;
      uVar21 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar21 = uVar23;
      }
      iVar17 = 0;
      do {
        if (uVar21 == uVar23) goto LAB_143b68639;
        iVar17 = iVar17 + 0x20;
        uVar12 = puVar13[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar23 = 0;
      iVar17 = 0;
    }
    uVar21 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar21 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar12 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
  }
  if (uVar12 != uVar5) {
    uVar18 = 0xffffffff;
    local_90 = (ulonglong)uVar5;
    local_88 = param_2;
    do {
      FUN_143b6850c(&local_80,local_88,param_3,
                    *(undefined4 *)(*plVar1 + (longlong)(int)uVar12 * 0xc));
      if (local_50 == '\0' || *(char *)(param_1 + 6) == '\0') {
        if (local_50 != '\0') {
          param_1[6] = (double)CONCAT71(uStack_4f,local_50);
          param_1[4] = local_60;
          param_1[5] = dStack_58;
          param_1[2] = local_70;
          param_1[3] = dStack_68;
          *param_1 = local_80;
          param_1[1] = dStack_78;
        }
      }
      else {
        dVar24 = *param_1;
        if (local_80 <= *param_1) {
          dVar24 = local_80;
        }
        *param_1 = dVar24;
        dVar24 = param_1[1];
        if (dStack_78 <= param_1[1]) {
          dVar24 = dStack_78;
        }
        param_1[1] = dVar24;
        dVar24 = param_1[2];
        if (local_70 <= param_1[2]) {
          dVar24 = local_70;
        }
        param_1[2] = dVar24;
        dVar24 = param_1[3];
        if (param_1[3] <= dStack_68) {
          dVar24 = dStack_68;
        }
        param_1[3] = dVar24;
        dVar24 = param_1[4];
        if (param_1[4] <= local_60) {
          dVar24 = local_60;
        }
        param_1[4] = dVar24;
        dVar24 = param_1[5];
        if (param_1[5] <= dStack_58) {
          dVar24 = dStack_58;
        }
        param_1[5] = dVar24;
      }
      uVar18 = uVar18 & ~(uint)uVar21;
      puVar13 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar13 = puVar20;
      }
      uVar5 = *(uint *)(plVar1 + 5);
      iVar22 = (int)uVar23;
      lVar16 = (longlong)iVar22;
      uVar12 = puVar13[lVar16] & uVar18;
      if (uVar12 == 0) {
        iVar14 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar14 = uVar5 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar22) {
          iVar15 = iVar22;
        }
        if (iVar22 < iVar14) {
          lVar19 = 0;
          do {
            uVar12 = puVar13[lVar16 + lVar19 + 1];
            if (uVar12 != 0) {
              uVar23 = (ulonglong)(iVar22 + (int)lVar19 + 1);
              uVar18 = 0xffffffff;
              goto LAB_143b687b1;
            }
            iVar17 = iVar17 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar15 - lVar16 != lVar19);
          uVar18 = 0xffffffff;
          iVar22 = iVar15;
        }
        uVar23 = (ulonglong)(iVar22 + 1);
        uVar12 = uVar5;
      }
      else {
LAB_143b687b1:
        uVar21 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar12 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar12) {
          uVar12 = uVar5;
        }
      }
    } while (uVar12 != (uint)local_90);
  }
LAB_143b68639:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b68812 FUN_143b68812 body=529 status=ok
// SIG undefined FUN_143b68812(void)

void FUN_143b68812(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_2;
  local_4c = param_3;
  if (*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)param_3 * 4) != 0) {
    uVar14 = 0;
    FUN_1447cbafe(param_2,local_50,&local_4c,0);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)local_4c * 0x50);
    lVar12 = *(longlong *)(param_1 + 0x140) + (longlong)local_4c * 0x50;
    puVar16 = (uint *)(lVar12 + 0x10);
    iVar3 = *(int *)(lVar12 + 0x28);
    if (iVar3 == 0) {
      uVar15 = 1;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar6 = puVar16;
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar10 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_143b68911;
          iVar10 = iVar10 + 0x20;
          uVar7 = puVar6[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar14 = 0;
        iVar10 = 0;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 != iVar3) {
      uVar7 = 0xffffffff;
      do {
        FUN_143b68812(param_1,local_58,*(undefined4 *)(*plVar1 + (longlong)iVar5 * 0xc));
        uVar7 = ~(uint)uVar15 & uVar7;
        puVar6 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar6 = puVar16;
        }
        iVar4 = (int)plVar1[5];
        iVar5 = (int)uVar14;
        lVar12 = (longlong)iVar5;
        uVar11 = puVar6[lVar12] & uVar7;
        if (uVar11 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar13 = 0;
            do {
              uVar11 = puVar6[lVar12 + lVar13 + 1];
              if (uVar11 != 0) {
                uVar14 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143b689d1;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar9 - lVar12 != lVar13);
            uVar7 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar14 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar4;
        }
        else {
LAB_143b689d1:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar5) {
            iVar5 = iVar4;
          }
        }
      } while (iVar5 != iVar3);
    }
  }
LAB_143b68911:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b68a24 FUN_143b68a24 body=325 status=ok
// SIG undefined FUN_143b68a24(void)

void FUN_143b68a24(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143b68a8e;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_143b68a8e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 143b68b6a FUN_143b68b6a body=363 status=ok
// SIG undefined FUN_143b68b6a(void)

void FUN_143b68b6a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b68c00;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143b68c00:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 143b68d6e FUN_143b68d6e body=871 status=ok
// SIG undefined FUN_143b68d6e(void)

undefined8
FUN_143b68d6e(uint param_1,uint param_2,undefined4 *param_3,int *param_4,longlong param_5,
             undefined4 *param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar6 = (ulonglong)param_2;
  if (0 < (int)param_2) {
    piVar4 = param_4 + 5;
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8];
      piVar4[-5] = iVar9;
      iVar9 = param_6[uVar8 + 1] - iVar9;
      piVar4[-4] = iVar9;
      if (iVar9 < 0) {
        *(undefined4 *)(param_7 + 0xc) = 0xfffffff8;
        *(int *)(param_7 + 0x10) = (int)uVar8;
        *(int *)(param_7 + 0x14) = piVar4[-4];
        return 0;
      }
      uVar8 = uVar8 + 1;
      piVar4[-3] = 1;
      piVar4[-2] = 0;
      piVar4[-1] = -1;
      piVar4[0] = -1;
      piVar4 = piVar4 + 6;
    } while (uVar6 != uVar8);
  }
  *(undefined4 *)(param_7 + 0x18) = 0;
  if (0 < (int)param_1) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)param_3 + lVar5 + 4) = 0;
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0xffffffff;
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if ((int)param_2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8 + 1];
      if ((int)param_6[uVar8] < iVar9) {
        piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
        iVar7 = -1;
        do {
          iVar2 = *piVar4;
          lVar5 = (longlong)iVar2;
          uVar3 = (undefined4)uVar8;
          if ((lVar5 < 0) || ((int)param_1 <= iVar2)) {
            *(undefined4 *)(param_7 + 0xc) = 0xfffffff7;
            *(undefined4 *)(param_7 + 0x10) = uVar3;
            *(int *)(param_7 + 0x14) = iVar2;
            *(uint *)(param_7 + 0x18) = param_1;
            return 0;
          }
          if ((iVar2 <= iVar7) ||
             (uVar10 = (ulonglong)(uint)param_3[lVar5 * 4 + 3], uVar8 == uVar10)) {
            *(undefined4 *)(param_7 + 0xc) = 1;
            *(undefined4 *)(param_7 + 0x10) = uVar3;
            *(int *)(param_7 + 0x14) = iVar2;
            *(int *)(param_7 + 0x18) = *(int *)(param_7 + 0x18) + 1;
            uVar10 = (ulonglong)(uint)param_3[lVar5 * 4 + 3];
          }
          piVar1 = param_4 + uVar8 * 6;
          if (uVar10 != uVar8) {
            piVar1 = param_3 + lVar5 * 4;
          }
          piVar4 = piVar4 + 1;
          piVar1[1] = piVar1[1] + (uint)(uVar10 != uVar8) * 2 + -1;
          param_3[lVar5 * 4 + 3] = uVar3;
          iVar7 = iVar2;
        } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  uVar3 = param_6[uVar6];
  *param_3 = uVar3;
  param_3[2] = uVar3;
  param_3[3] = 0xffffffff;
  if (1 < (int)param_1) {
    lVar5 = 0x10;
    do {
      iVar9 = *(int *)((longlong)param_3 + lVar5 + -0xc) +
              *(int *)((longlong)param_3 + lVar5 + -0x10);
      *(int *)((longlong)param_3 + lVar5) = iVar9;
      *(int *)((longlong)param_3 + lVar5 + 8) = iVar9;
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0xffffffff;
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if (*(int *)(param_7 + 0xc) == 1) {
    if (0 < (int)param_2) {
      uVar8 = 0;
      do {
        iVar9 = param_6[uVar8 + 1];
        if ((int)param_6[uVar8] < iVar9) {
          piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
          do {
            lVar5 = (longlong)*piVar4;
            if (uVar8 != (uint)param_3[lVar5 * 4 + 3]) {
              iVar7 = param_3[lVar5 * 4 + 2];
              param_3[lVar5 * 4 + 2] = iVar7 + 1;
              *(int *)(param_5 + (longlong)iVar7 * 4) = (int)uVar8;
              param_3[lVar5 * 4 + 3] = (int)uVar8;
            }
            piVar4 = piVar4 + 1;
          } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  else if (0 < (int)param_2) {
    uVar8 = 0;
    do {
      iVar9 = param_6[uVar8 + 1];
      if ((int)param_6[uVar8] < iVar9) {
        piVar4 = (int *)(param_5 + (longlong)(int)param_6[uVar8] * 4);
        do {
          iVar7 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar2 = param_3[(longlong)iVar7 * 4 + 2];
          param_3[(longlong)iVar7 * 4 + 2] = iVar2 + 1;
          *(int *)(param_5 + (longlong)iVar2 * 4) = (int)uVar8;
        } while (piVar4 < (int *)(param_5 + (longlong)iVar9 * 4));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  if (0 < (int)param_1) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)param_3 + lVar5 + 0xc) = 0;
      *(undefined4 *)((longlong)param_3 + lVar5 + 8) =
           *(undefined4 *)((longlong)param_3 + lVar5 + 4);
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar5);
  }
  if (*(int *)(param_7 + 0xc) == 1) {
    *param_4 = 0;
    *param_6 = 0;
    if (1 < (int)param_2) {
      uVar8 = 1;
      do {
        piVar4 = param_4 + 1;
        iVar9 = *param_4;
        param_4[6] = *piVar4 + iVar9;
        param_4 = param_4 + 6;
        param_6[uVar8] = *piVar4 + iVar9;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    if (0 < (int)param_1) {
      uVar6 = 0;
      do {
        if (0 < (longlong)(int)param_3[uVar6 * 4 + 1]) {
          piVar4 = (int *)(param_5 + (longlong)(int)param_3[uVar6 * 4] * 4);
          piVar1 = piVar4 + (int)param_3[uVar6 * 4 + 1];
          do {
            iVar9 = *piVar4;
            piVar4 = piVar4 + 1;
            iVar7 = param_6[iVar9];
            param_6[iVar9] = iVar7 + 1;
            *(int *)(param_5 + (longlong)iVar7 * 4) = (int)uVar6;
          } while (piVar4 < piVar1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_1);
    }
  }
  return 1;
}



// FUNCTION 143b690d5 FUN_143b690d5 body=727 status=ok
// SIG undefined FUN_143b690d5(void)

void FUN_143b690d5(uint param_1,ulonglong param_2,longlong param_3,longlong param_4,longlong param_5
                  ,undefined4 *param_6,double *param_7,uint *param_8,undefined4 *param_9,
                  int *param_10)

{
  undefined4 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  int local_48;
  uint local_44;
  
  iVar6 = (int)param_2;
  iVar11 = (int)((double)iVar6 * *param_7);
  if (iVar6 < (int)((double)iVar6 * *param_7)) {
    iVar11 = iVar6;
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  uVar13 = (int)((double)(int)param_1 * param_7[1]);
  if ((int)param_1 < (int)((double)(int)param_1 * param_7[1])) {
    uVar13 = param_1;
  }
  local_48 = 0;
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  uVar16 = param_2 & 0xffffffff;
  uVar9 = 0;
  if (0 < iVar6) {
    uVar3 = uVar16 + 1;
    puVar10 = (uint *)(param_4 + uVar16 * 0x18 + -0xc);
    uVar9 = param_2 & 0xffffffff;
    do {
      if (puVar10[-2] == 0) {
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar7;
        *puVar10 = uVar7;
        puVar10[-3] = 0xffffffff;
      }
      uVar3 = uVar3 - 1;
      puVar10 = puVar10 + -6;
      uVar5 = uVar16;
    } while (1 < uVar3);
    do {
      uVar3 = uVar5 - 1;
      lVar17 = (longlong)*(int *)(param_4 + uVar3 * 0x18);
      if (-1 < lVar17) {
        puVar1 = (undefined4 *)(param_4 + uVar3 * 0x18);
        if ((int)uVar13 < (int)puVar1[1]) {
          uVar7 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar7;
          puVar1[3] = uVar7;
          piVar18 = (int *)(lVar17 * 4 + param_5);
          piVar4 = piVar18 + (uint)puVar1[1];
          do {
            iVar15 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar12 = (int *)(param_3 + 8 + (longlong)iVar15 * 0x10);
            *piVar12 = *piVar12 + -1;
          } while (piVar18 < piVar4);
          *puVar1 = 0xffffffff;
        }
      }
      bVar2 = 1 < (longlong)uVar5;
      uVar5 = uVar3;
    } while (bVar2);
  }
  uVar8 = (undefined4)uVar9;
  local_44 = 0;
  if (0 < (int)param_1) {
    lVar17 = 0;
    local_48 = 0;
    local_44 = param_1;
    do {
      iVar15 = *(int *)(param_3 + 8 + lVar17);
      if (iVar11 < iVar15 || iVar15 == 0) {
        *(undefined4 *)(param_3 + 0xc + lVar17) = 0xffffffff;
        local_44 = local_44 - 1;
      }
      else if (local_48 <= iVar15) {
        local_48 = iVar15;
      }
      lVar17 = lVar17 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar17);
  }
  uVar3 = uVar16;
  if (iVar6 < 1) {
    *param_6 = 0xffffffff;
  }
  else {
    do {
      uVar5 = uVar3 - 1;
      lVar17 = (longlong)*(int *)(param_4 + uVar5 * 0x18);
      if (-1 < lVar17) {
        puVar10 = (uint *)(param_4 + uVar5 * 0x18);
        piVar4 = (int *)(param_5 + lVar17 * 4);
        piVar18 = piVar4 + (int)puVar10[1];
        uVar14 = 0;
        piVar12 = piVar4;
        while (piVar12 < piVar18) {
          iVar11 = *piVar12;
          piVar12 = piVar12 + 1;
          lVar17 = (longlong)iVar11 * 0x10;
          if (-1 < *(int *)(param_3 + 0xc + lVar17)) {
            *piVar4 = iVar11;
            piVar4 = piVar4 + 1;
            uVar13 = ((uint)uVar14 + *(int *)(lVar17 + param_3 + 8)) - 1;
            uVar14 = (ulonglong)uVar13;
            if (iVar6 < (int)uVar13) {
              uVar14 = param_2 & 0xffffffff;
            }
          }
        }
        uVar13 = (uint)((longlong)piVar4 - (param_5 + (ulonglong)*puVar10 * 4) >> 2);
        if (uVar13 == 0) {
          uVar13 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar13;
          puVar10[3] = uVar13;
          *puVar10 = 0xffffffff;
        }
        else {
          puVar10[1] = uVar13;
          puVar10[3] = (uint)uVar14;
        }
      }
      uVar8 = (undefined4)uVar9;
      bVar2 = 1 < (longlong)uVar3;
      uVar3 = uVar5;
    } while (bVar2);
    memset(param_6,(int)CONCAT71((int7)(param_2 >> 8),0xff),uVar16 * 4 + 4);
    piVar4 = (int *)(param_4 + uVar16 * 0x18 + -4);
    do {
      if (-1 < piVar4[-5]) {
        iVar11 = piVar4[-2];
        iVar6 = param_6[iVar11];
        piVar4[-1] = -1;
        *piVar4 = iVar6;
        if ((longlong)iVar6 == -1) {
          iVar15 = (int)(uVar16 - 1);
        }
        else {
          iVar15 = (int)uVar16 + -1;
          *(int *)(param_4 + 0x10 + (longlong)iVar6 * 0x18) = iVar15;
        }
        param_6[iVar11] = iVar15;
      }
      piVar4 = piVar4 + -6;
      bVar2 = 1 < uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar2);
  }
  *param_9 = uVar8;
  *param_8 = local_44;
  *param_10 = local_48;
  return;
}



// FUNCTION 143b693ac FUN_143b693ac body=2245 status=ok
// SIG undefined FUN_143b693ac(void)

int FUN_143b693ac(uint param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                 uint *param_6,longlong param_7,int param_8,int param_9,int param_10)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uint *puVar28;
  int *piVar29;
  uint *puVar30;
  int local_c8;
  int local_c4;
  uint local_bc;
  uint *local_b0;
  ulonglong local_88;
  
  if (0 < (int)param_1) {
    lVar12 = 0;
    do {
      if (-1 < *(int *)(param_4 + 0xc + lVar12)) {
        *(undefined4 *)(param_4 + 0xc + lVar12) = 0;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulonglong)param_1 << 4 != lVar12);
  }
  if (param_8 < 1) {
    iVar16 = 0;
  }
  else {
    uVar7 = (ulonglong)param_2;
    lVar12 = (ulonglong)param_1 << 4;
    iVar25 = 1;
    iVar16 = 0;
    uVar24 = 0;
    local_88 = 0;
    do {
      if ((int)local_88 < (int)param_2) {
        uVar8 = (ulonglong)(int)local_88;
        do {
          local_88 = uVar8;
          if (*(int *)(param_7 + uVar8 * 4) != -1) break;
          uVar8 = uVar8 + 1;
          local_88 = uVar7;
        } while (uVar7 != uVar8);
      }
      lVar9 = (longlong)*(int *)(param_7 + (longlong)(int)local_88 * 4);
      iVar6 = *(int *)(param_5 + 0x14 + lVar9 * 0x18);
      *(int *)(param_7 + (longlong)(int)local_88 * 4) = iVar6;
      if ((longlong)iVar6 != -1) {
        *(undefined4 *)(param_5 + 0x10 + (longlong)iVar6 * 0x18) = 0xffffffff;
      }
      piVar18 = (int *)(lVar9 * 0x18 + param_5);
      iVar6 = piVar18[2];
      iVar11 = piVar18[3];
      piVar18[3] = uVar24;
      uVar24 = uVar24 + iVar6;
      iVar15 = param_2 - uVar24;
      if (iVar11 <= (int)(param_2 - uVar24)) {
        iVar15 = iVar11;
      }
      if (param_3 <= iVar15 + param_10) {
        puVar10 = param_6;
        if (0 < (int)param_2) {
          uVar8 = 0;
          do {
            uVar4 = *(uint *)(param_5 + uVar8 * 0x18);
            if (-1 < (int)uVar4) {
              puVar19 = (uint *)(uVar8 * 0x18 + param_5);
              uVar27 = (ulonglong)((longlong)puVar10 - (longlong)param_6) >> 2;
              *puVar19 = (uint)uVar27;
              uVar17 = puVar19[1];
              if (0 < (int)uVar17) {
                lVar9 = 0;
                do {
                  if (-1 < *(int *)(param_4 + 0xc +
                                   (longlong)(int)param_6[(ulonglong)uVar4 + lVar9] * 0x10)) {
                    *puVar10 = param_6[(ulonglong)uVar4 + lVar9];
                    puVar10 = puVar10 + 1;
                  }
                  lVar9 = lVar9 + 1;
                } while (uVar17 != (uint)lVar9);
                uVar27 = (ulonglong)*puVar19;
              }
              puVar19[1] = (uint)((ulonglong)((longlong)puVar10 - (longlong)(param_6 + uVar27)) >> 2
                                 );
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar7);
        }
        if (0 < (int)param_1) {
          uVar4 = 0xffffffff;
          lVar9 = 0;
          do {
            if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
              if (*(int *)(param_4 + 4 + lVar9) == 0) {
                *(undefined4 *)(param_4 + 0xc + lVar9) = 0xffffffff;
              }
              else {
                *(uint *)(param_4 + 0xc + lVar9) = param_6[*(int *)(param_4 + lVar9)];
                param_6[*(int *)(param_4 + lVar9)] = uVar4;
              }
            }
            lVar9 = lVar9 + 0x10;
            uVar4 = uVar4 - 1;
          } while (lVar12 != lVar9);
        }
        puVar19 = puVar10;
        while (puVar10 < param_6 + param_10) {
          if ((int)*puVar10 < 0) {
            lVar9 = (ulonglong)~*puVar10 * 0x10;
            *puVar10 = *(uint *)(param_4 + 0xc + lVar9);
            uVar8 = (ulonglong)((longlong)puVar19 - (longlong)param_6) >> 2;
            *(int *)(param_4 + lVar9) = (int)uVar8;
            iVar25 = *(int *)(param_4 + 4 + lVar9);
            if (0 < iVar25) {
              do {
                if (-1 < *(int *)(param_5 + (longlong)(int)*puVar10 * 0x18)) {
                  *puVar19 = *puVar10;
                  puVar19 = puVar19 + 1;
                }
                puVar10 = puVar10 + 1;
                iVar25 = iVar25 + -1;
              } while (iVar25 != 0);
              uVar8 = (ulonglong)*(uint *)(param_4 + lVar9);
            }
            ((uint *)(param_4 + lVar9))[1] =
                 (uint)((ulonglong)((longlong)puVar19 - (longlong)(param_6 + uVar8)) >> 2);
          }
          else {
            puVar10 = puVar10 + 1;
          }
        }
        param_10 = (int)((ulonglong)((longlong)puVar19 - (longlong)param_6) >> 2);
        iVar16 = iVar16 + 1;
        iVar25 = 1;
        if (0 < (int)param_1) {
          lVar9 = 0;
          do {
            if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
              *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
            }
            lVar9 = lVar9 + 0x10;
          } while (lVar12 != lVar9);
        }
      }
      piVar18[2] = -iVar6;
      puVar10 = param_6 + *piVar18;
      puVar19 = puVar10 + piVar18[1];
      local_c8 = 0;
      local_c4 = param_10;
      while (puVar10 < puVar19) {
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        if (-1 < *(int *)(param_4 + 0xc + (longlong)(int)uVar4 * 0x10)) {
          piVar23 = (int *)((longlong)(int)uVar4 * 0x10 + param_4);
          lVar9 = (longlong)piVar23[1];
          if (0 < lVar9) {
            puVar21 = param_6 + *piVar23;
            puVar1 = puVar21 + lVar9;
            do {
              uVar4 = *puVar21;
              iVar11 = *(int *)(param_5 + 8 + (longlong)(int)uVar4 * 0x18);
              if ((0 < iVar11) &&
                 (piVar23 = (int *)((longlong)(int)uVar4 * 0x18 + param_5), -1 < *piVar23)) {
                piVar23[2] = -iVar11;
                lVar9 = (longlong)local_c4;
                local_c4 = local_c4 + 1;
                param_6[lVar9] = uVar4;
                local_c8 = local_c8 + iVar11;
              }
              puVar21 = puVar21 + 1;
            } while (puVar21 < puVar1);
          }
        }
      }
      piVar18[2] = iVar6;
      if (param_9 <= local_c8) {
        param_9 = local_c8;
      }
      if (0 < (longlong)piVar18[1]) {
        puVar10 = param_6 + *piVar18;
        puVar19 = puVar10 + piVar18[1];
        do {
          uVar4 = *puVar10;
          puVar10 = puVar10 + 1;
          *(undefined4 *)(param_4 + 0xc + (longlong)(int)uVar4 * 0x10) = 0xffffffff;
        } while (puVar10 < puVar19);
      }
      uVar4 = local_c4 - param_10;
      if (uVar4 == 0 || local_c4 < param_10) {
        local_b0 = param_6 + param_10;
        puVar10 = local_b0 + (int)uVar4;
        local_bc = 0xffffffff;
      }
      else {
        local_bc = param_6[*piVar18];
        local_b0 = param_6 + param_10;
        puVar10 = local_b0 + uVar4;
        puVar19 = local_b0;
        do {
          piVar23 = (int *)((longlong)(int)*puVar19 * 0x18 + param_5);
          iVar6 = piVar23[2];
          iVar11 = piVar23[5];
          piVar23[2] = -iVar6;
          iVar15 = piVar23[4];
          if ((longlong)iVar15 == -1) {
            piVar29 = (int *)(param_7 + (longlong)piVar23[3] * 4);
          }
          else {
            piVar29 = (int *)((longlong)iVar15 * 0x18 + 0x14 + param_5);
          }
          *piVar29 = iVar11;
          if (iVar11 != -1) {
            *(int *)(param_5 + 0x10 + (longlong)iVar11 * 0x18) = iVar15;
          }
          if (0 < (longlong)piVar23[1]) {
            puVar21 = param_6 + *piVar23;
            puVar1 = puVar21 + piVar23[1];
            do {
              iVar11 = *(int *)(param_4 + 0xc + (longlong)(int)*puVar21 * 0x10);
              if (-1 < iVar11) {
                lVar9 = (longlong)(int)*puVar21 * 0x10 + param_4;
                iVar11 = iVar11 - iVar25;
                if (iVar11 < 0) {
                  iVar11 = *(int *)(lVar9 + 8);
                }
                iVar11 = iVar11 + iVar6;
                *(uint *)(lVar9 + 0xc) = -(uint)(iVar11 == 0) | iVar11 + iVar25;
              }
              puVar21 = puVar21 + 1;
            } while (puVar21 < puVar1);
          }
          puVar19 = puVar19 + 1;
          puVar21 = local_b0;
        } while (puVar19 < puVar10);
        do {
          uVar4 = *puVar21;
          puVar30 = (uint *)((longlong)(int)uVar4 * 0x18 + param_5);
          puVar19 = param_6 + (int)*puVar30;
          puVar1 = puVar19 + (int)puVar30[1];
          uVar5 = 0;
          puVar28 = puVar19;
          uVar17 = 0;
          while (puVar19 < puVar1) {
            uVar26 = *puVar19;
            puVar19 = puVar19 + 1;
            iVar6 = *(int *)(param_4 + 0xc + (longlong)(int)uVar26 * 0x10);
            if (-1 < iVar6) {
              *puVar28 = uVar26;
              puVar28 = puVar28 + 1;
              uVar5 = uVar5 + uVar26;
              uVar17 = (uVar17 - iVar25) + iVar6;
              if ((int)param_2 < (int)uVar17) {
                uVar17 = param_2;
              }
            }
          }
          uVar26 = (uint)((ulonglong)((longlong)puVar28 - (longlong)(param_6 + *puVar30)) >> 2);
          puVar30[1] = uVar26;
          if (uVar26 == 0) {
            *puVar30 = 0xffffffff;
            local_c8 = local_c8 - puVar30[2];
            puVar30[3] = uVar24;
            uVar24 = uVar24 + puVar30[2];
          }
          else {
            puVar30[3] = uVar17;
            uVar8 = (ulonglong)uVar5 % (ulonglong)(param_2 + 1);
            iVar6 = *(int *)(param_7 + uVar8 * 4);
            lVar9 = (longlong)iVar6;
            if (lVar9 < 0) {
              uVar17 = -iVar6 - 2;
              *(uint *)(param_7 + uVar8 * 4) = -2 - uVar4;
            }
            else {
              uVar17 = *(uint *)(param_5 + 0x10 + lVar9 * 0x18);
              *(uint *)(param_5 + 0x10 + lVar9 * 0x18) = uVar4;
            }
            puVar30[5] = uVar17;
            puVar30[4] = (uint)uVar8;
          }
          puVar21 = puVar21 + 1;
          puVar19 = local_b0;
        } while (puVar21 < puVar10);
        do {
          if (-1 < *(int *)(param_5 + (longlong)(int)*puVar19 * 0x18)) {
            lVar9 = (longlong)*(int *)((longlong)(int)*puVar19 * 0x18 + param_5 + 0x10);
            iVar6 = *(int *)(param_7 + lVar9 * 4);
            lVar13 = (longlong)iVar6;
            if (lVar13 < 0) {
              iVar11 = -2 - iVar6;
            }
            else {
              iVar11 = *(int *)(param_5 + 0x10 + lVar13 * 0x18);
            }
            while (iVar11 != -1) {
              iVar15 = *(int *)(param_5 + 0x14 + (longlong)iVar11 * 0x18);
              if (iVar15 == -1) break;
              piVar23 = (int *)((longlong)iVar11 * 0x18 + param_5);
              iVar2 = piVar23[1];
              iVar3 = iVar11;
              do {
                piVar29 = (int *)((longlong)iVar15 * 0x18 + param_5);
                iVar22 = iVar15;
                if ((piVar29[1] == iVar2) && (piVar29[3] == piVar23[3])) {
                  if (iVar2 < 1) {
                    lVar14 = 0;
LAB_143b69a44:
                    if ((int)lVar14 != iVar2) goto LAB_143b69a72;
                  }
                  else {
                    lVar14 = 0;
                    do {
                      if (param_6[*piVar23 + lVar14] != param_6[*piVar29 + lVar14])
                      goto LAB_143b69a44;
                      lVar14 = lVar14 + 1;
                    } while (iVar2 != (int)lVar14);
                  }
                  piVar23[2] = piVar23[2] + piVar29[2];
                  piVar29[2] = iVar11;
                  *piVar29 = -2;
                  piVar29[3] = -1;
                  *(int *)(param_5 + 0x14 + (longlong)iVar3 * 0x18) = piVar29[5];
                  iVar22 = iVar3;
                }
LAB_143b69a72:
                iVar15 = piVar29[5];
                iVar3 = iVar22;
              } while (iVar15 != -1);
              iVar11 = piVar23[5];
            }
            puVar20 = (undefined4 *)(param_5 + 0x10 + lVar13 * 0x18);
            if (iVar6 < 0) {
              puVar20 = (undefined4 *)(param_7 + lVar9 * 4);
            }
            *puVar20 = 0xffffffff;
          }
          puVar19 = puVar19 + 1;
        } while (puVar19 < puVar10);
      }
      iVar6 = param_9 + iVar25 + 1;
      iVar25 = 1;
      if (iVar6 < (int)(param_2 ^ 0x7fffffff)) {
        iVar25 = iVar6;
      }
      *piVar18 = -1;
      puVar19 = local_b0;
      puVar21 = local_b0;
      if ((0 < (int)param_1) && ((int)(param_2 ^ 0x7fffffff) <= iVar6)) {
        lVar9 = 0;
        do {
          if (-1 < *(int *)(param_4 + 0xc + lVar9)) {
            *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar12 != lVar9);
        iVar25 = 1;
      }
      while (puVar21 < puVar10) {
        uVar4 = *puVar21;
        puVar21 = puVar21 + 1;
        if (-1 < *(int *)(param_5 + (longlong)(int)uVar4 * 0x18)) {
          piVar18 = (int *)((longlong)(int)uVar4 * 0x18 + param_5);
          *puVar19 = uVar4;
          iVar6 = piVar18[1];
          piVar18[1] = iVar6 + 1;
          param_6[(longlong)*piVar18 + (longlong)iVar6] = local_bc;
          uVar5 = param_2 - (uVar24 + piVar18[2]);
          uVar17 = (piVar18[3] + local_c8) - piVar18[2];
          if ((int)uVar5 < (int)uVar17) {
            uVar17 = uVar5;
          }
          piVar18[3] = uVar17;
          iVar6 = *(int *)(param_7 + (longlong)(int)uVar17 * 4);
          piVar18[5] = iVar6;
          piVar18[4] = -1;
          if ((longlong)iVar6 != -1) {
            *(uint *)(param_5 + 0x10 + (longlong)iVar6 * 0x18) = uVar4;
          }
          puVar19 = puVar19 + 1;
          *(uint *)(param_7 + (longlong)(int)uVar17 * 4) = uVar4;
          iVar6 = (int)local_88;
          local_88 = local_88 & 0xffffffff;
          if ((int)uVar17 < iVar6) {
            local_88 = (ulonglong)uVar17;
          }
        }
      }
      if (0 < local_c8) {
        lVar9 = (longlong)(int)local_bc * 0x10;
        *(int *)(param_4 + lVar9) = param_10;
        *(int *)(param_4 + 4 + lVar9) =
             (int)((ulonglong)((longlong)puVar19 - (longlong)local_b0) >> 2);
        *(int *)(param_4 + 8 + lVar9) = local_c8;
        *(undefined4 *)(param_4 + 0xc + lVar9) = 0;
      }
      param_10 = local_c4;
    } while ((int)uVar24 < param_8);
  }
  return iVar16;
}



// FUNCTION 143b69c71 FUN_143b69c71 body=140 status=ok
// SIG undefined FUN_143b69c71(void)

void FUN_143b69c71(uint param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (0 < (int)param_1) {
    uVar3 = 0;
    do {
      if ((*(int *)(param_2 + uVar3 * 0x18) != -1) && (*(int *)(param_2 + uVar3 * 0x18 + 0xc) == -1)
         ) {
        uVar5 = uVar3 & 0xffffffff;
        do {
          uVar2 = *(uint *)(param_2 + 8 + (longlong)(int)uVar5 * 0x18);
          uVar5 = (ulonglong)(int)uVar2;
        } while (*(int *)(param_2 + uVar5 * 0x18) != -1);
        lVar1 = param_2 + uVar5 * 0x18;
        iVar6 = *(int *)(lVar1 + 0xc);
        uVar5 = uVar3 & 0xffffffff;
        do {
          *(int *)(param_2 + 0xc + (longlong)(int)uVar5 * 0x18) = iVar6;
          iVar6 = iVar6 + 1;
          *(uint *)(param_2 + 8 + (longlong)(int)uVar5 * 0x18) = uVar2;
          uVar5 = (ulonglong)uVar2;
        } while (*(int *)(lVar1 + 0xc) == -1);
        *(int *)(lVar1 + 0xc) = iVar6;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
    piVar4 = (int *)(param_2 + 0xc);
    uVar3 = 0;
    do {
      *(int *)(param_3 + (longlong)*piVar4 * 4) = (int)uVar3;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 6;
    } while (param_1 != uVar3);
  }
  return;
}



// FUNCTION 143b69cfe FUN_143b69cfe body=82 status=ok
// SIG undefined FUN_143b69cfe(void)

void FUN_143b69cfe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar5 = (longlong)*param_2 * 0x10;
  lVar1 = *param_1 + lVar5;
  lVar4 = *(longlong *)(lVar2 + 0x38);
  if (*(longlong *)(*param_1 + 8 + lVar5) != lVar4) {
    FUN_146dddaba(lVar1,lVar4,1);
  }
  FUN_1484a2196(lVar2,lVar3 + lVar5,lVar1);
  return;
}



// FUNCTION 143b69e9a FUN_143b69e9a body=43 status=ok
// SIG undefined FUN_143b69e9a(void)

void FUN_143b69e9a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143b69ec6 FUN_143b69ec6 body=243 status=ok
// SIG undefined FUN_143b69ec6(void)

void FUN_143b69ec6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 143b69fba FUN_143b69fba body=346 status=ok
// SIG undefined FUN_143b69fba(void)

void FUN_143b69fba(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b6a04c;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143b6a04c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143b6a114 FUN_143b6a114 body=1452 status=ok
// SIG undefined FUN_143b6a114(void)

void FUN_143b6a114(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_194;
  longlong local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined1 local_170 [40];
  longlong local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f0 = (longlong)*param_2;
  local_1f8 = *param_1;
  lVar10 = local_1f0 * 0x220 + *(longlong *)param_1[2];
  lVar9 = *(longlong *)(param_1[3] + 8);
  lVar15 = *(longlong *)(param_1[3] + 0x28);
  lVar14 = local_1f0 * 0x10;
  lVar5 = local_1f0 * 0x20;
  local_1b8 = *(double *)(lVar9 + 0x10 + lVar5);
  fVar16 = (float)local_1b8;
  local_1c8 = *(double *)(lVar9 + lVar5);
  dStack_1c0 = *(double *)(lVar9 + 8 + lVar5);
  fVar17 = (float)dStack_1c0;
  fVar18 = (float)local_1c8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x3ff0000000000000;
  local_f0 = *(double *)(lVar9 + 0x18 + lVar5);
  local_e0 = local_1b8 * local_f0;
  local_e8 = dStack_1c0 * local_f0;
  local_f0 = local_f0 * local_1c8;
  local_128 = DAT_14c8463c8;
  local_138 = (undefined4)DAT_14c8463b8;
  uStack_134 = DAT_14c8463b8._4_4_;
  uStack_130 = (undefined4)DAT_14c8463c0;
  uStack_12c = DAT_14c8463c0._4_4_;
  local_200 = param_1;
  FUN_146bfb7f2(&local_d8,&local_138);
  local_128 = DAT_14c8464f0;
  local_138 = (undefined4)DAT_14c8464e0;
  uStack_134 = DAT_14c8464e0._4_4_;
  uStack_130 = (undefined4)DAT_14c8464e8;
  uStack_12c = DAT_14c8464e8._4_4_;
  local_114 = DAT_14c846330;
  local_10c = DAT_14c846338;
  local_108 = DAT_14c84635c;
  local_fe = 0;
  local_100 = 0x101;
  local_148 = 0;
  uStack_140 = 0;
  lVar9 = (longlong)*(int *)(lVar15 + 8 + lVar14);
  local_120 = fVar18;
  local_11c = fVar17;
  local_118 = fVar16;
  if (lVar9 != 0) {
    lVar15 = *(longlong *)(lVar15 + lVar14);
    lVar5 = 0;
    do {
      lVar14 = (longlong)*(int *)(lVar15 + lVar5);
      puVar1 = (undefined4 *)(*(longlong *)(local_200[3] + 0x38) + lVar14 * 0x18);
      local_138 = *puVar1;
      uStack_134 = puVar1[1];
      uStack_130 = puVar1[2];
      uStack_12c = puVar1[3];
      local_128 = *(undefined8 *)(*(longlong *)(local_200[3] + 0x38) + 0x10 + lVar14 * 0x18);
      FUN_146bca7ae(&local_f0,&local_1c8,&local_138,2);
      uVar6 = uStack_140;
      fVar19 = (float)dStack_1c0;
      fVar20 = (float)local_1c8;
      lVar14 = (longlong)(int)uStack_140;
      uVar3 = (int)uStack_140 + 1;
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar3);
      if (uStack_140._4_4_ < uVar3) {
        FUN_140752556(&local_148,uVar6 & 0xffffffff);
      }
      *(float *)(local_148 + lVar14 * 8) = fVar20;
      *(float *)(local_148 + 4 + lVar14 * 8) = fVar19;
      FUN_146c02208(lVar10,&local_138);
      lVar5 = lVar5 + 4;
    } while (lVar9 * 4 != lVar5);
  }
  FUN_148267944(local_170,&local_148);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0.0;
  uStack_1b0 = 0;
  local_1c8 = 0.0;
  dStack_1c0 = 0.0;
  local_198 = 1;
  local_196 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0xffffffff;
  local_194 = 1;
  FUN_1482671ac(&local_1c8,local_170);
  FUN_1482671f8(&local_1c8);
  if ((uint)uStack_188 == 0) {
    FUN_146bd0da9(&local_148,&local_190,0);
  }
  lVar9 = local_190;
  if (0 < (int)(uint)uStack_188) {
    uVar3 = (uint)local_1f0;
    uVar6 = (ulonglong)(uint)uStack_188;
    lVar15 = 0;
    do {
      dStack_1e0 = (double)CONCAT44(dStack_1e0._4_4_,*(undefined4 *)(lVar9 + 8 + lVar15));
      local_1e8 = *(double *)(lVar9 + lVar15);
      iVar4 = FUN_146c01152(lVar10,&local_1e8,0);
      if (-1 < iVar4) {
        local_b4 = ~uVar3;
        FUN_146bedf4e(*(longlong *)(*(longlong *)(lVar10 + 0x208) + 0x48) + 0x18,&local_b4);
      }
      lVar15 = lVar15 + 0xc;
    } while (uVar6 * 0xc != lVar15);
    FUN_14848aaee(lVar10,local_200[5]);
    lVar9 = FUN_146bce3f6(*(undefined8 *)(lVar10 + 0x208));
    uVar7 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
    uVar3 = 0;
    if ((uVar7 != 0) &&
       (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
      uVar12 = 1;
      uVar8 = 1;
      if (1 < (int)uVar7) {
        uVar12 = uVar7;
      }
      do {
        uVar3 = uVar12;
        if (uVar12 == uVar8) break;
        uVar11 = uVar8 >> 9;
        uVar13 = uVar8 & 0x1ff;
        uVar3 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar11] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_143b6a5dc:
    if (uVar3 != uVar7) {
      lVar15 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      local_1d8 = (double)*(undefined8 *)(lVar15 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      pdVar2 = (double *)(lVar15 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
      local_1e8 = *pdVar2;
      dStack_1e0 = pdVar2[1];
      lVar15 = 0;
      do {
        uVar12 = uVar3 * 3 + (int)lVar15;
        *(double *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)(uVar12 >> 9) * 8) +
         (ulonglong)(uVar12 & 0x1ff) * 8) = (&local_1e8)[lVar15];
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      uVar12 = uVar3 + 1;
      if ((int)(uVar3 + 1) < (int)uVar7) {
        uVar12 = uVar7;
      }
      uVar8 = uVar3;
      do {
        uVar3 = uVar12;
        if (uVar12 - 1 == uVar8) break;
        uVar3 = uVar8 + 1;
        uVar8 = uVar3;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x28) +
                                             (ulonglong)(uVar3 >> 9) * 8) +
                                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
      goto LAB_143b6a5dc;
    }
    local_1d8 = (double)fVar16;
    dStack_1e0 = (double)fVar17;
    local_1e8 = (double)fVar18;
    local_208 = 0;
    FUN_14848b0a4(local_1f8,lVar10,&local_1e8,local_200[3] + 0x54);
    FUN_146c38c5e(lVar10,0);
  }
  FUN_1482678f8(&local_1c8);
  FUN_148267a08(local_170);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6a6c1 FUN_143b6a6c1 body=54 status=ok
// SIG undefined FUN_143b6a6c1(void)

void FUN_143b6a6c1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_143b6a6f7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143b6a6f7 FUN_143b6a6f7 body=47 status=ok
// SIG undefined FUN_143b6a6f7(void)

void FUN_143b6a6f7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143b6a726 FUN_143b6a726 body=243 status=ok
// SIG undefined FUN_143b6a726(void)

void FUN_143b6a726(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 143b6a81a FUN_143b6a81a body=363 status=ok
// SIG undefined FUN_143b6a81a(void)

void FUN_143b6a81a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b6a8b0;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143b6a8b0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 143b6aa4c FUN_143b6aa4c body=29 status=ok
// SIG undefined FUN_143b6aa4c(void)

undefined8 FUN_143b6aa4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b6aa6a FUN_143b6aa6a body=897 status=ok
// SIG undefined FUN_143b6aa6a(void)

void FUN_143b6aa6a(undefined8 *param_1,int *param_2)

{
  int iVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  int local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined2 local_1d7;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar1 = *param_2;
  lVar7 = (longlong)iVar1;
  pdVar2 = (double *)param_1[4];
  if (*(double *)(*(longlong *)param_1[2] + lVar7 * 0x30) < pdVar2[3]) {
    lVar5 = *(longlong *)param_1[2] + lVar7 * 0x30;
    if ((((*pdVar2 < *(double *)(lVar5 + 0x18)) && (*(double *)(lVar5 + 8) < pdVar2[4])) &&
        (pdVar2[1] < *(double *)(lVar5 + 0x20))) &&
       ((*(double *)(lVar5 + 0x10) < pdVar2[5] && (pdVar2[2] < *(double *)(lVar5 + 0x28))))) {
      uVar3 = *(undefined8 *)(*(longlong *)param_1[1] + lVar7 * 8);
      uVar6 = FUN_14001cc68(0x220,0x10);
      local_2c8 = 0;
      FUN_1411b354a(uVar6,0,0,0);
      puVar4 = *(undefined8 **)(*(longlong *)*param_1 + lVar7 * 8);
      *(undefined8 *)(*(longlong *)*param_1 + lVar7 * 8) = uVar6;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      local_198 = *(undefined8 *)(*(longlong *)*param_1 + lVar7 * 8);
      local_200 = (*(int *)(param_1[1] + 0x10) != iVar1) + 1;
      local_2b0 = param_1[3];
      local_2b8 = &PTR_FUN_149f64a58;
      local_268 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_260 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_258 = DAT_14c846520;
      local_280 = DAT_14c8464e0;
      uStack_278 = DAT_14c8464e8;
      local_270 = DAT_14c8464f0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      local_288 = 0x3ff0000000000000;
      local_218 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      uStack_210 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_208 = DAT_14c846520;
      local_220 = DAT_14c8464f0;
      local_230 = DAT_14c8464e0;
      uStack_228 = DAT_14c8464e8;
      local_240 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_238 = 0x3ff0000000000000;
      local_1f8 = 0x3eb0c6f7a0000000;
      local_1f0 = 1;
      local_1e8 = 0x3ff8000000000000;
      local_1e0 = 0x3fe0000000000000;
      local_1d8 = 1;
      local_1d0 = 0;
      local_1c0 = 0x3fb999999999999a;
      local_1b8 = 0x3fe0000000000000;
      local_1b0 = 0x101;
      local_1ae = 1;
      local_1ac = 0x358637bd;
      local_1a8 = 1;
      local_1a4 = 0x3c23d70a;
      local_180 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_178 = 0x3ff0000000000000;
      local_160 = DAT_14c8464f0;
      local_170 = DAT_14c8464e0;
      uStack_168 = DAT_14c8464e8;
      local_148 = DAT_14c846520;
      local_158 = (undefined4)DAT_14c846510;
      uStack_154 = DAT_14c846510._4_4_;
      uStack_150 = (undefined4)DAT_14c846518;
      uStack_14c = DAT_14c846518._4_4_;
      local_110 = 0;
      local_108 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_104 = 0xffffffff00000080;
      local_fc = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_68 = 0;
      local_60 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_37 = 1;
      local_38 = 1;
      local_1c8 = 1;
      local_1a0 = 0;
      local_1d7 = 0x100;
      local_2a8 = uVar3;
      FUN_146c6fae2(&local_2b8);
      FUN_146ec7826(&local_2b8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b6ae74 FUN_143b6ae74 body=106 status=ok
// SIG undefined FUN_143b6ae74(void)

void FUN_143b6ae74(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)param_1[1];
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8)
                   + (ulonglong)(*param_2 & 0x1ff) * 0xc);
  uVar5 = (ulonglong)(int)uVar3;
  lVar4 = *plVar2;
  uVar6 = *(uint *)(lVar4 + uVar5 * 4);
  uVar1 = uVar6;
  if (uVar6 != uVar3) {
    do {
      uVar3 = uVar1;
      uVar1 = *(uint *)(lVar4 + (longlong)(int)uVar3 * 4);
    } while (uVar1 != uVar3);
  }
  for (; uVar6 != uVar3; uVar6 = *(uint *)(lVar4 + (longlong)(int)uVar6 * 4)) {
    *(uint *)(lVar4 + (longlong)(int)uVar5 * 4) = uVar3;
    lVar4 = *plVar2;
    uVar5 = (ulonglong)uVar6;
  }
  return;
}



// FUNCTION 143b6aeea FUN_143b6aeea body=47 status=ok
// SIG undefined FUN_143b6aeea(void)

void FUN_143b6aeea(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143b6af1a FUN_143b6af1a body=265 status=ok
// SIG undefined FUN_143b6af1a(void)

void FUN_143b6af1a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 143b6b023 FUN_143b6b023 body=719 status=ok
// SIG undefined FUN_143b6b023(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6b023(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _DAT_14cb4bdd0 = 0xfe7ffffffe7fffff;
  uRam000000014cb4bdd8 = 0xfe7ffffffe7fffff;
  DAT_14cb4bde0 = 0;
  DAT_14cb4bde4 = 0;
  DAT_14cb4bde8 = 0;
  DAT_14cb4bdec = 0x3f800000;
  local_38 = "ColorAttrib";
  local_30 = 0xb;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4bdf0 = (ulonglong)uVar1;
  local_38 = "TangentUAttrib";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4bdf8 = (ulonglong)uVar1;
  local_38 = "TangentVAttrib";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4be00 = (ulonglong)uVar1;
  local_38 = "VisibleAttrib";
  local_30 = 0xd;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4be08 = (ulonglong)uVar1;
  local_38 = "InternalAttrib";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4be10 = (ulonglong)uVar1;
  local_38 = "UVAttrib0";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4be20 = (ulonglong)uVar1;
  local_38 = "UVAttrib1";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14cb4be28 = (ulonglong)uVar1;
  local_38 = "UVAttrib2";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be30 = (ulonglong)uVar1;
  local_38 = "UVAttrib3";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be38 = (ulonglong)uVar1;
  local_38 = "UVAttrib4";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be40 = (ulonglong)uVar1;
  local_38 = "UVAttrib5";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be48 = (ulonglong)uVar1;
  local_38 = "UVAttrib6";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be50 = (ulonglong)uVar1;
  local_38 = "UVAttrib7";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb4be58 = (ulonglong)uVar1;
  local_38 = (char *)0x800000014aee5b46;
  local_24 = 9;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_146490d5a(&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b6b32f FUN_143b6b32f body=166 status=ok
// SIG undefined FUN_143b6b32f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6b32f(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cb4be64);
  if (cVar1 == '\0') {
    _DAT_14cb4be64 = 0;
    uRam000000014cb4be6c = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_28 = -0x7ffffffeb5119d60;
  local_14 = 0x19;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146490e98(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b6b3d8 FUN_143b6b3d8 body=55 status=ok
// SIG undefined FUN_143b6b3d8(void)

void FUN_143b6b3d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bef0 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4bef0 = FUN_14171c317(FUN_1464910ee,uVar1,L"EDynamicMeshComponentTangentsMode");
  }
  return;
}



// FUNCTION 143b6b40f FUN_143b6b40f body=55 status=ok
// SIG undefined FUN_143b6b40f(void)

void FUN_143b6b40f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bf08 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4bf08 = FUN_14171c317(FUN_14649111f,uVar1,L"EDynamicMeshComponentColorOverrideMode");
  }
  return;
}



// FUNCTION 143b6b446 FUN_143b6b446 body=55 status=ok
// SIG undefined FUN_143b6b446(void)

void FUN_143b6b446(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bf20 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4bf20 = FUN_14171c317(FUN_146491150,uVar1,L"EDynamicMeshDrawPath");
  }
  return;
}



// FUNCTION 143b6b47d FUN_143b6b47d body=55 status=ok
// SIG undefined FUN_143b6b47d(void)

void FUN_143b6b47d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bf38 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4bf38 = FUN_14171c317(FUN_146491181,uVar1,L"EDynamicMeshComponentDistanceFieldMode");
  }
  return;
}



// FUNCTION 143b6b4b4 FUN_143b6b4b4 body=55 status=ok
// SIG undefined FUN_143b6b4b4(void)

void FUN_143b6b4b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4bf50 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4bf50 = FUN_14171c317(FUN_1464911b2,uVar1,L"EDynamicMeshVertexColorTransformMode");
  }
  return;
}



// FUNCTION 143b6b4eb FUN_143b6b4eb body=207 status=ok
// SIG undefined FUN_143b6b4eb(void)

undefined8 FUN_143b6b4eb(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    FUN_140056680(&local_40,L"Material");
  }
  else {
    local_30 = *(longlong *)(param_2 + 0x18);
    FUN_1400021e4(&local_30,&local_40);
  }
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"%s_%d",puVar2,param_3);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_30,1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b6b5bb FUN_143b6b5bb body=69 status=ok
// SIG undefined FUN_143b6b5bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6b5bb(void)

{
  _DAT_14cb4c078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b6b5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c080,1);
  return;
}



// FUNCTION 143b6b600 FUN_143b6b600 body=69 status=ok
// SIG undefined FUN_143b6b600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6b600(void)

{
  _DAT_14cb4c090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b6b642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c098,1);
  return;
}



// FUNCTION 143b6b645 FUN_143b6b645 body=129 status=ok
// SIG undefined FUN_143b6b645(void)

ulonglong FUN_143b6b645(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb4c088;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  if ((*(char *)(lVar2 + uVar6) == '\x01') && (uVar5 = FUN_14498f84a(), (char)uVar5 != '\0')) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14ca84f11) ^ 1;
  }
  return 0;
}



// FUNCTION 143b6b6c6 FUN_143b6b6c6 body=1668 status=ok
// SIG undefined FUN_143b6b6c6(void)

void FUN_143b6b6c6(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 auVar18 [8];
  bool bVar19;
  undefined1 auStack_5e8 [32];
  longlong local_5c8;
  undefined1 local_5c0;
  undefined4 local_5b8;
  uint local_5b0;
  undefined8 *local_5a8;
  byte local_59f;
  byte local_59e;
  char local_59d;
  uint local_59c;
  undefined8 local_598;
  longlong local_590;
  uint local_584;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  longlong *local_568;
  LPCRITICAL_SECTION local_560;
  undefined1 local_558 [8];
  undefined1 auStack_550 [8];
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 auStack_2c8 [24];
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_580 = param_2;
  if (((iVar8 != 0x40000002) && (iVar8 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  bVar6 = (**(code **)(*(longlong *)param_1[0x53] + 0xac8))();
  local_558 = (undefined1  [8])0x0;
  auStack_550 = (undefined1  [8])0x0;
  (**(code **)(*param_1 + 0x240))(param_1);
  plVar11 = DAT_14cb4c070;
  local_59f = bVar6;
  if ((bVar6 == 0) || (DAT_14cb4c070 == (longlong *)0x0)) {
    lVar9 = 0;
    local_598 = 0;
  }
  else {
    lVar9 = param_1[0x53];
    local_548 = *(undefined4 *)(lVar9 + 0x674);
    uStack_544 = *(undefined4 *)(lVar9 + 0x678);
    uStack_540 = *(undefined4 *)(lVar9 + 0x67c);
    uStack_53c = *(undefined4 *)(lVar9 + 0x680);
    lVar9 = FUN_14001cc68(0xe8,0x10);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar5 = DAT_14c892c38;
    uVar10 = (**(code **)(*plVar11 + 0x2f0))(plVar11);
    FUN_14089e406(lVar9,uVar10,&local_548,uVar5);
    iVar8 = *(int *)(param_5 + 0xb0);
    *(uint *)(param_5 + 0xb0) = iVar8 + 1U;
    if (*(uint *)(param_5 + 0xb4) < iVar8 + 1U) {
      FUN_1479cc194((longlong *)(param_5 + 0xa8),iVar8);
    }
    lVar4 = *(longlong *)(param_5 + 0xa8);
    *(longlong *)(lVar4 + (longlong)iVar8 * 8) = lVar9;
    local_598 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  plVar11 = (longlong *)param_1[0x53];
  local_578 = lVar9;
  if ((byte)(*(char *)((longlong)plVar11 + 0x684) - 1U) < 3) {
    lVar9 = (**(code **)(*DAT_14cb4c068 + 0x2f0))();
    plVar11 = (longlong *)param_1[0x53];
  }
  else {
    lVar9 = 0;
  }
  cVar7 = (**(code **)(*plVar11 + 0xb60))();
  local_590 = lVar9;
  if ((lVar9 == 0) && (cVar7 != '\0')) {
    plVar11 = (longlong *)(**(code **)(*(longlong *)param_1[0x53] + 0xb68))();
    lVar9 = (**(code **)(*plVar11 + 0x2f0))(plVar11);
  }
  local_59d = (**(code **)(*(longlong *)param_1[0x53] + 0xb78))();
  iVar8 = *(int *)(local_580 + 8);
  if (0 < iVar8) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    local_59e = local_59f & (byte)local_598;
    uVar17 = 0;
    local_584 = param_4;
    local_570 = lVar9;
    do {
      if ((param_4 >> (uVar17 & 0x1f) & 1) != 0) {
        if ((longlong)(int)auStack_550._0_4_ != 0) {
          local_568 = (longlong *)((longlong)local_558 + (longlong)(int)auStack_550._0_4_ * 8);
          lVar9 = local_590;
          auVar18 = local_558;
          local_59c = uVar17;
          do {
            lVar4 = *(longlong *)auVar18;
            lVar12 = lVar9;
            if (lVar9 == 0) {
              plVar11 = *(longlong **)(lVar4 + 0x360);
              cVar7 = (**(code **)(*(longlong *)param_1[0x53] + 0xb40))((longlong *)param_1[0x53],0)
              ;
              if (cVar7 != '\0') {
                plVar11 = (longlong *)(**(code **)(*(longlong *)param_1[0x53] + 0xb48))();
              }
              lVar12 = (**(code **)(*plVar11 + 0x2f0))(plVar11);
            }
            if (*(int *)(lVar4 + 8) != 0) {
              local_560 = (LPCRITICAL_SECTION)(lVar4 + 0x518);
              EnterCriticalSection(local_560);
              plVar11 = *(longlong **)(param_5 + 0xe8);
              puVar13 = (uint *)*puVar2;
              if (puVar13 != (uint *)0x0) goto LAB_143b6b9d5;
              while( true ) {
                FUN_14472e504(puVar2);
                puVar13 = (uint *)*puVar2;
LAB_143b6b9d5:
                puVar16 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
                uVar17 = puVar13[0x12];
                if (puVar16 + 8 <= puVar13 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                  LOCK();
                  uVar3 = *puVar13;
                  *puVar13 = *puVar13 + uVar17 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar17) != 0xffffffff) break;
                  puVar13 = (uint *)*puVar2;
                  *puVar13 = 0xffffffff;
                  *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                  puVar13[0x12] = 0;
                  *puVar2 = puVar13;
                  puVar16 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
                  uVar17 = 0;
                  if (puVar16 + 8 <= puVar13 + 0x4000) {
                    uVar17 = 1;
                    goto LAB_143b6ba4b;
                  }
                }
              }
              uVar17 = uVar17 + 1;
LAB_143b6ba4b:
              *(undefined8 **)(puVar13 + 0x10) = puVar16 + 9;
              puVar13[0x12] = uVar17;
              *(int *)(puVar16 + -1) = ((int)puVar16 + -8) - (int)puVar13;
              *(undefined4 *)((longlong)puVar16 + -4) = 0x40;
              puVar16[1] = 0;
              *puVar16 = &PTR_FUN_14a5a8d50;
              lVar15 = *plVar11;
              do {
                puVar16[1] = lVar15;
                LOCK();
                lVar14 = *plVar11;
                bVar19 = lVar15 == lVar14;
                if (bVar19) {
                  *plVar11 = (longlong)puVar16;
                  lVar14 = lVar15;
                }
                UNLOCK();
                lVar15 = lVar14;
              } while (!bVar19);
              puVar1 = puVar16 + 2;
              puVar16[2] = &PTR_FUN_14aa71480;
              *(undefined4 *)(puVar16 + 4) = 0xffffffff;
              *(undefined2 *)((longlong)puVar16 + 0x24) = 0x105;
              *(undefined1 *)((longlong)puVar16 + 0x26) = 0;
              puVar16[3] = &PTR_FUN_14a1ca300;
              *(undefined4 *)(puVar16 + 5) = 2;
              puVar16[6] = 0;
              puVar16[7] = 0;
              local_3d8 = 0;
              uStack_3d0 = 0x3f80000000000000;
              local_388 = 0;
              uStack_380 = 0x3f80000000000000;
              lVar15 = 0x28c;
              do {
                *(undefined8 *)(local_558 + lVar15 + 4) = 0;
                *(undefined8 *)(auStack_550 + lVar15 + 4) = 0x3f80000000000000;
                lVar15 = lVar15 + 0x10;
              } while (lVar15 != 0x31c);
              local_208 = 0;
              uStack_200 = 0x3f80000000000000;
              FUN_144787006(param_1,&local_548);
              FUN_1417ed2e8(puVar1,*(undefined8 *)(param_5 + 0x110),&local_548);
              if (0 < *(int *)(lVar4 + 0x138)) {
                local_5c8 = lVar12;
                if ((byte)local_598 == '\0') {
                  lVar9 = *param_1;
                  local_5c0 = 0;
                }
                else {
                  if (local_59f != 0) {
                    local_5b0 = local_59c;
                    local_5b8 = 0;
                    local_5c0 = 0;
                    local_5a8 = puVar1;
                    (**(code **)(*param_1 + 0x280))(param_1,param_5,lVar4,lVar4 + 0x118);
                  }
                  lVar9 = *param_1;
                  local_5c8 = local_578;
                  local_5c0 = 1;
                }
                local_5b8 = 0;
                local_5b0 = local_59c;
                local_5a8 = puVar1;
                (**(code **)(lVar9 + 0x280))(param_1,param_5,lVar4,lVar4 + 0x118);
                lVar9 = local_590;
              }
              if (local_570 != 0) {
                lVar12 = local_570;
              }
              if (((local_59d != '\0') && (lVar12 != 0)) && (0 < *(int *)(lVar4 + 0x3a0))) {
                local_5c0 = (undefined1)local_598;
                if (local_59e != 0) {
                  local_5b0 = local_59c;
                  local_5b8 = 0;
                  local_5c0 = 0;
                  local_5c8 = lVar12;
                  local_5a8 = puVar1;
                  (**(code **)(*param_1 + 0x280))(param_1,param_5,lVar4,lVar4 + 0x380);
                  local_5c0 = 1;
                }
                local_5b0 = local_59c;
                local_5b8 = 0;
                local_5c8 = lVar12;
                local_5a8 = puVar1;
                (**(code **)(*param_1 + 0x280))(param_1,param_5,lVar4,lVar4 + 0x380);
                lVar9 = local_590;
              }
              if (local_560 != (LPCRITICAL_SECTION)0x0) {
                LeaveCriticalSection(local_560);
              }
            }
            auVar18 = (undefined1  [8])((longlong)auVar18 + 8);
          } while (auVar18 != (undefined1  [8])local_568);
          iVar8 = *(int *)(local_580 + 8);
          uVar17 = local_59c;
          param_4 = local_584;
        }
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar8);
  }
  if (local_558 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6bd4c FUN_143b6bd4c body=156 status=ok
// SIG undefined FUN_143b6bd4c(void)

undefined8 FUN_143b6bd4c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  lVar2 = DAT_14ca9ecb8;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar6 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar8 = 0;
  }
  else if (uVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = CONCAT44(extraout_var,DVar5);
    uVar8 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar8 = 1;
  }
  uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
  if (*(int *)(lVar2 + uVar8 * 4) == 1) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0xac8))();
    if (cVar3 == '\0') {
      uVar7 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x298) >> 8),
                       *(char *)(*(longlong *)(param_1 + 0x298) + 0x684) == '\0');
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}



// FUNCTION 143b6bde8 FUN_143b6bde8 body=825 status=ok
// SIG undefined FUN_143b6bde8(void)

void FUN_143b6bde8(longlong *param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_1b8 [36];
  int local_194;
  longlong local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  ulonglong uStack_170;
  longlong local_160 [21];
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  uint local_7c;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_2;
  if (*(char *)((longlong)param_1 + 0x40a) == '\x01') {
    cVar2 = (**(code **)(*(longlong *)param_1[0x53] + 0xb60))();
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x53] + 0xb68))();
    }
    (**(code **)(*(longlong *)param_1[0x53] + 0xb78))();
    local_178 = 0;
    uStack_170 = 0;
    (**(code **)(*param_1 + 0x240))(param_1,&local_178);
    (**(code **)(*local_180 + 0x10))(local_180,uStack_170 & 0xffffffff);
    if ((longlong)(int)uStack_170 != 0) {
      lVar3 = (longlong)(int)uStack_170 << 3;
      lVar7 = 0;
      iVar8 = 0;
      local_190 = local_178;
      lVar6 = local_178;
      local_188 = lVar3;
      do {
        lVar1 = *(longlong *)(lVar6 + lVar7);
        if (*(int *)(lVar1 + 8) != 0) {
          plVar4 = *(longlong **)(lVar1 + 0x360);
          local_194 = iVar8;
          cVar2 = (**(code **)(*(longlong *)param_1[0x53] + 0xb40))((longlong *)param_1[0x53],0);
          if (cVar2 != '\0') {
            plVar4 = (longlong *)
                     (**(code **)(*(longlong *)param_1[0x53] + 0xb48))((longlong *)param_1[0x53],0);
          }
          uVar5 = (**(code **)(*plVar4 + 0x2f0))(plVar4);
          lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x518);
          EnterCriticalSection(lpCriticalSection);
          local_b8 = (longlong *)0x0;
          local_ac = 1;
          local_98 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_90 = 0xffffffff;
          local_88 = 0xff0000ffffffff;
          local_80 = 0;
          local_7c = 0x40c00f07;
          local_78 = local_78 & 0xfc;
          local_b0 = 1;
          FUN_14470b9e0(local_160,1);
          iVar8 = local_194;
          plVar4 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar4 = local_160;
          }
          plVar4[3] = lVar1 + 0x118;
          local_a8 = lVar1 + 0x140;
          uStack_a0 = uVar5;
          *plVar4 = param_1[0x4a];
          *(int *)((longlong)plVar4 + 0x5c) = *(int *)(lVar1 + 0x138) / 3;
          *(undefined4 *)(plVar4 + 0xb) = 0;
          *(undefined4 *)(plVar4 + 0xd) = 0;
          *(int *)((longlong)plVar4 + 0x6c) = *(int *)(lVar1 + 0xcc) + -1;
          local_88 = (ulonglong)local_88._7_1_ << 0x38;
          local_88._0_6_ = CONCAT24((short)local_194,local_194);
          local_98 = 0;
          local_7c = ((uint)*(byte *)((longlong)param_1 + 0x409) << 0x14 |
                     local_7c & 0xfee030bf | (*(byte *)((longlong)param_1 + 0x6b) & 1) << 6) +
                     (*(byte *)(param_1 + 0xf) & 1) * 0x800 + 0x700;
          (**(code **)(*local_180 + 0x18))(local_180,local_160,0x7f7fffff);
          plVar4 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar4 = local_160;
          }
          FUN_1446fc26f(plVar4);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          iVar8 = iVar8 + 1;
          lVar3 = local_188;
          lVar6 = local_190;
          if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection);
            lVar3 = local_188;
            lVar6 = local_190;
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar3 != lVar7);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6c122 FUN_143b6c122 body=1004 status=ok
// SIG undefined FUN_143b6c122(void)

void FUN_143b6c122(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_588 [32];
  longlong local_568;
  longlong local_560;
  undefined4 local_558;
  undefined8 *local_550;
  char local_541;
  longlong local_540;
  undefined8 *local_538;
  longlong *local_530;
  undefined8 local_528;
  int aiStack_520 [94];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 auStack_298 [48];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_528 = 0;
  aiStack_520[0] = 0;
  aiStack_520[1] = 0;
  local_540 = param_2;
  (**(code **)(*param_1 + 0x240))();
  plVar12 = DAT_14cb4c068;
  if (2 < (byte)(*(char *)(param_1[0x53] + 0x684) - 1U)) {
    plVar12 = (longlong *)0x0;
  }
  cVar5 = (**(code **)(*(longlong *)param_1[0x53] + 0xb60))();
  plVar6 = plVar12;
  if ((cVar5 != '\0') && (plVar12 == (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x53] + 0xb68))();
  }
  local_541 = (**(code **)(*(longlong *)param_1[0x53] + 0xb78))();
  plVar3 = *(longlong **)(local_540 + 0xe8);
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar7 = (uint *)*puVar1;
  if (puVar7 != (uint *)0x0) goto LAB_143b6c1f9;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar7 = (uint *)*puVar1;
LAB_143b6c1f9:
    puVar10 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar7[0x12];
    if (puVar10 + 8 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar2 = *puVar7;
      *puVar7 = *puVar7 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar7 = (uint *)*puVar1;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar1 = puVar7;
      puVar10 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar10 + 8 <= puVar7 + 0x4000) {
        uVar11 = 1;
        goto LAB_143b6c26f;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_143b6c26f:
  *(undefined8 **)(puVar7 + 0x10) = puVar10 + 9;
  puVar7[0x12] = uVar11;
  *(int *)(puVar10 + -1) = ((int)puVar10 + -8) - (int)puVar7;
  *(undefined4 *)((longlong)puVar10 + -4) = 0x40;
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a5a8d50;
  lVar8 = *plVar3;
  do {
    puVar10[1] = lVar8;
    LOCK();
    lVar13 = *plVar3;
    bVar15 = lVar8 == lVar13;
    if (bVar15) {
      *plVar3 = (longlong)puVar10;
      lVar13 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar13;
  } while (!bVar15);
  local_538 = puVar10 + 2;
  puVar10[2] = &PTR_FUN_14aa71480;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)puVar10 + 0x24) = 0x105;
  *(undefined1 *)((longlong)puVar10 + 0x26) = 0;
  puVar10[3] = &PTR_FUN_14a1ca300;
  *(undefined4 *)(puVar10 + 5) = 2;
  puVar10[6] = 0;
  puVar10[7] = 0;
  local_3a8 = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0x3f800000;
  local_358 = 0;
  uStack_354 = 0;
  uStack_350 = 0;
  uStack_34c = 0x3f800000;
  lVar8 = 0x28c;
  do {
    *(undefined4 *)((longlong)&local_528 + lVar8 + 4) = 0;
    *(undefined4 *)((longlong)aiStack_520 + lVar8) = 0;
    *(undefined4 *)((longlong)aiStack_520 + lVar8 + 4) = 0;
    *(undefined4 *)((longlong)aiStack_520 + lVar8 + 8) = 0x3f800000;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x31c);
  local_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0x3f800000;
  FUN_144787006(param_1,aiStack_520 + 2);
  FUN_1417ed2e8(local_538,*(undefined8 *)(local_540 + 0x110),aiStack_520 + 2);
  lVar8 = local_528;
  lVar13 = (longlong)aiStack_520[0];
  if (lVar13 != 0) {
    lVar14 = 0;
    local_530 = plVar6;
    do {
      lVar4 = *(longlong *)(lVar8 + lVar14);
      plVar6 = *(longlong **)(lVar4 + 0x360);
      cVar5 = (**(code **)(*(longlong *)param_1[0x53] + 0xb40))((longlong *)param_1[0x53],0);
      if (cVar5 != '\0') {
        plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x53] + 0xb48))();
      }
      if (plVar12 != (longlong *)0x0) {
        plVar6 = plVar12;
      }
      lVar9 = (**(code **)(*plVar6 + 0x2f0))(plVar6);
      if ((*(int *)(lVar4 + 8) != 0) && (*(char *)(lVar4 + 0x510) != '\0')) {
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x518);
        EnterCriticalSection(lpCriticalSection);
        if ((0 < *(int *)(lVar4 + 0x138)) && ((*(byte *)(lVar4 + 0x450) & 2) != 0)) {
          local_568 = lVar4 + 0x3b0;
          local_550 = local_538;
          local_558 = 0;
          local_560 = lVar9;
          (**(code **)(*param_1 + 0x288))(param_1,local_540,lVar4,lVar4 + 0x118);
        }
        if (local_530 != (longlong *)0x0) {
          lVar9 = (**(code **)(*local_530 + 0x2f0))();
        }
        if ((((local_541 != '\0') && (lVar9 != 0)) && (0 < *(int *)(lVar4 + 0x3a0))) &&
           ((*(byte *)(lVar4 + 0x500) & 2) != 0)) {
          local_568 = lVar4 + 0x460;
          local_550 = local_538;
          local_558 = 0;
          local_560 = lVar9;
          (**(code **)(*param_1 + 0x288))(param_1,local_540,lVar4,lVar4 + 0x380);
        }
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      lVar14 = lVar14 + 8;
    } while (lVar13 * 8 != lVar14);
  }
  if (local_528 != 0) {
    FUN_1400020a8(local_528);
  }
  if ((local_48 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6c510 FUN_143b6c510 body=6072 status=ok
// SIG undefined FUN_143b6c510(void)

undefined8 * FUN_143b6c510(undefined8 *param_1,undefined8 param_2,char *param_3,char param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  LARGE_INTEGER LVar7;
  double dVar8;
  char *pcVar9;
  int *piVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  size_t _Size;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_448 [38];
  byte local_422;
  char local_421;
  int *local_420;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  longlong local_400;
  char *local_3f8;
  undefined8 *local_3f0;
  longlong *local_3e8;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  undefined8 *local_3d0;
  longlong *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  double local_3b0;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  float local_374;
  float local_370;
  float local_36c;
  undefined8 *local_368;
  longlong local_360;
  ulonglong local_358;
  ulonglong local_350;
  ulonglong local_348;
  ulonglong local_340;
  float local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  void *local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  void *local_308;
  undefined8 uStack_300;
  LARGE_INTEGER local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 local_2d8 [2];
  undefined8 local_2c8;
  LARGE_INTEGER local_298;
  undefined8 uStack_290;
  double local_288;
  longlong *local_278;
  longlong local_268 [6];
  LARGE_INTEGER *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  LARGE_INTEGER local_1c8 [17];
  longlong local_140;
  longlong local_128;
  uint local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  puVar17 = (undefined8 *)FUN_14001cc68(0x118,0x10);
  FUN_1434d09e0(puVar17);
  cVar11 = FUN_143b6b645();
  if (cVar11 != '\0') {
    QueryPerformanceCounter(local_1c8);
    FUN_146ba21d6(local_1c8,param_2,1);
    if (*param_3 == '\0') {
      pcVar5 = *(code **)(param_3 + 0x70);
      local_3e8 = (longlong *)(param_3 + 0x90);
      plVar20 = *(longlong **)(param_3 + 0x80);
      if (*(longlong **)(param_3 + 0x80) == (longlong *)0x0) {
        plVar20 = local_3e8;
      }
      uVar18 = (**(code **)(*plVar20 + 8))();
      cVar11 = (*pcVar5)(uVar18);
      *param_3 = cVar11;
      if (cVar11 == '\0') {
        if ((int)local_fc < 0) {
          dVar6 = 1.79769313486232e+308;
          dVar2 = -1.79769313486232e+308;
          dVar37 = dVar6;
          dVar8 = dVar6;
          dVar3 = dVar2;
          dVar4 = dVar2;
        }
        else {
          lVar34 = *(longlong *)(local_140 + (ulonglong)(local_fc >> 9) * 8);
          lVar27 = (ulonglong)((local_fc & 0x1ff) << 3) * 3;
          lVar31 = *(longlong *)(local_128 + (ulonglong)(local_fc >> 9) * 8);
          dVar2 = *(double *)(lVar34 + 0x10 + lVar27);
          dVar37 = *(double *)(lVar31 + 0x10 + lVar27);
          dVar6 = dVar2 - dVar37;
          dVar3 = *(double *)(lVar34 + 8 + lVar27);
          dVar4 = *(double *)(lVar31 + 8 + lVar27);
          dVar2 = dVar2 + dVar37;
          dVar37 = dVar3 - dVar4;
          dVar8 = *(double *)(lVar34 + lVar27) - *(double *)(lVar31 + lVar27);
          dVar3 = dVar3 + dVar4;
          dVar4 = *(double *)(lVar34 + lVar27) + *(double *)(lVar31 + lVar27);
        }
        bVar35 = false;
        local_210 = 0;
        local_208 = 0;
        local_230 = 0;
        uStack_228 = 0;
        local_204 = 0xffffffff00000080;
        local_1fc = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0x4000000000000000;
        local_1d0 = 2;
        local_238 = local_1c8;
        FUN_146bef8a8(&local_238,1);
        if (*param_3 == '\0') {
          pcVar5 = *(code **)(param_3 + 0x70);
          plVar20 = *(longlong **)(param_3 + 0x80);
          if (*(longlong **)(param_3 + 0x80) == (longlong *)0x0) {
            plVar20 = local_3e8;
          }
          uVar18 = (**(code **)(*plVar20 + 8))();
          cVar11 = (*pcVar5)(uVar18);
          *param_3 = cVar11;
          if (cVar11 == '\0') {
            local_3f8 = param_3;
            local_3f0 = puVar17;
            local_3d0 = param_1;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb4c340) && (FUN_144b3d300(&DAT_14cb4c340), DAT_14cb4c340 == -1))
            {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar20 = (longlong *)
                        (**(code **)(*DAT_14c8407a8 + 200))
                                  (DAT_14c8407a8,L"r.DistanceFields.MaxPerMeshResolution",1);
              if (plVar20 == (longlong *)0x0) {
                DAT_14cb4c338 = 0;
              }
              else {
                DAT_14cb4c338 = (**(code **)(*plVar20 + 0x68))(plVar20);
              }
              _Init_thread_footer(&DAT_14cb4c340);
              param_3 = local_3f8;
              puVar17 = local_3f0;
            }
            lVar31 = DAT_14cb4c338;
            lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar29 = *(int *)(lVar34 + 0xc60);
            if (iVar29 == 0x40000002) {
              uVar23 = 0;
            }
            else {
              bVar35 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar29 != 2)) {
                if (iVar29 == 1) {
                  DVar15 = FUN_140ad26c0();
                  DVar16 = GetCurrentThreadId();
                  bVar35 = DVar15 == DVar16;
                }
                else {
                  bVar35 = false;
                }
              }
              uVar23 = (ulonglong)(bVar35 ^ 1);
            }
            iVar29 = *(int *)(lVar31 + uVar23 * 4);
            iVar22 = iVar29 / 2;
            iVar29 = (uint)(-2 < iVar29) * 5;
            iVar29 = (int)((ulonglong)((longlong)(iVar29 + iVar22 + -2) * -0x6db6db6d) >> 0x20) +
                     iVar29 + iVar22 + -2;
            iVar29 = (iVar29 >> 2) - (iVar29 >> 0x1f);
            if (0x3fe < iVar29) {
              iVar29 = 0x3ff;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb4c350) && (FUN_144b3d300(), DAT_14cb4c350 == -1)) {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar20 = (longlong *)
                        (**(code **)(*DAT_14c8407a8 + 200))
                                  (DAT_14c8407a8,L"r.DistanceFields.DefaultVoxelDensity",1);
              if (plVar20 == (longlong *)0x0) {
                DAT_14cb4c348 = 0;
              }
              else {
                DAT_14cb4c348 = (**(code **)(*plVar20 + 0x70))(plVar20);
              }
              _Init_thread_footer();
              param_3 = local_3f8;
              puVar17 = local_3f0;
            }
            lVar31 = DAT_14cb4c348;
            iVar22 = *(int *)(lVar34 + 0xc60);
            if (((iVar22 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar22 == 2)) {
              uVar23 = 0;
            }
            else if (iVar22 == 1) {
              DVar15 = FUN_140ad26c0();
              DVar16 = GetCurrentThreadId();
              uVar23 = (ulonglong)(DVar15 != DVar16);
            }
            else {
              uVar23 = 1;
            }
            fVar39 = ((float)dVar6 + (float)dVar2) * 0.5;
            fVar38 = ((float)dVar37 + (float)dVar3) * 0.5;
            fVar36 = ((float)dVar8 + (float)dVar4) * 0.5;
            fVar43 = ((float)dVar2 - (float)dVar6) * 0.5;
            fVar45 = ((float)dVar3 - (float)dVar37) * 0.5;
            fVar48 = ((float)dVar4 - (float)dVar8) * 0.5;
            fVar42 = 1.0;
            if (fVar43 <= 1.0) {
              fVar43 = fVar42;
            }
            if (fVar45 <= 1.0) {
              fVar45 = fVar42;
            }
            if (fVar48 <= 1.0) {
              fVar48 = fVar42;
            }
            fVar42 = fVar39 - fVar43;
            fVar43 = fVar43 + fVar39;
            fVar39 = fVar38 - fVar45;
            fVar45 = fVar45 + fVar38;
            local_3d4 = fVar36 - fVar48;
            fVar48 = fVar48 + fVar36;
            fVar36 = *(float *)(lVar31 + uVar23 * 4);
            if (param_4 == '\0') {
              local_422 = dVar6 <= dVar2 & -(dVar8 <= dVar4) & -(dVar37 <= dVar3);
            }
            else {
              fVar38 = fVar36 / 7.0;
              fVar40 = (fVar43 - fVar42) * fVar38;
              fVar41 = (fVar45 - fVar39) * fVar38;
              iVar22 = (int)ROUND(fVar40 + fVar40 + 0.5) >> 1;
              if (iVar29 <= iVar22) {
                iVar22 = iVar29;
              }
              if (iVar22 < 2) {
                iVar22 = 1;
              }
              iVar24 = (int)ROUND(fVar41 + fVar41 + 0.5) >> 1;
              if (iVar29 <= iVar24) {
                iVar24 = iVar29;
              }
              fVar38 = (fVar48 - local_3d4) * fVar38;
              if (iVar24 < 2) {
                iVar24 = 1;
              }
              iVar32 = (int)ROUND(fVar38 + fVar38 + 0.5) >> 1;
              if (iVar29 <= iVar32) {
                iVar32 = iVar29;
              }
              if (iVar32 < 2) {
                iVar32 = 1;
              }
              fVar38 = (fVar43 - fVar42) / (float)(iVar22 * 7);
              fVar40 = (fVar45 - fVar39) / (float)(iVar24 * 7);
              fVar41 = (fVar48 - local_3d4) / (float)(iVar32 * 7);
              fVar43 = fVar43 + fVar38;
              fVar45 = fVar45 + fVar40;
              fVar48 = fVar48 + fVar41;
              fVar42 = fVar42 - fVar38;
              fVar39 = fVar39 - fVar40;
              local_3d4 = local_3d4 - fVar41;
              local_422 = 1;
            }
            fVar36 = fVar36 / 7.0;
            local_36c = fVar43 - fVar42;
            local_370 = fVar45 - fVar39;
            local_374 = fVar48 - local_3d4;
            local_394 = local_36c * 0.5;
            local_398 = local_370 * 0.5;
            local_39c = local_374 * 0.5;
            fVar38 = local_39c;
            if (local_39c <= local_398) {
              fVar38 = local_398;
            }
            if (fVar38 <= local_394) {
              fVar38 = local_394;
            }
            iVar22 = (int)ROUND(fVar36 * local_36c + fVar36 * local_36c + 0.5) >> 1;
            if (iVar29 <= iVar22) {
              iVar22 = iVar29;
            }
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            iVar24 = (int)ROUND(fVar36 * local_370 + fVar36 * local_370 + 0.5) >> 1;
            if (iVar29 <= iVar24) {
              iVar24 = iVar29;
            }
            if (iVar24 < 2) {
              iVar24 = 1;
            }
            iVar32 = (int)ROUND(fVar36 * local_374 + fVar36 * local_374 + 0.5) >> 1;
            if (iVar29 <= iVar32) {
              iVar32 = iVar29;
            }
            if (iVar32 < 2) {
              iVar32 = 1;
            }
            fVar38 = 1.0 / fVar38;
            local_378 = iVar22 - 1;
            local_37c = iVar24 - 1;
            local_380 = iVar32 - 1;
            local_368 = puVar17 + 5;
            local_3c8 = puVar17 + 0x1a;
            local_394 = local_394 * fVar38;
            local_398 = local_398 * fVar38;
            local_39c = local_39c * fVar38;
            local_3a0 = local_394 + local_394;
            local_3a4 = local_398 + local_398;
            local_3a8 = local_39c + local_39c;
            local_308 = (void *)0x0;
            uStack_300 = 0;
            lVar34 = 0;
            local_421 = param_4;
            local_414 = fVar42;
            local_410 = fVar48;
            local_40c = fVar45;
            local_408 = fVar43;
            local_404 = fVar39;
            do {
              if (*param_3 != '\0') {
LAB_143b6da13:
                bVar35 = false;
                param_1 = local_3d0;
                puVar17 = local_3f0;
                goto LAB_143b6da1f;
              }
              pcVar5 = *(code **)(param_3 + 0x70);
              plVar20 = *(longlong **)(param_3 + 0x80);
              if (*(longlong **)(param_3 + 0x80) == (longlong *)0x0) {
                plVar20 = local_3e8;
              }
              uVar18 = (**(code **)(*plVar20 + 8))();
              cVar11 = (*pcVar5)(uVar18);
              *param_3 = cVar11;
              if (cVar11 != '\0') goto LAB_143b6da13;
              bVar21 = (byte)lVar34;
              uVar33 = local_378 >> (bVar21 & 0x1f);
              local_3b0 = (double)(ulonglong)uVar33;
              uVar25 = local_37c >> (bVar21 & 0x1f);
              local_420 = (int *)(ulonglong)uVar25;
              iVar22 = uVar33 + 1;
              iVar24 = uVar25 + 1;
              uVar13 = local_380 >> (bVar21 & 0x1f);
              iVar29 = uVar13 + 1;
              uVar13 = (uVar13 * 8 + 8) - iVar29;
              local_348 = (ulonglong)uVar13;
              uVar25 = (uVar25 * 8 + 8) - iVar24;
              local_350 = (ulonglong)uVar25;
              uVar33 = (uVar33 * 8 + 8) - iVar22;
              local_358 = (ulonglong)uVar33;
              local_384 = (float)(int)(uVar13 - 2);
              local_388 = (float)(int)(uVar25 - 2);
              local_38c = (float)(int)(uVar33 - 2);
              fVar43 = fVar43 + local_36c / local_38c;
              fVar45 = fVar45 + local_370 / local_388;
              fVar48 = fVar48 + local_374 / local_384;
              fVar42 = fVar42 - local_36c / local_38c;
              fVar39 = fVar39 - local_370 / local_388;
              fVar46 = local_3d4 - local_374 / local_384;
              fVar41 = (((fVar45 - fVar39) / (float)iVar24) * fVar38) / 7.0;
              fVar40 = (((fVar48 - fVar46) / (float)iVar29) * fVar38) / 7.0;
              fVar36 = (((fVar43 - fVar42) / (float)iVar22) * fVar38) / 7.0;
              local_338 = SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar41 * fVar41) * 4.0;
              uVar13 = iVar24 * iVar22 * iVar29;
              local_318 = 0;
              uStack_310 = 0;
              local_400 = lVar34;
              uStack_334 = unaff_XMM10_Db;
              uStack_330 = unaff_XMM10_Dc;
              uStack_32c = unaff_XMM10_Dd;
              if (7 < (int)uVar13) {
                FUN_143b700ba(&local_318);
              }
              fVar40 = local_338 / fVar38;
              fVar36 = -local_338;
              fVar41 = local_338 + local_338;
              iVar32 = 0;
              local_340 = (ulonglong)uVar13;
              do {
                iVar30 = 0;
                do {
                  iVar26 = 0;
                  do {
                    lVar34 = (longlong)(int)uStack_310;
                    uVar13 = (int)uStack_310 + 1;
                    uStack_310 = CONCAT44(uStack_310._4_4_,uVar13);
                    if (uStack_310._4_4_ < uVar13) {
                      FUN_143b70204(&local_318);
                    }
                    param_3 = local_3f8;
                    lVar34 = lVar34 * 0x58;
                    *(float *)(local_318 + lVar34) = fVar40;
                    *(float *)(local_318 + 4 + lVar34) = fVar46;
                    *(float *)(local_318 + 8 + lVar34) = fVar39;
                    *(float *)(local_318 + 0xc + lVar34) = fVar42;
                    *(float *)(local_318 + 0x10 + lVar34) = fVar48;
                    *(float *)(local_318 + 0x14 + lVar34) = fVar45;
                    *(float *)(local_318 + 0x18 + lVar34) = fVar43;
                    *(undefined1 *)(local_318 + 0x1c + lVar34) = 1;
                    *(float *)(local_318 + 0x20 + lVar34) = fVar38;
                    *(float *)(local_318 + 0x24 + lVar34) = fVar41;
                    *(float *)(local_318 + 0x28 + lVar34) = fVar36;
                    *(int *)(local_318 + 0x2c + lVar34) = iVar26;
                    *(int *)(local_318 + 0x30 + lVar34) = iVar30;
                    *(int *)(local_318 + 0x34 + lVar34) = iVar32;
                    *(int *)(local_318 + 0x38 + lVar34) = iVar29;
                    *(int *)(local_318 + 0x3c + lVar34) = iVar24;
                    *(int *)(local_318 + 0x40 + lVar34) = iVar22;
                    *(undefined2 *)(local_318 + 0x44 + lVar34) = 0xff00;
                    puVar17 = (undefined8 *)(local_318 + 0x48 + lVar34);
                    *puVar17 = 0;
                    puVar17[1] = 0;
                    iVar26 = iVar26 + 1;
                  } while (iVar29 != iVar26);
                  bVar35 = (float)iVar30 != local_420._0_4_;
                  iVar30 = iVar30 + 1;
                } while (bVar35);
                bVar35 = iVar32 != local_3b0._0_4_;
                iVar32 = iVar32 + 1;
              } while (bVar35);
              bVar35 = true;
              lVar34 = local_400;
              fVar39 = local_404;
              fVar43 = local_408;
              fVar42 = local_414;
              fVar45 = local_40c;
              fVar48 = local_410;
              if (*local_3f8 == '\0') {
                pcVar5 = *(code **)(local_3f8 + 0x70);
                plVar20 = *(longlong **)(local_3f8 + 0x80);
                if (*(longlong **)(local_3f8 + 0x80) == (longlong *)0x0) {
                  plVar20 = local_3e8;
                }
                uVar18 = (**(code **)(*plVar20 + 8))();
                cVar11 = (*pcVar5)(uVar18);
                *param_3 = cVar11;
                if (cVar11 == '\0') {
                  if ((longlong)(int)uStack_310 != 0) {
                    local_360 = (longlong)(int)uStack_310 * 0x58 + local_318;
                    local_3b0 = (double)fVar40;
                    lVar34 = local_318;
                    piVar10 = local_420;
                    do {
                      local_420 = piVar10;
                      fVar48 = *(float *)(lVar34 + 0x18);
                      local_3dc = (float)*(int *)(lVar34 + 0x38);
                      fVar45 = *(float *)(lVar34 + 0xc);
                      local_3e0 = (float)*(int *)(lVar34 + 0x3c);
                      local_3d8 = *(float *)(lVar34 + 0x14);
                      iVar32 = *(int *)(lVar34 + 0x40);
                      fVar43 = *(float *)(lVar34 + 4);
                      local_420 = (int *)CONCAT44(local_420._4_4_,(float)*(int *)(lVar34 + 0x2c));
                      fVar39 = *(float *)(lVar34 + 8);
                      local_3b8 = CONCAT44(local_3b8._4_4_,(float)*(int *)(lVar34 + 0x30));
                      fVar42 = *(float *)(lVar34 + 0x10);
                      local_3c0 = CONCAT44(local_3c0._4_4_,(float)*(int *)(lVar34 + 0x34));
                      *(undefined4 *)(lVar34 + 0x50) = 0;
                      if (*(int *)(lVar34 + 0x54) == 0x200) {
                        iVar30 = 0;
                        iVar26 = 0x200;
                      }
                      else {
                        FUN_144893a1c(lVar34 + 0x48);
                        iVar30 = *(int *)(lVar34 + 0x50);
                        iVar26 = *(int *)(lVar34 + 0x54);
                      }
                      *(int *)(lVar34 + 0x50) = iVar30 + 0x200;
                      if ((uint)(iVar26 - iVar30) < 0x200) {
                        FUN_1447403be(lVar34 + 0x48);
                      }
                      fVar44 = (fVar48 - fVar45) / (float)iVar32;
                      fVar48 = (local_3d8 - fVar39) / local_3e0;
                      fVar42 = (fVar42 - fVar43) / local_3dc;
                      local_3e0 = fVar48 / 7.0;
                      fVar47 = fVar44 * (float)local_3c0;
                      fVar46 = fVar42 * local_420._0_4_;
                      local_3d8 = fVar48 * (float)local_3b8 + fVar39;
                      memset((void *)((longlong)iVar30 + *(longlong *)(lVar34 + 0x48)),0,0x200);
                      lVar27 = 0;
                      lVar31 = 0;
                      local_3dc = fVar44 / 7.0;
                      local_390 = fVar47 + fVar45;
                      do {
                        dVar2 = (double)((float)(int)lVar31 * local_3dc + local_390);
                        local_420 = (int *)0x0;
                        local_3c0 = lVar27;
                        local_3b8 = lVar31;
                        do {
                          param_3 = local_3f8;
                          if (*local_3f8 != '\0') goto LAB_143b6cffd;
                          pcVar5 = *(code **)(local_3f8 + 0x70);
                          plVar20 = *(longlong **)(local_3f8 + 0x80);
                          if (*(longlong **)(local_3f8 + 0x80) == (longlong *)0x0) {
                            plVar20 = local_3e8;
                          }
                          uVar18 = (**(code **)(*plVar20 + 8))();
                          cVar11 = (*pcVar5)(uVar18);
                          *param_3 = cVar11;
                          if (cVar11 != '\0') goto LAB_143b6cffd;
                          dVar6 = (double)((float)(int)local_420._0_4_ * local_3e0 + local_3d8);
                          lVar31 = 0;
                          do {
                            local_328 = (void *)0x0;
                            local_2d8[0] = 0;
                            local_2c8 = 0;
                            FUN_146bee698(&local_298,local_3b0,local_2d8);
                            LVar7 = (LARGE_INTEGER)
                                    (double)((float)(int)lVar31 * (fVar42 / 7.0) + fVar46 + fVar43);
                            local_2f8 = LVar7;
                            uStack_2f0 = dVar6;
                            local_2e8 = dVar2;
                            iVar32 = FUN_146bdde3a(local_1c8,&local_2f8,&local_328,&local_298);
                            if (local_288 != 0.0) {
                              plVar20 = local_278;
                              if (local_278 == (longlong *)0x0) {
                                plVar20 = local_268;
                              }
                              (**(code **)(*plVar20 + 0x10))();
                            }
                            fVar48 = fVar40;
                            if (iVar32 != -1) {
                              if ((double)local_328 < 0.0) {
                                dVar37 = sqrt((double)local_328);
                              }
                              else {
                                dVar37 = SQRT((double)local_328);
                              }
                              if ((float)dVar37 <= fVar40) {
                                fVar48 = (float)dVar37;
                              }
                              local_298 = LVar7;
                              uStack_290 = dVar6;
                              local_288 = dVar2;
                              dVar37 = (double)FUN_146bed438(&local_238,
                                                             *(undefined4 *)
                                                              ((longlong)local_238 + 0xcc),
                                                             &local_298);
                              if (0.5 < dVar37) {
                                fVar48 = -fVar48;
                              }
                            }
                            fVar48 = ((fVar48 * fVar38 + local_338) / fVar41) * 255.0 + 0.5;
                            iVar32 = (int)ROUND(fVar48 + fVar48 + -0.5) >> 1;
                            if (0xfe < iVar32) {
                              iVar32 = 0xff;
                            }
                            if (iVar32 < 1) {
                              iVar32 = 0;
                            }
                            bVar12 = (byte)iVar32;
                            *(byte *)(lVar31 + *(longlong *)(lVar34 + 0x48) + lVar27) = bVar12;
                            bVar21 = (byte)*(undefined4 *)(lVar34 + 0x44);
                            if (bVar21 < bVar12) {
                              bVar21 = bVar12;
                            }
                            *(byte *)(lVar34 + 0x44) = bVar21;
                            if (*(byte *)(lVar34 + 0x45) < bVar12) {
                              bVar12 = *(byte *)(lVar34 + 0x45);
                            }
                            *(byte *)(lVar34 + 0x45) = bVar12;
                            lVar31 = lVar31 + 1;
                          } while (lVar31 != 8);
                          local_420 = (int *)((longlong)local_420 + 1);
                          lVar27 = lVar27 + 8;
                        } while (local_420 != (int *)&DAT_00000008);
                        lVar31 = local_3b8 + 1;
                        lVar27 = local_3c0 + 0x40;
                      } while (lVar31 != 8);
                      lVar34 = lVar34 + 0x58;
                      piVar10 = (int *)0x0;
                    } while (lVar34 != local_360);
                  }
                  local_298.QuadPart = 0;
                  uStack_290 = 0.0;
                  uVar13 = (uint)local_340;
                  FUN_14480809c(&local_298,local_340 & 0xffffffff);
                  iVar30 = (int)uStack_290;
                  iVar32 = (int)uStack_290 + uVar13;
                  uStack_290 = (double)CONCAT44(uStack_290._4_4_,iVar32);
                  if ((uint)(uStack_290._4_4_ - iVar30) < uVar13) {
                    FUN_1447808da(&local_298);
                    iVar32 = (int)uStack_290;
                  }
                  fVar39 = local_404;
                  if (0 < iVar32) {
                    lVar34 = 0;
                    do {
                      *(undefined4 *)(local_298.QuadPart + lVar34 * 4) = 0xffffffff;
                      lVar34 = lVar34 + 1;
                    } while (lVar34 < (int)uStack_290);
                  }
                  local_2f8.QuadPart = 0;
                  uStack_2f0 = 0.0;
                  if ((int)uStack_310 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(uStack_310 & 0xffffffff);
                  }
                  if ((uStack_310 & 0xffffffff) != 0) {
                    FUN_143b7036c(&local_2f8);
                    if (0 < (int)uStack_310) {
                      lVar34 = 0;
                      lVar31 = 0;
                      iVar32 = (int)uStack_310;
                      do {
                        lVar27 = local_318;
                        if ((*(char *)(local_318 + 0x45 + lVar34) != -1) &&
                           (*(char *)(local_318 + 0x44 + lVar34) != '\0')) {
                          lVar28 = (longlong)(int)uStack_2f0;
                          uVar13 = (int)uStack_2f0 + 1;
                          uStack_2f0 = (double)CONCAT44(uStack_2f0._4_4_,uVar13);
                          if (uStack_2f0._4_4_ < uVar13) {
                            FUN_143b7049c(&local_2f8);
                          }
                          *(longlong *)(local_2f8.QuadPart + lVar28 * 8) = lVar27 + lVar34;
                          iVar32 = (int)uStack_310;
                        }
                        lVar31 = lVar31 + 1;
                        lVar34 = lVar34 + 0x58;
                      } while (lVar31 < iVar32);
                    }
                  }
                  iVar32 = (int)uStack_2f0;
                  iVar30 = DAT_14c8734b8 * 0x200;
                  uVar13 = iVar30 * (int)uStack_2f0;
                  local_328 = (void *)0x0;
                  uStack_320 = 0;
                  if ((int)uVar13 < 0) {
LAB_143b6db9a:
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(uVar13);
                  }
                  if (uVar13 == 0) {
                    iVar26 = 0;
                    iVar14 = 0;
                  }
                  else {
                    FUN_144893a1c(&local_328,uVar13);
                    iVar14 = (int)uStack_320;
                    iVar26 = uStack_320._4_4_;
                  }
                  uStack_320 = CONCAT44(uStack_320._4_4_,iVar14 + uVar13);
                  if ((uint)(iVar26 - iVar14) < uVar13) {
                    FUN_1447403be(&local_328);
                  }
                  pcVar9 = local_3f8;
                  bVar35 = true;
                  lVar34 = local_400;
                  if (*local_3f8 == '\0') {
                    pcVar5 = *(code **)(local_3f8 + 0x70);
                    plVar20 = *(longlong **)(local_3f8 + 0x80);
                    if (*(longlong **)(local_3f8 + 0x80) == (longlong *)0x0) {
                      plVar20 = local_3e8;
                    }
                    uVar18 = (**(code **)(*plVar20 + 8))();
                    cVar11 = (*pcVar5)(uVar18);
                    *pcVar9 = cVar11;
                    lVar34 = local_400;
                    if (cVar11 == '\0') {
                      if (0 < (int)uStack_2f0) {
                        iVar26 = 0;
                        lVar34 = 0;
                        do {
                          lVar31 = *(longlong *)(local_2f8.QuadPart + lVar34 * 8);
                          *(int *)(local_298.QuadPart +
                                  ((longlong)
                                   ((*(int *)(lVar31 + 0x34) * iVar24 + *(int *)(lVar31 + 0x30)) *
                                   iVar29) + (longlong)*(int *)(lVar31 + 0x2c)) * 4) = (int)lVar34;
                          memcpy((void *)((longlong)local_328 + (longlong)iVar26),
                                 *(void **)(lVar31 + 0x48),(ulonglong)*(uint *)(lVar31 + 0x50));
                          lVar34 = lVar34 + 1;
                          iVar26 = iVar26 + iVar30;
                        } while (lVar34 < (int)uStack_2f0);
                      }
                      puVar17 = local_3f0;
                      lVar34 = local_400;
                      local_420 = (int *)(local_368 + local_400 * 7);
                      iVar30 = (int)uStack_290 * 4;
                      uVar13 = (int)uStack_320 + iVar30;
                      if (local_400 == 2) {
                        if ((int)uVar13 < 0) goto LAB_143b6db9a;
                        *(undefined4 *)(local_3f0 + 0x1b) = 0;
                        iVar26 = 0;
                        uVar25 = uVar13;
                        if (*(uint *)((longlong)local_3f0 + 0xdc) != uVar13) {
                          FUN_144893a1c(local_3c8,uVar13);
                          iVar26 = *(int *)(puVar17 + 0x1b);
                          uVar25 = *(uint *)((longlong)puVar17 + 0xdc);
                        }
                        *(uint *)(puVar17 + 0x1b) = iVar26 + uVar13;
                        if (uVar25 - iVar26 < uVar13) {
                          FUN_1447403be(local_3c8);
                        }
                        memcpy((void *)*local_3c8,(void *)local_298,(longlong)iVar30);
                        _Size = (size_t)(int)uStack_320;
                        lVar34 = local_400;
                        if (0 < (longlong)_Size) {
                          pvVar19 = (void *)((longlong)iVar30 + *local_3c8);
                          goto LAB_143b6d891;
                        }
                      }
                      else {
                        iVar26 = (int)uStack_300;
                        local_420[0xc] = (int)uStack_300;
                        iVar14 = (int)uStack_300 + uVar13;
                        uStack_300 = CONCAT44(uStack_300._4_4_,iVar14);
                        if ((uint)(uStack_300._4_4_ - iVar26) < uVar13) {
                          FUN_1447403be(&local_308);
                          iVar26 = local_420[0xc];
                          iVar14 = (int)uStack_300;
                        }
                        local_420[0xd] = iVar14 - iVar26;
                        memcpy((void *)((longlong)iVar26 + (longlong)local_308),(void *)local_298,
                               (longlong)iVar30);
                        _Size = (size_t)(int)uStack_320;
                        if (0 < (longlong)_Size) {
                          pvVar19 = (void *)((longlong)(iVar30 + local_420[0xc]) +
                                            (longlong)local_308);
LAB_143b6d891:
                          memcpy(pvVar19,local_328,_Size);
                        }
                      }
                      pcVar9 = local_3f8;
                      if (*local_3f8 == '\0') {
                        pcVar5 = *(code **)(local_3f8 + 0x70);
                        plVar20 = *(longlong **)(local_3f8 + 0x80);
                        if (*(longlong **)(local_3f8 + 0x80) == (longlong *)0x0) {
                          plVar20 = local_3e8;
                        }
                        uVar18 = (**(code **)(*plVar20 + 8))();
                        cVar11 = (*pcVar5)(uVar18);
                        *pcVar9 = cVar11;
                        bVar35 = true;
                        if (cVar11 == '\0') {
                          *local_420 = iVar29;
                          local_420[1] = iVar24;
                          local_420[2] = iVar22;
                          local_420[10] = (int)fVar41;
                          local_420[0xb] = (int)fVar36;
                          local_420[3] = iVar32;
                          fVar43 = (local_38c / (float)(int)local_358) / local_3a0;
                          fVar45 = (local_388 / (float)(int)local_350) / local_3a4;
                          fVar48 = (local_384 / (float)(int)local_348) / local_3a8;
                          local_420[4] = (int)fVar48;
                          local_420[5] = (int)fVar45;
                          local_420[6] = (int)fVar43;
                          local_420[7] = (int)(fVar48 * local_39c + 1.0 / (float)(int)local_348);
                          local_420[8] = (int)(fVar45 * local_398 + 1.0 / (float)(int)local_350);
                          local_420[9] = (int)(fVar43 * local_394 + 1.0 / (float)(int)local_358);
                          bVar35 = false;
                        }
                        goto LAB_143b6d8a5;
                      }
                    }
                    bVar35 = true;
                  }
LAB_143b6d8a5:
                  if (local_328 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  param_3 = local_3f8;
                  fVar43 = local_408;
                  fVar45 = local_40c;
                  fVar48 = local_410;
                  fVar42 = local_414;
                  if ((void *)local_2f8.QuadPart != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if ((void *)local_298.QuadPart != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
LAB_143b6cffd:
                  bVar35 = true;
                  lVar34 = local_400;
                  fVar39 = local_404;
                  fVar43 = local_408;
                  fVar42 = local_414;
                  fVar45 = local_40c;
                  fVar48 = local_410;
                }
              }
              unaff_XMM10_Dd = 0;
              unaff_XMM10_Dc = 0;
              unaff_XMM10_Db = 0;
              FUN_143b705f6(local_318,uStack_310 & 0xffffffff);
              if (local_318 != 0) {
                FUN_1400020a8();
              }
              param_1 = local_3d0;
              puVar17 = local_3f0;
              if (bVar35) goto LAB_143b6da13;
              lVar34 = lVar34 + 1;
            } while (lVar34 != 3);
            *(char *)((longlong)local_3f0 + 0x24) = local_421;
            *(float *)(local_3f0 + 1) = local_3d4;
            *(float *)((longlong)local_3f0 + 0xc) = fVar39;
            *(float *)(local_3f0 + 2) = fVar42;
            *(float *)((longlong)local_3f0 + 0x14) = fVar48;
            *(float *)(local_3f0 + 3) = fVar45;
            *(float *)((longlong)local_3f0 + 0x1c) = fVar43;
            *(byte *)(local_3f0 + 4) = local_422;
            *(undefined1 *)((longlong)local_3f0 + 0x23) = local_2f8.s.LowPart._2_1_;
            *(undefined2 *)((longlong)local_3f0 + 0x21) = local_2f8.s.LowPart._0_2_;
            if (*param_3 == '\0') {
              pcVar5 = *(code **)(param_3 + 0x70);
              plVar20 = local_3e8;
              if (*(longlong **)(param_3 + 0x80) != (longlong *)0x0) {
                plVar20 = *(longlong **)(param_3 + 0x80);
              }
              uVar18 = (**(code **)(*plVar20 + 8))();
              cVar11 = (*pcVar5)(uVar18);
              *param_3 = cVar11;
              if (cVar11 != '\0') goto LAB_143b6daff;
              puVar1 = puVar17 + 0x1c;
              FUN_14031515e(puVar1);
              *(undefined1 *)((longlong)puVar17 + 0xf3) = 2;
              *(byte *)((longlong)puVar17 + 0xf6) = *(byte *)((longlong)puVar17 + 0xf6) & 0xfb;
              pvVar19 = (void *)FUN_1427d8a06(puVar1,(longlong)(int)uStack_300,1);
              memcpy(pvVar19,local_308,(longlong)(int)uStack_300);
              *(undefined1 *)((longlong)puVar17 + 0xf3) = 0;
              uVar13 = *(uint *)((longlong)puVar17 + 0xf4);
              if ((uVar13 & 8) != 0) {
                FUN_1400ea36e(puVar1,puVar1);
                uVar13 = *(uint *)((longlong)puVar17 + 0xf4);
              }
              *(uint *)((longlong)puVar17 + 0xf4) = uVar13 | 0x400;
              QueryPerformanceCounter(&local_298);
              bVar35 = true;
            }
            else {
LAB_143b6daff:
              bVar35 = false;
            }
LAB_143b6da1f:
            if (local_308 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            bVar35 = false;
          }
        }
        local_1e8 = 0;
        if (local_1f0 != 0) {
          FUN_1400020a8();
        }
        FUN_146bddd50(&local_230);
        FUN_1457e5b52(local_1c8);
        if (bVar35) {
          *param_1 = puVar17;
          goto LAB_143b6c5d9;
        }
        goto LAB_143b6c5c0;
      }
    }
    FUN_1457e5b52(local_1c8);
  }
LAB_143b6c5c0:
  *param_1 = 0;
  if (puVar17 != (undefined8 *)0x0) {
    (**(code **)*puVar17)(puVar17,1);
  }
LAB_143b6c5d9:
  if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b6dcc9 FUN_143b6dcc9 body=55 status=ok
// SIG undefined FUN_143b6dcc9(void)

void FUN_143b6dcc9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c0b0 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4c0b0 = FUN_14171c317(FUN_146491793,uVar1,L"EDynamicMeshComponentRenderUpdateMode");
  }
  return;
}



// FUNCTION 143b6dd00 FUN_143b6dd00 body=69 status=ok
// SIG undefined FUN_143b6dd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6dd00(void)

{
  _DAT_14cb4c148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b6dd42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c150,1);
  return;
}



// FUNCTION 143b6dd46 FUN_143b6dd46 body=2247 status=ok
// SIG undefined FUN_143b6dd46(void)

void FUN_143b6dd46(code *param_1,ulonglong param_2,byte param_3,ulonglong param_4,byte param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined ***pppuVar20;
  undefined1 *puVar21;
  uint *puVar22;
  char cVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar24;
  undefined8 *puVar25;
  char cVar26;
  bool bVar27;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  ulonglong local_1b0;
  undefined8 *local_1a8;
  code **local_1a0;
  char local_198;
  byte local_190;
  char local_188;
  ulonglong *local_180;
  LPCRITICAL_SECTION local_178;
  ulonglong local_170;
  undefined8 *local_168;
  ulonglong local_160;
  undefined *local_158;
  undefined1 local_14c;
  byte local_14b;
  undefined1 local_14a;
  byte local_149;
  undefined1 *local_148;
  code **local_140;
  undefined8 local_138;
  undefined4 local_130;
  code *local_128;
  longlong *local_120;
  undefined ***local_118;
  undefined1 *local_110;
  undefined **local_108;
  ulonglong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  byte *local_e8;
  undefined1 *local_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_149 = param_5;
  local_14a = (undefined1)param_4;
  local_14c = (undefined1)param_2;
  local_14b = param_3;
  puVar14 = (undefined *)(**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  local_160 = 0;
  if ((param_3 != 0) && (lVar15 = *(longlong *)(puVar14 + 0x208), lVar15 != 0)) {
    if (*(int *)(lVar15 + 0x38) < 1) {
      local_160 = 0;
    }
    else {
      local_160 = **(ulonglong **)(lVar15 + 0x30);
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  local_170 = local_160;
  local_158 = puVar14;
  if ((param_5 != 0) && (plVar4 = *(longlong **)(puVar14 + 0x208), plVar4 != (longlong *)0x0)) {
    uVar10 = (**(code **)(*plVar4 + 0xa0))(plVar4);
    FUN_1484b65e6(local_98,uVar10);
    if (0 < (int)local_50) {
      lVar15 = 0;
      do {
        if (lVar15 < (int)plVar4[5]) {
          uVar18 = *(undefined8 *)(plVar4[4] + lVar15 * 8);
        }
        else {
          uVar18 = 0;
        }
        puVar21 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar21 = local_98;
        }
        *(undefined8 *)(puVar21 + lVar15 * 8) = uVar18;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)local_50);
    }
  }
  local_168 = (undefined8 *)0x0;
  cVar26 = (char)(param_4 & 0xffffffff);
  if ((cVar26 != '\0') && (*(longlong *)(puVar14 + 0x208) != 0)) {
    local_168 = *(undefined8 **)(*(longlong *)(puVar14 + 0x208) + 0x40);
  }
  puVar2 = local_168;
  FUN_1484b94c2(param_1,local_d8);
  if (param_1[0x458] != (code)0x1) {
    local_140 = &local_128;
    local_120 = (longlong *)&local_14c;
    local_118 = (undefined ***)&local_14b;
    local_110 = &local_14a;
    local_108 = &local_158;
    local_100 = &local_160;
    local_f8 = &local_168;
    local_e8 = &local_149;
    local_e0 = local_98;
    local_1a8 = &local_138;
    local_138 = 0;
    local_130 = 0;
    local_148 = &LAB_1484baa1e;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    local_128 = param_1;
    local_f0 = local_d8;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x450),1);
    goto LAB_143b6e100;
  }
  if (*(int *)(param_1 + 0x450) != 1) goto LAB_143b6e100;
  local_180 = (ulonglong *)**(longlong **)(param_1 + 0x448);
  local_178 = (LPCRITICAL_SECTION)(local_180 + 0xa3);
  EnterCriticalSection(local_178);
  cVar23 = (char)(param_2 & 0xffffffff);
  if (((cVar23 != '\0') || (param_3 != 0)) || (cVar26 != '\0')) {
    local_1b8 = (code **)(puVar14 + 0x140);
    param_1 = param_1 + 0x2a0;
    local_1a0 = &local_128;
    local_128 = FUN_1484c0146;
    local_1b0 = local_170;
    local_1a8 = puVar2;
    local_198 = cVar23;
    local_190 = param_3;
    local_188 = cVar26;
    local_120 = local_d8;
    FUN_1484b979a(param_1,local_180,puVar14,*(undefined4 *)(puVar14 + 0x170));
    param_5 = local_149;
  }
  if ((param_5 & 1) != 0) {
    FUN_1484ba52c(local_180,*(undefined4 *)(local_158 + 0x170),local_158 + 0x140,local_98);
  }
  uVar7 = local_14a;
  bVar6 = local_14b;
  uVar5 = local_14c;
  uVar18 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),local_14c);
  uVar24 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_14a);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar27 = DVar12 == DVar13;
      }
      else {
        bVar27 = iVar11 == 0x10;
      }
      if (!bVar27) goto LAB_143b6df74;
    }
LAB_143b6e555:
    FUN_1484b5b02(local_180,uVar18,
                  (uint)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),bVar6 | param_5) & 0xffffff01,
                  uVar24 & 0xffffffff);
    lpCriticalSection = local_178;
  }
  else {
    if (iVar11 == 0x10) goto LAB_143b6e555;
LAB_143b6df74:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar15 + 0xc60), iVar11 == 2))
      goto LAB_143b6e555;
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar12 == DVar13) goto LAB_143b6e555;
      }
    }
    ppuVar8 = local_f8;
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar17 = (uint *)*puVar2;
      if (puVar17 != (uint *)0x0) goto LAB_143b6e2ab;
      while( true ) {
        uVar19 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar19 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar19 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar2 = puVar16;
        FUN_140217a48(puVar2);
        puVar17 = (uint *)*puVar2;
LAB_143b6e2ab:
        puVar25 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar22 = (uint *)(puVar25 + 0x17);
        uVar19 = puVar17[0x12];
        if (puVar22 <= puVar17 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar3 = *puVar17;
          *puVar17 = *puVar17 + uVar19 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar19) != 0xffffffff) break;
          puVar17 = (uint *)*puVar2;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar2 = puVar17;
          puVar25 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar25 + 0x17);
          uVar19 = 0;
          if (puVar22 <= puVar17 + 0x4000) {
            uVar19 = 1;
            goto LAB_143b6e32d;
          }
        }
      }
      uVar19 = uVar19 + 1;
LAB_143b6e32d:
      *(uint **)(puVar17 + 0x10) = puVar22;
      puVar17[0x12] = uVar19;
      iVar11 = 0;
      FUN_1447247dc(puVar25,0);
      lpCriticalSection = local_178;
      *puVar25 = &PTR_FUN_14aeef7d8;
      puVar25[0x15] = local_180;
      *(undefined1 *)(puVar25 + 0x16) = uVar5;
      *(byte *)((longlong)puVar25 + 0xb1) = bVar6;
      *(undefined1 *)((longlong)puVar25 + 0xb2) = uVar7;
      *(byte *)((longlong)puVar25 + 0xb3) = param_5;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar19 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
          uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
          iVar11 = 0;
        }
        else {
          uVar24 = 2;
        }
      }
      else {
        iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar24 = 5;
      }
      if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
      }
      puVar25[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar25[9] = puVar25;
      puVar25[10] = puVar25;
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar9 = 1;
        if ((char)uVar24 != '\x06') {
          uVar9 = uVar24;
        }
        uVar24 = uVar9;
        uVar18 = 0;
      }
      else {
        if ((char)uVar24 == '\x06') {
          uVar24 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar18 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar25[0xf] = uVar18;
      puVar25[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar25 + 0x1c) = iVar11;
      if (puVar25 == (undefined8 *)0x0) {
        local_128 = (code *)CONCAT71(local_128._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
        UNLOCK();
        local_128 = (code *)CONCAT71(local_128._1_7_,1);
        FUN_1447439e4(puVar25);
        LOCK();
        piVar1 = (int *)(puVar25 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
    }
    else {
      local_1b8 = &local_128;
      local_118 = (undefined ***)0x0;
      local_108 = &PTR_LAB_14aeef760;
      local_100 = local_180;
      local_f8._4_4_ = SUB84(ppuVar8,4);
      local_f8._0_4_ = CONCAT13(param_5,CONCAT12(uVar7,CONCAT11(bVar6,uVar5)));
      local_128 = (code *)&LAB_1484ba9cc;
      FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyFastUpdateVertices",&DAT_14cb4c354);
      lpCriticalSection = local_178;
      if (local_128 != (code *)0x0) {
        pppuVar20 = local_118;
        if (local_118 == (undefined ***)0x0) {
          pppuVar20 = &local_108;
        }
        (*(code *)(*pppuVar20)[2])();
        lpCriticalSection = local_178;
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_143b6e100:
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b6e60e FUN_143b6e60e body=1311 status=ok
// SIG undefined FUN_143b6e60e(void)

void FUN_143b6e60e(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  byte local_158;
  byte local_150;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118 [3];
  longlong *plStack_100;
  undefined1 local_f8;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar7 = (longlong *)param_1[0xfb];
  if (plVar7 != (longlong *)0x0) {
    lVar13 = param_1[0xfc];
    uVar9 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar7 + 8))(plVar7,uVar9,lVar13);
LAB_143b6e847:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
  }
  lVar13 = param_1[0xf2];
  if ((((char)param_1[0x13b] != '\x01') || (lVar6 = param_1[0xb5], lVar6 == 0)) ||
     (cVar4 = (**(code **)(*param_1 + 0xb98))(param_1), cVar4 == '\0')) goto LAB_143b6e847;
  bVar11 = (byte)((param_3 & 0xffffffff) >> 4) & 0xf & lVar13 != 0;
  if (param_1[0xfa] == 0) {
    FUN_1484b2d8e(param_1,param_3 & 0xffffffff);
    if (bVar11 != 0) {
      FUN_1484b3266(lVar6);
    }
    (**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
  }
  local_118[0] = 0;
  local_118[1] = 0;
  lVar13 = param_2[1];
  local_140 = lVar6;
  if ((longlong)(int)lVar13 != 0) {
    lVar6 = *param_2;
    lVar12 = 0;
    do {
      local_a8[0] = (code *)CONCAT44(local_a8[0]._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)(param_1[0xfa] + 0x10) +
                                      (longlong)*(int *)(lVar6 + lVar12) * 4));
      FUN_1449e3bb0(local_118,local_a8);
      lVar12 = lVar12 + 4;
    } while ((longlong)(int)lVar13 * 4 != lVar12);
  }
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  lVar13 = local_140;
  if ((param_3 & 1) == 0) goto LAB_143b6e715;
  local_e8 = 0;
  local_d8 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aef04a0;
  local_a8[0] = FUN_143b748d8;
  plStack_80 = param_1;
  FUN_14170b918(local_118 + 2);
  plVar7 = plStack_100;
  lVar13 = local_118[2];
  local_f8 = 1;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar9 = FUN_14118da1c();
      bVar5 = FUN_14054d46e(uVar9,L"nothreading");
      DAT_14c83f0f8 = bVar5 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar3 = local_a8[0];
    if (DAT_14c83f0f8 == 1) goto LAB_143b6e97c;
    pppuVar10 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar10 = &local_88;
    }
    uVar9 = (*(code *)(*pppuVar10)[1])();
    (*pcVar3)(uVar9);
    *(undefined4 *)(local_118[2] + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_143b6e97c:
    plVar1 = DAT_14c8442c0;
    puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar8[1] = 0;
    *puVar8 = TAsyncQueuedWork<void>::vftable;
    puVar8[2] = local_a8[0];
    puVar8[4] = local_98;
    local_98 = (undefined ***)0x0;
    *(undefined4 *)(puVar8 + 8) = local_78;
    *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_74;
    *(undefined4 *)(puVar8 + 9) = uStack_70;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_6c;
    puVar8[6] = local_88;
    puVar8[7] = plStack_80;
    if (local_a8[0] != (code *)0x0) {
      local_a8[0] = (code *)0x0;
    }
    puVar8[10] = local_118[2];
    puVar8[0xb] = plStack_100;
    local_118[2] = 0;
    plStack_100 = (longlong *)0x0;
    *(undefined1 *)(puVar8 + 0xc) = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,3);
  }
  plVar1 = plStack_100;
  local_138 = lVar13;
  local_130 = plVar7;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_100 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar13 = local_140;
  if (local_a8[0] != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar10 = local_98;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
  if (local_e8 != 0) {
    plVar7 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar7 = local_c8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_14614a64a(&local_128,&local_138);
  plVar7 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143b6e715:
  local_150 = ((byte)param_3 & 8) >> 3;
  local_158 = ((byte)param_3 & 2) >> 1;
  FUN_143b6eb7a(lVar13,local_118,param_3 & 0xffffff01,
                CONCAT71((int7)((param_3 & 0xffffff04) >> 8),(byte)(param_3 & 0xffffff04) >> 2));
  if (bVar11 != 0) {
    FUN_1484b330e(lVar13,local_118);
  }
  if ((param_3 & 1) != 0) {
    FUN_1448c69c8(param_1);
    lVar13 = local_128;
    if (local_128 != 0) {
      do {
        do {
          lVar6 = lVar13;
          lVar13 = 0;
        } while (lVar6 == 0);
        plVar7 = *(longlong **)(lVar6 + 0x70);
        cVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
        lVar13 = local_128;
      } while (cVar4 == '\0');
    }
    (**(code **)(*param_1 + 0x540))(param_1);
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
  (**(code **)(*plVar7 + 0x2a8))(plVar7);
  plVar7 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6eb7a FUN_143b6eb7a body=660 status=ok
// SIG undefined FUN_143b6eb7a(void)

void FUN_143b6eb7a(longlong param_1,longlong param_2,char param_3,char param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined8 *local_148;
  longlong local_138;
  longlong local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  char *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  longlong local_b8;
  char local_ac;
  char local_ab;
  char local_aa;
  char local_a9;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_a9 = param_6;
  local_aa = param_5;
  local_ac = param_3;
  local_ab = param_4;
  if ((((param_3 != '\0') || (param_4 != '\0')) || (param_5 != '\0')) || (param_6 != '\0')) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
    local_c0 = 0;
    if ((param_4 != '\0') && (lVar4 = *(longlong *)(lVar3 + 0x208), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < 1) {
        local_c0 = 0;
      }
      else {
        local_c0 = **(undefined8 **)(lVar4 + 0x30);
      }
    }
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = lVar3;
    if ((param_6 != '\0') && (plVar1 = *(longlong **)(lVar3 + 0x208), plVar1 != (longlong *)0x0)) {
      uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1);
      FUN_1484bbc1a(&local_d8,uVar2);
      if (0 < (int)uStack_d0) {
        lVar4 = 0;
        do {
          if (lVar4 < (int)plVar1[5]) {
            uVar5 = *(undefined8 *)(plVar1[4] + lVar4 * 8);
          }
          else {
            uVar5 = 0;
          }
          *(undefined8 *)(local_d8 + lVar4 * 8) = uVar5;
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)uStack_d0);
      }
    }
    local_e0 = 0;
    if ((param_5 != '\0') && (*(longlong *)(lVar3 + 0x208) != 0)) {
      local_e0 = *(undefined8 *)(*(longlong *)(lVar3 + 0x208) + 0x40);
    }
    FUN_1484b94c2(param_1,local_88);
    local_a0 = &local_138;
    local_128 = &local_ac;
    local_120 = &local_ab;
    local_118 = &local_aa;
    local_110 = &local_b8;
    local_108 = &local_c0;
    local_100 = &local_e0;
    local_f0 = &local_a9;
    local_e8 = &local_d8;
    local_148 = &local_98;
    local_98 = 0;
    local_90 = 0;
    local_a8 = &LAB_1484bbd2e;
    local_150 = 0;
    local_138 = param_2;
    local_130 = param_1;
    local_f8 = local_88;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_2 + 8),1);
    if (local_88[0] != 0) {
      if (local_78 == (longlong *)0x0) {
        local_78 = local_68;
      }
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6ee10 FUN_143b6ee10 body=1630 status=ok
// SIG undefined FUN_143b6ee10(void)

void FUN_143b6ee10(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_158 [32];
  byte local_138;
  byte local_130;
  byte local_122;
  byte local_121;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  undefined1 local_d8;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar12 = (longlong *)param_1[0xfb];
  if (plVar12 != (longlong *)0x0) {
    lVar23 = param_1[0xfc];
    uVar14 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar12 + 8))(plVar12,uVar14,lVar23);
LAB_143b6f18d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  lVar23 = param_1[0xf2];
  if (((char)param_1[0x13b] != '\x01') || (lVar24 = param_1[0xb5], lVar24 == 0)) goto LAB_143b6f18d;
  bVar6 = (byte)param_3;
  cVar8 = (**(code **)(*param_1 + 0xb98))(param_1);
  if (cVar8 == '\0') goto LAB_143b6f18d;
  bVar21 = (byte)((param_3 & 0xffffffff) >> 4) & 0xf & lVar23 != 0;
  if (param_1[0xfa] == 0) {
    FUN_1484b2d8e(param_1,param_3 & 0xffffffff);
    if (bVar21 != 0) {
      FUN_1484b3266(lVar24);
    }
    (**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  iVar4 = (int)param_2[5];
  local_122 = bVar21;
  local_121 = bVar6;
  local_120 = lVar24;
  if (iVar4 == 0) {
    uVar25 = 1;
    uVar19 = 0;
    uVar20 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_2 + 2);
    }
    uVar15 = *puVar11;
    if (uVar15 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar19 = 0;
      uVar25 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar25 = uVar19;
      }
      uVar20 = 0;
      do {
        if (uVar25 == uVar19) goto LAB_143b6ef3d;
        uVar20 = (ulonglong)((int)uVar20 + 0x20);
        uVar15 = puVar11[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar19 = 0;
      uVar20 = 0;
    }
    uVar25 = (ulonglong)(-uVar15 & uVar15);
    uVar3 = uVar25 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar10 = ((int)uVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar10) {
      iVar10 = iVar4;
    }
  }
  if (iVar10 != iVar4) {
    uVar15 = 0xffffffff;
    do {
      local_88[0] = (code *)CONCAT44(local_88[0]._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)(param_1[0xfa] + 0x10) +
                                      (longlong)*(int *)(*param_2 + (longlong)iVar10 * 0xc) * 4));
      FUN_1449e3bb0(local_f8,local_88);
      uVar15 = ~(uint)uVar25 & uVar15;
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_2 + 2);
      }
      iVar5 = (int)param_2[5];
      iVar10 = (int)uVar19;
      lVar23 = (longlong)iVar10;
      uVar22 = puVar11[lVar23] & uVar15;
      if (uVar22 == 0) {
        iVar17 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar17 = iVar5 + -1;
        }
        iVar17 = iVar17 >> 5;
        uVar20 = (ulonglong)((int)uVar20 + 0x20);
        iVar18 = iVar17;
        if (iVar17 < iVar10) {
          iVar18 = iVar10;
        }
        if (iVar10 < iVar17) {
          lVar24 = 0;
          do {
            uVar22 = puVar11[lVar23 + lVar24 + 1];
            if (uVar22 != 0) {
              uVar19 = (ulonglong)(iVar10 + (int)lVar24 + 1);
              uVar15 = 0xffffffff;
              goto LAB_143b6f118;
            }
            uVar20 = (ulonglong)((int)uVar20 + 0x20);
            lVar24 = lVar24 + 1;
          } while (iVar18 - lVar23 != lVar24);
          uVar15 = 0xffffffff;
          iVar10 = iVar18;
        }
        uVar19 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar5;
      }
      else {
LAB_143b6f118:
        uVar25 = (ulonglong)(-uVar22 & uVar22);
        uVar3 = uVar25 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar10 = ((int)uVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar10) {
          iVar10 = iVar5;
        }
      }
    } while (iVar10 != iVar4);
  }
LAB_143b6ef3d:
  lVar23 = local_120;
  bVar21 = local_121;
  bVar6 = local_122;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  uVar19 = CONCAT71((int7)(uVar20 >> 8),local_121);
  if ((local_121 & 1) == 0) goto LAB_143b6ef5e;
  local_c8 = 0;
  local_b8 = (longlong *)0x0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aef04c0;
  local_88[0] = FUN_143b74914;
  plStack_60 = param_1;
  FUN_14170b918(local_f8 + 2);
  plVar12 = plStack_e0;
  lVar24 = local_f8[2];
  local_d8 = 1;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar14 = FUN_14118da1c();
      bVar9 = FUN_14054d46e(uVar14,L"nothreading");
      DAT_14c83f0f8 = bVar9 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar7 = local_88[0];
    if (DAT_14c83f0f8 == 1) goto LAB_143b6f2b1;
    pppuVar16 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar16 = &local_68;
    }
    uVar14 = (*(code *)(*pppuVar16)[1])();
    (*pcVar7)(uVar14);
    *(undefined4 *)(local_f8[2] + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_143b6f2b1:
    plVar1 = DAT_14c8442c0;
    puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar13[1] = 0;
    *puVar13 = TAsyncQueuedWork<void>::vftable;
    puVar13[2] = local_88[0];
    puVar13[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = local_58;
    *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_54;
    *(undefined4 *)(puVar13 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_4c;
    puVar13[6] = local_68;
    puVar13[7] = plStack_60;
    if (local_88[0] != (code *)0x0) {
      local_88[0] = (code *)0x0;
    }
    puVar13[10] = local_f8[2];
    puVar13[0xb] = plStack_e0;
    local_f8[2] = 0;
    plStack_e0 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar13,3);
  }
  plVar1 = plStack_e0;
  local_118 = lVar24;
  local_110 = plVar12;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_e0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar16 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar16 = local_78;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
  if (local_c8 != 0) {
    plVar12 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar12 = local_a8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_14614a64a(&local_108,&local_118);
  plVar12 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_143b6ef5e:
  local_130 = (bVar21 & 8) >> 3;
  local_138 = (bVar21 & 2) >> 1;
  uVar20 = uVar19 & 0xffffffffffffff04;
  FUN_143b6eb7a(lVar23,local_f8,uVar19 & 0xffffffffffffff01,
                CONCAT71((int7)(uVar20 >> 8),(byte)uVar20 >> 2));
  if (bVar6 != 0) {
    FUN_1484b330e(lVar23,local_f8);
  }
  if ((bVar21 & 1) != 0) {
    FUN_1448c69c8(param_1);
    lVar23 = local_108;
    if (local_108 != 0) {
      do {
        do {
          lVar24 = lVar23;
          lVar23 = 0;
        } while (lVar24 == 0);
        plVar12 = *(longlong **)(lVar24 + 0x70);
        cVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0);
        lVar23 = local_108;
      } while (cVar8 == '\0');
    }
    (**(code **)(*param_1 + 0x540))(param_1);
  }
  plVar12 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
  (**(code **)(*plVar12 + 0x2a8))(plVar12);
  plVar12 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6f4aa FUN_143b6f4aa body=554 status=ok
// SIG undefined FUN_143b6f4aa(void)

void FUN_143b6f4aa(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4,
                  undefined8 param_5,double *param_6)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  bVar1 = (byte)param_3;
  lVar5 = *param_4;
  if (*param_4 == 0) {
    lVar5 = 0;
  }
  else {
    do {
      do {
        lVar4 = lVar5;
        lVar5 = 0;
      } while (lVar4 == 0);
      plVar3 = *(longlong **)(lVar4 + 0x70);
      cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      lVar5 = *param_4;
    } while (cVar2 == '\0');
  }
  while ((*(byte *)(lVar5 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x20))(*(longlong **)(lVar5 + 0x70),0xffffffff,0);
  }
  if ((((*(char *)(lVar5 + 0x80) != '\0') && ((char)param_1[0x13b] == '\x01')) &&
      (param_1[0xb5] != 0)) && (cVar2 = (**(code **)(*param_1 + 0xb98))(param_1), cVar2 != '\0')) {
    if ((char)param_1[0x13b] == '\x01') {
      lVar5 = param_1[0xb5];
    }
    else {
      lVar5 = 0;
    }
    if (param_1[0xf2] == 0) {
      FUN_143b6eb7a(lVar5,param_5,param_3 & 0xffffff01,
                    CONCAT71((int7)((param_3 & 0xffffff04) >> 8),(byte)(param_3 & 0xffffff04) >> 2),
                    (bVar1 & 2) >> 1,(bVar1 & 8) >> 3);
    }
    else {
      FUN_143b6eb7a(lVar5,param_5,param_3 & 0xffffff01,
                    CONCAT71((int7)((param_3 & 0xffffff04) >> 8),(byte)(param_3 & 0xffffff04) >> 2),
                    (bVar1 & 2) >> 1,(bVar1 & 8) >> 3);
      if ((param_3 & 0x10) != 0) {
        FUN_1484b330e(lVar5,param_5);
      }
    }
    if ((param_3 & 1) != 0) {
      FUN_1448c69c8(param_1);
      dVar6 = (double)param_1[0x123];
      if (*param_6 <= (double)param_1[0x123]) {
        dVar6 = *param_6;
      }
      param_1[0x123] = (longlong)dVar6;
      dVar6 = (double)param_1[0x124];
      if (param_6[1] <= (double)param_1[0x124]) {
        dVar6 = param_6[1];
      }
      param_1[0x124] = (longlong)dVar6;
      dVar6 = (double)param_1[0x125];
      if (param_6[2] <= (double)param_1[0x125]) {
        dVar6 = param_6[2];
      }
      param_1[0x125] = (longlong)dVar6;
      dVar6 = (double)param_1[0x126];
      if ((double)param_1[0x126] <= param_6[3]) {
        dVar6 = param_6[3];
      }
      param_1[0x126] = (longlong)dVar6;
      dVar6 = (double)param_1[0x127];
      if ((double)param_1[0x127] <= param_6[4]) {
        dVar6 = param_6[4];
      }
      param_1[0x127] = (longlong)dVar6;
      dVar6 = (double)param_1[0x128];
      if ((double)param_1[0x128] <= param_6[5]) {
        dVar6 = param_6[5];
      }
      param_1[0x128] = (longlong)dVar6;
      (**(code **)(*param_1 + 0x540))(param_1);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000143b6f6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2a8))(plVar3);
    return;
  }
  FUN_143b6e60e(param_1,param_2,param_3 & 0xffffffff);
  return;
}



// FUNCTION 143b6f6e2 FUN_143b6f6e2 body=172 status=ok
// SIG undefined FUN_143b6f6e2(void)

undefined8 FUN_143b6f6e2(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_14cb4c158;
  if ((*(char *)(param_1 + 0x24a) == '\x01') && (*(longlong *)(param_1 + 8) != 0)) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x170);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
      uVar6 = 0;
    }
    else if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    iVar2 = *(int *)(lVar3 + uVar6 * 4);
    if ((iVar2 < 0) || (iVar1 <= iVar2)) {
      if (0 < iVar1) {
        return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
    }
    else if (DAT_14cb4c16c == '\0') {
      DAT_14cb4c16c = '\x01';
    }
  }
  return 0;
}



// FUNCTION 143b6f78e FUN_143b6f78e body=286 status=ok
// SIG undefined FUN_143b6f78e(void)

longlong FUN_143b6f78e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 < 1) {
    lVar4 = FUN_1484b7d1a(DAT_14c951640);
    plVar1 = (longlong *)(param_1 + 0x38);
    if (*DAT_14cb4c330 <= *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) < 0) {
        FUN_1484c1928(plVar1);
      }
      plVar2 = DAT_14cb0d2b0;
      fVar5 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x388))(DAT_14cb0d2b0,0);
      *(float *)(plVar2 + 0x1e4) = fVar5 + 1.0;
      *(undefined1 *)((longlong)plVar2 + 0xf24) = 1;
    }
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_1484c1958(plVar1,iVar3);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar3 * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
      FUN_1456cec3c(lVar4);
      iVar3 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar3 + -1;
  }
  return lVar4;
}



// FUNCTION 143b6f8ac FUN_143b6f8ac body=55 status=ok
// SIG undefined FUN_143b6f8ac(void)

void FUN_143b6f8ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c1e0 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4c1e0 = FUN_14171c317(FUN_146491ef6,uVar1,L"EDynamicMeshChangeType");
  }
  return;
}



// FUNCTION 143b6f8e3 FUN_143b6f8e3 body=55 status=ok
// SIG undefined FUN_143b6f8e3(void)

void FUN_143b6f8e3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c1f8 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4c1f8 = FUN_14171c317(FUN_146491f25,uVar1,L"EDynamicMeshAttributeChangeFlags");
  }
  return;
}



// FUNCTION 143b6f91a FUN_143b6f91a body=158 status=ok
// SIG undefined FUN_143b6f91a(void)

void FUN_143b6f91a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_14582ec3a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    FUN_142972772(*(undefined8 *)(param_1 + 0x98),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 143b6f9b9 FUN_143b6f9b9 body=69 status=ok
// SIG undefined FUN_143b6f9b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6f9b9(void)

{
  _DAT_14cb4c298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b6f9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c2a0,1);
  return;
}



// FUNCTION 143b6f9fe FUN_143b6f9fe body=69 status=ok
// SIG undefined FUN_143b6f9fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6f9fe(void)

{
  _DAT_14cb4c2b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b6fa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c2b8,1);
  return;
}



// FUNCTION 143b6fa43 FUN_143b6fa43 body=41 status=ok
// SIG undefined FUN_143b6fa43(void)

void FUN_143b6fa43(void)

{
  DAT_14cb4c310 = 0;
  if (DAT_14cb4c308 != 0) {
    FUN_1400020a8();
  }
  FUN_1461734c8();
  return;
}



// FUNCTION 143b6fa6c FUN_143b6fa6c body=1375 status=ok
// SIG undefined FUN_143b6fa6c(void)

void FUN_143b6fa6c(undefined8 param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined **local_3c0;
  undefined8 **local_3b8 [4];
  byte local_398;
  longlong *local_368;
  longlong local_348;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined1 local_2d0;
  longlong local_2c8 [3];
  wchar_t **local_2b0;
  int local_2a8;
  wchar_t *local_2a0;
  wchar_t **local_298;
  undefined8 *local_290;
  wchar_t ***local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  wchar_t *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_2a0 = param_2;
  cVar2 = FUN_140988638(&local_2a0,L"MeshData",1);
  _Str = local_2a0;
  if (cVar2 != '\0') {
    lVar4 = FUN_144a29ec4(local_2a0,L"MESHKEY=",0);
    if (lVar4 != 0) {
      _Str = (wchar_t *)(lVar4 + 0x10);
      local_2a0 = _Str;
      iVar3 = _wtoi(_Str);
      FUN_1484b8bdc(&local_290,iVar3);
      puVar1 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        if (0 < *(int *)(local_290 + 0x2e)) {
          FUN_14582ec3a(param_1);
          local_260 = (wchar_t *)((ulonglong)local_260 & 0xffffffffff000000);
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          local_3b8[0] = &local_280;
          local_280 = puVar1;
          local_3c0 = (undefined **)&LAB_143b77364;
          FUN_1484b8434(param_1,&local_3c0,&local_260,0);
          (**(code **)*puVar1)(puVar1,1);
          goto LAB_143b6fab5;
        }
        (**(code **)*local_290)(local_290,1);
      }
    }
    lVar4 = FUN_144a29ec4(_Str,L"MESHDATALEN=",0);
    if (lVar4 != 0) {
      iVar3 = _wtoi((wchar_t *)(lVar4 + 0x18));
      lVar4 = FUN_144a29ec4((wchar_t *)(lVar4 + 0x18),L"MESHDATA=",0);
      if (lVar4 != 0) {
        FUN_14006620a(&local_2b0,lVar4 + 0x12,iVar3);
        if (local_2a8 - 2U < 0x7fffffff) {
          lVar4 = 0;
          do {
            if (*(short *)((longlong)local_2b0 + lVar4 * 2) == 0x2d) {
              *(undefined2 *)((longlong)local_2b0 + lVar4 * 2) = 0x2f;
            }
            lVar4 = lVar4 + 1;
            iVar3 = local_2a8 + -1;
            if (local_2a8 == 0) {
              iVar3 = 0;
            }
          } while (lVar4 < iVar3);
        }
        local_2c8[0] = 0;
        local_2c8[1] = 0;
        cVar2 = FUN_1468029ae(&local_2b0,local_2c8,0);
        if (cVar2 != '\0') {
          memset(&local_3c0,0,0x90);
          FUN_144869430(&local_3c0);
          local_330 = 0;
          local_3c0 = &PTR_FUN_149e1e050;
          local_320 = 0x7fffffffffffffff;
          local_398 = local_398 | 1;
          local_328 = local_2c8;
          FUN_1449c2eca(&local_3c0,0);
          local_3c8 = 0;
          FUN_1411b354a(&local_260,0,0,0);
          FUN_142972772(&local_260,&local_3c0);
          FUN_14582ec3a(param_1);
          local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffffff000000);
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          local_288 = &local_298;
          local_290 = (undefined8 *)&LAB_143b77364;
          local_298 = &local_260;
          FUN_1484b8434(param_1,&local_290,&local_280,0);
          FUN_141082778(&local_260);
          local_3c0 = &PTR__purecall_149e35f70;
          if (local_368 != (longlong *)0x0) {
            if (*local_368 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_368);
          }
          if (local_348 != 0) {
            if (*(longlong *)(local_348 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_348);
          }
          if (local_2c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_2b0 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_143b6fab5;
        }
        if (local_2c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_2b0 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
      }
    }
    local_260 = L"DynamicMeshPasteFailed";
    local_258._0_4_ = 0x16;
    FUN_1446e940c(&local_280,&local_260);
    local_260 = L"UDynamicMesh";
    local_258._0_4_ = 0xc;
    FUN_1446e940c(&local_290,&local_260);
    local_260 = L"Dynamic Mesh paste failed! See log for details.";
    local_258 = CONCAT44(local_258._4_4_,0x2f);
    FUN_140208c1e(&local_3c0,&local_290,&local_280,&local_260);
    if (local_3c0 != (undefined **)0x0) {
      (**(code **)(*local_3c0 + 0x10))();
    }
    memset(local_3b8,0,0x91);
    local_3c0 = &PTR_FUN_14ae97758;
    local_2d0 = 1;
    local_2d8 = DAT_14c846520 * 50.0;
    local_2e0 = DAT_14c846518 * 50.0;
    local_2e8 = DAT_14c846510 * 50.0;
    local_320 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_318 = (undefined4)DAT_14c8464e8;
    uStack_314 = DAT_14c8464e8._4_4_;
    local_310 = DAT_14c8464f0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    local_2f0 = 0x3ff0000000000000;
    uVar5 = FUN_1483f67ec(&local_3c0);
    FUN_146c00d92(&local_260,uVar5);
    FUN_14582ed9a(local_58);
    local_280 = (undefined8 *)((ulonglong)local_280 & 0xffffffffff000000);
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_288 = &local_2b0;
    local_290 = (undefined8 *)&LAB_143b77364;
    local_2b0 = &local_260;
    FUN_1484b8434(param_1,&local_290,&local_280,0);
    FUN_141082778(&local_260);
    FUN_146bd8050(&local_3c0);
  }
LAB_143b6fab5:
  if ((local_40 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b6ffcc FUN_143b6ffcc body=69 status=ok
// SIG undefined FUN_143b6ffcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b6ffcc(void)

{
  _DAT_14cb4c320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b7000e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4c328,1);
  return;
}



// FUNCTION 143b70012 FUN_143b70012 body=48 status=ok
// SIG undefined FUN_143b70012(void)

longlong FUN_143b70012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7004a FUN_143b7004a body=48 status=ok
// SIG undefined FUN_143b7004a(void)

longlong FUN_143b7004a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b70082 FUN_143b70082 body=48 status=ok
// SIG undefined FUN_143b70082(void)

longlong FUN_143b70082(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x6b8;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b700ba FUN_143b700ba body=329 status=ok
// SIG undefined FUN_143b700ba(void)

void FUN_143b700ba(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x175) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143b7011f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_143b7011f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x58)) {
      uVar4 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return;
}



// FUNCTION 143b70204 FUN_143b70204 body=359 status=ok
// SIG undefined FUN_143b70204(void)

void FUN_143b70204(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b70296;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143b70296:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 143b7036c FUN_143b7036c body=304 status=ok
// SIG undefined FUN_143b7036c(void)

void FUN_143b7036c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143b703cd;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_143b703cd:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 143b7049c FUN_143b7049c body=346 status=ok
// SIG undefined FUN_143b7049c(void)

void FUN_143b7049c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b7052e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143b7052e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143b705f6 FUN_143b705f6 body=47 status=ok
// SIG undefined FUN_143b705f6(void)

void FUN_143b705f6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143b7064c FUN_143b7064c body=282 status=ok
// SIG undefined FUN_143b7064c(void)

undefined8 * FUN_143b7064c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b70766 FUN_143b70766 body=107 status=ok
// SIG undefined FUN_143b70766(void)

void FUN_143b70766(undefined8 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = 1;
  if (*(char *)((longlong)param_1 + 0xb1) == '\0') {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0xb3);
  }
  FUN_1484b5b02(param_1[0x15],*(undefined1 *)(param_1 + 0x16),uVar2,
                *(undefined1 *)((longlong)param_1 + 0xb2));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b707c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143b707d2 FUN_143b707d2 body=1896 status=ok
// SIG undefined FUN_143b707d2(void)

void FUN_143b707d2(longlong *param_1,int param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  undefined8 unaff_RBP;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 *puVar24;
  size_t unaff_R15;
  longlong lVar25;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  code **local_f0;
  byte local_e8;
  byte local_e0;
  byte local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  int local_a0;
  undefined4 local_9c;
  code *local_98;
  longlong local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  byte local_55;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = *param_1;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x448) + (longlong)param_2 * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0x518);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(lVar7 + 8) == 0) || (*(int *)(lVar7 + 0x374) == -1)) goto LAB_143b70969;
  bVar22 = *(byte *)param_1[1];
  ppuVar18 = (undefined1 **)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar22);
  if ((bVar22 == 0) && ((*(byte *)param_1[2] & 1) == 0)) {
    if (*(char *)param_1[3] == '\x01') {
      bVar21 = 1;
      bVar23 = 0;
      goto LAB_143b709f7;
    }
  }
  else {
    bVar23 = bVar22 ^ 1 | *(byte *)param_1[2];
    bVar21 = *(byte *)param_1[3];
LAB_143b709f7:
    local_90 = param_1[7];
    local_98 = FUN_1484c0146;
    local_a8 = (undefined1 *)0x0;
    local_a0 = *(int *)(lVar7 + 0x370);
    lVar25 = (longlong)local_a0;
    if (lVar25 == 0) {
      local_9c = 0;
      uVar20 = 0;
      unaff_R15 = 0;
      local_100 = *(undefined8 *)param_1[5];
      local_f8 = *(undefined8 *)param_1[6];
    }
    else {
      local_d0 = *(void **)(lVar7 + 0x368);
      local_c8 = *(undefined8 *)param_1[5];
      local_c0 = *(undefined8 *)param_1[6];
      FUN_144a06ca8(&local_a8,local_a0,0);
      unaff_R15 = lVar25 << 2;
      memcpy(local_a8,local_d0,unaff_R15);
      uVar20 = *(undefined4 *)(lVar7 + 0x370);
      local_100 = local_c8;
      local_f8 = local_c0;
    }
    local_d8 = bVar21 & 1;
    local_e0 = bVar23 & 1;
    local_f0 = &local_98;
    local_108 = &local_a8;
    local_e8 = bVar22;
    FUN_1484baa26(lVar6,lVar7,*(undefined8 *)param_1[4],uVar20);
  }
  bVar22 = *(byte *)param_1[8];
  if (bVar22 == 1) {
    ppuVar18 = (undefined1 **)param_1[9];
    local_b8 = (void *)0x0;
    local_b0 = *(int *)(lVar7 + 0x370);
    lVar25 = (longlong)local_b0;
    _Src = *(void **)(lVar7 + 0x368);
    if (lVar25 == 0) {
      local_ac = 0;
      uVar20 = 0;
      unaff_R15 = 0;
    }
    else {
      FUN_144a06ca8(&local_b8,local_b0,0);
      unaff_R15 = lVar25 << 2;
      memcpy(local_b8,_Src,unaff_R15);
      uVar20 = *(undefined4 *)(lVar7 + 0x370);
    }
    local_108 = ppuVar18;
    FUN_1484bab94(lVar6,lVar7,uVar20,&local_b8);
    bVar22 = *(byte *)param_1[8];
  }
  uVar4 = *(undefined1 *)param_1[1];
  bVar21 = *(byte *)param_1[2];
  uVar5 = *(undefined1 *)param_1[3];
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143b708aa;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143b70e88;
      goto LAB_143b708b3;
    }
  }
  else {
LAB_143b708aa:
    if (iVar9 != 0x10) {
LAB_143b708b3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar6 + 0xc60), iVar9 == 2))
        goto LAB_143b70e88;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143b70e88;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143b70b9f;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143b70625);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143b70b9f:
          puVar24 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar24 + 0x17);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar24 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar24 + 0x17);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143b70c21;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143b70c21:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar24,0);
        *puVar24 = &PTR_FUN_14aeef810;
        puVar24[0x15] = lVar7;
        *(undefined1 *)(puVar24 + 0x16) = uVar4;
        *(byte *)((longlong)puVar24 + 0xb1) = bVar21;
        *(undefined1 *)((longlong)puVar24 + 0xb2) = uVar5;
        *(byte *)((longlong)puVar24 + 0xb3) = bVar22;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar9 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar8 = 1;
          if ((char)uVar19 != '\x06') {
            uVar8 = uVar19;
          }
          uVar19 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar24[0xf] = uVar14;
        puVar24[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar9;
        if (puVar24 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar24);
          LOCK();
          piVar1 = (int *)(puVar24 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
      }
      else {
        local_108 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14aeef7f0;
        local_88[0] = &LAB_1484bba7c;
        local_60 = lVar7;
        local_58 = uVar4;
        local_57 = bVar21;
        local_56 = uVar5;
        local_55 = bVar22;
        FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyFastUpdateVertices",&DAT_14cb4c358);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar16 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar16 = &local_68;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_143b70969;
    }
  }
LAB_143b70e88:
  FUN_1484b5b02(lVar7,CONCAT71((int7)(unaff_R15 >> 8),uVar4) & 0xffffffff,
                (uint)CONCAT71((int7)((ulonglong)ppuVar18 >> 8),bVar21 | bVar22) & 0xffffff01,
                CONCAT71((int7)((ulonglong)param_1 >> 8),uVar5) & 0xffffffff);
LAB_143b70969:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b70f3c FUN_143b70f3c body=282 status=ok
// SIG undefined FUN_143b70f3c(void)

undefined8 * FUN_143b70f3c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b71056 FUN_143b71056 body=107 status=ok
// SIG undefined FUN_143b71056(void)

void FUN_143b71056(undefined8 *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = 1;
  if (*(char *)((longlong)param_1 + 0xb1) == '\0') {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0xb3);
  }
  FUN_1484b5b02(param_1[0x15],*(undefined1 *)(param_1 + 0x16),uVar2,
                *(undefined1 *)((longlong)param_1 + 0xb2));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b710b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143b710c2 FUN_143b710c2 body=1297 status=ok
// SIG undefined FUN_143b710c2(void)

void FUN_143b710c2(longlong *param_1,int param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x448) + (longlong)param_2 * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x518);
  EnterCriticalSection(lpCriticalSection);
  if (0 < *(int *)(lVar5 + 8)) {
    FUN_1484b637e(lVar4 + 0x2a0,lVar5,*(undefined8 *)param_1[1]);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143b7112f;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143b71538;
      goto LAB_143b71138;
    }
  }
  else {
LAB_143b7112f:
    if (iVar7 != 0x10) {
LAB_143b71138:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143b71538;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143b71538;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143b712c4;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143b70625);
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
LAB_143b712c4:
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
              goto LAB_143b71344;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143b71344:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aeef8a0;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aeef820;
        local_68[0] = &LAB_1484bbb80;
        local_40 = lVar5;
        FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyFastUpdateAllIndexBuffers",
                      &DAT_14cb4c35c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143b711d7;
    }
  }
LAB_143b71538:
  FUN_1484bbad6(lVar5);
LAB_143b711d7:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b715d4 FUN_143b715d4 body=282 status=ok
// SIG undefined FUN_143b715d4(void)

undefined8 * FUN_143b715d4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b716ee FUN_143b716ee body=1931 status=ok
// SIG undefined FUN_143b716ee(void)

void FUN_143b716ee(undefined8 *param_1,int param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Src;
  ulonglong uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  undefined8 unaff_RBP;
  code **ppcVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  code **local_f0;
  byte local_e8;
  byte local_e0;
  byte local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  code *local_a8;
  int local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  char local_55;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar11 = *(int *)(*(longlong *)*param_1 + (longlong)param_2 * 4);
  if (((longlong)iVar11 < 0) || (lVar8 = param_1[1], *(int *)(lVar8 + 0x450) <= iVar11))
  goto LAB_143b718b1;
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x448) + (longlong)iVar11 * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x518);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(lVar9 + 8) != 0) && (*(int *)(lVar9 + 0x374) != -1)) {
    bVar4 = *(byte *)param_1[2];
    ppcVar20 = (code **)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar4);
    if ((bVar4 == 0) && ((*(byte *)param_1[3] & 1) == 0)) {
      if (*(char *)param_1[4] == '\x01') {
        bVar24 = 1;
        bVar25 = 0;
        goto LAB_143b71931;
      }
    }
    else {
      bVar25 = bVar4 ^ 1 | *(byte *)param_1[3];
      bVar24 = *(byte *)param_1[4];
LAB_143b71931:
      local_90 = param_1[8];
      local_98 = FUN_1484c0146;
      local_a8 = (code *)0x0;
      local_a0 = *(int *)(lVar9 + 0x370);
      lVar27 = (longlong)local_a0;
      if (lVar27 == 0) {
        local_9c = 0;
        uVar22 = 0;
        local_100 = *(undefined8 *)param_1[6];
        local_f8 = *(undefined8 *)param_1[7];
      }
      else {
        local_d0 = *(void **)(lVar9 + 0x368);
        local_c8 = *(undefined8 *)param_1[6];
        local_c0 = *(undefined8 *)param_1[7];
        FUN_144a06ca8(&local_a8,local_a0,0);
        memcpy(local_a8,local_d0,lVar27 << 2);
        uVar22 = *(undefined4 *)(lVar9 + 0x370);
        local_100 = local_c8;
        local_f8 = local_c0;
      }
      local_d8 = bVar24 & 1;
      local_e0 = bVar25 & 1;
      local_f0 = &local_98;
      local_108 = &local_a8;
      local_e8 = bVar4;
      FUN_1484baa26(lVar8,lVar9,*(undefined8 *)param_1[5],uVar22);
    }
    cVar23 = *(char *)param_1[9];
    if (cVar23 == '\x01') {
      ppcVar20 = (code **)param_1[10];
      local_b8 = (void *)0x0;
      local_b0 = *(int *)(lVar9 + 0x370);
      lVar27 = (longlong)local_b0;
      _Src = *(void **)(lVar9 + 0x368);
      if (lVar27 == 0) {
        local_ac = 0;
        uVar22 = 0;
      }
      else {
        FUN_144a06ca8(&local_b8,local_b0,0);
        memcpy(local_b8,_Src,lVar27 << 2);
        uVar22 = *(undefined4 *)(lVar9 + 0x370);
      }
      local_108 = ppcVar20;
      FUN_1484bbd36(lVar8,lVar9,uVar22,&local_b8);
      cVar23 = *(char *)param_1[9];
    }
    uVar5 = *(undefined1 *)param_1[2];
    uVar6 = *(undefined1 *)param_1[3];
    uVar7 = *(undefined1 *)param_1[4];
    lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar11 = *(int *)(lVar27 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar11 != 2) {
        if (iVar11 != 1) goto LAB_143b717e5;
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar12 == DVar13) goto LAB_143b71db9;
        goto LAB_143b717ee;
      }
    }
    else {
LAB_143b717e5:
      if (iVar11 != 0x10) {
LAB_143b717ee:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar27 + 0xc60), iVar11 == 2))
          goto LAB_143b71db9;
          if (iVar11 == 1) {
            DVar12 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            if (DVar12 == DVar13) goto LAB_143b71db9;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar15 = (uint *)*puVar2;
          if (puVar15 != (uint *)0x0) goto LAB_143b71ad2;
          while( true ) {
            uVar17 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar17 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar17 | 1;
              __tlregdtor(&LAB_143b70625);
            }
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar14 = *(undefined4 **)(lVar8 + 0x310);
            *(undefined8 *)(lVar8 + 0x310) = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            FUN_140217a48(puVar2);
            puVar15 = (uint *)*puVar2;
LAB_143b71ad2:
            puVar26 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar26 + 0x17);
            uVar17 = puVar15[0x12];
            if (puVar19 <= puVar15 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar3 = *puVar15;
              *puVar15 = *puVar15 + uVar17 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar17) != 0xffffffff) break;
              puVar15 = (uint *)*puVar2;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar2 = puVar15;
              puVar26 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar26 + 0x17);
              uVar17 = 0;
              if (puVar19 <= puVar15 + 0x4000) {
                uVar17 = 1;
                goto LAB_143b71b52;
              }
            }
          }
          uVar17 = uVar17 + 1;
LAB_143b71b52:
          *(uint **)(puVar15 + 0x10) = puVar19;
          puVar15[0x12] = uVar17;
          iVar11 = 0;
          FUN_1447247dc(puVar26,0);
          *puVar26 = &PTR_FUN_14aeef938;
          puVar26[0x15] = lVar9;
          *(undefined1 *)(puVar26 + 0x16) = uVar5;
          *(undefined1 *)((longlong)puVar26 + 0xb1) = uVar6;
          *(undefined1 *)((longlong)puVar26 + 0xb2) = uVar7;
          *(char *)((longlong)puVar26 + 0xb3) = cVar23;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar17 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
              uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
              iVar11 = 0;
            }
            else {
              uVar21 = 2;
            }
          }
          else {
            iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar21 = 5;
          }
          if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
          }
          puVar26[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar26[9] = puVar26;
          puVar26[10] = puVar26;
          lVar8 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar8 == 0) {
            uVar10 = 1;
            if ((char)uVar21 != '\x06') {
              uVar10 = uVar21;
            }
            uVar21 = uVar10;
            uVar16 = 0;
          }
          else {
            if ((char)uVar21 == '\x06') {
              uVar21 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
            }
            uVar16 = *(undefined8 *)(lVar8 + 0x30);
          }
          puVar26[0xf] = uVar16;
          puVar26[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar26 + 0x1c) = iVar11;
          if (puVar26 == (undefined8 *)0x0) {
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
            UNLOCK();
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar26);
            LOCK();
            piVar1 = (int *)(puVar26 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar26)(puVar26,1);
            }
          }
        }
        else {
          local_108 = local_88;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14aeef8b0;
          local_88[0] = FUN_1484bc162;
          local_60 = lVar9;
          local_58 = uVar5;
          local_57 = uVar6;
          local_56 = uVar7;
          local_55 = cVar23;
          FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyFastUpdateVerticesBufferList",
                        &DAT_14cb4c360);
          if (local_88[0] != (code *)0x0) {
            pppuVar18 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar18 = &local_68;
            }
            (*(code *)(*pppuVar18)[2])();
          }
        }
        goto LAB_143b718a3;
      }
    }
LAB_143b71db9:
    local_100 = CONCAT71(local_100._1_7_,uVar7);
    local_108 = (code **)(CONCAT71(local_108._1_7_,cVar23) & 0xffffffffffffff01);
    FUN_1484b5d14(lVar9,&DAT_14ca85100,CONCAT71((int7)((ulonglong)ppcVar20 >> 8),uVar5) & 0xffffffff
                  ,CONCAT71((int7)((ulonglong)lVar8 >> 8),uVar6) & 0xffffffff);
  }
LAB_143b718a3:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_143b718b1:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b71e7a FUN_143b71e7a body=282 status=ok
// SIG undefined FUN_143b71e7a(void)

undefined8 * FUN_143b71e7a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b71f94 FUN_143b71f94 body=1330 status=ok
// SIG undefined FUN_143b71f94(void)

void FUN_143b71f94(longlong *param_1,int param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  if (((longlong)iVar7 < 0) || (lVar4 = *param_1, *(int *)(lVar4 + 0x450) <= iVar7))
  goto LAB_143b720d8;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x448) + (longlong)iVar7 * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x518);
  EnterCriticalSection(lpCriticalSection);
  if (0 < *(int *)(lVar5 + 8)) {
    FUN_1484b637e(lVar4 + 0x2a0,lVar5,*(undefined8 *)param_1[2]);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143b72022;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143b7242b;
      goto LAB_143b7202b;
    }
LAB_143b7242b:
    FUN_1484bbad6(lVar5);
  }
  else {
LAB_143b72022:
    if (iVar7 == 0x10) goto LAB_143b7242b;
LAB_143b7202b:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_143b7242b;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143b7242b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143b721b7;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143b70625);
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
LAB_143b721b7:
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
            goto LAB_143b72237;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143b72237:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14aeef9d8;
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar16[0xf] = uVar12;
      puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar7;
      if (puVar16 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14aeef950;
      local_68[0] = &LAB_1484bc242;
      local_40 = lVar5;
      FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers",
                    &DAT_14cb4c364);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_143b720d8:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b724c8 FUN_143b724c8 body=282 status=ok
// SIG undefined FUN_143b724c8(void)

undefined8 * FUN_143b724c8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b725e2 FUN_143b725e2 body=463 status=ok
// SIG undefined FUN_143b725e2(void)

ulonglong * FUN_143b725e2(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  param_2[1] = 0;
  param_2[2] = 0;
  bVar3 = FUN_14480c900(0,param_3);
  bVar4 = FUN_144914152();
  lVar2 = DAT_14ca9ecb8;
  uVar13 = 2;
  uVar14 = 0;
  if (*(char *)(param_1 + 0x40a) == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    uVar13 = 0;
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar11 = 0;
    }
    else if (iVar1 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar7 != DVar8);
    }
    else {
      uVar11 = 1;
    }
    uVar9 = 1;
    if (*(int *)(lVar2 + uVar11 * 4) == 1) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0xac8))();
      uVar9 = 0;
      uVar13 = 2;
      if (cVar5 == '\0') {
        bVar15 = *(char *)(*(longlong *)(param_1 + 0x298) + 0x684) == '\0';
        uVar9 = (uint)bVar15;
        uVar13 = (uint)!bVar15 * 2;
      }
    }
  }
  else {
    uVar9 = 0;
  }
  uVar6 = (*(byte *)(param_1 + 0x6e) & 8) << 4;
  uVar12 = (uint)bVar4 << 3 | (uint)bVar3 << 2;
  if (DAT_14c761ae8 - 1U < 3) {
    uVar14 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  cVar5 = *(char *)(param_1 + 0x82);
  bVar3 = *(byte *)(param_1 + 0x72);
  uVar11 = *(ulonglong *)(param_1 + 0x438);
  *param_2 = uVar11;
  if (((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
    if ((uVar11 & 0x200000000) == 0) goto LAB_143b72755;
  }
  else if ((uVar11 & 0x200000000) == 0 || (*(byte *)(param_1 + 0x75) & 200) == 0) {
LAB_143b72755:
    uVar10 = 0;
    goto LAB_143b72757;
  }
  uVar10 = (uVar12 & 0xffffff80 | uVar6) >> 3;
LAB_143b72757:
  *(uint *)(param_2 + 2) =
       uVar10 | uVar12 | uVar9 | uVar13 | uVar6 |
       uVar14 | (bVar3 & 1) << 0xe | (uint)(cVar5 != '\x01') << 0xd;
  return param_2;
}



// FUNCTION 143b727b2 FUN_143b727b2 body=1504 status=ok
// SIG undefined FUN_143b727b2(void)

void FUN_143b727b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Src;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  code **local_c8;
  undefined1 local_c0;
  longlong local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = *(undefined8 **)(**(longlong **)*param_1 + (longlong)param_2 * 8);
  iVar8 = *(int *)(puVar3 + 1);
  if (iVar8 < 1) goto LAB_143b727f2;
  lVar4 = param_1[1];
  local_b0 = *(longlong *)(*(longlong *)(lVar4 + 0x448) + (longlong)param_2 * 8);
  if (puVar3 != (undefined8 *)(local_b0 + 0x368)) {
    FUN_148374760((undefined8 *)(local_b0 + 0x368),puVar3);
    iVar8 = *(int *)(puVar3 + 1);
  }
  local_90 = param_1[6];
  local_98 = FUN_1484c0146;
  uVar13 = *(undefined8 *)param_1[5];
  uVar5 = *(undefined8 *)param_1[4];
  uVar6 = *(undefined8 *)param_1[3];
  local_a8 = (undefined1 *)0x0;
  _Src = (void *)*puVar3;
  local_a0 = iVar8;
  if (iVar8 == 0) {
    local_9c = 0;
    uVar19 = 0;
  }
  else {
    FUN_144a06ca8(&local_a8,iVar8,0);
    memcpy(local_a8,_Src,(longlong)iVar8 << 2);
    uVar19 = *(undefined4 *)(puVar3 + 1);
  }
  lVar20 = local_b0;
  local_c8 = &local_98;
  local_e8 = &local_a8;
  local_c0 = 0;
  local_e0 = uVar6;
  local_d8 = uVar5;
  local_d0 = uVar13;
  FUN_1484bc5c8(lVar4,local_b0,*(undefined8 *)param_1[2],uVar19);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        bVar21 = DVar9 == DVar10;
      }
      else {
        bVar21 = iVar8 == 0x10;
      }
      lVar20 = local_b0;
      if (!bVar21) goto LAB_143b7292f;
    }
  }
  else if (iVar8 != 0x10) {
LAB_143b7292f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
      goto LAB_143b72cee;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_143b72cee;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar3;
      if (puVar12 != (uint *)0x0) goto LAB_143b72a79;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar3 = puVar11;
        FUN_140217a48(puVar3);
        puVar12 = (uint *)*puVar3;
LAB_143b72a79:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x16);
        uVar14 = puVar12[0x12];
        if (puVar16 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar3;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x16);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_143b72af9;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143b72af9:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      iVar8 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14aeefd08;
      puVar18[0x15] = lVar20;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          iVar8 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar7 = 1;
        if ((char)uVar17 != '\x06') {
          uVar7 = uVar17;
        }
        uVar17 = uVar7;
        uVar13 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar18[0xf] = uVar13;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar8;
      if (puVar18 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_e8 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aeefc80;
      local_88[0] = &LAB_1484bd6ea;
      local_60 = lVar20;
      FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyInitializeFromDecomposition",
                    &DAT_14cb4c370);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar15 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar15 = &local_68;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
    goto LAB_143b727f2;
  }
LAB_143b72cee:
  FUN_1484b585e(lVar20);
LAB_143b727f2:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b72d94 FUN_143b72d94 body=282 status=ok
// SIG undefined FUN_143b72d94(void)

undefined8 * FUN_143b72d94(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b72eae FUN_143b72eae body=2582 status=ok
// SIG undefined FUN_143b72eae(void)

void FUN_143b72eae(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 auStack_218 [32];
  longlong **local_1f8;
  undefined8 local_1f0;
  void **local_1e8;
  longlong local_1e0;
  code **local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  void **local_1b8;
  int *local_1b0;
  undefined8 *local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  undefined4 local_17c;
  code *local_178;
  longlong *local_170;
  longlong local_168;
  undefined8 uStack_160;
  int local_14c;
  longlong local_148;
  longlong local_140;
  undefined1 *local_138;
  longlong **local_130;
  void *local_128;
  undefined8 uStack_120;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  undefined1 local_d8 [64];
  undefined1 *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined ***local_78;
  longlong *local_70;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_140 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  plVar2 = *(longlong **)(local_140 + 0x208);
  if ((plVar2 != (longlong *)0x0) && (plVar2[9] != 0)) {
    if ((int)plVar2[7] < 1) {
      local_1b8 = (void **)0x0;
    }
    else {
      local_1b8 = *(void ***)plVar2[6];
    }
    local_190 = plVar2[8];
    local_98 = (undefined1 *)0x0;
    local_90 = 0x800000000;
    local_148 = plVar2[9];
    uVar4 = (**(code **)(*plVar2 + 0xa0))(plVar2);
    FUN_1484b65e6(local_d8,uVar4);
    if (0 < (int)local_90) {
      lVar9 = 0;
      do {
        if (lVar9 < (int)plVar2[5]) {
          uVar12 = *(undefined8 *)(plVar2[4] + lVar9 * 8);
        }
        else {
          uVar12 = 0;
        }
        puVar15 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar15 = local_d8;
        }
        *(undefined8 *)(puVar15 + lVar9 * 8) = uVar12;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)local_90);
    }
    FUN_1484b94c2(param_1,local_118,0);
    local_14c = (int)param_2[1];
    local_168 = 0;
    uStack_160 = 0;
    FUN_1484bd784(&local_168);
    if (0 < local_14c) {
      lVar9 = 0;
      do {
        LOCK();
        *(undefined4 *)(local_168 + lVar9 * 4) = 0;
        UNLOCK();
        lVar9 = lVar9 + 1;
      } while (lVar9 < local_14c);
    }
    local_88 = &local_140;
    local_130 = &local_88;
    local_80 = &local_148;
    local_78 = (undefined ***)&local_14c;
    local_128 = (void *)0x0;
    uStack_120 = (ulonglong)uStack_120._4_4_ << 0x20;
    local_138 = &LAB_1484bda64;
    local_1f0 = (undefined1 *)((ulonglong)local_1f0._4_4_ << 0x20);
    local_1e8 = &local_128;
    local_70 = &local_168;
    FUN_1401f8d10(L"ParallelFor Task");
    if ((longlong)(int)uStack_160 == 0) {
      local_128 = (void *)0x0;
      uStack_120 = 0;
    }
    else {
      lVar9 = 0;
      iVar18 = 0;
      do {
        iVar3 = *(int *)(local_168 + lVar9);
        if (*(int *)(local_168 + lVar9) < iVar18) {
          iVar3 = iVar18;
        }
        iVar18 = iVar3;
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)uStack_160 * 4 != lVar9);
      local_128 = (void *)0x0;
      uStack_120 = 0;
      if (iVar18 != 0) {
        FUN_14481578e(&local_128);
      }
    }
    if (0 < local_14c) {
      lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_1d0 = (undefined8 *)(lVar9 + 0x308);
      local_1a8 = (undefined8 *)(lVar9 + 0x310);
      local_198 = 0x527800b400;
      local_1b0 = (int *)(lVar9 + 0xc60);
      local_1a0 = (longlong *)(lVar9 + 0x2b8);
      uVar16 = 0;
      local_1c8 = param_2;
      do {
        if (0 < *(int *)(local_168 + uVar16 * 4)) {
          local_1c0 = *(longlong *)(*param_2 + uVar16 * 8);
          bVar25 = (longlong)uStack_120 < 0;
          uStack_120 = uStack_120 & 0xffffffff00000000;
          if (bVar25) {
            FUN_14481578e(&local_128,0);
          }
          lVar9 = local_140;
          uVar21 = *(int *)(local_140 + 0x140) * 0x200 + *(int *)(local_140 + 0x144);
          uVar6 = 0;
          if ((uVar21 != 0) &&
             (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_140 + 0x148) - 1U))) {
            uVar5 = 1;
            uVar17 = 1;
            if (1 < (int)uVar21) {
              uVar5 = uVar21;
            }
            do {
              uVar6 = uVar5;
              if (uVar5 == uVar17) break;
              uVar14 = uVar17 >> 9;
              uVar20 = uVar17 & 0x1ff;
              uVar6 = uVar17;
              uVar17 = uVar17 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_140 + 0x148))[uVar14] +
                                                 (ulonglong)uVar20 * 2) - 1U));
          }
LAB_143b732ff:
          uVar23 = uStack_120;
          _Src = local_128;
          if (uVar6 != uVar21) {
            if (uVar16 == *(uint *)(*(longlong *)
                                     (*(longlong *)(local_148 + 0x20) + (ulonglong)(uVar6 >> 9) * 8)
                                   + (ulonglong)(uVar6 & 0x1ff) * 4)) {
              lVar22 = (longlong)(int)uStack_120;
              uVar5 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
              if (uStack_120._4_4_ < uVar5) {
                FUN_1446f48e2(&local_128,uVar23 & 0xffffffff);
              }
              *(uint *)((longlong)local_128 + lVar22 * 4) = uVar6;
            }
            uVar5 = uVar6 + 1;
            if ((int)(uVar6 + 1) < (int)uVar21) {
              uVar5 = uVar21;
            }
            uVar17 = uVar6;
            do {
              uVar6 = uVar5;
              if (uVar5 - 1 == uVar17) break;
              uVar6 = uVar17 + 1;
              uVar17 = uVar6;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar9 + 0x148) +
                                                   (ulonglong)(uVar6 >> 9) * 8) +
                                                 (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
            goto LAB_143b732ff;
          }
          local_170 = local_118;
          local_178 = FUN_1484c0146;
          local_188 = (longlong *)0x0;
          lVar9 = (longlong)(int)uStack_120;
          local_180 = (int)uStack_120;
          if (lVar9 == 0) {
            local_17c = 0;
            uVar23 = 0;
          }
          else {
            FUN_144a06ca8(&local_188,uStack_120 & 0xffffffff,0);
            memcpy(local_188,_Src,lVar9 << 2);
            uVar23 = uStack_120 & 0xffffffff;
          }
          lVar9 = local_1c0;
          param_2 = local_1c8;
          puVar19 = local_1d0;
          local_1f8 = &local_188;
          local_1d8 = &local_178;
          local_1e0 = local_190;
          local_1e8 = local_1b8;
          local_1f0 = local_d8;
          FUN_1484bd7f2(param_1,local_1c0,local_140,uVar23);
          if (&local_128 != (void **)(lVar9 + 0x368)) {
            FUN_148374760();
          }
          iVar18 = *local_1b0;
          if (DAT_14c86a9fc == 0) {
            if (iVar18 != 2) {
              if (iVar18 == 1) {
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                bVar25 = DVar7 == DVar8;
              }
              else {
                bVar25 = iVar18 == 0x10;
              }
              puVar19 = local_1d0;
              param_2 = local_1c8;
              lVar9 = local_1c0;
              if (!bVar25) goto LAB_143b73424;
            }
          }
          else if (iVar18 != 0x10) {
LAB_143b73424:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (*local_1b0 == 2)) goto LAB_143b737b6;
              if (*local_1b0 == 1) {
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143b737b6;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar11 = (uint *)*puVar19;
              if (puVar11 != (uint *)0x0) goto LAB_143b73567;
              do {
                puVar24 = local_1a8;
                uVar6 = *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318);
                if ((uVar6 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar6 | 1;
                  __tlregdtor(&LAB_143b70625);
                }
                puVar10 = (undefined4 *)*puVar24;
                *puVar24 = 0;
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar10 = 0xffffffff;
                *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                puVar10[0x12] = 0;
                *puVar19 = puVar10;
                FUN_140217a48(puVar19);
                puVar11 = (uint *)*puVar19;
LAB_143b73567:
                uVar23 = *(longlong *)(puVar11 + 0x10) + 7;
                uVar6 = puVar11[0x12];
                while( true ) {
                  puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
                  if (puVar24 + 0x16 <= puVar11 + 0x4000) {
                    *(undefined8 **)(puVar11 + 0x10) = puVar24 + 0x16;
                    puVar11[0x12] = uVar6 + 1;
                    FUN_1447247dc(puVar24,0);
                    *puVar24 = &PTR_FUN_14aeefd98;
                    puVar24[0x15] = lVar9;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar6 = DAT_14c7585c8 >> 10 & 3;
                      iVar18 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
                        uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
                      }
                      else {
                        uVar23 = 2;
                      }
                    }
                    else {
                      iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar23 = 5;
                    }
                    if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                    }
                    puVar24[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar24[9] = puVar24;
                    puVar24[10] = puVar24;
                    lVar9 = *local_1a0;
                    if (lVar9 == 0) {
                      if ((char)uVar23 == '\x06') {
                        uVar23 = 1;
                      }
                      uVar12 = 0;
                    }
                    else {
                      if ((char)uVar23 == '\x06') {
                        uVar23 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
                      }
                      uVar12 = *(undefined8 *)(lVar9 + 0x30);
                    }
                    puVar24[0xf] = uVar12;
                    puVar24[0x10] = (uVar23 << 0x3b) + local_198 | 0xc000000000000000;
                    *(int *)((longlong)puVar24 + 0x1c) = iVar18;
                    if (puVar24 == (undefined8 *)0x0) {
                      local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
                      FUN_1447439e4(0);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                      UNLOCK();
                      local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
                      FUN_1447439e4(puVar24);
                      LOCK();
                      piVar1 = (int *)(puVar24 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar24)(puVar24);
                      }
                    }
                    goto LAB_143b731a6;
                  }
                  *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                  LOCK();
                  uVar21 = *puVar11;
                  *puVar11 = *puVar11 + uVar6 + 1;
                  UNLOCK();
                  if ((uVar21 ^ uVar6) != 0xffffffff) break;
                  puVar11 = (uint *)*puVar19;
                  *puVar11 = 0xffffffff;
                  *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                  puVar11[0x12] = 0;
                  *puVar19 = puVar11;
                  uVar23 = (longlong)puVar11 + 0x5f;
                  uVar6 = 0;
                }
              } while( true );
            }
            local_78 = (undefined ***)0x0;
            local_68 = &PTR_LAB_14aeefd20;
            local_88 = (longlong *)&LAB_1484be922;
            local_1f8 = &local_88;
            local_60 = lVar9;
            FUN_14005a792(&DAT_14ca9a440);
            if (local_88 != (longlong *)0x0) {
              pppuVar13 = local_78;
              if (local_78 == (undefined ***)0x0) {
                pppuVar13 = &local_68;
              }
              (*(code *)(*pppuVar13)[2])();
            }
            goto LAB_143b731a6;
          }
LAB_143b737b6:
          FUN_1484b585e(lVar9);
        }
LAB_143b731a6:
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)local_14c);
    }
    if (local_128 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_118[0] != 0) {
      if (local_108 == (longlong *)0x0) {
        local_108 = local_f8;
      }
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_98 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b738c6 FUN_143b738c6 body=1603 status=ok
// SIG undefined FUN_143b738c6(void)

void FUN_143b738c6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  undefined1 *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 auStack_168 [32];
  code **local_148;
  undefined1 *local_140;
  undefined8 local_138;
  longlong local_130;
  code **local_128;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  undefined1 local_d8 [64];
  undefined1 *local_98;
  undefined8 local_90;
  code *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  local_98 = (undefined1 *)0x0;
  local_90 = 0x800000000;
  plVar4 = *(longlong **)(lVar10 + 0x208);
  if (plVar4 == (longlong *)0x0) {
    lVar11 = 0;
    uVar14 = 0;
  }
  else {
    if ((int)plVar4[7] < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)plVar4[6];
    }
    uVar6 = (**(code **)(*plVar4 + 0xa0))(plVar4);
    FUN_1484b65e6(local_d8,uVar6);
    if (0 < (int)local_90) {
      lVar11 = 0;
      do {
        if (lVar11 < (int)plVar4[5]) {
          uVar16 = *(undefined8 *)(plVar4[4] + lVar11 * 8);
        }
        else {
          uVar16 = 0;
        }
        puVar18 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar18 = local_d8;
        }
        *(undefined8 *)(puVar18 + lVar11 * 8) = uVar16;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)local_90);
    }
    lVar11 = plVar4[8];
  }
  FUN_1484b94c2(param_1,local_118,0);
  local_148 = (code **)(lVar10 + 0x140);
  local_88 = FUN_1484c0146;
  local_140 = local_d8;
  local_138 = uVar14;
  local_130 = lVar11;
  local_128 = &local_88;
  local_80 = local_118;
  FUN_1484b6662(param_1 + 0x2a0,param_2,lVar10,*(undefined4 *)(lVar10 + 0x170));
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143b73a40;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143b73e6e;
      goto LAB_143b73a49;
    }
  }
  else {
LAB_143b73a40:
    if (iVar7 != 0x10) {
LAB_143b73a49:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 == 2))
        goto LAB_143b73e6e;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143b73e6e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143b73bf9;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143b70625);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143b73bf9:
          puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x16);
          uVar15 = puVar13[0x12];
          if (puVar19 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar21 + 0x16);
            uVar15 = 0;
            if (puVar19 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143b73c79;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143b73c79:
        *(uint **)(puVar13 + 0x10) = puVar19;
        puVar13[0x12] = uVar15;
        iVar7 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14aeefe20;
        puVar21[0x15] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar7 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar5 = 1;
          if ((char)uVar20 != '\x06') {
            uVar5 = uVar20;
          }
          uVar20 = uVar5;
          uVar14 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar21[0xf] = uVar14;
        puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar7;
        if (puVar21 == (undefined8 *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14aeefdb0;
        local_88 = (code *)&LAB_1484be9bc;
        local_148 = &local_88;
        local_60 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FDynamicMeshSceneProxyInitializeSingle",&DAT_14cb4c378);
        if (local_88 != (code *)0x0) {
          pppuVar17 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar17 = &local_68;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_143b73afc;
    }
  }
LAB_143b73e6e:
  FUN_1484b585e(param_2);
LAB_143b73afc:
  if (local_118[0] != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b73f0a FUN_143b73f0a body=282 status=ok
// SIG undefined FUN_143b73f0a(void)

undefined8 * FUN_143b73f0a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b74024 FUN_143b74024 body=282 status=ok
// SIG undefined FUN_143b74024(void)

undefined8 * FUN_143b74024(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b74162 FUN_143b74162 body=12 status=ok
// SIG undefined FUN_143b74162(void)

void FUN_143b74162(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b7416b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b7416e FUN_143b7416e body=29 status=ok
// SIG undefined FUN_143b7416e(void)

undefined8 FUN_143b7416e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7418c FUN_143b7418c body=282 status=ok
// SIG undefined FUN_143b7418c(void)

undefined8 * FUN_143b7418c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b70625);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b742ee FUN_143b742ee body=359 status=ok
// SIG undefined FUN_143b742ee(void)

void FUN_143b742ee(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143b74380;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143b74380:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 143b74456 FUN_143b74456 body=76 status=ok
// SIG undefined FUN_143b74456(void)

void FUN_143b74456(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *param_2 = 0;
  (**(code **)(*(longlong *)*param_1 + 0xc58))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b744ce FUN_143b744ce body=29 status=ok
// SIG undefined FUN_143b744ce(void)

undefined8 FUN_143b744ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b744ec FUN_143b744ec body=199 status=ok
// SIG undefined FUN_143b744ec(void)

void FUN_143b744ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)*param_1 == '\x01') {
    puVar1 = (undefined8 *)param_1[1];
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = puVar1[2];
    uStack_40 = puVar1[3];
    local_38 = puVar1[4];
    uStack_30 = puVar1[5];
    local_28 = puVar1[6];
    local_20 = *(undefined4 *)(puVar1 + 8);
    uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x44);
    uStack_18 = *(undefined4 *)(puVar1 + 9);
    uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x4c);
    local_10 = puVar1[10];
    FUN_146c3cfa5(param_2,&local_58,1);
  }
  else {
    puVar1 = (undefined8 *)param_1[1];
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_48 = puVar1[2];
    uStack_40 = puVar1[3];
    local_38 = puVar1[4];
    uStack_30 = puVar1[5];
    local_28 = puVar1[6];
    local_20 = *(undefined4 *)(puVar1 + 8);
    uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x44);
    uStack_18 = *(undefined4 *)(puVar1 + 9);
    uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x4c);
    local_10 = puVar1[10];
    FUN_146c3cd49(param_2,&local_58,1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b745b4 FUN_143b745b4 body=278 status=ok
// SIG undefined FUN_143b745b4(void)

void FUN_143b745b4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(longlong *)(param_2 + 0x208) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), lVar2 != 0)) {
    uVar6 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar9 = 0;
    if ((uVar6 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar7 = 1;
      uVar8 = 1;
      if (1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      do {
        uVar9 = uVar7;
        if (uVar7 == uVar8) break;
        uVar3 = uVar8 >> 9;
        uVar5 = uVar8 & 0x1ff;
        uVar9 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                           (ulonglong)uVar5 * 2) - 1U));
    }
LAB_143b746c1:
    if (uVar9 != uVar6) {
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4);
      iVar4 = *(int *)*param_1;
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
      *(int *)*param_1 = iVar4;
      uVar7 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar6) {
        uVar7 = uVar6;
      }
      uVar8 = uVar9;
      do {
        uVar9 = uVar7;
        if (uVar7 - 1 == uVar8) break;
        uVar9 = uVar8 + 1;
        uVar8 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      goto LAB_143b746c1;
    }
  }
  return;
}



// FUNCTION 143b746ca FUN_143b746ca body=166 status=ok
// SIG undefined FUN_143b746ca(void)

void FUN_143b746ca(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x28) < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = **(longlong **)(lVar1 + 0x20);
    }
    if ((0 < *(int *)(lVar1 + 0x38)) &&
       (lVar1 = **(longlong **)(lVar1 + 0x30), lVar1 != 0 && lVar2 != 0)) {
      lVar2 = *param_1;
      *(longlong *)(lVar2 + 0x808) = param_2;
      local_12 = 0x101;
      FUN_146c3a866(lVar2 + 0x808,lVar1);
      *(undefined8 *)(lVar2 + 0x808) = 0;
      *(undefined1 *)(lVar2 + 0x801) = 1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b74772 FUN_143b74772 body=34 status=ok
// SIG undefined FUN_143b74772(void)

undefined8
FUN_143b74772(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  FUN_1484b4f82(*param_2,param_1,*param_3,*param_4);
  return param_1;
}



// FUNCTION 143b747be FUN_143b747be body=29 status=ok
// SIG undefined FUN_143b747be(void)

undefined8 FUN_143b747be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b747dc FUN_143b747dc body=80 status=ok
// SIG undefined FUN_143b747dc(void)

void FUN_143b747dc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x750);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar3 = (longlong *)(lVar1 + 0x770);
    if (*(longlong **)(lVar1 + 0x760) != (longlong *)0x0) {
      plVar3 = *(longlong **)(lVar1 + 0x760);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b74821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143b74842 FUN_143b74842 body=29 status=ok
// SIG undefined FUN_143b74842(void)

undefined8 FUN_143b74842(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b74860 FUN_143b74860 body=8 status=ok
// SIG undefined FUN_143b74860(void)

void FUN_143b74860(undefined8 *param_1)

{
  FUN_145c68728(*param_1);
  return;
}



// FUNCTION 143b7486c FUN_143b7486c body=5 status=ok
// SIG undefined FUN_143b7486c(void)

longlong FUN_143b7486c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b74872 FUN_143b74872 body=12 status=ok
// SIG undefined FUN_143b74872(void)

void FUN_143b74872(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b7487b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b7487e FUN_143b7487e body=29 status=ok
// SIG undefined FUN_143b7487e(void)

undefined8 FUN_143b7487e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7489c FUN_143b7489c body=8 status=ok
// SIG undefined FUN_143b7489c(void)

void FUN_143b7489c(undefined8 *param_1)

{
  FUN_145c68728(*param_1);
  return;
}



// FUNCTION 143b748a8 FUN_143b748a8 body=5 status=ok
// SIG undefined FUN_143b748a8(void)

longlong FUN_143b748a8(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b748ae FUN_143b748ae body=12 status=ok
// SIG undefined FUN_143b748ae(void)

void FUN_143b748ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b748b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b748ba FUN_143b748ba body=29 status=ok
// SIG undefined FUN_143b748ba(void)

undefined8 FUN_143b748ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b748d8 FUN_143b748d8 body=8 status=ok
// SIG undefined FUN_143b748d8(void)

void FUN_143b748d8(undefined8 *param_1)

{
  FUN_145c68728(*param_1);
  return;
}



// FUNCTION 143b748e4 FUN_143b748e4 body=5 status=ok
// SIG undefined FUN_143b748e4(void)

longlong FUN_143b748e4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b748ea FUN_143b748ea body=12 status=ok
// SIG undefined FUN_143b748ea(void)

void FUN_143b748ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b748f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b748f6 FUN_143b748f6 body=29 status=ok
// SIG undefined FUN_143b748f6(void)

undefined8 FUN_143b748f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b74914 FUN_143b74914 body=8 status=ok
// SIG undefined FUN_143b74914(void)

void FUN_143b74914(undefined8 *param_1)

{
  FUN_145c68728(*param_1);
  return;
}



// FUNCTION 143b74920 FUN_143b74920 body=5 status=ok
// SIG undefined FUN_143b74920(void)

longlong FUN_143b74920(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b74926 FUN_143b74926 body=12 status=ok
// SIG undefined FUN_143b74926(void)

void FUN_143b74926(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b7492f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b74932 FUN_143b74932 body=29 status=ok
// SIG undefined FUN_143b74932(void)

undefined8 FUN_143b74932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b74954 FUN_143b74954 body=1335 status=ok
// SIG undefined FUN_143b74954(void)

undefined8 FUN_143b74954(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108;
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar11 = *param_1;
  local_b8 = 0;
  local_a8 = (longlong *)0x0;
  uStack_40 = param_1[1];
  local_48 = param_1[3];
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aef0500;
  local_78 = FUN_143b74ed2;
  uStack_50 = uVar11;
  FUN_14170b918(&local_f8);
  plVar5 = plStack_f0;
  lVar4 = local_f8;
  local_e8 = (longlong *)CONCAT71(local_e8._1_7_,1);
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar10 = FUN_14118da1c();
        bVar8 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar8 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar6 = local_78;
    if (DAT_14c83f0f8 == 1) goto LAB_143b74a37;
    pppuVar13 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar13 = &local_58;
    }
    uVar10 = (*(code *)(*pppuVar13)[1])();
    (*pcVar6)(uVar10);
    *(undefined4 *)(local_f8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_143b74a37:
    plVar12 = DAT_14c8442c0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar9[1] = 0;
    *puVar9 = TAsyncQueuedWork<void>::vftable;
    puVar9[2] = local_78;
    puVar9[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar9 + 0x44) = local_48._4_4_;
    *(undefined4 *)(puVar9 + 9) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_40._4_4_;
    puVar9[6] = local_58;
    puVar9[7] = uStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar9[10] = local_f8;
    puVar9[0xb] = plStack_f0;
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    (**(code **)(*plVar12 + 0x18))(plVar12,puVar9,3);
  }
  plVar12 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_f0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar13 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar13 = &local_58;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_b8 != 0) {
    plVar12 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar12 = local_98;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  uStack_40 = param_1[1];
  local_48 = param_1[2];
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aef0520;
  local_78 = FUN_143b7529a;
  uStack_50 = uVar11;
  FUN_14170b918(&local_118);
  plVar12 = plStack_110;
  lVar3 = local_118;
  local_108 = 1;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar11 = FUN_14118da1c();
        bVar8 = FUN_14054d46e(uVar11,L"nothreading");
        DAT_14c83f0f8 = bVar8 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar6 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar13 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar13 = &local_58;
      }
      uVar11 = (*(code *)(*pppuVar13)[1])();
      (*pcVar6)(uVar11);
      *(undefined4 *)(local_118 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b74cee;
    }
  }
  plVar14 = DAT_14c8442c0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar9[1] = 0;
  *puVar9 = TAsyncQueuedWork<void>::vftable;
  puVar9[2] = local_78;
  puVar9[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar9 + 8) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar9 + 0x44) = local_48._4_4_;
  *(undefined4 *)(puVar9 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_40._4_4_;
  puVar9[6] = local_58;
  puVar9[7] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar9[10] = local_118;
  puVar9[0xb] = plStack_110;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  (**(code **)(*plVar14 + 0x18))(plVar14,puVar9,3);
LAB_143b74cee:
  plVar14 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar13 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar13 = local_68;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  if (local_f8 != 0) {
    plVar14 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar14 = local_d8;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (lVar3 != 0) {
    do {
      plVar14 = *(longlong **)(lVar3 + 0x70);
      cVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0);
    } while (cVar7 == '\0');
  }
  if (lVar4 != 0) {
    do {
      plVar14 = *(longlong **)(lVar4 + 0x70);
      cVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0);
    } while (cVar7 == '\0');
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b74e90 FUN_143b74e90 body=5 status=ok
// SIG undefined FUN_143b74e90(void)

longlong FUN_143b74e90(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b74e96 FUN_143b74e96 body=29 status=ok
// SIG undefined FUN_143b74e96(void)

void FUN_143b74e96(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b74eb4 FUN_143b74eb4 body=29 status=ok
// SIG undefined FUN_143b74eb4(void)

undefined8 FUN_143b74eb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b74ed2 FUN_143b74ed2 body=337 status=ok
// SIG undefined FUN_143b74ed2(void)

void FUN_143b74ed2(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  longlong local_a0;
  undefined8 local_98;
  LPCRITICAL_SECTION local_90;
  undefined8 *local_88;
  int local_7c;
  code *local_78;
  undefined4 **local_70;
  undefined8 local_68;
  undefined4 local_60;
  _RTL_CRITICAL_SECTION local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = param_1[2];
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0xa88))();
  local_d8 = 0x7fefffffffffffff;
  uStack_d0 = 0x7fefffffffffffff;
  local_c8 = 0x7fefffffffffffff;
  uStack_c0 = 0xffefffffffffffff;
  local_b8 = 0xffefffffffffffff;
  uStack_b0 = 0xffefffffffffffff;
  InitializeCriticalSection(&local_58);
  SetCriticalSectionSpinCount(&local_58,4000);
  local_7c = *(int *)(lVar1 + 8);
  local_a8 = &local_7c;
  iVar4 = local_7c + 0xfff;
  if (-1 < local_7c) {
    iVar4 = local_7c;
  }
  local_70 = &local_a8;
  local_e8 = &local_68;
  local_68 = 0;
  local_60 = 0;
  local_78 = FUN_143b75058;
  local_f0 = 0;
  local_a0 = lVar1;
  local_98 = uVar3;
  local_90 = &local_58;
  local_88 = &local_d8;
  FUN_1401f8d10(L"ParallelFor Task",(iVar4 >> 0xc) + 1,1);
  DeleteCriticalSection(&local_58);
  puVar2 = (undefined4 *)param_1[1];
  puVar2[8] = (undefined4)local_b8;
  puVar2[9] = local_b8._4_4_;
  puVar2[10] = (undefined4)uStack_b0;
  puVar2[0xb] = uStack_b0._4_4_;
  puVar2[4] = (undefined4)local_c8;
  puVar2[5] = local_c8._4_4_;
  puVar2[6] = (undefined4)uStack_c0;
  puVar2[7] = uStack_c0._4_4_;
  *puVar2 = (undefined4)local_d8;
  puVar2[1] = local_d8._4_4_;
  puVar2[2] = (undefined4)uStack_d0;
  puVar2[3] = uStack_d0._4_4_;
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b75028 FUN_143b75028 body=5 status=ok
// SIG undefined FUN_143b75028(void)

longlong FUN_143b75028(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b7502e FUN_143b7502e body=12 status=ok
// SIG undefined FUN_143b7502e(void)

void FUN_143b7502e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b75037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b7503a FUN_143b7503a body=29 status=ok
// SIG undefined FUN_143b7503a(void)

undefined8 FUN_143b7503a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75058 FUN_143b75058 body=577 status=ok
// SIG undefined FUN_143b75058(void)

void FUN_143b75058(undefined8 *param_1,int *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  lVar8 = (longlong)*param_2 << 0xc;
  uVar18 = 0xffffffff;
  uVar19 = 0xffefffff;
  uVar26 = 0xffffffff;
  uVar27 = 0x7fefffff;
  lVar9 = 0x1000;
  uVar20 = uVar18;
  uVar21 = uVar19;
  uVar23 = uVar18;
  uVar25 = uVar19;
  uVar22 = uVar26;
  uVar24 = uVar27;
  uVar28 = uVar26;
  uVar29 = uVar27;
  do {
    if (lVar8 < *(int *)*param_1) {
      uVar2 = *(uint *)(*(longlong *)param_1[1] + lVar8 * 4);
      lVar4 = *(longlong *)(param_1[2] + 0x10);
      lVar5 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      uVar11 = (ulonglong)uVar2 & 0x1ff;
      uVar2 = *(uint *)(lVar5 + uVar11 * 0xc);
      uVar3 = *(uint *)(lVar5 + 4 + uVar11 * 0xc);
      lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
      uVar10 = (ulonglong)uVar2 & 0x1ff;
      dVar13 = *(double *)(lVar6 + uVar10 * 0x18);
      dVar14 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
      dVar15 = dVar13;
      if ((double)CONCAT44(uVar27,uVar26) <= dVar13) {
        dVar15 = (double)CONCAT44(uVar27,uVar26);
      }
      if (dVar13 <= (double)CONCAT44(uVar19,uVar18)) {
        dVar13 = (double)CONCAT44(uVar19,uVar18);
      }
      dVar16 = dVar14;
      if ((double)CONCAT44(uVar29,uVar28) <= dVar14) {
        dVar16 = (double)CONCAT44(uVar29,uVar28);
      }
      if (dVar14 <= (double)CONCAT44(uVar21,uVar20)) {
        dVar14 = (double)CONCAT44(uVar21,uVar20);
      }
      dVar17 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
      uVar18 = SUB84(dVar17,0);
      uVar19 = (int)((ulonglong)dVar17 >> 0x20);
      if ((double)CONCAT44(uVar24,uVar22) <= dVar17) {
        uVar18 = uVar22;
        uVar19 = uVar24;
      }
      if (dVar17 <= (double)CONCAT44(uVar25,uVar23)) {
        dVar17 = (double)CONCAT44(uVar25,uVar23);
      }
      lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
      uVar10 = (ulonglong)uVar3 & 0x1ff;
      dVar1 = *(double *)(lVar6 + uVar10 * 0x18);
      uVar22 = SUB84(dVar1,0);
      uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar12 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
      uVar23 = uVar22;
      uVar25 = uVar24;
      if (dVar15 <= dVar1) {
        uVar23 = SUB84(dVar15,0);
        uVar25 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      if (dVar1 <= dVar13) {
        uVar22 = SUB84(dVar13,0);
        uVar24 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      dVar13 = dVar12;
      if (dVar16 <= dVar12) {
        dVar13 = dVar16;
      }
      if (dVar12 <= dVar14) {
        dVar12 = dVar14;
      }
      dVar14 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
      dVar15 = dVar14;
      if ((double)CONCAT44(uVar19,uVar18) <= dVar14) {
        dVar15 = (double)CONCAT44(uVar19,uVar18);
      }
      if (dVar14 <= dVar17) {
        dVar14 = dVar17;
      }
      uVar2 = *(uint *)(lVar5 + 8 + uVar11 * 0xc);
      lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
      uVar10 = (ulonglong)uVar2 & 0x1ff;
      dVar16 = *(double *)(lVar4 + uVar10 * 0x18);
      uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar17 = *(double *)(lVar4 + 8 + uVar10 * 0x18);
      uVar20 = SUB84(dVar17,0);
      uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
      uVar26 = SUB84(dVar16,0);
      uVar27 = uVar19;
      if ((double)CONCAT44(uVar25,uVar23) <= dVar16) {
        uVar26 = uVar23;
        uVar27 = uVar25;
      }
      uVar18 = SUB84(dVar16,0);
      if (dVar16 <= (double)CONCAT44(uVar24,uVar22)) {
        uVar18 = uVar22;
        uVar19 = uVar24;
      }
      uVar28 = uVar20;
      uVar29 = uVar21;
      if (dVar13 <= dVar17) {
        uVar28 = SUB84(dVar13,0);
        uVar29 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      if (dVar17 <= dVar12) {
        uVar20 = SUB84(dVar12,0);
        uVar21 = (undefined4)((ulonglong)dVar12 >> 0x20);
      }
      dVar13 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
      uVar23 = SUB84(dVar13,0);
      uVar25 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar22 = uVar23;
      uVar24 = uVar25;
      if (dVar15 <= dVar13) {
        uVar22 = SUB84(dVar15,0);
        uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      if (dVar13 <= dVar14) {
        uVar23 = SUB84(dVar14,0);
        uVar25 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
    }
    lVar8 = lVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  pdVar7 = (double *)param_1[4];
  dVar13 = *pdVar7;
  dVar14 = pdVar7[1];
  if ((double)CONCAT44(uVar27,uVar26) <= dVar13) {
    dVar13 = (double)CONCAT44(uVar27,uVar26);
  }
  *pdVar7 = dVar13;
  if ((double)CONCAT44(uVar29,uVar28) <= dVar14) {
    dVar14 = (double)CONCAT44(uVar29,uVar28);
  }
  pdVar7[1] = dVar14;
  dVar13 = pdVar7[2];
  if ((double)CONCAT44(uVar24,uVar22) <= dVar13) {
    dVar13 = (double)CONCAT44(uVar24,uVar22);
  }
  pdVar7[2] = dVar13;
  dVar13 = pdVar7[3];
  if (dVar13 <= (double)CONCAT44(uVar19,uVar18)) {
    dVar13 = (double)CONCAT44(uVar19,uVar18);
  }
  pdVar7[3] = dVar13;
  dVar13 = pdVar7[4];
  if (dVar13 <= (double)CONCAT44(uVar21,uVar20)) {
    dVar13 = (double)CONCAT44(uVar21,uVar20);
  }
  pdVar7[4] = dVar13;
  dVar13 = pdVar7[5];
  if (dVar13 <= (double)CONCAT44(uVar25,uVar23)) {
    dVar13 = (double)CONCAT44(uVar25,uVar23);
  }
  pdVar7[5] = dVar13;
                    /* WARNING: Could not recover jumptable at 0x000143b75292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  return;
}



// FUNCTION 143b7529a FUN_143b7529a body=323 status=ok
// SIG undefined FUN_143b7529a(void)

void FUN_143b7529a(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68 [3];
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_1;
  iVar1 = *(int *)(*(longlong *)(lVar5 + 2000) + 8);
  lVar4 = (longlong)iVar1;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_14830326e(local_68,iVar1,1);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      LOCK();
      *(undefined1 *)(local_68[0] + lVar3) = 0;
      UNLOCK();
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  local_48 = &local_80;
  local_78 = param_1[2];
  local_88 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_143b75412;
  local_90 = 0;
  local_80 = lVar5;
  local_70 = local_68;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_78 + 8),1);
  lVar5 = param_1[1];
  *(undefined4 *)(lVar5 + 8) = 0;
  if (*(int *)(lVar5 + 0xc) < 0) {
    FUN_14481578e(lVar5,0);
  }
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      if ((*(byte *)(local_68[0] + lVar5) & 1) != 0) {
        plVar2 = (longlong *)param_1[1];
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(plVar2,iVar1);
        }
        *(int *)(*plVar2 + (longlong)iVar1 * 4) = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b753e2 FUN_143b753e2 body=5 status=ok
// SIG undefined FUN_143b753e2(void)

longlong FUN_143b753e2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b753e8 FUN_143b753e8 body=12 status=ok
// SIG undefined FUN_143b753e8(void)

void FUN_143b753e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b753f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b753f4 FUN_143b753f4 body=29 status=ok
// SIG undefined FUN_143b753f4(void)

undefined8 FUN_143b753f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75440 FUN_143b75440 body=34 status=ok
// SIG undefined FUN_143b75440(void)

undefined8
FUN_143b75440(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  FUN_1484b4f82(*param_2,param_1,*param_3,*param_4);
  return param_1;
}



// FUNCTION 143b7548c FUN_143b7548c body=29 status=ok
// SIG undefined FUN_143b7548c(void)

undefined8 FUN_143b7548c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b754aa FUN_143b754aa body=51 status=ok
// SIG undefined FUN_143b754aa(void)

undefined8
FUN_143b754aa(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(*param_3 + 0x1a8) == '\x01') {
    uVar1 = FUN_146bc96d4(*param_3,*param_4);
  }
  FUN_146c89f40(param_1,uVar1);
  return param_1;
}



// FUNCTION 143b75508 FUN_143b75508 body=29 status=ok
// SIG undefined FUN_143b75508(void)

undefined8 FUN_143b75508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75526 FUN_143b75526 body=80 status=ok
// SIG undefined FUN_143b75526(void)

void FUN_143b75526(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x750);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar3 = (longlong *)(lVar1 + 0x770);
    if (*(longlong **)(lVar1 + 0x760) != (longlong *)0x0) {
      plVar3 = *(longlong **)(lVar1 + 0x760);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b7556b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143b7558c FUN_143b7558c body=29 status=ok
// SIG undefined FUN_143b7558c(void)

undefined8 FUN_143b7558c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b755aa FUN_143b755aa body=130 status=ok
// SIG undefined FUN_143b755aa(void)

undefined8 FUN_143b755aa(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x790);
  if (pcVar2 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    local_30 = *param_2;
    local_24 = *param_3;
    plVar4 = (longlong *)(lVar1 + 0x7b0);
    if (*(longlong **)(lVar1 + 0x7a0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x7a0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    uVar3 = (*pcVar2)(uVar3,&local_30,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b75644 FUN_143b75644 body=29 status=ok
// SIG undefined FUN_143b75644(void)

undefined8 FUN_143b75644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75662 FUN_143b75662 body=549 status=ok
// SIG undefined FUN_143b75662(void)

void FUN_143b75662(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_2 + 0x208) != 0) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48) != 0)) {
    lVar1 = *param_1;
    local_48 = 0;
    uStack_40 = 0;
    uVar5 = *(uint *)(lVar1 + 0x6b0);
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
    }
    else {
      uStack_40 = (ulonglong)uVar5;
      FUN_1401c3474(&local_48,0);
      if (0 < *(int *)(lVar1 + 0x6b0)) {
        lVar13 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x6a8) + lVar13 * 8);
          if (plVar2 == (longlong *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x420))();
          }
          *(undefined1 *)(local_48 + lVar13) = uVar4;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar1 + 0x6b0));
      }
    }
    iVar6 = 0;
    uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U)) {
        uVar9 = 1;
        uVar12 = 1;
        if (1 < (int)uVar5) {
          uVar9 = (ulonglong)uVar5;
        }
        do {
          uVar11 = (uint)uVar12;
          uVar10 = uVar9;
          if ((uint)uVar9 == uVar11) break;
          uVar3 = uVar12 >> 9;
          uVar10 = uVar12;
          uVar12 = (ulonglong)(uVar11 + 1);
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      }
    }
    if ((uint)uVar10 != uVar5) {
      iVar6 = 0;
      do {
        iVar7 = *(int *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48) + 0x20) +
                          (uVar10 >> 9) * 8) + (ulonglong)((uint)uVar10 & 0x1ff) * 4);
        uVar11 = 0;
        if ((-1 < (longlong)iVar7) && (iVar7 < (int)uStack_40)) {
          uVar11 = (uint)*(byte *)(local_48 + iVar7);
        }
        iVar6 = iVar6 + uVar11;
        uVar11 = (uint)uVar10 + 1;
        if ((int)uVar11 < (int)uVar5) {
          uVar11 = uVar5;
        }
        do {
          iVar7 = (int)uVar10;
          uVar10 = (ulonglong)uVar11;
          if (uVar11 - 1 == iVar7) break;
          uVar8 = iVar7 + 1;
          uVar10 = (ulonglong)uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar10 != uVar5);
      iVar6 = iVar6 * 2;
    }
    *(bool *)param_1[1] = *(int *)(param_2 + 0x170) <= iVar6;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_50 = 0;
  local_58 = 0;
  FUN_146c005f0(param_1[2],param_2,0,0);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b7588a FUN_143b7588a body=39 status=ok
// SIG undefined FUN_143b7588a(void)

undefined8 FUN_143b7588a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  FUN_1484b4620(param_1,param_3,param_2 + 8,*(undefined1 *)(param_2 + 0x228));
  return param_1;
}



// FUNCTION 143b758b2 FUN_143b758b2 body=92 status=ok
// SIG undefined FUN_143b758b2(void)

undefined8 * FUN_143b758b2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x238,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aef0600;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_146bff712(puVar1 + 2,param_1 + 0x10);
  *(undefined1 *)(puVar1 + 0x46) = *(undefined1 *)(param_1 + 0x230);
  return puVar1 + 1;
}



// FUNCTION 143b75914 FUN_143b75914 body=29 status=ok
// SIG undefined FUN_143b75914(void)

void FUN_143b75914(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b75932 FUN_143b75932 body=52 status=ok
// SIG undefined FUN_143b75932(void)

undefined8 * FUN_143b75932(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aef0600;
  FUN_141082778(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75966 FUN_143b75966 body=101 status=ok
// SIG undefined FUN_143b75966(void)

void FUN_143b75966(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar1 = *param_1;
  if ((~*(byte *)(lVar1 + 0x9c) & 3) == 0) {
    bVar3 = *(byte *)(lVar1 + 0x9d);
    if ((bVar3 & 1) == 0) {
LAB_143b759a7:
      *(byte *)(lVar1 + 0x9d) = bVar3 | 1;
      FUN_1401057d4(lVar1);
      FUN_14010586c(&DAT_14cad0140,lVar1);
      return;
    }
    if (*(longlong *)(lVar1 + 0xb0) == 0) {
      lVar2 = FUN_1448abda6(lVar1);
      if (lVar2 == 0) {
        bVar3 = *(byte *)(lVar1 + 0x9d);
        goto LAB_143b759a7;
      }
    }
  }
  return;
}



// FUNCTION 143b759e2 FUN_143b759e2 body=29 status=ok
// SIG undefined FUN_143b759e2(void)

undefined8 FUN_143b759e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b75a00 FUN_143b75a00 body=321 status=ok
// SIG undefined FUN_143b75a00(void)

void FUN_143b75a00(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar1 = DAT_14caf84d0;
  lVar3 = DAT_14caf84d0[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar3 = plVar1[0x22];
  }
  if ((*(char *)(lVar3 + 0x14f) == '\x01') && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0))
  {
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (0 < iVar2) {
      iVar2 = *(int *)(param_2 + 0x170) * 3;
      goto LAB_143b75a7a;
    }
  }
  iVar2 = *(int *)(param_2 + 0x50);
LAB_143b75a7a:
  *(longlong *)*param_1 = (longlong)iVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b75b42 FUN_143b75b42 body=2688 status=ok
// SIG undefined FUN_143b75b42(void)

void FUN_143b75b42(undefined8 *param_1,code *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined2 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  code *pcVar26;
  int iVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  code *local_160;
  undefined8 *local_158;
  undefined4 local_14c;
  uint local_148;
  uint local_144;
  longlong local_140;
  ulonglong local_138;
  code *local_130;
  uint *local_128;
  longlong *local_120;
  undefined4 *local_118;
  longlong **local_110;
  undefined4 *local_108;
  longlong *local_100;
  float *local_f8;
  void **local_f0;
  code *local_e8;
  code **local_e0;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong local_b8 [2];
  void *local_a8;
  ulonglong uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_160 = param_2;
  local_158 = param_1;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_180 = &local_130;
    local_130 = FUN_1449e2820;
    local_170 = FUN_14081d0ea;
    local_178 = &LAB_145a62952;
    local_188 = &LAB_147c8cd45;
    local_190 = &LAB_1461468ae;
    local_198 = L"Engine";
    local_1a0 = 0;
    local_1a8 = 0x10000006;
    local_1b0 = 8;
    local_1b8 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar13 = DAT_14caf84d0;
  lVar28 = DAT_14caf84d0[0x22];
  if (lVar28 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar28 = plVar13[0x22];
  }
  if ((*(char *)(lVar28 + 0x14f) == '\x01') &&
     (*(longlong **)(local_160 + 0x208) != (longlong *)0x0)) {
    iVar9 = (**(code **)(**(longlong **)(local_160 + 0x208) + 0xa0))();
    pcVar26 = local_160;
    if (iVar9 < 1) {
      local_14c = 0;
    }
    else {
      lVar28 = *(longlong *)*local_158;
      plVar13 = *(longlong **)(local_160 + 0x208);
      uVar10 = (**(code **)(*plVar13 + 0xa0))();
      local_14c = (undefined4)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
      FUN_146bf9916(lVar28 + 0x30,uVar10,1);
    }
  }
  else {
    local_14c = 0;
    pcVar26 = local_160;
  }
  plVar13 = *(longlong **)(pcVar26 + 0x208);
  if (plVar13 == (longlong *)0x0) {
    local_140 = 0;
  }
  else {
    local_140 = plVar13[9];
  }
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  uVar17 = *(int *)(pcVar26 + 0x38) << 9;
  uVar16 = -*(int *)(pcVar26 + 0x3c);
  local_138 = (ulonglong)uVar16;
  local_144 = uVar17;
  if ((char)local_14c == '\0') {
    if (uVar17 != uVar16) {
      uVar19 = *(int *)(pcVar26 + 0x20) * 0x200 + *(int *)(pcVar26 + 0x24);
      if ((int)uVar19 < 1) {
        if ((int)uVar19 < 0) goto LAB_143b764d6;
      }
      else {
        uStack_a0 = (ulonglong)uVar19;
        FUN_1446f48e2(&local_a8);
        memset(local_a8,0,(ulonglong)uVar19 << 2);
        pcVar26 = local_160;
      }
    }
    iVar9 = *(int *)(pcVar26 + 0x50);
    if (iVar9 < 0) goto LAB_143b76515;
    if (*(int *)(*(longlong *)*local_158 + 0xc) < iVar9) {
      FUN_140678446();
      pcVar26 = local_160;
    }
    uVar20 = *(int *)(pcVar26 + 0x20) * 0x200 + *(int *)(pcVar26 + 0x24);
    puVar25 = local_158;
    uVar19 = 0;
    if ((uVar20 != 0) &&
       (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar26 + 0x28) - 1U))) {
      uVar14 = 1;
      uVar22 = 1;
      if (1 < (int)uVar20) {
        uVar14 = uVar20;
      }
      do {
        uVar19 = uVar14;
        if (uVar14 == uVar22) break;
        uVar15 = uVar22 >> 9;
        uVar23 = uVar22 & 0x1ff;
        uVar19 = uVar22;
        uVar22 = uVar22 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar26 + 0x28))[uVar15] +
                                           (ulonglong)uVar23 * 2) - 1U));
    }
LAB_143b75ec6:
    if (uVar19 != uVar20) {
      lVar28 = *(longlong *)(*(longlong *)(pcVar26 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
      uVar12 = (ulonglong)(uVar19 & 0x1ff);
      dVar5 = *(double *)(lVar28 + 0x10 + uVar12 * 0x18);
      plVar13 = *(longlong **)*puVar25;
      dVar6 = *(double *)(lVar28 + 8 + uVar12 * 0x18);
      dVar7 = *(double *)(lVar28 + uVar12 * 0x18);
      iVar9 = (int)plVar13[1];
      *(uint *)(plVar13 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)plVar13 + 0xc) < iVar9 + 1U) {
        FUN_140c0b6f2(plVar13,iVar9);
        puVar25 = local_158;
        pcVar26 = local_160;
      }
      lVar11 = (longlong)iVar9;
      lVar28 = *plVar13;
      *(float *)(lVar28 + lVar11 * 0xc) = (float)dVar7;
      *(float *)(lVar28 + 4 + lVar11 * 0xc) = (float)dVar6;
      *(float *)(lVar28 + 8 + lVar11 * 0xc) = (float)dVar5;
      if (uVar17 != uVar16) {
        *(int *)((longlong)local_a8 + (longlong)(int)uVar19 * 4) = iVar9;
      }
      uVar14 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar20) {
        uVar14 = uVar20;
      }
      uVar22 = uVar19;
      do {
        uVar19 = uVar14;
        if (uVar14 - 1 == uVar22) break;
        uVar19 = uVar22 + 1;
        uVar22 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(pcVar26 + 0x28) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      goto LAB_143b75ec6;
    }
  }
  else {
    iVar9 = *(int *)(pcVar26 + 0x170);
    uVar19 = iVar9 * 3;
    if (iVar9 < 1) {
      if (iVar9 < 0) {
LAB_143b764d6:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar19);
      }
    }
    else {
      uStack_a0 = (ulonglong)uVar19;
      FUN_1446f48e2(&local_a8);
      memset(local_a8,0,(ulonglong)uVar19 << 2);
      plVar13 = *(longlong **)(pcVar26 + 0x208);
    }
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_c0 = plVar13;
    local_c4 = (**(code **)(*plVar13 + 0xa0))();
    uVar17 = *(int *)(pcVar26 + 0x20) * 0x200 + *(int *)(pcVar26 + 0x24);
    uVar16 = 0;
    if ((uVar17 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar26 + 0x28) - 1U))) {
      uVar19 = 1;
      uVar20 = 1;
      if (1 < (int)uVar17) {
        uVar19 = uVar17;
      }
      do {
        uVar16 = uVar19;
        if (uVar19 == uVar20) break;
        uVar14 = uVar20 >> 9;
        uVar22 = uVar20 & 0x1ff;
        uVar16 = uVar20;
        uVar20 = uVar20 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar26 + 0x28))[uVar14] +
                                           (ulonglong)uVar22 * 2) - 1U));
    }
    if (uVar16 != uVar17) {
      do {
        lVar28 = *(longlong *)(*(longlong *)(pcVar26 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
        uVar12 = (ulonglong)(uVar16 & 0x1ff);
        local_cc = (float)*(double *)(lVar28 + 0x10 + uVar12 * 0x18);
        local_d0 = (float)*(double *)(lVar28 + 8 + uVar12 * 0x18);
        local_d4 = (float)*(double *)(lVar28 + uVar12 * 0x18);
        local_100 = (longlong *)*local_158;
        local_d8 = *(undefined4 *)(*local_100 + 8);
        local_128 = &local_c8;
        local_120 = local_b8;
        local_118 = &local_c4;
        local_110 = &local_c0;
        local_e8 = FUN_143b765c4;
        local_130 = pcVar26;
        local_108 = &local_d8;
        local_f8 = &local_d4;
        local_f0 = &local_a8;
        local_e0 = &local_130;
        local_c8 = uVar16;
        FUN_146c03fd0(pcVar26,uVar16,&local_e8);
        uVar19 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar17) {
          uVar19 = uVar17;
        }
        do {
          uVar20 = uVar19;
          if (uVar19 - 1 == uVar16) break;
          uVar16 = uVar16 + 1;
          uVar20 = uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_160 + 0x28) +
                                               (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        uVar16 = uVar20;
        pcVar26 = local_160;
      } while (uVar16 != uVar17);
    }
    puVar25 = local_158;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
      puVar25 = local_158;
      pcVar26 = local_160;
    }
  }
  iVar9 = *(int *)(pcVar26 + 0x170);
  if (iVar9 < 0) {
LAB_143b76515:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  lVar28 = *(longlong *)*puVar25;
  if (*(int *)(lVar28 + 0x1c) < iVar9) {
    FUN_147829c30(lVar28 + 0x10);
    iVar9 = *(int *)(local_160 + 0x170);
    if (iVar9 < 0) goto LAB_143b76515;
    lVar28 = *(longlong *)*local_158;
    puVar25 = local_158;
    pcVar26 = local_160;
  }
  if (*(int *)(lVar28 + 0x2c) < iVar9) {
    FUN_1448759c8(lVar28 + 0x20);
    puVar25 = local_158;
    pcVar26 = local_160;
  }
  uVar16 = *(int *)(pcVar26 + 0x140) * 0x200 + *(int *)(pcVar26 + 0x144);
  uVar17 = 0;
  if ((uVar16 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(pcVar26 + 0x148) - 1U))) {
    uVar19 = 1;
    uVar20 = 1;
    if (1 < (int)uVar16) {
      uVar19 = uVar16;
    }
    do {
      uVar17 = uVar19;
      if (uVar19 == uVar20) break;
      uVar14 = uVar20 >> 9;
      uVar22 = uVar20 & 0x1ff;
      uVar17 = uVar20;
      uVar20 = uVar20 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(pcVar26 + 0x148))[uVar14] +
                                         (ulonglong)uVar22 * 2) - 1U));
  }
  uVar19 = uVar16;
  if (uVar17 != uVar16) {
    do {
      local_148 = uVar19;
      uVar12 = (ulonglong)(uVar17 & 0x1ff);
      if ((char)local_14c == '\0') {
        lVar28 = *(longlong *)(*(longlong *)(pcVar26 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
        iVar27 = *(int *)(lVar28 + uVar12 * 0xc);
        iVar9 = *(int *)(lVar28 + 4 + uVar12 * 0xc);
        iVar21 = *(int *)(lVar28 + 8 + uVar12 * 0xc);
        if (local_144 != (uint)local_138) {
          lVar24 = (longlong)iVar27;
          lVar28 = (longlong)iVar9 * 4;
          lVar11 = (longlong)iVar21 * 4;
          goto LAB_143b7622a;
        }
      }
      else {
        lVar24 = (longlong)(int)(uVar17 * 3);
        lVar28 = lVar24 * 4 + 4;
        lVar11 = lVar24 * 4 + 8;
LAB_143b7622a:
        iVar9 = *(int *)((longlong)local_a8 + lVar28);
        iVar27 = *(int *)((longlong)local_a8 + lVar24 * 4);
        iVar21 = *(int *)((longlong)local_a8 + lVar11);
      }
      plVar13 = *(longlong **)*puVar25;
      lVar28 = *plVar13;
      pfVar1 = (float *)(lVar28 + (longlong)iVar27 * 0xc);
      pfVar2 = (float *)(lVar28 + (longlong)iVar9 * 0xc);
      fVar30 = *pfVar1;
      fVar32 = *pfVar2;
      if ((((fVar30 != fVar32) || (NAN(fVar30) || NAN(fVar32))) || (pfVar1[1] != pfVar2[1])) ||
         (NAN(pfVar1[1]) || NAN(pfVar2[1]))) {
LAB_143b7627d:
        pfVar3 = (float *)(lVar28 + (longlong)iVar21 * 0xc);
        fVar4 = *pfVar3;
        if ((fVar30 == fVar4) && (!NAN(fVar30) && !NAN(fVar4))) {
          if ((pfVar1[1] == pfVar3[1]) && (!NAN(pfVar1[1]) && !NAN(pfVar3[1]))) {
            if ((pfVar1[2] == pfVar3[2]) && (!NAN(pfVar1[2]) && !NAN(pfVar3[2])))
            goto LAB_143b763eb;
          }
        }
        if ((fVar32 != fVar4) || (NAN(fVar32) || NAN(fVar4))) {
          fVar35 = pfVar3[1];
          fVar31 = pfVar2[1];
        }
        else {
          fVar31 = pfVar2[1];
          fVar35 = pfVar3[1];
          if ((fVar31 == fVar35) && (!NAN(fVar31) && !NAN(fVar35))) {
            if ((pfVar2[2] == pfVar3[2]) && (!NAN(pfVar2[2]) && !NAN(pfVar3[2])))
            goto LAB_143b763eb;
          }
        }
        fVar34 = pfVar1[2] - pfVar3[2];
        fVar35 = pfVar1[1] - fVar35;
        fVar33 = pfVar1[2] - pfVar2[2];
        fVar31 = pfVar1[1] - fVar31;
        fVar29 = (fVar30 - fVar32) * fVar35 - (fVar30 - fVar4) * fVar31;
        fVar30 = fVar33 * (fVar30 - fVar4) - fVar34 * (fVar30 - fVar32);
        fVar32 = fVar31 * fVar34 - fVar33 * fVar35;
        if (1e-08 <= fVar29 * fVar29 + fVar32 * fVar32 + fVar30 * fVar30) {
          iVar8 = (int)plVar13[3];
          lVar28 = (longlong)iVar8;
          *(uint *)(plVar13 + 3) = iVar8 + 1U;
          if (*(uint *)((longlong)plVar13 + 0x1c) < iVar8 + 1U) {
            FUN_140e90710(plVar13 + 2,iVar8);
            puVar25 = local_158;
            pcVar26 = local_160;
          }
          lVar11 = plVar13[2];
          *(int *)(lVar11 + lVar28 * 0xc) = iVar27;
          *(int *)(lVar11 + 4 + lVar28 * 0xc) = iVar9;
          *(int *)(lVar11 + 8 + lVar28 * 0xc) = iVar21;
          if (local_140 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (undefined2)
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(local_140 + 0x20) + (ulonglong)(uVar17 >> 9) * 8)
                      + uVar12 * 4);
          }
          lVar28 = *(longlong *)*puVar25;
          iVar9 = *(int *)(lVar28 + 0x28);
          *(uint *)(lVar28 + 0x28) = iVar9 + 1U;
          if (*(uint *)(lVar28 + 0x2c) < iVar9 + 1U) {
            FUN_14488eebe((longlong *)(lVar28 + 0x20),iVar9);
            puVar25 = local_158;
            pcVar26 = local_160;
          }
          *(undefined2 *)(*(longlong *)(lVar28 + 0x20) + (longlong)iVar9 * 2) = uVar18;
          uVar16 = local_148;
        }
      }
      else if ((pfVar1[2] != pfVar2[2]) || (NAN(pfVar1[2]) || NAN(pfVar2[2]))) goto LAB_143b7627d;
LAB_143b763eb:
      uVar19 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar16) {
        uVar19 = uVar16;
      }
      do {
        uVar20 = uVar19;
        if (uVar19 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar20 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(pcVar26 + 0x148) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar20;
      uVar19 = local_148;
    } while (uVar17 != uVar16);
  }
  *(uint *)(*(longlong *)*puVar25 + 0x40) = *(uint *)(*(longlong *)*puVar25 + 0x40) | 1;
  *(uint *)(*(longlong *)*puVar25 + 0x40) = *(uint *)(*(longlong *)*puVar25 + 0x40) | 2;
  *(uint *)(*(longlong *)*puVar25 + 0x40) = *(uint *)(*(longlong *)*puVar25 + 0x40) | 4;
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b765c4 FUN_143b765c4 body=857 status=ok
// SIG undefined FUN_143b765c4(void)

void FUN_143b765c4(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_c8 [36];
  int local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong *local_88;
  uint auStack_80 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar15 = *param_2;
  uVar14 = (ulonglong)uVar15;
  lVar17 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
  uVar12 = (ulonglong)(uVar15 & 0x1ff);
  iVar2 = *(int *)param_1[1];
  iVar16 = 0;
  if ((*(int *)(lVar17 + uVar12 * 0xc) != iVar2) &&
     (iVar16 = 1, *(int *)(lVar17 + uVar12 * 0xc + 4) != iVar2)) {
    iVar16 = (uint)(*(int *)(lVar17 + 8 + uVar12 * 0xc) == iVar2) * 3 + -1;
  }
  lVar17 = param_1[2];
  *(undefined4 *)(lVar17 + 8) = 0;
  if (*(int *)(lVar17 + 0xc) < 8) {
    FUN_1408652ee(lVar17,8);
  }
  uVar13 = *(uint *)param_1[3];
  local_a4 = iVar16;
  if (0 < (int)uVar13) {
    uVar12 = uVar14 * 3 + 2;
    uVar19 = uVar14 * 3 + 1;
    uVar18 = (uVar19 & 0xffffffff) >> 9;
    uVar19 = (ulonglong)((uint)uVar19 & 0x1ff);
    lVar17 = 0;
    local_a0 = uVar14;
    local_98 = uVar19;
    local_90 = uVar18;
    local_88 = param_1;
    do {
      if (lVar17 < *(int *)(*(longlong *)param_1[4] + 0x28)) {
        lVar20 = *(longlong *)(*(longlong *)(*(longlong *)param_1[4] + 0x20) + lVar17 * 8);
      }
      else {
        lVar20 = 0;
      }
      lVar4 = *(longlong *)(lVar20 + 0x78);
      auStack_80[1] =
           *(undefined4 *)
            (*(longlong *)(lVar4 + (ulonglong)(uVar15 * 3 >> 9) * 8) +
            (ulonglong)(uVar15 * 3 & 0x1ff) * 4);
      auStack_80[2] = *(undefined4 *)(*(longlong *)(lVar4 + uVar18 * 8) + uVar19 * 4);
      auStack_80[3] =
           *(undefined4 *)
            (*(longlong *)(lVar4 + (uVar12 >> 9 & 0x7fffff) * 8) +
            (ulonglong)((uint)uVar12 & 0x1ff) * 4);
      uVar13 = auStack_80[(longlong)iVar16 + 1];
      if ((int)uVar13 < 0) {
        dVar8 = 0.0;
        dVar9 = 0.0;
      }
      else {
        lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x48) + (ulonglong)(uVar13 >> 8) * 8);
        uVar14 = (ulonglong)((uVar13 & 0xff) << 3);
        dVar9 = (double)*(float *)(lVar20 + 4 + uVar14);
        dVar8 = (double)*(float *)(lVar20 + uVar14);
      }
      plVar5 = (longlong *)param_1[2];
      iVar2 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
        FUN_14489624a(plVar5,iVar2);
        param_1 = local_88;
        uVar18 = local_90;
        uVar19 = local_98;
      }
      lVar20 = *plVar5;
      *(double *)(lVar20 + (longlong)iVar2 * 0x10) = dVar8;
      *(double *)(lVar20 + 8 + (longlong)iVar2 * 0x10) = dVar9;
      lVar17 = lVar17 + 1;
      uVar13 = *(uint *)param_1[3];
    } while (lVar17 < (int)uVar13);
    uVar15 = (uint)local_a0;
  }
  iVar16 = local_a4;
  uVar3 = *(uint *)param_1[5];
  uVar12 = (ulonglong)uVar3;
  plVar5 = *(longlong **)param_1[6];
  iVar2 = (int)plVar5[1];
  if ((int)uVar3 < iVar2) {
    if ((int)uVar13 < 1) {
LAB_143b76821:
      iVar11 = (int)uVar12;
      if ((int)uVar12 != -1) goto LAB_143b768d5;
    }
    else {
      uVar12 = (ulonglong)(int)uVar3;
      do {
        lVar17 = 0;
        while( true ) {
          dVar8 = *(double *)(*(longlong *)(plVar5[6] + lVar17) + uVar12 * 0x10);
          pdVar1 = (double *)(*(longlong *)param_1[2] + lVar17);
          if ((((dVar8 != *pdVar1) || (NAN(dVar8) || NAN(*pdVar1))) ||
              (dVar8 = *(double *)(*(longlong *)(plVar5[6] + lVar17) + uVar12 * 0x10 + 8),
              pdVar1 = (double *)(*(longlong *)param_1[2] + 8 + lVar17), dVar8 != *pdVar1)) ||
             (NAN(dVar8) || NAN(*pdVar1))) break;
          lVar17 = lVar17 + 0x10;
          if ((ulonglong)uVar13 << 4 == lVar17) goto LAB_143b76821;
        }
        uVar12 = uVar12 + 1;
      } while (iVar2 != (int)uVar12);
    }
  }
  puVar6 = (undefined8 *)param_1[7];
  *(uint *)(plVar5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
    FUN_140c0b6f2(plVar5,iVar2);
  }
  lVar17 = *plVar5;
  *(undefined4 *)(lVar17 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(lVar17 + (longlong)iVar2 * 0xc) = *puVar6;
  iVar11 = iVar2;
  if (0 < *(int *)param_1[3]) {
    lVar20 = 0;
    lVar17 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)param_1[6] + 0x30);
      lVar7 = *(longlong *)param_1[2];
      iVar2 = *(int *)(lVar4 + 8 + lVar20);
      *(uint *)(lVar4 + 8 + lVar20) = iVar2 + 1U;
      if (*(uint *)(lVar4 + 0xc + lVar20) < iVar2 + 1U) {
        FUN_14489624a((longlong *)(lVar4 + lVar20),iVar2);
      }
      uVar10 = ((undefined8 *)(lVar7 + lVar20))[1];
      puVar6 = (undefined8 *)(*(longlong *)(lVar4 + lVar20) + (longlong)iVar2 * 0x10);
      *puVar6 = *(undefined8 *)(lVar7 + lVar20);
      puVar6[1] = uVar10;
      lVar17 = lVar17 + 1;
      lVar20 = lVar20 + 0x10;
      iVar16 = local_a4;
    } while (lVar17 < *(int *)param_1[3]);
  }
LAB_143b768d5:
  *(int *)(*(longlong *)param_1[8] + (longlong)(int)(iVar16 + uVar15 * 3) * 4) = iVar11;
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b7695a FUN_143b7695a body=1563 status=ok
// SIG undefined FUN_143b7695a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdd8 : 0x000143b76c27 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143b7695a(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined ***pppuVar23;
  longlong *plVar24;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8 [2];
  int local_2b4;
  longlong local_2b0;
  undefined1 *local_2a8;
  undefined8 uStack_2a0;
  undefined ***local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_258;
  code *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined ***local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined **local_228;
  undefined *puStack_220;
  int *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined **local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  code *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8;
  longlong *plStack_1a0;
  int *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined8 uStack_180;
  undefined ***local_178;
  undefined8 uStack_170;
  undefined **local_168;
  longlong *plStack_160;
  int *local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined8 uStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined *puStack_120;
  int *local_118;
  undefined8 uStack_110;
  undefined1 local_108 [24];
  int local_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar1 = *(longlong *)(**(longlong **)*param_1 + (longlong)*param_2 * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[4];
  iVar21 = *(int *)param_1[3];
  plVar2 = (longlong *)param_1[2];
  lVar3 = *(longlong *)(lVar1 + 0x10);
  local_2b4 = iVar21;
  local_2b0 = lVar3;
  if (*(int *)(lVar1 + 8) < iVar21) {
    EnterCriticalSection(lpCriticalSection);
    iVar21 = FUN_1484b788c(plVar2);
    lVar4 = *(longlong *)(*plVar2 + (longlong)iVar21 * 8);
    LeaveCriticalSection(lpCriticalSection);
    FUN_14054c6c4(lVar4,lVar1);
    *(longlong *)(lVar4 + 0x10) = lVar3;
  }
  else {
    FUN_146ba21d6(local_108,*(undefined8 *)param_1[1],0);
    plVar24 = local_d8;
    puVar12 = local_e8;
    local_f0 = iVar21;
    uVar13 = (undefined4)uStack_e0;
    uVar14 = uStack_e0._4_4_;
    uVar15 = (undefined4)uStack_d0;
    uVar16 = uStack_d0._4_4_;
    local_288._0_4_ = (undefined4)local_c8;
    local_288._4_4_ = local_c8._4_4_;
    uStack_280._0_4_ = (undefined4)uStack_c0;
    uStack_280._4_4_ = uStack_c0._4_4_;
    uVar17 = (undefined4)local_b8;
    uVar18 = local_b8._4_4_;
    uVar19 = (undefined4)uStack_b0;
    uVar20 = uStack_b0._4_4_;
    local_1d8 = (undefined4)local_b8;
    uStack_1d4 = local_b8._4_4_;
    uStack_1d0 = (undefined4)uStack_b0;
    uStack_1cc = uStack_b0._4_4_;
    uStack_1f0 = (undefined4)uStack_d0;
    uStack_1ec = uStack_d0._4_4_;
    uStack_200 = (undefined4)uStack_e0;
    uStack_1fc = uStack_e0._4_4_;
    local_b8 = local_278;
    uStack_b0 = uStack_270;
    local_e8 = &LAB_146beded0;
    uStack_e0 = uStack_2a0;
    local_d8 = (longlong *)0x0;
    uStack_d0 = uStack_290;
    local_c8 = &PTR_LAB_149f3aac0;
    uStack_c0 = &LAB_146bee8fa;
    uStack_2a0._0_4_ = uVar13;
    uStack_2a0._4_4_ = uVar14;
    local_278._0_4_ = uVar17;
    local_278._4_4_ = uVar18;
    uStack_270._0_4_ = uVar19;
    uStack_270._4_4_ = uVar20;
    uStack_290._0_4_ = uVar15;
    uStack_290._4_4_ = uVar16;
    if (puVar12 != (undefined1 *)0x0) {
      if (plVar24 == (longlong *)0x0) {
        plVar24 = &local_288;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    FUN_1484c10de(local_108,lVar1);
    local_218 = local_198;
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_1f8 = 0;
    local_1e8 = &PTR_LAB_14aef06d0;
    puStack_1e0 = &LAB_1484c1484;
    local_208 = &LAB_1484c1488;
    local_178 = (undefined ***)0x0;
    local_168 = &PTR_LAB_14aef0710;
    plStack_160 = (longlong *)&DAT_1484c1538;
    local_188 = (code *)&LAB_1484c153a;
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_LAB_14aef0710;
    puStack_120 = &DAT_1484c158a;
    local_148 = (code *)&LAB_1484c153a;
    local_288 = &PTR_LAB_14aef06f0;
    uStack_280 = &DAT_1484c14e0;
    local_298 = (undefined ***)0x0;
    local_2a8 = &LAB_1484c14e2;
    local_198 = &local_2b4;
    local_1a8 = &PTR_LAB_14aef0730;
    plStack_1a0 = local_2c8;
    local_1b8 = 0;
    local_1c8 = FUN_143b76f76;
    local_248 = (code *)&LAB_1484c14e2;
    uStack_240 = uStack_1c0;
    uStack_23c = uStack_1bc;
    uStack_210 = uStack_190;
    uStack_20c = uStack_18c;
    local_228 = &PTR_LAB_14aef06f0;
    puStack_220 = &DAT_1484c14e0;
    local_238 = (undefined ***)0x0;
    uStack_230 = uStack_1b0;
    uStack_22c = uStack_1ac;
    (*(code *)&LAB_1484c150e)();
    uVar7 = uStack_150;
    piVar8 = local_158;
    puStack_220 = (undefined *)plStack_160;
    local_228 = local_168;
    uVar6 = uStack_170;
    local_238 = local_178;
    uVar5 = uStack_180;
    local_248 = local_188;
    local_278 = local_158;
    uStack_270 = uStack_150;
    local_288 = local_168;
    uStack_280 = (undefined *)plStack_160;
    local_298 = local_178;
    uStack_290 = uStack_170;
    local_2a8 = local_188;
    uStack_2a0 = uStack_180;
    local_158 = local_218;
    uStack_150 = CONCAT44(uStack_20c,uStack_210);
    local_168 = &PTR_LAB_14aef0750;
    plStack_160 = local_2c8;
    local_178 = (undefined ***)0x0;
    uStack_170 = CONCAT44(uStack_22c,uStack_230);
    local_188 = FUN_143b7700a;
    uStack_180 = CONCAT44(uStack_23c,uStack_240);
    uStack_2a0._0_4_ = (undefined4)uVar5;
    uStack_2a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_290._0_4_ = (undefined4)uVar6;
    uStack_290._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_270._0_4_ = (undefined4)uVar7;
    uStack_270._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_218 = piVar8;
    uStack_210 = (undefined4)uStack_270;
    uStack_20c = uStack_270._4_4_;
    uStack_230 = (undefined4)uStack_290;
    uStack_22c = uStack_290._4_4_;
    uStack_240 = (undefined4)uStack_2a0;
    uStack_23c = uStack_2a0._4_4_;
    uStack_2a0 = uVar5;
    uStack_290 = uVar6;
    uStack_270 = uVar7;
    if (local_248 != (code *)0x0) {
      pppuVar23 = local_238;
      if (local_238 == (undefined ***)0x0) {
        pppuVar23 = &local_228;
      }
      (*(code *)(*pppuVar23)[2])();
    }
    local_248 = (code *)0x0;
    puVar22 = (undefined8 *)FUN_14001cc68(0x30,8);
    uVar7 = uStack_110;
    puVar11 = puStack_120;
    ppuVar10 = local_128;
    uVar6 = uStack_130;
    local_238 = local_138;
    uVar5 = uStack_140;
    pcVar9 = local_148;
    *puVar22 = &PTR_FUN_14aef0770;
    puVar22[1] = local_2c8;
    puVar22[2] = &local_2d8;
    puVar22[3] = lpCriticalSection;
    puVar22[4] = plVar2;
    puVar22[5] = &local_2b0;
    if (puVar22 + 1 != (longlong *)0x0) {
      local_248 = FUN_143b77086;
    }
    local_278 = local_118;
    uStack_270 = uStack_110;
    local_288 = local_128;
    uStack_280 = puStack_120;
    local_298 = local_138;
    uStack_290 = uStack_130;
    local_2a8 = local_148;
    uStack_2a0 = uStack_140;
    local_118 = local_218;
    uStack_110 = CONCAT44(uStack_20c,uStack_210);
    local_128 = local_228;
    puStack_120 = puStack_220;
    local_138 = (undefined ***)puVar22;
    uStack_130 = CONCAT44(uStack_22c,uStack_230);
    local_148 = local_248;
    uStack_140 = CONCAT44(uStack_23c,uStack_240);
    uStack_2a0._0_4_ = (undefined4)uVar5;
    uStack_2a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_290._0_4_ = (undefined4)uVar6;
    uStack_290._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_270._0_4_ = (undefined4)uVar7;
    uStack_270._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_210 = (undefined4)uStack_270;
    uStack_20c = uStack_270._4_4_;
    local_228 = ppuVar10;
    puStack_220 = puVar11;
    uStack_230 = (undefined4)uStack_290;
    uStack_22c = uStack_290._4_4_;
    local_248 = pcVar9;
    uStack_240 = (undefined4)uStack_2a0;
    uStack_23c = uStack_2a0._4_4_;
    uStack_2a0 = uVar5;
    uStack_290 = uVar6;
    uStack_270 = uVar7;
    if (pcVar9 != (code *)0x0) {
      pppuVar23 = &local_228;
      if (local_238 != (undefined ***)0x0) {
        pppuVar23 = local_238;
      }
      (*(code *)(*pppuVar23)[2])(pppuVar23);
    }
    local_2a8 = (undefined1 *)0x7fefffffffffffff;
    local_298 = (undefined ***)0x0;
    local_288 = (undefined **)0x0;
    local_258 = 0;
    FUN_146bde40e(local_108,&local_208,&local_2a8);
    if (local_298 != (undefined ***)0x0) {
      plVar24 = (longlong *)local_288;
      if (local_288 == (undefined **)0x0) {
        plVar24 = &local_278;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (0 < (int)uStack_2d0) {
      EnterCriticalSection(lpCriticalSection);
      iVar21 = FUN_1484b788c(plVar2);
      plVar2 = *(longlong **)(*plVar2 + (longlong)iVar21 * 8);
      LeaveCriticalSection(lpCriticalSection);
      if (plVar2 != &local_2d8) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        *plVar2 = local_2d8;
        local_2d8 = 0;
        *(int *)(plVar2 + 1) = (int)uStack_2d0;
        *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_2d0._4_4_;
        uStack_2d0 = 0;
      }
      plVar2[2] = local_2b0;
    }
    FUN_1484c1188(&local_208);
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (local_2c8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1457e5b52(local_108);
  }
  if ((local_38 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b76f76 FUN_143b76f76 body=74 status=ok
// SIG undefined FUN_143b76f76(void)

void FUN_143b76f76(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 8) = 0;
  if (*(int *)(lVar2 + 0xc) < 0) {
    FUN_14481578e(lVar2,0);
  }
  iVar1 = *(int *)param_1[1];
  if (-1 < iVar1) {
    if (*(int *)(*param_1 + 0xc) < iVar1) {
      FUN_14481578e();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 143b76fec FUN_143b76fec body=29 status=ok
// SIG undefined FUN_143b76fec(void)

undefined8 FUN_143b76fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7700a FUN_143b7700a body=51 status=ok
// SIG undefined FUN_143b7700a(void)

void FUN_143b7700a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b77068 FUN_143b77068 body=29 status=ok
// SIG undefined FUN_143b77068(void)

undefined8 FUN_143b77068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b77086 FUN_143b77086 body=210 status=ok
// SIG undefined FUN_143b77086(void)

void FUN_143b77086(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)*param_1;
  uVar1 = *(uint *)(puVar2 + 1);
  if (0 < (int)uVar1) {
    if (uVar1 < 100) {
      plVar3 = (longlong *)param_1[1];
      iVar5 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar5 + uVar1;
      if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar5) < uVar1) {
        FUN_1446f48e2(plVar3,iVar5);
      }
      memcpy((void *)((longlong)iVar5 * 4 + *plVar3),(void *)*puVar2,(ulonglong)uVar1 << 2);
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    iVar5 = FUN_1484b788c(param_1[3]);
    plVar3 = *(longlong **)(*(longlong *)param_1[3] + (longlong)iVar5 * 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    plVar4 = (longlong *)*param_1;
    if (plVar3 != plVar4) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      *plVar3 = *plVar4;
      *plVar4 = 0;
      *(int *)(plVar3 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    plVar3[2] = *(longlong *)param_1[4];
  }
  return;
}



// FUNCTION 143b77158 FUN_143b77158 body=78 status=ok
// SIG undefined FUN_143b77158(void)

undefined8 * FUN_143b77158(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aef0770;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143b771ac FUN_143b771ac body=29 status=ok
// SIG undefined FUN_143b771ac(void)

void FUN_143b771ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b771ca FUN_143b771ca body=29 status=ok
// SIG undefined FUN_143b771ca(void)

undefined8 FUN_143b771ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b771f6 FUN_143b771f6 body=325 status=ok
// SIG undefined FUN_143b771f6(void)

void FUN_143b771f6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_358 [32];
  undefined **local_338;
  undefined1 local_330 [152];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248;
  undefined1 local_240 [544];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_14582f278(param_2);
  memset(local_330,0,0x91);
  local_338 = &PTR_FUN_14ae97758;
  local_248 = 1;
  local_250 = DAT_14c846520 * 50.0;
  local_258 = DAT_14c846518 * 50.0;
  local_260 = DAT_14c846510 * 50.0;
  local_298 = DAT_14c8464e0;
  uStack_290 = DAT_14c8464e8;
  local_288 = DAT_14c8464f0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  local_268 = 0x3ff0000000000000;
  uVar1 = FUN_1483f67ec(&local_338);
  FUN_146c00d92(local_240,uVar1);
  FUN_146c00942(param_2,local_240);
  FUN_141082778(local_240);
  FUN_14582eef4(param_2,0);
  FUN_14582ed9a(*(undefined8 *)(param_2 + 0x208));
  FUN_146bd8050(&local_338);
  if ((local_20 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7733c FUN_143b7733c body=40 status=ok
// SIG undefined FUN_143b7733c(void)

void FUN_143b7733c(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(param_2,*param_1,1,1,1,1);
  return;
}



// FUNCTION 143b77372 FUN_143b77372 body=895 status=ok
// SIG undefined FUN_143b77372(void)

void FUN_143b77372(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  
  lVar19 = *(longlong *)*param_1;
  iVar6 = *(int *)(lVar19 + 0x18);
  if (0 < (longlong)iVar6) {
    cVar3 = *(char *)(lVar19 + 8);
    bVar4 = *(byte *)(param_2 + 0x90);
    bVar5 = *(byte *)(lVar19 + 9);
    uVar16 = (ulonglong)((*(byte *)param_1[1] ^ 1) << 4);
    lVar18 = 0;
    lVar13 = 0;
    lVar15 = 0;
    do {
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)*param_1 + 0x10) + lVar15 * 4);
      if ((-1 < (int)uVar7) &&
         ((int)uVar7 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
        uVar17 = (ulonglong)(uVar7 >> 9);
        uVar21 = (ulonglong)(uVar7 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar17 * 8) +
                               uVar21 * 2) - 1U) < 0xfffe) {
          if (cVar3 != '\0') {
            lVar8 = *(longlong *)(lVar19 + uVar16 + 0x20);
            cVar12 = FUN_146bfed03(lVar8 + lVar18);
            if (cVar12 != '\0') {
              puVar1 = (undefined4 *)(lVar8 + lVar13 * 2);
              lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar17 * 8);
              *(undefined8 *)(lVar8 + 0x10 + uVar21 * 0x18) = *(undefined8 *)(puVar1 + 4);
              uVar9 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              puVar2 = (undefined4 *)(lVar8 + uVar21 * 0x18);
              *puVar2 = *puVar1;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              if (*(char *)(param_2 + 0x210) == '\x01') {
                LOCK();
                *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
          if (((bVar4 & bVar5) != 0) && (*(char *)(param_2 + 0x90) == '\x01')) {
            lVar8 = *(longlong *)(lVar19 + (uVar16 | 0x40));
            lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x80) + uVar17 * 8);
            *(undefined4 *)(lVar14 + 8 + uVar21 * 0xc) = *(undefined4 *)(lVar8 + 8 + lVar13);
            *(undefined8 *)(lVar14 + uVar21 * 0xc) = *(undefined8 *)(lVar8 + lVar13);
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + 0xc;
      lVar18 = lVar18 + 0x18;
    } while (iVar6 != lVar15);
    lVar19 = *(longlong *)*param_1;
  }
  if ((((*(char *)(lVar19 + 0x60) != '\0') && (lVar13 = *(longlong *)(param_2 + 0x208), lVar13 != 0)
       ) && (0 < *(int *)(lVar13 + 0x38))) &&
     ((lVar13 = **(longlong **)(lVar13 + 0x30), lVar13 != 0 &&
      (iVar6 = *(int *)(lVar19 + 0x70), 0 < (longlong)iVar6)))) {
    bVar4 = *(byte *)param_1[1];
    lVar15 = 0;
    lVar18 = 0;
    do {
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)*param_1 + 0x68) + lVar18 * 4);
      if (((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar13 + 8) * 0x200 + *(int *)(lVar13 + 0xc))
          ) && ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                                   (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar8 = *(longlong *)(lVar19 + (ulonglong)((bVar4 ^ 1) << 4) + 0x78);
        lVar14 = 0;
        do {
          uVar20 = uVar7 * 3 + (int)lVar14;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x48) + (ulonglong)(uVar20 >> 9) * 8) +
           (ulonglong)(uVar20 & 0x1ff) * 4) = *(undefined4 *)(lVar8 + lVar15 + lVar14 * 4);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
      }
      lVar18 = lVar18 + 1;
      lVar15 = lVar15 + 0xc;
    } while (lVar18 != iVar6);
    lVar19 = *(longlong *)*param_1;
  }
  if ((((*(char *)(lVar19 + 0x98) == '\x01') &&
       (lVar13 = *(longlong *)(param_2 + 0x208), lVar13 != 0)) && (0 < *(int *)(lVar13 + 0x28))) &&
     ((lVar13 = **(longlong **)(lVar13 + 0x20), lVar13 != 0 &&
      (iVar6 = *(int *)(lVar19 + 0xa8), 0 < (longlong)iVar6)))) {
    bVar4 = *(byte *)param_1[1];
    lVar15 = 0;
    do {
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)*param_1 + 0xa0) + lVar15 * 4);
      if (((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar13 + 8) * 0x200 + *(int *)(lVar13 + 0xc))
          ) && ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                                   (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar18 = *(longlong *)(lVar19 + (ulonglong)((bVar4 ^ 1) << 4) + 0xb0);
        uVar16 = (ulonglong)((uVar7 & 0xff) << 3);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x48) + (ulonglong)(uVar7 >> 8) * 8) + uVar16) =
             *(undefined4 *)(lVar18 + lVar15 * 8);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x48) + (ulonglong)(uVar7 >> 8) * 8) + 4 + uVar16) =
             *(undefined4 *)(lVar18 + 4 + lVar15 * 8);
      }
      lVar15 = lVar15 + 1;
    } while (iVar6 != lVar15);
  }
  return;
}



// FUNCTION 143b7770a FUN_143b7770a body=61 status=ok
// SIG undefined FUN_143b7770a(void)

void FUN_143b7770a(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(param_2,*(undefined8 *)
                         (*(longlong *)*param_1 + 8 + (ulonglong)((*(byte *)param_1[1] ^ 1) << 4)),1
                ,1,1,1);
  return;
}



// FUNCTION 143b77747 FUN_143b77747 body=904 status=ok
// SIG undefined FUN_143b77747(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b77747(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aee6750,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aee6b30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aee6ef0,1,0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb4bed8);
  if (cVar1 == '\0') {
    _DAT_14cb4bed8 = 0;
    uRam000000014cb4bee0 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  ppuStack_70 = &PTR_FUN_14aeea000;
  local_78 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aeea0a0,1,0);
  local_58._0_1_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4c078,L"geometry.DynamicMesh.AllowDistanceFieldGeneration",&local_58,
                L"Whether to allow distance field generation for dynamic mesh components");
  atexit(FUN_143b6b5bb);
  local_58 = CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4c090,L"geometry.DynamicMesh.AllowMeshCardGeneration",&local_58,
                L"Whether to allow mesh card generation for dynamic mesh components");
  atexit(FUN_143b6b600);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14aeec720;
  local_78 = 0;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aeec740,1,0);
  local_58 = CONCAT44(local_58._4_4_,250000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4c148,L"geometry.DynamicMesh.MaxComplexCollisionTriCount",&local_58,
                L"If a DynamicMeshCompnent\'s UDynamicMesh has a larger triangle count than this value, it will not be passed to the Physics system to be used as Complex Collision geometry. A negative value indicates no limit."
               );
  atexit(FUN_143b6dd00);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aeed5e0,1,0);
  local_58 = -0x7ffffffeb51129ce;
  local_44 = 0x11;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_146491dde(&local_58);
  ppuStack_70 = &PTR_FUN_14aeeec20;
  local_78 = 1;
  local_68 = 2;
  FUN_14282b410(L"/Script/GeometryFramework",&PTR_FUN_14aeeec90,3,&PTR_FUN_14aeeec60);
  local_58._0_4_ = 200000;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4c298,L"geometry.DynamicMesh.TextBasedDupeTriThreshold",&local_58,
                L"Triangle count threshold for text-based UDynamicMesh duplication using Base64. Large values are quite slow."
               );
  atexit(FUN_143b6f9b9);
  local_58._0_4_ = 300;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4c2b0,L"geometry.DynamicMesh.DupeStashTimeout",&local_58,
                L"Timeout in seconds for references held by internal UDynamicMesh duplication helper system. See FDynamicMeshCopyHelper."
               );
  atexit(FUN_143b6f9fe);
  DAT_14cb4c2e8 = 0;
  DAT_14cb4c2f0 = 0;
  DAT_14cb4c2c8 = 0;
  _DAT_14cb4c2d0 = 0;
  _DAT_14cb4c2f4 = 0xffffffff00000080;
  DAT_14cb4c2fc = 0;
  DAT_14cb4c308 = 0;
  DAT_14cb4c310 = 0;
  atexit(FUN_143b6fa43);
  _DAT_14cb4c318 = 0;
  local_58 = CONCAT44(local_58._4_4_,1000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4c320,L"geometry.DynamicMesh.MaxPoolSize",&local_58,
                L"Maximum number of meshes a UDynamicMeshPool will allow to be in the pool before running garbage collection"
               );
  atexit(FUN_143b6ffcc);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b77ad0 FUN_143b77ad0 body=55 status=ok
// SIG undefined FUN_143b77ad0(void)

void FUN_143b77ad0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c3a8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c3a8 = FUN_14171c317(FUN_14649242c,uVar1,L"EBakeTextureResolution");
  }
  return;
}



// FUNCTION 143b77b07 FUN_143b77b07 body=55 status=ok
// SIG undefined FUN_143b77b07(void)

void FUN_143b77b07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c3c0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c3c0 = FUN_14171c317(FUN_14649245b,uVar1,L"EBakeTextureBitDepth");
  }
  return;
}



// FUNCTION 143b77b3e FUN_143b77b3e body=55 status=ok
// SIG undefined FUN_143b77b3e(void)

void FUN_143b77b3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c3d8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c3d8 = FUN_14171c317(FUN_14649248a,uVar1,L"EBakeTextureSamplesPerPixel");
  }
  return;
}



// FUNCTION 143b77b75 FUN_143b77b75 body=55 status=ok
// SIG undefined FUN_143b77b75(void)

void FUN_143b77b75(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c478 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c478 = FUN_14171c317(FUN_14649273e,uVar1,L"EGeometrySelectionElementType");
  }
  return;
}



// FUNCTION 143b77bac FUN_143b77bac body=55 status=ok
// SIG undefined FUN_143b77bac(void)

void FUN_143b77bac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c490 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c490 = FUN_14171c317(FUN_14649276d,uVar1,L"EGeometrySelectionTopologyType");
  }
  return;
}



// FUNCTION 143b77be3 FUN_143b77be3 body=55 status=ok
// SIG undefined FUN_143b77be3(void)

void FUN_143b77be3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c520 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c520 = FUN_14171c317(FUN_146492988,uVar1,L"EMarqueeSelectionUpdateType");
  }
  return;
}



// FUNCTION 143b77c1a FUN_143b77c1a body=4174 status=ok
// SIG undefined FUN_143b77c1a(void)

undefined8 *
FUN_143b77c1a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,char *param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,longlong param_11)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Dst;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong **pplVar18;
  longlong **pplVar19;
  undefined8 *puVar20;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  longlong *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8 [3];
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  _Dst = (void *)FUN_14001cc68(0x570);
  memset(_Dst,0,0x570);
  FUN_1484d448a(_Dst);
  *param_1 = _Dst;
  *(undefined8 *)((longlong)_Dst + 8) = param_2;
  local_1c8 = param_1;
  local_1b8 = param_3;
  FUN_1484c328a(_Dst,param_3);
  *(undefined8 *)((longlong)_Dst + 0x550) = *param_4;
  *(ulonglong *)((longlong)_Dst + 0x490) = CONCAT44(param_9,param_9);
  *(undefined4 *)((longlong)_Dst + 0x4a0) = param_10;
  *(undefined4 *)((longlong)_Dst + 0x4b0) = 2;
  *(undefined4 *)((longlong)_Dst + 0x20) = param_8;
  local_118 = *(longlong **)((longlong)_Dst + 0xc0);
  uVar3 = *(undefined8 *)((longlong)_Dst + 200);
  local_1a8[2] = *(longlong **)((longlong)_Dst + 0xd0);
  uVar4 = *(undefined8 *)((longlong)_Dst + 0xd8);
  local_188 = *(longlong *)((longlong)_Dst + 0xe0);
  lStack_180 = *(undefined8 *)((longlong)_Dst + 0xe8);
  local_e8 = *(undefined8 *)((longlong)_Dst + 0xf0);
  uStack_e0 = *(undefined8 *)((longlong)_Dst + 0xf8);
  local_f8 = (undefined4)local_188;
  uStack_f4 = (undefined4)((ulonglong)local_188 >> 0x20);
  uStack_f0 = (undefined4)lStack_180;
  uStack_ec = (undefined4)((ulonglong)lStack_180 >> 0x20);
  local_108 = SUB84(local_1a8[2],0);
  uStack_104 = (undefined4)((ulonglong)local_1a8[2] >> 0x20);
  uStack_100 = (undefined4)uVar4;
  uStack_fc = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_110 = (undefined2)uVar3;
  uStack_10e = (undefined2)((ulonglong)uVar3 >> 0x10);
  uStack_10c = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(longlong *)((longlong)_Dst + 0xf0) = local_178;
  *(longlong *)((longlong)_Dst + 0xf8) = lStack_170;
  *(undefined ***)((longlong)_Dst + 0xe0) = &PTR_LAB_14aefe510;
  *(longlong *)((longlong)_Dst + 0xe8) = param_11;
  *(undefined8 *)((longlong)_Dst + 0xd0) = 0;
  *(longlong *)((longlong)_Dst + 0xd8) = lStack_190;
  *(undefined1 **)((longlong)_Dst + 0xc0) = &LAB_143b7e95c;
  *(longlong **)((longlong)_Dst + 200) = local_1a8[1];
  local_178 = local_e8;
  lStack_170 = uStack_e0;
  lStack_190 = uVar4;
  local_1a8[0] = local_118;
  local_1a8[1] = (longlong *)uVar3;
  local_1b0 = param_4;
  if (local_118 != (longlong *)0x0) {
    plVar13 = local_1a8[2];
    if (local_1a8[2] == (longlong *)0x0) {
      plVar13 = &local_188;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  local_118 = *(longlong **)((longlong)_Dst + 0x80);
  plVar13 = *(longlong **)((longlong)_Dst + 0x88);
  local_1a8[2] = *(longlong **)((longlong)_Dst + 0x90);
  lVar15 = *(longlong *)((longlong)_Dst + 0x98);
  local_188 = *(longlong *)((longlong)_Dst + 0xa0);
  lStack_180 = *(longlong *)((longlong)_Dst + 0xa8);
  local_e8 = *(longlong *)((longlong)_Dst + 0xb0);
  uStack_e0 = *(longlong *)((longlong)_Dst + 0xb8);
  local_f8 = (undefined4)local_188;
  uStack_f4 = (undefined4)((ulonglong)local_188 >> 0x20);
  uStack_f0 = (undefined4)lStack_180;
  uStack_ec = (undefined4)((ulonglong)lStack_180 >> 0x20);
  local_108 = SUB84(local_1a8[2],0);
  uStack_104 = (undefined4)((ulonglong)local_1a8[2] >> 0x20);
  uStack_100 = (undefined4)lVar15;
  uStack_fc = (undefined4)((ulonglong)lVar15 >> 0x20);
  uStack_110 = SUB82(plVar13,0);
  uStack_10e = (undefined2)((ulonglong)plVar13 >> 0x10);
  uStack_10c = (undefined4)((ulonglong)plVar13 >> 0x20);
  *(longlong *)((longlong)_Dst + 0xb0) = local_178;
  *(longlong *)((longlong)_Dst + 0xb8) = lStack_170;
  *(undefined ***)((longlong)_Dst + 0xa0) = &PTR_LAB_14aefe530;
  *(longlong *)((longlong)_Dst + 0xa8) = param_11;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(longlong *)((longlong)_Dst + 0x98) = lStack_190;
  *(undefined1 **)((longlong)_Dst + 0x80) = &LAB_143b7e9da;
  *(longlong **)((longlong)_Dst + 0x88) = local_1a8[1];
  local_178 = local_e8;
  lStack_170 = uStack_e0;
  lStack_190 = lVar15;
  local_1a8[0] = local_118;
  local_1a8[1] = plVar13;
  if (local_118 != (longlong *)0x0) {
    plVar13 = &local_188;
    if (local_1a8[2] != (longlong *)0x0) {
      plVar13 = local_1a8[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  puVar8 = local_1b8;
  puVar17 = local_1c8;
  *(undefined8 *)((longlong)_Dst + 0x38) = param_6;
  *(undefined4 *)((longlong)_Dst + 0x30) = 4;
  fVar7 = DAT_14c84636c;
  fVar6 = DAT_14c846364._4_4_;
  fVar5 = (float)DAT_14c846364;
  uStack_110 = 0;
  local_118 = (longlong *)0x0;
  uStack_10c = 0x3ed70a3d;
  local_108 = 0x3ed70a3d;
  uStack_104 = 0x3ed70a3d;
  uStack_100 = 0x3ed70a3d;
  uStack_fc = 0x3ed70a3d;
  local_f8 = 0x3ed70a3d;
  uStack_f4 = 0x3ed70a3d;
  uStack_f0 = 0x3ed70a3d;
  uStack_ec = 0x3ed70a3d;
  local_d8 = 0x3ed70a3d3ed70a3d;
  uStack_d0 = 0x3ed70a3d3ed70a3d;
  local_e8 = CONCAT44((DAT_14c846350._4_4_ + DAT_14c846364._4_4_) * 0.5,
                      ((float)DAT_14c846350 + (float)DAT_14c846364) * 0.5);
  uStack_e0 = (ulonglong)(uint)((DAT_14c846358 + DAT_14c84636c) * 0.5);
  if (param_7[7] == '\x01') {
    FUN_1484c32da(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(_Dst,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(_Dst);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (*param_7 == '\x01') {
    FUN_1484c363a(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[6] == '\x01') {
    FUN_1484c399a(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[1] == '\x01') {
    FUN_1484c3cfa(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[2] == '\x01') {
    FUN_1484c405a(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[3] == '\x01') {
    FUN_1484c43ba(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[4] == '\x01') {
    FUN_1484c471a(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[8] == '\x01') {
    FUN_1484c4a7a(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[9] == '\x01') {
    FUN_1484c4dda(&local_c8,&local_118,param_5);
    plVar13 = uStack_c0;
    uVar3 = *puVar17;
    local_1a8[0] = local_c8;
    local_1a8[1] = uStack_c0;
    if (uStack_c0 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    plVar13 = uStack_c0;
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 1;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_c0)(uStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (param_7[5] == '\x01') {
    plVar13 = (longlong *)FUN_14001cc68(0xb0);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14aefe6d0;
    local_1c0 = plVar13 + 2;
    memset(local_1c0,0,0xa0);
    plVar13[2] = (longlong)&PTR_FUN_14aefe6f0;
    *(undefined4 *)(plVar13 + 3) = 1;
    plVar13[0x10] = 0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar16 = plVar13 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    *(undefined4 *)(plVar13 + 3) = 0x20;
    *(float *)((longlong)plVar13 + 0x1c) = fVar5;
    *(float *)(plVar13 + 4) = fVar6;
    *(float *)((longlong)plVar13 + 0x24) = fVar7;
    uVar3 = *puVar8;
    lVar15 = puVar8[1];
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    pplVar18 = &local_118;
    pplVar19 = local_1a8;
    for (lVar14 = 0x14; lVar14 != 0; lVar14 = lVar14 + -1) {
      *(undefined4 *)pplVar19 = *(undefined4 *)pplVar18;
      pplVar18 = (longlong **)((longlong)pplVar18 + 4);
      pplVar19 = (longlong **)((longlong)pplVar19 + 4);
    }
    local_158 = (code *)0x0;
    local_148 = (longlong *)FUN_14001cc68(0x70,8);
    puVar17 = local_1c8;
    *local_148 = (longlong)&PTR_FUN_14aefe710;
    local_148[1] = param_5;
    local_148[2] = uVar3;
    local_148[3] = lVar15;
    pplVar18 = local_1a8;
    puVar20 = local_148 + 4;
    for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *pplVar18;
      pplVar18 = pplVar18 + 1;
      puVar20 = puVar20 + 1;
    }
    if (local_148 + 1 != (undefined8 *)0x0) {
      local_158 = FUN_143b7ea4c;
    }
    local_c8 = (longlong *)plVar13[6];
    uStack_c0 = (longlong *)plVar13[7];
    local_b8 = (longlong *)plVar13[8];
    uStack_b0 = plVar13[9];
    local_a8 = plVar13[10];
    uStack_a0 = plVar13[0xb];
    local_98 = plVar13[0xc];
    uStack_90 = plVar13[0xd];
    lVar11 = local_98;
    lVar12 = uStack_90;
    lVar9 = local_a8;
    lVar10 = uStack_a0;
    lVar14 = uStack_b0;
    lVar15 = (longlong)uStack_c0;
    plVar13[0xc] = CONCAT44(uStack_124,local_128);
    plVar13[0xd] = CONCAT44(uStack_11c,uStack_120);
    plVar13[10] = CONCAT44(uStack_134,local_138);
    plVar13[0xb] = CONCAT44(uStack_12c,uStack_130);
    plVar13[8] = (longlong)local_148;
    plVar13[9] = CONCAT44(uStack_13c,uStack_140);
    plVar13[6] = (longlong)local_158;
    plVar13[7] = CONCAT44(uStack_14c,uStack_150);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_128 = (undefined4)local_98;
    uStack_124 = local_98._4_4_;
    uStack_120 = (undefined4)uStack_90;
    uStack_11c = uStack_90._4_4_;
    local_138 = (undefined4)local_a8;
    uStack_134 = local_a8._4_4_;
    uStack_130 = (undefined4)uStack_a0;
    uStack_12c = uStack_a0._4_4_;
    local_148 = local_b8;
    uStack_140 = (undefined4)uStack_b0;
    uStack_13c = uStack_b0._4_4_;
    local_158 = (code *)local_c8;
    uStack_150 = (undefined4)uStack_c0;
    uStack_14c = uStack_c0._4_4_;
    uStack_c0 = (longlong *)lVar15;
    uStack_b0 = lVar14;
    local_98 = lVar11;
    uStack_90 = lVar12;
    if (local_c8 != (longlong *)0x0) {
      plVar16 = local_148;
      if (local_b8 == (longlong *)0x0) {
        plVar16 = (longlong *)&local_138;
      }
      local_a8 = lVar9;
      uStack_a0 = lVar10;
      (**(code **)(*plVar16 + 0x10))();
    }
    local_1a8[0] = (longlong *)plVar13[0xe];
    local_1a8[1] = (longlong *)plVar13[0xf];
    local_1a8[2] = (longlong *)plVar13[0x10];
    lStack_190 = plVar13[0x11];
    local_188 = plVar13[0x12];
    lStack_180 = plVar13[0x13];
    local_178 = plVar13[0x14];
    lStack_170 = plVar13[0x15];
    plVar13[0x14] = local_98;
    plVar13[0x15] = uStack_90;
    plVar13[0x12] = (longlong)&PTR_LAB_14aefe5b0;
    plVar13[0x13] = (longlong)&LAB_143b7ecf6;
    plVar13[0x10] = 0;
    plVar13[0x11] = uStack_b0;
    plVar13[0xe] = (longlong)FUN_1484d4e76;
    plVar13[0xf] = (longlong)uStack_c0;
    local_98 = local_178;
    uStack_90 = lStack_170;
    local_a8 = local_188;
    uStack_a0 = lStack_180;
    local_b8 = local_1a8[2];
    uStack_b0 = lStack_190;
    local_c8 = local_1a8[0];
    uStack_c0 = local_1a8[1];
    if (local_1a8[0] != (longlong *)0x0) {
      plVar16 = local_b8;
      if (local_1a8[2] == (longlong *)0x0) {
        plVar16 = &local_a8;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    uVar3 = *puVar17;
    local_1a8[0] = local_1c0;
    local_1a8[1] = plVar13;
    if (plVar13 == (longlong *)0x0) {
      FUN_1483803f4(uVar3,local_1a8);
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      FUN_1483803f4(uVar3);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    iVar2 = *(int *)(param_11 + 0x38);
    *(uint *)(param_11 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_11 + 0x3c) < iVar2 + 1U) {
      FUN_1401c3474((longlong *)(param_11 + 0x30),iVar2);
    }
    *(undefined1 *)(*(longlong *)(param_11 + 0x30) + (longlong)iVar2) = 0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar13 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  plVar13 = (longlong *)puVar8[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar13 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = (longlong *)local_1b0[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar13 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return puVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b78c69 FUN_143b78c69 body=55 status=ok
// SIG undefined FUN_143b78c69(void)

void FUN_143b78c69(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c608 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c608 = FUN_14171c317(FUN_146492ba2,uVar1,L"EBaseCreateFromSelectedTargetType");
  }
  return;
}



// FUNCTION 143b78cb2 FUN_143b78cb2 body=479 status=ok
// SIG undefined FUN_143b78cb2(void)

void FUN_143b78cb2(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80 [11];
  ulonglong local_28;
  
  uVar7 = param_2 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_2 == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x388))(param_1);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),'\x02' - cVar2);
  }
  (**(code **)(*param_1 + 0x390))(param_1,uVar7);
  (**(code **)(*param_1 + 0x400))();
  lVar4 = param_1[0x14];
  if (lVar4 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_145a7b1c0();
    plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,1);
  if (param_1[0x27] != 0) {
    FUN_143b84538(param_1[0x27],local_80);
    if ((char)uVar7 == '\x01') {
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*param_1 + 0x3d8))(param_1,&local_98);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_98);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      puVar1 = local_80[0];
      if ((char)param_1[0x7c] == '\x01') {
        local_88 = DAT_14c8464f0;
        local_98 = DAT_14c8464e0;
        uStack_90 = DAT_14c8464e8;
        local_b0 = param_1[0x80];
        local_b8 = local_b8 & 0xffffffffffffff00;
        local_a8 = local_b0;
        local_a0 = local_b0;
        FUN_146c3c569(local_80[0],&local_b0,&local_98,0);
        FUN_146c3c4e4(puVar1,param_1 + 0x7d);
      }
      uVar3 = (**(code **)(*param_1 + 0x3c8))(param_1);
      local_98 = (longlong *)0x1000000010101;
      local_b8 = 0;
      FUN_148506f34(param_1[0x14],puVar1,uVar3);
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
    }
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])(local_80[0],1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b78ee8 FUN_143b78ee8 body=3241 status=ok
// SIG undefined FUN_143b78ee8(void)

void FUN_143b78ee8(void **param_1)

{
  int *piVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  void **ppvVar9;
  void **ppvVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  uint uVar13;
  DWORD DVar14;
  DWORD DVar15;
  PRTL_CRITICAL_SECTION_DEBUG p_Var16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  ULONG_PTR *pUVar20;
  void **ppvVar21;
  uint *puVar22;
  undefined8 *puVar23;
  void **ppvVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auStack_1f8 [32];
  _RTL_CRITICAL_SECTION *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  code *local_1b8;
  _RTL_CRITICAL_SECTION *local_1b0;
  code *local_1a8;
  _RTL_CRITICAL_SECTION *local_1a0;
  code *local_198;
  _RTL_CRITICAL_SECTION *local_190;
  undefined4 *local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  int local_15c;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  void **local_128;
  void **local_120;
  LPCRITICAL_SECTION local_118;
  longlong *local_110;
  void **local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  _RTL_CRITICAL_SECTION *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  code *local_c8;
  void ***local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  void **local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_1[0xb5] == (void *)0x0) goto LAB_143b78f1f;
  pvVar8 = param_1[0xe5];
  local_158 = *(uint *)((longlong)pvVar8 + 0x1d8);
  uStack_154 = *(undefined4 *)((longlong)pvVar8 + 0x1dc);
  uStack_150 = *(undefined4 *)((longlong)pvVar8 + 0x1e0);
  uStack_14c = *(undefined4 *)((longlong)pvVar8 + 0x1e4);
  local_148 = *(undefined4 *)((longlong)pvVar8 + 0x1e8);
  uStack_144 = *(undefined4 *)((longlong)pvVar8 + 0x1ec);
  uStack_140 = *(undefined4 *)((longlong)pvVar8 + 0x1f0);
  uStack_13c = *(undefined4 *)((longlong)pvVar8 + 500);
  local_138 = *(undefined4 *)((longlong)pvVar8 + 0x1f8);
  uStack_134 = *(undefined4 *)((longlong)pvVar8 + 0x1fc);
  uStack_130 = *(undefined4 *)((longlong)pvVar8 + 0x200);
  uStack_12c = *(undefined4 *)((longlong)pvVar8 + 0x204);
  *(undefined8 *)((longlong)pvVar8 + 0x1d8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)pvVar8 + 0x1e0) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)pvVar8 + 0x1e8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)pvVar8 + 0x1f0) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)pvVar8 + 0x1f8) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)pvVar8 + 0x200) = 0xffefffffffffffff;
  local_15c = 0;
  local_178 = (void *)0x0;
  uStack_170 = 0;
  InitializeCriticalSection(&local_a8);
  SetCriticalSectionSpinCount(&local_a8,4000);
  local_c0 = &local_128;
  local_1c8 = &local_b8;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = FUN_143b7f6bc;
  local_1d0 = 0;
  local_128 = param_1;
  local_120 = (void **)&local_158;
  local_118 = &local_a8;
  local_110 = (longlong *)&local_15c;
  local_108 = &local_178;
  FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xf7),1);
  DeleteCriticalSection(&local_a8);
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  FUN_1484cca36(param_1[0xe5],param_1[0xe6],&local_188);
  if ((longlong)(int)uStack_180 != 0) {
    lVar28 = (longlong)(int)uStack_180 << 2;
    puVar17 = local_188;
    do {
      uVar12 = FUN_1484ccb94(param_1 + 0xe7);
      p_Var16 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1484ccc70(param_1 + 0xe7,uVar12);
      local_190 = &local_a8;
      local_198 = FUN_143b7f7f2;
      local_a8.DebugInfo = p_Var16;
      FUN_1484ccccc(param_1[0xe5],puVar17,&local_198);
      local_15c = local_15c + *(int *)&p_Var16->CriticalSection;
      uVar7 = *puVar17;
      iVar25 = *(int *)(param_1 + 0xf7);
      *(uint *)(param_1 + 0xf7) = iVar25 + 1U;
      if (*(uint *)((longlong)param_1 + 0x7bc) < iVar25 + 1U) {
        FUN_1484d7f58(param_1 + 0xf6,iVar25);
      }
      uVar29 = uStack_170;
      *(ulonglong *)((longlong)param_1[0xf6] + (longlong)iVar25 * 8) = CONCAT44(uVar12,uVar7);
      lVar26 = (longlong)(int)uStack_170;
      uVar13 = (int)uStack_170 + 1;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar13);
      if (uStack_170._4_4_ < uVar13) {
        FUN_1446f48e2(&local_178,uVar29 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_178 + lVar26 * 4) = uVar12;
      puVar17 = puVar17 + 1;
      lVar28 = lVar28 + -4;
    } while (lVar28 != 0);
  }
  p_Var16 = (PRTL_CRITICAL_SECTION_DEBUG)
            FUN_1484ccc70(param_1 + 0xe7,*(undefined4 *)(param_1 + 0xf8));
  iVar25 = *(int *)((longlong)&p_Var16->CriticalSection + 4);
  *(undefined4 *)&p_Var16->CriticalSection = 0;
  if (iVar25 < 0) {
    FUN_14481578e(p_Var16,0);
  }
  local_1a8 = FUN_143b7f826;
  local_1a0 = &local_a8;
  local_a8.DebugInfo = p_Var16;
  FUN_1484cce80(param_1[0xe5],param_1[0xe6]);
  local_1b8 = FUN_143b7f85a;
  local_1b0 = &local_a8;
  local_a8.DebugInfo = p_Var16;
  FUN_1484cd08a(param_1[0xe5]);
  uVar29 = uStack_170;
  local_15c = local_15c + *(int *)&p_Var16->CriticalSection;
  lVar28 = (longlong)(int)uStack_170;
  uVar13 = (int)uStack_170 + 1;
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar13);
  if (uStack_170._4_4_ < uVar13) {
    FUN_1446f48e2(&local_178,uVar29 & 0xffffffff);
  }
  pvVar8 = local_178;
  *(undefined4 *)((longlong)local_178 + lVar28 * 4) = *(undefined4 *)(param_1 + 0xf8);
  ppvVar9 = param_1[0xb5];
  local_120 = (void **)0x0;
  lVar28 = (longlong)(int)uStack_170;
  local_118 = (LPCRITICAL_SECTION)CONCAT44(local_118._4_4_,(int)uStack_170);
  local_128 = ppvVar9;
  if (lVar28 == 0) {
    local_118 = (LPCRITICAL_SECTION)(uStack_170 & 0xffffffff);
  }
  else {
    FUN_144a06ca8(&local_120,uStack_170 & 0xffffffff,0);
    memcpy(local_120,pvVar8,lVar28 << 2);
  }
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar25 = *(int *)(lVar28 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar25 != 2) {
      if (iVar25 != 1) goto LAB_143b792e3;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_143b792ec;
      goto LAB_143b793e7;
    }
LAB_143b792ec:
    ppvVar10 = local_128;
    if ((longlong)(int)local_118 != 0) {
      ppvVar5 = (void **)((longlong)local_120 + (longlong)(int)local_118 * 4);
      ppvVar2 = local_128 + 0x89;
      ppvVar3 = local_128 + 0x90;
      ppvVar24 = local_120;
LAB_143b7931f:
      if (*(int *)(ppvVar10 + 0x8a) != *(int *)((longlong)ppvVar10 + 0x47c)) {
        uVar13 = *(uint *)ppvVar24;
        ppvVar21 = ppvVar10[0x91];
        if (ppvVar10[0x91] == (void **)0x0) {
          ppvVar21 = ppvVar3;
        }
        iVar25 = *(int *)((longlong)ppvVar21 +
                         (ulonglong)(*(int *)(ppvVar10 + 0x92) - 1U & uVar13) * 4);
        if (iVar25 != -1) {
          pvVar8 = *ppvVar2;
          iVar27 = iVar25;
          do {
            if (*(uint *)((longlong)pvVar8 + (longlong)iVar27 * 0x18) == uVar13) goto LAB_143b79381;
            iVar27 = *(int *)((longlong)pvVar8 + (longlong)iVar27 * 0x18 + 0x10);
          } while (iVar27 != -1);
        }
      }
      goto LAB_143b79373;
    }
  }
  else {
LAB_143b792e3:
    if (iVar25 == 0x10) goto LAB_143b792ec;
LAB_143b793e7:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar25 = *(int *)(lVar28 + 0xc60), iVar25 != 2)) {
        if (iVar25 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_143b79aa2;
        }
        goto LAB_143b79418;
      }
LAB_143b79aa2:
      ppvVar10 = local_128;
      if ((longlong)(int)local_118 != 0) {
        ppvVar5 = (void **)((longlong)local_120 + (longlong)(int)local_118 * 4);
        ppvVar2 = local_128 + 0x89;
        ppvVar3 = local_128 + 0x90;
        ppvVar24 = local_120;
LAB_143b79ad5:
        if (*(int *)(ppvVar10 + 0x8a) != *(int *)((longlong)ppvVar10 + 0x47c)) {
          uVar13 = *(uint *)ppvVar24;
          ppvVar21 = ppvVar10[0x91];
          if (ppvVar10[0x91] == (void **)0x0) {
            ppvVar21 = ppvVar3;
          }
          iVar25 = *(int *)((longlong)ppvVar21 +
                           (ulonglong)(*(int *)(ppvVar10 + 0x92) - 1U & uVar13) * 4);
          if (iVar25 != -1) {
            pvVar8 = *ppvVar2;
            iVar27 = iVar25;
            do {
              if (*(uint *)((longlong)pvVar8 + (longlong)iVar27 * 0x18) == uVar13)
              goto LAB_143b79b37;
              iVar27 = *(int *)((longlong)pvVar8 + (longlong)iVar27 * 0x18 + 0x10);
            } while (iVar27 != -1);
          }
        }
        goto LAB_143b79b29;
      }
    }
    else {
LAB_143b79418:
      ppvVar10 = local_120;
      if (DAT_14ca9a43c == 0) {
        puVar4 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar18 = (uint *)*puVar4;
        if (puVar18 != (uint *)0x0) goto LAB_143b79783;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143b7d212);
          }
          lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar17 = *(undefined4 **)(lVar28 + 0x310);
          *(undefined8 *)(lVar28 + 0x310) = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar17 = 0xffffffff;
          *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar4 = puVar17;
          FUN_140217a48(puVar4);
          puVar18 = (uint *)*puVar4;
LAB_143b79783:
          puVar23 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar23 + 0x18);
          uVar13 = puVar18[0x12];
          if (puVar22 <= puVar18 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
            LOCK();
            uVar6 = *puVar18;
            *puVar18 = *puVar18 + uVar13 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar13) != 0xffffffff) break;
            puVar18 = (uint *)*puVar4;
            *puVar18 = 0xffffffff;
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar4 = puVar18;
            puVar23 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
            puVar22 = (uint *)(puVar23 + 0x18);
            uVar13 = 0;
            if (puVar22 <= puVar18 + 0x4000) {
              uVar13 = 1;
              goto LAB_143b79803;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143b79803:
        *(uint **)(puVar18 + 0x10) = puVar22;
        puVar18[0x12] = uVar13;
        FUN_1447247dc(puVar23,0);
        ppvVar10 = local_120;
        *puVar23 = &PTR_FUN_14aefd9a8;
        puVar23[0x15] = local_128;
        puVar23[0x16] = 0;
        lVar28 = (longlong)(int)local_118;
        *(int *)(puVar23 + 0x17) = (int)local_118;
        if (lVar28 == 0) {
          *(undefined4 *)((longlong)puVar23 + 0xbc) = 0;
        }
        else {
          FUN_144a06ca8(puVar23 + 0x16,(ulonglong)local_118 & 0xffffffff,0);
          memcpy((void *)puVar23[0x16],ppvVar10,lVar28 << 2);
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          iVar25 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          }
          else {
            uVar29 = 2;
          }
        }
        else {
          iVar25 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar29 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar28 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar28 == 0) {
          uVar11 = 1;
          if ((char)uVar29 != '\x06') {
            uVar11 = uVar29;
          }
          uVar29 = uVar11;
          uVar19 = 0;
        }
        else {
          if ((char)uVar29 == '\x06') {
            uVar29 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
          }
          uVar19 = *(undefined8 *)(lVar28 + 0x30);
        }
        puVar23[0xf] = uVar19;
        puVar23[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar25;
        if (puVar23 == (undefined8 *)0x0) {
          local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT71(local_a8.DebugInfo._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT71(local_a8.DebugInfo._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        local_a8.OwningThread = (ULONG_PTR *)0x0;
        local_a8.SpinCount = (ULONG_PTR)&PTR_LAB_14aefd930;
        local_80 = local_128;
        local_78 = (void *)0x0;
        lVar28 = (longlong)(int)local_118;
        local_70 = (int)local_118;
        if (lVar28 == 0) {
          local_6c = 0;
        }
        else {
          FUN_144a06ca8(&local_78,(ulonglong)local_118 & 0xffffffff,0);
          memcpy(local_78,ppvVar10,lVar28 << 2);
        }
        local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&LAB_1484d2e40;
        local_1d8 = &local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FOctreeDynamicMeshSceneProxyUpdatePreClean",&DAT_14cb4c988);
        if (local_a8.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          pUVar20 = local_a8.OwningThread;
          if (local_a8.OwningThread == (ULONG_PTR *)0x0) {
            pUVar20 = &local_a8.SpinCount;
          }
          (**(code **)(*pUVar20 + 0x10))();
        }
      }
    }
  }
LAB_143b79510:
  if (local_120 != (void **)0x0) {
    FUN_1400020a8(local_120);
  }
  local_d0 = (**(code **)(*(longlong *)ppvVar9[0x93] + 0xa88))();
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  lVar28 = *(longlong *)(local_d0 + 0x208);
  if (lVar28 != 0) {
    if (*(int *)(lVar28 + 0x28) < 1) {
      local_d8 = 0;
    }
    else {
      local_d8 = **(undefined8 **)(lVar28 + 0x20);
    }
    if (*(int *)(lVar28 + 0x38) < 1) {
      local_e0 = 0;
    }
    else {
      local_e0 = **(undefined8 **)(lVar28 + 0x30);
    }
    local_e8 = *(undefined8 *)(lVar28 + 0x40);
  }
  local_a8.OwningThread = (ULONG_PTR *)0x0;
  local_a8.SpinCount = (ULONG_PTR)&PTR_LAB_14aeef740;
  local_80 = (void **)&LAB_1484d2ef2;
  local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1484b9736;
  local_128 = &local_178;
  local_110 = &local_d0;
  local_108 = (void **)&local_d8;
  local_100 = &local_e0;
  local_f8 = &local_e8;
  local_f0 = &local_a8;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = (code *)&LAB_1484d2f04;
  local_c0 = &local_128;
  local_1c8 = &local_b8;
  local_1d0 = 0;
  local_120 = param_1 + 0xe7;
  local_118 = (LPCRITICAL_SECTION)ppvVar9;
  FUN_1427ae281(L"ParallelFor Task",uStack_170 & 0xffffffff,1);
  if (local_a8.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    pUVar20 = local_a8.OwningThread;
    if (local_a8.OwningThread == (ULONG_PTR *)0x0) {
      pUVar20 = &local_a8.SpinCount;
    }
    (**(code **)(*pUVar20 + 0x10))();
  }
  if (local_188 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143b78f1f:
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar25 = *(int *)((longlong)pvVar8 + (longlong)iVar25 * 0x18 + 0x10), iVar25 != -1) {
LAB_143b79b37:
    if (*(uint *)((longlong)pvVar8 + (longlong)iVar25 * 0x18) == uVar13) goto LAB_143b79b55;
  }
  iVar25 = -1;
LAB_143b79b55:
  uVar19 = *(undefined8 *)((longlong)pvVar8 + (longlong)iVar25 * 0x18 + 8);
  FUN_1484d2d76(ppvVar2);
  FUN_1484afd68(ppvVar10,uVar19);
LAB_143b79b29:
  ppvVar24 = (void **)((longlong)ppvVar24 + 4);
  if (ppvVar24 == ppvVar5) goto LAB_143b79510;
  goto LAB_143b79ad5;
  while (iVar25 = *(int *)((longlong)pvVar8 + (longlong)iVar25 * 0x18 + 0x10), iVar25 != -1) {
LAB_143b79381:
    if (*(uint *)((longlong)pvVar8 + (longlong)iVar25 * 0x18) == uVar13) goto LAB_143b7939f;
  }
  iVar25 = -1;
LAB_143b7939f:
  uVar19 = *(undefined8 *)((longlong)pvVar8 + (longlong)iVar25 * 0x18 + 8);
  FUN_1484d2d76(ppvVar2);
  FUN_1484afd68(ppvVar10,uVar19);
LAB_143b79373:
  ppvVar24 = (void **)((longlong)ppvVar24 + 4);
  if (ppvVar24 == ppvVar5) goto LAB_143b79510;
  goto LAB_143b7931f;
}



// FUNCTION 143b79b92 FUN_143b79b92 body=2123 status=ok
// SIG undefined FUN_143b79b92(void)

void FUN_143b79b92(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Src;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_1b8 [32];
  code **local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  code **local_178;
  undefined1 local_170;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  int *local_138;
  undefined8 *local_130;
  longlong *local_128;
  longlong local_120;
  undefined4 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  code *local_f0;
  int local_e8;
  undefined4 local_e4;
  code *local_e0;
  code **local_d8;
  undefined1 local_cc [4];
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined1 *local_a0;
  code *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_110 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa88))();
  lVar10 = *(longlong *)(local_110 + 0x208);
  if (lVar10 == 0) {
    local_140 = 0;
    local_150 = 0;
    local_148 = 0;
  }
  else {
    if (*(int *)(lVar10 + 0x28) < 1) {
      local_148 = 0;
    }
    else {
      local_148 = **(undefined8 **)(lVar10 + 0x20);
    }
    if (*(int *)(lVar10 + 0x38) < 1) {
      local_150 = 0;
    }
    else {
      local_150 = **(undefined8 **)(lVar10 + 0x30);
    }
    local_140 = *(undefined8 *)(lVar10 + 0x40);
  }
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aeef740;
  local_a0 = &LAB_1484d2ef2;
  local_c8[0] = FUN_1484b9736;
  if ((longlong)*(int *)(param_2 + 0x70) != 0) {
    puVar16 = *(undefined4 **)(param_2 + 0x68);
    local_118 = puVar16 + *(int *)(param_2 + 0x70);
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar10 + 0x308);
    local_130 = (undefined8 *)(lVar10 + 0x310);
    local_120 = 0x527800b400;
    local_138 = (int *)(lVar10 + 0xc60);
    local_128 = (longlong *)(lVar10 + 0x2b8);
    local_160 = param_1;
    local_158 = param_2;
    do {
      uVar4 = *puVar16;
      puVar8 = (undefined8 *)FUN_1484d2f0c(param_2,uVar4);
      lVar9 = FUN_1484afb06(param_1);
      lVar10 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x610))
                         (*(longlong **)(param_1 + 0x298),0);
      if (lVar10 == 0) {
        FUN_14003fbd6();
        lVar10 = DAT_14caea080;
      }
      *(longlong *)(lVar9 + 0x360) = lVar10;
      local_d8 = local_c8;
      local_e0 = FUN_1484c0146;
      local_f0 = (code *)0x0;
      local_e8 = *(int *)(puVar8 + 1);
      lVar10 = (longlong)local_e8;
      _Src = (void *)*puVar8;
      if (lVar10 == 0) {
        local_e4 = 0;
      }
      else {
        FUN_144a06ca8(&local_f0,local_e8,0);
        memcpy(local_f0,_Src,lVar10 << 2);
      }
      lVar10 = local_160;
      local_198 = &local_f0;
      local_178 = &local_e0;
      local_180 = local_140;
      local_188 = local_150;
      local_190 = local_148;
      local_170 = 0;
      FUN_1484bc5c8(local_160,lVar9,local_110,*(undefined4 *)(puVar8 + 1));
      local_108 = lVar10;
      iVar15 = *local_138;
      uStack_100 = uVar4;
      local_f8 = lVar9;
      if (DAT_14c86a9fc == 0) {
        param_1 = lVar10;
        if (iVar15 == 2) goto LAB_143b7a244;
        lVar10 = local_160;
        if (iVar15 != 1) goto LAB_143b79e4e;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        lVar10 = local_108;
        param_1 = local_160;
        if (DVar6 == DVar7) goto LAB_143b7a244;
LAB_143b79e5a:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_138 == 2)) {
LAB_143b7a2fd:
            lVar10 = local_108;
            FUN_1484b585e(local_f8);
            goto LAB_143b7a33d;
          }
          if (*local_138 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_143b7a2fd;
          }
        }
        param_2 = local_158;
        if (DAT_14ca9a43c == 0) {
          puVar12 = (uint *)*puVar1;
          if (puVar12 != (uint *)0x0) goto LAB_143b79fb9;
          do {
            puVar8 = local_130;
            uVar5 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar5 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar5 | 1;
              __tlregdtor(&LAB_143b7d212);
            }
            puVar11 = (undefined4 *)*puVar8;
            *puVar8 = 0;
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar11 = 0xffffffff;
            *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar1 = puVar11;
            FUN_140217a48(puVar1);
            puVar12 = (uint *)*puVar1;
LAB_143b79fb9:
            uVar17 = *(longlong *)(puVar12 + 0x10) + 7;
            uVar5 = puVar12[0x12];
            while( true ) {
              puVar8 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
              if (puVar8 + 0x18 <= puVar12 + 0x4000) {
                *(undefined8 **)(puVar12 + 0x10) = puVar8 + 0x18;
                puVar12[0x12] = uVar5 + 1;
                FUN_1447247dc(puVar8,0);
                *puVar8 = &PTR_FUN_14aefdd70;
                *(undefined4 *)(puVar8 + 0x15) = (undefined4)local_108;
                *(undefined4 *)((longlong)puVar8 + 0xac) = local_108._4_4_;
                *(undefined4 *)(puVar8 + 0x16) = uStack_100;
                *(undefined4 *)((longlong)puVar8 + 0xb4) = uStack_fc;
                puVar8[0x17] = local_f8;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar5 = DAT_14c7585c8 >> 10 & 3;
                  iVar15 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
                    uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
                    iVar15 = 0;
                  }
                  else {
                    uVar17 = 2;
                  }
                }
                else {
                  iVar15 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar17 = 5;
                }
                if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
                }
                param_1 = local_160;
                puVar8[0xe] = LowLevelTasks::
                              TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                              TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                              ::vftable;
                puVar8[9] = puVar8;
                puVar8[10] = puVar8;
                lVar10 = *local_128;
                if (lVar10 == 0) {
                  if ((char)uVar17 == '\x06') {
                    uVar17 = 1;
                  }
                  uVar13 = 0;
                }
                else {
                  if ((char)uVar17 == '\x06') {
                    uVar17 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
                  }
                  uVar13 = *(undefined8 *)(lVar10 + 0x30);
                }
                puVar8[0xf] = uVar13;
                puVar8[0x10] = (uVar17 << 0x3b) + local_120 | 0xc000000000000000;
                *(int *)((longlong)puVar8 + 0x1c) = iVar15;
                if (puVar8 == (undefined8 *)0x0) {
                  local_88 = (code *)CONCAT71(local_88._1_7_,1);
                  FUN_1447439e4(0,&local_88);
                }
                else {
                  LOCK();
                  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                  UNLOCK();
                  local_88 = (code *)CONCAT71(local_88._1_7_,1);
                  FUN_1447439e4(puVar8,&local_88);
                  LOCK();
                  piVar2 = (int *)(puVar8 + 1);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)*puVar8)(puVar8,1);
                  }
                }
                goto LAB_143b79f2f;
              }
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar3 = *puVar12;
              *puVar12 = *puVar12 + uVar5 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar5) != 0xffffffff) break;
              puVar12 = (uint *)*puVar1;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar1 = puVar12;
              uVar17 = (longlong)puVar12 + 0x5f;
              uVar5 = 0;
            }
          } while( true );
        }
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14aefdce0;
        local_50 = local_f8;
        local_60 = (undefined4)local_108;
        uStack_5c = local_108._4_4_;
        uStack_58 = uStack_100;
        uStack_54 = uStack_fc;
        local_88 = FUN_1484d3ad2;
        local_198 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FOctreeDynamicMeshSceneProxyInitializeFromDecomposition");
        if (local_88 != (code *)0x0) {
          pppuVar14 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar14 = &local_68;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      else {
LAB_143b79e4e:
        param_1 = lVar10;
        if (iVar15 != 0x10) goto LAB_143b79e5a;
LAB_143b7a244:
        FUN_1484b585e(local_f8);
LAB_143b7a33d:
        local_80 = &local_f8;
        local_88 = (code *)&uStack_100;
        FUN_1484d2f68(lVar10 + 0x448,local_cc);
        param_2 = local_158;
      }
LAB_143b79f2f:
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_118);
    if (local_c8[0] == (code *)0x0) goto LAB_143b7a3b0;
  }
  pppuVar14 = &local_a8;
  if (local_b8 != (undefined ***)0x0) {
    pppuVar14 = local_b8;
  }
  (*(code *)(*pppuVar14)[2])();
LAB_143b7a3b0:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7a3de FUN_143b7a3de body=1236 status=ok
// SIG undefined FUN_143b7a3de(void)

ulonglong FUN_143b7a3de(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                       uint param_5,char param_6,char param_7,undefined8 param_8,undefined8 param_9)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 *local_98;
  wchar_t **local_90;
  undefined1 local_84 [4];
  longlong *local_80 [2];
  wchar_t *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = L"CopyMeshFromStaticMeshRender_NullMesh";
    local_68 = 0x25;
    FUN_1446e940c(local_80,&local_70);
    local_70 = L"ModelingComponents_SceneComponentToDynamicMesh";
    local_68 = 0x2e;
    ppuVar8 = &local_98;
    FUN_1446e940c(ppuVar8,&local_70);
    local_70 = L"Static Mesh is null";
    local_68 = 0x13;
  }
  else {
    bVar7 = (byte)(param_4 & 0xffffffff);
    if (param_6 == '\0') {
      if (bVar7 != 3) {
        FUN_14582f278(param_8);
        if (bVar7 < 3) {
          local_70 = L"CopyMeshFromAsset_EditorOnly";
          local_68 = 0x1c;
          FUN_1446e940c(local_80,&local_70);
          local_70 = L"ModelingComponents_SceneComponentToDynamicMesh";
          local_68 = 0x2e;
          ppuVar8 = &local_98;
          FUN_1446e940c(ppuVar8,&local_70);
          local_70 = L"Source Models are not available at Runtime";
          local_68 = 0x2a;
        }
        else {
          local_70 = L"CopyMeshFromStaticMesh_LODNotAvailable";
          local_68 = 0x26;
          FUN_1446e940c(local_80,&local_70);
          local_70 = L"ModelingComponents_SceneComponentToDynamicMesh";
          local_68 = 0x2e;
          ppuVar8 = &local_98;
          FUN_1446e940c(ppuVar8,&local_70);
          local_70 = L"Requested LOD Type is not available";
          local_68 = 0x23;
        }
        goto LAB_143b7a46e;
      }
    }
    else {
      if (bVar7 < 2) {
        param_5 = 0;
      }
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + 8) - 1;
      }
      if ((int)param_5 < (int)uVar5) {
        uVar5 = param_5;
      }
      param_5 = 0;
      if (0 < (int)uVar5) {
        param_5 = uVar5;
      }
    }
    bVar7 = *(byte *)(param_3 + 3);
    uVar9 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bVar7);
    FUN_14582f278(param_8);
    if ((*(byte *)(param_1 + 0x195) & 2) == 0) {
      local_70 = L"CopyMeshFromStaticMesh_CPUAccess";
      local_68 = 0x20;
      FUN_1446e940c(local_80,&local_70);
      local_70 = L"ModelingComponents_SceneComponentToDynamicMesh";
      local_68 = 0x2e;
      ppuVar8 = (undefined1 **)local_4c;
      FUN_1446e940c(ppuVar8,&local_70);
      local_70 = L"StaticMesh bAllowCPUAccess must be set to true to read mesh data at Runtime";
      local_68 = 0x4b;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0xe0);
      if (plVar1 != (longlong *)0x0) {
        uVar5 = (int)plVar1[1] - 1;
        if ((int)param_5 < (int)uVar5) {
          uVar5 = param_5;
        }
        uVar4 = 0;
        if (0 < (int)uVar5) {
          uVar4 = (ulonglong)uVar5;
        }
        lVar2 = *(longlong *)(*plVar1 + uVar4 * 8);
        if (lVar2 != 0) {
          local_70 = (wchar_t *)CONCAT35(local_70._5_3_,0x100000000);
          local_70 = (wchar_t *)CONCAT44(local_70._4_4_,0x1010101);
          local_68 = (undefined4)DAT_14c846510;
          uStack_64 = DAT_14c846510._4_4_;
          uStack_60 = (undefined4)DAT_14c846518;
          uStack_5c = DAT_14c846518._4_4_;
          local_58 = DAT_14c846520;
          if ((bVar7 & 1) == 0) {
            local_48 = L"CopyMeshFromStaticMesh_BuildScaleAlreadyBaked";
            local_40 = 0x2d;
            FUN_1446e940c(local_4c,&local_48);
            local_48 = L"ModelingComponents_SceneComponentToDynamicMesh";
            local_40 = 0x2e;
            FUN_1446e940c(local_84,&local_48);
            local_48 = 
            L"Requested mesh without BuildScale, but BuildScale is already baked into the RenderData."
            ;
            local_40 = 0x57;
            FUN_140208c1e(local_80,local_84,local_4c,&local_48);
            FUN_140008f88(param_9,local_80);
            if (local_80[0] != (longlong *)0x0) {
              (**(code **)(*local_80[0] + 0x10))();
            }
          }
          else if (((param_2 == 0) || (param_7 == '\0')) ||
                  (*(int *)(param_2 + 0x6b0) <= (int)uVar4)) {
            FUN_1484ac27c(lVar2,&local_70,param_8);
          }
          else {
            pwVar6 = (wchar_t *)(uVar4 * 0xa0 + *(longlong *)(param_2 + 0x6a8));
            if (((pwVar6 == (wchar_t *)0x0) || (*(longlong *)(pwVar6 + 0x20) == 0)) ||
               ((plVar1 = *(longlong **)(*(longlong *)(pwVar6 + 0x20) + 0x18),
                plVar1 == (longlong *)0x0 ||
                (cVar3 = (**(code **)(*plVar1 + 0x58))(), cVar3 == '\0')))) {
              bVar10 = false;
            }
            else {
              bVar10 = *(int *)(*(longlong *)(pwVar6 + 0x20) + 0x34) == *(int *)(lVar2 + 0x10c);
            }
            local_90 = &local_48;
            local_a8 = &local_98;
            local_98 = &LAB_143b7dcf0;
            local_48 = pwVar6;
            FUN_1484aaeb4(lVar2,&local_70,param_8,bVar10);
          }
          goto LAB_143b7a4a4;
        }
      }
      local_70 = L"CopyMeshFromStaticMesh_NoLODResources";
      local_68 = 0x25;
      FUN_1446e940c(local_80,&local_70);
      local_70 = L"ModelingComponents_SceneComponentToDynamicMesh";
      local_68 = 0x2e;
      ppuVar8 = (undefined1 **)local_4c;
      FUN_1446e940c(ppuVar8,&local_70);
      local_70 = L"LOD Data is not available";
      local_68 = 0x19;
    }
  }
LAB_143b7a46e:
  FUN_140208c1e(&local_48,ppuVar8,local_80,&local_70);
  FUN_140008f88(param_9,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  uVar9 = 0;
LAB_143b7a4a4:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 143b7a8b4 FUN_143b7a8b4 body=1378 status=ok
// SIG undefined FUN_143b7a8b4(void)

undefined8 * FUN_143b7a8b4(undefined8 *param_1,longlong *param_2,int param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ushort *puVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  ushort *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d) = param_4;
  lVar6 = param_2[0xcb];
  local_98 = param_2;
  if (lVar6 == 0) {
    lVar6 = param_2[0xcc];
    if ((DAT_14c950c29 & lVar6 != 0) == 0) goto LAB_143b7a911;
  }
  else if (DAT_14c950c29 != 1) goto LAB_143b7a911;
  FUN_14689c22e(lVar6);
LAB_143b7a911:
  plVar1 = local_98;
  param_1[4] = lVar6;
  param_1[6] = *(undefined8 *)(local_98[0x115] + 0x40);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar5 = FUN_1448d11dc(local_98);
  lVar6 = (**(code **)(*plVar1 + 0xa90))(plVar1);
  iVar10 = -1;
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 8) + -1;
  }
  if (param_3 < iVar10) {
    iVar10 = param_3;
  }
  if (iVar10 < iVar5) {
    iVar10 = iVar5;
  }
  *(int *)(param_1 + 3) = iVar10;
  uVar7 = (**(code **)(*(longlong *)param_1[4] + 800))();
  param_1[5] = uVar7;
  lVar6 = *(longlong *)(*(longlong *)param_1[6] + (longlong)*(int *)(param_1 + 3) * 8);
  param_1[7] = *(undefined8 *)(lVar6 + 0x28);
  FUN_147a1169e(param_1[2],param_1);
  iVar10 = *(int *)(lVar6 + 0x18);
  local_80 = (longlong)iVar10;
  if (local_80 < 1) {
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar6 + 0x10);
    lVar12 = 0;
    iVar5 = 0;
    iVar11 = 0;
    do {
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        lVar14 = (longlong)*(int *)(param_1 + 3);
        if ((((lVar14 < 0) || ((int)local_98[0x10e] <= *(int *)(param_1 + 3))) ||
            (*(int *)(local_98[0x10d] + 8 + lVar14 * 0x28) <= (int)(uint)*(ushort *)(lVar9 + lVar12)
            )) || (iVar13 = 0,
                  *(char *)(*(longlong *)(local_98[0x10d] + lVar14 * 0x28) +
                           (ulonglong)*(ushort *)(lVar9 + lVar12)) == '\0')) goto LAB_143b7a9e2;
      }
      else {
LAB_143b7a9e2:
        iVar13 = *(int *)(lVar9 + 8 + lVar12);
        iVar11 = iVar11 + *(int *)(lVar9 + 0x48 + lVar12);
      }
      iVar5 = iVar5 + iVar13;
      lVar12 = lVar12 + 0xf8;
    } while (local_80 * 0xf8 - lVar12 != 0);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
  }
  plVar1 = param_1 + 8;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar11) {
    FUN_14481578e(plVar1,iVar11);
    iVar10 = *(int *)(lVar6 + 0x18);
  }
  local_88 = (ushort *)CONCAT44(local_88._4_4_,iVar11);
  local_90 = lVar6;
  if (iVar10 != 0) {
    puVar8 = *(ushort **)(lVar6 + 0x10);
    puVar15 = puVar8 + (longlong)iVar10 * 0x7c;
    do {
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        lVar6 = (longlong)*(int *)(param_1 + 3);
        if ((lVar6 < 0) || ((int)local_98[0x10e] <= *(int *)(param_1 + 3))) goto LAB_143b7aa8a;
        if ((*(int *)(local_98[0x10d] + 8 + lVar6 * 0x28) <= (int)(uint)*puVar8) ||
           (*(char *)(*(longlong *)(local_98[0x10d] + lVar6 * 0x28) + (ulonglong)*puVar8) == '\0'))
        goto LAB_143b7aa8a;
      }
      else {
LAB_143b7aa8a:
        if (0 < *(int *)(puVar8 + 0x24)) {
          iVar10 = *(int *)(puVar8 + 8);
          iVar11 = *(int *)(puVar8 + 0x24) + iVar10;
          do {
            if (iVar10 < *(int *)(param_1 + 1)) {
              iVar13 = *(int *)(param_1 + 9);
              *(uint *)(param_1 + 9) = iVar13 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar13 + 1U) {
                FUN_1446f48e2(plVar1,iVar13);
              }
              *(int *)(*plVar1 + (longlong)iVar13 * 4) = iVar10;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
      }
      puVar8 = puVar8 + 0x7c;
    } while (puVar8 != puVar15);
  }
  lVar6 = FUN_1417c143e(param_1[2],*(undefined4 *)(param_1 + 3),0);
  if (((lVar6 != 0) && (*(int *)(lVar6 + 8) != -1)) && (*(int *)(lVar6 + 0x40) != 0)) {
    plVar1 = param_1 + 0x10;
    if (*(int *)((longlong)param_1 + 0x8c) < (int)local_88) {
      FUN_1484ac3e8(plVar1);
    }
    if ((longlong)*(int *)(local_90 + 0x18) != 0) {
      puVar8 = *(ushort **)(local_90 + 0x10);
      local_88 = puVar8 + (longlong)*(int *)(local_90 + 0x18) * 0x7c;
      do {
        if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
          lVar9 = (longlong)*(int *)(param_1 + 3);
          if ((lVar9 < 0) || ((int)local_98[0x10e] <= *(int *)(param_1 + 3))) goto LAB_143b7ab96;
          if ((*(int *)(local_98[0x10d] + 8 + lVar9 * 0x28) <= (int)(uint)*puVar8) ||
             (*(char *)(*(longlong *)(local_98[0x10d] + lVar9 * 0x28) + (ulonglong)*puVar8) == '\0')
             ) goto LAB_143b7ab96;
        }
        else {
LAB_143b7ab96:
          if (0 < *(int *)(puVar8 + 0x24)) {
            iVar10 = *(int *)(puVar8 + 8);
            iVar11 = *(int *)(puVar8 + 0x24) + iVar10;
            do {
              FUN_147ccf02c(lVar6,&local_78,iVar10);
              iVar13 = *(int *)(puVar8 + 0x20);
              lVar9 = 0;
              do {
                uVar4 = *(ushort *)((longlong)&local_78 + lVar9 * 2);
                if ((int)(uint)uVar4 < iVar13) {
                  *(undefined2 *)((longlong)&local_78 + lVar9 * 2) =
                       *(undefined2 *)(*(longlong *)(puVar8 + 0x1c) + (ulonglong)uVar4 * 2);
                }
                lVar9 = lVar9 + 1;
              } while (lVar9 != 0xc);
              iVar13 = *(int *)(param_1 + 0x11);
              *(uint *)(param_1 + 0x11) = iVar13 + 1U;
              if (*(uint *)((longlong)param_1 + 0x8c) < iVar13 + 1U) {
                FUN_147a16750(plVar1,iVar13);
              }
              lVar9 = *plVar1;
              lVar12 = (longlong)iVar13 * 0x30;
              puVar3 = (undefined8 *)(lVar9 + 0x20 + lVar12);
              *puVar3 = local_58;
              puVar3[1] = uStack_50;
              puVar3 = (undefined8 *)(lVar9 + 0x10 + lVar12);
              *puVar3 = local_68;
              puVar3[1] = uStack_60;
              puVar2 = (undefined4 *)(lVar9 + lVar12);
              *puVar2 = local_78;
              puVar2[1] = uStack_74;
              puVar2[2] = uStack_70;
              puVar2[3] = uStack_6c;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar11);
          }
        }
        puVar8 = puVar8 + 0x7c;
      } while (puVar8 != local_88);
    }
  }
  lVar9 = local_80;
  lVar6 = local_90;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  plVar1 = param_1 + 10;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar5) {
    FUN_14481578e(plVar1,iVar5);
  }
  local_78 = 0xffffffff;
  FUN_1448156a8(param_1 + 0xc,&local_78,iVar5);
  if (0 < (int)lVar9) {
    lVar9 = 0;
    do {
      puVar8 = (ushort *)(lVar9 * 0xf8 + *(longlong *)(lVar6 + 0x10));
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        lVar12 = (longlong)*(int *)(param_1 + 3);
        if ((lVar12 < 0) || ((int)local_98[0x10e] <= *(int *)(param_1 + 3))) goto LAB_143b7ad03;
        if ((*(int *)(local_98[0x10d] + 8 + lVar12 * 0x28) <= (int)(uint)*puVar8) ||
           (*(char *)(*(longlong *)(local_98[0x10d] + lVar12 * 0x28) + (ulonglong)*puVar8) == '\0'))
        goto LAB_143b7ad03;
      }
      else {
LAB_143b7ad03:
        iVar10 = *(int *)(puVar8 + 4);
        if (0 < iVar10) {
          iVar5 = *(int *)(puVar8 + 2);
          lVar12 = (longlong)(iVar5 / 3);
          do {
            iVar11 = *(int *)(param_1 + 0xb);
            *(uint *)(param_1 + 0xb) = iVar11 + 1U;
            if (*(uint *)((longlong)param_1 + 0x5c) < iVar11 + 1U) {
              FUN_1446f48e2(plVar1,iVar11);
            }
            *(int *)(*plVar1 + (longlong)iVar11 * 4) = (int)lVar12;
            *(int *)(param_1[0xc] + lVar12 * 4) = (int)lVar9;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar10 + iVar5 / 3);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b7ae18 FUN_143b7ae18 body=9132 status=ok
// SIG undefined FUN_143b7ae18(void)

undefined8 * FUN_143b7ae18(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 uVar20;
  uint *puVar21;
  longlong lVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  undefined ***pppuVar27;
  undefined1 uVar28;
  undefined2 uVar29;
  int iVar30;
  float fVar31;
  ulonglong uVar32;
  undefined1 uVar33;
  undefined2 uVar34;
  int iVar35;
  int iVar36;
  undefined8 *puVar37;
  int iVar38;
  float fVar39;
  ulonglong uVar40;
  uint uVar41;
  double *pdVar42;
  int iVar43;
  ulonglong uVar44;
  ushort uVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  ulonglong local_1b8;
  ulonglong local_1b0;
  int local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  uint *local_178;
  ulonglong local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 *local_140;
  undefined1 *local_138 [2];
  undefined ***local_128;
  undefined **local_118;
  undefined8 *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14aefe1d0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x55,*(undefined4 *)(param_1[0x42] + 8));
  uVar28 = *(undefined1 *)(param_1[0x42] + 8);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = uVar28;
  *(undefined2 *)((longlong)param_1 + 0x2c5) = 1;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x800000000;
  param_1[0x6f] = 0;
  param_1[0x70] = 0x200000000;
  param_1[0x77] = 0;
  param_1[0x78] = 0x300000000;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x1ffffff;
  param_1[0x57] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 4;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x4a6) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4e4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4e6) = 0;
  param_1[0x9b] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4f4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4f6) = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x50c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x50e) = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = &DAT_14aa6dc00;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xaa] = 0;
  *(undefined2 *)(param_1 + 0xab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55a) = 1;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x56c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x56e) = 0;
  param_1[0xae] = 0;
  param_1[0xac] = &PTR_FUN_14aa50910;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 1;
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  param_1[0xb6] = 0;
  param_1[0xb4] = &PTR_FUN_14aa61a50;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ec) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ee) = 0;
  param_1[0xbe] = 0;
  param_1[0xbc] = &PTR_FUN_14a83cdc0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  iVar14 = (int)param_2[0xd4] - *(int *)((longlong)param_2 + 0x6cc);
  iVar36 = iVar14 * 4;
  FUN_1408e3634(param_1 + 0xac,iVar36);
  FUN_1408e36f6(param_1 + 0x9b,iVar36,1,1);
  FUN_140964b22(param_1 + 0xb4,iVar36,1);
  FUN_14017c08a(param_1 + 0xbf,iVar14 * 6,1);
  if (*(int *)((longlong)param_2 + 0x6cc) < (int)param_2[0xd4]) {
    iVar14 = *(int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = iVar14 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2a4) < iVar14 + 1U) {
      FUN_1484d3d4a(param_1 + 0x53,iVar14);
    }
    *(undefined8 *)(param_1[0x53] + (longlong)iVar14 * 0x18) = 0;
    puVar2 = (undefined8 *)(param_1[0x53] + (longlong)(*(int *)(param_1 + 0x54) + -1) * 0x18);
    *(undefined4 *)(puVar2 + 2) = 0;
    *(int *)((longlong)puVar2 + 0x14) = iVar36 + -1;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(int *)((longlong)puVar2 + 0xc) =
         ((int)param_2[0xd4] - *(int *)((longlong)param_2 + 0x6cc)) * 2;
    lVar18 = (**(code **)(*param_2 + 0x610))(param_2,0);
    if (lVar18 == 0) {
      FUN_14003fbd6();
      uVar20 = (**(code **)(*DAT_14caea080 + 0x2f0))();
    }
    else {
      plVar19 = (longlong *)(**(code **)(*param_2 + 0x610))(param_2,0);
      uVar20 = (**(code **)(*plVar19 + 0x2f0))();
    }
    *puVar2 = uVar20;
    puVar24 = (uint *)(param_2 + 0xd5);
    uVar26 = *(uint *)(param_2 + 0xd8);
    if (uVar26 == 0) {
      uVar40 = 1;
      iVar36 = 0;
      uVar32 = 0;
      uVar25 = 0;
    }
    else {
      puVar21 = (uint *)param_2[0xd7];
      if ((uint *)param_2[0xd7] == (uint *)0x0) {
        puVar21 = puVar24;
      }
      uVar25 = *puVar21;
      if (uVar25 == 0) {
        iVar36 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar36 = uVar26 - 1;
        }
        uVar32 = 0;
        uVar40 = (ulonglong)(uint)(iVar36 >> 5);
        if (iVar36 >> 5 < 1) {
          uVar40 = uVar32;
        }
        iVar36 = 0;
        do {
          if (uVar40 == uVar32) goto LAB_143b7b305;
          iVar36 = iVar36 + 0x20;
          uVar25 = puVar21[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar25 == 0);
      }
      else {
        iVar36 = 0;
        uVar32 = 0;
      }
      uVar40 = (ulonglong)(-uVar25 & uVar25);
      uVar44 = uVar40 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar25 = (iVar36 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar25) {
        uVar25 = uVar26;
      }
    }
    if (uVar25 != uVar26) {
      uVar44 = 0;
      lVar18 = 0;
      uVar41 = 0xffffffff;
      do {
        local_1a4 = uVar41;
        local_1a8 = iVar36;
        local_188 = lVar18;
        local_180 = uVar40;
        local_170 = uVar32;
        lVar18 = param_2[0xd3];
        lVar22 = (longlong)(int)uVar25 * 0x40;
        dVar4 = *(double *)(lVar18 + 0x10 + lVar22);
        dVar8 = *(double *)(lVar18 + 0x28 + lVar22) - dVar4;
        dVar5 = *(double *)(lVar18 + 8 + lVar22);
        dVar47 = *(double *)(lVar18 + 0x20 + lVar22) - dVar5;
        dVar50 = *(double *)(lVar18 + 0x18 + lVar22) - *(double *)(lVar18 + lVar22);
        dVar52 = dVar8 * dVar8 + dVar50 * dVar50 + dVar47 * dVar47;
        if (((dVar52 != 1.0) || (dVar9 = dVar8, dVar51 = dVar50, dVar48 = dVar47, NAN(dVar52))) &&
           (dVar9 = DAT_14c8464f0, dVar51 = DAT_14c8464e0, dVar48 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar52)) {
          dVar52 = 1.0 / SQRT(dVar52);
          dVar9 = dVar8 * dVar52;
          dVar51 = dVar50 * dVar52;
          dVar48 = dVar47 * dVar52;
        }
        pdVar42 = (double *)(lVar18 + lVar22);
        fVar31 = *(float *)((longlong)pdVar42 + 0x34);
        local_168 = ZEXT416((uint)fVar31);
        fVar39 = *(float *)(pdVar42 + 7);
        local_158 = ZEXT416((uint)fVar39);
        lVar7 = param_1[0xb1];
        iVar43 = (int)uVar44;
        uVar32 = (ulonglong)(uint)(*(int *)(param_1 + 0xb2) * iVar43);
        *(float *)(lVar7 + uVar32) = (float)*(double *)(lVar18 + lVar22);
        *(float *)(lVar7 + 4 + uVar32) = (float)dVar5;
        *(float *)(lVar7 + 8 + uVar32) = (float)dVar4;
        dVar4 = pdVar42[5];
        dVar5 = pdVar42[4];
        local_1b0 = uVar44 | 1;
        lVar18 = param_1[0xb1];
        iVar14 = (int)local_1b0;
        uVar32 = (ulonglong)(uint)(*(int *)(param_1 + 0xb2) * iVar14);
        *(float *)(lVar18 + uVar32) = (float)pdVar42[3];
        *(float *)(lVar18 + 4 + uVar32) = (float)dVar5;
        *(float *)(lVar18 + 8 + uVar32) = (float)dVar4;
        dVar4 = pdVar42[5];
        dVar5 = pdVar42[4];
        local_1b8 = uVar44 | 2;
        lVar18 = param_1[0xb1];
        iVar15 = (int)local_1b8;
        uVar32 = (ulonglong)(uint)(*(int *)(param_1 + 0xb2) * iVar15);
        *(float *)(lVar18 + uVar32) = (float)pdVar42[3];
        *(float *)(lVar18 + 4 + uVar32) = (float)dVar5;
        *(float *)(lVar18 + 8 + uVar32) = (float)dVar4;
        dVar4 = pdVar42[2];
        dVar5 = pdVar42[1];
        local_198 = uVar44 | 3;
        lVar18 = param_1[0xb1];
        iVar36 = (int)local_198;
        uVar32 = (ulonglong)(uint)(*(int *)(param_1 + 0xb2) * iVar36);
        *(float *)(lVar18 + uVar32) = (float)*pdVar42;
        *(float *)(lVar18 + 4 + uVar32) = (float)dVar5;
        *(float *)(lVar18 + 8 + uVar32) = (float)dVar4;
        fVar54 = (float)dVar9;
        fVar56 = -fVar54;
        fVar46 = (float)dVar48;
        fVar55 = -fVar46;
        fVar49 = (float)dVar51;
        fVar53 = -fVar49;
        lVar18 = param_1[0xa7];
        if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
          fVar13 = fVar56 * -0.0 + DAT_14c846338 * 0.0;
          fVar10 = (fVar13 * 0.0 + (DAT_14c846330._4_4_ * fVar56 - fVar55 * DAT_14c846338)) *
                   (float)DAT_14c846330;
          fVar13 = fVar13 * DAT_14c846330._4_4_;
          fVar12 = DAT_14c846330._4_4_ * DAT_14c846338;
          fVar11 = DAT_14c846338 * -0.0 + DAT_14c846338 * 0.0;
          lVar22 = uVar44 * 0x10;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 32767.0 + (float)DAT_14c846330 * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          iVar30 = (int)ROUND(DAT_14c846330._4_4_ * 32767.0 + DAT_14c846330._4_4_ * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(DAT_14c846338 * 32767.0 + DAT_14c846338 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          uVar34 = (undefined2)iVar35;
          if (iVar35 < -0x7fff) {
            uVar34 = 0x8000;
          }
          *(undefined2 *)(lVar18 + lVar22) = uVar29;
          *(short *)(lVar18 + 2 + lVar22) = (short)iVar30;
          *(undefined2 *)(lVar18 + 4 + lVar22) = uVar34;
          iVar30 = (int)ROUND(fVar49 * -32767.0 + fVar49 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          *(undefined2 *)(lVar18 + 6 + lVar22) = 0x7fff;
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(fVar46 * -32767.0 + fVar46 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          *(short *)(lVar18 + 8 + lVar22) = (short)iVar30;
          if (iVar35 < -0x7fff) {
            iVar35 = -0x8000;
          }
          iVar30 = (int)ROUND(fVar54 * -32767.0 + fVar54 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          *(short *)(lVar18 + 10 + lVar22) = (short)iVar35;
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xc + lVar22) = uVar29;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b58 +
                                        (ulonglong)
                                        (((fVar13 - fVar13) + fVar55 * fVar11) * -0.0 +
                                         (fVar11 * 0.0 + (fVar12 - fVar12)) * fVar53 +
                                         (fVar10 - fVar10) < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xe + lVar22) = uVar29;
        }
        else {
          fVar13 = fVar56 * -0.0 + DAT_14c846338 * 0.0;
          fVar10 = (fVar13 * 0.0 + (DAT_14c846330._4_4_ * fVar56 - fVar55 * DAT_14c846338)) *
                   (float)DAT_14c846330;
          fVar13 = fVar13 * DAT_14c846330._4_4_;
          fVar12 = DAT_14c846330._4_4_ * DAT_14c846338;
          fVar11 = DAT_14c846338 * -0.0 + DAT_14c846338 * 0.0;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 127.0 + (float)DAT_14c846330 * 127.0 + 0.5) >>
                   1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          iVar30 = (int)ROUND(DAT_14c846330._4_4_ * 127.0 + DAT_14c846330._4_4_ * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(DAT_14c846338 * 127.0 + DAT_14c846338 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          uVar33 = (undefined1)iVar35;
          if (iVar35 < -0x7f) {
            uVar33 = 0x80;
          }
          *(undefined1 *)(lVar18 + uVar44 * 8) = uVar28;
          *(char *)(lVar18 + 1 + uVar44 * 8) = (char)iVar30;
          *(undefined1 *)(lVar18 + 2 + uVar44 * 8) = uVar33;
          iVar30 = (int)ROUND(fVar49 * -127.0 + fVar49 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          *(undefined1 *)(lVar18 + 3 + uVar44 * 8) = 0x7f;
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(fVar46 * -127.0 + fVar46 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          *(char *)(lVar18 + 4 + uVar44 * 8) = (char)iVar30;
          if (iVar35 < -0x7f) {
            iVar35 = -0x80;
          }
          iVar30 = (int)ROUND(fVar54 * -127.0 + fVar54 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          *(char *)(lVar18 + 5 + uVar44 * 8) = (char)iVar35;
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 6 + uVar44 * 8) = uVar28;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                        (ulonglong)
                                        (((fVar13 - fVar13) + fVar55 * fVar11) * -0.0 +
                                         (fVar11 * 0.0 + (fVar12 - fVar12)) * fVar53 +
                                         (fVar10 - fVar10) < 0.0) * 4)) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          *(char *)(lVar18 + 7 + uVar44 * 8) = (char)iVar30;
        }
        lVar18 = param_1[0xa7];
        if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
          fVar12 = fVar56 * -0.0 + DAT_14c846338 * 0.0;
          fVar56 = (fVar12 * 0.0 + (DAT_14c846330._4_4_ * fVar56 - fVar55 * DAT_14c846338)) *
                   (float)DAT_14c846330;
          fVar12 = fVar12 * DAT_14c846330._4_4_;
          fVar11 = DAT_14c846330._4_4_ * DAT_14c846338;
          fVar10 = DAT_14c846338 * -0.0 + DAT_14c846338 * 0.0;
          lVar22 = local_1b0 * 0x10;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 32767.0 + (float)DAT_14c846330 * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          iVar30 = (int)ROUND(DAT_14c846330._4_4_ * 32767.0 + DAT_14c846330._4_4_ * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(DAT_14c846338 * 32767.0 + DAT_14c846338 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          uVar34 = (undefined2)iVar35;
          if (iVar35 < -0x7fff) {
            uVar34 = 0x8000;
          }
          *(undefined2 *)(lVar18 + lVar22) = uVar29;
          *(short *)(lVar18 + 2 + lVar22) = (short)iVar30;
          *(undefined2 *)(lVar18 + 4 + lVar22) = uVar34;
          iVar30 = (int)ROUND(fVar49 * -32767.0 + fVar49 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          *(undefined2 *)(lVar18 + 6 + lVar22) = 0x7fff;
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(fVar46 * -32767.0 + fVar46 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          *(short *)(lVar18 + 8 + lVar22) = (short)iVar30;
          if (iVar35 < -0x7fff) {
            iVar35 = -0x8000;
          }
          iVar30 = (int)ROUND(fVar54 * -32767.0 + fVar54 * -32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          *(short *)(lVar18 + 10 + lVar22) = (short)iVar35;
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xc + lVar22) = uVar29;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b58 +
                                        (ulonglong)
                                        (((fVar12 - fVar12) + fVar55 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar11 - fVar11)) * fVar53 +
                                         (fVar56 - fVar56) < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xe + lVar22) = uVar29;
        }
        else {
          fVar12 = fVar56 * -0.0 + DAT_14c846338 * 0.0;
          fVar56 = (fVar12 * 0.0 + (DAT_14c846330._4_4_ * fVar56 - fVar55 * DAT_14c846338)) *
                   (float)DAT_14c846330;
          fVar12 = fVar12 * DAT_14c846330._4_4_;
          fVar11 = DAT_14c846330._4_4_ * DAT_14c846338;
          fVar10 = DAT_14c846338 * -0.0 + DAT_14c846338 * 0.0;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 127.0 + (float)DAT_14c846330 * 127.0 + 0.5) >>
                   1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          iVar30 = (int)ROUND(DAT_14c846330._4_4_ * 127.0 + DAT_14c846330._4_4_ * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(DAT_14c846338 * 127.0 + DAT_14c846338 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          uVar33 = (undefined1)iVar35;
          if (iVar35 < -0x7f) {
            uVar33 = 0x80;
          }
          *(undefined1 *)(lVar18 + local_1b0 * 8) = uVar28;
          *(char *)(lVar18 + 1 + local_1b0 * 8) = (char)iVar30;
          *(undefined1 *)(lVar18 + 2 + local_1b0 * 8) = uVar33;
          iVar30 = (int)ROUND(fVar49 * -127.0 + fVar49 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          *(undefined1 *)(lVar18 + 3 + local_1b0 * 8) = 0x7f;
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(fVar46 * -127.0 + fVar46 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          *(char *)(lVar18 + 4 + local_1b0 * 8) = (char)iVar30;
          if (iVar35 < -0x7f) {
            iVar35 = -0x80;
          }
          iVar30 = (int)ROUND(fVar54 * -127.0 + fVar54 * -127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          *(char *)(lVar18 + 5 + local_1b0 * 8) = (char)iVar35;
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 6 + local_1b0 * 8) = uVar28;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                        (ulonglong)
                                        (((fVar12 - fVar12) + fVar55 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar11 - fVar11)) * fVar53 +
                                         (fVar56 - fVar56) < 0.0) * 4)) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 7 + local_1b0 * 8) = uVar28;
        }
        fVar56 = DAT_14c846338;
        fVar55 = DAT_14c846330._4_4_;
        fVar53 = (float)DAT_14c846330;
        lVar18 = param_1[0xa7];
        if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
          lVar22 = local_1b8 * 0x10;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 32767.0 + (float)DAT_14c846330 * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(DAT_14c846330._4_4_ * 32767.0 + DAT_14c846330._4_4_ * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          if (iVar35 < -0x7fff) {
            iVar35 = -0x8000;
          }
          iVar38 = (int)ROUND(DAT_14c846338 * 32767.0 + DAT_14c846338 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar38) {
            iVar38 = 0x7fff;
          }
          *(short *)(lVar18 + lVar22) = (short)iVar30;
          iVar30 = -0x8000;
          if (iVar38 < -0x7fff) {
            iVar38 = iVar30;
          }
          *(short *)(lVar18 + 2 + lVar22) = (short)iVar35;
          *(short *)(lVar18 + 4 + lVar22) = (short)iVar38;
          fVar11 = fVar54 * -0.0 + fVar56 * 0.0;
          fVar53 = (fVar11 * 0.0 + (fVar55 * fVar54 - fVar46 * fVar56)) * fVar53;
          fVar11 = fVar11 * fVar55;
          fVar10 = fVar56 * -0.0 + fVar56 * 0.0;
          iVar35 = (int)ROUND(fVar49 * 32767.0 + fVar49 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          *(undefined2 *)(lVar18 + 6 + lVar22) = 0x7fff;
          uVar29 = (undefined2)iVar35;
          if (iVar35 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 8 + lVar22) = uVar29;
          iVar35 = (int)ROUND(fVar46 * 32767.0 + fVar46 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          if (iVar35 < -0x7fff) {
            iVar35 = iVar30;
          }
          iVar38 = (int)ROUND(fVar54 * 32767.0 + fVar54 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar38) {
            iVar38 = 0x7fff;
          }
          *(short *)(lVar18 + 10 + lVar22) = (short)iVar35;
          if (iVar38 < -0x7fff) {
            iVar38 = iVar30;
          }
          *(short *)(lVar18 + 0xc + lVar22) = (short)iVar38;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b58 +
                                        (ulonglong)
                                        (((fVar11 - fVar11) + fVar46 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar55 * fVar56 - fVar55 * fVar56)) *
                                         fVar49 + (fVar53 - fVar53) < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xe + lVar22) = uVar29;
        }
        else {
          iVar30 = (int)ROUND((float)DAT_14c846330 * 127.0 + (float)DAT_14c846330 * 127.0 + 0.5) >>
                   1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(DAT_14c846330._4_4_ * 127.0 + DAT_14c846330._4_4_ * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          if (iVar35 < -0x7f) {
            iVar35 = -0x80;
          }
          iVar38 = (int)ROUND(DAT_14c846338 * 127.0 + DAT_14c846338 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar38) {
            iVar38 = 0x7f;
          }
          *(char *)(lVar18 + local_1b8 * 8) = (char)iVar30;
          if (iVar38 < -0x7f) {
            iVar38 = -0x80;
          }
          *(char *)(lVar18 + 1 + local_1b8 * 8) = (char)iVar35;
          *(char *)(lVar18 + 2 + local_1b8 * 8) = (char)iVar38;
          fVar11 = fVar54 * -0.0 + fVar56 * 0.0;
          fVar53 = (fVar11 * 0.0 + (fVar55 * fVar54 - fVar46 * fVar56)) * fVar53;
          fVar11 = fVar11 * fVar55;
          fVar10 = fVar56 * -0.0 + fVar56 * 0.0;
          iVar30 = (int)ROUND(fVar49 * 127.0 + fVar49 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          *(undefined1 *)(lVar18 + 3 + local_1b8 * 8) = 0x7f;
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 4 + local_1b8 * 8) = uVar28;
          iVar30 = (int)ROUND(fVar46 * 127.0 + fVar46 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(fVar54 * 127.0 + fVar54 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          *(char *)(lVar18 + 5 + local_1b8 * 8) = (char)iVar30;
          uVar28 = (undefined1)iVar35;
          if (iVar35 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 6 + local_1b8 * 8) = uVar28;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                        (ulonglong)
                                        (((fVar11 - fVar11) + fVar46 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar55 * fVar56 - fVar55 * fVar56)) *
                                         fVar49 + (fVar53 - fVar53) < 0.0) * 4)) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 7 + local_1b8 * 8) = uVar28;
        }
        fVar56 = DAT_14c846338;
        fVar55 = DAT_14c846330._4_4_;
        fVar53 = (float)DAT_14c846330;
        lVar18 = param_1[0xa7];
        if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
          lVar22 = local_198 * 0x10;
          iVar30 = (int)ROUND((float)DAT_14c846330 * 32767.0 + (float)DAT_14c846330 * 32767.0 + 0.5)
                   >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + lVar22) = uVar29;
          iVar30 = (int)ROUND(fVar55 * 32767.0 + fVar55 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(fVar56 * 32767.0 + fVar56 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          *(short *)(lVar18 + 2 + lVar22) = (short)iVar30;
          uVar29 = (undefined2)iVar35;
          if (iVar35 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 4 + lVar22) = uVar29;
          *(undefined2 *)(lVar18 + 6 + lVar22) = 0x7fff;
          fVar11 = fVar54 * -0.0 + fVar56 * 0.0;
          fVar53 = (fVar11 * 0.0 + (fVar55 * fVar54 - fVar46 * fVar56)) * fVar53;
          fVar11 = fVar11 * fVar55;
          fVar10 = fVar56 * -0.0 + fVar56 * 0.0;
          iVar30 = (int)ROUND(fVar49 * 32767.0 + fVar49 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 8 + lVar22) = uVar29;
          iVar30 = (int)ROUND(fVar46 * 32767.0 + fVar46 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          if (iVar30 < -0x7fff) {
            iVar30 = -0x8000;
          }
          iVar35 = (int)ROUND(fVar54 * 32767.0 + fVar54 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar35) {
            iVar35 = 0x7fff;
          }
          *(short *)(lVar18 + 10 + lVar22) = (short)iVar30;
          if (iVar35 < -0x7fff) {
            iVar35 = -0x8000;
          }
          *(short *)(lVar18 + 0xc + lVar22) = (short)iVar35;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b58 +
                                        (ulonglong)
                                        (((fVar11 - fVar11) + fVar46 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar55 * fVar56 - fVar55 * fVar56)) *
                                         fVar49 + (fVar53 - fVar53) < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar30) {
            iVar30 = 0x7fff;
          }
          uVar29 = (undefined2)iVar30;
          if (iVar30 < -0x7fff) {
            uVar29 = 0x8000;
          }
          *(undefined2 *)(lVar18 + 0xe + lVar22) = uVar29;
        }
        else {
          iVar30 = (int)ROUND((float)DAT_14c846330 * 127.0 + (float)DAT_14c846330 * 127.0 + 0.5) >>
                   1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + local_198 * 8) = uVar28;
          iVar30 = (int)ROUND(fVar55 * 127.0 + fVar55 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(fVar56 * 127.0 + fVar56 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          *(char *)(lVar18 + 1 + local_198 * 8) = (char)iVar30;
          uVar28 = (undefined1)iVar35;
          if (iVar35 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 2 + local_198 * 8) = uVar28;
          *(undefined1 *)(lVar18 + 3 + local_198 * 8) = 0x7f;
          fVar11 = fVar54 * -0.0 + fVar56 * 0.0;
          fVar53 = (fVar11 * 0.0 + (fVar55 * fVar54 - fVar46 * fVar56)) * fVar53;
          fVar11 = fVar11 * fVar55;
          fVar10 = fVar56 * -0.0 + fVar56 * 0.0;
          iVar30 = (int)ROUND(fVar49 * 127.0 + fVar49 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 4 + local_198 * 8) = uVar28;
          iVar30 = (int)ROUND(fVar46 * 127.0 + fVar46 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          if (iVar30 < -0x7f) {
            iVar30 = -0x80;
          }
          iVar35 = (int)ROUND(fVar54 * 127.0 + fVar54 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar35) {
            iVar35 = 0x7f;
          }
          *(char *)(lVar18 + 5 + local_198 * 8) = (char)iVar30;
          if (iVar35 < -0x7f) {
            iVar35 = -0x80;
          }
          *(char *)(lVar18 + 6 + local_198 * 8) = (char)iVar35;
          iVar30 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                        (ulonglong)
                                        (((fVar11 - fVar11) + fVar46 * fVar10) * -0.0 +
                                         (fVar10 * 0.0 + (fVar55 * fVar56 - fVar55 * fVar56)) *
                                         fVar49 + (fVar53 - fVar53) < 0.0) * 4)) >> 1;
          if (0x7e < iVar30) {
            iVar30 = 0x7f;
          }
          uVar28 = (undefined1)iVar30;
          if (iVar30 < -0x7f) {
            uVar28 = 0x80;
          }
          *(undefined1 *)(lVar18 + 7 + local_198 * 8) = uVar28;
        }
        lVar18 = param_1[0xa8];
        if (*(char *)(param_1 + 0xab) == '\x01') {
          lVar22 = *(uint *)(param_1 + 0xaa) * uVar44;
          *(float *)(lVar18 + lVar22 * 8) = fVar31;
          *(float *)(lVar18 + 4 + lVar22 * 8) = fVar39;
        }
        else {
          fVar46 = ABS(fVar31);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              fVar49 = fVar46 + 0.5;
            }
            else {
              fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                              0xd);
              fVar49 = fVar46;
            }
          }
          else {
            fVar49 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
          }
          lVar22 = *(uint *)(param_1 + 0xaa) * uVar44 * 4;
          iVar30 = movmskps(fVar46,local_168);
          *(ushort *)(lVar18 + lVar22) = (ushort)(iVar30 << 0xf) | SUB42(fVar49,0);
          fVar46 = ABS(fVar39);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              fVar49 = fVar46 + 0.5;
            }
            else {
              fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                              0xd);
              fVar49 = fVar46;
            }
          }
          else {
            fVar49 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
          }
          iVar30 = movmskps(fVar46,local_158);
          *(ushort *)(lVar18 + 2 + lVar22) = (ushort)(iVar30 << 0xf) | SUB42(fVar49,0);
        }
        uVar25 = *(uint *)(param_1 + 0xaa);
        lVar18 = param_1[0xa8];
        if (*(char *)(param_1 + 0xab) == '\x01') {
          lVar22 = local_1b0 * uVar25;
          *(float *)(lVar18 + lVar22 * 8) = fVar31;
          *(float *)(lVar18 + 4 + lVar22 * 8) = fVar39;
        }
        else {
          fVar46 = ABS(fVar31);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              uVar45 = SUB42(fVar46 + 0.5,0);
            }
            else {
              uVar45 = (ushort)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                               0xd);
            }
          }
          else {
            uVar45 = (0x7f800000 < (uint)fVar46 | 0x3e) << 9;
          }
          lVar22 = local_1b0 * uVar25 * 4;
          iVar30 = movmskps(uVar25,local_168);
          *(ushort *)(lVar18 + lVar22) = (ushort)(iVar30 << 0xf) | uVar45;
          fVar46 = ABS(fVar39);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              fVar49 = fVar46 + 0.5;
            }
            else {
              fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                              0xd);
              fVar49 = fVar46;
            }
          }
          else {
            fVar49 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
          }
          iVar30 = movmskps(fVar46,local_158);
          *(ushort *)(lVar18 + 2 + lVar22) = (ushort)(iVar30 << 0xf) | SUB42(fVar49,0);
        }
        uVar25 = *(uint *)(param_1 + 0xaa);
        lVar18 = param_1[0xa8];
        if (*(char *)(param_1 + 0xab) == '\x01') {
          lVar22 = local_1b8 * uVar25;
          *(float *)(lVar18 + lVar22 * 8) = fVar31;
          *(float *)(lVar18 + 4 + lVar22 * 8) = fVar39;
        }
        else {
          fVar46 = ABS(fVar31);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              uVar45 = SUB42(fVar46 + 0.5,0);
            }
            else {
              uVar45 = (ushort)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                               0xd);
            }
          }
          else {
            uVar45 = (0x7f800000 < (uint)fVar46 | 0x3e) << 9;
          }
          lVar22 = local_1b8 * uVar25 * 4;
          iVar30 = movmskps(uVar25,local_168);
          *(ushort *)(lVar18 + lVar22) = (ushort)(iVar30 << 0xf) | uVar45;
          fVar46 = ABS(fVar39);
          if ((uint)fVar46 < 0x47800000) {
            if ((uint)fVar46 < 0x38800000) {
              fVar49 = fVar46 + 0.5;
            }
            else {
              fVar46 = (float)((int)fVar46 + 0x8000fff + (uint)(((uint)fVar46 >> 0xd & 1) != 0) >>
                              0xd);
              fVar49 = fVar46;
            }
          }
          else {
            fVar49 = (float)((0x7f800000 < (uint)fVar46 | 0x3e) << 9);
          }
          iVar30 = movmskps(fVar46,local_158);
          *(ushort *)(lVar18 + 2 + lVar22) = (ushort)(iVar30 << 0xf) | SUB42(fVar49,0);
        }
        uVar25 = *(uint *)(param_1 + 0xaa);
        lVar18 = param_1[0xa8];
        if (*(char *)(param_1 + 0xab) == '\x01') {
          lVar22 = local_198 * uVar25;
          *(float *)(lVar18 + lVar22 * 8) = fVar31;
          *(float *)(lVar18 + 4 + lVar22 * 8) = fVar39;
        }
        else {
          fVar31 = ABS(fVar31);
          if ((uint)fVar31 < 0x47800000) {
            if ((uint)fVar31 < 0x38800000) {
              uVar45 = SUB42(fVar31 + 0.5,0);
            }
            else {
              uVar45 = (ushort)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >>
                               0xd);
            }
          }
          else {
            uVar45 = (0x7f800000 < (uint)fVar31 | 0x3e) << 9;
          }
          lVar22 = local_198 * uVar25 * 4;
          iVar30 = movmskps(uVar25,local_168);
          *(ushort *)(lVar18 + lVar22) = (ushort)(iVar30 << 0xf) | uVar45;
          fVar39 = ABS(fVar39);
          if ((uint)fVar39 < 0x47800000) {
            if ((uint)fVar39 < 0x38800000) {
              fVar31 = fVar39 + 0.5;
            }
            else {
              fVar39 = (float)((int)fVar39 + 0x8000fff + (uint)(((uint)fVar39 >> 0xd & 1) != 0) >>
                              0xd);
              fVar31 = fVar39;
            }
          }
          else {
            fVar31 = (float)((0x7f800000 < (uint)fVar39 | 0x3e) << 9);
          }
          iVar30 = movmskps(fVar39,local_158);
          *(ushort *)(lVar18 + 2 + lVar22) = (ushort)(iVar30 << 0xf) | SUB42(fVar31,0);
        }
        fVar31 = (float)(&DAT_14c758c60)[*(byte *)((longlong)pdVar42 + 0x32)];
        fVar39 = (float)(&DAT_14c758c60)[*(byte *)((longlong)pdVar42 + 0x31)];
        fVar46 = (float)(&DAT_14c758c60)[*(byte *)(pdVar42 + 6)];
        fVar49 = (float)*(byte *)((longlong)pdVar42 + 0x33) * 0.003921569;
        if (fVar49 <= 0.0) {
          fVar49 = 0.0;
        }
        if (1.0 <= fVar49) {
          fVar49 = 1.0;
        }
        if (fVar46 <= 0.0) {
          fVar46 = 0.0;
        }
        if (1.0 <= fVar46) {
          fVar46 = 1.0;
        }
        if (fVar39 <= 0.0) {
          fVar39 = 0.0;
        }
        if (1.0 <= fVar39) {
          fVar39 = 1.0;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        uVar25 = (int)(fVar46 * 255.0 + 0.5) & 0xffU |
                 ((int)(fVar39 * 255.0 + 0.5) & 0xffU) << 8 |
                 ((int)(fVar31 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar49 * 255.0 + 0.5) << 0x18
        ;
        *(uint *)(param_1[0xb9] + (ulonglong)(uint)(*(int *)(param_1 + 0xba) * iVar43)) = uVar25;
        *(uint *)(param_1[0xb9] + (ulonglong)(uint)(*(int *)(param_1 + 0xba) * iVar14)) = uVar25;
        *(uint *)(param_1[0xb9] + (ulonglong)(uint)(*(int *)(param_1 + 0xba) * iVar15)) = uVar25;
        *(uint *)(param_1[0xb9] + (ulonglong)(uint)(*(int *)(param_1 + 0xba) * iVar36)) = uVar25;
        *(int *)(param_1[0xbf] + local_188 * 4) = iVar43;
        *(int *)(param_1[0xbf] + 4 + local_188 * 4) = iVar14;
        *(int *)(param_1[0xbf] + 8 + local_188 * 4) = iVar15;
        *(int *)(param_1[0xbf] + 0xc + local_188 * 4) = iVar15;
        *(int *)(param_1[0xbf] + 0x10 + local_188 * 4) = iVar36;
        *(int *)(param_1[0xbf] + 0x14 + local_188 * 4) = iVar43;
        uVar41 = local_1a4 & ~(uint)local_180;
        puVar21 = (uint *)param_2[0xd7];
        if ((uint *)param_2[0xd7] == (uint *)0x0) {
          puVar21 = puVar24;
        }
        uVar6 = *(uint *)(param_2 + 0xd8);
        iVar14 = (int)local_170;
        lVar18 = (longlong)iVar14;
        uVar25 = puVar21[lVar18] & uVar41;
        uVar32 = local_170;
        iVar36 = local_1a8;
        if (uVar25 == 0) {
          iVar15 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar15 = uVar6 - 1;
          }
          iVar15 = iVar15 >> 5;
          iVar36 = local_1a8 + 0x20;
          iVar43 = iVar15;
          if (iVar15 < iVar14) {
            iVar43 = iVar14;
          }
          if (iVar14 < iVar15) {
            lVar22 = 0;
            do {
              uVar25 = puVar21[lVar18 + lVar22 + 1];
              if (uVar25 != 0) {
                uVar41 = 0xffffffff;
                uVar32 = (ulonglong)(iVar14 + (int)lVar22 + 1);
                goto LAB_143b7cd69;
              }
              iVar36 = iVar36 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar43 - lVar18 != lVar22);
            uVar41 = 0xffffffff;
            iVar14 = iVar43;
          }
          uVar32 = (ulonglong)(iVar14 + 1);
          uVar40 = local_180;
          uVar25 = uVar6;
        }
        else {
LAB_143b7cd69:
          uVar40 = (ulonglong)(-uVar25 & uVar25);
          uVar3 = uVar40 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar25 = (iVar36 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar6 <= (int)uVar25) {
            uVar25 = uVar6;
          }
        }
        uVar44 = uVar44 + 4;
        lVar18 = local_188 + 6;
        local_1a0 = param_2;
        local_190 = (ulonglong)uVar26;
        local_178 = puVar24;
      } while (uVar25 != uVar26);
    }
  }
LAB_143b7b305:
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar36 = *(int *)(lVar18 + 0xc60);
  local_140 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar36 != 2) {
      if (iVar36 != 1) goto LAB_143b7b333;
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      if (DVar16 == DVar17) goto LAB_143b7d11a;
      goto LAB_143b7b33c;
    }
  }
  else {
LAB_143b7b333:
    if (iVar36 != 0x10) {
LAB_143b7b33c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar36 = *(int *)(lVar18 + 0xc60), iVar36 == 2))
        goto LAB_143b7d11a;
        if (iVar36 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          if (DVar16 == DVar17) goto LAB_143b7d11a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar24 = (uint *)*puVar2;
        if (puVar24 != (uint *)0x0) goto LAB_143b7ce88;
        while( true ) {
          uVar26 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar26 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar26 | 1;
            __tlregdtor(&LAB_143b7d212);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar23 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar23 == (undefined4 *)0x0) {
            puVar23 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar23 = 0xffffffff;
          *(undefined4 **)(puVar23 + 0x10) = puVar23 + 0x16;
          puVar23[0x12] = 0;
          *puVar2 = puVar23;
          FUN_140217a48(puVar2);
          puVar24 = (uint *)*puVar2;
LAB_143b7ce88:
          puVar37 = (undefined8 *)(*(longlong *)(puVar24 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar37 + 0x16);
          uVar26 = puVar24[0x12];
          if (puVar21 <= puVar24 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar24 + 0x10) = puVar24 + 0x4000;
            LOCK();
            uVar25 = *puVar24;
            *puVar24 = *puVar24 + uVar26 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar26) != 0xffffffff) break;
            puVar24 = (uint *)*puVar2;
            *puVar24 = 0xffffffff;
            *(uint **)(puVar24 + 0x10) = puVar24 + 0x16;
            puVar24[0x12] = 0;
            *puVar2 = puVar24;
            puVar37 = (undefined8 *)((longlong)puVar24 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar37 + 0x16);
            uVar26 = 0;
            if (puVar21 <= puVar24 + 0x4000) {
              uVar26 = 1;
              goto LAB_143b7cf08;
            }
          }
        }
        uVar26 = uVar26 + 1;
LAB_143b7cf08:
        *(uint **)(puVar24 + 0x10) = puVar21;
        puVar24[0x12] = uVar26;
        iVar36 = 0;
        FUN_1447247dc(puVar37,0);
        *puVar37 = &PTR_FUN_14aefe430;
        puVar37[0x15] = local_140;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar26 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar26 < 2) {
            uVar32 = (ulonglong)(byte)(&DAT_149e38edc)[uVar26];
            iVar36 = 0;
          }
          else {
            uVar32 = 2;
          }
        }
        else {
          iVar36 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar32 = 5;
        }
        if (*(code **)(puVar37[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar37[0xe] + 0x18))(puVar37 + 0xe,puVar37 + 9);
        }
        puVar37[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar37[9] = puVar37;
        puVar37[10] = puVar37;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar40 = 1;
          if ((char)uVar32 != '\x06') {
            uVar40 = uVar32;
          }
          uVar32 = uVar40;
          uVar20 = 0;
        }
        else {
          if ((char)uVar32 == '\x06') {
            uVar32 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar20 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar37[0xf] = uVar20;
        puVar37[0x10] = uVar32 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar37 + 0x1c) = iVar36;
        if (puVar37 == (undefined8 *)0x0) {
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar37 + 1) = *(int *)(puVar37 + 1) + 1;
          UNLOCK();
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(puVar37);
          LOCK();
          piVar1 = (int *)(puVar37 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar37)(puVar37,1);
          }
        }
      }
      else {
        local_1c8 = local_138;
        local_128 = (undefined ***)0x0;
        local_118 = &PTR_LAB_14aefe410;
        local_138[0] = &LAB_1484d3f4a;
        local_110 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"LineSetVertexBuffersInit",&DAT_14cb4c99c);
        if (local_138[0] != (undefined1 *)0x0) {
          pppuVar27 = local_128;
          if (local_128 == (undefined ***)0x0) {
            pppuVar27 = &local_118;
          }
          (*(code *)(*pppuVar27)[2])();
        }
      }
      goto LAB_143b7b3e1;
    }
  }
LAB_143b7d11a:
  FUN_1484d3dde(&local_140,&DAT_14ca85100);
LAB_143b7b3e1:
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7d1c6 FUN_143b7d1c6 body=48 status=ok
// SIG undefined FUN_143b7d1c6(void)

longlong FUN_143b7d1c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_145c7ba10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7d23a FUN_143b7d23a body=221 status=ok
// SIG undefined FUN_143b7d23a(void)

void FUN_143b7d23a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  if ((longlong)(int)param_1[2] == 0) {
    return;
  }
  lVar3 = *param_1;
  puVar8 = (uint *)param_1[1];
  puVar1 = puVar8 + (int)param_1[2];
LAB_143b7d26d:
  if (*(int *)(lVar3 + 0x450) != *(int *)(lVar3 + 0x47c)) {
    uVar2 = *puVar8;
    lVar5 = *(longlong *)(lVar3 + 0x488);
    if (*(longlong *)(lVar3 + 0x488) == 0) {
      lVar5 = lVar3 + 0x480;
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x490) - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(lVar3 + 0x448);
      iVar7 = iVar6;
      do {
        if (*(uint *)(lVar5 + (longlong)iVar7 * 0x18) == uVar2) goto LAB_143b7d2ca;
        iVar7 = *(int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  goto LAB_143b7d2bf;
  while (iVar6 = *(int *)(lVar5 + (longlong)iVar6 * 0x18 + 0x10), iVar6 != -1) {
LAB_143b7d2ca:
    if (*(uint *)(lVar5 + (longlong)iVar6 * 0x18) == uVar2) goto LAB_143b7d2e8;
  }
  iVar6 = -1;
LAB_143b7d2e8:
  uVar4 = *(undefined8 *)(lVar5 + 8 + (longlong)iVar6 * 0x18);
  FUN_1484d2d76((longlong *)(lVar3 + 0x448));
  FUN_1484afd68(lVar3,uVar4);
LAB_143b7d2bf:
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar1) {
    return;
  }
  goto LAB_143b7d26d;
}



// FUNCTION 143b7d318 FUN_143b7d318 body=282 status=ok
// SIG undefined FUN_143b7d318(void)

undefined8 * FUN_143b7d318(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b7d212);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b7d432 FUN_143b7d432 body=1672 status=ok
// SIG undefined FUN_143b7d432(void)

void FUN_143b7d432(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  code **local_e8;
  undefined1 local_e0;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  code *local_b0;
  int local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined8 local_98;
  undefined1 local_8c [4];
  code *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = param_1[2];
  local_d4 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)param_2 * 4);
  puVar10 = (undefined8 *)FUN_1484d2f0c(param_1[1]);
  lVar11 = FUN_1484afb06(lVar3);
  lVar12 = (**(code **)(**(longlong **)(lVar3 + 0x298) + 0x610))(*(longlong **)(lVar3 + 0x298),0);
  if (lVar12 == 0) {
    FUN_14003fbd6();
    lVar12 = DAT_14caea080;
  }
  *(longlong *)(lVar11 + 0x360) = lVar12;
  local_98 = param_1[7];
  local_a0 = FUN_1484c0146;
  uVar15 = *(undefined8 *)param_1[6];
  uVar4 = *(undefined8 *)param_1[5];
  uVar5 = *(undefined8 *)param_1[4];
  local_b0 = (code *)0x0;
  local_a8 = *(int *)(puVar10 + 1);
  lVar12 = (longlong)local_a8;
  _Src = (void *)*puVar10;
  local_d0 = lVar11;
  if (lVar12 == 0) {
    local_a4 = 0;
    uVar21 = 0;
  }
  else {
    FUN_144a06ca8(&local_b0,local_a8,0);
    memcpy(local_b0,_Src,lVar12 << 2);
    uVar21 = *(undefined4 *)(puVar10 + 1);
  }
  lVar11 = local_d0;
  local_e8 = &local_a0;
  local_108 = &local_b0;
  local_e0 = 0;
  local_100 = uVar5;
  local_f8 = uVar4;
  local_f0 = uVar15;
  FUN_1484bc5c8(lVar3,local_d0,*(undefined8 *)param_1[3],uVar21);
  uStack_c0 = local_d4;
  local_b8 = lVar11;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar12 + 0xc60);
  local_c8 = lVar3;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143b7d9c6;
    lVar11 = local_d0;
    if (iVar7 != 1) goto joined_r0x000143b7dab0;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    lVar11 = local_b8;
    if (DVar8 == DVar9) goto LAB_143b7d9c6;
LAB_143b7d5c5:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar12 + 0xc60), iVar7 == 2)) {
LAB_143b7da54:
        lVar3 = local_c8;
        FUN_1484b585e(local_b8);
        goto LAB_143b7da68;
      }
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143b7da54;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar10 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar14 = (uint *)*puVar10;
      if (puVar14 != (uint *)0x0) goto LAB_143b7d746;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143b7d212);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar10 = puVar13;
        FUN_140217a48(puVar10);
        puVar14 = (uint *)*puVar10;
LAB_143b7d746:
        puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar20 + 0x18);
        uVar16 = puVar14[0x12];
        if (puVar18 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar2 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar10;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar10 = puVar14;
          puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x18);
          uVar16 = 0;
          if (puVar18 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_143b7d7c6;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143b7d7c6:
      *(uint **)(puVar14 + 0x10) = puVar18;
      puVar14[0x12] = uVar16;
      iVar7 = 0;
      FUN_1447247dc(puVar20,0);
      *puVar20 = &PTR_FUN_14aefda38;
      *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar20 + 0xac) = local_c8._4_4_;
      *(undefined4 *)(puVar20 + 0x16) = uStack_c0;
      *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_bc;
      puVar20[0x17] = local_b8;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar7 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar6 = 1;
        if ((char)uVar19 != '\x06') {
          uVar6 = uVar19;
        }
        uVar19 = uVar6;
        uVar15 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar20[0xf] = uVar15;
      puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar20 + 0x1c) = iVar7;
      if (puVar20 == (undefined8 *)0x0) {
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar20);
        LOCK();
        piVar1 = (int *)(puVar20 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
    }
    else {
      local_108 = &local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aefd9c0;
      local_60 = (undefined4)local_c8;
      uStack_5c = local_c8._4_4_;
      uStack_58 = uStack_c0;
      uStack_54 = uStack_bc;
      local_50 = local_b8;
      local_88 = FUN_1484d3392;
      FUN_14005a792(&DAT_14ca9a440,L"FOctreeDynamicMeshSceneProxyUpdateAddOne",&DAT_14cb4c98c);
      if (local_88 != (code *)0x0) {
        pppuVar17 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar17 = &local_68;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
  }
  else {
joined_r0x000143b7dab0:
    if (iVar7 != 0x10) goto LAB_143b7d5c5;
LAB_143b7d9c6:
    lVar3 = local_c8;
    FUN_1484b585e(lVar11);
LAB_143b7da68:
    local_88 = (code *)&uStack_c0;
    local_80 = &local_b8;
    FUN_1484d2f68(lVar3 + 0x448,local_8c);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7dabc FUN_143b7dabc body=282 status=ok
// SIG undefined FUN_143b7dabc(void)

undefined8 * FUN_143b7dabc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b7d212);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b7dbd6 FUN_143b7dbd6 body=282 status=ok
// SIG undefined FUN_143b7dbd6(void)

undefined8 * FUN_143b7dbd6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b7d212);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b7dd0c FUN_143b7dd0c body=704 status=ok
// SIG undefined FUN_143b7dd0c(void)

void FUN_143b7dd0c(undefined8 *param_1,uint *param_2)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_128 [36];
  float local_104 [3];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *(longlong *)*param_1,
     (int)uVar2 < *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8)
                           + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar3 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
      uVar7 = (ulonglong)(uVar10 & 0x1ff);
      local_88 = *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18);
      pfVar1 = (float *)(lVar3 + uVar7 * 0x18);
      local_98._0_4_ = *pfVar1;
      local_98._4_4_ = pfVar1[1];
      fStack_90 = pfVar1[2];
      fStack_8c = pfVar1[3];
      FUN_147a29b10(*(undefined8 *)param_1[2],&local_f8,
                    (float)(double)(&local_98)[*(int *)((undefined8 *)param_1[2] + 1)]);
      lVar3 = *(longlong *)*param_1;
      lVar8 = *(longlong *)(lVar3 + 0x48);
      lVar9 = 0;
      do {
        uVar10 = uVar2 * 3 + (int)lVar9;
        *(undefined4 *)((longlong)&local_98 + lVar9 * 4) =
             *(undefined4 *)
              (*(longlong *)(lVar8 + (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4
              );
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      dVar5 = (double)fStack_90;
      dVar4 = (double)local_98._4_4_;
      dVar13 = (double)(float)local_98;
      dVar11 = local_f8 * dVar4 - local_f0 * dVar13;
      dVar12 = local_e8 * dVar13 - local_f8 * dVar5;
      dVar6 = local_f0 * dVar5 - local_e8 * dVar4;
      dVar11 = dVar11 + dVar11;
      dVar12 = dVar12 + dVar12;
      dVar6 = dVar6 + dVar6;
      local_104[0] = (float)((local_f0 * dVar11 - dVar12 * local_e8) + local_e0 * dVar6 + dVar13);
      local_104[1] = (float)((local_e8 * dVar6 - dVar11 * local_f8) + local_e0 * dVar12 + dVar4);
      local_104[2] = (float)((local_f8 * dVar12 - dVar6 * local_f0) + local_e0 * dVar11 + dVar5);
      lVar8 = 0;
      do {
        uVar10 = uVar2 * 3 + (int)lVar8;
        *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar10 >> 9) * 8) +
                  (ulonglong)(uVar10 & 0x1ff) * 4) = local_104[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b7dfce FUN_143b7dfce body=1228 status=ok
// SIG undefined FUN_143b7dfce(void)

void FUN_143b7dfce(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  
  iVar18 = *(int *)(param_2 + 8);
  if (0 < iVar18) {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    uVar16 = 0;
    do {
      if (((param_4 >> (uVar16 & 0x1f) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
        puVar15 = *(undefined8 **)(param_1 + 0x298);
        puVar9 = puVar15 + (longlong)*(int *)(param_1 + 0x2a0) * 3;
        do {
          iVar18 = (int)param_5[1];
          iVar5 = (int)param_5[2];
          iVar8 = (iVar5 + 0x44) / 0x44;
          *(int *)(param_5 + 2) = iVar5 + 1;
          if (iVar18 < iVar8) {
            do {
              lVar11 = FUN_14001cc68(0x3fc0,0x10);
              lVar14 = 0;
              do {
                *(undefined8 *)(lVar11 + 0xa8 + lVar14) = 0;
                puVar17 = (undefined8 *)(lVar11 + 0xb8 + lVar14);
                *puVar17 = 0;
                puVar17[1] = 0;
                *(undefined8 *)(lVar11 + 200 + lVar14) = 0;
                *(undefined8 *)(lVar11 + 0xd0 + lVar14) = 0xffffffff;
                *(undefined8 *)(lVar11 + 0xd8 + lVar14) = 0xff0000ffffffff;
                *(undefined1 *)(lVar11 + 0xe0 + lVar14) = 0;
                *(undefined4 *)(lVar11 + 0xe4 + lVar14) = 0x40c00f07;
                pbVar2 = (byte *)(lVar11 + 0xe8 + lVar14);
                *pbVar2 = *pbVar2 & 0xfc;
                *(undefined1 **)(lVar11 + 0xb0 + lVar14) = &DAT_100000001;
                FUN_14470b9e0(lVar14 + lVar11,1);
                lVar14 = lVar14 + 0xf0;
              } while (lVar14 != 0x3fc0);
              iVar6 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
                FUN_14002baf6(param_5,iVar6);
              }
              *(longlong *)(*param_5 + (longlong)iVar6 * 8) = lVar11;
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar8);
          }
          lVar14 = *(longlong *)(*param_5 + (longlong)(iVar5 / 0x44) * 8);
          lVar19 = (ulonglong)(uint)(iVar5 % 0x44) * 0xf0;
          lVar11 = lVar14 + lVar19;
          lVar20 = *(longlong *)(lVar14 + 0xa8 + lVar19);
          if (lVar20 == 0) {
            lVar20 = lVar11;
          }
          *(longlong *)(lVar20 + 0x18) = param_1 + 0x5e0;
          pbVar2 = (byte *)(lVar14 + 0xe5 + lVar19);
          *pbVar2 = *pbVar2 & 0xef;
          *(longlong *)(lVar14 + 0xb8 + lVar19) = param_1 + 0x2b8;
          *(undefined8 *)(lVar14 + 0xc0 + lVar19) = *puVar15;
          plVar7 = (longlong *)param_5[0x1d];
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_143b7e189;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_143b7e189:
            puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar13 = puVar10[0x12];
            if (puVar17 + 8 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar13 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar13) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              uVar13 = 0;
              if (puVar17 + 8 <= puVar10 + 0x4000) {
                uVar13 = 1;
                goto LAB_143b7e1ff;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_143b7e1ff:
          *(undefined8 **)(puVar10 + 0x10) = puVar17 + 9;
          puVar10[0x12] = uVar13;
          *(int *)(puVar17 + -1) = ((int)puVar17 + -8) - (int)puVar10;
          *(undefined4 *)((longlong)puVar17 + -4) = 0x40;
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a5a8d50;
          lVar14 = *plVar7;
          do {
            puVar17[1] = lVar14;
            LOCK();
            lVar19 = *plVar7;
            bVar21 = lVar14 == lVar19;
            if (bVar21) {
              *plVar7 = (longlong)puVar17;
              lVar19 = lVar14;
            }
            UNLOCK();
            lVar14 = lVar19;
          } while (!bVar21);
          puVar17[2] = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar17 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar17 + 0x24) = 0x105;
          *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
          puVar17[3] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar17 + 5) = 2;
          puVar17[6] = 0;
          puVar17[7] = 0;
          bVar4 = *(byte *)(param_1 + 0x75);
          bVar12 = 1;
          if (bVar4 < 0x40) {
            if ((bVar4 & 8) == 0) {
              bVar12 = 0;
            }
            else {
              bVar12 = (bVar4 & 4) >> 2;
            }
          }
          FUN_147ceeaf2(puVar17 + 2,param_5[0x22],param_1 + 0x100,param_1 + 0x100,param_1 + 0x180,
                        param_1 + 0x180,param_1 + 0x1b8,param_1 + 0x1b8,
                        *(byte *)(param_1 + 0x77) >> 6 & 1,0,0,bVar12,0);
          *(undefined8 **)(lVar20 + 8) = puVar17 + 3;
          *(undefined4 *)(lVar20 + 0x58) = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(lVar20 + 0x5c) = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)(lVar20 + 0x68) = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(lVar20 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x14);
          *(uint *)(lVar11 + 0xe4) =
               *(uint *)(lVar11 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          FUN_1436a14f8(param_5,uVar16,lVar11);
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar9);
        iVar18 = *(int *)(param_2 + 8);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar18);
  }
  return;
}



// FUNCTION 143b7e49a FUN_143b7e49a body=282 status=ok
// SIG undefined FUN_143b7e49a(void)

undefined8 * FUN_143b7e49a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b7d212);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b7e5b4 FUN_143b7e5b4 body=179 status=ok
// SIG undefined FUN_143b7e5b4(void)

void FUN_143b7e5b4(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  piVar2 = (int *)*param_1;
  iVar4 = *piVar2;
  if (0 < iVar4) {
    iVar1 = *param_2;
    lVar7 = 0;
    do {
      lVar5 = (longlong)iVar4;
      lVar6 = lVar5 * iVar1 * 4 + *(longlong *)(piVar2 + 2);
      if ((*(short *)(lVar6 + 2 + lVar7 * 4) != 0) && (*(short *)(lVar6 + lVar7 * 4) == 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
        plVar3 = (longlong *)param_1[1];
        iVar4 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar4 + 1U) {
          FUN_148306f12(plVar3,iVar4);
        }
        *(longlong *)(*plVar3 + (longlong)iVar4 * 8) = ((longlong)iVar1 << 0x20) + lVar7;
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
        iVar4 = *piVar2;
        lVar5 = (longlong)iVar4;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar5);
  }
  return;
}



// FUNCTION 143b7e6b8 FUN_143b7e6b8 body=602 status=ok
// SIG undefined FUN_143b7e6b8(void)

bool FUN_143b7e6b8(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [7];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar1 = param_2[2];
  dVar6 = param_3[2] - dVar1;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar11 = param_3[1] - dVar3;
  dVar9 = *param_3 - dVar2;
  dVar13 = SQRT(dVar6 * dVar6 + dVar9 * dVar9 + dVar11 * dVar11);
  dVar10 = 0.0;
  dVar12 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  if (0.0 < dVar13) {
    dVar8 = 1.0 / dVar13;
    dVar10 = dVar9 * dVar8;
    dVar12 = dVar11 * dVar8;
    dVar8 = dVar6 * dVar8;
    dVar7 = dVar13;
  }
  dVar6 = (double)param_1[1];
  plVar4 = *(longlong **)(*param_1 + 0x10);
  local_128 = 0;
  local_118 = 0;
  FUN_146bee698(local_e8,dVar7);
  dVar7 = dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12;
  local_140 = dVar10;
  local_138 = dVar12;
  local_130 = dVar8;
  if (9.99999993922529e-09 < dVar7) {
    local_130 = 1.0 / SQRT(dVar7);
    local_140 = dVar10 * local_130;
    local_138 = dVar12 * local_130;
    local_130 = dVar8 * local_130;
  }
  local_158 = dVar2 + dVar6 * dVar10;
  local_150 = dVar3 + dVar12 * dVar6;
  local_148 = dVar1 + dVar8 * dVar6;
  iVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_158,local_e8);
  if (local_d8 != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return iVar5 == -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7e93e FUN_143b7e93e body=29 status=ok
// SIG undefined FUN_143b7e93e(void)

undefined8 FUN_143b7e93e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7e9bc FUN_143b7e9bc body=29 status=ok
// SIG undefined FUN_143b7e9bc(void)

undefined8 FUN_143b7e9bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7ea0c FUN_143b7ea0c body=29 status=ok
// SIG undefined FUN_143b7ea0c(void)

undefined8 FUN_143b7ea0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7ea4c FUN_143b7ea4c body=454 status=ok
// SIG undefined FUN_143b7ea4c(void)

float * FUN_143b7ea4c(float *param_1,longlong *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = *param_3;
  local_78 = *(undefined8 *)(param_3 + 0x2a);
  local_88 = *(undefined8 *)(param_3 + 0x26);
  uStack_80 = *(undefined8 *)(param_3 + 0x28);
  local_8c = param_3[0x3a];
  local_a0 = param_3[0x3c];
  uStack_9c = param_3[0x3d];
  uStack_98 = param_3[0x3e];
  uStack_94 = param_3[0x3f];
  local_d8 = (double *)(param_2 + 9);
  FUN_1484d4ff4(*param_2 + 0xa8,&local_b8);
  fVar5 = local_b0 + -0.5 + local_b0 + -0.5;
  fVar7 = fStack_b4 + -0.5 + fStack_b4 + -0.5;
  fVar6 = local_b8 + -0.5 + local_b8 + -0.5;
  local_d8 = &local_d0;
  FUN_146c3bf9c(param_2[1],uVar4,&local_88,&local_b8);
  dVar1 = *(double *)(param_3 + 0x36);
  dVar2 = *(double *)(param_3 + 0x34);
  dVar3 = *(double *)(param_3 + 0x32);
  *param_1 = (float)local_a8 * fVar5 +
             (float)(double)CONCAT44(fStack_b4,local_b8) * fVar6 +
             (float)(double)CONCAT44(uStack_ac,local_b0) * fVar7;
  param_1[1] = (float)local_c0 * fVar5 + (float)local_d0 * fVar6 + (float)local_c8 * fVar7;
  param_1[2] = (float)dVar1 * fVar5 + (float)dVar3 * fVar6 + (float)dVar2 * fVar7;
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7ec14 FUN_143b7ec14 body=106 status=ok
// SIG undefined FUN_143b7ec14(void)

undefined8 * FUN_143b7ec14(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe710;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = puVar1 + 4;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return puVar1 + 1;
}



// FUNCTION 143b7ec84 FUN_143b7ec84 body=29 status=ok
// SIG undefined FUN_143b7ec84(void)

void FUN_143b7ec84(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b7eca2 FUN_143b7eca2 body=83 status=ok
// SIG undefined FUN_143b7eca2(void)

undefined8 * FUN_143b7eca2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aefe710;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 143b7ed54 FUN_143b7ed54 body=163 status=ok
// SIG undefined FUN_143b7ed54(void)

void FUN_143b7ed54(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 143b7ee22 FUN_143b7ee22 body=29 status=ok
// SIG undefined FUN_143b7ee22(void)

undefined8 FUN_143b7ee22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7ee40 FUN_143b7ee40 body=29 status=ok
// SIG undefined FUN_143b7ee40(void)

undefined8 FUN_143b7ee40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7ee72 FUN_143b7ee72 body=93 status=ok
// SIG undefined FUN_143b7ee72(void)

void FUN_143b7ee72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefe7b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b7eed0 FUN_143b7eed0 body=93 status=ok
// SIG undefined FUN_143b7eed0(void)

void FUN_143b7eed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefe7b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143b7ef2e FUN_143b7ef2e body=126 status=ok
// SIG undefined FUN_143b7ef2e(void)

void FUN_143b7ef2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aefe7b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b7ef9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b7efac FUN_143b7efac body=41 status=ok
// SIG undefined FUN_143b7efac(void)

void FUN_143b7efac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
                    /* WARNING: Could not recover jumptable at 0x000143b7efd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return;
}



// FUNCTION 143b7efd6 FUN_143b7efd6 body=40 status=ok
// SIG undefined FUN_143b7efd6(void)

undefined8 FUN_143b7efd6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return 1;
}



// FUNCTION 143b7effe FUN_143b7effe body=363 status=ok
// SIG undefined FUN_143b7effe(void)

void FUN_143b7effe(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = (longlong *)*param_1;
  iVar1 = *param_2;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],iVar1 == 0);
  if (iVar1 == 0) {
    FUN_14020fad6(param_1[0x1a] + 200,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if (*(int *)(param_1[0x1a] + 0xb0) == 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)(int)param_1[0x15] + -1;
  }
  uVar4 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar5 * 8));
  FUN_148505e5e(&local_88,uVar4,0);
  lVar2 = param_1[0x1a];
  if ((longlong *)(lVar2 + 200) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar2 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 200) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar2 + 0xd0) = local_80;
    *(undefined4 *)(lVar2 + 0xd4) = local_7c;
  }
  FUN_1485063a5(&local_88,*(undefined8 *)(param_1[0x14] + lVar5 * 8));
  plVar3 = *(longlong **)(param_1[0x1f] + lVar5 * 8);
  (**(code **)(*plVar3 + 0x330))(plVar3,&local_88,1);
  (**(code **)(*param_1 + 0x3e0))(param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7f1ae FUN_143b7f1ae body=29 status=ok
// SIG undefined FUN_143b7f1ae(void)

undefined8 FUN_143b7f1ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f1cc FUN_143b7f1cc body=278 status=ok
// SIG undefined FUN_143b7f1cc(void)

void FUN_143b7f1cc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14aefe9a0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = lVar3 + 0x148;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x368) = 0x10;
    plVar5 = *(longlong **)(lVar3 + 0x370);
    if (plVar5 == (longlong *)0x0) goto LAB_143b7f2cc;
    *(undefined8 *)(lVar3 + 0x370) = 0;
LAB_143b7f26e:
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
    if (plVar4 == (longlong *)0x0) goto LAB_143b7f2cc;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(lVar3 + 0x368) = plVar4 + 2;
    plVar5 = *(longlong **)(lVar3 + 0x370);
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
      *(longlong **)(lVar3 + 0x370) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_143b7f26e;
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
LAB_143b7f2cc:
  FUN_146c37e28(*(undefined8 *)(lVar3 + 0x368),1,1);
  return;
}



// FUNCTION 143b7f2e6 FUN_143b7f2e6 body=5 status=ok
// SIG undefined FUN_143b7f2e6(void)

longlong FUN_143b7f2e6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b7f2ec FUN_143b7f2ec body=12 status=ok
// SIG undefined FUN_143b7f2ec(void)

void FUN_143b7f2ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b7f2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b7f2f8 FUN_143b7f2f8 body=29 status=ok
// SIG undefined FUN_143b7f2f8(void)

undefined8 FUN_143b7f2f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f316 FUN_143b7f316 body=280 status=ok
// SIG undefined FUN_143b7f316(void)

void FUN_143b7f316(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  local_28 = lVar3 + 0x148;
  plVar4 = (longlong *)FUN_14001cc68(0xb0,0x10);
  FUN_1484d6ece(plVar4,&local_28);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x378) = 0x10;
    plVar5 = *(longlong **)(lVar3 + 0x380);
    if (plVar5 == (longlong *)0x0) goto LAB_143b7f421;
    *(undefined8 *)(lVar3 + 0x380) = 0;
LAB_143b7f3ab:
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
    if (plVar4 == (longlong *)0x0) goto LAB_143b7f421;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(lVar3 + 0x378) = plVar4 + 2;
    plVar5 = *(longlong **)(lVar3 + 0x380);
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
      *(longlong **)(lVar3 + 0x380) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_143b7f3ab;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
LAB_143b7f421:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b7f444 FUN_143b7f444 body=5 status=ok
// SIG undefined FUN_143b7f444(void)

longlong FUN_143b7f444(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143b7f44a FUN_143b7f44a body=12 status=ok
// SIG undefined FUN_143b7f44a(void)

void FUN_143b7f44a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b7f453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b7f456 FUN_143b7f456 body=29 status=ok
// SIG undefined FUN_143b7f456(void)

undefined8 FUN_143b7f456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f474 FUN_143b7f474 body=29 status=ok
// SIG undefined FUN_143b7f474(void)

undefined8 FUN_143b7f474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f4a6 FUN_143b7f4a6 body=93 status=ok
// SIG undefined FUN_143b7f4a6(void)

void FUN_143b7f4a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefea00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b7f504 FUN_143b7f504 body=93 status=ok
// SIG undefined FUN_143b7f504(void)

void FUN_143b7f504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefea00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b7f562 FUN_143b7f562 body=126 status=ok
// SIG undefined FUN_143b7f562(void)

void FUN_143b7f562(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aefea00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b7f5d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b7f5f8 FUN_143b7f5f8 body=31 status=ok
// SIG undefined FUN_143b7f5f8(void)

undefined8 FUN_143b7f5f8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x3f8))
            (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143b7f64c FUN_143b7f64c body=29 status=ok
// SIG undefined FUN_143b7f64c(void)

undefined8 FUN_143b7f64c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


