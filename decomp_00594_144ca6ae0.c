// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ca6ae0 FUN_144ca6ae0 body=104 status=ok
// SIG undefined FUN_144ca6ae0(void)

uint * FUN_144ca6ae0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0x18) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 144ca6b50 FUN_144ca6b50 body=254 status=ok
// SIG undefined FUN_144ca6b50(void)

uint * FUN_144ca6b50(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144ca6c26:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144ca6c26;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144ca6c50 FUN_144ca6c50 body=307 status=ok
// SIG undefined FUN_144ca6c50(void)

uint * FUN_144ca6c50(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar10 * 3;
  if ((iVar10 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  iVar10 = param_3[1];
  iVar1 = *param_3;
  uVar12 = iVar10 * -0x61c8864f;
  uVar11 = iVar1 * -0x61c8864f;
  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | iVar10 * -0x4f000000
  ;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar1 * -0x4f000000;
  lVar3 = param_1[2];
  uVar11 = uVar11 * 0x40 + uVar12 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar11);
  iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar2 < 0) {
      uVar12 = *(uint *)(param_1 + 1);
      *puVar7 = uVar11;
      puVar7[1] = uVar12;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144ca6d5c:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar11) {
      piVar9 = (int *)((longlong)(int)puVar7[1] * 0x10 + *param_1);
      if ((*piVar9 == iVar1) && (piVar9[1] == iVar10)) {
        *param_2 = puVar7[1];
        goto LAB_144ca6d5c;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144ca6d90 FUN_144ca6d90 body=102 status=ok
// SIG undefined FUN_144ca6d90(void)

uint * FUN_144ca6d90(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 8) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 144ca6e00 FUN_144ca6e00 body=144 status=ok
// SIG undefined FUN_144ca6e00(void)

uint * FUN_144ca6e00(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = param_2[1];
  iVar2 = *param_2;
  uVar8 = iVar1 * -0x61c8864f;
  uVar7 = iVar2 * -0x61c8864f;
  uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
  lVar3 = param_1[2];
  uVar8 = uVar8 ^ uVar8 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  uVar7 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar7 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar3 + uVar4 * 8);
    if (((*puVar5 == uVar8) &&
        (piVar6 = (int *)((ulonglong)uVar7 * 0x10 + *param_1), *piVar6 == iVar2)) &&
       (piVar6[1] == iVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar7 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144ca6e90 FUN_144ca6e90 body=441 status=ok
// SIG undefined FUN_144ca6e90(void)

void FUN_144ca6e90(longlong param_1,int param_2,uint param_3,code *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_80;
  undefined1 local_7f [31];
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  
  uVar15 = (ulonglong)param_2;
  uVar16 = uVar15;
  do {
    lVar9 = (longlong)(int)param_3;
    uVar12 = uVar16 & 0xffffffff;
    lVar14 = (longlong)(int)(param_3 + (int)uVar16) >> 1;
    lVar1 = param_1 + lVar14 * 0xc;
    local_60 = *(undefined4 *)(param_1 + lVar14 * 0xc);
    local_5c = *(undefined4 *)(lVar1 + 4);
    local_58 = *(undefined2 *)(lVar1 + 8);
    local_56 = *(undefined2 *)(lVar1 + 10);
    uVar13 = param_3;
    do {
      uVar11 = (uint)uVar12;
      pcVar10 = (char *)(*param_4)(&local_80,param_1 + (longlong)(int)uVar11 * 0xc,&local_60);
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar15 = uVar15 + 1;
        pcVar10 = (char *)(*param_4)(&local_80,param_1 + (longlong)(int)uVar11 * 0xc,&local_60);
        cVar4 = *pcVar10;
      }
      pcVar10 = (char *)(*param_4)(local_7f,&local_60,param_1 + (longlong)(int)uVar13 * 0xc);
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        uVar13 = uVar13 - 1;
        lVar9 = lVar9 + -1;
        pcVar10 = (char *)(*param_4)(local_7f,&local_60,param_1 + (longlong)(int)uVar13 * 0xc);
        cVar4 = *pcVar10;
      }
      if ((int)uVar13 < (int)uVar11) break;
      if (uVar13 != uVar11) {
        uVar7 = *(undefined4 *)(param_1 + lVar9 * 0xc);
        puVar2 = (undefined4 *)(param_1 + lVar9 * 0xc);
        uVar8 = puVar2[1];
        uVar5 = *(undefined2 *)(puVar2 + 2);
        puVar3 = (undefined4 *)(param_1 + uVar15 * 0xc);
        uVar6 = *(undefined2 *)((longlong)puVar2 + 10);
        *puVar2 = *(undefined4 *)(param_1 + uVar15 * 0xc);
        puVar2[1] = puVar3[1];
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar3 + 2);
        *(undefined2 *)((longlong)puVar2 + 10) = *(undefined2 *)((longlong)puVar3 + 10);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        *(undefined2 *)(puVar3 + 2) = uVar5;
        *(undefined2 *)((longlong)puVar3 + 10) = uVar6;
      }
      uVar13 = uVar13 - 1;
      lVar9 = lVar9 + -1;
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar15 = uVar15 + 1;
    } while ((int)uVar11 <= (int)uVar13);
    if ((int)uVar16 < (int)uVar13) {
      FUN_144ca6e90(param_1,uVar16 & 0xffffffff,uVar13,param_4);
    }
    if ((int)param_3 <= (int)uVar11) {
      return;
    }
    uVar16 = (ulonglong)uVar11;
  } while( true );
}



// FUNCTION 144ca7050 FUN_144ca7050 body=412 status=ok
// SIG undefined FUN_144ca7050(void)

ulonglong FUN_144ca7050(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar10 * 0x18;
  lVar4 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = (undefined1 *)(lVar4 + 0x10);
    uVar9 = (ulonglong)uVar1;
    plVar6 = plVar7;
    do {
      if ((longlong *)(puVar5 + -0x10) != (longlong *)0x0) {
        *(longlong *)(puVar5 + -0x10) = *plVar6;
        *plVar6 = 0;
        *(undefined8 *)(puVar5 + -8) = 0;
        *puVar5 = 0;
        *(longlong *)(puVar5 + -8) = plVar6[1];
        *puVar5 = (char)plVar6[2];
        plVar6[1] = 0;
      }
      puVar5 = puVar5 + 0x18;
      plVar6 = plVar6 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      lVar2 = plVar7[1];
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*plVar7 != 0) {
        FUN_144b3f230();
      }
      plVar7 = plVar7 + 3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar9 = uVar10;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar10 + 1;
    if (uVar8 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar8;
}



// FUNCTION 144ca71f0 FUN_144ca71f0 body=262 status=ok
// SIG undefined FUN_144ca71f0(void)

ulonglong FUN_144ca71f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xc);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144ca7300 FUN_144ca7300 body=233 status=ok
// SIG undefined FUN_144ca7300(void)

void FUN_144ca7300(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar2 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar2) {
    uVar4 = uVar2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 2,&local_res8);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  uVar1 = uVar4 * 2 + 2;
  uVar5 = uVar4;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 2;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -2 >> 1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2);
  }
  *param_1 = uVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144ca73f0 FUN_144ca73f0 body=944 status=ok
// SIG undefined FUN_144ca73f0(void)

ulonglong FUN_144ca73f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar15 = param_3;
  if (param_3 < uVar11 * 2) {
    uVar15 = uVar11 * 2;
  }
  local_res20 = uVar11;
  if ((0x7ffffffe < uVar15) && (uVar15 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar15 * 0x120,&local_res18);
  puVar18 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  puVar14 = (uint *)((longlong)puVar18 + 0x1c);
  if (0 < (int)uVar2) {
    puVar13 = (uint *)(lVar9 + 0x1c);
    uVar11 = (ulonglong)uVar2;
    puVar17 = puVar14;
    do {
      if (puVar13 + -7 != (uint *)0x0) {
        *(undefined8 *)(puVar13 + -7) = *puVar18;
        uVar3 = *(undefined8 *)(puVar17 + -5);
        *puVar18 = 0;
        *(undefined8 *)(puVar13 + -5) = uVar3;
        puVar17[-5] = 0;
        puVar17[-4] = 0;
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0x80000000;
        FUN_144c93310(puVar17 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar13 + -3) = *(undefined8 *)(puVar17 + -3);
        puVar13[-1] = puVar17[-1];
        *puVar13 = *puVar17;
        puVar17[-3] = 0;
        puVar17[-2] = 0;
        puVar17[-1] = 0;
        puVar17[0] = 0;
        puVar13[1] = puVar17[1];
        puVar13[2] = puVar17[2];
        puVar13[3] = puVar17[3];
        puVar13[4] = puVar17[4];
        puVar13[5] = puVar17[5];
        uVar3 = *(undefined8 *)(puVar17 + 0xb);
        *(undefined8 *)(puVar13 + 9) = *(undefined8 *)(puVar17 + 9);
        *(undefined8 *)(puVar13 + 0xb) = uVar3;
        uVar3 = *(undefined8 *)(puVar17 + 0xf);
        *(undefined8 *)(puVar13 + 0xd) = *(undefined8 *)(puVar17 + 0xd);
        *(undefined8 *)(puVar13 + 0xf) = uVar3;
        uVar3 = *(undefined8 *)(puVar17 + 0x13);
        *(undefined8 *)(puVar13 + 0x11) = *(undefined8 *)(puVar17 + 0x11);
        *(undefined8 *)(puVar13 + 0x13) = uVar3;
        uVar3 = *(undefined8 *)(puVar17 + 0x17);
        *(undefined8 *)(puVar13 + 0x15) = *(undefined8 *)(puVar17 + 0x15);
        *(undefined8 *)(puVar13 + 0x17) = uVar3;
        uVar3 = *(undefined8 *)(puVar17 + 0x1b);
        *(undefined8 *)(puVar13 + 0x19) = *(undefined8 *)(puVar17 + 0x19);
        *(undefined8 *)(puVar13 + 0x1b) = uVar3;
        uVar6 = puVar17[0x1e];
        uVar7 = puVar17[0x1f];
        uVar8 = puVar17[0x20];
        puVar13[0x1d] = puVar17[0x1d];
        puVar13[0x1e] = uVar6;
        puVar13[0x1f] = uVar7;
        puVar13[0x20] = uVar8;
        *(char *)(puVar13 + 0x21) = (char)puVar17[0x21];
        uVar6 = puVar17[0x26];
        uVar7 = puVar17[0x27];
        uVar8 = puVar17[0x28];
        puVar13[0x25] = puVar17[0x25];
        puVar13[0x26] = uVar6;
        puVar13[0x27] = uVar7;
        puVar13[0x28] = uVar8;
        FUN_144c934c0(puVar13 + 0x29,puVar17 + 0x29);
        FUN_144c938c0(puVar13 + 0x31,puVar17 + 0x31);
        *(char *)(puVar13 + 0x39) = (char)puVar17[0x39];
        puVar13[0x3b] = 0;
        puVar13[0x3c] = 0;
        puVar13[0x3d] = 0;
        puVar13[0x3e] = 0x80000000;
        FUN_14382139c(puVar17 + 0x3b);
        *(undefined8 *)(puVar13 + 0x3b) = *(undefined8 *)(puVar17 + 0x3b);
        puVar13[0x3d] = puVar17[0x3d];
        puVar13[0x3e] = puVar17[0x3e];
        puVar17[0x3b] = 0;
        puVar17[0x3c] = 0;
        puVar17[0x3d] = 0;
        puVar17[0x3e] = 0;
        puVar13[0x3f] = puVar17[0x3f];
      }
      puVar13 = puVar13 + 0x48;
      puVar18 = puVar18 + 0x24;
      puVar17 = puVar17 + 0x48;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    uVar12 = (ulonglong)uVar2;
    do {
      FUN_144bf90d0(puVar14 + 0x3b);
      FUN_144c93800(puVar14 + 0x31);
      FUN_144c93440(puVar14 + 0x29);
      lVar4 = *(longlong *)(puVar14 + -3);
      lVar10 = lVar4 + (longlong)(int)puVar14[-1] * 8;
      while (lVar10 != lVar4) {
        plVar1 = (longlong *)(lVar10 + -8);
        lVar10 = lVar10 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      puVar14[-1] = 0;
      if ((-1 < (int)*puVar14) && (*(longlong *)(puVar14 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -3),
                   (ulonglong)(*puVar14 & 0x7fffffff) << 3);
      }
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      *puVar14 = 0x80000000;
      if (*(longlong *)(puVar14 + -5) != 0) {
        FUN_144b3f230();
      }
      if (*(longlong *)(puVar14 + -7) != 0) {
        FUN_144b3f230();
      }
      puVar14 = puVar14 + 0x48;
      uVar12 = uVar12 - 1;
      uVar11 = local_res20;
    } while (uVar12 != 0);
  }
  uVar12 = uVar15 * 0x120 + 0x120;
  uVar16 = uVar15;
  if (uVar12 <= local_res18) {
    local_res18 = local_res18 - 0x120;
    uVar16 = uVar15 + 1;
    if (uVar12 <= local_res18) {
      uVar15 = local_res18 + uVar15 * -0x120;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      uVar12 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar5,0);
      uVar16 = uVar16 + uVar15 / 0x120;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x120);
  }
  *param_1 = lVar9;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar16;
  return uVar12;
}



// FUNCTION 144ca77a0 FUN_144ca77a0 body=392 status=ok
// SIG undefined FUN_144ca77a0(void)

ulonglong FUN_144ca77a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar10 * 2;
  uVar11 = param_3;
  if (param_3 < uVar8) {
    uVar11 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x18,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  plVar7 = (longlong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = (undefined1 *)(lVar4 + 0x10);
    uVar9 = (ulonglong)uVar1;
    plVar6 = plVar7;
    do {
      if ((longlong *)(puVar5 + -0x10) != (longlong *)0x0) {
        *(longlong *)(puVar5 + -0x10) = *plVar6;
        *plVar6 = 0;
        *(undefined8 *)(puVar5 + -8) = 0;
        *puVar5 = 0;
        *(longlong *)(puVar5 + -8) = plVar6[1];
        *puVar5 = (char)plVar6[2];
        plVar6[1] = 0;
      }
      puVar5 = puVar5 + 0x18;
      plVar6 = plVar6 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    do {
      lVar2 = plVar7[1];
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*plVar7 != 0) {
        FUN_144b3f230();
      }
      plVar7 = plVar7 + 3;
      uVar8 = uVar8 - 1;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = uVar11 * 0x18 + 0x18;
  uVar9 = uVar11;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar11 + 1;
    if (uVar8 <= local_res8) {
      uVar11 = local_res8 + uVar11 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar11 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x18);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar8;
}



// FUNCTION 144ca7930 FUN_144ca7930 body=620 status=ok
// SIG undefined FUN_144ca7930(void)

ulonglong FUN_144ca7930(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong local_res8;
  longlong local_res10;
  undefined4 *local_res18;
  longlong local_res20;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar9) {
    uVar6 = uVar9;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar6 * 0x38;
  local_res20 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,
                                 *(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar11 = (undefined4 *)*param_1;
  uVar9 = (ulonglong)uVar1;
  local_res18 = puVar11;
  if (0 < (int)uVar1) {
    puVar7 = puVar11 + 9;
    uVar10 = (ulonglong)uVar1;
    puVar8 = (undefined4 *)(local_res20 + 0x24);
    do {
      if (puVar8 + -9 != (undefined4 *)0x0) {
        puVar8[-9] = *puVar11;
        *(undefined8 *)(puVar8 + -7) = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0x80000000;
        FUN_144ca1470(puVar7 + -7,&PTR_vftable_14c6e47c0);
        *(undefined8 *)(puVar8 + -7) = *(undefined8 *)(puVar7 + -7);
        puVar8[-5] = puVar7[-5];
        puVar8[-4] = puVar7[-4];
        *(undefined8 *)(puVar7 + -7) = 0;
        *(undefined8 *)(puVar7 + -5) = 0;
        *(undefined8 *)(puVar8 + -3) = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        FUN_14382139c(puVar7 + -3);
        *(undefined8 *)(puVar8 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar8[-1] = puVar7[-1];
        *puVar8 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
        puVar8[1] = puVar7[1];
        *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar7 + 3);
      }
      puVar8 = puVar8 + 0xe;
      puVar11 = puVar11 + 0xe;
      puVar7 = puVar7 + 0xe;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    piVar5 = local_res18 + 5;
    do {
      FUN_144bf90d0(piVar5 + 1);
      piVar5[-1] = 0;
      if ((-1 < *piVar5) && (*(longlong *)(piVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,*(longlong *)(piVar5 + -3),*piVar5 * 2);
      }
      piVar5[-3] = 0;
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      piVar5 = piVar5 + 0xe;
      uVar9 = uVar9 - 1;
      param_2 = local_res10;
    } while (uVar9 != 0);
  }
  lVar3 = local_res20;
  uVar9 = uVar6 * 0x38 + 0x38;
  uVar10 = uVar6;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar10 = uVar6 + 1;
    if (uVar9 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar10 = uVar10 + ((uVar6 - lVar4 >> 1) + lVar4 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar9 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar9;
}



// FUNCTION 144ca7ba0 FUN_144ca7ba0 body=235 status=ok
// SIG undefined FUN_144ca7ba0(void)

void FUN_144ca7ba0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144ca7c90 FUN_144ca7c90 body=247 status=ok
// SIG undefined FUN_144ca7c90(void)

void FUN_144ca7c90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144ca7d90 FUN_144ca7d90 body=335 status=ok
// SIG undefined FUN_144ca7d90(void)

void FUN_144ca7d90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar4 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar9 = puVar9 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}



// FUNCTION 144ca7ee0 FUN_144ca7ee0 body=213 status=ok
// SIG undefined FUN_144ca7ee0(void)

/* WARNING: Removing unreachable block (ram,0x000144ca7f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_144ca7ee0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  undefined1 auVar12 [12];
  float fVar13;
  float fVar15;
  undefined1 auVar14 [12];
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *param_1 = auVar6;
  auVar5 = *param_2;
  fVar1 = auVar5._0_4_;
  fVar2 = auVar5._4_4_;
  fVar3 = auVar5._8_4_;
  fVar4 = auVar5._12_4_;
  *param_1 = auVar5;
  auVar5._0_4_ = fVar1 * fVar1;
  auVar5._4_4_ = fVar2 * fVar2;
  auVar5._8_4_ = fVar3 * fVar3;
  auVar5._12_4_ = fVar4 * fVar4;
  auVar8._0_4_ = auVar5._0_4_ + auVar5._0_4_;
  auVar8._4_4_ = auVar5._0_4_ + auVar5._4_4_;
  auVar8._8_4_ = auVar5._0_4_ + auVar5._8_4_;
  auVar8._12_4_ = auVar5._0_4_ + auVar5._12_4_;
  auVar5 = sqrtps(auVar5,auVar8);
  auVar5 = divps(_DAT_14c6daca0,auVar5);
  uVar20 = ~-(uint)(auVar8._4_4_ == 0.0) & auVar5._4_4_;
  uVar21 = ~-(uint)(auVar8._8_4_ == 0.0) & auVar5._8_4_;
  uVar17 = -(uint)((int)auVar8._8_4_ < (int)auVar8._4_4_);
  uVar18 = -(uint)((int)auVar8._8_4_ < (int)auVar8._4_4_);
  uVar19 = -(uint)((int)auVar8._8_4_ < (int)auVar8._4_4_);
  auVar14._0_4_ = ~uVar17 & (uint)fVar3;
  auVar14._4_4_ = 0;
  auVar14._8_4_ = ~uVar19 & (uint)fVar1;
  auVar12._0_4_ = (uint)fVar2 & uVar17;
  auVar12._4_4_ = (uint)fVar1 & uVar18;
  auVar12._8_4_ = 0;
  auVar14 = auVar14 | auVar12;
  fVar13 = -auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar16 = auVar14._8_4_;
  fVar7 = (float)(~uVar17 & uVar21 | uVar20 & uVar17);
  fVar9 = (float)(~uVar18 & uVar21 | uVar20 & uVar18);
  fVar10 = (float)(~uVar19 & uVar21 | uVar20 & uVar19);
  fVar11 = (float)(~-(uint)((int)auVar8._8_4_ < (int)auVar8._4_4_) & uVar21 |
                  uVar20 & -(uint)((int)auVar8._8_4_ < (int)auVar8._4_4_));
  *(float *)param_1[1] = fVar7 * fVar13;
  *(float *)(param_1[1] + 4) = fVar9 * fVar15;
  *(float *)(param_1[1] + 8) = fVar10 * fVar16;
  *(float *)(param_1[1] + 0xc) = fVar11 * 0.0;
  *(float *)param_1[2] = (fVar16 * fVar2 - fVar3 * fVar15) * fVar7;
  *(float *)(param_1[2] + 4) = (fVar13 * fVar3 - fVar1 * fVar16) * fVar9;
  *(float *)(param_1[2] + 8) = (fVar15 * fVar1 - fVar2 * fVar13) * fVar10;
  *(float *)(param_1[2] + 0xc) = (fVar4 * 0.0 - fVar4 * 0.0) * fVar11;
  return param_1;
}



// FUNCTION 144ca7fc0 FUN_144ca7fc0 body=207 status=ok
// SIG undefined FUN_144ca7fc0(void)

/* WARNING: Removing unreachable block (ram,0x000144ca7fe2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ca7fc0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 auVar11 [12];
  float fVar12;
  float fVar14;
  undefined1 auVar13 [12];
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  auVar6 = *param_2;
  fVar1 = auVar6._0_4_;
  fVar2 = auVar6._4_4_;
  fVar3 = auVar6._8_4_;
  fVar4 = auVar6._12_4_;
  *param_1 = auVar6;
  fVar5 = fVar1 * fVar1;
  auVar7._0_4_ = fVar5 + fVar5;
  auVar7._4_4_ = fVar5 + fVar2 * fVar2;
  auVar7._8_4_ = fVar5 + fVar3 * fVar3;
  auVar7._12_4_ = fVar5 + fVar4 * fVar4;
  auVar6 = sqrtps(in_XMM1,auVar7);
  auVar6 = divps(_DAT_14c6daca0,auVar6);
  uVar19 = ~-(uint)(auVar7._4_4_ == 0.0) & auVar6._4_4_;
  uVar20 = ~-(uint)(auVar7._8_4_ == 0.0) & auVar6._8_4_;
  uVar16 = -(uint)((int)auVar7._8_4_ < (int)auVar7._4_4_);
  uVar17 = -(uint)((int)auVar7._8_4_ < (int)auVar7._4_4_);
  uVar18 = -(uint)((int)auVar7._8_4_ < (int)auVar7._4_4_);
  auVar13._0_4_ = ~uVar16 & (uint)fVar3;
  auVar13._4_4_ = 0;
  auVar13._8_4_ = ~uVar18 & (uint)fVar1;
  auVar11._0_4_ = (uint)fVar2 & uVar16;
  auVar11._4_4_ = (uint)fVar1 & uVar17;
  auVar11._8_4_ = 0;
  auVar13 = auVar13 | auVar11;
  fVar12 = -auVar13._0_4_;
  fVar14 = auVar13._4_4_;
  fVar15 = auVar13._8_4_;
  fVar5 = (float)(~uVar16 & uVar20 | uVar19 & uVar16);
  fVar8 = (float)(~uVar17 & uVar20 | uVar19 & uVar17);
  fVar9 = (float)(~uVar18 & uVar20 | uVar19 & uVar18);
  fVar10 = (float)(~-(uint)((int)auVar7._8_4_ < (int)auVar7._4_4_) & uVar20 |
                  uVar19 & -(uint)((int)auVar7._8_4_ < (int)auVar7._4_4_));
  *(float *)param_1[1] = fVar5 * fVar12;
  *(float *)(param_1[1] + 4) = fVar8 * fVar14;
  *(float *)(param_1[1] + 8) = fVar9 * fVar15;
  *(float *)(param_1[1] + 0xc) = fVar10 * 0.0;
  *(float *)param_1[2] = (fVar15 * fVar2 - fVar3 * fVar14) * fVar5;
  *(float *)(param_1[2] + 4) = (fVar12 * fVar3 - fVar1 * fVar15) * fVar8;
  *(float *)(param_1[2] + 8) = (fVar14 * fVar1 - fVar2 * fVar12) * fVar9;
  *(float *)(param_1[2] + 0xc) = (fVar4 * 0.0 - fVar4 * 0.0) * fVar10;
  return;
}



// FUNCTION 144ca8090 FUN_144ca8090 body=142 status=ok
// SIG undefined FUN_144ca8090(void)

/* WARNING: Removing unreachable block (ram,0x000144ca80b6) */

void FUN_144ca8090(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar14 = fVar1 * param_2[1] + fVar2 * param_2[5] + fVar3 * param_2[9];
  auVar12._0_8_ = CONCAT44(fVar14,fVar1 * *param_2 + fVar2 * param_2[4] + fVar3 * param_2[8]);
  auVar12._8_4_ = fVar1 * param_2[2] + fVar2 * param_2[6] + fVar3 * param_2[10];
  auVar12._12_4_ = fVar1 * param_2[3] + fVar2 * param_2[7] + fVar3 * param_2[0xb];
  auVar13._0_8_ = auVar12._0_8_ << 0x20;
  auVar13._8_8_ = auVar12._8_8_ << 0x20 | (ulonglong)(uint)fVar14;
  *param_3 = auVar13 >> 0x20;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar14 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[9];
  fVar10 = param_2[10];
  fVar11 = param_2[0xb];
  *(float *)param_3[1] = fVar1 * *param_2 + fVar2 * param_2[4] + fVar3 * param_2[8];
  *(float *)(param_3[1] + 4) = fVar1 * fVar6 + fVar2 * fVar14 + fVar3 * fVar9;
  *(float *)(param_3[1] + 8) = fVar1 * fVar7 + fVar2 * fVar4 + fVar3 * fVar10;
  *(float *)(param_3[1] + 0xc) = fVar1 * fVar8 + fVar2 * fVar5 + fVar3 * fVar11;
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar14 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[9];
  fVar10 = param_2[10];
  fVar11 = param_2[0xb];
  *(float *)param_3[2] = fVar1 * *param_2 + fVar2 * param_2[4] + fVar3 * param_2[8];
  *(float *)(param_3[2] + 4) = fVar1 * fVar14 + fVar2 * fVar6 + fVar3 * fVar9;
  *(float *)(param_3[2] + 8) = fVar1 * fVar4 + fVar2 * fVar7 + fVar3 * fVar10;
  *(float *)(param_3[2] + 0xc) = fVar1 * fVar5 + fVar2 * fVar8 + fVar3 * fVar11;
  return;
}



// FUNCTION 144ca8120 FUN_144ca8120 body=170 status=ok
// SIG undefined FUN_144ca8120(void)

void FUN_144ca8120(uint *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    uVar7 = param_3 & 0x3fffff;
    lVar4 = *(longlong *)
             (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
             0x20);
    iVar1 = *(int *)(lVar4 + 0x20);
    if ((int)uVar7 < iVar1) {
      sVar6 = -1;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x168);
      uVar2 = *(uint *)(lVar4 + (ulonglong)uVar7 * 4);
      iVar3 = *(int *)(lVar4 + (longlong)(int)uVar2 * 4);
      *param_1 = param_3;
      sVar5 = (short)iVar1;
      sVar6 = (short)iVar3 - sVar5;
      if (iVar3 == -2) {
        sVar6 = -1;
      }
      param_3 = param_3 & 0xffc00000 | uVar2;
      sVar6 = ((short)uVar7 - sVar5) - sVar6;
    }
    *(short *)(param_1 + 1) = sVar6;
    *param_1 = param_3;
    return;
  }
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *param_1 = param_3;
  return;
}



// FUNCTION 144ca81d0 FUN_144ca81d0 body=251 status=ok
// SIG undefined FUN_144ca81d0(void)

uint * FUN_144ca81d0(uint *param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  char local_res18 [8];
  uint local_res20 [2];
  int local_28;
  int local_24 [3];
  
  uVar2 = *param_1;
  if (param_3 == 0) {
    *param_2 = uVar2;
    return param_2;
  }
  local_res20[0] = uVar2 & 0x3fffff;
  uVar3 = (ulonglong)local_res20[0];
  lVar1 = *(longlong *)((ulonglong)(uVar2 >> 0x16) * 0x120 + *(longlong *)(param_3 + 0x38));
  FUN_144c42800(*(undefined8 *)(lVar1 + 0x20),local_res18,local_res20,&local_28,local_24);
  if (local_res18[0] == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x20);
    if ((((*(int *)(lVar1 + 0x108) == 0) ||
         ((*(byte *)(uVar3 + *(longlong *)(lVar1 + 0x100)) & 1) == 0)) &&
        (*(int *)(*(longlong *)(lVar1 + 0x168) + uVar3 * 4) != -3)) && ((short)param_1[1] == -1)) {
      *param_2 = *param_1;
      return param_2;
    }
  }
  else if (((short)param_1[1] != -1) &&
          (uVar2 = (short)param_1[1] + local_28, (int)uVar2 < local_24[0])) {
    *param_2 = *param_1 & 0xffc00000 | uVar2;
    return param_2;
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 144ca82d0 FUN_144ca82d0 body=3 status=ok
// SIG undefined FUN_144ca82d0(void)

undefined1 FUN_144ca82d0(void)

{
  return 1;
}



// FUNCTION 144ca82e0 FUN_144ca82e0 body=3 status=ok
// SIG undefined FUN_144ca82e0(void)

undefined1 FUN_144ca82e0(void)

{
  return 1;
}



// FUNCTION 144ca8330 FUN_144ca8330 body=93 status=ok
// SIG undefined FUN_144ca8330(void)

uint FUN_144ca8330(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar7._0_4_ = -(uint)((*(uint *)(param_1 + 0x30) & 0x7f800000) == 0x7f800000);
  auVar7._4_4_ = -(uint)((*(uint *)(param_1 + 0x34) & 0x7f800000) == 0x7f800000);
  auVar7._8_4_ = -(uint)((*(uint *)(param_1 + 0x38) & 0x7f800000) == 0x7f800000);
  auVar7._12_4_ = -(uint)((*(uint *)(param_1 + 0x3c) & 0x7f800000) == 0x7f800000);
  bVar4 = SUB161(auVar7 >> 0x47,0) & 1;
  uVar6 = (uint)(ushort)((ushort)bVar4 << 8 | (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar7._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar7._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar7._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf);
  if ((((SUB161(auVar7 >> 7,0) & 1) == 0 && (SUB161(auVar7 >> 0x27,0) & 1) == 0) && bVar4 == 0) &&
     (0.0 < *(float *)(param_1 + 0x40))) {
    auVar8._0_4_ = -(uint)((*(uint *)(param_1 + 0x50) & 0x7f800000) == 0x7f800000);
    auVar8._4_4_ = -(uint)((*(uint *)(param_1 + 0x54) & 0x7f800000) == 0x7f800000);
    auVar8._8_4_ = -(uint)((*(uint *)(param_1 + 0x58) & 0x7f800000) == 0x7f800000);
    auVar8._12_4_ = -(uint)((*(uint *)(param_1 + 0x5c) & 0x7f800000) == 0x7f800000);
    uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1);
    uVar3 = (ushort)(SUB161(auVar8 >> 0x27,0) & 1);
    bVar4 = SUB161(auVar8 >> 0x47,0) & 1;
    uVar1 = uVar2 | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 | uVar3 << 4 |
            (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 | (ushort)bVar4 << 8 |
            (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar8._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar8._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar8._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar8._12_4_ >> 0x1f) << 0xf;
    uVar6 = (uint)uVar1;
    if ((uVar2 == 0 && uVar3 == 0) && bVar4 == 0) {
      auVar5._4_4_ = -(uint)(*(float *)(param_1 + 0x54) == 0.0);
      auVar5._0_4_ = -(uint)(*(float *)(param_1 + 0x50) == 0.0);
      auVar5._8_4_ = -(uint)(*(float *)(param_1 + 0x58) == 0.0);
      auVar5._12_4_ = -(uint)(*(float *)(param_1 + 0x5c) == 0.0);
      uVar6 = movmskps((uint)uVar1,auVar5);
      uVar6 = uVar6 & 7;
      if ((char)uVar6 != '\a') {
        return 1;
      }
    }
  }
  return uVar6 & 0xffffff00;
}



// FUNCTION 144ca8390 FUN_144ca8390 body=60 status=ok
// SIG undefined FUN_144ca8390(void)

ulonglong FUN_144ca8390(longlong param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3._0_4_ = -(uint)((*(uint *)(param_1 + 0x30) & 0x7f800000) == 0x7f800000);
  auVar3._4_4_ = -(uint)((*(uint *)(param_1 + 0x34) & 0x7f800000) == 0x7f800000);
  auVar3._8_4_ = -(uint)((*(uint *)(param_1 + 0x38) & 0x7f800000) == 0x7f800000);
  auVar3._12_4_ = -(uint)((*(uint *)(param_1 + 0x3c) & 0x7f800000) == 0x7f800000);
  bVar2 = SUB161(auVar3 >> 0x47,0) & 1;
  uVar1 = (ushort)bVar2 << 8 | (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
          (ushort)((byte)(auVar3._12_4_ >> 7) & 1) << 0xc |
          (ushort)((byte)(auVar3._12_4_ >> 0xf) & 1) << 0xd |
          (ushort)((byte)(auVar3._12_4_ >> 0x17) & 1) << 0xe |
          (ushort)(byte)(auVar3._12_4_ >> 0x1f) << 0xf;
  if (((SUB161(auVar3 >> 7,0) & 1) == 0 && (SUB161(auVar3 >> 0x27,0) & 1) == 0) && bVar2 == 0) {
    auVar4._0_4_ = -(uint)((*(uint *)(param_1 + 0x40) & 0x7f800000) == 0x7f800000);
    auVar4._4_4_ = -(uint)((*(uint *)(param_1 + 0x44) & 0x7f800000) == 0x7f800000);
    auVar4._8_4_ = -(uint)((*(uint *)(param_1 + 0x48) & 0x7f800000) == 0x7f800000);
    auVar4._12_4_ = -(uint)((*(uint *)(param_1 + 0x4c) & 0x7f800000) == 0x7f800000);
    bVar2 = SUB161(auVar4 >> 0x47,0) & 1;
    uVar1 = (ushort)bVar2 << 8 | (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar4._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar4._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar4._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar4._12_4_ >> 0x1f) << 0xf;
    if (((SUB161(auVar4 >> 7,0) & 1) == 0 && (SUB161(auVar4 >> 0x27,0) & 1) == 0) && bVar2 == 0) {
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  return (ulonglong)uVar1;
}



// FUNCTION 144ca8410 FUN_144ca8410 body=72 status=ok
// SIG undefined FUN_144ca8410(void)

ulonglong FUN_144ca8410(longlong param_1)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._0_4_ = -(uint)((*(uint *)(param_1 + 0x30) & 0x7f800000) == 0x7f800000);
  auVar4._4_4_ = -(uint)((*(uint *)(param_1 + 0x34) & 0x7f800000) == 0x7f800000);
  auVar4._8_4_ = -(uint)((*(uint *)(param_1 + 0x38) & 0x7f800000) == 0x7f800000);
  auVar4._12_4_ = -(uint)((*(uint *)(param_1 + 0x3c) & 0x7f800000) == 0x7f800000);
  bVar2 = SUB161(auVar4 >> 0x47,0) & 1;
  uVar3 = (ulonglong)
          (ushort)((ushort)bVar2 << 8 | (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar4._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar4._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar4._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar4._12_4_ >> 0x1f) << 0xf);
  if (((SUB161(auVar4 >> 7,0) & 1) == 0 && (SUB161(auVar4 >> 0x27,0) & 1) == 0) && bVar2 == 0) {
    auVar5._0_4_ = -(uint)((*(uint *)(param_1 + 0x40) & 0x7f800000) == 0x7f800000);
    auVar5._4_4_ = -(uint)((*(uint *)(param_1 + 0x44) & 0x7f800000) == 0x7f800000);
    auVar5._8_4_ = -(uint)((*(uint *)(param_1 + 0x48) & 0x7f800000) == 0x7f800000);
    auVar5._12_4_ = -(uint)((*(uint *)(param_1 + 0x4c) & 0x7f800000) == 0x7f800000);
    bVar2 = SUB161(auVar5 >> 0x47,0) & 1;
    uVar1 = (ushort)bVar2 << 8 | (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar5._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar5._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar5._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar5._12_4_ >> 0x1f) << 0xf;
    uVar3 = (ulonglong)uVar1;
    if ((((SUB161(auVar5 >> 7,0) & 1) == 0 && (SUB161(auVar5 >> 0x27,0) & 1) == 0) && bVar2 == 0) &&
       (0.0 < *(float *)(param_1 + 0x50))) {
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  return uVar3;
}



// FUNCTION 144ca8480 FUN_144ca8480 body=28 status=ok
// SIG undefined FUN_144ca8480(void)

int FUN_144ca8480(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  uint uVar2;
  uint3 uVar3;
  
  auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x34));
  auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x30));
  auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x38));
  auVar1._12_4_ = -(uint)(*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x3c));
  uVar2 = movmskps(in_EAX,auVar1);
  uVar3 = (uint3)(uVar2 >> 8);
  if (((uVar2 & 7) == 0) && (*(int *)(param_1 + 0x50) != 0)) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}



// FUNCTION 144ca84a0 FUN_144ca84a0 body=3 status=ok
// SIG undefined FUN_144ca84a0(void)

undefined1 FUN_144ca84a0(void)

{
  return 1;
}



// FUNCTION 144ca84b0 FUN_144ca84b0 body=47 status=ok
// SIG undefined FUN_144ca84b0(void)

ulonglong FUN_144ca84b0(longlong param_1)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  pfVar2 = *(float **)(param_1 + 0x28);
  while( true ) {
    if (pfVar2 == *(float **)(param_1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)pfVar2 >> 8),1);
    }
    auVar1._4_4_ = -(uint)(pfVar2[5] < pfVar2[1]);
    auVar1._0_4_ = -(uint)(pfVar2[4] < *pfVar2);
    auVar1._8_4_ = -(uint)(pfVar2[6] < pfVar2[2]);
    auVar1._12_4_ = -(uint)(pfVar2[7] < pfVar2[3]);
    uVar3 = movmskps(uVar3,auVar1);
    if ((uVar3 & 7) != 0) break;
    pfVar2 = pfVar2 + 8;
  }
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



// FUNCTION 144ca84e0 FUN_144ca84e0 body=101 status=ok
// SIG undefined FUN_144ca84e0(void)

undefined8 * FUN_144ca84e0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = hkaiWorldProcessingTasks::Context::vftable;
  FUN_144c6d6a0(param_1 + 5);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 144ca8550 FUN_144ca8550 body=192 status=ok
// SIG undefined FUN_144ca8550(void)

undefined8 * FUN_144ca8550(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x14] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x13] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x12] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x11] != 0) {
    FUN_144b3f230();
  }
  FUN_144c2be80(param_1 + 10);
  FUN_144bf90d0(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 144ca8610 FUN_144ca8610 body=894 status=ok
// SIG undefined FUN_144ca8610(void)

ulonglong *
FUN_144ca8610(ulonglong *param_1,longlong param_2,char *param_3,char param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  char *local_48;
  char *local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_48 = "TthkaiWorldProcessingTasks::makeContext";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_res10 = 0xb8;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  uVar7 = 0;
  uVar3 = uVar7;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0xb8);
    uVar3 = FUN_144ca84e0(_Dst);
  }
  *param_1 = uVar3;
  *(longlong *)(uVar3 + 0x18) = param_2;
  FUN_14475e23c(*param_1 + 0x28,param_3);
  *(char *)(*param_1 + 0xa8) = param_4;
  if ((*param_3 != '\0') || (param_3[0x48] != '\0')) {
    if (param_4 == '\0') {
      lVar2 = *(longlong *)(param_2 + 0x230);
      uVar3 = *param_1;
      if (lVar2 != 0) {
        FUN_144b3d910(lVar2);
      }
      lVar6 = *(longlong *)(uVar3 + 0x20);
      *(longlong *)(uVar3 + 0x20) = lVar2;
    }
    else {
      if (param_3[0x48] != '\0') {
        uVar7 = (ulonglong)*(uint *)(param_3 + 0x54);
      }
      puVar4 = (undefined8 *)FUN_144fab4f0(*(undefined8 *)(param_2 + 0x230),&local_res10,uVar7);
      uVar3 = *param_1;
      uVar8 = *puVar4;
      *puVar4 = 0;
      lVar2 = *(longlong *)(uVar3 + 0x20);
      *(undefined8 *)(uVar3 + 0x20) = uVar8;
      lVar6 = local_res10;
      if (lVar2 != 0) {
        FUN_144b3f230();
        lVar6 = local_res10;
      }
    }
    if (lVar6 != 0) {
      FUN_144b3f230();
    }
  }
  if (*param_3 == '\0') {
    local_res8 = *(undefined8 *)(param_2 + 0x140);
  }
  else {
    puVar4 = &local_res8;
    in_stack_ffffffffffffff98 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),param_4);
    puVar5 = (undefined8 *)
             FUN_145018610(&local_res10,param_2,param_3,*(undefined8 *)(*param_1 + 0x20),
                           in_stack_ffffffffffffff98,param_5,puVar4);
    uVar10 = (undefined4)((ulonglong)puVar4 >> 0x20);
    uVar3 = *param_1;
    uVar8 = *puVar5;
    *puVar5 = 0;
    lVar2 = *(longlong *)(uVar3 + 0x88);
    *(undefined8 *)(uVar3 + 0x88) = uVar8;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (local_res10 != 0) {
      FUN_144b3f230();
    }
  }
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_3[0x24] != '\0') {
    uVar3 = *param_1;
    uVar8 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),param_4);
    puVar4 = (undefined8 *)FUN_145023480(&local_res10,param_2,local_res8,param_3,uVar8,param_5);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar8 = *puVar4;
    *puVar4 = 0;
    lVar2 = *(longlong *)(uVar3 + 0x90);
    *(undefined8 *)(uVar3 + 0x90) = uVar8;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (local_res10 != 0) {
      FUN_144b3f230();
    }
  }
  if (param_3[0x48] != '\0') {
    uVar3 = *param_1;
    uVar8 = *(undefined8 *)(uVar3 + 0x20);
    puVar4 = (undefined8 *)
             FUN_14501f620(&local_res10,param_2,local_res8,param_3,uVar8,param_4,
                           CONCAT44(uVar10,param_5));
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar8 = *puVar4;
    *puVar4 = 0;
    lVar2 = *(longlong *)(uVar3 + 0x98);
    *(undefined8 *)(uVar3 + 0x98) = uVar8;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (local_res10 != 0) {
      FUN_144b3f230();
    }
  }
  if (param_3[0x58] != '\0') {
    uVar3 = *param_1;
    puVar4 = (undefined8 *)
             FUN_145021af0(&local_res10,param_2,param_3,param_4,CONCAT44(uVar9,param_5));
    uVar8 = *puVar4;
    *puVar4 = 0;
    lVar2 = *(longlong *)(uVar3 + 0xa0);
    *(undefined8 *)(uVar3 + 0xa0) = uVar8;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (local_res10 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(*param_1 + 0xac) = 0;
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return param_1;
}



// FUNCTION 144ca8990 FUN_144ca8990 body=421 status=ok
// SIG undefined FUN_144ca8990(void)

undefined8 * FUN_144ca8990(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 local_res18;
  char *local_28;
  char *local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_28 = "TthkaiWorldProcessingTasks::makeInitialProcessingTaskGraph";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_res8 = 0x4c8;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkTaskGraph");
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144be3930(lVar2);
  }
  *param_1 = uVar3;
  local_res18 = 0x40;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"FireProcessingRunStartingTask");
  }
  if (puVar4 == (undefined8 *)0x0) {
    FUN_144be3b70(*param_1,&local_res8,0,0x40);
  }
  else {
    puVar4[2] = 1;
    puVar4[1] = 0xffffffff;
    puVar4[6] = param_2;
    *puVar4 = hkaiWorldProcessingTasks::FireProcessingRunStartingTask::vftable;
    puVar4[4] = hkaiWorldProcessingTasks::FireProcessingRunStartingTask::vftable;
    FUN_144be3b70(*param_1,&local_res8,puVar4,0x40);
    FUN_144b3f230(puVar4);
  }
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return param_1;
}



