// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14437ad60 FUN_14437ad60 body=134 status=ok
// SIG undefined FUN_14437ad60(void)

void FUN_14437ad60(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = *param_2;
  local_44 = param_2[1];
  local_3c = param_2[3];
  local_40 = 0x66;
  if ((uint)param_2[2] < 7) {
    local_40 = param_2[2] + 100;
  }
  local_10 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x68))(param_3,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437ade8 FUN_14437ade8 body=441 status=ok
// SIG undefined FUN_14437ade8(void)

undefined4 FUN_14437ade8(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_40 = 0;
  uVar3 = *param_2;
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  local_c0 = (**(code **)(*plVar2 + 0x560))(plVar2,uVar3);
  uVar3 = param_2[1];
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  local_b8 = (**(code **)(*plVar2 + 0x560))(plVar2,uVar3);
  uVar3 = param_2[2];
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uStack_98 = (**(code **)(*plVar2 + 0x560))(plVar2,uVar3);
  local_90 = param_2[3];
  uStack_78 = param_2[4];
  local_80 = CONCAT44(*(int *)((longlong)param_2 + 0x2c) - *(int *)((longlong)param_2 + 0x24),
                      *(int *)(param_2 + 5) - *(int *)(param_2 + 4));
  local_50 = param_2[6];
  uStack_88 = CONCAT44(*(undefined4 *)(param_2 + 8),0x3f800000);
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar3 = (**(code **)(*plVar2 + 0x538))(plVar2,param_3,0);
  FUN_148f9625a(uVar3,&local_c0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x60))(param_4,uVar3,&local_c0);
  FUN_148f96338(uVar3,&local_c0);
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  (**(code **)(*plVar2 + 0x5a8))(plVar2,param_3,0,uVar3);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437afaa FUN_14437afaa body=102 status=ok
// SIG undefined FUN_14437afaa(void)

void FUN_14437afaa(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba34c88;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666a95a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437b014 FUN_14437b014 body=127 status=ok
// SIG undefined FUN_14437b014(void)

void FUN_14437b014(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = *param_2;
  local_44 = param_2[1];
  local_3c = param_2[3];
  local_40 = 0x66;
  if ((uint)param_2[2] < 7) {
    local_40 = param_2[2] + 100;
  }
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x70))(param_3,&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437b094 FUN_14437b094 body=707 status=ok
// SIG undefined FUN_14437b094(void)

undefined4 FUN_14437b094(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x558))();
  uVar1 = 0;
  memset(&local_178,0,0x118);
  plVar6 = (longlong *)*param_2;
  lVar3 = (**(code **)(*plVar6 + 8))(plVar6);
  local_1a0 = 0;
  local_19c = 0;
  switch(*(undefined1 *)(lVar3 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    local_1a0 = *(undefined4 *)(lVar3 + 0x24);
    local_19c = *(undefined4 *)(lVar3 + 0x28);
  }
  local_1c0 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((longlong)plVar6 + 0x52) != '\0') {
    plVar6 = (longlong *)0x0;
  }
  local_1c8 = *(undefined8 *)(plVar6[0xf] + 0x10);
  local_1a4 = (undefined4)plVar6[0x15];
  local_1b8 = 1;
  uStack_1b0 = 1;
  local_1a8 = 1;
  plVar6 = (longlong *)param_2[1];
  lVar3 = (**(code **)(*plVar6 + 8))(plVar6);
  local_16c = 0;
  switch(*(undefined1 *)(lVar3 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar1 = *(undefined4 *)(lVar3 + 0x24);
    local_16c = *(undefined4 *)(lVar3 + 0x28);
  }
  local_190 = (**(code **)(*plVar6 + 0x20))(plVar6);
  uVar5 = 0;
  if (*(char *)((longlong)plVar6 + 0x52) != '\0') {
    plVar6 = (longlong *)0x0;
  }
  local_198 = *(undefined8 *)(plVar6[0xf] + 0x10);
  local_174 = (undefined4)plVar6[0x15];
  local_188 = 1;
  uStack_180 = 1;
  local_178 = 1;
  plVar6 = (longlong *)param_2[2];
  local_170 = uVar1;
  lVar3 = (**(code **)(*plVar6 + 8))(plVar6);
  local_ac = 0;
  switch(*(undefined1 *)(lVar3 + 0x32)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar5 = *(undefined4 *)(lVar3 + 0x24);
    local_ac = *(undefined4 *)(lVar3 + 0x28);
  }
  local_d0 = (**(code **)(*plVar6 + 0x20))();
  plVar4 = (longlong *)0x0;
  if (*(char *)((longlong)plVar6 + 0x52) == '\0') {
    plVar4 = plVar6;
  }
  local_d8 = *(undefined8 *)(plVar4[0xf] + 0x10);
  local_b4 = (undefined4)plVar4[0x15];
  local_c8 = 1;
  uStack_c0 = 1;
  local_b8 = 1;
  local_a8 = (undefined4)param_2[3];
  local_a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_9c = (undefined4)param_2[8];
  local_90 = (int)param_2[4];
  local_98 = (int)param_2[5] - local_90;
  local_8c = *(int *)((longlong)param_2 + 0x24);
  local_94 = *(int *)((longlong)param_2 + 0x2c) - local_8c;
  local_68 = (undefined4)param_2[6];
  local_64 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_a0 = 0x3f800000;
  local_b0 = uVar5;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x60))(param_4,uVar2);
  (**(code **)(*DAT_14ca83900 + 0x5f8))(DAT_14ca83900,uVar2);
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14437b360 FUN_14437b360 body=166 status=ok
// SIG undefined FUN_14437b360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437b360(void)

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
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cbf446c);
  if (cVar1 == '\0') {
    _DAT_14cbf446c = 0;
    uRam000000014cbf4474 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_28 = -0x7ffffffeb45cb258;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666aa9c(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437b408 FUN_14437b408 body=586 status=ok
// SIG undefined FUN_14437b408(void)

void FUN_14437b408(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_54;
  void *local_50;
  uint local_44;
  void *local_40;
  uint local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14437b4f6;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if (bVar3 == 0) {
    FUN_1400b22c2(&local_30,"VulkanRHI");
    lVar9 = 0;
    lVar5 = FUN_1408bddb6(0);
    puVar6 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar6 = local_30;
    }
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar6 + lVar9);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)(lVar5 + lVar9);
      uVar10 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14437b4bd;
        }
        iVar4 = uVar7 - uVar10;
        goto LAB_14437b4e8;
      }
      if (uVar1 == 0) break;
LAB_14437b4bd:
      lVar9 = lVar9 + 2;
    }
    iVar4 = 0;
LAB_14437b4e8:
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar4 == 0) {
      local_44 = 0;
      local_50 = (void *)0x0;
      local_54 = 0;
      lVar5 = FUN_146205748(&DAT_14a3588aa);
      if ((*(char *)(lVar5 + 0x38) == '\x01') &&
         (iVar4 = (**(code **)(lVar5 + 0x68))(&local_44,&local_50), _Src = local_50, iVar4 == 0)) {
        uVar8 = (ulonglong)local_44;
        local_68 = (void *)0x0;
        if ((int)local_44 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar8);
        }
        local_60 = local_44;
        if (local_44 == 0) {
          local_5c = 0;
          local_38 = 0;
        }
        else {
          FUN_1473ad136(&local_68,local_44,0);
          memcpy(local_68,_Src,uVar8 * 8);
          local_38 = local_60;
        }
        local_30 = (undefined2 *)0x0;
        local_28 = 0;
        local_40 = local_68;
        FUN_1473a566a();
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14437b4f6:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437b664 FUN_14437b664 body=102 status=ok
// SIG undefined FUN_14437b664(void)

void FUN_14437b664(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba34ece;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666abde(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437b6cc FUN_14437b6cc body=57 status=ok
// SIG undefined FUN_14437b6cc(void)

void FUN_14437b6cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf44a8 == 0) {
    uVar1 = FUN_14666ad20();
    DAT_14cbf44a8 = FUN_14171c317(FUN_14666ad4f,uVar1,L"EXeSSQualityMode");
  }
  return;
}



// FUNCTION 14437b706 FUN_14437b706 body=196 status=ok
// SIG undefined FUN_14437b706(void)

undefined8 FUN_14437b706(uint param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14437bb5d();
  if (cVar1 == '\0') {
    FUN_140002266(&local_28,L"GetXeSSQualityModeInformation called with invalid enum value:%d",
                  param_1 & 0xff);
    puVar4 = local_28;
    if (local_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar4,2,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (((char)param_1 != '\0') && (DAT_14cbf4568 != 0)) {
      iVar2 = FUN_14437bbe8(param_1);
      *param_2 = (float)(&DAT_14cbf4328)[(longlong)(iVar2 + -100) * 3] * 100.0;
      uVar3 = CONCAT71((int7)((ulonglong)((longlong)(iVar2 + -100) * 3) >> 8),1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14437b7cc FUN_14437b7cc body=65 status=ok
// SIG undefined FUN_14437b7cc(void)

void FUN_14437b7cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cbf4560 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_143c18d94();
    uVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14437b80e FUN_14437b80e body=775 status=ok
// SIG undefined FUN_14437b80e(void)

void FUN_14437b80e(uint param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_14437bb5d();
  if (cVar3 == '\0') {
    FUN_140002266(&local_50,L"SetXeSSQualityMode called with invalid enum value: %d",param_1 & 0xff)
    ;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)CONCAT44(uStack_4c,local_50);
    }
    FUN_1415b7ec4(puVar6,2,0);
    if (CONCAT44(uStack_4c,local_50) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf4590) {
      FUN_144b3d300(&DAT_14cbf4590);
      if (DAT_14cbf4590 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf4588 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeSS.Enabled",1);
        _Init_thread_footer(&DAT_14cbf4590);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf45a0) {
      FUN_144b3d300(&DAT_14cbf45a0);
      if (DAT_14cbf45a0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf4598 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeSS.Quality",1);
        _Init_thread_footer(&DAT_14cbf45a0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf45b0) {
      FUN_144b3d300(&DAT_14cbf45b0);
      if (DAT_14cbf45b0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf45a8 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
        _Init_thread_footer(&DAT_14cbf45b0);
      }
    }
    plVar1 = DAT_14cbf4588;
    if ((char)param_1 == '\0') {
      uVar5 = (**(code **)(*DAT_14cbf4588 + 0x18))(DAT_14cbf4588);
      FUN_140635eb8(plVar1,0,uVar5 & 0xff000000,0);
      (**(code **)(*DAT_14cbf45a8 + 0x18))(DAT_14cbf45a8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    iVar4 = FUN_14437bbe8(param_1);
    plVar1 = DAT_14cbf4598;
    uVar5 = (**(code **)(*DAT_14cbf4598 + 0x18))(DAT_14cbf4598);
    FUN_140635eb8(plVar1,iVar4 + -100,uVar5 & 0xff000000,0);
    plVar1 = DAT_14cbf4588;
    uVar5 = (**(code **)(*DAT_14cbf4588 + 0x18))(DAT_14cbf4588);
    FUN_140635eb8(plVar1,1,uVar5 & 0xff000000,0);
    local_50 = 0x42c80000;
    cVar3 = FUN_14437b706(param_1);
    uVar2 = local_50;
    plVar1 = DAT_14cbf45a8;
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*DAT_14cbf45a8 + 0x18))(DAT_14cbf45a8);
      FUN_140635f48(plVar1,uVar2,uVar5 & 0xff000000,0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437bb34 FUN_14437bb34 body=41 status=ok
// SIG undefined FUN_14437bb34(void)

void FUN_14437bb34(void)

{
  DAT_14cbf4558 = 0;
  if (DAT_14cbf4550 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69e06();
  return;
}



// FUNCTION 14437bb5d FUN_14437bb5d body=139 status=ok
// SIG undefined FUN_14437bb5d(void)

bool FUN_14437bb5d(byte param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14cbf44a8 == 0) {
    uVar3 = FUN_14666ad20();
    DAT_14cbf44a8 = FUN_14171c317(FUN_14666ad4f,uVar3);
  }
  uVar2 = (ulonglong)*(int *)(DAT_14cbf44a8 + 0x48);
  if ((longlong)uVar2 < 1) {
LAB_14437bbb8:
    bVar7 = false;
  }
  else {
    uVar5 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cbf44a8 + 0x40) + 8) != uVar5) {
      uVar6 = 0;
      puVar4 = (ulonglong *)(*(longlong *)(DAT_14cbf44a8 + 0x40) + 0x18);
      do {
        if (uVar2 - 1 == uVar6) goto LAB_14437bbb8;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar1 != uVar5);
      if (uVar2 <= uVar6) goto LAB_14437bbb8;
    }
    uVar2 = FUN_1404d8156();
    bVar7 = uVar2 != uVar5;
  }
  return bVar7;
}



// FUNCTION 14437bbe8 FUN_14437bbe8 body=246 status=ok
// SIG undefined FUN_14437bbe8(void)

undefined4 FUN_14437bbe8(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbf4518 != DAT_14cbf4544) {
    puVar5 = &DAT_14cbf4548;
    if (DAT_14cbf4550 != (undefined *)0x0) {
      puVar5 = DAT_14cbf4550;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14cbf4558 - 1U & (uint)param_1) * 4);
    for (iVar1 = iVar4; iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cbf4510 + 8)) {
      if (*(byte *)(DAT_14cbf4510 + (longlong)iVar1 * 0x10) == param_1) goto LAB_14437bc83;
    }
  }
  FUN_140002266(&local_20,L"ToXeSSQualitySetting called with invalid enum value: %d");
  puVar3 = local_20;
  if (local_18 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1415b7ec4(puVar3,3,0);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = 0x66;
  goto LAB_14437bcbb;
  while (iVar4 = *(int *)(lVar6 + 8), iVar4 != -1) {
LAB_14437bc83:
    lVar6 = DAT_14cbf4510 + (longlong)iVar4 * 0x10;
    if (*(byte *)(DAT_14cbf4510 + (longlong)iVar4 * 0x10) == param_1) goto LAB_14437bcda;
  }
  lVar6 = 0;
LAB_14437bcda:
  uVar2 = *(undefined4 *)(lVar6 + 4);
LAB_14437bcbb:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437bd14 FUN_14437bd14 body=482 status=ok
// SIG undefined FUN_14437bd14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437bd14(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined1 local_d1;
  undefined4 local_d0;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined1 local_a9;
  undefined1 **local_a8;
  ulonglong *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = &PTR_FUN_14ba35b70;
  local_e8 = 1;
  local_f8 = 0;
  FUN_14282b410(L"/Script/XeSSBlueprint",&PTR_FUN_14ba35b90,1,0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_98,&DAT_14cbf4500);
  if (cVar1 == '\0') {
    _DAT_14cbf4500 = 0;
    uRam000000014cbf4508 = 0;
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = &local_a9;
  local_a9 = 1;
  local_90 = &local_b0;
  local_b0 = 100;
  local_a0 = &local_28;
  local_88 = &local_b1;
  local_b1 = 2;
  local_80 = &local_b8;
  local_b8 = 0x65;
  local_78 = &local_b9;
  local_b9 = 3;
  local_70 = &local_c0;
  local_c0 = 0x66;
  local_68 = &local_c1;
  local_c1 = 4;
  local_60 = &local_c8;
  local_c8 = 0x67;
  local_58 = &local_c9;
  local_c9 = 5;
  local_50 = &local_d0;
  local_d0 = 0x68;
  local_48 = &local_d1;
  local_d1 = 6;
  local_40 = &local_d8;
  local_d8 = 0x69;
  local_38 = &local_d9;
  local_d9 = 7;
  local_30 = &local_e0;
  local_e0 = 0x6a;
  local_a8 = &local_98;
  FUN_145bf172a(&local_a8);
  atexit(FUN_14437bb34);
  local_98 = (undefined1 *)0x800000014ba35ca4;
  local_a8 = (undefined1 **)CONCAT44(local_a8._4_4_,0xd);
  uVar2 = FUN_14577453c(L"XeSSBlueprint",&local_a8);
  local_90._0_5_ = CONCAT14(1,uVar2);
  FUN_14666af12(&local_98);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437bef8 FUN_14437bef8 body=57 status=ok
// SIG undefined FUN_14437bef8(void)

void FUN_14437bef8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf45d8 == 0) {
    uVar1 = FUN_14666b07c();
    DAT_14cbf45d8 = FUN_14171c317(FUN_14666b0ab,uVar1,L"EXeLLMode");
  }
  return;
}



// FUNCTION 14437bf36 FUN_14437bf36 body=47 status=ok
// SIG undefined FUN_14437bf36(void)

longlong FUN_14437bf36(void)

{
  if (DAT_14cbf4640 == 0) {
    FUN_14000fc22(&DAT_14cbf4640,&PTR_FUN_14ba367d8);
  }
  return DAT_14cbf4640;
}



// FUNCTION 14437bf66 FUN_14437bf66 body=53 status=ok
// SIG undefined FUN_14437bf66(void)

void FUN_14437bf66(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cbf4678 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143c1e560();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14437bf9c FUN_14437bf9c body=65 status=ok
// SIG undefined FUN_14437bf9c(void)

void FUN_14437bf9c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cbf4678 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_143c18d94();
    uVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14437bfde FUN_14437bfde body=206 status=ok
// SIG undefined FUN_14437bfde(void)

void FUN_14437bfde(undefined1 param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4688) {
    FUN_144b3d300(&DAT_14cbf4688);
    if (DAT_14cbf4688 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf4680 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeLL.Enabled",1);
      _Init_thread_footer(&DAT_14cbf4688);
    }
  }
  plVar1 = DAT_14cbf4680;
  if (DAT_14cbf4680 != (longlong *)0x0) {
    uVar2 = (**(code **)(*DAT_14cbf4680 + 0x18))(DAT_14cbf4680);
    FUN_140635eb8(plVar1,param_1,uVar2 & 0xff000000,0);
    return;
  }
  FUN_1415b7ec4(L"SetXeLLMode: Could not find console variable r.XeLL.Enabled",2,0);
  return;
}



// FUNCTION 14437c0c4 FUN_14437c0c4 body=160 status=ok
// SIG undefined FUN_14437c0c4(void)

void FUN_14437c0c4(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14ba36f50;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/XeLLBlueprint",&PTR_FUN_14ba36f70,1,0);
  local_28 = 0x800000014ba37010;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666b3e6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437c168 FUN_14437c168 body=652 status=ok
// SIG undefined FUN_14437c168(void)

void FUN_14437c168(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  GUID local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cbf4718 = param_1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_88 = 0;
  cVar2 = FUN_14063337c(&DAT_14c846b20,L"ElasticSessionId=",(undefined8 **)(param_1 + 200),1);
  if (cVar2 == '\0') {
    local_68.Data1 = 0;
    local_68.Data2 = 0;
    local_68.Data3 = 0;
    local_68.Data4[0] = '\0';
    local_68.Data4[1] = '\0';
    local_68.Data4[2] = '\0';
    local_68.Data4[3] = '\0';
    local_68.Data4[4] = '\0';
    local_68.Data4[5] = '\0';
    local_68.Data4[6] = '\0';
    local_68.Data4[7] = '\0';
    CoCreateGuid(&local_68);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_1407c869a(&local_68,&local_58,0);
    if ((undefined8 **)(param_1 + 200) == &local_58) {
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 **)(param_1 + 200) = local_58;
      local_58 = (undefined8 *)0x0;
      *(int *)(param_1 + 0xd0) = (int)uStack_50;
      *(undefined4 *)(param_1 + 0xd4) = uStack_50._4_4_;
    }
  }
  FUN_145bd482e(param_1);
  FUN_1415d89a2(param_1);
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_145bd4a2c(&DAT_14c8673d8,&local_58,param_1,&LAB_145e02a80);
    lVar3 = FUN_140885e8c();
    if ((lVar3 != 0) && (0.0 < *(double *)(lVar3 + 0x70))) {
      uVar4 = FUN_1401cb356();
      local_58 = (undefined8 *)0x0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      FUN_1446efa72(&local_58,0,3,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      *local_58 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_58[2] = lVar5;
      *local_58 = &PTR_FUN_14ba38590;
      local_58[3] = param_1;
      local_58[4] = FUN_140885dd2;
      local_88 = CONCAT44(local_88._4_4_,0x3f800000);
      FUN_1405f67fc(uVar4,local_78,&local_58,L"FGbxElasticTelemetryModule");
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if ((int)uStack_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_14437c25d;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        uStack_50 = uStack_50 & 0xffffffff00000000;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14437c25d:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437c406 FUN_14437c406 body=1227 status=ok
// SIG undefined FUN_14437c406(void)

void FUN_14437c406(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar4 = (**(code **)(*param_1 + 0x40))();
  if ((cVar4 == '\0') || (lVar5 = FUN_140885e8c(), lVar5 == 0)) goto LAB_14437c546;
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 5) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  local_50 = puVar6;
  local_48 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_149e49100;
  local_48[2] = (longlong)puVar6;
  (*(code *)*param_3)(param_3[1],&local_50);
  plVar7 = local_48;
  if (local_48 == (longlong *)0x0) {
    if (*(int *)((longlong)local_50 + 0x34) < *(int *)(local_50 + 1)) goto LAB_14437c572;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    iVar9 = *(int *)(local_50 + 1);
    iVar3 = *(int *)((longlong)local_50 + 0x34);
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (iVar3 < iVar9) {
LAB_14437c572:
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_145fe0690(&local_78,&local_68,0);
      local_88 = local_50;
      local_80 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_145927d24(&local_88,local_78,1);
      plVar7 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      (**(code **)(*param_1 + 0x68))(param_1,&local_88);
      if (1 < (int)local_80) {
        FUN_140b1283a(local_98,&DAT_149e06196,&local_88);
        iVar9 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar9 = 0;
        }
        FUN_140e63652(&local_68,iVar9 + -1,local_98);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*param_2;
      }
      local_d8 = 1;
      FUN_140807d8e(lVar5 + 0x38,local_98,L"$INDEX$",puVar10);
      plVar7 = (longlong *)FUN_141054386();
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_a8);
      (**(code **)(*local_a8 + 0x68))(local_a8,local_98);
      plVar7 = local_a8;
      FUN_140056680(local_b8,&DAT_149f280e2);
      (**(code **)(*plVar7 + 0x60))(plVar7,local_b8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_a8;
      FUN_140056680(local_b8,L"application/json; charset=utf-8");
      FUN_140056680(local_c8,L"Content-Type");
      (**(code **)(*plVar7 + 0xb0))(plVar7,local_c8,local_b8);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_a8;
      FUN_140056680(local_b8,L"Authorization");
      (**(code **)(*plVar7 + 0xb8))(plVar7,local_b8,param_1 + 2);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_a8;
      puVar10 = local_68;
      if ((int)uStack_60 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140056680(local_b8,puVar10);
      (**(code **)(*plVar7 + 0x90))(plVar7,local_b8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = (**(code **)(*local_a8 + 0xf0))();
      FUN_148f98b36(uVar8);
      (**(code **)(*local_a8 + 0xe8))();
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
      iVar9 = (int)param_1[0x30];
      *(uint *)(param_1 + 0x30) = iVar9 + 1U;
      if (*(uint *)((longlong)param_1 + 0x184) < iVar9 + 1U) {
        FUN_146283e3a(param_1 + 0x2f,iVar9);
      }
      lVar5 = param_1[0x2f];
      *(longlong **)(lVar5 + (longlong)iVar9 * 0x10) = local_a8;
      *(longlong **)(lVar5 + 8 + (longlong)iVar9 * 0x10) = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_a0 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_70 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_14437c546:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437c8d2 FUN_14437c8d2 body=807 status=ok
// SIG undefined FUN_14437c8d2(void)

undefined8 *
FUN_14437c8d2(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong *local_60;
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = (**(code **)(*param_1 + 0x40))();
  if ((cVar3 != '\0') && (*(int *)(param_3 + 1) - 2U < 0x7fffffff)) {
    lVar4 = FUN_140885e8c();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x50) - 2U < 0x7fffffff)) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_3;
      }
      local_88 = 1;
      FUN_140807d8e(lVar4 + 0x48,local_50,L"$INDEX$",puVar7);
      plVar5 = (longlong *)FUN_141054386();
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_60);
      (**(code **)(*local_60 + 0x68))(local_60,local_50);
      plVar5 = local_60;
      FUN_140056680(local_70,&DAT_149f280e2);
      (**(code **)(*plVar5 + 0x60))(plVar5,local_70);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      plVar5 = local_60;
      FUN_140056680(local_70,L"application/json; charset=utf-8");
      FUN_140056680(local_80,L"Content-Type");
      (**(code **)(*plVar5 + 0xb0))(plVar5,local_80,local_70);
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      plVar5 = local_60;
      FUN_140056680(local_70,L"Authorization");
      (**(code **)(*plVar5 + 0xb8))(plVar5,local_70,param_1 + 2);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      plVar5 = local_60;
      if (*(int *)(param_4 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_4;
      }
      FUN_140056680(local_70,puVar7);
      (**(code **)(*plVar5 + 0x90))(plVar5,local_70);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (*param_5 != 0) {
        uVar6 = (**(code **)(*local_60 + 0xf0))();
        FUN_148f98bd8(uVar6,param_5);
      }
      (**(code **)(*local_60 + 0xe8))();
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
      iVar2 = (int)param_1[0x30];
      *(uint *)(param_1 + 0x30) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x184) < iVar2 + 1U) {
        FUN_146283e3a(param_1 + 0x2f,iVar2);
      }
      lVar4 = param_1[0x2f];
      *(longlong **)(lVar4 + (longlong)iVar2 * 0x10) = local_60;
      *(longlong **)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_58;
      if (local_58 == (longlong *)0x0) {
        *param_2 = local_60;
        param_2[1] = 0;
      }
      else {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        *param_2 = local_60;
        param_2[1] = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_58 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14437c94a;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14437c94a:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437cbfa FUN_14437cbfa body=521 status=ok
// SIG undefined FUN_14437cbfa(void)

void FUN_14437cbfa(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = (**(code **)(*param_1 + 0x40))();
  if ((cVar6 == '\0') || (*(char *)((longlong)param_1 + 9) != '\x01')) goto LAB_14437cd1d;
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  local_48 = puVar7;
  local_40 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_40[1] = (longlong)&DAT_100000001;
  *local_40 = (longlong)&PTR_FUN_149e49100;
  local_40[2] = (longlong)puVar7;
  (*(code *)*param_3)(param_3[1],&local_48);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    if (*(int *)((longlong)local_48 + 0x34) < *(int *)(local_48 + 1)) goto LAB_14437cd41;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    iVar4 = *(int *)(local_48 + 1);
    iVar5 = *(int *)((longlong)local_48 + 0x34);
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (iVar5 < iVar4) {
LAB_14437cd41:
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_145fe0690(&local_68,local_58,0);
      local_78 = local_48;
      local_70 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_145927d24(&local_78,local_68,1);
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      (**(code **)(*param_1 + 0x88))(param_1,param_2,local_58);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14437cd1d:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437ce04 FUN_14437ce04 body=479 status=ok
// SIG undefined FUN_14437ce04(void)

void FUN_14437ce04(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58 [2];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    (**(code **)(*param_1 + 0x98))(param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_38,L"{\"create\": {\"_index\": \"%s\"}}",puVar3);
    FUN_1400020e8(&local_38,&DAT_149e02010,2);
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_38,*param_3,iVar2);
    (**(code **)(*param_1 + 0x68))(param_1,&local_48);
    if (1 < local_40) {
      FUN_140b1283a(local_58,&DAT_149e06196,&local_48);
      iVar2 = local_30 + -1;
      if (local_30 == 0) {
        iVar2 = 0;
      }
      FUN_140e63652(&local_38,iVar2 + -1,local_58);
      if (local_58[0].QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1400020e8(&local_38,&DAT_149e02010,2);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1 + 0x1b,local_38,iVar2);
    LOCK();
    *(int *)((longlong)param_1 + 0xf4) = *(int *)((longlong)param_1 + 0xf4) + 1;
    UNLOCK();
    iVar2 = (int)param_1[0x1c] + -1;
    if ((int)param_1[0x1c] == 0) {
      iVar2 = 0;
    }
    LOCK();
    *(int *)(param_1 + 0x1f) = iVar2;
    UNLOCK();
    if (((double)param_1[0x1d] == 0.0) && (!NAN((double)param_1[0x1d]))) {
      QueryPerformanceCounter(local_58);
      param_1[0x1d] = (longlong)((double)local_58[0].QuadPart * DAT_14c83f420 + 16777216.0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    (**(code **)(*param_1 + 0xa0))(param_1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437cfe4 FUN_14437cfe4 body=325 status=ok
// SIG undefined FUN_14437cfe4(void)

void FUN_14437cfe4(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  lVar4 = DAT_14cbf4718;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbf4718 == 0 || param_3 != '\0') {
    if (DAT_14cbf4718 == 0) goto LAB_14437d0bb;
  }
  else if ((longlong *)*param_2 != (longlong *)0x0) {
    iVar5 = (**(code **)(*(longlong *)*param_2 + 0x58))();
    if ((iVar5 - 400U < 6) && (iVar5 - 400U != 2)) {
      *(undefined1 *)(lVar4 + 10) = 1;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x128);
  EnterCriticalSection(lpCriticalSection);
  local_48 = *param_1;
  local_40 = (longlong *)param_1[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_38 = &local_48;
  FUN_141214a48(lVar4 + 0x178);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_14437d0bb:
  plVar3 = (longlong *)param_1[1];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437d12a FUN_14437d12a body=610 status=ok
// SIG undefined FUN_14437d12a(void)

longlong * FUN_14437d12a(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  lVar4 = DAT_14cbf4718;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cbf4718 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14cbf4718 + 0x128);
    EnterCriticalSection(lpCriticalSection);
    local_58 = *param_2;
    plStack_50 = (longlong *)param_2[1];
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_141214a48(lVar4 + 0x178);
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0) {
      if (param_4 != '\0') {
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0x60))(plVar3,local_78);
        FUN_14683a3d0(&local_68,local_78);
        cVar5 = FUN_14047b282(local_68,&local_58,0);
        lVar4 = local_58;
        if (cVar5 == '\0') {
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
              }
            }
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
              }
            }
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (lVar4 != 0) {
            *param_1 = local_58;
            param_1[1] = (longlong)plStack_50;
            goto LAB_14437d20b;
          }
        }
        plVar3 = plStack_50;
        *param_1 = 0;
        param_1[1] = 0;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        goto LAB_14437d20b;
      }
      iVar6 = (**(code **)(*plVar3 + 0x58))();
      if ((iVar6 - 400U < 6) && (iVar6 - 400U != 2)) {
        *(undefined1 *)(lVar4 + 10) = 1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14437d20b:
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437d404 FUN_14437d404 body=1003 status=ok
// SIG undefined FUN_14437d404(void)

void FUN_14437d404(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  uVar2 = *param_2;
  FUN_1400b22c2(local_50,"session_id");
  FUN_145964e64(uVar2,local_50,lVar1 + 200);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)param_1[1];
  }
  FUN_140002266(local_50,L"CL %s",puVar4);
  FUN_1400b22c2(local_60,"Changelist");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = *(undefined2 **)param_1[2];
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"BuildBranch");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = *(undefined2 **)param_1[3];
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"BuildDate");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = *(undefined2 **)param_1[4];
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"BuildVersion");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = *(undefined2 **)param_1[5];
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"BuildConfiguration");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = *(undefined2 **)param_1[6];
  if (puVar4 == (undefined2 *)0x0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"BuildTarget");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  lVar3 = param_1[7];
  FUN_1400b22c2(local_50,"Platform");
  FUN_145964e64(uVar2,local_50,lVar3);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  puVar4 = &DAT_149dfb77a;
  if (*(undefined2 **)param_1[8] != (undefined2 *)0x0) {
    puVar4 = *(undefined2 **)param_1[8];
  }
  FUN_140056680(local_50,puVar4);
  FUN_1400b22c2(local_60,"CommandLine");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  FUN_1400021e4(lVar1 + 0x188,local_50);
  FUN_1400b22c2(local_60,"GraphicsPreset");
  FUN_145964f10(uVar2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = *param_2;
  FUN_1400b22c2(local_50,&DAT_14ba38655);
  FUN_14626ec84(uVar2,local_50,1);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437d7f0 FUN_14437d7f0 body=141 status=ok
// SIG undefined FUN_14437d7f0(void)

void FUN_14437d7f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  FUN_1400021e4(*param_1 + 0x188,local_30);
  FUN_1400b22c2(local_40,"GraphicsPreset");
  FUN_145964f10(uVar1,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437d87e FUN_14437d87e body=29 status=ok
// SIG undefined FUN_14437d87e(void)

undefined8 FUN_14437d87e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437d8b0 FUN_14437d8b0 body=101 status=ok
// SIG undefined FUN_14437d8b0(void)

void FUN_14437d8b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba387b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14437d916 FUN_14437d916 body=101 status=ok
// SIG undefined FUN_14437d916(void)

void FUN_14437d916(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba387b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14437d97c FUN_14437d97c body=134 status=ok
// SIG undefined FUN_14437d97c(void)

void FUN_14437d97c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba387b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014437d9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14437da02 FUN_14437da02 body=159 status=ok
// SIG undefined FUN_14437da02(void)

void FUN_14437da02(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_4;
  FUN_14437db4e(param_1 + 0x18,param_2,param_3,&local_19);
  plVar3 = *(longlong **)(param_2 + 8);
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
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 14437dab2 FUN_14437dab2 body=154 status=ok
// SIG undefined FUN_14437dab2(void)

undefined8 FUN_14437dab2(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_4;
  FUN_14437db4e(param_1 + 0x18,param_2,param_3,&local_19);
  plVar3 = *(longlong **)(param_2 + 8);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437db4e FUN_14437db4e body=366 status=ok
// SIG undefined FUN_14437db4e(void)

void FUN_14437db4e(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_4;
  local_50 = *param_3;
  puVar4 = (undefined8 *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar5 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)param_1[1];
  local_58 = ((undefined8 *)param_1[1])[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_48 = puVar4;
  FUN_14437d12a(&local_40,&local_60,&local_50,uVar3);
  plVar1 = local_38;
  puVar6 = (undefined8 *)*param_1;
  *puVar6 = local_40;
  local_40 = 0;
  plVar7 = (longlong *)puVar6[1];
  if (local_38 != plVar7) {
    local_38 = (longlong *)0x0;
    puVar6[1] = plVar1;
    if (plVar7 == (longlong *)0x0) goto LAB_14437dc42;
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
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_14437dc42:
  (**(code **)(**(longlong **)param_1[2] + 0x10))();
  if (plVar5 != (longlong *)0x0) {
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
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437dcd2 FUN_14437dcd2 body=270 status=ok
// SIG undefined FUN_14437dcd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437dcd2(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxElasticTelemetry",&PTR_FUN_14ba37c60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxElasticTelemetry",&PTR_FUN_14ba38250,1,0);
  local_48 = "UnixSocketPath";
  local_40 = 0xe;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cbf4710 = (ulonglong)uVar1;
  local_48 = (char *)0x800000014ba3829c;
  local_34 = 0x13;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14666b7ae(&local_48);
  FUN_140056680(&DAT_14cbf4728,L"ElasticTelemetry");
  atexit((_func_5014 *)&LAB_14437d38d);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437dde4 FUN_14437dde4 body=724 status=ok
// SIG undefined FUN_14437dde4(void)

void FUN_14437dde4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_24);
            goto LAB_14437dfb0;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_24) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_24,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_24,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_24,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14437dfb0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_24 != 0) {
    FUN_14861359a();
  }
  if ((CONCAT44(uStack_1c,uStack_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e0ba FUN_14437e0ba body=291 status=ok
// SIG undefined FUN_14437e0ba(void)

void FUN_14437e0ba(char param_1,undefined4 param_2)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong alStack_80 [3];
  longlong local_68;
  longlong alStack_60 [5];
  
  alStack_60[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != '\0') {
    local_68 = 0;
    alStack_60[0] = 0;
    alStack_60[1] = 0;
    alStack_80[1] = 0;
    local_88 = 0;
    alStack_80[0] = 0;
    FUN_148612620(&local_68,&local_88);
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_148f9a216(&local_a8,(alStack_80[0] - local_88 >> 3) * 0x2e8ba2e8ba2e8ba3,&local_88,
                  alStack_80);
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_1401da014(&local_c8,alStack_60[0] - local_68 >> 5,&local_68,alStack_60);
    FUN_1486132f4(&local_c8,&local_a8,param_2);
    FUN_148613aa8(&local_88);
    FUN_1401d7744(&local_68);
  }
  if ((alStack_60[2] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e1de FUN_14437e1de body=124 status=ok
// SIG undefined FUN_14437e1de(void)

void FUN_14437e1de(longlong *param_1)

{
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    _wtoi(_Str);
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_148f99cac(&local_28);
  FUN_145aea73f(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e25c FUN_14437e25c body=240 status=ok
// SIG undefined FUN_14437e25c(void)

void FUN_14437e25c(undefined8 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  if (0 < *(int *)(param_1 + 1)) {
    param_1 = (undefined8 *)*param_1;
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    while( true ) {
      uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
      uVar6 = (ulonglong)uVar7;
      uVar3 = *(ushort *)((longlong)&DAT_149e0209e + lVar5);
      if (uVar7 != uVar3) break;
      if (uVar7 == 0) goto LAB_14437e2d5;
LAB_14437e2a4:
      lVar5 = lVar5 + 2;
    }
    if ((uVar3 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar4 = (ulonglong)uVar3;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_14437e2a4;
    }
    if (uVar7 != uVar3) {
      if (*(int *)(param_1 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      lVar5 = 0;
      goto LAB_14437e300;
    }
LAB_14437e2d5:
    cVar1 = FUN_148613438();
    if (cVar1 != '\0') {
      FUN_14861359a();
      return;
    }
  }
  return;
LAB_14437e300:
  uVar7 = *(ushort *)((longlong)puVar2 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar3 = *(ushort *)((longlong)&DAT_149e25dfc + lVar5);
  if (uVar7 != uVar3) {
    if ((uVar3 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar4 = (ulonglong)uVar3;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_14437e315;
    }
    if (uVar7 != uVar3) {
      return;
    }
LAB_14437e341:
    FUN_148613730();
    return;
  }
  if (uVar7 == 0) goto LAB_14437e341;
LAB_14437e315:
  lVar5 = lVar5 + 2;
  goto LAB_14437e300;
}



// FUNCTION 14437e34c FUN_14437e34c body=228 status=ok
// SIG undefined FUN_14437e34c(void)

void FUN_14437e34c(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Hdr10Plus2ContentStarted",&PTR_FUN_14ba38c80,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Hdr10Plus2ContentStarted",&PTR_FUN_14ba38fe0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Hdr10Plus2ContentStarted",&PTR_FUN_14ba39a50,1,0);
  local_48 = 0x800000014ba39a78;
  local_34 = 0x18;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14666bbee(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e434 FUN_14437e434 body=256 status=ok
// SIG undefined FUN_14437e434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437e434(void)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _DAT_14cbf47f0 = 0x47efffffe0000000;
  _DAT_14cbf47f8 = 0x47efffffe0000000;
  _DAT_14cbf4800 = 0x47efffffe0000000;
  _DAT_14cbf4808 = 0x47efffffe0000000;
  _DAT_14cbf4810 = 0x47efffffe0000000;
  _DAT_14cbf4818 = 0x47efffffe0000000;
  _DAT_14cbf4820 = 0x47efffffe0000000;
  _DAT_14cbf4828 = 0x47efffffe0000000;
  local_30 = "bone";
  local_28 = 4;
  local_24 = 0;
  FUN_14001a6c0(&local_30,1);
  local_30 = "AssetRegistry";
  local_28 = 0xd;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  _DAT_14cbf4830 = (ulonglong)uVar1;
  local_30 = (char *)0x800000014ba39c90;
  local_1c = 7;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14666bd7c(&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e538 FUN_14437e538 body=102 status=ok
// SIG undefined FUN_14437e538(void)

void FUN_14437e538(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba39d50;
  local_14 = 0x14;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666bebe(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e5a0 FUN_14437e5a0 body=59 status=ok
// SIG undefined FUN_14437e5a0(void)

void FUN_14437e5a0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf4868;
  if (DAT_14cbf4868 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4868 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014437e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14437e5db FUN_14437e5db body=130 status=ok
// SIG undefined FUN_14437e5db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437e5db(void)

{
  FUN_1446f470e(&DAT_14cbf4840,L"LobbyBase",1);
  FUN_1446f470e(&DAT_14cbf4848,L"Lobby",1);
  FUN_1446f470e(&DAT_14cbf4850,L"LobbyMember",1);
  FUN_1446f470e(&DAT_14cbf4858,L"CONNECT_STRING",1);
  _DAT_14cbf4860 = 0;
  DAT_14cbf4868 = 0;
  atexit(FUN_14437e5a0);
  return;
}



// FUNCTION 14437e660 FUN_14437e660 body=127 status=ok
// SIG undefined FUN_14437e660(void)

void FUN_14437e660(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba39f30;
  local_14 = 0x1f;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666c000(&local_28);
  FUN_1446f470e(&DAT_14cbf4874,L"CONNECT_STRING",1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e6e0 FUN_14437e6e0 body=147 status=ok
// SIG undefined FUN_14437e6e0(void)

void FUN_14437e6e0(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/ShiftBlueprint",&PTR_FUN_14ba3a6b0,1,0);
  local_28 = 0x800000014ba3a740;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666c266(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437e7d4 FUN_14437e7d4 body=695 status=ok
// SIG undefined FUN_14437e7d4(void)

undefined8 FUN_14437e7d4(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_70;
  undefined4 local_68;
  wchar_t *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_14045d4ce(param_3,L"bIsLanMatch",0);
  if ((lVar5 == 0) && (lVar5 = FUN_14045d4ce(param_3,L"bUseIPSockets",0), lVar5 == 0)) {
    bVar2 = FUN_147d8a6b2(param_3);
    if (bVar2 == 0) {
      FUN_140056680(&local_58,L"127.0.0.1");
      iVar4 = *(int *)(param_3 + 0x18);
      if (iVar4 == local_50) {
        if (1 < iVar4) {
          iVar4 = wcscmp(*(wchar_t **)(param_3 + 0x10),local_58);
          bVar8 = 1;
          if (iVar4 != 0) goto LAB_14437e8a4;
        }
        goto LAB_14437e87b;
      }
      bVar8 = 1;
      if (local_50 + iVar4 == 1) goto LAB_14437e87b;
    }
    else {
LAB_14437e87b:
      bVar8 = bVar2 ^ 1;
      FUN_1446f470e(local_48,L"SHIFT",1);
      FUN_140272950(local_48);
    }
LAB_14437e8a4:
    FUN_1446f470e(local_48,L"SHIFT",1);
    FUN_140272950(local_48);
    lVar5 = param_1[0x35];
    if (DAT_14cb0d2b0 != 0 && lVar5 == 0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
LAB_14437e997:
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        lVar9 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
          if ((*(longlong *)(lVar1 + 0x230) != 0) &&
             (*(longlong **)(*(longlong *)(lVar1 + 0x230) + 0x30) == param_1)) {
            if (lVar1 == 0) goto LAB_14437e997;
            lVar5 = *(longlong *)(lVar1 + 0x360);
            break;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
      }
    }
    lVar5 = FUN_1415b5f0c(lVar5);
    if (lVar5 != 0) {
      bVar10 = *(longlong *)(lVar5 + 0x2b8) == 0;
      if (bVar8 != 0) goto LAB_14437e9cc;
      if (*(longlong *)(lVar5 + 0x2b8) == 0) goto LAB_14437e82b;
LAB_14437e9e4:
      *(undefined1 *)(param_1 + 0x134) = 0;
      local_78 = CONCAT31(local_78._1_3_,1);
      local_70 = param_4;
      cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,1,param_2,param_3);
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x4b0))(param_1);
        plVar7 = (longlong *)FUN_14666c5f7(DAT_14c951640,param_1[0x3b]);
        if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
        }
        param_1[0x1e] = (longlong)plVar7;
        local_68 = 0;
        local_70 = local_70 & 0xffffffff00000000;
        local_78 = 2;
        (**(code **)(*plVar7 + 0x348))(plVar7,param_1,uVar6,param_3);
        FUN_1463ecc48(param_1);
        uVar6 = 1;
      }
      goto LAB_14437e843;
    }
    bVar10 = true;
    if (bVar8 != 0) {
LAB_14437e9cc:
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar10) goto LAB_14437e9e4;
    }
  }
LAB_14437e82b:
  *(undefined1 *)(param_1 + 0x134) = 1;
  uVar6 = FUN_143ed1ace(param_1,param_2,param_3,param_4);
LAB_14437e843:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14437ea8c FUN_14437ea8c body=505 status=ok
// SIG undefined FUN_14437ea8c(void)

undefined8
FUN_14437ea8c(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined2 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0x134] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  local_70 = param_6;
  local_78 = param_5;
  cVar4 = FUN_143595812(param_1,param_2,param_3,param_4);
  if ((cVar4 != '\0') && (lVar5 = (**(code **)(*param_1 + 0x3d0))(param_1), lVar5 != 0)) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x4b0))(param_1);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    lVar9 = param_1[0x35];
    if (DAT_14cb0d2b0 != 0 && lVar9 == 0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
LAB_14437ebc7:
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
          if ((*(longlong *)(lVar3 + 0x230) != 0) &&
             (*(longlong **)(*(longlong *)(lVar3 + 0x230) + 0x30) == param_1)) {
            if (lVar3 == 0) goto LAB_14437ebc7;
            lVar9 = *(longlong *)(lVar3 + 0x360);
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
      }
    }
    FUN_140056680(local_60,L"Unreal");
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    FUN_145ffc974(lVar5,local_50,lVar9,local_60);
    FUN_1461f83dc(param_1,local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x4b0))(param_1);
    if (plVar6 != (longlong *)0x0) {
      FUN_146252922(local_50,param_4);
      (**(code **)(*plVar6 + 0x88))(plVar6,param_1 + 0x135);
      uVar2 = *(undefined2 *)(param_4 + 0x20);
      *(undefined2 *)((longlong)param_1 + 0x9b4) = uVar2;
      uVar7 = CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1);
      goto LAB_14437eb23;
    }
  }
  uVar7 = 0;
LAB_14437eb23:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14437eca2 FUN_14437eca2 body=1235 status=ok
// SIG undefined FUN_14437eca2(void)

undefined8
FUN_14437eca2(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  longlong *local_70;
  longlong *local_68;
  wchar_t *local_60;
  int local_58;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[0xf8] = 0;
  plVar9 = (longlong *)param_1[0xf9];
  if (plVar9 != (longlong *)0x0) {
    param_1[0xf9] = 0;
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
  lVar8 = FUN_14045d4ce(param_3,L"bIsLanMatch",0);
  if ((lVar8 == 0) && (lVar8 = FUN_14045d4ce(param_3,L"bUseIPSockets",0), lVar8 == 0)) {
    bVar5 = FUN_147d8a6b2(param_3);
    if (bVar5 == 0) {
      FUN_140056680(&local_50,L"127.0.0.1");
      iVar7 = *(int *)(param_3 + 0x18);
      if (iVar7 == local_48) {
        if (1 < iVar7) {
          iVar7 = wcscmp(*(wchar_t **)(param_3 + 0x10),local_50);
          bVar14 = 1;
          if (iVar7 != 0) goto LAB_14437edf0;
        }
        goto LAB_14437edc7;
      }
      bVar14 = 1;
      if (local_48 + iVar7 == 1) goto LAB_14437edc7;
    }
    else {
LAB_14437edc7:
      bVar14 = bVar5 ^ 1;
      FUN_1446f470e(&local_60,L"SHIFT",1);
      FUN_140272950(&local_60);
    }
LAB_14437edf0:
    FUN_1446f470e(&local_60,L"SHIFT",1);
    FUN_140272950(&local_60);
    lVar8 = param_1[0x35];
    if (DAT_14cb0d2b0 != 0 && lVar8 == 0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
LAB_14437eee3:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        lVar12 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar12);
          if ((*(longlong *)(lVar13 + 0x230) != 0) &&
             (*(longlong **)(*(longlong *)(lVar13 + 0x230) + 0x30) == param_1)) {
            if (lVar13 == 0) goto LAB_14437eee3;
            lVar8 = *(longlong *)(lVar13 + 0x360);
            break;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar12);
      }
    }
    lVar8 = FUN_1415b5f0c(lVar8);
    if (lVar8 == 0) {
      bVar15 = true;
      if (bVar14 != 0) goto LAB_14437ef18;
      goto LAB_14437ed42;
    }
    bVar15 = *(longlong *)(lVar8 + 0x2b8) == 0;
    if (bVar14 == 0) {
      if (*(longlong *)(lVar8 + 0x2b8) == 0) goto LAB_14437ed42;
    }
    else {
LAB_14437ef18:
      if (local_50 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar15) goto LAB_14437ed42;
    }
    *(undefined1 *)(param_1 + 0x134) = 0;
    lVar8 = (**(code **)(*param_1 + 0x3d0))(param_1);
    if (lVar8 == 0) {
LAB_14437f094:
      uVar11 = 0;
      goto LAB_14437ed8c;
    }
    lVar12 = param_1[0x35];
    if (DAT_14cb0d2b0 != 0 && lVar12 == 0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
LAB_14437efbe:
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        lVar13 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar13);
          if ((*(longlong *)(lVar3 + 0x230) != 0) &&
             (*(longlong **)(*(longlong *)(lVar3 + 0x230) + 0x30) == param_1)) {
            if (lVar3 == 0) goto LAB_14437efbe;
            lVar12 = *(longlong *)(lVar3 + 0x360);
            break;
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar13);
      }
    }
    lVar12 = FUN_1415b5f0c(lVar12);
    if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x2b8) == 0)) goto LAB_14437f094;
    local_80 = param_5;
    uVar11 = 0;
    local_88 = param_4;
    cVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,0,param_2,param_3);
    if (cVar4 == '\0') goto LAB_14437ed8c;
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x4b0))(param_1);
    cVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,param_1 + 0x135);
    if (cVar4 == '\0') goto LAB_14437f094;
    uVar11 = 0;
    cVar4 = (**(code **)(*plVar9 + 0x28))(plVar9,0);
    if (cVar4 == '\0') goto LAB_14437ed8c;
    (**(code **)(*param_1 + 0x2d0))(param_1);
    cVar4 = FUN_147d8a6b2(param_3);
    if (cVar4 == '\0') {
      FUN_140056680(&local_60,L"127.0.0.1");
      iVar7 = *(int *)(param_3 + 0x18);
      if (iVar7 == local_58) {
        bVar15 = true;
        if (1 < iVar7) {
          iVar7 = wcscmp(*(wchar_t **)(param_3 + 0x10),local_60);
          bVar15 = iVar7 == 0;
        }
      }
      else {
        bVar15 = local_58 + iVar7 == 1;
      }
      if (local_60 != (wchar_t *)0x0) {
        FUN_1400020a8(local_60);
      }
      uVar11 = 1;
      if (!bVar15) goto LAB_14437ed8c;
    }
    plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14ba3c350;
    plVar1 = plVar10 + 2;
    plVar10[2] = (longlong)&PTR_FUN_14ba3c280;
    *(undefined4 *)(plVar10 + 3) = 0;
    *(undefined2 *)((longlong)plVar10 + 0x1c) = 0;
    (**(code **)(*plVar9 + 0x88))(plVar9,plVar1);
    local_70 = plVar1;
    local_68 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      FUN_14614dd96(lVar8,&local_70);
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      uVar11 = 1;
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_14437ed8c;
    }
    FUN_14614dd96(lVar8,&local_70);
  }
  else {
LAB_14437ed42:
    *(undefined1 *)(param_1 + 0x134) = 1;
    local_80 = param_5;
    uVar11 = 0;
    local_88 = param_4;
    cVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,0,param_2,param_3);
    if (cVar4 == '\0') goto LAB_14437ed8c;
    (**(code **)(*param_1 + 0x2d0))(param_1);
    uVar6 = (**(code **)(*(longlong *)param_1[0xf8] + 0x38))();
    *(undefined4 *)(param_3 + 0x20) = uVar6;
  }
  uVar11 = 1;
LAB_14437ed8c:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14437f176 FUN_14437f176 body=61 status=ok
// SIG undefined FUN_14437f176(void)

void FUN_14437f176(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_143596fba();
  if ((char)param_1[0x134] == '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x4b0))(param_1);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014437f1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14437f1b4 FUN_14437f1b4 body=55 status=ok
// SIG undefined FUN_14437f1b4(void)

void FUN_14437f1b4(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  *(ushort *)(param_1 + 0x4c) = uVar2;
  bVar1 = bifrost::sockets::bind(*(ConnectionId *)(param_1 + 0x60),uVar2);
  *(uint *)(param_1 + 100) = (uint)!bVar1 + (uint)!bVar1 * 4 + 2;
  return;
}



// FUNCTION 14437f1ec FUN_14437f1ec body=331 status=ok
// SIG undefined FUN_14437f1ec(void)

bool FUN_14437f1ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 100) == 2)) {
    *(int *)(param_1 + 0x48) = (int)param_2[1];
    uVar5 = (**(code **)(*param_2 + 0x38))(param_2);
    *(undefined2 *)(param_1 + 0x4c) = uVar5;
    plVar7 = *(longlong **)(param_1 + 0x30);
    bVar3 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_14437f2a6:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_14437f2a6;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    *(undefined4 *)(param_1 + 100) = 4;
    local_48 = FUN_14437f890;
    local_40 = &LAB_14437f912;
    local_38 = &LAB_14437f92a;
    local_30 = &LAB_14437f940;
    if (!bVar3) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    local_88 = uVar8;
    local_80 = plVar7;
    bVar9 = bifrost::sockets::connect
                      (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x48),
                       *(undefined2 *)(param_1 + 0x4c),&local_88);
    if (!bVar3) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  else {
    bVar9 = false;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 14437f338 FUN_14437f338 body=334 status=ok
// SIG undefined FUN_14437f338(void)

bool FUN_14437f338(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 100) == 2) {
    *(undefined4 *)(param_1 + 100) = 3;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 == (longlong *)0x0) {
LAB_14437f41e:
      local_48 = FUN_14437f958;
      local_40 = &LAB_14437fa6e;
      local_38 = &LAB_14437fa86;
      local_30 = &LAB_14437fa9c;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar7 = bifrost::sockets::listen(*(undefined4 *)(param_1 + 0x60));
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14437f41e;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_48 = FUN_14437f958;
      local_40 = &LAB_14437fa6e;
      local_38 = &LAB_14437fa86;
      local_30 = &LAB_14437fa9c;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_88 = uVar4;
      plStack_80 = plVar3;
      bVar7 = bifrost::sockets::listen(*(undefined4 *)(param_1 + 0x60));
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  else {
    bVar7 = false;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 14437f488 FUN_14437f488 body=446 status=ok
// SIG undefined FUN_14437f488(void)

ulonglong FUN_14437f488(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong unaff_RBP;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 100) | 2) == 3) {
    if ((int)param_5[1] == -2) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xa0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xa8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        param_5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xa0);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xa8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
    if (*(int *)(param_1 + 100) == 5) {
      iVar7 = *(int *)(param_1 + 0x48);
      uVar6 = 0;
      unaff_RBP = 0;
      if (iVar7 != (int)param_5[1]) goto LAB_14437f57b;
    }
    else {
      iVar7 = (int)param_5[1];
    }
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    uVar6 = param_3;
    if (iVar7 == -2) goto LAB_14437f57b;
    if (iVar7 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (**(code **)(*param_5 + 0x38))(param_5);
      local_b0 = &local_a8;
      bVar5 = bifrost::sockets::sendTo
                        (*(undefined4 *)(param_1 + 0x60),param_2,param_3,(int)param_5[1]);
      if (bVar5) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xb0) = 0;
        goto LAB_14437f57b;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xb0) = 0x32;
    }
  }
  unaff_RBP = 0;
  uVar6 = 0;
LAB_14437f57b:
  *param_4 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14437f648 FUN_14437f648 body=174 status=ok
// SIG undefined FUN_14437f648(void)

bool FUN_14437f648(longlong param_1,uint param_2,SessionId param_3,int *param_4,longlong *param_5)

{
  bool bVar1;
  undefined1 auStackY_68 [32];
  int local_2c;
  int local_28;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_68;
  if ((*(uint *)(param_1 + 100) | 2) == 3) {
    bifrost::sockets::recvFrom
              ((ConnectionId)&local_2c,(void *)(ulonglong)*(uint *)(param_1 + 0x60),param_2,param_3,
               0);
    *param_4 = local_2c;
    if (local_28 != 0) {
      *(int *)(param_5 + 1) = local_28;
      (**(code **)(*param_5 + 0x28))(param_5,local_24);
      local_2c = *param_4;
    }
    *(uint *)(*(longlong *)(param_1 + 0x38) + 0xb0) = local_2c >> 0x1f & 0x19;
    bVar1 = 0 < *param_4;
  }
  else {
    *param_4 = 0;
    bVar1 = false;
  }
  if ((local_20 ^ (ulonglong)auStackY_68) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437f708 FUN_14437f708 body=69 status=ok
// SIG undefined FUN_14437f708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437f708(void)

{
  _DAT_14cbf4960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014437f74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4968,1);
  return;
}



// FUNCTION 14437f74e FUN_14437f74e body=225 status=ok
// SIG undefined FUN_14437f74e(void)

undefined8
FUN_14437f74e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1446f470e(local_50,L"WINDOWS",1);
  FUN_1400021e4(local_50,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (1 < local_40) {
    FUN_1446f470e(&local_48,L"WINDOWS",1);
    plVar1 = (longlong *)FUN_140272950(&local_48);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4);
      goto LAB_14437f80c;
    }
  }
  uVar2 = 0;
LAB_14437f80c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437f890 FUN_14437f890 body=129 status=ok
// SIG undefined FUN_14437f890(void)

undefined8 FUN_14437f890(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((*param_1 != 0) && (plVar6 = (longlong *)param_1[1], plVar6 != (longlong *)0x0)) &&
     (bVar3 = *param_2, 0 < (int)plVar6[1])) {
    lVar7 = 0;
    iVar5 = (int)plVar6[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14437f8ce;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar8);
    lVar7 = *param_1;
LAB_14437f8ce:
    if (*(int *)(lVar7 + 100) == 4) {
      *(uint *)(lVar7 + 100) = (uint)(bVar3 ^ 1) * 2 + 5;
    }
    if (iVar4 != 0) {
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
  }
  return 0;
}



// FUNCTION 14437f958 FUN_14437f958 body=274 status=ok
// SIG undefined FUN_14437f958(void)

undefined1 * FUN_14437f958(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
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
  code *pcStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*param_2 == 0) || (plVar3 = (longlong *)param_2[1], plVar3 == (longlong *)0x0)) ||
     ((int)plVar3[1] < 1)) {
    local_28 = 0;
    pcStack_20 = (code *)0x0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if ((*(code **)(param_1 + 0x50) != (code *)0x0) &&
       ((**(code **)(param_1 + 0x50))(param_1 + 8,&local_78), pcStack_20 != (code *)0x0)) {
      (*pcStack_20)(&local_78);
    }
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_148f9af9c(0,param_1);
        goto LAB_14437fa5b;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_148f9af9c(*param_2,param_1);
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
LAB_14437fa5b:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14437fab4 FUN_14437fab4 body=129 status=ok
// SIG undefined FUN_14437fab4(void)

undefined8 FUN_14437fab4(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((*param_1 != 0) && (plVar6 = (longlong *)param_1[1], plVar6 != (longlong *)0x0)) &&
     (bVar3 = *param_2, 0 < (int)plVar6[1])) {
    lVar7 = 0;
    iVar5 = (int)plVar6[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14437faf2;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar8);
    lVar7 = *param_1;
LAB_14437faf2:
    if (*(int *)(lVar7 + 100) == 4) {
      *(uint *)(lVar7 + 100) = (uint)(bVar3 ^ 1) * 2 + 5;
    }
    if (iVar4 != 0) {
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
  }
  return 0;
}



// FUNCTION 14437fb64 FUN_14437fb64 body=23 status=ok
// SIG undefined FUN_14437fb64(void)

void FUN_14437fb64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014437fb76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14437fb88 FUN_14437fb88 body=455 status=ok
// SIG undefined FUN_14437fb88(void)

void FUN_14437fb88(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  FUN_14610b7ee(puVar5);
  ppuVar6 = &PTR_FUN_14ba3c110;
  *puVar5 = &PTR_FUN_14ba3c110;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  *(undefined4 *)(puVar5 + 0x16) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar5;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar5 = *(undefined8 **)(param_1 + 8);
    ppuVar6 = (undefined **)*puVar5;
  }
  local_58 = 0;
  uStack_50 = 0;
  cVar3 = (*(code *)ppuVar6[1])(puVar5);
  if (cVar3 == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  else {
    local_40 = "Sockets";
    local_38 = 7;
    local_34 = 0;
    uVar4 = FUN_14001a6c0(&local_40,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_40,1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_1446f470e(&local_60,L"SHIFT",1);
    (**(code **)(*plVar7 + 0x50))(plVar7,local_60,uVar2,1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437fd52 FUN_14437fd52 body=304 status=ok
// SIG undefined FUN_14437fd52(void)

void FUN_14437fd52(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_30 = "Sockets";
    local_28 = 7;
    local_24 = 0;
    uVar2 = FUN_14001a6c0(&local_30,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar3 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar2,&local_30,1);
    FUN_1446f470e(&local_38,L"SHIFT",1);
    (**(code **)(*plVar3 + 0x58))(plVar3,local_38);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437fe83 FUN_14437fe83 body=398 status=ok
// SIG undefined FUN_14437fe83(void)

void FUN_14437fe83(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SocketSubsystemShift",&PTR_FUN_14ba3ace0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SocketSubsystemShift",&PTR_FUN_14ba3b2e0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SocketSubsystemShift",&PTR_FUN_14ba3b7c0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SocketSubsystemShift",&PTR_FUN_14ba3be20,1,0);
  DAT_14cbf4940 = 0x8000000149eff412;
  local_48 = CONCAT44(local_48._4_4_,5);
  DAT_14cbf4948 = FUN_14577453c(L"Shift",&local_48);
  DAT_14cbf494c = 1;
  FUN_140056680(&DAT_14cbf4950,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_14437f6f7);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141707242(&DAT_14cbf4960,L"socket.turnsetting",&DAT_14cbf4950,
                L"Valid inputs are \'Allow\', \'Disallow\', and \'Force\', anything else will deactivate dev settings for TURN servers."
               );
  atexit(FUN_14437f708);
  local_48 = 0x800000014ba3c252;
  local_34 = 0x14;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14666c6aa(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144380144 FUN_144380144 body=114 status=ok
// SIG undefined FUN_144380144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144380144(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  _DAT_14cbf4b10 = 0;
  if (DAT_14cbf4b08 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&DAT_14cbf4ac8);
  if (DAT_14cbf4ab0 != 0) {
    FUN_1400020a8();
  }
  plVar3 = DAT_14cbf4a98;
  if (DAT_14cbf4a98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4a98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443801b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443801b6 FUN_1443801b6 body=1487 status=ok
// SIG undefined FUN_1443801b6(void)

/* WARNING: Removing unreachable block (ram,0x00014438073b) */

ulonglong FUN_1443801b6(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong **pplVar2;
  longlong *plVar3;
  void *_Src;
  longlong **pplVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong **unaff_RBX;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  longlong **local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  int local_78;
  undefined1 local_6c [4];
  longlong *local_68 [2];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  if (plVar3 == (longlong *)0x0) {
    FUN_140cdd37d(local_68,uVar7,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140cdd37d(local_68,uVar7,param_2);
    LOCK();
    plVar15 = plVar3 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (local_68[0] == (longlong *)0xffffffffffffffff) {
    plVar3 = (longlong *)*param_4;
    plVar15 = local_68[0];
    if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
      local_e8 = &local_58;
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,0,param_3);
    }
  }
  else {
    local_e0 = local_68[0];
    FUN_14150a9d5(&local_80,local_68[0][3],4);
    (**(code **)(*local_68[0] + 8))(local_68[0],&local_d0);
    uVar5 = (**(code **)(*local_d0 + 0x40))();
    uVar7 = FUN_146063e00(param_1 + 0x428,uVar5,&local_d0);
    iVar6 = *(int *)(param_3 + 1);
    uVar9 = 0;
    iVar11 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      if (iVar6 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      lVar12 = 0;
      uVar9 = 0;
      do {
        uVar10 = ((uint)(ushort)puVar8[lVar12] + (uint)(0x19 < (ushort)puVar8[lVar12] - 0x61) * 0x20
                 ) - 0x20;
        uVar13 = (uint)(uVar9 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
        unaff_RBX = (longlong **)0x0;
        uVar9 = (ulonglong)
                (uVar13 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
        lVar12 = lVar12 + 1;
      } while (iVar11 != (int)lVar12);
    }
    local_d8 = FUN_146004cd8(uVar7,uVar9,param_3);
    pplVar4 = local_c8;
    if (local_c8 != (longlong **)0x0) {
      LOCK();
      pplVar2 = local_c8 + 1;
      *(int *)pplVar2 = *(int *)pplVar2 + -1;
      UNLOCK();
      if (*(int *)pplVar2 == 0) {
        (*(code *)**local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)pplVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pplVar4)[2])(pplVar4);
        }
      }
    }
    FUN_14624a436(local_d8,local_78);
    if ((longlong)local_78 != 0) {
      lVar14 = (longlong)local_78 << 6;
      lVar12 = local_80;
      do {
        if (*(char *)(lVar12 + 0x38) != '\x03') {
          FUN_141904c69(&local_90,lVar12,*(undefined8 *)(param_1 + 0x380));
          local_a0 = local_90[1];
          local_98 = (longlong *)local_90[2];
          if (local_98 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
          }
          local_d0 = &local_a0;
          local_c8 = &local_90;
          FUN_1412f0c66(local_d8,local_6c,&local_d0);
          plVar3 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_98 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = local_88;
          unaff_RBX = &local_90;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_88 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        lVar12 = lVar12 + 0x40;
        lVar14 = lVar14 + -0x40;
      } while (lVar14 != 0);
    }
    FUN_1415013c0(param_1,param_2,&local_80);
    (**(code **)(*local_68[0] + 8))(local_68[0],&local_90);
    local_b0 = local_90;
    local_a8 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*local_90 + 0x40))();
    iVar6 = FUN_140b6c20e(param_1 + 0x4c8,uVar5,&local_b0);
    plVar3 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_a8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if ((iVar6 == -1) || (local_78 != 0)) {
      FUN_140056680(&local_d0,&DAT_149dfb77a);
      plVar15 = local_e0;
      plVar3 = (longlong *)*param_4;
      if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
        local_e8 = &local_d0;
        (**(code **)(*plVar3 + 0x60))(plVar3,param_2,1,param_3);
      }
    }
    else {
      uVar5 = (**(code **)(*local_90 + 0x40))();
      unaff_RBX = (longlong **)FUN_14623b84c(param_1 + 0x518,uVar5,&local_90);
      local_d0 = (longlong *)0x0;
      uVar10 = *(uint *)(param_3 + 1);
      _Src = (void *)*param_3;
      local_c8 = (longlong **)CONCAT44(local_c8._4_4_,uVar10);
      if ((longlong)(int)uVar10 == 0) {
        local_c8 = (longlong **)(ulonglong)uVar10;
      }
      else {
        FUN_1446dd670(&local_d0,uVar10,0);
        memcpy(local_d0,_Src,(longlong)(int)uVar10 * 2);
      }
      plVar15 = local_e0;
      local_c0 = 0;
      local_b8 = 0;
      FUN_146071534(&local_c0,param_4);
      iVar6 = *(int *)(unaff_RBX + 1);
      lVar12 = (longlong)iVar6;
      *(uint *)(unaff_RBX + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)unaff_RBX + 0xc) < iVar6 + 1U) {
        FUN_14666d386(unaff_RBX,iVar6);
      }
      plVar3 = *unaff_RBX;
      plVar3[lVar12 * 4] = 0;
      plVar3[lVar12 * 4] = (longlong)local_d0;
      local_d0 = (longlong *)0x0;
      *(undefined4 *)(plVar3 + lVar12 * 4 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar3 + lVar12 * 0x20 + 0xc) = local_c8._4_4_;
      local_c8 = (longlong **)0x0;
      plVar3[lVar12 * 4 + 2] = 0;
      *(undefined4 *)(plVar3 + lVar12 * 4 + 3) = 0;
      plVar3[lVar12 * 4 + 2] = local_c0;
      local_c0 = 0;
      *(undefined4 *)(plVar3 + lVar12 * 4 + 3) = local_b8;
      local_b8 = 0;
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    FUN_141323308(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50._4_4_ != -1) {
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (longlong *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(local_68);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),plVar15 != (longlong *)0xffffffffffffffff) &
           0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443807a2 FUN_1443807a2 body=584 status=ok
// SIG undefined FUN_1443807a2(void)

ulonglong FUN_1443807a2(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong **local_88;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58 [2];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  if (plVar4 == (longlong *)0x0) {
    FUN_140cdd37d(local_58,uVar3,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_140cdd37d(local_58,uVar3,param_2,param_3);
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
  if (local_58[0] == (longlong *)0xffffffffffffffff) {
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      local_88 = &local_48;
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,param_3);
    }
  }
  else {
    (**(code **)(*local_58[0] + 8))(local_58[0],&local_78);
    local_68 = local_78;
    local_60 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*local_78 + 0x40))();
    iVar6 = FUN_1415c991c((longlong *)(param_1 + 0x428),uVar5,&local_68);
    plVar4 = local_60;
    if (iVar6 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar6 * 0x68 + *(longlong *)(param_1 + 0x428);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (lVar7 != 0) {
      FUN_148fa12aa(lVar7 + 0x10,param_3);
    }
    FUN_140056680(&local_68,&DAT_149dfb77a);
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      local_88 = &local_68;
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2,1,param_3);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40._4_4_ != -1) {
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_48 = (longlong *)0x0;
    local_40 = 0xffffffff00000000;
  }
  FUN_14438be00(local_58);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_58[0] >> 8),
                    local_58[0] != (longlong *)0xffffffffffffffff) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443809ec FUN_1443809ec body=1535 status=ok
// SIG undefined FUN_1443809ec(void)

ulonglong FUN_1443809ec(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4,
                       longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  void **local_100;
  longlong local_f8 [2];
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  int local_a0;
  longlong local_98;
  longlong lStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  local_108 = param_4;
  if (plVar12 == (longlong *)0x0) {
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
    LOCK();
    plVar5 = plVar12 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  lVar8 = local_68;
  if (local_68 == -1) {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != (longlong *)0x0 && (int)param_5[1] != 0) {
      local_100 = &local_58;
      local_108 = param_4;
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,0,param_3);
    }
    goto LAB_144380ad9;
  }
  FUN_1408f45ee(&local_d8,param_3);
  plVar12 = *(longlong **)(param_1 + 0x380);
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(param_4 + 1);
  lVar13 = (longlong)local_b0;
  pvVar11 = (void *)*param_4;
  local_c8 = param_1;
  local_c0 = param_2;
  if (lVar13 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_b0,0);
    memcpy(local_b8,pvVar11,lVar13 * 2);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_148fa141a(&local_a8,param_5);
  pvVar11 = local_58;
  if (local_68 == -1) {
    local_98 = -1;
    lStack_90 = 0;
  }
  else {
    local_98 = local_68;
    lStack_90 = local_60;
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
  }
  if (local_50._4_4_ == -1) {
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  else {
    local_88 = (void *)0x0;
    lVar13 = (longlong)(int)local_50;
    uStack_80 = CONCAT44(uStack_80._4_4_,(int)local_50);
    if (lVar13 == 0) {
      uStack_80 = local_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_88,local_50 & 0xffffffff,0);
      memcpy(local_88,pvVar11,lVar13 * 2);
    }
  }
  local_78 = local_d8;
  local_70 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,8,0x10);
  pvVar11 = local_b8;
  puVar6 = local_e8;
  local_e0 = 8;
  *local_e8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14ba3da20;
  local_e8[3] = local_c8;
  *(undefined4 *)(local_e8 + 4) = local_c0;
  local_e8[5] = 0;
  lVar13 = (longlong)local_b0;
  *(int *)(local_e8 + 6) = local_b0;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)local_e8 + 0x34) = 0;
  }
  else {
    puVar2 = local_e8 + 5;
    FUN_1446dd670(puVar2,local_b0,0);
    memcpy((void *)*puVar2,pvVar11,lVar13 * 2);
  }
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  FUN_148fa141a(puVar6 + 7);
  pvVar11 = local_88;
  lVar10 = lStack_90;
  lVar13 = local_98;
  uVar9 = 0;
  if (local_98 == -1) {
    lVar10 = 0;
  }
  else {
    local_98 = 0;
    lStack_90 = 0;
  }
  puVar6[9] = lVar13;
  puVar6[10] = lVar10;
  iVar7 = uStack_80._4_4_;
  if (uStack_80._4_4_ == -1) {
    pvVar11 = (void *)0x0;
  }
  else {
    uVar9 = (undefined4)uStack_80;
    local_88 = (void *)0x0;
    uStack_80 = 0;
  }
  puVar6[0xb] = pvVar11;
  *(undefined4 *)(puVar6 + 0xc) = uVar9;
  *(int *)((longlong)puVar6 + 100) = iVar7;
  puVar6[0xd] = local_78;
  puVar6[0xe] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_f8);
  FUN_148f9c1d0(plVar12,*(undefined8 *)(local_68 + 0x18),local_f8,&local_e8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e0 == 0) {
LAB_144380e78:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_144380e78;
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (uStack_80._4_4_ != -1) {
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_98);
  if (local_a0 == 0) {
LAB_144380f02:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_144380f02;
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
LAB_144380ad9:
  if (local_50._4_4_ != -1) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (void *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_68);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar12 >> 8),lVar8 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144380fec FUN_144380fec body=1535 status=ok
// SIG undefined FUN_144380fec(void)

ulonglong FUN_144380fec(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4,
                       longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  void **local_100;
  longlong local_f8 [2];
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  int local_a0;
  longlong local_98;
  longlong lStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  local_108 = param_4;
  if (plVar12 == (longlong *)0x0) {
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
    LOCK();
    plVar5 = plVar12 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  lVar8 = local_68;
  if (local_68 == -1) {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != (longlong *)0x0 && (int)param_5[1] != 0) {
      local_100 = &local_58;
      local_108 = param_4;
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,0,param_3);
    }
    goto LAB_1443810d9;
  }
  FUN_1408f45ee(&local_d8,param_3);
  plVar12 = *(longlong **)(param_1 + 0x380);
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(param_4 + 1);
  lVar13 = (longlong)local_b0;
  pvVar11 = (void *)*param_4;
  local_c8 = param_1;
  local_c0 = param_2;
  if (lVar13 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_b0,0);
    memcpy(local_b8,pvVar11,lVar13 * 2);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_148fa141a(&local_a8,param_5);
  pvVar11 = local_58;
  if (local_68 == -1) {
    local_98 = -1;
    lStack_90 = 0;
  }
  else {
    local_98 = local_68;
    lStack_90 = local_60;
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
  }
  if (local_50._4_4_ == -1) {
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  else {
    local_88 = (void *)0x0;
    lVar13 = (longlong)(int)local_50;
    uStack_80 = CONCAT44(uStack_80._4_4_,(int)local_50);
    if (lVar13 == 0) {
      uStack_80 = local_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_88,local_50 & 0xffffffff,0);
      memcpy(local_88,pvVar11,lVar13 * 2);
    }
  }
  local_78 = local_d8;
  local_70 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,8,0x10);
  pvVar11 = local_b8;
  puVar6 = local_e8;
  local_e0 = 8;
  *local_e8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14ba3dbb0;
  local_e8[3] = local_c8;
  *(undefined4 *)(local_e8 + 4) = local_c0;
  local_e8[5] = 0;
  lVar13 = (longlong)local_b0;
  *(int *)(local_e8 + 6) = local_b0;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)local_e8 + 0x34) = 0;
  }
  else {
    puVar2 = local_e8 + 5;
    FUN_1446dd670(puVar2,local_b0,0);
    memcpy((void *)*puVar2,pvVar11,lVar13 * 2);
  }
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  FUN_148fa141a(puVar6 + 7);
  pvVar11 = local_88;
  lVar10 = lStack_90;
  lVar13 = local_98;
  uVar9 = 0;
  if (local_98 == -1) {
    lVar10 = 0;
  }
  else {
    local_98 = 0;
    lStack_90 = 0;
  }
  puVar6[9] = lVar13;
  puVar6[10] = lVar10;
  iVar7 = uStack_80._4_4_;
  if (uStack_80._4_4_ == -1) {
    pvVar11 = (void *)0x0;
  }
  else {
    uVar9 = (undefined4)uStack_80;
    local_88 = (void *)0x0;
    uStack_80 = 0;
  }
  puVar6[0xb] = pvVar11;
  *(undefined4 *)(puVar6 + 0xc) = uVar9;
  *(int *)((longlong)puVar6 + 100) = iVar7;
  puVar6[0xd] = local_78;
  puVar6[0xe] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_f8);
  FUN_148f9c2ce(plVar12,*(undefined8 *)(local_68 + 0x18),local_f8,&local_e8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e0 == 0) {
LAB_144381478:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_144381478;
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (uStack_80._4_4_ != -1) {
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_98);
  if (local_a0 == 0) {
LAB_144381502:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_144381502;
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
LAB_1443810d9:
  if (local_50._4_4_ != -1) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (void *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_68);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar12 >> 8),lVar8 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443815ec FUN_1443815ec body=1356 status=ok
// SIG undefined FUN_1443815ec(void)

ulonglong FUN_1443815ec(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  void **local_f0;
  longlong local_e8 [2];
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong lStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = *(undefined8 *)(param_1[0x70] + 0xe8);
  plVar5 = *(longlong **)(param_1[0x70] + 0xf0);
  local_f8 = param_4;
  if (plVar5 == (longlong *)0x0) {
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
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
  lVar9 = local_68;
  if (local_68 == -1) {
    local_f0 = &local_58;
    local_f8 = param_4;
    (**(code **)(*param_1 + 0x138))(param_1,param_2,0,param_3);
    goto LAB_1443816be;
  }
  FUN_1408f45ee(&local_c8);
  lVar6 = param_1[0x70];
  local_a8 = (void *)0x0;
  local_a0 = (int)param_4[1];
  lVar13 = (longlong)local_a0;
  pvVar12 = (void *)*param_4;
  local_b8 = param_1;
  local_b0 = param_2;
  if (lVar13 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar12,lVar13 * 2);
  }
  pvVar12 = local_58;
  if (local_68 == -1) {
    local_98 = -1;
    lStack_90 = 0;
  }
  else {
    local_98 = local_68;
    lStack_90 = local_60;
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
  }
  if (local_50._4_4_ == -1) {
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  else {
    local_88 = (void *)0x0;
    lVar13 = (longlong)(int)local_50;
    uStack_80 = CONCAT44(uStack_80._4_4_,(int)local_50);
    if (lVar13 == 0) {
      uStack_80 = local_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_88,local_50 & 0xffffffff,0);
      memcpy(local_88,pvVar12,lVar13 * 2);
    }
  }
  local_78 = local_c8;
  local_70 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,7,0x10);
  pvVar12 = local_a8;
  puVar7 = local_d8;
  local_d0 = 7;
  *local_d8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_d8[2] = lVar11;
  *local_d8 = &PTR_FUN_14ba3dd00;
  local_d8[3] = local_b8;
  *(undefined4 *)(local_d8 + 4) = local_b0;
  local_d8[5] = 0;
  lVar13 = (longlong)local_a0;
  *(int *)(local_d8 + 6) = local_a0;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)local_d8 + 0x34) = 0;
  }
  else {
    puVar3 = local_d8 + 5;
    FUN_1446dd670(puVar3,local_a0,0);
    memcpy((void *)*puVar3,pvVar12,lVar13 * 2);
  }
  pvVar12 = local_88;
  lVar11 = lStack_90;
  lVar13 = local_98;
  param_4 = &local_98;
  uVar10 = 0;
  if (local_98 == -1) {
    lVar11 = 0;
  }
  else {
    local_98 = 0;
    lStack_90 = 0;
  }
  puVar7[7] = lVar13;
  puVar7[8] = lVar11;
  iVar8 = uStack_80._4_4_;
  if (uStack_80._4_4_ == -1) {
    pvVar12 = (void *)0x0;
  }
  else {
    uVar10 = (undefined4)uStack_80;
    local_88 = (void *)0x0;
    uStack_80 = 0;
  }
  puVar7[9] = pvVar12;
  *(undefined4 *)(puVar7 + 10) = uVar10;
  *(int *)((longlong)puVar7 + 0x54) = iVar8;
  puVar7[0xb] = local_78;
  puVar7[0xc] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_e8);
  FUN_148f9c3cc(lVar6,*(undefined8 *)(local_68 + 0x18),local_e8,&local_d8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d0 == 0) {
LAB_144381a1c:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_144381a1c;
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (uStack_80._4_4_ != -1) {
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_88 = (void *)0x0;
    uStack_80 = 0xffffffff00000000;
  }
  FUN_14438be00(param_4);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_c0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
LAB_1443816be:
  if (local_50._4_4_ != -1) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (void *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_68);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_4 >> 8),lVar9 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144381b3a FUN_144381b3a body=1358 status=ok
// SIG undefined FUN_144381b3a(void)

ulonglong FUN_144381b3a(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  void *_Src;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  void **local_f0;
  longlong local_e8 [2];
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = *(undefined8 *)(param_1[0x70] + 0xe8);
  plVar5 = *(longlong **)(param_1[0x70] + 0xf0);
  local_f8 = param_4;
  if (plVar5 == (longlong *)0x0) {
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_140cdd2fe(&local_68,uVar4,param_2,param_3);
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
  lVar9 = local_68;
  if (local_68 == -1) {
    local_f0 = &local_58;
    local_f8 = param_4;
    (**(code **)(*param_1 + 0x160))(param_1,param_2,0,param_3);
    goto LAB_144381c0c;
  }
  FUN_1408f45ee(&local_c8);
  pvVar14 = local_58;
  lVar6 = param_1[0x70];
  if (local_68 == -1) {
    local_a8 = -1;
    lStack_a0 = 0;
  }
  else {
    local_a8 = local_68;
    lStack_a0 = local_60;
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
  }
  local_b8 = param_1;
  local_b0 = param_2;
  if (local_50._4_4_ == -1) {
    local_98 = (void *)0x0;
    uStack_90 = 0xffffffff00000000;
  }
  else {
    local_98 = (void *)0x0;
    lVar15 = (longlong)(int)local_50;
    uStack_90 = CONCAT44(uStack_90._4_4_,(int)local_50);
    if (lVar15 == 0) {
      uStack_90 = local_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_98,local_50 & 0xffffffff,0);
      memcpy(local_98,pvVar14,lVar15 * 2);
    }
  }
  local_88 = (void *)0x0;
  local_80 = (int)param_4[1];
  lVar15 = (longlong)local_80;
  pvVar14 = (void *)*param_4;
  if (lVar15 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar14,lVar15 * 2);
  }
  local_78 = local_c8;
  local_70 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,7,0x10);
  _Src = local_88;
  pvVar14 = local_98;
  lVar13 = lStack_a0;
  lVar15 = local_a8;
  puVar7 = local_d8;
  local_d0 = 7;
  *local_d8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  param_4 = &local_a8;
  local_d8[2] = lVar12;
  *local_d8 = &PTR_FUN_14ba3de50;
  *(undefined4 *)(local_d8 + 4) = local_b0;
  local_d8[3] = local_b8;
  uVar11 = 0;
  if (local_a8 == -1) {
    lVar13 = 0;
  }
  else {
    local_a8 = 0;
    lStack_a0 = 0;
  }
  local_d8[5] = lVar15;
  local_d8[6] = lVar13;
  iVar8 = uStack_90._4_4_;
  if (uStack_90._4_4_ == -1) {
    pvVar14 = (void *)0x0;
  }
  else {
    uVar11 = (undefined4)uStack_90;
    local_98 = (void *)0x0;
    uStack_90 = 0;
  }
  local_d8[7] = pvVar14;
  *(undefined4 *)(local_d8 + 8) = uVar11;
  *(int *)((longlong)local_d8 + 0x44) = iVar8;
  local_d8[9] = 0;
  lVar15 = (longlong)local_80;
  *(int *)(local_d8 + 10) = local_80;
  if (lVar15 == 0) {
    *(undefined4 *)((longlong)local_d8 + 0x54) = 0;
  }
  else {
    puVar3 = local_d8 + 9;
    FUN_1446dd670(puVar3,local_80,0);
    memcpy((void *)*puVar3,_Src,lVar15 * 2);
  }
  puVar7[0xb] = local_78;
  puVar7[0xc] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_e8);
  FUN_148f9c3cc(lVar6,*(undefined8 *)(local_68 + 0x18),local_e8,&local_d8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d0 == 0) {
LAB_144381f69:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_144381f69;
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (uStack_90._4_4_ != -1) {
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_98 = (void *)0x0;
    uStack_90 = 0xffffffff00000000;
  }
  FUN_14438be00(param_4);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_c0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
LAB_144381c0c:
  if (local_50._4_4_ != -1) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (void *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_68);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_4 >> 8),lVar9 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438208a FUN_14438208a body=1193 status=ok
// SIG undefined FUN_14438208a(void)

ulonglong FUN_14438208a(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *unaff_RBX;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  uint *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140b6c1c2(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_14127d7f4(param_4,0);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
  if (plVar5 == (longlong *)0x0) {
    FUN_140cdd37d(local_68,uVar4,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_140cdd37d(local_68,uVar4,param_2,param_3);
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
  local_a0 = local_68[0];
  if (local_68[0] != (longlong *)0xffffffffffffffff) {
    (**(code **)(*local_68[0] + 8))(local_68[0],&local_88);
    local_78 = local_88;
    local_70 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_88 + 0x40))();
    iVar6 = FUN_1415c991c((longlong *)(param_1 + 0x428));
    plVar5 = local_70;
    if (iVar6 == -1) {
      lVar19 = 0;
    }
    else {
      lVar19 = (longlong)iVar6 * 0x68 + *(longlong *)(param_1 + 0x428);
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (lVar19 != 0) {
      iVar6 = *(int *)(param_3 + 1);
      uVar13 = 0;
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        if (iVar6 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        else {
          puVar7 = (undefined2 *)*param_3;
        }
        lVar15 = 0;
        uVar13 = 0;
        do {
          uVar12 = ((uint)(0x19 < (ushort)puVar7[lVar15] - 0x61) * 0x20 +
                   (uint)(ushort)puVar7[lVar15]) - 0x20;
          unaff_RBX = (uint *)(ulonglong)uVar12;
          uVar17 = (uint)(uVar13 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar13 ^ uVar12) & 0xff) * 4);
          uVar13 = (ulonglong)
                   (uVar17 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar12 >> 8 & 0xff) * 4));
          lVar15 = lVar15 + 1;
        } while (iVar9 != (int)lVar15);
      }
      iVar6 = FUN_1415b7a94((longlong *)(lVar19 + 0x10),uVar13,param_3);
      if (iVar6 != -1) {
        lVar19 = (longlong)iVar6 * 0x68 + *(longlong *)(lVar19 + 0x10);
        local_90 = (longlong *)(lVar19 + 0x10);
        if (local_90 != (longlong *)0x0 && lVar19 != 0) {
          unaff_RBX = (uint *)(lVar19 + 0x20);
          uVar12 = *(uint *)(lVar19 + 0x38);
          if (uVar12 == 0) {
            uVar14 = 1;
            uVar13 = 0;
            iVar6 = 0;
            uVar17 = 0;
          }
          else {
            puVar8 = *(uint **)(lVar19 + 0x30);
            if (*(uint **)(lVar19 + 0x30) == (uint *)0x0) {
              puVar8 = unaff_RBX;
            }
            uVar17 = *puVar8;
            if (uVar17 == 0) {
              iVar6 = uVar12 + 0x1e;
              if (-1 < (int)(uVar12 - 1)) {
                iVar6 = uVar12 - 1;
              }
              uVar13 = 0;
              uVar14 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar14 = uVar13;
              }
              iVar6 = 0;
              do {
                if (uVar14 == uVar13) goto LAB_14438234c;
                iVar6 = iVar6 + 0x20;
                uVar17 = puVar8[uVar13 + 1];
                uVar13 = uVar13 + 1;
              } while (uVar17 == 0);
            }
            else {
              uVar13 = 0;
              iVar6 = 0;
            }
            uVar14 = (ulonglong)(-uVar17 & uVar17);
            uVar3 = uVar14 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar17 = (iVar6 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if ((int)uVar12 <= (int)uVar17) {
              uVar17 = uVar12;
            }
          }
          if (uVar17 != uVar12) {
            uVar18 = 0xffffffff;
            local_b0 = lVar19;
            local_a8 = (ulonglong)uVar12;
            local_98 = unaff_RBX;
            do {
              uVar4 = *(undefined8 *)(*local_90 + 0x10 + (longlong)(int)uVar17 * 0x28);
              plVar5 = *(longlong **)(*local_90 + 0x18 + (longlong)(int)uVar17 * 0x28);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              iVar9 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar9 + 1U) {
                FUN_140b722da(param_4,iVar9);
                lVar19 = local_b0;
              }
              lVar15 = *param_4;
              *(undefined8 *)(lVar15 + (longlong)iVar9 * 0x10) = uVar4;
              *(longlong **)(lVar15 + 8 + (longlong)iVar9 * 0x10) = plVar5;
              if (plVar5 != (longlong *)0x0) {
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
                  lVar19 = local_b0;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                    lVar19 = local_b0;
                  }
                }
              }
              uVar18 = uVar18 & ~(uint)uVar14;
              puVar8 = *(uint **)(lVar19 + 0x30);
              if (*(uint **)(lVar19 + 0x30) == (uint *)0x0) {
                puVar8 = local_98;
              }
              uVar12 = *(uint *)(lVar19 + 0x38);
              iVar9 = (int)uVar13;
              lVar15 = (longlong)iVar9;
              uVar17 = puVar8[lVar15] & uVar18;
              if (uVar17 == 0) {
                iVar10 = uVar12 + 0x1e;
                if (-1 < (int)(uVar12 - 1)) {
                  iVar10 = uVar12 - 1;
                }
                iVar10 = iVar10 >> 5;
                iVar6 = iVar6 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar9) {
                  iVar11 = iVar9;
                }
                if (iVar9 < iVar10) {
                  lVar16 = 0;
                  do {
                    uVar17 = puVar8[lVar15 + lVar16 + 1];
                    if (uVar17 != 0) {
                      uVar13 = (ulonglong)(iVar9 + (int)lVar16 + 1);
                      uVar18 = 0xffffffff;
                      goto LAB_1443824af;
                    }
                    iVar6 = iVar6 + 0x20;
                    lVar16 = lVar16 + 1;
                  } while (iVar11 - lVar15 != lVar16);
                  uVar18 = 0xffffffff;
                  iVar9 = iVar11;
                }
                uVar13 = (ulonglong)(iVar9 + 1);
                lVar19 = local_b0;
                uVar17 = uVar12;
              }
              else {
LAB_1443824af:
                uVar14 = (ulonglong)(-uVar17 & uVar17);
                uVar3 = uVar14 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                uVar17 = (iVar6 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                if ((int)uVar12 <= (int)uVar17) {
                  uVar17 = uVar12;
                }
              }
              unaff_RBX = local_98;
            } while (uVar17 != (uint)local_a8);
          }
        }
      }
    }
  }
LAB_14438234c:
  if (local_50._4_4_ != -1) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    local_50 = 0xffffffff00000000;
  }
  bVar20 = local_a0 != (longlong *)0xffffffffffffffff;
  FUN_14438be00(local_68);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar20) & 0xffffffff;
}



// FUNCTION 144382534 FUN_144382534 body=142 status=ok
// SIG undefined FUN_144382534(void)

void FUN_144382534(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144382578;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144382578:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443825af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443825c2 FUN_1443825c2 body=142 status=ok
// SIG undefined FUN_1443825c2(void)

void FUN_1443825c2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144382606;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144382606:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014438263d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144382650 FUN_144382650 body=73 status=ok
// SIG undefined FUN_144382650(void)

void FUN_144382650(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014438268e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14438269a FUN_14438269a body=51 status=ok
// SIG undefined FUN_14438269a(void)

undefined8 FUN_14438269a(void)

{
  undefined8 *in_R9;
  
  FUN_148fa218b(*in_R9,*(undefined4 *)(in_R9 + 1));
  *(undefined4 *)(in_R9 + 1) = 0;
  if (*(int *)((longlong)in_R9 + 0xc) != 0) {
    FUN_148fa21d4(in_R9);
  }
  return 0;
}



// FUNCTION 1443826d0 FUN_1443826d0 body=1173 status=ok
// SIG undefined FUN_1443826d0(void)

ulonglong FUN_1443826d0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  void **local_d0;
  longlong local_c8 [2];
  undefined8 *local_b8;
  int local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  uint local_90;
  longlong local_88;
  longlong lStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  plVar11 = (longlong *)(ulonglong)param_2;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *(undefined8 *)(param_1[0x70] + 0xe8);
  plVar4 = *(longlong **)(param_1[0x70] + 0xf0);
  if (plVar4 == (longlong *)0x0) {
    local_d8 = &DAT_14cbf4a40;
    FUN_140cdd2fe(&local_58,uVar3,plVar11,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_d8 = &DAT_14cbf4a40;
    FUN_140cdd2fe(&local_58,uVar3,plVar11,param_3);
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
  lVar7 = local_58;
  if (local_58 == -1) {
    local_d0 = &local_48;
    local_d8 = &DAT_14cbf4a40;
    (**(code **)(*param_1 + 0x180))(param_1,plVar11,0,param_3);
    goto LAB_1443827a3;
  }
  FUN_1408f45ee(&local_a8,param_3);
  pvVar14 = local_48;
  lVar5 = param_1[0x70];
  if (local_58 == -1) {
    local_88 = -1;
    lStack_80 = 0;
  }
  else {
    local_88 = local_58;
    lStack_80 = local_50;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
  }
  local_98 = param_1;
  local_90 = param_2;
  if (local_40._4_4_ == -1) {
    local_78 = (void *)0x0;
    uStack_70 = 0xffffffff00000000;
  }
  else {
    local_78 = (void *)0x0;
    lVar12 = (longlong)(int)local_40;
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)local_40);
    if (lVar12 == 0) {
      uStack_70 = local_40 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_78,local_40 & 0xffffffff,0);
      memcpy(local_78,pvVar14,lVar12 * 2);
    }
  }
  local_68 = local_a8;
  local_60 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,6,0x10);
  pvVar14 = local_78;
  lVar13 = lStack_80;
  lVar12 = local_88;
  local_b0 = 6;
  *local_b8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  plVar11 = &local_88;
  local_b8[2] = lVar10;
  *local_b8 = &PTR_FUN_14ba3e0c0;
  *(uint *)(local_b8 + 4) = local_90;
  local_b8[3] = local_98;
  uVar9 = 0;
  if (local_88 == -1) {
    lVar13 = 0;
  }
  else {
    local_88 = 0;
    lStack_80 = 0;
  }
  local_b8[5] = lVar12;
  local_b8[6] = lVar13;
  iVar6 = uStack_70._4_4_;
  if (uStack_70._4_4_ == -1) {
    pvVar14 = (void *)0x0;
  }
  else {
    uVar9 = (undefined4)uStack_70;
    local_78 = (void *)0x0;
    uStack_70 = 0;
  }
  local_b8[7] = pvVar14;
  *(undefined4 *)(local_b8 + 8) = uVar9;
  *(int *)((longlong)local_b8 + 0x44) = iVar6;
  local_b8[9] = local_68;
  local_b8[10] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_c8);
  FUN_148f9cbb0(lVar5,*(undefined8 *)(local_58 + 0x18),local_c8,&local_b8);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 == 0) {
LAB_144382a58:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    local_b0 = 0;
    goto LAB_144382a58;
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (uStack_70._4_4_ != -1) {
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (void *)0x0;
    uStack_70 = 0xffffffff00000000;
  }
  FUN_14438be00(plVar11);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
LAB_1443827a3:
  if (local_40._4_4_ != -1) {
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_48 = (void *)0x0;
    local_40 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_58);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar11 >> 8),lVar7 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144382b66 FUN_144382b66 body=1173 status=ok
// SIG undefined FUN_144382b66(void)

ulonglong FUN_144382b66(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  void **local_d0;
  longlong local_c8 [2];
  undefined8 *local_b8;
  int local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  uint local_90;
  longlong local_88;
  longlong lStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  plVar11 = (longlong *)(ulonglong)param_2;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *(undefined8 *)(param_1[0x70] + 0xe8);
  plVar4 = *(longlong **)(param_1[0x70] + 0xf0);
  if (plVar4 == (longlong *)0x0) {
    local_d8 = &DAT_14cbf4a40;
    FUN_140cdd2fe(&local_58,uVar3,plVar11,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_d8 = &DAT_14cbf4a40;
    FUN_140cdd2fe(&local_58,uVar3,plVar11,param_3);
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
  lVar7 = local_58;
  if (local_58 == -1) {
    local_d0 = &local_48;
    local_d8 = &DAT_14cbf4a40;
    (**(code **)(*param_1 + 0x1a0))(param_1,plVar11,0,param_3);
    goto LAB_144382c39;
  }
  FUN_1408f45ee(&local_a8,param_3);
  pvVar14 = local_48;
  lVar5 = param_1[0x70];
  if (local_58 == -1) {
    local_88 = -1;
    lStack_80 = 0;
  }
  else {
    local_88 = local_58;
    lStack_80 = local_50;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
  }
  local_98 = param_1;
  local_90 = param_2;
  if (local_40._4_4_ == -1) {
    local_78 = (void *)0x0;
    uStack_70 = 0xffffffff00000000;
  }
  else {
    local_78 = (void *)0x0;
    lVar12 = (longlong)(int)local_40;
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)local_40);
    if (lVar12 == 0) {
      uStack_70 = local_40 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_78,local_40 & 0xffffffff,0);
      memcpy(local_78,pvVar14,lVar12 * 2);
    }
  }
  local_68 = local_a8;
  local_60 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,6,0x10);
  pvVar14 = local_78;
  lVar13 = lStack_80;
  lVar12 = local_88;
  local_b0 = 6;
  *local_b8 = &PTR_LAB_14b4daf00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  plVar11 = &local_88;
  local_b8[2] = lVar10;
  *local_b8 = &PTR_FUN_14ba3e210;
  *(uint *)(local_b8 + 4) = local_90;
  local_b8[3] = local_98;
  uVar9 = 0;
  if (local_88 == -1) {
    lVar13 = 0;
  }
  else {
    local_88 = 0;
    lStack_80 = 0;
  }
  local_b8[5] = lVar12;
  local_b8[6] = lVar13;
  iVar6 = uStack_70._4_4_;
  if (uStack_70._4_4_ == -1) {
    pvVar14 = (void *)0x0;
  }
  else {
    uVar9 = (undefined4)uStack_70;
    local_78 = (void *)0x0;
    uStack_70 = 0;
  }
  local_b8[7] = pvVar14;
  *(undefined4 *)(local_b8 + 8) = uVar9;
  *(int *)((longlong)local_b8 + 0x44) = iVar6;
  local_b8[9] = local_68;
  local_b8[10] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_3 + 0x30))(param_3,local_c8);
  FUN_148f9ccae(lVar5,*(undefined8 *)(local_58 + 0x18),local_c8,&local_b8);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 == 0) {
LAB_144382eee:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)(local_b8,0);
    FUN_1446efa72(&local_b8,0,0,0x10);
    local_b0 = 0;
    goto LAB_144382eee;
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (uStack_70._4_4_ != -1) {
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (void *)0x0;
    uStack_70 = 0xffffffff00000000;
  }
  FUN_14438be00(plVar11);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
LAB_144382c39:
  if (local_40._4_4_ != -1) {
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_48 = (void *)0x0;
    local_40 = 0xffffffff00000000;
  }
  FUN_14438be00(&local_58);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar11 >> 8),lVar7 != -1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144382ffc FUN_144382ffc body=1159 status=ok
// SIG undefined FUN_144382ffc(void)

ulonglong FUN_144382ffc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong ***ppplVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined *****pppppuVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  longlong ***local_d0;
  longlong *local_c8;
  undefined ****local_c0;
  longlong ***local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong ***local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined ****local_80;
  longlong ***local_78;
  undefined1 local_6c [4];
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = *(undefined8 *)(param_1[0x70] + 0xe8);
  plVar3 = *(longlong **)(param_1[0x70] + 0xf0);
  if (plVar3 == (longlong *)0x0) {
    FUN_140cdd79c(local_68,uVar10,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140cdd79c(local_68,uVar10,param_2);
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
  lVar5 = local_68[0];
  if (local_68[0] == -1) {
    puVar11 = local_58;
    if ((int)local_50 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_c0,puVar11);
    lVar13 = *param_1;
    uVar10 = 0;
  }
  else {
    FUN_1408f45ee(&local_80,param_2);
    local_c0 = local_80;
    local_b8 = local_78;
    if ((undefined *****)local_78 != (undefined *****)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
      UNLOCK();
    }
    uVar7 = (*(code *)(*local_80)[8])();
    uVar10 = FUN_1460616d4(param_1 + 0x8f,uVar7,&local_c0);
    ppplVar4 = local_b8;
    if ((undefined *****)local_b8 != (undefined *****)0x0) {
      LOCK();
      pppppuVar12 = (undefined *****)(local_b8 + 1);
      *(int *)pppppuVar12 = *(int *)pppppuVar12 + -1;
      UNLOCK();
      if (*(int *)pppppuVar12 == 0) {
        (*(code *)**local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar4)[2])(ppplVar4);
        }
      }
    }
    ppplVar4 = local_78;
    if ((undefined *****)local_78 != (undefined *****)0x0) {
      LOCK();
      pppppuVar12 = (undefined *****)(local_78 + 1);
      *(int *)pppppuVar12 = *(int *)pppppuVar12 + -1;
      UNLOCK();
      if (*(int *)pppppuVar12 == 0) {
        (*(code *)**local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar4)[2])(ppplVar4);
        }
      }
    }
    FUN_14150a9d5(&local_90,*(undefined8 *)(local_68[0] + 0x18),3);
    if ((longlong)local_88 == 0) {
      local_88 = 0;
    }
    else {
      lVar13 = (longlong)local_88 << 6;
      lVar14 = local_90 + 8;
      do {
        FUN_140e8ce9a(&local_a0,lVar14);
        plVar3 = local_98;
        local_a8 = param_1[0x70];
        if (local_98 == (longlong *)0x0) {
          local_c0 = (undefined ****)&PTR_FUN_14ba3d3b0;
          local_b8 = local_a0;
          local_b0 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
          local_c0 = (undefined ****)&PTR_FUN_14ba3d3b0;
          local_b8 = local_a0;
          local_b0 = local_98;
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = local_98 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        local_d0 = local_a0;
        local_c8 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
        }
        local_80 = (undefined ****)&local_d0;
        local_78 = (longlong ***)&local_c0;
        FUN_14621a78a(uVar10,local_6c,&local_80);
        plVar3 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = local_b0;
        local_c0 = (undefined ****)&PTR_FUN_14ba3d3b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_98 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar14 = lVar14 + 0x40;
        lVar13 = lVar13 + -0x40;
      } while (lVar13 != 0);
    }
    FUN_141323308(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_d8 = *(longlong **)(param_2 + 0x10);
    if (local_d8 == (longlong *)0x0) {
LAB_1443833c3:
      local_d8 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)local_d8[1];
      do {
        if (iVar8 == 0) goto LAB_1443833c3;
        LOCK();
        iVar6 = (int)local_d8[1];
        bVar15 = iVar8 == iVar6;
        if (bVar15) {
          *(int *)(local_d8 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar15);
    }
    local_e0 = (longlong *)0x0;
    if (local_d8 != (longlong *)0x0) {
      local_e0 = *(longlong **)(param_2 + 8);
    }
    uVar7 = (**(code **)(*local_e0 + 0x40))();
    uVar9 = FUN_140b6c20e(param_1 + 0x99,uVar7,&local_e0);
    plVar3 = local_d8;
    pppppuVar12 = (undefined *****)(ulonglong)uVar9;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (uVar9 != 0xffffffff) goto LAB_1443830e0;
    FUN_140056680(&local_c0,&DAT_149dfb77a);
    lVar13 = *param_1;
    uVar10 = 1;
  }
  pppppuVar12 = &local_c0;
  (**(code **)(lVar13 + 0x228))(param_1,param_2,uVar10,pppppuVar12);
  if ((longlong ****)local_c0 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
LAB_1443830e0:
  if (local_50._4_4_ != -1) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (undefined2 *)0x0;
    local_50 = 0xffffffff00000000;
  }
  FUN_14438be00(local_68);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)pppppuVar12 >> 8),lVar5 != -1) & 0xffffffff;
}



// FUNCTION 144383484 FUN_144383484 body=1747 status=ok
// SIG undefined FUN_144383484(void)

undefined8 FUN_144383484(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  uint *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145cf835c(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_148fa28de(param_3,0);
  }
  FUN_1408f45ee(&local_78,param_2);
  plVar14 = (longlong *)CONCAT44(uStack_6c,local_70);
  if (plVar14 == (longlong *)0x0) {
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    local_60 = plVar14;
  }
  local_68 = local_78;
  uVar6 = (**(code **)(*local_78 + 0x40))();
  iVar7 = FUN_14606175a((longlong *)(param_1 + 0x478),uVar6,&local_68);
  plVar2 = local_60;
  if (iVar7 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)iVar7 * 0x68 + *(longlong *)(param_1 + 0x478);
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_60 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_a8 = (longlong *)(lVar18 + 0x10);
  if (lVar18 == 0) {
    local_a8 = (longlong *)0x0;
  }
  plVar14 = (longlong *)CONCAT44(uStack_6c,local_70);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_a8 == (longlong *)0x0) {
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0xe8);
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0xf0);
    if (plVar14 == (longlong *)0x0) {
      FUN_140cdd79c(&local_68,uVar9,param_2);
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      FUN_140cdd79c(&local_68,uVar9,param_2);
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (local_68 == (longlong *)0xffffffffffffffff) {
      if (local_50._4_4_ != -1) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_58 = 0;
        local_50 = 0xffffffff00000000;
      }
      FUN_14438be00(&local_68);
      uVar9 = 0;
      goto LAB_144383acc;
    }
    FUN_14150a9d5(&local_78,local_68[3],3);
    if ((longlong)local_70 == 0) {
      local_70 = 0;
    }
    else {
      lVar18 = (longlong)local_70 << 6;
      plVar14 = local_78 + 1;
      do {
        lVar17 = *(longlong *)(param_1 + 0x380);
        FUN_140e8ce9a(&local_88,plVar14);
        plVar2 = local_80;
        lVar11 = local_88;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = local_80 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14ba3e360;
        plVar10[2] = (longlong)&PTR_FUN_14ba3d3b0;
        plVar10[3] = lVar11;
        plVar10[4] = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        plVar10[5] = lVar17;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        iVar7 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
          FUN_14666d428(param_3,iVar7);
        }
        lVar17 = *param_3;
        *(longlong **)(lVar17 + (longlong)iVar7 * 0x10) = plVar10 + 2;
        *(longlong **)(lVar17 + 8 + (longlong)iVar7 * 0x10) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar2 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        plVar2 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_80 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar14 = plVar14 + 8;
        lVar18 = lVar18 + -0x40;
      } while (lVar18 != 0);
    }
    FUN_141323308(local_78,local_70);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_50._4_4_ != -1) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_58 = 0;
      local_50 = 0xffffffff00000000;
    }
    FUN_14438be00(&local_68);
  }
  else {
    uVar5 = *(uint *)(local_a8 + 5);
    if (uVar5 == 0) {
      uVar19 = 1;
      uVar16 = 0;
      iVar7 = 0;
      uVar21 = 0;
    }
    else {
      puVar8 = (uint *)local_a8[4];
      if ((uint *)local_a8[4] == (uint *)0x0) {
        puVar8 = (uint *)(local_a8 + 2);
      }
      uVar21 = *puVar8;
      if (uVar21 == 0) {
        iVar7 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar7 = uVar5 - 1;
        }
        uVar16 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar16;
        }
        iVar7 = 0;
        do {
          if (uVar19 == uVar16) goto LAB_144383aca;
          iVar7 = iVar7 + 0x20;
          uVar21 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar16 = 0;
        iVar7 = 0;
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21);
      uVar3 = uVar19 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar21 = (iVar7 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar21) {
        uVar21 = uVar5;
      }
    }
    uVar9 = 1;
    if (uVar21 == uVar5) goto LAB_144383acc;
    uVar20 = 0xffffffff;
    plVar14 = local_a8;
    local_a0 = (ulonglong)uVar5;
    local_98 = param_3;
    local_90 = (uint *)(local_a8 + 2);
    do {
      lVar18 = *plVar14;
      plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar2 = local_98;
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14ba3e360;
      plVar10[2] = (longlong)&PTR_FUN_14ba3d3b0;
      lVar11 = (longlong)(int)uVar21 * 0x38;
      plVar10[3] = *(longlong *)(lVar18 + 0x18 + lVar11);
      lVar17 = *(longlong *)(lVar18 + 0x20 + lVar11);
      plVar10[4] = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
      }
      plVar10[5] = *(longlong *)(lVar18 + 0x28 + lVar11);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      iVar15 = (int)local_98[1];
      *(uint *)(local_98 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)local_98 + 0xc) < iVar15 + 1U) {
        FUN_14666d428(local_98,iVar15);
      }
      plVar14 = local_a8;
      lVar18 = *plVar2;
      *(longlong **)(lVar18 + (longlong)iVar15 * 0x10) = plVar10 + 2;
      *(longlong **)(lVar18 + 8 + (longlong)iVar15 * 0x10) = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar20 = uVar20 & ~(uint)uVar19;
      puVar8 = (uint *)plVar14[4];
      if ((uint *)plVar14[4] == (uint *)0x0) {
        puVar8 = local_90;
      }
      uVar5 = *(uint *)(plVar14 + 5);
      iVar15 = (int)uVar16;
      lVar18 = (longlong)iVar15;
      uVar21 = puVar8[lVar18] & uVar20;
      if (uVar21 == 0) {
        iVar12 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar12 = uVar5 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar15) {
          iVar13 = iVar15;
        }
        if (iVar15 < iVar12) {
          lVar17 = 0;
          do {
            uVar21 = puVar8[lVar18 + lVar17 + 1];
            if (uVar21 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar17 + 1);
              uVar20 = 0xffffffff;
              goto LAB_14438384a;
            }
            iVar7 = iVar7 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar13 - lVar18 != lVar17);
          uVar20 = 0xffffffff;
          iVar15 = iVar13;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        plVar14 = local_a8;
        uVar21 = uVar5;
      }
      else {
LAB_14438384a:
        uVar19 = (ulonglong)(-uVar21 & uVar21);
        uVar3 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar21 = (iVar7 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar21) {
          uVar21 = uVar5;
        }
      }
    } while (uVar21 != (uint)local_a0);
  }
LAB_144383aca:
  uVar9 = 1;
LAB_144383acc:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 144383b5a FUN_144383b5a body=2414 status=ok
// SIG undefined FUN_144383b5a(void)

undefined8 FUN_144383b5a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ushort uVar16;
  int iVar17;
  uint *puVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 **local_e0;
  undefined1 local_d8;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong local_70;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 < 4) {
    iVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
    if (iVar3 == 0) {
      if ((int)param_1[0x47] != *(int *)((longlong)param_1 + 0x264)) {
        plVar5 = param_1 + 0x4d;
        if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x4e];
        }
        uVar12 = *(uint *)((longlong)plVar5 + (ulonglong)((int)param_1[0x4f] + 3U & param_2) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            puVar18 = (uint *)(param_1[0x46] + (longlong)(int)uVar12 * 0x18);
            if (*puVar18 == param_2) {
              if (((ulonglong)(puVar18 + 2) & 0xfffffffffffffff7) != 0) {
                lVar7 = param_1[0x31];
                local_98 = (longlong *)0x0;
                local_90 = 0;
                FUN_1446efa72(&local_98,0,3,0x10);
                *local_98 = (longlong)&PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 1;
                lVar10 = DAT_14c758608 + 1;
                if (lVar9 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar9 = DAT_14c758608 + 2;
                  lVar10 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar10;
                local_98[2] = lVar9;
                ppuVar6 = &PTR_FUN_14ba3e520;
                goto LAB_144384273;
              }
              break;
            }
            uVar12 = puVar18[4];
          } while (uVar12 != 0xffffffff);
        }
      }
      if (*(int *)(param_3 + 1) < 2) {
        lVar7 = param_1[0x31];
        local_98 = (longlong *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        *local_98 = (longlong)&PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_98[2] = lVar9;
        ppuVar6 = &PTR_FUN_14ba3e5c0;
      }
      else {
        plVar5 = (longlong *)FUN_140773fe2();
        if (plVar5 != (longlong *)0x0) {
          local_98 = param_1;
          FUN_14666c91a(&local_90,param_3);
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,6,0x10);
          local_50 = 6;
          *local_58 = &PTR_LAB_14b4fea80;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_58[2] = lVar10;
          *local_58 = &PTR_FUN_14ba3e6e0;
          local_58[3] = local_98;
          FUN_14666c91a(local_58 + 4,&local_90);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_8c,local_90) != 0) {
            FUN_1400020a8();
          }
          if (*(int *)(param_3 + 1) == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          else {
            puVar8 = (undefined2 *)*param_3;
          }
          lVar7 = 0;
          while( true ) {
            uVar16 = *(ushort *)((longlong)puVar8 + lVar7);
            uVar20 = (ulonglong)uVar16;
            uVar19 = *(ushort *)((longlong)L"shift" + lVar7);
            if (uVar16 != uVar19) break;
            if (uVar16 == 0) goto LAB_144383f1b;
LAB_144383eeb:
            lVar7 = lVar7 + 2;
          }
          if ((uVar19 | uVar16) < 0x80) {
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
            uVar23 = (ulonglong)uVar19;
            uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar23]) goto LAB_144383eeb;
          }
          if (uVar16 != uVar19) {
            local_b8 = local_58;
            local_58 = (undefined8 *)0x0;
            local_b0 = local_50;
            local_50 = 0;
            (**(code **)(*(longlong *)param_1[0x31] + 0x18))((longlong *)param_1[0x31],&local_98);
            lVar7 = FUN_145cbb6ba(local_98);
            if (lVar7 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined8 *)(lVar7 + 0x1f0);
            }
            (**(code **)(*plVar5 + 0x2b0))(plVar5,param_2,uVar14,&local_b8);
            goto LAB_14438432d;
          }
LAB_144383f1b:
          if (*(int *)(param_3 + 3) == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          else {
            puVar8 = (undefined2 *)param_3[2];
          }
          uVar23 = 0;
          local_c8 = plVar5;
          local_c0 = param_3;
          iVar4 = FUN_144a1ccda(puVar8,0);
          iVar3 = (int)param_1[0x37];
          uVar20 = 1;
          iVar15 = 0;
          iVar21 = 0;
          if (iVar3 != 0) {
            puVar18 = (uint *)param_1[0x36];
            if ((uint *)param_1[0x36] == (uint *)0x0) {
              puVar18 = (uint *)(param_1 + 0x34);
            }
            uVar12 = *puVar18;
            if (uVar12 == 0) {
              iVar21 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar21 = iVar3 + -1;
              }
              uVar23 = 0;
              uVar20 = (ulonglong)(uint)(iVar21 >> 5);
              if (iVar21 >> 5 < 1) {
                uVar20 = uVar23;
              }
              iVar15 = 0;
              do {
                if (uVar20 == uVar23) goto LAB_144384198;
                iVar15 = iVar15 + 0x20;
                uVar12 = puVar18[uVar23 + 1];
                uVar23 = uVar23 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar23 = 0;
              iVar15 = 0;
            }
            uVar20 = (ulonglong)(-uVar12 & uVar12);
            uVar2 = uVar20 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar21 = (iVar15 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar21) {
              iVar21 = iVar3;
            }
          }
          if (iVar21 < iVar3) {
            iVar17 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar17 = iVar3 + -1;
            }
            iVar17 = iVar17 >> 5;
            uVar12 = 0xffffffff;
            do {
              if (*(int *)(*(longlong *)(param_1[0x32] + 8 + (longlong)iVar21 * 0x20) + 0x40) ==
                  iVar4) {
                lVar7 = param_1[0x31];
                local_98 = (longlong *)0x0;
                local_90 = 0;
                FUN_1446efa72(&local_98,0,3,0x10);
                local_90 = 3;
                *local_98 = (longlong)&PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 1;
                lVar10 = DAT_14c758608 + 1;
                if (lVar9 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar9 = DAT_14c758608 + 2;
                  lVar10 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar10;
                local_98[2] = lVar9;
                *local_98 = (longlong)&PTR_FUN_14ba3e9c0;
                local_98[3] = (longlong)param_1;
                *(uint *)(local_98 + 4) = param_2;
                FUN_145c398c4(lVar7,&local_98);
                if (local_90 == 0) {
LAB_144384183:
                  if (local_98 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_98 != (longlong *)0x0) {
                  (**(code **)*local_98)(local_98,0);
                  FUN_1446efa72(&local_98,0,0,0x10);
                  local_90 = 0;
                  goto LAB_144384183;
                }
                uVar14 = 0;
                goto LAB_144384330;
              }
              uVar12 = uVar12 & ~(uint)uVar20;
              puVar18 = (uint *)param_1[0x36];
              if ((uint *)param_1[0x36] == (uint *)0x0) {
                puVar18 = (uint *)(param_1 + 0x34);
              }
              iVar21 = (int)uVar23;
              lVar7 = (longlong)iVar21;
              uVar22 = puVar18[lVar7] & uVar12;
              if (uVar22 == 0) {
                iVar13 = iVar17;
                if (iVar17 < iVar21) {
                  iVar13 = iVar21;
                }
                if (iVar17 <= iVar21) break;
                lVar10 = 0;
                while( true ) {
                  iVar15 = iVar15 + 0x20;
                  uVar22 = puVar18[lVar7 + lVar10 + 1];
                  if (uVar22 != 0) break;
                  lVar10 = lVar10 + 1;
                  if (iVar13 - lVar7 == lVar10) goto LAB_144384198;
                }
                uVar23 = (ulonglong)(iVar21 + (int)lVar10 + 1);
                uVar12 = 0xffffffff;
              }
              uVar20 = (ulonglong)(-uVar22 & uVar22);
              uVar2 = uVar20 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              iVar21 = (iVar15 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            } while (iVar21 < iVar3);
          }
LAB_144384198:
          puVar1 = local_c0 + 2;
          local_a8 = local_58;
          local_58 = (undefined8 *)0x0;
          local_a0 = local_50;
          local_50 = 0;
          puVar11 = local_c0 + 4;
          (**(code **)(*(longlong *)param_1[0x31] + 0x18))((longlong *)param_1[0x31],&local_98);
          lVar7 = FUN_145cbb6ba(local_98);
          if (lVar7 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(lVar7 + 0x1f0);
          }
          local_e0 = &local_a8;
          local_d8 = 0;
          local_e8 = puVar11;
          (**(code **)(*local_c8 + 0x2a0))(local_c8,param_2,uVar14,puVar1);
LAB_14438432d:
          uVar14 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
LAB_144384330:
          if (local_50 != 0) {
            if (local_58 == (undefined8 *)0x0) goto LAB_1443842d3;
            (**(code **)*local_58)(local_58,0);
            FUN_1446efa72(&local_58,0,0,0x10);
            local_50 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1443842d3;
        }
        lVar7 = param_1[0x31];
        local_98 = (longlong *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        *local_98 = (longlong)&PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_98[2] = lVar9;
        ppuVar6 = &PTR_FUN_14ba3e650;
      }
    }
    else {
      lVar7 = param_1[0x31];
      local_98 = (longlong *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      *local_98 = (longlong)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_98[2] = lVar9;
      ppuVar6 = &PTR_FUN_14ba3e480;
    }
  }
  else {
    lVar7 = param_1[0x31];
    local_98 = (longlong *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    *local_98 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_98[2] = lVar9;
    ppuVar6 = &PTR_FUN_14ba3e3f0;
  }
LAB_144384273:
  local_90 = 3;
  *local_98 = (longlong)ppuVar6;
  local_98[3] = (longlong)param_1;
  *(uint *)(local_98 + 4) = param_2;
  FUN_145c398c4(lVar7,&local_98);
  if (local_90 == 0) {
LAB_1443842c3:
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (longlong *)0x0) {
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_1443842c3;
  }
  uVar14 = 0;
LAB_1443842d3:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443844ca FUN_1443844ca body=242 status=ok
// SIG undefined FUN_1443844ca(void)

undefined4 FUN_1443844ca(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80;
  longlong local_70;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = 0;
  FUN_1489ba396(local_90);
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2,local_90);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443845be FUN_1443845be body=560 status=ok
// SIG undefined FUN_1443845be(void)

void FUN_1443845be(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 1) {
    (**(code **)(*param_1 + 0x100))(param_1,&local_c0,param_2);
    lVar3 = local_c0;
    plVar4 = (longlong *)CONCAT44(uStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8)));
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar5 = (longlong *)CONCAT44(uStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,local_b8)));
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
    if (lVar3 == 0) {
      iVar6 = 0x10;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x18);
      if (lVar3 == 0) {
        iVar6 = 0x20;
      }
      else {
        local_c0 = 0x3000300000000;
        local_b8 = 3;
        uStack_b6 = 3;
        uStack_b4 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = &local_58;
        local_50 = FUN_143ef2b5a;
        local_58 = &local_c0;
        bifrost::account::get(*(undefined8 *)(lVar3 + 0x2b8));
        iVar6 = 0x100;
        if (local_c0._3_1_ < 3) {
          iVar6 = (uint)local_c0._3_1_ * -4 + 8;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
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
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2,1,iVar6);
    }
  }
  else if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144384823 FUN_144384823 body=1846 status=ok
// SIG undefined FUN_144384823(void)

void FUN_144384823(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  wchar_t wVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_948 [32];
  undefined4 local_928;
  undefined4 local_920;
  longlong local_918;
  undefined8 local_910;
  undefined2 **local_908;
  char *local_900;
  undefined8 uStack_8f8;
  undefined4 local_8f0;
  char local_8e8;
  undefined7 uStack_8e7;
  ulonglong local_8e0;
  undefined8 uStack_8d8;
  undefined4 local_8d0;
  wchar_t *local_8c8;
  ulonglong uStack_8c0;
  undefined2 *local_8b8;
  undefined8 uStack_8b0;
  longlong local_8a8;
  undefined8 uStack_8a0;
  undefined2 **local_890;
  longlong **local_888;
  undefined1 local_87c [4];
  longlong local_878 [255];
  undefined2 local_7a;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_948;
  local_8a8 = 0;
  uStack_8a0 = 0;
  iVar4 = FUN_1403de9f2(param_1,&local_8a8,&DAT_149e06196,1);
  if (iVar4 == 0) goto LAB_144384f02;
  local_8b8 = (undefined2 *)0x0;
  uStack_8b0 = 0;
  local_8c8 = (wchar_t *)0x0;
  uStack_8c0 = 0;
  if ((int)uStack_8a0 != 0) {
    lVar11 = (longlong)(int)uStack_8a0 * 0x10 + local_8a8;
    local_918 = param_2 + 0x18;
    lVar10 = local_8a8;
    local_910 = param_3;
LAB_1443848de:
    FUN_140056680(local_878,&DAT_149e31048);
    local_920 = 0;
    local_928 = 1;
    cVar2 = FUN_1407cdbc6(lVar10,local_878,&local_8b8,&local_8c8);
    if (local_878[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_8b0 != 0) {
        puVar5 = local_8b8;
      }
      lVar9 = 0;
      while( true ) {
        uVar7 = *(ushort *)((longlong)puVar5 + lVar9);
        uVar8 = (ulonglong)uVar7;
        uVar12 = *(ushort *)((longlong)L"state" + lVar9);
        if (uVar7 != uVar12) break;
        if (uVar7 == 0) goto LAB_144384b89;
LAB_14438495e:
        lVar9 = lVar9 + 2;
      }
      if ((uVar12 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_14438495e;
      }
      if (uVar7 != uVar12) {
        lVar9 = 0;
        goto LAB_144384996;
      }
LAB_144384b89:
      pwVar6 = L"";
      if ((int)uStack_8c0 != 0) {
        pwVar6 = local_8c8;
      }
      iVar4 = _wtoi(pwVar6);
      *(char *)(param_2 + 0x10) = (char)iVar4;
    }
    goto switchD_144384b15_caseD_63;
  }
  goto LAB_144384ee1;
LAB_144384996:
  uVar7 = *(ushort *)((longlong)puVar5 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar12 = *(ushort *)((longlong)L"status_str" + lVar9);
  if (uVar7 == uVar12) {
    if (uVar7 == 0) goto LAB_144384bbd;
LAB_1443849b4:
    lVar9 = lVar9 + 2;
    goto LAB_144384996;
  }
  if ((uVar12 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar13 = (ulonglong)uVar12;
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_1443849b4;
  }
  if (uVar7 != uVar12) {
    lVar9 = 0;
    goto LAB_1443849ec;
  }
LAB_144384bbd:
  iVar4 = (int)uStack_8c0 + -1;
  if ((int)uStack_8c0 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(param_2,local_8c8,iVar4);
switchD_144384b15_caseD_63:
  lVar10 = lVar10 + 0x10;
  if (lVar10 == lVar11) goto LAB_144384ecf;
  goto LAB_1443848de;
LAB_1443849ec:
  uVar7 = *(ushort *)((longlong)puVar5 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar12 = *(ushort *)((longlong)L"joinable" + lVar9);
  if (uVar7 == uVar12) {
    if (uVar7 != 0) goto LAB_144384a0a;
  }
  else {
    if ((uVar12 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar13 = (ulonglong)uVar12;
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_144384a0a;
    }
    if (uVar7 != uVar12) {
      cVar2 = FUN_140c540b4(&local_8b8,L"property.",9,1);
      if (cVar2 == '\0') goto switchD_144384b15_caseD_63;
      pwVar6 = L"";
      if ((int)uStack_8c0 != 0) {
        pwVar6 = local_8c8;
      }
      wcsncpy((wchar_t *)local_878,pwVar6,0x3ff);
      local_7a = 0;
      pwVar6 = wcsrchr((wchar_t *)local_878,L'_');
      if (pwVar6 == (wchar_t *)0x0) goto switchD_144384b15_caseD_63;
      *pwVar6 = L'\0';
      FUN_140056680(&local_8e8,local_878);
      if (local_8c8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_8c8 = (wchar_t *)CONCAT71(uStack_8e7,local_8e8);
      iVar4 = (int)local_8e0;
      uStack_8c0 = local_8e0;
      wVar1 = pwVar6[1];
      switch(wVar1) {
      case L'b':
        local_8e8 = '\0';
        local_8d0 = 0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        FUN_140c3a2ac(&local_8e8);
        local_8e8 = '\t';
        local_8e0 = CONCAT71(local_8e0._1_7_,1);
        FUN_1418b4cfe(&local_8e8,&local_8c8);
        uVar3 = 0;
        if (local_8e8 == '\t') {
          uVar3 = (undefined1)local_8e0;
        }
        local_908 = (undefined2 **)((ulonglong)local_908 & 0xffffffffffffff00);
        local_8f0 = 0;
        local_900 = (char *)0x0;
        uStack_8f8 = 0;
        FUN_140c3a2ac(&local_908);
        local_908 = (undefined2 **)CONCAT71(local_908._1_7_,9);
        local_900 = (char *)CONCAT71(local_900._1_7_,uVar3);
        break;
      case L'c':
      case L'e':
      case L'g':
      case L'h':
        goto switchD_144384b15_caseD_63;
      case L'd':
        local_8e8 = '\0';
        local_8d0 = 0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        FUN_140c3a2ac(&local_8e8);
        local_8e8 = '\x05';
        local_8e0 = 0x3ff0000000000000;
        FUN_1418b4cfe(&local_8e8,&local_8c8);
        if (local_8e8 == '\x05') {
          uVar14 = (undefined4)local_8e0;
          uVar15 = (undefined4)(local_8e0 >> 0x20);
        }
        else {
          uVar14 = 0;
          uVar15 = 0;
        }
        local_908 = (undefined2 **)((ulonglong)local_908 & 0xffffffffffffff00);
        local_8f0 = 0;
        local_900 = (char *)0x0;
        uStack_8f8 = 0;
        FUN_140c3a2ac(&local_908);
        local_908 = (undefined2 **)CONCAT71(local_908._1_7_,5);
        local_900 = (char *)CONCAT44(uVar15,uVar14);
        goto LAB_144384e8b;
      case L'f':
        local_8e8 = '\0';
        local_8d0 = 0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        FUN_140c3a2ac(&local_8e8);
        local_8e8 = '\a';
        local_8e0 = CONCAT44(local_8e0._4_4_,0x3f800000);
        FUN_1418b4cfe(&local_8e8,&local_8c8);
        if (local_8e8 == '\a') {
          uVar14 = (int)local_8e0;
        }
        else {
          uVar14 = 0;
        }
        local_908 = (undefined2 **)((ulonglong)local_908 & 0xffffffffffffff00);
        local_8f0 = 0;
        local_900 = (char *)0x0;
        uStack_8f8 = 0;
        FUN_140c3a2ac(&local_908);
        local_908 = (undefined2 **)CONCAT71(local_908._1_7_,7);
        local_900 = (char *)CONCAT44(local_900._4_4_,uVar14);
LAB_144384e8b:
        local_888 = (longlong **)&local_908;
        local_890 = &local_8b8;
        FUN_140c3a6ca(local_918,local_87c,&local_890,0);
        goto LAB_144384ebb;
      case L'i':
        local_8e8 = '\0';
        local_8d0 = 0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        FUN_140c3a2ac(&local_8e8);
        local_8e8 = '\x01';
        local_8e0 = local_8e0 & 0xffffffff00000000;
        FUN_1418b4cfe(&local_8e8,&local_8c8);
        uVar14 = 0;
        if (local_8e8 == '\x01') {
          uVar14 = (int)local_8e0;
        }
        local_908 = (undefined2 **)((ulonglong)local_908 & 0xffffffffffffff00);
        local_8f0 = 0;
        local_900 = (char *)0x0;
        uStack_8f8 = 0;
        FUN_140c3a2ac(&local_908);
        uVar3 = 1;
LAB_144384de4:
        local_908 = (undefined2 **)CONCAT71(local_908._1_7_,uVar3);
        local_900 = (char *)CONCAT44(local_900._4_4_,uVar14);
        break;
      default:
        if (wVar1 == L'u') {
          local_8e8 = '\0';
          local_8d0 = 0;
          local_8e0 = 0;
          uStack_8d8 = 0;
          FUN_140c3a2ac(&local_8e8);
          local_8e8 = '\x02';
          local_8e0 = local_8e0 & 0xffffffff00000000;
          FUN_1418b4cfe(&local_8e8,&local_8c8);
          uVar14 = 0;
          if (local_8e8 == '\x02') {
            uVar14 = (int)local_8e0;
          }
          local_908 = (undefined2 **)((ulonglong)local_908 & 0xffffffffffffff00);
          local_8f0 = 0;
          local_900 = (char *)0x0;
          uStack_8f8 = 0;
          FUN_140c3a2ac(&local_908);
          uVar3 = 2;
          goto LAB_144384de4;
        }
        if (wVar1 == L's') {
          local_8e8 = '\0';
          local_8e0 = 0;
          uStack_8d8 = 0;
          local_8d0 = 0;
          pwVar6 = local_8c8;
          if (iVar4 == 0) {
            pwVar6 = L"";
          }
          FUN_140c3a228(&local_8e8,pwVar6);
          local_908 = &local_8b8;
          local_900 = &local_8e8;
          FUN_140c3a6ca(local_918,&local_890,&local_908,0);
          goto LAB_144384ec5;
        }
        goto switchD_144384b15_caseD_63;
      }
      local_888 = (longlong **)&local_908;
      local_890 = &local_8b8;
      FUN_140c3a6ca(local_918,local_87c,&local_890,0);
LAB_144384ebb:
      FUN_140c3a2ac(&local_908);
LAB_144384ec5:
      FUN_140c3a2ac(&local_8e8);
      goto switchD_144384b15_caseD_63;
    }
  }
  goto LAB_144384be4;
LAB_144384a0a:
  lVar9 = lVar9 + 2;
  goto LAB_1443849ec;
LAB_144384be4:
  pwVar6 = L"";
  if ((int)uStack_8c0 != 0) {
    pwVar6 = local_8c8;
  }
  iVar4 = _wtoi(pwVar6);
  *(bool *)local_910 = iVar4 == 1;
  goto switchD_144384b15_caseD_63;
LAB_144384ecf:
  if (local_8c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144384ee1:
  if (local_8b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_144384f02:
  FUN_1447a1747(local_8a8,(int)uStack_8a0);
  if (local_8a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_948) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144384f5a FUN_144384f5a body=1101 status=ok
// SIG undefined FUN_144384f5a(void)

void FUN_144384f5a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  char cVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 *local_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x30))(param_2,&local_98);
  local_4c = FUN_140b71325(&local_98);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_4c == 0) {
LAB_144385137:
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,0);
    }
    goto LAB_144385157;
  }
  lVar9 = FUN_141424e9e(param_1[7],param_2);
  local_a8 = param_1;
  if (lVar9 == 0) {
    plVar3 = *(longlong **)(param_1[7] + 0xe8);
    plVar4 = *(longlong **)(param_1[7] + 0xf0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar12 = 0;
    if (plVar3 == (longlong *)0x0) {
      lVar9 = 0;
    }
    else {
      local_a0 = param_3;
      (**(code **)(*plVar3 + 0x108))(plVar3,&local_98);
      if ((longlong)(int)local_90 == 0) {
        lVar9 = 0;
      }
      else {
        plVar11 = local_98 + (longlong)(int)local_90 * 2;
        lVar9 = 0;
        plVar14 = local_98;
        do {
          lVar5 = *plVar14;
          plVar6 = (longlong *)plVar14[1];
          if (plVar6 == (longlong *)0x0) {
            if (lVar5 != 0) {
              lVar9 = FUN_141424f26(plVar3,*(undefined4 *)(lVar5 + 0x10));
              if (lVar9 != 0) break;
              lVar9 = 0;
            }
          }
          else {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            if (lVar5 == 0) {
              cVar13 = '\x03';
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              lVar9 = FUN_141424f26(plVar3,*(undefined4 *)(lVar5 + 0x10));
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
              cVar13 = (lVar9 != 0) * '\x02';
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
            if ((cVar13 != '\x03') && (cVar13 != '\0')) break;
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar11);
        uVar12 = (int)local_90;
      }
      FUN_140b6e673(local_98,uVar12);
      param_3 = local_a0;
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar9 == 0) goto LAB_144385137;
  }
  FUN_1408f45ee(&local_60,param_2);
  lVar5 = local_a8[7];
  local_98 = local_a8;
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  FUN_141532ff6(&local_90,param_3);
  local_80 = local_60;
  local_78 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  puVar7 = local_70;
  local_68 = 4;
  *local_70 = &PTR_LAB_14ba3ee30;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_70[2] = lVar10;
  *local_70 = &PTR_FUN_14ba3edc0;
  local_70[3] = local_98;
  local_70[4] = 0;
  *(undefined4 *)(local_70 + 5) = 0;
  FUN_141532ff6(local_70 + 4,&local_90);
  puVar7[6] = local_80;
  puVar7[7] = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  FUN_148f9cfee(lVar5,lVar9,&local_4c,&local_70);
  if (local_68 == 0) {
LAB_1443852d1:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_1443852d1;
  }
  plVar3 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_88 == 0) {
LAB_144385339:
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_90 != (undefined8 *)0x0) {
    (**(code **)*local_90)(local_90,0);
    FUN_1446efa72(&local_90,0,0,0x10);
    local_88 = 0;
    goto LAB_144385339;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_144385157:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443853a8 FUN_1443853a8 body=722 status=ok
// SIG undefined FUN_1443853a8(void)

undefined8 * FUN_1443853a8(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  lVar6 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14cbf4b48 >> 0x10);
    uVar7 = (uint)DAT_14cbf4b48 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar10 = *(int *)((longlong)plVar5 +
                     (ulonglong)
                     ((int)param_2[9] - 1U &
                     (int)((ulonglong)DAT_14cbf4b48 >> 0x20) + ((uint)DAT_14cbf4b48 << 0x10 | uVar7)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar6 = *param_2 + (longlong)iVar10 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar10 * 0x38) == DAT_14cbf4b48) goto LAB_14438547d;
        iVar10 = *(int *)(lVar6 + 0x30);
      } while (iVar10 != -1);
    }
    lVar6 = 0;
  }
LAB_14438547d:
  FUN_140b74118(lVar6 + 8,&local_88);
  puVar4 = local_88;
  if ((int)uStack_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  lVar6 = 0;
  do {
    uVar2 = puVar4[lVar6];
    bVar1 = (&DAT_149e02088)[lVar6];
    iVar10 = (uint)uVar2 - (uint)bVar1;
    if (iVar10 == 0) {
      if (uVar2 == 0) goto LAB_144385618;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1443854f4;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) break;
    }
    lVar6 = lVar6 + 1;
  } while( true );
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1443854f4:
  if (iVar10 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    bVar9 = true;
    FUN_1403de9f2(&local_88,&local_98,&DAT_149e06120,CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1));
    if ((longlong)(int)uStack_90 == 0) {
      uVar8 = 0;
    }
    else {
      lVar11 = (longlong)(int)uStack_90 << 4;
      lVar6 = local_98;
      local_b0 = param_2;
      bVar12 = false;
      do {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_1403de9f2(lVar6,&local_a8,&DAT_149e31048,1);
        iVar10 = (int)uStack_a0;
        bVar9 = true;
        if ((int)uStack_a0 == 2) {
          local_78 = local_a8;
          local_70 = local_a8 + 0x10;
          FUN_140ac5c08(param_1,local_64,&local_78,0);
          bVar9 = bVar12;
        }
        FUN_1447a1747(local_a8,(int)uStack_a0);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (iVar10 != 2) goto LAB_1443855cc;
        lVar6 = lVar6 + 0x10;
        lVar11 = lVar11 + -0x10;
        bVar12 = bVar9;
      } while (lVar11 != 0);
      bVar9 = true;
LAB_1443855cc:
      uVar8 = uStack_90 & 0xffffffff;
      param_2 = local_b0;
    }
    FUN_1447a1747(local_98,uVar8);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (!bVar9) {
      *(undefined4 *)(param_1 + 9) = 0;
      if (param_1[8] != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(param_1);
    }
  }
LAB_144385618:
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14124f12c(param_2);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14438567c FUN_14438567c body=579 status=ok
// SIG undefined FUN_14438567c(void)

void FUN_14438567c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = *(int *)(param_2 + 0x60);
  local_78 = param_1;
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = *(uint **)(param_2 + 0x58);
    if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
      puVar8 = (uint *)(param_2 + 0x48);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_14438588f;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_2 + 0x38);
      lVar9 = (longlong)iVar4 * 0x38;
      if ((*(byte *)(lVar13 + 0x28 + lVar9) & 0xfe) == 2) {
        lVar1 = lVar13 + lVar9;
        pcVar10 = (char *)(lVar9 + lVar13 + 8);
        if (*pcVar10 == '\x01') {
          if (*pcVar10 == '\x01') {
            local_4c._0_4_ = *(undefined4 *)(lVar1 + 0x10);
          }
          else {
            local_4c._0_4_ = 0;
          }
          local_58 = (longlong *)local_4c;
          local_60 = lVar1;
          FUN_140171856(param_1 + 0x50,local_70,&local_60,0);
        }
        else if (*pcVar10 == '\x06') {
          FUN_140b74056(pcVar10,local_70);
          local_58 = local_70;
          local_60 = lVar1;
          FUN_145739864(local_78,local_4c,&local_60,0);
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      puVar8 = *(uint **)(param_2 + 0x58);
      if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
        puVar8 = (uint *)(param_2 + 0x48);
      }
      iVar3 = *(int *)(param_2 + 0x60);
      iVar4 = (int)uVar11;
      lVar13 = (longlong)iVar4;
      uVar5 = puVar8[lVar13] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar8[lVar13 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar13 == lVar9) goto LAB_14438588f;
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14438588f:
  if ((local_4c._4_8_ ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443858c0 FUN_1443858c0 body=237 status=ok
// SIG undefined FUN_1443858c0(void)

undefined4 FUN_1443858c0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_50);
  (**(code **)(*local_50 + 0x110))(local_50,&local_40,param_2);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_40 == 0) {
    uVar3 = 0;
    (**(code **)(*param_1 + 0x68))(param_1,param_3,0);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1,local_40,param_3,param_4);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443859ae FUN_1443859ae body=2909 status=ok
// SIG undefined FUN_1443859ae(void)

ulonglong FUN_1443859ae(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  uchar auVar6 [8];
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  undefined7 uVar19;
  int iVar20;
  uint uVar21;
  undefined2 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_1e8 [32];
  undefined8 **local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  longlong *local_1a8;
  uint local_1a0;
  int local_19c;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  uint *local_178;
  undefined4 local_16c;
  longlong *local_168;
  uchar auStack_160 [8];
  undefined1 local_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined1 local_131;
  undefined4 *local_130;
  undefined8 **local_128;
  undefined1 local_11c [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*param_1 + 8))(param_1,param_3,param_4);
    FUN_1459a3e4e(&local_b8,param_2);
    plVar23 = uStack_b0;
    if (uStack_b0 == (longlong *)0x0) {
      local_1a8 = (longlong *)(lVar8 + 0x128);
      *(undefined8 **)(lVar8 + 0x128) = local_b8;
      plVar9 = *(longlong **)(lVar8 + 0x130);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(lVar8 + 0x130) = 0;
LAB_144385ae9:
        local_1a8 = (longlong *)(lVar8 + 0x128);
        LOCK();
        plVar23 = plVar9 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x000144385ad9:
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(uStack_b0 + 1) = (int)uStack_b0[1] + 1;
      UNLOCK();
      local_1a8 = (longlong *)(lVar8 + 0x128);
      *(undefined8 **)(lVar8 + 0x128) = local_b8;
      plVar9 = *(longlong **)(lVar8 + 0x130);
      if (uStack_b0 == plVar9) {
        LOCK();
        plVar9 = uStack_b0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*uStack_b0)(uStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar9 = plVar23;
          goto joined_r0x000144385ad9;
        }
      }
      else {
        *(longlong **)(lVar8 + 0x130) = uStack_b0;
        if (plVar9 != (longlong *)0x0) goto LAB_144385ae9;
      }
    }
    plVar23 = uStack_b0;
    if (uStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = uStack_b0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*uStack_b0)(uStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x128);
    lVar11 = *(longlong *)(lVar8 + 0x130);
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar23 = *(longlong **)(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 8) = uVar3;
    *(longlong *)(lVar8 + 0x10) = lVar11;
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar23 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_168);
    (**(code **)(*local_168 + 0x140))(local_168,&local_b8,param_2);
    if ((undefined8 **)(lVar8 + 0x18) == &local_b8) {
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 **)(lVar8 + 0x18) = local_b8;
      local_b8 = (undefined8 *)0x0;
      *(int *)(lVar8 + 0x20) = (int)uStack_b0;
      *(undefined4 *)(lVar8 + 0x24) = uStack_b0._4_4_;
      uStack_b0 = (longlong *)0x0;
    }
    auVar6 = auStack_160;
    if (auStack_160 != (uchar  [8])0x0) {
      LOCK();
      plVar23 = (longlong *)((longlong)auStack_160 + 8);
      *(int *)plVar23 = *(int *)plVar23 + -1;
      UNLOCK();
      if (*(int *)plVar23 == 0) {
        (*(code *)**(undefined8 **)auStack_160)(auStack_160);
        LOCK();
        piVar1 = (int *)((longlong)auVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)auVar6 + 0x10))(auVar6);
        }
      }
    }
    *(undefined1 *)(lVar8 + 0x124) = 1;
    *(undefined4 *)(lVar8 + 0x114) = *(undefined4 *)(lVar8 + 0x30);
    *(undefined4 *)(lVar8 + 0x110) = 0;
    plVar9 = (longlong *)FUN_14001cc68(0x120);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14ba3efd0;
    plVar23 = plVar9 + 2;
    memset(plVar23,0,0x110);
    FUN_145b20dba(plVar23);
    uVar5 = DAT_14cb0f198;
    if (*(char *)(lVar8 + 0x3a) == '\0') {
      (**(code **)(*(longlong *)*local_1a8 + 0x30))((longlong *)*local_1a8,&local_168);
      local_1c0 = (longlong *)&DAT_149dfb77a;
      if (auStack_160._0_4_ != 0) {
        local_1c0 = local_168;
      }
      puVar22 = &DAT_149dfb77a;
      if (DAT_14cb0f150 != 0) {
        puVar22 = DAT_14cb0f148;
      }
      local_1b8 = uVar5;
      local_1c8 = (undefined8 **)&DAT_14ba3c4b0;
      FUN_140002266(&local_b8,L"%s://%s%s%s:%d",puVar22,&DAT_14ba3c4b8);
      if (plVar9[0x17] != 0) {
        FUN_1400020a8();
      }
      plVar9[0x17] = (longlong)local_b8;
      local_b8 = (undefined8 *)0x0;
      *(int *)(plVar9 + 0x18) = (int)uStack_b0;
      *(undefined4 *)((longlong)plVar9 + 0xc4) = uStack_b0._4_4_;
      uStack_b0 = (longlong *)0x0;
      if (local_168 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1446f470e(&local_b8,L"WINDOWS",1);
      plVar10 = (longlong *)FUN_140272950(&local_b8);
      if (plVar10 != (longlong *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        (**(code **)(*plVar10 + 0xe0))(plVar10,&local_168,&DAT_14c872ee0,&local_130);
        (**(code **)(*local_168 + 0x80))(local_168,&local_b8,0);
        if (plVar9[0x19] != 0) {
          FUN_1400020a8();
        }
        auVar6 = auStack_160;
        plVar9[0x19] = (longlong)local_b8;
        local_b8 = (undefined8 *)0x0;
        *(int *)(plVar9 + 0x1a) = (int)uStack_b0;
        *(undefined4 *)((longlong)plVar9 + 0xd4) = uStack_b0._4_4_;
        uStack_b0 = (longlong *)0x0;
        if (auStack_160 != (uchar  [8])0x0) {
          LOCK();
          plVar10 = (longlong *)((longlong)auStack_160 + 8);
          *(int *)plVar10 = *(int *)plVar10 + -1;
          UNLOCK();
          if (*(int *)plVar10 == 0) {
            (*(code *)**(undefined8 **)auStack_160)(auStack_160);
            LOCK();
            piVar1 = (int *)((longlong)auVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*(longlong *)auVar6 + 0x10))(auVar6);
            }
          }
        }
      }
    }
    if (plVar9 == (longlong *)0x0) {
      *(undefined8 *)(lVar8 + 0x100) = 0x10;
      plVar10 = *(longlong **)(lVar8 + 0x108);
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(lVar8 + 0x108) = 0;
LAB_144385ef3:
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x000144385f21:
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *(longlong **)(lVar8 + 0x100) = plVar23;
      plVar10 = *(longlong **)(lVar8 + 0x108);
      if (plVar9 == plVar10) {
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar10 = plVar9;
          goto joined_r0x000144385f21;
        }
      }
      else {
        *(longlong **)(lVar8 + 0x108) = plVar9;
        if (plVar10 != (longlong *)0x0) goto LAB_144385ef3;
      }
    }
    *(undefined4 *)(lVar8 + 0x148) = 1;
    uVar19 = (undefined7)((ulonglong)lVar8 >> 8);
    if (*(char *)(lVar8 + 0x3a) == '\0') {
      if ((*local_1a8 != 0) && (lVar11 = FUN_141424e9e(param_1[0x51]), lVar11 != 0)) {
        local_131 = *(undefined1 *)(lVar8 + 0x3e);
        local_168 = (longlong *)CONCAT44(local_168._4_4_,2);
        auStack_160[0] = 200;
        auStack_160[1] = '\0';
        auStack_160[2] = '\0';
        auStack_160[3] = '\0';
        auStack_160[4] = '\0';
        auStack_160[5] = '\0';
        auStack_160[6] = '\0';
        auStack_160[7] = '\0';
        local_158 = 1;
        local_150 = 0;
        uStack_148 = 0;
        local_190 = lVar11;
        FUN_145e34946(&local_168,lVar8);
        local_198 = *(longlong *)(lVar8 + 0x100);
        local_188 = *(longlong **)(lVar8 + 0x108);
        if (local_188 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_188 + 1) = (int)local_188[1] + 1;
          UNLOCK();
        }
        iVar7 = *(int *)(lVar8 + 0xd8);
        if (iVar7 == 0) {
          uVar25 = 1;
          plVar23 = (longlong *)0x0;
          iVar20 = 0;
          iVar15 = 0;
        }
        else {
          puVar16 = *(uint **)(lVar8 + 0xd0);
          if (*(uint **)(lVar8 + 0xd0) == (uint *)0x0) {
            puVar16 = (uint *)(lVar8 + 0xc0);
          }
          uVar21 = *puVar16;
          if (uVar21 == 0) {
            iVar20 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar20 = iVar7 + -1;
            }
            plVar23 = (longlong *)0x0;
            plVar10 = (longlong *)(ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              plVar10 = plVar23;
            }
            iVar20 = 0;
            do {
              if (plVar10 == plVar23) goto LAB_14438634d;
              iVar20 = iVar20 + 0x20;
              uVar21 = puVar16[(longlong)plVar23 + 1];
              plVar23 = (longlong *)((longlong)plVar23 + 1);
            } while (uVar21 == 0);
          }
          else {
            plVar23 = (longlong *)0x0;
            iVar20 = 0;
          }
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar17 = uVar25 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar15 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar15) {
            iVar15 = iVar7;
          }
        }
        if (iVar15 < iVar7) {
          local_198 = local_198 + 0x58;
          local_180 = plVar9;
          local_178 = (uint *)(lVar8 + 0xc0);
          uVar21 = 0xffffffff;
          do {
            local_1a0 = uVar21;
            lVar24 = (longlong)iVar15 * 0x68;
            lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0xb0) + lVar24);
            plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0xb0) + 8 + lVar24);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            local_1a8 = plVar23;
            local_19c = iVar20;
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = FUN_141424e9e(param_1[0x51]);
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar23 = plVar9 + 1;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)*plVar23 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            local_e8 = 0;
            local_e0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_dc = 0xffffffff00000080;
            local_d4 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1412c5fc6(&local_108,*(longlong *)(lVar8 + 0xb0) + lVar24 + 0x10);
            FUN_1443853a8(&local_b8,&local_108);
            local_16c = FUN_140b71325(lVar11 + 0x228);
            local_130 = &local_16c;
            local_128 = &local_b8;
            FUN_148fa39b8(local_198,local_11c,&local_130);
            local_70 = 0;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            FUN_1407a3a68(&local_b8);
            uVar21 = local_1a0 & ~(uint)uVar25;
            puVar16 = *(uint **)(lVar8 + 0xd0);
            if (*(uint **)(lVar8 + 0xd0) == (uint *)0x0) {
              puVar16 = local_178;
            }
            iVar7 = *(int *)(lVar8 + 0xd8);
            iVar15 = (int)local_1a8;
            lVar11 = (longlong)iVar15;
            uVar12 = puVar16[lVar11] & uVar21;
            plVar23 = local_1a8;
            iVar20 = local_19c;
            plVar9 = local_180;
            if (uVar12 == 0) {
              iVar13 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar13 = iVar7 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar14 = iVar13;
              if (iVar13 < iVar15) {
                iVar14 = iVar15;
              }
              if (iVar13 <= iVar15) break;
              lVar24 = 0;
              while( true ) {
                iVar20 = iVar20 + 0x20;
                uVar12 = puVar16[lVar11 + lVar24 + 1];
                if (uVar12 != 0) break;
                lVar24 = lVar24 + 1;
                if (iVar14 - lVar11 == lVar24) goto LAB_14438634d;
              }
              plVar23 = (longlong *)(ulonglong)(iVar15 + (int)lVar24 + 1);
              uVar21 = 0xffffffff;
            }
            uVar25 = (ulonglong)(-uVar12 & uVar12);
            uVar17 = uVar25 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar15 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          } while (iVar15 < iVar7);
        }
LAB_14438634d:
        if (param_1[0x57] == param_3) {
          local_118 = 0;
          uStack_110 = 0;
          FUN_148f9d39e(param_1,param_3);
        }
        ppuVar18 = (undefined8 **)param_1[0x51];
        local_b8 = (undefined8 *)0x0;
        uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
        FUN_1446efa72(&local_b8,0,3,0x10);
        uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,3);
        *local_b8 = &PTR_LAB_14ba3f060;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_b8[2] = lVar11;
        *local_b8 = &PTR_FUN_14ba3eff0;
        local_b8[3] = param_1;
        local_b8[4] = param_3;
        local_1c8 = &local_b8;
        FUN_1460587ac(ppuVar18,local_190,&local_168,&local_131);
        plVar23 = local_188;
        if ((int)uStack_b0 == 0) {
LAB_144386452:
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_b8 != (undefined8 *)0x0) {
          (**(code **)*local_b8)(local_b8,0);
          ppuVar18 = &local_b8;
          FUN_1446efa72(ppuVar18,0,0,0x10);
          uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
          goto LAB_144386452;
        }
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar23 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        if (local_150 != 0) {
          FUN_1400020a8();
        }
        uVar19 = (undefined7)((ulonglong)ppuVar18 >> 8);
        goto LAB_14438649b;
      }
      (**(code **)(*param_1 + 0x28))(param_1,param_3);
      bVar4 = true;
      uVar17 = CONCAT71(uVar19,1);
    }
    else {
      local_168 = (longlong *)0x0;
      auStack_160[0] = '\0';
      auStack_160[1] = '\0';
      auStack_160[2] = '\0';
      auStack_160[3] = '\0';
      auStack_160[4] = '\0';
      auStack_160[5] = '\0';
      auStack_160[6] = '\0';
      auStack_160[7] = '\0';
      CoCreateGuid((GUID *)&local_168);
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = (longlong *)0x0;
      FUN_1407c869a((GUID *)&local_168,&local_b8,0);
      FUN_145b206ee(plVar23,&local_b8);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar8 + 0x148) = 2;
      iVar7 = FUN_148f9d4e8(param_1);
      if (iVar7 != 0) {
        (**(code **)(*param_1 + 0x28))(param_1,param_3);
        bVar4 = false;
        (**(code **)(*param_1 + 0x68))(param_1,param_3,0);
        uVar17 = 0;
        goto LAB_144385f70;
      }
      (**(code **)(*param_1 + 0x68))(param_1,param_3,1);
LAB_14438649b:
      uVar17 = CONCAT71(uVar19,1);
      bVar4 = false;
    }
LAB_144385f70:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar9 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (!bVar4) goto LAB_144385a06;
  }
  uVar17 = 0;
  (**(code **)(*param_1 + 0x68))(param_1,param_3,0);
LAB_144385a06:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 14438650c FUN_14438650c body=107 status=ok
// SIG undefined FUN_14438650c(void)

undefined4 FUN_14438650c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x148) | 4) != 6)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(lVar1 + 0x148) = 4;
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((*(char *)(lVar1 + 0x3a) == '\x01') && (*(char *)(lVar1 + 0x39) == '\0')) {
      (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1,param_2,uVar2);
  return uVar2;
}



// FUNCTION 144386578 FUN_144386578 body=1945 status=ok
// SIG undefined FUN_144386578(void)

ulonglong FUN_144386578(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 **ppuVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_1c8 [32];
  undefined8 **local_1a8;
  undefined1 local_199;
  longlong *local_198;
  uint local_190;
  int local_18c;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  ulonglong local_168;
  undefined4 local_15c;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined1 local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined4 *local_130;
  undefined8 **local_128;
  undefined1 local_11c [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b0;
  int local_a8;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  ppuVar19 = (undefined8 **)(param_4 & 0xffffffff);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar10 = (**(code **)(*param_1 + 0x20))();
  if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0x100) == 0)) ||
     ((*(uint *)(lVar10 + 0x148) < 8 && ((0x83U >> (*(uint *)(lVar10 + 0x148) & 0x1f) & 1) != 0))))
  {
LAB_1443865e2:
    lVar10 = *param_1;
    uVar23 = 0;
    uVar22 = 0;
  }
  else {
    local_199 = *(undefined1 *)(lVar10 + 0x38);
    *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_3 + 0x18);
    uVar6 = *(undefined4 *)(param_3 + 0xc);
    uVar7 = *(undefined4 *)(param_3 + 0x10);
    uVar8 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(lVar10 + 0x34) = uVar6;
    *(undefined4 *)(lVar10 + 0x38) = uVar7;
    *(undefined4 *)(lVar10 + 0x3c) = uVar8;
    puVar1 = (undefined8 *)(lVar10 + 0x48);
    if (puVar1 != (undefined8 *)(param_3 + 0x20)) {
      iVar4 = *(int *)(param_3 + 0x28);
      plVar5 = *(longlong **)(param_3 + 0x20);
      *(int *)(lVar10 + 0x50) = iVar4;
      if (iVar4 == 0 && *(int *)(lVar10 + 0x54) == 0) {
        *(undefined4 *)(lVar10 + 0x54) = 0;
      }
      else {
        local_198 = plVar5;
        FUN_1446dd670(puVar1,iVar4);
        if (iVar4 != 0) {
          memcpy((void *)*puVar1,local_198,(longlong)iVar4 * 2);
        }
      }
    }
    *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(param_3 + 0x30);
    FUN_1412c5fc6(lVar10 + 0x60,param_3 + 0x38);
    FUN_1412c6060((longlong *)(lVar10 + 0xb0),param_3 + 0x88);
    if (*(char *)(lVar10 + 0x3a) == '\0') {
      if ((char)ppuVar19 == '\0') {
        uVar23 = CONCAT71((int7)((ulonglong)ppuVar19 >> 8),1);
        FUN_148f9d778(param_1,param_2,1);
        goto LAB_1443865f6;
      }
      if ((*(longlong *)(lVar10 + 0x128) == 0) ||
         (lVar16 = FUN_141424e9e(param_1[0x51]), lVar16 == 0)) goto LAB_1443865e2;
      local_158[0] = 2;
      local_150 = 200;
      local_148 = 1;
      local_140 = 0;
      uStack_138 = 0;
      FUN_145e34946(local_158,lVar10);
      local_188 = *(longlong *)(lVar10 + 0x100);
      local_178 = *(longlong **)(lVar10 + 0x108);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      iVar4 = *(int *)(lVar10 + 0xd8);
      local_180 = lVar16;
      if (iVar4 == 0) {
        uVar20 = 1;
        uVar23 = 0;
        iVar18 = 0;
        iVar14 = 0;
      }
      else {
        puVar15 = *(uint **)(lVar10 + 0xd0);
        if (*(uint **)(lVar10 + 0xd0) == (uint *)0x0) {
          puVar15 = (uint *)(lVar10 + 0xc0);
        }
        uVar21 = *puVar15;
        if (uVar21 == 0) {
          iVar18 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar18 = iVar4 + -1;
          }
          uVar23 = 0;
          uVar17 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar17 = uVar23;
          }
          iVar18 = 0;
          do {
            if (uVar17 == uVar23) goto LAB_144386b77;
            iVar18 = iVar18 + 0x20;
            uVar21 = puVar15[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar23 = 0;
          iVar18 = 0;
        }
        uVar20 = (ulonglong)(-uVar21 & uVar21);
        uVar17 = uVar20 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar14) {
          iVar14 = iVar4;
        }
      }
      if (iVar14 < iVar4) {
        local_170 = local_188 + 0x58;
        local_198 = (longlong *)(lVar10 + 0xb0);
        uVar21 = 0xffffffff;
        do {
          local_190 = uVar21;
          lVar24 = (longlong)iVar14 * 0x68;
          lVar16 = *(longlong *)(*local_198 + lVar24);
          plVar5 = *(longlong **)(*local_198 + 8 + lVar24);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_18c = iVar18;
          local_168 = uVar23;
          if (lVar16 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = FUN_141424e9e(param_1[0x51]);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          local_e8 = 0;
          local_e0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_dc = 0xffffffff00000080;
          local_d4 = 0;
          local_c8 = 0;
          local_c0 = 0;
          FUN_1412c5fc6(&local_108,*local_198 + lVar24 + 0x10);
          FUN_1443853a8(&local_b0,&local_108);
          local_15c = FUN_140b71325(lVar16 + 0x228);
          local_130 = &local_15c;
          local_128 = &local_b0;
          FUN_148fa39b8(local_170,local_11c,&local_130);
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1407a3a68(&local_b0);
          uVar21 = local_190 & ~(uint)uVar20;
          puVar15 = *(uint **)(lVar10 + 0xd0);
          if (*(uint **)(lVar10 + 0xd0) == (uint *)0x0) {
            puVar15 = (uint *)(lVar10 + 0xc0);
          }
          iVar4 = *(int *)(lVar10 + 0xd8);
          iVar14 = (int)local_168;
          lVar16 = (longlong)iVar14;
          uVar11 = puVar15[lVar16] & uVar21;
          uVar23 = local_168;
          iVar18 = local_18c;
          if (uVar11 == 0) {
            iVar12 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar12 = iVar4 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar13 = iVar12;
            if (iVar12 < iVar14) {
              iVar13 = iVar14;
            }
            if (iVar12 <= iVar14) break;
            lVar24 = 0;
            while( true ) {
              iVar18 = iVar18 + 0x20;
              uVar11 = puVar15[lVar16 + lVar24 + 1];
              if (uVar11 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar13 - lVar16 == lVar24) goto LAB_144386b77;
            }
            uVar23 = (ulonglong)(iVar14 + (int)lVar24 + 1);
            uVar21 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar11 & uVar11);
          uVar17 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar14 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar14 < iVar4);
      }
LAB_144386b77:
      if (param_1[0x57] == param_2) {
        local_118 = 0;
        uStack_110 = 0;
        FUN_148f9d39e(param_1,param_2);
      }
      lVar10 = param_1[0x51];
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      plVar5 = local_178;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14b4f3a00;
      LOCK();
      UNLOCK();
      lVar24 = DAT_14c758608 + 1;
      lVar16 = DAT_14c758608 + 1;
      if (lVar24 == 0) {
        LOCK();
        UNLOCK();
        lVar24 = DAT_14c758608 + 2;
        lVar16 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar16;
      local_b0[2] = lVar24;
      *local_b0 = &PTR_FUN_14ba3f380;
      local_b0[3] = param_1;
      local_b0[4] = param_2;
      *(undefined1 *)(local_b0 + 5) = local_199;
      local_130 = (undefined4 *)CONCAT44(local_130._4_4_,*(undefined4 *)(local_188 + 0xd8));
      local_1a8 = &local_b0;
      FUN_148f9d664(lVar10,local_180,&local_130,local_158);
      if (local_a8 == 0) {
LAB_144386c8f:
        if (local_b0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b0 != (undefined8 *)0x0) {
        (**(code **)*local_b0)(local_b0,0);
        FUN_1446efa72(&local_b0,0,0,0x10);
        local_a8 = 0;
        goto LAB_144386c8f;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (local_140 != 0) {
        FUN_1400020a8();
      }
      uVar23 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
      goto LAB_1443865f6;
    }
    if ((*(char *)(lVar10 + 0x38) == '\x01') && (*(char *)(lVar10 + 0x124) == '\x01')) {
      if (*(int *)(param_1[0x54] + 0x28) == 0) {
        ppuVar19 = &local_b0;
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        FUN_1446efa72(ppuVar19,0,3,0x10);
        local_a8 = 3;
        *local_b0 = &PTR_LAB_14ba3a100;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_b0[2] = lVar16;
        *local_b0 = &PTR_FUN_14ba3f690;
        local_b0[3] = param_1;
        local_b0[4] = FUN_144386d12;
        *(undefined4 *)(local_b0 + 5) = 0;
        cVar9 = (**(code **)(*(longlong *)param_1[0x54] + 0x18))
                          ((longlong *)param_1[0x54],&local_b0);
        if (cVar9 == '\0') {
          (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
        }
        if (local_a8 != 0) {
          if (local_b0 == (undefined8 *)0x0) goto LAB_1443868b8;
          (**(code **)*local_b0)(local_b0,0);
          FUN_1446efa72(&local_b0,0,0,0x10);
          local_a8 = 0;
        }
        ppuVar19 = &local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
    }
LAB_1443868b8:
    lVar10 = *param_1;
    uVar23 = CONCAT71((int7)((ulonglong)ppuVar19 >> 8),1);
    uVar22 = 1;
  }
  (**(code **)(lVar10 + 0xb8))(param_1,param_2,uVar22);
LAB_1443865f6:
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144386d12 FUN_144386d12 body=278 status=ok
// SIG undefined FUN_144386d12(void)

void FUN_144386d12(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined4 local_40;
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x298);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x290);
      if (((lVar1 + lVar4 != 0) &&
          (((*(char *)(lVar1 + 0x38 + lVar4) != '\0' || ((*(byte *)(lVar1 + 0x3a + lVar4) & 1) != 0)
            ) && (*(int *)(lVar1 + 0x148 + lVar4) != 4 || (*(byte *)(lVar1 + 0x39 + lVar4) & 1) != 0
                 )))) && (0 < *(int *)(lVar1 + 0x114 + lVar4))) {
        FUN_1489bb0ca(local_50,0x400);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x48))
                  (*(longlong **)(param_1 + 0x2a0),local_50,param_4);
        FUN_148f9e17e(param_1,local_50,lVar1 + lVar4);
        if (local_3c == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x58))
                    (*(longlong **)(param_1 + 0x2a0),local_50[0],local_40);
        }
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
        iVar2 = *(int *)(param_1 + 0x298);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x150;
    } while (lVar3 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144386e2a FUN_144386e2a body=107 status=ok
// SIG undefined FUN_144386e2a(void)

undefined4 FUN_144386e2a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x148) != 4)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar3 = (undefined4)CONCAT71(uVar4,1);
    if (*(char *)(lVar2 + 0x3a) == '\x01') {
      iVar1 = FUN_148f9d4e8(param_1);
      uVar3 = (undefined4)CONCAT71(uVar4,iVar1 == 0);
    }
    *(undefined4 *)(lVar2 + 0x148) = 6;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 144386e96 FUN_144386e96 body=2181 status=ok
// SIG undefined FUN_144386e96(void)

ulonglong FUN_144386e96(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *lpTlsValue;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 unaff_RBP;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 *local_80;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = (**(code **)(*param_1 + 0x20))();
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x100) == 0)) {
LAB_144386fab:
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    plVar15 = (longlong *)*param_3;
    if (plVar15 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar15 + 0x60))(plVar15,param_2,0);
    }
    uVar11 = 0;
    (**(code **)(*param_1 + 0x108))(param_1,param_2,0);
    goto LAB_144386fec;
  }
  if (*(int *)(lVar5 + 0x148) == 7) {
    uVar11 = 0;
    goto LAB_144386fec;
  }
  *(undefined4 *)(lVar5 + 0x148) = 7;
  if (*(char *)(lVar5 + 0x3a) == '\x01') {
    (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    plVar15 = (longlong *)*param_3;
    if (plVar15 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar15 + 0x60))(plVar15,param_2,1);
    }
    (**(code **)(*param_1 + 0x108))(param_1,param_2,1);
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (undefined8 *)0x0) {
      lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    puVar9 = (undefined8 *)lpTlsValue[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*lpTlsValue;
      if (puVar9 == (undefined8 *)0x0) {
        uVar13 = (uint)DAT_14c896180;
        plVar15 = DAT_14c896180;
        while (DAT_14c896180 = plVar15, local_b0 = plVar15, ((ulonglong)plVar15 & 0x3ffffff) != 0) {
          local_70 = (longlong *)(((ulonglong)plVar15 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_70 >> 0x1a < (ulonglong)plVar15 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar11 = (ulonglong)((uVar13 & 0x3ffffff) >> 0xe);
          uVar17 = (ulonglong)((uint)plVar15 & 0x3fff);
          local_70 = (longlong *)
                     ((ulonglong)local_70 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar17 * 0x18));
          LOCK();
          bVar18 = local_b0 == DAT_14c896180;
          plVar15 = local_70;
          if (!bVar18) {
            plVar15 = DAT_14c896180;
          }
          DAT_14c896180 = plVar15;
          UNLOCK();
          if (bVar18) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar17 * 0x18 + 0x10) = 0;
            puVar9 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                      (ulonglong)(uVar13 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar13 & 0x3ffffff);
            lpTlsValue[1] = puVar9;
            if (puVar9 != (undefined8 *)0x0) goto LAB_144387182;
            goto LAB_1443876aa;
          }
          uVar13 = (uint)DAT_14c896180;
          plVar15 = DAT_14c896180;
        }
        lpTlsValue[1] = 0;
LAB_1443876aa:
        puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
        lpTlsValue[1] = puVar9;
        iVar4 = 0xff;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 0x20;
          *puVar10 = puVar7;
          iVar4 = iVar4 + -1;
          puVar10 = puVar7;
        } while (iVar4 != 0);
      }
      else {
        lpTlsValue[1] = puVar9;
        puVar7 = lpTlsValue;
      }
      *puVar7 = 0;
LAB_144387182:
      *(undefined4 *)(lpTlsValue + 2) = 0x100;
      iVar4 = 0xff;
    }
    else {
      iVar4 = *(int *)(lpTlsValue + 2) + -1;
    }
    lpTlsValue[1] = *puVar9;
    *(int *)(lpTlsValue + 2) = iVar4;
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar18 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar18) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_FUN_14ba3f708;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar9[0xf] = uVar8;
    puVar9[0x10] = 0xc8000052e8f37780;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    *puVar9 = &PTR_FUN_14ba3f6f8;
    local_b0 = (longlong *)CONCAT71(local_b0._1_7_,1);
    FUN_1447439e4(puVar9);
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar9 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    goto LAB_144386fec;
  }
  if ((*(longlong *)(lVar5 + 0x128) == 0) || (lVar6 = FUN_141424e9e(param_1[0x51]), lVar6 == 0))
  goto LAB_144386fab;
  lVar14 = *(longlong *)(lVar5 + 0x100);
  plVar15 = *(longlong **)(lVar5 + 0x108);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_70);
  if (local_70 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
LAB_14438758a:
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_141500680(lVar6,*(undefined4 *)(lVar14 + 0xd8));
    FUN_14582babe(param_1,param_2);
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,0);
    }
    uVar11 = 0;
    (**(code **)(*param_1 + 0x108))(param_1,param_2,0);
  }
  else {
    local_d8 = lVar14;
    local_d0 = plVar15;
    (**(code **)(*local_70 + 0x100))(local_70,&local_b0,*(undefined8 *)(lVar5 + 0x128));
    plVar16 = local_a8;
    plVar3 = local_b0;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_a8 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    lVar14 = local_d8;
    plVar15 = local_d0;
    if ((plVar3 == (longlong *)0x0) || (*(char *)((longlong)plVar3 + 0x44) != '\x01'))
    goto LAB_14438758a;
    lVar14 = param_1[0x51];
    local_a8 = *(longlong **)(lVar5 + 0x128);
    local_a0 = *(longlong **)(lVar5 + 0x130);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    local_b0 = param_1;
    local_98 = param_2;
    FUN_1413d6220(&local_90,param_3);
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,5,0x10);
    local_78 = 5;
    *local_80 = &PTR_LAB_14b4f3a00;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_80[2] = lVar12;
    *local_80 = &PTR_FUN_14ba3f720;
    local_80[3] = local_b0;
    local_80[4] = local_a8;
    local_80[5] = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_80[6] = local_98;
    local_80[7] = 0;
    *(undefined4 *)(local_80 + 8) = 0;
    FUN_1413d6220(local_80 + 7,&local_90);
    local_b4 = *(undefined4 *)(local_d8 + 0xd8);
    FUN_145c448e2(lVar14,lVar6,&local_b4,&local_80);
    plVar15 = local_d0;
    if (local_78 == 0) {
LAB_144387505:
      if (local_80 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_80 != (undefined8 *)0x0) {
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      local_78 = 0;
      goto LAB_144387505;
    }
    if (local_88 == 0) {
LAB_144387546:
      if (local_90 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
      goto LAB_144387546;
    }
    plVar3 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar11 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar16 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar15 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_144386fec:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438771c FUN_14438771c body=573 status=ok
// SIG undefined FUN_14438771c(void)

ulonglong FUN_14438771c(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  
  local_68[6] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  lVar8 = *param_1;
  if (param_1[0x57] == param_3) {
    lVar8 = (**(code **)(lVar8 + 0x20))(param_1,param_3);
    if ((lVar8 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x100), lVar3 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0x108);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (((((*(char *)(lVar3 + 0x108) == '\x01') || ((int)param_2[1] == 0)) ||
           (cVar6 = FUN_1489b86b0(*param_5 + 0x20,DAT_14cbf4b30,local_68 + 4), cVar6 == '\0')) ||
          ((iVar7 = FUN_143e6d6b2(*param_5 + 0x20,DAT_14cbf4b30), iVar7 != 0 ||
           (cVar6 = FUN_1489b86b0(*param_5 + 0x20,DAT_14cbf4b38,local_68 + 2), cVar6 == '\0')))) ||
         ((iVar7 = FUN_143e6d6b2(*param_5 + 0x20,DAT_14cbf4b38), iVar7 != 0 ||
          ((cVar6 = FUN_1489b86b0(*param_5 + 0x20,DAT_14cbf4b40,local_68), cVar6 == '\0' ||
           (iVar7 = FUN_143e6d6b2(*param_5 + 0x20,DAT_14cbf4b40), iVar7 != 0)))))) {
LAB_14438779c:
        uVar9 = 0;
        (**(code **)(*param_1 + 0x140))(param_1,param_3,0);
      }
      else {
        lVar8 = *(longlong *)*param_2;
        plVar5 = (longlong *)((longlong *)*param_2)[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (lVar8 == 0) {
          bVar10 = false;
        }
        else {
          lVar8 = FUN_141424e9e(param_1[0x51]);
          bVar10 = lVar8 != 0;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (!bVar10) goto LAB_14438779c;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      goto LAB_1443877e8;
    }
    lVar8 = *param_1;
  }
  uVar9 = 0;
  (**(code **)(lVar8 + 0x140))(param_1,param_3,0);
LAB_1443877e8:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[6] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14438795a FUN_14438795a body=233 status=ok
// SIG undefined FUN_14438795a(void)

undefined4 FUN_14438795a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_48);
  (**(code **)(*local_48 + 0x110))(local_48,&local_38,param_2);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_38 == 0) {
    uVar3 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1,local_38,param_3);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144387a44 FUN_144387a44 body=522 status=ok
// SIG undefined FUN_144387a44(void)

ulonglong FUN_144387a44(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if ((lVar5 == 0) || (lVar6 = *(longlong *)(lVar5 + 0x100), lVar6 == 0)) {
    uVar7 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  }
  else {
    plVar2 = *(longlong **)(lVar5 + 0x108);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (((*(char *)(lVar6 + 0x108) == '\0') || (*(int *)(lVar6 + 0x104) == 0)) ||
       (lVar5 = FUN_141424e9e(param_1[0x51],param_2), lVar5 == 0)) {
      uVar7 = 0;
      (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
      uVar4 = local_38;
    }
    else {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      local_38 = 3;
      *local_40 = &PTR_LAB_14ba3f860;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_40[2] = lVar6;
      *local_40 = &PTR_FUN_14ba3fb70;
      local_40[3] = param_1;
      local_40[4] = param_3;
      uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (local_40 == (undefined8 *)0x0) {
        uVar7 = CONCAT71(uVar8,1);
        uVar4 = local_38;
      }
      else {
        if (*(code **)*local_40 == FUN_145715146) {
          *local_40 = &PTR_FUN_14b478da0;
          plVar3 = (longlong *)local_40[4];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        else {
          (**(code **)*local_40)(local_40,0);
        }
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
        uVar4 = local_38;
        local_38 = 0;
        uVar7 = CONCAT71(uVar8,1);
        if (local_40 != (undefined8 *)0x0) {
          FUN_1400020a8();
          uVar4 = local_38;
        }
      }
    }
    local_38 = uVar4;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 144387c50 FUN_144387c50 body=229 status=ok
// SIG undefined FUN_144387c50(void)

undefined4 FUN_144387c50(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_48);
  (**(code **)(*local_48 + 0x110))(local_48,&local_38,param_2);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_38 == 0) {
    uVar3 = 0;
    (**(code **)(*param_1 + 0x1a0))(param_1,0);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x178))(param_1,local_38,param_3);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144387d36 FUN_144387d36 body=2671 status=ok
// SIG undefined FUN_144387d36(void)

/* WARNING: Removing unreachable block (ram,0x000144388109) */

ulonglong FUN_144387d36(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  undefined8 *unaff_RBP;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 auStack_118 [36];
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  uint *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  uint local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1[0x58] != 0) && (*(int *)(param_1[0x58] + 0x18) == 1)) {
    uVar18 = 0;
    goto LAB_144387dbd;
  }
  if (*(char *)(*param_3 + 0x78) == '\0') {
    lVar7 = FUN_141424e9e(param_1[0x51],param_2);
    if (lVar7 != 0) {
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      lVar23 = *param_3;
      local_98 = (LARGE_INTEGER)(longlong)*(int *)(lVar23 + 0x1c);
      local_88 = 1;
      local_90 = 0;
      puVar24 = (uint *)(lVar23 + 0x38);
      iVar6 = *(int *)(lVar23 + 0x50);
      local_f0 = param_1;
      local_e8 = param_3;
      local_d0 = lVar7;
      if (iVar6 == 0) {
        uVar21 = 1;
        uVar18 = 0;
        iVar22 = 0;
        iVar12 = 0;
      }
      else {
        puVar13 = *(uint **)(lVar23 + 0x48);
        if (*(uint **)(lVar23 + 0x48) == (uint *)0x0) {
          puVar13 = puVar24;
        }
        uVar25 = *puVar13;
        if (uVar25 == 0) {
          iVar22 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar22 = iVar6 + -1;
          }
          uVar18 = 0;
          uVar15 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar15 = uVar18;
          }
          iVar22 = 0;
          do {
            if (uVar15 == uVar18) goto LAB_144388204;
            iVar22 = iVar22 + 0x20;
            uVar25 = puVar13[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar18 = 0;
          iVar22 = 0;
        }
        uVar21 = (ulonglong)(-uVar25 & uVar25);
        uVar15 = uVar21 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar12 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar12) {
          iVar12 = iVar6;
        }
      }
      if (iVar12 < iVar6) {
        uVar25 = 0xffffffff;
        local_e0 = puVar24;
        local_d8 = param_2;
        do {
          uVar15 = uStack_68;
          lVar7 = *(longlong *)(lVar23 + 0x28);
          lVar14 = (longlong)iVar12 * 0x38;
          uVar16 = (ulonglong)*(uint *)(lVar7 + 0x28 + lVar14);
          if (uVar16 < 6) {
            puVar2 = (undefined8 *)(lVar7 + lVar14);
            uVar9 = *(uint *)(&DAT_14ba4186c + uVar16 * 4);
            unaff_RBP = (undefined8 *)(ulonglong)uVar9;
            cVar4 = *(char *)(lVar14 + lVar7 + 8);
            if (cVar4 == '\t') {
              uVar8 = (uint)*(byte *)(puVar2 + 2);
LAB_144388042:
              uVar20 = *puVar2;
              lVar7 = (longlong)(int)uStack_68;
              uVar5 = (int)uStack_68 + 1;
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
              if (uStack_68._4_4_ < uVar5) {
                local_f4 = uVar8;
                FUN_148fa58f6(&local_70,uVar15 & 0xffffffff);
                puVar24 = local_e0;
                uVar8 = local_f4;
              }
              lVar7 = lVar7 * 0x10;
              *(undefined8 *)(local_70 + lVar7) = uVar20;
              *(uint *)(local_70 + 8 + lVar7) = uVar9;
              *(uint *)(local_70 + 0xc + lVar7) = uVar8;
            }
            else if (cVar4 == '\x06') {
              local_a8 = (undefined8 *)0x0;
              uStack_a0 = 0;
              FUN_140b74118();
              unaff_RBP = local_a8;
              local_c8 = (undefined8 *)*puVar2;
              local_b8 = (void *)0x0;
              lVar7 = (longlong)(int)uStack_a0;
              local_b0 = CONCAT44(local_b0._4_4_,(int)uStack_a0);
              local_c0 = uVar9;
              if (lVar7 == 0) {
                local_b0 = uStack_a0 & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_b8,uStack_a0 & 0xffffffff,0);
                memcpy(local_b8,unaff_RBP,lVar7 * 2);
              }
              lVar7 = (longlong)(int)uStack_78;
              uVar9 = (int)uStack_78 + 1;
              uStack_78 = CONCAT44(uStack_78._4_4_,uVar9);
              if (uStack_78._4_4_ < uVar9) {
                FUN_148fa597c(&local_80);
              }
              lVar7 = lVar7 * 0x20;
              *(uint *)(local_80 + 8 + lVar7) = local_c0;
              *(undefined8 **)(local_80 + lVar7) = local_c8;
              *(undefined8 *)(local_80 + 0x10 + lVar7) = 0;
              *(void **)(local_80 + 0x10 + lVar7) = local_b8;
              *(undefined4 *)(local_80 + 0x18 + lVar7) = (undefined4)local_b0;
              *(undefined4 *)(local_80 + 0x1c + lVar7) = local_b0._4_4_;
              local_b0 = 0;
              local_b8 = (void *)0x0;
              puVar24 = local_e0;
              if (local_a8 != (undefined8 *)0x0) {
                FUN_1400020a8();
                puVar24 = local_e0;
              }
            }
            else if (cVar4 == '\x01') {
              uVar8 = *(uint *)(puVar2 + 2);
              goto LAB_144388042;
            }
          }
          uVar25 = uVar25 & ~(uint)uVar21;
          puVar13 = *(uint **)(lVar23 + 0x48);
          if (*(uint **)(lVar23 + 0x48) == (uint *)0x0) {
            puVar13 = puVar24;
          }
          iVar6 = *(int *)(lVar23 + 0x50);
          iVar12 = (int)uVar18;
          lVar7 = (longlong)iVar12;
          uVar9 = puVar13[lVar7] & uVar25;
          if (uVar9 == 0) {
            iVar10 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar10 = iVar6 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = iVar10;
            if (iVar10 < iVar12) {
              iVar11 = iVar12;
            }
            if (iVar10 <= iVar12) break;
            lVar14 = 0;
            while( true ) {
              iVar22 = iVar22 + 0x20;
              uVar9 = puVar13[lVar7 + lVar14 + 1];
              if (uVar9 != 0) break;
              lVar14 = lVar14 + 1;
              if (iVar11 - lVar7 == lVar14) goto LAB_1443881f7;
            }
            uVar18 = (ulonglong)(iVar12 + (int)lVar14 + 1);
            uVar25 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar9 & uVar9);
          uVar15 = uVar21 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar12 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        } while (iVar12 < iVar6);
LAB_1443881f7:
        lVar23 = *local_e8;
        param_2 = local_d8;
      }
LAB_144388204:
      plVar3 = local_e8;
      FUN_145fee2f2(*(undefined8 *)(lVar23 + 8),*(undefined4 *)(lVar23 + 0x10));
      *(undefined4 *)(lVar23 + 0x10) = 0;
      if (*(int *)(lVar23 + 0x14) != 0) {
        FUN_148fa5a02(lVar23 + 8,0);
      }
      lVar7 = *plVar3;
      plVar19 = (longlong *)plVar3[1];
      if (plVar19 == (longlong *)0x0) {
        local_f0[0x58] = lVar7;
        plVar26 = (longlong *)local_f0[0x59];
        if (plVar26 != (longlong *)0x0) {
          local_f0[0x59] = 0;
LAB_14438855c:
          LOCK();
          plVar19 = plVar26 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar1 = (int *)((longlong)plVar26 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
joined_r0x0001443882ab:
            if (iVar6 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        local_f0[0x58] = lVar7;
        plVar26 = (longlong *)local_f0[0x59];
        if (plVar19 == plVar26) {
          LOCK();
          plVar26 = plVar19 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar26 = plVar19;
            goto joined_r0x0001443882ab;
          }
        }
        else {
          local_f0[0x59] = (longlong)plVar19;
          if (plVar26 != (longlong *)0x0) goto LAB_14438855c;
        }
      }
      *(undefined4 *)(*plVar3 + 0x18) = 1;
      lVar7 = local_f0[0x51];
      plVar19 = *(longlong **)(param_2 + 0x10);
      if (plVar19 == (longlong *)0x0) {
LAB_14438859a:
        plVar19 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar19[1];
        do {
          if (iVar6 == 0) goto LAB_14438859a;
          LOCK();
          iVar22 = (int)plVar19[1];
          bVar27 = iVar6 == iVar22;
          if (bVar27) {
            *(int *)(plVar19 + 1) = iVar6 + 1;
            iVar22 = iVar6;
          }
          iVar6 = iVar22;
          UNLOCK();
        } while (!bVar27);
      }
      uVar20 = 0;
      if (plVar19 != (longlong *)0x0) {
        uVar20 = *(undefined8 *)(param_2 + 8);
      }
      lVar23 = *plVar3;
      plVar3 = (longlong *)plVar3[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      FUN_1446efa72(&local_c8,0,4,0x10);
      local_c0 = 4;
      *local_c8 = &PTR_LAB_14ba3fc50;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      local_c8[2] = lVar17;
      *local_c8 = &PTR_FUN_14ba3fbe0;
      local_c8[3] = local_f0;
      local_c8[4] = uVar20;
      local_c8[5] = plVar19;
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
      }
      local_c8[6] = lVar23;
      local_c8[7] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      FUN_148f9d836(lVar7,local_d0,&local_98,&local_c8);
      if (local_c0 == 0) {
LAB_1443886b6:
        if (local_c8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_c8 != (undefined8 *)0x0) {
        (**(code **)*local_c8)(local_c8,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        local_c0 = 0;
        goto LAB_1443886b6;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar26 = plVar3 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
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
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar19 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      FUN_148f9d934(&local_98);
      uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      goto LAB_144387dbd;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
    lVar7 = *param_3;
    FUN_145fee2f2(*(undefined8 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x10));
    *(undefined4 *)(lVar7 + 0x10) = 0;
    if (*(int *)(lVar7 + 0x14) != 0) {
      FUN_148fa5a02(lVar7 + 8,0);
    }
    lVar7 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      param_1[0x58] = lVar7;
      plVar19 = (longlong *)param_1[0x59];
      if (plVar19 != (longlong *)0x0) {
        param_1[0x59] = 0;
LAB_1443882c2:
        LOCK();
        plVar3 = plVar19 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x000144387f01:
          if (iVar6 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      param_1[0x58] = lVar7;
      plVar19 = (longlong *)param_1[0x59];
      if (plVar3 == plVar19) {
        LOCK();
        plVar19 = plVar3 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar19 = plVar3;
          goto joined_r0x000144387f01;
        }
      }
      else {
        param_1[0x59] = (longlong)plVar3;
        if (plVar19 != (longlong *)0x0) goto LAB_1443882c2;
      }
    }
    QueryPerformanceCounter(&local_98);
    param_1[0x56] = (longlong)((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0);
    lVar7 = param_1[0x54];
    lVar23 = 0;
    do {
      iVar6 = rand();
      *(char *)(lVar7 + 0x30 + lVar23) = (char)iVar6;
      lVar23 = lVar23 + 1;
    } while (lVar23 != 8);
    local_c8 = (undefined8 *)0x0;
    local_c0 = 0;
    FUN_1446efa72(&local_c8,0,3,0x10);
    local_c0 = 3;
    *local_c8 = &PTR_LAB_14ba417f0;
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar23 == 0) {
      LOCK();
      UNLOCK();
      lVar23 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_c8[2] = lVar23;
    *local_c8 = &PTR_FUN_14ba3fdc0;
    local_c8[3] = param_1;
    local_c8[4] = FUN_1443887a6;
    *(undefined4 *)(local_c8 + 5) = 0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0._0_4_ = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
    *local_a8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar23 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar23 == 0) {
      LOCK();
      UNLOCK();
      lVar23 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_a8[2] = lVar23;
    *local_a8 = &PTR_FUN_14ba3fe30;
    local_a8[3] = param_1;
    local_a8[4] = FUN_1443888e4;
    *(undefined4 *)(local_a8 + 5) = 0;
    FUN_1489bb0ca(&local_98,0x400);
    plVar3 = (longlong *)param_1[0x54];
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_98,plVar3[6]);
    uVar25 = -(uint)(0.0 < *(float *)(*param_3 + 0x84));
    *(uint *)(param_1[0x54] + 0x14) =
         ~uVar25 & 0x40a00000 | (uint)*(float *)(*param_3 + 0x84) & uVar25;
    cVar4 = (**(code **)(*(longlong *)param_1[0x54] + 0x20))
                      ((longlong *)param_1[0x54],&local_98,&local_c8,&local_a8);
    if (cVar4 == '\0') {
      if ((int)((longlong *)param_1[0x54])[5] == 2) {
        (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
      }
      FUN_148f9d4e8(param_1);
    }
    else {
      *(undefined4 *)(*param_3 + 0x18) = 1;
    }
    if (local_98.QuadPart != 0) {
      FUN_1400020a8();
    }
    if ((int)uStack_a0 == 0) {
LAB_1443884ec:
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      goto LAB_1443884ec;
    }
    if (local_c0 == 0) {
LAB_144388532:
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_c8 != (undefined8 *)0x0) {
      (**(code **)*local_c8)(local_c8,0);
      FUN_1446efa72(&local_c8,0,0,0x10);
      local_c0 = 0;
      goto LAB_144388532;
    }
    uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar4 != '\0') goto LAB_144387dbd;
  }
  *(undefined4 *)(*param_3 + 0x18) = 3;
  uVar18 = 0;
  (**(code **)(*param_1 + 0x1a0))(param_1,0);
LAB_144387dbd:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 1443887a6 FUN_1443887a6 body=316 status=ok
// SIG undefined FUN_1443887a6(void)

void FUN_1443887a6(longlong param_1,LARGE_INTEGER param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x10);
    *(uint *)(lVar3 + 0x10) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x14) < iVar2 + 1U) {
      FUN_145fee31c((longlong *)(lVar3 + 8),iVar2);
    }
    lVar3 = *(longlong *)(lVar3 + 8);
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x120);
    *puVar1 = &PTR_FUN_14b4c3b18;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_145ad316c(puVar1 + 5);
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 9999;
    QueryPerformanceCounter(&local_68);
    *(int *)(puVar1 + 0x23) =
         (int)((((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0) -
               *(double *)(param_1 + 0x2b0)) * 1000.0);
    local_5c = 0;
    local_58 = 0;
    local_68 = param_2;
    local_60 = param_3;
    FUN_148f9e3cc(&local_68,lVar3 + (longlong)iVar2 * 0x120);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443888e4 FUN_1443888e4 body=161 status=ok
// SIG undefined FUN_1443888e4(void)

void FUN_1443888e4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((int)((longlong *)param_1[0x54])[5] == 2) {
    (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
  }
  FUN_148f9d4e8(param_1);
  plVar3 = (longlong *)param_1[0x58];
  if (plVar3 != (longlong *)0x0) {
    if (0 < (int)plVar3[2]) {
      (**(code **)(*plVar3 + 8))();
      plVar3 = (longlong *)param_1[0x58];
    }
    *(undefined4 *)(plVar3 + 3) = 2;
    param_1[0x58] = 0;
    plVar3 = (longlong *)param_1[0x59];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x59] = 0;
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
  }
                    /* WARNING: Could not recover jumptable at 0x000144388982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,1);
  return;
}



// FUNCTION 144388986 FUN_144388986 body=830 status=ok
// SIG undefined FUN_144388986(void)

void FUN_144388986(longlong *param_1,longlong param_2,longlong *param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  uint local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = FUN_141424e9e(param_1[0x51]);
  if (lVar10 == 0) {
    *(undefined4 *)(*param_5 + 0x18) = 3;
    FUN_148f9da6e(param_1);
    goto LAB_1443889ed;
  }
  if (((int)param_4 < 0) || ((int)param_3[1] <= (int)param_4)) {
    *(undefined4 *)(*param_5 + 0x18) = 2;
    (**(code **)(*param_1 + 0x1a0))(param_1,1);
    goto LAB_1443889ed;
  }
  lVar4 = param_1[0x51];
  local_88 = *(longlong **)(param_2 + 0x10);
  if (local_88 == (longlong *)0x0) {
LAB_144388a50:
    local_88 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)local_88[1];
    do {
      if (iVar9 == 0) goto LAB_144388a50;
      LOCK();
      iVar8 = (int)local_88[1];
      bVar13 = iVar9 == iVar8;
      if (bVar13) {
        *(int *)(local_88 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar13);
  }
  local_90 = 0;
  if (local_88 != (longlong *)0x0) {
    local_90 = *(undefined8 *)(param_2 + 8);
  }
  local_80 = *param_5;
  local_78 = (longlong *)param_5[1];
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_70 = (void *)0x0;
  local_68 = (int)param_3[1];
  lVar12 = (longlong)local_68;
  pvVar5 = (void *)*param_3;
  local_98 = param_1;
  if (lVar12 == 0) {
    local_64 = 0;
  }
  else {
    FUN_148fa5a74(&local_70,local_68);
    memcpy(local_70,pvVar5,lVar12 << 2);
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_60 = param_4;
  FUN_1446efa72(&local_58,0,6,0x10);
  puVar7 = local_58;
  pvVar5 = local_70;
  local_50 = 6;
  *local_58 = &PTR_LAB_14ba3ff10;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_58[2] = lVar11;
  *local_58 = &PTR_FUN_14ba3fea0;
  local_58[3] = local_98;
  local_58[4] = local_90;
  local_58[5] = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_58[6] = local_80;
  local_58[7] = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_58[8] = 0;
  lVar12 = (longlong)local_68;
  *(int *)(local_58 + 9) = local_68;
  if (lVar12 == 0) {
    *(undefined4 *)((longlong)local_58 + 0x4c) = 0;
  }
  else {
    puVar1 = local_58 + 8;
    FUN_148fa5a74(puVar1,local_68);
    memcpy((void *)*puVar1,pvVar5,lVar12 << 2);
  }
  *(uint *)(puVar7 + 10) = local_60;
  FUN_148f9d970(lVar4,lVar10,(ulonglong)param_4 * 4 + *param_3,&local_58);
  if (local_50 == 0) {
LAB_144388c2b:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_144388c2b;
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_78 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1443889ed:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144388cc6 FUN_144388cc6 body=168 status=ok
// SIG undefined FUN_144388cc6(void)

ulonglong FUN_144388cc6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  lVar4 = param_1[0x58];
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) != 1)) {
    uVar5 = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x78) == '\x01') {
      (**(code **)(*(longlong *)param_1[0x54] + 0x38))();
      FUN_148f9d4e8(param_1);
      lVar4 = param_1[0x58];
    }
    *(undefined4 *)(lVar4 + 0x18) = 3;
    param_1[0x58] = 0;
    plVar3 = (longlong *)param_1[0x59];
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (plVar3 != (longlong *)0x0) {
      param_1[0x59] = 0;
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
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,uVar5 & 0xffffffff);
  return uVar5 & 0xffffffff;
}



// FUNCTION 144388d6e FUN_144388d6e body=243 status=ok
// SIG undefined FUN_144388d6e(void)

undefined4 FUN_144388d6e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_50);
  (**(code **)(*local_50 + 0x110))(local_50,&local_40,param_2);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_40 == 0) {
    (**(code **)(*param_1 + 0x230))(param_1,param_3,5);
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x208))(param_1,local_40,param_3,param_4);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144388e62 FUN_144388e62 body=2674 status=ok
// SIG undefined FUN_144388e62(void)

ulonglong FUN_144388e62(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 **ppuVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 **ppuVar25;
  int iVar26;
  undefined1 auStack_1c8 [32];
  void **local_1a8;
  undefined8 **local_1a0;
  longlong *local_190;
  uint local_188;
  int local_184;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  uint *local_168;
  ulonglong local_160;
  undefined1 local_158 [20];
  undefined1 local_144 [4];
  longlong local_140;
  undefined8 **local_138;
  undefined8 *local_130;
  void **local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  void *local_b0;
  longlong *local_a8;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if (lVar6 == 0) {
    lVar6 = (**(code **)*param_1)(param_1,param_3,param_4);
    plVar9 = (longlong *)FUN_14001cc68(0x110);
    memset(plVar9,0,0x110);
    FUN_145b20dba(plVar9);
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14ba400f0;
    plVar10[2] = (longlong)plVar9;
    local_b0 = *(void **)(param_4 + 0x100);
    plVar19 = *(longlong **)(param_4 + 0x108);
    local_a8 = plVar19;
    if (plVar19 == (longlong *)0x0) {
      FUN_14666cb78(plVar9,&local_b0);
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      FUN_14666cb78(plVar9);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    if (plVar10 == (longlong *)0x0) {
      *(longlong **)(lVar6 + 0x100) = plVar9;
      plVar19 = *(longlong **)(lVar6 + 0x108);
      if (plVar19 != (longlong *)0x0) {
        *(undefined8 *)(lVar6 + 0x108) = 0;
LAB_144389043:
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
joined_r0x000144389033:
          if (iVar4 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *(longlong **)(lVar6 + 0x100) = plVar9;
      plVar19 = *(longlong **)(lVar6 + 0x108);
      if (plVar10 == plVar19) {
        LOCK();
        plVar19 = plVar10 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
          plVar19 = plVar10;
          goto joined_r0x000144389033;
        }
      }
      else {
        *(longlong **)(lVar6 + 0x108) = plVar10;
        if (plVar19 != (longlong *)0x0) goto LAB_144389043;
      }
    }
    FUN_1459a3e4e(&local_140,param_2);
    ppuVar20 = local_138;
    if (local_138 == (undefined8 **)0x0) {
      *(longlong *)(lVar6 + 0x128) = local_140;
      ppuVar25 = *(undefined8 ***)(lVar6 + 0x130);
      if (ppuVar25 != (undefined8 **)0x0) {
        *(undefined8 *)(lVar6 + 0x130) = 0;
LAB_1443890c5:
        LOCK();
        ppuVar3 = ppuVar25 + 1;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (*(int *)ppuVar3 == 0) {
          (*(code *)**ppuVar25)(ppuVar25);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar25 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
joined_r0x0001443890f4:
          if (iVar4 == 0) {
            (*(code *)(*ppuVar25)[2])(ppuVar25);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_138 + 1) = *(int *)(local_138 + 1) + 1;
      UNLOCK();
      *(longlong *)(lVar6 + 0x128) = local_140;
      ppuVar25 = *(undefined8 ***)(lVar6 + 0x130);
      if (local_138 == ppuVar25) {
        LOCK();
        ppuVar25 = local_138 + 1;
        *(int *)ppuVar25 = *(int *)ppuVar25 + -1;
        UNLOCK();
        if (*(int *)ppuVar25 == 0) {
          (*(code *)**local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2;
          UNLOCK();
          ppuVar25 = ppuVar20;
          goto joined_r0x0001443890f4;
        }
      }
      else {
        *(undefined8 ***)(lVar6 + 0x130) = local_138;
        if (ppuVar25 != (undefined8 **)0x0) goto LAB_1443890c5;
      }
    }
    uVar7 = *(undefined8 *)(param_4 + 8);
    lVar11 = *(longlong *)(param_4 + 0x10);
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar19 = *(longlong **)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 8) = uVar7;
    *(longlong *)(lVar6 + 0x10) = lVar11;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar19 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar19)();
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
      }
    }
    ppuVar25 = local_138;
    if (*(char *)(lVar6 + 0x3a) != '\0') {
      plVar19 = (longlong *)param_1[0x54];
      (**(code **)(**(longlong **)(lVar6 + 8) + 0x30))(*(longlong **)(lVar6 + 8),&local_b0);
      FUN_140ba7826(local_158,L"Shift:",&local_b0);
      (**(code **)(*plVar19 + 0x28))(plVar19,local_158);
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x230))(param_1,param_3,0);
      if (local_138 != (undefined8 **)0x0) {
        LOCK();
        ppuVar25 = local_138 + 1;
        *(int *)ppuVar25 = *(int *)ppuVar25 + -1;
        UNLOCK();
        if (*(int *)ppuVar25 == 0) {
          (*(code *)**local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_138)[2])(local_138);
          }
        }
      }
      uVar23 = CONCAT71((int7)((ulonglong)ppuVar20 >> 8),1);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar10 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      goto LAB_1443892ea;
    }
    if (local_138 != (undefined8 **)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = *(int *)(local_138 + 1) + 1;
      UNLOCK();
    }
    local_190 = plVar9;
    if (local_140 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_141424e9e();
    }
    if (ppuVar25 != (undefined8 **)0x0) {
      LOCK();
      ppuVar3 = ppuVar25 + 1;
      *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
      UNLOCK();
      if (*(int *)ppuVar3 == 0) {
        (*(code *)**ppuVar25)();
        LOCK();
        piVar2 = (int *)((longlong)ppuVar25 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppuVar25)[2])();
        }
      }
    }
    if (lVar11 == 0) {
      (**(code **)(*param_1 + 0x28))(param_1,param_3);
    }
    else {
      iVar4 = *(int *)(lVar6 + 0xd8);
      local_180 = lVar11;
      if (iVar4 == 0) {
        uVar21 = 1;
        uVar23 = 0;
        iVar26 = 0;
        iVar15 = 0;
      }
      else {
        puVar16 = *(uint **)(lVar6 + 0xd0);
        if (*(uint **)(lVar6 + 0xd0) == (uint *)0x0) {
          puVar16 = (uint *)(lVar6 + 0xc0);
        }
        uVar22 = *puVar16;
        if (uVar22 == 0) {
          iVar26 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar26 = iVar4 + -1;
          }
          uVar23 = 0;
          uVar17 = (ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            uVar17 = uVar23;
          }
          iVar26 = 0;
          do {
            if (uVar17 == uVar23) goto LAB_1443895fa;
            iVar26 = iVar26 + 0x20;
            uVar22 = puVar16[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar23 = 0;
          iVar26 = 0;
        }
        uVar21 = (ulonglong)(-uVar22 & uVar22);
        uVar17 = uVar21 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar15) {
          iVar15 = iVar4;
        }
      }
      if (iVar15 < iVar4) {
        local_170 = local_190 + 0xb;
        local_178 = plVar10;
        local_168 = (uint *)(lVar6 + 0xc0);
        uVar22 = 0xffffffff;
        do {
          local_188 = uVar22;
          lVar24 = (longlong)iVar15 * 0x68;
          lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0xb0) + lVar24);
          plVar19 = *(longlong **)(*(longlong *)(lVar6 + 0xb0) + 8 + lVar24);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          local_184 = iVar26;
          local_160 = uVar23;
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = FUN_141424e9e(param_1[0x51]);
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar19 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          local_e8 = 0;
          local_e0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_dc = 0xffffffff00000080;
          local_d4 = 0;
          local_c8 = 0;
          local_c0 = 0;
          FUN_1412c5fc6(&local_108,*(longlong *)(lVar6 + 0xb0) + lVar24 + 0x10);
          FUN_1443853a8(&local_b0,&local_108);
          local_144 = (undefined1  [4])FUN_140b71325(lVar11 + 0x228);
          local_130 = (undefined8 *)local_144;
          local_128 = &local_b0;
          FUN_148fa39b8(local_170,&local_11c,&local_130);
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1407a3a68(&local_b0);
          uVar22 = local_188 & ~(uint)uVar21;
          puVar16 = *(uint **)(lVar6 + 0xd0);
          if (*(uint **)(lVar6 + 0xd0) == (uint *)0x0) {
            puVar16 = local_168;
          }
          iVar4 = *(int *)(lVar6 + 0xd8);
          iVar15 = (int)local_160;
          lVar11 = (longlong)iVar15;
          uVar12 = puVar16[lVar11] & uVar22;
          uVar23 = local_160;
          iVar26 = local_184;
          plVar10 = local_178;
          if (uVar12 == 0) {
            iVar13 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar13 = iVar4 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar14 = iVar13;
            if (iVar13 < iVar15) {
              iVar14 = iVar15;
            }
            if (iVar13 <= iVar15) break;
            lVar24 = 0;
            while( true ) {
              iVar26 = iVar26 + 0x20;
              uVar12 = puVar16[lVar11 + lVar24 + 1];
              if (uVar12 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar14 - lVar11 == lVar24) goto LAB_1443895fa;
            }
            uVar23 = (ulonglong)(iVar15 + (int)lVar24 + 1);
            uVar22 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar12 & uVar12);
          uVar17 = uVar21 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar15 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        } while (iVar15 < iVar4);
      }
LAB_1443895fa:
      plVar19 = local_190;
      if (param_1[0x57] == param_3) {
        local_118 = 0;
        uStack_110 = 0;
        FUN_148f9d39e(param_1,param_3);
      }
      plVar9 = (longlong *)(**(code **)(*plVar19 + 0x38))(plVar19);
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_b0);
      local_11c = FUN_14119d5f0(&local_b0);
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_144[0] = *(undefined1 *)(lVar6 + 0x3e);
      local_b0 = (void *)0x0;
      uVar22 = *(uint *)(plVar19 + 0x1f);
      _Src = (void *)plVar19[0x1e];
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,uVar22);
      if ((longlong)(int)uVar22 == 0) {
        local_a8 = (longlong *)(ulonglong)uVar22;
      }
      else {
        FUN_1446dd670(&local_b0,uVar22,0);
        memcpy(local_b0,_Src,(longlong)(int)uVar22 * 2);
      }
      ppuVar25 = local_138;
      lVar6 = param_1[0x51];
      if (local_138 != (undefined8 **)0x0) {
        LOCK();
        *(int *)(local_138 + 1) = *(int *)(local_138 + 1) + 1;
        UNLOCK();
      }
      ppuVar20 = &local_130;
      local_130 = (undefined8 *)0x0;
      local_128 = (void **)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_1446efa72(ppuVar20,0,4,0x10);
      lVar11 = local_180;
      local_128 = (void **)CONCAT44(local_128._4_4_,4);
      *local_130 = &PTR_LAB_14b4f3a00;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar24 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar24 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar24;
      local_130[2] = lVar18;
      *local_130 = &PTR_FUN_14ba40110;
      local_130[3] = param_1;
      local_130[4] = local_140;
      local_130[5] = ppuVar25;
      local_1a8 = &local_b0;
      local_1a0 = ppuVar20;
      if (ppuVar25 == (undefined8 **)0x0) {
        local_130[6] = param_3;
        FUN_1461ca274(lVar6,local_180,&local_11c,local_144);
        if ((int)local_128 != 0) {
          if (local_130 == (undefined8 *)0x0) goto LAB_144389894;
          (**(code **)*local_130)(local_130,0);
          FUN_1446efa72(&local_130,0,0,0x10);
          local_128 = (void **)((ulonglong)local_128 & 0xffffffff00000000);
        }
        if (local_130 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        LOCK();
        *(int *)(ppuVar25 + 1) = *(int *)(ppuVar25 + 1) + 1;
        UNLOCK();
        local_130[6] = param_3;
        FUN_1461ca274(lVar6,local_180,&local_11c,local_144);
        if ((int)local_128 == 0) {
LAB_144389868:
          if (local_130 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_130 != (undefined8 *)0x0) {
          (**(code **)*local_130)(local_130,0);
          FUN_1446efa72(&local_130,0,0,0x10);
          local_128 = (void **)((ulonglong)local_128 & 0xffffffff00000000);
          goto LAB_144389868;
        }
        LOCK();
        ppuVar3 = ppuVar25 + 1;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (*(int *)ppuVar3 == 0) {
          (*(code *)**ppuVar25)(ppuVar25);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar25 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppuVar25)[2])(ppuVar25);
          }
        }
      }
LAB_144389894:
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_138 != (undefined8 **)0x0) {
      LOCK();
      ppuVar25 = local_138 + 1;
      *(int *)ppuVar25 = *(int *)ppuVar25 + -1;
      UNLOCK();
      if (*(int *)ppuVar25 == 0) {
        (*(code *)**local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_138)[2])(local_138);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar10 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    uVar23 = CONCAT71((int7)((ulonglong)ppuVar20 >> 8),1);
    if (lVar11 != 0) goto LAB_1443892ea;
LAB_1443892d3:
    lVar6 = *param_1;
    uVar7 = 5;
  }
  else {
    if ((*(longlong *)(lVar6 + 0x100) == 0) || (*(longlong **)(param_4 + 0x100) == (longlong *)0x0))
    goto LAB_1443892d3;
    uVar7 = (**(code **)(**(longlong **)(param_4 + 0x100) + 0x38))();
    puVar8 = (undefined8 *)(**(code **)(**(longlong **)(lVar6 + 0x100) + 0x38))();
    cVar5 = (**(code **)*puVar8)(puVar8,uVar7);
    if (cVar5 == '\0') goto LAB_1443892d3;
    lVar6 = *param_1;
    uVar7 = 4;
  }
  (**(code **)(lVar6 + 0x230))(param_1,param_3,uVar7);
  uVar23 = 0;
LAB_1443892ea:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 1443898d6 FUN_1443898d6 body=278 status=ok
// SIG undefined FUN_1443898d6(void)

undefined4 FUN_1443898d6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_48);
  (**(code **)(*local_48 + 0x110))(local_48,&local_38,param_2);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38 == 0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x308))(param_1,param_2,0,&local_48);
    FUN_145fee2f2(local_48,(ulonglong)plStack_40 & 0xffffffff);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x2e0))(param_1,local_38,param_3);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443899ee FUN_1443899ee body=228 status=ok
// SIG undefined FUN_1443899ee(void)

undefined4 FUN_1443899ee(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)param_1[0x51] + 0x80))((longlong *)param_1[0x51],&local_50);
  (**(code **)(*local_50 + 0x110))(local_50,&local_40,param_2);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_40 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 800))(param_1,local_40,param_3,param_4);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144389ad4 FUN_144389ad4 body=651 status=ok
// SIG undefined FUN_144389ad4(void)

ulonglong FUN_144389ad4(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  longlong *local_80;
  undefined8 *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuVar6 = (undefined8 **)FUN_141424e9e(param_1[0x51]);
  if (((ppuVar6 == (undefined8 **)0x0) ||
      (lVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_3), lVar7 == 0)) ||
     (plVar8 = *(longlong **)(lVar7 + 0x100), plVar8 == (longlong *)0x0)) {
    uVar10 = 0;
    goto LAB_144389b2f;
  }
  local_80 = *(longlong **)(lVar7 + 0x108);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x38))();
  (**(code **)(*plVar8 + 0x30))(plVar8,&local_68);
  local_4c = FUN_14119d5f0(&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  lVar7 = param_4[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = *param_4;
    lVar9 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar9) + 0x30))(*(longlong **)(lVar3 + lVar9),&local_78);
      iVar4 = FUN_140b71325(&local_78);
      uVar10 = uStack_60;
      if (iVar4 != 0) {
        lVar11 = (longlong)(int)uStack_60;
        uVar5 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
        if (uStack_60._4_4_ < uVar5) {
          FUN_14657e744(&local_68,uVar10 & 0xffffffff);
        }
        *(int *)(local_68 + lVar11 * 4) = iVar4;
      }
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar9);
  }
  lVar7 = param_1[0x51];
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  local_70 = 2;
  *local_78 = &PTR_LAB_14b4f3a00;
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
  local_78[2] = lVar9;
  *local_78 = &PTR_FUN_14ba40440;
  local_88 = &local_78;
  FUN_148f9ddce(lVar7,ppuVar6,&local_4c,&local_68);
  plVar8 = local_80;
  if (local_70 == 0) {
LAB_144389c7c:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    ppuVar6 = &local_78;
    FUN_1446efa72(ppuVar6,0,0,0x10);
    local_70 = 0;
    goto LAB_144389c7c;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar10 = CONCAT71((int7)((ulonglong)ppuVar6 >> 8),1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_144389b2f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 144389d60 FUN_144389d60 body=191 status=ok
// SIG undefined FUN_144389d60(void)

ulonglong FUN_144389d60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if ((lVar6 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x100), lVar3 == 0)) {
    uVar7 = 0;
  }
  else {
    plVar4 = *(longlong **)(lVar6 + 0x108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(char *)(lVar6 + 0x3a) == '\x01') {
      iVar5 = *(int *)(lVar3 + 0xc0) + -1;
      if (*(int *)(lVar3 + 0xc0) == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(param_3,*(undefined8 *)(lVar3 + 0xb8),iVar5);
      FUN_1400020e8(param_3,L"?bIsLanMatch",0xc);
    }
    else {
      iVar5 = *(int *)(lVar3 + 0xb0) + -1;
      if (*(int *)(lVar3 + 0xb0) == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(param_3,*(undefined8 *)(lVar3 + 0xa8),iVar5);
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 144389e20 FUN_144389e20 body=183 status=ok
// SIG undefined FUN_144389e20(void)

bool FUN_144389e20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x100);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_2 + 0x108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(char *)(param_2 + 0x3a) == '\x01') {
      iVar5 = *(int *)(lVar3 + 0xc0) + -1;
      if (*(int *)(lVar3 + 0xc0) == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(param_4,*(undefined8 *)(lVar3 + 0xb8),iVar5);
      FUN_1400020e8(param_4,L"?bIsLanMatch",0xc);
    }
    else {
      iVar5 = *(int *)(lVar3 + 0xb0) + -1;
      if (*(int *)(lVar3 + 0xb0) == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(param_4,*(undefined8 *)(lVar3 + 0xa8),iVar5);
    }
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
  return lVar3 != 0;
}



// FUNCTION 144389ed8 FUN_144389ed8 body=1412 status=ok
// SIG undefined FUN_144389ed8(void)

void FUN_144389ed8(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  void **local_e8;
  undefined8 **local_e0;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined8 *local_90;
  int local_88;
  undefined1 local_7d;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x100) == 0)) {
LAB_14438a172:
    plVar8 = (longlong *)*param_4;
    if (plVar8 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar8 + 0x60))(plVar8,param_2,5);
    }
    goto LAB_14438a195;
  }
  if (*(char *)(lVar6 + 0x3a) != '\0') {
    if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
    goto LAB_14438a195;
  }
  FUN_1459a3e4e(&local_58,param_2);
  local_c8 = *(longlong *)(lVar6 + 0x100);
  local_d0 = *(longlong **)(lVar6 + 0x108);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  lVar7 = local_c8 + 8;
  local_68 = local_58;
  local_60 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*local_58 + 0x40))();
  iVar5 = FUN_140b6c20e(lVar7,uVar4,&local_68);
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar3 = local_50;
  plVar8 = local_d0;
  if (iVar5 == -1) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    if (local_58 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141424e9e(param_1[0x51]);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    plVar8 = local_d0;
    if (lVar7 == 0) {
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      goto LAB_14438a172;
    }
    local_78 = (void *)0x0;
    local_70 = *(int *)(local_c8 + 0xf8);
    lVar10 = (longlong)local_70;
    _Src = *(void **)(local_c8 + 0xf0);
    if (lVar10 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar10 * 2);
    }
    local_7c = *(undefined4 *)(local_c8 + 0xd8);
    local_7d = *(undefined1 *)(lVar6 + 0x3e);
    lVar6 = param_1[0x51];
    local_b8 = local_58;
    local_b0 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    local_c0 = param_1;
    local_a8 = param_3;
    FUN_148fa736c(&local_a0,param_4);
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,5,0x10);
    local_88 = 5;
    *local_90 = &PTR_LAB_14b4f3a00;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_90[2] = lVar9;
    *local_90 = &PTR_FUN_14ba40670;
    local_90[3] = local_c0;
    local_90[4] = local_b8;
    local_90[5] = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_90[6] = local_a8;
    local_90[7] = 0;
    *(undefined4 *)(local_90 + 8) = 0;
    FUN_148fa736c(local_90 + 7,&local_a0);
    local_e8 = &local_78;
    local_e0 = &local_90;
    FUN_1461ca274(lVar6,lVar7,&local_7c,&local_7d);
    plVar8 = local_d0;
    if (local_88 == 0) {
LAB_14438a39d:
      if (local_90 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
      goto LAB_14438a39d;
    }
    if (local_98 == 0) {
LAB_14438a3de:
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
      goto LAB_14438a3de;
    }
    plVar3 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar6 = *plVar8;
          goto LAB_14438a084;
        }
      }
    }
  }
  else {
    plVar3 = (longlong *)*param_4;
    if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,4);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar6 = *plVar8;
LAB_14438a084:
          (**(code **)(lVar6 + 0x10))(plVar8);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_14438a195:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438a480 FUN_14438a480 body=1140 status=ok
// SIG undefined FUN_14438a480(void)

void FUN_14438a480(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 *local_80;
  int local_78;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x100) != 0)) {
    if (*(char *)(lVar9 + 0x3a) != '\0') {
      if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
      goto LAB_14438a69c;
    }
    FUN_1459a3e4e(&local_58,param_2);
    local_b8 = *(longlong *)(lVar9 + 0x100);
    plVar4 = *(longlong **)(lVar9 + 0x108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar9 = local_b8 + 8;
    local_68 = local_58;
    local_60 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar7 = (**(code **)(*local_58 + 0x40))();
    iVar8 = FUN_140b6c20e(lVar9,uVar7,&local_68);
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_50;
    if (iVar8 != -1) {
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      if (local_58 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_141424e9e(param_1[0x51]);
      }
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (lVar9 != 0) {
        local_6c = *(undefined4 *)(local_b8 + 0xd8);
        lVar5 = param_1[0x51];
        local_a8 = local_58;
        local_a0 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        local_b0 = param_1;
        local_98 = param_3;
        FUN_141532ff6(&local_90,param_4);
        local_80 = (undefined8 *)0x0;
        local_78 = 0;
        FUN_1446efa72(&local_80,0,5,0x10);
        local_78 = 5;
        *local_80 = &PTR_LAB_14b4f3a00;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_80[2] = lVar10;
        *local_80 = &PTR_FUN_14ba406e0;
        local_80[3] = local_b0;
        local_80[4] = local_a8;
        local_80[5] = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        local_80[6] = local_98;
        local_80[7] = 0;
        *(undefined4 *)(local_80 + 8) = 0;
        FUN_141532ff6(local_80 + 7,&local_90);
        FUN_148f9dee2(lVar5,lVar9,&local_6c,&local_80);
        if (local_78 == 0) {
LAB_14438a81c:
          if (local_80 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_80 != (undefined8 *)0x0) {
          (**(code **)*local_80)(local_80,0);
          FUN_1446efa72(&local_80,0,0,0x10);
          local_78 = 0;
          goto LAB_14438a81c;
        }
        if (local_88 == 0) {
LAB_14438a85d:
          if (local_90 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_90 != (undefined8 *)0x0) {
          (**(code **)*local_90)(local_90,0);
          FUN_1446efa72(&local_90,0,0,0x10);
          local_88 = 0;
          goto LAB_14438a85d;
        }
        plVar1 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)local_50 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        goto LAB_14438a69c;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)local_50 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  plVar4 = (longlong *)*param_4;
  if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2,0);
  }
LAB_14438a69c:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438a91a FUN_14438a91a body=1230 status=ok
// SIG undefined FUN_14438a91a(void)

void FUN_14438a91a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_1489b6c87(param_1,param_2 + 8);
  plVar7 = (longlong *)FUN_1489b6c87(uVar6,param_2 + 0xc);
  if (*(char *)((longlong)plVar7 + 0x14) == '\0') {
    lVar17 = plVar7[2];
    uVar10 = (int)lVar17 + 1;
    if (uVar10 <= *(uint *)(plVar7 + 1)) {
      uVar3 = *(undefined1 *)(param_2 + 0x10);
      *(uint *)(plVar7 + 2) = uVar10;
      *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
      if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
        lVar17 = plVar7[2];
        uVar10 = (int)lVar17 + 1;
        if (uVar10 <= *(uint *)(plVar7 + 1)) {
          uVar3 = *(undefined1 *)(param_2 + 0x12);
          *(uint *)(plVar7 + 2) = uVar10;
          *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
          if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
            lVar17 = plVar7[2];
            uVar10 = (int)lVar17 + 1;
            if (uVar10 <= *(uint *)(plVar7 + 1)) {
              uVar3 = *(undefined1 *)(param_2 + 0x13);
              *(uint *)(plVar7 + 2) = uVar10;
              *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
              if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                lVar17 = plVar7[2];
                uVar10 = (int)lVar17 + 1;
                if (uVar10 <= *(uint *)(plVar7 + 1)) {
                  uVar3 = *(undefined1 *)(param_2 + 0x14);
                  *(uint *)(plVar7 + 2) = uVar10;
                  *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                  if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                    lVar17 = plVar7[2];
                    uVar10 = (int)lVar17 + 1;
                    if (uVar10 <= *(uint *)(plVar7 + 1)) {
                      uVar3 = *(undefined1 *)(param_2 + 0x11);
                      *(uint *)(plVar7 + 2) = uVar10;
                      *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                      if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                        lVar17 = plVar7[2];
                        uVar10 = (int)lVar17 + 1;
                        if (uVar10 <= *(uint *)(plVar7 + 1)) {
                          uVar3 = *(undefined1 *)(param_2 + 0x15);
                          *(uint *)(plVar7 + 2) = uVar10;
                          *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                          if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                            lVar17 = plVar7[2];
                            uVar10 = (int)lVar17 + 1;
                            if (uVar10 <= *(uint *)(plVar7 + 1)) {
                              uVar3 = *(undefined1 *)(param_2 + 0x16);
                              *(uint *)(plVar7 + 2) = uVar10;
                              *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                              if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                                lVar17 = plVar7[2];
                                uVar10 = (int)lVar17 + 1;
                                if (uVar10 <= *(uint *)(plVar7 + 1)) {
                                  uVar3 = *(undefined1 *)(param_2 + 0x17);
                                  *(uint *)(plVar7 + 2) = uVar10;
                                  *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                                  if ((*(byte *)((longlong)plVar7 + 0x14) & 1) == 0) {
                                    lVar17 = plVar7[2];
                                    uVar10 = (int)lVar17 + 1;
                                    if (uVar10 <= *(uint *)(plVar7 + 1)) {
                                      uVar3 = *(undefined1 *)(param_2 + 0x18);
                                      *(uint *)(plVar7 + 2) = uVar10;
                                      *(undefined1 *)(*plVar7 + (longlong)(int)lVar17) = uVar3;
                                      goto LAB_14438aa96;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
LAB_14438aa96:
  puVar1 = (uint *)(param_2 + 0x48);
  iVar4 = *(int *)(param_2 + 0x60);
  uVar16 = 1;
  local_4c = 0;
  uVar11 = 0;
  iVar15 = 0;
  iVar13 = 0;
  if (iVar4 != 0) {
    puVar9 = *(uint **)(param_2 + 0x58);
    if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar11) {
          local_4c = 0;
          goto LAB_14438abef;
        }
        iVar15 = iVar15 + 0x20;
        uVar10 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar11 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar10 & uVar10);
    uVar2 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar13) {
      iVar13 = iVar4;
    }
  }
  if (iVar13 < iVar4) {
    puVar9 = *(uint **)(param_2 + 0x58);
    if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    iVar12 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar12 = iVar4 + -1;
    }
    iVar12 = iVar12 >> 5;
    uVar10 = 0xffffffff;
    local_4c = 0;
    do {
      local_4c = (local_4c + 1) -
                 (uint)(*(byte *)(*(longlong *)(param_2 + 0x38) + 0x28 + (longlong)iVar13 * 0x38) <
                       2);
      uVar10 = ~(uint)uVar16 & uVar10;
      iVar13 = (int)uVar11;
      lVar17 = (longlong)iVar13;
      uVar14 = puVar9[lVar17] & uVar10;
      if (uVar14 == 0) {
        iVar8 = iVar12;
        if (iVar12 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar12 <= iVar13) break;
        lVar18 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar14 = puVar9[lVar17 + lVar18 + 1];
          if (uVar14 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar8 - lVar17 == lVar18) goto LAB_14438abef;
        }
        uVar11 = (ulonglong)(iVar13 + (int)lVar18 + 1);
        uVar10 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar16 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar4);
  }
LAB_14438abef:
  FUN_1489b6c87();
  iVar4 = *(int *)(param_2 + 0x60);
  if (iVar4 == 0) {
    uVar11 = 1;
    uVar16 = 0;
    iVar15 = 0;
    iVar13 = 0;
  }
  else {
    puVar9 = *(uint **)(param_2 + 0x58);
    if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar15 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_14438ad93;
        iVar15 = iVar15 + 0x20;
        uVar10 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar16 = 0;
      iVar15 = 0;
    }
    uVar11 = (ulonglong)(-uVar10 & uVar10);
    uVar2 = uVar11 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar13) {
      iVar13 = iVar4;
    }
  }
  if (iVar13 < iVar4) {
    uVar10 = 0xffffffff;
    do {
      lVar17 = *(longlong *)(param_2 + 0x38);
      lVar18 = (longlong)iVar13 * 0x38;
      if (1 < *(byte *)(lVar17 + 0x28 + lVar18)) {
        FUN_148f9a62d(param_1,lVar17 + lVar18);
        FUN_1489bb6df(param_1,lVar17 + lVar18 + 8);
        if (*(char *)((longlong)param_1 + 0x14) == '\0') {
          lVar5 = param_1[2];
          uVar14 = (int)lVar5 + 1;
          if (uVar14 <= *(uint *)(param_1 + 1)) {
            uVar3 = *(undefined1 *)(lVar17 + lVar18 + 0x28);
            *(uint *)(param_1 + 2) = uVar14;
            *(undefined1 *)(*param_1 + (longlong)(int)lVar5) = uVar3;
            goto LAB_14438aca8;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
LAB_14438aca8:
      uVar10 = uVar10 & ~(uint)uVar11;
      puVar9 = *(uint **)(param_2 + 0x58);
      if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar4 = *(int *)(param_2 + 0x60);
      iVar13 = (int)uVar16;
      lVar17 = (longlong)iVar13;
      uVar14 = puVar9[lVar17] & uVar10;
      if (uVar14 == 0) {
        iVar12 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar12 = iVar4 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar8 = iVar12;
        if (iVar12 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar12 <= iVar13) break;
        lVar18 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar14 = puVar9[lVar17 + lVar18 + 1];
          if (uVar14 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar8 - lVar17 == lVar18) goto LAB_14438ad93;
        }
        uVar16 = (ulonglong)(iVar13 + (int)lVar18 + 1);
        uVar10 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar11 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar4);
  }
LAB_14438ad93:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438adea FUN_14438adea body=707 status=ok
// SIG undefined FUN_14438adea(void)

void FUN_14438adea(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145d1b8b4(param_2 + 0x38,0);
  uVar3 = FUN_1489b6cee(param_1,param_2 + 8);
  FUN_1489b6cee(uVar3,param_2 + 0xc);
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438ae57;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438ae57:
    *(undefined1 *)(param_1 + 2) = 1;
    cVar1 = '\0';
  }
  *(bool *)(param_2 + 0x10) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438ae80;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438ae80:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x12) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438aea7;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438aea7:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x13) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438aece;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438aece:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x14) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438aef5;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438aef5:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x11) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438af1c;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438af1c:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x15) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438af43;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438af43:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x16) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438af6a;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438af6a:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x17) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_14438af91;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_14438af91:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x18) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc) + 4;
    if ((int)param_1[1] < iVar2) goto LAB_14438b073;
    uVar5 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    local_68 = 0;
    if ((int)uVar5 < 1) goto LAB_14438b081;
    do {
      if ((char)param_1[2] == '\x01') goto LAB_14438b077;
      local_90[0] = 0;
      local_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_6c = 0xffffffff;
      FUN_148f9a68e(param_1,&local_68);
      FUN_1489bbadf(param_1,local_90);
      if ((char)param_1[2] == '\0') {
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        uVar4 = (ulonglong)iVar2;
        if (iVar2 < (int)param_1[1]) {
          *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
          uVar4 = (ulonglong)*(byte *)(*param_1 + uVar4);
        }
        else {
          *(undefined1 *)(param_1 + 2) = 1;
        }
        local_70 = (undefined1)uVar4;
      }
      FUN_145b2079c(param_2,local_68,local_90);
      FUN_140c3a2ac(local_90);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_14438b081;
  }
  else {
LAB_14438b073:
    *(undefined1 *)(param_1 + 2) = 1;
  }
LAB_14438b077:
  FUN_145d1b8b4(param_2 + 0x38,0);
LAB_14438b081:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14438b132 FUN_14438b132 body=862 status=ok
// SIG undefined FUN_14438b132(void)

/* WARNING: Removing unreachable block (ram,0x00014438b2be) */

ulonglong FUN_14438b132(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  uint local_9c;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 == 0) {
    FUN_140056680(&local_88,&DAT_149dfb77a);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    local_a8 = &local_88;
    (**(code **)(*param_1 + 0x28))(param_1,param_2,1,param_3);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14438b1fd;
  }
  if ((*(longlong *)(param_1[0xd] + 0xe8) == 0) ||
     (lVar4 = FUN_141424f26(*(longlong *)(param_1[0xd] + 0xe8),param_2), lVar4 == 0)) {
    FUN_140056680(&local_88,L"ShiftUser == nullptr");
    local_a8 = &local_88;
    (**(code **)(*param_1 + 0x28))(param_1,param_2,0,param_3);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = 0;
    goto LAB_14438b1fd;
  }
  local_58 = 0;
  uStack_50 = 0;
  ppuVar7 = (undefined8 **)*param_3;
  lVar8 = 0;
  local_9c = param_2;
  local_98 = lVar4;
  local_90 = param_3;
  do {
    (**(code **)(**(longlong **)((longlong)ppuVar7 + lVar8) + 0x30))
              (*(longlong **)((longlong)ppuVar7 + lVar8),&local_88);
    uVar6 = uStack_50;
    lVar4 = (longlong)(int)uStack_50;
    uVar3 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uStack_50._4_4_ < uVar3) {
      FUN_1447a1bd6(&local_58,uVar6 & 0xffffffff);
    }
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(local_58 + lVar4) = 0;
    *(longlong **)(local_58 + lVar4) = local_88;
    local_88 = (longlong *)0x0;
    *(undefined4 *)(local_58 + 8 + lVar4) = (undefined4)local_80;
    *(undefined4 *)(local_58 + 0xc + lVar4) = local_80._4_4_;
    local_80 = 0;
    lVar8 = lVar8 + 0x10;
  } while ((longlong)(int)lVar2 * 0x10 != lVar8);
  lVar2 = param_1[0xd];
  iVar1 = (int)local_90[1];
  lVar4 = *local_90;
  local_80 = (ulonglong)local_9c;
  local_78 = 0;
  local_88 = param_1;
  local_70 = iVar1;
  if (iVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1413eadba(&local_78,iVar1,0);
    FUN_1413ead8c(local_78,lVar4,iVar1);
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,4,0x10);
  iVar1 = local_70;
  lVar4 = local_78;
  local_60 = 4;
  *local_68 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_68[2] = lVar5;
  *local_68 = &PTR_FUN_14ba40c60;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 4) = (undefined4)local_80;
  local_68[5] = 0;
  *(int *)(local_68 + 6) = local_70;
  if (local_70 == 0) {
    *(undefined4 *)((longlong)local_68 + 0x34) = 0;
  }
  else {
    puVar9 = local_68 + 5;
    FUN_1413eadba(puVar9,local_70,0);
    FUN_1413ead8c(*puVar9,lVar4,iVar1);
  }
  FUN_145c4b56e(lVar2,local_98,&local_58,&local_68);
  if (local_60 == 0) {
LAB_14438b42a:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    ppuVar7 = &local_68;
    FUN_1446efa72(ppuVar7,0,0,0x10);
    local_60 = 0;
    goto LAB_14438b42a;
  }
  FUN_14127b1cd(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar6 = CONCAT71((int7)((ulonglong)ppuVar7 >> 8),1);
LAB_14438b1fd:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14438b492 FUN_14438b492 body=1069 status=ok
// SIG undefined FUN_14438b492(void)

ulonglong FUN_14438b492(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined8 unaff_RDI;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_3 + 1) < 2) {
    pwVar12 = L"DisplayName.IsEmpty()";
  }
  else {
    if (((*(longlong *)(param_2 + 8) != 0) &&
        (plVar13 = *(longlong **)(param_2 + 0x10), plVar13 != (longlong *)0x0)) &&
       (0 < (int)plVar13[1])) {
      iVar9 = (int)plVar13[1];
      do {
        if (iVar9 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)plVar13[1];
        bVar16 = iVar9 == iVar8;
        if (bVar16) {
          *(int *)(plVar13 + 1) = iVar9 + 1;
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
        UNLOCK();
      } while (!bVar16);
      uVar4 = *(undefined8 *)(param_2 + 8);
      lVar10 = FUN_141424e9e(*(undefined8 *)(param_1 + 0x68),param_2);
      uVar14 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar10 != 0);
      if (lVar10 == 0) {
        FUN_140056680(&local_90,L"ShiftUser == nullptr");
        FUN_148f9f0a2();
        plVar6 = (longlong *)*param_4;
        if (plVar6 != (longlong *)0x0 && (int)param_4[1] != 0) {
          local_a8 = DAT_14cbf4b80;
          local_a0 = &local_90;
          (**(code **)(*plVar6 + 0x60))(plVar6,0,param_2,param_3);
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_98 = *(undefined8 *)(param_1 + 0x68);
        if (plVar13 == (longlong *)0x0) {
          local_88 = 0;
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          local_88 = uVar4;
        }
        local_78 = (void *)0x0;
        local_70 = *(int *)(param_3 + 1);
        lVar15 = (longlong)local_70;
        pvVar5 = (void *)*param_3;
        local_90 = param_1;
        local_80 = plVar13;
        if (lVar15 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar5,lVar15 * 2);
        }
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_148fa8e54(&local_68,param_4);
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,5,0x10);
        puVar7 = local_58;
        pvVar5 = local_78;
        local_50 = 5;
        *local_58 = &PTR_LAB_149e063e0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar15 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14ba40ef0;
        local_58[3] = local_90;
        local_58[4] = local_88;
        local_58[5] = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_58[6] = 0;
        lVar15 = (longlong)local_70;
        *(int *)(local_58 + 7) = local_70;
        if (lVar15 == 0) {
          *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
        }
        else {
          puVar1 = local_58 + 6;
          FUN_1446dd670(puVar1,local_70,0);
          memcpy((void *)*puVar1,pvVar5,lVar15 * 2);
        }
        puVar7[8] = 0;
        *(undefined4 *)(puVar7 + 9) = 0;
        FUN_148fa8e54(puVar7 + 8,&local_68);
        FUN_148f9f102(local_98,lVar10,param_3,&local_58);
        if (local_50 == 0) {
LAB_14438b7e0:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_14438b7e0;
        }
        if (local_60 == 0) {
LAB_14438b821:
          if (local_68 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          local_60 = 0;
          goto LAB_14438b821;
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar6 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      goto LAB_14438b562;
    }
    pwVar12 = L"!UserId.DoesSharedInstanceExist()";
  }
  FUN_140056680(&local_90,pwVar12);
  FUN_148f9f0a2();
  plVar13 = (longlong *)*param_4;
  if (plVar13 != (longlong *)0x0 && (int)param_4[1] != 0) {
    local_a8 = DAT_14cbf4b80;
    local_a0 = &local_90;
    (**(code **)(*plVar13 + 0x60))(plVar13,0,param_2,param_3);
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  uVar14 = 0;
LAB_14438b562:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438b8c0 FUN_14438b8c0 body=1342 status=ok
// SIG undefined FUN_14438b8c0(void)

ulonglong FUN_14438b8c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                       longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_4 + 1) == 0) {
    FUN_140056680(&local_a8,&DAT_149dfb77a);
    plVar13 = (longlong *)*param_5;
    if (plVar13 != (longlong *)0x0 && (int)param_5[1] != 0) {
      local_c8 = param_4;
      local_c0 = &local_a8;
      (**(code **)(*plVar13 + 0x60))(plVar13,1,param_2,param_3);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    uVar14 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    goto LAB_14438b9df;
  }
  if (((*(longlong *)(param_2 + 8) == 0) ||
      (plVar13 = *(longlong **)(param_2 + 0x10), plVar13 == (longlong *)0x0)) ||
     ((int)plVar13[1] < 1)) {
    FUN_140056680(&local_a8,L"!UserId.DoesSharedInstanceExist()");
    plVar13 = (longlong *)*param_5;
    if (plVar13 != (longlong *)0x0 && (int)param_5[1] != 0) {
      local_c8 = param_4;
      local_c0 = &local_a8;
      (**(code **)(*plVar13 + 0x60))(plVar13,0,param_2,param_3);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    uVar14 = 0;
    goto LAB_14438b9df;
  }
  iVar8 = (int)plVar13[1];
  do {
    if (iVar8 == 0) {
      plVar13 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar7 = (int)plVar13[1];
    bVar16 = iVar8 == iVar7;
    if (bVar16) {
      *(int *)(plVar13 + 1) = iVar8 + 1;
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    UNLOCK();
  } while (!bVar16);
  uVar12 = 0;
  if (plVar13 != (longlong *)0x0) {
    uVar12 = *(undefined8 *)(param_2 + 8);
  }
  lVar9 = FUN_141424e9e(*(undefined8 *)(param_1 + 0x68),param_2);
  if (lVar9 == 0) {
    pwVar11 = L"ShiftUser == nullptr";
LAB_14438ba48:
    FUN_140056680(&local_a8,pwVar11);
    plVar4 = (longlong *)*param_5;
    if (plVar4 != (longlong *)0x0 && (int)param_5[1] != 0) {
      local_c8 = param_4;
      local_c0 = &local_a8;
      (**(code **)(*plVar4 + 0x60))(plVar4,0,param_2,param_3);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    uVar14 = 0;
  }
  else {
    if (*(char *)(param_3 + 2) == '\x01') {
      pwVar11 = L"bLookupByDisplayName == true";
      goto LAB_14438ba48;
    }
    local_b0 = *(undefined8 *)(param_1 + 0x68);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_90 = (void *)0x0;
    local_88 = *(int *)(param_3 + 1);
    lVar15 = (longlong)local_88;
    pvVar5 = (void *)*param_3;
    local_a8 = param_1;
    local_a0 = uVar12;
    local_98 = plVar13;
    if (lVar15 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,pvVar5,lVar15 * 2);
    }
    local_80 = *(undefined1 *)(param_3 + 2);
    local_78 = 0;
    iVar8 = *(int *)(param_4 + 1);
    uVar12 = *param_4;
    local_70 = iVar8;
    if (iVar8 == 0) {
      local_6c = 0;
    }
    else {
      FUN_140b856de(&local_78,iVar8,0);
      FUN_140b8566a(local_78,uVar12,iVar8);
    }
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_14666dbf2(&local_68,param_5);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,7,0x10);
    puVar6 = local_58;
    pvVar5 = local_90;
    local_50 = 7;
    *local_58 = &PTR_LAB_149e001f0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_58[2] = lVar10;
    *local_58 = &PTR_FUN_14ba410b0;
    local_58[3] = local_a8;
    local_58[4] = local_a0;
    local_58[5] = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
      UNLOCK();
    }
    local_58[6] = 0;
    lVar15 = (longlong)local_88;
    *(int *)(local_58 + 7) = local_88;
    if (lVar15 == 0) {
      *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
    }
    else {
      puVar2 = local_58 + 6;
      FUN_1446dd670(puVar2,local_88,0);
      memcpy((void *)*puVar2,pvVar5,lVar15 * 2);
    }
    iVar8 = local_70;
    lVar15 = local_78;
    *(undefined1 *)(puVar6 + 8) = local_80;
    puVar6[9] = 0;
    *(int *)(puVar6 + 10) = local_70;
    if (local_70 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
    }
    else {
      FUN_140b856de(puVar6 + 9,local_70,0);
      FUN_140b8566a(puVar6[9],lVar15,iVar8);
    }
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    FUN_14666dbf2(puVar6 + 0xb,&local_68);
    FUN_14622bd2e(local_b0,lVar9,param_4,&local_58);
    if (local_50 == 0) {
LAB_14438bd25:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_14438bd25;
    }
    if (local_60 == 0) {
LAB_14438bd72:
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
      goto LAB_14438bd72;
    }
    FUN_1447a1747(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar4 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_98 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar14 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar13 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14438b9df:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 14438be00 FUN_14438be00 body=77 status=ok
// SIG undefined FUN_14438be00(void)

void FUN_14438be00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != -1) {
    plVar3 = (longlong *)param_1[1];
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
    *param_1 = -1;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14438be56 FUN_14438be56 body=59 status=ok
// SIG undefined FUN_14438be56(void)

void FUN_14438be56(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf4b70;
  if (DAT_14cbf4b70 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4b70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014438be86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14438be92 FUN_14438be92 body=222 status=ok
// SIG undefined FUN_14438be92(void)

longlong * FUN_14438be92(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_14001cc68(0x160,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3d8a0;
  plVar1 = plVar5 + 2;
  FUN_145aa3f86(plVar1,param_3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  cVar4 = (**(code **)(*plVar1 + 8))(plVar1);
  lVar6 = *plVar1;
  if (cVar4 != '\0') {
    cVar4 = (**(code **)(lVar6 + 0x140))(plVar1);
    if (cVar4 != '\0') {
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar5;
      if (plVar5 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      goto LAB_14438bf46;
    }
    lVar6 = *plVar1;
  }
  (**(code **)(lVar6 + 0x150))(plVar1);
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar5 == (longlong *)0x0) {
    return param_2;
  }
LAB_14438bf46:
  LOCK();
  plVar1 = plVar5 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_2;
}



// FUNCTION 14438bf70 FUN_14438bf70 body=59 status=ok
// SIG undefined FUN_14438bf70(void)

void FUN_14438bf70(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf4b88;
  if (DAT_14cbf4b88 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4b88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014438bfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14438bfac FUN_14438bfac body=640 status=ok
// SIG undefined FUN_14438bfac(void)

undefined8 FUN_14438bfac(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  int local_78;
  int local_74;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
    FUN_140056680(param_2,L"INVALID");
    if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  cVar2 = FUN_1489b8d13(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,&local_50);
    if (local_48 - 0xcU < 0x7ffffff5) {
      (**(code **)(*param_1 + 0x30))(param_1,&local_70);
      uVar4 = (int)uStack_68 - 1;
      if ((int)uStack_68 == 0) {
        uVar4 = 0;
      }
      uVar3 = 5;
      if ((int)uVar4 < 5) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      uVar1 = uVar4 - uVar3;
      if ((int)uVar4 <= (int)(uVar4 - uVar3)) {
        uVar1 = uVar4;
      }
      local_58 = (int)uStack_68;
      if (0 < (int)uVar1) {
        if ((int)uStack_68 - uVar1 != 0) {
          memmove(local_70,(void *)((longlong)local_70 + (ulonglong)uVar1 * 2),
                  (longlong)(int)((int)uStack_68 - uVar1) * 2);
        }
        local_58 = (int)uStack_68 - uVar1;
      }
      local_60 = local_70;
      local_54 = uStack_68._4_4_;
      local_70 = (void *)0x0;
      uStack_68 = 0;
      (**(code **)(*param_1 + 0x30))(param_1,&local_90);
      uVar4 = (int)uStack_88 - 1;
      if ((int)uStack_88 == 0) {
        uVar4 = 0;
      }
      uVar3 = 5;
      if ((int)uVar4 < 5) {
        uVar3 = uVar4;
      }
      uVar7 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar7 = 0;
      }
      uVar4 = uVar4 - (int)uVar7;
      local_78 = (int)uStack_88;
      if (0 < (int)uVar4) {
        iVar5 = (int)uStack_88 - (uVar4 + (int)uVar7);
        if (iVar5 != 0) {
          _Dst = (void *)(uVar7 * 2 + local_90);
          memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar4 * 2),(longlong)iVar5 * 2);
        }
        local_78 = (int)uStack_88 - uVar4;
      }
      local_80 = local_90;
      local_74 = uStack_88._4_4_;
      local_90 = 0;
      uStack_88 = 0;
      iVar6 = (local_78 == 0) + 3;
      iVar5 = iVar6 + local_78;
      if (iVar5 < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (local_74 < iVar5) {
        FUN_1446f8c06(&local_80);
      }
      FUN_1400020e8(&local_80,&DAT_149e30fc2,3);
      FUN_1401c7f3e(param_2,&local_80,&local_60);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_140056680(param_2,L"<Redacted>");
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14438c234 FUN_14438c234 body=83 status=ok
// SIG undefined FUN_14438c234(void)

undefined8 * FUN_14438c234(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d9b0;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 14438c29c FUN_14438c29c body=118 status=ok
// SIG undefined FUN_14438c29c(void)

void FUN_14438c29c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3d9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438c312 FUN_14438c312 body=118 status=ok
// SIG undefined FUN_14438c312(void)

void FUN_14438c312(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3d9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438c388 FUN_14438c388 body=156 status=ok
// SIG undefined FUN_14438c388(void)

void FUN_14438c388(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507320;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3d9b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438c424 FUN_14438c424 body=66 status=ok
// SIG undefined FUN_14438c424(void)

void FUN_14438c424(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14438c4ae(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438c468 FUN_14438c468 body=68 status=ok
// SIG undefined FUN_14438c468(void)

undefined8 FUN_14438c468(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14438c4ae(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438c4ae FUN_14438c4ae body=5780 status=ok
// SIG undefined FUN_14438c4ae(void)

void FUN_14438c4ae(longlong *param_1,undefined8 *param_2,int *param_3)

{
  undefined ******ppppppuVar1;
  int *piVar2;
  undefined *******pppppppuVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  uint *puVar16;
  undefined ******ppppppuVar17;
  longlong *plVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong *plVar25;
  uint *puVar26;
  undefined *******pppppppuVar27;
  ulonglong uVar28;
  undefined1 auStack_1b8 [32];
  undefined ******local_198;
  undefined ******local_190;
  longlong *local_180;
  ulonglong local_178;
  ulonglong local_170;
  uint *local_168;
  longlong *local_160;
  uint local_154;
  uint *local_150;
  undefined *****local_148;
  longlong *local_140;
  undefined *****local_138;
  undefined8 uStack_130;
  undefined ******local_128;
  undefined ******ppppppuStack_120;
  undefined8 local_118;
  undefined *****local_110;
  undefined8 uStack_108;
  undefined *****local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined ******local_e8;
  undefined8 uStack_e0;
  undefined ******local_d8;
  undefined ******local_d0;
  undefined *****local_c8;
  ulonglong uStack_c0;
  undefined ******local_b0;
  undefined ******local_a8;
  undefined *****local_a0;
  undefined *****local_98;
  undefined1 local_90 [16];
  undefined *****local_80;
  undefined ******local_78;
  undefined ******ppppppuStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar8 = *param_2;
  plVar25 = (longlong *)*param_1;
  if (param_3[1] == 1) {
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],local_90);
    uVar7 = FUN_1459b6cd8(plVar25 + 0x99,local_90);
    local_178 = CONCAT44(local_178._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),0 < (int)uVar7)
                        );
  }
  else {
    local_178 = local_178 & 0xffffffff00000000;
  }
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_a0);
  local_128 = (undefined ******)local_a0;
  ppppppuStack_120 = (undefined ******)local_98;
  if ((undefined ******)local_98 != (undefined ******)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
    UNLOCK();
  }
  uVar5 = (*(code *)(*local_a0)[8])();
  iVar6 = FUN_1415c991c(plVar25 + 0x85,uVar5,&local_128);
  ppppppuVar17 = ppppppuStack_120;
  if (iVar6 == -1) {
    lVar21 = 0;
  }
  else {
    lVar21 = (longlong)iVar6 * 0x68 + plVar25[0x85];
  }
  if (ppppppuStack_120 != (undefined ******)0x0) {
    LOCK();
    ppppppuVar1 = ppppppuStack_120 + 1;
    *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppppppuVar1 == 0) {
      (*(code *)**ppppppuStack_120)(ppppppuStack_120);
      LOCK();
      piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
      }
    }
  }
  if ((undefined ******)local_98 != (undefined ******)0x0) {
    LOCK();
    ppppppuVar17 = (undefined ******)(local_98 + 1);
    *(int *)ppppppuVar17 = *(int *)ppppppuVar17 + -1;
    UNLOCK();
    if (*(int *)ppppppuVar17 == 0) {
      (*(code *)**local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_98)[2])(local_98);
      }
    }
  }
  plVar18 = (longlong *)(lVar21 + 0x10);
  if (lVar21 == 0) {
    plVar18 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_b0);
  local_128 = local_b0;
  ppppppuStack_120 = local_a8;
  if ((undefined *******)local_a8 != (undefined *******)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
    UNLOCK();
  }
  uVar5 = (*(code *)(*local_b0)[8])();
  iVar6 = FUN_14606175a(plVar25 + 0x8f,uVar5,&local_128);
  ppppppuVar17 = ppppppuStack_120;
  if (iVar6 == -1) {
    lVar21 = 0;
  }
  else {
    lVar21 = (longlong)iVar6 * 0x68 + plVar25[0x8f];
  }
  if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
    LOCK();
    pppppppuVar27 = (undefined *******)(ppppppuStack_120 + 1);
    *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
    UNLOCK();
    if (*(int *)pppppppuVar27 == 0) {
      (*(code *)**ppppppuStack_120)(ppppppuStack_120);
      LOCK();
      piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
      }
    }
  }
  if ((undefined *******)local_a8 != (undefined *******)0x0) {
    LOCK();
    pppppppuVar27 = (undefined *******)(local_a8 + 1);
    *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
    UNLOCK();
    if (*(int *)pppppppuVar27 == 0) {
      (*(code *)**local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_a8)[2])(local_a8);
      }
    }
  }
  puVar26 = (uint *)(lVar21 + 0x10);
  if (lVar21 == 0) {
    puVar26 = (uint *)0x0;
  }
  if (plVar18 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT31((int3)((uint)(int)plVar18[1] >> 8),
                     *(int *)((longlong)plVar18 + 0x34) < (int)plVar18[1]);
  }
  if ((puVar26 == (uint *)0x0) && ((char)uVar5 == '\0')) goto LAB_14438cccd;
  if (param_3[1] == 1) {
    local_170 = CONCAT44(local_170._4_4_,uVar5);
    local_150 = puVar26;
    FUN_14150a9d5(&local_c8,uVar8,4);
    local_180 = plVar25;
    local_160 = param_1;
    FUN_1415013c0(plVar25,*(undefined4 *)(param_1[1] + 0x10),&local_c8);
    if ((longlong)(int)uStack_c0 != 0) {
      local_148 = local_c8 + (longlong)(int)uStack_c0 * 8;
      local_168 = (uint *)(plVar18 + 2);
      ppppppuVar17 = (undefined ******)local_c8;
      do {
        if (*(char *)(ppppppuVar17 + 7) == '\x03') {
          if (local_150 != (uint *)0x0) {
            FUN_140e8ce9a(&local_d8,ppppppuVar17 + 1);
            ppppppuVar1 = local_d0;
            local_110 = (undefined *****)local_180[0x70];
            if ((undefined *******)local_d0 == (undefined *******)0x0) {
              local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
              ppppppuStack_120 = local_d8;
              local_118 = (undefined *******)0x0;
            }
            else {
              LOCK();
              *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
              UNLOCK();
              local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
              ppppppuStack_120 = local_d8;
              local_118 = (undefined *******)local_d0;
              LOCK();
              *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
              UNLOCK();
              LOCK();
              pppppppuVar27 = (undefined *******)(local_d0 + 1);
              *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar27 == 0) {
                (*(code *)**local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
                }
              }
            }
            local_e8 = local_d8;
            uStack_e0 = (undefined *******)local_d0;
            if ((undefined *******)local_d0 != (undefined *******)0x0) {
              LOCK();
              *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
              UNLOCK();
            }
            local_78 = (undefined ******)&local_e8;
            ppppppuStack_70 = (undefined ******)&local_128;
            FUN_14621a78a(local_150,&local_138,&local_78);
            pppppppuVar27 = uStack_e0;
            if (uStack_e0 != (undefined *******)0x0) {
              LOCK();
              pppppppuVar3 = uStack_e0 + 1;
              *(int *)pppppppuVar3 = *(int *)pppppppuVar3 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar3 == 0) {
                (*(code *)**uStack_e0)(uStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)pppppppuVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppppuVar27)[2])(pppppppuVar27);
                }
              }
            }
            pppppppuVar27 = local_118;
            local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
            if (local_118 != (undefined *******)0x0) {
              LOCK();
              pppppppuVar3 = local_118 + 1;
              *(int *)pppppppuVar3 = *(int *)pppppppuVar3 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar3 == 0) {
                (*(code *)**local_118)(local_118);
                LOCK();
                piVar2 = (int *)((longlong)pppppppuVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppppuVar27)[2])(pppppppuVar27);
                }
              }
            }
            ppppppuVar1 = local_d0;
            if ((undefined *******)local_d0 != (undefined *******)0x0) {
              LOCK();
              pppppppuVar27 = (undefined *******)(local_d0 + 1);
              *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar27 == 0) {
                (*(code *)**local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
                }
              }
            }
          }
        }
        else if (plVar18 != (longlong *)0x0) {
          iVar6 = (int)plVar18[5];
          if (iVar6 == 0) {
            uVar24 = 1;
            uVar28 = 0;
            iVar23 = 0;
            iVar22 = 0;
          }
          else {
            puVar26 = (uint *)plVar18[4];
            if ((uint *)plVar18[4] == (uint *)0x0) {
              puVar26 = local_168;
            }
            uVar20 = *puVar26;
            if (uVar20 == 0) {
              iVar22 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar22 = iVar6 + -1;
              }
              uVar28 = 0;
              uVar24 = (ulonglong)(uint)(iVar22 >> 5);
              if (iVar22 >> 5 < 1) {
                uVar24 = uVar28;
              }
              iVar23 = 0;
              do {
                if (uVar24 == uVar28) goto LAB_14438c9ef;
                iVar23 = iVar23 + 0x20;
                uVar20 = puVar26[uVar28 + 1];
                uVar28 = uVar28 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar28 = 0;
              iVar23 = 0;
            }
            uVar24 = (ulonglong)(-uVar20 & uVar20);
            uVar4 = uVar24 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar22 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar6 <= iVar22) {
              iVar22 = iVar6;
            }
          }
          if (iVar22 < iVar6) {
            uVar20 = 0xffffffff;
            do {
              lVar21 = *plVar18;
              FUN_141904c69(&local_78,ppppppuVar17,local_180[0x70]);
              local_d8 = (undefined ******)local_78[1];
              local_d0 = (undefined ******)local_78[2];
              if ((undefined *******)local_d0 != (undefined *******)0x0) {
                LOCK();
                *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
                UNLOCK();
              }
              local_128 = (undefined ******)&local_d8;
              ppppppuStack_120 = (undefined ******)&local_78;
              FUN_1412f0c66((longlong)iVar22 * 0x68 + lVar21 + 0x10,&local_e8,&local_128);
              ppppppuVar1 = local_d0;
              if ((undefined *******)local_d0 != (undefined *******)0x0) {
                LOCK();
                pppppppuVar27 = (undefined *******)(local_d0 + 1);
                *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
                UNLOCK();
                if (*(int *)pppppppuVar27 == 0) {
                  (*(code *)**local_d0)(local_d0);
                  LOCK();
                  piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
                  }
                }
              }
              ppppppuVar1 = ppppppuStack_70;
              if ((undefined *******)ppppppuStack_70 != (undefined *******)0x0) {
                LOCK();
                pppppppuVar27 = (undefined *******)(ppppppuStack_70 + 1);
                *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
                UNLOCK();
                if (*(int *)pppppppuVar27 == 0) {
                  (*(code *)**ppppppuVar1)(ppppppuVar1);
                  LOCK();
                  piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
                  }
                }
              }
              uVar20 = uVar20 & ~(uint)uVar24;
              puVar26 = (uint *)plVar18[4];
              if ((uint *)plVar18[4] == (uint *)0x0) {
                puVar26 = local_168;
              }
              iVar6 = (int)plVar18[5];
              iVar22 = (int)uVar28;
              lVar21 = (longlong)iVar22;
              uVar10 = puVar26[lVar21] & uVar20;
              if (uVar10 == 0) {
                iVar11 = iVar6 + 0x1e;
                if (-1 < iVar6 + -1) {
                  iVar11 = iVar6 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar12 = iVar11;
                if (iVar11 < iVar22) {
                  iVar12 = iVar22;
                }
                if (iVar11 <= iVar22) break;
                lVar15 = 0;
                while( true ) {
                  iVar23 = iVar23 + 0x20;
                  uVar10 = puVar26[lVar15 + lVar21 + 1];
                  if (uVar10 != 0) break;
                  lVar15 = lVar15 + 1;
                  if (iVar12 - lVar21 == lVar15) goto LAB_14438c9ef;
                }
                uVar28 = (ulonglong)(iVar22 + (int)lVar15 + 1);
                uVar20 = 0xffffffff;
              }
              uVar24 = (ulonglong)(-uVar10 & uVar10);
              uVar4 = uVar24 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar22 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            } while (iVar22 < iVar6);
          }
        }
LAB_14438c9ef:
        ppppppuVar17 = ppppppuVar17 + 8;
      } while (ppppppuVar17 != (undefined ******)local_148);
    }
    plVar18 = local_160;
    plVar25 = local_180;
    cVar19 = (char)local_178;
    if (local_150 != (uint *)0x0) {
      if (cVar19 != '\0') {
        local_128 = (undefined ******)0x0;
        ppppppuStack_120 = (undefined ******)0x0;
        (**(code **)(*(longlong *)local_160[1] + 8))((longlong *)local_160[1],&local_78);
        (**(code **)(*plVar25 + 0x228))(plVar25,local_78,1,&local_128);
        ppppppuVar17 = ppppppuStack_70;
        if ((undefined *******)ppppppuStack_70 != (undefined *******)0x0) {
          LOCK();
          pppppppuVar27 = (undefined *******)(ppppppuStack_70 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**ppppppuVar17)(ppppppuVar17);
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
            }
          }
        }
        if ((undefined *******)local_128 != (undefined *******)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*plVar25 + 0x1c0))(plVar25,*(undefined4 *)(plVar18[1] + 0x10),&DAT_14cbf4a40);
    }
    if ((char)local_170 != '\0') {
      if (cVar19 != '\0') {
        plVar25 = plVar25 + 0xa3;
        local_78 = (undefined ******)0x0;
        ppppppuStack_70 = (undefined ******)0x0;
        (**(code **)(*(longlong *)plVar18[1] + 8))((longlong *)plVar18[1],&local_d8);
        local_128 = local_d8;
        ppppppuStack_120 = local_d0;
        if ((undefined *******)local_d0 != (undefined *******)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
          UNLOCK();
        }
        FUN_1461c5172(plVar25,&local_e8,&local_128);
        ppppppuVar17 = local_e8;
        iVar6 = (int)local_e8;
        if ((longlong)(int)local_e8 != -1) {
          FUN_145e068c0(&local_78,*plVar25 + (longlong)(int)local_e8 * 0x28 + 0x10);
          FUN_1461e1420(plVar25,(ulonglong)ppppppuVar17 & 0xffffffff);
        }
        ppppppuVar17 = local_d0;
        if ((undefined *******)local_d0 != (undefined *******)0x0) {
          LOCK();
          pppppppuVar27 = (undefined *******)(local_d0 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
            }
          }
        }
        plVar25 = local_180;
        uVar24 = (ulonglong)ppppppuStack_70 & 0xffffffff;
        if (iVar6 != -1) {
          if ((int)ppppppuStack_70 == 0) {
            uVar24 = 0;
          }
          else {
            lVar21 = (longlong)(int)ppppppuStack_70 << 5;
            pppppppuVar27 = (undefined *******)local_78;
            do {
              local_128 = (undefined ******)0x0;
              ppppppuStack_120 = (undefined ******)0x0;
              if ((*(int *)(pppppppuVar27 + 3) != 0) &&
                 (ppppppuVar17 = pppppppuVar27[2], ppppppuVar17 != (undefined ******)0x0)) {
                local_198 = (undefined ******)&local_128;
                (*(code *)(*ppppppuVar17)[0xc])
                          (ppppppuVar17,*(undefined4 *)(plVar18[1] + 0x10),1,pppppppuVar27);
                if ((undefined *******)local_128 != (undefined *******)0x0) {
                  FUN_1400020a8();
                }
              }
              pppppppuVar27 = pppppppuVar27 + 4;
              lVar21 = lVar21 + -0x20;
            } while (lVar21 != 0);
            uVar24 = (ulonglong)ppppppuStack_70 & 0xffffffff;
          }
        }
        FUN_145e06910(local_78,uVar24);
        if ((undefined *******)local_78 != (undefined *******)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*plVar25 + 0x20))(plVar25,*(undefined4 *)(plVar18[1] + 0x10));
    }
    FUN_141323308(local_c8,uStack_c0 & 0xffffffff);
  }
  else {
    if (*param_3 == 0) goto LAB_14438cccd;
    local_c8 = (undefined *****)0x0;
    uStack_c0 = 0;
    ppppppuStack_120 = (undefined ******)&local_78;
    local_128 = (undefined ******)FUN_143f00b4a;
    local_180 = plVar25;
    local_78 = &local_c8;
    bifrost::users::shiftId(*param_3,&local_128);
    FUN_146155382(&local_d8,&local_c8);
    ppppppuVar17 = local_d0;
    iVar6 = param_3[1];
    uVar20 = 0;
    plVar25 = local_180;
    if (iVar6 == 3) {
      uVar8 = 0;
      local_154 = 0;
      if (puVar26 != (uint *)0x0) {
        if ((undefined *******)local_d0 == (undefined *******)0x0) {
          ppppppuStack_120 = (undefined ******)0x0;
        }
        else {
          LOCK();
          *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
          UNLOCK();
          ppppppuStack_120 = local_d0;
          LOCK();
          *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
          UNLOCK();
        }
        local_128 = local_d8;
        uVar5 = (*(code *)(*local_d8)[8])();
        iVar6 = FUN_148fa0d68(puVar26,uVar5,&local_128);
        ppppppuVar1 = ppppppuStack_120;
        if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
          LOCK();
          pppppppuVar27 = (undefined *******)(ppppppuStack_120 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**ppppppuStack_120)();
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar1)[2])();
            }
          }
        }
        if ((undefined *******)ppppppuVar17 != (undefined *******)0x0) {
          LOCK();
          pppppppuVar27 = (undefined *******)(ppppppuVar17 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**ppppppuVar17)();
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar17)[2])();
            }
          }
        }
        ppppppuVar17 = local_d0;
        uVar20 = 0;
        if (iVar6 == -1) {
          local_110 = (undefined *****)local_180[0x70];
          if ((undefined *******)local_d0 == (undefined *******)0x0) {
            local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
            ppppppuStack_120 = local_d8;
            local_118 = (undefined *******)0x0;
          }
          else {
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
            local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
            ppppppuStack_120 = local_d8;
            local_118 = (undefined *******)local_d0;
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
            LOCK();
            pppppppuVar27 = (undefined *******)(local_d0 + 1);
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar27 == 0) {
              (*(code *)**local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
              }
            }
          }
          local_e8 = local_d8;
          uStack_e0 = (undefined *******)local_d0;
          if ((undefined *******)local_d0 != (undefined *******)0x0) {
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
          }
          local_78 = (undefined ******)&local_e8;
          ppppppuStack_70 = (undefined ******)&local_128;
          FUN_14621a78a(puVar26,&local_138);
          pppppppuVar27 = uStack_e0;
          if (uStack_e0 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar3 = uStack_e0 + 1;
            *(int *)pppppppuVar3 = *(int *)pppppppuVar3 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar3 == 0) {
              (*(code *)**uStack_e0)(uStack_e0);
              LOCK();
              piVar2 = (int *)((longlong)pppppppuVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppppuVar27)[2])(pppppppuVar27);
              }
            }
          }
          pppppppuVar27 = local_118;
          local_128 = (undefined ******)&PTR_FUN_14ba3d3b0;
          if (local_118 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar3 = local_118 + 1;
            *(int *)pppppppuVar3 = *(int *)pppppppuVar3 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar3 == 0) {
              (*(code *)**local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)pppppppuVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppppuVar27)[2])(pppppppuVar27);
              }
            }
          }
          local_128 = (undefined ******)0x0;
          ppppppuStack_120 = (undefined ******)0x0;
          local_198 = (undefined ******)&DAT_14cbf4a40;
          local_190 = (undefined ******)&local_128;
          (**(code **)(*local_180 + 0x180))
                    (local_180,*(undefined4 *)(param_1[1] + 0x10),0x14cbf4a01,local_d8);
          if ((undefined *******)local_128 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
          uVar20 = 0;
          local_154 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          plVar25 = local_180;
        }
        else {
          local_154 = 0;
          plVar25 = local_180;
        }
      }
    }
    else {
      if (iVar6 == 5) {
        if (*(char *)((longlong)param_3 + 9) == '\x01') {
          uVar20 = 2;
          if ((char)param_3[2] != '\x01') {
            uVar20 = (uint)((char)param_3[2] == '\0') * 3;
          }
        }
      }
      else {
        uVar20 = 0;
        if (iVar6 == 6) {
          uVar20 = 1;
        }
      }
      if (puVar26 == (uint *)0x0) {
        local_154 = 0;
      }
      else {
        if ((undefined *******)local_d0 == (undefined *******)0x0) {
          local_128 = local_d8;
          ppppppuStack_120 = (undefined ******)0x0;
          iVar6 = FUN_148fa0e98();
        }
        else {
          LOCK();
          *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
          UNLOCK();
          local_128 = local_d8;
          ppppppuStack_120 = local_d0;
          LOCK();
          *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
          UNLOCK();
          iVar6 = FUN_148fa0e98();
          LOCK();
          pppppppuVar27 = (undefined *******)(ppppppuVar17 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**ppppppuVar17)();
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar17)[2])();
            }
          }
        }
        plVar25 = local_180;
        if (iVar6 == 0) {
          local_154 = 0;
        }
        else {
          local_128 = (undefined ******)0x0;
          ppppppuStack_120 = (undefined ******)0x0;
          local_198 = (undefined ******)&DAT_14cbf4a40;
          local_190 = (undefined ******)&local_128;
          (**(code **)(*local_180 + 0x1a0))(local_180,*(undefined4 *)(param_1[1] + 0x10),1,local_d8)
          ;
          if ((undefined *******)local_128 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
          local_154 = 0;
        }
      }
    }
    if (plVar18 == (longlong *)0x0) {
LAB_14438d3a0:
      local_170 = 0;
      local_178 = 0;
    }
    else {
      iVar6 = (int)plVar18[5];
      if (iVar6 == 0) {
        uVar24 = 1;
        puVar26 = (uint *)0x0;
        iVar23 = 0;
        iVar22 = 0;
      }
      else {
        puVar14 = (uint *)plVar18[4];
        if ((uint *)plVar18[4] == (uint *)0x0) {
          puVar14 = (uint *)(plVar18 + 2);
        }
        uVar10 = *puVar14;
        if (uVar10 == 0) {
          iVar22 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar22 = iVar6 + -1;
          }
          puVar26 = (uint *)0x0;
          puVar16 = (uint *)(ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            puVar16 = puVar26;
          }
          iVar23 = 0;
          do {
            if (puVar16 == puVar26) {
              uVar24 = 0;
              local_170 = 0;
              if ((char)local_154 == '\0') goto LAB_14438d77d;
              goto LAB_14438d3be;
            }
            iVar23 = iVar23 + 0x20;
            uVar10 = puVar14[(longlong)puVar26 + 1];
            puVar26 = (uint *)((longlong)puVar26 + 1);
          } while (uVar10 == 0);
        }
        else {
          puVar26 = (uint *)0x0;
          iVar23 = 0;
        }
        uVar24 = (ulonglong)(-uVar10 & uVar10);
        uVar28 = uVar24 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar22 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar22) {
          iVar22 = iVar6;
        }
      }
      if (iVar6 <= iVar22) goto LAB_14438d3a0;
      uVar10 = 0xffffffff;
      local_178 = 0;
      local_170 = 0;
      local_148 = (undefined *****)CONCAT44(local_148._4_4_,uVar20);
      local_160 = param_1;
      local_150 = (uint *)(plVar18 + 2);
      local_140 = plVar18;
      do {
        ppppppuVar17 = local_d0;
        plVar25 = (longlong *)(*plVar18 + (longlong)iVar22 * 0x68 + 0x10);
        local_168 = puVar26;
        if (uVar20 == 0) {
          if ((undefined *******)local_d0 == (undefined *******)0x0) {
            ppppppuStack_120 = (undefined ******)0x0;
          }
          else {
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
            ppppppuStack_120 = local_d0;
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
          }
          local_128 = local_d8;
          uVar5 = (*(code *)(*local_d8)[8])();
          iVar6 = FUN_1412f0ef2(plVar25,uVar5,&local_128);
          ppppppuVar1 = ppppppuStack_120;
          if (iVar6 == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = (longlong)iVar6 * 0x28 + *plVar25;
          }
          if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar27 = (undefined *******)(ppppppuStack_120 + 1);
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar27 == 0) {
              (*(code *)**ppppppuStack_120)(ppppppuStack_120);
              LOCK();
              piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
              }
            }
          }
          if ((undefined *******)ppppppuVar17 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar27 = (undefined *******)(ppppppuVar17 + 1);
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar27 == 0) {
              (*(code *)**ppppppuVar17)(ppppppuVar17);
              LOCK();
              piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
              }
            }
          }
          ppppppuVar17 = local_d0;
          uVar20 = (uint)local_148;
          plVar18 = local_140;
          param_1 = local_160;
          puVar26 = local_168;
          if (lVar21 != 0) {
            uVar13 = *(uint *)(*(longlong *)(lVar21 + 0x10) + 0x20);
            if (2 < uVar13 - 1) {
              uVar13 = 0;
            }
            local_170 = (ulonglong)uVar13;
            if ((undefined *******)local_d0 == (undefined *******)0x0) {
              local_128 = local_d8;
              ppppppuStack_120 = (undefined ******)0x0;
              uVar8 = FUN_148fa101c(plVar25,&local_128);
            }
            else {
              LOCK();
              *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
              UNLOCK();
              local_128 = local_d8;
              ppppppuStack_120 = local_d0;
              LOCK();
              *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
              UNLOCK();
              uVar8 = FUN_148fa101c(plVar25,&local_128);
              LOCK();
              pppppppuVar27 = (undefined *******)(ppppppuVar17 + 1);
              *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar27 == 0) {
                uVar8 = (*(code *)**ppppppuVar17)(ppppppuVar17);
                LOCK();
                piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  uVar8 = (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
                }
              }
            }
            local_178 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            plVar18 = local_140;
            param_1 = local_160;
            puVar26 = local_168;
          }
        }
        else {
          if ((undefined *******)local_d0 == (undefined *******)0x0) {
            ppppppuStack_120 = (undefined ******)0x0;
          }
          else {
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
            ppppppuStack_120 = local_d0;
            LOCK();
            *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
            UNLOCK();
          }
          local_128 = local_d8;
          uVar5 = (*(code *)(*local_d8)[8])();
          iVar6 = FUN_1412f0ef2(plVar25,uVar5,&local_128);
          ppppppuVar1 = ppppppuStack_120;
          if (iVar6 == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = (longlong)iVar6 * 0x28 + *plVar25;
          }
          if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar27 = (undefined *******)(ppppppuStack_120 + 1);
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar27 == 0) {
              (*(code *)**ppppppuStack_120)(ppppppuStack_120);
              LOCK();
              piVar2 = (int *)((longlong)ppppppuVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppuVar1)[2])(ppppppuVar1);
              }
            }
          }
          if ((undefined *******)ppppppuVar17 != (undefined *******)0x0) {
            LOCK();
            pppppppuVar27 = (undefined *******)(ppppppuVar17 + 1);
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar27 == 0) {
              (*(code *)**ppppppuVar17)(ppppppuVar17);
              LOCK();
              piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
              }
            }
          }
          uVar20 = (uint)local_148;
          if (lVar21 == 0) {
            ppppppuStack_70 = (undefined ******)FUN_148fa119f(&local_d8,local_180[0x70]);
            plVar18 = local_140;
            local_78 = ppppppuStack_70 + 2;
            *(uint *)(ppppppuStack_70 + 6) = uVar20;
            local_e8 = (undefined ******)ppppppuStack_70[3];
            uStack_e0 = (undefined *******)ppppppuStack_70[4];
            if (uStack_e0 != (undefined *******)0x0) {
              LOCK();
              *(int *)(uStack_e0 + 1) = *(int *)(uStack_e0 + 1) + 1;
              UNLOCK();
            }
            local_128 = (undefined ******)&local_e8;
            ppppppuStack_120 = (undefined ******)&local_78;
            uVar8 = FUN_1412f0c66(plVar25,&local_138,&local_128);
            pppppppuVar27 = uStack_e0;
            if (uStack_e0 != (undefined *******)0x0) {
              LOCK();
              pppppppuVar3 = uStack_e0 + 1;
              *(int *)pppppppuVar3 = *(int *)pppppppuVar3 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar3 == 0) {
                uVar8 = (*(code *)**uStack_e0)(uStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)pppppppuVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  uVar8 = (*(code *)(*pppppppuVar27)[2])(pppppppuVar27);
                }
              }
            }
            ppppppuVar17 = ppppppuStack_70;
            param_1 = local_160;
            puVar26 = local_168;
            if ((undefined *******)ppppppuStack_70 != (undefined *******)0x0) {
              LOCK();
              pppppppuVar27 = (undefined *******)(ppppppuStack_70 + 1);
              *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar27 == 0) {
                uVar8 = (*(code *)**ppppppuStack_70)(ppppppuStack_70);
                LOCK();
                piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  uVar8 = (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
                }
              }
            }
            local_170 = 0;
            uVar9 = (undefined7)((ulonglong)uVar8 >> 8);
            local_154 = (uint)CONCAT71(uVar9,1);
            local_178 = CONCAT71(uVar9,1);
            uVar20 = (uint)local_148;
          }
          else {
            lVar21 = *(longlong *)(lVar21 + 0x10);
            uVar13 = *(uint *)(lVar21 + 0x20);
            plVar18 = local_140;
            param_1 = local_160;
            puVar26 = local_168;
            if (uVar13 != (uint)local_148) {
              local_170 = (ulonglong)uVar13;
              if (2 < uVar13 - 1) {
                local_170 = 0;
              }
              *(uint *)(lVar21 + 0x20) = (uint)local_148;
              local_178 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
            }
          }
        }
        uVar10 = uVar10 & ~(uint)uVar24;
        puVar14 = (uint *)plVar18[4];
        if ((uint *)plVar18[4] == (uint *)0x0) {
          puVar14 = local_150;
        }
        iVar6 = (int)plVar18[5];
        iVar22 = (int)puVar26;
        lVar21 = (longlong)iVar22;
        uVar13 = puVar14[lVar21] & uVar10;
        if (uVar13 == 0) {
          iVar11 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar11 = iVar6 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar12 = iVar11;
          if (iVar11 < iVar22) {
            iVar12 = iVar22;
          }
          if (iVar11 <= iVar22) break;
          lVar15 = 0;
          while( true ) {
            iVar23 = iVar23 + 0x20;
            uVar13 = puVar14[lVar21 + lVar15 + 1];
            if (uVar13 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar12 - lVar21 == lVar15) goto LAB_14438d3a9;
          }
          puVar26 = (uint *)(ulonglong)(iVar22 + (int)lVar15 + 1);
          uVar10 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar13 & uVar13);
        uVar28 = uVar24 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar22 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      } while (iVar22 < iVar6);
    }
LAB_14438d3a9:
    plVar25 = local_180;
    uVar24 = local_178;
    if ((local_154 & 1) != 0) {
LAB_14438d3be:
      local_e8 = (undefined ******)0x0;
      uStack_e0 = (undefined *******)0x0;
      local_128 = (undefined ******)((ulonglong)local_128 & 0xffffffff00000000);
      ppppppuStack_120 = (undefined ******)0x0;
      local_118 = (undefined *******)0x0;
      local_110 = (undefined *****)0x0;
      uStack_108 = 0;
      local_100 = (undefined *****)0x0;
      uStack_f8 = 0;
      local_f0 = 0x304;
      iVar6 = (int)uStack_c0 + -1;
      if ((int)uStack_c0 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(&ppppppuStack_120,local_c8,iVar6);
      local_80 = (undefined *****)&local_138;
      local_138 = (undefined *****)0x0;
      uStack_130 = 0;
      ppppppuStack_70 = &local_80;
      local_78 = (undefined ******)FUN_143f00bd4;
      bifrost::users::displayName(*param_3);
      if (local_110 != (undefined *****)0x0) {
        FUN_1400020a8();
      }
      uVar28 = (ulonglong)uStack_e0;
      local_110 = local_138;
      uStack_108._0_4_ = (undefined4)uStack_130;
      uStack_108._4_4_ = uStack_130._4_4_;
      lVar21 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (undefined *******)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_145c69d66(&local_e8,uVar28 & 0xffffffff);
      }
      lVar15 = lVar21 * 0x40;
      *(undefined4 *)(local_e8 + lVar21 * 8) = local_128._0_4_;
      local_e8[lVar21 * 8 + 1] = (undefined *****)0x0;
      local_e8[lVar21 * 8 + 1] = (undefined *****)ppppppuStack_120;
      ppppppuStack_120 = (undefined ******)0x0;
      *(undefined4 *)(local_e8 + lVar21 * 8 + 2) = (undefined4)local_118;
      *(undefined4 *)((longlong)local_e8 + lVar15 + 0x14) = local_118._4_4_;
      local_118 = (undefined *******)0x0;
      local_e8[lVar21 * 8 + 3] = (undefined *****)0x0;
      local_e8[lVar21 * 8 + 3] = local_110;
      local_110 = (undefined *****)0x0;
      *(undefined4 *)(local_e8 + lVar21 * 8 + 4) = (undefined4)uStack_108;
      *(undefined4 *)((longlong)local_e8 + lVar15 + 0x24) = uStack_108._4_4_;
      uStack_108 = 0;
      local_e8[lVar21 * 8 + 5] = (undefined *****)0x0;
      local_e8[lVar21 * 8 + 5] = local_100;
      local_100 = (undefined *****)0x0;
      *(undefined4 *)(local_e8 + lVar21 * 8 + 6) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)local_e8 + lVar15 + 0x34) = uStack_f8._4_4_;
      uStack_f8 = 0;
      *(undefined2 *)(local_e8 + lVar21 * 8 + 7) = local_f0;
      FUN_1415013c0(plVar25,*(undefined4 *)(param_1[1] + 0x10));
      if (local_100 != (undefined *****)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != (undefined *****)0x0) {
        FUN_1400020a8();
      }
      if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
        FUN_1400020a8();
      }
      FUN_141323308(local_e8,(ulonglong)uStack_e0 & 0xffffffff);
      if ((undefined *******)local_e8 != (undefined *******)0x0) {
        FUN_1400020a8();
      }
    }
    ppppppuVar17 = local_d8;
    if ((uVar24 & 1) != 0) {
      if (uVar20 == 2) {
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_128);
        (**(code **)(*plVar25 + 0x60))(plVar25,local_128,ppppppuVar17);
LAB_14438d747:
        ppppppuVar17 = ppppppuStack_120;
        if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
          LOCK();
          pppppppuVar27 = (undefined *******)(ppppppuStack_120 + 1);
          *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
          UNLOCK();
          if (*(int *)pppppppuVar27 == 0) {
            (*(code *)**ppppppuStack_120)(ppppppuStack_120);
            LOCK();
            piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
            }
          }
        }
      }
      else {
        iVar6 = (int)local_170;
        if ((uVar20 == 1) && (iVar6 == 3)) {
          (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_128);
          (**(code **)(*plVar25 + 0x80))(plVar25,local_128,ppppppuVar17);
          goto LAB_14438d747;
        }
        if ((uVar20 == 0) && (iVar6 == 3)) {
          (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_128);
          (**(code **)(*plVar25 + 0xa0))(plVar25,local_128,ppppppuVar17);
          goto LAB_14438d747;
        }
        if ((uVar20 == 0) && (iVar6 == 1)) {
          (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_128);
          (**(code **)(*plVar25 + 0xe0))(plVar25,local_128,ppppppuVar17);
          goto LAB_14438d747;
        }
      }
      (**(code **)(*plVar25 + 0x20))(plVar25,*(undefined4 *)(param_1[1] + 0x10));
    }
LAB_14438d77d:
    ppppppuVar17 = local_d0;
    if ((undefined *******)local_d0 != (undefined *******)0x0) {
      LOCK();
      pppppppuVar27 = (undefined *******)(local_d0 + 1);
      *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
      UNLOCK();
      if (*(int *)pppppppuVar27 == 0) {
        (*(code *)**local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)ppppppuVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
        }
      }
    }
  }
  if ((undefined ******)local_c8 != (undefined ******)0x0) {
    FUN_1400020a8();
  }
LAB_14438cccd:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438db44 FUN_14438db44 body=222 status=ok
// SIG undefined FUN_14438db44(void)

undefined8 * FUN_14438db44(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba3da20;
  plVar3 = (longlong *)param_1[0xe];
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
  if (*(int *)((longlong)param_1 + 100) != -1) {
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 9);
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14438dbcd;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14438dbcd:
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14438dc36 FUN_14438dc36 body=295 status=ok
// SIG undefined FUN_14438dc36(void)

void FUN_14438dc36(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3da20;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_148fa141a(puVar2 + 7,param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == -1) {
    puVar2[9] = 0xffffffffffffffff;
    puVar2[10] = 0;
  }
  else {
    puVar2[9] = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    puVar2[10] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 0xb,param_1 + 0x58);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438dd5e FUN_14438dd5e body=295 status=ok
// SIG undefined FUN_14438dd5e(void)

void FUN_14438dd5e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3da20;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_148fa141a(puVar2 + 7,param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == -1) {
    puVar2[9] = 0xffffffffffffffff;
    puVar2[10] = 0;
  }
  else {
    puVar2[9] = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    puVar2[10] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 0xb,param_1 + 0x58);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438de86 FUN_14438de86 body=360 status=ok
// SIG undefined FUN_14438de86(void)

void FUN_14438de86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  longlong lVar3;
  _LIST_ENTRY *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4daf00;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3da20;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = 0;
  FUN_148fa141a(&p_Var2[1].CriticalSection,param_1 + 0x38);
  if (*(_LIST_ENTRY **)(param_1 + 0x48) == (_LIST_ENTRY *)0xffffffffffffffff) {
    p_Var2[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0xffffffffffffffff;
    p_Var2[1].EntryCount = 0;
    p_Var2[1].ContentionCount = 0;
  }
  else {
    p_Var2[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    p_Var2[1].EntryCount = (int)lVar3;
    p_Var2[1].ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var2[1].Flags,param_1 + 0x58);
  p_Var2[2].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x68);
  p_Var4 = *(_LIST_ENTRY **)(param_1 + 0x70);
  p_Var2[2].ProcessLocksList.Flink = p_Var4;
  if (p_Var4 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var4->Blink = *(int *)&p_Var4->Blink + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438dfee FUN_14438dfee body=63 status=ok
// SIG undefined FUN_14438dfee(void)

void FUN_14438dfee(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438e070(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438e02e FUN_14438e02e body=65 status=ok
// SIG undefined FUN_14438e02e(void)

undefined8 FUN_14438e02e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438e070(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438e070 FUN_14438e070 body=964 status=ok
// SIG undefined FUN_14438e070(void)

void FUN_14438e070(longlong *param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Src;
  undefined4 uVar7;
  int iVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  void **local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  _Src = DAT_14cbf49f0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (cVar3 == '\x01') {
    plVar5 = *(longlong **)(plVar4[0x70] + 0xe8);
    plVar6 = *(longlong **)(plVar4[0x70] + 0xf0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x110))(plVar5,&local_78,(int)param_1[1]);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (local_78 == 0) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      goto LAB_14438e353;
    }
    (**(code **)(*(longlong *)param_1[6] + 8))((longlong *)param_1[6],&local_88);
    local_50 = local_88;
    local_48 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    uVar7 = (**(code **)(*local_88 + 0x40))();
    iVar8 = FUN_1415c991c(plVar4 + 0x85,uVar7,&local_50);
    plVar5 = local_48;
    if (iVar8 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar8 * 0x68 + plVar4[0x85];
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (lVar11 != 0) {
      iVar8 = (int)param_1[3] + -1;
      if ((int)param_1[3] == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        iVar10 = 0;
        do {
          iVar10 = iVar10 + 1;
        } while (iVar8 != iVar10);
      }
      iVar8 = FUN_1415b7a94((longlong *)(lVar11 + 0x10));
      if ((iVar8 != -1) &&
         (lVar11 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar11 + 0x10), lVar9 = lVar11 + 0x10,
         lVar9 != 0 && lVar11 != 0)) {
        local_50 = (longlong *)param_1[10];
        local_48 = (longlong *)param_1[0xb];
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        lVar11 = FUN_148f9c03a(plVar4[0x70],&local_50,lVar9,3);
        plVar6 = local_48;
        plVar5 = *(longlong **)(lVar11 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)param_1[1]);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  else {
    lVar11 = (longlong)(int)DAT_14cbf49f8;
    uStack_60 = (ulonglong)DAT_14cbf49f8;
    if (lVar11 != 0) {
      FUN_1446dd670(&local_68,DAT_14cbf49f8,0);
      memcpy(local_68,_Src,lVar11 * 2);
    }
  }
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0 && (int)param_1[5] != 0) {
    local_98 = param_1 + 2;
    local_90 = &local_68;
    (**(code **)(*plVar4 + 0x60))
              (plVar4,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff
               ,param_1[10]);
  }
LAB_14438e353:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438e436 FUN_14438e436 body=44 status=ok
// SIG undefined FUN_14438e436(void)

void FUN_14438e436(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014438e45f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14438e462 FUN_14438e462 body=222 status=ok
// SIG undefined FUN_14438e462(void)

undefined8 * FUN_14438e462(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ba3dbb0;
  plVar3 = (longlong *)param_1[0xe];
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
  if (*(int *)((longlong)param_1 + 100) != -1) {
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 9);
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14438e4eb;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14438e4eb:
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14438e554 FUN_14438e554 body=295 status=ok
// SIG undefined FUN_14438e554(void)

void FUN_14438e554(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dbb0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_148fa141a(puVar2 + 7,param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == -1) {
    puVar2[9] = 0xffffffffffffffff;
    puVar2[10] = 0;
  }
  else {
    puVar2[9] = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    puVar2[10] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 0xb,param_1 + 0x58);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438e67c FUN_14438e67c body=295 status=ok
// SIG undefined FUN_14438e67c(void)

void FUN_14438e67c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dbb0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_148fa141a(puVar2 + 7,param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == -1) {
    puVar2[9] = 0xffffffffffffffff;
    puVar2[10] = 0;
  }
  else {
    puVar2[9] = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    puVar2[10] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 0xb,param_1 + 0x58);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x70);
  puVar2[0xe] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438e7a4 FUN_14438e7a4 body=360 status=ok
// SIG undefined FUN_14438e7a4(void)

void FUN_14438e7a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  longlong lVar3;
  _LIST_ENTRY *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4daf00;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3dbb0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = 0;
  FUN_148fa141a(&p_Var2[1].CriticalSection,param_1 + 0x38);
  if (*(_LIST_ENTRY **)(param_1 + 0x48) == (_LIST_ENTRY *)0xffffffffffffffff) {
    p_Var2[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0xffffffffffffffff;
    p_Var2[1].EntryCount = 0;
    p_Var2[1].ContentionCount = 0;
  }
  else {
    p_Var2[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x50);
    p_Var2[1].EntryCount = (int)lVar3;
    p_Var2[1].ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var2[1].Flags,param_1 + 0x58);
  p_Var2[2].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x68);
  p_Var4 = *(_LIST_ENTRY **)(param_1 + 0x70);
  p_Var2[2].ProcessLocksList.Flink = p_Var4;
  if (p_Var4 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var4->Blink = *(int *)&p_Var4->Blink + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438e8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438e90c FUN_14438e90c body=63 status=ok
// SIG undefined FUN_14438e90c(void)

void FUN_14438e90c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438e98e(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438e94c FUN_14438e94c body=65 status=ok
// SIG undefined FUN_14438e94c(void)

undefined8 FUN_14438e94c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438e98e(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438e98e FUN_14438e98e body=964 status=ok
// SIG undefined FUN_14438e98e(void)

void FUN_14438e98e(longlong *param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Src;
  undefined4 uVar7;
  int iVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  void **local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  _Src = DAT_14cbf49e0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (cVar3 == '\x01') {
    plVar5 = *(longlong **)(plVar4[0x70] + 0xe8);
    plVar6 = *(longlong **)(plVar4[0x70] + 0xf0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x110))(plVar5,&local_78,(int)param_1[1]);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (local_78 == 0) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      goto LAB_14438ec71;
    }
    (**(code **)(*(longlong *)param_1[6] + 8))((longlong *)param_1[6],&local_88);
    local_50 = local_88;
    local_48 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    uVar7 = (**(code **)(*local_88 + 0x40))();
    iVar8 = FUN_1415c991c(plVar4 + 0x85,uVar7,&local_50);
    plVar5 = local_48;
    if (iVar8 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar8 * 0x68 + plVar4[0x85];
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (lVar11 != 0) {
      iVar8 = (int)param_1[3] + -1;
      if ((int)param_1[3] == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        iVar10 = 0;
        do {
          iVar10 = iVar10 + 1;
        } while (iVar8 != iVar10);
      }
      iVar8 = FUN_1415b7a94((longlong *)(lVar11 + 0x10));
      if ((iVar8 != -1) &&
         (lVar11 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar11 + 0x10), lVar9 = lVar11 + 0x10,
         lVar9 != 0 && lVar11 != 0)) {
        local_50 = (longlong *)param_1[10];
        local_48 = (longlong *)param_1[0xb];
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        lVar11 = FUN_148f9c03a(plVar4[0x70],&local_50,lVar9,1);
        plVar6 = local_48;
        plVar5 = *(longlong **)(lVar11 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)param_1[1]);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  else {
    lVar11 = (longlong)(int)DAT_14cbf49e8;
    uStack_60 = (ulonglong)DAT_14cbf49e8;
    if (lVar11 != 0) {
      FUN_1446dd670(&local_68,DAT_14cbf49e8,0);
      memcpy(local_68,_Src,lVar11 * 2);
    }
  }
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0 && (int)param_1[5] != 0) {
    local_98 = param_1 + 2;
    local_90 = &local_68;
    (**(code **)(*plVar4 + 0x60))
              (plVar4,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff
               ,param_1[10]);
  }
LAB_14438ec71:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438ed54 FUN_14438ed54 body=153 status=ok
// SIG undefined FUN_14438ed54(void)

undefined8 * FUN_14438ed54(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3dd00;
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
  if (*(int *)((longlong)param_1 + 0x54) != -1) {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = 0;
    param_1[10] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14438ee02 FUN_14438ee02 body=266 status=ok
// SIG undefined FUN_14438ee02(void)

void FUN_14438ee02(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dd00;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  if (*(longlong *)(param_1 + 0x38) == -1) {
    puVar2[7] = 0xffffffffffffffff;
    puVar2[8] = 0;
  }
  else {
    puVar2[7] = *(longlong *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x40);
    puVar2[8] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 9,param_1 + 0x48);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438ef0c FUN_14438ef0c body=266 status=ok
// SIG undefined FUN_14438ef0c(void)

void FUN_14438ef0c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dd00;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  if (*(longlong *)(param_1 + 0x38) == -1) {
    puVar2[7] = 0xffffffffffffffff;
    puVar2[8] = 0;
  }
  else {
    puVar2[7] = *(longlong *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x40);
    puVar2[8] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 9,param_1 + 0x48);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438f016 FUN_14438f016 body=328 status=ok
// SIG undefined FUN_14438f016(void)

void FUN_14438f016(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY *p_Var3;
  undefined8 uVar4;
  longlong lVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4daf00;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3dd00;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (*(_RTL_CRITICAL_SECTION **)(param_1 + 0x38) == (_RTL_CRITICAL_SECTION *)0xffffffffffffffff) {
    p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0xffffffffffffffff;
    p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  }
  else {
    p_Var2[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
    p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x40);
    p_Var2[1].ProcessLocksList.Flink = p_Var3;
    if (p_Var3 != (_LIST_ENTRY *)0x0) {
      LOCK();
      *(int *)&p_Var3->Blink = *(int *)&p_Var3->Blink + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var2[1].ProcessLocksList.Blink,param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  p_Var2[1].Flags = (int)uVar4;
  p_Var2[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
  p_Var2[1].SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
  lVar5 = *(longlong *)(param_1 + 0x60);
  p_Var2[2].Type = (short)lVar5;
  p_Var2[2].CreatorBackTraceIndex = (short)((ulonglong)lVar5 >> 0x10);
  *(int *)&p_Var2[2].field_0x4 = (int)((ulonglong)lVar5 >> 0x20);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438f148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438f15e FUN_14438f15e body=63 status=ok
// SIG undefined FUN_14438f15e(void)

void FUN_14438f15e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438f1e0(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438f19e FUN_14438f19e body=65 status=ok
// SIG undefined FUN_14438f19e(void)

undefined8 FUN_14438f19e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438f1e0(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438f1e0 FUN_14438f1e0 body=691 status=ok
// SIG undefined FUN_14438f1e0(void)

void FUN_14438f1e0(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  undefined4 uVar6;
  int iVar7;
  undefined8 unaff_RBP;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  void **local_80;
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  _Src = DAT_14cbf49e0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (cVar3 == '\x01') {
    (**(code **)(*(longlong *)param_1[4] + 8))((longlong *)param_1[4],&local_78);
    local_50 = local_78;
    local_48 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*local_78 + 0x40))();
    iVar7 = FUN_1415c991c(plVar4 + 0x85,uVar6,&local_50);
    plVar5 = local_48;
    if (iVar7 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar7 * 0x68 + plVar4[0x85];
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (lVar9 != 0) {
      iVar7 = (int)param_1[3] + -1;
      if ((int)param_1[3] == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
      }
      iVar7 = FUN_1415b7a94((longlong *)(lVar9 + 0x10));
      if ((iVar7 != -1) &&
         (lVar9 = (longlong)iVar7 * 0x68 + *(longlong *)(lVar9 + 0x10), lVar9 != -0x10 && lVar9 != 0
         )) {
        local_50 = (longlong *)param_1[8];
        plVar5 = (longlong *)param_1[9];
        if (plVar5 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          FUN_148fa101c();
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_48 = plVar5;
          FUN_148fa101c();
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
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)param_1[1]);
      }
    }
  }
  else {
    lVar9 = (longlong)(int)DAT_14cbf49e8;
    uStack_60 = (ulonglong)DAT_14cbf49e8;
    if (lVar9 == 0) {
      uStack_60 = (ulonglong)DAT_14cbf49e8;
    }
    else {
      FUN_1446dd670(&local_68,DAT_14cbf49e8,0);
      memcpy(local_68,_Src,lVar9 * 2);
    }
  }
  local_88 = param_1 + 2;
  local_80 = &local_68;
  (**(code **)(*plVar4 + 0x138))
            (plVar4,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff,
             param_1[8]);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438f494 FUN_14438f494 body=150 status=ok
// SIG undefined FUN_14438f494(void)

undefined8 * FUN_14438f494(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3de50;
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = 0;
    param_1[8] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14438f53e FUN_14438f53e body=266 status=ok
// SIG undefined FUN_14438f53e(void)

void FUN_14438f53e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3de50;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar2[5] = 0xffffffffffffffff;
    puVar2[6] = 0;
  }
  else {
    puVar2[5] = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 7,param_1 + 0x38);
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
  }
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438f648 FUN_14438f648 body=266 status=ok
// SIG undefined FUN_14438f648(void)

void FUN_14438f648(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4daf00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3de50;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar2[5] = 0xffffffffffffffff;
    puVar2[6] = 0;
  }
  else {
    puVar2[5] = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar2 + 7,param_1 + 0x38);
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
  }
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14438f752 FUN_14438f752 body=328 status=ok
// SIG undefined FUN_14438f752(void)

void FUN_14438f752(longlong param_1,LPCRITICAL_SECTION param_2)

{
  _LIST_ENTRY **pp_Var1;
  DWORD DVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14b4daf00;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14ba3de50;
  p_Var3->EntryCount = *(DWORD *)(param_1 + 0x20);
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == -1) {
    p_Var3->Flags = 0xffffffff;
    p_Var3->CreatorBackTraceIndexHigh = 0xffff;
    p_Var3->SpareWORD = 0xffff;
    p_Var3[1].Type = 0;
    p_Var3[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var3[1].field_0x4 = 0;
  }
  else {
    p_Var3->Flags = (int)lVar4;
    p_Var3->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
    p_Var3->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
    lVar4 = *(longlong *)(param_1 + 0x30);
    p_Var3[1].Type = (short)lVar4;
    p_Var3[1].CreatorBackTraceIndex = (short)((ulonglong)lVar4 >> 0x10);
    *(int *)&p_Var3[1].field_0x4 = (int)((ulonglong)lVar4 >> 0x20);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var3[1].CriticalSection,param_1 + 0x38);
  p_Var3[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  DVar2 = *(DWORD *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  p_Var3[1].EntryCount = DVar2;
  if ((longlong)(int)DVar2 == 0) {
    p_Var3[1].ContentionCount = 0;
  }
  else {
    pp_Var1 = &p_Var3[1].ProcessLocksList.Blink;
    FUN_1446dd670(pp_Var1,DVar2,0);
    memcpy(*pp_Var1,_Src,(longlong)(int)DVar2 * 2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  p_Var3[1].Flags = (int)uVar5;
  p_Var3[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar5 >> 0x20);
  p_Var3[1].SpareWORD = (short)((ulonglong)uVar5 >> 0x30);
  lVar4 = *(longlong *)(param_1 + 0x60);
  p_Var3[2].Type = (short)lVar4;
  p_Var3[2].CreatorBackTraceIndex = (short)((ulonglong)lVar4 >> 0x10);
  *(int *)&p_Var3[2].field_0x4 = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438f89a FUN_14438f89a body=63 status=ok
// SIG undefined FUN_14438f89a(void)

void FUN_14438f89a(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438f91c(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438f8da FUN_14438f8da body=65 status=ok
// SIG undefined FUN_14438f8da(void)

undefined8 FUN_14438f8da(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14438f91c(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438f91c FUN_14438f91c body=691 status=ok
// SIG undefined FUN_14438f91c(void)

void FUN_14438f91c(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  undefined4 uVar6;
  int iVar7;
  undefined8 unaff_RBP;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  void **local_80;
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  _Src = DAT_14cbf49e0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (cVar3 == '\x01') {
    (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&local_78);
    local_50 = local_78;
    local_48 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*local_78 + 0x40))();
    iVar7 = FUN_1415c991c(plVar4 + 0x85,uVar6,&local_50);
    plVar5 = local_48;
    if (iVar7 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar7 * 0x68 + plVar4[0x85];
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (lVar9 != 0) {
      iVar7 = (int)param_1[7] + -1;
      if ((int)param_1[7] == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
      }
      iVar7 = FUN_1415b7a94((longlong *)(lVar9 + 0x10));
      if ((iVar7 != -1) &&
         (lVar9 = (longlong)iVar7 * 0x68 + *(longlong *)(lVar9 + 0x10), lVar9 != -0x10 && lVar9 != 0
         )) {
        local_50 = (longlong *)param_1[8];
        plVar5 = (longlong *)param_1[9];
        if (plVar5 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          FUN_148fa101c();
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_48 = plVar5;
          FUN_148fa101c();
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
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)param_1[1]);
      }
    }
  }
  else {
    lVar9 = (longlong)(int)DAT_14cbf49e8;
    uStack_60 = (ulonglong)DAT_14cbf49e8;
    if (lVar9 == 0) {
      uStack_60 = (ulonglong)DAT_14cbf49e8;
    }
    else {
      FUN_1446dd670(&local_68,DAT_14cbf49e8,0);
      memcpy(local_68,_Src,lVar9 * 2);
    }
  }
  local_88 = param_1 + 6;
  local_80 = &local_68;
  (**(code **)(*plVar4 + 0x160))
            (plVar4,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff,
             param_1[8]);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14438fbd0 FUN_14438fbd0 body=163 status=ok
// SIG undefined FUN_14438fbd0(void)

undefined8 * FUN_14438fbd0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba3dec0;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14438fc21;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14438fc21:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14438fc88 FUN_14438fc88 body=227 status=ok
// SIG undefined FUN_14438fc88(void)

void FUN_14438fc88(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dec0;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 14438fd6c FUN_14438fd6c body=227 status=ok
// SIG undefined FUN_14438fd6c(void)

void FUN_14438fd6c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dec0;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 14438fe50 FUN_14438fe50 body=287 status=ok
// SIG undefined FUN_14438fe50(void)

void FUN_14438fe50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3dec0;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_148fa2108(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014438ff59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14438ff7a FUN_14438ff7a body=20 status=ok
// SIG undefined FUN_14438ff7a(void)

undefined1 FUN_14438ff7a(longlong param_1)

{
  FUN_14438ff8e(param_1 + 0x18);
  return 1;
}



// FUNCTION 14438ff8e FUN_14438ff8e body=123 status=ok
// SIG undefined FUN_14438ff8e(void)

void FUN_14438ff8e(undefined4 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c8dbc0(local_58,0xe);
  plVar1 = *(longlong **)(param_1 + 10);
  if (plVar1 != (longlong *)0x0 && param_1[0xc] != 0) {
    local_68 = local_58;
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,*(undefined8 *)(param_1 + 2),param_1 + 6);
  }
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439000a FUN_14439000a body=163 status=ok
// SIG undefined FUN_14439000a(void)

undefined8 * FUN_14439000a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba3df30;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14439005b;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14439005b:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443900c2 FUN_1443900c2 body=227 status=ok
// SIG undefined FUN_1443900c2(void)

void FUN_1443900c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3df30;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443901a6 FUN_1443901a6 body=227 status=ok
// SIG undefined FUN_1443901a6(void)

void FUN_1443901a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3df30;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 14439028a FUN_14439028a body=287 status=ok
// SIG undefined FUN_14439028a(void)

void FUN_14439028a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3df30;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_148fa2108(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144390393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443903b4 FUN_1443903b4 body=20 status=ok
// SIG undefined FUN_1443903b4(void)

undefined1 FUN_1443903b4(longlong param_1)

{
  FUN_1443903c8(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443903c8 FUN_1443903c8 body=123 status=ok
// SIG undefined FUN_1443903c8(void)

void FUN_1443903c8(undefined4 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c8dbc0(local_58,0xe);
  plVar1 = *(longlong **)(param_1 + 10);
  if (plVar1 != (longlong *)0x0 && param_1[0xc] != 0) {
    local_68 = local_58;
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,*(undefined8 *)(param_1 + 2),param_1 + 6);
  }
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144390444 FUN_144390444 body=97 status=ok
// SIG undefined FUN_144390444(void)

undefined8 * FUN_144390444(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3dfa0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1443904ba FUN_1443904ba body=197 status=ok
// SIG undefined FUN_1443904ba(void)

void FUN_1443904ba(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dfa0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144390580 FUN_144390580 body=197 status=ok
// SIG undefined FUN_144390580(void)

void FUN_144390580(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba3dfa0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
  }
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144390646 FUN_144390646 body=253 status=ok
// SIG undefined FUN_144390646(void)

void FUN_144390646(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba3dfa0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar3;
  p_Var2->ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439072d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439074e FUN_14439074e body=20 status=ok
// SIG undefined FUN_14439074e(void)

undefined1 FUN_14439074e(longlong param_1)

{
  FUN_144390762(param_1 + 0x18);
  return 1;
}



// FUNCTION 144390762 FUN_144390762 body=129 status=ok
// SIG undefined FUN_144390762(void)

void FUN_144390762(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[4];
  FUN_140002266(local_30,L"%S is currently not implemented",
                "FOnlineFriendsShift::QueryRecentPlayers(const FUniqueNetId &, const FString &)::(anonymous class)::operator()"
               );
  local_38 = local_30;
  (**(code **)(*plVar1 + 0x208))(plVar1,*param_1,param_1 + 2,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443907e4 FUN_1443907e4 body=136 status=ok
// SIG undefined FUN_1443907e4(void)

undefined8 * FUN_1443907e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3e0c0;
  plVar3 = (longlong *)param_1[10];
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
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = 0;
    param_1[8] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144390880 FUN_144390880 body=186 status=ok
// SIG undefined FUN_144390880(void)

void FUN_144390880(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e0c0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar1[5] = 0xffffffffffffffff;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar1 + 7,param_1 + 0x38);
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14439093a FUN_14439093a body=186 status=ok
// SIG undefined FUN_14439093a(void)

void FUN_14439093a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e0c0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar1[5] = 0xffffffffffffffff;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar1 + 7,param_1 + 0x38);
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443909f4 FUN_1443909f4 body=224 status=ok
// SIG undefined FUN_1443909f4(void)

void FUN_1443909f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e0c0;
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == -1) {
    p_Var1->Flags = 0xffffffff;
    p_Var1->CreatorBackTraceIndexHigh = 0xffff;
    p_Var1->SpareWORD = 0xffff;
    p_Var1[1].Type = 0;
    p_Var1[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  }
  else {
    p_Var1->Flags = (int)lVar2;
    p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar2 >> 0x20);
    p_Var1->SpareWORD = (short)((ulonglong)lVar2 >> 0x30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    p_Var1[1].Type = (short)lVar2;
    p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
    *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var1[1].CriticalSection,param_1 + 0x38);
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)lVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144390ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144390ad4 FUN_144390ad4 body=63 status=ok
// SIG undefined FUN_144390ad4(void)

void FUN_144390ad4(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_144390b56(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144390b14 FUN_144390b14 body=65 status=ok
// SIG undefined FUN_144390b14(void)

undefined8 FUN_144390b14(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_144390b56(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144390b56 FUN_144390b56 body=830 status=ok
// SIG undefined FUN_144390b56(void)

void FUN_144390b56(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 unaff_RBX;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined ***local_a0;
  longlong local_98;
  longlong *local_90;
  undefined **local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong local_70;
  undefined **local_60;
  longlong *local_58;
  longlong *local_50;
  undefined ***local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  iVar9 = DAT_14cbf49e8;
  pvVar6 = DAT_14cbf49e0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = *param_2;
  plVar5 = (longlong *)*param_1;
  if (cVar3 == '\x01') {
    (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&local_60);
    local_88 = local_60;
    plStack_80 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*local_60 + 0x40))();
    iVar9 = FUN_14606175a(plVar5 + 0x8f,uVar8,&local_88);
    plVar7 = plStack_80;
    if (iVar9 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar9 * 0x68 + plVar5[0x8f];
    }
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (lVar10 != 0) {
      local_70 = plVar5[0x70];
      plStack_80 = (longlong *)param_1[6];
      plVar7 = (longlong *)param_1[7];
      if (plVar7 == (longlong *)0x0) {
        local_88 = &PTR_FUN_14ba3d3b0;
        local_78 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_88 = &PTR_FUN_14ba3d3b0;
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_78 = plVar7;
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
      }
      local_98 = param_1[6];
      local_90 = (longlong *)param_1[7];
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      local_50 = &local_98;
      local_48 = &local_88;
      FUN_14621a78a(lVar10 + 0x10,local_3c);
      plVar7 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_78;
      local_88 = &PTR_FUN_14ba3d3b0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
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
  else {
    plVar7 = param_1 + 4;
    if ((void **)plVar7 != &DAT_14cbf49e0) {
      lVar10 = (longlong)DAT_14cbf49e8;
      *(int *)(param_1 + 5) = DAT_14cbf49e8;
      if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      }
      else {
        FUN_1446dd670(plVar7,iVar9);
        if (iVar9 != 0) {
          memcpy((void *)*plVar7,pvVar6,lVar10 * 2);
        }
      }
    }
  }
  if (param_1[2] == -1) {
    local_88 = (undefined **)0x0;
    uVar4 = *(uint *)(param_1 + 5);
    pvVar6 = (void *)param_1[4];
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,uVar4);
    if ((longlong)(int)uVar4 == 0) {
      plStack_80 = (longlong *)(ulonglong)uVar4;
    }
    else {
      FUN_1446dd670(&local_88,uVar4,0);
      memcpy(local_88,pvVar6,(longlong)(int)uVar4 * 2);
    }
  }
  else {
    local_88 = (undefined **)0x0;
    plStack_80 = (longlong *)0x0;
  }
  local_a0 = &local_88;
  local_a8 = &DAT_14cbf4a40;
  (**(code **)(*plVar5 + 0x180))
            (plVar5,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar3) & 0xffffffff,
             param_1[6]);
  if (local_88 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144390e96 FUN_144390e96 body=136 status=ok
// SIG undefined FUN_144390e96(void)

undefined8 * FUN_144390e96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3e210;
  plVar3 = (longlong *)param_1[10];
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
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = 0;
    param_1[8] = 0xffffffff00000000;
  }
  FUN_14438be00(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144390f32 FUN_144390f32 body=186 status=ok
// SIG undefined FUN_144390f32(void)

void FUN_144390f32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e210;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar1[5] = 0xffffffffffffffff;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar1 + 7,param_1 + 0x38);
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144390fec FUN_144390fec body=186 status=ok
// SIG undefined FUN_144390fec(void)

void FUN_144390fec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e210;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == -1) {
    puVar1[5] = 0xffffffffffffffff;
    puVar1[6] = 0;
  }
  else {
    puVar1[5] = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(puVar1 + 7,param_1 + 0x38);
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  puVar1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1443910a6 FUN_1443910a6 body=224 status=ok
// SIG undefined FUN_1443910a6(void)

void FUN_1443910a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e210;
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == -1) {
    p_Var1->Flags = 0xffffffff;
    p_Var1->CreatorBackTraceIndexHigh = 0xffff;
    p_Var1->SpareWORD = 0xffff;
    p_Var1[1].Type = 0;
    p_Var1[1].CreatorBackTraceIndex = 0;
    *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  }
  else {
    p_Var1->Flags = (int)lVar2;
    p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar2 >> 0x20);
    p_Var1->SpareWORD = (short)((ulonglong)lVar2 >> 0x30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    p_Var1[1].Type = (short)lVar2;
    p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
    *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_141121e90(&p_Var1[1].CriticalSection,param_1 + 0x38);
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)lVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144391176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144391186 FUN_144391186 body=63 status=ok
// SIG undefined FUN_144391186(void)

void FUN_144391186(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_144391208(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443911c6 FUN_1443911c6 body=65 status=ok
// SIG undefined FUN_1443911c6(void)

undefined8 FUN_1443911c6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_144391208(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391208 FUN_144391208 body=624 status=ok
// SIG undefined FUN_144391208(void)

void FUN_144391208(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 unaff_RBX;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong **local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  iVar9 = DAT_14cbf49e8;
  pvVar6 = DAT_14cbf49e0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = *param_2;
  plVar5 = (longlong *)*param_1;
  if (cVar3 == '\x01') {
    (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],&local_58);
    local_48 = local_58;
    plStack_40 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*local_58 + 0x40))();
    iVar9 = FUN_14606175a(plVar5 + 0x8f,uVar8,&local_48);
    plVar7 = plStack_40;
    if (iVar9 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar9 * 0x68 + plVar5[0x8f];
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (lVar10 != 0) {
      local_48 = (longlong *)param_1[6];
      plVar7 = (longlong *)param_1[7];
      if (plVar7 == (longlong *)0x0) {
        plStack_40 = (longlong *)0x0;
        FUN_148fa0e98(lVar10 + 0x10);
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plStack_40 = plVar7;
        FUN_148fa0e98(lVar10 + 0x10);
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
      }
    }
  }
  else {
    plVar7 = param_1 + 4;
    if ((void **)plVar7 != &DAT_14cbf49e0) {
      lVar10 = (longlong)DAT_14cbf49e8;
      *(int *)(param_1 + 5) = DAT_14cbf49e8;
      if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      }
      else {
        FUN_1446dd670(plVar7,iVar9);
        if (iVar9 != 0) {
          memcpy((void *)*plVar7,pvVar6,lVar10 * 2);
        }
      }
    }
  }
  if (param_1[2] == -1) {
    local_48 = (longlong *)0x0;
    uVar4 = *(uint *)(param_1 + 5);
    pvVar6 = (void *)param_1[4];
    plStack_40 = (longlong *)CONCAT44(plStack_40._4_4_,uVar4);
    if ((longlong)(int)uVar4 == 0) {
      plStack_40 = (longlong *)(ulonglong)uVar4;
    }
    else {
      FUN_1446dd670(&local_48,uVar4,0);
      memcpy(local_48,pvVar6,(longlong)(int)uVar4 * 2);
    }
  }
  else {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  local_60 = &local_48;
  local_68 = &DAT_14cbf4a40;
  (**(code **)(*plVar5 + 0x1a0))
            (plVar5,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar3) & 0xffffffff,
             param_1[6]);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439147a FUN_14439147a body=29 status=ok
// SIG undefined FUN_14439147a(void)

undefined8 FUN_14439147a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443914ac FUN_1443914ac body=93 status=ok
// SIG undefined FUN_1443914ac(void)

void FUN_1443914ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14439150a FUN_14439150a body=93 status=ok
// SIG undefined FUN_14439150a(void)

void FUN_14439150a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144391568 FUN_144391568 body=126 status=ok
// SIG undefined FUN_144391568(void)

void FUN_144391568(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443915d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443915e6 FUN_1443915e6 body=65 status=ok
// SIG undefined FUN_1443915e6(void)

void FUN_1443915e6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439166c(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391628 FUN_144391628 body=67 status=ok
// SIG undefined FUN_144391628(void)

undefined8 FUN_144391628(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14439166c(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439166c FUN_14439166c body=147 status=ok
// SIG undefined FUN_14439166c(void)

void FUN_14439166c(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *param_2;
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x44) != cVar1) {
    *(char *)(lVar3 + 0x44) = cVar1;
    plVar2 = *(longlong **)(lVar3 + 8);
    if (cVar1 == '\0') {
      FUN_140056680(local_28,L"XMPP");
      lVar3 = *plVar2;
      uVar4 = 2;
      uVar5 = 1;
    }
    else {
      FUN_140056680(local_28,L"XMPP");
      lVar3 = *plVar2;
      uVar4 = 1;
      uVar5 = 2;
    }
    (**(code **)(lVar3 + 0x188))(plVar2,local_28,uVar4,uVar5);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391700 FUN_144391700 body=29 status=ok
// SIG undefined FUN_144391700(void)

undefined8 FUN_144391700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144391732 FUN_144391732 body=93 status=ok
// SIG undefined FUN_144391732(void)

void FUN_144391732(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391790 FUN_144391790 body=93 status=ok
// SIG undefined FUN_144391790(void)

void FUN_144391790(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443917ee FUN_1443917ee body=126 status=ok
// SIG undefined FUN_1443917ee(void)

void FUN_1443917ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e3f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014439185d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144391876 FUN_144391876 body=20 status=ok
// SIG undefined FUN_144391876(void)

undefined1 FUN_144391876(longlong param_1)

{
  FUN_14439188a(param_1 + 0x18);
  return 1;
}



// FUNCTION 14439188a FUN_14439188a body=126 status=ok
// SIG undefined FUN_14439188a(void)

void FUN_14439188a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"Invalid user num");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439190a FUN_14439190a body=29 status=ok
// SIG undefined FUN_14439190a(void)

undefined8 FUN_14439190a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14439193c FUN_14439193c body=93 status=ok
// SIG undefined FUN_14439193c(void)

void FUN_14439193c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14439199a FUN_14439199a body=93 status=ok
// SIG undefined FUN_14439199a(void)

void FUN_14439199a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443919f8 FUN_1443919f8 body=126 status=ok
// SIG undefined FUN_1443919f8(void)

void FUN_1443919f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e480;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144391a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144391a80 FUN_144391a80 body=20 status=ok
// SIG undefined FUN_144391a80(void)

undefined1 FUN_144391a80(longlong param_1)

{
  FUN_144391a94(param_1 + 0x18);
  return 1;
}



// FUNCTION 144391a94 FUN_144391a94 body=126 status=ok
// SIG undefined FUN_144391a94(void)

void FUN_144391a94(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"User already logged in");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391b14 FUN_144391b14 body=29 status=ok
// SIG undefined FUN_144391b14(void)

undefined8 FUN_144391b14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144391b46 FUN_144391b46 body=93 status=ok
// SIG undefined FUN_144391b46(void)

void FUN_144391b46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391ba4 FUN_144391ba4 body=93 status=ok
// SIG undefined FUN_144391ba4(void)

void FUN_144391ba4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391c02 FUN_144391c02 body=126 status=ok
// SIG undefined FUN_144391c02(void)

void FUN_144391c02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144391c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144391c8a FUN_144391c8a body=20 status=ok
// SIG undefined FUN_144391c8a(void)

undefined1 FUN_144391c8a(longlong param_1)

{
  FUN_144391c9e(param_1 + 0x18);
  return 1;
}



// FUNCTION 144391c9e FUN_144391c9e body=126 status=ok
// SIG undefined FUN_144391c9e(void)

void FUN_144391c9e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"User already logging in");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391d1e FUN_144391d1e body=29 status=ok
// SIG undefined FUN_144391d1e(void)

undefined8 FUN_144391d1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144391d50 FUN_144391d50 body=93 status=ok
// SIG undefined FUN_144391d50(void)

void FUN_144391d50(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391dae FUN_144391dae body=93 status=ok
// SIG undefined FUN_144391dae(void)

void FUN_144391dae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391e0c FUN_144391e0c body=126 status=ok
// SIG undefined FUN_144391e0c(void)

void FUN_144391e0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e5c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144391e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144391e94 FUN_144391e94 body=20 status=ok
// SIG undefined FUN_144391e94(void)

undefined1 FUN_144391e94(longlong param_1)

{
  FUN_144391ea8(param_1 + 0x18);
  return 1;
}



// FUNCTION 144391ea8 FUN_144391ea8 body=126 status=ok
// SIG undefined FUN_144391ea8(void)

void FUN_144391ea8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"Empty credentials");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144391f28 FUN_144391f28 body=29 status=ok
// SIG undefined FUN_144391f28(void)

undefined8 FUN_144391f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144391f5a FUN_144391f5a body=93 status=ok
// SIG undefined FUN_144391f5a(void)

void FUN_144391f5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144391fb8 FUN_144391fb8 body=93 status=ok
// SIG undefined FUN_144391fb8(void)

void FUN_144391fb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144392016 FUN_144392016 body=126 status=ok
// SIG undefined FUN_144392016(void)

void FUN_144392016(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144392085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14439209e FUN_14439209e body=20 status=ok
// SIG undefined FUN_14439209e(void)

undefined1 FUN_14439209e(longlong param_1)

{
  FUN_1443920b2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443920b2 FUN_1443920b2 body=126 status=ok
// SIG undefined FUN_1443920b2(void)

void FUN_1443920b2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_30,L"No SHiFT service");
  FUN_148f9f0a2();
  local_38 = local_30;
  (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 1),0,DAT_14cbf4b80);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144392132 FUN_144392132 body=91 status=ok
// SIG undefined FUN_144392132(void)

undefined8 * FUN_144392132(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3e6e0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443921a2 FUN_1443921a2 body=108 status=ok
// SIG undefined FUN_1443921a2(void)

void FUN_1443921a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fea80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_14666c91a(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 14439220e FUN_14439220e body=108 status=ok
// SIG undefined FUN_14439220e(void)

void FUN_14439220e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4fea80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_14666c91a(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 14439227a FUN_14439227a body=142 status=ok
// SIG undefined FUN_14439227a(void)

void FUN_14439227a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4fea80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e6e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  FUN_14666c91a(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443922f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144392308 FUN_144392308 body=88 status=ok
// SIG undefined FUN_144392308(void)

void FUN_144392308(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  local_18 = param_3;
  local_9 = param_4;
  FUN_1443923be(param_1 + 0x18,&local_1c,&local_18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144392362 FUN_144392362 body=90 status=ok
// SIG undefined FUN_144392362(void)

undefined8 FUN_144392362(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  local_18 = param_3;
  local_9 = param_4;
  FUN_1443923be(param_1 + 0x18,&local_1c,&local_18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443923be FUN_1443923be body=1950 status=ok
// SIG undefined FUN_1443923be(void)

void FUN_1443923be(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 **ppuVar3;
  longlong *plVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong **pplVar14;
  ushort uVar15;
  ulonglong uVar16;
  ushort uVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  longlong **local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  int local_58;
  undefined1 local_54 [4];
  undefined8 *local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = *param_3;
  iVar2 = *param_2;
  ppuVar3 = (undefined8 **)*param_1;
  local_58 = iVar2;
  if ((lVar8 == 0) || (*param_4 == '\0')) {
    puVar12 = ppuVar3[0x31];
    local_88 = (undefined8 **)0x0;
    local_80 = (longlong **)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_1446efa72(&local_88,0,3,0x10);
    local_80._0_4_ = 3;
    *local_88 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    puVar11 = (undefined8 *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (puVar11 == (undefined8 *)0x0) {
      LOCK();
      UNLOCK();
      puVar11 = (undefined8 *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_88[2] = puVar11;
    *local_88 = &PTR_FUN_14ba3e930;
    local_88[3] = ppuVar3;
    *(int *)(local_88 + 4) = iVar2;
    FUN_145c398c4(puVar12,&local_88);
    if ((int)local_80 != 0) {
      if (local_88 == (undefined8 **)0x0) goto LAB_144392ab4;
      (*(code *)**local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80._0_4_ = 0;
    }
    if (local_88 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    goto LAB_144392ab4;
  }
  if (*(int *)(lVar8 + 0x120) != 3) {
    FUN_1446efa72((longlong *)(lVar8 + 0x118),0,3,0x10);
    *(undefined4 *)(lVar8 + 0x120) = 3;
  }
  puVar12 = *(undefined8 **)(lVar8 + 0x118);
  *puVar12 = &PTR_LAB_14ba3e7c0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  puVar12[2] = lVar10;
  *puVar12 = &PTR_FUN_14ba3e750;
  puVar12[3] = ppuVar3;
  *(int *)(puVar12 + 4) = iVar2;
  puVar12 = ppuVar3[0x31];
  plVar7 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ba3e830;
  plVar4 = plVar7 + 2;
  FUN_14615530a(plVar4,puVar12,lVar8,iVar2);
  local_68 = plVar4;
  local_60 = plVar7;
  (**(code **)(plVar7[2] + 8))(plVar4,&local_88);
  pplVar5 = local_80;
  if (local_80 == (longlong **)0x0) {
    *(undefined8 ***)(lVar8 + 0x28) = local_88;
    pplVar14 = *(longlong ***)(lVar8 + 0x30);
    if (pplVar14 != (longlong **)0x0) {
      *(undefined8 *)(lVar8 + 0x30) = 0;
LAB_14439260a:
      LOCK();
      plVar4 = (longlong *)(pplVar14 + 1);
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (*(code *)**pplVar14)(pplVar14);
        LOCK();
        piVar1 = (int *)((longlong)pplVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443925fd:
        if (iVar2 == 0) {
          (**(code **)((longlong)*pplVar14 + 0x10))(pplVar14);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    *(undefined8 ***)(lVar8 + 0x28) = local_88;
    pplVar14 = *(longlong ***)(lVar8 + 0x30);
    if (local_80 == pplVar14) {
      LOCK();
      plVar4 = (longlong *)(local_80 + 1);
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (*(code *)**local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)pplVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        pplVar14 = pplVar5;
        goto joined_r0x0001443925fd;
      }
    }
    else {
      *(longlong ***)(lVar8 + 0x30) = local_80;
      if (pplVar14 != (longlong **)0x0) goto LAB_14439260a;
    }
  }
  pplVar5 = local_80;
  if (local_80 != (longlong **)0x0) {
    LOCK();
    plVar4 = (longlong *)(local_80 + 1);
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (*(code *)**local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)pplVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)((longlong)*pplVar5 + 0x10))(pplVar5);
      }
    }
  }
  plVar7 = local_60;
  plVar4 = local_68;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_88 = (undefined8 **)0x0;
  local_80 = (longlong **)((ulonglong)local_80 & 0xffffffff00000000);
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80._0_4_ = 3;
  *local_88 = &PTR_LAB_14b507390;
  LOCK();
  UNLOCK();
  puVar12 = (undefined8 *)(DAT_14c758608 + 1);
  lVar13 = DAT_14c758608 + 1;
  if (puVar12 == (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    puVar12 = (undefined8 *)(DAT_14c758608 + 2);
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_88[2] = puVar12;
  *local_88 = &PTR_FUN_14ba3e850;
  local_88[3] = ppuVar3;
  local_88[4] = plVar4;
  local_88[5] = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_1457aa4da(lVar8 + 0x128,&local_50,&local_88);
    if ((int)local_80 != 0) {
      if (local_88 == (undefined8 **)0x0) goto LAB_1443927c1;
      (*(code *)**local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80._0_4_ = 0;
    }
    if (local_88 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_1457aa4da(lVar8 + 0x128,&local_50,&local_88);
    if ((int)local_80 == 0) {
LAB_144392796:
      if (local_88 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_88 != (undefined8 **)0x0) {
      (*(code *)**local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80._0_4_ = 0;
      goto LAB_144392796;
    }
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)();
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
LAB_1443927c1:
  if ((int)param_1[2] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)param_1[1];
  }
  lVar8 = 0;
  while( true ) {
    uVar15 = *(ushort *)((longlong)puVar9 + lVar8);
    uVar16 = (ulonglong)uVar15;
    uVar17 = *(ushort *)((longlong)L"shift" + lVar8);
    if (uVar15 != uVar17) break;
    if (uVar15 == 0) goto LAB_144392829;
LAB_1443927f9:
    lVar8 = lVar8 + 2;
  }
  if ((uVar17 | uVar15) < 0x80) {
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    uVar18 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
    if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar18]) goto LAB_1443927f9;
  }
  if (uVar15 != uVar17) goto LAB_14439284b;
LAB_144392829:
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  uVar6 = FUN_144a1ccda(puVar9,0);
  *(undefined4 *)(local_68 + 8) = uVar6;
LAB_14439284b:
  (**(code **)(*local_68 + 8))(local_68,&local_50);
  local_88 = &local_50;
  local_80 = &local_68;
  FUN_14619a4ee(ppuVar3 + 0x3c,local_54);
  plVar4 = (longlong *)CONCAT44(uStack_44,local_48);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_88 = (undefined8 **)&local_58;
  local_80 = &local_68;
  FUN_146147e4c(ppuVar3 + 0x32,&local_50);
  plVar4 = local_68;
  lVar8 = local_68[3];
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x1a8) != 2) {
      FUN_1446efa72((longlong *)(lVar8 + 0x1a0),0,2,0x10);
      *(undefined4 *)(lVar8 + 0x1a8) = 2;
    }
    puVar12 = *(undefined8 **)(lVar8 + 0x1a0);
    *puVar12 = &PTR_LAB_14ba407c0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar12[2] = lVar13;
    *puVar12 = &PTR_FUN_14ba40750;
    puVar12[3] = plVar4;
  }
  FUN_14666c838(local_68);
  FUN_14606593a(ppuVar3[0x31],&local_68);
  puVar12 = ppuVar3[0x31];
  local_80._0_4_ = local_58;
  local_88 = ppuVar3;
  (**(code **)(*local_68 + 8))();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar13;
  *local_50 = &PTR_FUN_14ba3e8c0;
  local_50[3] = local_88;
  *(int *)(local_50 + 4) = (int)local_80;
  local_50[5] = local_78;
  local_50[6] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  FUN_145c398c4(puVar12,&local_50);
  if (local_48 == 0) {
LAB_144392a58:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_144392a58;
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_144392ab4:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144392b5e FUN_144392b5e body=29 status=ok
// SIG undefined FUN_144392b5e(void)

undefined8 FUN_144392b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144392b90 FUN_144392b90 body=93 status=ok
// SIG undefined FUN_144392b90(void)

void FUN_144392b90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3e7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144392bee FUN_144392bee body=93 status=ok
// SIG undefined FUN_144392bee(void)

void FUN_144392bee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3e7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144392c4c FUN_144392c4c body=126 status=ok
// SIG undefined FUN_144392c4c(void)

void FUN_144392c4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba3e7c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e750;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144392cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144392cdc FUN_144392cdc body=29 status=ok
// SIG undefined FUN_144392cdc(void)

undefined8 FUN_144392cdc(longlong param_1)

{
  FUN_145c391ea(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),1);
  return 1;
}



// FUNCTION 144392cfa FUN_144392cfa body=83 status=ok
// SIG undefined FUN_144392cfa(void)

undefined8 * FUN_144392cfa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3e850;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 144392d62 FUN_144392d62 body=118 status=ok
// SIG undefined FUN_144392d62(void)

void FUN_144392d62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144392dd8 FUN_144392dd8 body=118 status=ok
// SIG undefined FUN_144392dd8(void)

void FUN_144392dd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b507390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3e850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144392e4e FUN_144392e4e body=156 status=ok
// SIG undefined FUN_144392e4e(void)

void FUN_144392e4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b507390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3e850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144392eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144392eea FUN_144392eea body=66 status=ok
// SIG undefined FUN_144392eea(void)

void FUN_144392eea(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144392f74(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144392f2e FUN_144392f2e body=68 status=ok
// SIG undefined FUN_144392f2e(void)

undefined8 FUN_144392f2e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144392f74(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144392f74 FUN_144392f74 body=332 status=ok
// SIG undefined FUN_144392f74(void)

void FUN_144392f74(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  iVar3 = *(int *)(*param_2 + 0x108);
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  FUN_1402980a2(param_1[1] + 0x30,*(undefined8 *)(*param_2 + 0x100),iVar6);
  (**(code **)(**(longlong **)(lVar4 + 0x188) + 0xb8))(*(longlong **)(lVar4 + 0x188),&local_38);
  plVar7 = local_30;
  lVar4 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
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
  if (lVar4 != 0) {
    local_38 = param_1[1];
    plVar5 = (longlong *)param_1[2];
    local_30 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_1460662aa(lVar4,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_1460662aa(lVar4);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


