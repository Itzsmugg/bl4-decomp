// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485160ea FUN_1485160ea body=1254 status=ok
// SIG undefined FUN_1485160ea(void)

void FUN_1485160ea(double *param_1,double *param_2)

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
  double *pdVar10;
  bool bVar11;
  undefined8 uVar12;
  bool bVar13;
  double *pdVar14;
  longlong in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined1 auStack_1a8 [32];
  double *local_188;
  uint local_17c;
  double local_178;
  double local_170;
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
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar5 = param_2[2] + param_1[2];
  dVar8 = param_2[1] + param_1[1];
  dVar9 = *param_2 + *param_1;
  local_118 = dVar9;
  local_110 = dVar8;
  local_108 = dVar5;
  dVar4 = param_2[2] - param_1[2];
  dVar7 = param_2[1] - param_1[1];
  dVar6 = *param_2 - *param_1;
  local_100 = dVar6;
  local_f8 = dVar7;
  local_f0 = dVar4;
  uVar12 = CONCAT71((int7)(local_e0 >> 8),1);
  local_188 = &local_118;
  do {
    local_17c = (uint)uVar12;
    dVar1 = *local_188;
    pdVar14 = &local_118;
    bVar11 = true;
    do {
      bVar13 = bVar11;
      dVar2 = pdVar14[1];
      local_138 = *(double *)(in_stack_00000030 + 0x48) * dVar4;
      local_140 = *(double *)(in_stack_00000030 + 0x40) * dVar2;
      local_148 = *(double *)(in_stack_00000030 + 0x38) * dVar1;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_150 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_158 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_160 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      local_138 = *(double *)(in_stack_00000030 + 0x48) * dVar5;
      local_140 = dVar2 * *(double *)(in_stack_00000030 + 0x40);
      local_148 = *(double *)(in_stack_00000030 + 0x38) * dVar1;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_168 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_170 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_178 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      (*(code *)*in_stack_00000038)(in_stack_00000038[1],&local_178,&local_160);
      pdVar10 = local_188;
      dVar2 = local_188[1];
      dVar3 = pdVar14[2];
      local_138 = *(double *)(in_stack_00000030 + 0x48) * dVar3;
      local_140 = *(double *)(in_stack_00000030 + 0x40) * dVar2;
      local_148 = *(double *)(in_stack_00000030 + 0x38) * dVar6;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_150 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_158 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_160 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      local_138 = dVar3 * *(double *)(in_stack_00000030 + 0x48);
      local_140 = dVar2 * *(double *)(in_stack_00000030 + 0x40);
      local_148 = *(double *)(in_stack_00000030 + 0x38) * dVar9;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_168 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_170 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_178 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      (*(code *)*in_stack_00000038)(in_stack_00000038[1],&local_178,&local_160);
      dVar2 = pdVar10[2];
      dVar3 = *pdVar14;
      local_138 = *(double *)(in_stack_00000030 + 0x48) * dVar2;
      local_140 = *(double *)(in_stack_00000030 + 0x40) * dVar7;
      local_148 = *(double *)(in_stack_00000030 + 0x38) * dVar3;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_150 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_158 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_160 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      local_138 = dVar2 * *(double *)(in_stack_00000030 + 0x48);
      local_148 = dVar3 * *(double *)(in_stack_00000030 + 0x38);
      local_140 = *(double *)(in_stack_00000030 + 0x40) * dVar8;
      FUN_146bed047(&local_130,in_stack_00000030,&local_148);
      local_168 = local_120 + *(double *)(in_stack_00000030 + 0x30);
      local_170 = local_128 + *(double *)(in_stack_00000030 + 0x28);
      local_178 = local_130 + *(double *)(in_stack_00000030 + 0x20);
      (*(code *)*in_stack_00000038)(in_stack_00000038[1],&local_178,&local_160);
      pdVar14 = &local_100;
      bVar11 = false;
    } while (bVar13);
    uVar12 = 0;
    local_188 = pdVar14;
  } while ((local_17c & 1) != 0);
  if ((local_e0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485165d2 FUN_1485165d2 body=9 status=ok
// SIG undefined FUN_1485165d2(void)

void FUN_1485165d2(longlong param_1)

{
  FUN_1400d7d10(param_1 + 0x10);
  return;
}



// FUNCTION 1485165dc FUN_1485165dc body=29 status=ok
// SIG undefined FUN_1485165dc(void)

undefined8 FUN_1485165dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851662e FUN_14851662e body=29 status=ok
// SIG undefined FUN_14851662e(void)

undefined8 FUN_14851662e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851664c FUN_14851664c body=63 status=ok
// SIG undefined FUN_14851664c(void)

void FUN_14851664c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14851668c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14851668c FUN_14851668c body=117 status=ok
// SIG undefined FUN_14851668c(void)

ulonglong FUN_14851668c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 148516702 FUN_148516702 body=63 status=ok
// SIG undefined FUN_148516702(void)

void FUN_148516702(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148516742(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148516742 FUN_148516742 body=109 status=ok
// SIG undefined FUN_148516742(void)

ulonglong FUN_148516742(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x70) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 1485167b0 FUN_1485167b0 body=63 status=ok
// SIG undefined FUN_1485167b0(void)

void FUN_1485167b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485167f0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,0x10);
  }
  return;
}



// FUNCTION 1485167f0 FUN_1485167f0 body=97 status=ok
// SIG undefined FUN_1485167f0(void)

ulonglong FUN_1485167f0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc0U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 8,0x10);
      uVar1 = uVar1 >> 8;
    }
  }
  return uVar1;
}



// FUNCTION 148516852 FUN_148516852 body=62 status=ok
// SIG undefined FUN_148516852(void)

void FUN_148516852(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148516890(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148516890 FUN_148516890 body=104 status=ok
// SIG undefined FUN_148516890(void)

ulonglong FUN_148516890(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1485168c6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_1485168c6:
  return param_2 & 0xffffffff;
}



// FUNCTION 1485168f8 FUN_1485168f8 body=62 status=ok
// SIG undefined FUN_1485168f8(void)

void FUN_1485168f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148516936(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,0x10);
  }
  return;
}



// FUNCTION 148516936 FUN_148516936 body=112 status=ok
// SIG undefined FUN_148516936(void)

ulonglong FUN_148516936(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148516970;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,0x10);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_148516970:
  return param_2 & 0xffffffff;
}



// FUNCTION 1485169a6 FUN_1485169a6 body=62 status=ok
// SIG undefined FUN_1485169a6(void)

void FUN_1485169a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485169e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1485169e4 FUN_1485169e4 body=104 status=ok
// SIG undefined FUN_1485169e4(void)

ulonglong FUN_1485169e4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148516a1a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_148516a1a:
  return param_2 & 0xffffffff;
}



// FUNCTION 148516a50 FUN_148516a50 body=29 status=ok
// SIG undefined FUN_148516a50(void)

undefined8 FUN_148516a50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148516a88 FUN_148516a88 body=29 status=ok
// SIG undefined FUN_148516a88(void)

