// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14870a2ae FUN_14870a2ae body=58 status=ok
// SIG undefined FUN_14870a2ae(void)

void FUN_14870a2ae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b240e90;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1457f72cc(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14870a336 FUN_14870a336 body=65 status=ok
// SIG undefined FUN_14870a336(void)

undefined8 * FUN_14870a336(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b240e90;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f72cc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870a378 FUN_14870a378 body=55 status=ok
// SIG undefined FUN_14870a378(void)

void FUN_14870a378(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64850 = FUN_140002ddd(FUN_146504601,uVar1,L"GbxSkillComponentDataItem_DamageModifier");
  }
  return;
}



// FUNCTION 14870a3b0 FUN_14870a3b0 body=162 status=ok
// SIG undefined FUN_14870a3b0(void)

void FUN_14870a3b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b241000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870a454 FUN_14870a454 body=146 status=ok
// SIG undefined FUN_14870a454(void)

void FUN_14870a454(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b241000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870a50c FUN_14870a50c body=54 status=ok
// SIG undefined FUN_14870a50c(void)

undefined1 FUN_14870a50c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870a65a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14870a56a FUN_14870a56a body=59 status=ok
// SIG undefined FUN_14870a56a(void)

undefined8 FUN_14870a56a(longlong *param_1)

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



// FUNCTION 14870a5b0 FUN_14870a5b0 body=34 status=ok
// SIG undefined FUN_14870a5b0(void)

void FUN_14870a5b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145c6bc32(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14870a620 FUN_14870a620 body=57 status=ok
// SIG undefined FUN_14870a620(void)

void FUN_14870a620(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64868 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64868 = FUN_140002ddd(FUN_146504693,uVar1,L"GbxSkillComponentData_DamageModifier");
  }
  return;
}



// FUNCTION 14870a65a FUN_14870a65a body=91 status=ok
// SIG undefined FUN_14870a65a(void)

longlong FUN_14870a65a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145c43818(param_1 + 0x38,param_2 + 0x38);
  FUN_148707dde(param_1 + 0x50,param_2 + 0x50);
  FUN_14870a6b6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 14870a6b6 FUN_14870a6b6 body=95 status=ok
// SIG undefined FUN_14870a6b6(void)

undefined8 * FUN_14870a6b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c6bc6b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870a716(param_1,iVar1);
      FUN_14870a789(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870a716 FUN_14870a716 body=115 status=ok
// SIG undefined FUN_14870a716(void)

void FUN_14870a716(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870a789 FUN_14870a789 body=52 status=ok
// SIG undefined FUN_14870a789(void)

void FUN_14870a789(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870a7be(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 14870a7be FUN_14870a7be body=115 status=ok
// SIG undefined FUN_14870a7be(void)

undefined8 * FUN_14870a7be(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148709076();
  *param_1 = &PTR_FUN_14b240e90;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_14861625a(param_1 + 7,iVar1,0);
    FUN_1486162cd(param_1[7],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 14870a89a FUN_14870a89a body=59 status=ok
// SIG undefined FUN_14870a89a(void)

undefined8 FUN_14870a89a(longlong *param_1)

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



// FUNCTION 14870a93a FUN_14870a93a body=29 status=ok
// SIG undefined FUN_14870a93a(void)

undefined8 FUN_14870a93a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870a958 FUN_14870a958 body=55 status=ok
// SIG undefined FUN_14870a958(void)

void FUN_14870a958(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64880 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64880 = FUN_140002ddd(FUN_141857544,uVar1,L"GbxSkillComponentData_DelegateData");
  }
  return;
}



// FUNCTION 14870a990 FUN_14870a990 body=54 status=ok
// SIG undefined FUN_14870a990(void)

undefined8 * FUN_14870a990(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/Delegates/GbxSkillComponent_Delegate.h"
                ,0x96,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_DelegateData::CreateListener");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14870aa04 FUN_14870aa04 body=54 status=ok
// SIG undefined FUN_14870aa04(void)

undefined1 FUN_14870aa04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870ab4e(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14870aa62 FUN_14870aa62 body=59 status=ok
// SIG undefined FUN_14870aa62(void)

undefined8 FUN_14870aa62(longlong *param_1)

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



// FUNCTION 14870aaa8 FUN_14870aaa8 body=32 status=ok
// SIG undefined FUN_14870aaa8(void)

void FUN_14870aaa8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14592e95e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870ab16 FUN_14870ab16 body=55 status=ok
// SIG undefined FUN_14870ab16(void)

void FUN_14870ab16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64898 = FUN_140002ddd(FUN_146504789,uVar1,L"GbxSkillComponentData_Delegate_EventEx");
  }
  return;
}



// FUNCTION 14870ab4e FUN_14870ab4e body=85 status=ok
// SIG undefined FUN_14870ab4e(void)

longlong FUN_14870ab4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_1401f3db8(param_1 + 0x28,param_2 + 0x28);
  FUN_1401f3db8(param_1 + 0x40,param_2 + 0x40);
  FUN_148707dde(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14870aba4 FUN_14870aba4 body=72 status=ok
// SIG undefined FUN_14870aba4(void)

void FUN_14870aba4(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b242940;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14870abec FUN_14870abec body=39 status=ok
// SIG undefined FUN_14870abec(void)

void FUN_14870abec(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b242940;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14870ac38 FUN_14870ac38 body=87 status=ok
// SIG undefined FUN_14870ac38(void)

undefined1 FUN_14870ac38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    FUN_14870ad92(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14870acb8 FUN_14870acb8 body=59 status=ok
// SIG undefined FUN_14870acb8(void)

undefined8 FUN_14870acb8(longlong *param_1)

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



// FUNCTION 14870acfe FUN_14870acfe body=32 status=ok
// SIG undefined FUN_14870acfe(void)

void FUN_14870acfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140d8c28a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14870ad6c FUN_14870ad6c body=38 status=ok
// SIG undefined FUN_14870ad6c(void)

undefined8 FUN_14870ad6c(undefined8 param_1,int param_2)

{
  FUN_140d8c28a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870ad92 FUN_14870ad92 body=93 status=ok
// SIG undefined FUN_14870ad92(void)

undefined8 * FUN_14870ad92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d8c315(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870adf0(param_1,iVar1);
      FUN_14870ae52(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870adf0 FUN_14870adf0 body=98 status=ok
// SIG undefined FUN_14870adf0(void)

void FUN_14870adf0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870ae52 FUN_14870ae52 body=45 status=ok
// SIG undefined FUN_14870ae52(void)

void FUN_14870ae52(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14870ae80 FUN_14870ae80 body=142 status=ok
// SIG undefined FUN_14870ae80(void)

void FUN_14870ae80(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b2416b0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870af26 FUN_14870af26 body=54 status=ok
// SIG undefined FUN_14870af26(void)

undefined1 FUN_14870af26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870b0b4(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14870af84 FUN_14870af84 body=59 status=ok
// SIG undefined FUN_14870af84(void)

undefined8 FUN_14870af84(longlong *param_1)

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



// FUNCTION 14870afca FUN_14870afca body=32 status=ok
// SIG undefined FUN_14870afca(void)

void FUN_14870afca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870b038(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870b038 FUN_14870b038 body=123 status=ok
// SIG undefined FUN_14870b038(void)

void FUN_14870b038(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2416b0;
  FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  FUN_14117e8b7(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14870b0b4 FUN_14870b0b4 body=85 status=ok
// SIG undefined FUN_14870b0b4(void)

longlong FUN_14870b0b4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_14870b10a(param_1 + 0x30,param_2 + 0x30);
  FUN_1401f3db8(param_1 + 0x40,param_2 + 0x40);
  FUN_148707dde(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14870b10a FUN_14870b10a body=93 status=ok
// SIG undefined FUN_14870b10a(void)

undefined8 * FUN_14870b10a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14117e8b7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870b168(param_1,iVar1);
      FUN_14870b1d7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870b168 FUN_14870b168 body=111 status=ok
// SIG undefined FUN_14870b168(void)

void FUN_14870b168(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870b1d7 FUN_14870b1d7 body=52 status=ok
// SIG undefined FUN_14870b1d7(void)

void FUN_14870b1d7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870b20c(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 14870b20c FUN_14870b20c body=246 status=ok
// SIG undefined FUN_14870b20c(void)

undefined8 * FUN_14870b20c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_14b2413e0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1401f3db8(param_1 + 5,param_2 + 0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 0x40);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_148707e3c(param_1 + 0xb,iVar1,0);
    FUN_1404e37a8(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14870b304 FUN_14870b304 body=101 status=ok
// SIG undefined FUN_14870b304(void)

void FUN_14870b304(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b2428d0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 14870b36a FUN_14870b36a body=81 status=ok
// SIG undefined FUN_14870b36a(void)

void FUN_14870b36a(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b2428d0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 14870b3e0 FUN_14870b3e0 body=104 status=ok
// SIG undefined FUN_14870b3e0(void)

undefined1 FUN_14870b3e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    FUN_1487089fc(param_2 + 0x58,param_3 + 0x58);
    FUN_14870ad92(param_2 + 0x98,param_3 + 0x98);
    param_2 = param_2 + 0xa8;
    param_3 = param_3 + 0xa8;
  }
  return 1;
}



// FUNCTION 14870b470 FUN_14870b470 body=59 status=ok
// SIG undefined FUN_14870b470(void)

undefined8 FUN_14870b470(longlong *param_1)

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



// FUNCTION 14870b4bc FUN_14870b4bc body=40 status=ok
// SIG undefined FUN_14870b4bc(void)

void FUN_14870b4bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_145e2af1a(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14870b532 FUN_14870b532 body=38 status=ok
// SIG undefined FUN_14870b532(void)

undefined8 FUN_14870b532(undefined8 param_1,int param_2)

{
  FUN_145e2af1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870b558 FUN_14870b558 body=55 status=ok
// SIG undefined FUN_14870b558(void)

void FUN_14870b558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb648e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb648e0 = FUN_140002ddd(FUN_14650493f,uVar1,L"GbxSkillComponent_Delegate");
  }
  return;
}



// FUNCTION 14870b600 FUN_14870b600 body=133 status=ok
// SIG undefined FUN_14870b600(void)

undefined1 FUN_14870b600(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      FUN_148707dde(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_1401f3db8(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870b6ae FUN_14870b6ae body=59 status=ok
// SIG undefined FUN_14870b6ae(void)

undefined8 FUN_14870b6ae(longlong *param_1)

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



// FUNCTION 14870b6f4 FUN_14870b6f4 body=34 status=ok
// SIG undefined FUN_14870b6f4(void)

void FUN_14870b6f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_145c174d8(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14870b764 FUN_14870b764 body=38 status=ok
// SIG undefined FUN_14870b764(void)

undefined8 FUN_14870b764(undefined8 param_1,int param_2)

{
  FUN_145c174d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870b78a FUN_14870b78a body=55 status=ok
// SIG undefined FUN_14870b78a(void)

void FUN_14870b78a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb648f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb648f8 = FUN_140002ddd(FUN_1465049d1,uVar1,L"GbxSkillComponentData_Delegate_Event");
  }
  return;
}



// FUNCTION 14870b7c2 FUN_14870b7c2 body=162 status=ok
// SIG undefined FUN_14870b7c2(void)

void FUN_14870b7c2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b241b10;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870b866 FUN_14870b866 body=146 status=ok
// SIG undefined FUN_14870b866(void)

void FUN_14870b866(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b241b10;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870b91e FUN_14870b91e body=54 status=ok
// SIG undefined FUN_14870b91e(void)

undefined1 FUN_14870b91e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870ba6c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14870b97c FUN_14870b97c body=59 status=ok
// SIG undefined FUN_14870b97c(void)

undefined8 FUN_14870b97c(longlong *param_1)

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



// FUNCTION 14870b9c2 FUN_14870b9c2 body=34 status=ok
// SIG undefined FUN_14870b9c2(void)

void FUN_14870b9c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145c17478(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14870ba32 FUN_14870ba32 body=57 status=ok
// SIG undefined FUN_14870ba32(void)

void FUN_14870ba32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64910 = FUN_140002ddd(FUN_146504a63,uVar1,L"GbxSkillComponentData_Delegate");
  }
  return;
}



// FUNCTION 14870ba6c FUN_14870ba6c body=91 status=ok
// SIG undefined FUN_14870ba6c(void)

longlong FUN_14870ba6c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145c43818(param_1 + 0x38,param_2 + 0x38);
  FUN_148707dde(param_1 + 0x50,param_2 + 0x50);
  FUN_14870bac8(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 14870bac8 FUN_14870bac8 body=95 status=ok
// SIG undefined FUN_14870bac8(void)

undefined8 * FUN_14870bac8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c174b1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870bb28(param_1,iVar1);
      FUN_14870bb9b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870bb28 FUN_14870bb28 body=115 status=ok
// SIG undefined FUN_14870bb28(void)

void FUN_14870bb28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870bb9b FUN_14870bb9b body=104 status=ok
// SIG undefined FUN_14870bb9b(void)

void FUN_14870bb9b(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148709076(param_1,param_2);
    *param_1 = &PTR_FUN_14b2419a0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_1401f3db8(param_1 + 7,param_2 + 0x38);
    param_1 = param_1 + 10;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 14870bc5c FUN_14870bc5c body=62 status=ok
// SIG undefined FUN_14870bc5c(void)

undefined1 FUN_14870bc5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870bcc2 FUN_14870bcc2 body=59 status=ok
// SIG undefined FUN_14870bcc2(void)

undefined8 FUN_14870bcc2(longlong *param_1)

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



// FUNCTION 14870bd08 FUN_14870bd08 body=34 status=ok
// SIG undefined FUN_14870bd08(void)

void FUN_14870bd08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14870bdd6(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14870bd78 FUN_14870bd78 body=38 status=ok
// SIG undefined FUN_14870bd78(void)

undefined8 FUN_14870bd78(undefined8 param_1,int param_2)

{
  FUN_14870bdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870bd9e FUN_14870bd9e body=55 status=ok
// SIG undefined FUN_14870bd9e(void)

void FUN_14870bd9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64930 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64930 =
         FUN_140002ddd(FUN_146504b23,uVar1,L"GbxSkillComponentData_DelegateData_ActorHit");
  }
  return;
}



// FUNCTION 14870bdd6 FUN_14870bdd6 body=66 status=ok
// SIG undefined FUN_14870bdd6(void)

void FUN_14870bdd6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b241ca0;
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
                    /* WARNING: Could not recover jumptable at 0x00014870be0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14870be56 FUN_14870be56 body=70 status=ok
// SIG undefined FUN_14870be56(void)

undefined8 FUN_14870be56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_14870bfb0(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870bec4 FUN_14870bec4 body=59 status=ok
// SIG undefined FUN_14870bec4(void)

undefined8 FUN_14870bec4(longlong *param_1)

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



// FUNCTION 14870bf0a FUN_14870bf0a body=32 status=ok
// SIG undefined FUN_14870bf0a(void)

void FUN_14870bf0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14870bf78(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14870bf78 FUN_14870bf78 body=56 status=ok
// SIG undefined FUN_14870bf78(void)

void FUN_14870bf78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b242010;
  FUN_140f0cc9b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14870bfb0 FUN_14870bfb0 body=93 status=ok
// SIG undefined FUN_14870bfb0(void)

undefined8 * FUN_14870bfb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f0cc9b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870c00e(param_1,iVar1);
      FUN_14870c081(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870c00e FUN_14870c00e body=115 status=ok
// SIG undefined FUN_14870c00e(void)

void FUN_14870c00e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870c081 FUN_14870c081 body=76 status=ok
// SIG undefined FUN_14870c081(void)

void FUN_14870c081(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14870c1aa FUN_14870c1aa body=59 status=ok
// SIG undefined FUN_14870c1aa(void)

undefined8 FUN_14870c1aa(longlong *param_1)

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



// FUNCTION 14870c24a FUN_14870c24a body=31 status=ok
// SIG undefined FUN_14870c24a(void)

undefined8 FUN_14870c24a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870c29a FUN_14870c29a body=62 status=ok
// SIG undefined FUN_14870c29a(void)

undefined1 FUN_14870c29a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1486fec9e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870c300 FUN_14870c300 body=59 status=ok
// SIG undefined FUN_14870c300(void)

undefined8 FUN_14870c300(longlong *param_1)

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



// FUNCTION 14870c416 FUN_14870c416 body=54 status=ok
// SIG undefined FUN_14870c416(void)

undefined1 FUN_14870c416(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870c5aa(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14870c474 FUN_14870c474 body=59 status=ok
// SIG undefined FUN_14870c474(void)

undefined8 FUN_14870c474(longlong *param_1)

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



// FUNCTION 14870c4ba FUN_14870c4ba body=48 status=ok
// SIG undefined FUN_14870c4ba(void)

void FUN_14870c4ba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b242690;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 14870c538 FUN_14870c538 body=57 status=ok
// SIG undefined FUN_14870c538(void)

undefined8 * FUN_14870c538(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b242690;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870c572 FUN_14870c572 body=55 status=ok
// SIG undefined FUN_14870c572(void)

void FUN_14870c572(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb649f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb649f8 =
         FUN_140002ddd(FUN_146504ee1,uVar1,L"GbxSkillComponentData_DelegateData_SkillParam");
  }
  return;
}



// FUNCTION 14870c5aa FUN_14870c5aa body=87 status=ok
// SIG undefined FUN_14870c5aa(void)

longlong FUN_14870c5aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return param_1;
}



// FUNCTION 14870c606 FUN_14870c606 body=65 status=ok
// SIG undefined FUN_14870c606(void)

void FUN_14870c606(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870c654 FUN_14870c654 body=344 status=ok
// SIG undefined FUN_14870c654(void)

void FUN_14870c654(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  uStack_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  FUN_14896faa2(local_58,&local_98,uVar1);
  FUN_1403719a4(param_3,local_58);
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870c7b0 FUN_14870c7b0 body=595 status=ok
// SIG undefined FUN_14870c7b0(void)

void FUN_14870c7b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  uVar1 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_a8;
  uVar2 = FUN_14477b664(uStack_a0);
  local_c0 = FUN_14477b664(uVar2);
  local_b8 = local_98;
  local_e0 = local_88;
  uVar2 = FUN_14477b664(uStack_80);
  local_d8 = FUN_14477b664(uVar2);
  local_d0 = local_78;
  local_e8 = uVar1;
  FUN_143e28468(local_60,local_68,&local_e0,&local_c8);
  FUN_1403719a4(param_3,local_60);
  FUN_144a2da94(local_60);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870ca10 FUN_14870ca10 body=55 status=ok
// SIG undefined FUN_14870ca10(void)

void FUN_14870ca10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64c48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64c48 = FUN_14171c317(FUN_14650638d,uVar1,L"EResourcePoolComponentEvent");
  }
  return;
}



// FUNCTION 14870ca48 FUN_14870ca48 body=553 status=ok
// SIG undefined FUN_14870ca48(void)

void FUN_14870ca48(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_70 = 0;
  local_68 = 10;
  local_60 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar2 = local_74;
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_70;
  local_88 = local_68;
  local_80 = 0;
  local_a8 = local_58;
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_a0 = (undefined4)uStack_50;
  uStack_9c = uStack_50._4_4_;
  uStack_98 = (undefined4)local_48;
  uStack_94 = local_48._4_4_;
  FUN_14897118a(&local_a8,&local_90,uVar2,uVar1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870cc72 FUN_14870cc72 body=358 status=ok
// SIG undefined FUN_14870cc72(void)

void FUN_14870cc72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 10;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  uVar1 = FUN_148970d6a(&local_80,&local_68);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870cdda FUN_14870cdda body=358 status=ok
// SIG undefined FUN_14870cdda(void)

void FUN_14870cdda(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 10;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  uVar1 = FUN_148970c08(&local_80,&local_68);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870cf42 FUN_14870cf42 body=358 status=ok
// SIG undefined FUN_14870cf42(void)

void FUN_14870cf42(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 10;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  uVar1 = FUN_148970e38(&local_80,&local_68);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870d0aa FUN_14870d0aa body=553 status=ok
// SIG undefined FUN_14870d0aa(void)

void FUN_14870d0aa(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_70 = 0;
  local_68 = 10;
  local_60 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar2 = local_74;
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_70;
  local_88 = local_68;
  local_80 = 0;
  local_a8 = local_58;
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_a0 = (undefined4)uStack_50;
  uStack_9c = uStack_50._4_4_;
  uStack_98 = (undefined4)local_48;
  uStack_94 = local_48._4_4_;
  FUN_1489710a2(&local_a8,&local_90,uVar2,uVar1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870d2d4 FUN_14870d2d4 body=451 status=ok
// SIG undefined FUN_14870d2d4(void)

void FUN_14870d2d4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 10;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  uVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_60;
  local_78 = local_58;
  local_70 = 0;
  local_98 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_90 = (undefined4)uStack_40;
  uStack_8c = uStack_40._4_4_;
  uStack_88 = (undefined4)local_38;
  uStack_84 = local_38._4_4_;
  FUN_148970fd4(&local_98,&local_80,uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870d498 FUN_14870d498 body=451 status=ok
// SIG undefined FUN_14870d498(void)

void FUN_14870d498(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 10;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  uVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_60;
  local_78 = local_58;
  local_70 = 0;
  local_98 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_90 = (undefined4)uStack_40;
  uStack_8c = uStack_40._4_4_;
  uStack_88 = (undefined4)local_38;
  uStack_84 = local_38._4_4_;
  FUN_148970f06(&local_98,&local_80,uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870d6d0 FUN_14870d6d0 body=103 status=ok
// SIG undefined FUN_14870d6d0(void)

undefined1 FUN_14870d6d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x10;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + -8 + lVar3) = *(undefined1 *)(param_3 + -8 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870d760 FUN_14870d760 body=59 status=ok
// SIG undefined FUN_14870d760(void)

undefined8 FUN_14870d760(longlong *param_1)

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



// FUNCTION 14870d800 FUN_14870d800 body=36 status=ok
// SIG undefined FUN_14870d800(void)

undefined8 FUN_14870d800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14870d87e FUN_14870d87e body=62 status=ok
// SIG undefined FUN_14870d87e(void)

undefined1 FUN_14870d87e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14870773e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870d8e4 FUN_14870d8e4 body=59 status=ok
// SIG undefined FUN_14870d8e4(void)

undefined8 FUN_14870d8e4(longlong *param_1)

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



// FUNCTION 14870d984 FUN_14870d984 body=36 status=ok
// SIG undefined FUN_14870d984(void)

undefined8 FUN_14870d984(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14870da12 FUN_14870da12 body=59 status=ok
// SIG undefined FUN_14870da12(void)

undefined8 FUN_14870da12(longlong *param_1)

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



// FUNCTION 14870dab2 FUN_14870dab2 body=34 status=ok
// SIG undefined FUN_14870dab2(void)

undefined8 FUN_14870dab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14870dad4 FUN_14870dad4 body=55 status=ok
// SIG undefined FUN_14870dad4(void)

void FUN_14870dad4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64a50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64a50 = FUN_140002ddd(FUN_146505809,uVar1,L"GbxSkillComponentInputHandler");
  }
  return;
}



// FUNCTION 14870db5e FUN_14870db5e body=133 status=ok
// SIG undefined FUN_14870db5e(void)

undefined1 FUN_14870db5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      FUN_1401f3db8(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_1401f3db8(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870dc0c FUN_14870dc0c body=59 status=ok
// SIG undefined FUN_14870dc0c(void)

undefined8 FUN_14870dc0c(longlong *param_1)

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



// FUNCTION 14870dc52 FUN_14870dc52 body=32 status=ok
// SIG undefined FUN_14870dc52(void)

void FUN_14870dc52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14870dd24(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14870dcc0 FUN_14870dcc0 body=43 status=ok
// SIG undefined FUN_14870dcc0(void)

undefined8 FUN_14870dcc0(undefined8 param_1,int param_2)

{
  FUN_14870dd24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14870dcec FUN_14870dcec body=55 status=ok
// SIG undefined FUN_14870dcec(void)

void FUN_14870dcec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64a68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64a68 = FUN_140002ddd(FUN_1465058a1,uVar1,L"GbxSkillComponentData_InputItemEx");
  }
  return;
}



// FUNCTION 14870dd24 FUN_14870dd24 body=133 status=ok
// SIG undefined FUN_14870dd24(void)

void FUN_14870dd24(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b249610;
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14870ddaa FUN_14870ddaa body=72 status=ok
// SIG undefined FUN_14870ddaa(void)

void FUN_14870ddaa(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d330;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14870ddf2 FUN_14870ddf2 body=39 status=ok
// SIG undefined FUN_14870ddf2(void)

void FUN_14870ddf2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d330;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14870de3e FUN_14870de3e body=87 status=ok
// SIG undefined FUN_14870de3e(void)

undefined1 FUN_14870de3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    FUN_14870dfa0(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14870debe FUN_14870debe body=59 status=ok
// SIG undefined FUN_14870debe(void)

undefined8 FUN_14870debe(longlong *param_1)

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



// FUNCTION 14870df04 FUN_14870df04 body=34 status=ok
// SIG undefined FUN_14870df04(void)

void FUN_14870df04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14581f646(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14870df74 FUN_14870df74 body=43 status=ok
// SIG undefined FUN_14870df74(void)

undefined8 FUN_14870df74(undefined8 param_1,int param_2)

{
  FUN_14581f646();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14870dfa0 FUN_14870dfa0 body=93 status=ok
// SIG undefined FUN_14870dfa0(void)

undefined8 * FUN_14870dfa0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14117b073(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870dffe(param_1,iVar1);
      FUN_14870e060(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870dffe FUN_14870dffe body=98 status=ok
// SIG undefined FUN_14870dffe(void)

void FUN_14870dffe(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870e060 FUN_14870e060 body=45 status=ok
// SIG undefined FUN_14870e060(void)

void FUN_14870e060(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14870e08e FUN_14870e08e body=154 status=ok
// SIG undefined FUN_14870e08e(void)

void FUN_14870e08e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b2498e0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870e12a FUN_14870e12a body=142 status=ok
// SIG undefined FUN_14870e12a(void)

void FUN_14870e12a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b2498e0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870e1de FUN_14870e1de body=147 status=ok
// SIG undefined FUN_14870e1de(void)

undefined1 FUN_14870e1de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      FUN_14870e350(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      *(undefined1 *)(param_2 + lVar6 + 0x40) = *(undefined1 *)(param_3 + lVar6 + 0x40);
      FUN_1401f3db8(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870e29a FUN_14870e29a body=59 status=ok
// SIG undefined FUN_14870e29a(void)

undefined8 FUN_14870e29a(longlong *param_1)

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



// FUNCTION 14870e2e0 FUN_14870e2e0 body=34 status=ok
// SIG undefined FUN_14870e2e0(void)

void FUN_14870e2e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145860388(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14870e350 FUN_14870e350 body=93 status=ok
// SIG undefined FUN_14870e350(void)

undefined8 * FUN_14870e350(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141260281(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870e3ae(param_1,iVar1);
      FUN_14870e41d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870e3ae FUN_14870e3ae body=111 status=ok
// SIG undefined FUN_14870e3ae(void)

void FUN_14870e3ae(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870e41d FUN_14870e41d body=52 status=ok
// SIG undefined FUN_14870e41d(void)

void FUN_14870e41d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870e452(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 14870e452 FUN_14870e452 body=187 status=ok
// SIG undefined FUN_14870e452(void)

undefined8 * FUN_14870e452(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *param_1 = &PTR_FUN_14b249610;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1401f3db8(param_1 + 5,param_2 + 0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14870e576 FUN_14870e576 body=83 status=ok
// SIG undefined FUN_14870e576(void)

undefined1 FUN_14870e576(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870e5f2 FUN_14870e5f2 body=59 status=ok
// SIG undefined FUN_14870e5f2(void)

undefined8 FUN_14870e5f2(longlong *param_1)

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



// FUNCTION 14870e638 FUN_14870e638 body=34 status=ok
// SIG undefined FUN_14870e638(void)

void FUN_14870e638(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14870e70c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14870e6a8 FUN_14870e6a8 body=43 status=ok
// SIG undefined FUN_14870e6a8(void)

undefined8 FUN_14870e6a8(undefined8 param_1,int param_2)

{
  FUN_14870e70c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14870e6d4 FUN_14870e6d4 body=55 status=ok
// SIG undefined FUN_14870e6d4(void)

void FUN_14870e6d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64ab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64ab0 = FUN_140002ddd(FUN_146505a63,uVar1,L"GbxSkillComponentData_InputItem");
  }
  return;
}



// FUNCTION 14870e70c FUN_14870e70c body=95 status=ok
// SIG undefined FUN_14870e70c(void)

void FUN_14870e70c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b249a70;
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14870e76c FUN_14870e76c body=80 status=ok
// SIG undefined FUN_14870e76c(void)

void FUN_14870e76c(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d380;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 14870e7bc FUN_14870e7bc body=39 status=ok
// SIG undefined FUN_14870e7bc(void)

void FUN_14870e7bc(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d380;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 14870e808 FUN_14870e808 body=73 status=ok
// SIG undefined FUN_14870e808(void)

undefined1 FUN_14870e808(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    FUN_14870dfa0(param_2 + 0x58,param_3 + 0x58);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 14870e87a FUN_14870e87a body=59 status=ok
// SIG undefined FUN_14870e87a(void)

undefined8 FUN_14870e87a(longlong *param_1)

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



// FUNCTION 14870e8c0 FUN_14870e8c0 body=34 status=ok
// SIG undefined FUN_14870e8c0(void)

void FUN_14870e8c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870e994(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870e930 FUN_14870e930 body=43 status=ok
// SIG undefined FUN_14870e930(void)

undefined8 FUN_14870e930(undefined8 param_1,int param_2)

{
  FUN_14870e994();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14870e95c FUN_14870e95c body=55 status=ok
// SIG undefined FUN_14870e95c(void)

void FUN_14870e95c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64ac8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64ac8 = FUN_140002ddd(FUN_146505af9,uVar1,L"GbxSkillComponent_Input");
  }
  return;
}



// FUNCTION 14870e994 FUN_14870e994 body=57 status=ok
// SIG undefined FUN_14870e994(void)

void FUN_14870e994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d380;
  FUN_14117b073(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 14870e9ce FUN_14870e9ce body=160 status=ok
// SIG undefined FUN_14870e9ce(void)

void FUN_14870e9ce(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b249d40;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870ea70 FUN_14870ea70 body=144 status=ok
// SIG undefined FUN_14870ea70(void)

void FUN_14870ea70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b249d40;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870eb26 FUN_14870eb26 body=155 status=ok
// SIG undefined FUN_14870eb26(void)

undefined1 FUN_14870eb26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_145c43818(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_14870ed62(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      *(undefined1 *)(param_2 + lVar6 + 0x60) = *(undefined1 *)(param_3 + lVar6 + 0x60);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870ebea FUN_14870ebea body=59 status=ok
// SIG undefined FUN_14870ebea(void)

undefined8 FUN_14870ebea(longlong *param_1)

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



// FUNCTION 14870ec30 FUN_14870ec30 body=34 status=ok
// SIG undefined FUN_14870ec30(void)

void FUN_14870ec30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870ed04(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870eca0 FUN_14870eca0 body=43 status=ok
// SIG undefined FUN_14870eca0(void)

undefined8 FUN_14870eca0(undefined8 param_1,int param_2)

{
  FUN_14870ed04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14870eccc FUN_14870eccc body=55 status=ok
// SIG undefined FUN_14870eccc(void)

void FUN_14870eccc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64ae0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64ae0 = FUN_140002ddd(FUN_146505b8f,uVar1,L"GbxSkillComponentData_Input");
  }
  return;
}



// FUNCTION 14870ed04 FUN_14870ed04 body=56 status=ok
// SIG undefined FUN_14870ed04(void)

void FUN_14870ed04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b249d40;
  FUN_14870ed3c(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14870ed3c FUN_14870ed3c body=38 status=ok
// SIG undefined FUN_14870ed3c(void)

void FUN_14870ed3c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14870e70c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 14870ed62 FUN_14870ed62 body=95 status=ok
// SIG undefined FUN_14870ed62(void)

undefined8 * FUN_14870ed62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14870ed3c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870edc2(param_1,iVar1);
      FUN_14870ee24(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870edc2 FUN_14870edc2 body=98 status=ok
// SIG undefined FUN_14870edc2(void)

void FUN_14870edc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870ee24 FUN_14870ee24 body=52 status=ok
// SIG undefined FUN_14870ee24(void)

void FUN_14870ee24(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870ee58(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 14870ee58 FUN_14870ee58 body=158 status=ok
// SIG undefined FUN_14870ee58(void)

undefined8 * FUN_14870ee58(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  *param_1 = &PTR_FUN_14b249a70;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1401f3db8(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14870efc0 FUN_14870efc0 body=59 status=ok
// SIG undefined FUN_14870efc0(void)

undefined8 FUN_14870efc0(longlong *param_1)

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



// FUNCTION 14870f060 FUN_14870f060 body=34 status=ok
// SIG undefined FUN_14870f060(void)

undefined8 FUN_14870f060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14870f082 FUN_14870f082 body=55 status=ok
// SIG undefined FUN_14870f082(void)

void FUN_14870f082(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64b00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64b00 = FUN_140002ddd(FUN_146505c55,uVar1,L"GbxSkillComponentInputHandler_Basic");
  }
  return;
}



// FUNCTION 14870f178 FUN_14870f178 body=98 status=ok
// SIG undefined FUN_14870f178(void)

undefined8 FUN_14870f178(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(param_3 + -0x18)) ||
         (*(int *)(param_2 + -0x10) != *(int *)(param_3 + -0x10))) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(param_3 + -0x18);
        *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
        *(undefined8 *)(param_2 + -8) = 0;
      }
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870f202 FUN_14870f202 body=59 status=ok
// SIG undefined FUN_14870f202(void)

undefined8 FUN_14870f202(longlong *param_1)

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



// FUNCTION 14870f2a2 FUN_14870f2a2 body=34 status=ok
// SIG undefined FUN_14870f2a2(void)

undefined8 FUN_14870f2a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14870f2c4 FUN_14870f2c4 body=55 status=ok
// SIG undefined FUN_14870f2c4(void)

void FUN_14870f2c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64b18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64b18 = FUN_140002ddd(FUN_146505ceb,uVar1,L"GbxSkillComponentInputHandler_Hold");
  }
  return;
}



// FUNCTION 14870f2fc FUN_14870f2fc body=80 status=ok
// SIG undefined FUN_14870f2fc(void)

void FUN_14870f2fc(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d3f0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 14870f34c FUN_14870f34c body=39 status=ok
// SIG undefined FUN_14870f34c(void)

void FUN_14870f34c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d3f0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 14870f398 FUN_14870f398 body=54 status=ok
// SIG undefined FUN_14870f398(void)

undefined1 FUN_14870f398(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870f558(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14870f3f6 FUN_14870f3f6 body=59 status=ok
// SIG undefined FUN_14870f3f6(void)

undefined8 FUN_14870f3f6(longlong *param_1)

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



// FUNCTION 14870f43c FUN_14870f43c body=34 status=ok
// SIG undefined FUN_14870f43c(void)

void FUN_14870f43c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870f510(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870f4ac FUN_14870f4ac body=43 status=ok
// SIG undefined FUN_14870f4ac(void)

undefined8 FUN_14870f4ac(undefined8 param_1,int param_2)

{
  FUN_14870f510();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14870f4d8 FUN_14870f4d8 body=55 status=ok
// SIG undefined FUN_14870f4d8(void)

void FUN_14870f4d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64b38 = FUN_140002ddd(FUN_146505d81,uVar1,L"GbxSkillComponent_Library");
  }
  return;
}



// FUNCTION 14870f510 FUN_14870f510 body=71 status=ok
// SIG undefined FUN_14870f510(void)

void FUN_14870f510(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24d3f0;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 14870f558 FUN_14870f558 body=96 status=ok
// SIG undefined FUN_14870f558(void)

longlong FUN_14870f558(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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
  return param_1;
}



// FUNCTION 14870f5ba FUN_14870f5ba body=162 status=ok
// SIG undefined FUN_14870f5ba(void)

void FUN_14870f5ba(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b24a330;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870f65e FUN_14870f65e body=146 status=ok
// SIG undefined FUN_14870f65e(void)

void FUN_14870f65e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b24a330;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870f716 FUN_14870f716 body=141 status=ok
// SIG undefined FUN_14870f716(void)

undefined1 FUN_14870f716(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_145c43818(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_1401f3db8(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870f7cc FUN_14870f7cc body=59 status=ok
// SIG undefined FUN_14870f7cc(void)

undefined8 FUN_14870f7cc(longlong *param_1)

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



// FUNCTION 14870f812 FUN_14870f812 body=34 status=ok
// SIG undefined FUN_14870f812(void)

void FUN_14870f812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870f8e6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870f882 FUN_14870f882 body=43 status=ok
// SIG undefined FUN_14870f882(void)

undefined8 FUN_14870f882(undefined8 param_1,int param_2)

{
  FUN_14870f8e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14870f8ae FUN_14870f8ae body=55 status=ok
// SIG undefined FUN_14870f8ae(void)

void FUN_14870f8ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64b50 = FUN_140002ddd(FUN_146505e17,uVar1,L"GbxSkillComponentData_Library");
  }
  return;
}



// FUNCTION 14870f8e6 FUN_14870f8e6 body=66 status=ok
// SIG undefined FUN_14870f8e6(void)

void FUN_14870f8e6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24a330;
  plVar3 = (longlong *)param_1[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x00014870f91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14870f992 FUN_14870f992 body=59 status=ok
// SIG undefined FUN_14870f992(void)

undefined8 FUN_14870f992(longlong *param_1)

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



// FUNCTION 14870fa32 FUN_14870fa32 body=34 status=ok
// SIG undefined FUN_14870fa32(void)

undefined8 FUN_14870fa32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14870fa54 FUN_14870fa54 body=55 status=ok
// SIG undefined FUN_14870fa54(void)

void FUN_14870fa54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64b68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64b68 = FUN_140002ddd(FUN_146505e46,uVar1,L"GbxSkillComponentData_LibraryData");
  }
  return;
}



// FUNCTION 14870fa8c FUN_14870fa8c body=54 status=ok
// SIG undefined FUN_14870fa8c(void)

undefined8 * FUN_14870fa8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/Library/GbxSkillComponent_Library.h"
                ,0x6f,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_LibraryData::CreateUpdater");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14870fb1c FUN_14870fb1c body=62 status=ok
// SIG undefined FUN_14870fb1c(void)

undefined1 FUN_14870fb1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14870fc7c(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870fb82 FUN_14870fb82 body=59 status=ok
// SIG undefined FUN_14870fb82(void)

undefined8 FUN_14870fb82(longlong *param_1)

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



// FUNCTION 14870fc22 FUN_14870fc22 body=34 status=ok
// SIG undefined FUN_14870fc22(void)

undefined8 FUN_14870fc22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14870fc44 FUN_14870fc44 body=55 status=ok
// SIG undefined FUN_14870fc44(void)

void FUN_14870fc44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64bc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64bc0 = FUN_140002ddd(FUN_146506069,uVar1,L"GbxSkillComponentData_LibraryData_Basic");
  }
  return;
}



// FUNCTION 14870fc7c FUN_14870fc7c body=84 status=ok
// SIG undefined FUN_14870fc7c(void)

longlong * FUN_14870fc7c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14870fcd2 FUN_14870fcd2 body=70 status=ok
// SIG undefined FUN_14870fcd2(void)

void FUN_14870fcd2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1413ea01e(param_2);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b24d460;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 14870fd18 FUN_14870fd18 body=54 status=ok
// SIG undefined FUN_14870fd18(void)

void FUN_14870fd18(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b24d460;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 14870fd72 FUN_14870fd72 body=87 status=ok
// SIG undefined FUN_14870fd72(void)

undefined1 FUN_14870fd72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870ff88(param_2,param_3);
    FUN_14870fff2(param_2 + 0x70,param_3 + 0x70);
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_3 + 0x80);
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 14870fdf2 FUN_14870fdf2 body=59 status=ok
// SIG undefined FUN_14870fdf2(void)

undefined8 FUN_14870fdf2(longlong *param_1)

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



// FUNCTION 14870fe3e FUN_14870fe3e body=40 status=ok
// SIG undefined FUN_14870fe3e(void)

void FUN_14870fe3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_145af1b08(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14870feb4 FUN_14870feb4 body=43 status=ok
// SIG undefined FUN_14870feb4(void)

undefined8 FUN_14870feb4(undefined8 param_1,int param_2)

{
  FUN_145af1b08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14870fee0 FUN_14870fee0 body=57 status=ok
// SIG undefined FUN_14870fee0(void)

void FUN_14870fee0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64bd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64bd8 = FUN_140002ddd(FUN_1465060ff,uVar1,L"GbxSkillComponent_Material");
  }
  return;
}



// FUNCTION 14870ff1e FUN_14870ff1e body=43 status=ok
// SIG undefined FUN_14870ff1e(void)

undefined8 FUN_14870ff1e(undefined8 param_1,int param_2)

{
  FUN_1458a09d4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14870ff4a FUN_14870ff4a body=55 status=ok
// SIG undefined FUN_14870ff4a(void)

void FUN_14870ff4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64d58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64d58 = FUN_140002ddd(FUN_14650612e,uVar1,L"GbxSkillComponent_Tickable");
  }
  return;
}



// FUNCTION 14870ff88 FUN_14870ff88 body=106 status=ok
// SIG undefined FUN_14870ff88(void)

longlong FUN_14870ff88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  lVar4 = *(longlong *)(param_2 + 0x58);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(longlong *)(param_1 + 0x58) = lVar4;
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
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 14870fff2 FUN_14870fff2 body=95 status=ok
// SIG undefined FUN_14870fff2(void)

undefined8 * FUN_14870fff2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145af1b41(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148710052(param_1,iVar1);
      FUN_1487100b4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148710052 FUN_148710052 body=98 status=ok
// SIG undefined FUN_148710052(void)

void FUN_148710052(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487100b4 FUN_1487100b4 body=55 status=ok
// SIG undefined FUN_1487100b4(void)

void FUN_1487100b4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
      *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar3);
      *(longlong *)(param_1 + 0x18 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148710172 FUN_148710172 body=54 status=ok
// SIG undefined FUN_148710172(void)

undefined1 FUN_148710172(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871030a(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1487101d0 FUN_1487101d0 body=59 status=ok
// SIG undefined FUN_1487101d0(void)

undefined8 FUN_1487101d0(longlong *param_1)

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



// FUNCTION 148710216 FUN_148710216 body=48 status=ok
// SIG undefined FUN_148710216(void)

void FUN_148710216(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b23dd30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148710294 FUN_148710294 body=62 status=ok
// SIG undefined FUN_148710294(void)

undefined8 * FUN_148710294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1487102d2 FUN_1487102d2 body=55 status=ok
// SIG undefined FUN_1487102d2(void)

void FUN_1487102d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64bf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64bf0 = FUN_140002ddd(FUN_1465061c5,uVar1,L"GbxSkillComponentData_Material_Item");
  }
  return;
}



// FUNCTION 14871030a FUN_14871030a body=106 status=ok
// SIG undefined FUN_14871030a(void)

longlong FUN_14871030a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  lVar5 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148710376 FUN_148710376 body=134 status=ok
// SIG undefined FUN_148710376(void)

void FUN_148710376(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b24ab60;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487103fe FUN_1487103fe body=130 status=ok
// SIG undefined FUN_1487103fe(void)

void FUN_1487103fe(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b24ab60;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487104a6 FUN_1487104a6 body=83 status=ok
// SIG undefined FUN_1487104a6(void)

undefined1 FUN_1487104a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_146130eee(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_148710612(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148710522 FUN_148710522 body=59 status=ok
// SIG undefined FUN_148710522(void)

undefined8 FUN_148710522(longlong *param_1)

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



// FUNCTION 148710568 FUN_148710568 body=34 status=ok
// SIG undefined FUN_148710568(void)

void FUN_148710568(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145bca66e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487105d8 FUN_1487105d8 body=57 status=ok
// SIG undefined FUN_1487105d8(void)

void FUN_1487105d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64c08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64c08 = FUN_140002ddd(FUN_14650625b,uVar1,L"GbxSkillComponentData_Material");
  }
  return;
}



// FUNCTION 148710612 FUN_148710612 body=95 status=ok
// SIG undefined FUN_148710612(void)

undefined8 * FUN_148710612(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bca6a6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148710672(param_1,iVar1);
      FUN_1487106e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148710672 FUN_148710672 body=111 status=ok
// SIG undefined FUN_148710672(void)

void FUN_148710672(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487106e1 FUN_1487106e1 body=52 status=ok
// SIG undefined FUN_1487106e1(void)

void FUN_1487106e1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148710716(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148710716 FUN_148710716 body=186 status=ok
// SIG undefined FUN_148710716(void)

undefined8 * FUN_148710716(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar6;
  *param_1 = &PTR_FUN_14b24a9f0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x48);
  param_1[9] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 1487107d2 FUN_1487107d2 body=88 status=ok
// SIG undefined FUN_1487107d2(void)

void FUN_1487107d2(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d4d0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 14871082a FUN_14871082a body=43 status=ok
// SIG undefined FUN_14871082a(void)

void FUN_14871082a(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b24d4d0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 14871087a FUN_14871087a body=81 status=ok
// SIG undefined FUN_14871087a(void)

undefined1 FUN_14871087a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    uVar1 = *(undefined4 *)(param_3 + 0x5c);
    uVar2 = *(undefined4 *)(param_3 + 0x60);
    uVar3 = *(undefined4 *)(param_3 + 100);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5c) = uVar1;
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    *(undefined4 *)(param_2 + 100) = uVar3;
    FUN_148710c2a(param_2 + 0x68,param_3 + 0x68);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1487108f4 FUN_1487108f4 body=59 status=ok
// SIG undefined FUN_1487108f4(void)

undefined8 FUN_1487108f4(longlong *param_1)

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



// FUNCTION 14871093a FUN_14871093a body=34 status=ok
// SIG undefined FUN_14871093a(void)

void FUN_14871093a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_148710a12(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487109aa FUN_1487109aa body=43 status=ok
// SIG undefined FUN_1487109aa(void)

undefined8 FUN_1487109aa(undefined8 param_1,int param_2)

{
  FUN_148710a12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1487109d6 FUN_1487109d6 body=55 status=ok
// SIG undefined FUN_1487109d6(void)

void FUN_1487109d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64c60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64c60 = FUN_140002ddd(FUN_1465063f3,uVar1,L"GbxSkillComponent_ResourcePool");
  }
  return;
}



// FUNCTION 148710a12 FUN_148710a12 body=57 status=ok
// SIG undefined FUN_148710a12(void)

void FUN_148710a12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d4d0;
  FUN_148710a4b(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 148710a4b FUN_148710a4b body=66 status=ok
// SIG undefined FUN_148710a4b(void)

void FUN_148710a4b(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x80);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_148710a8e(puVar1 + -0x12);
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148710a8e FUN_148710a8e body=54 status=ok
// SIG undefined FUN_148710a8e(void)

void FUN_148710a8e(longlong *param_1)

{
  FUN_148710ac4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148710ac4 FUN_148710ac4 body=356 status=ok
// SIG undefined FUN_148710ac4(void)

void FUN_148710ac4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148710c2a FUN_148710c2a body=95 status=ok
// SIG undefined FUN_148710c2a(void)

undefined8 * FUN_148710c2a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148710a4b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148710c8a(param_1,iVar1);
      FUN_148710cfd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148710c8a FUN_148710c8a body=115 status=ok
// SIG undefined FUN_148710c8a(void)

void FUN_148710c8a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148710cfd FUN_148710cfd body=167 status=ok
// SIG undefined FUN_148710cfd(void)

void FUN_148710cfd(longlong param_1,longlong param_2,int param_3)

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
  undefined8 *puVar12;
  
  if (param_3 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x38);
    param_2 = param_2 + 0x38;
    do {
      puVar12[-1] = *(undefined8 *)(param_2 + -8);
      uVar1 = *(undefined4 *)(param_2 + -0x38);
      uVar2 = *(undefined4 *)(param_2 + -0x34);
      uVar3 = *(undefined4 *)(param_2 + -0x30);
      uVar4 = *(undefined4 *)(param_2 + -0x2c);
      uVar5 = *(undefined4 *)(param_2 + -0x28);
      uVar6 = *(undefined4 *)(param_2 + -0x24);
      uVar7 = *(undefined4 *)(param_2 + -0x20);
      uVar8 = *(undefined4 *)(param_2 + -0x1c);
      uVar9 = *(undefined4 *)(param_2 + -0x14);
      uVar10 = *(undefined4 *)(param_2 + -0x10);
      uVar11 = *(undefined4 *)(param_2 + -0xc);
      *(undefined4 *)(puVar12 + -3) = *(undefined4 *)(param_2 + -0x18);
      *(undefined4 *)((longlong)puVar12 + -0x14) = uVar9;
      *(undefined4 *)(puVar12 + -2) = uVar10;
      *(undefined4 *)((longlong)puVar12 + -0xc) = uVar11;
      *(undefined4 *)(puVar12 + -5) = uVar5;
      *(undefined4 *)((longlong)puVar12 + -0x24) = uVar6;
      *(undefined4 *)(puVar12 + -4) = uVar7;
      *(undefined4 *)((longlong)puVar12 + -0x1c) = uVar8;
      *(undefined4 *)(puVar12 + -7) = uVar1;
      *(undefined4 *)((longlong)puVar12 + -0x34) = uVar2;
      *(undefined4 *)(puVar12 + -6) = uVar3;
      *(undefined4 *)((longlong)puVar12 + -0x2c) = uVar4;
      puVar12[4] = 0;
      *(undefined4 *)(puVar12 + 5) = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x34) = 0;
      puVar12[8] = 0;
      *(undefined4 *)(puVar12 + 9) = 0;
      FUN_148710da4(puVar12,param_2);
      *(undefined1 *)(puVar12 + 10) = *(undefined1 *)(param_2 + 0x50);
      puVar12 = puVar12 + 0x12;
      param_2 = param_2 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148710da4 FUN_148710da4 body=122 status=ok
// SIG undefined FUN_148710da4(void)

longlong FUN_148710da4(longlong param_1,longlong param_2)

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
    FUN_148710e1e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148710e1e FUN_148710e1e body=242 status=ok
// SIG undefined FUN_148710e1e(void)

longlong * FUN_148710e1e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148710ac4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          FUN_1407b7224(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = *(undefined8 *)(lVar3 + 0x18 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148710f86 FUN_148710f86 body=140 status=ok
// SIG undefined FUN_148710f86(void)

undefined8 FUN_148710f86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      FUN_144a787a6(param_2 + 8 + lVar7,param_3 + 8 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar3 = *(longlong *)(param_3 + 0x28 + lVar7);
      if ((*(longlong *)(param_2 + 0x28 + lVar7) != lVar3) ||
         (*(int *)(param_2 + 0x30 + lVar7) != *(int *)(param_3 + 0x30 + lVar7))) {
        *(longlong *)(param_2 + 0x28 + lVar7) = lVar3;
        *(undefined4 *)(param_2 + 0x30 + lVar7) = *(undefined4 *)(param_3 + 0x30 + lVar7);
        *(undefined8 *)(param_2 + 0x38 + lVar7) = 0;
      }
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871103a FUN_14871103a body=59 status=ok
// SIG undefined FUN_14871103a(void)

undefined8 FUN_14871103a(longlong *param_1)

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



// FUNCTION 148711080 FUN_148711080 body=48 status=ok
// SIG undefined FUN_148711080(void)

void FUN_148711080(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b23dd30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1487110fe FUN_1487110fe body=62 status=ok
// SIG undefined FUN_1487110fe(void)

undefined8 * FUN_1487110fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14871113c FUN_14871113c body=55 status=ok
// SIG undefined FUN_14871113c(void)

void FUN_14871113c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64c78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64c78 = FUN_140002ddd(FUN_146506489,uVar1,L"GbxSkillComponentData_ResourcePool_Item");
  }
  return;
}



// FUNCTION 148711174 FUN_148711174 body=154 status=ok
// SIG undefined FUN_148711174(void)

void FUN_148711174(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b24b0a0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711210 FUN_148711210 body=142 status=ok
// SIG undefined FUN_148711210(void)

void FUN_148711210(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b24b0a0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487112c4 FUN_1487112c4 body=141 status=ok
// SIG undefined FUN_1487112c4(void)

undefined1 FUN_1487112c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_145c43818(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_148711504(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871137a FUN_14871137a body=59 status=ok
// SIG undefined FUN_14871137a(void)

undefined8 FUN_14871137a(longlong *param_1)

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



// FUNCTION 1487113c0 FUN_1487113c0 body=34 status=ok
// SIG undefined FUN_1487113c0(void)

void FUN_1487113c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148711494(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148711430 FUN_148711430 body=43 status=ok
// SIG undefined FUN_148711430(void)

undefined8 FUN_148711430(undefined8 param_1,int param_2)

{
  FUN_148711494();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14871145c FUN_14871145c body=55 status=ok
// SIG undefined FUN_14871145c(void)

void FUN_14871145c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64c90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64c90 = FUN_140002ddd(FUN_14650651f,uVar1,L"GbxSkillComponentData_ResourcePool");
  }
  return;
}



// FUNCTION 148711494 FUN_148711494 body=56 status=ok
// SIG undefined FUN_148711494(void)

void FUN_148711494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24b0a0;
  FUN_1487114cc(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487114cc FUN_1487114cc body=56 status=ok
// SIG undefined FUN_1487114cc(void)

void FUN_1487114cc(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}