// FUNCTION 144ca8b40 FUN_144ca8b40 body=538 status=ok
// SIG undefined FUN_144ca8b40(void)

undefined8 * FUN_144ca8b40(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  char *local_38;
  char *local_30;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    local_38 = "TthkaiWorldProcessingTasks::makeNextTaskGraph";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
  }
  iVar1 = *(int *)(param_2 + 0xac);
  *(int *)(param_2 + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      if (*(char *)(lVar2 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xf0);
      if (lVar4 == 0) {
        if (*(char *)(lVar2 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = FUN_144b3f4a0();
        *(longlong *)(lVar2 + 0xf0) = lVar4;
      }
      lVar2 = *(longlong *)(lVar4 + 0x3e0);
      if (lVar2 != 0) {
        local_38 = "TthkaiWorldProcessingTasks::makePreCuttingTaskGraph";
        local_30 = "";
        FUN_144b3f370(lVar2,&local_38);
      }
      local_res10 = 0x4c8;
      lVar4 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkTaskGraph");
      }
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144be3930(lVar4);
      }
      *param_1 = uVar5;
      FUN_144be90e0(0x9721ebcc);
      FUN_145018c00(&local_res10,*param_1,*(undefined8 *)(param_2 + 0x88),0xffff);
      FUN_144be90e0(0xc3cdd67d);
      if (lVar2 != 0) {
        local_38 = "Et";
        local_30 = "";
        FUN_144b3f260(lVar2,&local_38);
      }
      goto joined_r0x000144ca8d0a;
    }
  }
  else {
    if (iVar1 != 1) {
      *param_1 = 0;
      goto joined_r0x000144ca8d0a;
    }
    if (*(char *)(param_2 + 0x28) == '\0') {
      *param_1 = 0;
      goto joined_r0x000144ca8d0a;
    }
  }
  FUN_144ca9480(param_1,param_2);
joined_r0x000144ca8d0a:
  if (lVar3 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
  }
  return param_1;
}



// FUNCTION 144ca8d60 FUN_144ca8d60 body=958 status=ok
// SIG undefined FUN_144ca8d60(void)

longlong * FUN_144ca8d60(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 uVar4;
  short sVar5;
  longlong lVar6;
  short *psVar7;
  undefined8 *puVar8;
  short sVar9;
  int iVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  char *local_48;
  char *local_40;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar2 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar6;
  }
  lVar2 = *(longlong *)(lVar6 + 0x3e0);
  if (lVar2 != 0) {
    local_48 = "TthkaiWorldProcessingTasks::makeFinalProcessingTaskGraph";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
  }
  local_res8 = 0x4c8;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"hkTaskGraph");
  }
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144be3930(lVar6);
  }
  *param_1 = lVar6;
  sVar9 = -1;
  if (*(char *)(param_2 + 0x28) != '\0') {
    if (*(char *)(param_2 + 0xa8) != '\0') {
      psVar7 = (short *)FUN_145019ca0(&local_res8,lVar6,*(undefined8 *)(param_2 + 0x88),0xffff);
      sVar9 = *psVar7;
    }
    psVar7 = (short *)FUN_145019dd0(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x88),sVar9);
    sVar9 = *psVar7;
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    psVar7 = (short *)FUN_145023ad0(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x90),sVar9);
    sVar9 = *psVar7;
  }
  if (*(char *)(param_2 + 0x70) != '\0') {
    psVar7 = (short *)FUN_14501fd80(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x98),sVar9);
    sVar9 = *psVar7;
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    psVar7 = (short *)FUN_1450222f0(&local_res8,*param_1,*(undefined8 *)(param_2 + 0xa0),sVar9);
    sVar9 = *psVar7;
  }
  if ((*(longlong *)(param_2 + 0x20) != 0) &&
     (*(longlong *)(param_2 + 0x20) != *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x230))) {
    local_res10 = 0x40;
    puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar8,"JoinPathRequestManagerTask");
    }
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = 0xffffffff;
      *puVar8 = hkaiWorldProcessingTasks::JoinPathRequestManagerTask::vftable;
      puVar8[4] = hkaiWorldProcessingTasks::JoinPathRequestManagerTask::vftable;
      puVar8[2] = 1;
      puVar8[6] = param_2;
    }
    FUN_144be3b70(*param_1,&local_res8,puVar8,0x40);
    lVar6 = *param_1;
    uVar4 = (short)local_res8;
    iVar10 = *(int *)(lVar6 + 0x330) + 1;
    if ((int)(*(uint *)(lVar6 + 0x334) & 0x7fffffff) < iVar10) {
      FUN_141807bca((longlong *)(lVar6 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    iVar1 = *(int *)(lVar6 + 0x330);
    lVar3 = *(longlong *)(lVar6 + 0x328);
    *(int *)(lVar6 + 0x330) = iVar10;
    *(short *)(lVar3 + (longlong)iVar1 * 4) = sVar9;
    *(undefined2 *)(lVar3 + 2 + (longlong)iVar1 * 4) = uVar4;
    sVar9 = (short)local_res8;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar8);
    }
  }
  local_res10 = 0x40;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"FireProcessingRunCommittedTask");
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0xffffffff;
    *puVar8 = hkaiWorldProcessingTasks::FireProcessingRunCommittedTask::vftable;
    puVar8[4] = hkaiWorldProcessingTasks::FireProcessingRunCommittedTask::vftable;
    puVar8[2] = 1;
    puVar8[6] = param_2;
  }
  FUN_144be3b70(*param_1,&local_res8,puVar8,0x40);
  if ((sVar9 != -1) && (sVar5 = (short)local_res8, (short)local_res8 != -1)) {
    lVar6 = *param_1;
    iVar10 = *(int *)(lVar6 + 0x330) + 1;
    if ((int)(*(uint *)(lVar6 + 0x334) & 0x7fffffff) < iVar10) {
      FUN_141807bca((longlong *)(lVar6 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    iVar1 = *(int *)(lVar6 + 0x330);
    lVar3 = *(longlong *)(lVar6 + 0x328);
    *(int *)(lVar6 + 0x330) = iVar10;
    *(short *)(lVar3 + (longlong)iVar1 * 4) = sVar9;
    *(short *)(lVar3 + 2 + (longlong)iVar1 * 4) = sVar5;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar8);
  }
  if (lVar2 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar2,&local_48);
  }
  return param_1;
}



// FUNCTION 144ca9120 FUN_144ca9120 body=185 status=ok
// SIG undefined FUN_144ca9120(void)

void FUN_144ca9120(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3,param_4);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144ca91e0 FUN_144ca91e0 body=165 status=ok
// SIG undefined FUN_144ca91e0(void)

void FUN_144ca91e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144ca9290 FUN_144ca9290 body=319 status=ok
// SIG undefined FUN_144ca9290(void)