bool FUN_148516a88(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148516aa6 FUN_148516aa6 body=26 status=ok
// SIG undefined FUN_148516aa6(void)

bool FUN_148516aa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148516ac0 FUN_148516ac0 body=24 status=ok
// SIG undefined FUN_148516ac0(void)

bool FUN_148516ac0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148516ad8 FUN_148516ad8 body=93 status=ok
// SIG undefined FUN_148516ad8(void)

void FUN_148516ad8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148516b36 FUN_148516b36 body=93 status=ok
// SIG undefined FUN_148516b36(void)

void FUN_148516b36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148516b94 FUN_148516b94 body=126 status=ok
// SIG undefined FUN_148516b94(void)

void FUN_148516b94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11b50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148516c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148516c12 FUN_148516c12 body=111 status=ok
// SIG undefined FUN_148516c12(void)

void FUN_148516c12(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  puVar4 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*pcVar1)(uVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148516c82 FUN_148516c82 body=191 status=ok
// SIG undefined FUN_148516c82(void)

bool FUN_148516c82(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar6 = local_98[0];
  }
  else {
    lVar6 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    plVar5 = local_98;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar5 = *param_3;
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
    }
    (*pcVar1)(lVar3,param_2);
  }
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148516d42 FUN_148516d42 body=38 status=ok
// SIG undefined FUN_148516d42(void)

undefined8 FUN_148516d42(undefined8 param_1,int param_2)

{
  FUN_148516e48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148516d76 FUN_148516d76 body=146 status=ok
// SIG undefined FUN_148516d76(void)

undefined1 * FUN_148516d76(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x60);
  if (pcVar1 != (code *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x70);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
      param_2[0x28] = 0;
      *(undefined8 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      return param_2;
    }
  }
  FUN_1485500ec(param_1,param_2,param_3,0);
  return param_2;
}



// FUNCTION 148516e08 FUN_148516e08 body=62 status=ok
// SIG undefined FUN_148516e08(void)

void FUN_148516e08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [64];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1485500ec(param_1,local_48,param_2,1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148516e48 FUN_148516e48 body=127 status=ok
// SIG undefined FUN_148516e48(void)

void FUN_148516e48(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af11bc0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x000148516ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148516ec8 FUN_148516ec8 body=29 status=ok
// SIG undefined FUN_148516ec8(void)

undefined8 FUN_148516ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148516f00 FUN_148516f00 body=29 status=ok
// SIG undefined FUN_148516f00(void)

bool FUN_148516f00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148516f1e FUN_148516f1e body=26 status=ok
// SIG undefined FUN_148516f1e(void)

bool FUN_148516f1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148516f38 FUN_148516f38 body=24 status=ok
// SIG undefined FUN_148516f38(void)

bool FUN_148516f38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148516f50 FUN_148516f50 body=101 status=ok
// SIG undefined FUN_148516f50(void)

void FUN_148516f50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148516fb6 FUN_148516fb6 body=101 status=ok
// SIG undefined FUN_148516fb6(void)

void FUN_148516fb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14851701c FUN_14851701c body=134 status=ok
// SIG undefined FUN_14851701c(void)

void FUN_14851701c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11ca0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148517093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485170a2 FUN_1485170a2 body=118 status=ok
// SIG undefined FUN_1485170a2(void)

void FUN_1485170a2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851711a FUN_14851711a body=199 status=ok
// SIG undefined FUN_14851711a(void)

bool FUN_14851711a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485171e2 FUN_1485171e2 body=29 status=ok
// SIG undefined FUN_1485171e2(void)

undefined8 FUN_1485171e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851721a FUN_14851721a body=29 status=ok
// SIG undefined FUN_14851721a(void)

bool FUN_14851721a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148517238 FUN_148517238 body=26 status=ok
// SIG undefined FUN_148517238(void)

bool FUN_148517238(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148517252 FUN_148517252 body=24 status=ok
// SIG undefined FUN_148517252(void)

bool FUN_148517252(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14851726a FUN_14851726a body=101 status=ok
// SIG undefined FUN_14851726a(void)

void FUN_14851726a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485172d0 FUN_1485172d0 body=101 status=ok
// SIG undefined FUN_1485172d0(void)

void FUN_1485172d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148517336 FUN_148517336 body=134 status=ok
// SIG undefined FUN_148517336(void)

void FUN_148517336(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11d10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485173ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485173bc FUN_1485173bc body=44 status=ok
// SIG undefined FUN_1485173bc(void)

void FUN_1485173bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001485173e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1485173e8 FUN_1485173e8 body=156 status=ok
// SIG undefined FUN_1485173e8(void)

bool FUN_1485173e8(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148517486 FUN_148517486 body=230 status=ok
// SIG undefined FUN_148517486(void)

int * FUN_148517486(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14851756c FUN_14851756c body=333 status=ok
// SIG undefined FUN_14851756c(void)

int * FUN_14851756c(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14482b872(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x18) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x18) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x18);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x18);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x18) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1485176ba FUN_1485176ba body=114 status=ok
// SIG undefined FUN_1485176ba(void)

void FUN_1485176ba(longlong *param_1,int param_2)

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



// FUNCTION 14851772c FUN_14851772c body=116 status=ok
// SIG undefined FUN_14851772c(void)

undefined8 * FUN_14851772c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14af11d80;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1485177cc(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1485177ae FUN_1485177ae body=29 status=ok
// SIG undefined FUN_1485177ae(void)

undefined8 FUN_1485177ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485177cc FUN_1485177cc body=98 status=ok
// SIG undefined FUN_1485177cc(void)

void FUN_1485177cc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14851782e FUN_14851782e body=230 status=ok
// SIG undefined FUN_14851782e(void)

undefined8 * FUN_14851782e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148517924 FUN_148517924 body=230 status=ok
// SIG undefined FUN_148517924(void)

undefined8 * FUN_148517924(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148517a6a FUN_148517a6a body=29 status=ok
// SIG undefined FUN_148517a6a(void)

undefined8 FUN_148517a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148517aa2 FUN_148517aa2 body=29 status=ok
// SIG undefined FUN_148517aa2(void)

bool FUN_148517aa2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148517ac0 FUN_148517ac0 body=26 status=ok
// SIG undefined FUN_148517ac0(void)

bool FUN_148517ac0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148517ada FUN_148517ada body=24 status=ok
// SIG undefined FUN_148517ada(void)

bool FUN_148517ada(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148517af2 FUN_148517af2 body=101 status=ok
// SIG undefined FUN_148517af2(void)

void FUN_148517af2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af122a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148517b58 FUN_148517b58 body=101 status=ok
// SIG undefined FUN_148517b58(void)

void FUN_148517b58(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af122a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148517bbe FUN_148517bbe body=134 status=ok
// SIG undefined FUN_148517bbe(void)

void FUN_148517bbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af122a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148517c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148517c44 FUN_148517c44 body=39 status=ok
// SIG undefined FUN_148517c44(void)

void FUN_148517c44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148517c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148517c6c FUN_148517c6c body=146 status=ok
// SIG undefined FUN_148517c6c(void)

bool FUN_148517c6c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148517d00 FUN_148517d00 body=29 status=ok
// SIG undefined FUN_148517d00(void)

undefined8 FUN_148517d00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148517d38 FUN_148517d38 body=29 status=ok
// SIG undefined FUN_148517d38(void)

bool FUN_148517d38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148517d56 FUN_148517d56 body=26 status=ok
// SIG undefined FUN_148517d56(void)

bool FUN_148517d56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148517d70 FUN_148517d70 body=24 status=ok
// SIG undefined FUN_148517d70(void)

bool FUN_148517d70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148517d88 FUN_148517d88 body=101 status=ok
// SIG undefined FUN_148517d88(void)

void FUN_148517d88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148517dee FUN_148517dee body=101 status=ok
// SIG undefined FUN_148517dee(void)

void FUN_148517dee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148517e54 FUN_148517e54 body=134 status=ok
// SIG undefined FUN_148517e54(void)

void FUN_148517e54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12310;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148517ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148517eda FUN_148517eda body=44 status=ok
// SIG undefined FUN_148517eda(void)

void FUN_148517eda(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148517f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148517f06 FUN_148517f06 body=156 status=ok
// SIG undefined FUN_148517f06(void)

bool FUN_148517f06(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148517fa4 FUN_148517fa4 body=29 status=ok
// SIG undefined FUN_148517fa4(void)

undefined8 FUN_148517fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148517fdc FUN_148517fdc body=29 status=ok
// SIG undefined FUN_148517fdc(void)

bool FUN_148517fdc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148517ffa FUN_148517ffa body=26 status=ok
// SIG undefined FUN_148517ffa(void)

bool FUN_148517ffa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148518014 FUN_148518014 body=24 status=ok
// SIG undefined FUN_148518014(void)

bool FUN_148518014(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14851802c FUN_14851802c body=101 status=ok
// SIG undefined FUN_14851802c(void)

void FUN_14851802c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148518092 FUN_148518092 body=101 status=ok
// SIG undefined FUN_148518092(void)

void FUN_148518092(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485180f8 FUN_1485180f8 body=134 status=ok
// SIG undefined FUN_1485180f8(void)

void FUN_1485180f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12380;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851816f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14851817e FUN_14851817e body=52 status=ok
// SIG undefined FUN_14851817e(void)

void FUN_14851817e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001485181af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1485181b2 FUN_1485181b2 body=167 status=ok
// SIG undefined FUN_1485181b2(void)

bool FUN_1485181b2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851825a FUN_14851825a body=29 status=ok
// SIG undefined FUN_14851825a(void)

undefined8 FUN_14851825a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148518292 FUN_148518292 body=29 status=ok
// SIG undefined FUN_148518292(void)

bool FUN_148518292(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1485182b0 FUN_1485182b0 body=26 status=ok
// SIG undefined FUN_1485182b0(void)

bool FUN_1485182b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1485182ca FUN_1485182ca body=24 status=ok
// SIG undefined FUN_1485182ca(void)

bool FUN_1485182ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1485182e2 FUN_1485182e2 body=101 status=ok
// SIG undefined FUN_1485182e2(void)

void FUN_1485182e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148518348 FUN_148518348 body=101 status=ok
// SIG undefined FUN_148518348(void)

void FUN_148518348(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485183ae FUN_1485183ae body=134 status=ok
// SIG undefined FUN_1485183ae(void)

void FUN_1485183ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12410;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148518425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148518434 FUN_148518434 body=118 status=ok
// SIG undefined FUN_148518434(void)

void FUN_148518434(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485184ac FUN_1485184ac body=199 status=ok
// SIG undefined FUN_1485184ac(void)

bool FUN_1485184ac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148518574 FUN_148518574 body=29 status=ok
// SIG undefined FUN_148518574(void)

undefined8 FUN_148518574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485185ac FUN_1485185ac body=29 status=ok
// SIG undefined FUN_1485185ac(void)

bool FUN_1485185ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1485185ca FUN_1485185ca body=26 status=ok
// SIG undefined FUN_1485185ca(void)

bool FUN_1485185ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1485185e4 FUN_1485185e4 body=24 status=ok
// SIG undefined FUN_1485185e4(void)

bool FUN_1485185e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1485185fc FUN_1485185fc body=101 status=ok
// SIG undefined FUN_1485185fc(void)

void FUN_1485185fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148518662 FUN_148518662 body=101 status=ok
// SIG undefined FUN_148518662(void)

void FUN_148518662(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485186c8 FUN_1485186c8 body=134 status=ok
// SIG undefined FUN_1485186c8(void)

void FUN_1485186c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12480;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851873f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14851874e FUN_14851874e body=44 status=ok
// SIG undefined FUN_14851874e(void)

void FUN_14851874e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148518777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14851877a FUN_14851877a body=156 status=ok
// SIG undefined FUN_14851877a(void)

bool FUN_14851877a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148518818 FUN_148518818 body=98 status=ok
// SIG undefined FUN_148518818(void)

void FUN_148518818(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14851887a FUN_14851887a body=67 status=ok
// SIG undefined FUN_14851887a(void)

void FUN_14851887a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140aee574(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140d9541a(param_1);
    return;
  }
  FUN_1485188be(param_1);
  FUN_140aee574(param_1,0);
  return;
}



// FUNCTION 1485188be FUN_1485188be body=322 status=ok
// SIG undefined FUN_1485188be(void)

void FUN_1485188be(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 148518a02 FUN_148518a02 body=68 status=ok
// SIG undefined FUN_148518a02(void)

void FUN_148518a02(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1485188be();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148518a46 FUN_148518a46 body=48 status=ok
// SIG undefined FUN_148518a46(void)

void FUN_148518a46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 148518a76 FUN_148518a76 body=147 status=ok
// SIG undefined FUN_148518a76(void)

void FUN_148518a76(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148518b0a FUN_148518b0a body=164 status=ok
// SIG undefined FUN_148518b0a(void)

void FUN_148518b0a(longlong *param_1,undefined8 param_2)

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
        goto LAB_148518b8a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148518b8a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148518bae FUN_148518bae body=175 status=ok
// SIG undefined FUN_148518bae(void)

void FUN_148518bae(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148518c37;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148518c37:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148518c5e FUN_148518c5e body=164 status=ok
// SIG undefined FUN_148518c5e(void)

void FUN_148518c5e(longlong *param_1,undefined8 param_2)

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
        goto LAB_148518cde;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148518cde:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148518d02 FUN_148518d02 body=175 status=ok
// SIG undefined FUN_148518d02(void)

void FUN_148518d02(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148518d8b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148518d8b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148518db2 FUN_148518db2 body=29 status=ok
// SIG undefined FUN_148518db2(void)

undefined8 FUN_148518db2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148518dea FUN_148518dea body=29 status=ok
// SIG undefined FUN_148518dea(void)

bool FUN_148518dea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148518e08 FUN_148518e08 body=26 status=ok
// SIG undefined FUN_148518e08(void)

bool FUN_148518e08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148518e22 FUN_148518e22 body=24 status=ok
// SIG undefined FUN_148518e22(void)

bool FUN_148518e22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148518e3a FUN_148518e3a body=101 status=ok
// SIG undefined FUN_148518e3a(void)

void FUN_148518e3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148518ea0 FUN_148518ea0 body=101 status=ok
// SIG undefined FUN_148518ea0(void)

void FUN_148518ea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148518f06 FUN_148518f06 body=134 status=ok
// SIG undefined FUN_148518f06(void)

void FUN_148518f06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12510;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148518f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148518f8c FUN_148518f8c body=118 status=ok
// SIG undefined FUN_148518f8c(void)

void FUN_148518f8c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148519004 FUN_148519004 body=199 status=ok
// SIG undefined FUN_148519004(void)

bool FUN_148519004(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485190cc FUN_1485190cc body=29 status=ok
// SIG undefined FUN_1485190cc(void)

undefined8 FUN_1485190cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148519104 FUN_148519104 body=29 status=ok
// SIG undefined FUN_148519104(void)

bool FUN_148519104(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148519122 FUN_148519122 body=26 status=ok
// SIG undefined FUN_148519122(void)

bool FUN_148519122(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14851913c FUN_14851913c body=24 status=ok
// SIG undefined FUN_14851913c(void)

bool FUN_14851913c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148519154 FUN_148519154 body=101 status=ok
// SIG undefined FUN_148519154(void)

void FUN_148519154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1485191ba FUN_1485191ba body=101 status=ok
// SIG undefined FUN_1485191ba(void)

void FUN_1485191ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148519220 FUN_148519220 body=134 status=ok
// SIG undefined FUN_148519220(void)

void FUN_148519220(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12580;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148519297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485192a6 FUN_1485192a6 body=44 status=ok
// SIG undefined FUN_1485192a6(void)

void FUN_1485192a6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001485192cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1485192d2 FUN_1485192d2 body=156 status=ok
// SIG undefined FUN_1485192d2(void)

bool FUN_1485192d2(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148519370 FUN_148519370 body=199 status=ok
// SIG undefined FUN_148519370(void)

undefined8 * FUN_148519370(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14af125f0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14af12610;
  param_1[7] = param_2;
  param_1[2] = &LAB_148519564;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14af12630;
  param_1[0x17] = &LAB_1485195b2;
  param_1[0x12] = &LAB_1485195ba;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148519438 FUN_148519438 body=38 status=ok
// SIG undefined FUN_148519438(void)

undefined8 FUN_148519438(undefined8 param_1,int param_2)

{
  FUN_14851960e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851945e FUN_14851945e body=207 status=ok
// SIG undefined FUN_14851945e(void)

void FUN_14851945e(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14851950f;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14851950f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851952e FUN_14851952e body=53 status=ok
// SIG undefined FUN_14851952e(void)

void FUN_14851952e(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 148519594 FUN_148519594 body=29 status=ok
// SIG undefined FUN_148519594(void)

undefined8 FUN_148519594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485195f0 FUN_1485195f0 body=29 status=ok
// SIG undefined FUN_1485195f0(void)

undefined8 FUN_1485195f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851960e FUN_14851960e body=127 status=ok
// SIG undefined FUN_14851960e(void)

void FUN_14851960e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af125f0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14851968e FUN_14851968e body=199 status=ok
// SIG undefined FUN_14851968e(void)

undefined8 * FUN_14851968e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14af12670;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14af12690;
  param_1[7] = param_2;
  param_1[2] = &LAB_148519882;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14af126b0;
  param_1[0x17] = &LAB_1485198d0;
  param_1[0x12] = &LAB_1485198d8;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 148519756 FUN_148519756 body=38 status=ok
// SIG undefined FUN_148519756(void)

undefined8 FUN_148519756(undefined8 param_1,int param_2)

{
  FUN_14851992c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851977c FUN_14851977c body=207 status=ok
// SIG undefined FUN_14851977c(void)

void FUN_14851977c(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14851982d;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14851982d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851984c FUN_14851984c body=53 status=ok
// SIG undefined FUN_14851984c(void)

void FUN_14851984c(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 1485198b2 FUN_1485198b2 body=29 status=ok
// SIG undefined FUN_1485198b2(void)

undefined8 FUN_1485198b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851990e FUN_14851990e body=29 status=ok
// SIG undefined FUN_14851990e(void)

undefined8 FUN_14851990e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851992c FUN_14851992c body=127 status=ok
// SIG undefined FUN_14851992c(void)

void FUN_14851992c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af12670;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1485199ab FUN_1485199ab body=63 status=ok
// SIG undefined FUN_1485199ab(void)

void FUN_1485199ab(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14c8464e8;
  uVar2 = DAT_14c8464e0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c8464e0 = uVar2;
    DAT_14c8464e8 = uVar1;
    param_1[2] = DAT_14c8464f0;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0x3ff0000000000000;
    param_1 = param_1 + 7;
    uVar1 = DAT_14c8464e8;
    uVar2 = DAT_14c8464e0;
  }
  DAT_14c8464e0 = uVar2;
  DAT_14c8464e8 = uVar1;
  return;
}



// FUNCTION 1485199ea FUN_1485199ea body=9 status=ok
// SIG undefined FUN_1485199ea(void)

void FUN_1485199ea(longlong param_1)

{
  FUN_148519a12(param_1 + 0x10);
  return;
}



// FUNCTION 1485199f4 FUN_1485199f4 body=29 status=ok
// SIG undefined FUN_1485199f4(void)

undefined8 FUN_1485199f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148519a12 FUN_148519a12 body=116 status=ok
// SIG undefined FUN_148519a12(void)

void FUN_148519a12(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148519a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148519a86 FUN_148519a86 body=25 status=ok
// SIG undefined FUN_148519a86(void)

undefined8 FUN_148519a86(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  (*(code *)*param_2)(param_1,*param_3);
  return param_1;
}



// FUNCTION 148519ab6 FUN_148519ab6 body=29 status=ok
// SIG undefined FUN_148519ab6(void)

undefined8 FUN_148519ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148519ad4 FUN_148519ad4 body=479 status=ok
// SIG undefined FUN_148519ad4(void)

void FUN_148519ad4(longlong param_1,double *param_2,double *param_3)

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
  
  dVar1 = *(double *)(param_1 + 0x18);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar6 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  dVar5 = 0.0;
  dVar9 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  if (0.0 < dVar6) {
    dVar6 = 1.0 / dVar6;
    dVar5 = dVar4 * dVar6;
    dVar9 = -dVar3 * dVar6;
    dVar8 = -dVar2 * dVar6;
    dVar7 = -dVar1 * dVar6;
  }
  dVar1 = param_3[3];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  *param_2 = (dVar8 * dVar4 + dVar5 * dVar2 + dVar7 * dVar1) - dVar9 * dVar3;
  param_2[1] = (dVar9 * dVar2 + dVar5 * dVar3 + dVar8 * dVar1) - dVar7 * dVar4;
  param_2[2] = (dVar7 * dVar3 + dVar5 * dVar4 + dVar9 * dVar1) - dVar8 * dVar2;
  param_2[3] = ((dVar5 * dVar1 - dVar2 * dVar7) - dVar8 * dVar3) - dVar9 * dVar4;
  return;
}



// FUNCTION 148519cb4 FUN_148519cb4 body=1503 status=ok
// SIG undefined FUN_148519cb4(void)

void FUN_148519cb4(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  uint uVar22;
  
  if (0.0 <= param_1[0xd]) {
    return;
  }
  dVar15 = param_1[1] - param_1[7];
  dVar14 = *param_1 - param_1[6];
  dVar10 = param_1[3];
  dVar1 = param_1[9];
  dVar2 = param_1[4];
  dVar3 = param_1[10];
  dVar4 = param_1[5];
  dVar5 = param_1[0xb];
  dVar19 = dVar4 * dVar5 + dVar10 * dVar1 + dVar2 * dVar3;
  dVar11 = param_1[2] - param_1[8];
  dVar12 = dVar11 * dVar4 + dVar14 * dVar10 + dVar15 * dVar2;
  dVar13 = dVar11 * dVar5 + dVar14 * dVar1 + dVar15 * dVar3;
  dVar11 = dVar11 * dVar11 + dVar14 * dVar14 + dVar15 * dVar15;
  dVar15 = 1.0 - dVar19 * dVar19;
  uVar9 = -(ulonglong)(-dVar15 <= dVar15);
  dVar14 = (double)(~uVar9 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar9);
  dVar16 = -dVar19;
  dVar15 = -dVar13;
  if (dVar14 < 1e-08) {
    dVar20 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)param_1[0xc] |
                     (ulonglong)-param_1[0xc] & -(ulonglong)(dVar19 < 0.0));
    uVar17 = SUB84(dVar20,0);
    uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
joined_r0x00014851a1b2:
    dVar12 = dVar16 * dVar20 + dVar12;
    if (0.0 <= dVar12) {
      uVar22 = 0;
      uVar21 = 0;
      dVar15 = (dVar15 + dVar15 + (double)CONCAT44(uVar18,uVar17)) * (double)CONCAT44(uVar18,uVar17)
      ;
    }
    else {
LAB_148519ecd:
      uVar22 = (uint)((ulonglong)dVar12 >> 0x20) ^ 0x80000000;
      uVar21 = SUB84(dVar12,0);
      dVar15 = (dVar15 + dVar15 + (double)CONCAT44(uVar18,uVar17)) * (double)CONCAT44(uVar18,uVar17)
               - dVar12 * dVar12;
    }
    dVar8 = (double)CONCAT44(uVar22,uVar21);
    dVar13 = (double)CONCAT44(uVar18,uVar17);
    dVar15 = dVar15 + dVar11;
    goto LAB_148519ef8;
  }
  dVar8 = dVar19 * dVar13 - dVar12;
  dVar6 = dVar16 * dVar12 + dVar13;
  dVar20 = param_1[0xc];
  uVar17 = SUB84(dVar20,0);
  uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
  dVar7 = dVar14 * dVar20;
  if (0.0 <= dVar8) {
    if (-dVar7 <= dVar6) {
      if (dVar7 < dVar6) goto joined_r0x00014851a1b2;
      dVar8 = dVar8 * (1.0 / dVar14);
      dVar13 = dVar6 * (1.0 / dVar14);
      dVar15 = (dVar12 + dVar12 + dVar16 * dVar13 + dVar8) * dVar8 +
               (dVar15 + dVar15 + dVar16 * dVar8 + dVar13) * dVar13;
    }
    else {
      dVar13 = -dVar20;
      dVar12 = dVar19 * dVar20 + dVar12;
      uVar17 = 0;
      uVar22 = 0;
      if (0.0 <= dVar12) {
        dVar15 = (dVar15 + dVar15 + dVar13) * dVar13;
      }
      else {
        uVar22 = (uint)((ulonglong)dVar12 >> 0x20) ^ 0x80000000;
        uVar17 = SUB84(dVar12,0);
        dVar15 = (dVar15 + dVar15 + dVar13) * dVar13 - dVar12 * dVar12;
      }
      dVar8 = (double)CONCAT44(uVar22,uVar17);
    }
LAB_14851a288:
    dVar15 = dVar11 + dVar15;
    goto LAB_148519ef8;
  }
  if (dVar6 <= -dVar7) {
    dVar12 = dVar19 * dVar20 + dVar12;
    if (dVar12 < 0.0) {
      dVar8 = -dVar12;
      dVar13 = -dVar20;
      dVar15 = dVar8 * dVar12 - ((dVar15 + dVar15) - dVar20) * dVar20;
      goto LAB_14851a288;
    }
LAB_14851a1cc:
    if (-dVar20 <= dVar13) goto LAB_14851a0af;
LAB_14851a1f1:
    dVar13 = -dVar20;
  }
  else {
    if (dVar6 <= dVar7) goto LAB_14851a1cc;
    dVar12 = dVar16 * dVar20 + dVar12;
    if (dVar12 < 0.0) goto LAB_148519ecd;
    if (dVar13 < -dVar20) goto LAB_14851a1f1;
LAB_14851a0af:
    if (dVar20 < dVar13) {
      dVar13 = dVar20;
    }
  }
  dVar15 = (dVar15 + dVar15 + dVar13) * dVar13 + dVar11;
  dVar8 = 0.0;
LAB_148519ef8:
  param_1[0xe] = *param_1 + dVar10 * dVar8;
  param_1[0xf] = param_1[1] + dVar2 * dVar8;
  param_1[0x10] = param_1[2] + dVar4 * dVar8;
  param_1[0x12] = param_1[6] + dVar1 * dVar13;
  param_1[0x13] = param_1[7] + dVar3 * dVar13;
  param_1[0x14] = param_1[8] + dVar5 * dVar13;
  param_1[0x11] = dVar8;
  param_1[0x15] = dVar13;
  dVar10 = 0.0;
  if (0.0 <= dVar15) {
    dVar10 = dVar15;
  }
  param_1[0xd] = dVar10;
  return;
}



// FUNCTION 14851a294 FUN_14851a294 body=246 status=ok
// SIG undefined FUN_14851a294(void)

undefined8 * FUN_14851a294(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 10) = 5;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af12730;
  *(undefined4 *)(plVar5 + 2) = 0;
  if (plVar5 == (longlong *)0x0) {
    param_1[7] = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[8];
  param_1[7] = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14851a36b;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    param_1[8] = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_14851a36b;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14851a36b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14851a36b:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 14851a38a FUN_14851a38a body=1 status=ok
// SIG undefined FUN_14851a38a(void)

void FUN_14851a38a(void)

{
  return;
}



// FUNCTION 14851a38c FUN_14851a38c body=29 status=ok
// SIG undefined FUN_14851a38c(void)

undefined8 FUN_14851a38c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a3b6 FUN_14851a3b6 body=68 status=ok
// SIG undefined FUN_14851a3b6(void)

undefined8 * FUN_14851a3b6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a3fa FUN_14851a3fa body=403 status=ok
// SIG undefined FUN_14851a3fa(void)

void FUN_14851a3fa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  LOCK();
  *(int *)param_1[7] = *(int *)param_1[7] + 1;
  UNLOCK();
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_48);
  puVar7 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  puVar6 = local_48;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  *(undefined2 *)(puVar7 + 5) = 3;
  puVar7[6] = 0xffffffffffffffff;
  puVar7[7] = 0;
  *puVar7 = &PTR_FUN_14af127c0;
  local_48 = (undefined8 *)0x0;
  FUN_14851a5de(puVar7 + 10);
  puVar7[0x24] = puVar6;
  *puVar7 = &PTR_FUN_14af12780;
  *(undefined1 *)(puVar7 + 0x26) = 0;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  puVar7[10] = puVar7 + 0x26;
  param_1[1] = puVar7;
  uVar3 = param_1[7];
  lVar4 = param_1[8];
  if (lVar4 == 0) {
    puVar7[0x27] = uVar3;
    puVar7[0x28] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar7[0x28];
    puVar7[0x27] = uVar3;
    puVar7[0x28] = lVar4;
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
  }
  local_58 = 0;
  local_60 = 0xffffffffffffffff;
  local_68 = 0;
  FUN_1402a8900(param_1[1],0,DAT_14c8442c0,3);
  param_1[4] = param_1[3];
  *(undefined4 *)(param_1 + 2) = 1;
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851a58e FUN_14851a58e body=38 status=ok
// SIG undefined FUN_14851a58e(void)

undefined8 FUN_14851a58e(undefined8 param_1,int param_2)

{
  FUN_14851a7b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a5b8 FUN_14851a5b8 body=38 status=ok
// SIG undefined FUN_14851a5b8(void)

undefined8 FUN_14851a5b8(undefined8 param_1,int param_2)

{
  FUN_14851a776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a5de FUN_14851a5de body=317 status=ok
// SIG undefined FUN_14851a5de(void)

undefined8 * FUN_14851a5de(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  FUN_1484c080c(param_1 + 2);
  local_98 = param_1[0x10];
  uStack_50 = param_1[0x11];
  local_88 = (longlong *)param_1[0x12];
  uStack_40 = param_1[0x13];
  local_38 = param_1[0x14];
  uStack_30 = param_1[0x15];
  local_28 = param_1[0x16];
  uStack_20 = param_1[0x17];
  uVar3 = local_28;
  uVar4 = uStack_20;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  param_1[0x16] = CONCAT44(uStack_64,local_68);
  param_1[0x17] = CONCAT44(uStack_5c,uStack_60);
  param_1[0x14] = &PTR_LAB_14af12800;
  param_1[0x15] = param_1;
  param_1[0x12] = 0;
  param_1[0x13] = CONCAT44(uStack_7c,uStack_80);
  param_1[0x10] = &LAB_14851a71c;
  param_1[0x11] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_28 = uVar3;
  uStack_20 = uVar4;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851a758 FUN_14851a758 body=29 status=ok
// SIG undefined FUN_14851a758(void)

undefined8 FUN_14851a758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a776 FUN_14851a776 body=62 status=ok
// SIG undefined FUN_14851a776(void)

void FUN_14851a776(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14af127c0;
  puVar1 = (undefined8 *)param_1[0x24];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1484c0408(param_1 + 0xc);
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 14851a7b4 FUN_14851a7b4 body=89 status=ok
// SIG undefined FUN_14851a7b4(void)

void FUN_14851a7b4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af12780;
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_14851a776(param_1);
  return;
}



// FUNCTION 14851a80e FUN_14851a80e body=164 status=ok
// SIG undefined FUN_14851a80e(void)

void FUN_14851a80e(longlong *param_1,undefined8 param_2)

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
        goto LAB_14851a88e;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14851a88e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14851a8b2 FUN_14851a8b2 body=164 status=ok
// SIG undefined FUN_14851a8b2(void)

void FUN_14851a8b2(longlong *param_1,undefined8 param_2)

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
        goto LAB_14851a932;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14851a932:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14851a956 FUN_14851a956 body=31 status=ok
// SIG undefined FUN_14851a956(void)

undefined8 FUN_14851a956(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851a992 FUN_14851a992 body=93 status=ok
// SIG undefined FUN_14851a992(void)

void FUN_14851a992(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af12820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14851a9f0 FUN_14851a9f0 body=93 status=ok
// SIG undefined FUN_14851a9f0(void)

void FUN_14851a9f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af12820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14851aa4e FUN_14851aa4e body=126 status=ok
// SIG undefined FUN_14851aa4e(void)

void FUN_14851aa4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14af12820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851aabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14851aad8 FUN_14851aad8 body=31 status=ok
// SIG undefined FUN_14851aad8(void)

undefined8 FUN_14851aad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14851ab14 FUN_14851ab14 body=93 status=ok
// SIG undefined FUN_14851ab14(void)

void FUN_14851ab14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af12890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14851ab72 FUN_14851ab72 body=126 status=ok
// SIG undefined FUN_14851ab72(void)

void FUN_14851ab72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14af12890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851abe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14851abf0 FUN_14851abf0 body=21 status=ok
// SIG undefined FUN_14851abf0(void)

undefined8 FUN_14851abf0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14851ac06 FUN_14851ac06 body=856 status=ok
// SIG undefined FUN_14851ac06(void)

longlong FUN_14851ac06(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_14851af5e();
  memcpy((void *)(param_1 + 0x50),(void *)(param_2 + 0x50),0xb0);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x12e) = *(undefined8 *)(param_2 + 0x12e);
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x166) = *(undefined8 *)(param_2 + 0x166);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x19e) = *(undefined8 *)(param_2 + 0x19e);
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  uVar3 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1d6) = *(undefined8 *)(param_2 + 0x1d6);
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  uVar3 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x20e) = *(undefined8 *)(param_2 + 0x20e);
  uVar1 = *(undefined8 *)(param_2 + 0x1f0);
  uVar2 = *(undefined8 *)(param_2 + 0x1f8);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  *(undefined8 *)(param_1 + 0x1f8) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x246) = *(undefined8 *)(param_2 + 0x246);
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  uVar2 = *(undefined8 *)(param_2 + 0x230);
  uVar3 = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x240) = uVar3;
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_2 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined8 *)(param_2 + 600) = 0;
  *(undefined8 *)(param_1 + 0x27e) = *(undefined8 *)(param_2 + 0x27e);
  uVar1 = *(undefined8 *)(param_2 + 0x260);
  uVar2 = *(undefined8 *)(param_2 + 0x268);
  uVar3 = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  *(undefined8 *)(param_1 + 0x268) = uVar2;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_2 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined8 *)(param_2 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2b6) = *(undefined8 *)(param_2 + 0x2b6);
  uVar1 = *(undefined8 *)(param_2 + 0x298);
  uVar2 = *(undefined8 *)(param_2 + 0x2a0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  return param_1;
}



// FUNCTION 14851af5e FUN_14851af5e body=123 status=ok
// SIG undefined FUN_14851af5e(void)

undefined8 * FUN_14851af5e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146f92984();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14851afda FUN_14851afda body=98 status=ok
// SIG undefined FUN_14851afda(void)

void FUN_14851afda(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14851b03c FUN_14851b03c body=110 status=ok
// SIG undefined FUN_14851b03c(void)

void FUN_14851b03c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14af07b30;
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
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014851b09e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14851b0aa FUN_14851b0aa body=97 status=ok
// SIG undefined FUN_14851b0aa(void)

void FUN_14851b0aa(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14af09ac0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 1);
  return;
}



// FUNCTION 14851b11a FUN_14851b11a body=286 status=ok
// SIG undefined FUN_14851b11a(void)

void FUN_14851b11a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [64];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_1411371f6(local_b8);
  uVar1 = FUN_145b7543e();
  local_e8 = local_b8;
  uVar1 = FUN_141137228(param_2,uVar1,&DAT_14c8464e0,&local_d8);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  lVar2 = FUN_14851b239(uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x50) = lVar2;
  FUN_1484b5834(lVar2,0);
  FUN_14092e51e(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  FUN_140b506a4(*(undefined8 *)(param_1 + 0x50));
  local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
  FUN_1413d4c10(*(undefined8 *)(param_1 + 0x48),param_3,0,0);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851b239 FUN_14851b239 body=175 status=ok
// SIG undefined FUN_14851b239(void)

undefined8 FUN_14851b239(undefined8 param_1)

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
  local_b8 = FUN_1411674f6();
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



// FUNCTION 14851b2ea FUN_14851b2ea body=78 status=ok
// SIG undefined FUN_14851b2ea(void)

void FUN_14851b2ea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1401bf202();
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x420))(*(longlong **)(param_1 + 0x50),0);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x48),0,1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14851b338 FUN_14851b338 body=67 status=ok
// SIG undefined FUN_14851b338(void)

void FUN_14851b338(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x638))(*(longlong **)(param_1 + 0x50),0,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
  if (*(char *)(param_1 + 0x130) != '\x01') {
    return;
  }
  FUN_14851b3ba(param_1);
  return;
}



// FUNCTION 14851b37c FUN_14851b37c body=62 status=ok
// SIG undefined FUN_14851b37c(void)

void FUN_14851b37c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x638))();
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
  if (*(char *)(param_1 + 0x130) != '\x01') {
    return;
  }
  FUN_14851b3ba(param_1);
  return;
}



// FUNCTION 14851b3ba FUN_14851b3ba body=197 status=ok
// SIG undefined FUN_14851b3ba(void)

void FUN_14851b3ba(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_14851b4f6(param_1,local_58);
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_1484b78ec(uVar1,local_58,puVar2,0x4000);
  FUN_1484b74d4(puVar2,uVar1);
  local_60 = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xc28))();
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851b480 FUN_14851b480 body=100 status=ok
// SIG undefined FUN_14851b480(void)

void FUN_14851b480(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2[1]) {
    uVar1 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x638))
                (*(longlong **)(param_1 + 0x50),uVar1 & 0xffffffff,
                 *(undefined8 *)(*param_2 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)(int)param_2[1]);
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
  if (*(char *)(param_1 + 0x130) == '\0') {
    return;
  }
  FUN_14851b3ba(param_1);
  return;
}



// FUNCTION 14851b4e4 FUN_14851b4e4 body=17 status=ok
// SIG undefined FUN_14851b4e4(void)

void FUN_14851b4e4(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b4f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x610))();
  return;
}



// FUNCTION 14851b4f6 FUN_14851b4f6 body=119 status=ok
// SIG undefined FUN_14851b4f6(void)

void FUN_14851b4f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x7b0))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x610))
                        (*(longlong **)(param_1 + 0x50),iVar1);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144769b64(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x7b0))();
    } while (iVar1 < iVar2);
  }
  return;
}



// FUNCTION 14851b56e FUN_14851b56e body=17 status=ok
// SIG undefined FUN_14851b56e(void)

void FUN_14851b56e(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb30))();
  return;
}



// FUNCTION 14851b580 FUN_14851b580 body=14 status=ok
// SIG undefined FUN_14851b580(void)

void FUN_14851b580(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb38))();
  return;
}



// FUNCTION 14851b58e FUN_14851b58e body=17 status=ok
// SIG undefined FUN_14851b58e(void)

void FUN_14851b58e(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb50))();
  return;
}



// FUNCTION 14851b5a0 FUN_14851b5a0 body=14 status=ok
// SIG undefined FUN_14851b5a0(void)

void FUN_14851b5a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b5a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb58))();
  return;
}



