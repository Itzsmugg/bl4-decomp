// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14170fbcc FUN_14170fbcc body=67 status=ok
// SIG undefined FUN_14170fbcc(void)

bool FUN_14170fbcc(longlong *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if ((int)param_1[9] == 0) {
    bVar1 = SBORROW4(param_2,param_3);
    param_2 = param_2 - param_3;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39474);
    param_2 = FUN_1448332aa(param_1,&DAT_149e39474);
    bVar1 = SBORROW4(param_2,param_4);
    param_2 = param_2 - param_4;
  }
  return bVar1 == param_2 < 0;
}



// FUNCTION 14170fc10 FUN_14170fc10 body=102 status=ok
// SIG undefined FUN_14170fc10(void)

undefined8 * FUN_14170fc10(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = *param_2;
  local_28 = 0;
  FUN_140076e46(*(undefined4 *)(param_2 + 1),*param_2,&local_28);
  param_1[1] = local_28;
  param_1[2] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14170fc78 FUN_14170fc78 body=278 status=ok
// SIG undefined FUN_14170fc78(void)

undefined8 FUN_14170fc78(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
LAB_14170fd18:
    uVar4 = 1;
  }
  else {
    if ((*(uint *)(param_1 + 8) & 0x809f600) == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c949388) {
        FUN_144b3d300(&DAT_14c949388);
        if (DAT_14c949388 == -1) {
          FUN_1446f470e(&local_20,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_20);
          _Init_thread_footer(&DAT_14c949388);
        }
      }
      if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(param_1 + 0x38))) &&
          (*(longlong *)
            (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) ==
           DAT_14c949380 + 0x30)) &&
         (plVar1 = *(longlong **)(param_1 + 0xb8), plVar1 != (longlong *)0x0)) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          if (lVar3 != 0) goto LAB_14170fd18;
        }
      }
    }
    uVar4 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14170fd90 FUN_14170fd90 body=481 status=ok
// SIG undefined FUN_14170fd90(void)