void FUN_144ca9290(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_98;
  char *local_90;
  undefined **local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [64];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_98 = "TtFireProcessingRunStartingTask";
    local_90 = "";
    FUN_144b3f370(lVar1,&local_98);
  }
  FUN_144c6d6a0(local_70);
  local_78[0] = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  FUN_14475e23c(local_70,*(longlong *)(param_1 + 0x10) + 0x28);
  local_88 = `public:_virtual_void___cdecl_hkaiWorldProcessingTasks::FireProcessingRunStartingTask::process(hkTask::Input_const&___ptr64)___ptr64'
             ::__l2::ResponseInterface::vftable;
  local_80 = *(longlong *)(param_1 + 0x10);
  FUN_144ca9120(*(longlong *)(local_80 + 0x18) + 0xf8,*(longlong *)(local_80 + 0x18),local_78,
                &local_88);
  FUN_144c2be80(local_48);
  FUN_144bf90d0(local_68);
  if (lVar1 != 0) {
    local_98 = "Et";
    local_90 = "";
    FUN_144b3f260(lVar1,&local_98);
  }
  return;
}



// FUNCTION 144ca93d0 FUN_144ca93d0 body=8 status=ok
// SIG undefined FUN_144ca93d0(void)

char * FUN_144ca93d0(void)

{
  return "FireProcessingRunStarting";
}



// FUNCTION 144ca93e0 FUN_144ca93e0 body=101 status=ok
// SIG undefined FUN_144ca93e0(void)

undefined8 * FUN_144ca93e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144ca9450 FUN_144ca9450 body=16 status=ok
// SIG undefined FUN_144ca9450(void)

undefined8 FUN_144ca9450(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x140);
}



// FUNCTION 144ca9460 FUN_144ca9460 body=13 status=ok
// SIG undefined FUN_144ca9460(void)

void FUN_144ca9460(longlong param_1)

{
  FUN_144faac50(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
  return;
}



// FUNCTION 144ca9470 FUN_144ca9470 body=13 status=ok
// SIG undefined FUN_144ca9470(void)

void FUN_144ca9470(longlong param_1)

{
  FUN_144faad80(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
  return;
}



// FUNCTION 144ca9480 FUN_144ca9480 body=552 status=ok
// SIG undefined FUN_144ca9480(void)

undefined8 * FUN_144ca9480(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined8 local_res8;
  char *local_28;
  char *local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_28 = "TthkaiWorldProcessingTasks::makeMainPhaseTaskGraph";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_res8 = 0x4c8;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkTaskGraph");
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144be3930(lVar2);
  }
  *param_1 = uVar3;
  uVar5 = 0xffff;
  if (*(char *)(param_2 + 0x28) != '\0') {
    FUN_144be90e0(0xb289c3cd);
    puVar4 = (undefined2 *)
             FUN_145018f70(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x88),0xffff);
    uVar5 = *puVar4;
    FUN_144be90e0(0xd07b477f);
    if (*(char *)(param_2 + 0xa8) == '\0') {
      FUN_144be90e0(0x4816ae3c);
      puVar4 = (undefined2 *)
               FUN_145019ca0(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x88),uVar5);
      uVar5 = *puVar4;
      FUN_144be90e0(0x7e7f2668);
    }
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    FUN_144be90e0(0x3428a163);
    puVar4 = (undefined2 *)FUN_145023790(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x90),uVar5)
    ;
    uVar5 = *puVar4;
    FUN_144be90e0(0xda99b7f4);
  }
  if (*(char *)(param_2 + 0x70) != '\0') {
    FUN_144be90e0(0x20aaabff);
    puVar4 = (undefined2 *)FUN_14501f850(&local_res8,*param_1,*(undefined8 *)(param_2 + 0x98),uVar5)
    ;
    uVar5 = *puVar4;
    FUN_144be90e0(0x8226ccdb);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_144be90e0(0x84d4d86);
    FUN_145021e40(&local_res8,*param_1,*(undefined8 *)(param_2 + 0xa0),uVar5);
    FUN_144be90e0(0xcf046760);
  }
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return param_1;
}



// FUNCTION 144ca96b0 FUN_144ca96b0 body=256 status=ok
// SIG undefined FUN_144ca96b0(void)

void FUN_144ca96b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtJoinPathRequestManager";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144fab7d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x230),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20) = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144ca97b0 FUN_144ca97b0 body=8 status=ok
// SIG undefined FUN_144ca97b0(void)

char * FUN_144ca97b0(void)

{
  return "JoinPathRequestManager";
}



// FUNCTION 144ca97c0 FUN_144ca97c0 body=101 status=ok
// SIG undefined FUN_144ca97c0(void)

undefined8 * FUN_144ca97c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144ca9830 FUN_144ca9830 body=297 status=ok
// SIG undefined FUN_144ca9830(void)

void FUN_144ca9830(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_88;
  char *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [64];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_88 = "TtFireProcessingRunCommitted";
    local_80 = "";
    FUN_144b3f370(lVar1,&local_88);
  }
  FUN_144c6d6a0(local_70);
  FUN_14475e23c(local_70,*(longlong *)(param_1 + 0x10) + 0x28);
  local_78[0] = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_144ca91e0(lVar2 + 0x118,lVar2,local_78);
  FUN_144c2be80(local_48);
  FUN_144bf90d0(local_68);
  if (lVar1 != 0) {
    local_88 = "Et";
    local_80 = "";
    FUN_144b3f260(lVar1,&local_88);
  }
  return;
}



// FUNCTION 144ca9960 FUN_144ca9960 body=8 status=ok
// SIG undefined FUN_144ca9960(void)

char * FUN_144ca9960(void)

{
  return "FireProcessingRunCommitted";
}



// FUNCTION 144ca9970 FUN_144ca9970 body=101 status=ok
// SIG undefined FUN_144ca9970(void)

undefined8 * FUN_144ca9970(undefined8 *param_1,ulonglong param_2)

{
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144ca99d8 FUN_144ca99d8 body=9 status=ok
// SIG undefined FUN_144ca99d8(void)

void FUN_144ca99d8(longlong param_1)

{
  FUN_144ca93e0(param_1 + -0x20);
  return;
}



// FUNCTION 144ca99e4 FUN_144ca99e4 body=9 status=ok
// SIG undefined FUN_144ca99e4(void)

void FUN_144ca99e4(longlong param_1)

{
  FUN_144ca97c0(param_1 + -0x20);
  return;
}



// FUNCTION 144ca99f0 FUN_144ca99f0 body=9 status=ok
// SIG undefined FUN_144ca99f0(void)

void FUN_144ca99f0(longlong param_1)

{
  FUN_144ca9970(param_1 + -0x20);
  return;
}



// FUNCTION 144ca9a00 FUN_144ca9a00 body=84 status=ok
// SIG undefined FUN_144ca9a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144ca9a00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 4) = 0x3dcccccd;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *param_1 = hkaiSilhouetteGenerator::vftable;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = _DAT_14c6dae78;
  param_1[6] = _DAT_14c6dae70;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 144ca9a60 FUN_144ca9a60 body=49 status=ok
// SIG undefined FUN_144ca9a60(void)

void FUN_144ca9a60(undefined8 *param_1)

{
  *param_1 = hkaiSilhouetteGenerator::vftable;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144ca9aa0 FUN_144ca9aa0 body=3 status=ok
// SIG undefined FUN_144ca9aa0(void)

undefined1 FUN_144ca9aa0(void)

{
  return 1;
}



// FUNCTION 144ca9ab0 FUN_144ca9ab0 body=12 status=ok
// SIG undefined FUN_144ca9ab0(void)

void FUN_144ca9ab0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x40) = *param_2 + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = fVar1 + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = fVar2 + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x4c) = fVar3 + *(float *)(param_1 + 0x4c);
  return;
}



// FUNCTION 144ca9ac0 FUN_144ca9ac0 body=201 status=ok
// SIG undefined FUN_144ca9ac0(void)

undefined8 FUN_144ca9ac0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  fVar1 = *(float *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x30))) {
    auVar4._4_4_ = -(uint)(ABS(param_3[1] - *(float *)(lVar2 + 100)) <= fVar1);
    auVar4._0_4_ = -(uint)(ABS(*param_3 - *(float *)(lVar2 + 0x60)) <= fVar1);
    auVar4._8_4_ = -(uint)(ABS(param_3[2] - *(float *)(lVar2 + 0x68)) <= fVar1);
    auVar4._12_4_ = -(uint)(ABS(param_3[3] - *(float *)(lVar2 + 0x6c)) <= fVar1);
    uVar5 = movmskps((int)param_3,auVar4);
    if (((char)(uVar5 & 7) == '\a') &&
       ((fVar8 = *param_2 * *(float *)(lVar2 + 0x40), fVar9 = param_2[1] * *(float *)(lVar2 + 0x44),
        fVar10 = param_2[2] * *(float *)(lVar2 + 0x48),
        fVar11 = param_2[3] * *(float *)(lVar2 + 0x4c), fVar12 = fVar9 + fVar8,
        fVar8 = fVar8 + fVar9, fVar9 = fVar11 + fVar10, fVar10 = fVar10 + fVar11,
        auVar3._4_4_ = -(uint)(ABS(param_2[1] -
                                   (float)((uint)*(float *)(lVar2 + 0x44) ^
                                          (uint)(fVar10 + fVar8 < 0.0) * -0x80000000)) <= fVar1),
        auVar3._0_4_ = -(uint)(ABS(*param_2 -
                                   (float)((uint)*(float *)(lVar2 + 0x40) ^
                                          (uint)(fVar9 + fVar12 < 0.0) * -0x80000000)) <= fVar1),
        auVar3._8_4_ = -(uint)(ABS(param_2[2] -
                                   (float)((uint)*(float *)(lVar2 + 0x48) ^
                                          (uint)(fVar12 + fVar9 < 0.0) * -0x80000000)) <= fVar1),
        auVar3._12_4_ =
             -(uint)(ABS(param_2[3] -
                         (float)((uint)*(float *)(lVar2 + 0x4c) ^
                                (uint)(fVar8 + fVar10 < 0.0) * -0x80000000)) <= fVar1),
        iVar6 = movmskps(uVar5 & 7,auVar3), iVar6 == 0xf &&
        (auVar13._4_4_ = -(uint)(ABS(param_2[5] - *(float *)(lVar2 + 0x54)) <= fVar1),
        auVar13._0_4_ = -(uint)(ABS(param_2[4] - *(float *)(lVar2 + 0x50)) <= fVar1),
        auVar13._8_4_ = -(uint)(ABS(param_2[6] - *(float *)(lVar2 + 0x58)) <= fVar1),
        auVar13._12_4_ = -(uint)(ABS(param_2[7] - *(float *)(lVar2 + 0x5c)) <= fVar1),
        uVar7 = movmskps(0xf,auVar13), ((byte)uVar7 & 7) == 7)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ca9b90 FUN_144ca9b90 body=344 status=ok
// SIG undefined FUN_144ca9b90(void)

undefined1 (*) [16]
FUN_144ca9b90(longlong *param_1,undefined1 (*param_2) [16],float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined1 auVar17 [16];
  
  fVar8 = (param_4[4] - param_3[4]) * (param_4[4] - param_3[4]);
  fVar10 = (param_4[5] - param_3[5]) * (param_4[5] - param_3[5]);
  fVar11 = (param_4[6] - param_3[6]) * (param_4[6] - param_3[6]);
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar8;
  auVar4._8_4_ = fVar8;
  auVar4._12_4_ = fVar8;
  auVar5._4_4_ = fVar10 + fVar8 + fVar11;
  auVar5._0_4_ = fVar10 + fVar8 + fVar11;
  auVar5._8_4_ = fVar10 + fVar8 + fVar11;
  auVar5._12_4_ = fVar10 + fVar8 + fVar11;
  auVar5 = sqrtps(auVar4,auVar5);
  fVar8 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar2 = param_4[3];
  fVar3 = param_3[3];
  fVar12 = -*param_3;
  fVar13 = -param_3[1];
  fVar14 = -param_3[2];
  *param_2 = auVar5;
  fVar15 = (fVar10 * fVar14 - fVar11 * fVar13) - (fVar8 * fVar3 + fVar2 * fVar12);
  fVar18 = (fVar11 * fVar12 - fVar10 * fVar3) - (fVar2 * fVar13 + fVar8 * fVar14);
  auVar17._12_4_ = (fVar2 * fVar3 - fVar8 * fVar12) - (fVar11 * fVar14 + fVar10 * fVar13);
  fVar16 = -fVar15;
  fVar19 = -fVar18;
  auVar17._0_8_ = CONCAT44(fVar18,fVar15) ^ 0x8000000080000000;
  auVar17._8_4_ = -((fVar8 * fVar13 - fVar2 * fVar14) - (fVar10 * fVar12 + fVar11 * fVar3));
  fVar16 = fVar16 * fVar16;
  fVar19 = fVar19 * fVar19;
  fVar8 = fVar19 + fVar16;
  fVar16 = fVar16 + fVar19;
  fVar10 = auVar17._12_4_ * auVar17._12_4_ + auVar17._8_4_ * auVar17._8_4_;
  fVar11 = auVar17._8_4_ * auVar17._8_4_ + auVar17._12_4_ * auVar17._12_4_;
  auVar6._0_4_ = fVar10 + fVar8;
  auVar6._4_4_ = fVar11 + fVar16;
  auVar6._8_4_ = fVar8 + fVar10;
  auVar6._12_4_ = fVar16 + fVar11;
  if (auVar6._0_4_ == 0.0) {
    local_58 = ZEXT816(0);
  }
  else {
    auVar5 = sqrtps(auVar6,auVar6);
    local_58 = divps(auVar17,auVar5);
  }
  FUN_144bfc910(local_58,&local_48);
  (**(code **)(*param_1 + 0x50))(param_1,&local_38);
  local_28 = local_28 * local_28;
  fStack_24 = fStack_24 * fStack_24;
  fStack_20 = fStack_20 * fStack_20;
  local_38 = local_38 * local_38;
  fStack_34 = fStack_34 * fStack_34;
  fStack_30 = fStack_30 * fStack_30;
  auVar7._4_4_ = local_38;
  auVar7._0_4_ = local_38;
  auVar7._8_4_ = local_38;
  auVar7._12_4_ = local_38;
  auVar9._0_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._4_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._8_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._12_4_ = fStack_34 + local_38 + fStack_30;
  auVar1._4_4_ = fStack_24 + local_28 + fStack_20;
  auVar1._0_4_ = fStack_24 + local_28 + fStack_20;
  auVar1._8_4_ = fStack_24 + local_28 + fStack_20;
  auVar1._12_4_ = fStack_24 + local_28 + fStack_20;
  auVar5 = maxps(auVar9,auVar1);
  auVar5 = sqrtps(auVar7,auVar5);
  fVar8 = *(float *)(*param_2 + 4);
  fVar10 = *(float *)(*param_2 + 8);
  fVar11 = *(float *)(*param_2 + 0xc);
  *(float *)*param_2 = local_48 * auVar5._0_4_ + *(float *)*param_2;
  *(float *)(*param_2 + 4) = fStack_44 * auVar5._4_4_ + fVar8;
  *(float *)(*param_2 + 8) = fStack_40 * auVar5._8_4_ + fVar10;
  *(float *)(*param_2 + 0xc) = fStack_3c * auVar5._12_4_ + fVar11;
  return param_2;
}



// FUNCTION 144ca9cf0 FUN_144ca9cf0 body=390 status=ok
// SIG undefined FUN_144ca9cf0(void)

bool FUN_144ca9cf0(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar20 [16];
  undefined1 local_78 [16];
  float local_68 [4];
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined1 auVar17 [16];
  
  fVar1 = *(float *)(param_1 + 4);
  fVar7 = (param_3[4] - param_2[4]) * (param_3[4] - param_2[4]);
  fVar10 = (param_3[5] - param_2[5]) * (param_3[5] - param_2[5]);
  fVar11 = (param_3[6] - param_2[6]) * (param_3[6] - param_2[6]);
  auVar20._4_4_ = fVar10 + fVar7 + fVar11;
  auVar20._0_4_ = fVar10 + fVar7 + fVar11;
  auVar20._8_4_ = fVar10 + fVar7 + fVar11;
  auVar20._12_4_ = fVar10 + fVar7 + fVar11;
  auVar20 = sqrtps(unaff_XMM8,auVar20);
  bVar2 = fVar1 <= auVar20._0_4_;
  if (!bVar2) {
    fVar7 = *param_3;
    fVar10 = param_3[1];
    fVar11 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = param_2[3];
    fVar12 = -*param_2;
    fVar13 = -param_2[1];
    fVar14 = -param_2[2];
    fVar15 = (fVar10 * fVar14 - fVar11 * fVar13) - (fVar7 * fVar5 + fVar4 * fVar12);
    fVar18 = (fVar11 * fVar12 - fVar10 * fVar5) - (fVar4 * fVar13 + fVar7 * fVar14);
    auVar17._12_4_ = (fVar4 * fVar5 - fVar7 * fVar12) - (fVar11 * fVar14 + fVar10 * fVar13);
    fVar16 = -fVar15;
    fVar19 = -fVar18;
    auVar17._0_8_ = CONCAT44(fVar18,fVar15) ^ 0x8000000080000000;
    auVar17._8_4_ = -((fVar7 * fVar13 - fVar4 * fVar14) - (fVar10 * fVar12 + fVar11 * fVar5));
    fVar16 = fVar16 * fVar16;
    fVar19 = fVar19 * fVar19;
    fVar7 = fVar19 + fVar16;
    fVar16 = fVar16 + fVar19;
    fVar10 = auVar17._12_4_ * auVar17._12_4_ + auVar17._8_4_ * auVar17._8_4_;
    fVar11 = auVar17._8_4_ * auVar17._8_4_ + auVar17._12_4_ * auVar17._12_4_;
    auVar9._0_4_ = fVar10 + fVar7;
    auVar9._4_4_ = fVar11 + fVar16;
    auVar9._8_4_ = fVar7 + fVar10;
    auVar9._12_4_ = fVar16 + fVar11;
    if (auVar9._0_4_ == 0.0) {
      local_78 = ZEXT816(0);
    }
    else {
      auVar9 = sqrtps(auVar9,auVar9);
      local_78 = divps(auVar17,auVar9);
    }
    FUN_144bfc910(local_78,local_68);
    (**(code **)(*param_1 + 0x50))(param_1,&local_58);
    local_48 = local_48 * local_48;
    fStack_44 = fStack_44 * fStack_44;
    fStack_40 = fStack_40 * fStack_40;
    local_58 = local_58 * local_58;
    fStack_54 = fStack_54 * fStack_54;
    fStack_50 = fStack_50 * fStack_50;
    auVar6._4_4_ = local_58;
    auVar6._0_4_ = local_58;
    auVar6._8_4_ = local_58;
    auVar6._12_4_ = local_58;
    auVar8._0_4_ = fStack_54 + local_58 + fStack_50;
    auVar8._4_4_ = fStack_54 + local_58 + fStack_50;
    auVar8._8_4_ = fStack_54 + local_58 + fStack_50;
    auVar8._12_4_ = fStack_54 + local_58 + fStack_50;
    auVar3._4_4_ = fStack_44 + local_48 + fStack_40;
    auVar3._0_4_ = fStack_44 + local_48 + fStack_40;
    auVar3._8_4_ = fStack_44 + local_48 + fStack_40;
    auVar3._12_4_ = fStack_44 + local_48 + fStack_40;
    auVar9 = maxps(auVar8,auVar3);
    auVar9 = sqrtps(auVar6,auVar9);
    bVar2 = fVar1 <= local_68[0] * auVar9._0_4_ + auVar20._0_4_;
  }
  return bVar2;
}



// FUNCTION 144ca9e80 FUN_144ca9e80 body=93 status=ok
// SIG undefined FUN_144ca9e80(void)

void FUN_144ca9e80(undefined1 (*param_1) [16],float *param_2,float *param_3,float *param_4,
                  uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = *param_1;
  auVar2 = param_1[1];
  auVar7 = auVar1;
  auVar8 = auVar2;
  if ((param_5 & 2) != 0) {
    fVar3 = ABS(*param_4 * param_2[8]) + ABS(*param_4 * param_2[4]);
    fVar4 = ABS(param_4[1] * param_2[9]) + ABS(param_4[1] * param_2[5]);
    fVar5 = ABS(param_4[2] * param_2[10]) + ABS(param_4[2] * param_2[6]);
    fVar6 = ABS(param_4[3] * param_2[0xb]) + ABS(param_4[3] * param_2[7]);
    auVar7._0_4_ = auVar1._0_4_ - fVar3;
    auVar7._4_4_ = auVar1._4_4_ - fVar4;
    auVar7._8_4_ = auVar1._8_4_ - fVar5;
    auVar7._12_4_ = auVar1._12_4_ - fVar6;
    auVar8._0_4_ = auVar2._0_4_ + fVar3;
    auVar8._4_4_ = auVar2._4_4_ + fVar4;
    auVar8._8_4_ = auVar2._8_4_ + fVar5;
    auVar8._12_4_ = auVar2._12_4_ + fVar6;
  }
  if ((param_5 & 1) != 0) {
    fVar3 = (0.0 - *param_3) * *param_2;
    fVar4 = (0.0 - param_3[1]) * param_2[1];
    fVar5 = (0.0 - param_3[2]) * param_2[2];
    fVar6 = (0.0 - param_3[3]) * param_2[3];
    auVar2._4_4_ = fVar4 + auVar7._4_4_;
    auVar2._0_4_ = fVar3 + auVar7._0_4_;
    auVar2._8_4_ = fVar5 + auVar7._8_4_;
    auVar2._12_4_ = fVar6 + auVar7._12_4_;
    auVar7 = minps(auVar7,auVar2);
    auVar1._4_4_ = fVar4 + auVar8._4_4_;
    auVar1._0_4_ = fVar3 + auVar8._0_4_;
    auVar1._8_4_ = fVar5 + auVar8._8_4_;
    auVar1._12_4_ = fVar6 + auVar8._12_4_;
    auVar8 = maxps(auVar8,auVar1);
  }
  param_1[1] = auVar8;
  *param_1 = auVar7;
  return;
}



// FUNCTION 144ca9ee0 FUN_144ca9ee0 body=18 status=ok
// SIG undefined FUN_144ca9ee0(void)

undefined8 * FUN_144ca9ee0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fdb90;
  return param_2;
}



// FUNCTION 144ca9f00 FUN_144ca9f00 body=230 status=ok
// SIG undefined FUN_144ca9f00(void)

longlong FUN_144ca9f00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_145025480();
  plVar1 = (longlong *)(param_1 + 8);
  if ((longlong *)(param_2 + 8) != plVar1) {
    puVar11 = *(undefined8 **)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 0x10);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar3) {
      FUN_144cac4e0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar10 = (undefined8 *)*plVar1;
    iVar4 = iVar3;
    if (*(int *)(param_1 + 0x10) < iVar3) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if ((puVar10 != puVar11) && (lVar8 = (longlong)iVar4, 0 < iVar4)) {
      puVar7 = puVar10;
      do {
        puVar2 = (undefined8 *)(((longlong)puVar11 - (longlong)puVar10) + (longlong)puVar7);
        uVar5 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar5;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 2;
      } while (lVar8 != 0);
    }
    puVar11 = puVar11 + (longlong)iVar4 * 2;
    if (0 < iVar3 - iVar4) {
      uVar9 = (ulonglong)(uint)(iVar3 - iVar4);
      puVar10 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar10 = uVar5;
          puVar10[1] = uVar6;
        }
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 2;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  return param_1;
}



// FUNCTION 144ca9ff0 FUN_144ca9ff0 body=170 status=ok
// SIG undefined FUN_144ca9ff0(void)

longlong FUN_144ca9ff0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145025490();
  plVar2 = (longlong *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cab5e0(plVar2,&PTR_vftable_14c6e47a0);
    *plVar1 = *plVar2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *plVar2 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 144caa0a0 FUN_144caa0a0 body=105 status=ok
// SIG undefined FUN_144caa0a0(void)

undefined8 FUN_144caa0a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshEdgeOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cab550(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144caa110 FUN_144caa110 body=102 status=ok
// SIG undefined FUN_144caa110(void)

undefined8 * FUN_144caa110(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshEdgeOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::XyPlane>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144caa180 FUN_144caa180 body=388 status=ok
// SIG undefined FUN_144caa180(void)

void FUN_144caa180(longlong param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  lVar10 = (longlong)(int)uVar9;
  ppuVar1 = (undefined8 **)(param_1 + 8);
  puVar11 = *ppuVar1;
  if ((int)uVar9 < 1) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    uVar9 = 0x80000000;
  }
  else {
    local_28 = (undefined8 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,lVar10 << 4);
    local_20 = uVar9;
  }
  for (puVar8 = local_28; puVar8 != local_28 + lVar10 * 2; puVar8 = puVar8 + 2) {
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
    }
  }
  piVar7 = (int *)*param_2;
  iVar6 = (int)(param_2[1] - (longlong)piVar7 >> 2);
  lVar10 = (longlong)iVar6;
  puVar8 = local_28;
  if (0 < iVar6) {
    do {
      iVar6 = *piVar7;
      piVar7 = piVar7 + 1;
      puVar2 = puVar11 + (longlong)iVar6 * 2;
      uVar3 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar4 = *(undefined4 *)(puVar2 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
      *(undefined4 *)puVar8 = *(undefined4 *)puVar2;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
      *(undefined4 *)(puVar8 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
      lVar10 = lVar10 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar10 != 0);
  }
  puVar11 = local_28;
  local_1c = uVar9;
  if (&local_28 != ppuVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*ppuVar1 != (undefined8 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*ppuVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
    }
    *ppuVar1 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cab5e0(&local_28,&PTR_vftable_14c6e47a0);
    *ppuVar1 = local_28;
    *(uint *)(param_1 + 0x10) = local_20;
    *(uint *)(param_1 + 0x14) = local_1c;
    puVar11 = (undefined8 *)0x0;
    uVar9 = 0;
  }
  if ((-1 < (int)uVar9) && (puVar11 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar11,(ulonglong)(uVar9 & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 144caa310 FUN_144caa310 body=193 status=ok
// SIG undefined FUN_144caa310(void)

void FUN_144caa310(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  
  puVar5 = *(undefined4 **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  lVar11 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (0 < (longlong)iVar3) {
    lVar6 = *param_2;
    puVar12 = puVar5;
    do {
      iVar4 = *(int *)(lVar6 + lVar11 * 4);
      if (-1 < iVar4) {
        uVar7 = puVar12[1];
        uVar8 = puVar12[2];
        uVar9 = puVar12[3];
        puVar2 = puVar5 + (longlong)iVar4 * 4;
        *puVar2 = *puVar12;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
      }
      lVar11 = lVar11 + 1;
      puVar12 = puVar12 + 4;
    } while (lVar11 < iVar3);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_144cac270(plVar1,&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < param_3) {
    lVar11 = *plVar1;
    *(int *)(param_1 + 0x10) = param_3;
    for (puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
        puVar10 != (undefined8 *)((longlong)param_3 * 0x10 + lVar11); puVar10 = puVar10 + 2) {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
      }
    }
  }
  else if (param_3 < iVar3) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144caa3e0 FUN_144caa3e0 body=157 status=ok
// SIG undefined FUN_144caa3e0(void)

void FUN_144caa3e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_2 + 8);
  puVar6 = puVar4 + (longlong)*(int *)(param_2 + 0x10) * 2;
  iVar5 = *(int *)(param_2 + 0x10) + iVar1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar5) {
    FUN_144cac270((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  return;
}



// FUNCTION 144caa480 FUN_144caa480 body=291 status=ok
// SIG undefined FUN_144caa480(void)

void FUN_144caa480(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cab5e0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar6 = (undefined8 *)*plVar1;
    puVar8 = puVar6 + (longlong)*(int *)(param_2 + 0x10) * 2;
    iVar3 = *(int *)(param_1 + 0x10);
    iVar7 = *(int *)(param_2 + 0x10) + iVar3;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
      FUN_144cac270(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
    for (; puVar6 != puVar8; puVar6 = puVar6 + 2) {
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar4;
      }
      puVar5 = puVar5 + 2;
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  return;
}



// FUNCTION 144caa5b0 FUN_144caa5b0 body=144 status=ok
// SIG undefined FUN_144caa5b0(void)

void FUN_144caa5b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 8);
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cac270(plVar1,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < param_2) {
    puVar4 = (undefined8 *)((longlong)param_2 * 0x10 + *plVar1);
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *(int *)(param_1 + 0x10) = param_2;
    if (puVar3 != puVar4) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar4);
      return;
    }
  }
  else if (param_2 < iVar2) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144caa640 FUN_144caa640 body=4 status=ok
// SIG undefined FUN_144caa640(void)

undefined4 FUN_144caa640(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144caa650 FUN_144caa650 body=31 status=ok
// SIG undefined FUN_144caa650(void)

void FUN_144caa650(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cac160(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
    return;
  }
  return;
}



// FUNCTION 144caa670 FUN_144caa670 body=102 status=ok
// SIG undefined FUN_144caa670(void)

void FUN_144caa670(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10) + 1;
  puVar5 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x10);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar6) {
    FUN_144cac160((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar5 = (undefined4 *)((longlong)*(int *)(param_1 + 0x10) * 0x10 + *(longlong *)(param_1 + 8));
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  return;
}



// FUNCTION 144caa6e0 FUN_144caa6e0 body=149 status=ok
// SIG undefined FUN_144caa6e0(void)

longlong FUN_144caa6e0(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144caa780 FUN_144caa780 body=25 status=ok
// SIG undefined FUN_144caa780(void)

bool FUN_144caa780(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  return param_2 == iVar1;
}



// FUNCTION 144caa7a0 FUN_144caa7a0 body=3259 status=ok
// SIG undefined FUN_144caa7a0(void)

ulonglong FUN_144caa7a0(longlong param_1,uint *param_2,byte param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 local_res10 [8];
  longlong local_278;
  longlong lStack_270;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong lStack_210;
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  int local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  if ((char)param_2[0x42] == '\0') {
    uVar21 = (ulonglong)(int)*param_2;
    cVar12 = '\0';
    if (*(char *)((longlong)param_2 + 0x109) == '\0') goto LAB_144caa98a;
    puVar19 = (undefined4 *)
              ((longlong)*(int *)(uVar21 * 0x60 + 0xc + *(longlong *)(param_1 + 0x28)) * 0x60 +
              *(longlong *)(param_1 + 0x28));
    FUN_147e582da(param_1 + 0x38,&local_278,*puVar19);
    local_158 = *(longlong *)(param_2 + 0x22);
    uStack_150 = *(undefined8 *)(param_2 + 0x24);
    local_148 = *(undefined8 *)(param_2 + 0x26);
    uStack_140 = *(undefined8 *)(param_2 + 0x28);
    local_138 = *(longlong *)(param_2 + 0x2a);
    uStack_130 = *(undefined8 *)(param_2 + 0x2c);
    local_128 = *(undefined8 *)(param_2 + 0x2e);
    uStack_120 = *(undefined8 *)(param_2 + 0x30);
    local_118 = *(longlong *)(param_2 + 0x3a);
    lStack_110 = *(longlong *)(param_2 + 0x3c);
    local_108 = *(longlong *)(param_2 + 0x3e);
    lStack_100 = *(longlong *)(param_2 + 0x40);
    local_1f8 = local_278;
    lStack_1f0 = lStack_270;
    local_1d8 = local_258;
    lStack_1d0 = lStack_250;
    local_1b8 = local_218;
    lStack_1b0 = lStack_210;
    local_1e8 = local_268;
    lStack_1e0 = lStack_260;
    local_1c8 = local_248;
    uStack_1c0 = lStack_240;
    cVar11 = FUN_144cab460(&local_1f8,&local_158);
    if (cVar11 == '\0') {
      local_178 = *(longlong *)(param_2 + 0x3a);
      lStack_170 = *(longlong *)(param_2 + 0x3c);
      local_198 = *(longlong *)(param_2 + 0x32);
      uStack_190 = *(undefined8 *)(param_2 + 0x34);
      local_188 = *(undefined8 *)(param_2 + 0x36);
      uStack_180 = *(undefined8 *)(param_2 + 0x38);
      local_168 = *(longlong *)(param_2 + 0x3e);
      lStack_160 = *(longlong *)(param_2 + 0x40);
      local_1d8 = local_218;
      lStack_1d0 = lStack_210;
      local_1c8 = CONCAT44(uStack_204,local_208);
      uStack_1c0 = CONCAT44(uStack_1fc,uStack_200);
      local_1f8 = local_238;
      lStack_1f0 = uStack_230;
      local_1e8 = local_228;
      lStack_1e0 = uStack_220;
      plVar17 = &local_1f8;
      plVar18 = &local_198;
LAB_144caa90b:
      cVar12 = FUN_144cab9d0(plVar17,plVar18);
      if (cVar12 != '\0') {
        local_278 = *(longlong *)(param_2 + 0x22);
        lStack_270 = *(longlong *)(param_2 + 0x24);
        local_268 = *(longlong *)(param_2 + 0x26);
        lStack_260 = *(longlong *)(param_2 + 0x28);
        local_258 = *(longlong *)(param_2 + 0x2a);
        lStack_250 = *(longlong *)(param_2 + 0x2c);
        local_248 = *(longlong *)(param_2 + 0x2e);
        lStack_240 = *(longlong *)(param_2 + 0x30);
        local_238 = *(longlong *)(param_2 + 0x32);
        uStack_230 = *(undefined8 *)(param_2 + 0x34);
        local_228 = *(undefined8 *)(param_2 + 0x36);
        uStack_220 = *(undefined8 *)(param_2 + 0x38);
        local_218 = *(longlong *)(param_2 + 0x3a);
        lStack_210 = *(longlong *)(param_2 + 0x3c);
        local_208 = param_2[0x3e];
        uStack_204 = param_2[0x3f];
        uStack_200 = param_2[0x40];
        uStack_1fc = param_2[0x41];
        puVar14 = (undefined4 *)FUN_144cab7c0(param_1,local_res10,&local_278);
        *puVar19 = *puVar14;
      }
      goto LAB_144caa98a;
    }
LAB_144caafaa:
    uVar1 = *(uint *)(param_1 + 0x60);
    local_78 = *(undefined8 *)(param_2 + 0x22);
    uStack_70 = *(undefined8 *)(param_2 + 0x24);
    local_88._0_4_ = param_2[0x26];
    local_88._4_4_ = param_2[0x27];
    uStack_80._0_4_ = param_2[0x28];
    uStack_80._4_4_ = param_2[0x29];
    iVar13 = uVar1 + 1;
    local_98._0_4_ = param_2[0x2a];
    local_98._4_4_ = param_2[0x2b];
    uStack_90._0_4_ = param_2[0x2c];
    uStack_90._4_4_ = param_2[0x2d];
    local_a8._0_4_ = param_2[0x2e];
    local_a8._4_4_ = param_2[0x2f];
    uStack_a0._0_4_ = param_2[0x30];
    uStack_a0._4_4_ = param_2[0x31];
    local_d8._0_4_ = param_2[0x32];
    local_d8._4_4_ = param_2[0x33];
    uStack_d0._0_4_ = param_2[0x34];
    uStack_d0._4_4_ = param_2[0x35];
    local_e8._0_4_ = param_2[0x36];
    local_e8._4_4_ = param_2[0x37];
    uStack_e0._0_4_ = param_2[0x38];
    uStack_e0._4_4_ = param_2[0x39];
    local_b8._0_4_ = param_2[0x3a];
    local_b8._4_4_ = param_2[0x3b];
    uStack_b0 = param_2[0x3c];
    uStack_ac = param_2[0x3d];
    local_c8._0_4_ = param_2[0x3e];
    local_c8._4_4_ = param_2[0x3f];
    uStack_c0 = param_2[0x40];
    uStack_bc = param_2[0x41];
    if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar13) {
      FUN_144cabf70(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    puVar15 = (undefined8 *)
              ((longlong)*(int *)(param_1 + 0x60) * 0x80 + *(longlong *)(param_1 + 0x58));
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = local_78;
      puVar15[1] = uStack_70;
      *(uint *)(puVar15 + 2) = (uint)local_88;
      *(uint *)((longlong)puVar15 + 0x14) = local_88._4_4_;
      *(uint *)(puVar15 + 3) = (uint)uStack_80;
      *(uint *)((longlong)puVar15 + 0x1c) = uStack_80._4_4_;
      *(uint *)(puVar15 + 4) = (uint)local_98;
      *(uint *)((longlong)puVar15 + 0x24) = local_98._4_4_;
      *(uint *)(puVar15 + 5) = (uint)uStack_90;
      *(uint *)((longlong)puVar15 + 0x2c) = uStack_90._4_4_;
      *(uint *)(puVar15 + 6) = (uint)local_a8;
      *(uint *)((longlong)puVar15 + 0x34) = local_a8._4_4_;
      *(uint *)(puVar15 + 7) = (uint)uStack_a0;
      *(uint *)((longlong)puVar15 + 0x3c) = uStack_a0._4_4_;
      *(uint *)(puVar15 + 8) = (uint)local_d8;
      *(uint *)((longlong)puVar15 + 0x44) = local_d8._4_4_;
      *(uint *)(puVar15 + 9) = (uint)uStack_d0;
      *(uint *)((longlong)puVar15 + 0x4c) = uStack_d0._4_4_;
      *(uint *)(puVar15 + 10) = (uint)local_e8;
      *(uint *)((longlong)puVar15 + 0x54) = local_e8._4_4_;
      *(uint *)(puVar15 + 0xb) = (uint)uStack_e0;
      *(uint *)((longlong)puVar15 + 0x5c) = uStack_e0._4_4_;
      *(uint *)(puVar15 + 0xc) = (uint)local_b8;
      *(uint *)((longlong)puVar15 + 100) = local_b8._4_4_;
      *(uint *)(puVar15 + 0xd) = uStack_b0;
      *(uint *)((longlong)puVar15 + 0x6c) = uStack_ac;
      *(uint *)(puVar15 + 0xe) = (uint)local_c8;
      *(uint *)((longlong)puVar15 + 0x74) = local_c8._4_4_;
      *(uint *)(puVar15 + 0xf) = uStack_c0;
      *(uint *)((longlong)puVar15 + 0x7c) = uStack_bc;
    }
    *(int *)(param_1 + 0x60) = iVar13;
    FUN_144cb3d00(param_1,uVar21 & 0xffffffff,uVar1 | 0x80000000);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(char *)((longlong)param_2 + 0x109) != '\0') {
      local_158 = *(longlong *)(param_2 + 2);
      uStack_150 = *(undefined8 *)(param_2 + 4);
      uVar1 = *param_2;
      local_118 = *(longlong *)(param_2 + 0x1a);
      lStack_110 = *(longlong *)(param_2 + 0x1c);
      local_108 = *(longlong *)(param_2 + 0x1e);
      lStack_100 = *(longlong *)(param_2 + 0x20);
      local_148 = *(undefined8 *)(param_2 + 6);
      uStack_140 = *(undefined8 *)(param_2 + 8);
      local_f8 = (param_3 ^ 1) * 2 + -1;
      puVar19 = (undefined4 *)((longlong)(int)uVar1 * 0x60 + lVar2);
      local_138 = *(longlong *)(param_2 + 10);
      uStack_130 = *(undefined8 *)(param_2 + 0xc);
      local_128 = *(undefined8 *)(param_2 + 0xe);
      uStack_120 = *(undefined8 *)(param_2 + 0x10);
      uVar16 = (longlong)(int)uVar1;
      uVar3 = puVar19[3];
      local_e8 = local_118;
      lVar7 = local_118;
      uStack_e0 = lStack_110;
      lVar8 = lStack_110;
      local_d8 = local_108;
      lVar9 = local_108;
      uStack_d0 = lStack_100;
      lVar10 = lStack_100;
      local_a8 = local_158;
      uStack_a0 = uStack_150;
      local_98 = local_148;
      uStack_90 = uStack_140;
      local_88 = local_138;
      uStack_80 = uStack_130;
      local_78 = local_128;
      uStack_70 = uStack_120;
      lVar20 = local_58;
      lVar4 = local_60;
      lVar5 = local_68;
      lVar6 = local_c8;
      while (local_68 = lVar10, local_60 = lVar9, local_58 = lVar8, local_c8 = lVar7,
            param_4 <= (int)uVar3) {
        uVar21 = (ulonglong)uVar3;
        lVar20 = (longlong)(int)uVar3 * 0x60;
        local_b8 = (undefined4 *)(lVar20 + lVar2);
        FUN_147e582da(param_1 + 0x38,&local_278,*(undefined4 *)(lVar20 + lVar2));
        local_1d8 = local_258;
        lStack_1d0 = lStack_250;
        local_1c8 = local_248;
        uStack_1c0 = lStack_240;
        local_1f8 = local_278;
        lStack_1f0 = lStack_270;
        local_1e8 = local_268;
        lStack_1e0 = lStack_260;
        local_1b8 = local_218;
        lStack_1b0 = lStack_210;
        if (local_68 == CONCAT44(uStack_1fc,uStack_200) &&
            (local_60 == CONCAT44(uStack_204,local_208) &&
            (local_58 == lStack_210 && local_c8 == local_218))) {
          iVar13 = FUN_144cabac0(&local_158,&local_1f8);
          local_d8 = local_108;
          uStack_d0 = lStack_100;
          local_68 = lStack_100;
          local_e8 = local_118;
          uStack_e0 = lStack_110;
          local_60 = local_108;
          local_78 = local_128;
          uStack_70 = uStack_120;
          local_58 = lStack_110;
          local_88 = local_138;
          uStack_80 = uStack_130;
          local_c8 = local_118;
          local_98 = local_148;
          uStack_90 = uStack_140;
          local_a8 = local_158;
          uStack_a0 = uStack_150;
        }
        else {
          local_198 = local_a8;
          uStack_190 = uStack_a0;
          local_188 = local_98;
          uStack_180 = uStack_90;
          local_1d8 = local_218;
          lStack_1d0 = lStack_210;
          local_178 = local_e8;
          lStack_170 = uStack_e0;
          local_168 = local_d8;
          lStack_160 = uStack_d0;
          local_1c8 = CONCAT44(uStack_204,local_208);
          uStack_1c0 = CONCAT44(uStack_1fc,uStack_200);
          iVar13 = FUN_144cab880(&local_198,&local_1f8);
          if (iVar13 == 0) {
            local_1f8 = local_258;
            lStack_1f0 = lStack_250;
            local_1e8 = local_248;
            lStack_1e0 = lStack_240;
            local_1d8 = local_218;
            lStack_1d0 = lStack_210;
            local_1c8 = CONCAT44(uStack_204,local_208);
            uStack_1c0 = CONCAT44(uStack_1fc,uStack_200);
            local_198 = local_88;
            uStack_190 = uStack_80;
            local_188 = local_78;
            uStack_180 = uStack_70;
            local_178 = local_e8;
            lStack_170 = uStack_e0;
            local_168 = local_d8;
            lStack_160 = uStack_d0;
            iVar13 = FUN_144cab880(&local_198,&local_1f8);
          }
        }
        if (iVar13 == local_f8) {
          local_158 = *(longlong *)(param_2 + 0x22);
          uStack_150 = *(undefined8 *)(param_2 + 0x24);
          uVar21 = uVar16 & 0xffffffff;
          local_148 = *(undefined8 *)(param_2 + 0x26);
          uStack_140 = *(undefined8 *)(param_2 + 0x28);
          cVar12 = '\x01';
          local_138 = *(longlong *)(param_2 + 0x2a);
          uStack_130 = *(undefined8 *)(param_2 + 0x2c);
          local_128 = *(undefined8 *)(param_2 + 0x2e);
          uStack_120 = *(undefined8 *)(param_2 + 0x30);
          local_118 = *(longlong *)(param_2 + 0x3a);
          lStack_110 = *(longlong *)(param_2 + 0x3c);
          local_108 = *(longlong *)(param_2 + 0x3e);
          lStack_100 = *(longlong *)(param_2 + 0x40);
          local_1f8 = local_278;
          lStack_1f0 = lStack_270;
          local_1d8 = local_258;
          lStack_1d0 = lStack_250;
          local_1c8 = local_248;
          uStack_1c0 = lStack_240;
          local_1b8 = local_218;
          lStack_1b0 = lStack_210;
          local_1e8 = local_268;
          lStack_1e0 = lStack_260;
          cVar11 = FUN_144cab460(&local_1f8,&local_158);
          if (cVar11 != '\0') goto LAB_144caafaa;
          local_1d8 = *(longlong *)(param_2 + 0x3a);
          lStack_1d0 = *(longlong *)(param_2 + 0x3c);
          local_1f8 = *(longlong *)(param_2 + 0x32);
          lStack_1f0 = *(longlong *)(param_2 + 0x34);
          local_1e8 = *(longlong *)(param_2 + 0x36);
          lStack_1e0 = *(longlong *)(param_2 + 0x38);
          local_1c8 = *(longlong *)(param_2 + 0x3e);
          uStack_1c0 = *(longlong *)(param_2 + 0x40);
          local_178 = local_218;
          lStack_170 = lStack_210;
          local_168 = CONCAT44(uStack_204,local_208);
          lStack_160 = CONCAT44(uStack_1fc,uStack_200);
          local_198 = local_238;
          uStack_190 = uStack_230;
          local_188 = local_228;
          uStack_180 = uStack_220;
          cVar12 = FUN_144cab9d0(&local_198,&local_1f8);
          if (cVar12 != '\0') {
            local_278 = *(longlong *)(param_2 + 0x22);
            lStack_270 = *(longlong *)(param_2 + 0x24);
            local_268 = *(longlong *)(param_2 + 0x26);
            lStack_260 = *(longlong *)(param_2 + 0x28);
            local_258 = *(longlong *)(param_2 + 0x2a);
            lStack_250 = *(longlong *)(param_2 + 0x2c);
            local_248 = *(longlong *)(param_2 + 0x2e);
            lStack_240 = *(longlong *)(param_2 + 0x30);
            local_238 = *(longlong *)(param_2 + 0x32);
            uStack_230 = *(undefined8 *)(param_2 + 0x34);
            local_228 = *(undefined8 *)(param_2 + 0x36);
            uStack_220 = *(undefined8 *)(param_2 + 0x38);
            local_218 = *(longlong *)(param_2 + 0x3a);
            lStack_210 = *(longlong *)(param_2 + 0x3c);
            local_208 = param_2[0x3e];
            uStack_204 = param_2[0x3f];
            uStack_200 = param_2[0x40];
            uStack_1fc = param_2[0x41];
            puVar19 = (undefined4 *)FUN_144cab7c0(param_1,local_res10,&local_278);
            *local_b8 = *puVar19;
          }
          goto LAB_144cab0cb;
        }
        if (iVar13 == 0) {
          cVar12 = '\0';
          puVar19 = (undefined4 *)
                    ((longlong)(int)local_b8[3] * 0x60 + *(longlong *)(param_1 + 0x28));
          FUN_147e582da(param_1 + 0x38,&local_278,*puVar19);
          local_158 = *(longlong *)(param_2 + 0x22);
          uStack_150 = *(undefined8 *)(param_2 + 0x24);
          local_148 = *(undefined8 *)(param_2 + 0x26);
          uStack_140 = *(undefined8 *)(param_2 + 0x28);
          local_138 = *(longlong *)(param_2 + 0x2a);
          uStack_130 = *(undefined8 *)(param_2 + 0x2c);
          local_128 = *(undefined8 *)(param_2 + 0x2e);
          uStack_120 = *(undefined8 *)(param_2 + 0x30);
          local_118 = *(longlong *)(param_2 + 0x3a);
          lStack_110 = *(longlong *)(param_2 + 0x3c);
          local_108 = *(longlong *)(param_2 + 0x3e);
          lStack_100 = *(longlong *)(param_2 + 0x40);
          local_1f8 = local_278;
          lStack_1f0 = lStack_270;
          local_1d8 = local_258;
          lStack_1d0 = lStack_250;
          local_1b8 = local_218;
          lStack_1b0 = lStack_210;
          local_1e8 = local_268;
          lStack_1e0 = lStack_260;
          local_1c8 = local_248;
          uStack_1c0 = lStack_240;
          cVar11 = FUN_144cab460(&local_1f8,&local_158);
          if (cVar11 != '\0') goto LAB_144caafaa;
          local_1d8 = *(longlong *)(param_2 + 0x3a);
          lStack_1d0 = *(longlong *)(param_2 + 0x3c);
          plVar18 = &local_1f8;
          local_1f8 = *(longlong *)(param_2 + 0x32);
          lStack_1f0 = *(longlong *)(param_2 + 0x34);
          local_1e8 = *(longlong *)(param_2 + 0x36);
          lStack_1e0 = *(longlong *)(param_2 + 0x38);
          local_1c8 = *(longlong *)(param_2 + 0x3e);
          uStack_1c0 = *(longlong *)(param_2 + 0x40);
          local_198 = local_238;
          uStack_190 = uStack_230;
          local_188 = local_228;
          uStack_180 = uStack_220;
          local_178 = local_218;
          lStack_170 = lStack_210;
          local_168 = CONCAT44(uStack_204,local_208);
          lStack_160 = CONCAT44(uStack_1fc,uStack_200);
          plVar17 = &local_198;
          goto LAB_144caa90b;
        }
        lVar2 = *(longlong *)(param_1 + 0x28);
        puVar19 = (undefined4 *)(lVar20 + lVar2);
        uVar1 = uVar3;
        uVar16 = uVar21;
        lVar7 = local_c8;
        lVar8 = local_58;
        lVar9 = local_60;
        lVar10 = local_68;
        lVar20 = local_58;
        lVar4 = local_60;
        lVar5 = local_68;
        lVar6 = local_c8;
        uVar3 = puVar19[3];
      }
      uVar21 = (ulonglong)uVar1;
      local_c8 = lVar6;
      local_68 = lVar5;
      local_60 = lVar4;
      local_58 = lVar20;
      FUN_147e582da(param_1 + 0x38,&local_278,*puVar19);
      local_158 = *(longlong *)(param_2 + 2);
      uStack_150 = *(undefined8 *)(param_2 + 4);
      local_148 = *(undefined8 *)(param_2 + 6);
      uStack_140 = *(undefined8 *)(param_2 + 8);
      local_138 = *(longlong *)(param_2 + 10);
      uStack_130 = *(undefined8 *)(param_2 + 0xc);
      local_128 = *(undefined8 *)(param_2 + 0xe);
      uStack_120 = *(undefined8 *)(param_2 + 0x10);
      local_118 = *(longlong *)(param_2 + 0x1a);
      lStack_110 = *(longlong *)(param_2 + 0x1c);
      local_108 = *(longlong *)(param_2 + 0x1e);
      lStack_100 = *(longlong *)(param_2 + 0x20);
      local_1f8 = local_278;
      lStack_1f0 = lStack_270;
      local_1d8 = local_258;
      lStack_1d0 = lStack_250;
      local_1b8 = local_218;
      lStack_1b0 = lStack_210;
      local_1e8 = local_268;
      lStack_1e0 = lStack_260;
      local_1c8 = local_248;
      uStack_1c0 = lStack_240;
      cVar12 = FUN_144cab460(&local_1f8,&local_158);
      if (cVar12 == '\0') {
        local_1d8 = *(longlong *)(param_2 + 0x1a);
        lStack_1d0 = *(longlong *)(param_2 + 0x1c);
        local_1f8 = *(longlong *)(param_2 + 0x12);
        lStack_1f0 = *(longlong *)(param_2 + 0x14);
        local_1e8 = *(longlong *)(param_2 + 0x16);
        lStack_1e0 = *(longlong *)(param_2 + 0x18);
        local_1c8 = *(longlong *)(param_2 + 0x1e);
        uStack_1c0 = *(longlong *)(param_2 + 0x20);
        local_178 = local_218;
        lStack_170 = lStack_210;
        local_168 = CONCAT44(uStack_204,local_208);
        lStack_160 = CONCAT44(uStack_1fc,uStack_200);
        local_198 = local_238;
        uStack_190 = uStack_230;
        local_188 = local_228;
        uStack_180 = uStack_220;
        cVar11 = FUN_144cab9d0(&local_198,&local_1f8);
        if (cVar11 != '\0') {
          local_278 = *(longlong *)(param_2 + 2);
          lStack_270 = *(longlong *)(param_2 + 4);
          local_268 = *(longlong *)(param_2 + 6);
          lStack_260 = *(longlong *)(param_2 + 8);
          local_258 = *(longlong *)(param_2 + 10);
          lStack_250 = *(longlong *)(param_2 + 0xc);
          local_248 = *(longlong *)(param_2 + 0xe);
          lStack_240 = *(longlong *)(param_2 + 0x10);
          local_238 = *(longlong *)(param_2 + 0x12);
          uStack_230 = *(undefined8 *)(param_2 + 0x14);
          local_228 = *(undefined8 *)(param_2 + 0x16);
          uStack_220 = *(undefined8 *)(param_2 + 0x18);
          local_218 = *(longlong *)(param_2 + 0x1a);
          lStack_210 = *(longlong *)(param_2 + 0x1c);
          local_208 = param_2[0x1e];
          uStack_204 = param_2[0x1f];
          uStack_200 = param_2[0x20];
          uStack_1fc = param_2[0x21];
          puVar14 = (undefined4 *)FUN_144cab7c0(param_1,local_res10,&local_278);
          *puVar19 = *puVar14;
        }
      }
      goto LAB_144caafaa;
    }
    uVar21 = (ulonglong)(int)*param_2;
    puVar19 = (undefined4 *)(uVar21 * 0x60 + lVar2);
    uVar1 = puVar19[3];
    while (param_4 <= (int)uVar1) {
      uVar21 = (ulonglong)uVar1;
      puVar19 = (undefined4 *)((longlong)(int)uVar1 * 0x60 + lVar2);
      uVar1 = puVar19[3];
    }
    if ((uint)uVar21 == *param_2) {
      cVar12 = '\x01';
    }
    else {
      FUN_147e582da(param_1 + 0x38,&local_278,*puVar19);
      local_158 = *(longlong *)(param_2 + 2);
      uStack_150 = *(undefined8 *)(param_2 + 4);
      local_148 = *(undefined8 *)(param_2 + 6);
      uStack_140 = *(undefined8 *)(param_2 + 8);
      local_138 = *(longlong *)(param_2 + 10);
      uStack_130 = *(undefined8 *)(param_2 + 0xc);
      local_128 = *(undefined8 *)(param_2 + 0xe);
      uStack_120 = *(undefined8 *)(param_2 + 0x10);
      local_118 = *(longlong *)(param_2 + 0x1a);
      lStack_110 = *(longlong *)(param_2 + 0x1c);
      local_108 = *(longlong *)(param_2 + 0x1e);
      lStack_100 = *(longlong *)(param_2 + 0x20);
      local_1f8 = local_278;
      lStack_1f0 = lStack_270;
      local_1d8 = local_258;
      lStack_1d0 = lStack_250;
      local_1b8 = local_218;
      lStack_1b0 = lStack_210;
      local_1e8 = local_268;
      lStack_1e0 = lStack_260;
      local_1c8 = local_248;
      uStack_1c0 = lStack_240;
      cVar12 = FUN_144cab460(&local_1f8,&local_158);
      if (cVar12 == '\0') {
        local_1d8 = *(longlong *)(param_2 + 0x1a);
        lStack_1d0 = *(longlong *)(param_2 + 0x1c);
        local_1f8 = *(longlong *)(param_2 + 0x12);
        lStack_1f0 = *(longlong *)(param_2 + 0x14);
        local_1e8 = *(longlong *)(param_2 + 0x16);
        lStack_1e0 = *(longlong *)(param_2 + 0x18);
        local_1c8 = *(longlong *)(param_2 + 0x1e);
        uStack_1c0 = *(longlong *)(param_2 + 0x20);
        local_178 = local_218;
        lStack_170 = lStack_210;
        local_168 = CONCAT44(uStack_204,local_208);
        lStack_160 = CONCAT44(uStack_1fc,uStack_200);
        local_198 = local_238;
        uStack_190 = uStack_230;
        local_188 = local_228;
        uStack_180 = uStack_220;
        cVar11 = FUN_144cab9d0(&local_198,&local_1f8);
        if (cVar11 != '\0') {
          local_278 = *(longlong *)(param_2 + 2);
          lStack_270 = *(longlong *)(param_2 + 4);
          local_268 = *(longlong *)(param_2 + 6);
          lStack_260 = *(longlong *)(param_2 + 8);
          local_258 = *(longlong *)(param_2 + 10);
          lStack_250 = *(longlong *)(param_2 + 0xc);
          local_248 = *(longlong *)(param_2 + 0xe);
          lStack_240 = *(longlong *)(param_2 + 0x10);
          local_238 = *(longlong *)(param_2 + 0x12);
          uStack_230 = *(undefined8 *)(param_2 + 0x14);
          local_228 = *(undefined8 *)(param_2 + 0x16);
          uStack_220 = *(undefined8 *)(param_2 + 0x18);
          local_218 = *(longlong *)(param_2 + 0x1a);
          lStack_210 = *(longlong *)(param_2 + 0x1c);
          local_208 = param_2[0x1e];
          uStack_204 = param_2[0x1f];
          uStack_200 = param_2[0x20];
          uStack_1fc = param_2[0x21];
          puVar14 = (undefined4 *)FUN_144cab7c0(param_1,local_res10,&local_278);
          *puVar19 = *puVar14;
        }
      }
    }
  }
  if (cVar12 != '\0') {
LAB_144cab0cb:
    local_78 = *(undefined8 *)(param_2 + 2);
    uStack_70 = *(undefined8 *)(param_2 + 4);
    local_88._0_4_ = param_2[6];
    local_88._4_4_ = param_2[7];
    uStack_80._0_4_ = param_2[8];
    uStack_80._4_4_ = param_2[9];
    local_98._0_4_ = param_2[10];
    local_98._4_4_ = param_2[0xb];
    uStack_90._0_4_ = param_2[0xc];
    uStack_90._4_4_ = param_2[0xd];
    local_a8._0_4_ = param_2[0xe];
    local_a8._4_4_ = param_2[0xf];
    uStack_a0._0_4_ = param_2[0x10];
    uStack_a0._4_4_ = param_2[0x11];
    local_d8._0_4_ = param_2[0x12];
    local_d8._4_4_ = param_2[0x13];
    uStack_d0._0_4_ = param_2[0x14];
    uStack_d0._4_4_ = param_2[0x15];
    local_e8._0_4_ = param_2[0x16];
    local_e8._4_4_ = param_2[0x17];
    uStack_e0._0_4_ = param_2[0x18];
    uStack_e0._4_4_ = param_2[0x19];
    local_b8._0_4_ = param_2[0x1a];
    local_b8._4_4_ = param_2[0x1b];
    uStack_b0 = param_2[0x1c];
    uStack_ac = param_2[0x1d];
    local_c8._0_4_ = param_2[0x1e];
    local_c8._4_4_ = param_2[0x1f];
    uStack_c0 = param_2[0x20];
    uStack_bc = param_2[0x21];
    uVar1 = *(uint *)(param_1 + 0x60);
    iVar13 = uVar1 + 1;
    if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar13) {
      FUN_144cabf70(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    puVar15 = (undefined8 *)
              ((longlong)*(int *)(param_1 + 0x60) * 0x80 + *(longlong *)(param_1 + 0x58));
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = local_78;
      puVar15[1] = uStack_70;
      *(uint *)(puVar15 + 2) = (uint)local_88;
      *(uint *)((longlong)puVar15 + 0x14) = local_88._4_4_;
      *(uint *)(puVar15 + 3) = (uint)uStack_80;
      *(uint *)((longlong)puVar15 + 0x1c) = uStack_80._4_4_;
      *(uint *)(puVar15 + 4) = (uint)local_98;
      *(uint *)((longlong)puVar15 + 0x24) = local_98._4_4_;
      *(uint *)(puVar15 + 5) = (uint)uStack_90;
      *(uint *)((longlong)puVar15 + 0x2c) = uStack_90._4_4_;
      *(uint *)(puVar15 + 6) = (uint)local_a8;
      *(uint *)((longlong)puVar15 + 0x34) = local_a8._4_4_;
      *(uint *)(puVar15 + 7) = (uint)uStack_a0;
      *(uint *)((longlong)puVar15 + 0x3c) = uStack_a0._4_4_;
      *(uint *)(puVar15 + 8) = (uint)local_d8;
      *(uint *)((longlong)puVar15 + 0x44) = local_d8._4_4_;
      *(uint *)(puVar15 + 9) = (uint)uStack_d0;
      *(uint *)((longlong)puVar15 + 0x4c) = uStack_d0._4_4_;
      *(uint *)(puVar15 + 10) = (uint)local_e8;
      *(uint *)((longlong)puVar15 + 0x54) = local_e8._4_4_;
      *(uint *)(puVar15 + 0xb) = (uint)uStack_e0;
      *(uint *)((longlong)puVar15 + 0x5c) = uStack_e0._4_4_;
      *(uint *)(puVar15 + 0xc) = (uint)local_b8;
      *(uint *)((longlong)puVar15 + 100) = local_b8._4_4_;
      *(uint *)(puVar15 + 0xd) = uStack_b0;
      *(uint *)((longlong)puVar15 + 0x6c) = uStack_ac;
      *(uint *)(puVar15 + 0xe) = (uint)local_c8;
      *(uint *)((longlong)puVar15 + 0x74) = local_c8._4_4_;
      *(uint *)(puVar15 + 0xf) = uStack_c0;
      *(uint *)((longlong)puVar15 + 0x7c) = uStack_bc;
    }
    *(int *)(param_1 + 0x60) = iVar13;
    uVar16 = FUN_144cb3d00(param_1,uVar21 & 0xffffffff,uVar1 | 0x80000000);
    return uVar16;
  }
LAB_144caa98a:
  return uVar21 & 0xffffffff;
}



// FUNCTION 144cab460 FUN_144cab460 body=237 status=ok
// SIG undefined FUN_144cab460(void)

undefined8 FUN_144cab460(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_68 = param_2[8];
  uStack_60 = param_2[9];
  local_58 = param_2[10];
  uStack_50 = param_2[0xb];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  local_18 = param_1[10];
  uStack_10 = param_1[0xb];
  cVar1 = FUN_144cabe50(&local_48,&local_88);
  if (cVar1 != '\0') {
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    local_38 = param_2[6];
    uStack_30 = param_2[7];
    local_28 = param_2[8];
    uStack_20 = param_2[9];
    local_18 = param_2[10];
    uStack_10 = param_2[0xb];
    local_88 = param_1[4];
    uStack_80 = param_1[5];
    local_78 = param_1[6];
    uStack_70 = param_1[7];
    local_68 = param_1[8];
    uStack_60 = param_1[9];
    local_58 = param_1[10];
    uStack_50 = param_1[0xb];
    cVar1 = FUN_144cabe50(&local_88,&local_48);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144cab550 FUN_144cab550 body=143 status=ok
// SIG undefined FUN_144cab550(void)

undefined8 * FUN_144cab550(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  *param_1 = hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::XyPlane>::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  if (0 < (int)uVar1) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[1] = uVar3;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 2) = uVar1;
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
    puVar4 = (undefined8 *)param_1[1];
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = *puVar6;
        uVar2 = puVar6[1];
        puVar6 = puVar6 + 2;
        *puVar4 = uVar3;
        puVar4[1] = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 144cab5e0 FUN_144cab5e0 body=113 status=ok
// SIG undefined FUN_144cab5e0(void)

void FUN_144cab5e0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    if (0 < (int)uVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = puVar2;
  }
  return;
}



// FUNCTION 144cab660 FUN_144cab660 body=340 status=ok
// SIG undefined FUN_144cab660(void)

void FUN_144cab660(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = 0;
  cVar4 = FUN_144cb5190();
  if (cVar4 != '\0') {
    lVar7 = FUN_144cb5260(param_1);
  }
  lVar9 = *param_2;
  lVar2 = param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  if (lVar9 != lVar2) {
    if (lVar7 == 0) {
      do {
        iVar5 = FUN_144caa7a0(param_1,lVar9,1,uVar1);
        iVar6 = FUN_144caa7a0(param_1,lVar9 + 0x110,0,uVar1);
        lVar9 = lVar9 + 0x220;
        *(int *)((longlong)iVar5 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar6;
        *(int *)((longlong)iVar6 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar5;
      } while (lVar9 != lVar2);
    }
    else {
      do {
        iVar5 = FUN_144caa7a0(param_1,lVar9,1,uVar1);
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144caa7a0(param_1,lVar9 + 0x110,0,uVar1);
        lVar9 = lVar9 + 0x220;
        *(int *)(lVar10 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar6;
        lVar8 = (longlong)iVar6;
        *(int *)(lVar8 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar5;
        lVar3 = *(longlong *)(lVar7 + 8);
        *(undefined8 *)(lVar3 + lVar10 * 0x10) = 0;
        *(undefined8 *)(lVar3 + 8 + lVar10 * 0x10) = 0;
        lVar3 = *(longlong *)(lVar7 + 8);
        *(undefined8 *)(lVar3 + lVar8 * 0x10) = 0;
        *(undefined8 *)(lVar3 + 8 + lVar8 * 0x10) = 0;
      } while (lVar9 != lVar2);
    }
  }
  return;
}



// FUNCTION 144cab7c0 FUN_144cab7c0 body=189 status=ok
// SIG undefined FUN_144cab7c0(void)

uint * FUN_144cab7c0(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x60) + 1;
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar7) {
    FUN_144cabf70((longlong *)(param_1 + 0x58),&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar6 = (undefined8 *)((longlong)*(int *)(param_1 + 0x60) * 0x80 + *(longlong *)(param_1 + 0x58))
  ;
  if (puVar6 != (undefined8 *)0x0) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *puVar6 = *param_3;
    puVar6[1] = uVar2;
    uVar2 = param_3[4];
    uVar5 = param_3[5];
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    uVar3 = param_3[6];
    uVar4 = param_3[7];
    puVar6[4] = uVar2;
    puVar6[5] = uVar5;
    uVar2 = param_3[8];
    uVar5 = param_3[9];
    puVar6[6] = uVar3;
    puVar6[7] = uVar4;
    uVar3 = param_3[10];
    uVar4 = param_3[0xb];
    puVar6[8] = uVar2;
    puVar6[9] = uVar5;
    uVar2 = param_3[0xc];
    uVar5 = param_3[0xd];
    puVar6[10] = uVar3;
    puVar6[0xb] = uVar4;
    uVar3 = param_3[0xe];
    uVar4 = param_3[0xf];
    puVar6[0xc] = uVar2;
    puVar6[0xd] = uVar5;
    puVar6[0xe] = uVar3;
    puVar6[0xf] = uVar4;
  }
  *(int *)(param_1 + 0x60) = iVar7;
  *param_2 = uVar1 | 0x80000000;
  return param_2;
}



// FUNCTION 144cab880 FUN_144cab880 body=335 status=ok
// SIG undefined FUN_144cab880(void)

uint FUN_144cab880(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  
  FUN_144cac5a0(param_2 + 0x20,param_1,&local_98);
  uVar6 = local_70;
  uVar7 = local_68;
  uVar9 = local_78;
  if (*(longlong *)(param_1 + 0x18) < 0) {
    uVar9 = local_78 - *(ulonglong *)(param_2 + 0x20);
    uVar7 = (ulonglong)(local_78 < *(ulonglong *)(param_2 + 0x20));
    uVar3 = local_70 - *(ulonglong *)(param_2 + 0x28);
    uVar6 = uVar3 - uVar7;
    uVar3 = (ulonglong)(local_70 < *(ulonglong *)(param_2 + 0x28) || uVar3 < uVar7);
    uVar4 = local_68 - *(ulonglong *)(param_2 + 0x30);
    uVar7 = uVar4 - uVar3;
    local_60 = (local_60 - *(longlong *)(param_2 + 0x38)) -
               (ulonglong)(local_68 < *(ulonglong *)(param_2 + 0x30) || uVar4 < uVar3);
  }
  FUN_144cac5a0(param_1 + 0x20,param_2,&local_58);
  if (*(longlong *)(param_2 + 0x18) < 0) {
    bVar10 = local_38 < *(ulonglong *)(param_1 + 0x20);
    local_38 = local_38 - *(ulonglong *)(param_1 + 0x20);
    uVar3 = (ulonglong)bVar10;
    bVar10 = local_30 < *(ulonglong *)(param_1 + 0x28);
    uVar4 = local_30 - *(ulonglong *)(param_1 + 0x28);
    local_30 = uVar4 - uVar3;
    local_28 = (local_28 - *(longlong *)(param_1 + 0x30)) - (ulonglong)(bVar10 || uVar4 < uVar3);
  }
  uVar3 = (ulonglong)(local_90 < local_50 || local_90 - local_50 < (ulonglong)(local_98 < local_58))
  ;
  uVar4 = (ulonglong)(local_88 < local_48 || local_88 - local_48 < uVar3);
  uVar1 = (ulonglong)(local_80 < local_40 || local_80 - local_40 < uVar4);
  uVar2 = (ulonglong)(uVar9 < local_38 || uVar9 - local_38 < uVar1);
  lVar8 = (uVar7 - local_28) - (ulonglong)(uVar6 < local_30 || uVar6 - local_30 < uVar2);
  uVar5 = 0;
  if (lVar8 == 0) {
    uVar5 = (uint)((uVar9 - local_38 == uVar1 &&
                   ((local_88 - local_48 == uVar3 &&
                    (local_90 - local_50 == (ulonglong)(local_98 < local_58) && local_98 == local_58
                    )) && local_80 - local_40 == uVar4)) && uVar6 - local_30 == uVar2);
  }
  return 1 - uVar5 | (uint)(lVar8 >> 0x3f);
}



// FUNCTION 144cab9d0 FUN_144cab9d0 body=232 status=ok
// SIG undefined FUN_144cab9d0(void)

undefined8 FUN_144cab9d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  
  FUN_144cac5a0(param_1 + 0x20,param_2,&local_68);
  uVar3 = local_38;
  uVar4 = local_48;
  uVar5 = local_40;
  if (*(longlong *)(param_2 + 0x18) < 0) {
    uVar4 = local_48 - *(ulonglong *)(param_1 + 0x20);
    uVar3 = (ulonglong)(local_48 < *(ulonglong *)(param_1 + 0x20));
    uVar1 = local_40 - *(ulonglong *)(param_1 + 0x28);
    uVar5 = uVar1 - uVar3;
    uVar1 = (ulonglong)(local_40 < *(ulonglong *)(param_1 + 0x28) || uVar1 < uVar3);
    uVar2 = local_38 - *(ulonglong *)(param_1 + 0x30);
    uVar3 = uVar2 - uVar1;
    local_30 = (local_30 - *(longlong *)(param_1 + 0x38)) -
               (ulonglong)(local_38 < *(ulonglong *)(param_1 + 0x30) || uVar2 < uVar1);
  }
  FUN_144cac5a0(param_2 + 0x20,param_1,&local_a8);
  if (*(longlong *)(param_1 + 0x18) < 0) {
    bVar6 = local_88 < *(ulonglong *)(param_2 + 0x20);
    local_88 = local_88 - *(ulonglong *)(param_2 + 0x20);
    uVar1 = (ulonglong)bVar6;
    bVar6 = local_80 < *(ulonglong *)(param_2 + 0x28);
    uVar2 = local_80 - *(ulonglong *)(param_2 + 0x28);
    local_80 = uVar2 - uVar1;
    local_78 = (local_78 - *(longlong *)(param_2 + 0x30)) - (ulonglong)(bVar6 || uVar2 < uVar1);
  }
  uVar1 = (ulonglong)
          (local_98 < local_58 ||
          local_98 - local_58 <
          (ulonglong)(local_a0 < local_60 || local_a0 - local_60 < (ulonglong)(local_a8 < local_68))
          );
  return CONCAT71((int7)((local_90 - local_50) - uVar1 >> 8),
                  (longlong)
                  ((local_78 - uVar3) -
                  (ulonglong)
                  (local_80 < uVar5 ||
                  local_80 - uVar5 <
                  (ulonglong)
                  (local_88 < uVar4 ||
                  local_88 - uVar4 < (ulonglong)(local_90 < local_50 || local_90 - local_50 < uVar1)
                  ))) < 0);
}



// FUNCTION 144cabac0 FUN_144cabac0 body=218 status=ok
// SIG undefined FUN_144cabac0(void)

uint FUN_144cabac0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = (ulonglong)(*param_1 < *param_2);
  uVar3 = param_1[1] - param_2[1];
  uVar2 = (ulonglong)(param_1[1] < param_2[1] || uVar3 < uVar1);
  uVar4 = param_1[2] - param_2[2];
  lVar6 = (param_1[3] - param_2[3]) - (ulonglong)(param_1[2] < param_2[2] || uVar4 < uVar2);
  uVar5 = (uint)(lVar6 >> 0x3f) |
          (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || *param_1 != *param_2)) || lVar6 != 0);
  if (uVar5 != 0) {
    return uVar5;
  }
  uVar1 = (ulonglong)(param_1[4] < param_2[4]);
  uVar3 = param_1[5] - param_2[5];
  uVar2 = (ulonglong)(param_1[5] < param_2[5] || uVar3 < uVar1);
  uVar4 = param_1[6] - param_2[6];
  lVar6 = (param_1[7] - param_2[7]) - (ulonglong)(param_1[6] < param_2[6] || uVar4 < uVar2);
  return (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || param_1[4] != param_2[4])) || lVar6 != 0) |
         (uint)(lVar6 >> 0x3f);
}



// FUNCTION 144cabbe0 FUN_144cabbe0 body=239 status=ok
// SIG undefined FUN_144cabbe0(void)

void FUN_144cabbe0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x14);
    lVar9 = (longlong)param_4;
    do {
      if (puVar10 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar10 + -5) =
             hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::XyPlane>::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        puVar8 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar1) {
          puVar6 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
          *(undefined4 **)(puVar10 + -3) = puVar6;
          uVar7 = (ulonglong)uVar1;
          puVar10[-1] = uVar1;
          *puVar10 = uVar1;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar2 = *puVar8;
              uVar3 = puVar8[1];
              uVar4 = puVar8[2];
              uVar5 = puVar8[3];
              puVar8 = puVar8 + 4;
              *puVar6 = uVar2;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
            }
            uVar7 = uVar7 - 1;
            puVar6 = puVar6 + 4;
          } while (uVar7 != 0);
        }
      }
      puVar10 = puVar10 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144cabcd0 FUN_144cabcd0 body=88 status=ok
// SIG undefined FUN_144cabcd0(void)

void FUN_144cabcd0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cabd30 FUN_144cabd30 body=285 status=ok
// SIG undefined FUN_144cabd30(void)

uint FUN_144cabd30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  longlong local_20;
  
  FUN_147e51913(param_2 + 0x18,param_1,&local_78);
  uVar5 = local_60;
  uVar6 = local_58;
  if (*(longlong *)(param_1 + 0x10) < 0) {
    uVar5 = local_60 - *(ulonglong *)(param_2 + 0x18);
    uVar1 = (ulonglong)(local_60 < *(ulonglong *)(param_2 + 0x18));
    uVar3 = local_58 - *(ulonglong *)(param_2 + 0x20);
    uVar6 = uVar3 - uVar1;
    local_50 = (local_50 - *(longlong *)(param_2 + 0x28)) -
               (ulonglong)(local_58 < *(ulonglong *)(param_2 + 0x20) || uVar3 < uVar1);
  }
  FUN_147e51913(param_1 + 0x18,param_2,&local_48);
  if (*(longlong *)(param_2 + 0x10) < 0) {
    bVar7 = local_30 < *(ulonglong *)(param_1 + 0x18);
    local_30 = local_30 - *(ulonglong *)(param_1 + 0x18);
    uVar1 = (ulonglong)bVar7;
    bVar7 = local_28 < *(ulonglong *)(param_1 + 0x20);
    uVar3 = local_28 - *(ulonglong *)(param_1 + 0x20);
    local_28 = uVar3 - uVar1;
    local_20 = (local_20 - *(longlong *)(param_1 + 0x28)) - (ulonglong)(bVar7 || uVar3 < uVar1);
  }
  uVar1 = (ulonglong)(local_70 < local_40 || local_70 - local_40 < (ulonglong)(local_78 < local_48))
  ;
  uVar3 = (ulonglong)(local_68 < local_38 || local_68 - local_38 < uVar1);
  uVar2 = (ulonglong)(uVar5 < local_30 || uVar5 - local_30 < uVar3);
  lVar4 = (local_50 - local_20) - (ulonglong)(uVar6 < local_28 || uVar6 - local_28 < uVar2);
  return (uint)((uVar6 - local_28 != uVar2 ||
                ((local_68 - local_38 != uVar1 ||
                 (local_70 - local_40 != (ulonglong)(local_78 < local_48) || local_78 != local_48))
                || uVar5 - local_30 != uVar3)) || lVar4 != 0) | (uint)(lVar4 >> 0x3f);
}



// FUNCTION 144cabe50 FUN_144cabe50 body=283 status=ok
// SIG undefined FUN_144cabe50(void)

bool FUN_144cabe50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  FUN_144cac5a0(param_1 + 0x20,param_2,&local_a8);
  uVar3 = local_88;
  uVar4 = local_80;
  uVar5 = local_78;
  if (*(longlong *)(param_2 + 0x18) < 0) {
    uVar3 = local_88 - *(ulonglong *)(param_1 + 0x20);
    uVar5 = (ulonglong)(local_88 < *(ulonglong *)(param_1 + 0x20));
    uVar1 = local_80 - *(ulonglong *)(param_1 + 0x28);
    uVar4 = uVar1 - uVar5;
    uVar1 = (ulonglong)(local_80 < *(ulonglong *)(param_1 + 0x28) || uVar1 < uVar5);
    uVar2 = local_78 - *(ulonglong *)(param_1 + 0x30);
    uVar5 = uVar2 - uVar1;
    local_70 = (local_70 - *(longlong *)(param_1 + 0x38)) -
               (ulonglong)(local_78 < *(ulonglong *)(param_1 + 0x30) || uVar2 < uVar1);
  }
  FUN_144cac5a0(param_2 + 0x20,param_1,&local_68);
  if (*(longlong *)(param_1 + 0x18) < 0) {
    bVar6 = local_48 < *(ulonglong *)(param_2 + 0x20);
    local_48 = local_48 - *(ulonglong *)(param_2 + 0x20);
    uVar1 = (ulonglong)bVar6;
    bVar6 = local_40 < *(ulonglong *)(param_2 + 0x28);
    uVar2 = local_40 - *(ulonglong *)(param_2 + 0x28);
    local_40 = uVar2 - uVar1;
    local_38 = (local_38 - *(longlong *)(param_2 + 0x30)) - (ulonglong)(bVar6 || uVar2 < uVar1);
  }
  return local_38 == uVar5 &&
         ((local_48 == uVar3 &&
          ((local_58 == local_98 && (local_60 == local_a0 && local_68 == local_a8)) &&
          local_50 == local_90)) && local_40 == uVar4);
}



// FUNCTION 144cabf70 FUN_144cabf70 body=239 status=ok
// SIG undefined FUN_144cabf70(void)

void FUN_144cabf70(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x80;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 7);
  uVar1 = uVar3 * 0x80 + 0x80;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x80;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144cac060 FUN_144cac060 body=254 status=ok
// SIG undefined FUN_144cac060(void)

ulonglong FUN_144cac060(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x60;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  uVar3 = uVar4 * 0x60 + 0x60;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144cac160 FUN_144cac160 body=258 status=ok
// SIG undefined FUN_144cac160(void)

void FUN_144cac160(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144cac270 FUN_144cac270 body=266 status=ok
// SIG undefined FUN_144cac270(void)

void FUN_144cac270(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144cac380 FUN_144cac380 body=340 status=ok
// SIG undefined FUN_144cac380(void)

bool FUN_144cac380(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  longlong lStack_20;
  
  FUN_147e51913(param_1 + 0x18,param_2,&local_48);
  if (*(longlong *)(param_2 + 0x10) < 0) {
    bVar3 = uStack_30 < *(ulonglong *)(param_1 + 0x18);
    uStack_30 = uStack_30 - *(ulonglong *)(param_1 + 0x18);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_28 < *(ulonglong *)(param_1 + 0x20);
    uVar2 = local_28 - *(ulonglong *)(param_1 + 0x20);
    local_28 = uVar2 - uVar1;
    lStack_20 = (lStack_20 - *(longlong *)(param_1 + 0x28)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_147e51913(param_2 + 0x18,param_1,&local_78);
  if (*(longlong *)(param_1 + 0x10) < 0) {
    bVar3 = uStack_60 < *(ulonglong *)(param_2 + 0x18);
    uStack_60 = uStack_60 - *(ulonglong *)(param_2 + 0x18);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_58 < *(ulonglong *)(param_2 + 0x20);
    uVar2 = local_58 - *(ulonglong *)(param_2 + 0x20);
    local_58 = uVar2 - uVar1;
    lStack_50 = (lStack_50 - *(longlong *)(param_2 + 0x28)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  return lStack_50 == lStack_20 &&
         (local_58 == local_28 &&
         ((local_68 == local_38 && (lStack_70 == lStack_40 && local_78 == local_48)) &&
         uStack_60 == uStack_30));
}



// FUNCTION 144cac4e0 FUN_144cac4e0 body=179 status=ok
// SIG undefined FUN_144cac4e0(void)

void FUN_144cac4e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144cac5a0 FUN_144cac5a0 body=474 status=ok
// SIG undefined FUN_144cac5a0(void)

void FUN_144cac5a0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_78 [8];
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_78[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_78[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_78[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_78[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_78[local_res8];
    local_78[iVar31] = uVar3 * uVar26 + local_78[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_78[lVar1];
    uVar9 = uVar7 + local_78[lVar1];
    local_78[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_78[local_res8 + 2];
    uVar7 = uVar33 + local_78[local_res8 + 2];
    local_78[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_78[local_res8 + 3];
    uVar7 = uVar32 + local_78[local_res8 + 3];
    local_78[iVar31 + 3] = uVar7 + uVar28;
    local_78[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 4);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_78[1];
  param_3[2] = local_78[2];
  param_3[3] = local_78[3];
  param_3[4] = local_78[4];
  param_3[5] = local_78[5];
  param_3[6] = local_78[6];
  param_3[7] = local_78[7];
  return;
}



// FUNCTION 144cac780 FUN_144cac780 body=274 status=ok
// SIG undefined FUN_144cac780(void)

void FUN_144cac780(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *local_18;
  char *local_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 != 0) {
    local_18 = "TtConnectExactEdges";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  FUN_1450254a0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x30);
  if ((int)(*(uint *)(lVar3 + 0x34) & 0x7fffffff) < iVar1) {
    FUN_141807cf8(lVar3 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar3 + 0x30) < iVar1) || (iVar1 < *(int *)(lVar3 + 0x30))) {
    *(int *)(lVar3 + 0x30) = iVar1;
  }
  if (lVar2 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 144cac8a0 FUN_144cac8a0 body=65 status=ok
// SIG undefined FUN_144cac8a0(void)

int * FUN_144cac8a0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144cac8f0 FUN_144cac8f0 body=694 status=ok
// SIG undefined FUN_144cac8f0(void)

void FUN_144cac8f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  longlong local_res10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  uint local_48 [4];
  
  local_5c = 0x80000000;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48[0] = 0;
  local_4c = 0x80000000;
  FUN_144be90e0(0xa7d22d96);
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar10 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar8;
  }
  if (*(longlong *)(lVar8 + 0x3e0) != 0) {
    local_98 = 0x499bfdd8;
    uStack_94 = 1;
    uStack_90 = 0x499bfdf2;
    uStack_8c = 1;
    FUN_144b3f370(*(longlong *)(lVar8 + 0x3e0),&local_98);
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 0x18);
  local_78 = *(longlong *)(lVar10 + 0x28);
  iVar1 = *(int *)(param_2 + 0x18);
  local_70 = (longlong)*(int *)(lVar10 + 0x30) * 0x60 + local_78;
  local_res10 = ((longlong)iVar1 + 1) * 0x40;
  do {
    puVar9 = (ulonglong *)
             ((longlong)*(int *)(local_res10 + *(longlong *)(param_1 + 0x50)) * 0x40 +
             *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar11 = *puVar9;
    *puVar9 = *puVar9 + 1;
    UNLOCK();
    uVar4 = (uint)uVar11;
    if ((uint)(uVar11 >> 0x20) <= (uint)uVar11) {
      iVar6 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar6 == 0) {
        FUN_144cacc70(param_1 + -0x20,&local_78);
        local_50 = 0;
        if ((-1 < (int)local_4c) && (local_58 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 4);
        }
        local_58 = 0;
        local_4c = 0x80000000;
        local_60 = 0;
        if ((-1 < (int)local_5c) && (local_68 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 2);
        }
        return;
      }
      uVar11 = (ulonglong)local_res8[0];
      uVar4 = local_res8[0];
    }
    local_res8[0] = uVar4;
    iVar7 = (int)uVar11 + 1;
    lVar10 = (longlong)(int)uVar11;
    iVar6 = *(int *)(param_1 + 0x8f0);
    if (iVar7 < *(int *)(param_1 + 0x8f0)) {
      iVar6 = iVar7;
    }
    if (lVar10 < iVar6) {
      lVar8 = lVar10 * 0x60;
      lVar10 = iVar6 - lVar10;
      do {
        lVar2 = local_78;
        local_48[0] = local_48[0] + 0x363eff;
        if (local_48[0] < 0x363eff) {
          FUN_144be90e0(0xb051180);
        }
        if (*(int *)(lVar2 + 0x10 + lVar8) < 0) {
          cVar5 = FUN_144cb5150(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x18),
                                uVar11 & 0xffffffff);
          if (cVar5 == '\0') {
            lVar2 = *(longlong *)(param_1 + 0x900);
            lVar3 = *(longlong *)(lVar2 + 0x28);
            uStack_80 = (longlong)*(int *)(lVar2 + 0x30) * 0x20 + lVar3;
            local_a8 = (undefined4)lVar3;
            uStack_a4 = (undefined4)((ulonglong)lVar3 >> 0x20);
            local_88 = local_a8;
            uStack_84 = uStack_a4;
            FUN_145025b60(*(undefined8 *)(lVar2 + 0x18),uVar11 & 0xffffffff,&local_68,&local_88,
                          &local_58,local_48);
          }
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
        lVar8 = lVar8 + 0x60;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  } while( true );
}



// FUNCTION 144cacbb0 FUN_144cacbb0 body=173 status=ok
// SIG undefined FUN_144cacbb0(void)

undefined8 * FUN_144cacbb0(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshGeneration::EdgeConnection::GatherBoundaryEdgesTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::EdgeConnection::GatherBoundaryEdgesTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_3;
  lVar1 = *param_2;
  param_1[0x124] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  FUN_144bdde80(param_1 + 0x125);
  if (*param_2 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144cacc60 FUN_144cacc60 body=8 status=ok
// SIG undefined FUN_144cacc60(void)

char * FUN_144cacc60(void)

{
  return "GatherEarlyBoundaryEdges";
}



// FUNCTION 144cacc70 FUN_144cacc70 body=833 status=ok
// SIG undefined FUN_144cacc70(void)

void FUN_144cacc70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  char *pcVar16;
  char *local_48;
  char *local_40;
  
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar16 = (char *)(lVar10 + 0x114);
  cVar13 = *pcVar16;
  if (cVar13 == '\0') {
    __dyn_tls_on_demand_init();
    cVar13 = *pcVar16;
  }
  plVar15 = (longlong *)(lVar10 + 0xf0);
  lVar10 = *plVar15;
  if (lVar10 == 0) {
    if (cVar13 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *plVar15 = lVar10;
  }
  lVar10 = *(longlong *)(lVar10 + 0x3e0);
  if (lVar10 != 0) {
    local_48 = "TtFinalize";
    local_40 = "";
    FUN_144b3f370(lVar10,&local_48);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x928));
  lVar5 = *(longlong *)(param_1 + 0x920);
  plVar1 = (longlong *)(param_2 + 0x10);
  plVar2 = (longlong *)(lVar5 + 0x38);
  if (*(int *)(lVar5 + 0x40) == 0) {
    if (plVar1 != plVar2) {
      FUN_143821c08(plVar2,&PTR_vftable_14c6e47a0);
      FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
      lVar6 = *plVar2;
      *plVar2 = *plVar1;
      *plVar1 = lVar6;
      uVar3 = *(undefined4 *)(lVar5 + 0x40);
      *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x18) = uVar3;
      uVar3 = *(undefined4 *)(lVar5 + 0x44);
      *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
    }
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x40);
    puVar11 = (undefined4 *)*plVar1;
    iVar14 = *(int *)(param_2 + 0x18) + iVar4;
    puVar12 = puVar11 + *(int *)(param_2 + 0x18);
    if ((int)(*(uint *)(lVar5 + 0x44) & 0x7fffffff) < iVar14) {
      FUN_141807aa8(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar14);
    }
    puVar9 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 4);
    for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar11;
      }
      puVar9 = puVar9 + 1;
    }
    *(int *)(lVar5 + 0x40) = iVar14;
  }
  lVar5 = *(longlong *)(param_1 + 0x920);
  plVar1 = (longlong *)(param_2 + 0x20);
  plVar2 = (longlong *)(lVar5 + 0x48);
  if (*(int *)(lVar5 + 0x50) == 0) {
    if (plVar1 != plVar2) {
      FUN_147e61400(plVar2,&PTR_vftable_14c6e47a0);
      FUN_147e61400(plVar1,&PTR_vftable_14c6e47a0);
      lVar6 = *plVar2;
      *plVar2 = *plVar1;
      *plVar1 = lVar6;
      uVar3 = *(undefined4 *)(lVar5 + 0x50);
      *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      uVar3 = *(undefined4 *)(lVar5 + 0x54);
      *(undefined4 *)(lVar5 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0x2c) = uVar3;
    }
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x50);
    puVar12 = (undefined4 *)*plVar1;
    puVar11 = puVar12 + (longlong)*(int *)(param_2 + 0x28) * 4;
    iVar14 = *(int *)(param_2 + 0x28) + iVar4;
    if ((int)(*(uint *)(lVar5 + 0x54) & 0x7fffffff) < iVar14) {
      FUN_147e57f40(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar14);
    }
    puVar9 = (undefined4 *)((longlong)iVar4 * 0x10 + *plVar2);
    for (; puVar12 != puVar11; puVar12 = puVar12 + 4) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar3 = puVar12[1];
        uVar7 = puVar12[2];
        uVar8 = puVar12[3];
        *puVar9 = *puVar12;
        puVar9[1] = uVar3;
        puVar9[2] = uVar7;
        puVar9[3] = uVar8;
      }
      puVar9 = puVar9 + 4;
    }
    *(int *)(lVar5 + 0x50) = iVar14;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x928));
  if (lVar10 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar10,&local_48);
  }
  *(undefined4 *)(param_2 + 0x30) = 0;
  FUN_144be90e0(0x53288d7c);
  if (*pcVar16 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *plVar15;
  if (lVar10 == 0) {
    if (*pcVar16 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *plVar15 = lVar10;
  }
  if (*(longlong *)(lVar10 + 0x3e0) != 0) {
    local_48 = "EtGatherEarlyBoundaryEdges";
    local_40 = "";
    FUN_144b3f260(*(longlong *)(lVar10 + 0x3e0),&local_48);
  }
  return;
}



// FUNCTION 144cacfc0 FUN_144cacfc0 body=139 status=ok
// SIG undefined FUN_144cacfc0(void)

undefined8 * FUN_144cacfc0(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 144cad04c FUN_144cad04c body=9 status=ok
// SIG undefined FUN_144cad04c(void)

void FUN_144cad04c(longlong param_1)

{
  FUN_144cacfc0(param_1 + -0x20);
  return;
}



// FUNCTION 144cad060 FUN_144cad060 body=208 status=ok
// SIG undefined FUN_144cad060(void)

undefined4 * FUN_144cad060(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 2) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 4) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 6) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 6) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  return param_1;
}



// FUNCTION 144cad130 FUN_144cad130 body=190 status=ok
// SIG undefined FUN_144cad130(void)

undefined4 * FUN_144cad130(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 2) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 4) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 6) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 6) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 144cad1f0 FUN_144cad1f0 body=213 status=ok
// SIG undefined FUN_144cad1f0(void)

void FUN_144cad1f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  uVar2 = uVar3;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x28))();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  uVar2 = uVar3;
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x28))();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x28))();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  return;
}



// FUNCTION 144cad2d0 FUN_144cad2d0 body=13 status=ok
// SIG undefined FUN_144cad2d0(void)

undefined8 FUN_144cad2d0(longlong param_1,int param_2)

{
  return CONCAT71((int7)(int3)((uint)param_2 >> 8),
                  *(longlong *)(param_1 + 8 + (longlong)param_2 * 8) != 0);
}



// FUNCTION 144cad2e0 FUN_144cad2e0 body=34 status=ok
// SIG undefined FUN_144cad2e0(void)

void FUN_144cad2e0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8 + (longlong)param_2 * 8);
  *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8) = param_3;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144cad2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 144cad310 FUN_144cad310 body=38 status=ok
// SIG undefined FUN_144cad310(void)

void FUN_144cad310(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8 + (longlong)param_2 * 8);
  *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8) = 0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144cad331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 144cad340 FUN_144cad340 body=9 status=ok
// SIG undefined FUN_144cad340(void)

undefined8 FUN_144cad340(longlong param_1,int param_2)

{
  return *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8);
}



// FUNCTION 144cad350 FUN_144cad350 body=9 status=ok
// SIG undefined FUN_144cad350(void)

undefined8 FUN_144cad350(longlong param_1,int param_2)

{
  return *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8);
}



// FUNCTION 144cad360 FUN_144cad360 body=84 status=ok
// SIG undefined FUN_144cad360(void)

void FUN_144cad360(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = param_1 + 5;
  while (param_1 = param_1 + 1, param_1 != plVar1) {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
  }
  return;
}



// FUNCTION 144cad3c0 FUN_144cad3c0 body=122 status=ok
// SIG undefined FUN_144cad3c0(void)

void FUN_144cad3c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)(param_1 + 2);
  if (plVar2 == (longlong *)(param_1 + 10)) {
    *param_1 = param_3;
  }
  else {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        local_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_18,param_3);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)(param_1 + 10));
    *param_1 = param_3;
  }
  return;
}



// FUNCTION 144cad440 FUN_144cad440 body=107 status=ok
// SIG undefined FUN_144cad440(void)

void FUN_144cad440(int *param_1,int *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_2 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_2 + 4));
  }
  plVar1 = *(longlong **)(param_1 + 6);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_2 + 6));
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_2 + 8));
  }
  *param_1 = *param_1 + *param_2;
  return;
}



// FUNCTION 144cad4b0 FUN_144cad4b0 body=3 status=ok
// SIG undefined FUN_144cad4b0(void)

undefined4 FUN_144cad4b0(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144cad4c0 FUN_144cad4c0 body=98 status=ok
// SIG undefined FUN_144cad4c0(void)

void FUN_144cad4c0(int *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != *param_1) {
    for (plVar2 = (longlong *)(param_1 + 2); plVar2 != (longlong *)(param_1 + 10);
        plVar2 = plVar2 + 1) {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
      }
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 144cad530 FUN_144cad530 body=73 status=ok
// SIG undefined FUN_144cad530(void)

void FUN_144cad530(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 5;
  while (param_1 = param_1 + 1, param_1 != plVar1) {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 144cad580 FUN_144cad580 body=90 status=ok
// SIG undefined FUN_144cad580(void)

void FUN_144cad580(int *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 2);
  if (plVar2 == (longlong *)(param_1 + 10)) {
    *param_1 = *param_1 + 1;
  }
  else {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)(param_1 + 10));
    *param_1 = *param_1 + 1;
  }
  return;
}



// FUNCTION 144cad5e0 FUN_144cad5e0 body=152 status=ok
// SIG undefined FUN_144cad5e0(void)

undefined4 * FUN_144cad5e0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar4 = 9;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  do {
    plVar1 = *(longlong **)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar3);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))();
      plVar1 = (longlong *)*plVar3;
      *plVar3 = lVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_1;
}



// FUNCTION 144cad680 FUN_144cad680 body=131 status=ok
// SIG undefined FUN_144cad680(void)

longlong * FUN_144cad680(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 9;
  plVar3 = param_1;
  do {
    plVar3 = plVar3 + 1;
    plVar1 = *(longlong **)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar3);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))();
      plVar1 = (longlong *)*plVar3;
      *plVar3 = lVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)param_1 = *param_2;
  return param_1;
}



// FUNCTION 144cad710 FUN_144cad710 body=99 status=ok
// SIG undefined FUN_144cad710(void)

void FUN_144cad710(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_2 = param_2 - (longlong)param_1;
  lVar3 = 9;
  do {
    param_1 = param_1 + 1;
    plVar1 = *(longlong **)(param_2 + (longlong)param_1);
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x28))();
    }
    plVar1 = (longlong *)*param_1;
    *param_1 = lVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144cad780 FUN_144cad780 body=13 status=ok
// SIG undefined FUN_144cad780(void)

undefined8 FUN_144cad780(longlong param_1,int param_2)

{
  return CONCAT71((int7)(int3)((uint)param_2 >> 8),
                  *(longlong *)(param_1 + 8 + (longlong)param_2 * 8) != 0);
}



// FUNCTION 144cad790 FUN_144cad790 body=34 status=ok
// SIG undefined FUN_144cad790(void)

void FUN_144cad790(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8 + (longlong)param_2 * 8);
  *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8) = param_3;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144cad7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 144cad7c0 FUN_144cad7c0 body=38 status=ok
// SIG undefined FUN_144cad7c0(void)

void FUN_144cad7c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8 + (longlong)param_2 * 8);
  *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8) = 0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144cad7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 144cad7f0 FUN_144cad7f0 body=9 status=ok
// SIG undefined FUN_144cad7f0(void)

undefined8 FUN_144cad7f0(longlong param_1,int param_2)

{
  return *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8);
}



// FUNCTION 144cad800 FUN_144cad800 body=9 status=ok
// SIG undefined FUN_144cad800(void)

undefined8 FUN_144cad800(longlong param_1,int param_2)

{
  return *(undefined8 *)(param_1 + 8 + (longlong)param_2 * 8);
}



// FUNCTION 144cad810 FUN_144cad810 body=119 status=ok
// SIG undefined FUN_144cad810(void)

void FUN_144cad810(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = 9;
  plVar2 = param_1;
  do {
    plVar2 = plVar2 + 1;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_18,param_3);
    }
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)param_1 = param_3;
  return;
}



// FUNCTION 144cad890 FUN_144cad890 body=119 status=ok
// SIG undefined FUN_144cad890(void)

void FUN_144cad890(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = 9;
  plVar2 = param_1;
  do {
    plVar2 = plVar2 + 1;
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_18,param_3);
    }
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)param_1 = param_3;
  return;
}



// FUNCTION 144cad910 FUN_144cad910 body=109 status=ok
// SIG undefined FUN_144cad910(void)

void FUN_144cad910(int *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 9;
  piVar2 = param_2;
  do {
    piVar2 = piVar2 + 2;
    plVar1 = *(longlong **)(((longlong)param_1 - (longlong)param_2) + (longlong)piVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)piVar2);
    }
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_1 = *param_1 + *param_2;
  return;
}



// FUNCTION 144cad980 FUN_144cad980 body=3 status=ok
// SIG undefined FUN_144cad980(void)

undefined4 FUN_144cad980(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144cad990 FUN_144cad990 body=90 status=ok
// SIG undefined FUN_144cad990(void)

void FUN_144cad990(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != (int)*param_1) {
    lVar3 = 9;
    plVar2 = param_1;
    do {
      plVar2 = plVar2 + 1;
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(int *)param_1 = param_2;
  }
  return;
}



// FUNCTION 144cad9f0 FUN_144cad9f0 body=484 status=ok
// SIG undefined FUN_144cad9f0(void)

void FUN_144cad9f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  int *piVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar1 = *param_2;
  lVar19 = 0;
  iVar2 = (int)((param_2[1] - lVar1) / 0xc);
  lVar18 = (longlong)iVar2;
  if (lVar18 < 4) {
    if (iVar2 < 1) {
      return;
    }
    lVar20 = *param_3;
  }
  else {
    lVar20 = *param_3;
    piVar16 = (int *)(lVar1 + 0x10);
    lVar15 = (lVar18 - 4U >> 2) + 1;
    pfVar17 = (float *)(lVar20 + 0x20);
    lVar19 = lVar15 * 4;
    do {
      fVar21 = (float)piVar16[-3];
      fVar22 = (float)piVar16[-2];
      fVar23 = (float)piVar16[-4];
      fVar3 = *(float *)(param_1 + 0x54);
      fVar4 = *(float *)(param_1 + 0x58);
      fVar5 = *(float *)(param_1 + 0x5c);
      fVar6 = *(float *)(param_1 + 100);
      fVar7 = *(float *)(param_1 + 0x68);
      fVar8 = *(float *)(param_1 + 0x6c);
      fVar9 = *(float *)(param_1 + 0x44);
      fVar10 = *(float *)(param_1 + 0x48);
      fVar11 = *(float *)(param_1 + 0x4c);
      fVar12 = *(float *)(param_1 + 0x74);
      fVar13 = *(float *)(param_1 + 0x78);
      fVar14 = *(float *)(param_1 + 0x7c);
      pfVar17[-8] = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                    fVar21 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x60);
      pfVar17[-7] = fVar23 * fVar9 + fVar12 + fVar21 * fVar3 + fVar22 * fVar6;
      pfVar17[-6] = fVar23 * fVar10 + fVar13 + fVar21 * fVar4 + fVar22 * fVar7;
      pfVar17[-5] = fVar23 * fVar11 + fVar14 + fVar21 * fVar5 + fVar22 * fVar8;
      fVar23 = (float)piVar16[-1];
      fVar21 = (float)*piVar16;
      fVar22 = (float)piVar16[1];
      fVar3 = *(float *)(param_1 + 0x44);
      fVar4 = *(float *)(param_1 + 0x48);
      fVar5 = *(float *)(param_1 + 0x4c);
      fVar6 = *(float *)(param_1 + 0x54);
      fVar7 = *(float *)(param_1 + 0x58);
      fVar8 = *(float *)(param_1 + 0x5c);
      fVar9 = *(float *)(param_1 + 0x74);
      fVar10 = *(float *)(param_1 + 0x78);
      fVar11 = *(float *)(param_1 + 0x7c);
      fVar12 = *(float *)(param_1 + 100);
      fVar13 = *(float *)(param_1 + 0x68);
      fVar14 = *(float *)(param_1 + 0x6c);
      pfVar17[-4] = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                    fVar21 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x60);
      pfVar17[-3] = fVar23 * fVar3 + fVar9 + fVar21 * fVar6 + fVar22 * fVar12;
      pfVar17[-2] = fVar23 * fVar4 + fVar10 + fVar21 * fVar7 + fVar22 * fVar13;
      pfVar17[-1] = fVar23 * fVar5 + fVar11 + fVar21 * fVar8 + fVar22 * fVar14;
      fVar21 = (float)piVar16[3];
      fVar22 = (float)piVar16[4];
      fVar23 = (float)piVar16[2];
      fVar3 = *(float *)(param_1 + 0x54);
      fVar4 = *(float *)(param_1 + 0x58);
      fVar5 = *(float *)(param_1 + 0x5c);
      fVar6 = *(float *)(param_1 + 100);
      fVar7 = *(float *)(param_1 + 0x68);
      fVar8 = *(float *)(param_1 + 0x6c);
      fVar9 = *(float *)(param_1 + 0x44);
      fVar10 = *(float *)(param_1 + 0x48);
      fVar11 = *(float *)(param_1 + 0x4c);
      fVar12 = *(float *)(param_1 + 0x74);
      fVar13 = *(float *)(param_1 + 0x78);
      fVar14 = *(float *)(param_1 + 0x7c);
      *pfVar17 = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                 fVar21 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x60);
      pfVar17[1] = fVar23 * fVar9 + fVar12 + fVar21 * fVar3 + fVar22 * fVar6;
      pfVar17[2] = fVar23 * fVar10 + fVar13 + fVar21 * fVar4 + fVar22 * fVar7;
      pfVar17[3] = fVar23 * fVar11 + fVar14 + fVar21 * fVar5 + fVar22 * fVar8;
      fVar23 = (float)piVar16[5];
      fVar21 = (float)piVar16[6];
      fVar22 = (float)piVar16[7];
      piVar16 = piVar16 + 0xc;
      fVar3 = *(float *)(param_1 + 0x44);
      fVar4 = *(float *)(param_1 + 0x48);
      fVar5 = *(float *)(param_1 + 0x4c);
      fVar6 = *(float *)(param_1 + 0x54);
      fVar7 = *(float *)(param_1 + 0x58);
      fVar8 = *(float *)(param_1 + 0x5c);
      fVar9 = *(float *)(param_1 + 0x74);
      fVar10 = *(float *)(param_1 + 0x78);
      fVar11 = *(float *)(param_1 + 0x7c);
      fVar12 = *(float *)(param_1 + 100);
      fVar13 = *(float *)(param_1 + 0x68);
      fVar14 = *(float *)(param_1 + 0x6c);
      pfVar17[4] = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                   fVar21 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x60);
      pfVar17[5] = fVar23 * fVar3 + fVar9 + fVar21 * fVar6 + fVar22 * fVar12;
      pfVar17[6] = fVar23 * fVar4 + fVar10 + fVar21 * fVar7 + fVar22 * fVar13;
      pfVar17[7] = fVar23 * fVar5 + fVar11 + fVar21 * fVar8 + fVar22 * fVar14;
      pfVar17 = pfVar17 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (lVar18 <= lVar19) {
      return;
    }
  }
  piVar16 = (int *)(lVar1 + lVar19 * 0xc);
  pfVar17 = (float *)(lVar19 * 0x10 + lVar20);
  lVar18 = lVar18 - lVar19;
  do {
    fVar23 = (float)*piVar16;
    fVar21 = (float)piVar16[1];
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x4c);
    fVar22 = (float)piVar16[2];
    piVar16 = piVar16 + 3;
    fVar6 = *(float *)(param_1 + 0x74);
    fVar7 = *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 0x7c);
    fVar9 = *(float *)(param_1 + 0x54);
    fVar10 = *(float *)(param_1 + 0x58);
    fVar11 = *(float *)(param_1 + 0x5c);
    fVar12 = *(float *)(param_1 + 100);
    fVar13 = *(float *)(param_1 + 0x68);
    fVar14 = *(float *)(param_1 + 0x6c);
    *pfVar17 = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
               fVar21 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x60);
    pfVar17[1] = fVar23 * fVar3 + fVar6 + fVar21 * fVar9 + fVar22 * fVar12;
    pfVar17[2] = fVar23 * fVar4 + fVar7 + fVar21 * fVar10 + fVar22 * fVar13;
    pfVar17[3] = fVar23 * fVar5 + fVar8 + fVar21 * fVar11 + fVar22 * fVar14;
    pfVar17 = pfVar17 + 4;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  return;
}



// FUNCTION 144cadbe0 FUN_144cadbe0 body=198 status=ok
// SIG undefined FUN_144cadbe0(void)

undefined8 * FUN_144cadbe0(undefined8 *param_1,longlong param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::SimpleGeometryView::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_147e56b1c();
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FUN_147e56b1c();
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  FUN_147e56b1c();
  return param_1;
}



// FUNCTION 144cadcb0 FUN_144cadcb0 body=555 status=ok
// SIG undefined FUN_144cadcb0(void)

void FUN_144cadcb0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::SimpleGeometryView::vftable;
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    lVar4 = (longlong)param_1 + param_1[0x12] + 0x90;
    if (param_1[0x12] == 0) {
      lVar4 = lVar3;
    }
    (*DAT_14c787678)(0,lVar4,0);
  }
  lVar2 = param_1[0x10];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0x11) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 3);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    lVar4 = (longlong)param_1 + param_1[0xd] + 0x68;
    if (param_1[0xd] == 0) {
      lVar4 = lVar3;
    }
    (*DAT_14c787678)(0,lVar4,0);
  }
  lVar2 = param_1[0xb];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0xc) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  if (*(int *)((longlong)param_1 + 0x4c) < 0) {
    lVar4 = (longlong)param_1 + param_1[8] + 0x40;
    if (param_1[8] == 0) {
      lVar4 = lVar3;
    }
    (*DAT_14c787678)(0,lVar4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 2);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0xc);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144cadee0 FUN_144cadee0 body=23 status=ok
// SIG undefined FUN_144cadee0(void)

longlong * FUN_144cadee0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x38);
  *param_2 = lVar2;
  param_2[1] = lVar2 + (longlong)iVar1 * 4;
  return param_2;
}



// FUNCTION 144cadf00 FUN_144cadf00 body=222 status=ok
// SIG undefined FUN_144cadf00(void)

void FUN_144cadf00(longlong param_1,int param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
                  (longlong)param_2 * 0x10);
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = (longlong)*piVar1;
  lVar4 = (longlong)piVar1[1];
  fVar5 = (float)*(int *)(lVar2 + 8 + lVar3 * 0xc);
  fVar9 = (float)*(int *)(lVar2 + 4 + lVar4 * 0xc);
  auVar12._0_8_ =
       CONCAT44((float)*(int *)(lVar2 + 4 + lVar3 * 0xc),(float)*(int *)(lVar2 + lVar3 * 0xc));
  auVar12._8_4_ = fVar5;
  auVar12._12_4_ = 0;
  fVar6 = (float)*(int *)(lVar2 + 8 + lVar4 * 0xc);
  lVar3 = (longlong)piVar1[2];
  fVar11 = (float)*(int *)(lVar2 + lVar4 * 0xc);
  auVar10._0_4_ = (float)*(int *)(lVar2 + lVar3 * 0xc);
  auVar10._4_4_ = (float)*(int *)(lVar2 + 4 + lVar3 * 0xc);
  auVar10._8_4_ = (float)*(int *)(lVar2 + 8 + lVar3 * 0xc);
  auVar10._12_4_ = 0;
  auVar7._8_4_ = fVar5;
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar11;
  auVar8._8_4_ = fVar6;
  auVar8._12_4_ = 0;
  auVar12 = maxps(auVar12,auVar8);
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar6;
  auVar13._12_4_ = 0;
  auVar8 = minps(auVar7,auVar13);
  auVar13 = maxps(auVar12,auVar10);
  auVar8 = minps(auVar8,auVar10);
  param_3[1] = auVar13;
  *param_3 = auVar8;
  return;
}



// FUNCTION 144cadfe0 FUN_144cadfe0 body=23 status=ok
// SIG undefined FUN_144cadfe0(void)

undefined4 FUN_144cadfe0(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) + 0xc +
          (longlong)param_2 * 0x10);
}



// FUNCTION 144cae000 FUN_144cae000 body=197 status=ok
// SIG undefined FUN_144cae000(void)

undefined1 FUN_144cae000(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 **local_res10 [3];
  longlong local_98;
  longlong local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_68 = *param_3;
  local_48 = param_3[1];
  local_28 = param_3[2];
  local_58 = param_3[4];
  local_38 = param_3[5];
  local_18 = param_3[6];
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  local_98 = *(longlong *)(lVar1 + 0x28);
  local_90 = (longlong)*(int *)(lVar1 + 0x30) * 0x10 + local_98;
  local_88 = local_res8;
  local_80 = &local_98;
  local_res10[0] = &local_88;
  local_res8[0] = 0;
  local_78 = param_2;
  local_70 = param_1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  uStack_54 = local_58;
  uStack_50 = local_58;
  uStack_4c = local_58;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  uStack_24 = local_28;
  uStack_20 = local_28;
  uStack_1c = local_28;
  uStack_14 = local_18;
  uStack_10 = local_18;
  uStack_c = local_18;
  FUN_144cae660(param_1 + 0x40,&local_68,local_res10,1);
  return local_res8[0];
}



// FUNCTION 144cae0d0 FUN_144cae0d0 body=171 status=ok
// SIG undefined FUN_144cae0d0(void)

void FUN_144cae0d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)param_2 != 0) {
    FUN_14502b5f0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8));
    return;
  }
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  uStack_70 = param_3[3];
  local_68 = param_3[4];
  uStack_60 = param_3[5];
  local_58 = param_3[6];
  uStack_50 = param_3[7];
  local_48 = param_3[8];
  uStack_40 = param_3[9];
  local_38 = param_3[10];
  uStack_30 = param_3[0xb];
  local_28 = *(undefined4 *)(param_3 + 0xc);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_20 = *(undefined4 *)(param_3 + 0xd);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x6c);
  local_18 = *(undefined4 *)(param_3 + 0xe);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x74);
  uStack_10 = *(undefined4 *)(param_3 + 0xf);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x7c);
  FUN_145029eb0(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8));
  return;
}



// FUNCTION 144cae180 FUN_144cae180 body=391 status=ok
// SIG undefined FUN_144cae180(void)

longlong * FUN_144cae180(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong local_res8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_res8 = 0x38;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"hkGeometry");
  }
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144b3e890(lVar6);
  }
  puVar1 = (undefined8 *)(lVar6 + 0x28);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  puVar7 = (undefined8 *)(lVar8 + 0x28);
  if (puVar7 != puVar1) {
    iVar2 = *(int *)(lVar8 + 0x30);
    uVar3 = *puVar7;
    if ((int)(*(uint *)(lVar6 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(lVar6 + 0x30) = iVar2;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar6 + 0x20);
  lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0xc;
  local_res8 = lVar8 + lVar4;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  iVar5 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
  iVar9 = iVar5 + iVar2;
  if ((int)(*(uint *)(lVar6 + 0x24) & 0x7fffffff) < iVar9) {
    FUN_1418055da(lVar6 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  local_48 = (longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 0x18);
  local_40 = (longlong)iVar5 * 0x10 + local_48;
  local_30 = local_res8;
  *(int *)(lVar6 + 0x20) = iVar9;
  local_38 = lVar4;
  FUN_144cad9f0(param_1 + 0xb0,&local_38,&local_48);
  *param_2 = lVar6;
  return param_2;
}



// FUNCTION 144cae310 FUN_144cae310 body=435 status=ok
// SIG undefined FUN_144cae310(void)

void FUN_144cae310(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) && (*(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x20),
               (ulonglong)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) * 0xc);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x30),
               (ulonglong)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_144c297d0(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x58);
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x60) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x58),
               (ulonglong)(*(uint *)(param_1 + 100) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_144c297d0(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x88) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(longlong *)(param_1 + 0x80) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x80),
               (ulonglong)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  FUN_144c297d0(param_1 + 0x90);
  return;
}



// FUNCTION 144cae4d0 FUN_144cae4d0 body=87 status=ok
// SIG undefined FUN_144cae4d0(void)

undefined8 FUN_144cae4d0(undefined8 param_1,ulonglong param_2)

{
  FUN_144cadcb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 144cae530 FUN_144cae530 body=296 status=ok
// SIG undefined FUN_144cae530(void)

void FUN_144cae530(undefined8 *param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (0 < param_3) {
    iVar6 = 0;
    do {
      iVar7 = param_2[1];
      if (((iVar6 != 1) && (iVar7 = param_2[2], iVar6 != 2)) && (iVar7 = *param_2, iVar6 == 3)) {
        iVar7 = param_2[3];
      }
      puVar1 = (undefined8 *)*param_1;
      if (*(char *)*puVar1 == '\0') {
        lVar2 = *(longlong *)(puVar1[3] + 0x20);
        lVar5 = (longlong)*(int *)(*(longlong *)puVar1[1] + 8 + (longlong)iVar7 * 0x10);
        uVar3 = *(undefined8 *)(*(longlong *)puVar1[1] + (longlong)iVar7 * 0x10);
        local_38 = *(undefined8 *)(lVar2 + lVar5 * 0xc);
        local_30 = *(undefined4 *)(lVar2 + 8 + lVar5 * 0xc);
        lVar5 = (longlong)(int)((ulonglong)uVar3 >> 0x20);
        local_20 = *(undefined4 *)(lVar2 + 8 + lVar5 * 0xc);
        local_28 = *(undefined8 *)(lVar2 + lVar5 * 0xc);
        lVar5 = (longlong)(int)uVar3;
        local_18 = *(undefined8 *)(lVar2 + lVar5 * 0xc);
        local_10 = *(undefined4 *)(lVar2 + 8 + lVar5 * 0xc);
        cVar4 = FUN_144d14830(puVar1[2],&local_18,&local_28,&local_38);
        if (cVar4 != '\0') {
          *(undefined1 *)*puVar1 = 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  return;
}



// FUNCTION 144cae660 FUN_144cae660 body=1331 status=ok
// SIG undefined FUN_144cae660(void)

void FUN_144cae660(longlong *param_1,float *param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined1 (*pauVar19) [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_438 [16];
  undefined4 local_428;
  undefined1 auStack_424 [1020];
  undefined1 (*local_28) [16];
  
  local_428 = param_4;
  pauVar19 = (undefined1 (*) [16])auStack_424;
  lVar12 = 1;
  plVar15 = param_1;
  if ((*(uint *)(DAT_14c787698 + 0x20) & 0x820000) == 0x820000) {
    do {
      local_28 = (undefined1 (*) [16])(pauVar19[-1] + 0xc);
      pfVar17 = (float *)((longlong)*(int *)*local_28 * 0x80 + *param_1 + (longlong)param_1);
      uVar16 = (undefined4)((ulonglong)plVar15 >> 0x20);
      if ((int)lVar12 < 2) {
        auVar3._4_4_ = -(uint)(((pfVar17[9] <= param_2[0xd] && param_2[9] <= pfVar17[0xd]) &&
                               (param_2[1] <= pfVar17[5] && pfVar17[1] <= param_2[5])) &&
                              (pfVar17[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar17[0x15]));
        auVar3._0_4_ = -(uint)(((pfVar17[8] <= param_2[0xc] && param_2[8] <= pfVar17[0xc]) &&
                               (*param_2 <= pfVar17[4] && *pfVar17 <= param_2[4])) &&
                              (pfVar17[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar17[0x14]));
        auVar3._8_4_ = -(uint)(((pfVar17[10] <= param_2[0xe] && param_2[10] <= pfVar17[0xe]) &&
                               (param_2[2] <= pfVar17[6] && pfVar17[2] <= param_2[6])) &&
                              (param_2[0x12] <= pfVar17[0x16] && pfVar17[0x12] <= param_2[0x16]));
        auVar3._12_4_ =
             -(uint)(((pfVar17[0xb] <= param_2[0xf] && param_2[0xb] <= pfVar17[0xf]) &&
                     (param_2[3] <= pfVar17[7] && pfVar17[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar17[0x17] && pfVar17[0x13] <= param_2[0x17]));
        uVar14 = movmskps((int)plVar15,auVar3);
        local_438 = pshufb(*(undefined1 (*) [16])(pfVar17 + 0x18),
                           *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar14 * 0x10));
        iVar11 = *(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4);
        if (((uint)pfVar17[0x1d] & 1) == 0) {
          *local_28 = local_438;
          goto LAB_144cae8a9;
        }
LAB_144cae88b:
        FUN_144cae530(param_3,local_438,iVar11);
      }
      else {
        local_28 = (undefined1 (*) [16])(pauVar19[-1] + 8);
        pfVar18 = (float *)((longlong)*(int *)*local_28 * 0x80 + *param_1 + (longlong)param_1);
        auVar1._4_4_ = -(uint)(((param_2[9] <= pfVar17[0xd] && pfVar17[9] <= param_2[0xd]) &&
                               (param_2[1] <= pfVar17[5] && pfVar17[1] <= param_2[5])) &&
                              (pfVar17[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar17[0x15]));
        auVar1._0_4_ = -(uint)(((param_2[8] <= pfVar17[0xc] && pfVar17[8] <= param_2[0xc]) &&
                               (*param_2 <= pfVar17[4] && *pfVar17 <= param_2[4])) &&
                              (pfVar17[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar17[0x14]));
        auVar1._8_4_ = -(uint)(((param_2[10] <= pfVar17[0xe] && pfVar17[10] <= param_2[0xe]) &&
                               (param_2[2] <= pfVar17[6] && pfVar17[2] <= param_2[6])) &&
                              (param_2[0x12] <= pfVar17[0x16] && pfVar17[0x12] <= param_2[0x16]));
        auVar1._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar17[0xf] && pfVar17[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar17[7] && pfVar17[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar17[0x17] && pfVar17[0x13] <= param_2[0x17]));
        uVar14 = movmskps((int)plVar15,auVar1);
        local_438 = pshufb(*(undefined1 (*) [16])(pfVar17 + 0x18),
                           *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar14 * 0x10));
        lVar12 = (longlong)*(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4);
        if (((uint)pfVar17[0x1d] & 1) == 0) {
          *local_28 = local_438;
          local_28 = (undefined1 (*) [16])(*local_28 + lVar12 * 4);
        }
        else {
          lVar12 = param_3;
          FUN_144cae530(param_3,local_438,*(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4));
        }
        auVar2._4_4_ = -(uint)(((param_2[9] <= pfVar18[0xd] && pfVar18[9] <= param_2[0xd]) &&
                               (pfVar18[1] <= param_2[5] && param_2[1] <= pfVar18[5])) &&
                              (pfVar18[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar18[0x15]));
        auVar2._0_4_ = -(uint)(((param_2[8] <= pfVar18[0xc] && pfVar18[8] <= param_2[0xc]) &&
                               (*pfVar18 <= param_2[4] && *param_2 <= pfVar18[4])) &&
                              (pfVar18[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar18[0x14]));
        auVar2._8_4_ = -(uint)(((param_2[10] <= pfVar18[0xe] && pfVar18[10] <= param_2[0xe]) &&
                               (pfVar18[2] <= param_2[6] && param_2[2] <= pfVar18[6])) &&
                              (pfVar18[0x12] <= param_2[0x16] && param_2[0x12] <= pfVar18[0x16]));
        auVar2._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar18[0xf] && pfVar18[0xb] <= param_2[0xf]) &&
                     (pfVar18[3] <= param_2[7] && param_2[3] <= pfVar18[7])) &&
                    (pfVar18[0x13] <= param_2[0x17] && param_2[0x13] <= pfVar18[0x17]));
        uVar14 = movmskps((int)lVar12,auVar2);
        local_438 = pshufb(*(undefined1 (*) [16])(pfVar18 + 0x18),
                           *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar14 * 0x10));
        iVar11 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)lVar12 >> 0x20),uVar14) * 4);
        if (((uint)pfVar18[0x1d] & 1) != 0) goto LAB_144cae88b;
        *local_28 = local_438;
LAB_144cae8a9:
        local_28 = (undefined1 (*) [16])(*local_28 + (longlong)iVar11 * 4);
      }
      lVar12 = (longlong)local_28 - (longlong)&local_428 >> 2;
      plVar15 = (longlong *)&local_428;
      pauVar19 = local_28;
    } while ((int)lVar12 != 0);
  }
  else {
    do {
      local_28 = (undefined1 (*) [16])(pauVar19[-1] + 0xc);
      pfVar17 = (float *)((longlong)*(int *)*local_28 * 0x80 + *param_1 + (longlong)param_1);
      uVar16 = (undefined4)((ulonglong)plVar15 >> 0x20);
      if ((int)lVar12 < 2) {
        fVar7 = pfVar17[0x18];
        fVar8 = pfVar17[0x19];
        fVar9 = pfVar17[0x1a];
        fVar10 = pfVar17[0x1b];
        auVar6._4_4_ = -(uint)((param_2[0x11] <= pfVar17[0x15] && pfVar17[0x11] <= param_2[0x15]) &&
                              ((param_2[9] <= pfVar17[0xd] && pfVar17[9] <= param_2[0xd]) &&
                              (param_2[1] <= pfVar17[5] && pfVar17[1] <= param_2[5])));
        auVar6._0_4_ = -(uint)((param_2[0x10] <= pfVar17[0x14] && pfVar17[0x10] <= param_2[0x14]) &&
                              ((param_2[8] <= pfVar17[0xc] && pfVar17[8] <= param_2[0xc]) &&
                              (*param_2 <= pfVar17[4] && *pfVar17 <= param_2[4])));
        auVar6._8_4_ = -(uint)((param_2[0x12] <= pfVar17[0x16] && pfVar17[0x12] <= param_2[0x16]) &&
                              ((param_2[10] <= pfVar17[0xe] && pfVar17[10] <= param_2[0xe]) &&
                              (param_2[2] <= pfVar17[6] && pfVar17[2] <= param_2[6])));
        auVar6._12_4_ =
             -(uint)((param_2[0x13] <= pfVar17[0x17] && pfVar17[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar17[0xf] && pfVar17[0xb] <= param_2[0xf]) &&
                    (param_2[3] <= pfVar17[7] && pfVar17[3] <= param_2[7])));
        uVar14 = movmskps((int)plVar15,auVar6);
        lVar12 = (ulonglong)uVar14 * 0x40;
        auVar24._0_4_ = (uint)fVar9 & *(uint *)(&DAT_14998fd20 + lVar12);
        auVar24._4_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd24 + lVar12);
        auVar24._8_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd28 + lVar12);
        auVar24._12_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd2c + lVar12);
        auVar31._0_4_ = (uint)fVar10 & *(uint *)(&DAT_14998fd30 + lVar12);
        auVar31._4_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd34 + lVar12);
        auVar31._8_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd38 + lVar12);
        auVar31._12_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd3c + lVar12);
        auVar28._0_4_ = (uint)fVar8 & *(uint *)(&DAT_14998fd10 + lVar12);
        auVar28._4_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd14 + lVar12);
        auVar28._8_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd18 + lVar12);
        auVar28._12_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd1c + lVar12);
        auVar25._0_4_ = (uint)fVar7 & *(uint *)(&DAT_14998fd00 + lVar12);
        auVar25._4_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd04 + lVar12);
        auVar25._8_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd08 + lVar12);
        auVar25._12_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd0c + lVar12);
        iVar11 = *(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4);
        local_438 = auVar31 | auVar24 | auVar28 | auVar25;
        if (((uint)pfVar17[0x1d] & 1) == 0) {
          *local_28 = local_438;
          goto LAB_144caeb5e;
        }
LAB_144caeb40:
        FUN_144cae530(param_3,local_438,iVar11);
      }
      else {
        local_28 = (undefined1 (*) [16])(pauVar19[-1] + 8);
        fVar7 = pfVar17[0x18];
        fVar8 = pfVar17[0x19];
        fVar9 = pfVar17[0x1a];
        fVar10 = pfVar17[0x1b];
        pfVar18 = (float *)((longlong)*(int *)*local_28 * 0x80 + *param_1 + (longlong)param_1);
        auVar4._4_4_ = -(uint)(((param_2[9] <= pfVar17[0xd] && pfVar17[9] <= param_2[0xd]) &&
                               (param_2[1] <= pfVar17[5] && pfVar17[1] <= param_2[5])) &&
                              (param_2[0x11] <= pfVar17[0x15] && pfVar17[0x11] <= param_2[0x15]));
        auVar4._0_4_ = -(uint)(((param_2[8] <= pfVar17[0xc] && pfVar17[8] <= param_2[0xc]) &&
                               (*param_2 <= pfVar17[4] && *pfVar17 <= param_2[4])) &&
                              (param_2[0x10] <= pfVar17[0x14] && pfVar17[0x10] <= param_2[0x14]));
        auVar4._8_4_ = -(uint)(((param_2[10] <= pfVar17[0xe] && pfVar17[10] <= param_2[0xe]) &&
                               (param_2[2] <= pfVar17[6] && pfVar17[2] <= param_2[6])) &&
                              (param_2[0x12] <= pfVar17[0x16] && pfVar17[0x12] <= param_2[0x16]));
        auVar4._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar17[0xf] && pfVar17[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar17[7] && pfVar17[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar17[0x17] && pfVar17[0x13] <= param_2[0x17]));
        uVar14 = movmskps((int)plVar15,auVar4);
        lVar12 = (ulonglong)uVar14 * 0x40;
        auVar20._0_4_ = (uint)fVar9 & *(uint *)(&DAT_14998fd20 + lVar12);
        auVar20._4_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd24 + lVar12);
        auVar20._8_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd28 + lVar12);
        auVar20._12_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd2c + lVar12);
        auVar29._0_4_ = (uint)fVar10 & *(uint *)(&DAT_14998fd30 + lVar12);
        auVar29._4_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd34 + lVar12);
        auVar29._8_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd38 + lVar12);
        auVar29._12_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd3c + lVar12);
        auVar26._0_4_ = (uint)fVar8 & *(uint *)(&DAT_14998fd10 + lVar12);
        auVar26._4_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd14 + lVar12);
        auVar26._8_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd18 + lVar12);
        auVar26._12_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd1c + lVar12);
        auVar21._0_4_ = (uint)fVar7 & *(uint *)(&DAT_14998fd00 + lVar12);
        auVar21._4_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd04 + lVar12);
        auVar21._8_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd08 + lVar12);
        auVar21._12_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd0c + lVar12);
        lVar12 = (longlong)*(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4);
        local_438 = auVar29 | auVar20 | auVar26 | auVar21;
        if (((uint)pfVar17[0x1d] & 1) == 0) {
          *local_28 = local_438;
          local_28 = (undefined1 (*) [16])(*local_28 + lVar12 * 4);
        }
        else {
          lVar12 = param_3;
          FUN_144cae530(param_3,local_438,*(int *)(&DAT_149990100 + CONCAT44(uVar16,uVar14) * 4));
        }
        fVar7 = pfVar18[0x18];
        fVar8 = pfVar18[0x19];
        fVar9 = pfVar18[0x1a];
        fVar10 = pfVar18[0x1b];
        auVar5._4_4_ = -(uint)(((param_2[1] <= pfVar18[5] && pfVar18[1] <= param_2[5]) &&
                               (pfVar18[9] <= param_2[0xd] && param_2[9] <= pfVar18[0xd])) &&
                              (param_2[0x11] <= pfVar18[0x15] && pfVar18[0x11] <= param_2[0x15]));
        auVar5._0_4_ = -(uint)(((*param_2 <= pfVar18[4] && *pfVar18 <= param_2[4]) &&
                               (pfVar18[8] <= param_2[0xc] && param_2[8] <= pfVar18[0xc])) &&
                              (param_2[0x10] <= pfVar18[0x14] && pfVar18[0x10] <= param_2[0x14]));
        auVar5._8_4_ = -(uint)(((param_2[2] <= pfVar18[6] && pfVar18[2] <= param_2[6]) &&
                               (pfVar18[10] <= param_2[0xe] && param_2[10] <= pfVar18[0xe])) &&
                              (param_2[0x12] <= pfVar18[0x16] && pfVar18[0x12] <= param_2[0x16]));
        auVar5._12_4_ =
             -(uint)(((param_2[3] <= pfVar18[7] && pfVar18[3] <= param_2[7]) &&
                     (pfVar18[0xb] <= param_2[0xf] && param_2[0xb] <= pfVar18[0xf])) &&
                    (param_2[0x13] <= pfVar18[0x17] && pfVar18[0x13] <= param_2[0x17]));
        uVar14 = movmskps((int)lVar12,auVar5);
        lVar13 = (ulonglong)uVar14 * 0x40;
        auVar22._0_4_ = (uint)fVar9 & *(uint *)(&DAT_14998fd20 + lVar13);
        auVar22._4_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd24 + lVar13);
        auVar22._8_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd28 + lVar13);
        auVar22._12_4_ = (uint)fVar9 & *(uint *)(&UNK_14998fd2c + lVar13);
        auVar30._0_4_ = (uint)fVar10 & *(uint *)(&DAT_14998fd30 + lVar13);
        auVar30._4_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd34 + lVar13);
        auVar30._8_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd38 + lVar13);
        auVar30._12_4_ = (uint)fVar10 & *(uint *)(&UNK_14998fd3c + lVar13);
        auVar27._0_4_ = (uint)fVar8 & *(uint *)(&DAT_14998fd10 + lVar13);
        auVar27._4_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd14 + lVar13);
        auVar27._8_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd18 + lVar13);
        auVar27._12_4_ = (uint)fVar8 & *(uint *)(&UNK_14998fd1c + lVar13);
        auVar23._0_4_ = (uint)fVar7 & *(uint *)(&DAT_14998fd00 + lVar13);
        auVar23._4_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd04 + lVar13);
        auVar23._8_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd08 + lVar13);
        auVar23._12_4_ = (uint)fVar7 & *(uint *)(&UNK_14998fd0c + lVar13);
        iVar11 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)lVar12 >> 0x20),uVar14) * 4);
        local_438 = auVar30 | auVar22 | auVar27 | auVar23;
        if (((uint)pfVar18[0x1d] & 1) != 0) goto LAB_144caeb40;
        *local_28 = local_438;
LAB_144caeb5e:
        local_28 = (undefined1 (*) [16])(*local_28 + (longlong)iVar11 * 4);
      }
      plVar15 = (longlong *)&local_428;
      lVar12 = (longlong)local_28 - (longlong)plVar15 >> 2;
      pauVar19 = local_28;
    } while ((int)lVar12 != 0);
  }
  return;
}



// FUNCTION 144caeba0 FUN_144caeba0 body=22 status=ok
// SIG undefined FUN_144caeba0(void)

void FUN_144caeba0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x10) = 0x3f7d8235;
  *(undefined4 *)(param_1 + 0xc) = 0xff7fffee;
  return;
}



// FUNCTION 144caebc0 FUN_144caebc0 body=24 status=ok
// SIG undefined FUN_144caebc0(void)

undefined4 * FUN_144caebc0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 1;
  param_1[2] = 1;
  return param_1;
}



// FUNCTION 144caebe0 FUN_144caebe0 body=23 status=ok
// SIG undefined FUN_144caebe0(void)

undefined4 * FUN_144caebe0(undefined4 *param_1)

{
  *param_1 = 0x1000100;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 144caec00 FUN_144caec00 body=53 status=ok
// SIG undefined FUN_144caec00(void)

undefined4 * FUN_144caec00(undefined4 *param_1)

{
  *param_1 = 0x41200000;
  param_1[1] = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[6] = 0x3f800000;
  param_1[5] = 0x7b;
  param_1[3] = 10;
  param_1[4] = 1000000;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 144caec40 FUN_144caec40 body=385 status=ok
// SIG undefined FUN_144caec40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144caec40(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavVolumeGenerationSettings::vftable;
  *(undefined2 *)((longlong)param_1 + 0x76) = 0x100;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x72) = 0x1000100;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x7b;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 10;
  *(undefined4 *)(param_1 + 0x14) = 1000000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 8) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  param_1[0xc] = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x16) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[4] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[5] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 6) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x34) = uVar2;
  *(uint *)(param_1 + 7) = uVar3;
  *(uint *)((longlong)param_1 + 0x3c) = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  return param_1;
}



// FUNCTION 144caedd0 FUN_144caedd0 body=486 status=ok
// SIG undefined FUN_144caedd0(void)

void FUN_144caedd0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavVolumeGenerationSettings::vftable;
  FUN_144b49dd0(param_1 + 0x23);
  lVar2 = param_1[0x20];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x21) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x20],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x10c) & 0x7fffffff) << 3);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  lVar2 = param_1[0x1e];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x1f) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) << 3);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1b],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xe4) & 0x7fffffff) * 0xc);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x17],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc4) & 0x7fffffff) << 4);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144caefc0 FUN_144caefc0 body=222 status=ok
// SIG undefined FUN_144caefc0(void)

void FUN_144caefc0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res8;
  
  local_res8 = 0x28;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiCarver");
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_145005180(lVar3,param_2);
  }
  FUN_145005220(lVar4,param_3);
  iVar5 = *(int *)(param_1 + 0xf8) + 1;
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar5) {
    FUN_144caf100((longlong *)(param_1 + 0xf0),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  iVar2 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar5;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
  }
  lVar3 = *plVar1;
  if ((lVar4 != lVar3) && (*plVar1 = lVar4, lVar3 != 0)) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144caf0a0 FUN_144caf0a0 body=87 status=ok
// SIG undefined FUN_144caf0a0(void)

undefined8 FUN_144caf0a0(undefined8 param_1,ulonglong param_2)

{
  FUN_144caedd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 144caf100 FUN_144caf100 body=319 status=ok
// SIG undefined FUN_144caf100(void)

void FUN_144caf100(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144caf240 FUN_144caf240 body=286 status=ok
// SIG undefined FUN_144caf240(void)

void FUN_144caf240(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *param_1;
  if (param_2 != iVar1) {
    if (param_1[4] != 0) {
      iVar3 = param_1[4] / iVar1;
      iVar5 = iVar3 * param_2;
      if ((int)(param_1[5] & 0x7fffffffU) < iVar5) {
        FUN_144cb0190(param_1 + 2,&PTR_vftable_14c6e47c0,(longlong)iVar5);
      }
      if ((param_1[4] < iVar5) || (iVar5 < param_1[4])) {
        param_1[4] = iVar5;
      }
      lVar2 = *(longlong *)(param_1 + 2);
      iVar3 = iVar3 + -1;
      iVar5 = param_2 + -1;
      iVar9 = iVar3 * iVar1;
      iVar8 = iVar3 * param_2;
      while( true ) {
        lVar7 = (longlong)iVar5;
        iVar6 = iVar5;
        if (iVar1 <= lVar7) {
          puVar4 = (undefined2 *)(lVar2 + (iVar8 + lVar7) * 2);
          lVar7 = (lVar7 - iVar1) + 1;
          iVar6 = iVar5 - (int)lVar7;
          do {
            *puVar4 = 0;
            puVar4 = puVar4 + -1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (iVar3 == 0) break;
        lVar7 = (longlong)iVar6;
        if (-1 < iVar6) {
          puVar4 = (undefined2 *)(lVar2 + (iVar8 + lVar7) * 2);
          do {
            lVar7 = lVar7 + -1;
            *puVar4 = puVar4[(longlong)iVar9 - (longlong)iVar8];
            puVar4 = puVar4 + -1;
          } while (-1 < lVar7);
        }
        iVar3 = iVar3 + -1;
        iVar8 = iVar8 - param_2;
        iVar9 = iVar9 - iVar1;
      }
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 144caf360 FUN_144caf360 body=286 status=ok
// SIG undefined FUN_144caf360(void)

void FUN_144caf360(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar2 != iVar1) {
    if (param_1[4] != 0) {
      iVar4 = param_1[4] / iVar1;
      iVar6 = iVar4 * iVar2;
      if ((int)(param_1[5] & 0x7fffffffU) < iVar6) {
        FUN_144cb0190(param_1 + 2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
      }
      if ((param_1[4] < iVar6) || (iVar6 < param_1[4])) {
        param_1[4] = iVar6;
      }
      lVar3 = *(longlong *)(param_1 + 2);
      iVar4 = iVar4 + -1;
      iVar6 = iVar2 + -1;
      iVar10 = iVar4 * iVar1;
      iVar9 = iVar4 * iVar2;
      while( true ) {
        lVar8 = (longlong)iVar6;
        iVar7 = iVar6;
        if (iVar1 <= lVar8) {
          puVar5 = (undefined2 *)(lVar3 + (iVar9 + lVar8) * 2);
          lVar8 = (lVar8 - iVar1) + 1;
          iVar7 = iVar6 - (int)lVar8;
          do {
            *puVar5 = 0;
            puVar5 = puVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (iVar4 == 0) break;
        lVar8 = (longlong)iVar7;
        if (-1 < iVar7) {
          puVar5 = (undefined2 *)(lVar3 + (iVar9 + lVar8) * 2);
          do {
            lVar8 = lVar8 + -1;
            *puVar5 = puVar5[(longlong)iVar10 - (longlong)iVar9];
            puVar5 = puVar5 + -1;
          } while (-1 < lVar8);
        }
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 - iVar2;
        iVar10 = iVar10 - iVar1;
      }
    }
    *param_1 = iVar2;
  }
  return;
}



// FUNCTION 144caf480 FUN_144caf480 body=145 status=ok
// SIG undefined FUN_144caf480(void)

void FUN_144caf480(int *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  
  param_2 = param_2 * *param_1;
  if ((int)(param_1[5] & 0x7fffffffU) < param_2) {
    FUN_144cb0190(param_1 + 2,&PTR_vftable_14c6e47c0,(longlong)param_2);
  }
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    if (0 < param_2 - iVar1) {
      uVar2 = (ulonglong)(uint)(param_2 - iVar1);
      puVar3 = (undefined2 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 2);
      do {
        if (puVar3 != (undefined2 *)0x0) {
          *puVar3 = 0;
        }
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != 0);
      return;
    }
  }
  else if (param_2 < iVar1) {
    param_1[4] = param_2;
  }
  return;
}



// FUNCTION 144caf520 FUN_144caf520 body=25 status=ok
// SIG undefined FUN_144caf520(void)

undefined8 FUN_144caf520(int *param_1,int param_2,int param_3)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 2) >> 8),
                  *(short *)(*(longlong *)(param_1 + 2) +
                            ((longlong)(param_2 * *param_1) + (longlong)param_3) * 2) != 0);
}



// FUNCTION 144caf540 FUN_144caf540 body=61 status=ok
// SIG undefined FUN_144caf540(void)

int FUN_144caf540(int *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  while( true ) {
    if (param_4 <= lVar1) {
      return -1;
    }
    if (*(short *)(*(longlong *)(param_1 + 2) + (longlong)(param_2 * *param_1) * 2 + lVar1 * 2) != 0
       ) break;
    param_3 = param_3 + 1;
    lVar1 = lVar1 + 1;
  }
  return param_3;
}



// FUNCTION 144caf580 FUN_144caf580 body=40 status=ok
// SIG undefined FUN_144caf580(void)

longlong * FUN_144caf580(int *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  lVar3 = (longlong)(iVar1 * param_3);
  *param_2 = lVar2 + lVar3 * 2;
  param_2[1] = lVar2 + (lVar3 + iVar1) * 2;
  return param_2;
}



// FUNCTION 144caf5b0 FUN_144caf5b0 body=466 status=ok
// SIG undefined FUN_144caf5b0(void)

undefined4 * FUN_144caf5b0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_2 + 2);
  plVar2 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  if (plVar1 != plVar2) {
    param_1[4] = 0;
    if ((-1 < (int)param_1[5]) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,*plVar2,param_1[5] * 2);
    }
    param_1[5] = 0x80000000;
    puVar3 = param_2 + 6;
    *plVar2 = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    if ((undefined4 *)*plVar1 == puVar3) {
      puVar5 = param_1 + 6;
      *plVar2 = (longlong)puVar5;
      if (puVar5 != puVar3) {
        lVar7 = (longlong)puVar3 - (longlong)puVar5;
        lVar6 = 0x10;
        do {
          *(undefined2 *)puVar5 = *(undefined2 *)(lVar7 + (longlong)puVar5);
          puVar5 = (undefined4 *)((longlong)puVar5 + 2);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      *plVar2 = *plVar1;
      *plVar1 = (longlong)puVar3;
      param_2[5] = 0x80000010;
    }
    param_2[4] = 0;
  }
  plVar2 = (longlong *)(param_2 + 0xe);
  plVar4 = (longlong *)(param_1 + 0xe);
  if (plVar2 != plVar4) {
    param_1[0x10] = 0;
    if ((-1 < (int)param_1[0x11]) && (*plVar4 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,*plVar4,(ulonglong)(param_1[0x11] & 0x7fffffff) << 2);
    }
    param_1[0x11] = 0x80000000;
    puVar3 = param_2 + 0x12;
    *plVar4 = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    if ((undefined4 *)*plVar2 == puVar3) {
      puVar5 = param_1 + 0x12;
      *plVar4 = (longlong)puVar5;
      if (puVar5 != puVar3) {
        lVar7 = (longlong)puVar3 - (longlong)puVar5;
        lVar6 = 0x10;
        do {
          *puVar5 = *(undefined4 *)(lVar7 + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      *plVar4 = *plVar2;
      *plVar2 = (longlong)puVar3;
      param_2[0x11] = 0x80000010;
    }
    param_2[0x10] = 0;
  }
  *param_2 = 0;
  param_2[4] = 0;
  if (((undefined4 *)*plVar1 != param_2 + 6) && (-1 < (int)param_2[5])) {
    FUN_147e4da00(&PTR_vftable_14c6e47c0,plVar1,param_2 + 6,0x10);
  }
  param_2[0x10] = 0;
  if ((*(undefined4 **)(param_2 + 0xe) != param_2 + 0x12) && (-1 < (int)param_2[0x11])) {
    FUN_147e4db44(&PTR_vftable_14c6e47c0,param_2 + 0xe,param_2 + 0x12,0x10);
  }
  return param_1;
}



// FUNCTION 144caf790 FUN_144caf790 body=531 status=ok
// SIG undefined FUN_144caf790(void)

void FUN_144caf790(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar1 = *param_1;
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      iVar3 = param_1[4] / iVar1;
      iVar6 = iVar3 * param_2;
      if ((int)(param_1[5] & 0x7fffffffU) < iVar6) {
        FUN_144cb0190(param_1 + 2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
      }
      if ((param_1[4] < iVar6) || (iVar6 < param_1[4])) {
        param_1[4] = iVar6;
      }
      lVar2 = *(longlong *)(param_1 + 2);
      iVar6 = iVar3 + -1;
      iVar7 = param_2 + -1;
      iVar13 = iVar6 * iVar1;
      iVar12 = iVar6 * param_2;
      while( true ) {
        lVar11 = (longlong)iVar7;
        iVar9 = iVar7;
        if (iVar1 <= lVar11) {
          puVar4 = (undefined2 *)(lVar2 + (iVar12 + lVar11) * 2);
          lVar11 = (lVar11 - iVar1) + 1;
          iVar9 = iVar7 - (int)lVar11;
          do {
            *puVar4 = 0;
            puVar4 = puVar4 + -1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (iVar6 == 0) break;
        lVar11 = (longlong)iVar9;
        if (-1 < lVar11) {
          puVar4 = (undefined2 *)(lVar2 + (iVar12 + lVar11) * 2);
          do {
            lVar11 = lVar11 + -1;
            *puVar4 = puVar4[(longlong)iVar13 - (longlong)iVar12];
            puVar4 = puVar4 + -1;
          } while (-1 < lVar11);
        }
        iVar6 = iVar6 + -1;
        iVar12 = iVar12 - param_2;
        iVar13 = iVar13 - iVar1;
      }
      uVar8 = -param_2 >> 5;
      iVar7 = -(-iVar1 >> 5);
      iVar6 = -uVar8;
      if (iVar7 < iVar6) {
        iVar12 = iVar6 * iVar3;
        if ((int)(param_1[0x11] & 0x7fffffffU) < iVar12) {
          FUN_140163394(param_1 + 0xe,&PTR_vftable_14c6e47c0,(longlong)iVar12);
        }
        if ((param_1[0x10] < iVar12) || (iVar12 < param_1[0x10])) {
          param_1[0x10] = iVar12;
        }
        lVar2 = *(longlong *)(param_1 + 0xe);
        iVar3 = iVar3 + -1;
        iVar12 = iVar3 * iVar7;
        iVar6 = iVar3 * iVar6;
        uVar14 = ~uVar8;
        while( true ) {
          lVar11 = (longlong)(int)uVar14;
          uVar10 = uVar14;
          if (iVar7 <= lVar11) {
            puVar5 = (undefined4 *)(lVar2 + (iVar6 + lVar11) * 4);
            lVar11 = (lVar11 - iVar7) + 1;
            uVar10 = uVar14 - (int)lVar11;
            do {
              *puVar5 = 0;
              puVar5 = puVar5 + -1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          if (iVar3 == 0) break;
          lVar11 = (longlong)(int)uVar10;
          if (-1 < (int)uVar10) {
            puVar5 = (undefined4 *)(lVar2 + (lVar11 + iVar6) * 4);
            do {
              lVar11 = lVar11 + -1;
              *puVar5 = puVar5[(longlong)iVar12 - (longlong)iVar6];
              puVar5 = puVar5 + -1;
            } while (-1 < lVar11);
          }
          iVar3 = iVar3 + -1;
          iVar6 = iVar6 + uVar8;
          iVar12 = iVar12 + (-iVar1 >> 5);
        }
      }
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 144caf9b0 FUN_144caf9b0 body=279 status=ok
// SIG undefined FUN_144caf9b0(void)

void FUN_144caf9b0(int *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = param_2 * *param_1;
  if ((int)(param_1[5] & 0x7fffffffU) < iVar5) {
    FUN_144cb0190(param_1 + 2,&PTR_vftable_14c6e47c0,(longlong)iVar5);
  }
  iVar1 = param_1[4];
  if (iVar1 < iVar5) {
    param_1[4] = iVar5;
    if (0 < iVar5 - iVar1) {
      uVar2 = (ulonglong)(uint)(iVar5 - iVar1);
      puVar3 = (undefined2 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 2);
      do {
        if (puVar3 != (undefined2 *)0x0) {
          *puVar3 = 0;
        }
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != 0);
    }
  }
  else if (iVar5 < iVar1) {
    param_1[4] = iVar5;
  }
  iVar5 = -((-*param_1 >> 5) * param_2);
  if ((int)(param_1[0x11] & 0x7fffffffU) < iVar5) {
    FUN_140163394(param_1 + 0xe,&PTR_vftable_14c6e47c0,(longlong)iVar5);
  }
  iVar1 = param_1[0x10];
  if (iVar1 < iVar5) {
    param_1[0x10] = iVar5;
    if (0 < iVar5 - iVar1) {
      uVar2 = (ulonglong)(uint)(iVar5 - iVar1);
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar1 * 4);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  else if (iVar5 < iVar1) {
    param_1[0x10] = iVar5;
  }
  return;
}



// FUNCTION 144cafad0 FUN_144cafad0 body=80 status=ok
// SIG undefined FUN_144cafad0(void)

void FUN_144cafad0(int *param_1,int param_2,uint param_3,short param_4)

{
  short *psVar1;
  longlong lVar2;
  
  psVar1 = (short *)(*(longlong *)(param_1 + 2) +
                    ((longlong)(param_2 * *param_1) + (longlong)(int)param_3) * 2);
  *psVar1 = *psVar1 + param_4;
  lVar2 = (longlong)-((-*param_1 >> 5) * param_2) + ((longlong)(int)param_3 >> 5);
  *(uint *)(*(longlong *)(param_1 + 0xe) + lVar2 * 4) =
       *(uint *)(*(longlong *)(param_1 + 0xe) + lVar2 * 4) | 1 << (param_3 & 0x1f);
  return;
}



// FUNCTION 144cafb20 FUN_144cafb20 body=179 status=ok
// SIG undefined FUN_144cafb20(void)

void FUN_144cafb20(int *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = (longlong)(*param_1 * param_2);
  uVar5 = 0;
  psVar2 = (short *)(*(longlong *)(param_1 + 2) + lVar4 * 2);
  psVar1 = (short *)(*(longlong *)(param_1 + 2) + (lVar4 + *param_1) * 2);
  uVar3 = (ulonglong)((longlong)psVar1 + (1 - (longlong)psVar2)) >> 1;
  if (psVar1 < psVar2) {
    uVar3 = uVar5;
  }
  if ((uVar3 != 0) && (0x1f < uVar3)) {
    do {
      uVar5 = uVar5 + 0x20;
      *psVar2 = -*psVar2;
      psVar2[1] = -psVar2[1];
      psVar2[2] = -psVar2[2];
      psVar2[3] = -psVar2[3];
      psVar2[4] = -psVar2[4];
      psVar2[5] = -psVar2[5];
      psVar2[6] = -psVar2[6];
      psVar2[7] = -psVar2[7];
      psVar2[8] = -psVar2[8];
      psVar2[9] = -psVar2[9];
      psVar2[10] = -psVar2[10];
      psVar2[0xb] = -psVar2[0xb];
      psVar2[0xc] = -psVar2[0xc];
      psVar2[0xd] = -psVar2[0xd];
      psVar2[0xe] = -psVar2[0xe];
      psVar2[0xf] = -psVar2[0xf];
      psVar2[0x10] = -psVar2[0x10];
      psVar2[0x11] = -psVar2[0x11];
      psVar2[0x12] = -psVar2[0x12];
      psVar2[0x13] = -psVar2[0x13];
      psVar2[0x14] = -psVar2[0x14];
      psVar2[0x15] = -psVar2[0x15];
      psVar2[0x16] = -psVar2[0x16];
      psVar2[0x17] = -psVar2[0x17];
      psVar2[0x18] = -psVar2[0x18];
      psVar2[0x19] = -psVar2[0x19];
      psVar2[0x1a] = -psVar2[0x1a];
      psVar2[0x1b] = -psVar2[0x1b];
      psVar2[0x1c] = -psVar2[0x1c];
      psVar2[0x1d] = -psVar2[0x1d];
      psVar2[0x1e] = -psVar2[0x1e];
      psVar2[0x1f] = -psVar2[0x1f];
      psVar2 = psVar2 + 0x20;
    } while (uVar5 != (uVar3 & 0xffffffffffffffe0));
  }
  for (; psVar2 != psVar1; psVar2 = psVar2 + 1) {
    *psVar2 = -*psVar2;
  }
  return;
}



// FUNCTION 144cafbe0 FUN_144cafbe0 body=41 status=ok
// SIG undefined FUN_144cafbe0(void)

undefined4 FUN_144cafbe0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xe) +
                   (((longlong)(int)param_3 >> 5) - (longlong)((-*param_1 >> 5) * param_2)) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_3 & 0x1f) & 1) != 0);
}



// FUNCTION 144cafc10 FUN_144cafc10 body=67 status=ok
// SIG undefined FUN_144cafc10(void)

void FUN_144cafc10(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *param_1;
  lVar4 = (longlong)iVar1;
  puVar2 = (undefined2 *)(*(longlong *)(param_1 + 2) + (longlong)(iVar1 * param_2) * 2);
  if (0 < iVar1) {
    lVar3 = (*(longlong *)(param_3 + 2) + (longlong)(param_4 * *param_3) * 2) - (longlong)puVar2;
    do {
      *puVar2 = *(undefined2 *)(lVar3 + (longlong)puVar2);
      puVar2 = puVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144cafc60 FUN_144cafc60 body=476 status=ok
// SIG undefined FUN_144cafc60(void)

void FUN_144cafc60(uint *param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short *psVar42;
  undefined8 *puVar43;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar47;
  
  uVar9 = *param_1;
  uVar47 = 0;
  uVar1 = *(longlong *)(param_1 + 2) + (longlong)(int)(uVar9 * param_2) * 2;
  uVar2 = *(longlong *)(param_3 + 2) + (longlong)(param_4 * *param_3) * 2;
  uVar3 = *(longlong *)(param_5 + 2) + (longlong)(param_6 * *param_5) * 2;
  uVar46 = 0;
  if ((0 < (int)uVar9) && (3 < uVar9)) {
    lVar45 = (longlong)(int)(uVar9 - 1);
    uVar49 = uVar1 + lVar45 * 2;
    if (((uVar2 + lVar45 * 2 < uVar1) || (uVar46 = 0, uVar49 < uVar2)) &&
       ((uVar3 + lVar45 * 2 < uVar1 || (uVar46 = 0, uVar49 < uVar3)))) {
      if (0x1f < uVar9) {
        uVar44 = uVar9 & 0x8000001f;
        if ((int)uVar44 < 0) {
          uVar44 = (uVar44 - 1 | 0xffffffe0) + 1;
        }
        lVar45 = uVar3 - uVar2;
        lVar48 = uVar1 - uVar2;
        psVar42 = (short *)(uVar2 + 0x10);
        uVar49 = uVar47;
        do {
          sVar10 = psVar42[-7];
          sVar11 = psVar42[-6];
          sVar12 = psVar42[-5];
          sVar13 = psVar42[-4];
          sVar14 = psVar42[-3];
          sVar15 = psVar42[-2];
          sVar16 = psVar42[-1];
          uVar46 = (int)uVar47 + 0x20;
          uVar47 = (ulonglong)uVar46;
          uVar49 = uVar49 + 0x20;
          psVar5 = (short *)(lVar45 + -0x10 + (longlong)psVar42);
          sVar17 = psVar5[1];
          sVar18 = psVar5[2];
          sVar19 = psVar5[3];
          sVar20 = psVar5[4];
          sVar21 = psVar5[5];
          sVar22 = psVar5[6];
          sVar23 = psVar5[7];
          psVar4 = (short *)((longlong)psVar42 + lVar45);
          sVar24 = *psVar4;
          sVar25 = psVar4[1];
          sVar26 = psVar4[2];
          sVar27 = psVar4[3];
          sVar28 = psVar4[4];
          sVar29 = psVar4[5];
          sVar30 = psVar4[6];
          sVar31 = psVar4[7];
          psVar4 = psVar42 + 0x20;
          sVar32 = *psVar42;
          sVar33 = psVar42[1];
          sVar34 = psVar42[2];
          sVar35 = psVar42[3];
          sVar36 = psVar42[4];
          sVar37 = psVar42[5];
          sVar38 = psVar42[6];
          sVar39 = psVar42[7];
          psVar6 = (short *)(lVar48 + -0x50 + (longlong)psVar4);
          *psVar6 = *psVar5 + psVar42[-8];
          psVar6[1] = sVar17 + sVar10;
          psVar6[2] = sVar18 + sVar11;
          psVar6[3] = sVar19 + sVar12;
          psVar6[4] = sVar20 + sVar13;
          psVar6[5] = sVar21 + sVar14;
          psVar6[6] = sVar22 + sVar15;
          psVar6[7] = sVar23 + sVar16;
          sVar10 = psVar42[8];
          sVar11 = psVar42[9];
          sVar12 = psVar42[10];
          sVar13 = psVar42[0xb];
          sVar14 = psVar42[0xc];
          sVar15 = psVar42[0xd];
          sVar16 = psVar42[0xe];
          sVar17 = psVar42[0xf];
          psVar5 = (short *)(lVar45 + -0x30 + (longlong)psVar4);
          sVar18 = *psVar5;
          sVar19 = psVar5[1];
          sVar20 = psVar5[2];
          sVar21 = psVar5[3];
          sVar22 = psVar5[4];
          sVar23 = psVar5[5];
          sVar40 = psVar5[6];
          sVar41 = psVar5[7];
          psVar5 = (short *)((longlong)psVar42 + lVar48);
          *psVar5 = sVar24 + sVar32;
          psVar5[1] = sVar25 + sVar33;
          psVar5[2] = sVar26 + sVar34;
          psVar5[3] = sVar27 + sVar35;
          psVar5[4] = sVar28 + sVar36;
          psVar5[5] = sVar29 + sVar37;
          psVar5[6] = sVar30 + sVar38;
          psVar5[7] = sVar31 + sVar39;
          sVar24 = psVar42[0x10];
          sVar25 = psVar42[0x11];
          sVar26 = psVar42[0x12];
          sVar27 = psVar42[0x13];
          sVar28 = psVar42[0x14];
          sVar29 = psVar42[0x15];
          sVar30 = psVar42[0x16];
          sVar31 = psVar42[0x17];
          psVar42 = (short *)(lVar45 + -0x20 + (longlong)psVar4);
          sVar32 = *psVar42;
          sVar33 = psVar42[1];
          sVar34 = psVar42[2];
          sVar35 = psVar42[3];
          sVar36 = psVar42[4];
          sVar37 = psVar42[5];
          sVar38 = psVar42[6];
          sVar39 = psVar42[7];
          psVar42 = (short *)(lVar48 + -0x30 + (longlong)psVar4);
          *psVar42 = sVar18 + sVar10;
          psVar42[1] = sVar19 + sVar11;
          psVar42[2] = sVar20 + sVar12;
          psVar42[3] = sVar21 + sVar13;
          psVar42[4] = sVar22 + sVar14;
          psVar42[5] = sVar23 + sVar15;
          psVar42[6] = sVar40 + sVar16;
          psVar42[7] = sVar41 + sVar17;
          psVar42 = (short *)(lVar48 + -0x20 + (longlong)psVar4);
          *psVar42 = sVar32 + sVar24;
          psVar42[1] = sVar33 + sVar25;
          psVar42[2] = sVar34 + sVar26;
          psVar42[3] = sVar35 + sVar27;
          psVar42[4] = sVar36 + sVar28;
          psVar42[5] = sVar37 + sVar29;
          psVar42[6] = sVar38 + sVar30;
          psVar42[7] = sVar39 + sVar31;
          psVar42 = psVar4;
        } while ((longlong)uVar49 < (longlong)(int)(uVar9 - uVar44));
        if (((byte)uVar9 & 0x1f) < 4) goto LAB_144cafdfd;
      }
      uVar44 = uVar9 & 0x80000003;
      if ((int)uVar44 < 0) {
        uVar44 = (uVar44 - 1 | 0xfffffffc) + 1;
      }
      lVar45 = (longlong)(int)uVar47;
      puVar43 = (undefined8 *)(uVar2 + lVar45 * 2);
      do {
        uVar7 = *(undefined8 *)((uVar3 - uVar2) + (longlong)puVar43);
        uVar46 = (int)uVar47 + 4;
        uVar47 = (ulonglong)uVar46;
        uVar8 = *puVar43;
        puVar43 = puVar43 + 1;
        lVar45 = lVar45 + 4;
        *(ulonglong *)((uVar1 - uVar2) + -8 + (longlong)puVar43) =
             CONCAT26((short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)uVar8 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)uVar8 >> 0x20)
                               ,CONCAT22((short)((ulonglong)uVar7 >> 0x10) +
                                         (short)((ulonglong)uVar8 >> 0x10),
                                         (short)uVar7 + (short)uVar8)));
      } while (lVar45 < (int)(uVar9 - uVar44));
    }
  }
LAB_144cafdfd:
  lVar45 = (longlong)(int)uVar46;
  if (lVar45 < (int)uVar9) {
    psVar42 = (short *)(uVar2 + lVar45 * 2);
    lVar45 = (int)uVar9 - lVar45;
    do {
      *(short *)((uVar1 - uVar2) + (longlong)psVar42) =
           *(short *)((uVar3 - uVar2) + (longlong)psVar42) + *psVar42;
      psVar42 = psVar42 + 1;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  return;
}



// FUNCTION 144cafe40 FUN_144cafe40 body=843 status=ok
// SIG undefined FUN_144cafe40(void)

void FUN_144cafe40(int *param_1,int param_2,int *param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  short *psVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  short *psVar28;
  undefined8 *puVar29;
  ulonglong *puVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar36;
  
  uVar36 = 0;
  lVar39 = (longlong)(*param_1 * param_2);
  uVar2 = *(longlong *)(param_1 + 2) + lVar39 * 2;
  lVar39 = (longlong)(((lVar39 + *param_1) * 2 - uVar2) + *(longlong *)(param_1 + 2)) >> 1;
  uVar35 = 0;
  uVar3 = *(longlong *)(param_3 + 2) + (longlong)(param_4 * *param_3) * 2;
  uVar33 = (uint)lVar39;
  uVar38 = uVar35;
  if (((0 < (int)uVar33) && (3 < uVar33)) &&
     ((uVar3 + (longlong)(int)(uVar33 - 1) * 2 < uVar2 ||
      (uVar2 + (longlong)(int)(uVar33 - 1) * 2 < uVar3)))) {
    uVar37 = uVar36;
    if (0x1f < uVar33) {
      uVar32 = uVar33 & 0x8000001f;
      if ((int)uVar32 < 0) {
        uVar32 = (uVar32 - 1 | 0xffffffe0) + 1;
      }
      lVar34 = uVar3 - uVar2;
      psVar28 = (short *)(uVar2 + 0x10);
      uVar40 = uVar36;
      do {
        uVar38 = (int)uVar37 + 0x20;
        uVar37 = (ulonglong)uVar38;
        uVar40 = uVar40 + 0x20;
        psVar5 = (short *)(lVar34 + -0x10 + (longlong)psVar28);
        sVar9 = psVar5[1];
        sVar10 = psVar5[2];
        sVar11 = psVar5[3];
        sVar12 = psVar5[4];
        sVar13 = psVar5[5];
        sVar14 = psVar5[6];
        sVar15 = psVar5[7];
        psVar4 = (short *)((longlong)psVar28 + lVar34);
        sVar16 = *psVar4;
        sVar17 = psVar4[1];
        sVar18 = psVar4[2];
        sVar19 = psVar4[3];
        sVar20 = psVar4[4];
        sVar21 = psVar4[5];
        sVar22 = psVar4[6];
        sVar23 = psVar4[7];
        psVar4 = psVar28 + 0x20;
        psVar28[-8] = *psVar5 + psVar28[-8];
        psVar28[-7] = sVar9 + psVar28[-7];
        psVar28[-6] = sVar10 + psVar28[-6];
        psVar28[-5] = sVar11 + psVar28[-5];
        psVar28[-4] = sVar12 + psVar28[-4];
        psVar28[-3] = sVar13 + psVar28[-3];
        psVar28[-2] = sVar14 + psVar28[-2];
        psVar28[-1] = sVar15 + psVar28[-1];
        psVar5 = (short *)(lVar34 + -0x30 + (longlong)psVar4);
        sVar9 = *psVar5;
        sVar10 = psVar5[1];
        sVar11 = psVar5[2];
        sVar12 = psVar5[3];
        sVar13 = psVar5[4];
        sVar14 = psVar5[5];
        sVar15 = psVar5[6];
        sVar24 = psVar5[7];
        *psVar28 = sVar16 + *psVar28;
        psVar28[1] = sVar17 + psVar28[1];
        psVar28[2] = sVar18 + psVar28[2];
        psVar28[3] = sVar19 + psVar28[3];
        psVar28[4] = sVar20 + psVar28[4];
        psVar28[5] = sVar21 + psVar28[5];
        psVar28[6] = sVar22 + psVar28[6];
        psVar28[7] = sVar23 + psVar28[7];
        psVar28[8] = sVar9 + psVar28[8];
        psVar28[9] = sVar10 + psVar28[9];
        psVar28[10] = sVar11 + psVar28[10];
        psVar28[0xb] = sVar12 + psVar28[0xb];
        psVar28[0xc] = sVar13 + psVar28[0xc];
        psVar28[0xd] = sVar14 + psVar28[0xd];
        psVar28[0xe] = sVar15 + psVar28[0xe];
        psVar28[0xf] = sVar24 + psVar28[0xf];
        psVar5 = (short *)(lVar34 + -0x20 + (longlong)psVar4);
        sVar9 = psVar5[1];
        sVar10 = psVar5[2];
        sVar11 = psVar5[3];
        sVar12 = psVar5[4];
        sVar13 = psVar5[5];
        sVar14 = psVar5[6];
        sVar15 = psVar5[7];
        psVar28[0x10] = *psVar5 + psVar28[0x10];
        psVar28[0x11] = sVar9 + psVar28[0x11];
        psVar28[0x12] = sVar10 + psVar28[0x12];
        psVar28[0x13] = sVar11 + psVar28[0x13];
        psVar28[0x14] = sVar12 + psVar28[0x14];
        psVar28[0x15] = sVar13 + psVar28[0x15];
        psVar28[0x16] = sVar14 + psVar28[0x16];
        psVar28[0x17] = sVar15 + psVar28[0x17];
        psVar28 = psVar4;
      } while ((longlong)uVar40 < (longlong)(int)(uVar33 - uVar32));
      if (((byte)lVar39 & 0x1f) < 4) goto LAB_144caffb4;
    }
    uVar32 = uVar33 & 0x80000003;
    if ((int)uVar32 < 0) {
      uVar32 = (uVar32 - 1 | 0xfffffffc) + 1;
    }
    lVar39 = (longlong)(int)uVar37;
    puVar29 = (undefined8 *)(uVar2 + lVar39 * 2);
    do {
      uVar7 = *puVar29;
      uVar38 = (int)uVar37 + 4;
      uVar37 = (ulonglong)uVar38;
      uVar8 = *(undefined8 *)((longlong)puVar29 + (uVar3 - uVar2));
      lVar39 = lVar39 + 4;
      *puVar29 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar7 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar8 >> 0x20) +
                                   (short)((ulonglong)uVar7 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar8 >> 0x10) +
                                            (short)((ulonglong)uVar7 >> 0x10),
                                            (short)uVar8 + (short)uVar7)));
      puVar29 = puVar29 + 1;
    } while (lVar39 < (int)(uVar33 - uVar32));
  }
LAB_144caffb4:
  lVar39 = (longlong)(int)uVar38;
  if (lVar39 < (int)uVar33) {
    psVar28 = (short *)(uVar2 + lVar39 * 2);
    lVar39 = (int)uVar33 - lVar39;
    do {
      *psVar28 = *psVar28 + *(short *)((longlong)psVar28 + (uVar3 - uVar2));
      psVar28 = psVar28 + 1;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  lVar39 = (longlong)(-(-*param_1 >> 5) * param_2);
  uVar2 = *(longlong *)(param_1 + 0xe) + lVar39 * 4;
  lVar39 = (longlong)(((-(-*param_1 >> 5) + lVar39) * 4 - uVar2) + *(longlong *)(param_1 + 0xe)) >>
           2;
  uVar3 = *(longlong *)(param_3 + 0xe) + (longlong)-((-*param_3 >> 5) * param_4) * 4;
  uVar38 = (uint)lVar39;
  if (((0 < (int)uVar38) && (1 < uVar38)) &&
     ((uVar3 + (longlong)(int)(uVar38 - 1) * 4 < uVar2 ||
      (uVar2 + (longlong)(int)(uVar38 - 1) * 4 < uVar3)))) {
    if (0xf < uVar38) {
      uVar33 = uVar38 & 0x8000000f;
      if ((int)uVar33 < 0) {
        uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
      }
      lVar34 = uVar3 - uVar2;
      puVar30 = (ulonglong *)(uVar2 + 0x10);
      uVar37 = uVar36;
      do {
        uVar35 = (int)uVar36 + 0x10;
        uVar36 = (ulonglong)uVar35;
        uVar37 = uVar37 + 0x10;
        puVar6 = (ulonglong *)(lVar34 + -0x10 + (longlong)puVar30);
        uVar40 = puVar6[1];
        uVar25 = *(ulonglong *)((longlong)puVar30 + lVar34);
        uVar26 = ((ulonglong *)((longlong)puVar30 + lVar34))[1];
        puVar1 = puVar30 + 8;
        puVar30[-2] = *puVar6 | puVar30[-2];
        puVar30[-1] = uVar40 | puVar30[-1];
        puVar6 = (ulonglong *)(lVar34 + -0x30 + (longlong)puVar1);
        uVar40 = *puVar6;
        uVar27 = puVar6[1];
        *puVar30 = uVar25 | *puVar30;
        puVar30[1] = uVar26 | puVar30[1];
        puVar30[2] = uVar40 | puVar30[2];
        puVar30[3] = uVar27 | puVar30[3];
        puVar6 = (ulonglong *)(lVar34 + -0x20 + (longlong)puVar1);
        uVar40 = puVar6[1];
        puVar30[4] = *puVar6 | puVar30[4];
        puVar30[5] = uVar40 | puVar30[5];
        puVar30 = puVar1;
      } while ((longlong)uVar37 < (longlong)(int)(uVar38 - uVar33));
      if (((byte)lVar39 & 0xf) < 2) goto LAB_144cb0142;
    }
    uVar33 = uVar38 & 0x80000001;
    if ((int)uVar33 < 0) {
      uVar33 = (uVar33 - 1 | 0xfffffffe) + 1;
    }
    lVar39 = (longlong)(int)uVar36;
    puVar30 = (ulonglong *)(uVar2 + lVar39 * 4);
    do {
      uVar35 = (int)uVar36 + 2;
      uVar36 = (ulonglong)uVar35;
      lVar39 = lVar39 + 2;
      *puVar30 = *(ulonglong *)((longlong)puVar30 + (uVar3 - uVar2)) | *puVar30;
      puVar30 = puVar30 + 1;
    } while (lVar39 < (int)(uVar38 - uVar33));
  }
LAB_144cb0142:
  lVar39 = (longlong)(int)uVar35;
  if (lVar39 < (int)uVar38) {
    puVar31 = (uint *)(uVar2 + lVar39 * 4);
    lVar39 = (int)uVar38 - lVar39;
    do {
      *puVar31 = *puVar31 | *(uint *)((uVar3 - uVar2) + (longlong)puVar31);
      puVar31 = puVar31 + 1;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  return;
}



// FUNCTION 144cb0190 FUN_144cb0190 body=233 status=ok
// SIG undefined FUN_144cb0190(void)

void FUN_144cb0190(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar2 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar2) {
    uVar4 = uVar2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 2,&local_res8);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  uVar1 = uVar4 * 2 + 2;
  uVar5 = uVar4;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 2;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -2 >> 1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2);
  }
  *param_1 = uVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144cb0280 FUN_144cb0280 body=18 status=ok
// SIG undefined FUN_144cb0280(void)

undefined8 * FUN_144cb0280(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe1d0;
  return param_2;
}



// FUNCTION 144cb02a0 FUN_144cb02a0 body=142 status=ok
// SIG undefined FUN_144cb02a0(void)

longlong FUN_144cb02a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_14502c080();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if ((undefined8 *)(param_2 + 0x10) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar2) {
      FUN_141807e20(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 0x18) = iVar2;
  }
  return param_1;
}



// FUNCTION 144cb0330 FUN_144cb0330 body=176 status=ok
// SIG undefined FUN_144cb0330(void)

longlong FUN_144cb0330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14502c090();
  plVar1 = (longlong *)(param_2 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
    FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 144cb03e0 FUN_144cb03e0 body=105 status=ok
// SIG undefined FUN_144cb03e0(void)

undefined8 FUN_144cb03e0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x20;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"StridedMeshFaceOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6a60(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb0450 FUN_144cb0450 body=135 status=ok
// SIG undefined FUN_144cb0450(void)

undefined8 * FUN_144cb0450(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x20;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"StridedMeshFaceOverlay");
  }
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    *puVar2 = hkaiNavMeshGeneration::StridedMeshFaceOverlay<int>::vftable;
    *(undefined4 *)(puVar2 + 1) = uVar1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x80000000;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144cb04e0 FUN_144cb04e0 body=513 status=ok
// SIG undefined FUN_144cb04e0(void)

void FUN_144cb04e0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *_Dst;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_res8;
  longlong local_48;
  uint local_40;
  uint local_3c;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar8 = 0;
    plVar1 = (longlong *)(param_1 + 0x10);
    local_res8 = uVar2 * param_3;
    if ((int)local_res8 < 1) {
      local_48 = 0;
      local_res8 = 0x80000000;
      local_40 = 0;
    }
    else {
      local_48 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                           (&PTR_vftable_14c6e47a0,(longlong)(int)local_res8 << 2);
      local_40 = local_res8;
    }
    lVar11 = local_48;
    lVar5 = *param_2;
    iVar6 = (int)(param_2[1] - *param_2 >> 2);
    uVar9 = uVar8;
    local_3c = local_res8;
    if (0 < iVar6) {
      do {
        iVar3 = *(int *)(lVar5 + uVar9 * 4);
        if (-1 < iVar3) {
          _Src = (void *)(lVar4 + (longlong)(int)uVar8 * 4);
          _Dst = (undefined4 *)(lVar11 + (longlong)(int)(iVar3 * uVar2) * 4);
          if (0 < (int)uVar2) {
            if (uVar2 < 4) {
              if (0 < (int)uVar2) {
                lVar10 = (longlong)_Src - (longlong)_Dst;
                lVar7 = (longlong)(int)uVar2;
                do {
                  *_Dst = *(undefined4 *)(lVar10 + (longlong)_Dst);
                  _Dst = _Dst + 1;
                  lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
              }
            }
            else {
              memcpy(_Dst,_Src,(longlong)(int)uVar2 * 4);
            }
          }
        }
        uVar8 = (ulonglong)((int)uVar8 + uVar2);
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar6);
    }
    if (&local_48 != plVar1) {
      local_res8 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*plVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar1,
                   (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 2);
      }
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
      FUN_143821c08(&local_48,&PTR_vftable_14c6e47a0);
      *plVar1 = local_48;
      *(uint *)(param_1 + 0x18) = local_40;
      *(uint *)(param_1 + 0x1c) = local_3c;
      lVar11 = 0;
    }
    if ((-1 < (int)local_res8) && (lVar11 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)(local_res8 & 0x7fffffff) << 2);
    }
  }
  return;
}



// FUNCTION 144cb06f0 FUN_144cb06f0 body=347 status=ok
// SIG undefined FUN_144cb06f0(void)

void FUN_144cb06f0(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 *_Src;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *_Dst;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar9 = (longlong)(int)uVar1;
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar4 = *param_2;
    iVar5 = (int)(param_2[1] - lVar4 >> 2);
    if (0 < iVar5) {
      lVar7 = 0;
      iVar8 = 0;
      do {
        iVar2 = *(int *)(lVar4 + lVar7 * 4);
        if (-1 < iVar2) {
          _Src = (undefined4 *)(lVar3 + (longlong)iVar8 * 4);
          _Dst = (undefined4 *)(lVar3 + (longlong)(int)(iVar2 * uVar1) * 4);
          if ((((int)uVar1 < 1) || (uVar1 < 4)) ||
             ((_Dst <= _Src + (int)(uVar1 - 1) && (_Src <= _Dst + (int)(uVar1 - 1))))) {
            if (0 < lVar9) {
              lVar10 = (longlong)_Src - (longlong)_Dst;
              lVar6 = lVar9;
              do {
                *_Dst = *(undefined4 *)(lVar10 + (longlong)_Dst);
                _Dst = _Dst + 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          else {
            memcpy(_Dst,_Src,lVar9 * 4);
          }
        }
        iVar8 = iVar8 + uVar1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    param_3 = param_3 * *(int *)(param_1 + 8);
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < param_3) {
      FUN_141807aa8(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)param_3);
    }
    if ((*(int *)(param_1 + 0x18) < param_3) || (param_3 < *(int *)(param_1 + 0x18))) {
      *(int *)(param_1 + 0x18) = param_3;
    }
  }
  return;
}



// FUNCTION 144cb0850 FUN_144cb0850 body=151 status=ok
// SIG undefined FUN_144cb0850(void)

void FUN_144cb0850(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x18) + iVar2;
  puVar1 = puVar4 + *(int *)(param_2 + 0x18);
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar5) {
    FUN_141807aa8((longlong *)(param_1 + 0x10),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 0x18) = iVar5;
  return;
}



// FUNCTION 144cb08f0 FUN_144cb08f0 body=289 status=ok
// SIG undefined FUN_144cb08f0(void)

void FUN_144cb08f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 2);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
      FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return;
    }
  }
  else {
    puVar6 = (undefined4 *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x18);
    puVar3 = puVar6 + *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_2 + 0x18) + iVar4;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar7) {
      FUN_141807aa8(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 4);
    for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar6;
      }
      puVar5 = puVar5 + 1;
    }
    *(int *)(param_1 + 0x18) = iVar7;
  }
  return;
}



// FUNCTION 144cb0a20 FUN_144cb0a20 body=70 status=ok
// SIG undefined FUN_144cb0a20(void)

void FUN_144cb0a20(longlong param_1,int param_2)

{
  param_2 = param_2 * *(int *)(param_1 + 8);
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x18) < param_2) || (param_2 < *(int *)(param_1 + 0x18))) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  return;
}



// FUNCTION 144cb0a70 FUN_144cb0a70 body=8 status=ok
// SIG undefined FUN_144cb0a70(void)

ulonglong FUN_144cb0a70(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x18) / (longlong)*(int *)(param_1 + 8) & 0xffffffff;
}



// FUNCTION 144cb0a80 FUN_144cb0a80 body=11 status=ok
// SIG undefined FUN_144cb0a80(void)

bool FUN_144cb0a80(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) == param_2 * *(int *)(param_1 + 8);
}



// FUNCTION 144cb0a90 FUN_144cb0a90 body=149 status=ok
// SIG undefined FUN_144cb0a90(void)

longlong FUN_144cb0a90(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x10),
               (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144cb0b30 FUN_144cb0b30 body=18 status=ok
// SIG undefined FUN_144cb0b30(void)

undefined8 * FUN_144cb0b30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe240;
  return param_2;
}



// FUNCTION 144cb0b50 FUN_144cb0b50 body=136 status=ok
// SIG undefined FUN_144cb0b50(void)

longlong FUN_144cb0b50(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_14502c080();
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((undefined8 *)(param_2 + 8) != puVar1) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
      FUN_144cb8310(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 0x28);
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return param_1;
}



// FUNCTION 144cb0be0 FUN_144cb0be0 body=196 status=ok
// SIG undefined FUN_144cb0be0(void)

longlong FUN_144cb0be0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14502c090();
  plVar1 = param_2 + 1;
  plVar2 = (longlong *)(param_1 + 8);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x28);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6bb0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 0x10) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *plVar1 = 0;
    param_2[2] = 0;
  }
  (**(code **)(*param_2 + 0x50))(param_2,0);
  return param_1;
}



// FUNCTION 144cb0cb0 FUN_144cb0cb0 body=105 status=ok
// SIG undefined FUN_144cb0cb0(void)

undefined8 FUN_144cb0cb0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshFaceOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6b00(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb0d20 FUN_144cb0d20 body=102 status=ok
// SIG undefined FUN_144cb0d20(void)

undefined8 * FUN_144cb0d20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshFaceOverlay<hkaiClipper::BiplanarInnerTypes::ImplicitPlane<24>_>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144cb0d90 FUN_144cb0d90 body=371 status=ok
// SIG undefined FUN_144cb0d90(void)

void FUN_144cb0d90(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_18;
  uint local_10;
  uint local_c;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if ((int)param_3 < 1) {
    local_18 = 0;
    local_10 = 0;
    param_3 = 0x80000000;
  }
  else {
    local_18 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)param_3 * 0x28);
    local_10 = param_3;
  }
  lVar9 = *param_2;
  iVar5 = (int)(param_2[1] - lVar9 >> 2);
  lVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar3 = *(int *)(lVar9 + lVar7 * 4);
      lVar6 = (longlong)iVar3;
      if (-1 < iVar3) {
        uVar4 = puVar8[1];
        puVar2 = (undefined8 *)(local_18 + lVar6 * 0x28);
        *puVar2 = *puVar8;
        puVar2[1] = uVar4;
        uVar4 = puVar8[3];
        puVar2 = (undefined8 *)(local_18 + 0x10 + lVar6 * 0x28);
        *puVar2 = puVar8[2];
        puVar2[1] = uVar4;
        *(undefined8 *)(local_18 + 0x20 + lVar6 * 0x28) = puVar8[4];
      }
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 5;
    } while (lVar7 < iVar5);
  }
  lVar9 = local_18;
  local_c = param_3;
  if (&local_18 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x28);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6bb0(&local_18,&PTR_vftable_14c6e47a0);
    *plVar1 = local_18;
    *(uint *)(param_1 + 0x10) = local_10;
    *(uint *)(param_1 + 0x14) = local_c;
    lVar9 = 0;
    param_3 = 0;
  }
  if ((-1 < (int)param_3) && (lVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(param_3 & 0x7fffffff) * 0x28);
  }
  return;
}



// FUNCTION 144cb0f10 FUN_144cb0f10 body=187 status=ok
// SIG undefined FUN_144cb0f10(void)

void FUN_144cb0f10(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  iVar5 = (int)(((longlong)*(int *)(param_1 + 0x10) * 0x28) / 0x28);
  if (0 < iVar5) {
    lVar4 = *param_2;
    lVar10 = 0;
    puVar12 = puVar3;
    do {
      iVar2 = *(int *)(lVar4 + lVar10 * 4);
      lVar11 = (longlong)iVar2;
      if (-1 < iVar2) {
        uVar9 = puVar12[1];
        puVar3[lVar11 * 5] = *puVar12;
        (puVar3 + lVar11 * 5)[1] = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
        uVar7 = *(undefined4 *)(puVar12 + 3);
        uVar8 = *(undefined4 *)((longlong)puVar12 + 0x1c);
        puVar1 = puVar3 + lVar11 * 5 + 2;
        *(undefined4 *)puVar1 = *(undefined4 *)(puVar12 + 2);
        *(undefined4 *)((longlong)puVar1 + 4) = uVar6;
        *(undefined4 *)(puVar1 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar1 + 0xc) = uVar8;
        puVar3[lVar11 * 5 + 4] = puVar12[4];
      }
      lVar10 = lVar10 + 1;
      puVar12 = puVar12 + 5;
    } while (lVar10 < iVar5);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_144cb7fc0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  if ((*(int *)(param_1 + 0x10) < param_3) || (param_3 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144cb0fd0 FUN_144cb0fd0 body=220 status=ok
// SIG undefined FUN_144cb0fd0(void)

void FUN_144cb0fd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = *(undefined8 **)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  puVar1 = puVar5 + (longlong)*(int *)(param_2 + 0x10) * 5;
  iVar6 = (int)(((longlong)*(int *)(param_2 + 0x10) * 0x28) / 0x28) + iVar2;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar6) {
    FUN_144cb7fc0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x28);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 5) {
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar3;
      uVar3 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar3;
      puVar4[4] = puVar5[4];
    }
    puVar4 = puVar4 + 5;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  return;
}



// FUNCTION 144cb10b0 FUN_144cb10b0 body=357 status=ok
// SIG undefined FUN_144cb10b0(void)

void FUN_144cb10b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x28);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cb6bb0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x10);
    puVar3 = puVar7 + (longlong)*(int *)(param_2 + 0x10) * 5;
    iVar8 = (int)(((longlong)*(int *)(param_2 + 0x10) * 0x28) / 0x28) + iVar4;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar8) {
      FUN_144cb7fc0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    puVar6 = (undefined8 *)(*plVar2 + (longlong)iVar4 * 0x28);
    for (; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      if (puVar6 != (undefined8 *)0x0) {
        uVar5 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar5;
        uVar5 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar5;
        puVar6[4] = puVar7[4];
      }
      puVar6 = puVar6 + 5;
    }
    *(int *)(param_1 + 0x10) = iVar8;
  }
  return;
}



// FUNCTION 144cb1220 FUN_144cb1220 body=67 status=ok
// SIG undefined FUN_144cb1220(void)

void FUN_144cb1220(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cb7fc0(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144cb1270 FUN_144cb1270 body=4 status=ok
// SIG undefined FUN_144cb1270(void)

undefined4 FUN_144cb1270(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144cb1280 FUN_144cb1280 body=45 status=ok
// SIG undefined FUN_144cb1280(void)

void FUN_144cb1280(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)*param_3;
  lVar5 = (longlong)param_2;
  uVar4 = puVar2[1];
  lVar3 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x28);
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  uVar4 = puVar2[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28);
  *puVar1 = puVar2[2];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5 * 0x28) = puVar2[4];
  return;
}



// FUNCTION 144cb12b0 FUN_144cb12b0 body=151 status=ok
// SIG undefined FUN_144cb12b0(void)

longlong FUN_144cb12b0(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x28);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144cb1350 FUN_144cb1350 body=18 status=ok
// SIG undefined FUN_144cb1350(void)

undefined8 * FUN_144cb1350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe2b0;
  return param_2;
}



// FUNCTION 144cb1370 FUN_144cb1370 body=136 status=ok
// SIG undefined FUN_144cb1370(void)

longlong FUN_144cb1370(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_14502c080();
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((undefined8 *)(param_2 + 8) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
      FUN_144cb83c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return param_1;
}



// FUNCTION 144cb1400 FUN_144cb1400 body=194 status=ok
// SIG undefined FUN_144cb1400(void)

longlong FUN_144cb1400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14502c090();
  plVar1 = param_2 + 1;
  plVar2 = (longlong *)(param_1 + 8);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6cb0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 0x10) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *plVar1 = 0;
    param_2[2] = 0;
  }
  (**(code **)(*param_2 + 0x50))(param_2,0);
  return param_1;
}



// FUNCTION 144cb14d0 FUN_144cb14d0 body=105 status=ok
// SIG undefined FUN_144cb14d0(void)

undefined8 FUN_144cb14d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshFaceOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6c20(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb1540 FUN_144cb1540 body=102 status=ok
// SIG undefined FUN_144cb1540(void)

undefined8 * FUN_144cb1540(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::ScalarMeshFaceOverlay<hkFpMath::FpUint<23>_>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144cb15b0 FUN_144cb15b0 body=339 status=ok
// SIG undefined FUN_144cb15b0(void)

void FUN_144cb15b0(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong local_18;
  uint local_10;
  uint local_c;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if ((int)param_3 < 1) {
    local_18 = 0;
    local_10 = 0;
    param_3 = 0x80000000;
  }
  else {
    local_18 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)param_3 << 2);
    local_10 = param_3;
  }
  iVar2 = (int)(param_2[1] - *param_2 >> 2);
  lVar3 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar5 = *param_2 - (longlong)puVar4;
    do {
      iVar2 = *(int *)(lVar5 + (longlong)puVar4);
      if (-1 < iVar2) {
        *(undefined4 *)(local_18 + (longlong)iVar2 * 4) = *puVar4;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = local_18;
  local_c = param_3;
  if (&local_18 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6cb0(&local_18,&PTR_vftable_14c6e47a0);
    *plVar1 = local_18;
    *(uint *)(param_1 + 0x10) = local_10;
    *(uint *)(param_1 + 0x14) = local_c;
    lVar3 = 0;
    param_3 = 0;
  }
  if ((-1 < (int)param_3) && (lVar3 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar3,(ulonglong)(param_3 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cb1710 FUN_144cb1710 body=115 status=ok
// SIG undefined FUN_144cb1710(void)

void FUN_144cb1710(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x10);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (0 < lVar5) {
    lVar3 = *param_2;
    puVar4 = puVar2;
    do {
      iVar1 = *(int *)((lVar3 - (longlong)puVar2) + (longlong)puVar4);
      if (-1 < iVar1) {
        puVar2[iVar1] = *puVar4;
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_147e4f588((undefined8 *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  if ((*(int *)(param_1 + 0x10) < param_3) || (param_3 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144cb1790 FUN_144cb1790 body=151 status=ok
// SIG undefined FUN_144cb1790(void)

void FUN_144cb1790(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = *(undefined4 **)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x10) + iVar2;
  puVar1 = puVar4 + *(int *)(param_2 + 0x10);
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar5) {
    FUN_147e4f588((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  return;
}



// FUNCTION 144cb1830 FUN_144cb1830 body=289 status=ok
// SIG undefined FUN_144cb1830(void)

void FUN_144cb1830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cb6cb0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar6 = (undefined4 *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x10);
    puVar3 = puVar6 + *(int *)(param_2 + 0x10);
    iVar7 = *(int *)(param_2 + 0x10) + iVar4;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
      FUN_147e4f588(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 4);
    for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar6;
      }
      puVar5 = puVar5 + 1;
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  return;
}



// FUNCTION 144cb1960 FUN_144cb1960 body=67 status=ok
// SIG undefined FUN_144cb1960(void)

void FUN_144cb1960(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_147e4f588(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144cb19b0 FUN_144cb19b0 body=4 status=ok
// SIG undefined FUN_144cb19b0(void)

undefined4 FUN_144cb19b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144cb19c0 FUN_144cb19c0 body=16 status=ok
// SIG undefined FUN_144cb19c0(void)

void FUN_144cb19c0(longlong param_1,int param_2,undefined8 *param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 4) = *(undefined4 *)*param_3;
  return;
}



// FUNCTION 144cb19d0 FUN_144cb19d0 body=149 status=ok
// SIG undefined FUN_144cb19d0(void)

longlong FUN_144cb19d0(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144cb1a70 FUN_144cb1a70 body=18 status=ok
// SIG undefined FUN_144cb1a70(void)

undefined8 * FUN_144cb1a70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe320;
  return param_2;
}



// FUNCTION 144cb1a90 FUN_144cb1a90 body=136 status=ok
// SIG undefined FUN_144cb1a90(void)

longlong FUN_144cb1a90(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_14502c080();
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((undefined8 *)(param_2 + 8) != puVar1) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
      FUN_144cb8460(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 0xc);
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return param_1;
}



// FUNCTION 144cb1b20 FUN_144cb1b20 body=196 status=ok
// SIG undefined FUN_144cb1b20(void)

longlong FUN_144cb1b20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14502c090();
  plVar1 = param_2 + 1;
  plVar2 = (longlong *)(param_1 + 8);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0xc);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6dc0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 0x10) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *plVar1 = 0;
    param_2[2] = 0;
  }
  (**(code **)(*param_2 + 0x50))(param_2,0);
  return param_1;
}



// FUNCTION 144cb1bf0 FUN_144cb1bf0 body=105 status=ok
// SIG undefined FUN_144cb1bf0(void)

undefined8 FUN_144cb1bf0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshFaceOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6d20(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb1c60 FUN_144cb1c60 body=102 status=ok
// SIG undefined FUN_144cb1c60(void)

undefined8 * FUN_144cb1c60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshFaceOverlay<hkaiNavMeshGeneration::Simplification::HorizontalLimits>::
              vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144cb1cd0 FUN_144cb1cd0 body=359 status=ok
// SIG undefined FUN_144cb1cd0(void)

void FUN_144cb1cd0(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_18;
  uint local_10;
  uint local_c;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if ((int)param_3 < 1) {
    local_18 = 0;
    local_10 = 0;
    param_3 = 0x80000000;
  }
  else {
    local_18 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)param_3 * 0xc);
    local_10 = param_3;
  }
  lVar6 = *param_2;
  iVar3 = (int)(param_2[1] - lVar6 >> 2);
  lVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = *(int *)(lVar6 + lVar4 * 4);
      if (-1 < iVar2) {
        *(undefined8 *)(local_18 + (longlong)iVar2 * 0xc) = *puVar5;
        *(undefined4 *)(local_18 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar5 + 1);
      }
      lVar4 = lVar4 + 1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
    } while (lVar4 < iVar3);
  }
  lVar6 = local_18;
  local_c = param_3;
  if (&local_18 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0xc);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6dc0(&local_18,&PTR_vftable_14c6e47a0);
    *plVar1 = local_18;
    *(uint *)(param_1 + 0x10) = local_10;
    *(uint *)(param_1 + 0x14) = local_c;
    lVar6 = 0;
    param_3 = 0;
  }
  if ((-1 < (int)param_3) && (lVar6 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar6,(ulonglong)(param_3 & 0x7fffffff) * 0xc);
  }
  return;
}



// FUNCTION 144cb1e40 FUN_144cb1e40 body=174 status=ok
// SIG undefined FUN_144cb1e40(void)

void FUN_144cb1e40(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  iVar4 = (int)(((longlong)*(int *)(param_1 + 0x10) * 0xc) / 0xc);
  if (0 < iVar4) {
    lVar3 = *param_2;
    lVar5 = 0;
    puVar6 = puVar2;
    do {
      iVar1 = *(int *)(lVar3 + lVar5 * 4);
      if (-1 < iVar1) {
        *(undefined8 *)((longlong)puVar2 + (longlong)iVar1 * 0xc) = *puVar6;
        *(undefined4 *)((longlong)puVar2 + (longlong)iVar1 * 0xc + 8) = *(undefined4 *)(puVar6 + 1);
      }
      lVar5 = lVar5 + 1;
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
    } while (lVar5 < iVar4);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_144cb80d0((undefined8 *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  if ((*(int *)(param_1 + 0x10) < param_3) || (param_3 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144cb1ef0 FUN_144cb1ef0 body=210 status=ok
// SIG undefined FUN_144cb1ef0(void)

void FUN_144cb1ef0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
  lVar5 = lVar2 / 6 + (lVar2 >> 0x3f);
  puVar1 = (undefined8 *)((longlong)puVar6 + lVar2);
  iVar7 = ((int)(lVar5 >> 1) - (int)(lVar5 >> 0x3f)) + iVar3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
    FUN_144cb80d0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0xc);
  for (; puVar6 != puVar1; puVar6 = (undefined8 *)((longlong)puVar6 + 0xc)) {
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *puVar6;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    }
    puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar7;
  return;
}



// FUNCTION 144cb1fd0 FUN_144cb1fd0 body=347 status=ok
// SIG undefined FUN_144cb1fd0(void)

void FUN_144cb1fd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0xc);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cb6dc0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar8 = (undefined8 *)*plVar1;
    iVar5 = *(int *)(param_1 + 0x10);
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0xc;
    lVar7 = lVar4 / 6 + (lVar4 >> 0x3f);
    puVar3 = (undefined8 *)((longlong)puVar8 + lVar4);
    iVar9 = ((int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f)) + iVar5;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar9) {
      FUN_144cb80d0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    puVar6 = (undefined8 *)(*plVar2 + (longlong)iVar5 * 0xc);
    for (; puVar8 != puVar3; puVar8 = (undefined8 *)((longlong)puVar8 + 0xc)) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = *puVar8;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
      }
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
    }
    *(int *)(param_1 + 0x10) = iVar9;
  }
  return;
}



// FUNCTION 144cb2130 FUN_144cb2130 body=67 status=ok
// SIG undefined FUN_144cb2130(void)

void FUN_144cb2130(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cb80d0(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144cb2180 FUN_144cb2180 body=4 status=ok
// SIG undefined FUN_144cb2180(void)

undefined4 FUN_144cb2180(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144cb2190 FUN_144cb2190 body=36 status=ok
// SIG undefined FUN_144cb2190(void)

void FUN_144cb2190(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_3 = (undefined8 *)*param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar1 + (longlong)param_2 * 0xc) = *param_3;
  *(undefined4 *)(lVar1 + (longlong)param_2 * 0xc + 8) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 144cb21c0 FUN_144cb21c0 body=151 status=ok
// SIG undefined FUN_144cb21c0(void)

longlong FUN_144cb21c0(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0xc);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144cb2260 FUN_144cb2260 body=18 status=ok
// SIG undefined FUN_144cb2260(void)

undefined8 * FUN_144cb2260(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe390;
  return param_2;
}



// FUNCTION 144cb2280 FUN_144cb2280 body=254 status=ok
// SIG undefined FUN_144cb2280(void)

longlong FUN_144cb2280(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN_145025480();
  plVar1 = (longlong *)(param_1 + 8);
  if ((longlong *)(param_2 + 8) != plVar1) {
    iVar3 = *(int *)(param_2 + 0x10);
    puVar10 = *(undefined8 **)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar3) {
      FUN_144cb8510(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar9 = (undefined8 *)*plVar1;
    iVar4 = iVar3;
    if (*(int *)(param_1 + 0x10) < iVar3) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if ((puVar9 != puVar10) && (lVar7 = (longlong)iVar4, 0 < iVar4)) {
      puVar6 = puVar9;
      do {
        puVar2 = (undefined8 *)(((longlong)puVar10 - (longlong)puVar9) + (longlong)puVar6);
        uVar5 = puVar2[1];
        *puVar6 = *puVar2;
        puVar6[1] = uVar5;
        puVar6[2] = *(undefined8 *)
                     (((longlong)puVar10 - (longlong)puVar9) + -8 + (longlong)(puVar6 + 3));
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 3;
      } while (lVar7 != 0);
    }
    puVar10 = puVar10 + (longlong)iVar4 * 3;
    if (0 < iVar3 - iVar4) {
      uVar8 = (ulonglong)(uint)(iVar3 - iVar4);
      puVar9 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x18);
      do {
        if (puVar9 != (undefined8 *)0x0) {
          uVar5 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar5;
          puVar6 = puVar10 + 2;
          puVar10 = puVar10 + 3;
          puVar9[2] = *puVar6;
        }
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 3;
      } while (uVar8 != 0);
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  return param_1;
}



// FUNCTION 144cb2380 FUN_144cb2380 body=172 status=ok
// SIG undefined FUN_144cb2380(void)

longlong FUN_144cb2380(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145025490();
  plVar2 = (longlong *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x18);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6ed0(plVar2,&PTR_vftable_14c6e47a0);
    *plVar1 = *plVar2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *plVar2 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 144cb2430 FUN_144cb2430 body=105 status=ok
// SIG undefined FUN_144cb2430(void)

undefined8 FUN_144cb2430(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshEdgeOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6e30(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb24a0 FUN_144cb24a0 body=102 status=ok
// SIG undefined FUN_144cb24a0(void)

undefined8 * FUN_144cb24a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshEdgeOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::InputEdgeEndpoints>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144cb2510 FUN_144cb2510 body=452 status=ok
// SIG undefined FUN_144cb2510(void)

void FUN_144cb2510(longlong param_1,undefined8 *param_2)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  ppuVar1 = (undefined4 **)(param_1 + 8);
  puVar11 = *ppuVar1;
  lVar8 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar9 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  lVar8 = (longlong)(int)uVar9;
  if ((int)uVar9 < 1) {
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    uVar9 = 0x80000000;
  }
  else {
    local_28 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,lVar8 * 0x18);
    local_20 = uVar9;
  }
  if (local_28 != local_28 + lVar8 * 6) {
    puVar7 = local_28 + 5;
    do {
      if (puVar7 + -5 != (undefined4 *)0x0) {
        puVar7[-5] = 0;
        *(undefined8 *)(puVar7 + -4) = 0;
        *(undefined8 *)(puVar7 + -2) = 0;
        *puVar7 = 0;
      }
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 6;
    } while (puVar2 != local_28 + lVar8 * 6);
  }
  piVar10 = (int *)*param_2;
  iVar6 = (int)(param_2[1] - (longlong)piVar10 >> 2);
  lVar8 = (longlong)iVar6;
  puVar7 = local_28;
  if (0 < iVar6) {
    do {
      iVar6 = *piVar10;
      piVar10 = piVar10 + 1;
      puVar2 = puVar11 + (longlong)iVar6 * 6;
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *puVar7 = *puVar2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar11 + (longlong)iVar6 * 6 + 4);
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 6;
    } while (lVar8 != 0);
  }
  puVar11 = local_28;
  local_1c = uVar9;
  if (&local_28 != ppuVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*ppuVar1 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*ppuVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x18);
    }
    *ppuVar1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6ed0(&local_28,&PTR_vftable_14c6e47a0);
    *ppuVar1 = local_28;
    *(uint *)(param_1 + 0x10) = local_20;
    *(uint *)(param_1 + 0x14) = local_1c;
    puVar11 = (undefined4 *)0x0;
    uVar9 = 0;
  }
  if ((-1 < (int)uVar9) && (puVar11 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar11,(ulonglong)(uVar9 & 0x7fffffff) * 0x18);
  }
  return;
}



// FUNCTION 144cb26e0 FUN_144cb26e0 body=269 status=ok
// SIG undefined FUN_144cb26e0(void)

void FUN_144cb26e0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  plVar1 = (longlong *)(param_1 + 8);
  puVar4 = (undefined4 *)*plVar1;
  lVar10 = 0;
  iVar3 = (int)(((longlong)*(int *)(param_1 + 0x10) * 0x18) / 0x18);
  if (0 < iVar3) {
    lVar5 = *param_2;
    puVar11 = puVar4;
    do {
      iVar2 = *(int *)(lVar5 + lVar10 * 4);
      if (-1 < iVar2) {
        uVar6 = puVar11[1];
        uVar7 = puVar11[2];
        uVar8 = puVar11[3];
        puVar9 = puVar4 + (longlong)iVar2 * 6;
        *puVar9 = *puVar11;
        puVar9[1] = uVar6;
        puVar9[2] = uVar7;
        puVar9[3] = uVar8;
        *(undefined8 *)(puVar4 + (longlong)iVar2 * 6 + 4) = *(undefined8 *)(puVar11 + 4);
      }
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 6;
    } while (lVar10 < iVar3);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_144cb81e0(plVar1,&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < param_3) {
    *(int *)(param_1 + 0x10) = param_3;
    puVar4 = (undefined4 *)(*plVar1 + (longlong)param_3 * 0x18);
    puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x18);
    if (puVar11 != puVar4) {
      puVar9 = puVar11 + 5;
      do {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
          *(undefined8 *)(puVar9 + -4) = 0;
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0;
        }
        puVar11 = puVar11 + 6;
        puVar9 = puVar9 + 6;
      } while (puVar11 != puVar4);
    }
  }
  else if (param_3 < iVar3) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144cb27f0 FUN_144cb27f0 body=212 status=ok
// SIG undefined FUN_144cb27f0(void)

void FUN_144cb27f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)*(int *)(param_2 + 0x10) * 0x18;
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  puVar1 = puVar6 + (longlong)*(int *)(param_2 + 0x10) * 3;
  iVar7 = ((int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f)) + iVar2;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
    FUN_144cb81e0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = puVar6[1];
      *puVar4 = *puVar6;
      puVar4[1] = uVar3;
      puVar4[2] = puVar6[2];
    }
    puVar4 = puVar4 + 3;
  }
  *(int *)(param_1 + 0x10) = iVar7;
  return;
}



// FUNCTION 144cb28d0 FUN_144cb28d0 body=349 status=ok
// SIG undefined FUN_144cb28d0(void)

void FUN_144cb28d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x18);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cb6ed0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar8 = (undefined8 *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x10);
    lVar7 = (longlong)*(int *)(param_2 + 0x10) * 0x18;
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    puVar3 = puVar8 + (longlong)*(int *)(param_2 + 0x10) * 3;
    iVar9 = ((int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f)) + iVar4;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar9) {
      FUN_144cb81e0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    puVar6 = (undefined8 *)(*plVar2 + (longlong)iVar4 * 0x18);
    for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
      if (puVar6 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *puVar6 = *puVar8;
        puVar6[1] = uVar5;
        puVar6[2] = puVar8[2];
      }
      puVar6 = puVar6 + 3;
    }
    *(int *)(param_1 + 0x10) = iVar9;
  }
  return;
}



// FUNCTION 144cb2a30 FUN_144cb2a30 body=164 status=ok
// SIG undefined FUN_144cb2a30(void)

void FUN_144cb2a30(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cb81e0((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < param_2) {
    lVar3 = *(longlong *)(param_1 + 8);
    *(int *)(param_1 + 0x10) = param_2;
    puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
    puVar5 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
    if (puVar5 != puVar1) {
      puVar4 = puVar5 + 5;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          *(undefined8 *)(puVar4 + -4) = 0;
          *(undefined8 *)(puVar4 + -2) = 0;
          *puVar4 = 0;
        }
        puVar5 = puVar5 + 6;
        puVar4 = puVar4 + 6;
      } while (puVar5 != puVar1);
      return;
    }
  }
  else if (param_2 < iVar2) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144cb2ae0 FUN_144cb2ae0 body=4 status=ok
// SIG undefined FUN_144cb2ae0(void)

undefined4 FUN_144cb2ae0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144cb2af0 FUN_144cb2af0 body=31 status=ok
// SIG undefined FUN_144cb2af0(void)

void FUN_144cb2af0(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_144cb7ea0(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
    return;
  }
  return;
}



// FUNCTION 144cb2b10 FUN_144cb2b10 body=132 status=ok
// SIG undefined FUN_144cb2b10(void)

void FUN_144cb2b10(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x10) + 1;
  puVar2 = (undefined4 *)(*plVar1 + (longlong)param_2 * 0x18);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  uVar3 = *(undefined8 *)(*plVar1 + 0x10 + (longlong)param_2 * 0x18);
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar8) {
    FUN_144cb7ea0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x10) * 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar2 + 4) = uVar3;
  }
  *(int *)(param_1 + 0x10) = iVar8;
  return;
}



// FUNCTION 144cb2ba0 FUN_144cb2ba0 body=25 status=ok
// SIG undefined FUN_144cb2ba0(void)

bool FUN_144cb2ba0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  return iVar1 == param_2;
}



// FUNCTION 144cb2bc0 FUN_144cb2bc0 body=33 status=ok
// SIG undefined FUN_144cb2bc0(void)

void FUN_144cb2bc0(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_1499c0628,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144cb2bf0 FUN_144cb2bf0 body=151 status=ok
// SIG undefined FUN_144cb2bf0(void)

longlong FUN_144cb2bf0(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144cb2c90 FUN_144cb2c90 body=18 status=ok
// SIG undefined FUN_144cb2c90(void)

undefined8 * FUN_144cb2c90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6fe400;
  return param_2;
}



// FUNCTION 144cb2cb0 FUN_144cb2cb0 body=136 status=ok
// SIG undefined FUN_144cb2cb0(void)

longlong FUN_144cb2cb0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_145025480();
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((undefined8 *)(param_2 + 8) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar2) {
      FUN_144cb83c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return param_1;
}



// FUNCTION 144cb2d40 FUN_144cb2d40 body=170 status=ok
// SIG undefined FUN_144cb2d40(void)

longlong FUN_144cb2d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145025490();
  plVar2 = (longlong *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6cb0(plVar2,&PTR_vftable_14c6e47a0);
    *plVar1 = *plVar2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *plVar2 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 144cb2df0 FUN_144cb2df0 body=105 status=ok
// SIG undefined FUN_144cb2df0(void)

undefined8 FUN_144cb2df0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  lVar1 = (*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ScalarMeshEdgeOverlay");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144cb6f60(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144cb2e60 FUN_144cb2e60 body=102 status=ok
// SIG undefined FUN_144cb2e60(void)

undefined8 * FUN_144cb2e60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshEdgeOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkFpMath::FpUint<23>_>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 144cb2ed0 FUN_144cb2ed0 body=346 status=ok
// SIG undefined FUN_144cb2ed0(void)

void FUN_144cb2ed0(longlong param_1,longlong *param_2)

{
  undefined4 **ppuVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *local_18;
  uint local_10;
  uint local_c;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  ppuVar1 = (undefined4 **)(param_1 + 8);
  puVar7 = *ppuVar1;
  if ((int)uVar5 < 1) {
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
    uVar5 = 0x80000000;
  }
  else {
    local_18 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 << 2);
    local_10 = uVar5;
  }
  lVar2 = *param_2;
  iVar3 = (int)(param_2[1] - lVar2 >> 2);
  lVar6 = (longlong)iVar3;
  if (0 < iVar3) {
    puVar4 = local_18;
    do {
      *puVar4 = puVar7[*(int *)((longlong)puVar4 + (lVar2 - (longlong)local_18))];
      lVar6 = lVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  puVar7 = local_18;
  local_c = uVar5;
  if (&local_18 != ppuVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*ppuVar1 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*ppuVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    }
    *ppuVar1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    FUN_144cb6cb0(&local_18,&PTR_vftable_14c6e47a0);
    *ppuVar1 = local_18;
    *(uint *)(param_1 + 0x10) = local_10;
    *(uint *)(param_1 + 0x14) = local_c;
    puVar7 = (undefined4 *)0x0;
    uVar5 = 0;
  }
  if ((-1 < (int)uVar5) && (puVar7 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar7,(ulonglong)(uVar5 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cb3030 FUN_144cb3030 body=115 status=ok
// SIG undefined FUN_144cb3030(void)

void FUN_144cb3030(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x10);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (0 < lVar5) {
    lVar3 = *param_2;
    puVar4 = puVar2;
    do {
      iVar1 = *(int *)((lVar3 - (longlong)puVar2) + (longlong)puVar4);
      if (-1 < iVar1) {
        puVar2[iVar1] = *puVar4;
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_3) {
    FUN_147e4f588((undefined8 *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)param_3);
  }
  if ((*(int *)(param_1 + 0x10) < param_3) || (param_3 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 144cb30b0 FUN_144cb30b0 body=151 status=ok
// SIG undefined FUN_144cb30b0(void)

void FUN_144cb30b0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = *(undefined4 **)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x10) + iVar2;
  puVar1 = puVar4 + *(int *)(param_2 + 0x10);
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar5) {
    FUN_147e4f588((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  return;
}



// FUNCTION 144cb3150 FUN_144cb3150 body=289 status=ok
// SIG undefined FUN_144cb3150(void)

void FUN_144cb3150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_2 + 8);
  plVar2 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
      }
      *plVar2 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      FUN_144cb6cb0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar6 = (undefined4 *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x10);
    puVar3 = puVar6 + *(int *)(param_2 + 0x10);
    iVar7 = *(int *)(param_2 + 0x10) + iVar4;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar7) {
      FUN_147e4f588(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 4);
    for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar6;
      }
      puVar5 = puVar5 + 1;
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  return;
}



// FUNCTION 144cb3280 FUN_144cb3280 body=67 status=ok
// SIG undefined FUN_144cb3280(void)

void FUN_144cb3280(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_147e4f588(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x10) < param_2) || (param_2 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}



// FUNCTION 144cb32d0 FUN_144cb32d0 body=4 status=ok
// SIG undefined FUN_144cb32d0(void)

undefined4 FUN_144cb32d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144cb32e0 FUN_144cb32e0 body=31 status=ok
// SIG undefined FUN_144cb32e0(void)

void FUN_144cb32e0(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_147e4df80(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)param_2);
    return;
  }
  return;
}



// FUNCTION 144cb3300 FUN_144cb3300 body=100 status=ok
// SIG undefined FUN_144cb3300(void)

void FUN_144cb3300(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + 1;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 4);
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar3) {
    FUN_147e4df80((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar2;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}