// FUNCTION 14851b5ae FUN_14851b5ae body=154 status=ok
// SIG undefined FUN_14851b5ae(void)

void FUN_14851b5ae(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x50);
  local_58[0] = *param_2;
  local_48 = param_2[2];
  param_2[2] = 0;
  local_38 = (undefined4)param_2[4];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_30 = (undefined4)param_2[5];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_28 = (undefined4)param_2[6];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_20 = (undefined4)param_2[7];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_58[0] != 0) {
    *param_2 = 0;
  }
  (**(code **)(*plVar1 + 0xc18))(plVar1,local_58);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851b64a FUN_14851b64a body=17 status=ok
// SIG undefined FUN_14851b64a(void)

void FUN_14851b64a(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb70))();
  return;
}



// FUNCTION 14851b65c FUN_14851b65c body=9 status=ok
// SIG undefined FUN_14851b65c(void)

void FUN_14851b65c(longlong param_1)

{
  FUN_1484b18f0(*(undefined8 *)(param_1 + 0x50));
  return;
}



// FUNCTION 14851b666 FUN_14851b666 body=354 status=ok
// SIG undefined FUN_14851b666(void)

ulonglong FUN_14851b666(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa98))();
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x98), lVar4 != 0)) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_38 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x800) == '\x01') {
      puVar5 = (undefined8 *)FUN_1484b2316();
      if (puVar5 == (undefined8 *)0x0) goto LAB_14851b6fd;
LAB_14851b77f:
      FUN_146c1a132(*(undefined8 *)(lVar4 + 0x208));
      cVar2 = FUN_146c3b0b0(puVar5,lVar4);
      if (cVar2 != '\0') {
        uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        FUN_1484b2cb4(*(undefined8 *)(param_1 + 0x50),1,0,0);
        FUN_14851b7ca(param_1);
        FUN_145bfa8f2(&local_68);
        goto LAB_14851b6a1;
      }
    }
    else {
LAB_14851b6fd:
      plVar1 = *(longlong **)(lVar4 + 0x208);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1);
        if ((iVar3 < 1) || ((int)plVar1[7] < 1)) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)plVar1[6];
        }
        iVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1);
        if (((0 < iVar3) && (0 < (int)plVar1[5])) && (*(longlong *)plVar1[4] != 0 && lVar7 != 0)) {
          local_2a = 0x101;
          puVar5 = &local_68;
          FUN_146c3a866(puVar5,lVar7);
          goto LAB_14851b77f;
        }
      }
    }
    FUN_145bfa8f2(&local_68);
  }
  uVar6 = 0;