undefined8 * FUN_14170fd90(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947e70) && (FUN_144b3d300(&DAT_14c947e70), DAT_14c947e70 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_14170fd90;
    local_60 = 0x8000000000000000;
    local_68 = 0x8001;
    FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
    atexit(FUN_1427b4416);
    _Init_thread_footer(&DAT_14c947e70);
  }
  puVar1[1] = &DAT_14c947e20;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e62650;
  puVar1[0xf] = 0;
  uVar2 = *param_1;
  local_40 = uVar2;
  if (((uVar2 & 1) != 0) && (uVar2 = uVar2 & 0xfffffffffffffffe, uVar2 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
  }
  FUN_1403a630a(puVar1,&local_40,param_2,param_3);
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x18;
  *puVar1 = &PTR_LAB_149e62650;
  *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
  puVar1[0xf] = 0;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 14170ff72 FUN_14170ff72 body=142 status=ok
// SIG undefined FUN_14170ff72(void)

void FUN_14170ff72(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_1403a658e();
  piVar1 = (int *)(param_1 + 0x70);
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*piVar1 != -1)) {
    iVar3 = FUN_14041e9d4(*piVar1,0);
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 141710000 FUN_141710000 body=51 status=ok
// SIG undefined FUN_141710000(void)

void FUN_141710000(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141710034 FUN_141710034 body=211 status=ok
// SIG undefined FUN_141710034(void)

undefined8 FUN_141710034(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x70) + 1U < 2) {
    FUN_140056680(param_2,L"FGameDataHandle");
  }
  else {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      FUN_140002266(param_2,L"TGameDataHandle<%u>");
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
    FUN_1400021e4(&local_28,&local_38);
    puVar1 = local_38;
    if (local_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"TGameDataHandle<%u, F%s>",*(undefined4 *)(param_1 + 0x70),puVar1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 141710108 FUN_141710108 body=424 status=ok
// SIG undefined FUN_141710108(void)

undefined8 * FUN_141710108(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947f70) && (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_141710108;
    local_60 = 0x1000000000000000;
    local_68 = 0x8001;
    FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
    atexit(FUN_1427b4857);
    _Init_thread_footer(&DAT_14c947f70);
  }
  puVar1[1] = &DAT_14c947f20;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e62a10;
  uVar2 = *param_1;
  local_40 = uVar2;
  if (((uVar2 & 1) != 0) && (uVar2 = uVar2 & 0xfffffffffffffffe, uVar2 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
  }
  FUN_1403a630a(puVar1,&local_40,param_2,param_3);
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x18;
  *puVar1 = &PTR_LAB_149e62a10;
  puVar1[0xe] = 0;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 1417102b2 FUN_1417102b2 body=196 status=ok
// SIG undefined FUN_1417102b2(void)

undefined8 FUN_1417102b2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140056680(param_2,L"FGbxDefPtr");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(param_2,L"TGbxDefPtr<%s%s>",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14171037a FUN_14171037a body=149 status=ok
// SIG undefined FUN_14171037a(void)

void FUN_14171037a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  FUN_140a6c1c4(param_2,param_1[0xe]);
  lVar1 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar1 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141710410 FUN_141710410 body=46 status=ok
// SIG undefined FUN_141710410(void)

void FUN_141710410(longlong param_1,longlong *param_2)

{
  FUN_1403a658e();
                    /* WARNING: Could not recover jumptable at 0x00014171043b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 14171043e FUN_14171043e body=51 status=ok
// SIG undefined FUN_14171043e(void)

void FUN_14171043e(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141710472 FUN_141710472 body=539 status=ok
// SIG undefined FUN_141710472(void)

void FUN_141710472(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == 1) {
    param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)(param_1 + 0x44));
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = param_3[1];
  if ((lVar1 == 0) || (lVar2 != 0)) {
    if (lVar2 == 0) {
      FUN_140056680(&local_68,&DAT_149e01fe8);
    }
    else {
      local_40 = *(undefined2 **)(lVar2 + 0x18);
      FUN_1400021e4(&local_40,&local_68);
    }
    puVar5 = &DAT_149dfb77a;
    if ((int)local_60 != 0) {
      puVar5 = local_68;
    }
    FUN_1400021e4(param_3,&local_40);
    puVar6 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar6 = local_40;
    }
    FUN_140002266(&local_50,L"(\"%s\",\"%s\")",puVar6,puVar5);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = local_48 + -1;
    if (local_48 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_50,iVar3);
    local_78 = local_50;
  }
  else {
    local_68 = (undefined2 *)*param_3;
    cVar4 = FUN_14170fc78();
    local_60 = lVar1;
    if (cVar4 == '\0') {
      local_60 = 0;
    }
    local_58 = 0;
    if (local_60 == 0) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      local_50 = *(undefined2 **)(local_60 + 0x18);
      FUN_1400021e4(&local_50,&local_40);
    }
    puVar5 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar5 = local_40;
    }
    FUN_1400021e4(&local_68,&local_50);
    puVar6 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar6 = local_50;
    }
    FUN_140002266(&local_78,L"(\"%s\",\"%s\")",puVar6,puVar5);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = local_70 + -1;
    if (local_70 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_78,iVar3);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171068e FUN_14171068e body=856 status=ok
// SIG undefined FUN_14171068e(void)

char FUN_14171068e(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)
           ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
           *(int *)(param_1 + 0x44) + param_4);
  if (plVar7 == (longlong *)0x0) {
    uVar8 = *(ulonglong *)(param_2 + 0xc);
    bVar1 = DAT_14c87ead8 & 1;
joined_r0x00014171077d:
    if (bVar1 == 0) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = 1;
    }
LAB_141710744:
    cVar2 = (uVar8 != DAT_14c892bfc) * '\x02';
    goto LAB_141710754;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar8 = *(ulonglong *)(param_2 + 0xc);
  if ((DAT_14c87ead8 & 1) == 0) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = 1;
  }
  if (uVar8 == DAT_14c892b58) {
    local_68 = (longlong *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_68);
    if ((longlong *)*plVar7 != local_68) {
      plVar7[2] = 0;
    }
    *plVar7 = (longlong)local_68;
    if (plVar7[1] != lVar4) {
LAB_1417107bc:
      plVar7[2] = 0;
    }
LAB_1417107c4:
    cVar2 = FUN_14170fc78(lVar4);
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    cVar2 = FUN_14170fc78(lVar4);
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    plVar7[1] = lVar4;
  }
  else {
    uVar8 = *(ulonglong *)(param_2 + 0xc);
    if (uVar8 == DAT_14c892b74) {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_68);
      plVar5 = local_68;
      if ((int)uStack_60 == 0) {
        plVar5 = (longlong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,plVar5,1);
      if (*plVar7 != local_40) {
        plVar7[2] = 0;
      }
      *plVar7 = local_40;
      if (plVar7[1] != lVar4) {
        plVar7[2] = 0;
      }
      cVar2 = FUN_14170fc78(lVar4);
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      cVar2 = FUN_14170fc78(lVar4);
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      plVar7[1] = lVar4;
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (uVar8 != DAT_14c892b78) {
        if (uVar8 != DAT_14c892c04) {
          plVar5 = *(longlong **)(*param_3 + 8);
          if ((*(byte *)((longlong)plVar5 + 0x2b) & 2) != 0) {
            (**(code **)(*plVar5 + 600))(plVar5,plVar7);
            uVar8 = *(ulonglong *)(param_2 + 0xc);
            bVar1 = DAT_14c87ead8;
            goto joined_r0x00014171077d;
          }
          uVar8 = *(ulonglong *)(param_2 + 0xc);
          goto LAB_141710744;
        }
        local_68 = (longlong *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        local_58 = 0;
        FUN_14041e7fb(*(undefined8 *)(*param_3 + 8),&local_68);
        if ((longlong *)*plVar7 != local_68) {
          plVar7[2] = 0;
        }
        *plVar7 = (longlong)local_68;
        local_38 = 0;
        FUN_140076e46(uStack_60 & 0xffffffff,local_68,&local_38);
        lVar4 = FUN_14686b534(local_38,lVar4);
        if (plVar7[1] != lVar4) goto LAB_1417107bc;
        goto LAB_1417107c4;
      }
      FUN_144a5dc74(&local_68);
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_68);
      puVar3 = (undefined8 *)FUN_1447a1f4a(&local_68);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*puVar3;
      }
      FUN_1446f470e(&local_48,puVar6,1);
      if (*plVar7 != local_48) {
        plVar7[2] = 0;
      }
      *plVar7 = local_48;
      if (plVar7[1] != lVar4) {
        plVar7[2] = 0;
      }
      cVar2 = FUN_14170fc78(lVar4);
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      cVar2 = FUN_14170fc78(lVar4);
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      plVar7[1] = lVar4;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  cVar2 = '\x03';
LAB_141710754:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417109e8 FUN_1417109e8 body=219 status=ok
// SIG undefined FUN_1417109e8(void)

undefined8 * FUN_1417109e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(param_1,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947fc8) {
    FUN_144b3d300(&DAT_14c947fc8);
    if (DAT_14c947fc8 == -1) {
      uVar2 = FUN_1446dcc8c();
      FUN_14000176a(&DAT_14c947f78,L"FGbxInlineStructProperty",0,0x2000000000000000,0x108001,
                    0x2000000000000000,uVar2,FUN_14686c8ac);
      atexit(FUN_1427b495e);
      _Init_thread_footer(&DAT_14c947fc8);
    }
  }
  puVar1[1] = &DAT_14c947f78;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e62830;
  puVar1[0xf] = 0;
  return puVar1;
}



// FUNCTION 141710ac4 FUN_141710ac4 body=73 status=ok
// SIG undefined FUN_141710ac4(void)

void FUN_141710ac4(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141710b0e FUN_141710b0e body=28 status=ok
// SIG undefined FUN_141710b0e(void)

undefined8 * FUN_141710b0e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b2348();
  return param_2;
}



// FUNCTION 141710b2a FUN_141710b2a body=178 status=ok
// SIG undefined FUN_141710b2a(void)

undefined8 FUN_141710b2a(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680();
  uVar5 = (longlong)local_20 * 2;
  do {
    if (uVar5 == 0) {
      uVar4 = 0;
      goto LAB_141710b78;
    }
    uVar1 = uVar5 - 2;
    lVar2 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)local_28 + lVar2) != 0x2f);
  uVar4 = (int)(uVar1 >> 1) + 1;
LAB_141710b78:
  uVar6 = local_20 - 1;
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar6 = 0;
  }
  if ((int)uVar6 <= (int)uVar4) {
    uVar4 = uVar6;
  }
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  FUN_14006620a(param_1,puVar3 + uVar5,uVar6 - (int)uVar5);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141710bde FUN_141710bde body=509 status=ok
// SIG undefined FUN_141710bde(void)

bool FUN_141710bde(longlong *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [40];
  ushort *local_60;
  uint local_58;
  longlong local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  puVar4 = DAT_14c948340;
  uVar10 = 0;
  uVar12 = (ulonglong)(DAT_14c948348 - 1);
  if (DAT_14c948348 == 0) {
    uVar12 = uVar10;
  }
  do {
    uVar9 = (uint)(uVar12 + uVar10);
    if ((int)uVar9 < 3) {
      if (uVar9 != 2) {
        if (uVar9 == 0) {
          bVar8 = false;
          goto LAB_141710cc2;
        }
LAB_141710c7e:
        bVar8 = false;
        if ((int)uVar9 <= (int)uVar2) {
          uVar6 = (int)uVar2 >> 0x1f & uVar2;
          local_48 = uVar2 - uVar6;
          if ((int)uVar9 < (int)local_48) {
            local_48 = uVar9;
          }
          if ((int)local_48 < 1) {
            local_48 = 0;
          }
          local_50 = lVar3 + (longlong)(int)uVar6 * 2;
          local_60 = DAT_14c948340;
          local_58 = uVar9;
          cVar5 = FUN_14005b3f4();
          if ((cVar5 != '\0') && (bVar8 = true, uVar9 != uVar2)) {
            iVar11 = (int)uVar12;
            if ((puVar4[(longlong)iVar11 + (uVar10 - 1)] == 0x2f) ||
               (puVar4[(longlong)iVar11 + (uVar10 - 1)] == 0x5c)) {
              if (iVar11 + (int)uVar10 == 1) {
                bVar8 = *(short *)(lVar3 + 2) != 0x2f && *(short *)(lVar3 + 2) != 0x5c;
              }
            }
            else {
              sVar1 = *(short *)(lVar3 + (longlong)iVar11 * 2 + uVar10 * 2);
              bVar8 = sVar1 == 0x2f || sVar1 == 0x5c;
            }
          }
        }
LAB_141710cc2:
        if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return bVar8;
      }
      if (((DAT_14c948340[1] != 0x5c) && (DAT_14c948340[1] != 0x2f)) ||
         ((*DAT_14c948340 - 0x2f < 0x2e &&
          ((0x200000000801U >> ((ulonglong)(*DAT_14c948340 - 0x2f) & 0x3f) & 1) != 0))))
      goto LAB_141710c7e;
    }
    else {
      uVar7 = uVar12 + uVar10 & 0xffffffff;
      if (((DAT_14c948340[uVar7 - 1] != 0x2f) && (DAT_14c948340[uVar7 - 1] != 0x5c)) ||
         (DAT_14c948340[uVar7 - 2] == 0x3a)) goto LAB_141710c7e;
    }
    uVar10 = uVar10 - 1;
  } while( true );
}



// FUNCTION 141710ddc FUN_141710ddc body=29 status=ok
// SIG undefined FUN_141710ddc(void)

undefined8 FUN_141710ddc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141710dfa FUN_141710dfa body=29 status=ok
// SIG undefined FUN_141710dfa(void)

undefined8 FUN_141710dfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141710e18 FUN_141710e18 body=660 status=ok
// SIG undefined FUN_141710e18(void)

void FUN_141710e18(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_4) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(param_3 + lVar5);
      if (*(longlong *)(param_2 + lVar5) != lVar4) {
        *(undefined8 *)(param_2 + 0x10 + lVar5) = 0;
      }
      *(longlong *)(param_2 + lVar5) = lVar4;
      lVar4 = *(longlong *)(param_3 + 8 + lVar5);
      if (*(longlong *)(param_2 + 8 + lVar5) != lVar4) {
        *(undefined8 *)(param_2 + 0x10 + lVar5) = 0;
      }
      if ((lVar4 == 0) || ((*(uint *)(lVar4 + 8) & 0x809f600) != 0)) {
LAB_141711002:
        lVar4 = 0;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c949388) {
          FUN_144b3d300(&DAT_14c949388);
          if (DAT_14c949388 == -1) {
            FUN_1446f470e(&local_40,L"GbxHasStructType",1);
            DAT_14c949380 = FUN_141473ad5(local_40);
            _Init_thread_footer(&DAT_14c949388);
          }
        }
        if ((((DAT_14c949380 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
            (*(longlong *)
              (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) !=
             DAT_14c949380 + 0x30)) ||
           (plVar1 = *(longlong **)(lVar4 + 0xb8), plVar1 == (longlong *)0x0)) goto LAB_141711002;
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 == '\0') goto LAB_141711002;
        lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        if ((lVar3 == 0) || ((*(uint *)(lVar4 + 8) & 0x809f600) != 0)) goto LAB_141711002;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c949388) {
          FUN_144b3d300(&DAT_14c949388);
          if (DAT_14c949388 == -1) {
            FUN_1446f470e(&local_40,L"GbxHasStructType",1);
            DAT_14c949380 = FUN_141473ad5(local_40);
            _Init_thread_footer(&DAT_14c949388);
          }
        }
        if (((DAT_14c949380 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
           ((*(longlong *)
              (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) !=
             DAT_14c949380 + 0x30 ||
            (plVar1 = *(longlong **)(lVar4 + 0xb8), plVar1 == (longlong *)0x0))))
        goto LAB_141711002;
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 == '\0') goto LAB_141711002;
        lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        if (lVar3 == 0) goto LAB_141711002;
      }
      *(longlong *)(param_2 + 8 + lVar5) = lVar4;
      *(undefined8 *)(param_2 + 0x10 + lVar5) = *(undefined8 *)(param_3 + 0x10 + lVar5);
      lVar5 = lVar5 + 0x18;
    } while ((ulonglong)param_4 * 0x18 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417110ae FUN_1417110ae body=29 status=ok
// SIG undefined FUN_1417110ae(void)

undefined8 FUN_1417110ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417110cc FUN_1417110cc body=29 status=ok
// SIG undefined FUN_1417110cc(void)

undefined8 FUN_1417110cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417110ea FUN_1417110ea body=61 status=ok
// SIG undefined FUN_1417110ea(void)

void FUN_1417110ea(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141711127 FUN_141711127 body=97 status=ok
// SIG undefined FUN_141711127(void)

void FUN_141711127(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (plVar1[4] != 0) {
          FUN_1400020a8();
        }
        if (plVar1[2] != 0) {
          FUN_1400020a8();
        }
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 141711188 FUN_141711188 body=272 status=ok
// SIG undefined FUN_141711188(void)

undefined8
FUN_141711188(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_AL;
  longlong *plVar3;
  undefined7 extraout_var;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*param_2 == 0 && *param_3 == 0) {
    uVar4 = (undefined7)((ulonglong)param_2 >> 8);
    uVar2 = 1;
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) != 0) {
      uVar1 = *(uint *)(param_2 + 2);
      uVar2 = 0;
      uVar4 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14171126a;
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         ((((int)plVar3[2] == *(int *)((longlong)param_2 + 0x14) &&
           ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (lVar5 = *plVar3, lVar5 != 0)))) {
        lVar6 = 0;
        lVar8 = 0;
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar8 = lVar5;
        }
        if (*(int *)((longlong)param_3 + 0x14) != 0) {
          uVar1 = *(uint *)(param_3 + 2);
          lVar6 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar7 == (longlong *)0x0) ||
               (((int)plVar7[2] != *(int *)((longlong)param_3 + 0x14) ||
                ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
              lVar6 = 0;
            }
            else {
              lVar6 = *plVar7;
            }
          }
        }
        if (lVar8 == lVar6) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
            lVar5 = 0;
          }
          FUN_14470ec92(lVar5,*param_2,*param_3,0);
          uVar2 = extraout_AL;
          uVar4 = extraout_var;
          goto LAB_14171126a;
        }
      }
    }
    uVar2 = 0;
    uVar4 = 0;
  }
LAB_14171126a:
  *param_5 = uVar2;
  return CONCAT71(uVar4,1);
}



// FUNCTION 141711298 FUN_141711298 body=161 status=ok
// SIG undefined FUN_141711298(void)

void FUN_141711298(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 8))();
    lVar1 = *param_1;
    local_1a8 = *(longlong *)(param_2 + 8);
    if (local_1a8 == 0) {
      FUN_1404a881e(param_2);
      local_1a8 = *(longlong *)(param_2 + 8);
    }
    local_198 = &local_1a0;
    local_1b0 = &PTR_FUN_149e37810;
    local_1a0 = &local_1b0;
    (**(code **)(*plVar2 + 0x2c0))(plVar2,local_198,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171133a FUN_14171133a body=22 status=ok
// SIG undefined FUN_14171133a(void)

undefined8 FUN_14171133a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4();
  return param_2;
}



// FUNCTION 141711350 FUN_141711350 body=108 status=ok
// SIG undefined FUN_141711350(void)

undefined8 * FUN_141711350(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(param_1 + 10,L"Uncategorized");
  param_1[0xc] = 0;
  param_1[0xd] = 0xc35000000000;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1417113bc FUN_1417113bc body=71 status=ok
// SIG undefined FUN_1417113bc(void)

void FUN_1417113bc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141711404 FUN_141711404 body=54 status=ok
// SIG undefined FUN_141711404(void)

undefined8 * FUN_141711404(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144869430();
  *param_1 = &PTR_FUN_149e63350;
  *(undefined4 *)(param_1 + 0x12) = param_2;
  param_1[0x13] = param_3;
  return param_1;
}



// FUNCTION 14171143a FUN_14171143a body=128 status=ok
// SIG undefined FUN_14171143a(void)

longlong FUN_14171143a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  FUN_1400021e4(param_2,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_144a1ccda(puVar2,uVar1);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417114bc FUN_1417114bc body=288 status=ok
// SIG undefined FUN_1417114bc(void)

longlong FUN_1417114bc(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined2 *local_198;
  undefined8 uStack_190;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(param_1 + 0x98) == 0) {
LAB_1417114ee:
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    if (*param_2 == 0) goto LAB_1417115c7;
    local_198 = (undefined2 *)0x0;
    uStack_190 = 0;
    FUN_1401031ac(*param_2,0);
  }
  else {
    if (*param_2 != 0) {
      cVar1 = FUN_144b00bde();
      if (cVar1 != '\0') {
        FUN_146875cf2(&local_198);
        uVar2 = FUN_146875dcc(&local_198,*param_2,*(undefined8 *)(param_1 + 0x98),
                              *(undefined4 *)(param_1 + 0x90));
        *(undefined4 *)(param_1 + 0x90) = uVar2;
        FUN_146875fd4(&local_198);
        goto LAB_141711547;
      }
      goto LAB_1417114ee;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x90);
LAB_1417115c7:
    FUN_140056680(&local_198,&DAT_149e01fe8);
  }
  puVar3 = local_198;
  if ((int)uStack_190 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = FUN_144a1ccda(puVar3,uVar2);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  if (local_198 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_141711547:
  if ((local_20 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417115de FUN_1417115de body=28 status=ok
// SIG undefined FUN_1417115de(void)

undefined8 FUN_1417115de(undefined8 param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 1417115fa FUN_1417115fa body=946 status=ok
// SIG undefined FUN_1417115fa(void)

longlong FUN_1417115fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  char local_9d;
  undefined1 local_9c [4];
  code *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if (*param_2 == 0) {
      local_88 = (code *)0x0;
      uStack_80 = 0;
    }
    else {
      local_88 = (code *)0x0;
      uStack_80 = 0;
      FUN_1401031ac(*param_2,0,&local_88);
    }
    FUN_14021219d(*(undefined8 *)(param_1 + 0x90),&local_88);
    pcVar4 = local_88;
  }
  else {
    local_98 = (code *)0x0;
    uStack_90 = 0;
    FUN_14021219d(*(undefined8 *)(param_1 + 0x90),&local_98);
    pcVar4 = local_98;
    if ((int)uStack_90 < 2) {
      *param_2 = 0;
    }
    else {
      if (DAT_14c927740 == 0) {
        local_c0 = &local_88;
        local_88 = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_146856450;
        local_d0 = FUN_1427b121c;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000021;
        local_f0 = CONCAT44(local_f0._4_4_,8);
        local_f8 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = FUN_140277b32(DAT_14c927740,0,pcVar4,0);
      *param_2 = lVar1;
      if (lVar1 == 0) {
        pcVar4 = local_98;
        if (*(char *)(param_1 + 0x98) != '\x01') goto LAB_141711698;
        if ((int)uStack_90 == 0) {
          pcVar4 = (code *)&DAT_149dfb77a;
        }
        uVar3 = FUN_1446f8646();
        local_e0 = 0;
        local_f0 = 0;
        local_e8 = CONCAT31(local_e8._1_3_,1);
        local_f8 = 0;
        lVar1 = FUN_1412ecd05(uVar3,0,pcVar4,0);
        *param_2 = lVar1;
      }
      pcVar4 = local_98;
      if ((*(char *)(param_1 + 0x99) == '\x01') && (lVar1 != 0)) {
        lVar2 = FUN_140007dea();
        pcVar4 = local_98;
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (lVar6 = *param_2,
           lVar6 != 0 &&
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          uVar5 = 0;
          do {
            lVar1 = FUN_140007dea();
            pcVar4 = local_98;
            if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
              lVar2 = *param_2;
LAB_1417118a0:
              if (lVar2 != 0) {
                lVar1 = FUN_140007dea();
                pcVar4 = local_98;
                if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
                  local_68 = 0;
                  local_60 = 0;
                  local_88 = (code *)0x0;
                  uStack_80 = 0;
                  local_5c = 0xffffffff00000080;
                  local_54 = 0;
                  local_48 = 0;
                  local_40 = 0;
                  FUN_1457b12ce(&local_88,local_9c,param_2,0);
                  lVar1 = *param_2;
                  if (lVar1 == 0) goto LAB_14171197e;
                  goto LAB_14171192a;
                }
              }
              break;
            }
            lVar2 = *param_2;
            if ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30) || (4 < uVar5))
            goto LAB_1417118a0;
            uVar5 = uVar5 + 1;
            lVar6 = *(longlong *)(lVar2 + 0x28);
            *param_2 = lVar6;
          } while (lVar6 != 0);
        }
      }
    }
  }
  goto LAB_141711698;
  while (lVar1 = *param_2, lVar1 != 0) {
LAB_14171192a:
    lVar2 = FUN_140007dea();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) break;
    *param_2 = *(longlong *)(*param_2 + 0x28);
    FUN_1457b12ce(&local_88,local_9c,param_2,&local_9d);
    if (local_9d == '\x01') {
      *param_2 = 0;
      break;
    }
  }
LAB_14171197e:
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_88);
  pcVar4 = local_98;
LAB_141711698:
  if (pcVar4 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417119b4 FUN_1417119b4 body=28 status=ok
// SIG undefined FUN_1417119b4(void)

undefined8 FUN_1417119b4(undefined8 param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 1417119d0 FUN_1417119d0 body=309 status=ok
// SIG undefined FUN_1417119d0(void)

void FUN_1417119d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x2b0) + 0x48);
  puVar7 = &DAT_14c89603c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar7 = puVar1;
  }
  *(undefined8 *)(param_2 + 0x40) = *puVar7;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x48);
  puVar4 = &DAT_149e3ca54;
  if (lVar5 != 0) {
    puVar4 = (undefined4 *)(lVar5 + 8);
  }
  *(undefined4 *)(param_2 + 0x48) = *puVar4;
  lVar5 = FUN_140191a44(*(undefined8 *)(param_1 + 0x2b0));
  if (*(int *)(lVar5 + 8) != 0) {
    uVar6 = FUN_140191a44(*(undefined8 *)(param_1 + 0x2b0));
    FUN_14072bd0a(param_2,uVar6);
  }
  bVar3 = *(byte *)(param_2 + 0x28);
  bVar2 = (byte)(*(uint *)(*(longlong *)(param_1 + 0x2b0) + 0x2c) >> 7) & 0x40;
  *(byte *)(param_2 + 0x28) = bVar3 & 0xbf | bVar2;
  *(byte *)(param_2 + 0x28) =
       (bVar3 & 0xbc | bVar2 | *(byte *)(*(longlong *)(param_1 + 0x2b0) + 0x2d) & 2) + 1;
  *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 1;
  bVar3 = *(byte *)(param_2 + 0x2b) | 0x20;
  if (-1 < *(int *)(*(longlong *)(param_1 + 0x2b0) + 0x2c)) {
    bVar3 = *(byte *)(param_2 + 0x2b);
  }
  *(byte *)(param_2 + 0x2b) = bVar3 | 1;
  *(longlong *)(param_2 + 0xa0) = param_1 + 0xd8;
  *(longlong *)(param_2 + 0xb8) = param_1 + 0x178;
  *(longlong *)(param_2 + 0xa8) = param_1 + 0x2a8;
  *(longlong *)(param_2 + 0xb0) = param_1 + 0x390;
  *(longlong *)(param_2 + 0xc0) = param_1 + 0xe8;
  *(undefined1 *)(param_2 + 0xe0) = 0;
  *(bool *)(param_2 + 0xe1) = 0x3f0 < *(int *)(param_2 + 0x44);
  return;
}



// FUNCTION 141711b06 FUN_141711b06 body=77 status=ok
// SIG undefined FUN_141711b06(void)

void FUN_141711b06(longlong param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + 100);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 != 0 && *piVar1 == 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 141711b54 FUN_141711b54 body=591 status=ok
// SIG undefined FUN_141711b54(void)

void FUN_141711b54(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  iVar13 = 0;
  bVar7 = false;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    piVar8 = (int *)*param_3;
    piVar1 = piVar8 + *(int *)(param_3 + 1);
    do {
      if (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x174)) {
        iVar14 = 0;
      }
      else {
        iVar4 = *piVar8;
        lVar9 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar9 = param_1 + 0x178;
        }
        piVar12 = (int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)iVar4) * 4);
        iVar14 = 0;
        do {
          iVar5 = *piVar12;
          lVar9 = (longlong)iVar5;
          if (lVar9 == -1) break;
          piVar17 = (int *)(lVar9 * 0xc + *(longlong *)(param_1 + 0x140));
          iVar6 = *piVar17;
          if (iVar6 == iVar4) {
            lVar15 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar15 = param_1 + 0x178;
            }
            iVar11 = *(int *)(lVar15 + (longlong)piVar17[2] * 4);
            if (iVar11 == iVar5) {
              piVar16 = (int *)(lVar15 + (longlong)piVar17[2] * 4);
            }
            else {
              do {
                piVar16 = (int *)((longlong)iVar11 * 0xc + 4 + *(longlong *)(param_1 + 0x140));
                iVar11 = *piVar16;
              } while (iVar11 != iVar5);
            }
            *piVar16 = piVar17[1];
            lVar15 = *(longlong *)(param_1 + 0x140);
            if (*(int *)(param_1 + 0x174) != 0) {
              *(int *)(lVar15 + (longlong)*(int *)(param_1 + 0x170) * 0xc) = iVar5;
            }
            *(undefined4 *)(lVar15 + lVar9 * 0xc) = 0xffffffff;
            uVar10 = 0xffffffff;
            if (0 < *(int *)(param_1 + 0x174)) {
              uVar10 = *(undefined4 *)(param_1 + 0x170);
            }
            *(undefined4 *)(lVar15 + lVar9 * 0xc + 4) = uVar10;
            *(int *)(param_1 + 0x170) = iVar5;
            *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
            lVar9 = param_1 + 0x150;
            if (*(longlong *)(param_1 + 0x160) != 0) {
              lVar9 = *(longlong *)(param_1 + 0x160);
            }
            iVar11 = iVar5 + 0x1f;
            if (-1 < iVar5) {
              iVar11 = iVar5;
            }
            bVar3 = (byte)iVar5 & 0x1f;
            puVar2 = (uint *)(lVar9 + (longlong)(iVar11 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            iVar14 = iVar14 + 1;
          }
          else {
            piVar12 = piVar17 + 1;
          }
        } while (iVar6 != iVar4);
      }
      iVar13 = iVar13 + iVar14;
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
    bVar7 = 0 < iVar13;
  }
  if (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x174)) {
    FUN_14068ded2(param_1 + 0x140,0x200);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if ((bVar7) && (*(char *)(param_2 + 0x88) == '\x01')) {
    LOCK();
    bVar3 = *(byte *)(param_1 + 0x50);
    *(byte *)(param_1 + 0x50) = 1;
    UNLOCK();
    if ((bVar3 & 3) == 2) {
      FUN_1447458da(param_1 + 0x50,0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 141711da4 FUN_141711da4 body=130 status=ok
// SIG undefined FUN_141711da4(void)

undefined4 FUN_141711da4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1407d660c(param_1 + -8,param_2,*param_3,param_3 + 1,param_3 + 2,
                        *(undefined4 *)(param_3 + 3),*(undefined4 *)(param_3 + 4),param_3[5]);
  lVar1 = param_3[2];
  if (lVar1 != 0) {
    FUN_1401cb1ee(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = param_3[1];
  if (lVar1 != 0) {
    FUN_1449db362(lVar1);
    FUN_1400020a8(lVar1);
  }
  return uVar2;
}



// FUNCTION 141711e26 FUN_141711e26 body=139 status=ok
// SIG undefined FUN_141711e26(void)

ulonglong FUN_141711e26(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,*(int *)(param_1 + 0x5d8) != 0);
      goto LAB_141711e75;
    }
    goto LAB_141711e73;
  }
  DVar3 = GetCurrentThreadId();
  uVar5 = CONCAT71(uVar6,1);
  if (DVar3 == *(DWORD *)(param_1 + 0x280)) goto LAB_141711e75;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141711ea6;
    }
  }
  else {
LAB_141711ea6:
    if (*(int *)(param_1 + 0x5d8) != 0) goto LAB_141711e75;
  }
LAB_141711e73:
  uVar5 = 0;
LAB_141711e75:
  return uVar5 & 0xffffffff;
}



// FUNCTION 141711eb2 FUN_141711eb2 body=93 status=ok
// SIG undefined FUN_141711eb2(void)

longlong FUN_141711eb2(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140135fba(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 141711f10 FUN_141711f10 body=458 status=ok
// SIG undefined FUN_141711f10(void)

void FUN_141711f10(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_14482b872(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + uVar8 * 0x18 + -0x14);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -6;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1417120da FUN_1417120da body=540 status=ok
// SIG undefined FUN_1417120da(void)

void FUN_1417120da(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1417122ad;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1417122ad:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417122f8 FUN_1417122f8 body=74 status=ok
// SIG undefined FUN_1417122f8(void)

void FUN_1417122f8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 141712342 FUN_141712342 body=61 status=ok
// SIG undefined FUN_141712342(void)

void FUN_141712342(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141712380 FUN_141712380 body=625 status=ok
// SIG undefined FUN_141712380(void)

void FUN_141712380(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1417123f2;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1417123f2:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1417125f2 FUN_1417125f2 body=353 status=ok
// SIG undefined FUN_1417125f2(void)

void FUN_1417125f2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141712677;
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
LAB_141712677:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141712754 FUN_141712754 body=142 status=ok
// SIG undefined FUN_141712754(void)

void FUN_141712754(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1417127e2 FUN_1417127e2 body=367 status=ok
// SIG undefined FUN_1417127e2(void)

void FUN_1417127e2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417128ac;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1417128ac:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 141712952 FUN_141712952 body=369 status=ok
// SIG undefined FUN_141712952(void)

void FUN_141712952(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417129d7;
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
LAB_1417129d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 141712ac4 FUN_141712ac4 body=150 status=ok
// SIG undefined FUN_141712ac4(void)

void FUN_141712ac4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x78)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x78,8);
      uVar3 = uVar3 / 0x78;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x78,8);
    }
  }
  return;
}



// FUNCTION 141712b5a FUN_141712b5a body=394 status=ok
// SIG undefined FUN_141712b5a(void)

void FUN_141712b5a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x200) {
    uVar9 = 0x200 - iVar1;
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = iVar1;
    if (iVar12 < 0x200) {
      FUN_144727cd0(param_1,0x200);
      iVar7 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar7 + uVar9;
    if ((uint)(iVar12 - iVar7) < uVar9) {
      FUN_14482b872(param_1,iVar7);
    }
    if (iVar7 < 0x200) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + 0x2fec);
      lVar11 = 0x200;
      do {
        iVar10 = (int)lVar11;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar11 = lVar11 + -1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -6;
      } while (iVar7 < lVar11);
    }
    if (iVar1 == 0) {
      plVar8 = param_1 + 2;
      *(undefined4 *)(param_1 + 5) = 0x200;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x200) {
        FUN_14499171c(plVar8,0,0x10,4);
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x200;
      }
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      iVar1 = (int)param_1[5];
      iVar12 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar12 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar8 = (longlong *)param_1[4];
        }
        bVar5 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar8 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar12 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 141712ce4 FUN_141712ce4 body=394 status=ok
// SIG undefined FUN_141712ce4(void)

void FUN_141712ce4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x200) {
    uVar9 = 0x200 - iVar1;
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = iVar1;
    if (iVar12 < 0x200) {
      FUN_144727cd0(param_1,0x200);
      iVar7 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar7 + uVar9;
    if ((uint)(iVar12 - iVar7) < uVar9) {
      FUN_14482b872(param_1,iVar7);
    }
    if (iVar7 < 0x200) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + 0x2fec);
      lVar11 = 0x200;
      do {
        iVar10 = (int)lVar11;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar11 = lVar11 + -1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -6;
      } while (iVar7 < lVar11);
    }
    if (iVar1 == 0) {
      plVar8 = param_1 + 2;
      *(undefined4 *)(param_1 + 5) = 0x200;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x200) {
        FUN_14499171c(plVar8,0,0x10,4);
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x200;
      }
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      iVar1 = (int)param_1[5];
      iVar12 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar12 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar8 = (longlong *)param_1[4];
        }
        bVar5 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar8 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar12 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 141712e6e FUN_141712e6e body=305 status=ok
// SIG undefined FUN_141712e6e(void)

void FUN_141712e6e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141712f08;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_141712ee1:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_141712ee1;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141712f08;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141712f08:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141712fa0 FUN_141712fa0 body=415 status=ok
// SIG undefined FUN_141712fa0(void)

ulonglong FUN_141712fa0(longlong param_1,float param_2)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  double local_c8;
  undefined1 local_c0 [16];
  byte *local_b0;
  undefined1 local_a1;
  undefined1 *local_a0;
  byte **local_98;
  LARGE_INTEGER local_90;
  undefined1 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0.0 < param_2) {
    dVar2 = (double)param_2;
  }
  else {
    dVar2 = INFINITY;
  }
  pbVar6 = (byte *)(param_1 + -0x20);
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    uVar3 = QueryPerformanceCounter(&local_90);
    uVar4 = (ulonglong)uVar3;
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*pbVar6);
    if ((*pbVar6 & 1) == 0) {
      dVar2 = dVar2 + (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0;
      do {
        if (dVar2 < INFINITY) {
          uVar3 = QueryPerformanceCounter(&local_90);
          uVar4 = (ulonglong)uVar3;
          if (dVar2 <= (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0) break;
        }
        if ((uVar5 & 2) == 0) {
          uVar4 = uVar5 & 0xffffffff;
          LOCK();
          bVar1 = *pbVar6;
          bVar7 = (byte)uVar4 == bVar1;
          if (bVar7) {
            *pbVar6 = 2;
          }
          else {
            uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar1);
          }
          UNLOCK();
          if (bVar7) goto LAB_1417130c4;
        }
        else {
LAB_1417130c4:
          local_88 = &local_a1;
          local_90.QuadPart = (LONGLONG)&DAT_142743e10;
          local_a0 = &LAB_142743e12;
          local_c8 = dVar2;
          local_b0 = pbVar6;
          local_98 = &local_b0;
          uVar4 = FUN_1456d3e9c(local_c0,pbVar6,&local_a0,&local_90);
        }
        uVar5 = CONCAT71((int7)(uVar5 >> 8),*pbVar6);
      } while ((*pbVar6 & 1) == 0);
    }
  }
  else {
    uVar4 = CONCAT71((int7)(local_80 >> 8),*pbVar6);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 141713140 FUN_141713140 body=1312 status=ok
// SIG undefined FUN_141713140(void)

void FUN_141713140(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar13 = *(longlong **)(param_1 + 0xd8);
  plVar20 = plVar13;
  if (plVar13 == (longlong *)0x0) {
    plVar20 = (longlong *)(param_1 + 0x18);
  }
  iVar21 = *(int *)(param_1 + 0xe0);
  lVar17 = (longlong)iVar21;
  if (lVar17 == 0) {
    uVar18 = 0;
  }
  else {
    lVar23 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + *(longlong *)((longlong)plVar20 + lVar23 + 0x10);
      lVar23 = lVar23 + 0x18;
    } while (lVar17 * 0x18 != lVar23);
  }
  local_118 = param_4;
  if (CONCAT14(*(undefined1 *)(*param_2 + 0x18),*(undefined4 *)(*param_2 + 8)) == uVar18)
  goto LAB_141713246;
  FUN_1400eecdc(&local_a8);
  if (&local_a8 == param_2) {
LAB_141713225:
    lVar17 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_144716208(local_a8);
        FUN_1400020a8(lVar17);
      }
    }
  }
  else {
    lVar17 = *param_2;
    *param_2 = local_a8;
    local_a8 = 0;
    if (lVar17 != 0) {
      LOCK();
      piVar1 = (int *)(lVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_144716208(lVar17);
        FUN_1400020a8(lVar17);
      }
      goto LAB_141713225;
    }
  }
  plVar13 = *(longlong **)(param_1 + 0xd8);
  iVar21 = *(int *)(param_1 + 0xe0);
  lVar17 = (longlong)iVar21;
LAB_141713246:
  plVar20 = (longlong *)(param_1 + 0x18);
  if (plVar13 != (longlong *)0x0) {
    plVar20 = plVar13;
  }
  if (iVar21 != 0) {
    local_108 = plVar20 + lVar17 * 3;
    param_2 = (longlong *)*param_2;
    lVar17 = *param_2;
    uVar18 = (ulonglong)CONCAT14((char)param_2[3],(int)param_2[1]);
    local_110 = (ulonglong)(param_3 & 0xff);
    local_100 = param_1;
    do {
      lVar23 = local_100;
      local_f8 = uVar18;
      local_f0 = lVar17;
      if (*(longlong *)(local_100 + 0x10) == 0) {
        puVar16 = (undefined8 *)FUN_14001cc68(0x90,0x10);
        FUN_14048a8ac(puVar16,*(undefined4 *)(lVar23 + 8));
        puVar6 = *(undefined8 **)(lVar23 + 0x10);
        if (puVar6 != puVar16) {
          *(undefined8 **)(lVar23 + 0x10) = puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
          }
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
        }
      }
      lVar23 = *(longlong *)(lVar23 + 0x10);
      local_e8 = 0;
      local_d8 = (longlong *)0x0;
      lVar15 = plVar20[2];
      lVar4 = *plVar20;
      lVar22 = plVar20[1];
      local_134 = *(undefined4 *)(&DAT_149e69990 + local_110 * 4);
      iVar21 = *(int *)(lVar23 + 0x30);
      iVar2 = *(int *)(lVar23 + 0x38);
      iVar24 = iVar2 + 0xf;
      if (-1 < iVar2 + 8) {
        iVar24 = iVar2 + 8;
      }
      *(int *)(lVar23 + 0x38) = iVar2 + 1;
      if (iVar21 < iVar24 >> 3) {
        local_128 = lVar22;
        local_120 = lVar15;
        do {
          lVar17 = FUN_14001cc68(0xc0,0x10);
          lVar15 = 8;
          do {
            *(undefined ***)(lVar17 + -8 + lVar15) = &PTR_FUN_149e69a30;
            *(undefined8 *)(lVar17 + lVar15) = 0;
            ((undefined8 *)(lVar17 + lVar15))[1] = 0;
            lVar15 = lVar15 + 0x18;
          } while (lVar15 != 200);
          iVar3 = *(int *)(lVar23 + 0x30);
          *(uint *)(lVar23 + 0x30) = iVar3 + 1U;
          lVar15 = (longlong)iVar3;
          if (*(uint *)(lVar23 + 0x34) < iVar3 + 1U) {
            local_130 = (longlong)iVar3;
            FUN_1456bd870((longlong *)(lVar23 + 0x28),iVar3);
            lVar15 = local_130;
          }
          *(longlong *)(*(longlong *)(lVar23 + 0x28) + lVar15 * 8) = lVar17;
          iVar21 = iVar21 + 1;
          lVar15 = local_120;
          lVar22 = local_128;
        } while (iVar21 != iVar24 >> 3);
      }
      iVar21 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar21 = iVar2;
      }
      uVar18 = (ulonglong)(uint)(iVar2 % 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar23 + 0x28) + (longlong)(iVar21 >> 3) * 8);
      *(undefined ***)(lVar5 + uVar18 * 0x18) = &PTR_FUN_149e69a30;
      *(longlong *)(lVar5 + 8 + uVar18 * 0x18) = lVar23;
      *(undefined8 *)(lVar5 + 0x10 + uVar18 * 0x18) = 0;
      piVar1 = *(int **)(*(longlong *)(lVar23 + 0x10) + 0x38);
      local_a8 = FUN_14005d3a6(piVar1 + 2,piVar1);
      lVar17 = local_f0;
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(undefined4 *)(local_a8 + 0x18) = *(undefined4 *)(lVar4 + 0x20);
      *(undefined8 *)(local_a8 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
      *(longlong *)(local_a8 + 0x20) = lVar22;
      *(longlong *)(local_a8 + 0x28) = lVar15;
      *(longlong *)(local_a8 + 0x30) = local_f0;
      *(undefined4 *)(local_a8 + 0x38) = 0;
      *(undefined4 *)(local_a8 + 0x40) = local_134;
      LOCK();
      *(int *)(local_a8 + 0xb0) = *(int *)(local_a8 + 0xb0) + 1;
      UNLOCK();
      plVar13 = (longlong *)(lVar23 + 0x20);
      if (*(longlong *)(lVar23 + 0x18) == 0) {
        plVar19 = (longlong *)(lVar23 + 0x18);
        *plVar13 = local_a8;
      }
      else {
        *(longlong *)*plVar13 = local_a8;
        plVar19 = plVar13;
      }
      *plVar19 = local_a8;
      lVar23 = *(longlong *)(local_a8 + 0x70);
      uVar7 = *(undefined8 *)(local_a8 + 0x78);
      local_98 = *(longlong **)(local_a8 + 0x80);
      uVar8 = *(undefined8 *)(local_a8 + 0x88);
      uVar9 = *(undefined8 *)(local_a8 + 0x90);
      uVar10 = *(undefined8 *)(local_a8 + 0x98);
      uVar11 = *(undefined8 *)(local_a8 + 0xa0);
      uVar12 = *(undefined8 *)(local_a8 + 0xa8);
      *(ulonglong *)(local_a8 + 0xa0) = CONCAT44(uStack_b4,local_b8);
      *(ulonglong *)(local_a8 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
      *(ulonglong *)(local_a8 + 0x90) = CONCAT44(uStack_c4,local_c8);
      *(ulonglong *)(local_a8 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
      *(longlong **)(local_a8 + 0x80) = local_d8;
      *(ulonglong *)(local_a8 + 0x88) = CONCAT44(uStack_cc,uStack_d0);
      *(longlong *)(local_a8 + 0x70) = local_e8;
      *(ulonglong *)(local_a8 + 0x78) = CONCAT44(uStack_dc,uStack_e0);
      uStack_a0._0_4_ = (undefined4)uVar7;
      uStack_a0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_90._0_4_ = (undefined4)uVar8;
      uStack_90._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_88._0_4_ = (undefined4)uVar9;
      local_88._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_80._0_4_ = (undefined4)uVar10;
      uStack_80._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_78._0_4_ = (undefined4)uVar11;
      local_78._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar12;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
      local_b8 = (undefined4)local_78;
      uStack_b4 = local_78._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      local_c8 = (undefined4)local_88;
      uStack_c4 = local_88._4_4_;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      uStack_d0 = (undefined4)uStack_90;
      uStack_cc = uStack_90._4_4_;
      uStack_e0 = (undefined4)uStack_a0;
      uStack_dc = uStack_a0._4_4_;
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 0xb0) = *(int *)(local_a8 + 0xb0) + 1;
        UNLOCK();
      }
      local_e8 = lVar23;
      local_d8 = local_98;
      uStack_a0 = uVar7;
      uStack_90 = uVar8;
      local_88 = uVar9;
      uStack_80 = uVar10;
      local_78 = uVar11;
      uStack_70 = uVar12;
      FUN_1447ef144(lVar5 + uVar18 * 0x18 + 0x10,&local_a8);
      FUN_1447ef07c(&local_a8);
      uVar18 = local_f8;
      if (local_e8 != 0) {
        plVar13 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar13 = (longlong *)&local_c8;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      uVar14 = plVar20[2];
      if (uVar18 < (ulonglong)plVar20[2]) {
        uVar14 = uVar18;
      }
      lVar17 = lVar17 + uVar14;
      uVar18 = uVar18 - uVar14;
      plVar20 = plVar20 + 3;
      param_1 = local_100;
    } while (plVar20 != local_108);
  }
  FUN_14048a836(param_1,param_5,local_118);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141713662 FUN_141713662 body=124 status=ok
// SIG undefined FUN_141713662(void)

undefined8 *
FUN_141713662(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined8 param_5,char param_6)

{
  FUN_144869430();
  *param_1 = &PTR_FUN_149e69110;
  param_1[0x12] = param_2;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  *(byte *)(param_1 + 5) = (*(byte *)(param_1 + 5) & 0xbe | param_6 << 6) + 1;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 0x10;
  *(uint *)((longlong)param_1 + 0x34) = param_4 | *(uint *)((longlong)param_1 + 0x34) | 0x1000;
  return param_1;
}



// FUNCTION 1417136de FUN_1417136de body=373 status=ok
// SIG undefined FUN_1417136de(void)

longlong * FUN_1417136de(longlong *param_1,ulonglong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  (**(code **)(*param_1 + 0x170))(param_1,&local_38,8);
  uVar7 = local_38;
  if (local_38 == 0) {
    local_40 = 0;
    iVar6 = 0;
    uVar7 = 0;
  }
  else {
    lVar2 = param_1[0x12];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x58);
    EnterCriticalSection(lpCriticalSection);
    if (*(ulonglong *)(lVar2 + 0x80) == uVar7) {
      uVar7 = *(ulonglong *)(lVar2 + 0x88);
    }
    else {
      *(ulonglong *)(lVar2 + 0x80) = uVar7;
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        uVar3 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x48);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar3 >> 0x10 ^ uVar3))
                                 * 4);
        if (iVar6 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar6 * 0x18);
            if (*puVar1 == uVar7) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                uVar7 = puVar1[1];
                *(ulonglong *)(lVar2 + 0x88) = uVar7;
                goto LAB_1417137ca;
              }
              break;
            }
            iVar6 = (int)puVar1[2];
          } while (iVar6 != -1);
        }
      }
      *(undefined8 *)(lVar2 + 0x88) = 0;
      uVar7 = 0;
    }
LAB_1417137ca:
    iVar6 = (int)(uVar7 >> 0x20);
    local_40 = uVar7;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  uVar5 = local_38;
  if (iVar6 != 0 || (int)uVar7 != 0) {
    uVar5 = FUN_1409ca440(&local_40);
  }
  *param_2 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141713854 FUN_141713854 body=38 status=ok
// SIG undefined FUN_141713854(void)

undefined8 FUN_141713854(undefined8 param_1,int param_2)

{
  FUN_1400e0f74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171387a caseD_c body=39 status=ok
// SIG undefined caseD_c(void)

undefined8 * switchD_14013128b::caseD_c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e064c0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417138a1 FUN_1417138a1 body=49 status=ok
// SIG undefined FUN_1417138a1(void)

longlong FUN_1417138a1(void)

{
  if (DAT_14c948c98 == 0) {
    FUN_14086a14e(&DAT_14c948c98,&PTR_FUN_149e6a220);
  }
  return DAT_14c948c98;
}



// FUNCTION 1417138d2 FUN_1417138d2 body=45 status=ok
// SIG undefined FUN_1417138d2(void)

undefined8 * FUN_1417138d2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1400021e4(param_3 + 0x20,param_2);
  }
  return param_2;
}



// FUNCTION 141713900 FUN_141713900 body=215 status=ok
// SIG undefined FUN_141713900(void)

void FUN_141713900(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if ((lVar3 == 0) || ((*(uint *)(param_1 + 0xb0) & 0x2000) == 0)) {
    FUN_1449e46ce(param_1,param_2,param_3);
    if ((int)param_3 < 1) {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
  }
  else if ((int)param_3 < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x5c);
  uVar4 = (ulonglong)param_3;
  do {
    FUN_1449b16b6(param_1,param_2,lVar3,1);
    param_2 = param_2 + (int)(-iVar2 & (iVar1 + iVar2) - 1U);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}



// FUNCTION 1417139d8 FUN_1417139d8 body=182 status=ok
// SIG undefined FUN_1417139d8(void)

ulonglong FUN_1417139d8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = *(uint *)(param_1 + 0xe4);
  uVar4 = (ulonglong)uVar3;
  if (((uVar3 != 0) && (uVar1 = *(uint *)(param_1 + 0xe0), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(uint *)(lVar5 + 0x10) == uVar3)) &&
       ((uVar4 = (ulonglong)*(uint *)(lVar5 + 8), (*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
        (*(longlong *)(param_1 + 0xe8) != 0)))) {
      uVar4 = (ulonglong)*(uint *)(lVar5 + 8);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xe8);
  if (lVar5 != 0) {
    uVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    bVar2 = (**(code **)(*param_2 + 0x48))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000141713a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)((longlong)&PTR_FUN_149eb10f0 +
                        (ulonglong)((uVar3 & 0xff) * 0x10 + (uint)bVar2 * 8)))
                      (param_2,param_1,lVar5,param_1);
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 141713a8e FUN_141713a8e body=68 status=ok
// SIG undefined FUN_141713a8e(void)

void FUN_141713a8e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e6ee80;
  FUN_1403a7699(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e0ea(param_1);
  return;
}



// FUNCTION 141713ad2 FUN_141713ad2 body=58 status=ok
// SIG undefined FUN_141713ad2(void)

void FUN_141713ad2(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  FUN_140010566(param_1 + 0x30);
  return;
}



// FUNCTION 141713b0c caseD_ef body=164 status=ok
// SIG undefined caseD_ef(void)

undefined8 switchD_14483b9b6::caseD_ef(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949398) {
    FUN_144b3d300(&DAT_14c949398);
    if (DAT_14c949398 == -1) {
      FUN_1446f470e(&local_18,L"GbxInlineStruct",1);
      DAT_14c949390 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949398);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949390;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141713bb2 FUN_141713bb2 body=40 status=ok
// SIG undefined FUN_141713bb2(void)

undefined8 FUN_141713bb2(undefined8 param_1,int param_2)

{
  FUN_1400deb62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713bda FUN_141713bda body=40 status=ok
// SIG undefined FUN_141713bda(void)

undefined8 FUN_141713bda(undefined8 param_1,int param_2)

{
  FUN_1400deb62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713c02 FUN_141713c02 body=40 status=ok
// SIG undefined FUN_141713c02(void)

undefined8 FUN_141713c02(undefined8 param_1,int param_2)

{
  FUN_1400deb62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713c2a FUN_141713c2a body=71 status=ok
// SIG undefined FUN_141713c2a(void)

undefined8 * FUN_141713c2a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70450;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xe] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713c72 FUN_141713c72 body=32 status=ok
// SIG undefined FUN_141713c72(void)

undefined8 FUN_141713c72(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"int32");
  return param_2;
}



// FUNCTION 141713c92 FUN_141713c92 body=32 status=ok
// SIG undefined FUN_141713c92(void)

undefined8 FUN_141713c92(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"uint32");
  return param_2;
}



// FUNCTION 141713cb2 FUN_141713cb2 body=29 status=ok
// SIG undefined FUN_141713cb2(void)

undefined8 FUN_141713cb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713cd0 FUN_141713cd0 body=29 status=ok
// SIG undefined FUN_141713cd0(void)

undefined8 FUN_141713cd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713cee FUN_141713cee body=29 status=ok
// SIG undefined FUN_141713cee(void)

undefined8 FUN_141713cee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713d0c FUN_141713d0c body=32 status=ok
// SIG undefined FUN_141713d0c(void)

undefined8 FUN_141713d0c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"float");
  return param_2;
}



// FUNCTION 141713d2c FUN_141713d2c body=611 status=ok
// SIG undefined FUN_141713d2c(void)

undefined8
FUN_141713d2c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ushort local_30;
  undefined2 uStack_2e;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar7 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar9 = 0;
  if ((piVar7 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_141713e28_caseD_15;
  iVar2 = *piVar7;
  if (iVar2 == 4) {
    plVar4 = *(longlong **)(*param_3 + 8);
    puVar5 = (ulonglong *)plVar4[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_30,4);
      }
      else {
        FUN_14572512c(plVar4,&local_30);
      }
    }
    else {
      uVar3 = *(undefined4 *)*puVar5;
      local_30 = (ushort)uVar3;
      uStack_2e = (undefined2)((uint)uVar3 >> 0x10);
      *puVar5 = (ulonglong)puVar1;
    }
    *(uint *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
             param_4 + *(int *)(param_1 + 0x44)) = CONCAT22(uStack_2e,local_30);
    uVar9 = 1;
    goto switchD_141713e28_caseD_15;
  }
  uVar9 = 0;
  switch(iVar2) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) {
switchD_141713e28_caseD_22:
      uVar8 = FUN_14281294c(param_3,param_5,param_2);
      goto LAB_141713e8b;
    }
switchD_141713e28_caseD_17:
    local_38 = param_2;
    FUN_1427de8dc(&local_30,param_1,param_3,param_4);
    goto LAB_141713ee0;
  case 2:
    FUN_144aa02de(*param_3,&local_30);
    fVar10 = (float)CONCAT22(uStack_2e,local_30);
    break;
  case 3:
    uVar6 = (uint)*(byte *)(param_2 + 0x71);
    goto LAB_141713ec4;
  case 4:
  case 5:
  case 6:
  case 7:
    goto switchD_141713e28_caseD_15;
  case 8:
    FUN_144aa029c(*param_3,&local_30);
    fVar10 = (float)(double)CONCAT44(iStack_2c,CONCAT22(uStack_2e,local_30));
    break;
  default:
    switch(iVar2) {
    case 0x14:
      FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
      fVar10 = (float)CONCAT44(iStack_2c,CONCAT22(uStack_2e,local_30));
      break;
    default:
      goto switchD_141713e28_caseD_15;
    case 0x16:
      FUN_1458ec23e(*param_3,&local_30);
      uVar6 = (uint)(short)local_30;
      goto LAB_141713ec4;
    case 0x17:
      goto switchD_141713e28_caseD_17;
    case 0x18:
      FUN_144aa04bc(*param_3,&local_30);
      uVar8 = CONCAT44(iStack_2c,CONCAT22(uStack_2e,local_30));
      if (-1 < iStack_2c) goto LAB_141713e8b;
      fVar10 = (float)uVar8;
      break;
    case 0x19:
      FUN_144afef32(*param_3,&local_30);
      uVar8 = (ulonglong)CONCAT22(uStack_2e,local_30);
LAB_141713e8b:
      fVar10 = (float)(longlong)uVar8;
      break;
    case 0x1a:
      FUN_144afeef0(*param_3,&local_30);
      uVar6 = (uint)local_30;
LAB_141713ec4:
      fVar10 = (float)(int)uVar6;
      break;
    case 0x22:
      goto switchD_141713e28_caseD_22;
    }
  }
  *(float *)((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
            param_4 + *(int *)(param_1 + 0x44)) = fVar10;
LAB_141713ee0:
  uVar9 = 3;
switchD_141713e28_caseD_15:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141713f90 FUN_141713f90 body=29 status=ok
// SIG undefined FUN_141713f90(void)

undefined8 FUN_141713f90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141713fae FUN_141713fae body=32 status=ok
// SIG undefined FUN_141713fae(void)

undefined8 FUN_141713fae(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"double");
  return param_2;
}



// FUNCTION 141713fce FUN_141713fce body=664 status=ok
// SIG undefined FUN_141713fce(void)

undefined8
FUN_141713fce(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  double dVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar7 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar9 = 0;
  if ((piVar7 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_1417140cb_caseD_15;
  iVar2 = *piVar7;
  if (iVar2 == 8) {
    plVar3 = *(longlong **)(*param_3 + 8);
    puVar4 = (ulonglong *)plVar3[1];
    puVar1 = (ulonglong *)*puVar4 + 1;
    if ((ulonglong *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,&local_30,8);
      }
      else {
        FUN_146821949(plVar3,&local_30);
      }
    }
    else {
      local_30 = *(ulonglong *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    *(ulonglong *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = local_30;
    uVar9 = 1;
    goto switchD_1417140cb_caseD_15;
  }
  switch(iVar2) {
  case 1:
    if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8)
                 + 8 + (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc) < 1) {
switchD_1417140cb_caseD_17:
      local_38 = param_2;
      FUN_1427dea22(&local_30,param_1,param_3,param_4);
    }
    else {
switchD_1417140cb_caseD_22:
      lVar8 = FUN_14281294c(param_3,param_5,param_2);
      *(double *)
       ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
       param_4 + *(int *)(param_1 + 0x44)) = (double)lVar8;
    }
    goto LAB_1417141a2;
  case 2:
    FUN_144aa02de(*param_3,&local_30);
    dVar5 = (double)(int)(float)local_30;
    break;
  case 3:
    iVar2 = *(int *)(param_2 + 0x40);
    dVar5 = (double)*(byte *)(param_2 + 0x71);
    goto LAB_14171418e;
  case 4:
    FUN_144aa025c(*param_3,&local_30);
    dVar5 = (double)(float)local_30;
    break;
  default:
    uVar9 = 0;
    switch(iVar2) {
    case 0x14:
      FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
      dVar5 = (double)(longlong)local_30;
      break;
    default:
      goto switchD_1417140cb_caseD_15;
    case 0x16:
      FUN_1458ec23e(*param_3,&local_30);
      uVar6 = (uint)(short)(ushort)local_30;
      goto LAB_14171424f;
    case 0x17:
      goto switchD_1417140cb_caseD_17;
    case 0x18:
      FUN_144aa04bc(*param_3,&local_30);
      *(double *)
       ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
       param_4 + *(int *)(param_1 + 0x44)) =
           ((double)CONCAT44(0x43300000,(int)local_30) - 4503599627370496.0) +
           ((double)CONCAT44(0x45300000,(int)(local_30 >> 0x20)) - 1.9342813113834067e+25);
      goto LAB_1417141a2;
    case 0x19:
      FUN_144afef32(*param_3,&local_30);
      dVar5 = (double)(local_30 & 0xffffffff);
      break;
    case 0x1a:
      FUN_144afeef0(*param_3,&local_30);
      uVar6 = (uint)(ushort)local_30;
LAB_14171424f:
      dVar5 = (double)(int)uVar6;
      break;
    case 0x22:
      goto switchD_1417140cb_caseD_22;
    }
  }
  iVar2 = *(int *)(param_2 + 0x40);
LAB_14171418e:
  *(double *)
   ((longlong)*(int *)(param_1 + 0x34) * (longlong)iVar2 + param_4 + *(int *)(param_1 + 0x44)) =
       dVar5;
LAB_1417141a2:
  uVar9 = 3;
switchD_1417140cb_caseD_15:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141714268 FUN_141714268 body=32 status=ok
// SIG undefined FUN_141714268(void)

undefined8 FUN_141714268(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FName");
  return param_2;
}



// FUNCTION 141714288 FUN_141714288 body=29 status=ok
// SIG undefined FUN_141714288(void)

undefined8 FUN_141714288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417142a6 FUN_1417142a6 body=32 status=ok
// SIG undefined FUN_1417142a6(void)

undefined8 FUN_1417142a6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FString");
  return param_2;
}



// FUNCTION 1417142d6 FUN_1417142d6 body=138 status=ok
// SIG undefined FUN_1417142d6(void)

void FUN_1417142d6(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (0 < (int)param_4) {
    lVar2 = 0;
    do {
      if (param_2 != param_3) {
        iVar1 = *(int *)(param_3 + 8 + lVar2);
        _Src = *(void **)(param_3 + lVar2);
        *(int *)(param_2 + 8 + lVar2) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0xc + lVar2) == 0) {
          *(undefined4 *)(param_2 + 0xc + lVar2) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(param_2 + lVar2),iVar1);
          if (iVar1 != 0) {
            memcpy(*(void **)(param_2 + lVar2),_Src,(longlong)iVar1 * 2);
          }
        }
      }
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)param_4 << 4 != lVar2);
  }
  return;
}



// FUNCTION 141714360 FUN_141714360 body=29 status=ok
// SIG undefined FUN_141714360(void)

undefined8 FUN_141714360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171437e FUN_14171437e body=107 status=ok
// SIG undefined FUN_14171437e(void)

void FUN_14171437e(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < (int)param_4) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
    } while ((ulonglong)param_4 << 4 != lVar3);
  }
  return;
}



// FUNCTION 1417143ea FUN_1417143ea body=29 status=ok
// SIG undefined FUN_1417143ea(void)

undefined8 FUN_1417143ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141714408 FUN_141714408 body=29 status=ok
// SIG undefined FUN_141714408(void)

undefined8 FUN_141714408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141714426 FUN_141714426 body=29 status=ok
// SIG undefined FUN_141714426(void)

undefined8 FUN_141714426(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141714444 FUN_141714444 body=149 status=ok
// SIG undefined FUN_141714444(void)

longlong FUN_141714444(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    local_20 = *(undefined8 *)(param_1 + 0x90);
    local_28 = *(undefined8 *)(param_1 + 0x98);
    local_30 = (undefined8 *)0x0;
    local_38 = &PTR_FUN_149e6e570;
    (**(code **)(*param_2 + 0x30))(param_2,&local_38);
    local_38 = &PTR_LAB_149eb0140;
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417144da FUN_1417144da body=353 status=ok
// SIG undefined FUN_1417144da(void)

void FUN_1417144da(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14171455f;
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
LAB_14171455f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14171463c FUN_14171463c body=228 status=ok
// SIG undefined FUN_14171463c(void)

void FUN_14171463c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141714720 FUN_141714720 body=332 status=ok
// SIG undefined FUN_141714720(void)

void FUN_141714720(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14171478e;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14171478e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 14171486c FUN_14171486c body=228 status=ok
// SIG undefined FUN_14171486c(void)

void FUN_14171486c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141714950 FUN_141714950 body=2895 status=ok
// SIG undefined FUN_141714950(void)

void FUN_141714950(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  undefined1 auStack_398 [40];
  longlong *local_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar12 = (int)param_1[1];
  if (1 < (longlong)iVar12) {
    lVar18 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar18 + (longlong)iVar12 * 8 + -8;
    local_348 = lVar18;
    fVar27 = logf((float)iVar12);
    local_338[0] = (int)(longlong)(fVar27 + fVar27);
    plVar24 = &local_348;
    do {
      plVar11 = (longlong *)*plVar24;
      plVar23 = (longlong *)plVar24[1];
      iVar12 = (int)plVar24[2];
      iVar14 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar11) >> 3);
      uVar7 = iVar14 + 1;
      plVar22 = plVar11;
      if (iVar12 != 0) {
LAB_1417149fd:
        if (8 < (int)uVar7) {
          lVar18 = plVar22[uVar7 >> 1];
          plVar22[uVar7 >> 1] = *plVar22;
          *plVar22 = lVar18;
          plVar9 = plVar23 + 1;
          plVar11 = plVar22;
          plVar20 = plVar23;
LAB_141714a0b:
          while( true ) {
            plVar11 = plVar11 + 1;
            if (plVar23 < plVar11) break;
            lVar18 = *plVar11;
            lVar4 = *plVar22;
            if (*(int *)(lVar4 + 0x44) == *(int *)(lVar18 + 0x44)) goto LAB_141714b55;
            if (*(int *)(lVar4 + 0x44) < *(int *)(lVar18 + 0x44)) break;
          }
          goto LAB_141714a2d;
        }
        for (; plVar9 = plVar22, plVar11 = plVar22, plVar22 < plVar23; plVar23 = plVar23 + -1) {
          while (plVar11 = plVar11 + 1, plVar11 <= plVar23) {
            lVar18 = *plVar11;
            lVar4 = *plVar9;
            if (*(int *)(lVar4 + 0x44) == *(int *)(lVar18 + 0x44)) {
              if (lVar18 == 0) {
                FUN_140056680(&local_358,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar18 + 0x20,&local_358);
              }
              if (lVar4 == 0) {
                FUN_140056680(&local_368,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar4 + 0x20,&local_368);
              }
              puVar5 = local_358;
              if (local_350 == 0) {
                puVar5 = &DAT_149dfb77a;
              }
              puVar17 = local_368;
              if (local_360 == 0) {
                puVar17 = &DAT_149dfb77a;
              }
              lVar18 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
                uVar7 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
                uVar3 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141714c88;
                  }
                  bVar8 = (byte)(uVar7 - uVar3 >> 0x18);
                  goto LAB_141714d3c;
                }
                if (uVar1 == 0) break;
LAB_141714c88:
                lVar18 = lVar18 + 2;
              }
              bVar8 = 0;
LAB_141714d3c:
              if (local_368 != (undefined2 *)0x0) {
                FUN_1400020a8(local_368);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              bVar6 = (bool)(bVar8 >> 7);
            }
            else {
              bVar6 = *(int *)(lVar4 + 0x44) < *(int *)(lVar18 + 0x44);
            }
            if (bVar6 != false) {
              plVar9 = plVar11;
            }
          }
          lVar18 = *plVar9;
          *plVar9 = *plVar23;
          *plVar23 = lVar18;
        }
        goto LAB_141714d6c;
      }
LAB_141714e2b:
      if (uVar7 != 0) {
        uVar3 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_370 = (longlong *)(ulonglong)uVar3;
          plVar23 = local_370;
          while (uVar13 = uVar3 * 2 + 1, (int)uVar13 < (int)uVar7) {
            uVar26 = uVar3 * 2 + 2;
            uVar3 = uVar13;
            if ((int)uVar26 < (int)uVar7) {
              lVar18 = plVar11[(int)uVar13];
              lVar4 = plVar11[(int)uVar26];
              if (*(int *)(lVar4 + 0x44) == *(int *)(lVar18 + 0x44)) {
                if (lVar18 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_358);
                }
                if (lVar4 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar4 + 0x20,&local_368);
                }
                puVar5 = local_358;
                if (local_350 == 0) {
                  puVar5 = &DAT_149dfb77a;
                }
                puVar17 = local_368;
                if (local_360 == 0) {
                  puVar17 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
                  uVar3 = (uint)uVar1;
                  uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
                  uVar19 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141714efd;
                    }
                    bVar8 = (byte)(uVar3 - uVar19 >> 0x18);
                    goto LAB_141714f3e;
                  }
                  if (uVar1 == 0) break;
LAB_141714efd:
                  lVar18 = lVar18 + 2;
                }
                bVar8 = 0;
LAB_141714f3e:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                bVar6 = (bool)(bVar8 >> 7);
              }
              else {
                bVar6 = *(int *)(lVar4 + 0x44) < *(int *)(lVar18 + 0x44);
              }
              uVar3 = uVar26;
              if (bVar6 != false) {
                uVar3 = uVar13;
              }
            }
            iVar12 = (int)plVar23;
            lVar4 = plVar11[(int)uVar3];
            lVar18 = plVar11[iVar12];
            if (*(int *)(lVar18 + 0x44) == *(int *)(lVar4 + 0x44)) {
              if (lVar4 == 0) {
                FUN_140056680(&local_358,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar4 + 0x20,&local_358);
              }
              if (lVar18 == 0) {
                FUN_140056680(&local_368,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar18 + 0x20,&local_368);
              }
              puVar5 = local_358;
              if (local_350 == 0) {
                puVar5 = &DAT_149dfb77a;
              }
              puVar17 = local_368;
              if (local_360 == 0) {
                puVar17 = &DAT_149dfb77a;
              }
              lVar18 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
                uVar13 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
                uVar26 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141714ff2;
                  }
                  iVar14 = uVar13 - uVar26;
                  goto LAB_14171502b;
                }
                if (uVar1 == 0) break;
LAB_141714ff2:
                lVar18 = lVar18 + 2;
              }
              iVar14 = 0;
LAB_14171502b:
              if (local_368 != (undefined2 *)0x0) {
                FUN_1400020a8(local_368);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (-1 < iVar14) break;
              lVar18 = plVar11[iVar12];
              lVar4 = plVar11[(int)uVar3];
            }
            else if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
            plVar11[iVar12] = lVar4;
            plVar11[(int)uVar3] = lVar18;
            plVar23 = (longlong *)(ulonglong)uVar3;
          }
          uVar3 = (int)local_370 - 1;
        } while ((int)local_370 != 0);
        local_370 = (longlong *)&DAT_ffffffff;
        if (1 < (int)uVar7) {
          uVar15 = (ulonglong)uVar7;
          lVar18 = *plVar11;
          *plVar11 = plVar11[uVar15 - 1];
          plVar11[uVar15 - 1] = lVar18;
          if (uVar7 != 2) {
            do {
              uVar16 = uVar15 - 1;
              iVar12 = 0;
              iVar25 = 1;
              iVar14 = 0;
              do {
                iVar12 = iVar12 + 2;
                iVar21 = iVar25;
                if ((longlong)iVar12 < (longlong)uVar16) {
                  lVar18 = plVar11[iVar25];
                  lVar4 = plVar11[iVar12];
                  if (*(int *)(lVar4 + 0x44) == *(int *)(lVar18 + 0x44)) {
                    if (lVar18 == 0) {
                      FUN_140056680(&local_358,&DAT_149e01fe8);
                    }
                    else {
                      FUN_1400021e4(lVar18 + 0x20,&local_358);
                    }
                    if (lVar4 == 0) {
                      FUN_140056680(&local_368,&DAT_149e01fe8);
                    }
                    else {
                      FUN_1400021e4(lVar4 + 0x20,&local_368);
                    }
                    puVar5 = local_358;
                    if (local_350 == 0) {
                      puVar5 = &DAT_149dfb77a;
                    }
                    puVar17 = local_368;
                    if (local_360 == 0) {
                      puVar17 = &DAT_149dfb77a;
                    }
                    lVar18 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
                      uVar7 = (uint)uVar1;
                      uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
                      uVar3 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_141715217;
                        }
                        bVar8 = (byte)(uVar7 - uVar3 >> 0x18);
                        goto LAB_141715257;
                      }
                      if (uVar1 == 0) break;
LAB_141715217:
                      lVar18 = lVar18 + 2;
                    }
                    bVar8 = 0;
LAB_141715257:
                    if (local_368 != (undefined2 *)0x0) {
                      FUN_1400020a8(local_368);
                    }
                    if (local_358 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    bVar6 = (bool)(bVar8 >> 7);
                  }
                  else {
                    bVar6 = *(int *)(lVar4 + 0x44) < *(int *)(lVar18 + 0x44);
                  }
                  iVar21 = iVar12;
                  if (bVar6 != false) {
                    iVar21 = iVar25;
                  }
                }
                lVar4 = plVar11[iVar21];
                lVar18 = plVar11[iVar14];
                if (*(int *)(lVar18 + 0x44) == *(int *)(lVar4 + 0x44)) {
                  if (lVar4 == 0) {
                    FUN_140056680(&local_358,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar4 + 0x20,&local_358);
                  }
                  if (lVar18 == 0) {
                    FUN_140056680(&local_368,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar18 + 0x20,&local_368);
                  }
                  puVar5 = local_358;
                  if (local_350 == 0) {
                    puVar5 = &DAT_149dfb77a;
                  }
                  puVar17 = local_368;
                  if (local_360 == 0) {
                    puVar17 = &DAT_149dfb77a;
                  }
                  lVar18 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
                    uVar7 = (uint)uVar1;
                    uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
                    uVar3 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14171530a;
                      }
                      iVar12 = uVar7 - uVar3;
                      goto LAB_141715343;
                    }
                    if (uVar1 == 0) break;
LAB_14171530a:
                    lVar18 = lVar18 + 2;
                  }
                  iVar12 = 0;
LAB_141715343:
                  if (local_368 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_368);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (-1 < iVar12) break;
                  lVar18 = plVar11[iVar14];
                  lVar4 = plVar11[iVar21];
                }
                else if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
                plVar11[iVar14] = lVar4;
                plVar11[iVar21] = lVar18;
                iVar12 = iVar21 * 2;
                iVar25 = iVar21 * 2 + 1;
                iVar14 = iVar21;
              } while ((longlong)iVar25 < (longlong)uVar16);
              lVar18 = *plVar11;
              *plVar11 = plVar11[uVar15 - 2];
              plVar11[uVar15 - 2] = lVar18;
              uVar15 = uVar16;
            } while (2 < uVar16);
          }
        }
      }
LAB_141714d6c:
      plVar24 = plVar24 + -3;
    } while (&local_348 <= plVar24);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141714b55:
  local_370 = plVar20;
  if (lVar18 == 0) {
    FUN_140056680(&local_358,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(lVar18 + 0x20,&local_358);
  }
  if (lVar4 == 0) {
    FUN_140056680(&local_368,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(lVar4 + 0x20,&local_368);
  }
  puVar5 = local_358;
  if (local_350 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar17 = local_368;
  if (local_360 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  lVar18 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
    uVar7 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
    uVar3 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141714bc2;
      }
      iVar14 = uVar7 - uVar3;
      goto LAB_141714bf8;
    }
    if (uVar1 == 0) break;
LAB_141714bc2:
    lVar18 = lVar18 + 2;
  }
  iVar14 = 0;
LAB_141714bf8:
  if (local_368 != (undefined2 *)0x0) {
    FUN_1400020a8(local_368);
  }
  if (local_358 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar20 = local_370;
  if (-1 < iVar14) goto LAB_141714a0b;
LAB_141714a2d:
  do {
    while( true ) {
      plVar10 = plVar9;
      plVar9 = plVar10 + -1;
      if (plVar9 <= plVar22) goto LAB_141714b37;
      lVar18 = *plVar22;
      lVar4 = plVar10[-1];
      if (*(int *)(lVar4 + 0x44) == *(int *)(lVar18 + 0x44)) break;
      if (*(int *)(lVar4 + 0x44) < *(int *)(lVar18 + 0x44)) goto LAB_141714b37;
    }
    local_370 = plVar20;
    if (lVar18 == 0) {
      FUN_140056680(&local_358,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(lVar18 + 0x20,&local_358);
    }
    if (lVar4 == 0) {
      FUN_140056680(&local_368,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(lVar4 + 0x20,&local_368);
    }
    puVar5 = local_358;
    if (local_350 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar17 = local_368;
    if (local_360 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    lVar18 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar17 + lVar18);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar5 + lVar18);
      uVar3 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141714ac9;
        }
        iVar14 = uVar7 - uVar3;
        goto LAB_141714aff;
      }
      if (uVar1 == 0) break;
LAB_141714ac9:
      lVar18 = lVar18 + 2;
    }
    iVar14 = 0;
LAB_141714aff:
    if (local_368 != (undefined2 *)0x0) {
      FUN_1400020a8(local_368);
    }
    if (local_358 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar20 = local_370;
  } while (-1 < iVar14);
LAB_141714b37:
  if (plVar11 <= plVar9) {
    lVar18 = *plVar11;
    *plVar11 = plVar10[-1];
    *plVar9 = lVar18;
    goto LAB_141714a0b;
  }
  lVar18 = *plVar22;
  *plVar22 = plVar10[-1];
  *plVar9 = lVar18;
  iVar12 = iVar12 + -1;
  plVar10 = plVar10 + -2;
  if ((longlong)plVar10 - (longlong)plVar22 < (longlong)plVar20 - (longlong)plVar11) {
    if (plVar11 < plVar23) {
      *plVar24 = (longlong)plVar11;
      plVar24[1] = (longlong)plVar23;
      *(int *)(plVar24 + 2) = iVar12;
      plVar24 = plVar24 + 3;
    }
    plVar11 = plVar22;
    plVar23 = plVar10;
    if (plVar9 <= plVar22 + 1) goto LAB_141714d6c;
  }
  else {
    if (plVar22 + 1 < plVar9) {
      *plVar24 = (longlong)plVar22;
      plVar24[1] = (longlong)plVar10;
      *(int *)(plVar24 + 2) = iVar12;
      plVar24 = plVar24 + 3;
    }
    if (plVar23 <= plVar11) goto LAB_141714d6c;
  }
  iVar14 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar11) >> 3);
  uVar7 = iVar14 + 1;
  plVar22 = plVar11;
  if (iVar12 == 0) goto LAB_141714e2b;
  goto LAB_1417149fd;
}



// FUNCTION 1417154a0 FUN_1417154a0 body=57 status=ok
// SIG undefined FUN_1417154a0(void)

longlong FUN_1417154a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
    FUN_14031d286(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1417154da FUN_1417154da body=98 status=ok
// SIG undefined FUN_1417154da(void)

undefined8 FUN_1417154da(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(param_2,local_28);
  FUN_14021219d(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171553e FUN_14171553e body=204 status=ok
// SIG undefined FUN_14171553e(void)

longlong * FUN_14171553e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = -0x1040edcba99;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_30 = *param_2;
  }
  if (*(code **)(*param_1 + 0x150) == FUN_1447cd87a) {
    FUN_1447cd87a(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,&local_30);
  }
  lVar1 = local_30;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x2b) >> 2 & local_30 != -0x1040edcba99) == 0)
    goto LAB_1417155b5;
  }
  else if (local_30 == -0x1040edcba99) goto LAB_1417155b5;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  *param_2 = lVar1;
LAB_1417155b5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141715612 FUN_141715612 body=128 status=ok
// SIG undefined FUN_141715612(void)

undefined8 FUN_141715612(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14021219d(0,&local_48);
  local_30 = local_48;
  local_28 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    local_28 = 0;
  }
  FUN_14475bf92(param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141715694 FUN_141715694 body=204 status=ok
// SIG undefined FUN_141715694(void)

longlong * FUN_141715694(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = -0x1040edcba99;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_30 = *param_2;
  }
  if (*(code **)(*param_1 + 0x150) == FUN_1447cd87a) {
    FUN_1447cd87a(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,&local_30);
  }
  lVar1 = local_30;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x2b) >> 2 & local_30 != -0x1040edcba99) == 0)
    goto LAB_14171570b;
  }
  else if (local_30 == -0x1040edcba99) goto LAB_14171570b;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  *param_2 = lVar1;
LAB_14171570b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141715768 FUN_141715768 body=48 status=ok
// SIG undefined FUN_141715768(void)

undefined8 FUN_141715768(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1448e5bf4();
  if (iVar1 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  return uVar2;
}



// FUNCTION 141715798 FUN_141715798 body=535 status=ok
// SIG undefined FUN_141715798(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141715798(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403a658e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*param_2 + 0x198))(param_2);
  }
  local_40[0] = param_1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_40[2] = 0;
    }
    else {
      local_40[2] = **(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
    }
    (**(code **)(*param_2 + 0x160))(param_2);
    plVar3 = *(longlong **)(param_1 + 0x70);
    if (plVar3 == (longlong *)0x0) goto LAB_141715892;
    lVar2 = *plVar3;
  }
  else {
    local_40[2] = 0;
    (**(code **)(*param_2 + 0x160))(param_2,local_40 + 2);
    if (local_40[2] == 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      goto LAB_141715892;
    }
    local_40[1] = 0;
    plVar1 = (longlong *)FUN_1403a5e2e(local_40 + 2,local_40,local_40 + 1,0);
    plVar3 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined *)plVar1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        local_58 = FUN_1446ddbd2();
        local_50 = FUN_1468e0f50;
        local_60 = 0;
        local_68 = 0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      if (DAT_14c9520c0 == 0) {
        bVar5 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c9520b8 && bVar5) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar5 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c9520b8) break;
          } while (puVar4 != (undefined *)0x0);
        }
      }
      else {
        bVar5 = (*(ulonglong *)(puVar4 + 0x18) & DAT_14c9520c0) != 0;
      }
      plVar3 = (longlong *)0x0;
      if (bVar5) {
        plVar3 = plVar1;
      }
    }
    *(longlong **)(param_1 + 0x70) = plVar3;
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0x10))(plVar3,param_2);
LAB_141715892:
  if ((local_40[3] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417159b0 FUN_1417159b0 body=254 status=ok
// SIG undefined FUN_1417159b0(void)

longlong * FUN_1417159b0(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
  lVar4 = FUN_140851d9a();
  lVar3 = *(longlong *)(param_1 + 0x78);
  uVar1 = *(uint *)(lVar3 + 0x38);
  if (1 < (int)uVar1) {
    *param_2 = 0;
    _Src = *(void **)(lVar3 + 0x30);
    *(uint *)(param_2 + 1) = uVar1;
    FUN_1446dd670(param_2,(ulonglong)uVar1,0);
    memcpy((void *)*param_2,_Src,(ulonglong)uVar1 * 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined8 *)(lVar3 + 0x18);
  FUN_1400021e4(&local_38,&local_48);
  if ((param_4 < '\0') && (lVar2 != lVar4)) {
    FUN_1468f9fe9(param_2,&local_48,0,&DAT_149e894ee);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_48;
    *(undefined4 *)(param_2 + 1) = local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141715ab0 FUN_141715ab0 body=89 status=ok
// SIG undefined FUN_141715ab0(void)

void FUN_141715ab0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0xb8))(plVar1);
  FUN_140011d52(plVar1);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x34);
  uVar2 = *(ulonglong *)(param_1 + 0x38) | 0x1040000200;
  *(ulonglong *)(param_1 + 0x38) = uVar2;
  *(ulonglong *)(param_1 + 0x38) =
       *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x38) & 0x8000000000000 | uVar2;
  return;
}



// FUNCTION 141715b0a FUN_141715b0a body=1144 status=ok
// SIG undefined FUN_141715b0a(void)

undefined8
FUN_141715b0a(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_18c;
  undefined8 local_188 [2];
  undefined8 local_174;
  undefined4 local_148;
  longlong *local_110;
  ulonglong local_108 [15];
  longlong local_90;
  undefined8 local_88;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_110 = param_3;
  piVar5 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar7 = 0;
  uVar6 = 0;
  if ((((piVar5 != (int *)0x0) && (*(int *)(param_2 + 0x10) == 0)) &&
      (iVar4 = *piVar5, iVar4 != 0x22)) &&
     ((lVar8 = *(longlong *)(param_1 + 0x78), uVar7 = uVar6, lVar8 != 0 &&
      (lVar3 = *(longlong *)(param_1 + 0x70), lVar3 != 0)))) {
    if (iVar4 < 0x14) {
      if (iVar4 == 1) {
        local_108[0] = CONCAT44(local_108[0]._4_4_,*(undefined4 *)(param_2 + 8));
        iVar4 = FUN_14281b48e();
        if (iVar4 == 0) {
          lVar8 = FUN_1468b2192(param_1 + 0x10);
          if ((lVar8 == 0) ||
             (lVar8 = FUN_144aff0ec(&local_110), param_3 = local_110, 0x3f3 < *(int *)(lVar8 + 0x44)
             )) {
            FUN_14689aaf5(param_3,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                          (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                          param_4 + *(int *)(param_1 + 0x44));
          }
          else {
            local_90 = 0;
            local_88 = 0xa00000000;
            local_58 = 0;
            local_50 = 0xa00000000;
            local_48 = 0xffffffff;
            FUN_140a6c050(local_108,*(undefined8 *)(param_2 + 0xc));
            FUN_141110854(local_108);
            FUN_140a6c1c4(local_108,*(undefined8 *)(param_1 + 0x78));
            FUN_141110864(local_108);
            FUN_142816e2c(local_188);
            FUN_14171b354(local_108,&local_18c);
            FUN_140241d2e(local_188,local_18c);
            local_174 = *(undefined8 *)(param_2 + 0x14);
            local_148 = 0;
            uVar7 = FUN_14281294c(local_110,param_5,local_188);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1f8))
                      (*(longlong **)(param_1 + 0x70),
                       (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                       param_4 + *(int *)(param_1 + 0x44),uVar7);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (local_90 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          local_108[0] = 0;
          local_198 = local_188;
          local_188[0] = 0;
          FUN_1404da962(param_3,*(undefined8 *)(*param_3 + 8),*(undefined8 *)(param_1 + 0x78));
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1f8))
                    (*(longlong **)(param_1 + 0x70),
                     (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                     param_4 + *(int *)(param_1 + 0x44),local_188[0]);
        }
      }
      else if (iVar4 == 2) {
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_144aa02de(*param_3,local_108);
        FUN_1427f09fe(local_108[0] & 0xffffffff,lVar3,lVar8,
                      (longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
      }
      else {
        if (iVar4 != 3) goto switchD_141715bc2_caseD_15;
        FUN_1427e15ea(CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x44) >> 8),
                               *(undefined1 *)(param_2 + 0x71)),lVar3,lVar8,
                      (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                      param_4 + *(int *)(param_1 + 0x44));
      }
    }
    else {
      switch(iVar4) {
      case 0x14:
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_1408383eb(*(undefined8 *)(*param_3 + 8),local_108);
        FUN_1427f0a6c(local_108[0],lVar3,lVar8,(longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
        break;
      default:
        goto switchD_141715bc2_caseD_15;
      case 0x16:
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_1458ec23e(*param_3,local_108);
        FUN_1427f098f(local_108[0] & 0xffff,lVar3,lVar8,
                      (longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
        break;
      case 0x17:
        FUN_14689ab83(param_3,lVar3,lVar8,
                      (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                      param_4 + *(int *)(param_1 + 0x44));
        break;
      case 0x18:
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_144aa04bc(*param_3,local_108);
        FUN_1427f0bb5(local_108[0],lVar3,lVar8,(longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
        break;
      case 0x19:
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_144afef32(*param_3,local_108);
        FUN_1427f0b48(local_108[0] & 0xffffffff,lVar3,lVar8,
                      (longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
        break;
      case 0x1a:
        iVar4 = *(int *)(param_2 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_144afeef0(*param_3,local_108);
        FUN_1427f0ada(local_108[0] & 0xffff,lVar3,lVar8,
                      (longlong)iVar2 * (longlong)iVar4 + param_4 + iVar1);
      }
    }
    uVar7 = 3;
  }
switchD_141715bc2_caseD_15:
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141715f94 FUN_141715f94 body=108 status=ok
// SIG undefined FUN_141715f94(void)

void FUN_141715f94(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar2 = param_1[1];
  uVar3 = *(undefined4 *)(lVar2 + 0xf78);
  uVar4 = *(undefined4 *)(lVar2 + 0xf7c);
  lVar6 = 0;
  do {
    puVar1 = (undefined4 *)(lVar2 + 0xf80 + lVar6 * 8);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x10);
  *(longlong *)param_1[1] = param_1[2];
  param_1[2] = param_1[1];
  puVar5 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,(int)param_1[3]);
  param_1[1] = (longlong)puVar5;
  *puVar5 = 0;
  *param_1 = param_1[1] + 8;
  return;
}



// FUNCTION 141716000 FUN_141716000 body=90 status=ok
// SIG undefined FUN_141716000(void)

longlong FUN_141716000(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  uVar3 = *(undefined4 *)(lVar2 + -8);
  uVar4 = *(undefined4 *)(lVar2 + -4);
  lVar6 = 0;
  do {
    puVar1 = (undefined4 *)(lVar2 + lVar6 * 8);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x10);
  lVar2 = param_1[1];
  puVar5 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,(int)param_1[3]);
  param_1[1] = (longlong)puVar5;
  *puVar5 = 0;
  *param_1 = param_1[1] + 8;
  return lVar2;
}



// FUNCTION 14171606c FUN_14171606c body=121 status=ok
// SIG undefined FUN_14171606c(void)

void FUN_14171606c(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    param_3 = param_3 + *(int *)(param_1 + 0x44);
    do {
      FUN_14000e6f0(local_40,2);
      local_34 = 2;
      local_30 = 0;
      local_38 = param_3;
      FUN_14000e760(param_2,local_40);
      param_3 = param_3 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417160f8 FUN_1417160f8 body=139 status=ok
// SIG undefined FUN_1417160f8(void)

undefined8 * FUN_1417160f8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e37560;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141716184 FUN_141716184 body=29 status=ok
// SIG undefined FUN_141716184(void)

undefined8 FUN_141716184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417161a2 FUN_1417161a2 body=769 status=ok
// SIG undefined FUN_1417161a2(void)

undefined8 FUN_1417161a2(ulonglong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  
  uVar19 = 0;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    uVar17 = (uint)param_1[5];
    uVar2 = (ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar16 = 1;
      uVar5 = 0;
      iVar8 = 0;
    }
    else {
      puVar11 = (ulonglong *)param_1[4];
      if ((ulonglong *)param_1[4] == (ulonglong *)0x0) {
        puVar11 = param_1 + 2;
      }
      uVar5 = (uint)*puVar11;
      if (uVar5 == 0) {
        iVar8 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar8 = uVar17 - 1;
        }
        uVar19 = 0;
        uVar16 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar16 = uVar19;
        }
        iVar8 = 0;
        do {
          if (uVar16 == uVar19) goto LAB_14171643e;
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)puVar11 + uVar19 * 4 + 4);
          uVar19 = uVar19 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar19 = 0;
        iVar8 = 0;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar10 = uVar16 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar5 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar5) {
        uVar5 = uVar17;
      }
    }
    if ((int)uVar5 < (int)uVar17) {
      uVar2 = *param_1;
      uVar17 = 0xffffffff;
      do {
        lVar4 = (longlong)(int)uVar5;
        iVar1 = *(int *)(uVar2 + lVar4 * 0x28 + 8);
        iVar18 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar18 = 0;
        }
        if (0 < iVar18) {
          iVar1 = 0;
          do {
            iVar1 = iVar1 + 1;
          } while (iVar18 != iVar1);
        }
        iVar1 = FUN_1457511aa(param_2);
        lVar12 = 0;
        if (iVar1 != -1) {
          lVar12 = (longlong)iVar1 * 0x28 + *param_2;
        }
        if (lVar12 == 0) goto LAB_14171647f;
        uVar2 = *param_1;
        iVar1 = *(int *)(lVar12 + 0x18);
        iVar18 = *(int *)(uVar2 + 0x18 + lVar4 * 0x28);
        if (iVar1 == iVar18) {
          if (1 < iVar1) {
            lVar13 = 0;
            while( true ) {
              uVar9 = *(ushort *)(*(longlong *)(lVar12 + 0x10) + lVar13);
              uVar10 = (ulonglong)uVar9;
              uVar14 = *(ushort *)(*(longlong *)(uVar2 + lVar4 * 0x28 + 0x10) + lVar13);
              if (uVar9 != uVar14) break;
              if (uVar9 == 0) goto LAB_1417163b0;
LAB_14171637c:
              lVar13 = lVar13 + 2;
            }
            if ((uVar14 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar15]) goto LAB_14171637c;
            }
            if (uVar9 != uVar14) goto LAB_14171647f;
          }
        }
        else if (iVar18 + iVar1 != 1) goto LAB_14171647f;
LAB_1417163b0:
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar11 = (ulonglong *)param_1[4];
        if ((ulonglong *)param_1[4] == (ulonglong *)0x0) {
          puVar11 = param_1 + 2;
        }
        iVar1 = (int)param_1[5];
        iVar18 = (int)uVar19;
        lVar4 = (longlong)iVar18;
        uVar5 = *(uint *)((longlong)puVar11 + lVar4 * 4) & uVar17;
        if (uVar5 == 0) {
          iVar6 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar6 = iVar1 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar18) {
            iVar7 = iVar18;
          }
          if (iVar6 <= iVar18) break;
          lVar12 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar5 = *(uint *)((longlong)puVar11 + lVar12 * 4 + lVar4 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar7 - lVar4 == lVar12) goto LAB_14171643e;
          }
          uVar19 = (ulonglong)(iVar18 + (int)lVar12 + 1);
          uVar17 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar10 = uVar16 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar5 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      } while ((int)uVar5 < iVar1);
    }
LAB_14171643e:
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
LAB_14171647f:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1417164a4 FUN_1417164a4 body=91 status=ok
// SIG undefined FUN_1417164a4(void)

void FUN_1417164a4(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_14c949ee8;
  lVar3 = (longlong)DAT_14c949ef0;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (DAT_14c949ee8 != 0) {
    FUN_1400020a8(DAT_14c949ee8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417164f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c949ec0);
  return;
}



// FUNCTION 141716500 FUN_141716500 body=353 status=ok
// SIG undefined FUN_141716500(void)

void FUN_141716500(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141716587;
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
LAB_141716587:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141716662 FUN_141716662 body=163 status=ok
// SIG undefined FUN_141716662(void)

undefined4 * FUN_141716662(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  memset(param_1 + 2,0,0x300);
  param_1[0xd0] = 0;
  memset(param_1 + 0xd2,0,0x300);
  param_1[0x1a4] = *(undefined4 *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    lVar1 = FUN_1400305d2(&DAT_14c949ec0);
    *(longlong *)(param_1 + 0x1a2) = lVar1;
    *(undefined8 *)(lVar1 + 0xff0) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1a2);
  }
  else {
    *(longlong *)(param_1 + 0x1a2) = *(longlong *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  return param_1;
}



// FUNCTION 141716706 FUN_141716706 body=185 status=ok
// SIG undefined FUN_141716706(void)

longlong FUN_141716706(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1[1] + 0xff0);
  if (lVar4 == 0) {
    iVar2 = (int)(*param_1 - param_1[1] >> 3) * -0x55555555;
    *param_2 = iVar2;
    lVar4 = param_1[1];
    lVar3 = (longlong)iVar2;
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + lVar3 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar4 = param_1[1];
    lVar3 = FUN_1400305d2(&DAT_14c949ec0,(int)param_1[2]);
    param_1[1] = lVar3;
    *(undefined8 *)(lVar3 + 0xff0) = 0;
    *param_1 = param_1[1];
  }
  else {
    *(undefined8 *)(lVar4 + 0xfe0) = 0;
    *(undefined8 *)(lVar4 + 0xfe8) = 0;
    *(undefined8 *)(lVar4 + 0xfd0) = 0;
    *(undefined8 *)(lVar4 + 0xfd8) = 0;
    *(undefined8 *)(lVar4 + 0xfc0) = 0;
    *(undefined8 *)(lVar4 + 0xfc8) = 0;
    *(undefined8 *)(param_1[1] + 0xff0) = *(undefined8 *)(lVar4 + 0xff0);
    *param_2 = 0xa8;
  }
  return lVar4;
}



// FUNCTION 1417167c0 FUN_1417167c0 body=123 status=ok
// SIG undefined FUN_1417167c0(void)

void FUN_1417167c0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141716838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 14171689a FUN_14171689a body=182 status=ok
// SIG undefined FUN_14171689a(void)

void FUN_14171689a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(*param_1 + 0x400);
  if (lVar8 == 0) {
    lVar8 = *param_1;
  }
  lVar6 = (longlong)*param_2 * 0x20;
  iVar5 = *(int *)(lVar8 + 4 + lVar6);
  if (iVar5 <= *(int *)(lVar8 + 0xc + lVar6)) {
    lVar8 = lVar8 + lVar6;
    do {
      plVar3 = (longlong *)param_1[1];
      *(int *)(lVar8 + 4) = iVar5 + 1;
      uVar2 = *(uint *)(*plVar3 + (longlong)iVar5 * 4);
      uVar7 = (ulonglong)(uVar2 & 0xffff);
      lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      uVar4 = *(undefined8 *)(lVar6 + uVar7 * 0x18);
      LOCK();
      puVar1 = (uint *)(lVar6 + 8 + uVar7 * 0x18);
      *puVar1 = *puVar1 & ~DAT_14c75ec9c;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)(lVar6 + 8 + uVar7 * 0x18);
      *puVar1 = *puVar1 | DAT_14c75ec98;
      UNLOCK();
      iVar5 = *(int *)(lVar8 + 0x18);
      *(uint *)(lVar8 + 0x18) = iVar5 + 1U;
      if (*(uint *)(lVar8 + 0x1c) < iVar5 + 1U) {
        FUN_1447f76d2(lVar8 + 0x10,iVar5);
      }
      *(undefined8 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar5 * 8) = uVar4;
      iVar5 = *(int *)(lVar8 + 4);
    } while (iVar5 <= *(int *)(lVar8 + 0xc));
  }
  return;
}



// FUNCTION 141716950 FUN_141716950 body=332 status=ok
// SIG undefined FUN_141716950(void)

void FUN_141716950(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417169be;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1417169be:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 141716a9c FUN_141716a9c body=373 status=ok
// SIG undefined FUN_141716a9c(void)

void FUN_141716a9c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141716b25;
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
LAB_141716b25:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141716c12 FUN_141716c12 body=682 status=ok
// SIG undefined FUN_141716c12(void)

void FUN_141716c12(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_141716c87;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_141716c87:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 141716ebc FUN_141716ebc body=1507 status=ok
// SIG undefined FUN_141716ebc(void)

void FUN_141716ebc(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar10 = iVar18 + 1;
    iVar14 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar14 = iVar18;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar18;
        }
        else {
          uVar23 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar23) {
              uVar6 = uVar23;
            }
          }
          else {
            uVar6 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar10 = -0x20;
          if ((int)uVar23 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar16,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar16;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar7 = (longlong)iVar21;
    iVar18 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar18;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar18 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar18 = iVar21;
  }
  puVar11[iVar18 >> 5] = puVar11[iVar18 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  plVar16 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar12 = (longlong *)param_3[1];
  lVar7 = *(longlong *)*param_3;
  *plVar16 = lVar7;
  plVar16[1] = *plVar12;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar6 = (uint)lVar7 & 0xffff;
  uVar23 = ((uint)lVar7 << 0x10 | uVar6) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar6 >> 4);
  cVar8 = '\0';
  iVar18 = iVar21;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (iVar18 != -1) {
      do {
        plVar12 = (longlong *)(*param_1 + (longlong)iVar18 * 0x18);
        if (*plVar12 == lVar7) {
          uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
          lVar7 = plVar16[1];
          uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
          *(int *)plVar12 = (int)*plVar16;
          *(undefined4 *)((longlong)plVar12 + 4) = uVar3;
          *(int *)(plVar12 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar4;
          FUN_1408ee13a(param_1,iVar21);
          cVar8 = '\x01';
          goto LAB_141717035;
        }
        iVar18 = (int)plVar12[2];
      } while (iVar18 != -1);
    }
    cVar8 = '\0';
    iVar18 = iVar21;
  }
LAB_141717035:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar8;
  }
  if (cVar8 != '\0') goto LAB_1417170b9;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 < 4) {
    uVar19 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)plVar16 + 0x14) = uVar23;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         iVar18;
    goto LAB_1417170b9;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar12 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_141717157:
    uVar23 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar23) * 4) =
           0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar19 != uVar23);
  }
  else {
    if (uVar19 == 0) goto LAB_1417170b9;
    FUN_1446efa72(plVar16,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_141717157;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar13 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar23 = *puVar11;
    if (uVar23 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar13 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar13) goto LAB_1417170b9;
        iVar10 = iVar10 + 0x20;
        uVar23 = puVar11[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar23 & uVar23);
    uVar22 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar23 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar20 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar20 * 0x18);
      uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar19 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar19) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar20 * 0x18) = iVar21;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar20 * 0x18) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar23 = ~(uint)uVar17 & uVar23;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar13;
      lVar7 = (longlong)iVar5;
      uVar6 = puVar11[lVar7] & uVar23;
      if (uVar6 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar20 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar11[lVar7 + lVar20 + 1];
          if (uVar6 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar15 - lVar7 == lVar20) goto LAB_1417170b9;
        }
        uVar13 = (ulonglong)(iVar5 + (int)lVar20 + 1);
        uVar23 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar22 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_1417170b9:
  *param_2 = iVar18;
  return;
}



// FUNCTION 1417174a0 FUN_1417174a0 body=29 status=ok
// SIG undefined FUN_1417174a0(void)

undefined8 FUN_1417174a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417174be FUN_1417174be body=74 status=ok
// SIG undefined FUN_1417174be(void)

void FUN_1417174be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x000141717504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141717508 FUN_141717508 body=35 status=ok
// SIG undefined FUN_141717508(void)

void FUN_141717508(ulonglong *param_1)

{
  if (1 < *param_1) {
    FUN_14000ebb3();
  }
  *param_1 = 0;
  return;
}



// FUNCTION 14171752c FUN_14171752c body=40 status=ok
// SIG undefined FUN_14171752c(void)

undefined8 FUN_14171752c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141717554 FUN_141717554 body=29 status=ok
// SIG undefined FUN_141717554(void)

undefined8 FUN_141717554(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141717572 FUN_141717572 body=188 status=ok
// SIG undefined FUN_141717572(void)

void FUN_141717572(longlong param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dwTlsIndex = DAT_14c75eca8;
  if (DAT_14c75eca8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75eca8 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75eca8;
      DVar1 = DAT_14c75eca8;
    }
    DAT_14c75eca8 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1456d0794(local_28);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (1 < *(ulonglong *)(param_1 + 8)) {
    FUN_1401333da((longlong)lpTlsValue + 0x30,local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141717630 FUN_141717630 body=377 status=ok
// SIG undefined FUN_141717630(void)

longlong FUN_141717630(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c950c28 == '\0') {
    if (DAT_14c927740 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000021;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_80 = 0;
    local_88 = 0;
    lVar2 = FUN_140be85e0(DAT_14c927740,param_1,param_2,0);
    lVar3 = 0;
    if (lVar2 != 0) {
      cVar1 = FUN_14008df84(lVar2);
      lVar3 = 0;
      if (cVar1 != '\0') {
        lVar3 = lVar2;
      }
    }
  }
  else {
    local_38 = (code *)0x0;
    uStack_30 = 0;
    FUN_1406d3f7c(param_1);
    if ((longlong)(int)uStack_30 != 0) {
      lVar2 = 0;
      do {
        lVar3 = *(longlong *)(local_38 + lVar2);
        if (*(longlong *)(lVar3 + 0x18) == param_2) goto LAB_141717797;
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)uStack_30 * 8 != lVar2);
    }
    lVar3 = 0;
LAB_141717797:
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417177b0 FUN_1417177b0 body=40 status=ok
// SIG undefined FUN_1417177b0(void)

undefined8 FUN_1417177b0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417177d8 FUN_1417177d8 body=46 status=ok
// SIG undefined FUN_1417177d8(void)

void FUN_1417177d8(longlong param_1)

{
  FUN_1401a56c2(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141717806 FUN_141717806 body=29 status=ok
// SIG undefined FUN_141717806(void)

undefined8 FUN_141717806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141717824 FUN_141717824 body=132 status=ok
// SIG undefined FUN_141717824(void)

undefined8 * FUN_141717824(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e8f028;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e8f030;
  puVar1 = TlsGetValue(DAT_14c75eca8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75eca8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417178a8 FUN_1417178a8 body=49 status=ok
// SIG undefined FUN_1417178a8(void)

longlong FUN_1417178a8(void)

{
  if (DAT_14c9518d0 == 0) {
    FUN_14086a14e(&DAT_14c9518d0,&PTR_FUN_149e90220);
  }
  return DAT_14c9518d0;
}



// FUNCTION 1417178d9 FUN_1417178d9 body=49 status=ok
// SIG undefined FUN_1417178d9(void)

longlong FUN_1417178d9(void)

{
  if (DAT_14c951918 == 0) {
    FUN_14086a14e(&DAT_14c951918,&PTR_FUN_149e90408);
  }
  return DAT_14c951918;
}



// FUNCTION 14171790a FUN_14171790a body=47 status=ok
// SIG undefined FUN_14171790a(void)

void FUN_14171790a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  (**(code **)(*plVar1 + 0xb8))(plVar1);
  FUN_140011d52(plVar1);
  *(undefined4 *)(param_1 + 0x34) = 0x10;
  return;
}



// FUNCTION 14171793a FUN_14171793a body=53 status=ok
// SIG undefined FUN_14171793a(void)

void FUN_14171793a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1446f2cc4();
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141717964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 141717970 FUN_141717970 body=812 status=ok
// SIG undefined FUN_141717970(void)

undefined8 FUN_141717970(longlong param_1,undefined8 param_2,undefined2 **param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  void *pvVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  void *local_78;
  ulonglong uStack_70;
  undefined2 *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (param_3 == (undefined2 **)0x0) {
    FUN_140056680(param_2,L"TArray");
    pvVar6 = (void *)0x0;
    goto LAB_141717b25;
  }
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
            (*(longlong **)(param_1 + 0x78),&local_50,&local_78,param_4 & 0xfffffffd);
  uVar4 = local_48;
  puVar3 = local_50;
  pvVar6 = local_78;
  local_50 = (undefined2 *)0x0;
  lVar11 = (longlong)(int)(uint)uStack_70;
  local_48 = (uint)uStack_70;
  if (lVar11 == 0) {
    local_44 = 0;
LAB_1417179f1:
    if (1 < uVar4) {
LAB_1417179fb:
      FUN_140056680(&local_60);
      puVar5 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar5 = local_60;
      }
      lVar11 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar11);
        uVar9 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)&DAT_149e06342 + lVar11);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141717a56;
          }
          iVar10 = uVar9 - uVar8;
          goto LAB_141717a82;
        }
        if (uVar1 == 0) break;
LAB_141717a56:
        lVar11 = lVar11 + 2;
      }
      iVar10 = 0;
LAB_141717a82:
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar10 == 0) {
LAB_141717c81:
        FUN_1400020e8(&local_50,&DAT_149e001d8,1);
      }
    }
  }
  else {
    FUN_1446dd670(&local_50,uStack_70 & 0xffffffff,0);
    memcpy(local_50,pvVar6,lVar11 * 2);
    if (local_48 < 2) goto LAB_1417179f1;
    FUN_140056680(&local_60);
    puVar5 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar5 = local_60;
    }
    lVar11 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar5 + lVar11);
      uVar9 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)&DAT_149e06342 + lVar11);
      uVar8 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141717c26;
        }
        iVar10 = uVar9 - uVar8;
        goto LAB_141717c56;
      }
      if (uVar1 == 0) break;
LAB_141717c26:
      lVar11 = lVar11 + 2;
    }
    iVar10 = 0;
LAB_141717c56:
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar10 == 0) goto LAB_141717c81;
    if (1 < uVar4 && local_48 < 2) goto LAB_1417179fb;
  }
  puVar5 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar5 = local_50;
  }
  puVar7 = &DAT_149dfb77a;
  if (uVar4 != 0) {
    puVar7 = puVar3;
  }
  FUN_140002266(&local_60,L"<%s%s>",puVar7,puVar5);
  if (&local_60 == param_3) {
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = (undefined2 *)0x0;
    *(int *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"TArray");
  pvVar6 = local_78;
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar3);
    pvVar6 = local_78;
  }
LAB_141717b25:
  if (pvVar6 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141717c9e FUN_141717c9e body=285 status=ok
// SIG undefined FUN_141717c9e(void)

void FUN_141717c9e(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  iVar5 = (int)param_2[1];
  if (iVar5 == 0) {
    if ((bVar1 & 1) != 0) {
LAB_141717d7f:
      FUN_144a886ae(param_2);
      return;
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x78);
    iVar2 = *(int *)((longlong)plVar3 + 0x34);
    if ((0 < iVar5) && ((plVar3[7] & 0x1040000000U) == 0)) {
      if ((bVar1 & 1) == 0) {
        uVar6 = *param_2;
      }
      else {
        uVar6 = *param_2;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_2;
        }
      }
      do {
        if ((plVar3[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar3 + 0x148))(plVar3,uVar6);
        }
        uVar6 = uVar6 + (longlong)iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if ((bVar1 & 1) != 0) {
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1468c0360(param_2,0,iVar2,uVar4);
      }
      goto LAB_141717d7f;
    }
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_14474d398(param_2,0,iVar2,uVar4);
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141717dd6 FUN_141717dd6 body=153 status=ok
// SIG undefined FUN_141717dd6(void)

void FUN_141717dd6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  plVar1 = (longlong *)param_1[0xf];
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2);
  lVar2 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar2 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141717e70 FUN_141717e70 body=82 status=ok
// SIG undefined FUN_141717e70(void)

undefined8 * FUN_141717e70(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e91ae0;
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_1468ca1ee(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141717ec2 FUN_141717ec2 body=22 status=ok
// SIG undefined FUN_141717ec2(void)

undefined1 FUN_141717ec2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140333cf8(param_2,param_3);
  return 1;
}



// FUNCTION 141717ed8 FUN_141717ed8 body=22 status=ok
// SIG undefined FUN_141717ed8(void)

undefined1 FUN_141717ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1447e46aa(param_2,param_3);
  return 1;
}



// FUNCTION 141717eee FUN_141717eee body=103 status=ok
// SIG undefined FUN_141717eee(void)

undefined8 FUN_141717eee(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (longlong *)FUN_1447712aa();
  puVar3 = (undefined4 *)(param_2 + 0xc);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4);
    }
    else {
      FUN_14572512c(plVar2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  return param_1;
}



// FUNCTION 141717f56 FUN_141717f56 body=29 status=ok
// SIG undefined FUN_141717f56(void)

undefined1 FUN_141717f56(void)

{
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  FUN_14032b138(in_stack_00000028);
  *in_R9 = 1;
  return 1;
}



// FUNCTION 141717f74 FUN_141717f74 body=22 status=ok
// SIG undefined FUN_141717f74(void)

undefined1 FUN_141717f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400f4f7e(param_2,param_3);
  return 1;
}



// FUNCTION 141717f8a FUN_141717f8a body=137 status=ok
// SIG undefined FUN_141717f8a(void)

undefined8 FUN_141717f8a(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x10);
    do {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -2 != param_3) {
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 4;
      puVar5 = puVar5 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141718014 FUN_141718014 body=137 status=ok
// SIG undefined FUN_141718014(void)

undefined8 FUN_141718014(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x10);
    do {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -2 != param_3) {
        iVar1 = *(int *)(param_3 + 3);
        _Src = (void *)param_3[2];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 4;
      puVar5 = puVar5 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14171809e FUN_14171809e body=48 status=ok
// SIG undefined FUN_14171809e(void)

void FUN_14171809e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140c98f9a(param_3,param_2,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1417180ce FUN_1417180ce body=26 status=ok
// SIG undefined FUN_1417180ce(void)

undefined8 FUN_1417180ce(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  FUN_14075f7c0(*(undefined8 *)(*param_2 + 8),param_3);
  return 1;
}



// FUNCTION 1417180e8 FUN_1417180e8 body=32 status=ok
// SIG undefined FUN_1417180e8(void)

undefined1
FUN_1417180e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  FUN_14075f7c0(param_2,param_5);
  *param_4 = 1;
  return 1;
}



// FUNCTION 141718108 FUN_141718108 body=54 status=ok
// SIG undefined FUN_141718108(void)

undefined1 FUN_141718108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447715ec(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 141718146 FUN_141718146 body=29 status=ok
// SIG undefined FUN_141718146(void)

undefined1 FUN_141718146(void)

{
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  FUN_14011750a(in_stack_00000028);
  *in_R9 = 1;
  return 1;
}



// FUNCTION 141718164 FUN_141718164 body=269 status=ok
// SIG undefined FUN_141718164(void)

void FUN_141718164(longlong param_1,int param_2)

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



// FUNCTION 141718272 FUN_141718272 body=534 status=ok
// SIG undefined FUN_141718272(void)

void FUN_141718272(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  ulonglong *puVar4;
  char cVar5;
  undefined1 auStack_48 [38];
  char local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a658e();
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x70),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x71),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x71) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x72),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x72) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  pcVar1 = (char *)(param_1 + 0x73);
  pcVar3 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,pcVar1,1);
  }
  else {
    *pcVar1 = *pcVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  local_21 = *(undefined1 *)(param_1 + 0x34);
  puVar4 = (ulonglong *)param_2[1];
  puVar2 = (undefined1 *)*puVar4 + 1;
  if ((undefined1 *)puVar4[1] < puVar2) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  local_22 = '\0';
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      local_22 = false;
    }
    else {
      local_22 = *pcVar1 == -1;
    }
    puVar4 = (ulonglong *)param_2[1];
    if (puVar4[1] < *puVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_22,1);
    }
    else {
      *puVar4 = *puVar4 + 1;
    }
  }
  else {
    puVar4 = (ulonglong *)param_2[1];
    pcVar1 = (char *)*puVar4 + 1;
    if ((char *)puVar4[1] < pcVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_22,1);
      cVar5 = local_22;
    }
    else {
      cVar5 = *(char *)*puVar4;
      *puVar4 = (ulonglong)pcVar1;
    }
    FUN_14001671c(param_1,local_21,cVar5 != '\0',0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171848a FUN_14171848a body=285 status=ok
// SIG undefined FUN_14171848a(void)

undefined8 FUN_14171848a(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((char)param_4 < '\0') || ((param_4 & 6) == 6)) || (*(char *)(param_1 + 0x73) == -1)) {
    pwVar2 = L"bool";
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 1) {
      pwVar2 = L"uint8";
    }
    else if (iVar1 == 2) {
      pwVar2 = L"uint16";
    }
    else if (iVar1 == 4) {
      pwVar2 = L"uint32";
    }
    else {
      if (iVar1 != 8) {
        if (param_1 == 0) {
          FUN_140056680(&local_28,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(param_1 + 0x20,&local_28);
        }
        puVar3 = local_28;
        if (local_20 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        local_38 = iVar1;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyBool.cpp",0xc9,
                      L"Unsupported FBoolProperty %s size %d.",puVar3);
        if (local_28 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(param_2,L"uint32");
        if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      pwVar2 = L"uint64";
    }
  }
  FUN_140056680(param_2,pwVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417185a8 FUN_1417185a8 body=460 status=ok
// SIG undefined FUN_1417185a8(void)

undefined8 FUN_1417185a8(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b48) {
    FUN_1468da6b1(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    if (uVar1 == DAT_14c892b9c) {
      FUN_1468da73b(param_1,param_2,param_3,param_4);
    }
    else if (uVar1 == DAT_14c892b98) {
      FUN_1468da7e9(param_1,param_2,param_3,param_4);
    }
    else if (uVar1 == DAT_14c892b90) {
      FUN_1468da874(param_1,param_2,param_3,param_4);
    }
    else if (uVar1 == DAT_14c892b44) {
      if (0 < *(int *)(*(longlong *)
                        (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                      (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) {
        return 0;
      }
      uVar3 = FUN_1446ddbd2();
      cVar2 = FUN_1400164de((longlong *)(param_1 + 0x10),uVar3);
      if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
         (*(int *)(*(longlong *)(*param_3 + 8) + 0x44) < 0x3f4)) {
        return 0;
      }
      FUN_1468da902(param_1,param_2,param_3,param_4);
    }
    else if (uVar1 == DAT_14c892ba8) {
      FUN_1468da9b0(param_1,param_2,param_3,param_4);
    }
    else if (uVar1 == DAT_14c892ba4) {
      FUN_1468daa3b(param_1,param_2,param_3,param_4);
    }
    else {
      if (uVar1 != DAT_14c892ba0) {
        return 0;
      }
      FUN_1468daac5(param_1,param_2,param_3,param_4);
    }
  }
  return 3;
}



// FUNCTION 141718774 FUN_141718774 body=323 status=ok
// SIG undefined FUN_141718774(void)

void FUN_141718774(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *_Src;
  wchar_t *pwVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = '\0';
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        _Src = (char *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Src != &local_21) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,&local_21,_Src,(int)param_1[6]);
          }
          else {
            memcpy(&local_21,_Src,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_21);
      }
      goto LAB_1417187ad;
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  local_21 = (*(byte *)(param_3 + (ulonglong)*(byte *)((longlong)param_1 + 0x71)) &
             *(byte *)((longlong)param_1 + 0x73)) != 0;
LAB_1417187ad:
  pwVar3 = L"False";
  if (local_21 != '\0') {
    pwVar3 = L"True";
  }
  FUN_140002266(&local_38,&DAT_149e0625e,pwVar3);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417188b8 FUN_1417188b8 body=1760 status=ok
// SIG undefined FUN_1417188b8(void)

longlong FUN_1417188b8(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  char *pcVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auStack_88 [32];
  longlong *local_68;
  char local_59;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar3 = FUN_1401e9420(param_2,&local_58,0);
  if (lVar3 == 0) {
LAB_141718f92:
    lVar3 = 0;
    goto LAB_141718c63;
  }
  lVar4 = param_3;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      lVar4 = *(int *)((longlong)param_1 + 0x44) + param_3;
      goto LAB_141718911;
    }
    local_59 = '\0';
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      pcVar11 = (char *)(*(int *)((longlong)param_1 + 0x44) + param_3);
      if (pcVar11 != &local_59) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_59,pcVar11,(int)param_1[6]);
        }
        else {
          memcpy(&local_59,pcVar11,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_59);
    }
    if (local_59 == '\x01') {
      bVar16 = *(byte *)((longlong)param_1 + 0x73);
    }
    else {
      bVar16 = 0;
    }
  }
  else {
LAB_141718911:
    bVar16 = *(byte *)(lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x71));
  }
  lVar4 = FUN_140932b6e();
  puVar10 = local_58;
  if ((int)uStack_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  lVar8 = 0;
  while( true ) {
    uVar12 = *(ushort *)((longlong)puVar10 + lVar8);
    uVar13 = (ulonglong)uVar12;
    uVar14 = *(ushort *)((longlong)&DAT_149e0209e + lVar8);
    if (uVar12 != uVar14) break;
    if (uVar12 == 0) goto LAB_141718c4e;
LAB_14171895f:
    lVar8 = lVar8 + 2;
  }
  if ((uVar14 | uVar12) < 0x80) {
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar15 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_14171895f;
  }
  if (uVar12 != uVar14) {
    lVar8 = 0;
    goto LAB_141718998;
  }
LAB_141718c4e:
  bVar16 = bVar16 | *(byte *)((longlong)param_1 + 0x72);
  goto LAB_141718c52;
LAB_141718998:
  uVar12 = *(ushort *)((longlong)puVar10 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)&DAT_149e0617a + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_1417189b1;
    }
    if (uVar12 != uVar14) {
      plVar7 = *(longlong **)(lVar4 + 0x50);
      plVar5 = (longlong *)*plVar7;
      if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
      }
      FUN_1447a1fc0(plVar5);
      plVar7 = (longlong *)*plVar7;
      pcVar1 = *(code **)(*plVar7 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar5 = plVar7 + 3;
        if (plVar7[5] != 0) {
          plVar5 = (longlong *)(plVar7[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar5 = plVar7 + 2;
      }
      else {
        plVar5 = (longlong *)(*pcVar1)(plVar7);
      }
      puVar10 = &DAT_149dfb77a;
      if ((int)plVar5[1] != 0) {
        puVar10 = (undefined2 *)*plVar5;
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar9 = local_58;
      }
      lVar8 = 0;
      goto LAB_141718a54;
    }
    goto LAB_141718c4e;
  }
  if (uVar12 == 0) goto LAB_141718c4e;
LAB_1417189b1:
  lVar8 = lVar8 + 2;
  goto LAB_141718998;
LAB_141718a54:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)puVar10 + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718a6d;
    }
    if (uVar12 != uVar14) {
      lVar8 = 0;
      goto LAB_141718aa6;
    }
    goto LAB_141718c4e;
  }
  if (uVar12 == 0) goto LAB_141718c4e;
LAB_141718a6d:
  lVar8 = lVar8 + 2;
  goto LAB_141718a54;
LAB_141718aa6:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)&DAT_149e06384 + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718abf;
    }
    if (uVar12 != uVar14) {
      local_68 = *(longlong **)(lVar4 + 0x60);
      plVar5 = (longlong *)*local_68;
      if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
      }
      FUN_1447a1fc0(plVar5);
      plVar5 = (longlong *)*local_68;
      pcVar1 = *(code **)(*plVar5 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar7 = plVar5 + 3;
        if (plVar5[5] != 0) {
          plVar7 = (longlong *)(plVar5[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar7 = plVar5 + 2;
      }
      else {
        plVar7 = (longlong *)(*pcVar1)(plVar5);
      }
      puVar10 = &DAT_149dfb77a;
      if ((int)plVar7[1] != 0) {
        puVar10 = (undefined2 *)*plVar7;
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar9 = local_58;
      }
      lVar8 = 0;
      goto LAB_141718b63;
    }
    goto LAB_141718c4e;
  }
  if (uVar12 == 0) goto LAB_141718c4e;
LAB_141718abf:
  lVar8 = lVar8 + 2;
  goto LAB_141718aa6;
LAB_141718b63:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)puVar10 + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718b7c;
    }
    if (uVar12 != uVar14) {
      lVar8 = 0;
      goto LAB_141718bb5;
    }
    goto LAB_141718c4e;
  }
  if (uVar12 == 0) goto LAB_141718c4e;
LAB_141718b7c:
  lVar8 = lVar8 + 2;
  goto LAB_141718b63;
LAB_141718bb5:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)&DAT_149e25dfc + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718bca;
    }
    if (uVar12 != uVar14) {
      lVar8 = 0;
      goto LAB_141718bff;
    }
    goto LAB_141718c44;
  }
  if (uVar12 == 0) goto LAB_141718c44;
LAB_141718bca:
  lVar8 = lVar8 + 2;
  goto LAB_141718bb5;
LAB_141718bff:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)L"False" + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718c14;
    }
    if (uVar12 != uVar14) {
      puVar6 = (undefined8 *)FUN_1447a1f4a(*(undefined8 *)(lVar4 + 0x58));
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(puVar6 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar6;
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar9 = local_58;
      }
      lVar8 = 0;
      goto LAB_141718e77;
    }
    goto LAB_141718c44;
  }
  if (uVar12 == 0) goto LAB_141718c44;
LAB_141718c14:
  lVar8 = lVar8 + 2;
  goto LAB_141718bff;
LAB_141718e77:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)puVar10 + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718eaf;
    }
    if (uVar12 != uVar14) {
      lVar8 = 0;
      goto LAB_141718ed4;
    }
    goto LAB_141718c44;
  }
  if (uVar12 == 0) goto LAB_141718c44;
LAB_141718eaf:
  lVar8 = lVar8 + 2;
  goto LAB_141718e77;
LAB_141718ed4:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)&DAT_149e06338 + lVar8);
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar14;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718f0c;
    }
    if (uVar12 != uVar14) {
      puVar6 = (undefined8 *)FUN_1447a1f4a(*(undefined8 *)(lVar4 + 0x68));
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(puVar6 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar6;
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar9 = local_58;
      }
      lVar4 = 0;
      goto LAB_141718f48;
    }
    goto LAB_141718c44;
  }
  if (uVar12 == 0) goto LAB_141718c44;
LAB_141718f0c:
  lVar8 = lVar8 + 2;
  goto LAB_141718ed4;
LAB_141718f48:
  uVar12 = *(ushort *)((longlong)puVar9 + lVar4);
  uVar13 = (ulonglong)uVar12;
  uVar14 = *(ushort *)((longlong)puVar10 + lVar4);
  if (uVar12 == uVar14) {
    if (uVar12 == 0) goto LAB_141718c44;
LAB_141718f80:
    lVar4 = lVar4 + 2;
    goto LAB_141718f48;
  }
  if ((uVar14 | uVar12) < 0x80) {
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar15 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_141718f80;
  }
  if (uVar12 != uVar14) goto LAB_141718f92;
LAB_141718c44:
  bVar16 = bVar16 & ~*(byte *)((longlong)param_1 + 0x73);
LAB_141718c52:
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar2 != '\0') {
      local_59 = (*(byte *)((longlong)param_1 + 0x73) & bVar16) != 0;
      cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar2 == '\0') {
        pcVar11 = (char *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (pcVar11 != &local_59) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,pcVar11,&local_59,(int)param_1[6]);
          }
          else {
            memcpy(pcVar11,&local_59,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_59);
      }
      goto LAB_141718c63;
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  *(byte *)(param_3 + (ulonglong)*(byte *)((longlong)param_1 + 0x71)) = bVar16;
LAB_141718c63:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 141718f9a FUN_141718f9a body=134 status=ok
// SIG undefined FUN_141718f9a(void)

undefined8 FUN_141718f9a(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x71);
  local_29 = (*(byte *)(param_4 + uVar2) & *(byte *)(param_1 + 0x73)) != 0;
  (**(code **)(*param_2 + 0x178))(param_2,&local_29,1);
  if (local_29 == '\0') {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x72);
  }
  *(byte *)(param_4 + uVar2) = *(byte *)(param_4 + uVar2) & ~*(byte *)(param_1 + 0x73) | bVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141719022 FUN_141719022 body=71 status=ok
// SIG undefined FUN_141719022(void)

void FUN_141719022(longlong param_1,longlong *param_2)

{
  FUN_1403a658e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141719066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x198))(param_2);
  return;
}



// FUNCTION 14171906a FUN_14171906a body=483 status=ok
// SIG undefined FUN_14171906a(void)

undefined8 * FUN_14171906a(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 == 0) {
    FUN_140056680(param_2,L"uint8");
    if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  cVar1 = *(char *)(lVar2 + 0x50);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar4 = FUN_140851d9a();
  if ((param_4 & 2) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x38);
    if ((uVar5 >> 10 & 1) == 0) {
      bVar9 = (uVar5 >> 8 & 1) == 0 || lVar2 != lVar4;
    }
  }
  local_58 = (undefined2 *)0x0;
  iStack_50 = 0;
  uStack_4c = 0;
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (*(int *)(lVar3 + 0x38) < 2) {
    if ((char)param_4 >= '\0' || lVar2 == lVar4) {
      local_78[0] = *(longlong *)(lVar3 + 0x18);
      FUN_1400021e4(local_78,&local_68);
      local_58 = local_68;
      iStack_50 = (int)uStack_60;
      uStack_4c = uStack_60._4_4_;
      goto LAB_141719120;
    }
    local_68 = *(undefined2 **)(lVar3 + 0x18);
    FUN_1400021e4(&local_68,local_78);
    FUN_1468f9fe9(&local_68,local_78,0,&DAT_149e894ee);
    puVar7 = local_68;
    iVar8 = (int)uStack_60;
    uVar6 = uStack_60._4_4_;
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1402980a2(&local_58,*(undefined8 *)(lVar3 + 0x30),*(int *)(lVar3 + 0x38) + -1);
LAB_141719120:
    puVar7 = local_58;
    iVar8 = iStack_50;
    uVar6 = uStack_4c;
    if (!(bool)(((char)param_4 < '\0' && lVar2 != lVar4) | cVar1 == '\x02' | bVar9)) {
      if (iStack_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"TEnumAsByte<%s>",puVar7);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_141719166;
    }
  }
  *param_2 = puVar7;
  *(int *)(param_2 + 1) = iVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
LAB_141719166:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 14171924e FUN_14171924e body=487 status=ok
// SIG undefined FUN_14171924e(void)

void FUN_14171924e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1403a6406();
  plVar1 = (longlong *)(param_1 + 0x78);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if (((*(byte *)(param_2 + 5) & 1) == 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0)) {
LAB_1417193cd:
    if (*plVar1 != 0) goto LAB_1417192d4;
  }
  else {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if (DAT_14c9512b0 == 0) {
        local_50 = &local_28;
        local_28 = FUN_140631fbe;
        local_40 = &LAB_145834656;
        local_48 = &LAB_146272d4c;
        local_58 = &LAB_1468be089;
        local_60 = FUN_14609ba58;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x410;
        FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e
                     );
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_1417193d7;
      }
      if ((((DAT_14c9512b0 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c9512b0 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8)
          != DAT_14c9512b0 + 0x30)) goto LAB_1417192d4;
      local_30 = param_1;
      FUN_1468eabe6(lVar2 + 800,&local_28,&local_30,0);
      goto LAB_1417193cd;
    }
  }
LAB_1417193d7:
  lVar2 = FUN_1448f9ec4(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a797b2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((*(uint *)(lVar2 + 0xd4) & 0x80000080) == 0x80)) {
      FUN_144a79778(lVar2);
    }
  }
LAB_1417192d4:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141719436 FUN_141719436 body=73 status=ok
// SIG undefined FUN_141719436(void)

void FUN_141719436(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141719480 FUN_141719480 body=258 status=ok
// SIG undefined FUN_141719480(void)

undefined8 * FUN_141719480(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140e6158c();
  puVar1[1] = &DAT_14c951dd8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea6700;
  uVar2 = *param_1;
  local_40 = uVar2;
  if (((uVar2 & 1) != 0) && (uVar2 = uVar2 & 0xfffffffffffffffe, uVar2 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
  }
  FUN_1403a630a(puVar1,&local_40,param_2,param_3);
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
  *puVar1 = &PTR_LAB_149ea6700;
  puVar1[0xe] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 141719584 FUN_141719584 body=183 status=ok
// SIG undefined FUN_141719584(void)

void FUN_141719584(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403a658e();
  plVar1 = (longlong *)(param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)) &&
     (*plVar1 != 0)) {
    lVar4 = FUN_14001206a();
    lVar2 = *plVar1;
    if (((lVar2 != 0) && (lVar4 != 0)) &&
       ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))))) {
      local_30 = param_1;
      FUN_1468eabe6(lVar2 + 0x1b0,local_24,&local_30,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14171963c FUN_14171963c body=94 status=ok
// SIG undefined FUN_14171963c(void)

void FUN_14171963c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar2 = FUN_14001206a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
    }
  }
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 14171969a FUN_14171969a body=258 status=ok
// SIG undefined FUN_14171969a(void)

undefined8 * FUN_14171969a(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140be4ae0();
  puVar1[1] = &DAT_14c951e30;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea6340;
  uVar2 = *param_1;
  local_40 = uVar2;
  if (((uVar2 & 1) != 0) && (uVar2 = uVar2 & 0xfffffffffffffffe, uVar2 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
  }
  FUN_1403a630a(puVar1,&local_40,param_2,param_3);
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
  *puVar1 = &PTR_LAB_149ea6340;
  puVar1[0xe] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 14171979e FUN_14171979e body=82 status=ok
// SIG undefined FUN_14171979e(void)

void FUN_14171979e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x138))(plVar1,param_3);
  if (((*(byte *)(plVar1 + 5) & 1) != 0) || ((*(byte *)((longlong)plVar1 + 0x2b) & 2) != 0)) {
    if (*param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144718840(*param_3,*(undefined8 *)(param_1 + 0x70));
    }
    param_3[1] = lVar2;
  }
  return;
}



// FUNCTION 1417197f0 FUN_1417197f0 body=159 status=ok
// SIG undefined FUN_1417197f0(void)

undefined4 FUN_1417197f0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar1 < 0x14) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x2a8))
                      (param_3,param_2,*(undefined8 *)(param_1 + 0x70),param_4,0);
    if ((DAT_14c950c29 == '\x01') && (*param_4 != 0)) {
      FUN_1456cec3c();
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*param_4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_144718840(*param_4,*(undefined8 *)(param_1 + 0x70));
      }
      param_4[1] = lVar3;
    }
  }
  return uVar2;
}



// FUNCTION 141719890 FUN_141719890 body=487 status=ok
// SIG undefined FUN_141719890(void)

void FUN_141719890(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1403a658e();
  plVar1 = (longlong *)(param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,plVar1);
  if (((*(byte *)(param_2 + 5) & 1) == 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0)) {
LAB_141719a0f:
    if (*plVar1 != 0) goto LAB_141719916;
  }
  else {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      if (DAT_14c9512b0 == 0) {
        local_50 = &local_28;
        local_28 = FUN_140631fbe;
        local_40 = &LAB_145834656;
        local_48 = &LAB_146272d4c;
        local_58 = &LAB_1468be089;
        local_60 = FUN_14609ba58;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x410;
        FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e
                     );
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_141719a19;
      }
      if ((((DAT_14c9512b0 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14c9512b0 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8)
          != DAT_14c9512b0 + 0x30)) goto LAB_141719916;
      local_30 = param_1;
      FUN_1468eabe6(lVar2 + 800,&local_28,&local_30,0);
      goto LAB_141719a0f;
    }
  }
LAB_141719a19:
  lVar2 = FUN_1448f9ec4(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a797b2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((*(uint *)(lVar2 + 0xd4) & 0x80000080) == 0x80)) {
      FUN_144a79778(lVar2);
    }
  }
LAB_141719916:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141719a78 FUN_141719a78 body=51 status=ok
// SIG undefined FUN_141719a78(void)

void FUN_141719a78(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 141719aac FUN_141719aac body=104 status=ok
// SIG undefined FUN_141719aac(void)

void FUN_141719aac(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a658e();
  local_20 = param_1;
  FUN_140b8d077(param_2,param_1 + 0x70);
  local_28 = param_1;
  FUN_140b8d077(param_2,param_1 + 0x78);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141719b16 FUN_141719b16 body=71 status=ok
// SIG undefined FUN_141719b16(void)

void FUN_141719b16(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1446f2cc4();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141719b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 141719b5e FUN_141719b5e body=153 status=ok
// SIG undefined FUN_141719b5e(void)

void FUN_141719b5e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined1 *)(param_1 + 0x98);
  local_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  local_30 = *(undefined4 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x84);
  uStack_28 = *(undefined4 *)(param_1 + 0x88);
  uStack_24 = *(undefined4 *)(param_1 + 0x8c);
  local_20 = *(undefined8 *)(param_1 + 0x90);
  local_38 = param_2;
  FUN_140458a4e(&local_48,0);
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141719bf8 FUN_141719bf8 body=98 status=ok
// SIG undefined FUN_141719bf8(void)

undefined8 FUN_141719bf8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (((*(ushort *)((longlong)plVar1 + 0x3b) & 0x1040) == 0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x150))(plVar1,param_2), cVar2 != '\0')) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if ((plVar1[7] & 0x1040000000U) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141719c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
  return uVar3;
}



// FUNCTION 141719c5a FUN_141719c5a body=1071 status=ok
// SIG undefined FUN_141719c5a(void)

void FUN_141719c5a(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != (ulonglong *)0x0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
    lVar12 = *(longlong *)(param_1 + 0x78);
    uVar2 = *(ulonglong *)(lVar13 + 0x38);
    uVar3 = *(ulonglong *)(lVar12 + 0x38);
    if (((uVar3 | uVar2) & 0x8000080000) != 0) {
      local_58 = *(byte *)(param_1 + 0x98);
      local_70 = *(undefined4 *)(param_1 + 0x80);
      uStack_6c = *(undefined4 *)(param_1 + 0x84);
      uStack_68 = *(undefined4 *)(param_1 + 0x88);
      uStack_64 = *(undefined4 *)(param_1 + 0x8c);
      local_60 = *(undefined8 *)(param_1 + 0x90);
      local_88 = lVar13;
      local_80 = lVar12;
      local_78 = param_2;
      if (param_3 != (ulonglong *)0x0) {
        local_a8 = *(undefined4 *)(param_1 + 0x80);
        uStack_a4 = *(undefined4 *)(param_1 + 0x84);
        uStack_a0 = *(undefined4 *)(param_1 + 0x88);
        uStack_9c = *(undefined4 *)(param_1 + 0x8c);
        local_98 = *(undefined8 *)(param_1 + 0x90);
        uVar1 = (uint)param_2[1];
        uVar14 = 0;
        uVar8 = uVar14;
        iVar10 = 0;
        local_c0 = lVar13;
        local_b8 = lVar12;
        local_b0 = param_3;
        local_90 = local_58;
        if (0 < (int)uVar1) {
          do {
            local_4c = uVar14;
            cVar5 = FUN_1446ec082(&local_88,&local_4c);
            uVar8 = uVar14;
            iVar10 = 0;
            if (cVar5 != '\0') break;
            uVar14 = uVar14 + 1;
            uVar8 = uVar1;
          } while (uVar1 != uVar14);
        }
        do {
          puVar9 = local_78 + 2;
          if ((local_58 & 1) == 0) {
            if (((int)uVar8 < 0) || ((int)local_78[5] <= (int)uVar8)) goto LAB_141719d90;
            if ((ulonglong *)local_78[4] != (ulonglong *)0x0) {
              puVar9 = (ulonglong *)local_78[4];
            }
            if ((*(uint *)((longlong)puVar9 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) ==
                0) goto LAB_141719d90;
            uVar7 = *local_78;
          }
          else {
            if (((int)uVar8 < 0) || ((int)local_78[3] <= (int)uVar8)) goto LAB_141719d90;
            uVar4 = *puVar9;
            uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)puVar9;
            if ((uVar4 & 1) == 0) {
              uVar7 = uVar4;
            }
            if ((*(uint *)(uVar7 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
            goto LAB_141719d90;
            uVar4 = *local_78;
            uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)local_78;
            if ((uVar4 & 1) == 0) {
              uVar7 = uVar4;
            }
          }
          lVar13 = (longlong)(int)uVar8 * (longlong)local_60._4_4_ + uVar7;
          iVar6 = FUN_1446e733e(&local_c0,lVar13,iVar10);
          if (iVar6 < 0) {
            local_c8 = 0;
          }
          else if ((local_90 & 1) == 0) {
            local_c8 = (longlong)iVar6 * (longlong)local_98._4_4_ + *local_b0;
          }
          else {
            uVar4 = *local_b0;
            uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)local_b0;
            if ((uVar4 & 1) == 0) {
              uVar7 = uVar4;
            }
            local_c8 = (longlong)iVar6 * (longlong)local_98._4_4_ + uVar7;
          }
          if ((uVar2 & 0x8000080000) != 0) {
            local_d8 = param_5;
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x170))
                      (*(longlong **)(param_1 + 0x70),lVar13,local_c8,param_4);
          }
          if ((uVar3 & 0x8000080000) != 0) {
            lVar12 = local_c8 + *(int *)(param_1 + 0x80);
            if (local_c8 == 0) {
              lVar12 = 0;
            }
            local_d8 = param_5;
            (**(code **)(**(longlong **)(param_1 + 0x78) + 0x170))
                      (*(longlong **)(param_1 + 0x78),lVar13 + *(int *)(param_1 + 0x80),lVar12,
                       param_4);
          }
          uVar4 = local_78[1];
          do {
            uVar8 = uVar8 + 1;
            if ((int)uVar4 <= (int)uVar8) break;
            local_4c = uVar8;
            cVar5 = FUN_1446ec082(&local_88,&local_4c);
          } while (cVar5 == '\0');
          iVar10 = iVar10 + 1;
        } while( true );
      }
      iVar10 = (int)param_2[1];
      iVar6 = 0;
      if (0 < iVar10) {
        iVar11 = 0;
        do {
          local_c0 = CONCAT44(local_c0._4_4_,iVar11);
          cVar5 = FUN_1446ec082(&local_88,&local_c0);
          iVar6 = iVar11;
          if (cVar5 != '\0') break;
          iVar11 = iVar11 + 1;
          iVar6 = iVar10;
        } while (iVar10 != iVar11);
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar6);
      while (cVar5 = FUN_1446ec082(&local_88,&local_c0), cVar5 != '\0') {
        if ((local_58 & 1) == 0) {
          uVar7 = *local_78;
        }
        else {
          uVar4 = *local_78;
          uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)local_78;
          if ((uVar4 & 1) == 0) {
            uVar7 = uVar4;
          }
        }
        lVar13 = (longlong)iVar6 * (longlong)local_60._4_4_ + uVar7;
        if ((uVar2 & 0x8000080000) != 0) {
          local_d8 = param_5;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x170))
                    (*(longlong **)(param_1 + 0x70),lVar13,0,param_4);
        }
        if ((uVar3 & 0x8000080000) != 0) {
          local_d8 = param_5;
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0x170))
                    (*(longlong **)(param_1 + 0x78),lVar13 + *(int *)(param_1 + 0x80),0,param_4);
        }
        uVar4 = local_78[1];
        do {
          iVar6 = iVar6 + 1;
          if ((int)uVar4 <= iVar6) break;
          local_c0 = CONCAT44(local_c0._4_4_,iVar6);
          cVar5 = FUN_1446ec082(&local_88,&local_c0);
        } while (cVar5 == '\0');
        local_c0 = CONCAT44(local_c0._4_4_,iVar6);
      }
    }
  }
LAB_141719d90:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14171a08a FUN_14171a08a body=734 status=ok
// SIG undefined FUN_14171a08a(void)

void FUN_14171a08a(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  
  if (param_3 == 0) {
    if (0 < (int)param_1[6]) {
      iVar9 = 0;
      do {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1,param_2,iVar9);
        if ((plVar2 != &DAT_14c951f48) && (0 < (int)plVar2[1])) {
          lVar8 = 0;
          iVar10 = 0;
          do {
            lVar4 = *plVar2;
            lVar7 = FUN_14479d2ce(lVar4 + lVar8);
            if (lVar7 != 0) {
              FUN_140aef9ca(param_5,0,lVar7,param_4,6);
              uVar5 = *(undefined8 *)(lVar4 + 8 + lVar8);
              FUN_14485c47a(lVar4 + lVar8);
              *(undefined8 *)(lVar4 + 8 + lVar8) = uVar5;
            }
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 0x10;
          } while (iVar10 < (int)plVar2[1]);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_1[6]);
    }
  }
  else if (0 < (int)param_1[6]) {
    iVar9 = 0;
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1,param_2,iVar9);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x208))(param_1,param_3,iVar9);
      if ((plVar3 != &DAT_14c951f48 && plVar2 != &DAT_14c951f48) &&
         (iVar10 = (int)plVar2[1], 0 < iVar10)) {
        if ((int)plVar3[1] < 1) {
          local_68 = 0;
        }
        else {
          local_60 = 0;
          local_58 = 0;
          do {
            lVar8 = *plVar2;
            lVar4 = FUN_14479d2ce();
            if (lVar4 != 0) {
              uVar5 = FUN_14479d2ce(*plVar3 + local_60);
              uVar6 = FUN_140aef9ca(param_5,uVar5,lVar4,param_4,6);
              uVar5 = *(undefined8 *)(lVar8 + 8 + local_60);
              FUN_14485c47a(lVar8 + local_60,uVar6);
              *(undefined8 *)(lVar8 + 8 + local_60) = uVar5;
            }
            local_68 = local_58 + 1;
            iVar10 = (int)plVar2[1];
            if (iVar10 <= (int)local_68) {
              local_68 = (ulonglong)((int)local_58 + 1);
              break;
            }
            local_60 = local_60 + 0x10;
            local_58 = local_68;
          } while ((longlong)local_68 < (longlong)(int)plVar3[1]);
        }
        if ((int)local_68 < iVar10) {
          lVar8 = (local_68 & 0xffffffff) << 4;
          do {
            lVar4 = *plVar2;
            lVar7 = FUN_14479d2ce();
            if (lVar7 != 0) {
              FUN_140aef9ca(param_5,0,lVar7,param_4,6);
              uVar5 = *(undefined8 *)(lVar4 + 8 + lVar8);
              FUN_14485c47a(lVar4 + lVar8);
              *(undefined8 *)(lVar4 + 8 + lVar8) = uVar5;
            }
            uVar1 = (int)local_68 + 1;
            local_68 = (ulonglong)uVar1;
            lVar8 = lVar8 + 0x10;
          } while ((int)uVar1 < (int)plVar2[1]);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 14171a368 FUN_14171a368 body=94 status=ok
// SIG undefined FUN_14171a368(void)

void FUN_14171a368(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar2 = FUN_14001206a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
    }
  }
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 14171a3c6 FUN_14171a3c6 body=368 status=ok
// SIG undefined FUN_14171a3c6(void)

undefined8 FUN_14171a3c6(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar2 == DAT_14c892b74) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_48);
    iVar1 = *(int *)(param_2 + 0x40);
    plVar5 = local_48;
    if ((int)uStack_40 == 0) {
      plVar5 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,plVar5,1);
    *(undefined8 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)iVar1 + param_4 + *(int *)(param_1 + 0x44)) =
         local_50;
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar4 = 0;
    if (*(ulonglong *)(param_2 + 0xc) != (ulonglong)DAT_14c892b78) goto LAB_14171a425;
    FUN_144a5dc74(&local_48);
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_48);
    puVar3 = (undefined8 *)FUN_1447a1f4a(&local_48);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    FUN_1446f470e(&local_50,puVar6,1);
    *(undefined8 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = local_50;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  uVar4 = 3;
LAB_14171a425:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14171a538 FUN_14171a538 body=93 status=ok
// SIG undefined FUN_14171a538(void)

undefined8 FUN_14171a538(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_20 = 1;
  local_28 = param_3;
  FUN_1400746b0(param_1,&local_18,param_2,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171a596 FUN_14171a596 body=78 status=ok
// SIG undefined FUN_14171a596(void)

void FUN_14171a596(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_28 = param_4;
  local_10 = param_3;
  FUN_140892c84(param_1,param_2,1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171a606 FUN_14171a606 body=145 status=ok
// SIG undefined FUN_14171a606(void)

void FUN_14171a606(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0xb8))(plVar1);
  FUN_140011d52(plVar1);
  plVar1 = *(longlong **)(param_1 + 0x70);
  iVar4 = *(int *)((longlong)plVar1 + 0x34);
  lVar2 = plVar1[6];
  uVar3 = (**(code **)(*plVar1 + 0x178))();
  uVar7 = iVar4 * (int)lVar2 + 3U & 0xfffffffc;
  uVar5 = 4;
  if (4 < (int)uVar3) {
    uVar5 = (ulonglong)uVar3;
  }
  iVar4 = uVar7 + 4;
  uVar3 = -(int)uVar5 & (int)uVar5 + iVar4 + 3U;
  uVar6 = 8;
  if (8 < (int)uVar3) {
    uVar6 = (ulonglong)uVar3;
  }
  *(uint *)(param_1 + 0x78) = uVar7;
  *(int *)(param_1 + 0x7c) = iVar4;
  *(uint *)(param_1 + 0x80) = uVar3;
  *(ulonglong *)(param_1 + 0x84) = uVar5 | uVar6 << 0x20;
  *(undefined4 *)(param_1 + 0x34) = 0x50;
  return;
}



// FUNCTION 14171a698 FUN_14171a698 body=89 status=ok
// SIG undefined FUN_14171a698(void)

void FUN_14171a698(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_14281ab14;
  local_20 = param_1;
  FUN_1402609e8(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171a6f2 FUN_14171a6f2 body=53 status=ok
// SIG undefined FUN_14171a6f2(void)

void FUN_14171a6f2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1446f2cc4();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014171a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14171a748 FUN_14171a748 body=73 status=ok
// SIG undefined FUN_14171a748(void)

void FUN_14171a748(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 14171a792 FUN_14171a792 body=54 status=ok
// SIG undefined FUN_14171a792(void)

ulonglong * FUN_14171a792(undefined8 param_1,ulonglong *param_2)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_2 = (ulonglong)DAT_14c892b8c;
  return param_2;
}



// FUNCTION 14171a7c8 FUN_14171a7c8 body=214 status=ok
// SIG undefined FUN_14171a7c8(void)

void FUN_14171a7c8(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(*param_2 + 8);
  if (((*(byte *)((longlong)plVar1 + 0x2b) & 6) != 2) ||
     ((*(byte *)((longlong)plVar1 + 0x29) & 1) != 0)) {
    local_58 = *param_3;
    local_50 = *(undefined4 *)(param_3 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_48 = *(undefined4 *)(param_3 + 2);
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_3 + 4);
    lVar2 = (longlong)local_38;
    _Src = (void *)param_3[3];
    if (lVar2 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar2 * 2);
      plVar1 = *(longlong **)(*param_2 + 8);
    }
    (**(code **)(*plVar1 + 0x130))(plVar1,param_3);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14171a8a0 FUN_14171a8a0 body=890 status=ok
// SIG undefined FUN_14171a8a0(void)

undefined8
FUN_14171a8a0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  void **ppvVar1;
  undefined2 *puVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  void *local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_50 = param_2;
  lVar6 = FUN_1403a6ca6();
  local_b0 = lVar6 + 0x240;
  if (lVar6 == 0) {
    local_b0 = 0;
  }
  local_b8 = param_7;
  cVar5 = FUN_140c98f9a(&local_78,&local_50,param_6,param_5);
  if (cVar5 != '\0') {
    if (param_4 == 1) {
      cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
      pvVar3 = local_68;
      if (cVar5 != '\0') {
        local_a8 = 0;
        uStack_a0 = local_78;
        uStack_98 = uStack_70;
        local_90 = (void *)0x0;
        lVar6 = (longlong)(int)uStack_60;
        local_88 = CONCAT44(local_88._4_4_,(int)uStack_60);
        if (lVar6 == 0) {
          local_88 = uStack_60 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_90,uStack_60 & 0xffffffff,0);
          memcpy(local_90,pvVar3,lVar6 * 2);
        }
        cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar5 == '\0') {
          param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44))
          ;
          if (param_3 != &local_a8) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,param_3,&local_a8,(int)param_1[6]);
            }
            else {
              memcpy(param_3,&local_a8,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_a8);
        }
        uVar7 = local_50;
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
          uVar7 = local_50;
        }
        goto LAB_14171a98a;
      }
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    pvVar3 = local_68;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_78._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_3 + 0x14) = uStack_70._4_4_;
    ppvVar1 = (void **)(param_3 + 3);
    uVar7 = local_50;
    if (ppvVar1 != &local_68) {
      iVar4 = (int)uStack_60;
      lVar6 = (longlong)(int)uStack_60;
      *(int *)(param_3 + 4) = (int)uStack_60;
      if ((int)uStack_60 == 0 && *(int *)((longlong)param_3 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
        uVar7 = local_50;
        if (iVar4 != 0) {
          memcpy(*ppvVar1,pvVar3,lVar6 * 2);
          uVar7 = local_50;
        }
      }
    }
    goto LAB_14171a98a;
  }
  if (param_4 == 1) {
    cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar5 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_14171ab25;
    }
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar5 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (param_3 != &local_a8) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,param_3,&local_a8,(int)param_1[6]);
        }
        else {
          memcpy(param_3,&local_a8,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_a8);
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_14171ab25:
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    if (*(int *)((longlong)param_3 + 0x24) < 0) {
      FUN_1446f8c06(param_3 + 3,0);
    }
    puVar2 = (undefined2 *)param_3[3];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  uVar7 = 0;
LAB_14171a98a:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14171ac1c FUN_14171ac1c body=1272 status=ok
// SIG undefined FUN_14171ac1c(void)

int FUN_14171ac1c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9529c0) {
    FUN_144b3d300(&DAT_14c9529c0);
    if (DAT_14c9529c0 == -1) {
      FUN_1446ddc76(&DAT_14c9529b8,"AssetObjectProperty",1);
      _Init_thread_footer(&DAT_14c9529c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9529d0) {
    FUN_144b3d300(&DAT_14c9529d0);
    if (DAT_14c9529d0 == -1) {
      FUN_1446ddc76(&DAT_14c9529c8,"SoftObjectPath",1);
      _Init_thread_footer(&DAT_14c9529d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9529e0) {
    FUN_144b3d300(&DAT_14c9529e0);
    if (DAT_14c9529e0 == -1) {
      FUN_1446ddc76(&DAT_14c9529d8,"SoftClassPath",1);
      _Init_thread_footer(&DAT_14c9529e0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9529f0) {
    FUN_144b3d300(&DAT_14c9529f0);
    if (DAT_14c9529f0 == -1) {
      FUN_1446ddc76(&DAT_14c9529e8,"StringAssetReference",1);
      _Init_thread_footer(&DAT_14c9529f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a00) {
    FUN_144b3d300(&DAT_14c952a00);
    if (DAT_14c952a00 == -1) {
      FUN_1446ddc76(&DAT_14c9529f8,"StringClassReference",1);
      _Init_thread_footer(&DAT_14c952a00);
    }
  }
  lVar13 = *(longlong *)(*param_3 + 8);
  uVar6 = *(ulonglong *)(param_2 + 0xc);
  if (uVar6 == DAT_14c9529b8) {
    local_c8 = 0;
    FUN_142817a2a(param_2,param_3,param_1,
                  (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                  param_4 + *(int *)(param_1 + 0x44));
    iVar10 = ((*(byte *)(lVar13 + 0x29) & 4) == 0) + 2;
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar6 == DAT_14c892b54) {
      iVar10 = *(int *)(param_2 + 0x40);
      iVar3 = *(int *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x34);
      local_c0 = lVar13;
      local_b8 = param_1;
      FUN_144a60fb8(&local_c0);
      bVar8 = FUN_1468fc3ba((longlong)iVar4 * (longlong)iVar10 + param_4 + iVar3 + 8,param_2,param_3
                           );
      iVar10 = (uint)bVar8 + (uint)bVar8 * 2;
      FUN_1449b192c(&local_c0);
    }
    else {
      iVar10 = 0;
      if (*(ulonglong *)(param_2 + 0xc) == (ulonglong)DAT_14c892b68) {
        uVar5 = *(uint *)(param_2 + 8);
        uVar9 = uVar5 + 1;
        iVar10 = 0;
        if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar5 >> 0xd) * 8) + 8 +
                    (ulonglong)(uVar5 & 0x1fff) * 0xc) < 1) {
          uVar9 = 0;
        }
        lVar12 = *(longlong *)
                  (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar9 >> 0xd) * 8) +
                  (ulonglong)(uVar9 & 0x1fff) * 0xc);
        if ((((lVar12 == DAT_14c9529c8) || (lVar12 == DAT_14c9529d8)) || (lVar12 == DAT_14c9529e8))
           || (lVar12 == DAT_14c9529f8)) {
          local_78 = (void *)0x0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = lVar13;
          local_90 = param_1;
          FUN_144a60fb8();
          FUN_1428295dc(&local_88,param_3);
          pvVar7 = local_78;
          local_a8 = (void *)0x0;
          lVar13 = (longlong)(int)uStack_70;
          local_c0 = 0;
          local_b8 = local_88;
          uStack_b0 = (undefined4)uStack_80;
          uStack_ac = uStack_80._4_4_;
          uStack_a0 = uStack_70 & 0xffffffff;
          if (lVar13 != 0) {
            FUN_1446dd670(&local_a8,uStack_70 & 0xffffffff,0);
            memcpy(local_a8,pvVar7,lVar13 * 2);
          }
          pvVar7 = local_a8;
          param_4 = param_4 + *(int *)(param_1 + 0x44);
          lVar13 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
          plVar1 = (longlong *)(param_4 + lVar13);
          *(longlong *)(lVar13 + param_4) = local_c0;
          puVar2 = (undefined4 *)(lVar13 + 8 + param_4);
          *puVar2 = (undefined4)local_b8;
          puVar2[1] = local_b8._4_4_;
          puVar2[2] = uStack_b0;
          puVar2[3] = uStack_ac;
          if (plVar1 != &local_c0) {
            iVar10 = (int)uStack_a0;
            lVar12 = (longlong)(int)uStack_a0;
            *(int *)(plVar1 + 4) = (int)uStack_a0;
            if ((int)uStack_a0 == 0 && *(int *)((longlong)plVar1 + 0x24) == 0) {
              *(undefined4 *)((longlong)plVar1 + 0x24) = 0;
            }
            else {
              puVar11 = (undefined8 *)(param_4 + lVar13 + 0x18);
              FUN_1446dd670(puVar11,uStack_a0 & 0xffffffff);
              if (iVar10 != 0) {
                memcpy((void *)*puVar11,pvVar7,lVar12 * 2);
              }
            }
          }
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1449b192c(&local_98);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar10 = 3;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171b116 FUN_14171b116 body=29 status=ok
// SIG undefined FUN_14171b116(void)

undefined8 FUN_14171b116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b134 FUN_14171b134 body=29 status=ok
// SIG undefined FUN_14171b134(void)

undefined8 FUN_14171b134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b152 FUN_14171b152 body=29 status=ok
// SIG undefined FUN_14171b152(void)

undefined8 FUN_14171b152(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b1ae FUN_14171b1ae body=29 status=ok
// SIG undefined FUN_14171b1ae(void)

undefined8 FUN_14171b1ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b1cc FUN_14171b1cc body=29 status=ok
// SIG undefined FUN_14171b1cc(void)

undefined8 FUN_14171b1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b1ea FUN_14171b1ea body=29 status=ok
// SIG undefined FUN_14171b1ea(void)

undefined8 FUN_14171b1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b208 FUN_14171b208 body=71 status=ok
// SIG undefined FUN_14171b208(void)

undefined8 * FUN_14171b208(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149ea6d10;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    param_1[0xe] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b250 FUN_14171b250 body=29 status=ok
// SIG undefined FUN_14171b250(void)

undefined8 FUN_14171b250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b26e FUN_14171b26e body=32 status=ok
// SIG undefined FUN_14171b26e(void)

undefined8 FUN_14171b26e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"uint16");
  return param_2;
}



// FUNCTION 14171b2dc FUN_14171b2dc body=119 status=ok
// SIG undefined FUN_14171b2dc(void)

bool FUN_14171b2dc(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) && (*plVar2 != 0)) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar2 + 0x10),*(longlong *)(param_1 + 2),1);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 14171b354 FUN_14171b354 body=57 status=ok
// SIG undefined FUN_14171b354(void)

undefined4 * FUN_14171b354(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar2 = param_1;
    }
    uVar1 = FUN_140242058(&DAT_14c952a70,lVar2);
    *param_2 = uVar1;
  }
  return param_2;
}



// FUNCTION 14171b38e FUN_14171b38e body=29 status=ok
// SIG undefined FUN_14171b38e(void)

undefined8 FUN_14171b38e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171b3ac FUN_14171b3ac body=80 status=ok
// SIG undefined FUN_14171b3ac(void)

longlong * FUN_14171b3ac(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140861e20(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14171b3fc FUN_14171b3fc body=726 status=ok
// SIG undefined FUN_14171b3fc(void)

void FUN_14171b3fc(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_84;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar17 = *(uint *)(param_1 + 9);
  if (uVar17 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar17,4);
    if (0 < (int)uVar17) {
      uVar5 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar17 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar17 = (uint)local_58;
    iVar16 = local_58._4_4_;
    iVar18 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_88 = iVar18;
        local_84 = uVar17;
        local_70 = uVar9;
        plVar8 = (longlong *)(*param_1 + (longlong)iVar16 * 0x18);
        piVar10 = (int *)(*plVar8 + 8);
        iVar18 = 1;
        uVar17 = 0;
        do {
          uVar4 = *(undefined8 *)(piVar10 + -2);
          uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
          uVar6 = (uint)uVar4 & 0xffff;
          uVar5 = ((uint)uVar4 << 0x10 | uVar6) + (int)((ulonglong)uVar4 >> 0x20) +
                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4);
          uVar17 = (uVar17 >> 2) + uVar17 * 0x40 + -0x61c88647 +
                   ((uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + *piVar10 ^ uVar5) ^ uVar17;
          iVar18 = iVar18 + *piVar10 + -1;
          piVar10 = piVar10 + 3;
        } while (0 < iVar18);
        uVar9 = (longlong)(int)uVar17 & (longlong)(int)param_1[9] - 1U;
        iVar18 = (int)uVar9;
        *(int *)((longlong)plVar8 + 0x14) = iVar18;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(plVar8 + 2) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar18 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar16;
        uVar17 = local_84 & ~(uint)uVar15;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar3 = (int)local_60[3];
        iVar16 = (int)local_70;
        lVar11 = (longlong)iVar16;
        uVar5 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar17;
        uVar9 = local_70;
        iVar18 = local_88;
        local_80 = local_60;
        local_78 = plVar1;
        if (uVar5 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar13 = iVar12;
          if (iVar12 < iVar16) {
            iVar13 = iVar16;
          }
          if (iVar12 <= iVar16) break;
          lVar14 = 0;
          while( true ) {
            iVar18 = iVar18 + 0x20;
            uVar5 = *(uint *)((longlong)plVar8 + lVar14 * 4 + lVar11 * 4 + 4);
            if (uVar5 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar13 - lVar11 == lVar14) goto LAB_14171b695;
          }
          uVar17 = 0xffffffff;
          uVar9 = (ulonglong)(iVar16 + (int)lVar14 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar16 = (iVar18 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar3);
    }
  }
LAB_14171b695:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171b6d4 FUN_14171b6d4 body=123 status=ok
// SIG undefined FUN_14171b6d4(void)

void FUN_14171b6d4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14479d316(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140496560(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14171b750 FUN_14171b750 body=271 status=ok
// SIG undefined FUN_14171b750(void)

void FUN_14171b750(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14171b860 FUN_14171b860 body=15 status=ok
// SIG undefined FUN_14171b860(void)

void FUN_14171b860(longlong param_1,undefined8 param_2)

{
  FUN_1400796d0(*(undefined8 *)(param_1 + 0x10),param_2,1);
  return;
}



// FUNCTION 14171b870 FUN_14171b870 body=102 status=ok
// SIG undefined FUN_14171b870(void)

void FUN_14171b870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])();
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = local_28;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171b8d8 FUN_14171b8d8 body=115 status=ok
// SIG undefined FUN_14171b8d8(void)

void FUN_14171b8d8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_1c);
  *(longlong *)(param_2 + 0x20) =
       (longlong)local_1c + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x60);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171b94c FUN_14171b94c body=120 status=ok
// SIG undefined FUN_14171b94c(void)

void FUN_14171b94c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar2 = *(int **)(param_2 + 0x20);
  iVar1 = *piVar2;
  local_21 = '\0';
  *(longlong *)(param_2 + 0x20) = (longlong)piVar2 + 5;
  (*(code *)(&DAT_14c962c70)[*(byte *)(piVar2 + 1)])
            (*(undefined8 *)(param_2 + 0x18),param_2,&local_21);
  if (local_21 == '\0') {
    *(longlong *)(param_2 + 0x20) =
         (longlong)iVar1 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x60);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171b9c6 FUN_14171b9c6 body=72 status=ok
// SIG undefined FUN_14171b9c6(void)

void FUN_14171b9c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *(undefined4 **)(param_2 + 0x20) = puVar3 + 3;
  uVar4 = FUN_14477b072(param_1,CONCAT44(uVar2,uVar1));
  FUN_140074afa(param_1,param_2,param_3,uVar4);
  return;
}



// FUNCTION 14171ba28 FUN_14171ba28 body=290 status=ok
// SIG undefined FUN_14171ba28(void)

void FUN_14171ba28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void **ppvVar1;
  byte *pbVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar2 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_50 = local_68;
  local_48 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_88);
  _Src = local_78;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_88._4_4_;
  *(undefined4 *)(param_3 + 2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_80._4_4_;
  ppvVar1 = (void **)(param_3 + 3);
  if (ppvVar1 != &local_78) {
    iVar3 = (int)uStack_70;
    lVar4 = (longlong)(int)uStack_70;
    *(int *)(param_3 + 4) = (int)uStack_70;
    if ((int)uStack_70 == 0 && *(int *)((longlong)param_3 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 * 2);
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171bb4c FUN_14171bb4c body=642 status=ok
// SIG undefined FUN_14171bb4c(void)

void FUN_14171bb4c(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *_Dst;
  int iVar11;
  longlong lVar12;
  size_t _Size;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar3 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar3 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar12 = *(longlong *)(param_2 + 0x30);
  puVar4 = *(ulonglong **)(param_2 + 0x38);
  bVar1 = *(byte *)(lVar12 + 0x70);
  uVar6 = (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
  plVar5 = *(longlong **)(lVar12 + 0x78);
  iVar2 = *(int *)((longlong)plVar5 + 0x34);
  _Size = (size_t)iVar2;
  iVar11 = (int)puVar4[1];
  if (iVar11 != 0) {
    if ((0 < iVar11) && ((plVar5[7] & 0x1040000000U) == 0)) {
      if ((bVar1 & 1) == 0) {
        uVar10 = *puVar4;
      }
      else {
        uVar10 = *puVar4;
        if ((uVar10 & 1) != 0) {
          uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar4;
        }
      }
      do {
        if ((plVar5[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar5 + 0x148))(plVar5,uVar10);
        }
        uVar10 = uVar10 + _Size;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    if ((bVar1 & 1) == 0) {
      if (*(int *)((longlong)puVar4 + 0xc) != 0) {
        FUN_14474d398(puVar4,0,iVar2,uVar6);
      }
    }
    else if (*(int *)((longlong)puVar4 + 0xc) != 0) {
      FUN_1468c0360(puVar4,0,iVar2,uVar6);
    }
  }
  pcVar8 = *(char **)(param_2 + 0x20);
  if (*pcVar8 != '2') {
    lVar12 = 0;
    do {
      iVar11 = (int)puVar4[1];
      iVar7 = iVar11 + 1;
      *(int *)(puVar4 + 1) = iVar7;
      if ((bVar1 & 1) == 0) {
        if (*(int *)((longlong)puVar4 + 0xc) <= iVar11) {
          FUN_14097bbd2(puVar4,iVar11,iVar2,uVar6);
          iVar7 = (int)puVar4[1];
        }
        if (iVar7 != 0) {
          uVar10 = *puVar4;
          goto LAB_14171bc18;
        }
LAB_14171bdac:
        _Dst = (void *)0x0;
      }
      else {
        if (*(int *)((longlong)puVar4 + 0xc) <= iVar11) {
          FUN_1468c03c2(puVar4,iVar11,iVar2,uVar6);
          iVar7 = (int)puVar4[1];
        }
        if (iVar7 == 0) goto LAB_14171bdac;
        uVar10 = *puVar4;
        if ((uVar10 & 1) != 0) {
          uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar4;
        }
LAB_14171bc18:
        _Dst = (void *)((longlong)iVar11 * _Size + uVar10);
      }
      if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
        (**(code **)(*plVar5 + 0x160))(plVar5,_Dst);
      }
      else {
        memset(_Dst,0,_Size);
      }
      if ((int)puVar4[1] == 0) {
        lVar9 = 0;
      }
      else {
        if ((bVar1 & 1) == 0) {
          uVar10 = *puVar4;
        }
        else {
          uVar10 = *puVar4;
          if ((uVar10 & 1) != 0) {
            uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar4;
          }
        }
        lVar9 = uVar10 + lVar12;
      }
      pbVar3 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar3 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,lVar9);
      pcVar8 = *(char **)(param_2 + 0x20);
      lVar12 = lVar12 + _Size;
    } while (*pcVar8 != '2');
  }
  *(char **)(param_2 + 0x20) = pcVar8 + (pcVar8 != (char *)0x0);
  return;
}



// FUNCTION 14171bdce FUN_14171bdce body=257 status=ok
// SIG undefined FUN_14171bdce(void)

void FUN_14171bdce(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_2 + 0x20);
  lVar3 = *plVar1;
  local_28 = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)plVar1 + 9;
  (*(code *)(&DAT_14c962c70)[*(byte *)(plVar1 + 1)])(*(undefined8 *)(param_2 + 0x18));
  *param_3 = 0;
  if (lVar3 != 0) {
    if (local_28 == 0) {
      if ((*(uint *)(lVar3 + 0xd4) >> 0xe & 1) != 0) {
        *param_3 = 0;
        param_3[1] = 0;
      }
    }
    else {
      lVar4 = *(longlong *)(local_28 + 0x10);
      if ((*(uint *)(lVar3 + 0xd4) >> 0xe & 1) == 0) {
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          *param_3 = local_28;
        }
      }
      else {
        cVar2 = FUN_144a7ff9e(lVar4,lVar3);
        lVar4 = local_28;
        if (cVar2 != '\0') {
          if ((local_28 == 0) || (DAT_14c950c29 == '\0')) {
            *param_3 = local_28;
            if (local_28 == 0) {
              param_3[1] = 0;
              lVar4 = 0;
            }
          }
          else {
            FUN_1456cec3c(local_28);
            *param_3 = lVar4;
            lVar4 = local_28;
          }
          lVar3 = FUN_144718840(lVar4,lVar3);
          param_3[1] = lVar3;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171bed0 FUN_14171bed0 body=104 status=ok
// SIG undefined FUN_14171bed0(void)

void FUN_14171bed0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_28);
  *(bool *)param_3 = local_28[0] != 0;
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171bf3a thunk_FUN_140007958 body=5 status=ok
// SIG undefined thunk_FUN_140007958(void)

void thunk_FUN_140007958(longlong *param_1,longlong param_2)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    FUN_14005eb5c();
    if (param_1[1] != 0) {
      puVar2 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar2 + 1;
      *puVar2 = 0x2e;
      FUN_14005eb5c(param_1 + 1,param_2);
    }
    if ((int)param_1[3] - 2U < 0x7fffffff) {
      puVar2 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar2 + 1;
      *puVar2 = 0x3a;
      _Src = (void *)param_1[2];
      uVar1 = *(uint *)(param_1 + 3);
      iVar3 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      lVar4 = (longlong)iVar3;
      if (*(ulonglong *)(param_2 + 0x10) <= (ulonglong)(*(longlong *)(param_2 + 8) + lVar4 * 2)) {
        FUN_140213274(param_2,lVar4);
      }
      if (1 < uVar1) {
        _Dst = *(void **)(param_2 + 8);
        memcpy(_Dst,_Src,lVar4 * 2);
        *(void **)(param_2 + 8) = (void *)((longlong)_Dst + lVar4 * 2);
      }
    }
  }
  return;
}



// FUNCTION 14171bf3f FUN_14171bf3f body=63 status=ok
// SIG undefined FUN_14171bf3f(void)

bool FUN_14171bf3f(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)((ulonglong)(param_1[1] - *param_1) >> 1);
  if (*(int *)(param_2 + 1) == iVar1) {
    if (*(int *)(param_2 + 1) == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = FUN_144a54874(*param_1,*param_2,(longlong)iVar1);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14171bf7e FUN_14171bf7e body=16 status=ok
// SIG undefined FUN_14171bf7e(void)

undefined8 FUN_14171bf7e(void)

{
  FUN_140d25081();
  return 0;
}



// FUNCTION 14171bf8e FUN_14171bf8e body=610 status=ok
// SIG undefined FUN_14171bf8e(void)

wchar_t * FUN_14171bf8e(longlong *param_1,wchar_t *param_2,longlong *param_3,int param_4,
                       undefined8 param_5,byte param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((param_6 & 1) == 0) {
    FUN_14020fad6(&local_58,param_2);
    sVar5 = wcslen(param_2);
    pwVar4 = param_2 + (int)sVar5;
LAB_14171c047:
    if (param_4 == 1) {
      cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar3 == '\0') {
          param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
          if (param_3 != &local_58) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,param_3,&local_58,(int)param_1[6]);
            }
            else {
              memcpy(param_3,&local_58,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_58);
        }
        goto LAB_14171c084;
      }
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    if (param_3 != &local_58) {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
  }
  else {
    if (*param_2 == L'\"') {
      local_68 = 0;
      uStack_60 = 0;
      pwVar4 = (wchar_t *)FUN_1401e9420(param_2,&local_68,0);
      uVar2 = uStack_60;
      lVar1 = local_68;
      if (pwVar4 != (wchar_t *)0x0) {
        if ((pwVar4 <= param_2) || (pwVar4[-1] == L'\"')) {
          local_68 = 0;
          uStack_60 = 0;
          if (local_58 == 0) {
            local_58 = lVar1;
            uStack_50 = uVar2;
          }
          else {
            FUN_1400020a8();
            local_58 = lVar1;
            uStack_50 = uVar2;
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          goto LAB_14171c047;
        }
        FUN_140047918(param_7,L"Missing terminating \'\"\' in string property value: %s",param_2);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_140047918(param_7,L"Missing opening \'\"\' in string property value: %s",param_2);
    }
    pwVar4 = (wchar_t *)0x0;
  }
LAB_14171c084:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return pwVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171c1f2 FUN_14171c1f2 body=105 status=ok
// SIG undefined FUN_14171c1f2(void)

void FUN_14171c1f2(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  if (*param_1 != 0) {
    FUN_14005eb5c();
    if (param_1[1] != 0) {
      puVar1 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
        FUN_140213274(param_2,1);
        puVar1 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar1 + 1;
      *puVar1 = 0x2e;
      FUN_14005eb5c(param_1 + 1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14171c25c FUN_14171c25c body=29 status=ok
// SIG undefined FUN_14171c25c(void)

void FUN_14171c25c(void)

{
  FUN_1402aad87();
  return;
}



// FUNCTION 14171c27a FUN_14171c27a body=157 status=ok
// SIG undefined FUN_14171c27a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14171c27a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964048) {
    FUN_144b3d300(&DAT_14c964048);
    if (DAT_14c964048 == -1) {
      DAT_14c964018 = 0;
      _DAT_14c964020 = 0;
      DAT_14c963ff8 = 0;
      uRam000000014c964000 = 0;
      _DAT_14c964024 = 0xffffffff00000080;
      _DAT_14c96402c = 0;
      DAT_14c964038 = 0;
      _DAT_14c964040 = 0;
      atexit(FUN_14282d079);
      _Init_thread_footer(&DAT_14c964048);
    }
  }
  return &DAT_14c963ff8;
}



// FUNCTION 14171c317 FUN_14171c317 body=233 status=ok
// SIG undefined FUN_14171c317(void)

undefined8 FUN_14171c317(code *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (*param_1)();
LAB_14171c33a:
  lVar4 = param_2;
  lVar2 = lVar4;
  if (*(longlong *)(lVar4 + 0x20) != 0) goto LAB_14171c3dd;
  goto LAB_14171c34d;
LAB_14171c3dd:
  param_2 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) {
    lVar2 = FUN_142840154(lVar4);
LAB_14171c34d:
    if (lVar2 != 0) {
      local_30 = *(undefined8 *)(lVar2 + 0x18);
      FUN_1400021e4(&local_30,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      local_50 = 0;
      local_58 = 0;
      local_48 = uVar1;
      FUN_14058d631(puVar3,param_3,3,2);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar1;
    }
    param_2 = *(longlong *)(lVar4 + 0x20);
  }
  goto LAB_14171c33a;
}



// FUNCTION 14171c402 FUN_14171c402 body=147 status=ok
// SIG undefined FUN_14171c402(void)

void FUN_14171c402(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      uVar2 = -*(int *)((longlong)plVar3 + 0x5c) &
              ((int)plVar3[0xb] + *(int *)((longlong)plVar3 + 0x5c)) - 1U;
      uVar1 = FUN_14001cc68((longlong)(int)(uVar2 + (uVar2 == 0)));
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      (**(code **)(*plVar3 + 0x2e8))(plVar3,uVar1,1);
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  return;
}



// FUNCTION 14171c496 FUN_14171c496 body=29 status=ok
// SIG undefined FUN_14171c496(void)

undefined8 FUN_14171c496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c4b4 FUN_14171c4b4 body=29 status=ok
// SIG undefined FUN_14171c4b4(void)

undefined8 FUN_14171c4b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c4d2 FUN_14171c4d2 body=117 status=ok
// SIG undefined FUN_14171c4d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14171c4d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964210) {
    FUN_144b3d300(&DAT_14c964210);
    if (DAT_14c964210 == -1) {
      DAT_14c9641f8 = 0;
      _DAT_14c964200 = 0;
      _DAT_14c964208 = 2;
      atexit(FUN_14283cceb);
      _Init_thread_footer(&DAT_14c964210);
    }
  }
  return &DAT_14c9641f8;
}



// FUNCTION 14171c548 FUN_14171c548 body=117 status=ok
// SIG undefined FUN_14171c548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14171c548(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964250) {
    FUN_144b3d300(&DAT_14c964250);
    if (DAT_14c964250 == -1) {
      DAT_14c964238 = 0;
      _DAT_14c964240 = 0;
      _DAT_14c964248 = 2;
      atexit(FUN_14283cd4d);
      _Init_thread_footer(&DAT_14c964250);
    }
  }
  return &DAT_14c964238;
}



// FUNCTION 14171c5bd FUN_14171c5bd body=7 status=ok
// SIG undefined FUN_14171c5bd(void)

void FUN_14171c5bd(undefined8 param_1)

{
  FUN_140442f61(param_1,0);
  return;
}



// FUNCTION 14171c5c4 thunk_FUN_140497476 body=5 status=ok
// SIG undefined thunk_FUN_140497476(void)

void thunk_FUN_140497476(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_4,param_5);
  lVar4 = *param_2;
  if ((*(byte *)(lVar4 + 0xb0) & 0x40) != 0) {
    pcVar3 = (code *)(**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x88))();
    (*pcVar3)(param_3,param_1);
    lVar4 = *param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  bVar1 = (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001404974ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)&PTR_FUN_149eb10f0 + (ulonglong)((uVar2 & 0xff) * 0x10 + (uint)bVar1 * 8)))
            (param_1,lVar4,param_3,param_4);
  return;
}



// FUNCTION 14171c5ca FUN_14171c5ca body=39 status=ok
// SIG undefined FUN_14171c5ca(void)

longlong FUN_14171c5ca(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x88))(*(longlong **)(param_1 + 0xa0),param_2,0,0);
  return param_1;
}



// FUNCTION 14171c5f2 FUN_14171c5f2 body=39 status=ok
// SIG undefined FUN_14171c5f2(void)

longlong FUN_14171c5f2(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x88))(*(longlong **)(param_1 + 0xa0),param_2,0,0);
  return param_1;
}



// FUNCTION 14171c61a FUN_14171c61a body=29 status=ok
// SIG undefined FUN_14171c61a(void)

undefined8 FUN_14171c61a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c638 FUN_14171c638 body=29 status=ok
// SIG undefined FUN_14171c638(void)

undefined8 FUN_14171c638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c656 FUN_14171c656 body=29 status=ok
// SIG undefined FUN_14171c656(void)

undefined8 FUN_14171c656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c674 FUN_14171c674 body=29 status=ok
// SIG undefined FUN_14171c674(void)

undefined8 FUN_14171c674(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c692 FUN_14171c692 body=29 status=ok
// SIG undefined FUN_14171c692(void)

undefined8 FUN_14171c692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c6b0 FUN_14171c6b0 body=71 status=ok
// SIG undefined FUN_14171c6b0(void)

undefined8 * FUN_14171c6b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70830;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xe] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171c6f7 FUN_14171c6f7 body=49 status=ok
// SIG undefined FUN_14171c6f7(void)

longlong FUN_14171c6f7(void)

{
  if (DAT_14c964940 == 0) {
    FUN_14086a14e(&DAT_14c964940,&PTR_FUN_149eb7890);
  }
  return DAT_14c964940;
}



// FUNCTION 14171c728 FUN_14171c728 body=420 status=ok
// SIG undefined FUN_14171c728(void)

undefined8 FUN_14171c728(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  local_30[3] = param_1;
  local_30[4] = FUN_1457d6ab8;
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
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_140da023c(&DAT_14c874628,&local_48,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14171c812;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14171c812:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171c8cd FUN_14171c8cd body=49 status=ok
// SIG undefined FUN_14171c8cd(void)

longlong FUN_14171c8cd(void)

{
  if (DAT_14c9649f0 == 0) {
    FUN_14086a14e(&DAT_14c9649f0,&PTR_FUN_149eb8520);
  }
  return DAT_14c9649f0;
}



// FUNCTION 14171c8fe FUN_14171c8fe body=49 status=ok
// SIG undefined FUN_14171c8fe(void)

longlong FUN_14171c8fe(void)

{
  if (DAT_14c964b10 == 0) {
    FUN_1409ce572(&DAT_14c964b10,&PTR_FUN_149eb97f0);
  }
  return DAT_14c964b10;
}



// FUNCTION 14171c92f FUN_14171c92f body=49 status=ok
// SIG undefined FUN_14171c92f(void)

longlong FUN_14171c92f(void)

{
  if (DAT_14c964b28 == 0) {
    FUN_14086a14e(&DAT_14c964b28,&PTR_FUN_149eb9928);
  }
  return DAT_14c964b28;
}



// FUNCTION 14171c960 FUN_14171c960 body=93 status=ok
// SIG undefined FUN_14171c960(void)

void FUN_14171c960(longlong param_1,longlong *param_2)

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
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14171c9bd FUN_14171c9bd body=49 status=ok
// SIG undefined FUN_14171c9bd(void)

longlong FUN_14171c9bd(void)

{
  if (DAT_14c964c38 == 0) {
    FUN_14086a14e(&DAT_14c964c38,&PTR_FUN_149ebbfe8);
  }
  return DAT_14c964c38;
}



// FUNCTION 14171c9ee FUN_14171c9ee body=49 status=ok
// SIG undefined FUN_14171c9ee(void)

longlong FUN_14171c9ee(void)

{
  if (DAT_14c964c50 == 0) {
    FUN_1409ce572(&DAT_14c964c50,&PTR_FUN_149ebc100);
  }
  return DAT_14c964c50;
}



// FUNCTION 14171ca20 FUN_14171ca20 body=257 status=ok
// SIG undefined FUN_14171ca20(void)

undefined8 FUN_14171ca20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  longlong lVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14171cafe:
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14171cafe;
      }
    }
    lVar5 = param_1[1];
    if (lVar5 == 0) {
      uVar4 = 0;
      goto LAB_14171ca42;
    }
  }
  uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(undefined1 *)(lVar5 + 0x18));
LAB_14171ca42:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14171cb22 FUN_14171cb22 body=22 status=ok
// SIG undefined FUN_14171cb22(void)

undefined8 FUN_14171cb22(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4();
  return param_2;
}