LAB_14851b6a1:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851b7ca FUN_14851b7ca body=195 status=ok
// SIG undefined FUN_14851b7ca(void)

void FUN_14851b7ca(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_1 + 0x48) != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x218) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      uVar3 = FUN_14118da1c();
      DAT_14c8442b8 = FUN_14054d46e(uVar3,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014851b83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x218) + 0x228))();
      return;
    }
  }
  return;
}



// FUNCTION 14851b88e FUN_14851b88e body=11 status=ok
// SIG undefined FUN_14851b88e(void)

void FUN_14851b88e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x670) = param_2;
  return;
}



// FUNCTION 14851b89a FUN_14851b89a body=17 status=ok
// SIG undefined FUN_14851b89a(void)

void FUN_14851b89a(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851b8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb10))();
  return;
}



// FUNCTION 14851b8ac FUN_14851b8ac body=109 status=ok
// SIG undefined FUN_14851b8ac(void)

void FUN_14851b8ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
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
    param_2[8] = 0x3ff0000000000000;
    param_2[9] = 0x3ff0000000000000;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1c8);
    puVar2 = &DAT_14c846480;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x240);
    }
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}



// FUNCTION 14851b91a FUN_14851b91a body=414 status=ok
// SIG undefined FUN_14851b91a(void)

void FUN_14851b91a(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double *pdVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) {
    return;
  }
  pdVar1 = (double *)(*(longlong *)(lVar2 + 0x1c8) + 0x240);
  pdVar11 = (double *)&DAT_14c846480;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    pdVar11 = pdVar1;
  }
  lVar15 = 0x7fffffffffffffff;
  auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[5] - param_2[5]));
  auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[4] - param_2[4]));
  iVar12 = movmskpd((int)pdVar1,auVar7);
  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[7] - param_2[7]));
  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[6] - param_2[6]));
  uVar13 = movmskpd(param_4,auVar5);
  if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[1] - param_2[1]));
    auVar10._8_4_ = (int)lVar16;
    auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar11 - *param_2));
    auVar10._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    uVar13 = movmskpd(iVar12,auVar10);
    lVar16 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[3] - param_2[3]));
    auVar9._8_4_ = (int)lVar16;
    auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[2] - param_2[2]));
    auVar9._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar12 = movmskpd(0,auVar9);
    uVar14 = iVar12 << 2 | uVar13;
    if (uVar14 != 0) {
      auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[1] + param_2[1]));
      auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar11 + *param_2));
      uVar13 = movmskpd(uVar13,auVar8);
      auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[3] + param_2[3]));
      auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[2] + param_2[2]));
      uVar14 = movmskpd(uVar14,auVar6);
      if ((uVar14 & 0x3fffffff) != 0 || uVar13 != 0) goto LAB_14851ba8b;
    }
    lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[8] - param_2[8]));
    auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[9] - param_2[9]));
    auVar4._0_8_ = lVar15;
    iVar12 = movmskpd((int)pdVar11,auVar4);
    auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[0xb] - param_2[0xb]));
    auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar11[10] - param_2[10]));
    uVar13 = movmskpd(uVar13,auVar3);
    if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
      return;
    }
  }
LAB_14851ba8b:
  FUN_1413d4c10(lVar2,lVar15,0,0,0);
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851bab8 FUN_14851bab8 body=68 status=ok
// SIG undefined FUN_14851bab8(void)

void FUN_14851bab8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x4e8))();
    if (cVar1 != (char)param_2) {
      FUN_14045627c(*(undefined8 *)(param_1 + 0x50),param_2,2);
      FUN_14851b7ca(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14851bafc FUN_14851bafc body=22 status=ok
// SIG undefined FUN_14851bafc(void)

undefined8 FUN_14851bafc(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851bb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x4e8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14851bb12 FUN_14851bb12 body=213 status=ok
// SIG undefined FUN_14851bb12(void)

void FUN_14851bb12(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined1 local_250;
  undefined1 local_240 [544];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_258 = 0;
  FUN_1411b354a(local_240,0,0,0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  local_250 = 1;
  local_258 = 1;
  FUN_146c005f0(uVar1,local_240,1,1);
  FUN_14851bc40(param_1,1,0xf,*(undefined1 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 **)(param_1 + 0x68) = local_240;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  FUN_141082778(local_240);
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851bbe8 FUN_14851bbe8 body=87 status=ok
// SIG undefined FUN_14851bbe8(void)

void FUN_14851bbe8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  FUN_146c005f0(uVar1,param_2,1,1,1,1);
  FUN_14851bc40(param_1,param_3,param_4,*(undefined1 *)(param_1 + 0x40));
  return;
}



// FUNCTION 14851bc40 FUN_14851bc40 body=203 status=ok
// SIG undefined FUN_14851bc40(void)

void FUN_14851bc40(longlong param_1,int param_2,ulonglong param_3,byte param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & *(byte *)(param_1 + 0x40)) == 1) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  if (param_2 == 2) {
    if ((param_3 & 1) == 0) {
      FUN_1484b2cb4(*(undefined8 *)(param_1 + 0x50),
                    CONCAT71((int7)((param_3 & 0xffffff04) >> 8),(byte)(param_3 & 0xffffff04) >> 2))
      ;
    }
    else {
      FUN_1484b290c(*(undefined8 *)(param_1 + 0x50),
                    CONCAT71((int7)((param_3 & 0xffffff04) >> 8),(byte)(param_3 & 0xffffff04) >> 2),
                    CONCAT71((int7)((param_3 & 0xffffff02) >> 8),(byte)(param_3 & 0xffffff02) >> 1),
                    CONCAT71((int7)((param_3 & 0xffffff08) >> 8),(byte)(param_3 & 0xffffff08) >> 3))
      ;
    }
  }
  else if (param_2 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
    if (*(char *)(param_1 + 0x130) == '\x01') {
      FUN_14851b3ba(param_1);
    }
  }
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851bd0c FUN_14851bd0c body=71 status=ok
// SIG undefined FUN_14851bd0c(void)

void FUN_14851bd0c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  FUN_146c00942(uVar1,param_2);
  FUN_14851bc40(param_1,param_3,param_4,*(undefined1 *)(param_1 + 0x40));
  return;
}



// FUNCTION 14851bd54 FUN_14851bd54 body=22 status=ok
// SIG undefined FUN_14851bd54(void)

undefined8 FUN_14851bd54(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014851bd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14851bd6a FUN_14851bd6a body=87 status=ok
// SIG undefined FUN_14851bd6a(void)

void FUN_14851bd6a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_2;
    local_10 = param_2[1];
    (**(code **)(*plVar1 + 0xa90))(plVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851bdc2 FUN_14851bdc2 body=60 status=ok
// SIG undefined FUN_14851bdc2(void)

longlong FUN_14851bdc2(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x50) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) &&
      (-1 < *(int *)(param_1 + 300))) &&
     (*(ulonglong *)(param_1 + 0x70) ==
      (ulonglong)
      (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
            *(int *)(*(longlong *)(param_1 + 0x68) + 0x218)))) {
    return param_1 + 0x60;
  }
  return 0;
}



// FUNCTION 14851bdfe FUN_14851bdfe body=1169 status=ok
// SIG undefined FUN_14851bdfe(void)

undefined8 FUN_14851bdfe(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double *pdStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108 [4];
  undefined1 local_e8;
  double local_c0;
  double local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x4e8))();
    if (((cVar6 != '\0') && (*(longlong *)(param_1 + 0x48) != 0)) &&
       (*(char *)(param_1 + 0x40) == '\x01')) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1c8);
      puVar7 = &DAT_14c846480;
      if (lVar10 != 0) {
        puVar7 = (undefined8 *)(lVar10 + 0x240);
      }
      local_1b8 = *puVar7;
      uStack_1b0 = puVar7[1];
      local_1a8 = puVar7[2];
      uStack_1a0 = puVar7[3];
      local_198 = (double)puVar7[4];
      dStack_190 = (double)puVar7[5];
      local_188 = (double)puVar7[6];
      local_180 = *(undefined4 *)(puVar7 + 8);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0x44);
      uStack_178 = *(undefined4 *)(puVar7 + 9);
      uStack_174 = *(undefined4 *)((longlong)puVar7 + 0x4c);
      local_170 = (double)puVar7[10];
      FUN_146c5d1a4(&local_1b8,&local_138,param_2 + 0x18);
      FUN_146ba22f0(&local_1b8,local_98,param_2);
      local_1d8 = local_98[2];
      local_1e8 = local_98[0];
      uStack_1e0 = local_98[1];
      dVar4 = (double)CONCAT44(uStack_12c,uStack_130);
      dVar14 = local_128 * local_128 + local_138 * local_138 + dVar4 * dVar4;
      if (9.99999993922529e-09 < dVar14) {
        dVar14 = 1.0 / SQRT(dVar14);
        local_138 = local_138 * dVar14;
        dVar4 = dVar4 * dVar14;
        local_128 = local_128 * dVar14;
        dVar14 = local_128 * local_128 + local_138 * local_138 + dVar4 * dVar4;
      }
      dVar14 = SQRT(dVar14);
      dVar15 = 1.0 / dVar14;
      if (0.0 < dVar14) {
        uStack_1d0 = local_138 * dVar15;
        pdStack_1c8 = (double *)(dVar4 * dVar15);
      }
      else {
        uStack_1d0 = 0.0;
        pdStack_1c8 = (double *)0x0;
      }
      uStack_1c0 = (double)(-(ulonglong)(0.0 < dVar14) & (ulonglong)(local_128 * dVar15));
      local_138 = 1.79769313486232e+308;
      local_128 = 0.0;
      local_118 = (double *)0x0;
      local_e8 = 0;
      local_1f8 = local_98;
      local_1f0 = &local_138;
      (**(code **)(*(longlong *)(param_1 + 0x60) + 0x30))
                (param_1 + 0x60,&local_1e8,&local_150,&local_168);
      dVar4 = local_168;
      uVar5 = local_168._0_4_;
      if (local_128 != 0.0) {
        pdVar9 = local_118;
        if (local_118 == (double *)0x0) {
          pdVar9 = local_108;
        }
        (**(code **)((longlong)*pdVar9 + 0x10))();
      }
      if (uVar5 != 0xffffffff) {
        if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
        uVar12 = (ulonglong)dVar4 & 0x1ff;
        uVar1 = *(uint *)(lVar2 + uVar12 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        uVar13 = (ulonglong)uVar1 & 0x1ff;
        local_98[2] = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
        pdVar9 = (double *)(lVar3 + uVar13 * 0x18);
        local_98[0] = *pdVar9;
        local_98[1] = pdVar9[1];
        uVar1 = *(uint *)(lVar2 + 4 + uVar12 * 0xc);
        lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        uVar13 = (ulonglong)uVar1 & 0x1ff;
        local_70 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
        puVar7 = (undefined8 *)(lVar3 + uVar13 * 0x18);
        local_98[3] = (double)*puVar7;
        uStack_78 = puVar7[1];
        uVar1 = *(uint *)(lVar2 + 8 + uVar12 * 0xc);
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        uVar13 = (ulonglong)uVar1 & 0x1ff;
        local_58 = *(undefined8 *)(lVar10 + 0x10 + uVar13 * 0x18);
        puVar7 = (undefined8 *)(lVar10 + uVar13 * 0x18);
        local_68 = *puVar7;
        uStack_60 = puVar7[1];
        local_118 = pdStack_1c8;
        uStack_110 = (undefined4)uStack_1c0;
        uStack_10c = uStack_1c0._4_4_;
        local_128 = local_1d8;
        uStack_120 = (undefined4)uStack_1d0;
        uStack_11c = uStack_1d0._4_4_;
        local_138 = local_1e8;
        uStack_130 = (undefined4)uStack_1e0;
        uStack_12c = uStack_1e0._4_4_;
        pdVar9 = local_98;
        pdVar11 = local_108;
        for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar11 = *pdVar9;
          pdVar9 = pdVar9 + 1;
          pdVar11 = pdVar11 + 1;
        }
        FUN_146bd80f0(&local_138);
        *param_3 = uVar5;
        param_3[2] = (uint)(float)local_c0;
        FUN_146baf581(&local_168,local_98,local_98 + 3,&local_68);
        FUN_146c5cfa8(&local_1b8,&local_150,&local_168);
        *(double *)(param_3 + 0x14) = local_140;
        *(double *)(param_3 + 0x10) = local_150;
        *(double *)(param_3 + 0x12) = dStack_148;
        *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)(param_3 + 0x14);
        *(undefined8 *)(param_3 + 0x16) = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_3 + 0x12);
        local_158 = (uStack_1c0 * local_c0 + local_1d8) * local_170;
        local_160 = ((double)pdStack_1c8 * local_c0 + uStack_1e0) *
                    (double)CONCAT44(uStack_174,uStack_178);
        local_168 = (local_c0 * uStack_1d0 + local_1e8) * (double)CONCAT44(uStack_17c,local_180);
        FUN_146bed047(&local_150,&local_1b8,&local_168);
        *(double *)(param_3 + 10) = local_150 + local_198;
        *(double *)(param_3 + 0xc) = dStack_148 + dStack_190;
        *(double *)(param_3 + 0xe) = local_140 + local_188;
        uVar8 = 1;
        goto LAB_14851be53;
      }
    }
  }
  uVar8 = 0;
LAB_14851be53:
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851c290 FUN_14851c290 body=97 status=ok
// SIG undefined FUN_14851c290(void)

void FUN_14851c290(undefined8 param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238 [544];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_146bff712(local_238);
  FUN_14851c2f2(param_1,local_238);
  FUN_141082778(local_238);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851c2f2 FUN_14851c2f2 body=118 status=ok
// SIG undefined FUN_14851c2f2(void)

void FUN_14851c2f2(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa78))();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_14851b3ba(param_1);
  }
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851c368 FUN_14851c368 body=143 status=ok
// SIG undefined FUN_14851c368(void)

void FUN_14851c368(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  (*(code *)*param_2)(param_2[1],uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_14851b3ba(param_1);
  }
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851c3f8 FUN_14851c3f8 body=115 status=ok
// SIG undefined FUN_14851c3f8(void)

void FUN_14851c3f8(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  (*(code *)*param_2)(param_2[1],uVar1);
  if ((param_3 & *(byte *)(param_1 + 0x40)) == 1) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  return;
}



// FUNCTION 14851c46c FUN_14851c46c body=336 status=ok
// SIG undefined FUN_14851c46c(void)

undefined8 * FUN_14851c46c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [168];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
  FUN_146c2c368(local_d8,uVar2);
  FUN_146c2c4e8(local_d8);
  (*(code *)*param_3)(param_3[1],uVar2,local_d8);
  FUN_146c2caf6(local_d8,&local_e8);
  uVar2 = FUN_14001cc68(0x50,0x10);
  local_e0 = local_e8;
  local_e8 = 0;
  FUN_1484acd58(uVar2);
  lVar1 = local_e8;
  if (local_e8 != 0) {
    FUN_146c2a142(local_e8);
    FUN_1400020a8(lVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xaa0))();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa88))();
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_146bee918(param_1 + 0x60,0);
    *(ulonglong *)(param_1 + 0x70) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x68) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x68) + 0x218));
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_14851b3ba(param_1);
  }
  FUN_14851b7ca(param_1);
  *param_2 = uVar2;
  FUN_146c2c40e(local_d8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851c5be FUN_14851c5be body=104 status=ok
// SIG undefined FUN_14851c5be(void)

void FUN_14851c5be(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x658) + 0x10))
            (*(longlong *)(param_1 + 0x28) + 0x658);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa88))();
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_146bee918(param_1 + 0x38,0);
    *(ulonglong *)(param_1 + 0x48) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x40) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x40) + 0x218));
  }
  return;
}



// FUNCTION 14851c626 FUN_14851c626 body=130 status=ok
// SIG undefined FUN_14851c626(void)

void FUN_14851c626(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x660) + 0x10))
            (*(longlong *)(param_1 + 0x20) + 0x660);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa88))();
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_146bee918(param_1 + 0x30,0);
    *(ulonglong *)(param_1 + 0x40) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x38) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x38) + 0x218));
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    FUN_14851b3ba(param_1 + -0x30);
  }
  FUN_14851b7ca(param_1 + -0x30);
  return;
}



// FUNCTION 14851c6a8 FUN_14851c6a8 body=130 status=ok
// SIG undefined FUN_14851c6a8(void)

void FUN_14851c6a8(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x668) + 0x10))
            (*(longlong *)(param_1 + 0x18) + 0x668);
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa88))();
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_146bee918(param_1 + 0x28,0);
    *(ulonglong *)(param_1 + 0x38) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(param_1 + 0x30) + 0x214) +
               *(int *)(*(longlong *)(param_1 + 0x30) + 0x218));
  }
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    FUN_14851b3ba(param_1 + -0x38);
  }
  FUN_14851b7ca(param_1 + -0x38);
  return;
}



// FUNCTION 14851c72a FUN_14851c72a body=10 status=ok
// SIG undefined FUN_14851c72a(void)

longlong FUN_14851c72a(longlong param_1)

{
  return *(longlong *)(param_1 + 0x50) + 0x6c8;
}



// FUNCTION 14851c734 FUN_14851c734 body=159 status=ok
// SIG undefined FUN_14851c734(void)

void FUN_14851c734(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x50);
  local_68[0] = *param_2;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  (**(code **)(*plVar2 + 0xbe8))(plVar2,local_68,param_3);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851c7d4 FUN_14851c7d4 body=17 status=ok
// SIG undefined FUN_14851c7d4(void)

void FUN_14851c7d4(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014851c7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xbf0))();
  return;
}



// FUNCTION 14851c7e6 FUN_14851c7e6 body=109 status=ok
// SIG undefined FUN_14851c7e6(void)

void FUN_14851c7e6(longlong param_1,char param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x130) != param_2) {
    *(char *)(param_1 + 0x130) = param_2;
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
    local_18 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0xc28))();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851c862 FUN_14851c862 body=30 status=ok
// SIG undefined FUN_14851c862(void)

void FUN_14851c862(longlong param_1)

{
  FUN_143b6e60e(*(undefined8 *)(param_1 + 0x50));
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851c880 FUN_14851c880 body=30 status=ok
// SIG undefined FUN_14851c880(void)

void FUN_14851c880(longlong param_1)

{
  FUN_143b6ee10(*(undefined8 *)(param_1 + 0x50));
  FUN_14851b7ca(param_1);
  return;
}



// FUNCTION 14851c89e FUN_14851c89e body=37 status=ok
// SIG undefined FUN_14851c89e(void)

void FUN_14851c89e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14851c8c4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14851c8c4 FUN_14851c8c4 body=371 status=ok
// SIG undefined FUN_14851c8c4(void)

undefined8 FUN_14851c8c4(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == DAT_14cb4d678) {
    if (iVar1 < 2) {
      return 1;
    }
    lVar5 = 0;
    while( true ) {
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar5);
      uVar4 = (ulonglong)uVar6;
      uVar2 = *(ushort *)(DAT_14cb4d670 + lVar5);
      if (uVar6 != uVar2) break;
      if (uVar6 == 0) {
        return 1;
      }
LAB_14851c90d:
      lVar5 = lVar5 + 2;
    }
    if ((uVar2 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar3 = (ulonglong)uVar2;
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_14851c90d;
    }
    if (uVar6 == uVar2) {
      return 1;
    }
  }
  else if (DAT_14cb4d678 + iVar1 == 1) {
    return 1;
  }
  if (iVar1 == DAT_14cb4d688) {
    if (iVar1 < 2) {
      return 2;
    }
    lVar5 = 0;
    while( true ) {
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar5);
      uVar4 = (ulonglong)uVar6;
      uVar2 = *(ushort *)(DAT_14cb4d680 + lVar5);
      if (uVar6 != uVar2) break;
      if (uVar6 == 0) {
        return 2;
      }
LAB_14851c986:
      lVar5 = lVar5 + 2;
    }
    if ((uVar2 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar3 = (ulonglong)uVar2;
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_14851c986;
    }
    if (uVar6 == uVar2) {
      return 2;
    }
  }
  else if (DAT_14cb4d688 + iVar1 == 1) {
    return 2;
  }
  if (iVar1 == DAT_14cb4d698) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar5);
        uVar4 = (ulonglong)uVar6;
        uVar2 = *(ushort *)(DAT_14cb4d690 + lVar5);
        if (uVar6 != uVar2) break;
        if (uVar6 == 0) {
          return 3;
        }
LAB_14851c9f6:
        lVar5 = lVar5 + 2;
      }
      if ((uVar2 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_14851c9f6;
      }
      if (uVar6 != uVar2) {
        return 0;
      }
    }
  }
  else if (DAT_14cb4d698 + iVar1 != 1) {
    return 0;
  }
  return 3;
}



// FUNCTION 14851ca5c FUN_14851ca5c body=62 status=ok
// SIG undefined FUN_14851ca5c(void)

void FUN_14851ca5c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 1;
  if (*(int *)(param_1 + 200) < 2) {
    uVar1 = FUN_144a23846(param_1 + 0xc0,&DAT_14cb4d680);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14851ca9a FUN_14851ca9a body=31 status=ok
// SIG undefined FUN_14851ca9a(void)

undefined1 FUN_14851ca9a(longlong param_1)

{
  undefined1 uVar1;
  
  if (1 < *(int *)(param_1 + 200)) {
    return 1;
  }
  uVar1 = FUN_144a23846(param_1 + 0xc0,&DAT_14cb4d680);
  return uVar1;
}



// FUNCTION 14851cac4 FUN_14851cac4 body=13 status=ok
// SIG undefined FUN_14851cac4(void)

void FUN_14851cac4(undefined8 param_1)

{
  FUN_14851cad2(param_1,1,0,0);
  return;
}



// FUNCTION 14851cad2 FUN_14851cad2 body=425 status=ok
// SIG undefined FUN_14851cad2(void)

void FUN_14851cad2(longlong param_1,char param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 != '\0') {
    iVar2 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0xc0),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xc0);
    lVar7 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar7);
    *(undefined8 *)(lVar3 + lVar7) = 0;
    iVar2 = DAT_14cb4d678;
    pvVar4 = DAT_14cb4d670;
    lVar8 = (longlong)DAT_14cb4d678;
    *(int *)(lVar3 + 8 + lVar7) = DAT_14cb4d678;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,pvVar4,lVar8 * 2);
    }
  }
  if (param_3 != '\0') {
    iVar2 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0xc0),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xc0);
    lVar8 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar8);
    *(undefined8 *)(lVar3 + lVar8) = 0;
    iVar2 = DAT_14cb4d688;
    pvVar4 = DAT_14cb4d680;
    lVar7 = (longlong)DAT_14cb4d688;
    *(int *)(lVar3 + 8 + lVar8) = DAT_14cb4d688;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,pvVar4,lVar7 * 2);
    }
  }
  if (*(int *)(param_1 + 200) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xb0) < 2) {
LAB_14851cbfb:
      puVar6 = &DAT_14cb4d6b0;
      cVar5 = FUN_144a23846(puVar1,&DAT_14cb4d6b0);
      if (cVar5 == '\0') {
        puVar6 = (undefined8 *)*puVar1;
      }
      iVar2 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(param_1 + 0xa8,*puVar6,iVar2);
      return;
    }
    if (*(uint *)(param_1 + 0xb0) - 2 < 0x7fffffff) {
      cVar5 = FUN_144a23846(puVar1,param_1 + 0xa8);
      if (cVar5 == '\0') goto LAB_14851cbfb;
    }
  }
  return;
}



// FUNCTION 14851cc7c FUN_14851cc7c body=164 status=ok
// SIG undefined FUN_14851cc7c(void)

void FUN_14851cc7c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14851cad2(param_1,1,0,0);
  iVar2 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0xc0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = DAT_14cb4d6a8;
  _Src = DAT_14cb4d6a0;
  lVar5 = (longlong)DAT_14cb4d6a8;
  *(int *)(lVar3 + 8 + lVar4) = DAT_14cb4d6a8;
  if (lVar5 != 0) {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,lVar5 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 14851cd20 FUN_14851cd20 body=129 status=ok
// SIG undefined FUN_14851cd20(void)

void FUN_14851cd20(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar4 == DAT_14cb4d688) {
    bVar7 = true;
    if (1 < iVar4) {
      lVar5 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar5);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cb4d680 + lVar5);
        uVar6 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14851cd64;
          }
          iVar4 = uVar3 - uVar6;
          goto LAB_14851cd9d;
        }
        if (uVar1 == 0) break;
LAB_14851cd64:
        lVar5 = lVar5 + 2;
      }
      iVar4 = 0;
LAB_14851cd9d:
      bVar7 = iVar4 == 0;
    }
  }
  else {
    bVar7 = DAT_14cb4d688 + iVar4 == 1;
  }
  *(bool *)(param_1 + 0xd0) = bVar7;
  return;
}



// FUNCTION 14851cda2 FUN_14851cda2 body=513 status=ok
// SIG undefined FUN_14851cda2(void)

undefined8 FUN_14851cda2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == DAT_14cb4d678) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar3);
        uVar4 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(DAT_14cb4d670 + lVar3);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_14851cf25;
LAB_14851cdfd:
        lVar3 = lVar3 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14851cdfd;
      }
      if (uVar5 != uVar7) goto LAB_14851ce2c;
    }
  }
  else if (DAT_14cb4d678 + iVar1 != 1) {
LAB_14851ce2c:
    if (iVar1 == DAT_14cb4d688) {
      if (1 < iVar1) {
        lVar3 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar3);
          uVar4 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(DAT_14cb4d680 + lVar3);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_14851cf3e;
LAB_14851ce74:
          lVar3 = lVar3 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar6 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14851ce74;
        }
        if (uVar5 != uVar7) goto LAB_14851cea3;
      }
    }
    else if (DAT_14cb4d688 + iVar1 != 1) {
LAB_14851cea3:
      if (iVar1 == DAT_14cb4d698) {
        if (1 < iVar1) {
          lVar3 = 0;
          while( true ) {
            uVar5 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar3);
            uVar4 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(DAT_14cb4d690 + lVar3);
            if (uVar5 != uVar7) break;
            if (uVar5 == 0) goto LAB_14851cf7e;
LAB_14851ceea:
            lVar3 = lVar3 + 2;
          }
          if ((uVar7 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            uVar6 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14851ceea;
          }
          if (uVar5 != uVar7) {
            return 0;
          }
        }
      }
      else if (DAT_14cb4d698 + iVar1 != 1) {
        return 0;
      }
LAB_14851cf7e:
      *(undefined1 *)(param_2 + 8) = 3;
      return 1;
    }
LAB_14851cf3e:
    *(undefined1 *)(param_2 + 8) = 2;
    lVar3 = *(longlong *)(param_1 + 0xb8);
    if ((((lVar3 == 0) || (lVar2 = FUN_140fe7df8(), lVar2 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0xb8);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
    }
    *(longlong *)(param_2 + 0x10) = lVar3;
    return 1;
  }
LAB_14851cf25:
  *(undefined1 *)(param_2 + 8) = 1;
  return 1;
}



// FUNCTION 14851cfa4 FUN_14851cfa4 body=1134 status=ok
// SIG undefined FUN_14851cfa4(void)

void FUN_14851cfa4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  float local_2ec;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  longlong local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong local_280;
  undefined1 *local_268;
  undefined8 local_258;
  undefined **local_248;
  longlong local_240;
  undefined1 *local_228;
  undefined8 local_218;
  undefined **local_208;
  longlong local_200;
  undefined1 *local_1e8;
  undefined8 local_1d8;
  undefined **local_1c8;
  longlong local_1c0;
  undefined1 *local_1a8;
  undefined8 local_198;
  undefined **local_188;
  longlong local_180;
  undefined1 *local_168;
  undefined8 local_158;
  undefined **local_148;
  longlong local_140;
  undefined1 *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong local_100;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar2 = param_1 + 0x28;
  local_58 = 0;
  local_48 = &PTR_LAB_14af17660;
  local_68 = &LAB_143ba0afe;
  local_40 = param_1;
  FUN_1484c9b00(lVar2,param_1 + 0xac);
  local_98 = 0;
  local_88 = &PTR_LAB_14af17680;
  local_a8 = &LAB_143ba0b52;
  local_80 = param_1;
  FUN_1484c9b00(lVar2,param_1 + 0xad);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14af176a0;
  local_e8 = &LAB_143ba0ba6;
  local_c0 = param_1;
  FUN_1484c9b00(lVar2,param_1 + 0xae);
  local_118 = 0;
  local_108 = &PTR_LAB_14af176c0;
  local_128 = &LAB_143ba0bfa;
  local_100 = param_1;
  FUN_1484c9b00(lVar2,param_1 + 0xaf);
  local_158 = 0;
  local_148 = &PTR_LAB_14af176e0;
  local_168 = &LAB_143ba0c4e;
  local_140 = param_1;
  FUN_1484de26e(lVar2,param_1 + 0xb0);
  local_198 = 0;
  local_188 = &PTR_LAB_14af17700;
  local_1a8 = &LAB_143ba0ca2;
  local_180 = param_1;
  FUN_1484de26e(lVar2,param_1 + 0xb4);
  local_1d8 = 0;
  local_1c8 = &PTR_LAB_14af17720;
  local_1e8 = &LAB_143ba0cf6;
  local_1c0 = param_1;
  FUN_1484de26e(lVar2,param_1 + 0xb8);
  local_218 = 0;
  local_208 = &PTR_LAB_14af17740;
  local_228 = &LAB_143ba0d4a;
  local_200 = param_1;
  FUN_1484de346(lVar2,param_1 + 0xbc);
  local_258 = 0;
  local_248 = &PTR_LAB_14af17760;
  local_268 = &LAB_143ba0d9e;
  local_240 = param_1;
  FUN_1484de346(lVar2,param_1 + 0xc0);
  local_298 = 0;
  local_288 = &PTR_LAB_14af17780;
  local_2a8 = &LAB_143ba0df2;
  local_280 = param_1;
  FUN_1484de346(lVar2,param_1 + 0xc4);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14af177a0;
  local_2e8 = &LAB_143ba0e46;
  local_2c0 = param_1;
  FUN_1484de346(lVar2,param_1 + 200);
  uVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar2 = FUN_148558365(uVar1,1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xe0) = lVar2;
  uVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar2 = FUN_148558365(uVar1,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xf8) = lVar2;
  uVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar2 = FUN_1485583eb(uVar1,1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xd8) = lVar2;
  uVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar2 = FUN_1485583eb(uVar1,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xf0) = lVar2;
  local_2f8 = (&DAT_14c758c60)[*(byte *)(param_1 + 0xbe)];
  local_2f4 = (&DAT_14c758c60)[*(byte *)(param_1 + 0xbd)];
  local_2f0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0xbc)];
  local_2ec = (float)*(byte *)(param_1 + 0xbf) * 0.003921569;
  uVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar2 = FUN_1485580f3(uVar1,&local_2f8,0x3d4ccccd,0x3e99999a);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xd0) = lVar2;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x670) + 0x2f0))();
  lVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0xe8) = lVar2;
  if ((local_28 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851d420 FUN_14851d420 body=421 status=ok
// SIG undefined FUN_14851d420(void)

void FUN_14851d420(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = (**(code **)(*param_1 + 0x2b8))();
  iVar5 = (int)param_2[1];
  bVar2 = (byte)uVar4;
  if ((bVar2 != 2) && (iVar5 != 1 || 1 < (byte)(bVar2 - 3))) {
    bVar3 = false;
    if ((bVar2 < 5) && (bVar3 = false, (0x19U >> (uVar4 & 0x1f) & 1) != 0)) {
      local_58 = L"RemoveSources";
      local_50 = 0xd;
      FUN_1446e940c(local_5c,&local_58);
      local_58 = L"UOnAcceptHandleSourcesProperties";
      local_50 = 0x20;
      FUN_1446e940c(local_60,&local_58);
      FUN_140208bae(&local_58,local_60,local_5c,L"Remove Inputs");
      (**(code **)(*(longlong *)(param_3 + 0x28) + 0x10))(param_3 + 0x28,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      iVar5 = (int)param_2[1];
      bVar3 = true;
    }
    uVar4 = iVar5 - (uint)(bVar2 == 4);
    if ((int)(uint)(bVar2 == 3) < (int)uVar4) {
      uVar7 = (ulonglong)(bVar2 == 3);
      do {
        lVar1 = *(longlong *)(*param_2 + uVar7 * 8);
        if (lVar1 != param_4 && bVar3) {
          lVar6 = FUN_1447210f0(lVar1);
          if (lVar6 != 0) {
            FUN_1412f3774(lVar6,lVar1,0,1);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    if (bVar3) {
      (**(code **)(*(longlong *)(param_3 + 0x28) + 0x18))(param_3 + 0x28);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851d5c6 FUN_14851d5c6 body=117 status=ok
// SIG undefined FUN_14851d5c6(void)

void FUN_14851d5c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14851d63c(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851d63c FUN_14851d63c body=84 status=ok
// SIG undefined FUN_14851d63c(void)

undefined8 * FUN_14851d63c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14851d694 FUN_14851d694 body=574 status=ok
// SIG undefined FUN_14851d694(void)

/* WARNING: Removing unreachable block (ram,0x00014851d75b) */
/* WARNING: Removing unreachable block (ram,0x00014851d811) */

void FUN_14851d694(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0xb0);
  iVar3 = *(int *)(param_1 + 0xbc);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_1408be2c4(plVar1,0);
  }
  FUN_140056680(&local_58,L"Default");
  iVar3 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(longlong *)(lVar5 + lVar6) = local_58;
  *(undefined4 *)(lVar5 + 8 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = local_50._4_4_;
  local_50 = 0;
  local_58 = 0;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), 0 < iVar3)) {
    iVar3 = 0;
    do {
      lVar5 = FUN_146c19ec6(*(undefined8 *)(param_2 + 0x208),iVar3);
      local_60 = *(undefined8 *)(lVar5 + 8);
      FUN_1400021e4(&local_60,&local_58);
      iVar4 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
        FUN_1447a1bd6(plVar1,iVar4);
      }
      lVar5 = *plVar1;
      lVar6 = (longlong)iVar4 * 0x10;
      *(undefined8 *)(lVar5 + lVar6) = 0;
      *(longlong *)(lVar5 + lVar6) = local_58;
      *(undefined4 *)(lVar5 + 8 + lVar6) = (undefined4)local_50;
      *(undefined4 *)(lVar5 + 0xc + lVar6) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      iVar3 = iVar3 + 1;
      iVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
    } while (iVar3 < iVar4);
  }
  FUN_1400021e4((longlong *)(param_1 + 0xa8),&local_58);
  cVar2 = FUN_144a23846(plVar1,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    iVar3 = *(int *)((undefined8 *)*plVar1 + 1);
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_58,iVar4,*(undefined8 *)*plVar1,1);
    *(longlong *)(param_1 + 0xa8) = local_58;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14851d8d4 FUN_14851d8d4 body=684 status=ok
// SIG undefined FUN_14851d8d4(void)

/* WARNING: Removing unreachable block (ram,0x00014851d99c) */
/* WARNING: Removing unreachable block (ram,0x00014851da9d) */

void FUN_14851d8d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + 0xb0);
  iVar6 = *(int *)(param_1 + 0xbc);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_1408be2c4(plVar2,0);
  }
  FUN_140056680(&local_90,L"Default");
  iVar6 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar6 + 1U) {
    FUN_1447a1bd6(plVar2,iVar6);
  }
  lVar4 = *plVar2;
  lVar7 = (longlong)iVar6 * 0x10;
  iVar6 = 0;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  *(longlong **)(lVar4 + lVar7) = local_90;
  *(undefined4 *)(lVar4 + 8 + lVar7) = (undefined4)local_88;
  *(uint *)(lVar4 + 0xc + lVar7) = local_88._4_4_;
  local_88 = 0;
  local_90 = (longlong *)0x0;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar6) || (local_60 != plVar1)) {
    do {
      FUN_1400021e4((longlong)iStack_74 * 0x10 + *local_90,&local_68);
      iVar3 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar3 + 1U) {
        FUN_1447a1bd6(plVar2,iVar3);
      }
      lVar4 = *plVar2;
      lVar7 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar4 + lVar7) = 0;
      *(undefined8 *)(lVar4 + lVar7) = local_68;
      *(undefined4 *)(lVar4 + 8 + lVar7) = (undefined4)local_60;
      *(undefined4 *)(lVar4 + 0xc + lVar7) = local_60._4_4_;
      local_60 = (longlong *)0x0;
      local_68 = 0;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar6));
  }
  FUN_1400021e4((undefined8 *)(param_1 + 0xa8),&local_90);
  cVar5 = FUN_144a23846(plVar2,&local_90);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (cVar5 == '\0') {
    iVar6 = *(int *)((undefined8 *)*plVar2 + 1);
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_90,iVar3,*(undefined8 *)*plVar2,1);
    *(undefined8 *)(param_1 + 0xa8) = local_90;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14851db82 FUN_14851db82 body=106 status=ok
// SIG undefined FUN_14851db82(void)

bool FUN_14851db82(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(*(undefined8 **)(param_1 + 0xb0) + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_20,iVar2,**(undefined8 **)(param_1 + 0xb0),1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(longlong *)(param_1 + 0xa8) != local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851dbee FUN_14851dbee body=124 status=ok
// SIG undefined FUN_14851dbee(void)

void FUN_14851dbee(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if ((int)param_2 < 0) {
    uVar4 = *puVar1;
    iVar3 = *(int *)(puVar1 + 1);
  }
  else {
    uVar4 = puVar1[(ulonglong)param_2 * 2 + 2];
    iVar3 = *(int *)(puVar1 + (ulonglong)param_2 * 2 + 3);
  }
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_20,iVar2,uVar4,1);
  *(undefined8 *)(param_1 + 0xa8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851dc6c FUN_14851dc6c body=117 status=ok
// SIG undefined FUN_14851dc6c(void)

void FUN_14851dc6c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14851dce2(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851dce2 FUN_14851dce2 body=84 status=ok
// SIG undefined FUN_14851dce2(void)

undefined8 * FUN_14851dce2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14851dd42 FUN_14851dd42 body=472 status=ok
// SIG undefined FUN_14851dd42(void)

/* WARNING: Removing unreachable block (ram,0x00014851dddf) */
/* WARNING: Removing unreachable block (ram,0x00014851de7d) */

void FUN_14851dd42(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0xb0);
  FUN_140056680(&local_58,&DAT_149e01fe8);
  iVar2 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar5 = *plVar1;
  lVar7 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar5 + lVar7) = 0;
  *(undefined8 *)(lVar5 + lVar7) = local_58;
  *(undefined4 *)(lVar5 + 8 + lVar7) = (undefined4)local_50;
  *(undefined4 *)(lVar5 + 0xc + lVar7) = local_50._4_4_;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar7 = *param_2;
    lVar8 = 0;
    local_68 = param_2;
    do {
      local_50 = 0;
      local_58 = 0;
      local_60 = *(undefined8 *)(lVar7 + lVar8);
      FUN_1400021e4(&local_60,&local_58);
      iVar2 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
        FUN_1447a1bd6(plVar1,iVar2);
      }
      lVar3 = *plVar1;
      lVar6 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined8 *)(lVar3 + lVar6) = local_58;
      *(undefined4 *)(lVar3 + 8 + lVar6) = (undefined4)local_50;
      *(undefined4 *)(lVar3 + 0xc + lVar6) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
    if ((longlong)(int)local_68[1] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*local_68 + lVar5) == *(longlong *)(param_1 + 0xa8)) goto LAB_14851def3;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)local_68[1] * 8 != lVar5);
    }
  }
  local_50 = 0;
  local_58 = 0;
  iVar2 = *(int *)((undefined8 *)*plVar1 + 1);
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_58,iVar4,*(undefined8 *)*plVar1,1);
  *(undefined8 *)(param_1 + 0xa8) = local_58;
LAB_14851def3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851df1c FUN_14851df1c body=99 status=ok
// SIG undefined FUN_14851df1c(void)

void FUN_14851df1c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14855bc06(param_2,local_28);
  FUN_14851dd42(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851df80 FUN_14851df80 body=106 status=ok
// SIG undefined FUN_14851df80(void)

bool FUN_14851df80(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(*(undefined8 **)(param_1 + 0xb0) + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_20,iVar2,**(undefined8 **)(param_1 + 0xb0),1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(longlong *)(param_1 + 0xa8) != local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851dfec FUN_14851dfec body=124 status=ok
// SIG undefined FUN_14851dfec(void)

void FUN_14851dfec(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if ((int)param_2 < 0) {
    uVar4 = *puVar1;
    iVar3 = *(int *)(puVar1 + 1);
  }
  else {
    uVar4 = puVar1[(ulonglong)param_2 * 2 + 2];
    iVar3 = *(int *)(puVar1 + (ulonglong)param_2 * 2 + 3);
  }
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_20,iVar2,uVar4,1);
  *(undefined8 *)(param_1 + 0xa8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851e069 FUN_14851e069 body=800 status=ok
// SIG undefined FUN_14851e069(void)

void FUN_14851e069(longlong param_1,undefined8 *param_2,longlong *param_3,double param_4)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  double dVar8;
  uint uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auStack_248 [40];
  longlong local_220;
  double local_218;
  double dStack_210;
  double local_208;
  longlong local_1f8;
  uint local_1f0;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8 [2];
  undefined8 local_a8;
  undefined **local_98;
  longlong local_90;
  uint local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  iVar2 = *(int *)(param_1 + 0x50);
  auVar10._0_8_ = log((double)iVar2);
  auVar10._8_8_ = extraout_XMM0_Qb;
  auVar10 = roundsd(auVar10,auVar10,10);
  iVar6 = 1;
  if (1 < (int)auVar10._0_8_) {
    iVar6 = (int)auVar10._0_8_;
  }
  uVar9 = 500;
  if ((uint)(iVar6 * 10) < 500) {
    uVar9 = iVar6 * 10;
  }
  iVar6 = 2;
  if (2 < iVar2 / (int)uVar9) {
    iVar6 = iVar2 / (int)uVar9;
  }
  dVar8 = (double)((longlong)iVar2 % (longlong)(int)uVar9 & 0xffffffff);
  if (0 < iVar2) {
    local_220 = param_1 + 0xb8;
    uVar9 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar9 >> 9) * 8);
      local_208 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      local_218 = *pdVar1;
      dStack_210 = pdVar1[1];
      if (0.0 < param_4) {
        local_a8 = 0;
        local_98 = &PTR_LAB_149f3aae0;
        local_b8[0] = FUN_146be9588;
        local_1f8 = local_220;
        local_1f0 = uVar9;
        local_90 = param_1;
        local_88 = uVar9;
        FUN_146be94ac(local_1e8,&local_1f8,local_b8);
        local_108 = 0xffffffffffffffff;
        local_f8[0] = 0;
        local_e8 = (longlong *)0x0;
        local_138 = local_188;
        local_148 = local_198;
        uStack_140 = uStack_190;
        local_158 = local_1a8;
        dStack_150 = dStack_1a0;
        local_120 = local_170;
        uStack_11c = uStack_16c;
        uStack_118 = uStack_168;
        uStack_114 = uStack_164;
        local_110 = local_160;
        local_130 = local_180;
        uStack_128 = uStack_178;
        FUN_146be971a(local_f8,local_1e8);
        local_fc = 0;
        FUN_146bfd1f0(&local_158);
        uVar5 = local_100;
        if (local_f8[0] != 0) {
          plVar7 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar7 = local_d8;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_1e8[0] != 0) {
          plVar7 = local_1d8;
          if (local_1d8 == (longlong *)0x0) {
            plVar7 = local_1c8;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        FUN_146c13dec(param_1,&local_158,uVar5);
        local_218 = local_158 * param_4 + local_218;
        dStack_210 = dStack_150 * param_4 + dStack_210;
        local_208 = local_148 * param_4 + local_208;
      }
      (*(code *)*param_2)(&local_158,param_2[1],&local_218);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      lVar4 = *param_3;
      *(double *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_148;
      pdVar1 = (double *)(lVar4 + (longlong)iVar3 * 0x18);
      *pdVar1 = local_158;
      pdVar1[1] = dStack_150;
      uVar9 = uVar9 + iVar6;
      dVar8 = local_148;
    } while ((int)uVar9 < iVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_248,dVar8);
  }
  return;
}



// FUNCTION 14851e38a FUN_14851e38a body=685 status=ok
// SIG undefined FUN_14851e38a(void)

void FUN_14851e38a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  ulonglong *local_78;
  longlong **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_2[1] != 0) {
    plVar11 = (longlong *)*param_2;
    local_a0 = plVar11 + (int)param_2[1];
    lVar15 = param_1 + 0x50;
    local_a8 = lVar15;
    do {
      lVar12 = (longlong)*(int *)(*plVar11 + 0x10);
      local_98 = plVar11;
      if (lVar12 != 0) {
        plVar14 = *(longlong **)(*plVar11 + 8);
        plVar11 = plVar14 + lVar12;
        do {
          local_80 = *(ulonglong *)(*plVar14 + 0x10);
          if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
            uVar10 = ((uint)(local_80 >> 0x14) & 0xffff ^ (uint)(local_80 >> 4)) * -0x7a143595;
            uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
            lVar12 = *(longlong *)(param_1 + 0x58);
            if (*(longlong *)(param_1 + 0x58) == 0) {
              lVar12 = lVar15;
            }
            iVar13 = *(int *)(lVar12 + (ulonglong)
                                       (*(int *)(param_1 + 0x60) - 1U & (uVar10 >> 0x10 ^ uVar10)) *
                                       4);
            if (iVar13 != -1) {
              lVar12 = *(longlong *)(param_1 + 0x18);
              do {
                lVar4 = lVar12 + (longlong)iVar13 * 0x20;
                if (*(ulonglong *)(lVar12 + (longlong)iVar13 * 0x20) == local_80) {
                  if ((lVar4 != 0) && ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0)) {
                    plVar9 = *(longlong **)(lVar4 + 8);
                    goto LAB_14851e594;
                  }
                  break;
                }
                iVar13 = *(int *)(lVar4 + 0x18);
              } while (iVar13 != -1);
            }
          }
          plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14af177c0;
          local_90 = plVar9 + 2;
          plVar9[2] = 0;
          plVar9[3] = 0;
          plVar9[6] = 0;
          plVar9[7] = 0;
          *(undefined4 *)(plVar9 + 3) = 1;
          plVar9[4] = 0;
          plVar9[5] = 0;
          *(undefined4 *)(plVar9 + 6) = 0;
          local_88 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          local_78 = &local_80;
          local_70 = &local_90;
          FUN_148544726((longlong *)(param_1 + 0x18),local_64,&local_78);
          lVar15 = *plVar14;
          uVar6 = *(undefined4 *)(lVar15 + 0x14);
          uVar7 = *(undefined4 *)(lVar15 + 0x18);
          uVar8 = *(undefined4 *)(lVar15 + 0x1c);
          *(undefined4 *)local_90 = *(undefined4 *)(lVar15 + 0x10);
          *(undefined4 *)((longlong)local_90 + 4) = uVar6;
          *(undefined4 *)(local_90 + 1) = uVar7;
          *(undefined4 *)((longlong)local_90 + 0xc) = uVar8;
          puVar5 = (undefined8 *)local_90[5];
          local_90[5] = 0;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          plVar1 = local_88;
          plVar9 = local_90;
          lVar15 = local_a8;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_88 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              lVar15 = local_a8;
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                lVar15 = local_a8;
              }
            }
          }
LAB_14851e594:
          lVar12 = *plVar14;
          iVar13 = (int)plVar9[3];
          *(uint *)(plVar9 + 3) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar9 + 0x1c) < iVar13 + 1U) {
            FUN_148544c74(plVar9 + 2,iVar13);
            lVar15 = local_a8;
          }
          *(longlong *)(plVar9[2] + (longlong)iVar13 * 8) = lVar12;
          lVar12 = *plVar14;
          if (*(char *)(lVar12 + 0xd0) == '\x01') {
            *(int *)(plVar9 + 4) = (int)plVar9[4] + 1;
            lVar12 = *plVar14;
          }
          *(undefined8 *)(lVar12 + 0xd8) = 0;
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar11);
      }
      plVar11 = local_98 + 1;
    } while (plVar11 != local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14851e638 FUN_14851e638 body=419 status=ok
// SIG undefined FUN_14851e638(void)

void FUN_14851e638(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  lVar3 = param_2[1];
  local_90 = param_1;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    local_88 = (longlong *)(param_1 + 8);
    lVar7 = 0;
    do {
      lVar8 = *(longlong *)(lVar2 + lVar7);
      local_80 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *local_80 = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      local_80[3] = 0x7fefffffffffffff;
      local_80[4] = 0x7fefffffffffffff;
      local_80[5] = 0x7fefffffffffffff;
      local_80[6] = 0xffefffffffffffff;
      local_80[7] = 0xffefffffffffffff;
      local_80[8] = 0xffefffffffffffff;
      *local_80 = *(undefined8 *)(lVar8 + 0xa8);
      FUN_143b99d41(lVar8,local_80);
      uVar5 = uStack_70;
      puVar4 = local_80;
      if (0 < *(int *)(local_80 + 2)) {
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_1485445c6(&local_78,uVar5 & 0xffffffff);
        }
        *(undefined8 **)(local_78 + lVar8 * 8) = puVar4;
        iVar1 = *(int *)(local_90 + 0x10);
        *(uint *)(local_90 + 0x10) = iVar1 + 1U;
        if (*(uint *)(local_90 + 0x14) < iVar1 + 1U) {
          FUN_14854464c(local_88,iVar1);
        }
        *(undefined8 **)(*local_88 + (longlong)iVar1 * 8) = local_80;
        local_80 = (undefined8 *)0x0;
      }
      FUN_148544542(&local_80,local_80);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  FUN_14851e38a(local_90,&local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851e7dc FUN_14851e7dc body=396 status=ok
// SIG undefined FUN_14851e7dc(void)

void FUN_14851e7dc(longlong param_1)

{
  undefined4 uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  double **local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double *local_58;
  undefined8 uStack_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_58 = (double *)0x0;
  uStack_50 = 0;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0x7fefffffffffffff;
  local_78 = 0x7fefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_68 = 0xffefffffffffffff;
  local_60 = 0xffefffffffffffff;
  FUN_14851e96a(&local_58,&local_88,uVar1);
  local_40 = &local_98;
  local_88 = 0;
  local_80 = local_80 & 0xffffffff00000000;
  local_48 = FUN_143ba0ece;
  local_b0 = 0;
  local_a8 = &local_88;
  local_98 = param_1;
  local_90 = &local_58;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  *(undefined8 *)(param_1 + 0x18) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0xffefffffffffffff;
  if ((longlong)(int)uStack_50 != 0) {
    dVar3 = -1.79769313486232e+308;
    dVar4 = 1.79769313486232e+308;
    dVar5 = 1.79769313486232e+308;
    dVar6 = 1.79769313486232e+308;
    dVar7 = -1.79769313486232e+308;
    dVar8 = -1.79769313486232e+308;
    pdVar2 = local_58;
    do {
      if (*pdVar2 <= dVar4) {
        dVar4 = *pdVar2;
      }
      if (pdVar2[1] <= dVar5) {
        dVar5 = pdVar2[1];
      }
      if (pdVar2[2] <= dVar6) {
        dVar6 = pdVar2[2];
      }
      if (dVar3 <= pdVar2[3]) {
        dVar3 = pdVar2[3];
      }
      if (dVar7 <= pdVar2[4]) {
        dVar7 = pdVar2[4];
      }
      if (dVar8 <= pdVar2[5]) {
        dVar8 = pdVar2[5];
      }
      *(double *)(param_1 + 0x18) = dVar4;
      *(double *)(param_1 + 0x20) = dVar5;
      *(double *)(param_1 + 0x28) = dVar6;
      *(double *)(param_1 + 0x30) = dVar3;
      *(double *)(param_1 + 0x38) = dVar7;
      *(double *)(param_1 + 0x40) = dVar8;
      pdVar2 = pdVar2 + 6;
    } while (pdVar2 != local_58 + (longlong)(int)uStack_50 * 6);
  }
  if (local_58 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851e96a FUN_14851e96a body=139 status=ok
// SIG undefined FUN_14851e96a(void)

void FUN_14851e96a(longlong *param_1,undefined4 *param_2,int param_3)

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
  longlong lVar12;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_14840200a(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_146bf26b8(param_1,iVar3);
    }
    lVar4 = *param_1;
    lVar12 = (longlong)iVar3 * 0x30;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar11 = *(undefined8 *)(param_2 + 10);
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar12);
    *puVar2 = *(undefined8 *)(param_2 + 8);
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar12);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar1 = (undefined4 *)(lVar4 + lVar12);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
  }
  return;
}


